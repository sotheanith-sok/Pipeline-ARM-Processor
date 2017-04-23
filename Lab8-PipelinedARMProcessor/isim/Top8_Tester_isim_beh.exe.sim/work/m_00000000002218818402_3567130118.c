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
static const char *ng0 = "D:/Workstation/CECS-341/Lab8-PipelinedARMProcessor/IFID_PR.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {31, 0};



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
    char t8[8];
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    int t19;
    char *t20;
    unsigned int t21;
    int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    int t26;
    int t27;
    unsigned int t28;

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

LAB5:    xsi_set_current_line(14, ng0);
    t4 = (t0 + 1928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t6, 5, t7, 32);
    t9 = (t0 + 1928);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 5);
    xsi_set_current_line(15, ng0);
    t2 = (t0 + 3680);
    *((int *)t2) = 1;
    t3 = (t0 + 3128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(15, ng0);

LAB7:    xsi_set_current_line(16, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1768);
    t6 = (t0 + 1768);
    t7 = (t6 + 72U);
    t9 = *((char **)t7);
    t11 = (t0 + 1768);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 1928);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    xsi_vlog_generic_convert_array_indices(t8, t10, t9, t13, 2, 1, t16, 5, 2);
    t17 = (t8 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t10 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (!(t21));
    t23 = (t19 && t22);
    if (t23 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB11;

LAB10:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB11;

LAB14:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB12;

LAB13:    t11 = (t8 + 4);
    t18 = *((unsigned int *)t11);
    t21 = (~(t18));
    t24 = *((unsigned int *)t8);
    t25 = (t24 & t21);
    t28 = (t25 != 0);
    if (t28 > 0)
        goto LAB15;

LAB16:
LAB17:    goto LAB2;

LAB8:    t24 = *((unsigned int *)t8);
    t25 = *((unsigned int *)t10);
    t26 = (t24 - t25);
    t27 = (t26 + 1);
    xsi_vlogvar_assign_value(t4, t5, 0, *((unsigned int *)t10), t27);
    goto LAB9;

LAB11:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB13;

LAB12:    *((unsigned int *)t8) = 1;
    goto LAB13;

LAB15:    xsi_set_current_line(18, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 1928);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 5);
    goto LAB17;

}

static void Cont_22_2(char *t0)
{
    char t5[24];
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
    xsi_vlog_generic_get_array_select_value(t5, 96, t4, t8, t11, 2, 1, t14, 5, 2);
    t15 = (t0 + 3776);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_bit_copy(t19, 0, t5, 0, 96);
    xsi_driver_vfirst_trans(t15, 0, 95);
    t20 = (t0 + 3696);
    *((int *)t20) = 1;

LAB1:    return;
}


extern void work_m_00000000002218818402_3567130118_init()
{
	static char *pe[] = {(void *)Initial_9_0,(void *)Always_12_1,(void *)Cont_22_2};
	xsi_register_didat("work_m_00000000002218818402_3567130118", "isim/Top8_Tester_isim_beh.exe.sim/work/m_00000000002218818402_3567130118.didat");
	xsi_register_executes(pe);
}
