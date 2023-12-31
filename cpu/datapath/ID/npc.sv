`define ExceptionHandlerAddr 30'h00001060
`define npcmatch(sig,val) ({30{sig}}&(val))
module npc(
    input wire[31:2] PC,
    input branchAvail,
    input jmp,
    input NPCFromGPR,
    input NPCFromEPC,
    input goExceptionHandler,
    input wire[31:2] EPC,
    input wire[17:2] offset,
    input wire[27:2] instr_index,
    input jpcAvail,
    // verilator lint_off UNUSED
    input wire[31:0] reg_index,
    // verilator lint_on UNUSED
    output wire[31:2] BPC,
    output wire[31:2] NOJPC,
    output wire[31:2] NPC);
    assign NOJPC=PC+1;
    assign BPC=PC+{{14{offset[17]}},offset};
    //assign PCP1=PC+1; 多周期，IF后周期的PC即为原PCP1
    wire[31:2] JPC=`npcmatch(goExceptionHandler,`ExceptionHandlerAddr)|
               `npcmatch(NPCFromEPC,EPC)|
               `npcmatch(NPCFromGPR,reg_index[31:2])|
               `npcmatch(jmp,{4'b0,instr_index})|
               `npcmatch(branchAvail,BPC);

    assign NPC=jpcAvail?JPC:NOJPC;
endmodule

