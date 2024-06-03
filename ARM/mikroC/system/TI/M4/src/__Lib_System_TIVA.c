#include "stdint.h"

const register CPU_APSR        = 0;
const register CPU_IAPSR       = 1;
const register CPU_EAPSR       = 2;
const register CPU_XPSR        = 3;
const register CPU_IPSR        = 5;
const register CPU_EPSR        = 6;
const register CPU_IEPSR       = 7;
const register CPU_MSP         = 8;
const register CPU_PSP         = 9;
const register CPU_PRIMASK     = 16;
const register CPU_BASEPRI     = 17;
const register CPU_BASEPRI_MAX = 18;
const register CPU_FAULTMASK   = 19;
const register CPU_CONTROL     = 20;

/* Constants for interrupt priority levels */
const _NVIC_INT_PRIORITY_LVL0 = 0;
const _NVIC_INT_PRIORITY_LVL1 = 1;
const _NVIC_INT_PRIORITY_LVL2 = 2;
const _NVIC_INT_PRIORITY_LVL3 = 3;
const _NVIC_INT_PRIORITY_LVL4 = 4;
const _NVIC_INT_PRIORITY_LVL5 = 5;
const _NVIC_INT_PRIORITY_LVL6 = 6;
const _NVIC_INT_PRIORITY_LVL7 = 7;

// Routine that copies from the memory area pointed to by R12
// to the memory area pointed to by R11
// the address up to which it copies is in R10.
void __CC2DW()
{
    asm {
    L_loopDW:
        LDRB.W       R9, [R12], #1
        STRB.W       R9, [R11], #1
        CMP.W        R11, R10
        BNE          L_loopDW
    }
}

void __CA2AB()
{
    asm {
    L_loopCA2ABs:
        LDRB.W       R9, [R10], #1
        STRB.W       R9, [R11], #1
        CMP.W        R10, R12
        BNE          L_loopCA2ABs
    }
}

void __CS2S()
{
    asm {
    L_loopCS2Ss:
        LDRB.W       R10, [R11], #1
        CMP.W        R10, #0
        BEQ          L_CS2Send
        STRB.W       R10, [R12], #1
        B            L_loopCS2Ss
    L_CS2Send:
    }
}

void __FZinS()
{
    asm {
    L_loopCS2Ss:
        LDRB.W       R11, [R12], #1
        CMP.W        R11, #0
        BNE          L_loopCS2Ss
        SUB.W        R12, R12, #1
    }
}

void __FillZeros()
{
    asm {
        MOV.W        R9, #0
        MOV.W        R12, #0
        CMP.W        SP, R10
        BGT          L_loopFZs
        CMP.W        SP, R11
        BLT          L_loopFZs
        MOV          R12, R10
        MOV          R10, SP
    L_loopFZs:
        STR.W        R9, [R11], #4
        CMP.W        R11, R10
        BNE          L_loopFZs
        CMP.W        R12, R10
        BLE          L_norep
        MOV          R10, R12
        LDR          R11, [R9]
        ADD          R11, R11,#4
        B            L_loopFZs
    L_norep:
    }
}

void __EnableFPU()
{
    asm {
        ; CPACR is located at address 0xE000ED88 
        MOVW         R0, #0xED88
        MOVT         R0, #0xE000
        ; Read CPACR
        LDR          R1, [R0]
        ; Set bits 20-23 to enable CP10 and CP11 coprocessors
        ORR          R1, R1, #0xF00000
        ; Write back the modified value to the CPACR
        STR          R1, [R0]
    }
    asm nop
    asm nop
    asm nop
    asm nop
    // The code below enables rounding towards zero during conversion.
    asm VMRS R0, FPSCR
    R0 = R0 | (0b11ul << 22); // SWRELARM-665.
    asm VMSR FPSCR, R0
}

/**
 * @brief Enables the processor interrupt.
 * @details Allows the processor to respond to interrupts. This does not affect the
 *          set of interrupts enabled in the interrupt controller, it just gates the
 *          single interrupt from the controller to the processor.
 * @return The state of PRIMASK on entry.
 */
unsigned long EnableInterrupts()
{
    unsigned long result;

    result = CPU_REG_GET( CPU_PRIMASK );
    asm CPSIE I;

    return result;
}

/**
 * @brief Disables the processor interrupt.
 * @details Prevents the processor from receiving interrupts. This does not affect the
 *          set of interrupts enabled in the interrupt controller, it just gates the
 *          single interrupt from the controller to the processor.
 * @return The state of PRIMASK on entry.
 */
