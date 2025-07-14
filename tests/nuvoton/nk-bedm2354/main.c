/**
 * @file main.c
 * @brief Main function for testing Cortex-M23 core on NK-M2354 Nuvoton Board.
 * @details This program configures pin PC13 (pin 17) as Clock Output to verify that clock is set to 12 MHz
 *          and blinks on-board LEDs (PD2 and PD3) every 500ms.
 */

/**
 * Any initialization code needed for MCU to function properly.
 * Do not remove this line or clock might not be set correctly.
 */
#ifdef PREINIT_SUPPORTED
#include "preinit.h"
#endif

#include "mcu.h"
#include "delays.h"

int main(void)
{
    /* Do not remove this line or clock might not be set correctly. */
    #ifdef PREINIT_SUPPORTED
    preinit();
    #endif

    /* Unlock protected registers */
    SYS_UnlockReg();

    /* Enable internal HIRC (12 MHz) */
    CLK_EnableXtalRC(CLK_PWRCTL_HIRCEN_Msk);

    /* Wait for HIRC clock ready */
    CLK_WaitClockReady(CLK_STATUS_HIRCSTB_Msk);

    /* Set HCLK source to HIRC and divider to 1 */
    CLK_SetHCLK(CLK_CLKSEL0_HCLKSEL_HIRC, CLK_CLKDIV0_HCLK(1));

    /* Update System Core Clock variables */
    SystemCoreClockUpdate();

    /* Set PC13 to CLKO function (for clock frequency verification) */
    SYS->GPC_MFPH = (SYS->GPC_MFPL & ~SYS_GPC_MFPH_PC13MFP_Msk) | SYS_GPC_MFPH_PC13MFP_CLKO;

    /* Select CLKO clock source as HCLK (should be 12 MHz) */
    CLK_EnableCKO(0x3 << CLK_CLKSEL1_CLKOSEL_Pos, 0, 1); // 0 = divide by 1

    /* Enable PORT D Clock */
    CLK_EnableModuleClock(GPD_MODULE);

    /* Set PD.2 (LED1) as GPIO output */
    SYS->GPD_MFPL = (SYS->GPD_MFPL & ~SYS_GPD_MFPL_PD2MFP_Msk); // Set as GPIO
    PD->MODE = (PD->MODE & ~(0x3UL << (2 * 2))) | (0x1UL << (2 * 2));

    /* Set PD.3 (LED2) as GPIO output */
    SYS->GPD_MFPL = (SYS->GPD_MFPL & ~SYS_GPD_MFPL_PD3MFP_Msk); // Set as GPIO
    PD->MODE = (PD->MODE & ~(0x3UL << (3 * 2))) | (0x1UL << (3 * 2));

    /* Lock protected registers */
    SYS_LockReg();

    /* Replace with your application code */
    while (1)
    {
        /* Set PD.2 high */
        PD->DOUT |= (1 << 2);
        /* Set PD.3 low */
        PD->DOUT &= ~(1 << 3);
        Delay_ms(500);

        /* Set PD.2 low */
        PD->DOUT &= ~(1 << 2);
        /* Set PD.3 high */
        PD->DOUT |= (1 << 3);
        Delay_ms(500);
    }

    return 0;
}
