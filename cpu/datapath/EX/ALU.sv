module ALU(
    input [31:0]A,
    input [31:0]B,
    input [4:0] sa,
    input [3:0]F,
    output reg[31:0]C, 
   // output [31:0]sum,
    output zero); 
    wire [31:0] sll,srl,sra,sllv,srlv,srav; 
    assign sll=B<<sa;
    assign srl=B>>sa;
    assign sra=$signed(B)>>>sa;
    assign sllv=B<<A;
    assign srlv=B>>A;
    assign srav=$signed(B)>>>A;
   // assign sum=A+B;

    always_comb begin
        case(F)
            0:C=sll;
            1:C=A|B;
            2:C=A-B;
            3:C=A+B;
            4:C=A&B;
            5:C=A^B;
            6:C=~(A|B);
            7:C=srl;
            8:C=sra;
            9:C=sllv;
            10:C=srlv;
            11:C=srav;
            12:C=A;
            default:C=0;
        endcase
    end

    assign zero=(C==0); 
endmodule
