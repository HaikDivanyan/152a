`timescale 1ns / 1ps

// show pixel(x, y) on the screen
module graphic(
    input wire  clk,
    input wire  reset,
    input wire  [10:0] x, y,
    input wire  BtnL,
    input wire  BtnR,
    input wire  BtnU,
    input wire  BtnD,
    output wire [7:0]  rgb,
    output wire [10:0] score_out
);

    // colors: [B1 B2 G1 G2 G3 R1 R2 R3]
    localparam COLOR_BG   = 8'b01001000;
    localparam COLOR_LINE = 8'b11100001;
    localparam COLOR_LARROW = 8'b11011101;
    localparam COLOR_RARROW = 8'b10010111;
    localparam COLOR_UARROW = 8'b00101011;
    localparam COLOR_DARROW = 8'b10110111;
    localparam COLOR_NULL = 8'b00000000;
    

    localparam U_BOUND = 11'd40;
    localparam D_BOUND = 11'd440;
    localparam H_ARR_W = 11'd40;
    localparam H_ARR_H = 11'd10;
    localparam V_ARR_W = 11'd10;
    localparam V_ARR_H = 11'd40;
    localparam U_ARR_X = 11'd128;
    localparam D_ARR_X = 11'd256;
    localparam L_ARR_X = 11'd384;
    localparam R_ARR_X = 11'd512;
    localparam SCORE_LINE_WIDTH = 11'd2;
    localparam SCORE_LINE_Y = 11'd400;

    // localparam ARR_V = 10'd1;
    localparam SCORE_TOLERANCE = 11'd8;
    reg [5:0] ARR_V;

    localparam MAX_ARROWS = 10;
    reg [15:0] score;
    reg [10:0] UArrows [MAX_ARROWS - 1:0];
    reg [10:0] LArrows [MAX_ARROWS - 1:0];
    reg [10:0] DArrows [MAX_ARROWS - 1:0];
    reg [10:0] RArrows [MAX_ARROWS - 1:0];
    reg [11:0] Uloc, Dloc, Lloc, Rloc;
    integer i;
    integer frame_count;
//    integer rand;

    wire [4:0] rand;
    lfsr randgen(.clk(clk), .rst_n(reset), .data(rand));

    reg [7:0] rgb_now;
    wire clk_frame = (x == 0 && y == 0);
    always @(posedge clk) begin
        if (~reset) begin
            for (i = 0; i < MAX_ARROWS; i = i+1) begin
                UArrows[i] = 0;
                LArrows[i] = 0;
                DArrows[i] = 0;
                RArrows[i] = 0;
            end
            Uloc = 0;
            Dloc = 0;
            Lloc = 0;
            Rloc = 0;
            score = 0;
            frame_count = 0;
            ARR_V = 1;
        end
        
        

        if (clk_frame) begin
            frame_count = frame_count + 1;
            //generate new arrow every at certain frequency randomly choose which arrow type
            if(frame_count >= 200 - score << 2) begin
                frame_count = 0;
                case (rand[1:0]) 
                    0: begin
                        UArrows[Uloc] = U_BOUND;
                        Uloc = Uloc + 1;
                        if (Uloc >= MAX_ARROWS)
                          Uloc = 0;
                    end
                    1: begin
                        DArrows[Dloc] = U_BOUND;
                        Dloc = Dloc + 1;
                        if (Dloc >= MAX_ARROWS)
                          Dloc = 0;
                    end
                    2: begin
                        RArrows[Rloc] = U_BOUND;
                        Rloc = Rloc + 1;
                        if (Rloc >= MAX_ARROWS)
                          Rloc = 0;
                    end
                    3: begin
                        LArrows[Lloc] = U_BOUND;
                        Lloc = Lloc + 1;
                        if (Lloc >= MAX_ARROWS)
                          Lloc = 0;
                    end
                endcase
            end

            if (score > 5) begin
                if (score > 10) begin
                    if (score > 15) begin
                        if (score > 20) begin
                            ARR_V = 5;
                        end else ARR_V = 4;
                    end else ARR_V = 3;
                end else ARR_V = 2;
            end else ARR_V = 1;

            //check for correct presses
            //move arrows down
            for (i = 0; i < MAX_ARROWS; i = i+1) begin
                if (UArrows[i] != 0) begin
                    UArrows[i] = UArrows[i] + ARR_V;
                end
                if (DArrows[i] != 0) begin
                    DArrows[i] = DArrows[i] + ARR_V;
                end
                if (RArrows[i] != 0) begin
                    RArrows[i] = RArrows[i] + ARR_V;
                end
                if (LArrows[i] != 0) begin
                    LArrows[i] = LArrows[i] + ARR_V;
                end
                
                
                if (BtnU) begin
                    if (UArrows[i] >= SCORE_LINE_Y - SCORE_TOLERANCE && UArrows[i] <= SCORE_LINE_Y + SCORE_TOLERANCE) begin
                        UArrows[i] = 0;
                        score = score + 1;
                    end else if (score > 0) score = score - 1;
                end
                if (BtnD) begin
                    if (DArrows[i] >= SCORE_LINE_Y - SCORE_TOLERANCE && DArrows[i] <= SCORE_LINE_Y + SCORE_TOLERANCE) begin
                        DArrows[i] = 0;
                        score = score + 1;
                    end else if (score > 0) score = score - 1;
                end
                if (BtnL) begin
                    if (LArrows[i] >= SCORE_LINE_Y - SCORE_TOLERANCE && LArrows[i] <= SCORE_LINE_Y + SCORE_TOLERANCE) begin
                        LArrows[i] = 0;
                        score = score + 1;
                    end else if (score > 0) score = score - 1;
                end
                if (BtnR) begin
                    if (RArrows[i] >= SCORE_LINE_Y - SCORE_TOLERANCE && RArrows[i] <= SCORE_LINE_Y + SCORE_TOLERANCE) begin
                        RArrows[i] = 0;
                        score = score + 1;
                    end else if (score > 0) score = score - 1;
                end
            end
        end

        if (x >= 0 && y >= 0 && x < 640 && y < 480) begin

            rgb_now <= COLOR_BG;

            //arrows
            for (i = 0; i < MAX_ARROWS; i = i+1) begin
                if ((UArrows[i] != 0) && (x >= U_ARR_X - V_ARR_W/2 && x <= U_ARR_X + V_ARR_W/2) && (y >= UArrows[i] - V_ARR_H/2 && y <= UArrows[i] + V_ARR_H/2)) begin
                    rgb_now <= COLOR_UARROW;
                end
                if ((DArrows[i] != 0) && (x >= D_ARR_X - V_ARR_W/2 && x <= D_ARR_X + V_ARR_W/2) && (y >= DArrows[i] - V_ARR_H/2 && y <= DArrows[i] + V_ARR_H/2)) begin
                    rgb_now <= COLOR_DARROW;
                end
                if ((LArrows[i] != 0) && (x >= L_ARR_X - H_ARR_W/2 && x <= L_ARR_X + H_ARR_W/2) && (y >= LArrows[i] - H_ARR_H/2 && y <= LArrows[i] + H_ARR_H/2)) begin
                    rgb_now <= COLOR_LARROW;
                end
                if ((RArrows[i] != 0) && (x >= R_ARR_X - H_ARR_W/2 && x <= R_ARR_X + H_ARR_W/2) && (y >= RArrows[i] - H_ARR_H/2 && y <= RArrows[i] + H_ARR_H/2)) begin
                    rgb_now <= COLOR_RARROW;
                end
            end

            //score lines
            if (y >= SCORE_LINE_Y - SCORE_LINE_WIDTH/2 - SCORE_TOLERANCE/2 && y <= SCORE_LINE_Y + SCORE_LINE_WIDTH/2 - SCORE_TOLERANCE/2) begin
                rgb_now <= COLOR_LINE;
            end
            if (y >= SCORE_LINE_Y - SCORE_LINE_WIDTH/2 + SCORE_TOLERANCE/2 && y <= SCORE_LINE_Y + SCORE_LINE_WIDTH/2 + SCORE_TOLERANCE/2) begin
                rgb_now <= COLOR_LINE;
            end

        end else begin
            // outside of the display area, fill black
            rgb_now <= COLOR_NULL;
        end
    end

    assign rgb = rgb_now;
    assign score_out = score;

endmodule