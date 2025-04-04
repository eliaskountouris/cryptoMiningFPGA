module w_bank
(
    input  logic        clk,
    input  logic        rst,

    input  logic [31:0] i_w       [63:0],
    input  logic        i_w_valid [63:0],
    input  logic        i_shift,

    output logic [31:0] o_w       [3:0] [63:0]
);

logic [31:0] w         [15:0] [63:0]; 
logic [3:0]  w_pointer        [63:0];

always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        for (integer i = 0; i < 64; i = i+1) begin
            w_pointer[i] <= 4'd0;
            for (integer j = 0; j < 16; j = j+1) begin
                w[i][j] <= 32'd0;
            end
        end
    end else begin
        for (integer i = 0; i < 63; i = i+1) begin
            if (i_w_valid[i]) begin
                w[i+1] <= w[i];
                w_pointer[i+1] <= w_pointer[i];
            end
        end

        if (i_shift) begin
            for (integer i = 0; i < 63; i = i+1) begin
                w[i+1] <= w[i];
                w_pointer[i+1] <= w_pointer[i] + 1;
            end
        end else begin
            for (integer i = 0; i < 63; i = i+1) begin
                if (i_w_valid[i]) begin
                    w[w_pointer[i]] <= i_w_valid[i];
                end
            end
        end

    end
end

endmodule
