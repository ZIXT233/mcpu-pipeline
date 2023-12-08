`include "CTRLStructDef.sv"
module ID (
    input      clk,
    input      rst,
    input ID_FLUSH,
    input type_ID_CTRL ID_CTRL,
    input type_EX_CTRL EX_CTRL,
    input type_MEM_CTRL MEM_CTRL,
    input type_WB_CTRL WB_CTRL,
    input [61:0]ID_DATA,
    input [37:0]WB_BACK,
    input [37:0]MEM_BACK,
    input [31:2]CP0_EPC,
    output reg[15:0]o_EX_CTRL,
    output reg o_MEM_CTRL,
    output reg [4:0] o_WB_CTRL,
    output reg[157:0] o_EX_DATA,
    output [31:2]o_JPC,
    output o_jpcAvail
);  
    wire [2:0]branchType;
    assign o_uncertainJump=ID_CTRL.NPCFromGPR||(ID_CTRL.branchType!=0);
    wire [31:2] PCP1;
    wire [31:0] instr;
    assign {PCP1,instr}=ID_DATA;
    wire [31:0] WB_Wd;
    wire [4:0] WB_rw;
    assign {WB_regWrite,WB_Wd,WB_rw}=WB_BACK;

    wire [31:0]rd1,rd2,EXTB;

    GPR GPR(
        .clk(clk),  //for WB befor ID
        .reset(rst),
        .rs(instr[25:21]),
        .rt(instr[20:16]),
        .rw(WB_rw),
        .regWrite(WB_regWrite),
        .Wd(WB_Wd),
        .rd1(rd1),
        .rd2(rd2) 
    );
    EXT EXT(
        .A(instr[15:0]),
        .extop(ID_CTRL.extop),
        .exsign(ID_CTRL.exsign),
        .B(EXTB)
    );
    // outports wire
    wire [31:0] 	f_rd1;
    wire [31:0] 	f_rd2;
    
    FORWARD u_ID_FORWARD(
        .MEM_BACK 	( MEM_BACK  ),
        .WB_BACK  	( WB_BACK   ),
        .USE_MEM_BACK(1'b1),
        .USE_WB_BACK(1'b1),
        .rs       	( instr[25:21]       ),
        .rt       	( instr[20:16]        ),
        .rd1      	( rd1       ),
        .rd2      	( rd2       ),
        .f_rd1    	( f_rd1     ),
        .f_rd2    	( f_rd2     )
    );
    // outports wire
    wire       	branchAvail;
    
    BRANCH u_BRANCH(
        .rd1          	( f_rd1           ),
        .rd2        	( f_rd2         ),
        .branchType  	( branchType   ),
        .branchAvail 	( branchAvail  )
    );
    
    jpc jpc (
        .PC(PCP1),
        .branchAvail(branchAvail), 
        .jmp(ID_CTRL.jmp),
        .offset(instr[15:0]),
        .instr_index(instr[25:0]),
        .reg_index(f_rd1),
        .NPCFromGPR(ID_CTRL.NPCFromGPR),
        .goExceptionHandler(ID_CTRL.ExlSet),
        .NPCFromEPC(ID_CTRL.NPCFromEPC),
        .EPC(CP0_EPC),
        .JPC(o_JPC)
    );

    assign o_jpcAvail=ID_CTRL.ExlSet||ID_CTRL.NPCFromEPC||ID_CTRL.NPCFromGPR||ID_CTRL.jmp||branchAvail;
    initial begin
        o_EX_DATA<=0;
        o_EX_CTRL<=0;
        o_MEM_CTRL<=0;
        o_WB_CTRL<=0;
    end
    always @(posedge clk) begin
        if(ID_FLUSH) begin
            //o_EX_DATA<=0;
            o_EX_CTRL<=0;
            o_MEM_CTRL<=0;
            o_WB_CTRL<=0;
        end
        else begin
            o_EX_DATA<={PCP1,instr,f_rd1,f_rd2,EXTB};
            o_EX_CTRL<=EX_CTRL;
            o_MEM_CTRL<=MEM_CTRL;
            o_WB_CTRL<=WB_CTRL;
        end
    end
endmodule //ID