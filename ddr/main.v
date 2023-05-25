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


module main(input clk, input sw, input RsRx, 
  output RsTx, input BtnU, input BtnD, input BtnL, 
  input BtnR, input BtnM);

`include "ddrdefs.v"

wire [totalWidth-1:0] tx_data;         
wire                 tx_valid;           
wire [7:0]           uart_rx_data;           
wire                 uart_rx_valid;          
wire                 uart_tx_busy;           

uart_top uart_top_ (// Outputs
                       .o_tx            (RsTx),
                       .o_tx_busy       (uart_tx_busy),
                       .o_rx_data       (uart_rx_data[7:0]),
                       .o_rx_valid      (uart_rx_valid),
                       // Inputs
                       .i_rx            (RsRx),
                       .i_tx_data       (tx_data[totalWidth-1:0]),
                       .i_tx_stb        (tx_valid),
                       .clk             (clk),
                       .rst             (rst));


endmodule
