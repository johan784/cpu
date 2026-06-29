# test_external_req_arbitrer.py

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer
from cocotbext.axi import AxiBus, AxiRam, AxiMaster

# https://github.com/alexforencich/cocotbext-axi

# CACHE STATES CST
IDLE                = 0b000
SENDING_WRITE_REQ   = 0b001
SENDING_WRITE_DATA  = 0b010
WAITING_WRITE_RES   = 0b011
SENDING_READ_REQ    = 0b100
RECEIVING_READ_DATA = 0b101

@cocotb.test()
async def main_test(dut):
    PERIOD = 10
    MEM_SIZE = 4096
    cocotb.start_soon(Clock(dut.aclk, PERIOD, units="ns").start())

    axi_ram_slave = AxiRam(
        AxiBus.from_prefix(dut, "m_axi"),
        dut.aclk,
        dut.rst_n,
        reset_active_level=False,
        size=MEM_SIZE
    )
    i_cache_master = AxiMaster(
        AxiBus.from_prefix(dut, "s_axi_instr"),
        dut.aclk,
        dut.rst_n,
        reset_active_level=False
    )
    d_cache_master = AxiMaster(
        AxiBus.from_prefix(dut, "s_axi_data"),
        dut.aclk,
        dut.rst_n,
        reset_active_level=False
    )

    dut.rst_n.value = 0
    await RisingEdge(dut.aclk)
    await RisingEdge(dut.aclk)
    dut.rst_n.value = 1
    await RisingEdge(dut.aclk)

    await RisingEdge(dut.aclk)
    # init states to IDLE
    dut.d_cache_state.value = IDLE
    dut.i_cache_state.value = IDLE
    await Timer(1, units="ns")

   
    dut.d_cache_state.value = SENDING_WRITE_REQ
    await Timer(1, units="ns")
    await d_cache_master.write(0x000, b'test')
    dut.d_cache_state.value = IDLE
    await Timer(1, units="ns")

    assert axi_ram_slave.read(0x000,4) == b'test'

    dut.i_cache_state.value = SENDING_READ_REQ
    await Timer(1, units="ns")
    data = await i_cache_master.read(0x000, 4)
    dut.i_cache_state.value = IDLE
    await Timer(1, units="ns")

    assert data.data == b'test'

  

    dut.d_cache_state.value = SENDING_READ_REQ
    await Timer(1, units="ns")
    data = await d_cache_master.read(0x000, 4)
    dut.d_cache_state.value = IDLE
    await Timer(1, units="ns")

    assert data.data == b'test'

   
    dut.d_cache_state.value = SENDING_READ_REQ
    dut.i_cache_state.value = SENDING_READ_REQ
    await Timer(1, units="ns")
    data_i = await i_cache_master.read(0x000, 4)
    await Timer(1, units="ns")
    dut.i_cache_state.value = IDLE
    await Timer(1, units="ns")

    assert data_i.data == b'test'

    data_d = await d_cache_master.read(0x000, 4)
    await Timer(1, units="ns")
    dut.d_cache_state.value = IDLE
    await Timer(1, units="ns")

    assert data_d.data == b'test'

    

    dut.d_cache_state.value = SENDING_WRITE_REQ
    dut.i_cache_state.value = SENDING_WRITE_REQ
    await Timer(1, units="ns")
    await i_cache_master.write(0x00C, b'beef')
    await Timer(1, units="ns")
    dut.i_cache_state.value = IDLE
    await Timer(1, units="ns")

    await d_cache_master.write(0x010, b'1234')
    await Timer(1, units="ns")
    dut.d_cache_state.value = IDLE
    await Timer(1, units="ns")

    assert data_d.data == b'test'

    # we verify data was well written

    assert axi_ram_slave.read(0x00C,4) == b'beef'
    assert axi_ram_slave.read(0x010,4) == b'1234'