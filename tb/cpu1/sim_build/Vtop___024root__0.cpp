// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__ico\n"); );
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

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
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
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__clk 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__clk;
    vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__clk 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__clk;
    vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__aclk 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__clk;
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__aclk 
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

void Vtop___024root___ico_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__holy_test_harness__DOT__axi.awaddr = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__axi.awvalid = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__axi.wdata = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__axi.wlast = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__axi.wvalid = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__axi.bready = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__axi.araddr = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__axi.arvalid = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__axi.rready = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__axi.awburst = 1U;
    vlSymsp->TOP__holy_test_harness__DOT__axi.awlen = 0x7fU;
    vlSymsp->TOP__holy_test_harness__DOT__axi.awsize = 2U;
    vlSymsp->TOP__holy_test_harness__DOT__axi.arlen = 0x7fU;
    vlSymsp->TOP__holy_test_harness__DOT__axi.arsize = 2U;
    vlSymsp->TOP__holy_test_harness__DOT__axi.arburst = 1U;
    vlSymsp->TOP__holy_test_harness__DOT__axi.awid = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__axi.arid = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__axi.wstrb = 0x0fU;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.awready = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.wready = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.bid = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.bresp = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.bvalid = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.arready = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.rid = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.rdata = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.rresp = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.rlast = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.rvalid = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.awready = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.wready = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.bid = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.bresp = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.bvalid = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.arready = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.rid = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.rdata = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.rresp = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.rlast = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.rvalid = 0U;
    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__arbiter__DOT__i_cache_state))))) {
        vlSymsp->TOP__holy_test_harness__DOT__axi.araddr 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.araddr;
        vlSymsp->TOP__holy_test_harness__DOT__axi.awid 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.awid;
        vlSymsp->TOP__holy_test_harness__DOT__axi.awaddr 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.awaddr;
        vlSymsp->TOP__holy_test_harness__DOT__axi.awlen 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.awlen;
        vlSymsp->TOP__holy_test_harness__DOT__axi.awsize 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.awsize;
        vlSymsp->TOP__holy_test_harness__DOT__axi.awburst 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.awburst;
        vlSymsp->TOP__holy_test_harness__DOT__axi.awvalid 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.awvalid;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.awready 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.awready;
        vlSymsp->TOP__holy_test_harness__DOT__axi.wdata 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.wdata;
        vlSymsp->TOP__holy_test_harness__DOT__axi.wstrb 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.wstrb;
        vlSymsp->TOP__holy_test_harness__DOT__axi.wlast 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.wlast;
        vlSymsp->TOP__holy_test_harness__DOT__axi.wvalid 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.wvalid;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.wready 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.wready;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.bid 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.bid;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.bresp 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.bresp;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.bvalid 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.bvalid;
        vlSymsp->TOP__holy_test_harness__DOT__axi.bready 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.bready;
        vlSymsp->TOP__holy_test_harness__DOT__axi.arid 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.arid;
        vlSymsp->TOP__holy_test_harness__DOT__axi.arlen 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.arlen;
        vlSymsp->TOP__holy_test_harness__DOT__axi.arvalid 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.arvalid;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.arready 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.arready;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.rid 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.rid;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.rdata 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.rdata;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.rresp 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.rresp;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.rlast 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.rlast;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.rvalid 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.rvalid;
        vlSymsp->TOP__holy_test_harness__DOT__axi.arsize 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.arsize;
        vlSymsp->TOP__holy_test_harness__DOT__axi.arburst 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.arburst;
        vlSymsp->TOP__holy_test_harness__DOT__axi.rready 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.rready;
        VL_WRITEF_NX("ARBITER I$: state=%0# arvalid=%0b arready=%0b araddr=%x arlen=%0# arsize=%0# arburst=%0# rready=%0b rvalid=%0b\n",0,
                     3,vlSelfRef.holy_test_harness__DOT__core__DOT__arbiter__DOT__i_cache_state,
                     1,(IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.arvalid),
                     1,vlSymsp->TOP__holy_test_harness__DOT__axi.arready,
                     32,vlSymsp->TOP__holy_test_harness__DOT__axi.araddr,
                     8,(IData)(vlSymsp->TOP__holy_test_harness__DOT__axi.arlen),
                     3,vlSymsp->TOP__holy_test_harness__DOT__axi.arsize,
                     2,(IData)(vlSymsp->TOP__holy_test_harness__DOT__axi.arburst),
                     1,vlSymsp->TOP__holy_test_harness__DOT__axi.rready,
                     1,(IData)(vlSymsp->TOP__holy_test_harness__DOT__axi.rvalid));
    } else if (((0U != (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__arbiter__DOT__d_cache_state)) 
                & (0U == (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__arbiter__DOT__i_cache_state)))) {
        vlSymsp->TOP__holy_test_harness__DOT__axi.awid 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.awid;
        vlSymsp->TOP__holy_test_harness__DOT__axi.awaddr 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.awaddr;
        vlSymsp->TOP__holy_test_harness__DOT__axi.awlen 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.awlen;
        vlSymsp->TOP__holy_test_harness__DOT__axi.awsize 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.awsize;
        vlSymsp->TOP__holy_test_harness__DOT__axi.awburst 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.awburst;
        vlSymsp->TOP__holy_test_harness__DOT__axi.awvalid 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.awvalid;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.awready 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.awready;
        vlSymsp->TOP__holy_test_harness__DOT__axi.wdata 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.wdata;
        vlSymsp->TOP__holy_test_harness__DOT__axi.wstrb 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.wstrb;
        vlSymsp->TOP__holy_test_harness__DOT__axi.wlast 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.wlast;
        vlSymsp->TOP__holy_test_harness__DOT__axi.wvalid 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.wvalid;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.wready 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.wready;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.bid 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.bid;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.bresp 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.bresp;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.bvalid 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.bvalid;
        vlSymsp->TOP__holy_test_harness__DOT__axi.bready 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.bready;
        vlSymsp->TOP__holy_test_harness__DOT__axi.arid 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.arid;
        vlSymsp->TOP__holy_test_harness__DOT__axi.araddr 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.araddr;
        vlSymsp->TOP__holy_test_harness__DOT__axi.arlen 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.arlen;
        vlSymsp->TOP__holy_test_harness__DOT__axi.arsize 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.arsize;
        vlSymsp->TOP__holy_test_harness__DOT__axi.arburst 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.arburst;
        vlSymsp->TOP__holy_test_harness__DOT__axi.arvalid 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.arvalid;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.arready 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.arready;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.rid 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.rid;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.rdata 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.rdata;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.rresp 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.rresp;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.rlast 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.rlast;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.rvalid 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.rvalid;
        vlSymsp->TOP__holy_test_harness__DOT__axi.rready 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.rready;
    }
    vlSelfRef.holy_test_harness__DOT__m_axi_mem_awaddr 
        = vlSymsp->TOP__holy_test_harness__DOT__axi.awaddr;
    vlSelfRef.holy_test_harness__DOT__m_axi_mem_awvalid 
        = vlSymsp->TOP__holy_test_harness__DOT__axi.awvalid;
    vlSelfRef.holy_test_harness__DOT__m_axi_mem_wdata 
        = vlSymsp->TOP__holy_test_harness__DOT__axi.wdata;
    vlSelfRef.holy_test_harness__DOT__m_axi_mem_wlast 
        = vlSymsp->TOP__holy_test_harness__DOT__axi.wlast;
    vlSelfRef.holy_test_harness__DOT__m_axi_mem_wvalid 
        = vlSymsp->TOP__holy_test_harness__DOT__axi.wvalid;
    vlSelfRef.holy_test_harness__DOT__m_axi_mem_bready 
        = vlSymsp->TOP__holy_test_harness__DOT__axi.bready;
    vlSelfRef.holy_test_harness__DOT__m_axi_mem_araddr 
        = vlSymsp->TOP__holy_test_harness__DOT__axi.araddr;
    vlSelfRef.holy_test_harness__DOT__m_axi_mem_arvalid 
        = vlSymsp->TOP__holy_test_harness__DOT__axi.arvalid;
    vlSelfRef.holy_test_harness__DOT__m_axi_mem_rready 
        = vlSymsp->TOP__holy_test_harness__DOT__axi.rready;
    vlSelfRef.holy_test_harness__DOT__m_axi_mem_awburst 
        = vlSymsp->TOP__holy_test_harness__DOT__axi.awburst;
    vlSelfRef.holy_test_harness__DOT__m_axi_mem_awlen 
        = vlSymsp->TOP__holy_test_harness__DOT__axi.awlen;
    vlSelfRef.holy_test_harness__DOT__m_axi_mem_awsize 
        = vlSymsp->TOP__holy_test_harness__DOT__axi.awsize;
    vlSelfRef.holy_test_harness__DOT__m_axi_mem_arlen 
        = vlSymsp->TOP__holy_test_harness__DOT__axi.arlen;
    vlSelfRef.holy_test_harness__DOT__m_axi_mem_arsize 
        = vlSymsp->TOP__holy_test_harness__DOT__axi.arsize;
    vlSelfRef.holy_test_harness__DOT__m_axi_mem_arburst 
        = vlSymsp->TOP__holy_test_harness__DOT__axi.arburst;
    vlSelfRef.holy_test_harness__DOT__m_axi_mem_awid 
        = vlSymsp->TOP__holy_test_harness__DOT__axi.awid;
    vlSelfRef.holy_test_harness__DOT__m_axi_mem_arid 
        = vlSymsp->TOP__holy_test_harness__DOT__axi.arid;
    vlSelfRef.holy_test_harness__DOT__m_axi_mem_wstrb 
        = vlSymsp->TOP__holy_test_harness__DOT__axi.wstrb;
    vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__aw_hs 
        = ((IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.awready) 
           & (IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.awvalid));
    vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__w_hs 
        = ((IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.wready) 
           & (IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.wvalid));
    vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__b_hs 
        = ((IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.bready) 
           & (IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.bvalid));
    vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__ar_hs 
        = ((IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.arready) 
           & (IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.arvalid));
    vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__r_hs 
        = ((IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.rready) 
           & (IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.rvalid));
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__aw_hs 
        = ((IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.awready) 
           & (IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.awvalid));
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__w_hs 
        = ((IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.wready) 
           & (IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.wvalid));
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__b_hs 
        = ((IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.bready) 
           & (IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.bvalid));
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__ar_hs 
        = ((IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.arready) 
           & (IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.arvalid));
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__r_hs 
        = ((IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.rready) 
           & (IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.rvalid));
}

