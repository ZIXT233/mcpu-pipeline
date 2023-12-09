`ifndef PIPELINE_INTERFACES_H
`define PIPELINE_INTERFACES_H
typedef struct packed{
    logic PCWrite;
} type_IF_CTRL;
typedef struct packed{
    logic NPCFromEPC,ExlSet,jmp,NPCFromGPR;
    logic [2:0]branchType;
    logic extop,exsign;
} type_ID_CTRL;
typedef struct packed {
    logic CP0WB,CP0Write,regDst,isSlt,savePC,ALUSrc;
    logic [3:0]ALUSrc;
    logic MDSign;
    logic [2:0]MDFunc;
    logic MDHIWB,MDLOWB;
} type_EX_CTRL;
typedef struct packed {
    logic memWrite;
} type_MEM_CTRL;
typedef struct packed {
    logic regWrite,memToReg,isDMByte,isDMHalf,isLOADS;
} type_WB_CTRL;
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
    logic [4:0] rw;
    logic [31:0] EXout,f_rd2;
} type_MEM_DATA;
typedef struct packed {
    logic [4:0] rw;
    logic [31:0] EXout;
} type_WB_DATA;
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
    logic ID_uncertainJump;
    logic [4:0] EX_rw;
    logic EX_regWrite;
    logic EX_memToReg;
    logic [4:0] MEM_rw;
    logic MEM_memToReg;
    logic stall,LOAD,Branch_EX,Branch_LOAD;
    assign LOAD=(EX_memToReg)&&(EX_rw==ID_rs||EX_rw==ID_rt);
    assign Branch_EX=ID_uncertainJump&&(EX_memToReg||EX_regWrite)&&EX_rw!=0&&(EX_rw==ID_rs||EX_rw==ID_rt);
    assign Branch_LOAD=ID_uncertainJump&&MEM_memToReg&&(MEM_rw==ID_rs||MEM_rw==ID_rt);
    assign stall=LOAD||Branch_EX||Branch_LOAD;
    modport Controller(input stall,output ID_uncertainJump);
    modport ID(output ID_rs,ID_rt);
    modport EX(output EX_rw,EX_regWrite,EX_memToReg);
    modport MEM(output MEM_rw,MEM_memToReg);
endinterface

interface IIF_ID(input clk);
    type_ID_DATA ID_DATA;
    logic[31:2] JPC;
    logic jpcAvail;
    modport IF(input JPC,jpcAvail,output ID_DATA);
    modport ID(input ID_DATA,output JPC,jpcAvail);
endinterface
interface IID_EX(input clk);
    type_EX_CTRL EX_CTRL;
    type_MEM_CTRL MEM_CTRL;
    type_WB_CTRL WB_CTRL;
    type_EX_DATA EX_DATA;
    modport ID(output EX_CTRL,MEM_CTRL,WB_CTRL,EX_DATA);
    modport EX(input  EX_CTRL,MEM_CTRL,WB_CTRL,EX_DATA);
endinterface
interface IEX_MEM(input clk); 
    type_MEM_CTRL MEM_CTRL;
    type_WB_CTRL WB_CTRL;
    type_MEM_DATA MEM_DATA;
    modport EX(output MEM_CTRL,WB_CTRL,MEM_DATA);
    modport MEM(input  MEM_CTRL,WB_CTRL,MEM_DATA);
endinterface
interface IMEM_WB(input clk); 
    type_WB_CTRL WB_CTRL;
    type_WB_DATA WB_DATA;
    wire [31:0] Dout;
    modport MEM(output WB_CTRL,WB_DATA,Dout);
    modport WB(input  WB_CTRL,WB_DATA,Dout);
endinterface
`endif