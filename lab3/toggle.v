`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:24:53 05/18/2023 
// Design Name: 
// Module Name:    toggle 
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
module toggle(clk, rst, sig, tog);
  input clk;
  input rst;
  input sig;
  output tog;
  
  reg sigon;
  
  assign tog = sigon;
  
  always @ (posedge clk) begin
    if (rst)
      sigon = 0;
    if (sig)
      sigon = ~sigon;
  end


endmodule
