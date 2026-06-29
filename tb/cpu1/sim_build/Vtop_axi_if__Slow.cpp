// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

// Parameter definitions for Vtop_axi_if
constexpr IData/*31:0*/ Vtop_axi_if::ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop_axi_if::DATA_WIDTH;
constexpr IData/*31:0*/ Vtop_axi_if::ID_WIDTH;


void Vtop_axi_if___ctor_var_reset(Vtop_axi_if* vlSelf);

void Vtop_axi_if::ctor(Vtop__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtop_axi_if___ctor_var_reset(this);
}

void Vtop_axi_if::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtop_axi_if::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
