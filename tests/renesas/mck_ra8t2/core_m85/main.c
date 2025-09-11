/**
 * @file core_m85/main.c
 * @brief Main function for the primary core of the dual-core application.
 * @details This application was created with Development NECTO version and MCK-RA8T2 board.
 * This application toggles LED1 using Cortex-M85 core on the MCK-RA8T2 board.
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

// LED1 mask - Pin 14.
#define LED1_PIN_MASK  (0x4000)

// TODO - change cycle delay here as desired.
#define DEFINED_CYCLES (100000)

// Macros for enabling secondary core.
#define BSP_PARTITION_FLASH_CPU1_S_START    (0x02080000)
#define BSP_CPU1ACTCSR_KEY_CODE             (0xA5)

void enable_secondary_core()
{
    // Setup secondary CPU vector table.
    R_CPU_CTRL->CPU1INITVTOR = (uint32_t) BSP_PARTITION_FLASH_CPU1_S_START;

    /* When debugging multicore projects, CPU1 may already be activated by the debugger with CPU1WAITCR set to 1.
     * This allows the debugger to connect to CPU1 prior to it being started by CPU0.
     * If this is the case, then the secondary core must be started by clearing CPU1WAITCR. */
    R_CPU_CTRL->CPU1WAITCR = 0;

    // Activate secondary CPU by setting key code and activation request in CPU1ACTCSR.
    R_CPU_CTRL->CPU1ACTCSR = (BSP_CPU1ACTCSR_KEY_CODE << R_CPU_CTRL_CPU1ACTCSR_KEY_Pos) |
                             R_CPU_CTRL_CPU1ACTCSR_ACTREQ_Msk;
}

void pin_toggle(volatile uint16_t *reg, uint16_t mask)
{
    // Read-modify-write LED1 pin value.
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

    enable_secondary_core();

    // Set LED1 pin as output.
    R_PORT6->PDR_b.PDR14 = 1;
    // Set LED1 pin value to low.
    R_PORT6->PODR_b.PODR14 = 0;

    while (1)
    {
        // Toggle LED1.
        pin_toggle( R_PORT6->PODR, LED1_PIN_MASK );
    }

    return 0;
}
