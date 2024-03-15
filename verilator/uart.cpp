
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
    int send=-1;
    char TC='T';
    while (main_time < 10800 && !Verilated::gotFinish()) { //控制仿真时间
        top->clk^=1;

		top->eval();
        if(top->clk){
            if(send>=0){
                if(send==0) top->RxD=0;
                else if(send<=8){
                    top->RxD=TC&1;
                    TC>>=1;
                }
                else top->RxD=1;
                send++;
            }
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
                if(++TxD_cnt>=8) {
                    printf("uart_send:%c\n",TxD_data),TxD_start=false;
                    if(TxD_data=='.')  send=0;
                }
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