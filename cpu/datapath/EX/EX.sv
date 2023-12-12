`include "cpu/pipelineInterfaces.sv"
module EX (
    input      clk,
    // verilator lint_off UNUSED
    input      rst,
    // verilator lint_on UNUSED
    IController.EX i_controller,
    IID_EX.EX i_id_ex,
    IEX_MEM.EX i_ex_mem,
    IBypass.EX i_bypass,
    ICP0.EX i_cp0,
    IBridge.Access i_bridge,
    IStallDetect.EX i_stallDetect,
    IBranchCorrect.EX i_branchCorrect
);
    wire [3:0]aluop;
    // verilator lint_off UNUSED
    wire [2:0]MDFunc,branchType;
    wire CP0WB,CP0Write,regDst,isSlt,savePC,ALUSrc,MDHIWB,MDLOWB,MDSign,zero;
    // verilator lint_on UNUSED
    assign {branchType,CP0WB,CP0Write,regDst,isSlt,savePC,ALUSrc,aluop,MDSign,MDFunc,MDHIWB,MDLOWB}=i_id_ex.EX_CTRL;

    wire  [31:2]PCP1;
    // verilator lint_off UNUSED
    wire [31:0]instr,rd1,rd2,EXTB;
    // verilator lint_on UNUSED
    assign {PCP1,instr,rd1,rd2,EXTB}=i_id_ex.EX_DATA;

    wire[31:0]f_rd1,f_rd2,ALUB,ALUC,EXout;//MDHI,MDLO;  
    
    assign i_cp0.EX_TO_CP0={CP0Write,instr[15:11],f_rd2};
    assign i_stallDetect.EX_rw=(savePC&&!regDst)?5'h1F:(regDst?instr[15:11]:instr[20:16]);
    assign i_stallDetect.EX_regWrite=i_id_ex.WB_CTRL.regWrite;
    assign i_stallDetect.EX_memToReg=i_id_ex.WB_CTRL.memToReg;
    
    wire[31:0]accessAddr;
    assign ALUB=ALUSrc?EXTB:f_rd2;
    FORWARD u_EX_FORWARD(
        .MEM_BACK (i_bypass.MEM_BACK),
        .WB_BACK(i_bypass.WB_BACK),
        .USE_MEM_BACK(1'b1),
        .USE_WB_BACK(1'b1),
        .rs           	( instr[25:21]            ),
        .rt           	( instr[20:16]            ),
        .rd1(rd1),
        .rd2(rd2),
        .f_rd1     	( f_rd1      ),
        .f_rd2     	( f_rd2      )
    );
    wire branchCommitAtEX=!i_id_ex.branchCommit.branchCommitAtMEM && i_id_ex.branchCommit.branchType!=0;
    assign i_branchCorrect.correctAtEX = branchCommitAtEX && (i_id_ex.branchCommit.predictBranchAvail!=i_id_ex.IDBranchAvail);
    assign i_branchCorrect.correctPCAtEX = i_id_ex.IDBranchAvail?i_id_ex.branchCommit.BPC
                                           :i_id_ex.branchCommit.NOJPC;

    wire EXBranchAvail;
    BRANCH u_BRANCH(
         .rd1          	( f_rd1           ),
         .rd2        	( f_rd2         ),
         .branchType  	( branchType   ),
         .branchAvail 	( EXBranchAvail  )
     );

    ALU ALU(
        .A(f_rd1),
        .B(ALUB),
        .F(aluop),
        .sa(instr[10:6]),
        .C(ALUC),
        .sum(accessAddr),
        .zero(zero)
    );
  /*  MDPROC U_MDPROC(
        .clk(clk),
        .A(f_rd1),
        .B(ALUB),
        .isSign(MDSign),
        .F(MDFunc),
        .O_HI(MDHI),
        .O_LO(MDLO)
    );
*/
    Access u_Access(
        .clk(clk),
        .memWrite(i_id_ex.MEM_CTRL.memWrite),
        .isDMByte(i_id_ex.WB_CTRL.isDMByte),
        .isDMHalf(i_id_ex.WB_CTRL.isDMHalf),
        .addr(accessAddr),
        .f_rd2,
        .i_bridge,
        .DMout(i_ex_mem.DMout)
    );
    assign EXout=isSlt?{31'b0,ALUC[31]}:
                 savePC?{2'b0,PCP1<<2}:
                 CP0WB?i_cp0.CP0_TO_EX:
               //  MDHIWB?MDHI:
               //  MDLOWB?MDLO:
                 ALUC;

    initial begin
        i_ex_mem.MEM_DATA=0;
        i_ex_mem.MEM_CTRL=0;
        i_ex_mem.WB_CTRL=0;
        i_ex_mem.branchCommit=0;
        i_ex_mem.EXBranchAvail=0;
    end
    always @(posedge clk) begin
        if(i_controller.EX_FLUSH) begin
            //o_MEM_DATA<=0;
            i_ex_mem.MEM_CTRL<=0;
            i_ex_mem.WB_CTRL<=0;
            i_ex_mem.branchCommit<=0;
            i_ex_mem.EXBranchAvail<=0;
        end
        else begin
            i_ex_mem.branchCommit<=i_id_ex.branchCommit;
            i_ex_mem.EXBranchAvail<=EXBranchAvail;
            i_ex_mem.MEM_DATA<={PCP1,i_stallDetect.EX_rw,EXout};
            i_ex_mem.MEM_CTRL<=i_id_ex.MEM_CTRL;
            i_ex_mem.WB_CTRL<=i_id_ex.WB_CTRL;
        end
    end
endmodule //EX
