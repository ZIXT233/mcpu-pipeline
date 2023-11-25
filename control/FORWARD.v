module FORWARD (
    input [37:0]MEM_BACK,
    input [37:0]WB_BACK,
    input USE_MEM_BACK,
    input USE_WB_BACK,
    input[4:0] rs,
    input[4:0] rt,
    input [31:0]rd1,
    input [31:0]rd2,
    output reg[31:0] f_rd1,
    output reg[31:0] f_rd2
);
    wire [31:0] WB_Wd,MEM_Wd;
    wire [4:0] WB_rd,MEM_rd;
    assign {WB_regWrite,WB_Wd,WB_rd}=WB_BACK;
    assign {MEM_regWrite,MEM_Wd,MEM_rd}=MEM_BACK;

    always @(*)begin
        if(MEM_regWrite && USE_MEM_BACK
            && MEM_rd!=0
            && MEM_rd==rs) f_rd1<=MEM_Wd;
        else if(WB_regWrite && USE_WB_BACK
            && WB_rd!=0 
            && WB_rd==rs) f_rd1<=WB_Wd;
        else f_rd1<=rd1;
        if(MEM_regWrite && USE_MEM_BACK
            && MEM_rd!=0
            && MEM_rd==rt) f_rd2<=MEM_Wd;
        else if(WB_regWrite && USE_MEM_BACK
            && WB_rd!=0
            && WB_rd==rt) f_rd2<=WB_Wd;
        else f_rd2<=rd2;
    end
    
endmodule //Forward