unsigned long DisableInterrupts()
{
    unsigned long result;

    result = CPU_REG_GET( CPU_PRIMASK );
    asm CPSID I;

    return result;
}

void RestoreInterrupts( unsigned long primask )
{
    if ( primask )
        asm CPSID I;
    else
        asm CPSIE I;
}

/**
 * @brief Enables an interrupt.
 * @param ulInterrupt Specifies the interrupt to be enabled.
 * @details The specified interrupt is enabled in the interrupt controller. Other
 *          enables for the interrupt (such as at the peripheral level) are unaffected
 *          by this function.
 * @return None.
 */
void NVIC_IntEnable( const unsigned long ivt )
{
    unsigned long * ptr;

    // Determine the interrupt to enable.
    if ( ivt == IVT_FAULT_MPU ) {
        // Enable the MemManage interrupt.
        NVIC_SYS_HND_CTRL |= NVIC_SYS_HND_CTRL_MEM;
    } else if ( ivt == IVT_FAULT_BUS ) {
        // Enable the bus fault interrupt.
        NVIC_SYS_HND_CTRL |= NVIC_SYS_HND_CTRL_BUS;
    } else if ( ivt == IVT_FAULT_USAGE ) {
        // Enable the usage fault interrupt.
        NVIC_SYS_HND_CTRL |= NVIC_SYS_HND_CTRL_USAGE;
    } else if ( ivt == IVT_FAULT_SYSTICK ) {
        // Enable the System Tick interrupt.
        NVIC_ST_CTRL |= NVIC_ST_CTRL_INTEN;
    } else if ( ivt >= 16 ) {
        // Enable the general interrupt.
        ptr  = &NVIC_EN0 + ( ivt - 16 ) / 32;
        *ptr = 1ul << ( ( ivt - 16 ) & 0x1F );
    }
}

/**
 * @brief Disables an interrupt.
 * @param ulInterrupt Specifies the interrupt to be disabled.
 * @details The specified interrupt is disabled in the interrupt controller. Other
 *          enables for the interrupt (such as at the peripheral level) are unaffected
 *          by this function.
 * @return None.
 */
void NVIC_IntDisable( const unsigned long ivt )
{
    unsigned long * ptr;

    // Determine the interrupt to disable.
    if ( ivt == IVT_FAULT_MPU ) {
        // Disable the MemManage interrupt.
        NVIC_SYS_HND_CTRL &= ~( NVIC_SYS_HND_CTRL_MEM );
    } else if ( ivt == IVT_FAULT_BUS ) {
        // Disable the bus fault interrupt.
        NVIC_SYS_HND_CTRL &= ~( NVIC_SYS_HND_CTRL_BUS );
    } else if ( ivt == IVT_FAULT_USAGE ) {
        // Disable the usage fault interrupt.
        NVIC_SYS_HND_CTRL &= ~( NVIC_SYS_HND_CTRL_USAGE );
    } else if ( ivt == IVT_FAULT_SYSTICK ) {
        // Disable the System Tick interrupt.
        NVIC_ST_CTRL &= ~( NVIC_ST_CTRL_INTEN );
    } else if ( ivt >= 16 ) {
        // Disable the general interrupt.
        ptr  = &NVIC_DIS0 + ( ivt - 16 ) / 32;
        *ptr = 1ul << ( ( ivt - 16 ) & 0x1F );
    }
}

void __GenExcept()
{
    while ( 1 )
        ;
}

/**
 * @brief Sets an interrupt priority.
 * @param ivt Interrupt vector table number.
 * @param priority Value for interrupt priority.
 * @details For a specific interrupt, sets the appropriate interrupt priority.
 * @return None.
 */
void NVIC_SetIntPriority( uint8_t ivt, uint8_t priority )
{
    uint32_t * p;
    uint8_t    shift;

    if ( ivt > 15 ) {
        p     = &NVIC_PRI0 + ( ( ivt - 16 ) >> 2 ); // >> 2; four vectors per register.
        shift = ( ( ( ivt - 16 ) % 4 ) << 3 ) + 5;  // +5 for high nibble.
    } else if ( ( ivt > 3 ) & ( ivt <= 15 ) ) {
        p     = &NVIC_SYS_PRI1 + ( ivt / 4 ) - 1;
        shift = ( ( ivt % 4 ) << 3 ) + 5;
    } else {
        return;
    }

    if ( priority & 0x0F ) {                         // priority check.
        *p &= ~( ( uint32_t )0xF << shift );         // clear old value.
        *p |= ( uint32_t )priority << shift;         // write to high nibble byte.
    } else {                                         // In case the priority value is sent in high nibble format for IVT_IP0.
        *p &= ~( ( uint32_t )0xF << shift );         // clear old value.
        *p |= ( uint32_t )priority << ( shift - 5 ); // write to high nibble byte.
    }
}

