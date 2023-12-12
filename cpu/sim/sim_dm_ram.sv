module sim_dm_ram (
    input[13:2]addra,
    input ena,
    input [3:0]wea,
    input clka,
    input [31:0] dina,
    output reg[31:0] douta
);
    reg[31:0] ram[0:3071]; 
    always @(posedge clka) begin
        if(ena) begin
            case(wea)
            4'hf:begin
                ram[addra]<=dina;$display("[%d]%d",addra,dina);
            end
            4'b0011: ram[addra][15:0]<=dina[15:0];
            4'b1100: ram[addra][31:16]<=dina[31:16];
            4'b0001: ram[addra][7:0]<=dina[7:0];
            4'b0010: ram[addra][15:8]<=dina[15:8];
            4'b0100: ram[addra][23:16]<=dina[23:16];
            4'b1000: ram[addra][31:24]<=dina[31:24];
            default:;
            endcase
        end
        douta<=ram[addra];
    end
    
endmodule //DM
