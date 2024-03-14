`include "IIO.sv"
`define EXTRAM_START_ADDR (30'h20100000)
`define RAM_LATENCY 0
`ifdef VERILATOR
    `define RAM_MOD sim_dm_ram
`else 
    `define RAM_MOD dm_ram
`endif
module Memory(
    IMemory.Memory i_memory
);
    wire clk,rst;
    wire dataReqBaseRAM;
    reg prevDataReqBaseRAM;
    wire BaseRAM_WE,BaseRAM_EN,ExtRAM_WE,ExtRAM_EN;
    wire [3:0] BaseRAM_WEA,ExtRAM_WEA;
    wire [31:2] BaseRAM_ADDR,ExtRAM_ADDR,dataAddr;
    wire [31:0] BaseRAM_Din,BaseRAM_Dout;
    wire [31:0] ExtRAM_Din,ExtRAM_Dout;
    assign clk = i_memory.clk;
    assign rst = i_memory.rst;
    assign dataAddr = i_memory.dataAddr[31:2];
    assign dataReqBaseRAM = i_memory.dataEN && (dataAddr < `EXTRAM_START_ADDR);
    assign BaseRAM_ADDR=dataReqBaseRAM ? dataAddr : i_memory.instrAddr;
    assign BaseRAM_WE=dataReqBaseRAM && i_memory.dataWE;
    assign BaseRAM_WEA={4{BaseRAM_WE}}&i_memory.dataBE;
    assign BaseRAM_Din=i_memory.dataWrite << {i_memory.dataAddr[1:0],3'b0};
    assign BaseRAM_EN=1'b1;

    assign ExtRAM_ADDR=dataAddr-`EXTRAM_START_ADDR;
    assign ExtRAM_WE=!dataReqBaseRAM && i_memory.dataWE;
    assign ExtRAM_WEA={4{ExtRAM_WE}}&i_memory.dataBE;
    assign ExtRAM_Din=i_memory.dataWrite << {i_memory.dataAddr[1:0],3'b0};
    assign ExtRAM_EN=i_memory.dataEN;

    assign i_memory.instrRead= BaseRAM_Dout;
    assign i_memory.dataRead = prevDataReqBaseRAM?BaseRAM_Dout:ExtRAM_Dout;

    `RAM_MOD u_BaseRAM (
        .clka(clk),    // input wire clka
        .ena(BaseRAM_EN),      // input wire ena
        .wea(BaseRAM_WEA),      // input wire [3 : 0] wea
        .addra(BaseRAM_ADDR),  // input wire [11 : 0] addra
        .dina(BaseRAM_Din),    // input wire [31 : 0] dina
        .douta(BaseRAM_Dout)  // output wire [31 : 0] douta
    );

    `RAM_MOD 
    `ifdef VERILATOR
        #(.isExt(1))
    `endif
    u_ExtRAM (
        .clka(clk),    // input wire clka
        .ena(ExtRAM_EN),      // input wire ena
        .wea(ExtRAM_WEA),      // input wire [3 : 0] wea
        .addra(ExtRAM_ADDR),  // input wire [11 : 0] addra
        .dina(ExtRAM_Din),    // input wire [31 : 0] dina
        .douta(ExtRAM_Dout)  // output wire [31 : 0] douta
    );
    logic[31:2] preInstrAddr=-1;
    int lat;
    initial begin
        i_memory.instrReady=0;
    end
    always @(posedge clk or negedge rst) begin
        if(!rst)begin
        end
        else begin
            //$display("%x %x %x %x,%d",i_memory.instrReady,dataReqBaseRAM,i_memory.instrAddr,i_memory.dataAddr,i_memory.dataRead);
            prevDataReqBaseRAM<=dataReqBaseRAM;
            if(dataReqBaseRAM)begin
                $display("dataReqBase");
                i_memory.instrReady<=0;
                preInstrAddr<=-1;
            end
            else begin
                if(preInstrAddr==i_memory.instrAddr)begin
                    if(lat==0) i_memory.instrReady<=1;
                    else lat<=lat-1;
                end
                else begin
                    if(1+`RAM_LATENCY==1) i_memory.instrReady<=1;
                    else i_memory.instrReady<=0;
                    lat<=`RAM_LATENCY-1;
                    preInstrAddr<=i_memory.instrAddr;
                end
            end
        end
    end

endmodule

/*
instrReady=0
preInstrAddr=none;


instr地址进，
若与已发送地址相等
    若dataAddr访问baseRAM:
        instrReady<=0;
        已发送地址<=none;
    否则
        若lat==0
            instrReady<=1；
        不然，
            lat--
不等：
    若dataAddr未访问baseRAM:
        if(1+MAXLAT==1) instrReady<=1;
        else instrReady<=0;
        lat<=MAXLAT-1;
        已发送地址《=instr地址
    else instrReady<=0;
    
目标：1.instrReady=0, memory 0周期接收instrAddr，如果此时dataAddr未访问baseAddr，在1+lat周期返回instrRead，置instrReady=1
若[0..lat]周期instrAddr变动则重置，则下周期回1
若[1..lat]周期与dataAddr冲突则重置，则下周期回1

*/


