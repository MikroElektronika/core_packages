/**
 * @file main.c
 * @brief Main function for TOSHIBA_TEST application.
 */

/**
 * Any initialization code needed for MCU to function properly.
 * Do not remove this line or clock might not be set correctly.
 */
#ifdef PREINIT_SUPPORTED
#include "preinit.h"
#endif

#include "mcu.h"

// TODO - change cycle delay here as desired.
#define DEFINED_CYCLES (100000)

int main(void)
{
    /* Do not remove this line or clock might not be set correctly. */
    #ifdef PREINIT_SUPPORTED
    preinit();
    #endif

    /**
     * Clock control document id - CG-M4K(2)
     * Enable all LED PORT clocks.
     */
    TSB_CG_FSYSMENA_IPMENA08 = 1; // Enable clock for PORTJ.
    TSB_CG_FSYSMENA_IPMENA09 = 1; // Enable clock for PORTK.
    TSB_CG_FSYSMENA_IPMENA17 = 1; // Enable clock for PORTV.

    /**
     * PORT control document id - PORT-M4K(2)
     * Enable all LEDs on the clicker board.
     */
    TSB_PK_CR_PK1C = 1; // Set PK1 as digital output.
    TSB_PK_CR_PK2C = 1; // Set PK2 as digital output.
    TSB_PK_CR_PK3C = 1; // Set PK3 as digital output.
    TSB_PJ_CR_PJ5C = 1; // Set PJ5 as digital output.
    TSB_PV_CR_PV0C = 1; // Set PV0 as digital output.
    TSB_PV_CR_PV1C = 1; // Set PV1 as digital output.

    /* Infinite loop. */
    while (1)
    {
        /**
         * PORT control document id - PORT-M4K(2)
         * Toggle all LEDs on the clicker board.
         */
        TSB_PK->DATA = ~TSB_PK->DATA; // Toggle data on PORTK.
        TSB_PJ->DATA = ~TSB_PJ->DATA; // Toggle data on PORTJ.
        TSB_PV->DATA = ~TSB_PV->DATA; // Toggle data on PORTV.

        // Custom delay based on symple cycles.
        for (uint32_t i = 0; i < DEFINED_CYCLES; i++) asm("NOP");
    }

    return 0;
}
