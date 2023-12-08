module EXT (
    input[15:0] A,
    input extop,
    input exsign,
    output [31:0]B
);
    assign B=(exsign)?{{16{A[15]}},A}:
             (extop)?A<<16:A;  
endmodule //EXT
