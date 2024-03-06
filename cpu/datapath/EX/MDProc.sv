module MDProc (
    input      clk,
    input isSign,
    input [31:0]A,
    input [31:0]B,
    input [2:0] F,
    output [31:0]O_HI,
    output [31:0]O_LO
);
    reg [63:0]hifo,mid;
    assign O_HI=hifo[63:32];
    assign O_LO=hifo[31:0];
    always @(posedge clk) begin
        //$display("A:%d B:%d hifo:%d mid:%d",A,B,hifo,mid);
        case(F)
        0:hifo<=mid;
        1:hifo[63:32]<=A;
        2:hifo[31:0]<=A;
        3:begin
            if(isSign)mid<=$signed(A)*$signed(B);
            else mid<=A*B;
        end
        /*4:begin
            if(isSign) begin 
                mid[31:0]<=$signed(A)/$signed(B);
                mid[63:32]<=$signed(A)%$signed(B);
            end 
            else begin 
                mid[31:0]<=A/B;
                mid[63:32]<=A%B;

        end*/
        endcase 
    end
endmodule //MDPROC
