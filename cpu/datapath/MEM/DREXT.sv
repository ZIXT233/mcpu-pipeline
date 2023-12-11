module DREXT(
    input isByte,
    input isHalf,
    input exsign,
    input [1:0]low_addr,
    input [31:0] in_data,
    output [31:0] out_data); 

    wire [4:0] shift_bit={low_addr,3'b0};
    // verilator lint_off UNUSED
    wire [31:0] shifted_data=in_data>>shift_bit;
    // verilator lint_on UNUSED
    wire [7:0] _byte = shifted_data[7:0];
    wire [15:0] half = shifted_data[15:0];
    assign out_data=isByte?{{24{exsign?_byte[7]:1'b0}},_byte} 
                    :isHalf?{{16{exsign?half[15]:1'b0}},half} 
                    :in_data;
endmodule
