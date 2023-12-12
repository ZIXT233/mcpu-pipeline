`ifndef PIPELINE_INTERFACES_H
`define PIPELINE_INTERFACES_H

//verilator lint_off DECLFILENAME

typedef struct packed{
    logic PCWrite;
} type_IF_CTRL;


typedef struct packed {
    logic regWrite,memToReg,isDMByte,isDMHalf,isLOADS;
} type_WB_CTRL;
typedef struct packed {
    logic memWrite;
} type_MEM_CTRL;
typedef struct packed {
    logic [2:0]branchType;
    logic CP0WB,CP0Write,regDst,isSlt,savePC,ALUSrc;
    logic [3:0]aluop;
    logic MDSign;
    logic [2:0]MDFunc;
    logic MDHIWB,MDLOWB;
} type_EX_CTRL;
typedef struct packed{
    logic NPCFromEPC,ExlSet,jmp,NPCFromGPR;
    logic [2:0]branchType;
    logic extop,exsign;
} type_ID_CTRL;
typedef struct packed {
    logic ExlSet,ExlClr;
} type_CP0_CTRL;

typedef struct packed {
    logic[31:2] ID_PCP1;
    logic[31:0] ID_instr;
} type_ID_DATA;
typedef struct packed {
    logic[31:2] PCP1;
    logic[31:0] instr,f_rd1,f_rd2,EXTB;
} type_EX_DATA;
typedef struct packed {
    logic[31:2] PCP1;
    logic [4:0] rw;
    logic [31:0] EXout;
} type_MEM_DATA;

typedef struct packed {
    logic [31:0] WB_Wd;
    logic [4:0] rw;
} type_WB_DATA;
typedef struct packed {
    logic regWrite;
    logic [31:0]Wd;
    logic [4:0]rw;
} type_Bypass_DATA;
interface IController(input clk);
    logic [31:26] op;
    logic [5:0] func;
    logic [25:21] rs;
    logic [20:16] rt;
    logic [31:0] ID_instr;
    logic IF_FLUSH,ID_FLUSH,EX_FLUSH,MEM_FLUSH,WB_FLUSH;
    type_IF_CTRL IF_CTRL;
    type_ID_CTRL ID_CTRL;
    type_EX_CTRL EX_CTRL;
    type_MEM_CTRL MEM_CTRL;
    type_WB_CTRL WB_CTRL;
    assign op=ID_instr[31:26];
    assign func=ID_instr[5:0];
    assign rs=ID_instr[25:21];
    assign rt=ID_instr[20:16];
    modport Controller(input op,func,rs,rt,
                       output IF_CTRL,ID_CTRL,EX_CTRL,MEM_CTRL,WB_CTRL,
                       output IF_FLUSH,ID_FLUSH,EX_FLUSH,MEM_FLUSH);
    modport IF(input IF_FLUSH,IF_CTRL);
    modport ID(input ID_FLUSH,ID_CTRL,EX_CTRL,MEM_CTRL,WB_CTRL,
               output ID_instr);
    modport EX(input EX_FLUSH);
    modport MEM(input MEM_FLUSH);
endinterface
interface IStallDetect(input clk);
    logic [4:0] ID_rs,ID_rt;
    logic ID_memWrite;
    logic NPCFromGPR;
    logic branch;
    logic [4:0] EX_rw;
    logic EX_regWrite;
    logic EX_memToReg;
    logic [4:0] MEM_rw;
    logic MEM_memToReg;
    logic stall,LOAD,LOAD_STORE_SAME,Branch_EX,Branch_LOAD,NFG_EX,NFG_LOAD;
    logic branchCommitAtMEM;
    assign LOAD=(EX_memToReg)&&(EX_rw==ID_rs||EX_rw==ID_rt)&&EX_rw!=0;
    assign LOAD_STORE_SAME=(EX_memToReg&&ID_memWrite)&&(EX_rw==ID_rt)&&EX_rw!=0;
    assign Branch_EX=branch&&(EX_memToReg||EX_regWrite)&&EX_rw!=0&&(EX_rw==ID_rs||EX_rw==ID_rt);
    assign Branch_LOAD=branch&&MEM_memToReg&&(MEM_rw==ID_rs||MEM_rw==ID_rt);
    assign NFG_EX=NPCFromGPR&&(EX_memToReg||EX_regWrite)&&EX_rw!=0&&(EX_rw==ID_rs||EX_rw==ID_rt);
    assign NFG_LOAD=NPCFromGPR&&MEM_memToReg&&(MEM_rw==ID_rs||MEM_rw==ID_rt);
    assign stall=(LOAD&&!LOAD_STORE_SAME)||NFG_EX||NFG_LOAD;//||Branch_EX||Branch_LOAD;
    assign branchCommitAtMEM=Branch_EX||Branch_LOAD;
    modport Controller(input stall,output NPCFromGPR,branch);
    modport ID(output ID_rs,ID_rt,ID_memWrite,input branchCommitAtMEM);
    modport EX(output EX_rw,EX_regWrite,EX_memToReg);
    modport MEM(output MEM_rw,MEM_memToReg);
