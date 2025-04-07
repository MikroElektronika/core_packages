/**
 * @file main.c
 * @brief Main function for RENESAS_TEST application.
 8 @note J-Flash Lite V8.24 was used for testing.
 */

/**
 * Any initialization code needed for MCU to function properly.
 * Do not remove this line or clock might not be set correctly.
 */
#ifdef PREINIT_SUPPORTED
#include "preinit.h"
#endif

#include "mcu.h"

// MIKROBUS_AN     P000
// MIKROBUS_RST    P407
// MIKROBUS_CS     P103
// MIKROBUS_SCK    P102
// MIKROBUS_CIPO   P100
// MIKROBUS_COPI   P101
// MIKROBUS_PWM    P107
// MIKROBUS_INT    P302
// MIKROBUS_RX     P410
// MIKROBUS_TX     P411
// MIKROBUS_SCL    P205
// MIKROBUS_SDA    P206

// LD1 P409
// LD2 P408

// TODO - change cycle delay here as desired.
#define DEFINED_CYCLES (10000)

void pin_toggle(volatile uint16_t *reg, uint16_t mask)
{
    // Change the state of board LEDs
    R_PORT4->PODR_b.PODR8 ^= 1;
    R_PORT4->PODR_b.PODR9 ^= 1;

    // Read-modify-write toggle
    *reg ^= mask;
    for (uint32_t i = 0; i < DEFINED_CYCLES; i++) asm("NOP");
    *reg ^= mask;
}

int main(void)
{
    /* Do not remove this line or clock might not be set correctly. */
    #ifdef PREINIT_SUPPORTED
    preinit();
    #endif

    // Set AN pin as output low
    R_PORT0->PDR_b.PDR0 = 1;
    R_PORT0->PODR_b.PODR0 = 0;

    // Set RST pin as output low
    R_PORT4->PDR_b.PDR7 = 1;
    R_PORT4->PODR_b.PODR7 = 0;

    // Set CS pin as output low
    R_PORT1->PDR_b.PDR3 = 1;
    R_PORT1->PODR_b.PODR3 = 0;

    // Set SCK pin as output low
    R_PORT1->PDR_b.PDR2 = 1;
    R_PORT1->PODR_b.PODR2 = 0;

    // Set CIPO pin as output low
    R_PORT1->PDR_b.PDR0 = 1;
    R_PORT1->PODR_b.PODR0 = 0;

    // Set COPI pin as output low
    R_PORT1->PDR_b.PDR1 = 1;
    R_PORT1->PODR_b.PODR1 = 0;

    // Set PWM pin as output low
    R_PORT1->PDR_b.PDR7 = 1;
    R_PORT1->PODR_b.PODR7 = 0;

    // Set INT pin as output low
    R_PORT3->PDR_b.PDR2 = 1;
    R_PORT3->PODR_b.PODR2 = 0;

    // Set RX pin as output low
    R_PORT4->PDR_b.PDR10 = 1;
    R_PORT4->PODR_b.PODR10 = 0;

    // Set TX pin as output low
    R_PORT4->PDR_b.PDR11 = 1;
    R_PORT4->PODR_b.PODR11 = 0;

    // Set SCL pin as output low
    R_PORT2->PDR_b.PDR5 = 1;
    R_PORT2->PODR_b.PODR5 = 0;

    // Set SDA pin as output low
    R_PORT2->PDR_b.PDR6 = 1;
    R_PORT2->PODR_b.PODR6 = 0;

    // Set LD1 pin as output low
    R_PORT4->PDR_b.PDR9 = 1;
    R_PORT4->PODR_b.PODR9 = 0;

    // Set LD2 pin as output high
    R_PORT4->PDR_b.PDR8 = 1;
    R_PORT4->PODR_b.PODR8 = 1;

    while (1)
    {
        // Toggle MIKROBUS_AN
        // R_PORT0->PODR_b.PODR0
        pin_toggle((volatile uint16_t*)&R_PORT0->PODR, 0x0001);

        // Toggle MIKROBUS_RST
        // R_PORT4->PODR_b.PODR7
        pin_toggle((volatile uint16_t*)&R_PORT4->PODR_b, 0x0080);

        // Toggle MIKROBUS_CS
        // R_PORT1->PODR_b.PODR3
        pin_toggle((volatile uint16_t*)&R_PORT1->PODR_b, 0x0008);

        // Toggle MIKROBUS_SCK
        // R_PORT1->PODR_b.PODR2
        pin_toggle((volatile uint16_t*)&R_PORT1->PODR_b, 0x0004);

        // Toggle MIKROBUS_CIPO
        // R_PORT1->PODR_b.PODR0
        pin_toggle((volatile uint16_t*)&R_PORT1->PODR_b, 0x0001);

        // Toggle MIKROBUS_COPI
        // R_PORT1->PODR_b.PODR1
        pin_toggle((volatile uint16_t*)&R_PORT1->PODR_b, 0x0002);

        // Toggle MIKROBUS_PWM
        // R_PORT1->PODR_b.PODR7
        pin_toggle((volatile uint16_t*)&R_PORT1->PODR_b, 0x0080);

        // Toggle MIKROBUS_INT
        // R_PORT3->PODR_b.PODR2
        pin_toggle((volatile uint16_t*)&R_PORT3->PODR_b, 0x0004);

        // Toggle MIKROBUS_RX
        // R_PORT4->PODR_b.PODR10
        pin_toggle((volatile uint16_t*)&R_PORT4->PODR_b, 0x0400);

        // Toggle MIKROBUS_TX
        // R_PORT4->PODR_b.PODR11
        pin_toggle((volatile uint16_t*)&R_PORT4->PODR_b, 0x0800);

        // Toggle MIKROBUS_SCL
        // R_PORT2->PODR_b.PODR5
        pin_toggle((volatile uint16_t*)&R_PORT2->PODR_b, 0x0020);

        // Toggle MIKROBUS_SDA
        // R_PORT2->PODR_b.PODR6
        pin_toggle((volatile uint16_t*)&R_PORT2->PODR_b, 0x0040);
    }

    return 0;
}
