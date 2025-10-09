/**
 * @file main.c
 * @brief Main function for RA6M5-LED application.
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
// MIKROBUS_RST    P303
// MIKROBUS_CS     P205
// MIKROBUS_SCK    P204
// MIKROBUS_CIPO   P202
// MIKROBUS_COPI   P203
// MIKROBUS_PWM    P111
// MIKROBUS_INT    P409
// MIKROBUS_RX     P614
// MIKROBUS_TX     P613
// MIKROBUS_SCL    P512
// MIKROBUS_SDA    P511

// LD1 P006
// LD2 P007
// LD3 P008

// TODO - change cycle delay here as desired.
#define DEFINED_CYCLES (50000)

void pin_toggle(volatile uint16_t *reg, uint16_t mask)
{
    // Change the state of board LEDs
    R_PORT0->PODR_b.PODR6 ^= 1;
    R_PORT0->PODR_b.PODR7 ^= 1;
    R_PORT0->PODR_b.PODR8 ^= 1;

    // Read-modify-write toggle
    *reg ^= mask;
    // for (uint32_t i = 0; i < DEFINED_CYCLES; i++) asm("NOP");
    Delay_ms(1000);
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
    R_PORT3->PDR_b.PDR3 = 1;
    R_PORT3->PODR_b.PODR3 = 0;

    // Set CS pin as output low
    R_PORT2->PDR_b.PDR5 = 1;
    R_PORT2->PODR_b.PODR5 = 0;

    // Set SCK pin as output low
    R_PORT2->PDR_b.PDR4 = 1;
    R_PORT2->PODR_b.PODR4 = 0;

    // Set CIPO pin as output low
    R_PORT2->PDR_b.PDR2 = 1;
    R_PORT2->PODR_b.PODR2 = 0;

    // Set COPI pin as output low
    R_PORT2->PDR_b.PDR3 = 1;
    R_PORT2->PODR_b.PODR3 = 0;

    // Set PWM pin as output low
    R_PORT1->PDR_b.PDR11 = 1;
    R_PORT1->PODR_b.PODR11 = 0;

    // Set INT pin as output low
    R_PORT4->PDR_b.PDR9 = 1;
    R_PORT4->PODR_b.PODR9 = 0;

    // Set RX pin as output low
    R_PORT6->PDR_b.PDR14 = 1;
    R_PORT6->PODR_b.PODR14 = 0;

    // Set TX pin as output low
    R_PORT6->PDR_b.PDR13 = 1;
    R_PORT6->PODR_b.PODR13 = 0;

    // Set SCL pin as output low
    R_PORT5->PDR_b.PDR12 = 1;
    R_PORT5->PODR_b.PODR12 = 0;

    // Set SDA pin as output low
    R_PORT5->PDR_b.PDR11 = 1;
    R_PORT5->PODR_b.PODR11 = 0;

    // Set LD1 pin as output low
    R_PORT0->PDR_b.PDR6 = 1;
    R_PORT0->PODR_b.PODR6 = 0;

    // Set LD2 pin as output high
    R_PORT0->PDR_b.PDR7 = 1;
    R_PORT0->PODR_b.PODR7 = 1;

    // Set LD3 pin as output high
    R_PORT0->PDR_b.PDR8 = 1;
    R_PORT0->PODR_b.PODR8 = 1;

    while (1)
    {
        // Toggle MIKROBUS_AN
        // R_PORT0->PODR_b.PODR0
        pin_toggle((volatile uint16_t*)&R_PORT0->PODR_b, 0x0001);

        // Toggle MIKROBUS_RST
        // R_PORT3->PODR_b.PODR3
        pin_toggle((volatile uint16_t*)&R_PORT3->PODR_b, 0x0008);

        // Toggle MIKROBUS_CS
        // R_PORT2->PODR_b.PODR5
        pin_toggle((volatile uint16_t*)&R_PORT2->PODR_b, 0x0020);

        // Toggle MIKROBUS_SCK
        // R_PORT2->PODR_b.PODR4
        pin_toggle((volatile uint16_t*)&R_PORT2->PODR_b, 0x0010);

        // Toggle MIKROBUS_CIPO
        // R_PORT2->PODR_b.PODR2
        pin_toggle((volatile uint16_t*)&R_PORT2->PODR_b, 0x0004);

        // Toggle MIKROBUS_COPI
        // R_PORT2->PODR_b.PODR3
        pin_toggle((volatile uint16_t*)&R_PORT2->PODR_b, 0x0008);

        // Toggle MIKROBUS_PWM
        // R_PORT1->PODR_b.PODR11
        pin_toggle((volatile uint16_t*)&R_PORT1->PODR_b, 0x0800);

        // Toggle MIKROBUS_INT
        // R_PORT4->PODR_b.PODR9
        pin_toggle((volatile uint16_t*)&R_PORT4->PODR_b, 0x0200);

        // Toggle MIKROBUS_RX
        // R_PORT6->PODR_b.PODR14
        pin_toggle((volatile uint16_t*)&R_PORT6->PODR_b, 0x4000);

        // Toggle MIKROBUS_TX
        // R_PORT6->PODR_b.PODR13
        pin_toggle((volatile uint16_t*)&R_PORT6->PODR_b, 0x2000);

        // Toggle MIKROBUS_SCL
        // R_PORT5->PODR_b.PODR12
        pin_toggle((volatile uint16_t*)&R_PORT5->PODR_b, 0x1000);

        // Toggle MIKROBUS_SDA
        // R_PORT5->PODR_b.PODR11
        pin_toggle((volatile uint16_t*)&R_PORT5->PODR_b, 0x0800);
    }

    return 0;
}