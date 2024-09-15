module majority
(
    input  logic [31:0] i_x,
    input  logic [31:0] i_y,
    input  logic [31:0] i_z,
    output logic [31:0] o
);

always_comb begin
    o = (i_x & i_y) ^ (i_x & i_z) ^ (i_y & i_z);
end

endmodule
