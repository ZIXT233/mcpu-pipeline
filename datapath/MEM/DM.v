module DM (
    input[13:2]A,
    input memWrite,
    input memToReg,
    input [3:0]be,
    input clk,
    input [31:0] D,
    output [31:0] Dout
);
    reg[31:0] ram[0:3071];
    assign Dout=ram[A];
    assign in_byte=D[7:0];
    always @(posedge clk) begin
        if(memWrite) begin
            case(be)
            4'hf:begin
                ram[A]<=D;//$display("[%d]%d",A,D);
            end
            4'b0011: ram[A][15:0]<=D[15:0];
            4'b1100: ram[A][31:16]<=D[15:0];
            4'b0001: ram[A][7:0]<=D[7:0];
            4'b0010: ram[A][15:8]<=D[7:0];
            4'b0100: ram[A][23:16]<=D[7:0];
            4'b1000: ram[A][31:24]<=D[7:0];
            endcase
        end
    end
endmodule //DM