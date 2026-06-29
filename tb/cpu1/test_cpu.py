import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer
from cocotb.triggers import ReadOnly
def binary_to_hex(binary_str):
    hex_str=hex(int(binary_str, 2))[2:]
    hex_str = hex_str.zfill(8)  # Pad with zeros to ensure it's 8 characters long
    return hex_str.upper()

def hex_to_binary(hex_str):
    binary_str = bin(int(hex_str, 16))[2:]
    binary_str = binary_str.zfill(32)  # Pad with zeros to ensure it's 32 characters long
    return binary_str.upper()


async def cpu_reset(dut):
    # Init and reset
    dut.rst_n.value = 0
    await RisingEdge(dut.clk)     # Wait for a clock edge after reset
    dut.rst_n.value = 1           # De-assert reset
    await RisingEdge(dut.clk) 
    
 
@cocotb.test()
async def mem3_initial_test(dut):
    cocotb.start_soon(Clock(dut.clk, 1, units="ns").start())

    # 🔥 THIS IS THE FIX
    await Timer(1, unit="ns")   # wait for Verilog initial block

    val = int(dut.data_memory.mem[3].value)
    

    assert val == 0x12345678  # or whatever is in your hex file
    
        # Wait for a clock edge after reset



@cocotb.test()


async def cpu_initialization_test(dut):

    dut.pc_source.value = 0  # PC + 4
    
    cocotb.start_soon(Clock(dut.clk, 1, units="ns").start())
    
    await Timer(1, unit="ns")   # let it settle
    
    
    await RisingEdge(dut.clk)
    
    await Timer(1, unit="ns")
    
    
    


    await cpu_reset(dut)
    

    await RisingEdge(dut.clk)  
    # Wait for a clock edge after reset
    
    
    
    # Check the value of reg x18
    val = int(dut.regfile.registers[18].value)
    assert val == 0xDEADBEEF


    

    

   

    ##################
    # STORE WORD TEST 
    # sw x18 0xC(x0)
    ##################
    print("\n\nTESTING SW\n\n")
    test_address = int(0xC / 4) #mem is byte adressed but is made out of words in the eyes of the software
    # The second instruction for the test in imem.hex stores the data from
    # x18 (that happens to be 0xDEADBEEF from the previous LW test) @ adress 0x0000000C 
       # Wait for a clock edge after reset
    # First, let's check the inital value
   
    
    for i in range(6):
        print(f"mem[{i}] =", hex(int(dut.data_memory.mem[i].value)))
    print("mem[3] =", hex(int(dut.data_memory.mem[3].value)))
   

    # Wait a clock cycle for the instruction to execute
    await RisingEdge(dut.clk)
    
    # Check the value of mem[0xC]
    assert int(dut.data_memory.mem[test_address].value) == 0xDEADBEEF

    expected_result = (0xDEADBEEF + 0x00000AAA) & 0xFFFFFFFF
    await RisingEdge(dut.clk)
    assert int(dut.regfile.registers[19].value) == 0x00000AAA
    await RisingEdge(dut.clk)
    assert int(dut.regfile.registers[20].value) == expected_result
    assert int(dut.regfile.registers[18].value) == 0xDEADBEEF
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    print(dut.regfile.registers[21].value)
    
    expected_result_and = (0xDEADBEEF & expected_result) & 0xFFFFFFFF
    assert int(dut.regfile.registers[21].value) == expected_result_and




