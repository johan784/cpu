import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge
from cocotbext.axi import AxiBus, AxiRam


@cocotb.test()
async def run_cpu(dut):

    # ==========================
    # CLOCK
    # ==========================
    cocotb.start_soon(
        Clock(dut.clk, 10, units="ns").start()
    )

    # ==========================
    # RESET
    # ==========================
    dut.rst_n.value = 0

    for _ in range(10):
        await RisingEdge(dut.clk)

    dut.rst_n.value = 1

    # ==========================
    # AXI RAM
    # ==========================
    axi_ram = AxiRam(
        AxiBus.from_prefix(dut, "m_axi_mem"),
        dut.m_axi_mem_aclk,   # keep this as whatever you're currently testing
        reset=None,
        size=2**16
    )

    print("AXI RAM created")

    # ==========================
    # LOAD PROGRAM
    # ==========================
    address = 0

    with open("test_imemory.hex") as f:
        for line in f:

            line = line.split("//")[0].strip()

            if not line:
                continue

            value = int(line, 16)

            axi_ram.write(
                address,
                value.to_bytes(4, byteorder="little")
            )

            address += 4

    print(f"Loaded {address} bytes")


    address = 0x1000
    with open("test_memory.hex") as f:
        for line in f:

            line = line.split("//")[0].strip()

            if not line:
                continue

            value = int(line, 16)

            axi_ram.write(
                address,
                value.to_bytes(4, byteorder="little")
            )

            address += 4

    print(f"Loaded {address} bytes")

    # ==========================
    # MONITOR
    # ==========================
    last_state = -1
    cache_writes = 0

    while int(dut.core.pc.value) < 0x10:

        await RisingEdge(dut.clk)


        if dut.core.mem_write.value: 
            print("STORE DETECTED")
        state = int(dut.core.instr_cache.state.value)

        print( "addr=", hex(int(dut.core.alu_result.value)))

        print ( "data = ", hex(int(dut.core.read_reg2.value)))

        print("CACHE_WRITE_ENABLE =",

        int(dut.core.data_cache.write_enable.value))

       

        

     
    # ==========================
    # FINAL SNAPSHOT
    # ==========================
    print("\n===== FINAL STATUS =====")

    print(
        "PC          =",
        hex(int(dut.core.pc.value))
    )

    print(
        "i_state     =",
        int(dut.core.instr_cache.state.value)
    )

    print(
        "i_stall     =",
        int(dut.core.i_cache_stall.value)
    )

    print(
        "ARVALID     =",
        int(dut.m_axi_mem_arvalid.value)
    )

    print(
        "ARREADY     =",
        int(dut.m_axi_mem_arready.value)
    )

    print(
        "RVALID      =",
        int(dut.m_axi_mem_rvalid.value)
    )

    print(
        "RREADY      =",
        int(dut.m_axi_mem_rready.value)
    )

    print(
        "RLAST       =",
        int(dut.m_axi_mem_rlast.value)
    )

    print("========================\n")


    print(dir(dut.core.instr_cache))


    print (  
        "CACHE WRITES = ",
        cache_writes
    ) 

    print("PC=", hex(int(dut.core.pc.value)))
    print("x3=", hex(int(dut.core.regfile.registers[3].value)))
    print("x18=", hex(int(dut.core.regfile.registers[18].value)))

    data = axi_ram.read(0x100C,4)
    print("mem[100C] =", data.hex())

    
        # ==========================
    # FLUSH CACHE TEST
    # ==========================
    print("\n===== FLUSH TEST =====")

    # Force cache into dirty state
    dut.core.data_cache.cache_valid.value = 1
    dut.core.data_cache.cache_dirty.value = 1

    write_beats = 0
    read_requests = 0

    # Trigger flush manually
    dut.core.csr.flush_cache.value = 1
    await RisingEdge(dut.clk)
    

    print("Flush triggered")

    timeout = 500

    while timeout > 0:

        await RisingEdge(dut.clk)

        timeout -= 1

        state = int(dut.core.data_cache.state.value)

        if (
            dut.m_axi_mem_wvalid.value
            and dut.m_axi_mem_wready.value
        ):
            write_beats += 1

        if dut.m_axi_mem_arvalid.value:
            read_requests += 1

        # flush finished
        if (
            state == 0
            and int(dut.core.data_cache.csr_flush_status.value) == 0
        ):
            break

    print("WRITE BEATS =", write_beats)
    print("READ REQUESTS =", read_requests)
    print(
        "CSR FLUSH STATUS =",
        int(dut.core.data_cache.csr_flush_status.value)
    )
    print(
        "CACHE STATE =",
        int(dut.core.data_cache.state.value)
    )

    assert (
        int(dut.core.data_cache.csr_flush_status.value) == 0
    ), "Flush status never cleared"

    assert (
        int(dut.core.data_cache.state.value) == 0
    ), "Cache never returned to IDLE"

    assert (
        write_beats > 0
    ), "Flush produced no AXI writes"

    assert (
        read_requests == 0
    ), "Flush incorrectly issued read requests"

    print("===== FLUSH TEST PASSED =====\n")