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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *IEEE_P_3620187407;
char *IEEE_P_3499444699;
char *UNISIM_P_0947159679;
char *WORK_P_2516176461;
char *IEEE_P_0774719531;
char *STD_TEXTIO;
char *IEEE_P_2717149903;
char *IEEE_P_1367372525;
char *UNISIM_P_3222816464;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    work_p_2516176461_init();
    unisim_p_0947159679_init();
    ieee_p_0774719531_init();
    work_a_0989759141_2164148148_init();
    work_a_3199023679_2995317124_init();
    work_a_0832606739_2725559894_init();
    work_a_3873885777_2372341340_init();
    work_a_2480762236_3808061962_init();
    work_a_3628672710_2164148148_init();
    work_a_2399776393_3027548060_init();
    work_a_3853510154_1351276808_init();
    work_a_3614051748_2890297444_init();
    std_textio_init();
    ieee_p_2717149903_init();
    ieee_p_1367372525_init();
    unisim_p_3222816464_init();
    unisim_a_0607887405_2381219257_init();
    work_a_1564937543_0521025630_init();
    unisim_a_3375232711_0883528894_init();
    unisim_a_2621651221_0883528894_init();
    unisim_a_3867803253_0883528894_init();
    unisim_a_1846539716_0883528894_init();
    work_a_1632567566_0521025630_init();
    work_a_3105570445_0012532371_init();
    work_a_0985413359_2658101630_init();
    work_a_1334013533_1979407290_init();
    work_a_3335194990_3212880686_init();
    work_a_1757866006_3212880686_init();
    work_a_0945189565_0945189565_init();


    xsi_register_tops("work_a_0945189565_0945189565");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    UNISIM_P_0947159679 = xsi_get_engine_memory("unisim_p_0947159679");
    WORK_P_2516176461 = xsi_get_engine_memory("work_p_2516176461");
    IEEE_P_0774719531 = xsi_get_engine_memory("ieee_p_0774719531");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    IEEE_P_2717149903 = xsi_get_engine_memory("ieee_p_2717149903");
    IEEE_P_1367372525 = xsi_get_engine_memory("ieee_p_1367372525");
    UNISIM_P_3222816464 = xsi_get_engine_memory("unisim_p_3222816464");

    return xsi_run_simulation(argc, argv);

}
