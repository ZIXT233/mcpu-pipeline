module WB (
    input      clk,
    input      rst,
    input [4:0]WB_CTRL,
    input [31:0]Dout,
    input [31:0]PrRD,
    input [68:0]WB_DATA, 
    output [37:0]o_WB_BACK
);
    assign {regWrite,memToReg,isDMByte,isDMHalf,isLOADS}=WB_CTRL;
    wire[31:0]EXout,unuse,MEMout; 
    wire[4:0]rw;
    assign {rw,EXout,unuse}=WB_DATA;
    assign AddrInDM=(EXout[15:0]<'h3000);
    assign MEMout=AddrInDM?Dout:PrRD;
    wire[31:0] EXT_Dout;
    DREXT U_DREXT(
        .in_data(MEMout),
        .out_data(EXT_Dout),
        .low_addr(EXout[1:0]),
        .exsign(isLOADS),
        .isByte(isDMByte),
        .isHalf(isDMHalf)
    );  
    wire [31:0]WB_Wd;
    assign WB_Wd=memToReg?EXT_Dout:EXout;
    assign o_WB_BACK={regWrite,WB_Wd,rw};
endmodule //WB
