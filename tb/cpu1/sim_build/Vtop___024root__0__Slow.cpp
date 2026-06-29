// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__holy_test_harness__DOT__core__DOT__clk__0 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__holy_test_harness__DOT__core__DOT__regfile__DOT__clk__0 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__regfile__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__holy_test_harness__DOT__core__DOT__instr_cache__DOT__clk__0 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__holy_test_harness__DOT__core__DOT__data_cache__DOT__clk__0 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__holy_test_harness__DOT__core__DOT__csr__DOT__clk__0 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop_axi_if___eval_initial__TOP__holy_test_harness__DOT__core__DOT__m_axi_instr(Vtop_axi_if* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    Vtop_axi_if___eval_initial__TOP__holy_test_harness__DOT__core__DOT__m_axi_instr((&vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr));
    Vtop_axi_if___eval_initial__TOP__holy_test_harness__DOT__core__DOT__m_axi_instr((&vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data));
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("wave.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__read_enable = 1U;
    vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__write_enable = 0U;
    vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__byte_enable = 0U;
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__byte_enable = 0x0fU;
    vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__write_data = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/Users/johananil/Desktop/cpu/tb/cpu1/harness.sv", 4, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vtop___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlUnpacked<IData/*31:0*/, 16> Vtop__ConstPool__TABLE_h1e1d6789_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hb332e2bd_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h85fa6153_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hd1fd398a_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_ha9888cdc_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtop__ConstPool__TABLE_hceaf3dfd_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vtop__ConstPool__TABLE_h5f825429_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtop__ConstPool__TABLE_hf01ba4e0_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hbd623705_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hded69577_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h686d6df9_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelfRef.holy_test_harness__DOT__m_axi_mem_aresetn 
        = vlSelfRef.holy_test_harness__DOT__rst_n;
    __Vtableidx2 = vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__byte_enable;
    vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__byte_enable_mask 
        = Vtop__ConstPool__TABLE_h1e1d6789_0[__Vtableidx2];
    __Vtableidx3 = vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__byte_enable;
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__byte_enable_mask 
        = Vtop__ConstPool__TABLE_h1e1d6789_0[__Vtableidx3];
    vlSelfRef.holy_test_harness__DOT__aclk = vlSelfRef.holy_test_harness__DOT__clk;
    vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__flush_flag 
        = (1U & vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__flush_cache);
    vlSelfRef.holy_test_harness__DOT__core__DOT__rst_n 
        = vlSelfRef.holy_test_harness__DOT__rst_n;
    vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__actual_write_enable 
        = ((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__write_enable) 
           & (0U != (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__byte_enable)));
    vlSelfRef.holy_test_harness__DOT__core__DOT__pc_plus_four 
        = ((IData)(4U) + vlSelfRef.holy_test_harness__DOT__core__DOT__pc);
    vlSelfRef.holy_test_harness__DOT__core__DOT__clk 
        = vlSelfRef.holy_test_harness__DOT__clk;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.awaddr = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__state))) {
                vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.awaddr 
                    = (vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_block_tag 
                       << 9U);
                vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.awaddr = 0U;
                vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.awvalid = 0U;
                vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.awvalid = 1U;
            } else {
                vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.awaddr = 0U;
                vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.awvalid = 0U;
            }
        } else {
            vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.awaddr = 0U;
            vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.awvalid = 0U;
        }
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.wvalid = 0U;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.bready = 0U;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.arvalid = 0U;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.rready = 0U;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.awvalid = 0U;
        if ((2U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__state)))) {
                vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.wvalid = 1U;
            }
            if ((1U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__state))) {
                vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.bready = 1U;
            }
        }
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.wvalid = 0U;
    } else {
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.awaddr = 0U;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.awvalid = 0U;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.wvalid = 0U;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.bready = 0U;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.arvalid = 0U;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.rready = 0U;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.awvalid = 0U;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.wvalid = 0U;
    }
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.bready = 0U;
    if ((4U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__state)))) {
                vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.arvalid = 1U;
            }
            if ((1U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__state))) {
                vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.rready = 1U;
            }
        }
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.arvalid = 0U;
    } else {
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.arvalid = 0U;
    }
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.rready = 0U;
    vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_state 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__state;
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_state 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__state;
    vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__address 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__pc;
    vlSelfRef.holy_test_harness__DOT__m_axi_mem_aclk 
        = vlSelfRef.holy_test_harness__DOT__aclk;
    vlSelfRef.holy_test_harness__DOT__core__DOT__flush_flag 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__flush_flag;
    vlSelfRef.holy_test_harness__DOT__core__DOT__regfile__DOT__rst_n 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__rst_n;
    vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__rst_n 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__rst_n;
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__rst_n 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__rst_n;
    vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__rst_n 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__rst_n;
    vlSelfRef.holy_test_harness__DOT__core__DOT__regfile__DOT__clk 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__clk;
    vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__clk 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__clk;
    vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__aclk 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__clk;
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__clk 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__clk;
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__aclk 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__clk;
    vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__clk 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__clk;
    vlSelfRef.holy_test_harness__DOT__core__DOT__i_cache_state 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_state;
    vlSelfRef.holy_test_harness__DOT__core__DOT__d_cache_state 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_state;
    vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__req_index 
        = (0x0000007fU & (vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__address 
                          >> 2U));
    vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__req_block_tag 
        = (vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__address 
           >> 9U);
    vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__flush_flag 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__flush_flag;
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__flush_flag 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__flush_flag;
    vlSelfRef.holy_test_harness__DOT__core__DOT__arbiter__DOT__i_cache_state 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__i_cache_state;
    vlSelfRef.holy_test_harness__DOT__core__DOT__arbiter__DOT__d_cache_state 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__d_cache_state;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.araddr = 0U;
    if ((4U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__state)))) {
                vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.araddr 
                    = (vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__req_block_tag 
                       << 9U);
            }
        }
    }
    vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__hit 
        = ((vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_block_tag 
            == vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__req_block_tag) 
           & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_valid));
    vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_stall 
        = ((0U != (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__state)) 
           | ((~ (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__hit)) 
              & ((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__actual_write_enable) 
                 | (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__read_enable))));
    vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__read_data = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__state)))) {
                if (((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__hit) 
                     & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__read_enable))) {
                    vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__read_data 
                        = (((0U == (0x0000001fU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__req_index), 5U)))
                             ? 0U : (vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[
                                     (((IData)(0x0000001fU) 
                                       + (0x00000fffU 
                                          & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__req_index), 5U))) 
                                      >> 5U)] << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__req_index), 5U))))) 
                           | (vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[
                              (0x0000007fU & (VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__req_index), 5U) 
                                              >> 5U))] 
                              >> (0x0000001fU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__req_index), 5U))));
                }
            }
        }
    }
    vlSelfRef.holy_test_harness__DOT__core__DOT__i_cache_stall 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_stall;
    vlSelfRef.holy_test_harness__DOT__core__DOT__instruction 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__read_data;
    vlSelfRef.holy_test_harness__DOT__core__DOT__dest_reg 
        = (0x0000001fU & (vlSelfRef.holy_test_harness__DOT__core__DOT__instruction 
                          >> 7U));
    vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__address 
        = (vlSelfRef.holy_test_harness__DOT__core__DOT__instruction 
           >> 0x00000014U);
    vlSelfRef.holy_test_harness__DOT__core__DOT__f7 
        = (vlSelfRef.holy_test_harness__DOT__core__DOT__instruction 
           >> 0x00000019U);
    vlSelfRef.holy_test_harness__DOT__core__DOT__source_reg2 
        = (0x0000001fU & (vlSelfRef.holy_test_harness__DOT__core__DOT__instruction 
                          >> 0x00000014U));
    vlSelfRef.holy_test_harness__DOT__core__DOT__raw_imm 
        = (vlSelfRef.holy_test_harness__DOT__core__DOT__instruction 
           >> 7U);
    vlSelfRef.holy_test_harness__DOT__core__DOT__f3 
        = (7U & (vlSelfRef.holy_test_harness__DOT__core__DOT__instruction 
                 >> 0x0000000cU));
    vlSelfRef.holy_test_harness__DOT__core__DOT__source_reg1 
        = (0x0000001fU & (vlSelfRef.holy_test_harness__DOT__core__DOT__instruction 
                          >> 0x0000000fU));
    vlSelfRef.holy_test_harness__DOT__core__DOT__op 
        = (0x0000007fU & vlSelfRef.holy_test_harness__DOT__core__DOT__instruction);
    vlSelfRef.holy_test_harness__DOT__core__DOT__regfile__DOT__address3 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__dest_reg;
    vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__read_data 
        = ((0x07c0U == (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__address))
            ? vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__flush_cache
            : 0U);
    vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__func7 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__f7;
    vlSelfRef.holy_test_harness__DOT__core__DOT__regfile__DOT__address2 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__source_reg2;
    vlSelfRef.holy_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__raw_imm;
    vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__f3 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__f3;
    vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__func3 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__f3;
    vlSelfRef.holy_test_harness__DOT__core__DOT__regfile__DOT__address1 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__source_reg1;
    vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__op 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__op;
    vlSelfRef.holy_test_harness__DOT__core__DOT__csr_read_data 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__read_data;
    vlSelfRef.holy_test_harness__DOT__core__DOT__regfile__DOT__read_data2 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__regfile__DOT__registers
        [vlSelfRef.holy_test_harness__DOT__core__DOT__regfile__DOT__address2];
    vlSelfRef.holy_test_harness__DOT__core__DOT__regfile__DOT__read_data1 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__regfile__DOT__registers
        [vlSelfRef.holy_test_harness__DOT__core__DOT__regfile__DOT__address1];
    __Vtableidx1 = vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__op;
    vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__reg_write 
        = Vtop__ConstPool__TABLE_hb332e2bd_0[__Vtableidx1];
    vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__mem_write 
        = Vtop__ConstPool__TABLE_h85fa6153_0[__Vtableidx1];
    vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__mem_read 
        = Vtop__ConstPool__TABLE_hd1fd398a_0[__Vtableidx1];
    vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__alu_source 
        = Vtop__ConstPool__TABLE_ha9888cdc_0[__Vtableidx1];
    vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__write_back_source 
        = Vtop__ConstPool__TABLE_hceaf3dfd_0[__Vtableidx1];
    vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__imm_source 
        = Vtop__ConstPool__TABLE_h5f825429_0[__Vtableidx1];
    vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__alu_op 
        = Vtop__ConstPool__TABLE_hf01ba4e0_0[__Vtableidx1];
    vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__branch 
        = Vtop__ConstPool__TABLE_hbd623705_0[__Vtableidx1];
    vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__jump 
        = Vtop__ConstPool__TABLE_hded69577_0[__Vtableidx1];
    vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__csr_write_enable 
        = Vtop__ConstPool__TABLE_h686d6df9_0[__Vtableidx1];
    vlSelfRef.holy_test_harness__DOT__core__DOT__read_reg2 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__regfile__DOT__read_data2;
    vlSelfRef.holy_test_harness__DOT__core__DOT__read_reg1 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__regfile__DOT__read_data1;
    vlSelfRef.holy_test_harness__DOT__core__DOT__reg_write 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__reg_write;
    vlSelfRef.holy_test_harness__DOT__core__DOT__csr_write_enable 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__csr_write_enable;
    vlSelfRef.holy_test_harness__DOT__core__DOT__write_back_source 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__write_back_source;
    vlSelfRef.holy_test_harness__DOT__core__DOT__mem_write 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__mem_write;
    vlSelfRef.holy_test_harness__DOT__core__DOT__jump 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__jump;
    vlSelfRef.holy_test_harness__DOT__core__DOT__mem_read_enable 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__mem_read;
    vlSelfRef.holy_test_harness__DOT__core__DOT__alu_source 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__alu_source;
    vlSelfRef.holy_test_harness__DOT__core__DOT__branch 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__branch;
    vlSelfRef.holy_test_harness__DOT__core__DOT__imm_source 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__imm_source;
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__write_data 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__read_reg2;
    vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__write_data 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__read_reg1;
    vlSelfRef.holy_test_harness__DOT__core__DOT__alu_src1 
        = ((0x17U == (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__op))
            ? vlSelfRef.holy_test_harness__DOT__core__DOT__pc
            : vlSelfRef.holy_test_harness__DOT__core__DOT__read_reg1);
    vlSelfRef.holy_test_harness__DOT__core__DOT__regfile__DOT__write_enable 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__reg_write;
    vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__write_enable 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__csr_write_enable;
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__write_enable 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__mem_write;
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__read_enable 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__mem_read_enable;
    vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__alu_control 
        = ((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__branch)
            ? ((4U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__func3))
                ? ((2U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__func3))
                    ? 7U : 5U) : ((2U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__func3))
                                   ? 0U : 1U)) : ((0U 
                                                   == (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__alu_op))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__alu_op))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__func3))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__func3))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__func3))
                                                       ? 2U
                                                       : 3U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__func3))
                                                       ? 
                                                      ((0U 
                                                        == (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__func7))
                                                        ? 0x0cU
                                                        : 9U)
                                                       : 4U))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__func3))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__func3))
                                                       ? 7U
                                                       : 5U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__func3))
                                                       ? 8U
                                                       : 
                                                      ((0x20U 
                                                        == (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__func7))
                                                        ? 1U
                                                        : 0U))))
                                                    : 0U)));
    vlSelfRef.holy_test_harness__DOT__core__DOT__alu_control 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__alu_control;
    vlSelfRef.holy_test_harness__DOT__core__DOT__sign_extender__DOT__imm_source 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__imm_source;
    vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__nand_result 
        = ((~ vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__write_data) 
           & vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__read_data);
    vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__or_result 
        = (vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__read_data 
           | vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__write_data);
    vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__s1 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__alu_src1;
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__actual_write_enable 
        = ((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__write_enable) 
           & (0U != (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__byte_enable)));
    vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__alu_control;
    vlSelfRef.holy_test_harness__DOT__core__DOT__sign_extender__DOT__immediate 
        = ((4U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__sign_extender__DOT__imm_source))
            ? ((2U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__sign_extender__DOT__imm_source))
                ? 0U : ((1U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__sign_extender__DOT__imm_source))
                         ? 0U : (0xfffff000U & (vlSelfRef.holy_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                                << 7U))))
            : ((2U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__sign_extender__DOT__imm_source))
                ? ((1U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__sign_extender__DOT__imm_source))
                    ? ((((0x00000ffeU & ((- (IData)(
                                                    (1U 
                                                     & (vlSelfRef.holy_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                                        >> 0x00000018U)))) 
                                         << 1U)) | 
                         (1U & (vlSelfRef.holy_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                >> 0x00000018U))) << 0x00000014U) 
                       | ((((0x000001feU & (vlSelfRef.holy_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                            >> 4U)) 
                            | (1U & (vlSelfRef.holy_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                     >> 0x0000000dU))) 
                           << 0x0000000bU) | (0x000007feU 
                                              & (vlSelfRef.holy_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                                 >> 0x0000000dU))))
                    : (((- (IData)((1U & (vlSelfRef.holy_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                          >> 0x00000018U)))) 
                        << 0x0000000dU) | ((((2U & 
                                              (vlSelfRef.holy_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                               >> 0x00000017U)) 
                                             | (1U 
                                                & vlSelfRef.holy_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src)) 
                                            << 0x0000000bU) 
                                           | ((0x000007e0U 
                                               & (vlSelfRef.holy_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                                  >> 0x0000000dU)) 
                                              | (0x0000001eU 
                                                 & vlSelfRef.holy_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src)))))
                : ((1U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__sign_extender__DOT__imm_source))
                    ? (((- (IData)((1U & (vlSelfRef.holy_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                          >> 0x00000018U)))) 
                        << 0x0000000cU) | ((0x00000fe0U 
                                            & (vlSelfRef.holy_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                               >> 0x0000000dU)) 
                                           | (0x0000001fU 
                                              & vlSelfRef.holy_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src)))
                    : (((- (IData)((1U & (vlSelfRef.holy_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                          >> 0x00000018U)))) 
                        << 0x0000000cU) | (0x00000fffU 
                                           & (vlSelfRef.holy_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                              >> 0x0000000dU))))));
    vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__write_back_to_csr 
        = ((2U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__f3))
            ? ((1U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__f3))
                ? vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__nand_result
                : vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__or_result)
            : ((1U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__f3))
                ? vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__write_data
                : vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__read_data));
    vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__next_flush_cache 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__write_back_to_csr;
    vlSelfRef.holy_test_harness__DOT__core__DOT__immediate 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__sign_extender__DOT__immediate;
    vlSelfRef.holy_test_harness__DOT__core__DOT__pc_target 
        = (((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__alu_source) 
            & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__jump))
            ? (0xfffffffeU & (vlSelfRef.holy_test_harness__DOT__core__DOT__immediate 
                              + vlSelfRef.holy_test_harness__DOT__core__DOT__read_reg1))
            : (vlSelfRef.holy_test_harness__DOT__core__DOT__immediate 
               + vlSelfRef.holy_test_harness__DOT__core__DOT__pc));
    vlSelfRef.holy_test_harness__DOT__core__DOT__alu_src2 
        = ((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__alu_source)
            ? vlSelfRef.holy_test_harness__DOT__core__DOT__immediate
            : vlSelfRef.holy_test_harness__DOT__core__DOT__read_reg2);
    vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__s2 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__alu_src2;
    vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__alu_result 
        = ((8U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))
            ? ((4U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))
                ? ((2U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))
                    ? 0U : ((1U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))
                             ? 0U : (vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__s1 
                                     >> (0x0000001fU 
                                         & vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__s2))))
                : ((2U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))
                    ? 0U : ((1U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))
                             ? VL_SHIFTRS_III(32,32,5, vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__s1, 
                                              (0x0000001fU 
                                               & vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__s2))
                             : (vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__s1 
                                << (0x0000001fU & vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__s2)))))
            : ((4U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))
                ? ((2U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))
                    ? ((1U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))
                        ? (vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__s1 
                           < vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__s2)
                        : 0U) : ((1U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))
                                  ? VL_LTS_III(32, vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__s1, vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__s2)
                                  : (vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__s1 
                                     ^ vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__s2)))
                : ((2U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))
                    ? ((1U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))
                        ? (vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__s1 
                           | vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__s2)
                        : (vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__s1 
                           & vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__s2))
                    : ((1U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))
                        ? (vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__s1 
                           - vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__s2)
                        : (vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__s1 
                           + vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__s2)))));
    vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__zero 
        = (0U == vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__alu_result);
    vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__alu_last_bit 
        = (1U & vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__alu_result);
    vlSelfRef.holy_test_harness__DOT__core__DOT__alu_result 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__alu_result;
    vlSelfRef.holy_test_harness__DOT__core__DOT__alu_zero 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__zero;
    vlSelfRef.holy_test_harness__DOT__core__DOT__alu_last_bit 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__alu_last_bit;
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__address 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__alu_result;
    vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__alu_zero 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__alu_zero;
    vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__alu_last_bit 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__alu_last_bit;
    vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__pc_source 
        = (1U & ((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__branch)
                  ? ((4U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__func3))
                      ? ((1U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__func3))
                          ? (~ (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__alu_last_bit))
                          : (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__alu_last_bit))
                      : ((~ ((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__func3) 
                             >> 1U)) & ((1U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__func3))
                                         ? (~ (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__alu_zero))
                                         : (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__alu_zero))))
                  : (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__jump)));
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__req_index 
        = (0x0000007fU & (vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__address 
                          >> 2U));
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__req_block_tag 
        = (vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__address 
           >> 9U);
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__hit 
        = ((vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_block_tag 
            == vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__req_block_tag) 
           & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_valid));
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.araddr = 0U;
    if ((4U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__state)))) {
                vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.arvalid = 1U;
                vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.araddr 
                    = (vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__req_block_tag 
                       << 9U);
            }
            if ((1U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__state))) {
                vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.rready = 1U;
            }
        }
    }
    vlSelfRef.holy_test_harness__DOT__core__DOT__pc_source 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__pc_source;
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_stall 
        = ((0U != (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__state)) 
           | ((~ (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__hit)) 
              & ((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__actual_write_enable) 
                 | (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__read_enable))));
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__read_data = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__state))) {
                vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.awaddr 
                    = (vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_block_tag 
                       << 9U);
                vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.awvalid = 1U;
            }
            if ((1U & (~ (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__state)))) {
                if (((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__hit) 
                     & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__read_enable))) {
                    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__read_data 
                        = (((0U == (0x0000001fU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U)))
                             ? 0U : (vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[
                                     (((IData)(0x0000001fU) 
                                       + (0x00000fffU 
                                          & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U))) 
                                      >> 5U)] << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U))))) 
                           | (vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[
                              (0x0000007fU & (VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U) 
                                              >> 5U))] 
                              >> (0x0000001fU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U))));
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__state)))) {
                vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.wvalid = 1U;
            }
            if ((1U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__state))) {
                vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.bready = 1U;
            }
        }
    }
    vlSelfRef.holy_test_harness__DOT__core__DOT__pc_next 
        = (((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__jump) 
            | (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__pc_source))
            ? vlSelfRef.holy_test_harness__DOT__core__DOT__pc_target
            : vlSelfRef.holy_test_harness__DOT__core__DOT__pc_plus_four);
    vlSelfRef.holy_test_harness__DOT__core__DOT__d_cache_stall 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_stall;
    vlSelfRef.holy_test_harness__DOT__core__DOT__mem_read 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__read_data;
    vlSelfRef.holy_test_harness__DOT__core__DOT__global_stall 
        = ((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__d_cache_stall) 
           | (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__i_cache_stall));
    vlSelfRef.holy_test_harness__DOT__core__DOT__write_back_data 
        = ((2U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__write_back_source))
            ? ((1U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__write_back_source))
                ? vlSelfRef.holy_test_harness__DOT__core__DOT__immediate
                : vlSelfRef.holy_test_harness__DOT__core__DOT__pc_plus_four)
            : ((1U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__write_back_source))
                ? vlSelfRef.holy_test_harness__DOT__core__DOT__mem_read
                : vlSelfRef.holy_test_harness__DOT__core__DOT__alu_result));
    vlSelfRef.holy_test_harness__DOT__core__DOT__regfile__DOT__write_data 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__write_back_data;
}

