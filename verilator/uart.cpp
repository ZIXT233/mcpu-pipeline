
#include "verilated_vcd_c.h" //�??选，如果要�?�出vcd则需要加�??
#include "Vtop.h"
#include "stdio.h"
#include <stdlib.h>
 
vluint64_t main_time = 0;  //initial 仿真时间
 
 
int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv); 
    Verilated::traceEverOn(true); //导出vcd波形需要加此�??�??
 
    VerilatedVcdC* tfp = new VerilatedVcdC; //导出vcd波形需要加此�??�??
 
    Vtop *top = new Vtop; //调用VAccumulator.h里面的IO struct
 
    top->trace(tfp, 0);   
    tfp->open("./wave.vcd"); //打开vcd
    top->rst=1;
    top->clk=1;
    bool TxD_start=false;
    int TxD_cnt=0;
    unsigned char TxD_data;
    int r=0,rcnt=0;
    top->RxD=1;
    while (main_time < 2800 && !Verilated::gotFinish()) { //控制仿真时间
        top->clk^=1;
        if(top->clk==0&&main_time>20&&rcnt<9){
            top->RxD=getchar();
            if(top->RxD=='0') top->RxD=0;
            else top->RxD=1;
        }else if(top->clk==0&&rcnt==9) top->RxD=1;
		top->eval();
        if(top->clk){
            
            if(TxD_start==false){
                if(top->TxD==0){
                    TxD_start=true;
                    TxD_cnt=0;
                    TxD_data=0;
                }
            }
            else{
                TxD_data>>=1;
                TxD_data|=(top->TxD&1)<<7;
                if(++TxD_cnt>=8) printf("uart_send:%02x\n",TxD_data),TxD_start=false;
            }
        }
		tfp->dump(main_time); //dump wave
        main_time++; //推动仿真时间
    }
    top->final();
    tfp->close();
    delete top;
 
    return 0;
}