void Vtop_axi_if___ico_sequent__TOP__holy_test_harness__DOT__axi__0(Vtop_axi_if* vlSelf);
void Vtop_axi_if___ico_sequent__TOP__holy_test_harness__DOT__core__DOT__m_axi_instr__0(Vtop_axi_if* vlSelf);
void Vtop_axi_if___ico_sequent__TOP__holy_test_harness__DOT__core__DOT__m_axi_data__0(Vtop_axi_if* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        Vtop_axi_if___ico_sequent__TOP__holy_test_harness__DOT__axi__0((&vlSymsp->TOP__holy_test_harness__DOT__axi));
        Vtop_axi_if___ico_sequent__TOP__holy_test_harness__DOT__core__DOT__m_axi_instr__0((&vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr));
        Vtop_axi_if___ico_sequent__TOP__holy_test_harness__DOT__core__DOT__m_axi_data__0((&vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data));
        Vtop___024root___ico_sequent__TOP__1(vlSelf);
    }
}

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = Vtop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__clk) 
                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__holy_test_harness__DOT__core__DOT__csr__DOT__clk__0))) 
                                                      << 4U) 
                                                     | (((((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__holy_test_harness__DOT__core__DOT__data_cache__DOT__clk__0))) 
                                                          << 3U) 
                                                         | (((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__clk) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__holy_test_harness__DOT__core__DOT__instr_cache__DOT__clk__0))) 
                                                            << 2U)) 
                                                        | ((((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__regfile__DOT__clk) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__holy_test_harness__DOT__core__DOT__regfile__DOT__clk__0))) 
                                                            << 1U) 
                                                           | ((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__clk) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__holy_test_harness__DOT__core__DOT__clk__0))))))));
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
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
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

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__flush_cache 
        = ((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__rst_n)
            ? 0U : ((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__flush_flag)
                     ? 0U : (((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__write_enable) 
                              & (0x07c0U == (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__address)))
                              ? vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__next_flush_cache
                              : vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__flush_cache)));
    vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__flush_flag 
        = (1U & vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__flush_cache);
    vlSelfRef.holy_test_harness__DOT__core__DOT__flush_flag 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__flush_flag;
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__holy_test_harness__DOT__core__DOT__data_cache__DOT__state;
    __Vdly__holy_test_harness__DOT__core__DOT__data_cache__DOT__state = 0;
    VlWide<128>/*4095:0*/ __Vdly__holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_data;
    VL_ZERO_W(4096, __Vdly__holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_data);
    CData/*0:0*/ __Vdly__holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty;
    __Vdly__holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty = 0;
    CData/*6:0*/ __Vdly__holy_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr;
    __Vdly__holy_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr = 0;
    // Body
    __Vdly__holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000007fU)) {
        __Vdly__holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[__Vilp1] 
            = vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    __Vdly__holy_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr;
    __Vdly__holy_test_harness__DOT__core__DOT__data_cache__DOT__state 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__state;
    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__state))))) {
        VL_WRITEF_NX("state=%0# hit=%0# read=%0# write=%0# arvalid=%0# arready=%0#\n",0,
                     3,vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__state,
                     1,(IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__hit),
                     1,vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__read_enable,
                     1,(IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__actual_write_enable),
                     1,vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.arvalid,
                     1,(IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.arready));
    }
    if (VL_UNLIKELY((vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__ar_hs))) {
        VL_WRITEF_NX("AR HANDSHAKE addr=%x time=%0t\n",0,
                     32,vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.araddr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    if (VL_UNLIKELY((vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__r_hs))) {
        VL_WRITEF_NX("R HANDSHAKE data=%x last=%0# time=%0t\n",0,
                     32,vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.rdata,
                     1,(IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.rlast),
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    if (vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__rst_n) {
        if ((4U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__state))) {
                __Vdly__holy_test_harness__DOT__core__DOT__data_cache__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__state))) {
                if (vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__r_hs) {
                    VL_ASSIGNSEL_WI(4096, 32, (0x00000fffU 
                                               & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr), 5U)), __Vdly__holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_data, vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.rdata);
                    if (vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.rlast) {
                        vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_block_tag 
                            = vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__req_block_tag;
                        vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_valid = 1U;
                        __Vdly__holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty = 0U;
                        __Vdly__holy_test_harness__DOT__core__DOT__data_cache__DOT__state = 0U;
                    }
                    __Vdly__holy_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr 
                        = (0x0000007fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr)));
                }
            } else if (vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__ar_hs) {
                __Vdly__holy_test_harness__DOT__core__DOT__data_cache__DOT__state = 5U;
            }
        } else if ((2U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__state))) {
                if (((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__b_hs) 
                     & (0U == (IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.bresp)))) {
                    if (vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__csr_flush_status) {
                        vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__csr_flush_status = 0U;
                        __Vdly__holy_test_harness__DOT__core__DOT__data_cache__DOT__state = 0U;
                    } else {
                        __Vdly__holy_test_harness__DOT__core__DOT__data_cache__DOT__state = 4U;
                    }
                }
            } else if (vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__w_hs) {
                __Vdly__holy_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr)));
                if ((0x7fU == (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr))) {
                    __Vdly__holy_test_harness__DOT__core__DOT__data_cache__DOT__state = 3U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__state))) {
            if (vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__aw_hs) {
                __Vdly__holy_test_harness__DOT__core__DOT__data_cache__DOT__state = 2U;
            }
        } else {
            __Vdly__holy_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr = 0U;
            if (vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__flush_flag) {
                vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__csr_flush_status = 1U;
                __Vdly__holy_test_harness__DOT__core__DOT__data_cache__DOT__state = 1U;
            } else if (VL_UNLIKELY((((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__hit) 
                                     & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__write_enable))))) {
                VL_WRITEF_NX("CACHE STORE HIT idx=%0# old=%x new=%x\n",0,
                             7,vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__req_index,
                             32,(((0U == (0x0000001fU 
                                          & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U)))
                                   ? 0U : (vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[
                                           (((IData)(0x0000001fU) 
                                             + (0x00000fffU 
                                                & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U))) 
                                            >> 5U)] 
                                           << ((IData)(0x00000020U) 
                                               - (0x0000001fU 
                                                  & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U))))) 
                                 | (vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[
                                    (0x0000007fU & 
                                     (VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U) 
                                      >> 5U))] >> (0x0000001fU 
                                                   & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U)))),
                             32,(((((0U == (0x0000001fU 
                                            & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U)))
                                     ? 0U : (vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[
                                             (((IData)(0x0000001fU) 
                                               + (0x00000fffU 
                                                  & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U))))) 
                                   | (vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[
                                      (0x0000007fU 
                                       & (VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U) 
                                          >> 5U))] 
                                      >> (0x0000001fU 
                                          & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U)))) 
                                  & (~ vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__byte_enable_mask)) 
                                 | (vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__write_data 
                                    & vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__byte_enable_mask)));
                VL_ASSIGNSEL_WI(4096, 32, (0x00000fffU 
                                           & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U)), __Vdly__holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_data, 
                                (((((0U == (0x0000001fU 
                                            & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U)))
                                     ? 0U : (vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[
                                             (((IData)(0x0000001fU) 
                                               + (0x00000fffU 
                                                  & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U))))) 
                                   | (vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[
                                      (0x0000007fU 
                                       & (VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U) 
                                          >> 5U))] 
                                      >> (0x0000001fU 
                                          & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U)))) 
                                  & (~ vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__byte_enable_mask)) 
                                 | (vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__write_data 
                                    & vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__byte_enable_mask)));
                __Vdly__holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty = 1U;
            } else if (((~ (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__hit)) 
                        & ((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__read_enable) 
                           ^ (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__actual_write_enable)))) {
                __Vdly__holy_test_harness__DOT__core__DOT__data_cache__DOT__state 
                    = ((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty)
                        ? 1U : 4U);
            }
        }
    } else {
        __Vdly__holy_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr = 0U;
        __Vdly__holy_test_harness__DOT__core__DOT__data_cache__DOT__state = 0U;
        vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_valid = 0U;
        __Vdly__holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty = 0U;
        vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__csr_flush_status = 0U;
    }
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty 
        = __Vdly__holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty;
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x0000007fU)) {
        vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[__Vilp2] 
            = __Vdly__holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr 
        = __Vdly__holy_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr;
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__state 
        = __Vdly__holy_test_harness__DOT__core__DOT__data_cache__DOT__state;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.awaddr = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.awvalid = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.wvalid = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.bready = 0U;
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
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.arvalid = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.rready = 0U;
    if ((4U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__state)))) {
                vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.arvalid = 1U;
            }
            if ((1U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__state))) {
                vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.rready = 1U;
            }
        }
    }
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_state 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__state;
    vlSelfRef.holy_test_harness__DOT__core__DOT__d_cache_state 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_state;
    vlSelfRef.holy_test_harness__DOT__core__DOT__arbiter__DOT__d_cache_state 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__d_cache_state;
}

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__holy_test_harness__DOT__core__DOT__instr_cache__DOT__state;
    __Vdly__holy_test_harness__DOT__core__DOT__instr_cache__DOT__state = 0;
    VlWide<128>/*4095:0*/ __Vdly__holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data;
    VL_ZERO_W(4096, __Vdly__holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data);
    CData/*0:0*/ __Vdly__holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty;
    __Vdly__holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty = 0;
    CData/*6:0*/ __Vdly__holy_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr;
    __Vdly__holy_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr = 0;
    // Body
    __Vdly__holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty;
    __Vdly__holy_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000007fU)) {
        __Vdly__holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[__Vilp1] 
            = vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    __Vdly__holy_test_harness__DOT__core__DOT__instr_cache__DOT__state 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__state;
    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__state))))) {
        VL_WRITEF_NX("state=%0# hit=%0# read=%0# write=%0# arvalid=%0# arready=%0#\n",0,
                     3,vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__state,
                     1,(IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__hit),
                     1,vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__read_enable,
                     1,(IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__actual_write_enable),
                     1,vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.arvalid,
                     1,(IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.arready));
    }
    if (VL_UNLIKELY((vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__ar_hs))) {
        VL_WRITEF_NX("AR HANDSHAKE addr=%x time=%0t\n",0,
                     32,vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.araddr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    if (VL_UNLIKELY((vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__r_hs))) {
        VL_WRITEF_NX("R HANDSHAKE data=%x last=%0# time=%0t\n",0,
                     32,vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.rdata,
                     1,(IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.rlast),
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    if (vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__rst_n) {
        if ((4U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__state))) {
                __Vdly__holy_test_harness__DOT__core__DOT__instr_cache__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__state))) {
                if (vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__r_hs) {
                    VL_ASSIGNSEL_WI(4096, 32, (0x00000fffU 
                                               & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr), 5U)), __Vdly__holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data, vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.rdata);
                    if (vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.rlast) {
                        vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_block_tag 
                            = vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__req_block_tag;
                        vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_valid = 1U;
                        __Vdly__holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty = 0U;
                        __Vdly__holy_test_harness__DOT__core__DOT__instr_cache__DOT__state = 0U;
                    }
                    __Vdly__holy_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr 
                        = (0x0000007fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr)));
                }
            } else if (vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__ar_hs) {
                __Vdly__holy_test_harness__DOT__core__DOT__instr_cache__DOT__state = 5U;
            }
        } else if ((2U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__state))) {
                if (((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__b_hs) 
                     & (0U == (IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.bresp)))) {
                    if (vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__csr_flush_status) {
                        vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__csr_flush_status = 0U;
                        __Vdly__holy_test_harness__DOT__core__DOT__instr_cache__DOT__state = 0U;
                    } else {
                        __Vdly__holy_test_harness__DOT__core__DOT__instr_cache__DOT__state = 4U;
                    }
                }
            } else if (vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__w_hs) {
                __Vdly__holy_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr)));
                if ((0x7fU == (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr))) {
                    __Vdly__holy_test_harness__DOT__core__DOT__instr_cache__DOT__state = 3U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__state))) {
            if (vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__aw_hs) {
                __Vdly__holy_test_harness__DOT__core__DOT__instr_cache__DOT__state = 2U;
            }
        } else {
            __Vdly__holy_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr = 0U;
            if (vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__flush_flag) {
                vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__csr_flush_status = 1U;
                __Vdly__holy_test_harness__DOT__core__DOT__instr_cache__DOT__state = 1U;
            } else if (VL_UNLIKELY((((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__hit) 
                                     & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__write_enable))))) {
                VL_WRITEF_NX("CACHE STORE HIT idx=%0# old=%x new=%x\n",0,
                             7,vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__req_index,
                             32,(((0U == (0x0000001fU 
                                          & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__req_index), 5U)))
                                   ? 0U : (vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[
                                           (((IData)(0x0000001fU) 
                                             + (0x00000fffU 
                                                & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__req_index), 5U))) 
                                            >> 5U)] 
                                           << ((IData)(0x00000020U) 
                                               - (0x0000001fU 
                                                  & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__req_index), 5U))))) 
                                 | (vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[
                                    (0x0000007fU & 
                                     (VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__req_index), 5U) 
                                      >> 5U))] >> (0x0000001fU 
                                                   & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__req_index), 5U)))),
                             32,(((((0U == (0x0000001fU 
                                            & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__req_index), 5U)))
                                     ? 0U : (vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[
                                             (((IData)(0x0000001fU) 
                                               + (0x00000fffU 
                                                  & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__req_index), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__req_index), 5U))))) 
                                   | (vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[
                                      (0x0000007fU 
                                       & (VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__req_index), 5U) 
                                          >> 5U))] 
                                      >> (0x0000001fU 
                                          & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__req_index), 5U)))) 
                                  & (~ vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__byte_enable_mask)) 
                                 | (vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__write_data 
                                    & vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__byte_enable_mask)));
                VL_ASSIGNSEL_WI(4096, 32, (0x00000fffU 
                                           & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__req_index), 5U)), __Vdly__holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data, 
                                (((((0U == (0x0000001fU 
                                            & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__req_index), 5U)))
                                     ? 0U : (vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[
                                             (((IData)(0x0000001fU) 
                                               + (0x00000fffU 
                                                  & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__req_index), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__req_index), 5U))))) 
                                   | (vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[
                                      (0x0000007fU 
                                       & (VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__req_index), 5U) 
                                          >> 5U))] 
                                      >> (0x0000001fU 
                                          & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__req_index), 5U)))) 
                                  & (~ vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__byte_enable_mask)) 
                                 | (vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__write_data 
                                    & vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__byte_enable_mask)));
                __Vdly__holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty = 1U;
            } else if (((~ (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__hit)) 
                        & ((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__read_enable) 
                           ^ (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__actual_write_enable)))) {
                __Vdly__holy_test_harness__DOT__core__DOT__instr_cache__DOT__state 
                    = ((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty)
                        ? 1U : 4U);
            }
        }
    } else {
        __Vdly__holy_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr = 0U;
        __Vdly__holy_test_harness__DOT__core__DOT__instr_cache__DOT__state = 0U;
        vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_valid = 0U;
        __Vdly__holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty = 0U;
        vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__csr_flush_status = 0U;
    }
    vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty 
        = __Vdly__holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty;
    vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr 
        = __Vdly__holy_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr;
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x0000007fU)) {
        vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[__Vilp2] 
            = __Vdly__holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__state 
        = __Vdly__holy_test_harness__DOT__core__DOT__instr_cache__DOT__state;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.awaddr = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.awvalid = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.wvalid = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.bready = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__state))) {
                vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.awaddr 
                    = (vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_block_tag 
                       << 9U);
                vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.awvalid = 1U;
            }
        }
        if ((2U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__state)))) {
                vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.wvalid = 1U;
            }
            if ((1U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__state))) {
                vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.bready = 1U;
            }
        }
    }
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.arvalid = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.rready = 0U;
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
    }
    vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_state 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__state;
    vlSelfRef.holy_test_harness__DOT__core__DOT__i_cache_state 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_state;
    vlSelfRef.holy_test_harness__DOT__core__DOT__arbiter__DOT__i_cache_state 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__i_cache_state;
}

