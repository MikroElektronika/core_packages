/**
 * @file main.c
 * @brief Main source file for the RX26T application.
 *
 * Tested with rfp-cli for linux x64 from https://www.renesas.com/en/software-tool/renesas-flash-programmer-programming-gui?docpath=%2Fdocument%2Fswe%2Frenesas-flash-programmer-v32400-linuxx64?language=en&r=488871#downloads
 * Build the setup for R5F526TFCDFP, configure the project with this main.c file with the built setup and execute:
 * /rfp-cli -d RX200 -t e2l -if fine -run -a /{PATH_TO_HEX}/{HEX}.hex
 */

#ifdef PREINIT_SUPPORTED
#include "preinit.h"
#endif


#include "mcu.h"
#include "delays.h"

/*
 * Uncalibrated software delays for the core pack's default 120 MHz ICLK.
 * Adjust these two values if you want a faster or slower sequence.
 */
#define LED_ON_DELAY_COUNT   ( 8000000UL )
#define LED_OFF_DELAY_COUNT  ( 1000000UL )

/* The four user LEDs on MCB-RX26T Type A are active-low. */
#define LED_ON_LEVEL          ( 0U )
#define LED_OFF_LEVEL         ( 1U )

static void software_delay( volatile unsigned long count )
{
    Delay_ms(1000);
}

static void gpio_init( void )
{
    /* Disable peripheral mode before changing the pin-function registers. */
    PORT2.PMR.BIT.B1 = 0U; /* P21 */
    PORT2.PMR.BIT.B0 = 0U; /* P20 */
    PORT6.PMR.BIT.B5 = 0U; /* P65 */
    PORT6.PMR.BIT.B4 = 0U; /* P64 */

    /* Unlock the MPC pin-function registers. */
    MPC.PWPR.BIT.B0WI = 0U;
    MPC.PWPR.BIT.PFSWE = 1U;

    /* Select GPIO and disable the IRQ/analog functions on all four pins. */
    MPC.P21PFS.BYTE = 0U;
    MPC.P20PFS.BYTE = 0U;
    MPC.P65PFS.BYTE = 0U;
    MPC.P64PFS.BYTE = 0U;

    /* Lock the MPC pin-function registers again. */
    MPC.PWPR.BIT.PFSWE = 0U;
    MPC.PWPR.BIT.B0WI = 1U;

    /* Load the inactive level before enabling the output drivers. */
    PORT2.PODR.BIT.B1 = LED_OFF_LEVEL;
    PORT2.PODR.BIT.B0 = LED_OFF_LEVEL;
    PORT6.PODR.BIT.B5 = LED_OFF_LEVEL;
    PORT6.PODR.BIT.B4 = LED_OFF_LEVEL;

    /* Configure P21, P20, P65 and P64 as outputs. */
    PORT2.PDR.BIT.B1 = 1U;
    PORT2.PDR.BIT.B0 = 1U;
    PORT6.PDR.BIT.B5 = 1U;
    PORT6.PDR.BIT.B4 = 1U;
}

static void blink_p21( void )
{
    PORT2.PODR.BIT.B1 = LED_ON_LEVEL;
    software_delay( LED_ON_DELAY_COUNT );
    PORT2.PODR.BIT.B1 = LED_OFF_LEVEL;
}

static void blink_p20( void )
{
    PORT2.PODR.BIT.B0 = LED_ON_LEVEL;
    software_delay( LED_ON_DELAY_COUNT );
    PORT2.PODR.BIT.B0 = LED_OFF_LEVEL;
}

static void blink_p65( void )
{
    PORT6.PODR.BIT.B5 = LED_ON_LEVEL;
    software_delay( LED_ON_DELAY_COUNT );
    PORT6.PODR.BIT.B5 = LED_OFF_LEVEL;
}

static void blink_p64( void )
{
    PORT6.PODR.BIT.B4 = LED_ON_LEVEL;
    software_delay( LED_ON_DELAY_COUNT );
    PORT6.PODR.BIT.B4 = LED_OFF_LEVEL;
}

int main( void )
{
    gpio_init( );

    for ( ;; )
    {
        blink_p21( );
        blink_p20( );
        blink_p65( );
        blink_p64( );
    }
}