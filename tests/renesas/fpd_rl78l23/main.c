/**
 * @file main.c
 * @brief Main source file for the RL78/L23 application.
 *
 * Tested with rfp-cli for linux x64 from https://www.renesas.com/en/software-tool/renesas-flash-programmer-programming-gui?docpath=%2Fdocument%2Fswe%2Frenesas-flash-programmer-v32400-linuxx64?language=en&r=488871#downloads
 * Build the setup for R7F100LPL, configure the project with this main.c file with the built setup and execute:
 * ./rfp-cli -d RL78 -port /dev/ttyUSB0 -if uart -dtr-inv -s 115200 -reset -a path/to/hex
 */

#ifdef PREINIT_SUPPORTED
#include "preinit.h"
#endif

#include "mcu.h"
#include "delays.h"


int main(void)
{
    /* Do not remove this line — it ensures correct MCU initialization. */
    #ifdef PREINIT_SUPPORTED
    preinit();
    #endif

    /*
     * LED1 = P64
     * LED2 = P65
     *
     * PMx bit:
     *   0 = output
     *   1 = input
     */

    /* Initialize both outputs high before enabling output mode. */
    P6_bit.no4 = 1U;
    P6_bit.no5 = 1U;

    /*
     * Configure normal CMOS output mode.
     * POM = 0 -> normal CMOS output.
     */
    POM6_bit.no4 = 0U;
    POM6_bit.no5 = 0U;

    /* Configure P64 and P65 as outputs. */
    PM6_bit.no4 = 0U;
    PM6_bit.no5 = 0U;

    while (1)
    {
        WDTE = 0xACU;

        /* LED1 ON, LED2 OFF */
        P6_bit.no4 = 1U;
        P6_bit.no5 = 1U;

        Delay_ms(1000);

        WDTE = 0xACU;

        /* LED1 OFF, LED2 ON */
        P6_bit.no4 = 0U;
        P6_bit.no5 = 0U;

        Delay_ms(1000);
    }

    return 0;
}
