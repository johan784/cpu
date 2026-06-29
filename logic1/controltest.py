import cocotb
from cocotb.triggers import Timer
   


async def set_unknown (dut) :
    await Timer(1, unit='ns')
    dut.op.value = 1
    await Timer(1, unit='ns')

@cocotb.test()
async def control_test(dut) :
    await set_unknown(dut)
    dut.op.value = 0b0000011
    await Timer(1, unit='ns')
    assert dut.op.value == 0b0000011
    await Timer(1, unit='ns')
    assert dut.alu_control.value == "000"
    assert dut.imm_source.value == "00"
    assert dut.mem_write.value == "0"
    assert dut.reg_write.value == "1"

@cocotb.test()
async def sw_control_test(dut):
    await set_unknown(dut)
    # TEST CONTROL SIGNALS FOR SW
    await Timer(10, units="ns")
    dut.op.value = 0b0100011 #sw
    await Timer(1, units="ns")
    assert dut.alu_control.value == "000"
    assert dut.imm_source.value == "01"
    assert dut.mem_write.value == "1"
    assert dut.reg_write.value == "0"

@cocotb.test()
async def r_add_control(dut):
    await set_unknown(dut)
    # TEST CONTROL SIGNALS FOR R-TYPE ADD
    await Timer(10, units="ns")
    dut.op.value = 0b0110011 #R-type
    dut.func3.value = 0b000
    dut.func7.value = 0b0000000
    await Timer(1, units="ns")
    assert dut.alu_control.value == "000"
    assert dut.imm_source.value == "00"
    assert dut.mem_write.value == "0"
    assert dut.reg_write.value == "1"
    assert dut.alu_source.value == "0"
    assert dut.write_back_source.value == "00"


@cocotb.test()
async def addi_control_test(dut):
    await set_unknown(dut)
    # TEST CONTROL SIGNALS FOR ADDI
    await Timer(10, units="ns")
    dut.op.value = 0b0010011 #I-type
    dut.func3.value = 0b000
    await Timer(1, units="ns")
    assert dut.alu_control.value == "000"
    assert dut.imm_source.value == "00"
    assert dut.mem_write.value == "0"
    assert dut.reg_write.value == "1"
    assert dut.alu_source.value == "1"
    assert dut.write_back_source.value == "00"
    
