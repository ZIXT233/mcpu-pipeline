`define ExceptionHandlerAddr 30'h00001060
`define match(sig,val) ({30{sig}}&(val))
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
    input wire[31:0] reg_index,
    output wire[31:2] NPC);
    //assign PCP1=PC+1; 多周期，IF后周期的PC即为原PCP1
    wire[31:2]JPC;
    assign j=goExceptionHandler||NPCFromEPC||NPCFromGPR||jmp||branchAvail;
    assign JPC=`match(goExceptionHandler,`ExceptionHandlerAddr)|
               `match(NPCFromEPC,EPC)|
               `match(NPCFromGPR,reg_index>>2)|
               `match(jmp,instr_index)|
               `match(branchAvail,PC+{{14{offset[17]}},offset});
    assign NPC=j?JPC:PC+1;

endmodule