/**
 * @brief Resets the device.
 * @details This function performs a software reset of the entire device. The
 *          processor and all peripherals are reset, and all device registers will
 *          return to their default values (with the exception of the reset cause
 *          register, which will maintain its current value but have the software reset
 *          bit set as well).
 * @return None.
 */
void SystemReset( void )
{
    // Perform a software reset request. This will cause the device to reset,
    // no further code is executed.
    NVIC_APINT = 0x05FA0000 | ( 1ul << NVIC_APINT_SYSRESETREQ );
    // The device should have reset, so this should never be reached.  Just in
    // case, loop forever.
    while ( 1 ) {
    }
}

static void InitialSetUpFosc()
{
    __System_CLOCK_IN_KHZ = 12345677;
}

static void InitialSetUpRCCRCC2()
{
    unsigned long volatile ulRSCLKCFG, ulMOSCCTL, ulPLLFREQ0, ulPLLFREQ1;
    volatile unsigned long Fosc_kHz;

    ulRSCLKCFG = 12345678;
    ulMOSCCTL  = 12345679;
    ulPLLFREQ0 = 12345680;
    ulPLLFREQ1 = 12345681;
    Fosc_kHz   = 12345677;

    // back to internal osc before new configuration is applied.
    SYSCTL_MEMTIM0  = 0x00300030;
    SYSCTL_RSCLKCFG = 0x00000000;

    // start new osc configuration.
    SYSCTL_MOSCCTL = ulMOSCCTL & ~( 1ul << SYSCTL_MOSCCTL_CVAL ); // do not enable clock validator until main osc stabilization time has passed.
    if ( !ulMOSCCTL.SYSCTL_MOSCCTL_PWRDN ) {
        // wait for the main oscillator to stabilize, max 18ms according to data sheet.
        Delay_10ms();
        Delay_10ms();
    }
    if ( ulMOSCCTL.SYSCTL_MOSCCTL_CVAL ) // when main clock is stable, enable validation if needed.
        SYSCTL_MOSCCTL.SYSCTL_MOSCCTL_CVAL = 1;

    if ( Fosc_kHz > 100000 )
        SYSCTL_MEMTIM0 = 0x00300196;
    else if ( Fosc_kHz > 80000 )
        SYSCTL_MEMTIM0 = 0x00300155;
    else if ( Fosc_kHz > 50000 )
        SYSCTL_MEMTIM0 = 0x003000D3;
    else if ( Fosc_kHz > 30000 )
        SYSCTL_MEMTIM0 = 0x003000B2;
    else if ( Fosc_kHz > 16000 )
        SYSCTL_MEMTIM0 = 0x00300071;
    else
        SYSCTL_MEMTIM0 = 0x00300030;

    SYSCTL_PLLFREQ0                         = ulPLLFREQ0;
    SYSCTL_PLLFREQ1                         = ulPLLFREQ1;

    SYSCTL_RSCLKCFG                         = ulRSCLKCFG & ~( 1ul << SYSCTL_RSCLKCFG_USEPLL ); // do not start PLLs yet.

    SYSCTL_RSCLKCFG.SYSCTL_RSCLKCFG_MEMTIMU = 1;                                               // update flash memory timings.
    SYSCTL_RSCLKCFG.SYSCTL_RSCLKCFG_NEWFREQ = 1;                                               // update PLL VCO frequency.

    if ( ulRSCLKCFG & ( 1ul << SYSCTL_RSCLKCFG_USEPLL ) ) {                                    // if PLL1 is enabled.
        while ( SYSCTL_PLLSTAT.SYSCTL_PLLSTAT_LOCK == 0 )
            ;                                                                                  // Wait for SYSCTL_PLLSTAT_LOCK = 1 (PLL is ready).
        SYSCTL_RSCLKCFG.SYSCTL_RSCLKCFG_USEPLL = 1;                                            // Use PLL.
    }
}

static const char APBAHBPrescTable[ 16 ] = { 0, 0, 0, 0, 1, 2, 3, 4, 1, 2, 3, 4, 6, 7, 8, 9 };
static const char ADCPrescTable[ 4 ]     = { 2, 4, 6, 8 };

// void RCC_GetClocksFrequency(RCC_ClocksTypeDef* RCC_Clocks){
// }
