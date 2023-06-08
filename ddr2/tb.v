`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:31:29 06/06/2023
// Design Name:   main
// Module Name:   C:/Users/Student/Desktop/nf2/152a/ddr2/tb.v
// Project Name:  ddr2
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
	reg BtnU;
	reg BtnD;
	reg BtnL;
	reg BtnR;
	reg BtnM;
  reg sw;

	// Outputs
	wire hsync;
	wire vsync;
	wire [7:0] rgb;

	// Instantiate the Unit Under Test (UUT)
	main uut (
		.clk(clk), 
		.BtnU(BtnU), 
		.BtnD(BtnD), 
		.BtnL(BtnL), 
		.BtnR(BtnR), 
		.BtnM(BtnM), 
		.hsync(hsync), 
		.vsync(vsync), 
		.rgb(rgb),
    .sw(sw)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		BtnU = 0;
		BtnD = 0;
		BtnL = 0;
		BtnR = 0;
		BtnM = 0;
    sw = 1;

		// Wait 100 ns for global reset to finish
		#1000;
    sw = 0;
    #1000;
    sw = 1;
    #1000000;
    BtnU = 1;
    #100000
    BtnU = 0;
    #100000000
    BtnU = 1;
    BtnD = 1;
    BtnL = 1;
    BtnR = 1;

		// Add stimulus here

	end
  
  always #5 clk = ~clk;
      
endmodule

