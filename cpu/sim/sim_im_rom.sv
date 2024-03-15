`define LATENCY 0
module sim_im_rom (
    input      clka,
    input [12:2]addra,
    // verilator lint_off UNUSED
    input wea,
    input [31:0]dina,
    // verilator lint_on UNUSED
    input ena,
    output reg[31:0]douta);
    int lat=0;
    reg[31:0] rom[0:2047];
    initial begin

        $readmemh("../sample_codes/kernel.txt",rom);
    end
    always @(posedge clka)begin
        if(ena) begin
            if(lat==0) begin
                //$display("%d",addra);
                douta<=rom[addra];
                lat<=`LATENCY;
            end
        end
    end
endmodule //sim_brom
