module majority
(
    input  logic [31:0] x,
    input  logic [31:0] y,
    input  logic [31:0] z,
    output logic [31:0] o
);

always_comb begin
    o = (x & y) ^ (x & z) ^ (y & z);
end

endmodule
