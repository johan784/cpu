// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop_axi_if___ico_sequent__TOP__holy_test_harness__DOT__axi__0(Vtop_axi_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_axi_if___ico_sequent__TOP__holy_test_harness__DOT__axi__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.aresetn = vlSymsp->TOP.holy_test_harness__DOT__rst_n;
    vlSelfRef.awready = vlSymsp->TOP.holy_test_harness__DOT__m_axi_mem_awready;
    vlSelfRef.wready = vlSymsp->TOP.holy_test_harness__DOT__m_axi_mem_wready;
    vlSelfRef.bresp = vlSymsp->TOP.holy_test_harness__DOT__m_axi_mem_bresp;
    vlSelfRef.bid = vlSymsp->TOP.holy_test_harness__DOT__m_axi_mem_bid;
    vlSelfRef.bvalid = vlSymsp->TOP.holy_test_harness__DOT__m_axi_mem_bvalid;
    vlSelfRef.arready = vlSymsp->TOP.holy_test_harness__DOT__m_axi_mem_arready;
    vlSelfRef.rdata = vlSymsp->TOP.holy_test_harness__DOT__m_axi_mem_rdata;
    vlSelfRef.rresp = vlSymsp->TOP.holy_test_harness__DOT__m_axi_mem_rresp;
    vlSelfRef.rid = vlSymsp->TOP.holy_test_harness__DOT__m_axi_mem_rid;
    vlSelfRef.rlast = vlSymsp->TOP.holy_test_harness__DOT__m_axi_mem_rlast;
    vlSelfRef.rvalid = vlSymsp->TOP.holy_test_harness__DOT__m_axi_mem_rvalid;
    vlSelfRef.aclk = vlSymsp->TOP.holy_test_harness__DOT__aclk;
}

void Vtop_axi_if___ico_sequent__TOP__holy_test_harness__DOT__core__DOT__m_axi_instr__0(Vtop_axi_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_axi_if___ico_sequent__TOP__holy_test_harness__DOT__core__DOT__m_axi_instr__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wlast = (0x7fU == (IData)(vlSymsp->TOP.holy_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr));
    vlSelfRef.wdata = (((0U == (0x0000001fU & VL_SHIFTL_III(12,12,32, (IData)(vlSymsp->TOP.holy_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr), 5U)))
                         ? 0U : (vlSymsp->TOP.holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[
                                 (((IData)(0x0000001fU) 
                                   + (0x00000fffU & 
                                      VL_SHIFTL_III(12,12,32, (IData)(vlSymsp->TOP.holy_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr), 5U))) 
                                  >> 5U)] << ((IData)(0x00000020U) 
                                              - (0x0000001fU 
                                                 & VL_SHIFTL_III(12,12,32, (IData)(vlSymsp->TOP.holy_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr), 5U))))) 
                       | (vlSymsp->TOP.holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[
                          (0x0000007fU & (VL_SHIFTL_III(12,12,32, (IData)(vlSymsp->TOP.holy_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr), 5U) 
                                          >> 5U))] 
                          >> (0x0000001fU & VL_SHIFTL_III(12,12,32, (IData)(vlSymsp->TOP.holy_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr), 5U))));
}

void Vtop_axi_if___ico_sequent__TOP__holy_test_harness__DOT__core__DOT__m_axi_data__0(Vtop_axi_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_axi_if___ico_sequent__TOP__holy_test_harness__DOT__core__DOT__m_axi_data__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wlast = (0x7fU == (IData)(vlSymsp->TOP.holy_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr));
    vlSelfRef.wdata = (((0U == (0x0000001fU & VL_SHIFTL_III(12,12,32, (IData)(vlSymsp->TOP.holy_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr), 5U)))
                         ? 0U : (vlSymsp->TOP.holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[
                                 (((IData)(0x0000001fU) 
                                   + (0x00000fffU & 
                                      VL_SHIFTL_III(12,12,32, (IData)(vlSymsp->TOP.holy_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr), 5U))) 
                                  >> 5U)] << ((IData)(0x00000020U) 
                                              - (0x0000001fU 
                                                 & VL_SHIFTL_III(12,12,32, (IData)(vlSymsp->TOP.holy_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr), 5U))))) 
                       | (vlSymsp->TOP.holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[
                          (0x0000007fU & (VL_SHIFTL_III(12,12,32, (IData)(vlSymsp->TOP.holy_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr), 5U) 
                                          >> 5U))] 
                          >> (0x0000001fU & VL_SHIFTL_III(12,12,32, (IData)(vlSymsp->TOP.holy_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr), 5U))));
}

std::string VL_TO_STRING(const Vtop_axi_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_axi_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->vlNamep : "null");
}
