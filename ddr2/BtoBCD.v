`timescale 1ns / 1ps

module BtoBCD(
    input clk, [15:0] bin,
    output reg [15:0] bcd
    );
    always @(posedge clk) begin
        case(bin)
            0: bcd <= 16'h0000;
            1: bcd <= 16'h0001;
            2: bcd <= 16'h0002;
            3: bcd <= 16'h0003;
            4: bcd <= 16'h0004;
            5: bcd <= 16'h0005;
            6: bcd <= 16'h0006;
            7: bcd <= 16'h0007;
            8: bcd <= 16'h0008;
            9: bcd <= 16'h0009;
            10: bcd <= 16'h0010;
            11: bcd <= 16'h0011;
            12: bcd <= 16'h0012;
            13: bcd <= 16'h0013;
            14: bcd <= 16'h0014;
            15: bcd <= 16'h0015;
            16: bcd <= 16'h0016;
            17: bcd <= 16'h0017;
            18: bcd <= 16'h0018;
            19: bcd <= 16'h0019;
            20: bcd <= 16'h0020;
            21: bcd <= 16'h0021;
            22: bcd <= 16'h0022;
            23: bcd <= 16'h0023;
            24: bcd <= 16'h0024;
            25: bcd <= 16'h0025;
            26: bcd <= 16'h0026;
            27: bcd <= 16'h0027;
            28: bcd <= 16'h0028;
            29: bcd <= 16'h0029;
            30: bcd <= 16'h0030;
            31: bcd <= 16'h0031;
            32: bcd <= 16'h0032;
            33: bcd <= 16'h0033;
            34: bcd <= 16'h0034;
            35: bcd <= 16'h0035;
            36: bcd <= 16'h0036;
            37: bcd <= 16'h0037;
            38: bcd <= 16'h0038;
            39: bcd <= 16'h0039;
            40: bcd <= 16'h0040;
            41: bcd <= 16'h0041;
            42: bcd <= 16'h0042;
            43: bcd <= 16'h0043;
            44: bcd <= 16'h0044;
            45: bcd <= 16'h0045;
            46: bcd <= 16'h0046;
            47: bcd <= 16'h0047;
            48: bcd <= 16'h0048;
            49: bcd <= 16'h0049;
            50: bcd <= 16'h0050;
            51: bcd <= 16'h0051;
            52: bcd <= 16'h0052;
            53: bcd <= 16'h0053;
            54: bcd <= 16'h0054;
            55: bcd <= 16'h0055;
            56: bcd <= 16'h0056;
            57: bcd <= 16'h0057;
            58: bcd <= 16'h0058;
            59: bcd <= 16'h0059;
            60: bcd <= 16'h0060;
            61: bcd <= 16'h0061;
            62: bcd <= 16'h0062;
            63: bcd <= 16'h0063;
            64: bcd <= 16'h0064;
            65: bcd <= 16'h0065;
            66: bcd <= 16'h0066;
            67: bcd <= 16'h0067;
            68: bcd <= 16'h0068;
            69: bcd <= 16'h0069;
            70: bcd <= 16'h0070;
            71: bcd <= 16'h0071;
            72: bcd <= 16'h0072;
            73: bcd <= 16'h0073;
            74: bcd <= 16'h0074;
            75: bcd <= 16'h0075;
            76: bcd <= 16'h0076;
            77: bcd <= 16'h0077;
            78: bcd <= 16'h0078;
            79: bcd <= 16'h0079;
            80: bcd <= 16'h0080;
            81: bcd <= 16'h0081;
            82: bcd <= 16'h0082;
            83: bcd <= 16'h0083;
            84: bcd <= 16'h0084;
            85: bcd <= 16'h0085;
            86: bcd <= 16'h0086;
            87: bcd <= 16'h0087;
            88: bcd <= 16'h0088;
            89: bcd <= 16'h0089;
            90: bcd <= 16'h0090;
            91: bcd <= 16'h0091;
            92: bcd <= 16'h0092;
            93: bcd <= 16'h0093;
            94: bcd <= 16'h0094;
            95: bcd <= 16'h0095;
            96: bcd <= 16'h0096;
            97: bcd <= 16'h0097;
            98: bcd <= 16'h0098;
            99: bcd <= 16'h0099;
            default: bcd <= 16'h0099;
        endcase
    end
endmodule 