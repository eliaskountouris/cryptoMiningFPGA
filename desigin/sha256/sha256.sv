module sha256
(
    input               clk,
    input               rst,

    input  logic [31:0] i_letters [7:0], // a is LSB, h is MSB
    input  logic [5:0]  i_counter,
    input  logic [31:0] i_w       [3:0],
    input  logic        i_w_bypass,
    input  logic        i_ready,

    output logic [31:0] o_letters [7:0], // a is LSB, h is MSB
    output logic        o_letters_valid,

    output logic [31:0] o_w,
    output logic        o_w_valid
);

// ========= Stage 1 ==========
logic [31:0] k;
logic [31:0] S1;
logic [31:0] ch;
logic [31:0] s0;
logic [31:0] s1;
logic [31:0] S0;
logic [31:0] maj;
k_lookup      inst_k   (.i(i_counter), .k(k));
sigma_1       inst_S1  (.x(i_letters[4]), .y(S1));
choose        inst_ch  (.i_x(i_letters[4]), .i_y(i_letters[5]), .i_z(i_letters[6]), .o(ch));
sigma_shift_0 inst_s0  (.x(i_w[1]), .y(s0));
sigma_shift_1 inst_s1  (.x(i_w[3]), .y(s1));
sigma_0       inst_S0  (.x(i_letters[0]), .y(S0));
majority      inst_maj (.i_x(i_letters[0]), .i_y(i_letters[1]), .i_z(i_letters[2]), .o(maj));

logic        pass_1;
logic [31:0] w_1;
logic [31:0] hk_1;
logic [31:0] S1_1;
logic [31:0] ch_1;
logic [31:0] s0_1;
logic [31:0] s1_1;
logic [31:0] wsum_1;
logic [31:0] S0_1;
logic [31:0] maj_1;
logic [31:0] letters_1 [6:0];
always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        hk_1   <= 32'd0;
        S1_1   <= 32'd0;
        ch_1   <= 32'd0;
        s0_1   <= 32'd0;
        s1_1   <= 32'd0;
        wsum_1 <= 32'd0;
        S0_1   <= 32'd0;
        maj_1  <= 32'd0;
        w_1    <= 32'd0;
        pass_1 <= 1'b0;

        for (integer i = 0; i < 7; i = i+1) begin
            letters_1[i] <= 32'd0;
        end

    end else begin
        hk_1   <= i_letters[7] + k;
        S1_1   <= S1;
        ch_1   <= ch;
        s0_1   <= s0;
        s1_1   <= s1;
        S0_1   <= S0;
        maj_1  <= maj;
        wsum_1 <= i_w[2] + i_w[0];
        w_1    <= i_w[0];
        pass_1 <= i_w_bypass;

        letters_1 <= i_letters [6:0];
    end
end

// ========= Stage 2 ==========
logic        pass_2;
logic [31:0] w_2;
logic [31:0] hkS_2;
logic [31:0] ch_2;
logic [31:0] ss_2;
logic [31:0] wsum_2;
logic [31:0] T2_2;
logic [31:0] letters_2 [6:0];
always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        hkS_2  <= 32'd0;
        ch_2   <= 32'd0;
        ss_2   <= 32'd0;
        wsum_2 <= 32'd0;
        T2_2   <= 32'd0;
        w_2    <= 32'd0;
        pass_2 <= 1'b0;

        for (integer i = 0; i < 7; i = i+1) begin
            letters_2[i] <= 32'd0;
        end

    end else begin
        hkS_2  <= hk_1 + S1_1;
        ch_2   <= ch_1;
        ss_2   <= s0_1 + s1_1;
        wsum_2 <= wsum_1;
        T2_2   <= S0_1 + maj_1;
        w_2    <= w_1;
        pass_2 <= pass_1;

        letters_2 <= letters_1; 
    end
end

// ========= Stage 3 ==========
logic [31:0] sch_3;
logic [31:0] w_3;
logic [31:0] T2_3;
logic [31:0] letters_3 [6:0];
always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        sch_3 <= 32'd0;
        w_3   <= 32'd0;
        T2_3  <= 32'd0;

        for (integer i = 0; i < 7; i = i+1) begin
            letters_3[i] <= 32'd0;
        end

    end else begin
        sch_3 <= hkS_2 + ch_2;
        w_3   <= (pass_2) ? w_1 : ss_2 + wsum_2;
        T2_3  <= T2_2;

        letters_3 <= letters_2; 
    end
end

// ========= Stage 4 ==========
logic [31:0] T1_4;
logic [31:0] T2_4;
logic [31:0] letters_4 [6:0];
always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        T1_4  <= 32'd0;
        T2_4  <= 32'd0;

        for (integer i = 0; i < 7; i = i+1) begin
            letters_4[i] <= 32'd0;
        end

    end else begin
        T1_4  <= w_3 + sch_3;
        T2_4  <= T2_3;

        letters_4 <= letters_3; 
    end
end

// ========= Stage 5 ==========
logic [31:0] letters_5 [7:0];
always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        for (integer i = 0; i < 8; i = i+1) begin
            letters_5[i] <= 32'd0;
        end
    end else begin
        letters_5[0] <= T1_4 + T2_4;
        letters_5[1] <= letters_4[0];
        letters_5[2] <= letters_4[1];
        letters_5[3] <= letters_4[2];
        letters_5[4] <= letters_4[3] + T1_4;
        letters_5[5] <= letters_4[4];
        letters_5[6] <= letters_4[5];
        letters_5[7] <= letters_4[6];
    end
end

// ========= Outputs ==========
logic [4:0] ready;
always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        ready <= 5'b0;
    end else begin
        ready[0] <= i_ready;
        for (integer i = 1; i < 5; i = i+1) begin
            ready[i] <= ready[i-1];
        end
    end
end

always_comb begin
    o_letters       = letters_5;
    o_letters_valid = ready[4];
    o_w             = w_3;
    o_w_valid       = ready[2];
end


endmodule
