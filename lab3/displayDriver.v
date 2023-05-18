`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:31:30 05/11/2023 
// Design Name: 
// Module Name:    displayDriver 
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
module displayDriver(clk, flash, flashclk, rst, seconds1, seconds2, minutes1, minutes2, seg, an);
  input clk;
  input rst;
  input flash;
  input flashclk;
  input [3:0] seconds1;
  input [3:0] seconds2;
  input [3:0] minutes1;
  input [3:0] minutes2;
  output [6:0] seg;
  output [3:0] an;
  
  reg [4:0] num;
  reg [1:0] cnt;
  reg [6:0] segin;
  reg [3:0] anin;
  
  assign seg = segin;
  assign an = anin;
  
  always @ (posedge clk) begin
    if (rst == 1) begin
      num = 0;
      cnt = 0;
    end else if (!flash | flashclk) begin
      cnt = cnt + 1;
      if (cnt == 0) begin
        anin = 4'b1110;
        num = seconds1;
      end else if (cnt == 1) begin
        anin = 4'b1101;
        num = seconds2;
      end else if (cnt == 2) begin
        anin = 4'b1011;
        num = minutes1;
      end else if (cnt == 3) begin
        anin = 4'b0111;
        num = minutes2;
      end
      
      case (num)
        0 : segin = 7'b1000000;
        1 : segin = 7'b1111001;
        2 : segin = 7'b0100100;
        3 : segin = 7'b0110000;
        4 : segin = 7'b0011001;
        5 : segin = 7'b0010010;
        6 : segin = 7'b0000010;
        7 : segin = 7'b1111000;
        8 : segin = 7'b0000000;
        9 : segin = 7'b0010000;
      endcase
    end
    else 
      anin = 4'b1111;
  end

endmodule
