`define ExceptionHandlerAddr 32'h00001060
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
    assign NPC=goExceptionHandler?`ExceptionHandlerAddr:
               NPCFromEPC?EPC:
               NPCFromGPR? reg_index>>2:
               jmp? instr_index:
               (branchAvail)? PC+{{14{offset[17]}},offset}: //多周期，IF后周期的PC即为原PCP1
               PC+1;
endmodule