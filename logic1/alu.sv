module alu(

    input logic  [3:0] alu_control,
    input logic [31:0] s1,
    input logic  [31:0] s2,

    output logic [31:0] alu_result,
    output logic  zero,
    output logic alu_last_bit

);

always_comb begin: readalu
    case(alu_control)
         4'b0000: alu_result =s1+s2;
         4'b0011: alu_result = s1 | s2;
         4'b0010: alu_result = s1 & s2;
         4'b0001: alu_result = s1 - s2;
         4'b0101: alu_result = {31'b0,$signed(s1) < $signed(s2)};
         4'b0111:alu_result= {31'b0,s1 <s2};
         4'b0100: alu_result = s1 ^ s2;
         4'b1000: alu_result = s1 << s2[4:0];
         4'b1100: alu_result = s1 >> s2[4:0];
         4'b1001: alu_result = $signed(s1) >>> s2[4:0];
        default : alu_result =32'b0;
    endcase
end

assign zero = alu_result == 32'b0;
assign alu_last_bit = alu_result[0];

endmodule