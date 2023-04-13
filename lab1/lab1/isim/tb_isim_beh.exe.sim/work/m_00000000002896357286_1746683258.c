/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Student/Desktop/nf2/152a/lab1/lab1/model_uart.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {0, 0};
static int ng4[] = {10, 0};
static int ng5[] = {1, 0};
static int ng6[] = {8, 0};
static unsigned int ng7[] = {10U, 0U};
static unsigned int ng8[] = {13U, 0U};
static const char *ng9 = "%d %s Received byte %s%s%s%s";
static int ng10[] = {1095914544, 0, 85, 0};



static int sp_tskRxData(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t0 = 1;
    t3 = (t2 + 28U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 724);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(52, ng0);

LAB5:    xsi_set_current_line(53, ng0);
    t5 = (t2 + 48U);
    t6 = *((char **)t5);
    t7 = (t6 + 0U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 28U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(54, ng0);
    t4 = (t1 + 1672);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t1 + 1856);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    goto LAB4;

}

static int sp_tskTxData(char *t1, char *t2)
{
    char t5[8];
    char t7[8];
    int t0;
    char *t3;
    char *t4;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    t0 = 1;
    t3 = (t2 + 28U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 980);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(62, ng0);

LAB5:    xsi_set_current_line(63, ng0);
    t6 = ((char*)((ng1)));
    t8 = (t1 + 1948);
    t9 = (t8 + 36U);
    t10 = *((char **)t9);
    memset(t7, 0, 8);
    t11 = (t7 + 4);
    t12 = (t10 + 4);
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 0);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 0);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 255U);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 & 255U);
    t19 = ((char*)((ng2)));
    xsi_vlogtype_concat(t5, 10, 10, 3U, t19, 1, t7, 8, t6, 1);
    t20 = (t1 + 2040);
    xsi_vlogvar_assign_value(t20, t5, 0, 0, 10);
    xsi_set_current_line(64, ng0);
    xsi_set_current_line(64, ng0);
    t4 = ((char*)((ng3)));
    t6 = (t1 + 2132);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 32);

LAB6:    t4 = (t1 + 2132);
    t6 = (t4 + 36U);
    t8 = *((char **)t6);
    t9 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t8, 32, t9, 32);
    t10 = (t5 + 4);
    t13 = *((unsigned int *)t10);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(70, ng0);
    t4 = (t1 + 4028);
    xsi_trigger(t4, -1, -1);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 28U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    xsi_set_current_line(65, ng0);

LAB9:    xsi_set_current_line(66, ng0);
    t11 = (t1 + 2040);
    t12 = (t11 + 36U);
    t19 = *((char **)t12);
    t20 = (t1 + 2040);
    t21 = (t20 + 44U);
    t22 = *((char **)t21);
    t23 = (t1 + 2132);
    t24 = (t23 + 36U);
    t25 = *((char **)t24);
    xsi_vlog_generic_get_index_select_value(t7, 1, t19, t22, 2, t25, 32, 1);
    t26 = (t1 + 1580);
    xsi_vlogvar_assign_value(t26, t7, 0, 0, 1);
    xsi_set_current_line(67, ng0);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    xsi_process_wait(t6, 1000000LL);
    *((char **)t3) = &&LAB10;
    t0 = 1;
    goto LAB1;

LAB10:    xsi_set_current_line(68, ng0);
    t4 = (t1 + 3924);
    xsi_trigger(t4, -1, -1);
    xsi_set_current_line(64, ng0);
    t4 = (t1 + 2132);
    t6 = (t4 + 36U);
    t8 = *((char **)t6);
    t9 = ((char*)((ng5)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t8, 32, t9, 32);
    t10 = (t1 + 2132);
    xsi_vlogvar_assign_value(t10, t5, 0, 0, 32);
    goto LAB6;

}

static void Initial_25_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(26, ng0);

LAB2:    xsi_set_current_line(27, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1580);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(28, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1764);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_31_1(char *t0)
{
    char t12[8];
    char t13[8];
    char t39[8];
    char t55[8];
    char t63[8];
    char t100[8];
    char t104[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    int t9;
    char *t10;
    char *t11;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t101;
    char *t102;
    char *t103;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;

LAB0:    t1 = (t0 + 2800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2996);
    *((int *)t2) = 1;
    t3 = (t0 + 2828);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1672);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2700);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t2);
    t9 = (t8 & t7);
    t4 = (t0 + 4700);
    *((int *)t4) = t9;

