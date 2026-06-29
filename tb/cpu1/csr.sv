module csr( 
    input logic clk,
    input logic rst_n,
    input logic [31:0] write_data,
    input logic write_enable,
    input logic [2:0] f3,
    input logic [11:0] address,

    output logic [31:0] read_data,
    output logic flush_flag
    
);

logic [31:0] flush_cache;
logic [31:0] next_flush_cache;
logic [31:0] write_back_to_csr;
logic [31:0] or_result;
logic [31:0] nand_result;

always_comb begin 
    case(address) 
        12'h7C0: read_data = flush_cache;

        default: read_data = 32'b0;

    endcase 
end 

assign or_result = read_data | write_data;
assign nand_result = read_data & (~write_data);


always_comb begin 
    case (f3) 
        3'b001, 3'b101 : write_back_to_csr = write_data;

        3'b010, 3'b110 : write_back_to_csr = or_result;

        3'b011, 3'b111 : write_back_to_csr = nand_result;


        default: write_back_to_csr = read_data;
    endcase 

    
    next_flush_cache= write_back_to_csr;

    end 

always_comb begin 
    flush_flag = flush_cache[0];
end 
 

 

always_ff @(posedge clk) begin 

    if(rst_n) begin
            flush_cache <= 32'd0;
    end

    else if(flush_flag) begin
        flush_cache <= 32'd0;
    end 

    else if (write_enable && address == 12'h7C0) begin 
        flush_cache <= next_flush_cache;
    end 

    else begin 
         flush_cache <= flush_cache;
    end 

end 

endmodule 




