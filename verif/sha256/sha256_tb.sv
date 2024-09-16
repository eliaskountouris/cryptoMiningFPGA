module sha256_tb
(
    input logic clk,
    input logic rst,
    input logic ready,
    output logic [31:0] out [7:0],
    input logic [31:0] i_w [15:0],
    output logic o_valid 
);

logic [31:0] w [63:0];
logic [31:0] win [3:0];
logic [31:0] wout;
logic wvalid;
logic valid;
logic valid_r;
logic rdy;
logic [5:0] counter;

logic [31:0] letter [7:0];
logic [31:0] o_let [7:0];
sha256 sha_inst (.clk(clk), .rst(rst), .i_letters(letter),
                .i_counter(counter), .i_w(win), .i_ready(rdy),
                .o_letters(o_let), .o_letters_valid(valid),
                .o_w(wout), .o_w_valid(wvalid));


always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        counter <= 0;
        for (integer i = 0; i < 16; i = i +1) begin
            w[i] <= i_w[i];
        end
        for (integer i = 16; i < 63; i = i +1) begin
            w[i] <= 32'b0;
        end
        letter[0] <= 32'h6a09e667;
        letter[1] <= 32'hbb67ae85;
        letter[2] <= 32'h3c6ef372;
        letter[3] <= 32'ha54ff53a;
        letter[4] <= 32'h510e527f;
        letter[5] <= 32'h9b05688c;
        letter[6] <= 32'h1f83d9ab;
        letter[7] <= 32'h5be0cd19;
    end else begin
        if (wvalid) begin
            w[counter] <= wout;
        end

        if (valid) begin
            counter <= counter + 1;
            valid_r <= valid;
            letter <= o_let;
        end else begin
            valid_r <= 0;
        end
    end
end

always_comb begin
    o_valid = (counter == 6'd63) & valid;
    rdy = ready | valid_r;
    
    if (counter < 6'd16) begin
        win[0] = w[counter];
        win[1] = 32'd0;
        win[2] = 32'd0;
        win[3] = 32'd0;
    end else begin
        win[0] = w[counter-16];
        win[1] = w[counter-15];
        win[2] = w[counter-7];
        win[3] = w[counter-2];
    end
    out[0] = 32'h6a09e667 + o_let[0];
    out[1] = 32'hbb67ae85 + o_let[1];
    out[2] = 32'h3c6ef372 + o_let[2];
    out[3] = 32'ha54ff53a + o_let[3];
    out[4] = 32'h510e527f + o_let[4];
    out[5] = 32'h9b05688c + o_let[5];
    out[6] = 32'h1f83d9ab + o_let[6];
    out[7] = 32'h5be0cd19 + o_let[7];
end

endmodule
