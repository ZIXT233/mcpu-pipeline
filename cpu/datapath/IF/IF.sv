`include "cpu/pipelineInterfaces.sv"
module IF (
    input clk,
    input rst,
    IController.IF i_controller,
    IStallDetect.IF i_stallDetect,
    IIF_ID.IF i_if_id,
    IBranchCorrect.IF i_branchCorrect
);
    wire[31:2] IF_PC,NPC;
    wire[31:0] IF_instr;
    assign NPC=i_branchCorrect.correctAtMEM?i_branchCorrect.correctPCAtMEM:
               i_branchCorrect.correctAtEX?i_branchCorrect.correctPCAtEX:
               i_if_id.NPC;
    pc pc (
        .NPC(NPC),
        .clk(clk),
        .reset(rst),
        .PCWrite(i_controller.IF_CTRL.PCWrite&&cpu_req_ready),
        .PC(IF_PC)
    );
    wire [15:2]mem_req_addr;
    wire [31:0]mem_req_data;
    assign i_stallDetect.instrReady=1'b1;
    wire cpu_req_ready;
    ICache u_iCache(
        .clk,
        .rst,
        //CPU
        .cpu_req_addr(IF_PC[15:2]),
        .cpu_req_data(IF_instr),
        .cpu_req_ready,
        //MEM
        .mem_req_addr,
        .mem_req_data
    );
    IM IM (
        .clk(clk),
        .ce(1'b1),
        .addr(mem_req_addr),
        .instruct(mem_req_data)
    );
     
    reg [31:0] ID_instr; 
    reg firstFetch;
    initial begin 
        ID_instr=0;
        firstFetch=1'b1;
    end
    always @(posedge clk or negedge rst) begin
        if(!rst) begin
            ID_instr<=0;
            firstFetch<=1'b1;
        end
        else begin
            if(i_controller.IF_FLUSH||firstFetch||!cpu_req_ready) begin 
                ID_instr<=0;
            end
            else if(i_controller.IF_CTRL.PCWrite)begin 
                //$display("[%x]",new_instr);
                ID_instr<=IF_instr;
            end
            firstFetch<=1'b0;
        end
    end
    wire [31:2] ID_PCP1;
    assign ID_PCP1=IF_PC;
    assign i_if_id.ID_DATA={ID_PCP1,ID_instr};

    
endmodule //IF