LAB7:    t5 = (t0 + 4700);
    if (*((int *)t5) > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1672);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t12, 0, 8);
    t10 = (t4 + 4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t11);
    t16 = (t14 ^ t15);
    t18 = (t8 | t16);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB13;

LAB12:    if (t21 != 0)
        goto LAB14;

LAB15:    memset(t13, 0, 8);
    t24 = (t12 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t12);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t24) != 0)
        goto LAB18;

LAB19:    t31 = (t13 + 4);
    t32 = *((unsigned int *)t13);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB20;

LAB21:    memcpy(t63, t13, 8);

LAB22:    t94 = (t63 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t63);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB34;

LAB35:
LAB36:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1672);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t12, 0, 8);
    t10 = (t4 + 4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t11);
    t16 = (t14 ^ t15);
    t18 = (t8 | t16);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB40;

LAB37:    if (t21 != 0)
        goto LAB39;

LAB38:    *((unsigned int *)t12) = 1;

LAB40:    t24 = (t12 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t12);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB41;

LAB42:
LAB43:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3820);
    xsi_trigger(t2, -1, -1);
    goto LAB2;

LAB8:    xsi_set_current_line(36, ng0);

LAB10:    xsi_set_current_line(37, ng0);
    t10 = (t0 + 2700);
    xsi_process_wait(t10, 1000000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(37, ng0);
    t11 = (t0 + 3716);
    xsi_trigger(t11, -1, -1);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1672);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t10 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 1);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t10);
    t14 = (t8 >> 1);
    *((unsigned int *)t5) = t14;
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 & 127U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 127U);
    t11 = (t0 + 1352U);
    t17 = *((char **)t11);
    xsi_vlogtype_concat(t12, 8, 8, 2U, t17, 1, t13, 7);
    t11 = (t0 + 1672);
    xsi_vlogvar_assign_value(t11, t12, 0, 0, 8);
    t2 = (t0 + 4700);
    t9 = *((int *)t2);
    *((int *)t2) = (t9 - 1);
    goto LAB7;

LAB13:    *((unsigned int *)t12) = 1;
    goto LAB15;

LAB14:    t17 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB15;

LAB16:    *((unsigned int *)t13) = 1;
    goto LAB19;

LAB18:    t30 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB19;

LAB20:    t35 = (t0 + 1672);
    t36 = (t35 + 36U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng8)));
    memset(t39, 0, 8);
    t40 = (t37 + 4);
    t41 = (t38 + 4);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = *((unsigned int *)t40);
    t46 = *((unsigned int *)t41);
    t47 = (t45 ^ t46);
    t48 = (t44 | t47);
    t49 = *((unsigned int *)t40);
    t50 = *((unsigned int *)t41);
    t51 = (t49 | t50);
    t52 = (~(t51));
    t53 = (t48 & t52);
    if (t53 != 0)
        goto LAB24;

LAB23:    if (t51 != 0)
        goto LAB25;

LAB26:    memset(t55, 0, 8);
    t56 = (t39 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t39);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t56) != 0)
        goto LAB29;

LAB30:    t64 = *((unsigned int *)t13);
    t65 = *((unsigned int *)t55);
    t66 = (t64 & t65);
    *((unsigned int *)t63) = t66;
    t67 = (t13 + 4);
    t68 = (t55 + 4);
    t69 = (t63 + 4);
    t70 = *((unsigned int *)t67);
    t71 = *((unsigned int *)t68);
    t72 = (t70 | t71);
    *((unsigned int *)t69) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB31;

LAB32:
LAB33:    goto LAB22;

LAB24:    *((unsigned int *)t39) = 1;
    goto LAB26;

LAB25:    t54 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB26;

LAB27:    *((unsigned int *)t55) = 1;
    goto LAB30;

LAB29:    t62 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB30;

LAB31:    t75 = *((unsigned int *)t63);
    t76 = *((unsigned int *)t69);
    *((unsigned int *)t63) = (t75 | t76);
    t77 = (t13 + 4);
    t78 = (t55 + 4);
    t79 = *((unsigned int *)t13);
    t80 = (~(t79));
    t81 = *((unsigned int *)t77);
    t82 = (~(t81));
    t83 = *((unsigned int *)t55);
    t84 = (~(t83));
    t85 = *((unsigned int *)t78);
    t86 = (~(t85));
    t9 = (t80 & t82);
    t87 = (t84 & t86);
    t88 = (~(t9));
    t89 = (~(t87));
    t90 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t90 & t88);
    t91 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t91 & t89);
    t92 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t92 & t88);
    t93 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t93 & t89);
    goto LAB33;

