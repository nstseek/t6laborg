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

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_2480762236_3808061962_p_0(char *t0)
{
    char t5[16];
    char t11[16];
    char t26[16];
    char t33[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t34;
    char *t35;
    int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned char t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;

LAB0:    xsi_set_current_line(312, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB7:    t27 = (t0 + 2632U);
    t28 = *((char **)t27);
    t29 = (32 * 2);
    t30 = (64 - t29);
    t31 = (t30 * 1U);
    t32 = (0 + t31);
    t27 = (t28 + t32);
    t34 = (t33 + 0U);
    t35 = (t34 + 0U);
    *((int *)t35) = 64;
    t35 = (t34 + 4U);
    *((int *)t35) = 32;
    t35 = (t34 + 8U);
    *((int *)t35) = -1;
    t36 = (32 - 64);
    t37 = (t36 * -1);
    t37 = (t37 + 1);
    t35 = (t34 + 12U);
    *((unsigned int *)t35) = t37;
    t35 = (t0 + 2792U);
    t38 = *((char **)t35);
    t35 = (t0 + 9948U);
    t39 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t26, t27, t33, t38, t35);
    t40 = (t26 + 12U);
    t37 = *((unsigned int *)t40);
    t41 = (1U * t37);
    t42 = (33U != t41);
    if (t42 == 1)
        goto LAB9;

LAB10:    t43 = (t0 + 6376);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memcpy(t47, t39, 33U);
    xsi_driver_first_trans_fast(t43);

LAB2:    t48 = (t0 + 6200);
    *((int *)t48) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 2632U);
    t6 = *((char **)t1);
    t7 = (32 * 2);
    t8 = (64 - t7);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t1 = (t6 + t10);
    t12 = (t11 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 64;
    t13 = (t12 + 4U);
    *((int *)t13) = 32;
    t13 = (t12 + 8U);
    *((int *)t13) = -1;
    t14 = (32 - 64);
    t15 = (t14 * -1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t13 = (t0 + 2792U);
    t16 = *((char **)t13);
    t13 = (t0 + 9948U);
    t17 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t5, t1, t11, t16, t13);
    t18 = (t5 + 12U);
    t15 = *((unsigned int *)t18);
    t19 = (1U * t15);
    t20 = (33U != t19);
    if (t20 == 1)
        goto LAB5;

LAB6:    t21 = (t0 + 6376);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t17, 33U);
    xsi_driver_first_trans_fast(t21);
    goto LAB2;

LAB5:    xsi_size_not_matching(33U, t19, 0);
    goto LAB6;

LAB8:    goto LAB2;

LAB9:    xsi_size_not_matching(33U, t41, 0);
    goto LAB10;

}

static void work_a_2480762236_3808061962_p_1(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(315, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = (32 - 1);
    t4 = (64 - t3);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = (t0 + 6440);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 32U);
    xsi_driver_first_trans_fast_port(t7);

LAB2:    t12 = (t0 + 6216);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2480762236_3808061962_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(316, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = (32 * 2);
    t4 = (t3 - 1);
    t5 = (64 - t4);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t8 = (t0 + 6504);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 6232);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2480762236_3808061962_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(318, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)5);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 6568);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t9);

LAB2:    t14 = (t0 + 6248);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 6568);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_2480762236_3808061962_p_4(char *t0)
{
    char t17[16];
    char t23[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t18;
    int t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    int t24;
    unsigned int t25;
    char *t26;

LAB0:    xsi_set_current_line(323, ng0);
    t2 = (t0 + 1152U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 6264);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(325, ng0);
    t4 = (t0 + 2312U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)0);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)1);
    if (t3 != 0)
        goto LAB13;

LAB14:    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)2);
    if (t3 != 0)
        goto LAB17;

LAB18:    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB19;

LAB20:    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)4);
    if (t3 != 0)
        goto LAB21;

