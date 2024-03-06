
#include "verilated_vcd_c.h" //�?选，如果要�?�出vcd则需要加�?
#include "Vtop.h"
#include "stdio.h"
#include <stdlib.h>
 
vluint64_t main_time = 0;  //initial 仿真时间
 
 
int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv); 
    Verilated::traceEverOn(true); //导出vcd波形需要加此�??�?
 
    VerilatedVcdC* tfp = new VerilatedVcdC; //导出vcd波形需要加此�??�?
 
    Vtop *top = new Vtop; //调用VAccumulator.h里面的IO struct
 
    top->trace(tfp, 0);   
    tfp->open("./wave.vcd"); //打开vcd
    top->rst=1;
    top->clk=1;
    while (main_time < 1400 && !Verilated::gotFinish()) { //控制仿真时间
        top->clk^=1;
		top->eval();
		tfp->dump(main_time); //dump wave
        main_time++; //推动仿真时间
    }
    top->final();
    tfp->close();
    delete top;
 
    return 0;
}