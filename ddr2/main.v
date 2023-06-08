`timescale 1ns / 1ps

 module main(
    input wire clk,
    input wire BtnU,
    input wire BtnD,
    input wire BtnL,
    input wire BtnR,
    input wire BtnM,
    input wire sw,
    output wire hsync, vsync,
    output wire [7:0] rgb,
    output wire [6:0] seg,
    output wire [3:0] an
);
    
    wire [10:0] x, y;
    vga_sync vga0(.clk(clk),
        .hsync(hsync), .vsync(vsync),
        .x(x), .y(y));

    wire reset_out;
    wire Uo, Do, Lo, Ro;
    debounce b0(clk, BtnU, Uo);
    debounce b1(clk, BtnD, Do);
    debounce b2(clk, BtnL, Lo);
    debounce b3(clk, BtnR, Ro);
    debounce b4(clk, BtnM, reset_out);
    
    wire [15:0] score;
    wire [15:0] bcd;
    wire dspclk;

    graphic g0(.clk(clk), .reset(sw),
        .x(x), .y(y), .rgb(rgb),
        .BtnU(Uo), .BtnL(Lo), .BtnR(Ro), .BtnD(Do), .score_out(score));

    BtoBCD bgen(.clk(clk), .bin(score), .bcd(bcd));

    timer2 tm2(.clk(clk), .out(dspclk));

    displayDriver dr(.clk(dspclk), .rst(sw), .seconds1(bcd[3:0]), .seconds2(bcd[7:4]), .minutes1(bcd[11:8]), .minutes2(bcd[15:12]), .seg(seg), .an(an));
endmodule