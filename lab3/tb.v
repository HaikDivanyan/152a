`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:56:23 05/09/2023
// Design Name:   main
// Module Name:   C:/Users/Student/Desktop/nf2/152a/lab3/tb.v
// Project Name:  lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: main
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb;

	// Inputs
	reg clk;
  reg rst;
  
  wire clk1hz;
  wire clk2hz;
  wire clk200hz;
  wire clk15hz;

	// Instantiate the Unit Under Test (UUT)
	clock uut (
		.clk(clk), .rst(rst), .clk1hz(clk1hz), .clk2hz(clk2hz), .clk200hz(clk200hz), .clk15hz(clk15hz)
	);

	initial begin
		clk = 0;
    rst = 1;

		#100;
    rst = 0;
        

	end
  
  always #5 clk = ~clk;
      
endmodule