LAB22:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(326, ng0);
    t4 = xsi_get_transient_memory(33U);
    memset(t4, 0, 33U);
    t11 = t4;
    memset(t11, (unsigned char)2, 33U);
    t12 = (t0 + 6632);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 33U);
    xsi_driver_first_trans_delta(t12, 0U, 33U, 0LL);
    xsi_set_current_line(327, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 6632);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 32U);
    xsi_driver_first_trans_delta(t2, 33U, 32U, 0LL);
    xsi_set_current_line(328, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t5 = ((IEEE_P_2592010699) + 4024);
    t8 = (t0 + 9884U);
    t2 = xsi_base_array_concat(t2, t17, t5, (char)99, (unsigned char)2, (char)97, t4, t8, (char)101);
    t18 = (1U + 32U);
    t1 = (33U != t18);
    if (t1 == 1)
        goto LAB11;

LAB12:    t11 = (t0 + 6696);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t2, 33U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(329, ng0);
    t2 = (t0 + 6760);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 0;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_size_not_matching(33U, t18, 0);
    goto LAB12;

LAB13:    xsi_set_current_line(332, ng0);
    t2 = (t0 + 2632U);
    t5 = *((char **)t2);
    t19 = (32 * 2);
    t20 = (t19 - 1);
    t18 = (64 - t20);
    t21 = (t18 * 1U);
    t22 = (0 + t21);
    t2 = (t5 + t22);
    t11 = ((IEEE_P_2592010699) + 4024);
    t12 = (t23 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 63;
    t13 = (t12 + 4U);
    *((int *)t13) = 0;
    t13 = (t12 + 8U);
    *((int *)t13) = -1;
    t24 = (0 - 63);
    t25 = (t24 * -1);
    t25 = (t25 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t25;
    t8 = xsi_base_array_concat(t8, t17, t11, (char)97, t2, t23, (char)99, (unsigned char)2, (char)101);
    t25 = (64U + 1U);
    t6 = (65U != t25);
    if (t6 == 1)
        goto LAB15;

LAB16:    t13 = (t0 + 6632);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t26 = *((char **)t16);
    memcpy(t26, t8, 65U);
    xsi_driver_first_trans_delta(t13, 0U, 65U, 0LL);
    goto LAB9;

LAB15:    xsi_size_not_matching(65U, t25, 0);
    goto LAB16;

LAB17:    xsi_set_current_line(335, ng0);
    t2 = (t0 + 2952U);
    t5 = *((char **)t2);
    t2 = (t0 + 6632);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 33U);
    xsi_driver_first_trans_delta(t2, 0U, 33U, 0LL);
    goto LAB9;

LAB19:    xsi_set_current_line(338, ng0);
    t2 = (t0 + 2632U);
    t5 = *((char **)t2);
    t19 = (32 * 2);
    t20 = (t19 - 64);
    t18 = (t20 * -1);
    t21 = (1U * t18);
    t22 = (0 + t21);
    t2 = (t5 + t22);
    t6 = *((unsigned char *)t2);
    t7 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t6);
    t8 = (t0 + 6632);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t7;
    xsi_driver_first_trans_delta(t8, 64U, 1, 0LL);
    goto LAB9;

LAB21:    xsi_set_current_line(341, ng0);
    t2 = (t0 + 3112U);
    t5 = *((char **)t2);
    t19 = *((int *)t5);
    t20 = (t19 + 1);
    t2 = (t0 + 6760);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((int *)t13) = t20;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(342, ng0);
    t2 = (t0 + 2632U);
    t4 = *((char **)t2);
    t19 = (32 * 2);
    t20 = (t19 - 64);
    t18 = (t20 * -1);
    t21 = (1U * t18);
    t22 = (0 + t21);
    t2 = (t4 + t22);
    t1 = *((unsigned char *)t2);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB23;

LAB25:
LAB24:    goto LAB9;

LAB23:    xsi_set_current_line(343, ng0);
    t5 = (t0 + 2952U);
    t8 = *((char **)t5);
    t5 = (t0 + 6632);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t8, 33U);
    xsi_driver_first_trans_delta(t5, 0U, 33U, 0LL);
    goto LAB24;

}

static void work_a_2480762236_3808061962_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(355, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1152U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 6280);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(356, ng0);
    t1 = (t0 + 6824);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(358, ng0);
    t2 = (t0 + 2472U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t2 = (t0 + 6824);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t11;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB7:    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

}

static void work_a_2480762236_3808061962_p_6(char *t0)
{
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
    int t12;
    int t13;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7, &&LAB8};

LAB0:    xsi_set_current_line(364, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 6296);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(365, ng0);
    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB9;

LAB11:    xsi_set_current_line(365, ng0);
    t1 = (t0 + 6888);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB10:    goto LAB2;

LAB4:    xsi_set_current_line(367, ng0);
    t1 = (t0 + 6888);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(369, ng0);
    t1 = (t0 + 6888);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(371, ng0);
    t1 = (t0 + 6888);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(373, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t13 = (32 - 1);
    t3 = (t12 == t13);
    if (t3 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(373, ng0);
    t1 = (t0 + 6888);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB13:    goto LAB2;

LAB8:    xsi_set_current_line(375, ng0);
    t1 = (t0 + 6888);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB9:    xsi_set_current_line(365, ng0);
    t4 = (t0 + 6888);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t4);
    goto LAB10;

LAB12:    xsi_set_current_line(373, ng0);
    t1 = (t0 + 6888);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    goto LAB13;

}


extern void work_a_2480762236_3808061962_init()
{
	static char *pe[] = {(void *)work_a_2480762236_3808061962_p_0,(void *)work_a_2480762236_3808061962_p_1,(void *)work_a_2480762236_3808061962_p_2,(void *)work_a_2480762236_3808061962_p_3,(void *)work_a_2480762236_3808061962_p_4,(void *)work_a_2480762236_3808061962_p_5,(void *)work_a_2480762236_3808061962_p_6};
	xsi_register_didat("work_a_2480762236_3808061962", "isim/conts_tb_isim_beh.exe.sim/work/a_2480762236_3808061962.didat");
	xsi_register_executes(pe);
}