endinterface

interface IIF_ID(input clk);
    type_ID_DATA ID_DATA;
    logic[31:2] NPC;
   // logic jpcAvail;
    modport IF(input NPC,output ID_DATA);
    modport ID(input ID_DATA,output NPC);
endinterface
interface IBranchCorrect(input clk);
    logic[31:2] correctPCAtEX,correctPCAtMEM;
    logic correctAtEX;
    logic correctAtMEM;
    modport IF(input correctPCAtEX,correctAtEX,correctPCAtMEM,correctAtMEM);
    modport ID(input correctAtEX,correctAtMEM);
    modport EX(output correctPCAtEX,correctAtEX);
    modport MEM(output correctPCAtMEM,correctAtMEM);
    modport Controller(input correctAtEX,correctAtMEM);
endinterface

typedef struct packed{
    logic predictBranchAvail;
    logic [31:2]NOJPC,BPC;
    logic branchCommitAtMEM;
    logic [2:0] branchType;
} type_Branch_Commit;
interface IID_EX(input clk);
    type_EX_CTRL EX_CTRL;
    type_MEM_CTRL MEM_CTRL;
    type_WB_CTRL WB_CTRL;
    type_EX_DATA EX_DATA;
    type_Branch_Commit branchCommit;
    logic IDBranchAvail;
    modport ID(output EX_CTRL,MEM_CTRL,WB_CTRL,EX_DATA,branchCommit,IDBranchAvail);
    modport EX(input  EX_CTRL,MEM_CTRL,WB_CTRL,EX_DATA,branchCommit,IDBranchAvail);
endinterface

interface IEX_MEM(input clk); 
    type_MEM_CTRL MEM_CTRL;
    type_WB_CTRL WB_CTRL;
    type_MEM_DATA MEM_DATA;
    type_Branch_Commit branchCommit;
    logic EXBranchAvail;
    wire [31:0] DMout;
    modport EX(output MEM_CTRL,WB_CTRL,MEM_DATA,DMout,branchCommit,EXBranchAvail);
    modport MEM(input  MEM_CTRL,WB_CTRL,MEM_DATA,DMout,branchCommit,EXBranchAvail);
endinterface
interface IMEM_WB(input clk); 
    type_WB_CTRL WB_CTRL;
    type_WB_DATA WB_DATA;
    
    modport MEM(output WB_CTRL,WB_DATA);
    modport WB(input  WB_CTRL,WB_DATA);
endinterface
interface IBridge(input clk);
    logic [31:0]PrWD,PrRD;
    logic [31:2]PrAddr;
    logic [3:0]PrBE;
    logic [7:2]HWInt;
    logic IOWrite;
    modport CPU(input PrRD,HWInt,
                output PrWD,PrAddr,PrBE,IOWrite);
    modport Access(output PrWD,PrAddr,PrBE,IOWrite);
    modport MEM(input PrRD);
    modport CP0(input HWInt);
endinterface
interface IBypass(input clk);
    type_Bypass_DATA MEM_BACK,WB_BACK;
    logic[31:0]MEM_EXT_MEMout;
    logic MEM_memToReg;
    modport ID(input MEM_BACK,WB_BACK);
    modport EX(input MEM_BACK,WB_BACK,MEM_EXT_MEMout,MEM_memToReg);
    modport MEM(output MEM_BACK,MEM_EXT_MEMout,MEM_memToReg);
    modport WB(output WB_BACK);
endinterface
interface ICP0(input clk); 
    wire [31:2] ID_PCP1;
    logic [31:2] EPC;
    wire [37:0] EX_TO_CP0;
    wire [31:0] CP0_TO_EX;
    wire [1:0]CP0_CTRL;
    wire IntReq;
    modport CP0(input ID_PCP1,EX_TO_CP0,CP0_CTRL,
                output IntReq,EPC,CP0_TO_EX);
    modport Controller(input IntReq,output CP0_CTRL);
    modport ID(input EPC,output ID_PCP1);
    modport EX(input CP0_TO_EX,output EX_TO_CP0);
endinterface
`endif
