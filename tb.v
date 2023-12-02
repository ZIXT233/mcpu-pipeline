`timescale 1ns/1ps
module tb();
	reg clk;
    reg reset;
    wire [7:0]led;
    
    top top(
        .clk(clk),
        .rst(reset),
        .led(led)
    );
	always begin
		#5 clk = 0;
		#5 clk = 1;
	end

    initial begin
        $dumpfile("mips.vcd"); // 指定用作dumpfile的文�?
		$dumpvars; // dump all vars
	end

    initial begin
        clk=0;
        reset=1;
        #120 reset=0;
        #125 reset=1;
        // $monitor(pc);
		#10000 $finish;
	end

endmodule