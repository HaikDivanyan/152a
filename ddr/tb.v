`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:31:05 05/30/2023
// Design Name:   main
// Module Name:   C:/Users/Student/Desktop/nf2/152a/ddr/tb.v
// Project Name:  ddr
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
	reg [7:0] sw;
	reg RsRx;
	reg BtnU;
	reg BtnD;
	reg BtnL;
	reg BtnR;
	reg BtnM;

	// Outputs
	wire RsTx;

	// Instantiate the Unit Under Test (UUT)
	main uut (
		.clk(clk), 
		.sw(sw), 
		.RsRx(RsRx), 
		.RsTx(RsTx), 
		.BtnU(BtnU), 
		.BtnD(BtnD), 
		.BtnL(BtnL), 
		.BtnR(BtnR), 
		.BtnM(BtnM)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		sw = 0;
		RsRx = 0;
		BtnU = 0;
		BtnD = 0;
		BtnL = 0;
		BtnR = 0;
		BtnM = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
    
	end
  
  always #5 clk = ~clk;
      
endmodule

