`define INDEXW(way) {cpu_req_index,way}
`define FETECHW(way) {fetched_mem_req_addr[5:2],way}
module ICache(
    input clk,
    input rst,
    //CPU
    input [15:2]cpu_req_addr,
    output [31:0]cpu_req_data,
    output cpu_req_ready,
    //MEM
    output [31:2]mem_req_addr,
    input [31:0]mem_req_data,
    input mem_req_ready
);
    //localparam            CompareTag=1,Allocate=2;
    localparam            V=42,TagMSB=41,TagLSB=32,DataMSB=31; //index 4 tag 10
    wire hit,way1hit,way2hit;
    wire         [5:2]    cpu_req_index;
    wire         [15:6]    cpu_req_tag;
    reg     [V:0] cache_data [31:0];
    //reg [1:0] state=CompareTag;
    reg way=0;
    assign cpu_req_index = cpu_req_addr[5:2];
    assign cpu_req_tag = cpu_req_addr[15:6];
    assign way1hit = cache_data[`INDEXW(1'b0)][V]==1'b1 && cache_data[`INDEXW(1'b0)][TagMSB:TagLSB]==cpu_req_tag;
    assign way2hit = cache_data[`INDEXW(1'b1)][V]==1'b1 && cache_data[`INDEXW(1'b1)][TagMSB:TagLSB]==cpu_req_tag;
    assign cpu_req_data = hit ? cache_data[`INDEXW(way2hit)][DataMSB:0] : mem_req_data;
    assign hit=way1hit|way2hit;
    assign cpu_req_ready= hit||(fetched_mem_req_addr[15:2]==cpu_req_addr&&mem_req_ready);
    wire [31:2] ext_cpu_req_addr;
    assign ext_cpu_req_addr = {16'b0,cpu_req_addr};
    assign mem_req_addr = cpu_req_ready ? ext_cpu_req_addr+1: ext_cpu_req_addr;
    reg [31:2]fetched_mem_req_addr=-1;
    int i;
    initial begin
        for(i=0;i<32;i++)begin
            cache_data[i][V]=1'b0;
        end
    end
    //替换
    always @(*) begin
        if (!hit) begin
            case({cache_data[`INDEXW(1'b0)][V],cache_data[`INDEXW(1'b1)][V]})
                2'b00:way=1'b0;
                2'b01:way=1'b0;
                2'b10:way=1'b1;
                2'b11:way=~lastWay;
                default:way=1'b0;
            endcase
         end
         else way=1'b0;
    end
    reg lastWay=0;
    //更新
    always @(posedge clk or negedge rst) begin
        if(!rst)begin
            for(i=0;i<32;i++)begin
                cache_data[i][V]<=1'b0;
            end
        end
        else begin
            //$display("%x %x %x",cpu_req_addr,mem_req_ready,cpu_req_ready);
            if(mem_req_ready) begin
            cache_data[`FETECHW(way)][V]<=1'b1;
            cache_data[`FETECHW(way)][TagMSB:TagLSB]<=fetched_mem_req_addr[15:6];
            cache_data[`FETECHW(way)][DataMSB:0]<=mem_req_data;
            lastWay<=way;
            end
            fetched_mem_req_addr<=mem_req_addr;
        end
    end
endmodule

/*interface I_ICache(input clk,input reset);
    logic []cpu_req_addr;
    logic []cpu_req_data;
    logic cpu_req_valid,cpu_req_ready;

    logic []mem_req_addr;
    logic []mem_req_data;
    logic mem_req_valid,mem_req_ready;
    modport CPU(output cpu_req_addr,output cpu_req_valid,output cpu_req_data,output cpu_req_ready);
    modport MEM(input mem_req_addr,output mem_req_valid,input mem_req_data,input mem_req_ready);
    modport ICache(input cpu_req_addr,input cpu_req_valid,output cpu_req_data,output cpu_req_ready,
                output mem_req_addr,output mem_req_valid,input mem_req_data,input mem_req_ready);
endinterface*/
/*
compareTag，接收地址，
    if 命中cache或（命中上次预取地址且memready=true)
        则直通,cpu_ready=true，0周期，将下一地址提交到mem，下周期compareTag；
    else 不命中
        则cpuready=false,提交到mem
    if(memready=true) cache上次预取地址
    预取地址记录
*/
