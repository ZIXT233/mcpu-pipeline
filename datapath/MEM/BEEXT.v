module BEEXT(
    input isByte,
    input isHalf,
    input[1:0] low_addr,
    output[3:0] be
);
    assign be=isByte?(4'b0001<<low_addr)
             :isHalf?(4'b0011<<low_addr)
             :4'b1111;
endmodule //BEEXT
