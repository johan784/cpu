import holy_core_pkg::*;

module holy_cache #(
    parameter CACHE_SIZE = 128
)(
    input  logic clk,
    input  logic rst_n,
    input  logic aclk,

    input  logic [31:0] address,
    input  logic [31:0] write_data,
    input  logic read_enable,
    input  logic write_enable,
    input  logic [3:0]  byte_enable,
    input logic flush_flag,
    output logic [31:0] read_data,
    output logic cache_stall,

    output cache_state_t cache_state,

    axi_if.master axi
);

logic [CACHE_SIZE-1:0][31:0] cache_data;
logic [31:9] cache_block_tag;

logic cache_valid;
logic cache_dirty;

logic [31:9] req_block_tag;
logic [8:2]  req_index;

logic is_mmio;
assign is_mmio = ( address >= 32'h10000000);

logic mmio_state;
logic [31:0] mmio_data;




assign req_block_tag = address[31:9];
assign req_index     = address[8:2];


wire [31:0] byte_enable_mask;

assign byte_enable_mask = {
    {8{byte_enable[3]}},
    {8{byte_enable[2]}},
    {8{byte_enable[1]}},
    {8{byte_enable[0]}}
};

logic hit;
assign hit = (req_block_tag == cache_block_tag) && cache_valid;

cache_state_t state;

assign cache_state= state;

logic [6:0] set_ptr;

logic actual_write_enable;
assign actual_write_enable = write_enable & |byte_enable;

logic ar_hs, aw_hs, w_hs, b_hs, r_hs;

logic csr_flush_status;

assign ar_hs = axi.arvalid && axi.arready;
assign aw_hs = axi.awvalid && axi.awready;
assign w_hs  = axi.wvalid  && axi.wready;
assign b_hs  = axi.bvalid  && axi.bready;
assign r_hs  = axi.rvalid  && axi.rready;
logic mmio_data_or;

always_ff @(posedge clk) begin
 if (state != IDLE)

        $display(

            "state=%0d hit=%0d read=%0d write=%0d arvalid=%0d arready=%0d",

            state,

            hit,

            read_enable,

            actual_write_enable,

            axi.arvalid,

            axi.arready

        );

    if (ar_hs)

        $display(

            "AR HANDSHAKE addr=%h time=%0t",

            axi.araddr,

            $time

        );

    if (r_hs)

        $display(

            "R HANDSHAKE data=%h last=%0d time=%0t",

            axi.rdata,

            axi.rlast,

            $time

        );

    if (~rst_n) begin
        mmio_state <= 0;
        state        <= IDLE;
        cache_valid  <= 0;
        cache_dirty  <= 0;
        set_ptr      <= 0;
        csr_flush_status <= 0;
        mmio_data_or <= 0; 
    end else begin
        case (state)

        IDLE: begin
            set_ptr <= 0;

            if (flush_flag) begin 
                    csr_flush_status<= 1'b1;
                    state<=SENDING_WRITE_REQ;
            end 

            else if(is_mmio && read_enable) begin 
                state <= SENDING_READ_REQ;
                mmio_state <= 1'b1;
                mmio_data_or <= 1'b0;

            end 

            else if ( is_mmio && write_enable) begin 
                state <= SENDING_WRITE_REQ;
                mmio_state <= 1'b1;
                mmio_data_or <= 1'b0;
            end 

            

           else if (hit && write_enable) begin

                 $display(

                    "CACHE STORE HIT idx=%0d old=%h new=%h",

                     req_index,

                     cache_data[req_index],

                    (cache_data[req_index] & ~byte_enable_mask) |

                     (write_data & byte_enable_mask)

                     );
                cache_data[req_index] <=
                    (cache_data[req_index] & ~byte_enable_mask) |
                    (write_data & byte_enable_mask);
                cache_dirty <= 1;
            end
            else if (~hit && (read_enable ^ actual_write_enable)) begin

                if (cache_dirty)
                    state <= SENDING_WRITE_REQ;
                else
                    state <= SENDING_READ_REQ;
            end
        end

        SENDING_WRITE_REQ: begin
            if (aw_hs)

                state <= SENDING_WRITE_DATA;
        end

        SENDING_WRITE_DATA: begin
            if (w_hs) begin


              if(mmio_state) begin 
                state  <= WAITING_WRITE_RES;
                end 
                else begin

                    set_ptr <= set_ptr + 1;
                    
                    
                    if (set_ptr == 7'd127) begin
                        state <= WAITING_WRITE_RES;
                    end 
                end
            end
        end

        WAITING_WRITE_RES: begin
            if (b_hs && axi.bresp == 2'b00)

                if(mmio_state) begin 
                    mmio_state <= 1'b0;
                    state <= IDLE;
                end

                else if(csr_flush_status) begin
                    csr_flush_status <= 1'b0;
                    state <= IDLE;
                end 

                else 
                state <= SENDING_READ_REQ;
        end

        SENDING_READ_REQ: begin
            if (ar_hs)
                state <= RECEIVING_READ_DATA;

        end

        RECEIVING_READ_DATA: begin

             if( mmio_state && r_hs) begin 

             mmio_data <= axi.rdata;
             mmio_state <= 1'b0;
             mmio_data_or <= 1'b1;

             
             state <= IDLE;
             end 

            else if (r_hs) begin
                cache_data[set_ptr] <= axi.rdata;
                set_ptr <= set_ptr + 1;

                if (axi.rlast) begin
                    cache_block_tag <= req_block_tag;
                    cache_valid <= 1;
                    cache_dirty <= 0;
                    state <= IDLE;
                end
            end
        end

        default: begin
            state <= IDLE;
        end

        endcase
    end
end

always_comb begin
    axi.awvalid = 0;
    axi.wvalid  = 0;
    axi.bready  = 0;
    axi.arvalid = 0;
    axi.rready  = 0;

    axi.awaddr = 0;
    axi.araddr = 0;

    if(mmio_state) begin 
        axi.wdata = write_data;
    end 
    else begin
        axi.wdata = cache_data[set_ptr];
    end 


    if(mmio_state) begin 
        axi.wlast = 1'b1;
    end
    else begin 
        axi.wlast = (set_ptr == 7'd127);
    end 

    if(mmio_data_or) begin 
        read_data = mmio_data;
    end 
    else begin 
        read_data = 0;
    end 

    case(state)

    IDLE: begin
        if (hit && read_enable)
            read_data = cache_data[req_index];
    end

    SENDING_WRITE_REQ: begin
        axi.awvalid = 1;

        if(mmio_state) begin 
            axi.awaddr= address; 
        end 
        else begin 
        axi.awaddr  = {cache_block_tag,7'b0,2'b00};
        end 
    end

    SENDING_WRITE_DATA: begin
        axi.wvalid = 1;
    end

    WAITING_WRITE_RES: begin
        axi.bready = 1;
    end

    SENDING_READ_REQ: begin
        axi.arvalid = 1;

        if(mmio_state) begin 
            axi.araddr = address;
        end
        else begin
        axi.araddr  = {req_block_tag,7'b0,2'b00};
        end 
    end

    RECEIVING_READ_DATA: begin
        axi.rready = 1;
    end

    default: begin
        // safe: defaults already assigned above
    end


    
    endcase

   

end

assign cache_stall = (state != IDLE) || (!is_mmio && ~hit && (read_enable || actual_write_enable));

always_comb begin 

    if(mmio_state) begin 
        axi.awlen=0;
    end 
    else begin 
        axi.awlen   = CACHE_SIZE-1;
    end 
end 

assign axi.awsize  = 3'b010;
assign axi.awburst = 2'b01;

always_comb begin
    if(mmio_state) begin 
        axi.arlen = 0;
    end 
    else begin 
    axi.arlen = CACHE_SIZE -1;
    end 
end 

assign axi.arsize  = 3'b010;
assign axi.arburst = 2'b01;

assign axi.awid = 4'b0000;
assign axi.arid = 4'b0000;

assign axi.wstrb = 4'b1111;

endmodule