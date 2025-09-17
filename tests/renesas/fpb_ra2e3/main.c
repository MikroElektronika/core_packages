/**
 * @file main.c
 * @brief Main function for RENESAS_RA2E3_TEST application.
 8 @note J-Link V8.30 was used for testing.
 */

/**
 * Any initialization code needed for MCU to function properly.
 * Do not remove this line or clock might not be set correctly.
 */
#ifdef PREINIT_SUPPORTED
#include "preinit.h"
#endif

#include "mcu.h"

// MIKROBUS_1_AN     P000
// MIKROBUS_1_RST    P002
// MIKROBUS_1_CS     P103
// MIKROBUS_1_SCK    P102
// MIKROBUS_1_CIPO   P100
// MIKROBUS_1_COPI   P101
// MIKROBUS_1_PWM    P500
// MIKROBUS_1_INT    P409
// MIKROBUS_1_RX     P110
// MIKROBUS_1_TX     P109
// MIKROBUS_1_SCL    P014
// MIKROBUS_1_SDA    P013

// MIKROBUS_2_AN     P001
// MIKROBUS_2_RST    P002
// MIKROBUS_2_CS     P104
// MIKROBUS_2_SCK    P102
// MIKROBUS_2_CIPO   P100
// MIKROBUS_2_COPI   P101
// MIKROBUS_2_PWM    P302
// MIKROBUS_2_INT    P111
// MIKROBUS_2_RX     P110
// MIKROBUS_2_TX     P109
// MIKROBUS_2_SCL    P014
// MIKROBUS_2_SDA    P013

// LED1 P213
// LED2 P914

// TODO - change cycle delay here as desired.
#define DEFINED_CYCLES (50000)

void pin_toggle(volatile uint16_t *reg, uint16_t mask)
{
    R_PORT2->PODR_b.PODR13 ^= 1;
    R_PORT9->PODR_b.PODR14 ^= 1;
    // Read-modify-write toggle
    *reg ^= mask;
    for (uint32_t i = 0; i < DEFINED_CYCLES; i++) asm("NOP");
    // Delay_ms(1000);
    *reg ^= mask;
}

