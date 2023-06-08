`timescale 1ns / 1ps

// generate a 1 ms (1 KHz) clock
module timer2(
    input wire clk,
    output reg out
);

    reg [15:0] cnt;

    initial begin
        cnt [15:0] <= 0;
        out <= 0;
    end

    always @(posedge clk) begin
        if (cnt >= 500) begin
            cnt <= 0;
            out <= ~out;
        end else begin
            cnt <= cnt + 1'b1;
        end
    end

endmodule