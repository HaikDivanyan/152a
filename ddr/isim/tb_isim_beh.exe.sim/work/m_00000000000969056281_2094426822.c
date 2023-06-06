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
static const char *ng0 = "C:/Users/Student/Desktop/nf2/152a/ddr/datasender.v";
static int ng1[] = {4, 0};
static int ng2[] = {0, 0};
static int ng3[] = {0, 0, 0, 0, 0, 0, 0, 0};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {61680U, 0U};
static int ng7[] = {4, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng8[] = {150U, 0U};
static int ng9[] = {1, 0, 0, 0, 0, 0, 0, 0};



static void Cont_33_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 3920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 3120);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 4464);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 4404);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_34_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 4064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3212);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 4500);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 4412);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_44_2(char *t0)
{
    char t13[8];
    char t32[32];
    char t33[32];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t34;
    char *t35;

LAB0:    t1 = (t0 + 4208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 4420);
    *((int *)t2) = 1;
    t3 = (t0 + 4236);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);

LAB5:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 1972U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2156U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB13;

LAB10:    if (t18 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t13) = 1;

LAB13:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB14;

LAB15:
LAB16:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3028);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB18:    t5 = (t0 + 1144);
    t11 = *((char **)t5);
    t28 = xsi_vlog_unsigned_case_compare(t4, 4, t11, 32);
    if (t28 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 1224);
    t3 = *((char **)t2);
    t28 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t28 == 1)
        goto LAB21;

LAB22:    t2 = (t0 + 1304);
    t3 = *((char **)t2);
    t28 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t28 == 1)
        goto LAB23;

LAB24:    t2 = (t0 + 1384);
    t3 = *((char **)t2);
    t28 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t28 == 1)
        goto LAB25;

LAB26:    t2 = (t0 + 1464);
    t3 = *((char **)t2);
    t28 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t28 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB2;

LAB6:    xsi_set_current_line(45, ng0);

LAB9:    xsi_set_current_line(46, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3028);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 4);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3212);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3396);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 100);
    goto LAB8;

LAB12:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(51, ng0);

LAB17:    xsi_set_current_line(52, ng0);
    t26 = ((char*)((ng2)));
    t27 = (t0 + 3028);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 4);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3212);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3396);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 100);
    goto LAB16;

LAB19:    xsi_set_current_line(59, ng0);
    t5 = (t0 + 2064U);
    t12 = *((char **)t5);
    t5 = (t12 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t12);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3212);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB32:    goto LAB29;

LAB21:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2064U);
    t5 = *((char **)t2);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3212);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB36:    goto LAB29;

LAB23:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2064U);
    t5 = *((char **)t2);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3212);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB40:    goto LAB29;

LAB25:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2064U);
    t11 = *((char **)t2);
    t2 = (t11 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t11);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3212);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB51:    goto LAB29;

LAB27:    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 3212);
    xsi_vlogvar_assign_value(t11, t2, 0, 0, 1);
    goto LAB29;

LAB30:    xsi_set_current_line(59, ng0);

LAB33:    xsi_set_current_line(60, ng0);
    t26 = (t0 + 2340U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng5)));
    t29 = (t0 + 2248U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng5)));
    xsi_vlogtype_concat(t13, 16, 16, 4U, t29, 7, t30, 1, t26, 7, t27, 1);
    t31 = (t0 + 3120);
    xsi_vlogvar_assign_value(t31, t13, 0, 0, 16);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3212);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3028);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t5, 4, t11, 32);
    t12 = (t0 + 3028);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 4);
    goto LAB32;

LAB34:    xsi_set_current_line(65, ng0);

LAB37:    xsi_set_current_line(66, ng0);
    t11 = (t0 + 2432U);
    t12 = *((char **)t11);
    t11 = (t0 + 3120);
    xsi_vlogvar_assign_value(t11, t12, 0, 0, 16);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3212);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3028);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t5, 4, t11, 32);
    t12 = (t0 + 3028);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 4);
    goto LAB36;

LAB38:    xsi_set_current_line(71, ng0);

LAB41:    xsi_set_current_line(72, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 3212);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3304);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);

LAB42:    t11 = ((char*)((ng2)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 2, t11, 32);
    if (t28 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng4)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t28 == 1)
        goto LAB45;

LAB46:
LAB47:    goto LAB40;

LAB43:    xsi_set_current_line(75, ng0);
    t12 = ((char*)((ng6)));
    t26 = (t0 + 3120);
    xsi_vlogvar_assign_value(t26, t12, 0, 0, 16);
    goto LAB47;

LAB45:    xsi_set_current_line(77, ng0);

LAB48:    xsi_set_current_line(78, ng0);
    t3 = ((char*)((ng6)));
    t11 = (t0 + 3120);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 16);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3028);
    t3 = (t2 + 36U);
    t11 = *((char **)t3);
    t12 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t11, 4, t12, 32);
    t26 = (t0 + 3028);
    xsi_vlogvar_assign_value(t26, t13, 0, 0, 4);
    goto LAB47;

LAB49:    xsi_set_current_line(85, ng0);

LAB52:    xsi_set_current_line(86, ng0);
    t12 = (t0 + 3396);
    t26 = (t12 + 36U);
    t27 = *((char **)t26);
    t29 = ((char*)((ng7)));
    t30 = (t0 + 664);
    t31 = *((char **)t30);
    xsi_vlog_unsigned_multiply(t32, 100, t29, 32, t31, 32);
    xsi_vlog_unsigned_less(t33, 100, t27, 100, t32, 100);
    t30 = (t33 + 4);
    t14 = *((unsigned int *)t30);
    t15 = (~(t14));
    t16 = *((unsigned int *)t33);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3028);
    t3 = (t2 + 36U);
    t11 = *((char **)t3);
    t12 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t11, 4, t12, 32);
    t26 = (t0 + 3028);
    xsi_vlogvar_assign_value(t26, t13, 0, 0, 4);

LAB55:    goto LAB51;

LAB53:    xsi_set_current_line(86, ng0);

LAB56:    xsi_set_current_line(87, ng0);
    t34 = ((char*)((ng8)));
    t35 = (t0 + 3120);
    xsi_vlogvar_assign_value(t35, t34, 0, 0, 16);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 3396);
    t3 = (t2 + 36U);
    t11 = *((char **)t3);
    t12 = ((char*)((ng9)));
    xsi_vlog_unsigned_add(t32, 100, t11, 100, t12, 32);
    t26 = (t0 + 3396);
    xsi_vlogvar_assign_value(t26, t32, 0, 0, 100);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3212);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB55;

}


extern void work_m_00000000000969056281_2094426822_init()
{
	static char *pe[] = {(void *)Cont_33_0,(void *)Cont_34_1,(void *)Always_44_2};
	xsi_register_didat("work_m_00000000000969056281_2094426822", "isim/tb_isim_beh.exe.sim/work/m_00000000000969056281_2094426822.didat");
	xsi_register_executes(pe);
}
