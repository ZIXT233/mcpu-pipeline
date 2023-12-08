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
                       output IF_FLUSH,ID_FLUSH);
    modport IF(input IF_FLUSH,IF_CTRL);
    modport ID(input ID_FLUSH,ID_CTRL,EX_CTRL,MEM_CTRL,WB_CTRL,
               output ID_instr);
endinterface
interface IIF_ID(input clk);
    type_ID_DATA ID_DATA;
    logic[31:2] JPC;
    logic jpcAvail;
    modport IF(input JPC,jpcAvail,output ID_DATA);
    modport ID(input ID_DATA,output JPC,jpcAvail);
endinterface

`endif