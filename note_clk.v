`timescale 1ns / 1ps

// generate a 1 ms (1 KHz) clock
module timer_1ms(
    input wire clk,
    output reg out_clk
);
    localparam HZ = 1;

    reg [15:0] cnt;

    initial begin
        cnt [35:0] <= 0;
        out_clk <= 0;
    end

    always @(posedge clk) begin
        if (cnt >= (100000000/2)/HZ) begin
            cnt <= 0;
            out_clk <= ~out_clk;
        end else begin
            cnt <= cnt + 1'b1;
        end
    end

endmodule