void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__holy_test_harness__DOT__core__DOT__regfile__DOT__registers__v0;
    __VdlyVal__holy_test_harness__DOT__core__DOT__regfile__DOT__registers__v0 = 0;
    CData/*4:0*/ __VdlyDim0__holy_test_harness__DOT__core__DOT__regfile__DOT__registers__v0;
    __VdlyDim0__holy_test_harness__DOT__core__DOT__regfile__DOT__registers__v0 = 0;
    CData/*4:0*/ __VdlyDim0__holy_test_harness__DOT__core__DOT__regfile__DOT__registers__v1;
    __VdlyDim0__holy_test_harness__DOT__core__DOT__regfile__DOT__registers__v1 = 0;
    // Body
    if (vlSelfRef.holy_test_harness__DOT__core__DOT__regfile__DOT__rst_n) {
        if (((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__regfile__DOT__write_enable) 
             & (0U != (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__regfile__DOT__address3)))) {
            __VdlyVal__holy_test_harness__DOT__core__DOT__regfile__DOT__registers__v0 
                = vlSelfRef.holy_test_harness__DOT__core__DOT__regfile__DOT__write_data;
            __VdlyDim0__holy_test_harness__DOT__core__DOT__regfile__DOT__registers__v0 
                = vlSelfRef.holy_test_harness__DOT__core__DOT__regfile__DOT__address3;
            vlSelfRef.__VdlyCommitQueueholy_test_harness__DOT__core__DOT__regfile__DOT__registers.enqueue(__VdlyVal__holy_test_harness__DOT__core__DOT__regfile__DOT__registers__v0, (IData)(__VdlyDim0__holy_test_harness__DOT__core__DOT__regfile__DOT__registers__v0));
        }
    } else {
        vlSelfRef.holy_test_harness__DOT__core__DOT__regfile__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000020U, vlSelfRef.holy_test_harness__DOT__core__DOT__regfile__DOT__unnamedblk1__DOT__i)) {
            __VdlyDim0__holy_test_harness__DOT__core__DOT__regfile__DOT__registers__v1 
                = (0x0000001fU & vlSelfRef.holy_test_harness__DOT__core__DOT__regfile__DOT__unnamedblk1__DOT__i);
            vlSelfRef.__VdlyCommitQueueholy_test_harness__DOT__core__DOT__regfile__DOT__registers.enqueue(0U, (IData)(__VdlyDim0__holy_test_harness__DOT__core__DOT__regfile__DOT__registers__v1));
            vlSelfRef.holy_test_harness__DOT__core__DOT__regfile__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.holy_test_harness__DOT__core__DOT__regfile__DOT__unnamedblk1__DOT__i);
        }
    }
    vlSelfRef.__VdlyCommitQueueholy_test_harness__DOT__core__DOT__regfile__DOT__registers.commit(vlSelfRef.holy_test_harness__DOT__core__DOT__regfile__DOT__registers);
}

