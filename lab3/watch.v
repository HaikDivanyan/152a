`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:01:18 05/11/2023 
// Design Name: 
// Module Name:    watch 
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
module watch(clk, clk2, clkfast, rst, pause, set, sel, seconds1, seconds2, minutes1, minutes2);
  input clk;
  input clk2;
  input clkfast;
  input rst;
  input pause;
  input set;
  input sel;
  output [3:0] seconds1;
  output [3:0] seconds2;
  output [3:0] minutes1;
  output [3:0] minutes2;
  
  reg [3:0] s1;
  reg [3:0] m1;
  reg [3:0] s2;
  reg [3:0] m2;
  
  wire clkedge;
  wire clkedge2;
  
  assign seconds1 = s1;
  assign minutes1 = m1;
  assign seconds2 = s2;
  assign minutes2 = m2;
  
  edgedetect edgedetector(.clk(clkfast), .sig(clk), .possig(clkedge));
  edgedetect edgedetector2(.clk(clkfast), .sig(clk2), .possig(clkedge2));
  
  always @ (posedge clkfast) begin
    if (rst) begin
      s1 = 0;
      s2 = 0;
      m1 = 0;
      m2 = 0;
    end
    else if(pause == 0 && set == 0 && clkedge) begin
      s1 = s1 + 1;
      if (s1 > 9) begin
        s1 = 0;
        s2 = s2 + 1;
        if (s2 > 5) begin
          m1 = m1 + 1;
          s2 = 0;
          if (m1 > 9) begin
            m1 = 0;
            m2 = m2 + 1;
            if(m2 > 9)
              m2 = 0;
          end
        end
      end
    end else if (set == 1 && sel == 1 && clkedge2) begin
      s1 = s1 + 1;
      if (s1 > 9) begin
        s1 = 0;
        s2 = s2 + 1;
        if (s2 > 5)
          s2 = 0;
      end
    end else if (set == 1 && sel == 0 && clkedge2) begin
      m1 = m1 + 1;
      if (m1 > 9) begin
        m1 = 0;
        m2 = m2 + 1;
        if (m2 > 9)
          m2 = 0;
      end
    end
  end
endmodule
