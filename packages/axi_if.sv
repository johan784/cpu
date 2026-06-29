interface axi_if #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter ID_WIDTH   = 4
);

// Global signals
logic aclk;
logic aresetn;

// ---------------- WRITE ADDRESS CHANNEL ----------------
logic [ID_WIDTH-1:0]   awid;
logic [ADDR_WIDTH-1:0] awaddr;
logic [7:0]            awlen;
logic [2:0]            awsize;
logic [1:0]            awburst;
logic [3:0]            awqos;
logic [1:0]            awlock;
logic                  awvalid;
logic                  awready;

// ---------------- WRITE DATA CHANNEL ----------------
logic [DATA_WIDTH-1:0]     wdata;
logic [(DATA_WIDTH/8)-1:0] wstrb;
logic                      wlast;
logic                      wvalid;
logic                      wready;

// ---------------- WRITE RESPONSE CHANNEL ----------------
logic [ID_WIDTH-1:0] bid;
logic [1:0]          bresp;
logic                bvalid;
logic                bready;

// ---------------- READ ADDRESS CHANNEL ----------------
logic [ID_WIDTH-1:0]   arid;
logic [ADDR_WIDTH-1:0] araddr;
logic [7:0]            arlen;
logic [2:0]            arsize;
logic [1:0]            arburst;
logic [3:0]            arqos;
logic [1:0]            arlock;
logic                  arvalid;
logic                  arready;

// ---------------- READ DATA CHANNEL ----------------
logic [ID_WIDTH-1:0]   rid;
logic [DATA_WIDTH-1:0] rdata;
logic [1:0]            rresp;
logic                  rlast;
logic                  rvalid;
logic                  rready;


modport master (

    input aclk,
    input aresetn,

    // Write Address
    output awid,
    output awaddr,
    output awlen,
    output awsize,
    output awburst,
    output awqos,
    output awlock,
    output awvalid,
    input  awready,

    // Write Data
    output wdata,
    output wstrb,
    output wlast,
    output wvalid,
    input  wready,

    // Write Response
    input  bid,
    input  bresp,
    input  bvalid,
    output bready,

    // Read Address
    output arid,
    output araddr,
    output arlen,
    output arsize,
    output arburst,
    output arqos,
    output arlock,
    output arvalid,
    input  arready,

    // Read Data
    input  rid,
    input  rdata,
    input  rresp,
    input  rlast,
    input  rvalid,
    output rready
);
// Define modport for slave
modport slave (
        input  aclk,
        input  aresetn,

        // Write Address Channel
        input  awid,
        input  awaddr,
        input  awlen,
        input  awsize,
        input  awburst,
        input  awqos,
        input  awlock,
        input  awvalid,
        output awready,

        // Write Data Channel
        input  wdata,
        input  wstrb,
        input  wlast,
        input  wvalid,
        output wready,

        // Write Response Channel
        output bid,
        output bresp,
        output bvalid,
        input  bready,

        // Read Address Channel
        input  arid,
        input  araddr,
        input  arlen,
        input  arsize,
        input  arburst,
        input  arqos,
        input  arlock,
        input  arvalid,
        output arready,

        // Read Data Channel
        output rid,
        output rdata,
        output rresp,
        output rlast,
        output rvalid,
        input  rready
    );

endinterface