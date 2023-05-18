`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:49:22 05/18/2023 
// Design Name: 
// Module Name:    debouncer 
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
module debouncer(clk, rst, sig, sig_d);
  input clk;
  input rst;
  input sig;
  output sig_d;
  
  reg [2:0] sigcnt;
  reg d;
  
  assign sig_d = d;
  
  always @ (posedge clk) begin
    if (rst) begin
      sigcnt <= 0;
      d <= 0;
    end
    sigcnt [2:0] <= {sig, sigcnt[2:1]};
    d <= ~sigcnt[0] & sigcnt[1];
  end


endmodule
