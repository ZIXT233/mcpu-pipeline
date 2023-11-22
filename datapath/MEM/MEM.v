module MEM (
    input      clk,
    input      rst,
    input MEM_FLUSH,
    input MEM_CTRL,
    input [31:0]PrRD,
    output [31:2]PrAddr,
    output [31:0]PrWD,
    output IOWrite,
    input [4:0]WB_CTRL,
    input [68:0]MEM_DATA,
    output reg[4:0]o_WB_CTRL,
    output reg[68:0]o_WB_DATA,
    output [37:0] o_MEM_BACK
);
    assign {memWrite}=MEM_CTRL;
    assign {isDMByte,isDMHalf}=WB_CTRL[2:1];
    wire[31:0]EXout,rd2,MEMout; 
    wire[4:0]rw;
    assign {rw,EXout,rd2}=MEM_DATA;
    assign o_MEM_BACK={WB_CTRL[4],MEM_DATA[63:32],MEM_DATA[68:64]}; //regWrite,Wd,rw

    wire[31:0]Dout;
    wire[3:0] be;
    BEEXT U_BEEXT(
        .isByte(isDMByte),
        .isHalf(isDMHalf),
        .low_addr(EXout[1:0]),
        .be(be)
    );
    assign AddrInDM=(EXout[15:0]<'h3000);
    assign DMWrite=memWrite&&AddrInDM;
    DM DM(
        .A(EXout[13:2]),
        .memWrite(DMWrite),
        .memToReg(memToReg),
        .clk(clk),
        .be(be),
        .D(rd2),
        .Dout(Dout)
    );
    assign IOWrite=memWrite&&!AddrInDM;
    assign PrAddr=EXout[31:2];
    assign PrWD=rd2;
    assign MEMout=AddrInDM?Dout:PrRD;
    
    initial begin
        o_WB_CTRL<=0;
        o_WB_DATA<=0;
    end
    always @(posedge clk)begin
        if(MEM_FLUSH)   begin
            o_WB_CTRL<=0;
            //o_WB_DATA<=0;
        end
        else begin
            o_WB_DATA<={rw,EXout,MEMout};
            o_WB_CTRL<=WB_CTRL;
        end
    end
    
endmodule //MEM
