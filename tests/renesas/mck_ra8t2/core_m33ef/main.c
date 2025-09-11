/**
 * @file core_m33ef/main.c
 * @brief Main function for the secondary core of the dual-core application.
 * @details This application was created with Development NECTO version and MCK-RA8T2 board.
 * This application toggles LED2 using Cortex-M33 core on the MCK-RA8T2 board.
 * 
 * In order to run this application follow these steps:
 * 1) Open Development NECTOStudio version
 * 2) Build the bare-metal setup for R7KA8T2LFECAC MCU
 * 3) Create the blank dual-core project and configure it with R7KA8T2LFECAC bare-metal setup
 * 4) Build the project and locate the merged.hex file in the build folder
 * 6) Run JLinkExe with the following commands after you enter JLink cli:
 *   - JLinkExe
 *   - connect
 *   - R7KA8T2AF
 *   - -- Enter --
 *   - -- Enter --
 *   - -- Enter --
 *   - loadfile <path-to-merged.hex> 
 * 7) Enjoy!
 */

/**
 * Any initialization code needed for MCU to function properly.
 * Do not remove this line or clock might not be set correctly.
 */

#ifdef PREINIT_SUPPORTED
#include "preinit.h"
#endif

#include "mcu.h"

// LED2 mask - Pin 15.
#define LED2_PIN_MASK  (0x8000)

// TODO - change cycle delay here as desired.
#define DEFINED_CYCLES (50000)

void pin_toggle( volatile uint16_t *reg, uint16_t mask )
{
    // Read-modify-write LED2 pin value.
    *reg ^= mask;

    // Wait for defined delay.
    for ( uint32_t i = 0; i < DEFINED_CYCLES; i++ ) asm( "NOP" );
}

int main(void)
{
    /* Do not remove this line or clock might not be set correctly. */
    #ifdef PREINIT_SUPPORTED
    preinit();
    #endif

    // Set LED2 pin as output.
    R_PORT10->PDR_b.PDR15 = 1;
    // Set LED2 pin value to low.
    R_PORT10->PODR_b.PODR15 = 0;

    while (1)
    {
        // Toggle LED2.
        pin_toggle( R_PORT10->PODR, LED2_PIN_MASK );
    }

    return 0;
}