int main(void)
{
    /* Do not remove this line or clock might not be set correctly. */
    #ifdef PREINIT_SUPPORTED
    preinit();
    #endif

    // SystemInit();

    // ----------- MIKROBUS_1 ----------- //
    // Set AN pin as output low
    R_PORT0->PDR_b.PDR0 = 1;
    R_PORT0->PODR_b.PODR0 = 0;

    // Set RST pin as output low
    R_PORT0->PDR_b.PDR2 = 1;
    R_PORT0->PODR_b.PODR2 = 0;

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
    R_PORT5->PDR_b.PDR0 = 1;
    R_PORT5->PODR_b.PODR0 = 0;

    // Set INT pin as output low
    R_PORT4->PDR_b.PDR9 = 1;
    R_PORT4->PODR_b.PODR9 = 0;

    // Set RX pin as output low
    R_PORT1->PDR_b.PDR10 = 1;
    R_PORT1->PODR_b.PODR10 = 0;

    // Set TX pin as output low
    R_PORT1->PDR_b.PDR9 = 1;
    R_PORT1->PODR_b.PODR9 = 0;

    // Set SCL pin as output low
    R_PORT0->PDR_b.PDR14 = 1;
    R_PORT0->PODR_b.PODR14 = 0;

    // Set SDA pin as output low
    R_PORT0->PDR_b.PDR13 = 1;
    R_PORT0->PODR_b.PODR13 = 0;

    // ----------- MIKROBUS_2 ----------- //
    // Set AN pin as output low
    R_PORT0->PDR_b.PDR1 = 1;
    R_PORT0->PODR_b.PODR1 = 0;

    // Set RST pin as output low
    R_PORT0->PDR_b.PDR2 = 1;
    R_PORT0->PODR_b.PODR2 = 0;

    // Set CS pin as output low
    R_PORT1->PDR_b.PDR4 = 1;
    R_PORT1->PODR_b.PODR4 = 0;

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
    R_PORT3->PDR_b.PDR2 = 1;
    R_PORT3->PODR_b.PODR2 = 0;

    // Set INT pin as output low
    R_PORT1->PDR_b.PDR11 = 1;
    R_PORT1->PODR_b.PODR11 = 0;

    // Set RX pin as output low
    R_PORT1->PDR_b.PDR10 = 1;
    R_PORT1->PODR_b.PODR10 = 0;

    // Set TX pin as output low
    R_PORT1->PDR_b.PDR9 = 1;
    R_PORT1->PODR_b.PODR9 = 0;

    // Set SCL pin as output low
    R_PORT0->PDR_b.PDR14 = 1;
    R_PORT0->PODR_b.PODR14 = 0;

    // Set SDA pin as output low
    R_PORT0->PDR_b.PDR13 = 1;
    R_PORT0->PODR_b.PODR13 = 0;

    // Set LED2 pin as output low
    R_PORT2->PDR_b.PDR13 = 1;
    R_PORT2->PODR_b.PODR13 = 0;

    // Set LED3 pin as output low
    R_PORT9->PDR_b.PDR14 = 1;
    R_PORT9->PODR_b.PODR14 = 0;

    while (1)
    {
        // Toggle MIKROBUS_1_AN
        // R_PORT0->PODR_b.PODR0
        pin_toggle((volatile uint16_t*)&R_PORT0->PODR_b, 0x0001);

        // Toggle MIKROBUS_1_RST
        // R_PORT0->PODR_b.PODR2
        pin_toggle((volatile uint16_t*)&R_PORT0->PODR_b, 0x0004);

        // Toggle MIKROBUS_1_CS
        // R_PORT1->PODR_b.PODR3
        pin_toggle((volatile uint16_t*)&R_PORT1->PODR_b, 0x0008);

        // Toggle MIKROBUS_1_SCK
        // R_PORT1->PODR_b.PODR2
        pin_toggle((volatile uint16_t*)&R_PORT1->PODR_b, 0x0004);

        // Toggle MIKROBUS_1_CIPO
        // R_PORT1->PODR_b.PODR0
        pin_toggle((volatile uint16_t*)&R_PORT1->PODR_b, 0x0001);

        // Toggle MIKROBUS_1_COPI
        // R_PORT1->PODR_b.PODR1
        pin_toggle((volatile uint16_t*)&R_PORT1->PODR_b, 0x0002);

        // Toggle MIKROBUS_1_PWM
        // R_PORT5->PODR_b.PODR0
        pin_toggle((volatile uint16_t*)&R_PORT5->PODR_b, 0x0001);

        // Toggle MIKROBUS_1_INT
        // R_PORT4->PODR_b.PODR9
        pin_toggle((volatile uint16_t*)&R_PORT4->PODR_b, 0x0020);

        // Toggle MIKROBUS_1_RX
        // R_PORT1->PODR_b.PODR10
        pin_toggle((volatile uint16_t*)&R_PORT1->PODR_b, 0x0040);

        // Toggle MIKROBUS_1_TX
        // R_PORT1->PODR_b.PODR9
        pin_toggle((volatile uint16_t*)&R_PORT1->PODR_b, 0x0020);

        // Toggle MIKROBUS_1_SCL
        // R_PORT0->PODR_b.PODR14
        pin_toggle((volatile uint16_t*)&R_PORT0->PODR_b, 0x4000);

        // Toggle MIKROBUS_1_SDA
        // R_PORT0->PODR_b.PODR13
        pin_toggle((volatile uint16_t*)&R_PORT0->PODR_b, 0x2000);

        // Toggle MIKROBUS_2_AN
        // R_PORT0->PODR_b.PODR1
        pin_toggle((volatile uint16_t*)&R_PORT0->PODR, 0x0002);

        // Toggle MIKROBUS_2_RST
        // R_PORT0->PODR_b.PODR2
        pin_toggle((volatile uint16_t*)&R_PORT0->PODR_b, 0x0004);

        // Toggle MIKROBUS_2_CS
        // R_PORT1->PODR_b.PODR4
        pin_toggle((volatile uint16_t*)&R_PORT1->PODR_b, 0x0010);

        // Toggle MIKROBUS_2_SCK
        // R_PORT1->PODR_b.PODR2
        pin_toggle((volatile uint16_t*)&R_PORT1->PODR_b, 0x0004);

        // Toggle MIKROBUS_2_CIPO
        // R_PORT1->PODR_b.PODR0
        pin_toggle((volatile uint16_t*)&R_PORT1->PODR_b, 0x0001);

        // Toggle MIKROBUS_2_COPI
        // R_PORT1->PODR_b.PODR1
        pin_toggle((volatile uint16_t*)&R_PORT1->PODR_b, 0x0002);

        // Toggle MIKROBUS_2_PWM
        // R_PORT3->PODR_b.PODR2
        pin_toggle((volatile uint16_t*)&R_PORT3->PODR_b, 0x0004);

        // Toggle MIKROBUS_2_INT
        // R_PORT1->PODR_b.PODR11
        pin_toggle((volatile uint16_t*)&R_PORT1->PODR_b, 0x0800);

        // Toggle MIKROBUS_2_RX
        // R_PORT1->PODR_b.PODR10
        pin_toggle((volatile uint16_t*)&R_PORT1->PODR_b, 0x0400);

        // Toggle MIKROBUS_2_TX
        // R_PORT1->PODR_b.PODR9
        pin_toggle((volatile uint16_t*)&R_PORT1->PODR_b, 0x0200);

        // Toggle MIKROBUS_2_SCL
        // R_PORT0->PODR_b.PODR14
        pin_toggle((volatile uint16_t*)&R_PORT0->PODR_b, 0x4000);

        // Toggle MIKROBUS_2_SDA
        // R_PORT0->PODR_b.PODR13
        pin_toggle((volatile uint16_t*)&R_PORT0->PODR_b, 0x2000);
    }

    return 0;
}