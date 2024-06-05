#include "common.h"
#include "core_header.h"
#include "delays.h"
#include "mcu.h"

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
    volatile uint32_t foscKhz = FOSC_KHZ_VALUE;

    // Back to internal osc before new configuration is applied.
    SYSCTL_MEMTIM0_R  = 0x00300030;
    SYSCTL_RSCLKCFG_R = 0x00000000;

    // Start new osc configuration.
    SYSCTL_MOSCCTL_R = VALUE_MOSCCTL & ~SYSCTL_MOSCCTL_CVAL;
    if ( !( VALUE_MOSCCTL & SYSCTL_MOSCCTL_PWRDN ) ) {
        Delay_10ms();
        Delay_10ms();
    }

    if ( VALUE_MOSCCTL & SYSCTL_MOSCCTL_CVAL )
        SYSCTL_MOSCCTL_R |= SYSCTL_MOSCCTL_CVAL;

    // Set appropriate memory timing parameters.
    // Clock dependant.
    if ( foscKhz > 100000 )
        SYSCTL_MEMTIM0_R = 0x00300196;
    else if ( foscKhz > 80000 )
        SYSCTL_MEMTIM0_R = 0x00300155;
    else if ( foscKhz > 50000 )
        SYSCTL_MEMTIM0_R = 0x003000D3;
    else if ( foscKhz > 30000 )
        SYSCTL_MEMTIM0_R = 0x003000B2;
    else if ( foscKhz > 16000 )
        SYSCTL_MEMTIM0_R = 0x00300071;
    else
        SYSCTL_MEMTIM0_R = 0x00300030;

    SYSCTL_PLLFREQ0_R = VALUE_PLLFREQ0;
    SYSCTL_PLLFREQ1_R = VALUE_PLLFREQ1;

    SYSCTL_RSCLKCFG_R = VALUE_RSCLKCFG & ~SYSCTL_RSCLKCFG_USEPLL;

    SYSCTL_RSCLKCFG_R |= SYSCTL_RSCLKCFG_MEMTIMU | SYSCTL_RSCLKCFG_NEWFREQ;

    if ( VALUE_RSCLKCFG & SYSCTL_RSCLKCFG_USEPLL ) {
        while ( !( SYSCTL_PLLSTAT_R & SYSCTL_PLLSTAT_LOCK ) )
            ;
        SYSCTL_RSCLKCFG_R |= SYSCTL_RSCLKCFG_USEPLL;
    }

    // Enable FPU.
    systemEnableFPU();
}
