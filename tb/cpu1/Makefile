SIM ?= verilator
TOPLEVEL_LANG = verilog

EXTRA_ARGS += --trace --trace-structs --sv --timing

WAVES = 1

# =========================
# SOURCES
# =========================

VERILOG_SOURCES = \
	$(PWD)/../../packages/axi_if.sv \
    $(PWD)/../../packages/holy_core_pkg.sv \
    $(PWD)/harness.sv \
    $(PWD)/holy_core.sv \
    $(PWD)/holy_cache.sv \
    $(PWD)/external_arbiter.sv \
    $(PWD)/csr.sv \
    $(PWD)/../../logic1/alu.sv \
    $(PWD)/../../logic1/control.sv \
    $(PWD)/../../logic1/regfile.sv \
    $(PWD)/../../logic1/memory.sv \
    $(PWD)/../../logic1/SignExtend.sv 
   

# =========================
# TOP LEVEL
# =========================

TOPLEVEL = holy_test_harness

# Python test (no .py)
MODULE = test_holy_core

# =========================
# COCOTB
# =========================

include $(shell cocotb-config --makefiles)/Makefile.sim