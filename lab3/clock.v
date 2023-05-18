`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:25:08 05/09/2023 
// Design Name: 
// Module Name:    clock 
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
module clock(clk, rst, clk1hz, clk2hz, clk200hz, clk15hz);
input clk;
input rst;
output clk1hz;
output clk2hz;
output clk200hz;
output clk15hz;

reg [26:0] div1;
reg reg1hz;
reg reg2hz;
reg reg200hz;
reg reg15hz;

assign clk1hz = reg1hz;
assign clk2hz = reg2hz;
assign clk200hz = reg200hz;
assign clk15hz = reg15hz;

always @ (posedge clk) begin
  div1 = div1 + 1;
  if (div1 > 100000000)
    div1 = 1;
  if (rst == 1) begin
    div1 = 1;
    reg1hz = 0;
    reg2hz = 0;
    reg200hz = 0;
    reg15hz = 0;
  end else begin
    if(div1%(100000000/2) == 0 && div1 != 0)
      reg1hz = ~reg1hz;
    if (div1%((100000000/2)/2) == 0 && div1 != 0)
      reg2hz = ~reg2hz;
    if (div1%((100000000/2)/700) == 0 && div1 != 0)
      reg200hz = ~reg200hz;
    if (div1%((100000000/2)/4) == 0 && div1 != 0)
      reg15hz = ~reg15hz;
  end
end




endmodule
