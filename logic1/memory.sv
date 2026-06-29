// memory.sv

module memory #(
    parameter WORDS = 64,
    parameter mem_init = ""
) (
    input logic clk,
    input logic [31:0] address,
    input logic [31:0] write_data,
    input logic write_enable,
    input logic rst_n,

    output logic [31:0] read_data
);

/*
* This memory is byte addressed
* But have no support for mis-aligned write nor reads.
*/

(* verilator public *)
reg [31:0] mem [0:WORDS-1]; 

(* verilator public *)
logic [31:0] mem_debug_3;

always_comb begin
    mem_debug_3 = mem[3];   // address 0xC
end

initial begin
    if (mem_init != "") begin
        $display("Loading memory from %s", mem_init);
        $readmemh(mem_init, mem);

        // DEBUG PRINT
        $display("mem[0]=%h", mem[0]);
        $display("mem[1]=%h", mem[1]);
        $display("mem[2]=%h", mem[2]);
        $display("mem[3]=%h", mem[3]);
    end
end


always @(posedge clk) begin

    
     if (write_enable) begin
        // Ensure the address is aligned to a word boundary
        // If not, we ignore the write
        if (address[1:0] == 2'b00) begin 
        
            mem[address[7:2]] <= write_data;
        end
    end
end

// Read logic
always_comb begin

    read_data = mem[address[7:2]]; 
end

endmodule