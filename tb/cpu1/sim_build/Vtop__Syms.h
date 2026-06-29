// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"
#include "Vtop___024unit.h"
#include "Vtop_axi_if.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;
    Vtop_axi_if                    TOP__holy_test_harness__DOT__axi;
    Vtop_axi_if                    TOP__holy_test_harness__DOT__core__DOT__m_axi_data;
    Vtop_axi_if                    TOP__holy_test_harness__DOT__core__DOT__m_axi_instr;

    // SCOPE NAMES
    VerilatedScope* __Vscopep_holy_test_harness;
    VerilatedScope* __Vscopep_holy_test_harness__axi;
    VerilatedScope* __Vscopep_holy_test_harness__core;
    VerilatedScope* __Vscopep_holy_test_harness__core__alu_inst;
    VerilatedScope* __Vscopep_holy_test_harness__core__arbiter;
    VerilatedScope* __Vscopep_holy_test_harness__core__control_unit;
    VerilatedScope* __Vscopep_holy_test_harness__core__csr;
    VerilatedScope* __Vscopep_holy_test_harness__core__data_cache;
    VerilatedScope* __Vscopep_holy_test_harness__core__instr_cache;
    VerilatedScope* __Vscopep_holy_test_harness__core__m_axi_data;
    VerilatedScope* __Vscopep_holy_test_harness__core__m_axi_instr;
    VerilatedScope* __Vscopep_holy_test_harness__core__regfile;
    VerilatedScope* __Vscopep_holy_test_harness__core__regfile__unnamedblk1;
    VerilatedScope* __Vscopep_holy_test_harness__core__sign_extender;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
