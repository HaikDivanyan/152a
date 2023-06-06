`timescale 1ns / 1ps

 module main(
    input wire clk,
    input wire [1:0] miao,
    input wire BtnU,
    input wire BtnD,
    input wire BtnL,
    input wire BtnR,
    input wire BtnM,
    output wire hsync, vsync,
    output wire [7:0] rgb
);

    wire [10:0] x, y;
    vga_sync vga0(.clk(clk),
        .hsync(hsync), .vsync(vsync),
        .x(x), .y(y));

    wire reset_out;
    wire [1:0] btn1_out, btn2_out;
    debounce b0(clk, BtnU, btn1_out[0]);
    debounce b1(clk, BtnD, btn1_out[1]);
    debounce b2(clk, BtnL, btn2_out[0]);
    debounce b3(clk, BtnR, btn2_out[1]);
    debounce b4(clk, BtnM, reset_out);

    graphic g0(.clk(clk), .miao(miao), .reset(reset_out),
        .x(x), .y(y), .rgb(rgb),
        .btn1(btn1_out), .btn2(btn2_out));

endmodule