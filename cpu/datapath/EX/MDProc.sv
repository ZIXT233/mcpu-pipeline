module MDProc (
    input      clk,
    input isSign,
    input [31:0]A,
    input [31:0]B,
    input [2:0] F,
    output [31:0]O_HI,
    output [31:0]O_LO
);
    reg [63:0]hifo;
    assign O_HI=hifo[63:32];
    assign O_LO=hifo[31:0];
    always @(posedge clk) begin
        case(F)
        0:;
        1:hifo[63:32]<=A;
        2:hifo[31:0]<=A;
        3:begin
            if(isSign)hifo<=$signed(A)*$signed(B);
            else hifo<=A*B;
        end
        4:begin
            if(isSign) begin 
                hifo[31:0]<=$signed(A)/$signed(B);
                hifo[63:32]<=$signed(A)%$signed(B);
            end 
            else begin 
                hifo[31:0]<=A/B;
                hifo[63:32]<=A%B;
            end
        end
        endcase 
    end
endmodule //MDPROC
