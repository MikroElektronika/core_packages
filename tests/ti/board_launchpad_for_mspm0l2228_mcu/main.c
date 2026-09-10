/**
 * @file main.c
 * @brief Main source file for the MSPM0 application.
 *
 * Tested with XDS110 on-board debugger for MSPM0L2 launchpad using Embedded MikroBUS VSCode extension.
 */

#ifdef PREINIT_SUPPORTED
#include "preinit.h"
#endif


#include "mcu.h"
#include "delays.h"

int main(void)
{
    const uint32_t led_mask = (1UL << 0);

    GPIOA->GPRCM.RSTCTL =
        GPIO_RSTCTL_KEY_UNLOCK_W |
        GPIO_RSTCTL_RESETSTKYCLR_CLR |
        GPIO_RSTCTL_RESETASSERT_ASSERT;

    GPIOA->GPRCM.PWREN =
        GPIO_PWREN_KEY_UNLOCK_W |
        GPIO_PWREN_ENABLE_ENABLE;

    for (volatile uint32_t i = 0; i < 16; ++i) {
        __NOP();
    }

    IOMUX->SECCFG.PINCM[IOMUX_PINCM1] =
        IOMUX_PINCM_PC_CONNECTED |
        IOMUX_PINCM1_PF_GPIOA_DIO00;

    GPIOA->DOUTCLR31_0 = led_mask;
    GPIOA->DOESET31_0 = led_mask;

    while (1) {
        GPIOA->DOUTTGL31_0 = led_mask;
        Delay_ms(1000);
    }
}