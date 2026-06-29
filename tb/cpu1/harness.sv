`timescale 1ns/1ps
import holy_core_pkg::*;

module holy_test_harness;

    // ======================
    // CLOCK + RESET
    // ======================
    logic clk;
    wire aclk;
    logic rst_n;

    assign aclk=clk;

    

    // ======================
    // ONE SHARED AXI BUS
    // ======================
    axi_if axi();
    assign axi.aclk    = aclk;
    assign axi.aresetn = rst_n;

    // ======================
    // CPU (AXI MASTER)
    // ======================
    cpu core (
        .clk(clk),
        .rst_n(rst_n),
        .axi(axi)
    );

    // ======================
    // FLAT AXI SIGNALS (VISIBLE TO COCOTB)
    // ======================

    
    logic [31:0] m_axi_mem_awaddr;
    logic [7:0]  m_axi_mem_awlen;
    logic [2:0]  m_axi_mem_awsize;
    logic [1:0]  m_axi_mem_awburst;
    logic [3:0]  m_axi_mem_awid;
    logic        m_axi_mem_awvalid;
    logic        m_axi_mem_awready;

    logic [31:0] m_axi_mem_wdata;
    logic [3:0]  m_axi_mem_wstrb;
    logic        m_axi_mem_wlast;
    logic        m_axi_mem_wvalid;
    logic        m_axi_mem_wready;

    logic [1:0]  m_axi_mem_bresp;
    logic [3:0]  m_axi_mem_bid;
    logic        m_axi_mem_bvalid;
    logic        m_axi_mem_bready;

    logic [31:0] m_axi_mem_araddr;
    logic [7:0]  m_axi_mem_arlen;
    logic [2:0]  m_axi_mem_arsize;
    logic [1:0]  m_axi_mem_arburst;
    logic [3:0]  m_axi_mem_arid;
    logic        m_axi_mem_arvalid;
    logic        m_axi_mem_arready;

    logic [31:0] m_axi_mem_rdata;
    logic [1:0]  m_axi_mem_rresp;
    logic [3:0]  m_axi_mem_rid;
    logic        m_axi_mem_rlast;
    logic        m_axi_mem_rvalid;
    logic        m_axi_mem_rready;

    logic m_axi_mem_aclk;
    logic m_axi_mem_aresetn;

   

    assign m_axi_mem_aclk    = aclk;
    assign m_axi_mem_aresetn = rst_n;


    // WRITE ADDRESS
    assign m_axi_mem_awaddr  = axi.awaddr;
    assign m_axi_mem_awlen   = axi.awlen;
    assign m_axi_mem_awsize  = axi.awsize;
    assign m_axi_mem_awburst = axi.awburst;
    assign m_axi_mem_awid    = axi.awid;
    assign m_axi_mem_awvalid = axi.awvalid;
    assign axi.awready       = m_axi_mem_awready;
    

    // WRITE DATA
    assign m_axi_mem_wdata   = axi.wdata;
    assign m_axi_mem_wstrb   = axi.wstrb;
    assign m_axi_mem_wlast   = axi.wlast;
    assign m_axi_mem_wvalid  = axi.wvalid;
    assign axi.wready        = m_axi_mem_wready;

    // WRITE RESPONSE
    assign axi.bresp  = m_axi_mem_bresp;
    assign axi.bid    = m_axi_mem_bid;
    assign axi.bvalid = m_axi_mem_bvalid;
    assign m_axi_mem_bready = axi.bready;

    // READ ADDRESS
    assign m_axi_mem_araddr  = axi.araddr;
    assign m_axi_mem_arlen   = axi.arlen;
    assign m_axi_mem_arsize  = axi.arsize;
    assign m_axi_mem_arburst = axi.arburst;
    assign m_axi_mem_arid    = axi.arid;
    assign m_axi_mem_arvalid = axi.arvalid;
    assign axi.arready       = m_axi_mem_arready;

    // READ DATA
    assign axi.rdata  = m_axi_mem_rdata;
    assign axi.rresp  = m_axi_mem_rresp;
    assign axi.rid    = m_axi_mem_rid;
    assign axi.rlast  = m_axi_mem_rlast;
    assign axi.rvalid = m_axi_mem_rvalid;
    assign m_axi_mem_rready = axi.rready;
    

    initial begin
        $dumpfile("wave.vcd");
        $dumpvars(0, holy_test_harness);
    end

endmodule