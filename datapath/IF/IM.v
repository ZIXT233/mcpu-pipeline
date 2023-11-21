module IM(
    input [9:0]addr,
    output [31:0]instruct);
    reg[31:0] rom[0:1023];
    assign instruct=rom[addr];
    initial begin
        $readmemh("sample_codes/qsort.txt",rom);
    end
endmodule