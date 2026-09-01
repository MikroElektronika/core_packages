/**
 * @file main.c
 * @brief Main source file for the RL78/G24 application.
 *
 * Tested with rfp-cli for linux x64 from https://www.renesas.com/en/software-tool/renesas-flash-programmer-programming-gui?docpath=%2Fdocument%2Fswe%2Frenesas-flash-programmer-v32400-linuxx64?language=en&r=488871#downloads
 * Build the setup for R7F101GLG, configure the project with this main.c file with the built setup and execute:
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
     * LED1 = P62
     * LED2 = P63
     *
     * PMx bit:
     *   0 = output
     *   1 = input
     */

    /* Initialize both outputs high before enabling output mode. */
    P6_bit.no2 = 1U;
    P6_bit.no3 = 1U;

    /* Configure P62 and P63 as outputs. */
    PM6_bit.no2 = 0U;
    PM6_bit.no3 = 0U;

    while (1)
    {
        WDTE = 0xACU;

        /* LED1 ON, LED2 OFF */
        P6_bit.no2 = 0U;
        P6_bit.no3 = 0U;

        Delay_ms(1000);

        WDTE = 0xACU;

        /* LED1 OFF, LED2 ON */
        P6_bit.no2 = 1U;
        P6_bit.no3 = 1U;

        Delay_ms(1000);
    }

    return 0;
}
