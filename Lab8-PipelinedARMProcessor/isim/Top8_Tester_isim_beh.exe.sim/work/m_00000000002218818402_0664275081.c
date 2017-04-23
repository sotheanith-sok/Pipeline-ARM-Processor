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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/Workstation/CECS-341/Lab8-PipelinedARMProcessor/MEMWB_PR.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1U, 1U};
static int ng3[] = {1, 0};
static int ng4[] = {31, 0};



static void Initial_9_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(9, ng0);

LAB2:    xsi_set_current_line(10, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 5);

LAB1:    return;
}

static void Always_12_1(char *t0)
{
    char t4[8];
    char t7[8];
    char t20[8];
    char t21[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    int t33;
    char *t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    int t40;
    int t41;

LAB0:    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12, ng0);
    t2 = (t0 + 3664);
    *((int *)t2) = 1;
    t3 = (t0 + 3128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12, ng0);

LAB5:    xsi_set_current_line(13, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    xsi_vlog_unary_xor(t4, 1, t6, 135);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t5))
        goto LAB8;

LAB6:    t8 = (t4 + 4);
    t9 = (t5 + 4);
    if (*((unsigned int *)t8) != *((unsigned int *)t9))
        goto LAB8;

LAB7:    *((unsigned int *)t7) = 1;

LAB8:    t10 = (t7 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t7);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB9:    xsi_set_current_line(13, ng0);

LAB12:    xsi_set_current_line(14, ng0);
    t16 = (t0 + 3680);
    *((int *)t16) = 1;
    t17 = (t0 + 3128);
    *((char **)t17) = t16;
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(14, ng0);

LAB14:    xsi_set_current_line(15, ng0);
    t18 = (t0 + 1208U);
    t19 = *((char **)t18);
    t18 = (t0 + 1768);
    t22 = (t0 + 1768);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 1768);
    t26 = (t25 + 64U);
    t27 = *((char **)t26);
    t28 = (t0 + 1928);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_convert_array_indices(t20, t21, t24, t27, 2, 1, t30, 5, 2);
    t31 = (t20 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t21 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (!(t35));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 5, t6, 32);
    t8 = (t0 + 1928);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 5);
    xsi_set_current_line(17, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB18;

LAB17:    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB18;

LAB21:    if (*((unsigned int *)t5) > *((unsigned int *)t6))
        goto LAB19;

LAB20:    t16 = (t4 + 4);
    t11 = *((unsigned int *)t16);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB22;

LAB23:
LAB24:    goto LAB11;

LAB15:    t38 = *((unsigned int *)t20);
    t39 = *((unsigned int *)t21);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t18, t19, 0, *((unsigned int *)t21), t41);
    goto LAB16;

LAB18:    t10 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB20;

LAB19:    *((unsigned int *)t4) = 1;
    goto LAB20;

LAB22:    xsi_set_current_line(18, ng0);
    t17 = ((char*)((ng1)));
    t18 = (t0 + 1928);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 5);
    goto LAB24;

}

static void Cont_22_2(char *t0)
{
    char t5[40];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 3344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 1768);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 1768);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1928);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_array_select_value(t5, 135, t4, t8, t11, 2, 1, t14, 5, 2);
    t15 = (t0 + 3776);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_bit_copy(t19, 0, t5, 0, 135);
    xsi_driver_vfirst_trans(t15, 0, 134);
    t20 = (t0 + 3696);
    *((int *)t20) = 1;

LAB1:    return;
}


extern void work_m_00000000002218818402_0664275081_init()
{
	static char *pe[] = {(void *)Initial_9_0,(void *)Always_12_1,(void *)Cont_22_2};
	xsi_register_didat("work_m_00000000002218818402_0664275081", "isim/Top8_Tester_isim_beh.exe.sim/work/m_00000000002218818402_0664275081.didat");
	xsi_register_executes(pe);
}