@cocotb.test()
async def cpu_jal_test(dut):

    cocotb.start_soon(Clock(dut.clk, 1, unit="ns").start())

    await cpu_reset(dut)

    # Wait until the CPU FETCHES the JAL instruction
    while not (
        int(dut.pc.value) == 0x20 and
        int(dut.instruction.value) == 0x00C000EF
    ):
        await RisingEdge(dut.clk)

    # Wait one cycle for the JAL to execute
    
    
    await ReadOnly()

    print("\nJAL RESULT")
    print("PC =", hex(int(dut.pc.value)))
    print("X1 =", hex(int(dut.regfile.registers[1].value)))

    assert int(dut.regfile.registers[1].value) == 0x24
    assert int(dut.pc.value) == 0x2C

    print("\n testing addi")
    await RisingEdge(dut.clk) 
    await RisingEdge(dut.clk) # addi x26 x0 0x1AB
    await ReadOnly()

    print("INSTRUCTION", hex(int(dut.instruction.value)))


    assert int(dut.instruction.value) == 0x1AB38D13
    assert not int(dut.regfile.registers[26].value) == 0xDEADC09A

    await RisingEdge(dut.clk) # addi x26 x7 0x1AB
    await ReadOnly()
    print("INSTRUCTION", hex(int(dut.instruction.value)))
    print("value at reg 26", hex(int(dut.regfile.registers[26].value)))
    assert int(dut.instruction.value) == 0xF2130C93
    assert int(dut.regfile.registers[26].value) == 0xDEADC09A

    await RisingEdge(dut.clk)
    await ReadOnly() # addi x25 x6 0xF21

    print("value at reg 25", hex(int(dut.regfile.registers[25].value)))
    print("value at reg 6", hex(int(dut.regfile.registers[6].value)))

    assert int(dut.regfile.registers[25].value) == 0x7F4FD38B

    print("\n testing andi")

    await RisingEdge(dut.clk) 
    await RisingEdge(dut.clk) 
    await RisingEdge(dut.clk) # andi x18 x18 0xAAA
    await ReadOnly() 

    print("INSTRUCTION", hex(int(dut.instruction.value)))
    

    assert int(dut.instruction.value) == 0xAAA94913

    await RisingEdge(dut.clk) 
    await ReadOnly()

    assert int(dut.regfile.registers[18].value) == 0x21524445
    await RisingEdge(dut.clk) 
    await ReadOnly()
    # xori x19 x18 0x000    
    print("value of reg 19", hex(int(dut.regfile.registers[19].value)))
    print("value of reg 18", hex(int(dut.regfile.registers[18].value)))

    assert (
        int(dut.regfile.registers[19].value) ==
        int(dut.regfile.registers[18].value)
    )

    print("\n\nTesting ORI\n")

    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    await ReadOnly()

    print("value of reg 19", hex(int(dut.regfile.registers[19].value)))

    assert int(dut.regfile.registers[19].value) == 0x215244FF


    print("\nTesting ANDI\n")

    await RisingEdge(dut.clk)
    await ReadOnly()

    print("value of reg 18", hex(int(dut.regfile.registers[18].value)))

    assert int(dut.regfile.registers[18].value) == 0x000000AA


    print("\nTesting XORI\n")

    await RisingEdge(dut.clk)
    await ReadOnly()

    print("value of reg 18", hex(int(dut.regfile.registers[18].value)))

    assert int(dut.regfile.registers[18].value) == 0x215244F0


    print("\nTesting SLLI\n")

    await RisingEdge(dut.clk)
    await ReadOnly()

    print("value of reg 20", hex(int(dut.regfile.registers[20].value)))

    assert int(dut.regfile.registers[20].value) == 0x7AB72664


    print("\nTesting SRLI\n")

    await RisingEdge(dut.clk)
    await ReadOnly()

    print("value of reg 20", hex(int(dut.regfile.registers[20].value)))

    assert int(dut.regfile.registers[20].value) == 0x1EADC999


    print("\nTesting SRAI\n")

    await RisingEdge(dut.clk)
    await ReadOnly()

    print("value of reg 20", hex(int(dut.regfile.registers[20].value)))

    print("\n\n===== Testing Branch Instructions =====\n")

    # addi x1 x0 5
    await RisingEdge(dut.clk)
    await ReadOnly()
    print("x1 =", hex(int(dut.regfile.registers[1].value)))
    assert int(dut.regfile.registers[1].value) == 0x5

    # addi x2 x0 10
    await RisingEdge(dut.clk)
    await ReadOnly()
    print("x2 =", hex(int(dut.regfile.registers[2].value)))
    assert int(dut.regfile.registers[2].value) == 0xA


    # ---------------- BEQ ----------------
    print("\nTesting BEQ (NOT taken)\n")

    await RisingEdge(dut.clk)   # beq x1 x2
    await RisingEdge(dut.clk)   # addi x3 x0 1 executes
    await ReadOnly()

    print("value of reg 3", hex(int(dut.regfile.registers[3].value)))
    assert int(dut.regfile.registers[3].value) == 0x1


    # ---------------- BNE ----------------
    print("\nTesting BNE (TAKEN)\n")

    await RisingEdge(dut.clk)   # bne x1 x2
    await RisingEdge(dut.clk)   # branch taken → skip addi
    await ReadOnly()

    print("value of reg 3", hex(int(dut.regfile.registers[3].value)))
    assert int(dut.regfile.registers[3].value) == 0x1


    # ---------------- BLT ----------------
    print("\nTesting BLT (TAKEN)\n")

    await RisingEdge(dut.clk)   # blt x1 x2
    await RisingEdge(dut.clk)   # skipped addi x4 x0 1
    await ReadOnly()

    print("value of reg 4", hex(int(dut.regfile.registers[4].value)))
    assert int(dut.regfile.registers[4].value) == 0x2


    # ---------------- BGE ----------------
    print("\nTesting BGE (NOT taken)\n")

    await RisingEdge(dut.clk)   # bge x1 x2
    await RisingEdge(dut.clk)   # addi x4 x0 2 executes
    await ReadOnly()

    print("value of reg 4", hex(int(dut.regfile.registers[4].value)))
    assert int(dut.regfile.registers[4].value) == 0x2


    # ---------------- BLTU ----------------
    print("\nTesting BLTU (TAKEN)\n")

    await RisingEdge(dut.clk)   # bltu x1 x2
    await RisingEdge(dut.clk)   # skipped addi x5 x0 1
    await ReadOnly()

    print("value of reg 5", hex(int(dut.regfile.registers[5].value)))
    assert int(dut.regfile.registers[5].value) == 0x2


    # ---------------- BGEU ----------------
    print("\nTesting BGEU (NOT taken)\n")

    await RisingEdge(dut.clk)   # bgeu x1 x2
    await RisingEdge(dut.clk)   # addi x5 x0 2 executes
    await ReadOnly()

    print("value of reg 5", hex(int(dut.regfile.registers[5].value)))
    assert int(dut.regfile.registers[5].value) == 0x2


            