module GPR(
    input clk,
    input reset,
    input regWrite,
    input [25:21]rs,
    input [20:16]rt,
    input [15:11]rw,
    input [31:0] Wd,
    output [31:0] rd1,
    output [31:0] rd2);

    reg[31:0] register[0:31];
    assign rd1=register[rs];
    assign rd2=register[rt];

    integer i;
    initial begin
        for(i=0;i<32;i=i+1) begin
            register[i]<=0;
        end
    end
    //reg d=0;
    always @(posedge clk or negedge reset) begin
        if(!reset) begin
            for(i=0;i<32;i=i+1) begin
                register[i]<=0;
            end
        end
        else if(regWrite) begin
            //$display("reg %d=%x",rw,$signed(Wd));
            register[rw]<=Wd;
        end
    end
endmodule