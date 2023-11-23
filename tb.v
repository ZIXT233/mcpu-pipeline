`timescale 1ns/1ps
module tb();
	reg clk;
    reg reset;
    wire [31:2]PrAddr;
    wire [31:0]PrRD,PrWD;
    wire [7:2]HWInt;
    wire IOWrite;
    mips mips(
        .clk(clk),
        .rst(reset),
        .PrAddr(PrAddr),
        .PrRD(PrRD),
        .PrWD(PrWD),
        .IOWrite(IOWrite),
        .HWInt(HWInt)
    );

    BRIDGE u_BRIDGE(
        .clk    	( clk     ),
        .PrAddr 	( PrAddr  ),
        .PrRD   	( PrRD    ),
        .PrWD   	( PrWD    ),
        .WeCPU  	( IOWrite   ),
        .HWInt      ( HWInt )
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
		#10000 $finish;
	end

endmodule