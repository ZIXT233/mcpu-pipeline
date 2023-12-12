`define fmatch(sel,val) ({32{sel}}&(val))
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
    output [31:0] f_rd2,
    input EX_memWrite,
    input [31:0]MEM_EXT_MEMout,
    input MEM_memToReg
);
    wire [31:0] WB_Wd,MEM_Wd;
    wire [4:0] WB_rd,MEM_rd;
    wire WB_regWrite,MEM_regWrite;
    assign {WB_regWrite,WB_Wd,WB_rd}=WB_BACK;
    assign {MEM_regWrite,MEM_Wd,MEM_rd}=MEM_BACK;
    wire MEM_EN=MEM_regWrite && USE_MEM_BACK && MEM_rd!=0;
    wire WB_EN=WB_regWrite && USE_WB_BACK && WB_rd!=0;
    wire AFromMEM=MEM_EN && MEM_rd==rs;
    wire AFromWB =WB_EN && WB_rd==rs && !AFromMEM;
    wire oriA=!AFromMEM&&!AFromWB;

    wire BFromMEM=MEM_EN && MEM_rd==rt && !(EX_memWrite && MEM_memToReg);
    wire BFromWB =WB_EN && WB_rd==rt && !BFromMEM;

    wire LOADBFromWB=MEM_EN && MEM_rd==rt && EX_memWrite && MEM_memToReg;

    wire oriB=!BFromMEM&&!BFromWB&&!LOADBFromWB;

    assign f_rd1=`fmatch(AFromMEM,MEM_Wd)|`fmatch(AFromWB,WB_Wd)|`fmatch(oriA,rd1);
    assign f_rd2=`fmatch(BFromMEM,MEM_Wd)|`fmatch(BFromWB,WB_Wd)|`fmatch(oriB,rd2)|`fmatch(LOADBFromWB,MEM_EXT_MEMout);

    
endmodule //Forward

