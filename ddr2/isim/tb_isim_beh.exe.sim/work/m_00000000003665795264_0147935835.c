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
static const char *ng0 = "C:/Users/Student/Desktop/nf2/152a/ddr2/lfsr.v";
static int ng1[] = {4, 0};
static int ng2[] = {3, 0};
static int ng3[] = {2, 0};
static int ng4[] = {1, 0};
static int ng5[] = {0, 0};
static unsigned int ng6[] = {31U, 0U};



static void Always_10_0(char *t0)
{
    char t7[8];
    char t19[8];
    char t28[8];
    char t43[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    int t50;

LAB0:    t1 = (t0 + 1536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(10, ng0);
    t2 = (t0 + 1876);
    *((int *)t2) = 1;
    t3 = (t0 + 1564);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(10, ng0);

LAB5:    xsi_set_current_line(11, ng0);
    t4 = (t0 + 920);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 4);
    t12 = (t11 & 1);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 4);
    t15 = (t14 & 1);
    *((unsigned int *)t8) = t15;
    t16 = (t0 + 920);
    t17 = (t16 + 36U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t20 = (t19 + 4);
    t21 = (t18 + 4);
    t22 = *((unsigned int *)t18);
    t23 = (t22 >> 1);
    t24 = (t23 & 1);
    *((unsigned int *)t19) = t24;
    t25 = *((unsigned int *)t21);
    t26 = (t25 >> 1);
    t27 = (t26 & 1);
    *((unsigned int *)t20) = t27;
    t29 = *((unsigned int *)t7);
    t30 = *((unsigned int *)t19);
    t31 = (t29 ^ t30);
    *((unsigned int *)t28) = t31;
    t32 = (t7 + 4);
    t33 = (t19 + 4);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t32);
    t36 = *((unsigned int *)t33);
    t37 = (t35 | t36);
    *((unsigned int *)t34) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB6;

LAB7:
LAB8:    t42 = (t0 + 1012);
    t44 = (t0 + 1012);
    t45 = (t44 + 44U);
    t46 = *((char **)t45);
    t47 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t43, t46, 2, t47, 32, 1);
    t48 = (t43 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (!(t49));
    if (t50 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(12, ng0);
    t2 = (t0 + 920);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t6 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 3);
    t12 = (t11 & 1);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 3);
    t15 = (t14 & 1);
    *((unsigned int *)t5) = t15;
    t8 = (t0 + 920);
    t9 = (t8 + 36U);
    t16 = *((char **)t9);
    memset(t19, 0, 8);
    t17 = (t19 + 4);
    t18 = (t16 + 4);
    t22 = *((unsigned int *)t16);
    t23 = (t22 >> 0);
    t24 = (t23 & 1);
    *((unsigned int *)t19) = t24;
    t25 = *((unsigned int *)t18);
    t26 = (t25 >> 0);
    t27 = (t26 & 1);
    *((unsigned int *)t17) = t27;
    t29 = *((unsigned int *)t7);
    t30 = *((unsigned int *)t19);
    t31 = (t29 ^ t30);
    *((unsigned int *)t28) = t31;
    t20 = (t7 + 4);
    t21 = (t19 + 4);
    t32 = (t28 + 4);
    t35 = *((unsigned int *)t20);
    t36 = *((unsigned int *)t21);
    t37 = (t35 | t36);
    *((unsigned int *)t32) = t37;
    t38 = *((unsigned int *)t32);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB11;

LAB12:
LAB13:    t33 = (t0 + 1012);
    t34 = (t0 + 1012);
    t42 = (t34 + 44U);
    t44 = *((char **)t42);
    t45 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t43, t44, 2, t45, 32, 1);
    t46 = (t43 + 4);
    t49 = *((unsigned int *)t46);
    t50 = (!(t49));
    if (t50 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(13, ng0);
    t2 = (t0 + 920);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t6 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 2);
    t12 = (t11 & 1);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 2);
    t15 = (t14 & 1);
    *((unsigned int *)t5) = t15;
    t8 = (t0 + 1012);
    t9 = (t8 + 36U);
    t16 = *((char **)t9);
    memset(t19, 0, 8);
    t17 = (t19 + 4);
    t18 = (t16 + 4);
    t22 = *((unsigned int *)t16);
    t23 = (t22 >> 4);
    t24 = (t23 & 1);
    *((unsigned int *)t19) = t24;
    t25 = *((unsigned int *)t18);
    t26 = (t25 >> 4);
    t27 = (t26 & 1);
    *((unsigned int *)t17) = t27;
    t29 = *((unsigned int *)t7);
    t30 = *((unsigned int *)t19);
    t31 = (t29 ^ t30);
    *((unsigned int *)t28) = t31;
    t20 = (t7 + 4);
    t21 = (t19 + 4);
    t32 = (t28 + 4);
    t35 = *((unsigned int *)t20);
    t36 = *((unsigned int *)t21);
    t37 = (t35 | t36);
    *((unsigned int *)t32) = t37;
    t38 = *((unsigned int *)t32);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB16;

