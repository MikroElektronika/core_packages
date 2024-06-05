#include "common.h"
#include "core_header.h"
#include "delays.h"
#include "mcu.h"

#define SYSCTL_RCC_IOSCDIS   (0x00000002UL)

#ifndef SYSCTL_RCC2_USBPWRDN
#define SYSCTL_RCC2_USBPWRDN (0x00004000UL)
#endif

void systemEnableFPU()
{
    asm(
        "MOVW R0, #0xED88 \n\t \
         MOVT R0, #0xE000 \n\t \
         LDR R1, [R0] \n\t \
         ORR R1, R1, #0xF00000 \n\t \
         STR R1, [R0]" 
    );

    asm(
        "nop \n\t \
         nop \n\t \
         nop \n\t \
         nop" 
    );

    asm( "VMRS R0, FPSCR" );
    asm( "VMSR FPSCR, R0" );
}

/**
 * @brief Resets the device.
 * @details This function will perform a software reset of the entire device.
 *          The processor and all peripherals are reset and all device registers
 *          will return to their default values (with the exception of the reset
 *          cause register, which will maintain its current value but have the
 *          software reset bit set as well).
 * @return None.
 */
void SystemReset( void )
{
    // Perform a software reset request. This will cause the device to reset,
    // no further code is executed.
    NVIC_APINT_R |= NVIC_APINT_VECTKEY | NVIC_APINT_SYSRESETREQ;
    // The device should have reset, so this should never be reached. Just in
    // case, loop forever.
    while ( 1 ) {
    }
}

static uint32_t       usb_power_down_value = 1;
static const uint32_t mask_xtal            = 0xFUL;

static void systemInitRcc( uint8_t xtal, uint8_t sysdiv )
{
    static const uint32_t mask_plldiv  = 0x1FUL;
    static const uint32_t mask_osc_src = 0x3UL;

    SYSCTL_MISC_R |= SYSCTL_MISC_PLLLMIS;

    SYSCTL_RCC_R |= SYSCTL_RCC_BYPASS;
    SYSCTL_RCC_R &= ( uint32_t )~SYSCTL_RCC_USESYSDIV;

    SYSCTL_RCC_R &= ~( mask_plldiv << 6 );
    SYSCTL_RCC_R |= ( xtal & mask_plldiv ) << 6;

    SYSCTL_RCC_R &= ( uint32_t )~SYSCTL_RCC_PWRDN;

    SYSCTL_RCC_R &= ~( mask_xtal << 23 );
    SYSCTL_RCC_R |= ( sysdiv & mask_xtal ) << 23;

    SYSCTL_RCC_R |= SYSCTL_RCC_USESYSDIV;

    while ( !( SYSCTL_RIS_R & SYSCTL_RIS_PLLLRIS ) )
        ;
    SYSCTL_MISC_R |= SYSCTL_MISC_PLLLMIS;

    SYSCTL_RCC_R &= ( uint32_t )~SYSCTL_RCC_BYPASS;

    SYSCTL_RCC2_R &= ( uint32_t )~SYSCTL_RCC2_USERCC2;
    SYSCTL_RCC2_R &= ~( mask_osc_src << 4 );
    if ( !usb_power_down_value )
        SYSCTL_RCC2_R &= ( uint32_t )~SYSCTL_RCC2_USBPWRDN;
}

