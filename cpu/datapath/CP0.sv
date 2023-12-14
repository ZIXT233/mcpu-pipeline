`include "cpu/pipelineInterfaces.sv"
module CP0 (
    input      clk,
    // verilator lint_off UNUSED
    input      rst,
    // verilator lint_on UNUSED
    ICP0.CP0   i_cp0,
    IBridge.CP0 i_bridge
);
    wire[7:2 ]HWInt;
    wire [31:2] ID_PCP1;
    wire [37:0] EX_DATA;
    wire [1:0]CP0_CTRL;
    assign HWInt=i_bridge.HWInt;
    assign ID_PCP1=i_cp0.ID_PCP1;
    assign EX_DATA=i_cp0.EX_TO_CP0;
    assign CP0_CTRL=i_cp0.CP0_CTRL;
    wire ExlSet,ExlClr;
    assign {ExlSet,ExlClr}=CP0_CTRL;
    wire [31:0]DIn;
    wire [4:0] Sel;
    wire Wen;
    assign {Wen,Sel,DIn}=EX_DATA;
    assign i_cp0.CP0_TO_EX=Dout;
    reg[15:10] IM;
    reg EXL,IE;
    reg[15:10] hwint_pend;
    reg[31:0] PrID;
    wire [31:0]SR;
    wire [31:0]Cause;
    wire [31:0]Dout;
    assign SR={16'b0,IM,8'b0,EXL,IE};
    assign Cause={16'b0,hwint_pend,10'b0};
    assign i_cp0.IntReq=(|HWInt[7:2])&(|IM[15:10])&IE&!EXL;
    assign Dout=(Sel==12)?SR:
                (Sel==13)?Cause:
                (Sel==14)?{2'b0,i_cp0.EPC}:
                (Sel==15)?PrID:
                0;
    initial begin
        IM=6'b000000;
        hwint_pend=6'b000000;
        PrID=32'hbbaaccff;
    end
    always @(posedge clk) begin
        if(Wen)begin
            if(Sel==12){IM,EXL,IE}<={DIn[15:10],DIn[1],DIn[0]};
            else if(Sel==14) i_cp0.EPC<=DIn[31:2];
        end
        if(ExlSet) begin 
            EXL<=1'b1;
            i_cp0.EPC<=ID_PCP1;
        end
        else if(ExlClr) EXL<=1'b0;
    end
    always @(*) begin
        if(!EXL)hwint_pend=HWInt;
    end
endmodule //CP0
