module control(

    input logic [6:0] op,
    input logic [2:0] func3,
    input logic [6:0] func7,
    input logic alu_zero,
    input logic alu_last_bit,

    output logic [3:0] alu_control,
    output logic [2:0] imm_source,
    output logic mem_write,
    output logic mem_read,
    output logic reg_write,
    output logic  alu_source,
    output logic [1:0] write_back_source,
    output logic branch,
    output logic pc_source,
    output logic jump,
    output logic csr_write_enable


);



logic [1:0] alu_op;
 always_comb begin
     // DEFAULT VALUES
    reg_write = 1'b0;
    mem_write = 1'b0;
    mem_read = 1'b0;
    alu_source = 1'b0;
    write_back_source = 2'b00;
    imm_source = 3'b000;
    alu_op = 2'b00;
    branch=1'b0;
    jump =1'b0;
    csr_write_enable = 1'b0;

    case(op)
        7'b0000011: begin
            reg_write =1'b1;
            imm_source= 3'b000;
            mem_write= 1'b0;
            mem_read=1'b1;
            alu_op = 2'b00;
            alu_source=1'b1;
            write_back_source=2'b01;
        end

        7'b0100011: begin
            reg_write =1'b0;
            imm_source = 3'b001;
            mem_write = 1'b1;
            mem_read = 1'b0;
            alu_op =2'b00;
            alu_source=1'b1;
        end

        7'b0110011:begin
            reg_write=1'b1;
            mem_write=1'b0;
            alu_op=2'b10;
            alu_source=1'b0;
            write_back_source=2'b00;
        end

        7'b1100011: begin 
                imm_source= 3'b010;
                reg_write =1'b0;
                mem_write=1'b0;
                alu_op=2'b10;
                alu_source=1'b0;
                write_back_source=2'b00;
                branch=1'b1;
        end

        7'b1101111: begin
                reg_write =1'b1;
                imm_source=3'b011;
                mem_write=1'b0;
                write_back_source=2'b10;
                branch=1'b0;
                jump=1'b1;
        end

        7'b0010011: begin
            reg_write=1'b1;
            imm_source=3'b000;mem_write=1'b0;
            alu_op =2'b10;
            alu_source=1'b1;
            write_back_source=2'b00;
        end


        7'b0110111: begin // LUI
            reg_write = 1'b1;
            imm_source = 3'b100;
            mem_write = 1'b0;
            write_back_source = 2'b11; // immediate
        end

        7'b0010111: begin // AUIPC
            reg_write = 1'b1;
            imm_source = 3'b100;
            alu_source = 1'b1;
            alu_op = 2'b00; // ADD
            write_back_source = 2'b00; // ALU
        end

        7'b1100111: begin   // JALR
            reg_write = 1'b1;
            imm_source = 3'b000;      // I-type immediate
            mem_write = 1'b0;
            alu_source = 1'b1;        // use immediate
            alu_op = 2'b00;           // ADD
            write_back_source = 2'b10; // PC + 4
            jump = 1'b1;
        end


        7'b1110011: begin

            csr_write_enable = 1'b1;

        end




        default: begin
            reg_write =1'b0;
            imm_source= 3'b000;
            mem_write= 1'b0;
            alu_op = 2'b00;
        end
    endcase
end

always_comb begin 

    if (branch) begin
    case(func3)

        3'b000: pc_source = alu_zero;      // BEQ
        3'b001: pc_source = ~alu_zero;     // BNE
        3'b100: pc_source = alu_last_bit;  // BLT
        3'b101: pc_source = ~alu_last_bit; // BGE
        3'b110: pc_source = alu_last_bit;  // BLTU
        3'b111: pc_source = ~alu_last_bit; // BGEU

        default: pc_source = 1'b0;

    endcase
    end
    else if (jump)
        pc_source = 1'b1;
    else
        pc_source = 1'b0;

    
    if (branch) begin
    case(func3)

        3'b000: alu_control = 4'b0001; // BEQ -> SUB
        3'b001: alu_control = 4'b0001; // BNE -> SUB

        3'b100: alu_control = 4'b0101; // BLT -> SLT
        3'b101: alu_control = 4'b0101; // BGE -> SLT

        3'b110: alu_control = 4'b0111; // BLTU -> SLTU
        3'b111: alu_control = 4'b0111; // BGEU -> SLTU

        default: alu_control = 4'b0000;

    endcase
    end
    else begin
    case (alu_op)

    2'b00: alu_control = 4'b0000;

    2'b10: begin
        case (func3)

            3'b000: begin
                if (func7 == 7'b0100000)
                    alu_control = 4'b0001;
                else
                    alu_control = 4'b0000;
            end

            3'b110: alu_control = 4'b0011;
            3'b111: alu_control = 4'b0010;
            3'b010: alu_control = 4'b0101;
            3'b011: alu_control = 4'b0111;
            3'b100: alu_control = 4'b0100;
            3'b001: alu_control = 4'b1000;

            3'b101: begin
                if (func7 == 7'b0000000)
                    alu_control = 4'b1100;
                else
                    alu_control = 4'b1001;
            end

            default: alu_control = 4'b0000;

        endcase
    end

    default: alu_control = 4'b0000;

endcase
end
end
endmodule