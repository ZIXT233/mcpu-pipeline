module IM(
    input [15:2]addr,
    output [31:0]instruct);
    reg[31:0] rom[0:2047];
    wire [15:2]index;
    assign index=addr-'hC00;
    assign instruct=rom[index];
    initial begin
        $readmemh("sample_codes/qsort.txt",rom);
    end
endmodule