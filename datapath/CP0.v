module CP0 (
    input      clk,
    input      rst,
    input [7:2 ]HWInt,
    input [31:2] ID_PCP1,
    output reg [31:2] o_ID_EPC,
    input [37:0] EX_DATA,
    output [31:0] o_EX_DATA,
    input [1:0]CP0_CTRL,
    output IntReq
);
    assign {ExlSet,ExlClr}=CP0_CTRL;
    wire [31:0]DIn;
    wire [4:0] Sel;
    wire Wen;
    assign {Wen,Sel,DIn}=EX_DATA;
    assign o_EX_DATA=Dout;
    reg[15:10] IM;
    reg EXL,IE;
    reg[15:10] hwint_pend;
    reg[31:0] PrID;
    wire [31:0]SR;
    wire [31:0]Cause;
    assign SR={16'b0,IM,8'b0,EXL,IE};
    assign Cause={16'b0,hwint_pend,10'b0};
    assign IntReq=HWInt[7:2]&IM[15:10]&IE&!EXL;
    assign Dout=(Sel==12)?SR:
                (Sel==13)?Cause:
                (Sel==14)?o_ID_EPC:
                (Sel==15)?PrID:
                0;
    initial begin
        IM<=6'b000000;
        hwint_pend<=6'b000000;
        PrID<=32'hbbaaccff;
    end
    always @(posedge clk) begin
        if(Wen)begin
            if(Sel==12){IM,EXL,IE}<={DIn[15:10],DIn[1],DIn[0]};
            else if(Sel==14) o_ID_EPC<=DIn[31:2];
        end
        if(ExlSet) begin 
            EXL<=1'b1;
            o_ID_EPC<=ID_PCP1;
        end
        else if(ExlClr) EXL<=1'b0;
    end
    always @(*)begin
        if(!EXL)hwint_pend<=HWInt;
    end
endmodule //CP0
