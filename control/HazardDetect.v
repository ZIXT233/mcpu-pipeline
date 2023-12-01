module HazardDetect (
    input [4:0]ID_rs,
    input [4:0]ID_rt,
    input [4:0]EX_rw,
    input [4:0]MEM_rw,
    input ID_uncertainJump,
    input EX_memToReg,
    input EX_regWrite,
    input MEM_memToReg,
    output stall
); 
    assign LOAD=(EX_memToReg)&&(EX_rw==ID_rs||EX_rw==ID_rt);
    assign Branch_EX=ID_uncertainJump&&(EX_regWrite||EX_memToReg)&&EX_rw!=0&&(EX_rw==ID_rs||EX_rw==ID_rt);
    assign Branch_LOAD=ID_uncertainJump&&MEM_memToReg&&(MEM_rw==ID_rs||MEM_rw==ID_rt);
    assign stall=LOAD||Branch_EX||Branch_LOAD;
endmodule //HazardDetect
