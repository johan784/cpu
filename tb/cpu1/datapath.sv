module cpu(
    input logic clk,
    input logic rst_n,
    output logic  [31:0] debug_pc
);

reg [31:0] pc;
logic [31:0] pc_next;
logic [31:0] pc_target;
logic [31:0] pc_plus_four;

assign pc_plus_four= pc+4;

assign debug_pc = pc;





always_comb begin
    if (jump && alu_source)   // JALR
        pc_target = (read_reg1 + immediate) & 32'hFFFFFFFE;
    else
        pc_target = pc + immediate;
end


always_comb begin
    if (pc_source || jump)
        pc_next = pc_target;
    else
        pc_next = pc_plus_four;
end

always @(posedge clk) begin
    if(rst_n == 0) begin    
        pc<= 32'b0;
        end
    else begin
        pc<= pc_next;
    end
end

wire [31:0] instruction;

memory #(
    .mem_init("test_imemory.hex")
)instruction_memory(
    .clk(clk),
    .address(pc),
    .write_data(32'b0),
    .write_enable(1'b0),
    .rst_n(1'b1),

    //memory ka output 
    .read_data(instruction)
);

/**
*control
*/

//intercpets instruction data and generate the control signals from the decoded instruction 
//in control unit 

logic[6:0] op;
assign op = instruction [6:0];
logic [2:0] f3;
assign f3= instruction [14:12];
logic [6:0] f7;
assign f7 = instruction[31:25];
wire alu_zero;
wire branch;
wire pc_source;

wire [3:0] alu_control;
wire [2:0] imm_source;
wire mem_write;
wire reg_write;
wire alu_source;
wire  [1:0] write_back_source;
wire jump;
wire mem_read_enable;

control control_unit(

    .op(op),
    .func3(f3),
    .func7(f7),
    .alu_zero(alu_zero),
    .alu_last_bit(alu_last_bit),

    //out
    .alu_control(alu_control),
    .imm_source(imm_source),
    .mem_write(mem_write),
    .reg_write(reg_write),
    .alu_source(alu_source),
    .write_back_source(write_back_source),
    .branch(branch),
    .pc_source(pc_source),
    .jump(jump),
    .mem_read(mem_read_enable)

);

logic [4:0] source_reg1;
assign source_reg1 = instruction[19:15];

logic [4:0] source_reg2;
assign source_reg2 = instruction[24:20];

logic [4:0] dest_reg;
assign dest_reg = instruction[11:7];
wire [31:0] read_reg1;
wire [31:0] read_reg2;

logic [31:0] write_back_data;
always_comb begin
    case (write_back_source)
        2'b00: write_back_data = alu_result;      // R-type, ADDI, AUIPC
        2'b01: write_back_data = mem_read;        // LW
        2'b10: write_back_data = pc_plus_four;    // JAL
        2'b11: write_back_data = immediate;       // LUI
        default: write_back_data = 32'b0;
    endcase
end

regfile regfile(
    .clk(clk),
    .rst_n(rst_n),

    // Read In
    .address1(source_reg1),
    .address2(source_reg2),
    // Read out
    .read_data1(read_reg1),
    .read_data2(read_reg2),

    // Write In
    .write_enable(reg_write),
    .write_data(write_back_data),
    .address3(dest_reg)

);

logic [24:0] raw_imm;
assign raw_imm= instruction [31:7];
wire [31:0] immediate;

signext sign_extender(
    .raw_src(raw_imm),
    .imm_source(imm_source),
    .immediate(immediate)

);

wire [31:0] alu_result;
logic [31:0] alu_src2;



always_comb begin
    case (alu_source)
        1'b1: alu_src2 = immediate;   // LW, SW
        default: alu_src2 = read_reg2; // R-type
    endcase
end

logic [31:0] alu_src1;

always_comb begin
    if(op == 7'b0010111)      // AUIPC
        alu_src1 = pc;
    else
        alu_src1 = read_reg1;
end

wire alu_last_bit;

alu alu_inst(
    .alu_control(alu_control),
    .s1(alu_src1),
    .s2(alu_src2),
    .alu_result(alu_result),
    .zero(alu_zero),
    .alu_last_bit(alu_last_bit)
);

wire [31:0] mem_read;

memory #(
   
    .mem_init("/Users/johananil/Desktop/cpu/tb/cpu1/test_memory.hex")
)
 data_memory(
    .clk(clk),
    .address(alu_result),
    .write_data(read_reg2),
    .write_enable(mem_write),
    .rst_n(1'b1),

    .read_data(mem_read)
);






endmodule





    
