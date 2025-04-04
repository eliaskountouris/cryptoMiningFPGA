module sha_chain
(
    input logic         clk,
    input logic         rst,

    input logic         i_ready,
    input logic  [31:0] i_w       [15:0],
    
    output logic        o_valid,
    output logic [31:0] o_message [15:0],
);

defparam INIT_LETTERS = {32'h5be0cd19, 32'h1f83d9ab,
                         32'h9b05688c, 32'h510e527f,
                         32'ha54ff53a, 32'h3c6ef372,
                         32'hbb67ae85, 32'h6a09e667};

logic [31:0] letters [7:0] [64:0];
logic        valid         [64:0];
logic [31:0] win     [3:0] [64:0];
logic [31:0] wout          [64:0];

always_comb begin
    letters[0] = INIT_LETTERS;
    o_message  = {letters[64][0], letters[64][1],
                  letters[64][2], letters[64][3],
                  letters[64][4], letters[64][5],
                  letters[64][6], letters[64][7]};
    valid[0]   = i_ready;
    valid[64]  = o_valid;
end
generate
    for (genvar i = 0; i < 64; i = i+1) begin
        sha256 sha_inst (.clk(clk), .rst(rst), 
                         .i_letters(letters[i]), .i_counter(i), 
                         .i_w(), .i_ready(valid[i]),
                         .o_letters(letters[i+1]), .o_letters_valid(valid[i+1]),
                         .o_w(wout), .o_w_valid(wvalid));
    end
endgenerate

endmodule
