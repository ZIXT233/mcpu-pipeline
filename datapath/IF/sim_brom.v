module sim_brom (
    input      clk,
    input [15:2]addr,
    input ce,
    output reg[31:0]instruct);
    reg[31:0] rom[0:2047];
    initial begin
        $readmemh("sample_codes/test1.txt",rom);
    end
    always @(posedge clk)begin
        if(ce)instruct<=rom[addr];
    end
endmodule //sim_brom

