
`timescale 1ns/1ps
module tb();
	reg clk;
    reg reset;
    mips mips(
        .clk(clk),
        .rst(reset)
    );

	always begin
		#2 clk = 0;
		#2 clk = 1;
	end

    initial begin
        $dumpfile("mips.vcd"); // 指定用作dumpfile的文件
		$dumpvars; // dump all vars
	end

    initial begin
        clk=0;
        reset=1;
        // $monitor(pc);
		#1860 $finish;
	end

endmodule