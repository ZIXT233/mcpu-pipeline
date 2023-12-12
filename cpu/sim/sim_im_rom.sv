module sim_im_rom (
    input      clka,
    input [12:2]addra,
    // verilator lint_off UNUSED
    input wea,
    input [31:0]dina,
    // verilator lint_on UNUSED
    input ena,
    output reg[31:0]douta);
    reg[31:0] rom[0:2047];
    initial begin
        $readmemh("../sample_codes/qsortClang.txt",rom);
    end
    always @(posedge clka)begin
        if(ena)douta<=rom[addra];
    end
endmodule //sim_brom
