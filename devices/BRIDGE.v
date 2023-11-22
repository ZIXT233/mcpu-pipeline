`define DevMaxLoAddr 7
`define DEV0_LO_ADDR 7
`define DEV1_LO_ADDR 7

module BRIDGE (
    input clk,
    input[31:2]      PrAddr,
    output[31:0]     PrRD,
    input[31:0]      PrWD,
    input           WeCPU,
    output [7:2]HWInt
); 
    wire[`DevMaxLoAddr:2]   DEV_Addr;
    wire[31:0]  DEV0_RD,DEV1_RD,DEV_WD;
    wire[3:0]   WeDEV;
    assign HitDEV0 = (PrAddr[31:1+`DEV0_LO_ADDR]=='h7F);
    assign HitDEV1 = (PrAddr[31:1+`DEV1_LO_ADDR]=='h80);
    assign PrRD =   (HitDEV0) ? DEV0_RD :
                    (HitDEV1) ? DEV1_RD :
                    0;
    assign DEV_WD = PrWD;
    assign WeDEV = {4{WeCPU}}&{1'b0,1'b0,HitDEV1,HitDEV0};
    //DEV0
    counter u_counter(
        .D   	( DEV_WD    ),
        .WE  	( WeDEV[0]   ),
        .clk 	( clk  ),
        .INT    (HWInt[2])
    );
    //DEV1
    screenBoard U_screenBoard(
        .D(DEV_WD),
        .show(DEV1_RD),
        .WE(WeDEV[1]),
        .clk(clk)
    );
endmodule //BRIDPrAddr