
#include "verilated_vcd_c.h" //�?选，如果要�?�出vcd则需要加�?
#include "VFIFO.h"
#include "stdio.h"
#include <stdlib.h>
 
vluint64_t main_time = 0;  //initial 仿真时间
 
 
int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv); 
    Verilated::traceEverOn(true); //导出vcd波形需要加此�??�?
 
    VerilatedVcdC* tfp = new VerilatedVcdC; //导出vcd波形需要加此�??�?
 
    VFIFO *fifo = new VFIFO; //调用VAccumulator.h里面的IO struct
 
    fifo->trace(tfp, 0);   
    tfp->open("./fifo.vcd"); //打开vcd
    fifo->rst=1;
    fifo->clk=1;
    int cnt=0;
    while (main_time < 20000 && !Verilated::gotFinish()) { //控制仿真时间
        fifo->clk^=1;
        if(fifo->clk==0&&cnt++<3){
            printf("top:%d\n",fifo->rData); 
            printf("pop?:");
            scanf("%d",&(fifo->pop));
            printf("wData:");
            scanf("%d",&(fifo->wData));
            if(fifo->wData!=0) fifo->wen=1;
            else fifo->wen=0;
        }
        fifo->eval();
		tfp->dump(main_time); //dump wave
        main_time++; //推动仿真时间
    }
    fifo->final();
    tfp->close();
    delete fifo;
 
    return 0;
}