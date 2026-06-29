@cocotb.test()
async def cpu_branch_test(dut):
    cocotb.start_soon(Clock(dut.clk, 1, units="ns").start())
    await Timer(1, unit="ns")   # let it settle
    await cpu_reset(dut)

    await RisingEdge(dut.clk)
    assert int(dut.regfile.registers[1].value) == 0xDEADBEEF
    await RisingEdge(dut.clk)
    assert int(dut.regfile.registers[2].value) == 0xDEADBEEF
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    assert int(dut.data_memory.mem[3].value) == 0x12345678
    await RisingEdge(dut.clk)
    assert int(dut.regfile.registers[3].value) == 0xDEADBEEF
    print(int(dut.regfile.registers[3].value))

    