`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:58:45 05/25/2023 
// Design Name: 
// Module Name:    main 
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


module main(input clk, input [7:0] sw, input RsRx, 
  output RsTx, input BtnU, input BtnD, input BtnL, 
  input BtnR, input BtnM);

`include "ddrdefs.v"

wire [totalWidthBits-1:0] tx_data;         
wire                 tx_valid;           
wire [7:0]           uart_rx_data;           
wire                 uart_rx_valid;          
wire                 uart_tx_busy; 

//reg [(8*numBytesPerArrow)-1:0] arrowLocs [(4*numArrowsPerType) - 1:0];
//reg pause;
//reg nextSong;
//reg [(8*scoreWidth)-1:0] score;
//reg [7:0] arrowStatuses [4:0];
wire BtnU_d;
wire edj;
wire rise;
wire fall;

wire pause;
wire nextSong;
wire [15:0] score;
wire [31:0] arrowStatuses;
wire [6399:0] arrowLocs;

assign pause = 1;
assign nextSong = 0;
assign score = 150;
 

//assign tx_data = {8'b00000000, uart_rx_data};
//assign tx_valid = uart_rx_valid;

Debounce db1(.clock(clk), .in(BtnU), .out(BtnU_d), .edj(edj), .rise(rise), .fall(fall));

datasender datasender_(.clk(clk), .rst(BtnL), .tx_ready(~uart_tx_busy), .startSend(BtnU), .pause(pause), .nextSong(nextSong), .score(score), .status(arrowStatuses), .arrows(arrowLocs), .out_data(tx_data), .out_valid(tx_valid));
uart_top uart_top_ (// Outputs
                       .o_tx            (RsTx),
                       .o_tx_busy       (uart_tx_busy),
                       .o_rx_data       (uart_rx_data[7:0]),
                       .o_rx_valid      (uart_rx_valid),
                       // Inputs
                       .i_rx            (RsRx),
                       .i_tx_data       (tx_data),
                       .i_tx_stb        (tx_valid),
                       .clk             (clk),
                       .rst             (BtnL));


endmodule
