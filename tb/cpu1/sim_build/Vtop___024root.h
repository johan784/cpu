// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
class Vtop_axi_if;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final {
  public:
    // CELLS
    Vtop_axi_if* __PVT__holy_test_harness__DOT__axi;
    Vtop_axi_if* __PVT__holy_test_harness__DOT__core__DOT__m_axi_instr;
    Vtop_axi_if* __PVT__holy_test_harness__DOT__core__DOT__m_axi_data;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ holy_test_harness__DOT__clk;
        CData/*0:0*/ holy_test_harness__DOT__aclk;
        CData/*0:0*/ holy_test_harness__DOT__rst_n;
        CData/*7:0*/ holy_test_harness__DOT__m_axi_mem_awlen;
        CData/*2:0*/ holy_test_harness__DOT__m_axi_mem_awsize;
        CData/*1:0*/ holy_test_harness__DOT__m_axi_mem_awburst;
        CData/*3:0*/ holy_test_harness__DOT__m_axi_mem_awid;
        CData/*0:0*/ holy_test_harness__DOT__m_axi_mem_awvalid;
        CData/*0:0*/ holy_test_harness__DOT__m_axi_mem_awready;
        CData/*3:0*/ holy_test_harness__DOT__m_axi_mem_wstrb;
        CData/*0:0*/ holy_test_harness__DOT__m_axi_mem_wlast;
        CData/*0:0*/ holy_test_harness__DOT__m_axi_mem_wvalid;
        CData/*0:0*/ holy_test_harness__DOT__m_axi_mem_wready;
        CData/*1:0*/ holy_test_harness__DOT__m_axi_mem_bresp;
        CData/*3:0*/ holy_test_harness__DOT__m_axi_mem_bid;
        CData/*0:0*/ holy_test_harness__DOT__m_axi_mem_bvalid;
        CData/*0:0*/ holy_test_harness__DOT__m_axi_mem_bready;
        CData/*7:0*/ holy_test_harness__DOT__m_axi_mem_arlen;
        CData/*2:0*/ holy_test_harness__DOT__m_axi_mem_arsize;
        CData/*1:0*/ holy_test_harness__DOT__m_axi_mem_arburst;
        CData/*3:0*/ holy_test_harness__DOT__m_axi_mem_arid;
        CData/*0:0*/ holy_test_harness__DOT__m_axi_mem_arvalid;
        CData/*0:0*/ holy_test_harness__DOT__m_axi_mem_arready;
        CData/*1:0*/ holy_test_harness__DOT__m_axi_mem_rresp;
        CData/*3:0*/ holy_test_harness__DOT__m_axi_mem_rid;
        CData/*0:0*/ holy_test_harness__DOT__m_axi_mem_rlast;
        CData/*0:0*/ holy_test_harness__DOT__m_axi_mem_rvalid;
        CData/*0:0*/ holy_test_harness__DOT__m_axi_mem_rready;
        CData/*0:0*/ holy_test_harness__DOT__m_axi_mem_aclk;
        CData/*0:0*/ holy_test_harness__DOT__m_axi_mem_aresetn;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__clk;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__rst_n;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__global_stall;
        CData/*6:0*/ holy_test_harness__DOT__core__DOT__op;
        CData/*2:0*/ holy_test_harness__DOT__core__DOT__f3;
        CData/*6:0*/ holy_test_harness__DOT__core__DOT__f7;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__alu_zero;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__branch;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__pc_source;
        CData/*3:0*/ holy_test_harness__DOT__core__DOT__alu_control;
        CData/*2:0*/ holy_test_harness__DOT__core__DOT__imm_source;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__mem_write;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__reg_write;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__alu_source;
        CData/*1:0*/ holy_test_harness__DOT__core__DOT__write_back_source;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__jump;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__mem_read_enable;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__csr_write_enable;
        CData/*4:0*/ holy_test_harness__DOT__core__DOT__source_reg1;
        CData/*4:0*/ holy_test_harness__DOT__core__DOT__source_reg2;
        CData/*4:0*/ holy_test_harness__DOT__core__DOT__dest_reg;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__alu_last_bit;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__i_cache_stall;
        CData/*2:0*/ holy_test_harness__DOT__core__DOT__i_cache_state;
        CData/*2:0*/ holy_test_harness__DOT__core__DOT__d_cache_state;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__d_cache_stall;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__flush_flag;
        CData/*6:0*/ holy_test_harness__DOT__core__DOT__control_unit__DOT__op;
        CData/*2:0*/ holy_test_harness__DOT__core__DOT__control_unit__DOT__func3;
        CData/*6:0*/ holy_test_harness__DOT__core__DOT__control_unit__DOT__func7;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__control_unit__DOT__alu_zero;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__control_unit__DOT__alu_last_bit;
        CData/*3:0*/ holy_test_harness__DOT__core__DOT__control_unit__DOT__alu_control;
        CData/*2:0*/ holy_test_harness__DOT__core__DOT__control_unit__DOT__imm_source;
    };
    struct {
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__control_unit__DOT__mem_write;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__control_unit__DOT__mem_read;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__control_unit__DOT__reg_write;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__control_unit__DOT__alu_source;
        CData/*1:0*/ holy_test_harness__DOT__core__DOT__control_unit__DOT__write_back_source;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__control_unit__DOT__branch;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__control_unit__DOT__pc_source;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__control_unit__DOT__jump;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__control_unit__DOT__csr_write_enable;
        CData/*1:0*/ holy_test_harness__DOT__core__DOT__control_unit__DOT__alu_op;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__regfile__DOT__clk;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__regfile__DOT__rst_n;
        CData/*4:0*/ holy_test_harness__DOT__core__DOT__regfile__DOT__address1;
        CData/*4:0*/ holy_test_harness__DOT__core__DOT__regfile__DOT__address2;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__regfile__DOT__write_enable;
        CData/*4:0*/ holy_test_harness__DOT__core__DOT__regfile__DOT__address3;
        CData/*2:0*/ holy_test_harness__DOT__core__DOT__sign_extender__DOT__imm_source;
        CData/*3:0*/ holy_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__alu_inst__DOT__zero;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__alu_inst__DOT__alu_last_bit;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__instr_cache__DOT__clk;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__instr_cache__DOT__rst_n;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__instr_cache__DOT__aclk;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__instr_cache__DOT__read_enable;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__instr_cache__DOT__write_enable;
        CData/*3:0*/ holy_test_harness__DOT__core__DOT__instr_cache__DOT__byte_enable;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__instr_cache__DOT__flush_flag;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_stall;
        CData/*2:0*/ holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_state;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_valid;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty;
        CData/*6:0*/ holy_test_harness__DOT__core__DOT__instr_cache__DOT__req_index;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__instr_cache__DOT__hit;
        CData/*2:0*/ holy_test_harness__DOT__core__DOT__instr_cache__DOT__state;
        CData/*6:0*/ holy_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__instr_cache__DOT__actual_write_enable;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__instr_cache__DOT__ar_hs;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__instr_cache__DOT__aw_hs;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__instr_cache__DOT__w_hs;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__instr_cache__DOT__b_hs;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__instr_cache__DOT__r_hs;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__instr_cache__DOT__csr_flush_status;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__data_cache__DOT__clk;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__data_cache__DOT__rst_n;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__data_cache__DOT__aclk;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__data_cache__DOT__read_enable;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__data_cache__DOT__write_enable;
        CData/*3:0*/ holy_test_harness__DOT__core__DOT__data_cache__DOT__byte_enable;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__data_cache__DOT__flush_flag;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_stall;
        CData/*2:0*/ holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_state;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_valid;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty;
        CData/*6:0*/ holy_test_harness__DOT__core__DOT__data_cache__DOT__req_index;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__data_cache__DOT__hit;
        CData/*2:0*/ holy_test_harness__DOT__core__DOT__data_cache__DOT__state;
        CData/*6:0*/ holy_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__data_cache__DOT__actual_write_enable;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__data_cache__DOT__ar_hs;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__data_cache__DOT__aw_hs;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__data_cache__DOT__w_hs;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__data_cache__DOT__b_hs;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__data_cache__DOT__r_hs;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__data_cache__DOT__csr_flush_status;
    };
    struct {
        CData/*2:0*/ holy_test_harness__DOT__core__DOT__arbiter__DOT__i_cache_state;
        CData/*2:0*/ holy_test_harness__DOT__core__DOT__arbiter__DOT__d_cache_state;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__csr__DOT__clk;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__csr__DOT__rst_n;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__csr__DOT__write_enable;
        CData/*2:0*/ holy_test_harness__DOT__core__DOT__csr__DOT__f3;
        CData/*0:0*/ holy_test_harness__DOT__core__DOT__csr__DOT__flush_flag;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__holy_test_harness__DOT__core__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__holy_test_harness__DOT__core__DOT__regfile__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__holy_test_harness__DOT__core__DOT__instr_cache__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__holy_test_harness__DOT__core__DOT__data_cache__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__holy_test_harness__DOT__core__DOT__csr__DOT__clk__0;
        SData/*11:0*/ holy_test_harness__DOT__core__DOT__csr__DOT__address;
        IData/*31:0*/ holy_test_harness__DOT__m_axi_mem_awaddr;
        IData/*31:0*/ holy_test_harness__DOT__m_axi_mem_wdata;
        IData/*31:0*/ holy_test_harness__DOT__m_axi_mem_araddr;
        IData/*31:0*/ holy_test_harness__DOT__m_axi_mem_rdata;
        IData/*31:0*/ holy_test_harness__DOT__core__DOT__pc;
        IData/*31:0*/ holy_test_harness__DOT__core__DOT__pc_next;
        IData/*31:0*/ holy_test_harness__DOT__core__DOT__pc_target;
        IData/*31:0*/ holy_test_harness__DOT__core__DOT__pc_plus_four;
        IData/*31:0*/ holy_test_harness__DOT__core__DOT__instruction;
        IData/*31:0*/ holy_test_harness__DOT__core__DOT__read_reg1;
        IData/*31:0*/ holy_test_harness__DOT__core__DOT__read_reg2;
        IData/*31:0*/ holy_test_harness__DOT__core__DOT__write_back_data;
        IData/*24:0*/ holy_test_harness__DOT__core__DOT__raw_imm;
        IData/*31:0*/ holy_test_harness__DOT__core__DOT__immediate;
        IData/*31:0*/ holy_test_harness__DOT__core__DOT__alu_result;
        IData/*31:0*/ holy_test_harness__DOT__core__DOT__alu_src2;
        IData/*31:0*/ holy_test_harness__DOT__core__DOT__alu_src1;
        IData/*31:0*/ holy_test_harness__DOT__core__DOT__mem_read;
        IData/*31:0*/ holy_test_harness__DOT__core__DOT__csr_read_data;
        IData/*31:0*/ holy_test_harness__DOT__core__DOT__regfile__DOT__read_data1;
        IData/*31:0*/ holy_test_harness__DOT__core__DOT__regfile__DOT__read_data2;
        IData/*31:0*/ holy_test_harness__DOT__core__DOT__regfile__DOT__write_data;
        IData/*31:0*/ holy_test_harness__DOT__core__DOT__regfile__DOT__unnamedblk1__DOT__i;
        IData/*24:0*/ holy_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src;
        IData/*31:0*/ holy_test_harness__DOT__core__DOT__sign_extender__DOT__immediate;
        IData/*31:0*/ holy_test_harness__DOT__core__DOT__alu_inst__DOT__s1;
        IData/*31:0*/ holy_test_harness__DOT__core__DOT__alu_inst__DOT__s2;
        IData/*31:0*/ holy_test_harness__DOT__core__DOT__alu_inst__DOT__alu_result;
        IData/*31:0*/ holy_test_harness__DOT__core__DOT__instr_cache__DOT__address;
        IData/*31:0*/ holy_test_harness__DOT__core__DOT__instr_cache__DOT__write_data;
        IData/*31:0*/ holy_test_harness__DOT__core__DOT__instr_cache__DOT__read_data;
        VlWide<128>/*4095:0*/ holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data;
        IData/*22:0*/ holy_test_harness__DOT__core__DOT__instr_cache__DOT__cache_block_tag;
        IData/*22:0*/ holy_test_harness__DOT__core__DOT__instr_cache__DOT__req_block_tag;
        IData/*31:0*/ holy_test_harness__DOT__core__DOT__instr_cache__DOT__byte_enable_mask;
        IData/*31:0*/ holy_test_harness__DOT__core__DOT__data_cache__DOT__address;
        IData/*31:0*/ holy_test_harness__DOT__core__DOT__data_cache__DOT__write_data;
        IData/*31:0*/ holy_test_harness__DOT__core__DOT__data_cache__DOT__read_data;
        VlWide<128>/*4095:0*/ holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_data;
        IData/*22:0*/ holy_test_harness__DOT__core__DOT__data_cache__DOT__cache_block_tag;
        IData/*22:0*/ holy_test_harness__DOT__core__DOT__data_cache__DOT__req_block_tag;
        IData/*31:0*/ holy_test_harness__DOT__core__DOT__data_cache__DOT__byte_enable_mask;
        IData/*31:0*/ holy_test_harness__DOT__core__DOT__csr__DOT__write_data;
        IData/*31:0*/ holy_test_harness__DOT__core__DOT__csr__DOT__read_data;
        IData/*31:0*/ holy_test_harness__DOT__core__DOT__csr__DOT__flush_cache;
        IData/*31:0*/ holy_test_harness__DOT__core__DOT__csr__DOT__next_flush_cache;
        IData/*31:0*/ holy_test_harness__DOT__core__DOT__csr__DOT__write_back_to_csr;
        IData/*31:0*/ holy_test_harness__DOT__core__DOT__csr__DOT__or_result;
        IData/*31:0*/ holy_test_harness__DOT__core__DOT__csr__DOT__nand_result;
    };
    struct {
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 32> holy_test_harness__DOT__core__DOT__regfile__DOT__registers;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };
    VlNBACommitQueue<VlUnpacked<IData/*31:0*/, 32>, false, IData/*31:0*/, 1> __VdlyCommitQueueholy_test_harness__DOT__core__DOT__regfile__DOT__registers;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr IData/*31:0*/ holy_test_harness__DOT__core__DOT__instr_cache__DOT__CACHE_SIZE = 0x00000080U;
    static constexpr IData/*31:0*/ holy_test_harness__DOT__core__DOT__data_cache__DOT__CACHE_SIZE = 0x00000080U;
    static constexpr IData/*31:0*/ holy_test_harness__DOT__core__DOT__arbiter__DOT__CACHE_SIZE = 0x00000080U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
