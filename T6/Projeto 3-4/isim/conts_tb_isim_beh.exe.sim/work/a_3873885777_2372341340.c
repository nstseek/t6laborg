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

/* This file is designed for use with ISim build 0x1cce1bb2 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//VBoxSvr/Downloads/T6/T6/VHDL/MIPSmulti_com_BRAMS.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

char *ieee_p_3620187407_sub_436351764_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_3873885777_2372341340_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(215, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = (32 - 31);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 5992);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 5832);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3873885777_2372341340_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(216, ng0);

LAB3:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 6056);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5848);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3873885777_2372341340_p_2(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(221, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 5864);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(222, ng0);
    t4 = (t0 + 2312U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 6120);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast(t4);
    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void work_a_3873885777_2372341340_p_3(char *t0)
{
    char t12[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5};

LAB0:    xsi_set_current_line(228, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 5880);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(230, ng0);
    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB6;

LAB8:    xsi_set_current_line(230, ng0);
    t1 = (t0 + 6184);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB7:    goto LAB2;

LAB4:    xsi_set_current_line(232, ng0);
    t1 = (t0 + 6184);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(234, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 9420U);
    t4 = (t0 + 9648);
    t8 = (t12 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 4;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t13 = (4 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t14;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t4, t12);
    if (t3 != 0)
        goto LAB9;

LAB11:    xsi_set_current_line(236, ng0);
    t1 = (t0 + 6184);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB10:    goto LAB2;

LAB6:    xsi_set_current_line(230, ng0);
    t4 = (t0 + 6184);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t4);
    goto LAB7;

LAB9:    xsi_set_current_line(235, ng0);
    t9 = (t0 + 6184);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)0;
    xsi_driver_first_trans_fast(t9);
    goto LAB10;

}

static void work_a_3873885777_2372341340_p_4(char *t0)
{
    char t9[16];
    char t14[16];
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned char t21;
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
    char *t32;
    char *t33;

LAB0:    xsi_set_current_line(242, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t3 = (0 - 31);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB3;

LAB4:
LAB7:    t27 = (t0 + 2632U);
    t28 = *((char **)t27);
    t27 = (t0 + 6248);
    t29 = (t27 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t28, 33U);
    xsi_driver_first_trans_fast(t27);

LAB2:    t33 = (t0 + 5896);
    *((int *)t33) = 1;

LAB1:    return;
LAB3:    t10 = (t0 + 2632U);
    t11 = *((char **)t10);
    t10 = (t0 + 9388U);
    t12 = (t0 + 1512U);
    t13 = *((char **)t12);
    t15 = ((IEEE_P_2592010699) + 4024);
    t16 = (t0 + 9340U);
    t12 = xsi_base_array_concat(t12, t14, t15, (char)99, (unsigned char)2, (char)97, t13, t16, (char)101);
    t17 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t9, t11, t10, t12, t14);
    t18 = (t9 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (1U * t19);
    t21 = (33U != t20);
    if (t21 == 1)
        goto LAB5;

LAB6:    t22 = (t0 + 6248);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t17, 33U);
    xsi_driver_first_trans_fast(t22);
    goto LAB2;

LAB5:    xsi_size_not_matching(33U, t20, 0);
    goto LAB6;

LAB8:    goto LAB2;

}

static void work_a_3873885777_2372341340_p_5(char *t0)
{
    char t20[16];
    char t25[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t21;
    unsigned int t22;
    int t23;
    unsigned int t24;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    unsigned int t30;
    static char *nl0[] = {&&LAB9, &&LAB10, &&LAB11};

LAB0:    xsi_set_current_line(248, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 5912);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(249, ng0);
    t4 = (t0 + 2152U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (char *)((nl0) + t9);
    goto **((char **)t4);

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    goto LAB3;

LAB9:    xsi_set_current_line(251, ng0);
    t10 = (t0 + 1192U);
    t11 = *((char **)t10);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)3);
    if (t13 != 0)
        goto LAB12;

LAB14:
LAB13:    xsi_set_current_line(256, ng0);
    t2 = (t0 + 6504);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB8;

LAB10:    xsi_set_current_line(258, ng0);
    t2 = (t0 + 3112U);
    t4 = *((char **)t2);
    t2 = (t0 + 9420U);
    t5 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t20, t4, t2, 1);
    t8 = (t20 + 12U);
    t21 = *((unsigned int *)t8);
    t22 = (1U * t21);
    t1 = (5U != t22);
    if (t1 == 1)
        goto LAB15;

LAB16:    t10 = (t0 + 6440);
    t11 = (t10 + 56U);
    t14 = *((char **)t11);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t5, 5U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(259, ng0);
    t2 = (t0 + 2792U);
    t4 = *((char **)t2);
    t2 = (t0 + 6312);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t4, 33U);
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB11:    xsi_set_current_line(261, ng0);
    t2 = (t0 + 3112U);
    t4 = *((char **)t2);
    t2 = (t0 + 9420U);
    t5 = (t0 + 9653);
    t10 = (t20 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 4;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t23 = (4 - 0);
    t21 = (t23 * 1);
    t21 = (t21 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t21;
    t1 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t4, t2, t5, t20);
    if (t1 != 0)
        goto LAB17;

LAB19:
LAB18:    xsi_set_current_line(264, ng0);
    t2 = (t0 + 2632U);
    t4 = *((char **)t2);
    t21 = (32 - 32);
    t22 = (t21 * 1U);
    t24 = (0 + t22);
    t2 = (t4 + t24);
    t8 = ((IEEE_P_2592010699) + 4024);
    t10 = (t25 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 32;
    t11 = (t10 + 4U);
    *((int *)t11) = 1;
    t11 = (t10 + 8U);
    *((int *)t11) = -1;
    t23 = (1 - 32);
    t26 = (t23 * -1);
    t26 = (t26 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t26;
    t5 = xsi_base_array_concat(t5, t20, t8, (char)99, (unsigned char)2, (char)97, t2, t25, (char)101);
    t26 = (1U + 32U);
    t1 = (33U != t26);
    if (t1 == 1)
        goto LAB20;

LAB21:    t11 = (t0 + 6312);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 33U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(265, ng0);
    t2 = (t0 + 2632U);
    t4 = *((char **)t2);
    t23 = (0 - 32);
    t21 = (t23 * -1);
    t22 = (1U * t21);
    t24 = (0 + t22);
    t2 = (t4 + t24);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 2952U);
    t8 = *((char **)t5);
    t26 = (31 - 31);
    t27 = (t26 * 1U);
    t28 = (0 + t27);
    t5 = (t8 + t28);
    t11 = ((IEEE_P_2592010699) + 4024);
    t14 = (t25 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 31;
    t15 = (t14 + 4U);
    *((int *)t15) = 1;
    t15 = (t14 + 8U);
    *((int *)t15) = -1;
    t29 = (1 - 31);
    t30 = (t29 * -1);
    t30 = (t30 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t30;
    t10 = xsi_base_array_concat(t10, t20, t11, (char)99, t1, (char)97, t5, t25, (char)101);
    t30 = (1U + 31U);
    t3 = (32U != t30);
    if (t3 == 1)
        goto LAB22;

LAB23:    t15 = (t0 + 6376);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t10, 32U);
    xsi_driver_first_trans_fast(t15);
    goto LAB8;

LAB12:    xsi_set_current_line(252, ng0);
    t10 = xsi_get_transient_memory(33U);
    memset(t10, 0, 33U);
    t14 = t10;
    memset(t14, (unsigned char)2, 33U);
    t15 = (t0 + 6312);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t10, 33U);
    xsi_driver_first_trans_fast(t15);
    xsi_set_current_line(253, ng0);
    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t2 = (t0 + 6376);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t4, 32U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(254, ng0);
    t2 = xsi_get_transient_memory(5U);
    memset(t2, 0, 5U);
    t4 = t2;
    memset(t4, (unsigned char)2, 5U);
    t5 = (t0 + 6440);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t14 = *((char **)t11);
    memcpy(t14, t2, 5U);
    xsi_driver_first_trans_fast(t5);
    goto LAB13;

LAB15:    xsi_size_not_matching(5U, t22, 0);
    goto LAB16;

LAB17:    xsi_set_current_line(262, ng0);
    t11 = (t0 + 6504);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t11);
    goto LAB18;

LAB20:    xsi_size_not_matching(33U, t26, 0);
    goto LAB21;

LAB22:    xsi_size_not_matching(32U, t30, 0);
    goto LAB23;

}


extern void work_a_3873885777_2372341340_init()
{
	static char *pe[] = {(void *)work_a_3873885777_2372341340_p_0,(void *)work_a_3873885777_2372341340_p_1,(void *)work_a_3873885777_2372341340_p_2,(void *)work_a_3873885777_2372341340_p_3,(void *)work_a_3873885777_2372341340_p_4,(void *)work_a_3873885777_2372341340_p_5};
	xsi_register_didat("work_a_3873885777_2372341340", "isim/conts_tb_isim_beh.exe.sim/work/a_3873885777_2372341340.didat");
	xsi_register_executes(pe);
}
