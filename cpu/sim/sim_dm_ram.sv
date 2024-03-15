module sim_dm_ram (
    input[31:2]addra,
    input ena,
    input [3:0]wea,
    input clka,
    input [31:0] dina,
    output reg[31:0] douta
);  
    parameter isExt = 0;
    reg[31:0] ram[0:1048576]; 
    wire [22:2]index;
    assign index=addra[22:2];
    initial begin
         $readmemh("../sample_codes/lab2/out.txt",ram);
    end
    always @(posedge clka) begin
        if(ena) begin
            if(isExt)$display("[%d]%d, %x, %x",index,dina,ram[index],wea);
            douta<=ram[index];
            case(wea)
            4'hf:begin
                ram[index]<=dina;
            end
            4'b0011: ram[index][15:0]<=dina[15:0];
            4'b1100: ram[index][31:16]<=dina[31:16];
            4'b0001: ram[index][7:0]<=dina[7:0];
            4'b0010: ram[index][15:8]<=dina[15:8];
            4'b0100: ram[index][23:16]<=dina[23:16];
            4'b1000: ram[index][31:24]<=dina[31:24];
            default:;
            endcase

        end
        
    end
    
endmodule //DM
