`ifndef CTRL_STRCT_DEF_H
`define CTRL_STRCT_DEF_H
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
`endif