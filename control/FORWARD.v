`define match(sel,val) ({32{sel}}&(val))
module FORWARD (
    input [37:0]MEM_BACK,
    input [37:0]WB_BACK,
    input USE_MEM_BACK,
    input USE_WB_BACK,
    input[4:0] rs,
    input[4:0] rt,
    input [31:0]rd1,
    input [31:0]rd2,
    output [31:0] f_rd1,
    output [31:0] f_rd2
);
    wire [31:0] WB_Wd,MEM_Wd;
    wire [4:0] WB_rd,MEM_rd;
    assign {WB_regWrite,WB_Wd,WB_rd}=WB_BACK;
    assign {MEM_regWrite,MEM_Wd,MEM_rd}=MEM_BACK;
    assign MEM_EN=MEM_regWrite && USE_MEM_BACK && MEM_rd!=0;
    assign WB_EN=WB_regWrite && USE_WB_BACK && WB_rd!=0;
    assign AFromMEM=MEM_EN && MEM_rd==rs;
    assign AFromWB =WB_EN && WB_rd==rs && !AFromMEM;
    assign oriA=!AFromMEM&&!AFromWB;

    assign BFromMEM=MEM_EN && MEM_rd==rt;
    assign BFromWB =WB_EN && WB_rd==rt && !BFromMEM;
    assign oriB=!BFromMEM&&!BFromWB;

    assign f_rd1=`match(AFromMEM,MEM_Wd)|`match(AFromWB,WB_Wd)|`match(oriA,rd1);
    assign f_rd2=`match(BFromMEM,MEM_Wd)|`match(BFromWB,WB_Wd)|`match(oriB,rd2);

    
endmodule //Forward
