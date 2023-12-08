module DREXT(
    input isByte,
    input isHalf,
    input exsign,
    input [1:0]low_addr,
    input [31:0] in_data,
    output [31:0] out_data); 
    wire [7:0] _byte;
    wire [15:0] half;
    wire [4:0] shift_bit;
    assign shift_bit=low_addr<<3;
    assign _byte=in_data>>shift_bit; 
    assign half=in_data>>shift_bit;
    assign out_data=isByte?{{24{exsign?_byte[7]:1'b0}},_byte} 
                    :isHalf?{{16{exsign?half[15]:1'b0}},half} 
                    :in_data;
endmodule