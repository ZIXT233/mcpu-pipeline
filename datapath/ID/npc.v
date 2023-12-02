`define ExceptionHandlerAddr 30'h00001060
`define npcmatch(sig,val) ({30{sig}}&(val))
module jpc(
    input wire[31:2] PC,
    input branchAvail,
    input jmp,
    input NPCFromGPR,
    input NPCFromEPC,
    input goExceptionHandler,
    input wire[31:2] EPC,
    input wire[17:2] offset,
    input wire[27:2] instr_index,
    input wire[31:0] reg_index,
    output wire[31:2] JPC);
    //assign PCP1=PC+1; 多周期，IF后周期的PC即为原PCP1
    assign JPC=`npcmatch(goExceptionHandler,`ExceptionHandlerAddr)|
               `npcmatch(NPCFromEPC,EPC)|
               `npcmatch(NPCFromGPR,reg_index>>2)|
               `npcmatch(jmp,instr_index)|
               `npcmatch(branchAvail,PC+{{14{offset[17]}},offset});
endmodule
