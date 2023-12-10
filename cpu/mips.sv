`include "cpu/pipelineInterfaces.sv"
module mips (
    input clk,
    input rst,
    IBridge.CPU i_bridge
);

    IController i_controller(clk);
    IIF_ID      i_if_id(clk);
    IID_EX      i_id_ex(clk);
    IEX_MEM     i_ex_mem(clk);
    IMEM_WB     i_mem_wb(clk);
    IBypass     i_bypass(clk);
    ICP0        i_cp0(clk);
    IStallDetect i_stallDetect(clk);
    
    IF u_IF(
        .clk         	( clk          ),
        .rst         	( rst          ),
        .i_controller,
        .i_if_id
    );

    Controller u_Controller(
        .clk      	( clk       ),
        .reset    	( rst       ), 
        .i_cp0,
        .i_controller,
        .i_stallDetect
    );
    // outports wire
   
    

    // outports wire
    
    ID u_ID(
        .clk         	( clk          ),
        .rst         	( rst          ),
        .i_controller,
        .i_if_id,
        .i_bypass,
        .i_cp0,
        .i_id_ex,
        .i_stallDetect
    );
    
    // outports wire
    
    EX u_EX(
        .clk           	( clk            ),
        .rst           	( rst            ),
        .i_controller,
        .i_id_ex,
        .i_bypass,
        .i_cp0,
        .i_ex_mem, 
        .i_stallDetect,
        .i_bridge
    );
    
    MEM u_MEM(
        .clk       	( clk        ),
        .rst       	( rst        ),
        .i_controller,
        .i_ex_mem,
        .i_mem_wb,
        .i_bypass,
        .i_stallDetect,
        .i_bridge
    );
    
    
    WB u_WB(
        .clk(clk),
        .rst(rst),
        .i_mem_wb,
        .i_bypass
    );
    // outports wire
    
    
    CP0 u_CP0(
        .clk       	( clk        ),
        .rst       	( rst        ),
        .i_cp0,
        .i_bridge
    );
    
endmodule //mips

//将代码按阶�?�重新封装为几个大模块，从而显现出�??有每�?阶�?�所�??的信号接�??
//将原�?的中间寄存器拓展为流水线寄存�?
//将控制器状�?�机改为单指令固定五阶�??,测试依赖流水线寄存器的单指令多周期运�??
//实现旁路和阻塞解决数�?冒�?
//实现清空解决控制冒险，实现流水线
//优化控制冒险