static void systemInitRcc2( uint8_t xtal, uint8_t sysdiv )
{
    static const uint32_t mask_plldiv  = 0xFUL;
    static const uint32_t mask_osc_src = 0x7UL;

    SYSCTL_MISC_R |= SYSCTL_MISC_PLLLMIS;
    SYSCTL_RCC_R &= ( uint32_t )~SYSCTL_RCC_USESYSDIV;

    SYSCTL_RCC_R &= ~( mask_plldiv << 6 );
    SYSCTL_RCC_R |= ( xtal & mask_plldiv ) << 6;
    SYSCTL_RCC_R |= SYSCTL_RCC_USESYSDIV;

    SYSCTL_RCC2_R |= SYSCTL_RCC_BYPASS;
    SYSCTL_RCC2_R |= SYSCTL_RCC2_USERCC2;

    SYSCTL_RCC2_R &= ~( mask_osc_src << 7 );

    SYSCTL_RCC2_R &= ( uint32_t )~SYSCTL_RCC_PWRDN;

    SYSCTL_RCC2_R &= ~( mask_xtal << 23 );
    SYSCTL_RCC2_R |= ( sysdiv & mask_xtal ) << 23;

    while ( !( SYSCTL_RIS_R & SYSCTL_RIS_PLLLRIS ) )
        ;
    SYSCTL_MISC_R |= SYSCTL_MISC_PLLLMIS;

    if ( !usb_power_down_value )
        SYSCTL_RCC2_R &= ( uint32_t )~SYSCTL_RCC2_USBPWRDN;

    SYSCTL_RCC2_R &= ( uint32_t )~SYSCTL_RCC_BYPASS;
}

extern uint32_t __data_load__,
                __data_start__,
                __data_end__,
                __bss_start__,
                __bss_end__;

void systemPreInit( void )
{
    uint32_t *src = &__data_load__, *dst;

    // Copy the data segment initializers from flash to SRAM.
    for ( dst = &__data_start__; dst < &__data_end__; dst++ )
        *dst = *src++;

    // Zero fill the bss segment.
    asm( 
        "ldr     r0, =__bss_start__ \n\t \
         ldr     r1, =__bss_end__ \n\t \
         mov     r2, #0 \n\t \
         .thumb_func \n\t \
    zero_loop: \n\t \
         cmp     r0, r1 \n\t \
         it      lt \n\t \
         strlt   r2, [r0], #4 \n\t \
         blt     zero_loop" 
    );
}

void systemInit( void )
{
    volatile uint32_t value_rcc2   = VALUE_RCC2;
    volatile uint32_t value_sysdiv = 0;
    static void ( *rccSet )( uint8_t xtal, uint8_t sysdiv );

    if ( VALUE_RCC2 & 0x80008000UL ) {
        rccSet       = systemInitRcc2;
        value_sysdiv = ( VALUE_RCC2 >> 23 ) & 0xF;
    } else if ( VALUE_RCC & 0x8000UL ) {
        rccSet       = systemInitRcc;
        value_sysdiv = ( VALUE_RCC >> 23 ) & 0x3F;
    } else {
        rccSet = ( void * )0;
    }

    usb_power_down_value = 1;
    if ( SYSCTL_RCC2_R & SYSCTL_RCC2_USBPWRDN ) {
        usb_power_down_value = value_rcc2 & SYSCTL_RCC2_USBPWRDN;
        value_rcc2 |= SYSCTL_RCC2_USBPWRDN;
    }

    if ( !( VALUE_RCC & SYSCTL_RCC_MOSCDIS ) ) {
        // Enable MOSC.
        SYSCTL_RCC2_R &= ( uint32_t )~SYSCTL_RCC_MOSCDIS;
        // Wait for main oscillator to stabilze (20ms).
        Delay_10ms();
        Delay_10ms();
    }

    _REG_VALUE_CLEAR_SET_( SYSCTL_RCC_R, ( VALUE_RCC & ~SYSCTL_RCC_IOSCDIS ) );
    SYSCTL_RCC2_R = value_rcc2;

    // Wait for main oscillator to stabilze (20ms).
    Delay_10ms();
    Delay_10ms();

    SYSCTL_RCC_R = VALUE_RCC;

    // Set either RCC or RCC2.
    if ( rccSet ) {
        ( *rccSet )( ( ( VALUE_RCC >> 6 ) & 0xF ),
                     value_sysdiv );
    }

    // Enable FPU.
    systemEnableFPU();
}
