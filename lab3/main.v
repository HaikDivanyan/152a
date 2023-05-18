`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:51:42 05/09/2023 
// Design Name: 
// Module Name:    main 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module main(clk, sw, btnS, btnR, seg, an);
  input clk;
  input [7:0] sw;
  input btnS;
  input btnR;
  output [6:0] seg;
  output [3:0] an;
  
  wire clk1hz;
  wire clk2hz;
  wire clk200hz; 
  wire clk15hz;
  
  wire [3:0] seconds1;
  wire [3:0] seconds2;
  wire [3:0] minutes1;
  wire [3:0] minutes2;
  
  wire pause;
  
  wire btnS_d;
  wire btnR_d;
  
  debouncer d1(.clk(clk), .sig(btnS), .rst(sw[6]), .sig_d(btnS_d));
  debouncer d2(.clk(clk), .sig(btnR), .rst(sw[6]), .sig_d(btnR_d));
  toggle toggler(.rst(sw[6]), .clk(clk), .sig(btnS_d), .tog(pause));
  clock clock_gen(.clk(clk), .rst(sw[6]), .clk1hz(clk1hz), .clk2hz(clk2hz), .clk200hz(clk200hz), .clk15hz(clk15hz));
  watch watch_gen(.clk(clk1hz), .clk2(clk2hz), .set(sw[0]), .sel(sw[1]), .clkfast(clk), .pause(pause), .rst(btnR_d), .seconds1(seconds1), .seconds2(seconds2), .minutes1(minutes1), .minutes2(minutes2));
  displayDriver display_gen(.clk(clk200hz), .flash(sw[0]), .flashclk(clk15hz), .rst(sw[6]), .seconds1(seconds1), .seconds2(seconds2), .minutes1(minutes1), .minutes2(minutes2), .seg(seg), .an(an));

endmodule
