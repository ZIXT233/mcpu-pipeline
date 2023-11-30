module IM(
    input clk,
    input ce,
    input [15:2]addr,
    output [31:0]instruct);
    reg[31:0] rom[0:2047];
    wire [15:2]index;
    assign index=addr-'hC00;
    
    sim_brom u_sim_brom(
        .clk      	( clk       ),
        .ce(ce),
        .addr     	( index      ),
        .instruct 	( instruct  )
    );
    
    
endmodule