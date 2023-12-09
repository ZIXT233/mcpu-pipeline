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

    IController i_controller(clk);
    IIF_ID      i_if_id(clk);
    IID_EX      i_id_ex(clk);
    IEX_MEM     i_ex_mem(clk);
    IMEM_WB     i_mem_wb(clk);
    IBypass     i_bypass(clk);
    ICP0        i_cp0(clk);
    IStallDetect i_stallDetect(clk);
    assign i_cp0.HWInt=HWInt;
    
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
        .i_stallDetect
    );
    
    MEM u_MEM(
        .clk       	( clk        ),
        .rst       	( rst        ),
        .i_controller,
        .i_ex_mem,
        .i_mem_wb,
        .i_bypass,
        .i_stallDetect,
        .PrAddr(PrAddr),
        .PrRD(PrRD),
        .PrWD(PrWD),
        .PrBE(PrBE),
        .IOWrite(IOWrite)
    );
    
    
    WB u_WB(
        .clk(clk),
        .rst(rst),
        .PrRD(PrRD),
        .i_mem_wb,
        .i_bypass
    );
    // outports wire
    
    
    CP0 u_CP0(
        .clk       	( clk        ),
        .rst       	( rst        ),
        .i_cp0
    );
    
endmodule //mips

//将代码按阶段重新封装为几个大模块，从而显现出�?有每个阶段所�?的信号接�?
//将原本的中间寄存器拓展为流水线寄存器
//将控制器状�?�机改为单指令固定五阶段,测试依赖流水线寄存器的单指令多周期运�?
//实现旁路和阻塞解决数据冒�?
//实现清空解决控制冒险，实现流水线
//优化控制冒险