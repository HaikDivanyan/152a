`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:39:23 04/25/2023 
// Design Name: 
// Module Name:    compressor 
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
module compressor(D, S, E, F);
input [11:0] D;
output S;
output [2:0] E;
output [3:0] F;

reg [11:0] val;
reg [2:0] Eintermediate;
reg [3:0] Fintermediate;
reg [3:0] fint;
reg [2:0] eint;
reg fifth;
reg [4:0] over;
reg [3:0] overe;
reg sin;

assign S = sin;
assign E = eint;
assign F = fint;

always @* begin
  sin = 1'b0;
  Eintermediate = 0;
  Fintermediate = 0;
  eint = 0;
  fint = 0;
  val = 0;
  fifth = 0;
  signMagn(D, sin, val);
  parse(val, Eintermediate, Fintermediate, fifth);
  rounding(Eintermediate, Fintermediate, fifth, eint, fint);
end

task signMagn(input [11:0] D, output S, output [11:0] val); begin
  if (D == 12'b100000000000)
    D = 12'b100000000001;
  if(D[11] == 0) begin
    S = 1'b0;
    val = D[11:0];
  end else begin
    S = 1'b1;
    val = ~D[11:0] + 1;
  end
end endtask

task parse(input [11:0] D, output [2:0] E, output [3:0] F, output fifth); begin
  
  if (D[11:4] == 8'b00000000) begin
    E = 3'd0;
    F = D[3:0];
    fifth = 0;
  end else if (D[11:5] == 7'b0000000) begin
    E = 3'd1;
    F = D[4:1];
    fifth = D[0];
  end else if (D[11:6] == 6'b000000) begin
    E = 3'd2;
    F = D[5:2];
    fifth = D[1];
  end else if (D[11:7] == 5'b00000) begin
    E = 3'd3;
    F = D[6:3];
    fifth = D[2];
  end else if (D[11:8] == 4'b0000) begin
    E = 3'd4;
    F = D[7:4];
    fifth = D[3];
  end else if (D[11:9] == 3'b000) begin
    E = 3'd5;
    F = D[8:5];
    fifth = D[4];
  end else if (D[11:10] == 2'b00) begin
    E = 3'd6;
    F = D[9:6];
    fifth = D[5];
  end else if (D[11] == 1'b0) begin
    E = 3'd7;
    F = D[10:7];
    fifth = D[6];
  end
  
end endtask

task rounding(input [2:0] Ein, input [3:0] Fin, input fifth, output [2:0] E, output [3:0] F); begin
  over = {0,Fin};
  overe = {0, Ein};
  
  if (fifth == 1)
    over = over + 1;
  if (over[4] == 1) begin
    overe = overe + 1;
    if (overe[3] == 1) begin
      E = 3'b111;
      F = 4'b1111;
    end else begin
      E = Ein + 1;
      F = over[4:1];
    end
  end
  else begin
    E = Ein;
    F = over[3:0];
  end
end endtask
  
endmodule