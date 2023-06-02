`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:05:56 06/02/2023 
// Design Name: 
// Module Name:    datasender 
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
module datasender(input clk, input tx_ready, input startSend, input pause, input nextSong, input [(scoreWidth*8)-1:0] score, input [7:0] status [arrowStatusWidth-1:0], input [(numBytesPerArrow*8)-1:0] arrows [(4 * numArrowsPerType)-1:0], output [totalWidthBits-1:0] out_data, output out_valid);
reg [3:0] stat;
reg [totalWidthBits-1:0] data;
reg ready;
reg [1:0] statCntr;
reg [99:0] arCntr;

assign out_data = data;
assign out_ready = ready;


parameter stPauseNext = 0;
parameter stScore = 1;
parameter stStatus = 2;
parameter stArrows = 3;
parameter stIdle = 4;


always @ (posedge clk) begin
  if (startSend) begin
    stat = 0;
    ready = 0;
    statCntr = 0;
    arCntr = 0;
  end
  case (stat)
    stPauseNext:
      if (tx_ready) begin
        data = {7'b0000000, pause, 7'b0000000, nextSong};
        ready = 1;
        stat = stat + 1;
      end else ready = 0;
    stScore:
      if (tx_ready) begin
        data = score;
        ready = 1;
        stat = stat+1;
      end else ready = 0;
    stStatus:
      if (tx_ready) begin
        ready = 1;
        case (statCntr)
          0:
            data = {status[0], status[1]};
          
          1: begin
            data = {status[2], status[3]};
            stat = stat+1;
          end
        endcase
      end else ready = 0;
    stArrows:
      if (tx_ready) begin
        if (arCntr < 4 * numArrowsPerType) begin
          data = arrows[arCntr];
          arCntr = arCntr + 1;
          ready = 1;
        end else stat = stat + 1;
      end else ready = 0;
    stIdle:
      ready = 0;
  endcase
end

endmodule
