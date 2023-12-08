`include "CTRLStructDef.sv"
module mips (
    input clk,
    input rst,
    input [7:2]HWInt,
    output [31:2]PrAddr,
    input [31:0]PrRD,
    output [31:0]PrWD,
    output [3:0]PrBE,
    output IOWrite
);
    // outports wire
    wire [61:0] 	ID_DATA_from_IF;
    type_IF_CTRL        	IF_CTRL;
    type_ID_CTRL  	ID_CTRL;
    type_EX_CTRL 	EX_CTRL;
    type_MEM_CTRL        	MEM_CTRL;
    type_WB_CTRL  	WB_CTRL;
    type_CP0_CTRL      CP0_CTRL;
    wire [31:2] ID_PCP1;
    wire [31:0] ID_instr;
     wire   	pipeline_stall;
     wire [157:0] 	EX_DATA_from_ID;
    wire [15:0]     EX_CTRL_from_ID;
    wire         	MEM_CTRL_from_ID;
    wire [4:0]   	WB_CTRL_from_ID;
    wire [31:2]     JPC;
    wire jpcAvail;
    wire ID_uncertainJump;
    wire         	MEM_CTRL_from_EX;
    wire [4:0]   	WB_CTRL_from_EX;
    wire [68:0] 	MEM_DATA_from_EX;
    wire [4:0]      EX_rw_from_EX;
    wire [37:0]     CP0_DATA_from_EX;
    wire [4:0]   	WB_CTRL_from_MEM;
    wire [68:0] 	WB_DATA_from_MEM;
    wire [37:0]     MEM_BACK_from_MEM;
    wire[37:0] WB_BACK_from_WB;
    wire [31:2] 	ID_EPC_from_CP0;
    wire [31:0] 	EX_DATA_from_CP0;
    wire [66:0] pre_MEM_DATA_from_EX;
    
    wire        	IntReq;
    IF u_IF(
        .clk         	( clk          ),
        .rst         	( rst          ),
        .JPC            ( JPC ),
        .jpcAvail       ( jpcAvail ),
        .IF_FLUSH       ( IF_FLUSH     ),
        .IF_CTRL     	( IF_CTRL      ),
        .o_ID_DATA   	( ID_DATA_from_IF    )
    );
    
    // outports wire from controller
   
    assign {ID_PCP1,ID_instr}=ID_DATA_from_IF;

    Controller u_Controller(

        .clk      	( clk       ),
        .reset    	( rst       ), 
        .op(ID_instr[31:26]),
        .func(ID_instr[5:0]),
        .rs(ID_instr[25:21]),
        .rt(ID_instr[20:16]),
        .pipeline_stall(pipeline_stall),
        .IntReq(IntReq),
        .IF_FLUSH (IF_FLUSH),
        .ID_FLUSH (ID_FLUSH),
        .EX_FLUSH (EX_FLUSH),
        .MEM_FLUSH (MEM_FLUSH),
        .IF_CTRL  	( IF_CTRL   ),
        .ID_CTRL  	( ID_CTRL   ),
        .EX_CTRL  	( EX_CTRL   ),
        .MEM_CTRL 	( MEM_CTRL  ),
        .WB_CTRL  	( WB_CTRL   ),
        .CP0_CTRL(CP0_CTRL),
        .o_uncertainJump(ID_uncertainJump)
    );
    // outports wire
   
    
    HazardDetect u_HazardDetect(
        .ID_rs       	( ID_DATA_from_IF[25:21]        ),
        .ID_rt       	( ID_DATA_from_IF[20:16]        ),
        .EX_rw       	( EX_rw_from_EX      ),
        .MEM_rw         ( MEM_BACK_from_MEM[4:0]),
        .MEM_memToReg    ( WB_CTRL_from_EX[3]),
        .EX_regWrite    (WB_CTRL_from_ID[4]),
        .EX_memToReg 	( WB_CTRL_from_ID[3]  ),
        .ID_uncertainJump(ID_uncertainJump),
        .stall       	( pipeline_stall        )
    );
    
    // outports wire
    
    ID u_ID(
        .clk         	( clk          ),
        .rst         	( rst          ),
        .ID_CTRL     	( ID_CTRL      ),
        .EX_CTRL        ( EX_CTRL      ),
        .MEM_CTRL       ( MEM_CTRL     ),
        .WB_CTRL        ( WB_CTRL      ),
        .ID_FLUSH (ID_FLUSH),
        .ID_DATA     	( ID_DATA_from_IF      ),
        .WB_BACK       	( WB_BACK_from_WB        ),
        .CP0_EPC        ( ID_EPC_from_CP0),
        .MEM_BACK       ( MEM_BACK_from_MEM),
        .o_EX_CTRL      ( EX_CTRL_from_ID ),
        .o_MEM_CTRL     ( MEM_CTRL_from_ID),
        .o_WB_CTRL      ( WB_CTRL_from_ID ),
        .o_EX_DATA   	( EX_DATA_from_ID ),
        .o_JPC          (JPC),
        .o_jpcAvail       (jpcAvail)
    );
    
    // outports wire
    
    EX u_EX(
        .clk           	( clk            ),
        .rst           	( rst            ),
        .EX_FLUSH (EX_FLUSH),
        .EX_CTRL       	( EX_CTRL_from_ID        ),
        .MEM_CTRL      	( MEM_CTRL_from_ID       ),
        .WB_CTRL       	( WB_CTRL_from_ID        ),
        .EX_DATA       	( EX_DATA_from_ID  ),
        .WB_BACK        ( WB_BACK_from_WB),
        .MEM_BACK       ( MEM_BACK_from_MEM),
        .CP0_DATA       ( EX_DATA_from_CP0),
        .o_MEM_CTRL    	( MEM_CTRL_from_EX     ),
        .o_WB_CTRL     	( WB_CTRL_from_EX      ),
        .o_MEM_DATA    	( MEM_DATA_from_EX     ),
        .o_CP0_DATA     ( CP0_DATA_from_EX ),
        .o_pre_MEM_DATA (pre_MEM_DATA_from_EX),
        .rw        ( EX_rw_from_EX)
    );
    
    // outports wire
    
    MEM u_MEM(
        .clk       	( clk        ),
        .rst       	( rst        ),
        .MEM_FLUSH (MEM_FLUSH),
        .MEM_CTRL  	( MEM_CTRL_from_EX   ),
        .WB_CTRL   	( WB_CTRL_from_EX    ),
        .MEM_DATA  	( MEM_DATA_from_EX   ),
        .pre_MEM_DATA (pre_MEM_DATA_from_EX),
        .PrAddr(PrAddr),
        .PrRD(PrRD),
        .PrWD(PrWD),
        .PrBE(PrBE),
        .IOWrite(IOWrite),
        .o_WB_CTRL 	( WB_CTRL_from_MEM  ),
        .o_WB_DATA 	( WB_DATA_from_MEM  ),
        .o_MEM_BACK  ( MEM_BACK_from_MEM )
    );
    
    
    WB u_WB(
        .clk(clk),
        .rst(rst),
        .WB_CTRL(WB_CTRL_from_MEM),
        .WB_DATA(WB_DATA_from_MEM),
        .o_WB_BACK(WB_BACK_from_WB)
    );
    // outports wire
    
    
    CP0 u_CP0(
        .clk       	( clk        ),
        .rst       	( rst        ),
        .HWInt     	( HWInt      ),
        .ID_PCP1   	( ID_PCP1    ),
        .o_ID_EPC  	( ID_EPC_from_CP0   ),
        .EX_DATA   	( CP0_DATA_from_EX    ),
        .o_EX_DATA 	( EX_DATA_from_CP0  ),
        .CP0_CTRL  	( CP0_CTRL   ),
        .IntReq    	( IntReq     )
    );
    
endmodule //mips

//将代码按阶�?�重新封装为几个大模块，从而显现出�?有每�?阶�?�所�?的信号接�?
//将原�?的中间寄存器拓展为流水线寄存�?
//将控制器状�?�机改为单指令固定五阶�??,测试依赖流水线寄存器的单指令多周期运�?
//实现旁路和阻塞解决数�?冒�??
//实现清空解决控制冒险，实现流水线
//优化控制冒险