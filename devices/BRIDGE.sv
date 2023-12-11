`define DevMaxLoAddr 7
`define DEV0_LO_ADDR 7
`define DEV1_LO_ADDR 7
`define DEV2_LO_ADDR 7
`timescale 1ns / 1ps
module BRIDGE (
    input clk,
    input[31:2]      PrAddrWire,
    input[31:0]      PrWDWire,
    input[3:0]       PrBEWire,
    input           WeCPUWire,
    output[31:0]     PrRD,
    output [7:2]HWInt,
    output [7:0]o_led,
    output [7:0]seg7_seg,
    output [7:0]seg7_select
); 
    // verilator lint_off UNUSED
    reg[31:2] PrAddr;
    reg[31:0] PrWD;
    reg[3:0] PrBE;
    reg WeCPU;
    always @(posedge clk)begin
        PrAddr<=PrAddrWire;
        PrWD<=PrWDWire;
        PrBE<=PrBEWire;
        WeCPU<=WeCPUWire;
    end
    //wire[`DevMaxLoAddr:2]   DEV_Addr;
    //verilator lint_off UNDRIVEN
    wire[31:0]  DEV0_RD,DEV1_RD,DEV2_RD,DEV_WD;
    //verilator lint_on UNDRIVEN
    wire[3:0]   WeDEV;
    wire HitDEV0 = (PrAddr[31:1+`DEV0_LO_ADDR]=='h7F);
    wire HitDEV1 = (PrAddr[31:1+`DEV1_LO_ADDR]=='h80);
    wire HitDEV2 = (PrAddr[31:1+`DEV2_LO_ADDR]=='h81);
    assign PrRD =   (HitDEV0) ? DEV0_RD :
                    (HitDEV1) ? DEV1_RD :
                    (HitDEV2) ? DEV2_RD :
                    0;
    assign DEV_WD = PrWD;
    assign WeDEV = {4{WeCPU}}&{1'b0,HitDEV2,HitDEV1,HitDEV0};
    //DEV0
    wire IntDEV0;
    assign HWInt = {5'b0,IntDEV0};
    counter u_counter(
        .D   	( DEV_WD    ),
        .WE  	( WeDEV[0]   ),
        .clk 	( clk  ),
        .INT    (IntDEV0)
    );
    //DEV1
    screenBoard U_screenBoard(
        .D(DEV_WD),
        .show(DEV1_RD),
        .WE(WeDEV[1]),
        .clk(clk)
    );
    //DEV2
    seg7 u_seg7(
        .D(DEV_WD),
        .A(PrAddr[2]),
        .be(PrBE),
        .clk(clk),
        .we(WeDEV[2]),
        .Dout(DEV2_RD),
        .seg(seg7_seg),
        .select(seg7_select)
    );
    assign o_led=DEV1_RD[7:0];
endmodule //BRIDPrAddr
