import holy_core_pkg::*;




module external_req_arbiter (

    axi_if.master m_axi,

    axi_if.slave s_axi_instr,
    input cache_state_t i_cache_state,

    axi_if.slave s_axi_data,
    input cache_state_t d_cache_state
);


localparam CACHE_SIZE = 128;


//the request controller we define below based on signal value muxes these signals and their correspnding cache states for valid data trasnfer


always_comb begin: main_axi_mux

    m_axi.awaddr = 0;
    m_axi.awvalid = 0;
    m_axi.wdata = 0;
    m_axi.wlast = 0;
    m_axi.wvalid = 0;
    m_axi.bready = 0;
    m_axi.araddr = 0;
    m_axi.arvalid=0;
    m_axi.rready=0;
    m_axi.awburst =2'b01;

    //invariant axi signals will be given hardocded values 

    m_axi.awlen = CACHE_SIZE-1;
    m_axi.awsize = 3'b010;
    m_axi.arlen = CACHE_SIZE-1;
    m_axi.arsize = 3'b010;
    m_axi.arburst = 2'b01;
    m_axi.awid = 4'b0000;
    m_axi.arid = 4'b0000;
    m_axi.wstrb = 4'b1111;


    s_axi_instr.awready = 0;
    s_axi_instr.wready = 0;
    s_axi_instr.bid    = 0;
    s_axi_instr.bresp  = 0;
    s_axi_instr.bvalid = 0;
    s_axi_instr.arready = 0;
    s_axi_instr.rid    = 0;
    s_axi_instr.rdata  = 0;
    s_axi_instr.rresp  = 0;
    s_axi_instr.rlast  = 0;
    s_axi_instr.rvalid = 0;

    s_axi_data.awready = 0;
    s_axi_data.wready = 0;
    s_axi_data.bid    = 0;
    s_axi_data.bresp  = 0;
    s_axi_data.bvalid = 0;
    s_axi_data.arready = 0;
    s_axi_data.rid    = 0;
    s_axi_data.rdata  = 0;
    s_axi_data.rresp  = 0;
    s_axi_data.rlast  = 0;
    s_axi_data.rvalid = 0;


    if(i_cache_state != IDLE) begin

        m_axi.awid = s_axi_instr.awid;
        m_axi.awaddr   = s_axi_instr.awaddr;
        m_axi.awlen    = s_axi_instr.awlen;
        m_axi.awsize   = s_axi_instr.awsize;
        m_axi.awburst  = s_axi_instr.awburst;
        m_axi.awvalid  = s_axi_instr.awvalid;
        s_axi_instr.awready = m_axi.awready;

        // Write Data Channel
        m_axi.wdata    = s_axi_instr.wdata;
        m_axi.wstrb    = s_axi_instr.wstrb;
        m_axi.wlast    = s_axi_instr.wlast;
        m_axi.wvalid   = s_axi_instr.wvalid;
        s_axi_instr.wready = m_axi.wready;

        // Write Response Channel
        s_axi_instr.bid    = m_axi.bid;
        s_axi_instr.bresp  = m_axi.bresp;
        s_axi_instr.bvalid = m_axi.bvalid;
        m_axi.bready       = s_axi_instr.bready;

        // Read Address Channel
        m_axi.arid     = s_axi_instr.arid;
        m_axi.araddr   = s_axi_instr.araddr;
        m_axi.arlen    = s_axi_instr.arlen;
        m_axi.arsize   = s_axi_instr.arsize;
        m_axi.arburst  = s_axi_instr.arburst;
        m_axi.arvalid  = s_axi_instr.arvalid;
        s_axi_instr.arready = m_axi.arready;

        // Read Data Channel
        s_axi_instr.rid    = m_axi.rid;
        s_axi_instr.rdata  = m_axi.rdata;
        s_axi_instr.rresp  = m_axi.rresp;
        s_axi_instr.rlast  = m_axi.rlast;
        s_axi_instr.rvalid = m_axi.rvalid;
        m_axi.rready       = s_axi_instr.rready;

        $display(

"ARBITER I$: state=%0d arvalid=%0b arready=%0b araddr=%h arlen=%0d arsize=%0d arburst=%0d rready=%0b rvalid=%0b",

i_cache_state,

s_axi_instr.arvalid,

m_axi.arready,

m_axi.araddr,

m_axi.arlen,

m_axi.arsize,

m_axi.arburst,

m_axi.rready,

m_axi.rvalid

);

    end else if(( d_cache_state !=IDLE) && (i_cache_state == IDLE)) begin
                      

        m_axi.awid     = s_axi_data.awid;
        m_axi.awaddr   = s_axi_data.awaddr;
        m_axi.awlen    = s_axi_data.awlen;
        m_axi.awsize   = s_axi_data.awsize;
        m_axi.awburst  = s_axi_data.awburst;
        m_axi.awvalid  = s_axi_data.awvalid;
        s_axi_data.awready = m_axi.awready;

        // Write Data Channel
        m_axi.wdata    = s_axi_data.wdata;
        m_axi.wstrb    = s_axi_data.wstrb;
        m_axi.wlast    = s_axi_data.wlast;
        m_axi.wvalid   = s_axi_data.wvalid;
        s_axi_data.wready = m_axi.wready;

        // Write Response Channel
        s_axi_data.bid    = m_axi.bid;
        s_axi_data.bresp  = m_axi.bresp;
        s_axi_data.bvalid = m_axi.bvalid;
        m_axi.bready      = s_axi_data.bready;

        // Read Address Channel
        m_axi.arid     = s_axi_data.arid;
        m_axi.araddr   = s_axi_data.araddr;
        m_axi.arlen    = s_axi_data.arlen;
        m_axi.arsize   = s_axi_data.arsize;
        m_axi.arburst  = s_axi_data.arburst;
        m_axi.arvalid  = s_axi_data.arvalid;
        s_axi_data.arready = m_axi.arready;

        // Read Data Channel
        s_axi_data.rid    = m_axi.rid;
        s_axi_data.rdata  = m_axi.rdata;
        s_axi_data.rresp  = m_axi.rresp;
        s_axi_data.rlast  = m_axi.rlast;
        s_axi_data.rvalid = m_axi.rvalid;
        m_axi.rready      = s_axi_data.rready;
    end
end

endmodule 