void Vtop_axi_if___ico_sequent__TOP__holy_test_harness__DOT__axi__0(Vtop_axi_if* vlSelf);
void Vtop_axi_if___ico_sequent__TOP__holy_test_harness__DOT__core__DOT__m_axi_instr__0(Vtop_axi_if* vlSelf);
void Vtop_axi_if___ico_sequent__TOP__holy_test_harness__DOT__core__DOT__m_axi_data__0(Vtop_axi_if* vlSelf);
void Vtop___024root___ico_sequent__TOP__1(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        Vtop_axi_if___ico_sequent__TOP__holy_test_harness__DOT__axi__0((&vlSymsp->TOP__holy_test_harness__DOT__axi));
        Vtop_axi_if___ico_sequent__TOP__holy_test_harness__DOT__core__DOT__m_axi_instr__0((&vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr));
        Vtop_axi_if___ico_sequent__TOP__holy_test_harness__DOT__core__DOT__m_axi_data__0((&vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data));
        Vtop___024root___ico_sequent__TOP__1(vlSelf);
    }
}

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge holy_test_harness.core.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge holy_test_harness.core.regfile.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge holy_test_harness.core.instr_cache.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge holy_test_harness.core.data_cache.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(posedge holy_test_harness.core.csr.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->holy_test_harness__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14841964509339494775ull);
    vlSelf->holy_test_harness__DOT__aclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11096194680139613492ull);
    vlSelf->holy_test_harness__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18143971350877695727ull);
    vlSelf->holy_test_harness__DOT__m_axi_mem_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17338549967326369580ull);
    vlSelf->holy_test_harness__DOT__m_axi_mem_awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5131199052932721429ull);
    vlSelf->holy_test_harness__DOT__m_axi_mem_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16394581859647833969ull);
    vlSelf->holy_test_harness__DOT__m_axi_mem_awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13709032327626519511ull);
    vlSelf->holy_test_harness__DOT__m_axi_mem_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17360998162362149806ull);
    vlSelf->holy_test_harness__DOT__m_axi_mem_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5038329030849147096ull);
    vlSelf->holy_test_harness__DOT__m_axi_mem_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13064748741214132873ull);
    vlSelf->holy_test_harness__DOT__m_axi_mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4475679540412891459ull);
    vlSelf->holy_test_harness__DOT__m_axi_mem_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3870217191784070573ull);
    vlSelf->holy_test_harness__DOT__m_axi_mem_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10805072552089605957ull);
    vlSelf->holy_test_harness__DOT__m_axi_mem_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12061365746953268471ull);
    vlSelf->holy_test_harness__DOT__m_axi_mem_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11281280217320254138ull);
    vlSelf->holy_test_harness__DOT__m_axi_mem_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11440365684538338292ull);
    vlSelf->holy_test_harness__DOT__m_axi_mem_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5490713677135857318ull);
    vlSelf->holy_test_harness__DOT__m_axi_mem_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13420180297063242465ull);
    vlSelf->holy_test_harness__DOT__m_axi_mem_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2240250791833867464ull);
    vlSelf->holy_test_harness__DOT__m_axi_mem_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4621422558606550878ull);
    vlSelf->holy_test_harness__DOT__m_axi_mem_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11757510436166426865ull);
    vlSelf->holy_test_harness__DOT__m_axi_mem_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 59394784436229392ull);
    vlSelf->holy_test_harness__DOT__m_axi_mem_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1836671056456562445ull);
    vlSelf->holy_test_harness__DOT__m_axi_mem_arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7457817701417079132ull);
    vlSelf->holy_test_harness__DOT__m_axi_mem_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6100008429447019050ull);
    vlSelf->holy_test_harness__DOT__m_axi_mem_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8170052426544543815ull);
    vlSelf->holy_test_harness__DOT__m_axi_mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13146042898858692000ull);
    vlSelf->holy_test_harness__DOT__m_axi_mem_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9056574321420157117ull);
    vlSelf->holy_test_harness__DOT__m_axi_mem_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8050622467324277303ull);
    vlSelf->holy_test_harness__DOT__m_axi_mem_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1389447624058206942ull);
    vlSelf->holy_test_harness__DOT__m_axi_mem_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14698208546575729965ull);
    vlSelf->holy_test_harness__DOT__m_axi_mem_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5812696504835590451ull);
    vlSelf->holy_test_harness__DOT__m_axi_mem_aclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13056573561261053657ull);
    vlSelf->holy_test_harness__DOT__m_axi_mem_aresetn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16427444807957764143ull);
    vlSelf->holy_test_harness__DOT__core__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15071183781171792665ull);
    vlSelf->holy_test_harness__DOT__core__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7304638282718637356ull);
    vlSelf->holy_test_harness__DOT__core__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13755693894979142522ull);
    vlSelf->holy_test_harness__DOT__core__DOT__pc_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3923022217889830863ull);
    vlSelf->holy_test_harness__DOT__core__DOT__pc_target = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3016819604502831318ull);
    vlSelf->holy_test_harness__DOT__core__DOT__pc_plus_four = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 273947398583587729ull);
    vlSelf->holy_test_harness__DOT__core__DOT__global_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1856340883650996199ull);
    vlSelf->holy_test_harness__DOT__core__DOT__instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9176753355427159736ull);
    vlSelf->holy_test_harness__DOT__core__DOT__op = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2790635957530706905ull);
    vlSelf->holy_test_harness__DOT__core__DOT__f3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14676002576922944789ull);
    vlSelf->holy_test_harness__DOT__core__DOT__f7 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2353909438652802132ull);
    vlSelf->holy_test_harness__DOT__core__DOT__alu_zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1022013756002027199ull);
    vlSelf->holy_test_harness__DOT__core__DOT__branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12762968955071789313ull);
    vlSelf->holy_test_harness__DOT__core__DOT__pc_source = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11872346156191503327ull);
    vlSelf->holy_test_harness__DOT__core__DOT__alu_control = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4798377665040974179ull);
    vlSelf->holy_test_harness__DOT__core__DOT__imm_source = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13386497165847281447ull);
    vlSelf->holy_test_harness__DOT__core__DOT__mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10994720921935204368ull);
    vlSelf->holy_test_harness__DOT__core__DOT__reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14024977460670264447ull);
    vlSelf->holy_test_harness__DOT__core__DOT__alu_source = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 437686084150136759ull);
    vlSelf->holy_test_harness__DOT__core__DOT__write_back_source = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12628820879724505223ull);
    vlSelf->holy_test_harness__DOT__core__DOT__jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7100075263643926256ull);
    vlSelf->holy_test_harness__DOT__core__DOT__mem_read_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12006164279493159785ull);
    vlSelf->holy_test_harness__DOT__core__DOT__csr_write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2679436082412795939ull);
    vlSelf->holy_test_harness__DOT__core__DOT__source_reg1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 179824634540682100ull);
    vlSelf->holy_test_harness__DOT__core__DOT__source_reg2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5207697334389130936ull);
    vlSelf->holy_test_harness__DOT__core__DOT__dest_reg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16091140036609103917ull);
    vlSelf->holy_test_harness__DOT__core__DOT__read_reg1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1583149635719227506ull);
    vlSelf->holy_test_harness__DOT__core__DOT__read_reg2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11263130009051449055ull);
    vlSelf->holy_test_harness__DOT__core__DOT__write_back_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5901315480209787572ull);
    vlSelf->holy_test_harness__DOT__core__DOT__raw_imm = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 13464385848190382885ull);
    vlSelf->holy_test_harness__DOT__core__DOT__immediate = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16855000774729568616ull);
    vlSelf->holy_test_harness__DOT__core__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2243340825148687215ull);
    vlSelf->holy_test_harness__DOT__core__DOT__alu_src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1389724028333216011ull);
    vlSelf->holy_test_harness__DOT__core__DOT__alu_src1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13325913535612036601ull);
    vlSelf->holy_test_harness__DOT__core__DOT__alu_last_bit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6851100736982620530ull);
    vlSelf->holy_test_harness__DOT__core__DOT__i_cache_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5007489885664282601ull);
    vlSelf->holy_test_harness__DOT__core__DOT__i_cache_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6759520176536643081ull);
    vlSelf->holy_test_harness__DOT__core__DOT__d_cache_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14502686838169546726ull);
    vlSelf->holy_test_harness__DOT__core__DOT__d_cache_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5776700824765986872ull);
    vlSelf->holy_test_harness__DOT__core__DOT__mem_read = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3725443910376594813ull);
    vlSelf->holy_test_harness__DOT__core__DOT__csr_read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3991655712711131528ull);
    vlSelf->holy_test_harness__DOT__core__DOT__flush_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16350590094965107875ull);
    vlSelf->holy_test_harness__DOT__core__DOT__control_unit__DOT__op = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2276478397117581812ull);
    vlSelf->holy_test_harness__DOT__core__DOT__control_unit__DOT__func3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 611950662301124624ull);
    vlSelf->holy_test_harness__DOT__core__DOT__control_unit__DOT__func7 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12524211253443328371ull);
    vlSelf->holy_test_harness__DOT__core__DOT__control_unit__DOT__alu_zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8417629836232644428ull);
    vlSelf->holy_test_harness__DOT__core__DOT__control_unit__DOT__alu_last_bit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10004649897394811019ull);
    vlSelf->holy_test_harness__DOT__core__DOT__control_unit__DOT__alu_control = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5201073670902819740ull);
    vlSelf->holy_test_harness__DOT__core__DOT__control_unit__DOT__imm_source = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1868299971704377381ull);
    vlSelf->holy_test_harness__DOT__core__DOT__control_unit__DOT__mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9894421309464695438ull);
    vlSelf->holy_test_harness__DOT__core__DOT__control_unit__DOT__mem_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12416293827155789573ull);
    vlSelf->holy_test_harness__DOT__core__DOT__control_unit__DOT__reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2086296449547835666ull);
    vlSelf->holy_test_harness__DOT__core__DOT__control_unit__DOT__alu_source = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9762771931549711779ull);
    vlSelf->holy_test_harness__DOT__core__DOT__control_unit__DOT__write_back_source = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11050925490178505482ull);
    vlSelf->holy_test_harness__DOT__core__DOT__control_unit__DOT__branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8769227823727167451ull);
    vlSelf->holy_test_harness__DOT__core__DOT__control_unit__DOT__pc_source = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3936248663919160819ull);
    vlSelf->holy_test_harness__DOT__core__DOT__control_unit__DOT__jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11983993645611119065ull);
    vlSelf->holy_test_harness__DOT__core__DOT__control_unit__DOT__csr_write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2672863051222528872ull);
    vlSelf->holy_test_harness__DOT__core__DOT__control_unit__DOT__alu_op = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14376074570169763204ull);
    vlSelf->holy_test_harness__DOT__core__DOT__regfile__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17033733833638267726ull);
    vlSelf->holy_test_harness__DOT__core__DOT__regfile__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12520093318772824380ull);
    vlSelf->holy_test_harness__DOT__core__DOT__regfile__DOT__address1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11838963200982953686ull);
    vlSelf->holy_test_harness__DOT__core__DOT__regfile__DOT__address2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18437751599198350828ull);
    vlSelf->holy_test_harness__DOT__core__DOT__regfile__DOT__read_data1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16984106657522130742ull);
    vlSelf->holy_test_harness__DOT__core__DOT__regfile__DOT__read_data2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14680399724016422696ull);
    vlSelf->holy_test_harness__DOT__core__DOT__regfile__DOT__write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2687354255479100707ull);
    vlSelf->holy_test_harness__DOT__core__DOT__regfile__DOT__write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7883893630050193704ull);
    vlSelf->holy_test_harness__DOT__core__DOT__regfile__DOT__address3 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14691243685077848841ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->holy_test_harness__DOT__core__DOT__regfile__DOT__registers[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 124477674165066147ull);
    }
    vlSelf->holy_test_harness__DOT__core__DOT__regfile__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->holy_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 5364245414609543082ull);
    vlSelf->holy_test_harness__DOT__core__DOT__sign_extender__DOT__imm_source = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17553116502091193407ull);
    vlSelf->holy_test_harness__DOT__core__DOT__sign_extender__DOT__immediate = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5523092555920567210ull);
    vlSelf->holy_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7697181390932814923ull);
    vlSelf->holy_test_harness__DOT__core__DOT__alu_inst__DOT__s1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 202405792183787863ull);
    vlSelf->holy_test_harness__DOT__core__DOT__alu_inst__DOT__s2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17541301411719562522ull);
    vlSelf->holy_test_harness__DOT__core__DOT__alu_inst__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18325703655149782618ull);
    vlSelf->holy_test_harness__DOT__core__DOT__alu_inst__DOT__zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3773098948372714783ull);
    vlSelf->holy_test_harness__DOT__core__DOT__alu_inst__DOT__alu_last_bit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12140991459200413756ull);
    vlSelf->holy_test_harness__DOT__core__DOT__instr_cache__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16205358315793099059ull);
    vlSelf->holy_test_harness__DOT__core__DOT__instr_cache__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9198248623359745780ull);
    vlSelf->holy_test_harness__DOT__core__DOT__instr_cache__DOT__aclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7419702499710120434ull);
    vlSelf->holy_test_harness__DOT__core__DOT__instr_cache__DOT__address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9065862329067913205ull);
    vlSelf->holy_test_harness__DOT__core__DOT__instr_cache__DOT__write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10844331647254413188ull);
    vlSelf->holy_test_harness__DOT__core__DOT__instr_cache__DOT__read_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17061675351630088965ull);
    vlSelf->holy_test_harness__DOT__core__DOT__instr_cache__DOT__write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 398079670411070830ull);
    vlSelf->holy_test_harness__DOT__core__DOT__instr_cache__DOT__byte_enable = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4349699870448216964ull);
    vlSelf->holy_test_harness__DOT__core__DOT__instr_cache__DOT__flush_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10558425197855530430ull);
    vlSelf->holy_test_harness__DOT__core__DOT__instr_cache__DOT__read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5437473481664336144ull);
    vlSelf->holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15817391909584833425ull);
    vlSelf->holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2293992221271927278ull);
    VL_SCOPED_RAND_RESET_W(4096, vlSelf->holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data, __VscopeHash, 1832216718311346098ull);
    vlSelf->holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_block_tag = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2164468605699063115ull);
    vlSelf->holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5133093809326214647ull);
    vlSelf->holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8394077112017575973ull);
    vlSelf->holy_test_harness__DOT__core__DOT__instr_cache__DOT__req_block_tag = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17158085797474872245ull);
    vlSelf->holy_test_harness__DOT__core__DOT__instr_cache__DOT__req_index = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8076002161581431839ull);
    vlSelf->holy_test_harness__DOT__core__DOT__instr_cache__DOT__byte_enable_mask = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15685140707559549153ull);
    vlSelf->holy_test_harness__DOT__core__DOT__instr_cache__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8025805944072370690ull);
    vlSelf->holy_test_harness__DOT__core__DOT__instr_cache__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6102326320222825664ull);
    vlSelf->holy_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5314448688040239672ull);
    vlSelf->holy_test_harness__DOT__core__DOT__instr_cache__DOT__actual_write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7771917311991030474ull);
    vlSelf->holy_test_harness__DOT__core__DOT__instr_cache__DOT__ar_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 148189655975937117ull);
    vlSelf->holy_test_harness__DOT__core__DOT__instr_cache__DOT__aw_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 914091683139034746ull);
    vlSelf->holy_test_harness__DOT__core__DOT__instr_cache__DOT__w_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3048226486746109232ull);
    vlSelf->holy_test_harness__DOT__core__DOT__instr_cache__DOT__b_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13451629738686348737ull);
    vlSelf->holy_test_harness__DOT__core__DOT__instr_cache__DOT__r_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8568065835522384163ull);
    vlSelf->holy_test_harness__DOT__core__DOT__instr_cache__DOT__csr_flush_status = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7428329503885757720ull);
    vlSelf->holy_test_harness__DOT__core__DOT__data_cache__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9793893563899932541ull);
    vlSelf->holy_test_harness__DOT__core__DOT__data_cache__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11309418533341584329ull);
    vlSelf->holy_test_harness__DOT__core__DOT__data_cache__DOT__aclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3144989109251658342ull);
    vlSelf->holy_test_harness__DOT__core__DOT__data_cache__DOT__address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7375402726277733435ull);
    vlSelf->holy_test_harness__DOT__core__DOT__data_cache__DOT__write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14595975277918374401ull);
    vlSelf->holy_test_harness__DOT__core__DOT__data_cache__DOT__read_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12096822586356490192ull);
    vlSelf->holy_test_harness__DOT__core__DOT__data_cache__DOT__write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11092057034405337694ull);
    vlSelf->holy_test_harness__DOT__core__DOT__data_cache__DOT__byte_enable = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7272504644894318392ull);
    vlSelf->holy_test_harness__DOT__core__DOT__data_cache__DOT__flush_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8190979223925970123ull);
    vlSelf->holy_test_harness__DOT__core__DOT__data_cache__DOT__read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8738454600773877208ull);
    vlSelf->holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2896503166345331050ull);
    vlSelf->holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16547669226492390084ull);
    VL_SCOPED_RAND_RESET_W(4096, vlSelf->holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_data, __VscopeHash, 2867312942234918091ull);
    vlSelf->holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_block_tag = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3788572708574603060ull);
    vlSelf->holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2935291056762873045ull);
    vlSelf->holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11881280452487188595ull);
    vlSelf->holy_test_harness__DOT__core__DOT__data_cache__DOT__req_block_tag = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10363216058073417493ull);
    vlSelf->holy_test_harness__DOT__core__DOT__data_cache__DOT__req_index = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3577376981559631864ull);
    vlSelf->holy_test_harness__DOT__core__DOT__data_cache__DOT__byte_enable_mask = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17958078968203659458ull);
    vlSelf->holy_test_harness__DOT__core__DOT__data_cache__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17175822090210216026ull);
    vlSelf->holy_test_harness__DOT__core__DOT__data_cache__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4425168385986323273ull);
    vlSelf->holy_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16025151407213047799ull);
    vlSelf->holy_test_harness__DOT__core__DOT__data_cache__DOT__actual_write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1406217085152487940ull);
    vlSelf->holy_test_harness__DOT__core__DOT__data_cache__DOT__ar_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6088888399255521763ull);
    vlSelf->holy_test_harness__DOT__core__DOT__data_cache__DOT__aw_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5679460030721786935ull);
    vlSelf->holy_test_harness__DOT__core__DOT__data_cache__DOT__w_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2210032441021304239ull);
    vlSelf->holy_test_harness__DOT__core__DOT__data_cache__DOT__b_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16326302242217741346ull);
    vlSelf->holy_test_harness__DOT__core__DOT__data_cache__DOT__r_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13432231622649434626ull);
    vlSelf->holy_test_harness__DOT__core__DOT__data_cache__DOT__csr_flush_status = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3277340495216515340ull);
    vlSelf->holy_test_harness__DOT__core__DOT__arbiter__DOT__i_cache_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15150441424315169491ull);
    vlSelf->holy_test_harness__DOT__core__DOT__arbiter__DOT__d_cache_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9778371366840179537ull);
    vlSelf->holy_test_harness__DOT__core__DOT__csr__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16637183543942977570ull);
    vlSelf->holy_test_harness__DOT__core__DOT__csr__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7071041932427760708ull);
    vlSelf->holy_test_harness__DOT__core__DOT__csr__DOT__write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10851249307436162617ull);
    vlSelf->holy_test_harness__DOT__core__DOT__csr__DOT__write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4705772727019775471ull);
    vlSelf->holy_test_harness__DOT__core__DOT__csr__DOT__f3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13290798286991020521ull);
    vlSelf->holy_test_harness__DOT__core__DOT__csr__DOT__address = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15345119919075690932ull);
    vlSelf->holy_test_harness__DOT__core__DOT__csr__DOT__read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17216242892634565566ull);
    vlSelf->holy_test_harness__DOT__core__DOT__csr__DOT__flush_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13346735611475989494ull);
    vlSelf->holy_test_harness__DOT__core__DOT__csr__DOT__flush_cache = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6470667797169117856ull);
    vlSelf->holy_test_harness__DOT__core__DOT__csr__DOT__next_flush_cache = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17940760223469234485ull);
    vlSelf->holy_test_harness__DOT__core__DOT__csr__DOT__write_back_to_csr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8783832873220912800ull);
    vlSelf->holy_test_harness__DOT__core__DOT__csr__DOT__or_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5578705775287734923ull);
    vlSelf->holy_test_harness__DOT__core__DOT__csr__DOT__nand_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5821608451855417417ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__holy_test_harness__DOT__core__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__holy_test_harness__DOT__core__DOT__regfile__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__holy_test_harness__DOT__core__DOT__instr_cache__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__holy_test_harness__DOT__core__DOT__data_cache__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__holy_test_harness__DOT__core__DOT__csr__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
