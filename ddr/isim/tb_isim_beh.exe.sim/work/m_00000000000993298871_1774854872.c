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
static const char *ng0 = "C:/Users/Student/Desktop/nf2/152a/ddr/main.v";
static int ng1[] = {0, 0};
static int ng2[] = {8, 0};
static unsigned int ng3[] = {127U, 0U};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {15, 0};



static void Initial_46_0(char *t0)
{
    char t6[8];
    char t8[8];
    char t9[8];
    char t18[8];
    char t19[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    int t30;
    char *t31;
    unsigned int t32;
    int t33;
    int t34;
    char *t35;
    unsigned int t36;
    int t37;
    int t38;
    unsigned int t39;
    int t40;
    unsigned int t41;
    unsigned int t42;
    int t43;
    int t44;

LAB0:    xsi_set_current_line(46, ng0);

LAB2:    xsi_set_current_line(47, ng0);
    xsi_set_current_line(47, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3468);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 3468);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = (t0 + 824);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_multiply(t6, 32, t5, 32, t4, 32);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_minus(t8, 32, t6, 32, t7, 32);
    memset(t9, 0, 8);
    xsi_vlog_signed_less(t9, 32, t3, 32, t8, 32);
    t10 = (t9 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB4;

LAB5:    xsi_set_current_line(51, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 3376);
    t3 = (t0 + 3376);
    t4 = (t3 + 44U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng5)));
    t10 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t6, t8, t9, ((int*)(t5)), 2, t7, 32, 1, t10, 32, 1);
    t16 = (t6 + 4);
    t11 = *((unsigned int *)t16);
    t30 = (!(t11));
    t17 = (t8 + 4);
    t12 = *((unsigned int *)t17);
    t33 = (!(t12));
    t34 = (t30 && t33);
    t21 = (t9 + 4);
    t13 = *((unsigned int *)t21);
    t37 = (!(t13));
    t38 = (t34 && t37);
    if (t38 == 1)
        goto LAB9;

LAB10:
LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);

LAB6:    xsi_set_current_line(48, ng0);
    t16 = ((char*)((ng3)));
    t17 = (t0 + 3376);
    t21 = (t0 + 3376);
    t22 = (t21 + 44U);
    t23 = *((char **)t22);
    t24 = (t0 + 3468);
    t25 = (t24 + 36U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng2)));
    xsi_vlog_convert_indexed_partindices(t18, t19, t20, ((int*)(t23)), 2, t26, 32, 1, t27, 32, 1, 1);
    t28 = (t18 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t19 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t30 && t33);
    t35 = (t20 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (!(t36));
    t38 = (t34 && t37);
    if (t38 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 3468);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t3, 32, t4, 32);
    t5 = (t0 + 3468);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 32);
    goto LAB3;

LAB7:    t39 = *((unsigned int *)t20);
    t40 = (t39 + 0);
    t41 = *((unsigned int *)t18);
    t42 = *((unsigned int *)t19);
    t43 = (t41 - t42);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t17, t16, t40, *((unsigned int *)t19), t44);
    goto LAB8;

LAB9:    t14 = *((unsigned int *)t9);
    t40 = (t14 + 0);
    t15 = *((unsigned int *)t6);
    t29 = *((unsigned int *)t8);
    t43 = (t15 - t29);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t2, t1, t40, *((unsigned int *)t8), t44);
    goto LAB10;

}

static void Cont_54_1(char *t0)
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

LAB0:    t1 = (t0 + 4136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3376);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 4528);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 3U;
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
    xsi_driver_vfirst_trans(t5, 0, 1);
    t18 = (t0 + 4476);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_55_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 4280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2596U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB7:    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    *((unsigned int *)t3) = t14;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB9;

LAB8:    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 1U);
    t21 = (t0 + 4564);
    t22 = (t21 + 32U);
    t23 = *((char **)t22);
    t24 = (t23 + 40U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 1U;
    t27 = t26;
    t28 = (t3 + 4);
    t29 = *((unsigned int *)t3);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 0);
    t34 = (t0 + 4484);
    *((int *)t34) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t3) = (t15 | t16);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t17 | t18);
    goto LAB8;

}


extern void work_m_00000000000993298871_1774854872_init()
{
	static char *pe[] = {(void *)Initial_46_0,(void *)Cont_54_1,(void *)Cont_55_2};
	xsi_register_didat("work_m_00000000000993298871_1774854872", "isim/tb_isim_beh.exe.sim/work/m_00000000000993298871_1774854872.didat");
	xsi_register_executes(pe);
}
