`include "cpu/pipelineInterfaces.sv"
module ID (
    input      clk,
    input      rst,
    IController.ID i_controller,
    IIF_ID.ID i_if_id,
    IBypass.ID i_bypass,
    ICP0.ID i_cp0,
    IID_EX.ID i_id_ex,
    IBranchCorrect.ID i_branchCorrect,
    IStallDetect.ID i_stallDetect
);   
    wire [2:0]branchType;
    wire NPCFromEPC,ExlSet,jmp,NPCFromGPR,extop,exsign;
    assign {NPCFromEPC,ExlSet,jmp,NPCFromGPR,branchType,extop,exsign}=i_controller.ID_CTRL;
    wire [31:2] PCP1;
    wire [31:0] instr;
    assign {PCP1,instr}=i_if_id.ID_DATA;
    assign i_controller.ID_instr=instr;
    assign i_stallDetect.ID_rs=instr[25:21];
    assign i_stallDetect.ID_rt=instr[20:16];
    assign i_stallDetect.ID_memWrite=i_controller.MEM_CTRL.memWrite;
    assign i_cp0.ID_PCP1=PCP1;
    wire [31:0] WB_Wd;
    wire [4:0] WB_rw;
    wire WB_regWrite;
    assign {WB_regWrite,WB_Wd,WB_rw}=i_bypass.WB_BACK;

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
        .extop(extop),
        .exsign(exsign),
        .B(EXTB)
    );
    // outports wire
    wire [31:0] 	f_rd1;
    wire [31:0] 	f_rd2,nouse;
    
    FORWARD u_ID_FORWARD(
        .MEM_BACK 	( i_bypass.MEM_BACK  ),
        .WB_BACK  	( i_bypass.WB_BACK   ),
        .USE_MEM_BACK(1'b1),
        .USE_WB_BACK(1'b1),
        .rs       	( instr[25:21]       ),
        .rt       	( instr[20:16]        ),
        .rd1      	( rd1       ),
        .rd2      	( rd2       ),
        .f_rd1    	( f_rd1     ),
        .f_rd2    	( f_rd2     ),
        .EX_memWrite(0),
        .MEM_memToReg(0),
        .MEM_EXT_MEMout(0),
        .f_rd2_for_MEM(nouse)
    );
    // outports wire


    
    wire       	predictBranchAvail;  //always branch
    BranchPredict u_branch_predict(
        .clk,
        .low_addr(PCP1[7:2]),
        .i_branchCorrect,
        .branchType,
        .predictBranchAvail
    );
    wire[31:2] NOJPC,BPC;
    npc npc (
        .PC(PCP1),
        .branchAvail(predictBranchAvail), 
        .jmp(jmp),
        .offset(instr[15:0]),
        .instr_index(instr[25:0]),
        .reg_index(f_rd1),
        .NPCFromGPR(NPCFromGPR),
        .goExceptionHandler(ExlSet),
        .NPCFromEPC(NPCFromEPC),
        .EPC(i_cp0.EPC),
        .jpcAvail(ExlSet||NPCFromEPC||NPCFromGPR||jmp||predictBranchAvail),
        .NPC(i_if_id.NPC),
        .NOJPC,
        .BPC
    );

    wire IDBranchAvail;    
    BRANCH u_BRANCH(
        .rd1          	( f_rd1           ),
        .rd2        	( f_rd2         ),
        .branchType  	( branchType   ),
        .branchAvail 	( IDBranchAvail  )
    );
    //assign i_if_id.jpcAvail=ExlSet|NPCFromEPC||NPCFromGPR||jmp||branchAvail;
    initial begin
        i_id_ex.EX_DATA=0;
        i_id_ex.EX_CTRL=0;
        i_id_ex.MEM_CTRL=0;
        i_id_ex.WB_CTRL=0;
        i_id_ex.branchCommit=0;
        i_id_ex.IDBranchAvail=0;
    end
    always @(posedge clk) begin
        if(i_controller.ID_FLUSH) begin
            //o_EX_DATA<=0;
            i_id_ex.EX_CTRL<=0;
            i_id_ex.MEM_CTRL<=0;
            i_id_ex.WB_CTRL<=0;
            i_id_ex.branchCommit<=0;
            i_id_ex.IDBranchAvail<=0;
        end
        else begin
            i_id_ex.EX_DATA<={PCP1,instr,f_rd1,f_rd2,EXTB};
            i_id_ex.EX_CTRL<=i_controller.EX_CTRL;
            i_id_ex.MEM_CTRL<=i_controller.MEM_CTRL;
            i_id_ex.WB_CTRL<=i_controller.WB_CTRL;
            i_id_ex.branchCommit.predictBranchAvail<=predictBranchAvail;
            i_id_ex.IDBranchAvail<=IDBranchAvail;
            i_id_ex.branchCommit.branchType<=branchType;
            i_id_ex.branchCommit.NOJPC<=NOJPC;
            i_id_ex.branchCommit.BPC<=BPC;
            i_id_ex.branchCommit.branchCommitAtMEM<=i_stallDetect.branchCommitAtMEM;
        end
    end
endmodule //ID
