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

#include "delays.h"
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
     * Clock control document id - CG-M4L(1)
     * Enable all LED PORT clocks.
     */
    TSB_CG_FSYSENA_IPENA00 = 1; // Enable clock for PORTA.
    TSB_CG_FSYSENA_IPENA02 = 1; // Enable clock for PORTC.
    TSB_CG_FSYSENA_IPENA03 = 1; // Enable clock for PORTD.
    TSB_CG_FSYSENA_IPENA04 = 1; // Enable clock for PORTE.
    TSB_CG_FSYSENA_IPENA05 = 1; // Enable clock for PORTF.
    TSB_CG_FSYSENA_IPENA06 = 1; // Enable clock for PORTG.
    TSB_CG_FSYSENA_IPENA08 = 1; // Enable clock for PORTJ.

    /**
     * PORT control document id - PORT-M4L(1)
     * Enable all LEDs on the clicker board.
     */
    TSB_PF_CR_PF0C = 1; // Set PF0 as digital output.
    TSB_PE_CR_PE6C = 1; // Set PE6 as digital output.
    TSB_PD_CR_PD3C = 1; // Set PD3 as digital output.
    TSB_PG_CR_PG2C = 1; // Set PG2 as digital output.
    TSB_PG_CR_PG1C = 1; // Set PG1 as digital output.
    TSB_PG_CR_PG0C = 1; // Set PG0 as digital output.
    TSB_PJ_CR_PJ0C = 1; // Set PJ0 as digital output.
    TSB_PF_CR_PF4C = 1; // Set PF4 as digital output.
    TSB_PA_CR_PA7C = 1; // Set PA7 as digital output.
    TSB_PJ_CR_PJ2C = 1; // Set PJ2 as digital output.
    TSB_PA_CR_PA5C = 1; // Set PA5 as digital output.
    TSB_PA_CR_PA6C = 1; // Set PA6 as digital output.

    TSB_PF_CR_PF1C = 1; // Set PF1 as digital output.
    TSB_PE_CR_PE7C = 1; // Set PE7 as digital output.
    TSB_PC_CR_PC5C = 1; // Set PC5 as digital output.
    TSB_PG_CR_PG2C = 1; // Set PG2 as digital output.
    TSB_PG_CR_PG1C = 1; // Set PG1 as digital output.
    TSB_PG_CR_PG0C = 1; // Set PG0 as digital output.
    TSB_PJ_CR_PJ1C = 1; // Set PJ1 as digital output.
    TSB_PF_CR_PF5C = 1; // Set PF5 as digital output.
    TSB_PD_CR_PD4C = 1; // Set PD4 as digital output.
    TSB_PD_CR_PD5C = 1; // Set PD5 as digital output.
    TSB_PA_CR_PA5C = 1; // Set PA5 as digital output.
    TSB_PA_CR_PA6C = 1; // Set PA6 as digital output.

    /* Infinite loop. */
    while (1)
    {
        /**
         * PORT control document id - PORT-M4L(1)
         * Toggle all LEDs on the clicker board.
         */
        TSB_PA->DATA = ~TSB_PA->DATA; // Toggle data on PORTA.
        TSB_PC->DATA = ~TSB_PC->DATA; // Toggle data on PORTC.
        TSB_PD->DATA = ~TSB_PD->DATA; // Toggle data on PORTD.
        TSB_PE->DATA = ~TSB_PE->DATA; // Toggle data on PORTE.
        TSB_PF->DATA = ~TSB_PF->DATA; // Toggle data on PORTF.
        TSB_PG->DATA = ~TSB_PG->DATA; // Toggle data on PORTG.
        TSB_PJ->DATA = ~TSB_PJ->DATA; // Toggle data on PORTJ.

        // Custom delay based on symple cycles.
        Delay_ms(1000);
    }

    return 0;
}
