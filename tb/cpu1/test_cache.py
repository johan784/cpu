from tracemalloc import start

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer
from cocotbext.axi import AxiBus, AxiRam
import random

# FSM STATES
IDLE                = 0b000
SENDING_WRITE_REQ   = 0b001
SENDING_WRITE_DATA  = 0b010
WAITING_WRITE_RES   = 0b011
SENDING_READ_REQ    = 0b100
RECEIVING_READ_DATA = 0b101

# CLOCKS
AXI_PERIOD = 10
CPU_PERIOD = 10

# MEMORY
SIZE = 4096
CACHE_SIZE = 128


# =========================
# RESET FUNCTION
# =========================
async def reset(dut):
    await RisingEdge(dut.clk)

    dut.rst_n.value = 0
    dut.cpu_write_enable.value = 0
    dut.cpu_read_enable.value = 0
    dut.cpu_address.value = 0
    dut.cpu_write_data.value = 0
    dut.cpu_byte_enable.value = 0

    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)

    dut.rst_n.value = 1

    print("Reset done")


# =========================
# HELPERS
# =========================
def generate_random_bytes(length):
    return bytes([random.randint(0, 255) for _ in range(length)])


def read_cache(cache_data, line):
    l = 127 - line
    return int(str(cache_data.value[32*l : (32*l)+32]), 2)


def dump_cache(cache_data, line):
    if line == "*":
        for i in range(128):
            l = 127 - i
            print(hex(int(str(cache_data.value[32*l : (32*l)+32]), 2)))
    else:
        print(hex(int(str(cache_data.value[32*line : (32*line)+32]), 2)))


# =========================
# MAIN TEST
# =========================
@cocotb.test()
async def test_cache(dut):

    # -------------------------
    # CLOCKS
    # -------------------------
    cocotb.start_soon(Clock(dut.clk, CPU_PERIOD, units="ns").start())
    cocotb.start_soon(Clock(dut.aclk, AXI_PERIOD, units="ns").start())

    # -------------------------
    # AXI RAM (SLAVE)
    # -------------------------
    axi_ram_slave = AxiRam(
        AxiBus.from_prefix(dut, "axi"),
        dut.aclk,
        dut.rst_n,
        size=SIZE,
        reset_active_level=False
    )

    # -------------------------
    # RESET
    # -------------------------
    await RisingEdge(dut.clk)
    await reset(dut)

    # -------------------------
    # MEMORY INIT (OPTIONAL)
    # -------------------------
    mem_golden_ref = []

    for address in range(0, SIZE, 4):
        word = generate_random_bytes(4)
        axi_ram_slave.write(address, word)
        mem_golden_ref.append(word)

    # -------------------------
    # TEST 1: READ MISS
    # -------------------------
    dut.cpu_address.value = 0x00000000
    dut.cpu_read_enable.value = 1

    await Timer(1, units="ns")

    # Cache should stall
    assert dut.cache_system.cache_stall.value == 1

    # FSM should move to read request
    assert dut.cache_system.next_state.value == SENDING_READ_REQ

    # Move FSM
    await RisingEdge(dut.aclk)
    await Timer(1, units="ns")

    # Check AXI request
    assert dut.cache_system.state.value == SENDING_READ_REQ
    assert dut.axi_arvalid.value == 1
    assert dut.axi_araddr.value == 0x00000000

    assert dut.axi_arlen.value == (CACHE_SIZE) - 1 
    assert dut.axi_arsize.value == 0b010
    assert dut.axi_arburst.value ==0b01 # burst length in words

    # -------------------------
    # TEST 2: RECEIVE DATA
    # -------------------------
    i = 0

    while i < CACHE_SIZE:
        if dut.axi_rvalid.value == 1 and dut.axi_rready.value == 1:
            i += 1
        await RisingEdge(dut.aclk)

    # -------------------------
    # FINAL CHECK
    # -------------------------
    await Timer(1, units="ns")

    assert dut.cache_system.state.value == IDLE
    assert dut.cache_system.cache_stall.value == 0

    print("READ MISS TEST PASSED")

    dut.cpu_read_enable.value = 0
    await RisingEdge(dut.clk)

    dut.cpu_address.value = 0x00000000
    dut.cpu_read_enable.value =1



    await RisingEdge(dut.clk)
    await Timer(1, units="ns")
                
    assert dut.cache_system.cache_stall.value ==0
    
    assert dut.cache_system.state.value == IDLE
    assert dut.axi_arvalid.value ==0

    print("READ HIT TEST PASSED")

    print(" now verifiying cache line fill ")

    full_cache = dut.cache_system.cache_data.value


    for i in range( CACHE_SIZE): 

        addr = i*4

        expected_bytes = axi_ram_slave.read(addr,4)
        expected = int.from_bytes(expected_bytes, "little")   



        lsb =  i*32
        msb = lsb + 31

        actual = int(full_cache[msb:lsb])




        assert actual == expected, ( 
            f"Mismatch at index {i}: "
            f"expected {hex(expected)}, got {hex(actual)}"
        )

    dut.cpu_read_enable.value = 0
    await RisingEdge(dut.clk)

    dut.cpu_address.value = 0x0000000
    dut.cpu_write_data.value =0xDEADBEEF
    dut.cpu_byte_enable.value = 0b1111
    dut.cpu_write_enable.value =1

    await RisingEdge(dut.clk)
    dut.cpu_write_enable.value =0

    dut.cpu_address.value = 0x00001000
    dut.cpu_write_data.value = 0xCAFEBABE
    dut.cpu_byte_enable.value = 0b1111
    dut.cpu_write_enable.value =1

    await RisingEdge(dut.clk)


    assert dut.cache_system.cache_stall.value ==1
    assert dut.cache_system.next_state.value == SENDING_WRITE_REQ

    await RisingEdge(dut.aclk)

    assert  dut.cache_system.state.value == SENDING_WRITE_REQ
    assert dut.axi.awvalid.value == 1

    await RisingEdge(dut.aclk)

    for i in range(CACHE_SIZE):
        if dut.axi.wvalid.value == 1 and dut.axi.wready.value == 1:
            i+=1
                
        await RisingEdge(dut.aclk)
        


    while not dut.axi_bvalid.value:
        await RisingEdge(dut.aclk)
        assert dut.cache_system.state.value == WAITING_WRITE_RES


    await RisingEdge(dut.aclk) 
    assert dut.cache_system.state.value == SENDING_READ_REQ
    assert dut.axi_arvalid.value ==1

    

    count =0
    while count < CACHE_SIZE: 
        if dut.axi_rvalid.value and dut.axi_rready.value :
                count +=1
        await RisingEdge(dut.aclk)

    await Timer(1, unit ="ns")

    print("Before eviction:")
    print("cache_data[0] =", hex(int(dut.cache_system.cache_data.value[31:0])))
    print("dirty =", int(dut.cache_system.cache_dirty.value))
    print("hit =", int(dut.cache_system.hit.value))

    assert dut.cache_system.state.value == IDLE
    assert dut.cache_system.cache_stall.value == 0

    written_back = axi_ram_slave.read (0x00000000, 4)

    print("Written back data:", hex(int.from_bytes(written_back, "little")))
    assert int.from_bytes(written_back, "little") == 0xDEADBEEF


        