void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.holy_test_harness__DOT__core__DOT__rst_n) {
        if ((1U & (~ (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__global_stall)))) {
            vlSelfRef.holy_test_harness__DOT__core__DOT__pc 
                = vlSelfRef.holy_test_harness__DOT__core__DOT__pc_next;
        }
    } else {
        vlSelfRef.holy_test_harness__DOT__core__DOT__pc = 0U;
    }
    vlSelfRef.holy_test_harness__DOT__core__DOT__pc_plus_four 
        = ((IData)(4U) + vlSelfRef.holy_test_harness__DOT__core__DOT__pc);
    vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__address 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__pc;
    vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__req_index 
        = (0x0000007fU & (vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__address 
                          >> 2U));
    vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__req_block_tag 
        = (vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__address 
           >> 9U);
}

void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__flush_flag 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__flush_flag;
    vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__flush_flag 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__flush_flag;
}

void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
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
    if (vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__branch) {
        vlSelfRef.holy_test_harness__DOT__core__DOT__branch = 1U;
        vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__alu_control 
            = ((4U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__func3))
                ? ((2U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__func3))
                    ? 7U : 5U) : ((2U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__func3))
                                   ? 0U : 1U));
    } else {
        vlSelfRef.holy_test_harness__DOT__core__DOT__branch = 0U;
        vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__alu_control 
            = ((0U == (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__alu_op))
                ? 0U : ((2U == (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__alu_op))
                         ? ((4U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__func3))
                             ? ((2U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__func3))
                                 ? ((1U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__func3))
                                     ? 2U : 3U) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__func3))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__func7))
                                                     ? 0x0cU
                                                     : 9U)
                                                    : 4U))
                             : ((2U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__func3))
                                 ? ((1U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__func3))
                                     ? 7U : 5U) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__func3))
                                                    ? 8U
                                                    : 
                                                   ((0x20U 
                                                     == (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__func7))
                                                     ? 1U
                                                     : 0U))))
                         : 0U));
    }
    vlSelfRef.holy_test_harness__DOT__core__DOT__imm_source 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__imm_source;
    vlSelfRef.holy_test_harness__DOT__core__DOT__regfile__DOT__write_enable 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__reg_write;
    vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__write_enable 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__csr_write_enable;
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__write_enable 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__mem_write;
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__read_enable 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__mem_read_enable;
    vlSelfRef.holy_test_harness__DOT__core__DOT__alu_control 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__alu_control;
    vlSelfRef.holy_test_harness__DOT__core__DOT__sign_extender__DOT__imm_source 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__imm_source;
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
    vlSelfRef.holy_test_harness__DOT__core__DOT__immediate 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__sign_extender__DOT__immediate;
}

