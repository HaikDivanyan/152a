`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:15:04 05/18/2023 
// Design Name: 
// Module Name:    edgedetect 
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
module edgedetect(clk, sig, possig);
  input clk;
  input sig;
  output possig;
    
  reg delay;
  
  assign possig = sig & ~delay;
  
  always @ (posedge clk) begin
    delay <= sig;
  end

endmodule