LAB34:    xsi_set_current_line(42, ng0);
    t101 = (t0 + 1672);
    t102 = (t101 + 36U);
    t103 = *((char **)t102);
    t105 = (t0 + 1764);
    t106 = (t105 + 36U);
    t107 = *((char **)t106);
    memset(t104, 0, 8);
    t108 = (t104 + 4);
    t109 = (t107 + 4);
    t110 = *((unsigned int *)t107);
    t111 = (t110 >> 0);
    *((unsigned int *)t104) = t111;
    t112 = *((unsigned int *)t109);
    t113 = (t112 >> 0);
    *((unsigned int *)t108) = t113;
    t114 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t114 & 16777215U);
    t115 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t115 & 16777215U);
    xsi_vlogtype_concat(t100, 32, 32, 2U, t104, 24, t103, 8);
    t116 = (t0 + 1764);
    xsi_vlogvar_assign_value(t116, t100, 0, 0, 32);
    goto LAB36;

LAB39:    t17 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB40;

LAB41:    xsi_set_current_line(43, ng0);

LAB44:    xsi_set_current_line(44, ng0);
    *((int *)t13) = xsi_vlog_stime(1000.0000000000000, 1000.0000000000000);
    t30 = (t13 + 4);
    *((int *)t30) = 0;
    t31 = ((char*)((ng10)));
    t35 = (t0 + 1764);
    t36 = (t35 + 36U);
    t37 = *((char **)t36);
    memset(t39, 0, 8);
    t38 = (t39 + 4);
    t40 = (t37 + 4);
    t32 = *((unsigned int *)t37);
    t33 = (t32 >> 24);
    *((unsigned int *)t39) = t33;
    t34 = *((unsigned int *)t40);
    t42 = (t34 >> 24);
    *((unsigned int *)t38) = t42;
    t43 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t43 & 255U);
    t44 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t44 & 255U);
    t41 = (t0 + 1764);
    t54 = (t41 + 36U);
    t56 = *((char **)t54);
    memset(t55, 0, 8);
    t62 = (t55 + 4);
    t67 = (t56 + 4);
    t45 = *((unsigned int *)t56);
    t46 = (t45 >> 16);
    *((unsigned int *)t55) = t46;
    t47 = *((unsigned int *)t67);
    t48 = (t47 >> 16);
    *((unsigned int *)t62) = t48;
    t49 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t49 & 255U);
    t50 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t50 & 255U);
    t68 = (t0 + 1764);
    t69 = (t68 + 36U);
    t77 = *((char **)t69);
    memset(t63, 0, 8);
    t78 = (t63 + 4);
    t94 = (t77 + 4);
    t51 = *((unsigned int *)t77);
    t52 = (t51 >> 8);
    *((unsigned int *)t63) = t52;
    t53 = *((unsigned int *)t94);
    t57 = (t53 >> 8);
    *((unsigned int *)t78) = t57;
    t58 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t58 & 255U);
    t59 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t59 & 255U);
    t101 = (t0 + 1764);
    t102 = (t101 + 36U);
    t103 = *((char **)t102);
    memset(t100, 0, 8);
    t105 = (t100 + 4);
    t106 = (t103 + 4);
    t60 = *((unsigned int *)t103);
    t61 = (t60 >> 0);
    *((unsigned int *)t100) = t61;
    t64 = *((unsigned int *)t106);
    t65 = (t64 >> 0);
    *((unsigned int *)t105) = t65;
    t66 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t66 & 255U);
    t70 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t70 & 255U);
    xsi_vlogfile_write(1, 0, 0, ng9, 7, t0, (char)118, t13, 32, (char)118, t31, 40, (char)118, t39, 8, (char)118, t55, 8, (char)118, t63, 8, (char)118, t100, 8);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1764);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB43;

}


extern void work_m_00000000002896357286_1746683258_init()
{
	static char *pe[] = {(void *)Initial_25_0,(void *)Always_31_1};
	static char *se[] = {(void *)sp_tskRxData,(void *)sp_tskTxData};
	xsi_register_didat("work_m_00000000002896357286_1746683258", "isim/tb_isim_beh.exe.sim/work/m_00000000002896357286_1746683258.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
