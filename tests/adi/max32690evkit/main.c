/**
 * @file main.c
 * @brief Main source file for the MAX32690_BLINK application.
 *
 * This is a basic project template providing a minimal structure
 * for initializing the MCU and writing embedded application logic.
 */

#ifdef PREINIT_SUPPORTED
#include "preinit.h"
#endif

#include "delays.h"
#include "mcu.h"

#define LED_PIN_MASK        (1UL << 14)

static void gpio_p014_init(void)
{
    /*
     * Enable GPIO0 peripheral clock.
     * PCLKDIS bit = 1 means disabled, so clear it.
     */
    MXC_GCR->pclkdis0 &= ~MXC_F_GCR_PCLKDIS0_GPIO0;

    /*
     * Configure P0.14 as normal GPIO.
     * GPIO function on MAX GPIO is selected with EN0 = 1, EN1 = 0, EN2 = 0.
     */
    MXC_GPIO0->en0_set = LED_PIN_MASK;
    MXC_GPIO0->en1_clr = LED_PIN_MASK;
    MXC_GPIO0->en2_clr = LED_PIN_MASK;

    /* Disable input and interrupts for this pin. */
    MXC_GPIO0->inen      &= ~LED_PIN_MASK;
    MXC_GPIO0->inten_clr  = LED_PIN_MASK;
    MXC_GPIO0->wken_clr   = LED_PIN_MASK;

    /* Enable output driver. */
    MXC_GPIO0->outen_set = LED_PIN_MASK;

    /* Start low. */
    MXC_GPIO0->out_clr = LED_PIN_MASK;
}

int main(void)
{
    /* Do not remove this line — it ensures correct MCU initialization. */
    #ifdef PREINIT_SUPPORTED
    preinit();
    #endif

    gpio_p014_init();

    while (1) {
        if (MXC_GPIO0->out & LED_PIN_MASK) {
            MXC_GPIO0->out_clr = LED_PIN_MASK;
        } else {
            MXC_GPIO0->out_set = LED_PIN_MASK;
        }

        Delay_ms(1000);
    }

    return 0;
}
