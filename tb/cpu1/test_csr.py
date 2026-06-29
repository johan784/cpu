import cocotb
import random

from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer
from copy import deepcopy

RW_REGS = [0x7C0]


@cocotb.test()
async def test_csr_file(dut):
    """Basic CSR read/write and reset tests"""

    cocotb.start_soon(
        Clock(dut.clk, 10, units="ns").start()
    )

    # Apply reset
    dut.rst.value = 1
    dut.write_enable.value = 0
    await RisingEdge(dut.clk)

    dut.rst.value = 0
    await RisingEdge(dut.clk)

    def get_csr_value(addr):
        if addr == 0x7C0:
            return int(dut.flush_cache.value)
        return 0

    for addr in RW_REGS:

        # ======================
        # SIMPLE WRITE TEST
        # ======================

        dut.write_enable.value = 1
        dut.write_data.value = 0xDEADBEEF
        dut.address.value = addr
        dut.f3.value = 0b001  # CSRRW

        await RisingEdge(dut.clk)
        await Timer(2, units="ns")

        assert get_csr_value(addr) == 0xDEADBEEF
        assert int(dut.read_data.value) == 0xDEADBEEF

        # ======================
        # WRITE ENABLE TEST
        # ======================

        dut.write_enable.value = 0
        dut.write_data.value = 0x12345678

        await RisingEdge(dut.clk)
        await Timer(2, units="ns")

        assert get_csr_value(addr) == 0xDEADBEEF

        # ======================
        # RANDOMIZED TEST
        # ======================

        dut.write_enable.value = 1

        for _ in range(1000):

            init_csr_value = deepcopy(get_csr_value(addr))

            wd = random.randint(0, 0xFFFFFFFF)
            f3 = random.randint(0, 0b111)

            dut.write_data.value = wd
            dut.f3.value = f3

            await RisingEdge(dut.clk)
            await Timer(2, units="ns")

            expected = init_csr_value

            if f3 in [0b001, 0b101]:
                expected = wd

            elif f3 in [0b010, 0b110]:
                expected = init_csr_value | wd

            elif f3 in [0b011, 0b111]:
                expected = init_csr_value & (~wd & 0xFFFFFFFF)

            actual = int(dut.read_data.value)

            if f3 in [0b000, 0b100]:
                assert actual == init_csr_value
            else:
                assert actual == expected

        # ======================
        # RESET TEST
        # ======================

        dut.write_enable.value = 1
        dut.write_data.value = 0xDEADBEEF
        dut.f3.value = 0b001

        await RisingEdge(dut.clk)

        dut.rst.value = 1
        await RisingEdge(dut.clk)

        dut.rst.value = 0
        await RisingEdge(dut.clk)

        assert int(dut.flush_cache.value) == 0


@cocotb.test()
async def test_cache_flush_behavior(dut):
    """Verify flush_flag pulse behavior"""

    cocotb.start_soon(
        Clock(dut.clk, 10, units="ns").start()
    )

    dut.rst.value = 1
    await RisingEdge(dut.clk)

    dut.rst.value = 0
    await RisingEdge(dut.clk)

    # ======================
    # Initially low
    # ======================

    assert int(dut.flush_flag.value) == 0

    # ======================
    # Write all 1s except LSB
    # ======================

    dut.write_enable.value = 1
    dut.write_data.value = 0xFFFFFFFE
    dut.address.value = 0x7C0
    dut.f3.value = 0b001

    await RisingEdge(dut.clk)
    await Timer(2, units="ns")

    assert int(dut.flush_cache.value) == 0xFFFFFFFE
    assert int(dut.flush_flag.value) == 0

    # ======================
    # Write LSB = 1
    # ======================

    dut.write_data.value = 0x00000001

    await RisingEdge(dut.clk)
    await Timer(2, units="ns")

    assert int(dut.flush_cache.value) == 0x00000001
    assert int(dut.flush_flag.value) == 1

    # ======================
    # Auto-clear next cycle
    # ======================

    await RisingEdge(dut.clk)
    await Timer(2, units="ns")

    assert int(dut.flush_cache.value) == 0
    assert int(dut.flush_flag.value) == 0

    dut.write_enable.value = 0