LAB17:
LAB18:    t33 = (t0 + 1012);
    t34 = (t0 + 1012);
    t42 = (t34 + 44U);
    t44 = *((char **)t42);
    t45 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t43, t44, 2, t45, 32, 1);
    t46 = (t43 + 4);
    t49 = *((unsigned int *)t46);
    t50 = (!(t49));
    if (t50 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 920);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t6 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 1);
    t12 = (t11 & 1);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 1);
    t15 = (t14 & 1);
    *((unsigned int *)t5) = t15;
    t8 = (t0 + 1012);
    t9 = (t8 + 36U);
    t16 = *((char **)t9);
    memset(t19, 0, 8);
    t17 = (t19 + 4);
    t18 = (t16 + 4);
    t22 = *((unsigned int *)t16);
    t23 = (t22 >> 3);
    t24 = (t23 & 1);
    *((unsigned int *)t19) = t24;
    t25 = *((unsigned int *)t18);
    t26 = (t25 >> 3);
    t27 = (t26 & 1);
    *((unsigned int *)t17) = t27;
    t29 = *((unsigned int *)t7);
    t30 = *((unsigned int *)t19);
    t31 = (t29 ^ t30);
    *((unsigned int *)t28) = t31;
    t20 = (t7 + 4);
    t21 = (t19 + 4);
    t32 = (t28 + 4);
    t35 = *((unsigned int *)t20);
    t36 = *((unsigned int *)t21);
    t37 = (t35 | t36);
    *((unsigned int *)t32) = t37;
    t38 = *((unsigned int *)t32);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB21;

LAB22:
LAB23:    t33 = (t0 + 1012);
    t34 = (t0 + 1012);
    t42 = (t34 + 44U);
    t44 = *((char **)t42);
    t45 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t43, t44, 2, t45, 32, 1);
    t46 = (t43 + 4);
    t49 = *((unsigned int *)t46);
    t50 = (!(t49));
    if (t50 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 920);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t6 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    t12 = (t11 & 1);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 0);
    t15 = (t14 & 1);
    *((unsigned int *)t5) = t15;
    t8 = (t0 + 1012);
    t9 = (t8 + 36U);
    t16 = *((char **)t9);
    memset(t19, 0, 8);
    t17 = (t19 + 4);
    t18 = (t16 + 4);
    t22 = *((unsigned int *)t16);
    t23 = (t22 >> 2);
    t24 = (t23 & 1);
    *((unsigned int *)t19) = t24;
    t25 = *((unsigned int *)t18);
    t26 = (t25 >> 2);
    t27 = (t26 & 1);
    *((unsigned int *)t17) = t27;
    t29 = *((unsigned int *)t7);
    t30 = *((unsigned int *)t19);
    t31 = (t29 ^ t30);
    *((unsigned int *)t28) = t31;
    t20 = (t7 + 4);
    t21 = (t19 + 4);
    t32 = (t28 + 4);
    t35 = *((unsigned int *)t20);
    t36 = *((unsigned int *)t21);
    t37 = (t35 | t36);
    *((unsigned int *)t32) = t37;
    t38 = *((unsigned int *)t32);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB26;

LAB27:
LAB28:    t33 = (t0 + 1012);
    t34 = (t0 + 1012);
    t42 = (t34 + 44U);
    t44 = *((char **)t42);
    t45 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t43, t44, 2, t45, 32, 1);
    t46 = (t43 + 4);
    t49 = *((unsigned int *)t46);
    t50 = (!(t49));
    if (t50 == 1)
        goto LAB29;

LAB30:    goto LAB2;

LAB6:    t40 = *((unsigned int *)t28);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t28) = (t40 | t41);
    goto LAB8;

LAB9:    xsi_vlogvar_assign_value(t42, t28, 0, *((unsigned int *)t43), 1);
    goto LAB10;

LAB11:    t40 = *((unsigned int *)t28);
    t41 = *((unsigned int *)t32);
    *((unsigned int *)t28) = (t40 | t41);
    goto LAB13;

LAB14:    xsi_vlogvar_assign_value(t33, t28, 0, *((unsigned int *)t43), 1);
    goto LAB15;

LAB16:    t40 = *((unsigned int *)t28);
    t41 = *((unsigned int *)t32);
    *((unsigned int *)t28) = (t40 | t41);
    goto LAB18;

LAB19:    xsi_vlogvar_assign_value(t33, t28, 0, *((unsigned int *)t43), 1);
    goto LAB20;

LAB21:    t40 = *((unsigned int *)t28);
    t41 = *((unsigned int *)t32);
    *((unsigned int *)t28) = (t40 | t41);
    goto LAB23;

LAB24:    xsi_vlogvar_assign_value(t33, t28, 0, *((unsigned int *)t43), 1);
    goto LAB25;

LAB26:    t40 = *((unsigned int *)t28);
    t41 = *((unsigned int *)t32);
    *((unsigned int *)t28) = (t40 | t41);
    goto LAB28;

LAB29:    xsi_vlogvar_assign_value(t33, t28, 0, *((unsigned int *)t43), 1);
    goto LAB30;

}

static void Always_18_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 1680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1884);
    *((int *)t2) = 1;
    t3 = (t0 + 1708);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(19, ng0);
    t5 = (t0 + 692U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t5) == 0)
        goto LAB5;

LAB7:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB8:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t0 + 920);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 5, 0LL);

LAB11:    goto LAB2;

LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(20, ng0);
    t19 = ((char*)((ng6)));
    t20 = (t0 + 920);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 5, 0LL);
    goto LAB11;

}


extern void work_m_00000000003665795264_0147935835_init()
{
	static char *pe[] = {(void *)Always_10_0,(void *)Always_18_1};
	xsi_register_didat("work_m_00000000003665795264_0147935835", "isim/tb_isim_beh.exe.sim/work/m_00000000003665795264_0147935835.didat");
	xsi_register_executes(pe);
}
