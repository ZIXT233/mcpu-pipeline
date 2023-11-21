module ALU(
    input [31:0]A,
    input [31:0]B,
    input [4:0] sa,
    input [3:0]F,
    output [31:0]C, 
    output zero); 
    wire [31:0] sll,srl,sra,sllv,srlv,srav; 
    assign sll=B<<sa;
    assign srl=B>>sa;
    assign sra=$signed(B)>>>sa;
    assign sllv=B<<A;
    assign srlv=B>>A;
    assign srav=$signed(B)>>>A;

    assign C=(F==0)?sll:
             (F==1)?A|B:
             (F==2)?A-B:
             (F==3)?A+B:
             (F==4)?A&B:
             (F==5)?A^B:
             (F==6)?~(A|B):
             (F==7)?srl:
             (F==8)?sra:
             (F==9)?sllv:
             (F==10)?srlv:
             (F==11)?srav:
             (F==12)?A:
             0;
    assign zero=(C==0); 
endmodule
