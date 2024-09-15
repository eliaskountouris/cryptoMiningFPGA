module sigma_0
(
    input  logic [31:0] x,
    output logic [31:0] y
);

logic [31:0] rot_2;
logic [31:0] rot_13;
logic [31:0] rot_22;
always_comb begin
    rot_2 = {x[1:0], x[31:2]};
    rot_13 = {x[12:0], x[31:13]};
    rot_22 = {x[21:0], x[31:22]};
    y = rot_2 ^ rot_13 ^ rot_22;
end

endmodule

module sigma_1
(
    input  logic [31:0] x,
    output logic [31:0] y
);

logic [31:0] rot_6;
logic [31:0] rot_11;
logic [31:0] rot_25;
always_comb begin
    rot_6 = {x[5:0], x[31:6]};
    rot_11 = {x[10:0], x[31:11]};
    rot_25 = {x[24:0], x[31:25]};
    y = rot_6 ^ rot_11 ^ rot_25;
end

endmodule

module sigma_shift_0
(
    input  logic [31:0] x,
    output logic [31:0] y
);

logic [31:0] rot_7;
logic [31:0] rot_18;
logic [31:0] shift_3;
always_comb begin
    rot_7 = {x[6:0], x[31:7]};
    rot_18 = {x[17:0], x[31:18]};
    shift_3 = x >> 3;
    y = rot_7 ^ rot_18 ^ shift_3;
end

endmodule

module sigma_shift_1
(
    input  logic [31:0] x,
    output logic [31:0] y
);

logic [31:0] rot_17;
logic [31:0] rot_19;
logic [31:0] shift_10;
always_comb begin
    rot_17 = {x[16:0], x[31:17]};
    rot_19 = {x[18:0], x[31:19]};
    shift_10 = x >> 10;
    y = rot_17 ^ rot_19 ^ shift_10;
end

endmodule
