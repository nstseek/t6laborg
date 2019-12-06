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



static void work_a_3614051748_2890297444_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(783, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = (0 + 6U);
    t1 = (t2 + t3);
    t4 = *((unsigned char *)t1);
    t5 = (t0 + 5200);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t4;
    xsi_driver_first_trans_fast_port(t5);

LAB2:    t10 = (t0 + 5088);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3614051748_2890297444_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(784, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = (0 + 7U);
    t1 = (t2 + t3);
    t4 = *((unsigned char *)t1);
    t5 = (t0 + 5264);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t4;
    xsi_driver_first_trans_fast_port(t5);

LAB2:    t10 = (t0 + 5104);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3614051748_2890297444_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(785, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = (0 + 8U);
    t1 = (t2 + t3);
    t4 = *((unsigned char *)t1);
    t5 = (t0 + 5328);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t4;
    xsi_driver_first_trans_fast_port(t5);

LAB2:    t10 = (t0 + 5120);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3614051748_2890297444_init()
{
	static char *pe[] = {(void *)work_a_3614051748_2890297444_p_0,(void *)work_a_3614051748_2890297444_p_1,(void *)work_a_3614051748_2890297444_p_2};
	xsi_register_didat("work_a_3614051748_2890297444", "isim/CPU_tb_isim_beh.exe.sim/work/a_3614051748_2890297444.didat");
	xsi_register_executes(pe);
}
