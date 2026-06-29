import cocotb
from cocotb.triggers import Timer
import random


@cocotb.test()
async def add_test(dut):
    await Timer(1, unit="ns")
    dut.alu_control.value = 0b000
    for _ in range(1000):
        s1 = random.randint(0,0xFFFFFFFF)
        s2 = random.randint(0,0xFFFFFFFF)
        dut.s1.value = s1
        dut.s2.value = s2
        # We mask expected to not take account of overflows
        expected = (s1 + s2) & 0xFFFFFFFF
        # Await 1 ns for the infos to propagate
        await Timer(1, units="ns")
        assert int(dut.alu_result.value) == expected

@cocotb.test()
async def default_test(dut):
    await Timer(1, units="ns")
    dut.alu_control.value = 0b111
    src1 = random.randint(0,0xFFFFFFFF)
    src2 = random.randint(0,0xFFFFFFFF)
    dut.s1.value = src1
    dut.s2.value = src2
    expected = 0
    # Await 1 ns for the infos to propagate
    await Timer(1, unit="ns")
    assert int(dut.alu_result.value) == expected

@cocotb.test()
async def zero_test(dut):
    await Timer(1, unit="ns")
    dut.alu_control.value = 0b000
    dut.s1.value = 123
    dut.s2.value = -123
    await Timer(1, unit="ns")
    print(int(dut.alu_result.value))
    assert int(dut.zero.value) == 1
    assert int(dut.alu_result.value) == 0

@cocotb.test()
async def slt_test(dut):
    await Timer(1, units="ns")
    dut.alu_control.value = 0b101
    for _ in range(1000):
        s1 = random.randint(0,0xFFFFFFFF)
        s2 = random.randint(0,0xFFFFFFFF)
        dut.s1.value = s1
        dut.s2.value = s2

        await Timer(1, units="ns")

        # if scr1 pos, src2 pos
        if s1 >> 31 == 0 and s2 >> 31 == 0:
            expected = int(s1 < s2)
        # if scr1 pos, src2 neg
        elif s1 >> 31 == 0 and s2 >> 31 == 1:
            expected = int(s1 < (s2 - (1<<32)))
        # if scr1 neg, src2 pos
        elif s1 >> 31 == 1 and s2 >> 31 == 0:
            expected = int((s1 - (1<<32)) < s2)
        # if scr1 neg, src2 neg
        elif s1 >> 31 == 1 and s2 >> 31 == 1:
            expected = int((s1 - (1<<32)) < (s2 - (1<<32)))

        assert int(dut.alu_result.value) == expected
        assert dut.alu_result.value == 31*"0" + str(int(dut.alu_result.value))