void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__read_data 
        = ((0x07c0U == (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__address))
            ? vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__flush_cache
            : 0U);
    vlSelfRef.holy_test_harness__DOT__core__DOT__csr_read_data 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__read_data;
}

void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.holy_test_harness__DOT__core__DOT__regfile__DOT__read_data2 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__regfile__DOT__registers
        [vlSelfRef.holy_test_harness__DOT__core__DOT__regfile__DOT__address2];
    vlSelfRef.holy_test_harness__DOT__core__DOT__regfile__DOT__read_data1 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__regfile__DOT__registers
        [vlSelfRef.holy_test_harness__DOT__core__DOT__regfile__DOT__address1];
    vlSelfRef.holy_test_harness__DOT__core__DOT__read_reg2 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__regfile__DOT__read_data2;
    vlSelfRef.holy_test_harness__DOT__core__DOT__read_reg1 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__regfile__DOT__read_data1;
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__write_data 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__read_reg2;
    vlSelfRef.holy_test_harness__DOT__core__DOT__alu_src2 
        = ((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__alu_source)
            ? vlSelfRef.holy_test_harness__DOT__core__DOT__immediate
            : vlSelfRef.holy_test_harness__DOT__core__DOT__read_reg2);
    vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__write_data 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__read_reg1;
    vlSelfRef.holy_test_harness__DOT__core__DOT__alu_src1 
        = ((0x17U == (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__op))
            ? vlSelfRef.holy_test_harness__DOT__core__DOT__pc
            : vlSelfRef.holy_test_harness__DOT__core__DOT__read_reg1);
    vlSelfRef.holy_test_harness__DOT__core__DOT__pc_target 
        = (((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__alu_source) 
            & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__jump))
            ? (0xfffffffeU & (vlSelfRef.holy_test_harness__DOT__core__DOT__immediate 
                              + vlSelfRef.holy_test_harness__DOT__core__DOT__read_reg1))
            : (vlSelfRef.holy_test_harness__DOT__core__DOT__immediate 
               + vlSelfRef.holy_test_harness__DOT__core__DOT__pc));
    vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__s2 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__alu_src2;
    vlSelfRef.holy_test_harness__DOT__core__DOT__alu_inst__DOT__s1 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__alu_src1;
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
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__req_index 
        = (0x0000007fU & (vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__address 
                          >> 2U));
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__req_block_tag 
        = (vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__address 
           >> 9U);
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
    vlSelfRef.holy_test_harness__DOT__core__DOT__pc_source 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__control_unit__DOT__pc_source;
    vlSelfRef.holy_test_harness__DOT__core__DOT__pc_next 
        = (((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__jump) 
            | (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__pc_source))
            ? vlSelfRef.holy_test_harness__DOT__core__DOT__pc_target
            : vlSelfRef.holy_test_harness__DOT__core__DOT__pc_plus_four);
}

