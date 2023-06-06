`timescale 1ns / 1ps

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