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
    wire [1:0]      CP0_CTRL;
    wire [31:2] ID_PCP1;
    wire [31:0] ID_instr;
    wire   	pipeline_stall;
    wire [157:0] 	EX_DATA_from_ID;
    wire [15:0]     EX_CTRL_from_ID;
    wire         	MEM_CTRL_from_ID;
    wire [4:0]   	WB_CTRL_from_ID;
    wire [31:2]     JPC;
    wire jpcAvail;
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
    IController i_controller(clk);
    IIF_ID      i_if_id(clk);
    IID_EX      i_id_ex(clk);
    IEX_MEM     i_ex_mem(clk);
    IMEM_WB     i_mem_wb(clk);
    IStallDetect i_stallDetect(clk);

    
    IF u_IF(
        .clk         	( clk          ),
        .rst         	( rst          ),
        .i_controller,
        .i_if_id
    );
    
    // outports wire from controller
   
    assign {ID_PCP1,ID_instr}=i_if_id.ID_DATA;
    assign ID_DATA_from_IF=i_if_id.ID_DATA;
    Controller u_Controller(
        .clk      	( clk       ),
        .reset    	( rst       ), 
        .IntReq(IntReq),
        .i_controller,
        .CP0_CTRL(CP0_CTRL),
        .i_stallDetect
    );
    // outports wire
   
    

    // outports wire
    
    ID u_ID(
        .clk         	( clk          ),
        .rst         	( rst          ),
        .i_controller,
        .i_if_id,
        .WB_BACK       	( WB_BACK_from_WB        ),
        .CP0_EPC        ( ID_EPC_from_CP0),
        .MEM_BACK       ( MEM_BACK_from_MEM),
        .i_id_ex,
        .i_stallDetect
    );
    
    // outports wire
    
    EX u_EX(
        .clk           	( clk            ),
        .rst           	( rst            ),
        .i_controller,
        .i_id_ex,
        .WB_BACK        ( WB_BACK_from_WB),
        .MEM_BACK       ( MEM_BACK_from_MEM),
        .CP0_DATA       ( EX_DATA_from_CP0),
        .i_ex_mem,
        .o_CP0_DATA     ( CP0_DATA_from_EX ),
        .i_stallDetect
    );
    
    // outports wire
    wire[31:0] Dout;
    MEM u_MEM(
        .clk       	( clk        ),
        .rst       	( rst        ),
        .i_controller,
        .i_ex_mem,
        .PrAddr(PrAddr),
        .PrRD(PrRD),
        .PrWD(PrWD),
        .PrBE(PrBE),
        .IOWrite(IOWrite),
        .i_mem_wb,
        .o_MEM_BACK  ( MEM_BACK_from_MEM ),
        .i_stallDetect
    );
    
    
    WB u_WB(
        .clk(clk),
        .rst(rst),
        .PrRD(PrRD),
        .i_mem_wb,
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

//将代码按阶段重新封装为几个大模块，从而显现出�?有每个阶段所�?的信号接�?
//将原本的中间寄存器拓展为流水线寄存器
//将控制器状�?�机改为单指令固定五阶段,测试依赖流水线寄存器的单指令多周期运�?
//实现旁路和阻塞解决数据冒�?
//实现清空解决控制冒险，实现流水线
//优化控制冒险