void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__nand_result 
        = ((~ vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__write_data) 
           & vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__read_data);
    vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__or_result 
        = (vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__read_data 
           | vlSelfRef.holy_test_harness__DOT__core__DOT__csr__DOT__write_data);
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
}

void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__hit 
        = ((vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_block_tag 
            == vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__req_block_tag) 
           & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_valid));
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.araddr = 0U;
    if ((4U & (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__state)))) {
                vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.araddr 
                    = (vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__req_block_tag 
                       << 9U);
            }
        }
    }
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
    }
    vlSymsp->TOP__holy_test_harness__DOT__axi.awaddr = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__axi.awvalid = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__axi.wdata = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__axi.wlast = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__axi.wvalid = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__axi.bready = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__axi.araddr = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__axi.arvalid = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__axi.rready = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__axi.awburst = 1U;
    vlSymsp->TOP__holy_test_harness__DOT__axi.awlen = 0x7fU;
    vlSymsp->TOP__holy_test_harness__DOT__axi.awsize = 2U;
    vlSymsp->TOP__holy_test_harness__DOT__axi.arlen = 0x7fU;
    vlSymsp->TOP__holy_test_harness__DOT__axi.arsize = 2U;
    vlSymsp->TOP__holy_test_harness__DOT__axi.arburst = 1U;
    vlSymsp->TOP__holy_test_harness__DOT__axi.awid = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__axi.arid = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__axi.wstrb = 0x0fU;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.awready = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.wready = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.bid = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.bresp = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.bvalid = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.arready = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.rid = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.rdata = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.rresp = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.rlast = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.rvalid = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.awready = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.wready = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.bid = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.bresp = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.bvalid = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.arready = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.rid = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.rdata = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.rresp = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.rlast = 0U;
    vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.rvalid = 0U;
    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__arbiter__DOT__i_cache_state))))) {
        vlSymsp->TOP__holy_test_harness__DOT__axi.araddr 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.araddr;
        vlSymsp->TOP__holy_test_harness__DOT__axi.awid 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.awid;
        vlSymsp->TOP__holy_test_harness__DOT__axi.awaddr 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.awaddr;
        vlSymsp->TOP__holy_test_harness__DOT__axi.awlen 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.awlen;
        vlSymsp->TOP__holy_test_harness__DOT__axi.awsize 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.awsize;
        vlSymsp->TOP__holy_test_harness__DOT__axi.awburst 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.awburst;
        vlSymsp->TOP__holy_test_harness__DOT__axi.awvalid 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.awvalid;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.awready 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.awready;
        vlSymsp->TOP__holy_test_harness__DOT__axi.wdata 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.wdata;
        vlSymsp->TOP__holy_test_harness__DOT__axi.wstrb 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.wstrb;
        vlSymsp->TOP__holy_test_harness__DOT__axi.wlast 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.wlast;
        vlSymsp->TOP__holy_test_harness__DOT__axi.wvalid 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.wvalid;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.wready 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.wready;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.bid 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.bid;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.bresp 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.bresp;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.bvalid 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.bvalid;
        vlSymsp->TOP__holy_test_harness__DOT__axi.bready 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.bready;
        vlSymsp->TOP__holy_test_harness__DOT__axi.arid 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.arid;
        vlSymsp->TOP__holy_test_harness__DOT__axi.arlen 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.arlen;
        vlSymsp->TOP__holy_test_harness__DOT__axi.arvalid 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.arvalid;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.arready 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.arready;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.rid 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.rid;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.rdata 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.rdata;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.rresp 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.rresp;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.rlast 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.rlast;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.rvalid 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.rvalid;
        vlSymsp->TOP__holy_test_harness__DOT__axi.arsize 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.arsize;
        vlSymsp->TOP__holy_test_harness__DOT__axi.arburst 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.arburst;
        vlSymsp->TOP__holy_test_harness__DOT__axi.rready 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.rready;
        VL_WRITEF_NX("ARBITER I$: state=%0# arvalid=%0b arready=%0b araddr=%x arlen=%0# arsize=%0# arburst=%0# rready=%0b rvalid=%0b\n",0,
                     3,vlSelfRef.holy_test_harness__DOT__core__DOT__arbiter__DOT__i_cache_state,
                     1,(IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.arvalid),
                     1,vlSymsp->TOP__holy_test_harness__DOT__axi.arready,
                     32,vlSymsp->TOP__holy_test_harness__DOT__axi.araddr,
                     8,(IData)(vlSymsp->TOP__holy_test_harness__DOT__axi.arlen),
                     3,vlSymsp->TOP__holy_test_harness__DOT__axi.arsize,
                     2,(IData)(vlSymsp->TOP__holy_test_harness__DOT__axi.arburst),
                     1,vlSymsp->TOP__holy_test_harness__DOT__axi.rready,
                     1,(IData)(vlSymsp->TOP__holy_test_harness__DOT__axi.rvalid));
    } else if (((0U != (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__arbiter__DOT__d_cache_state)) 
                & (0U == (IData)(vlSelfRef.holy_test_harness__DOT__core__DOT__arbiter__DOT__i_cache_state)))) {
        vlSymsp->TOP__holy_test_harness__DOT__axi.awid 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.awid;
        vlSymsp->TOP__holy_test_harness__DOT__axi.awaddr 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.awaddr;
        vlSymsp->TOP__holy_test_harness__DOT__axi.awlen 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.awlen;
        vlSymsp->TOP__holy_test_harness__DOT__axi.awsize 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.awsize;
        vlSymsp->TOP__holy_test_harness__DOT__axi.awburst 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.awburst;
        vlSymsp->TOP__holy_test_harness__DOT__axi.awvalid 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.awvalid;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.awready 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.awready;
        vlSymsp->TOP__holy_test_harness__DOT__axi.wdata 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.wdata;
        vlSymsp->TOP__holy_test_harness__DOT__axi.wstrb 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.wstrb;
        vlSymsp->TOP__holy_test_harness__DOT__axi.wlast 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.wlast;
        vlSymsp->TOP__holy_test_harness__DOT__axi.wvalid 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.wvalid;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.wready 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.wready;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.bid 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.bid;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.bresp 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.bresp;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.bvalid 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.bvalid;
        vlSymsp->TOP__holy_test_harness__DOT__axi.bready 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.bready;
        vlSymsp->TOP__holy_test_harness__DOT__axi.arid 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.arid;
        vlSymsp->TOP__holy_test_harness__DOT__axi.araddr 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.araddr;
        vlSymsp->TOP__holy_test_harness__DOT__axi.arlen 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.arlen;
        vlSymsp->TOP__holy_test_harness__DOT__axi.arsize 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.arsize;
        vlSymsp->TOP__holy_test_harness__DOT__axi.arburst 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.arburst;
        vlSymsp->TOP__holy_test_harness__DOT__axi.arvalid 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.arvalid;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.arready 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.arready;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.rid 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.rid;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.rdata 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.rdata;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.rresp 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.rresp;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.rlast 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.rlast;
        vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.rvalid 
            = vlSymsp->TOP__holy_test_harness__DOT__axi.rvalid;
        vlSymsp->TOP__holy_test_harness__DOT__axi.rready 
            = vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.rready;
    }
    vlSelfRef.holy_test_harness__DOT__core__DOT__d_cache_stall 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_stall;
    vlSelfRef.holy_test_harness__DOT__core__DOT__mem_read 
        = vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__read_data;
    vlSelfRef.holy_test_harness__DOT__m_axi_mem_awaddr 
        = vlSymsp->TOP__holy_test_harness__DOT__axi.awaddr;
    vlSelfRef.holy_test_harness__DOT__m_axi_mem_awvalid 
        = vlSymsp->TOP__holy_test_harness__DOT__axi.awvalid;
    vlSelfRef.holy_test_harness__DOT__m_axi_mem_wdata 
        = vlSymsp->TOP__holy_test_harness__DOT__axi.wdata;
    vlSelfRef.holy_test_harness__DOT__m_axi_mem_wlast 
        = vlSymsp->TOP__holy_test_harness__DOT__axi.wlast;
    vlSelfRef.holy_test_harness__DOT__m_axi_mem_wvalid 
        = vlSymsp->TOP__holy_test_harness__DOT__axi.wvalid;
    vlSelfRef.holy_test_harness__DOT__m_axi_mem_bready 
        = vlSymsp->TOP__holy_test_harness__DOT__axi.bready;
    vlSelfRef.holy_test_harness__DOT__m_axi_mem_araddr 
        = vlSymsp->TOP__holy_test_harness__DOT__axi.araddr;
    vlSelfRef.holy_test_harness__DOT__m_axi_mem_arvalid 
        = vlSymsp->TOP__holy_test_harness__DOT__axi.arvalid;
    vlSelfRef.holy_test_harness__DOT__m_axi_mem_rready 
        = vlSymsp->TOP__holy_test_harness__DOT__axi.rready;
    vlSelfRef.holy_test_harness__DOT__m_axi_mem_awburst 
        = vlSymsp->TOP__holy_test_harness__DOT__axi.awburst;
    vlSelfRef.holy_test_harness__DOT__m_axi_mem_awlen 
        = vlSymsp->TOP__holy_test_harness__DOT__axi.awlen;
    vlSelfRef.holy_test_harness__DOT__m_axi_mem_awsize 
        = vlSymsp->TOP__holy_test_harness__DOT__axi.awsize;
    vlSelfRef.holy_test_harness__DOT__m_axi_mem_arlen 
        = vlSymsp->TOP__holy_test_harness__DOT__axi.arlen;
    vlSelfRef.holy_test_harness__DOT__m_axi_mem_arsize 
        = vlSymsp->TOP__holy_test_harness__DOT__axi.arsize;
    vlSelfRef.holy_test_harness__DOT__m_axi_mem_arburst 
        = vlSymsp->TOP__holy_test_harness__DOT__axi.arburst;
    vlSelfRef.holy_test_harness__DOT__m_axi_mem_awid 
        = vlSymsp->TOP__holy_test_harness__DOT__axi.awid;
    vlSelfRef.holy_test_harness__DOT__m_axi_mem_arid 
        = vlSymsp->TOP__holy_test_harness__DOT__axi.arid;
    vlSelfRef.holy_test_harness__DOT__m_axi_mem_wstrb 
        = vlSymsp->TOP__holy_test_harness__DOT__axi.wstrb;
    vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__aw_hs 
        = ((IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.awready) 
           & (IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.awvalid));
    vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__w_hs 
        = ((IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.wready) 
           & (IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.wvalid));
    vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__b_hs 
        = ((IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.bready) 
           & (IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.bvalid));
    vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__ar_hs 
        = ((IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.arready) 
           & (IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.arvalid));
    vlSelfRef.holy_test_harness__DOT__core__DOT__instr_cache__DOT__r_hs 
        = ((IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.rready) 
           & (IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr.rvalid));
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__aw_hs 
        = ((IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.awready) 
           & (IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.awvalid));
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__w_hs 
        = ((IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.wready) 
           & (IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.wvalid));
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__b_hs 
        = ((IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.bready) 
           & (IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.bvalid));
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__ar_hs 
        = ((IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.arready) 
           & (IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.arvalid));
    vlSelfRef.holy_test_harness__DOT__core__DOT__data_cache__DOT__r_hs 
        = ((IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.rready) 
           & (IData)(vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data.rvalid));
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

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        Vtop_axi_if___ico_sequent__TOP__holy_test_harness__DOT__core__DOT__m_axi_data__0((&vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_data));
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
        Vtop_axi_if___ico_sequent__TOP__holy_test_harness__DOT__core__DOT__m_axi_instr__0((&vlSymsp->TOP__holy_test_harness__DOT__core__DOT__m_axi_instr));
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x0000000000000015ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x0000000000000017ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0x000000000000000fULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__4(vlSelf);
    }
}

void Vtop___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    Vtop___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/Users/johananil/Desktop/cpu/tb/cpu1/harness.sv", 4, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vtop___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/Users/johananil/Desktop/cpu/tb/cpu1/harness.sv", 4, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/Users/johananil/Desktop/cpu/tb/cpu1/harness.sv", 4, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vtop___024root___eval_phase__act(vlSelf));
    } while (Vtop___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
