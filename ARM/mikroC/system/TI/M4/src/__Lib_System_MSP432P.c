#include "CS_typedef.h"
#include <stdint.h>

#define CS_KEY_VAL                         ((uint32_t)0x0000695A)                         /*!< CS control key value */
#define SCB_SHCSR_MEMFAULTENA_Pos          16U                                            /*!< SCB SHCSR: MEMFAULTENA Position */
#define SCB_SHCSR_MEMFAULTENA_Msk          (1UL << SCB_SHCSR_MEMFAULTENA_Pos)             /*!< SCB SHCSR: MEMFAULTENA Mask */
#define SCB_SHCSR_BUSFAULTENA_Pos          17U                                            /*!< SCB SHCSR: BUSFAULTENA Position */
#define SCB_SHCSR_BUSFAULTENA_Msk          (1UL << SCB_SHCSR_BUSFAULTENA_Pos)             /*!< SCB SHCSR: BUSFAULTENA Mask */
#define SCB_SHCSR_USGFAULTENA_Pos          18U                                            /*!< SCB SHCSR: USGFAULTENA Position */
#define SCB_SHCSR_USGFAULTENA_Msk          (1UL << SCB_SHCSR_USGFAULTENA_Pos)             /*!< SCB SHCSR: USGFAULTENA Mask */
#define SysTick_CTRL_ENABLE_Pos            0U                                             /*!< SysTick CTRL: ENABLE Position */
#define SysTick_CTRL_ENABLE_Msk            (1UL /*<< SysTick_CTRL_ENABLE_Pos*/)           /*!< SysTick CTRL: ENABLE Mask */

/* Pre-defined bitfield values */
#define PCM_CTL0_KEY_VAL                   ((uint32_t)0x695A0000)                         /*!< PCM key value */
#define PCM_CTL1_KEY_VAL                   ((uint32_t)0x695A0000)                         /*!< PCM key value */

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

/* Constants interrupt priority levels */
const _NVIC_INT_PRIORITY_LVL0 = 0;
const _NVIC_INT_PRIORITY_LVL1 = 1;
const _NVIC_INT_PRIORITY_LVL2 = 2;
const _NVIC_INT_PRIORITY_LVL3 = 3;
const _NVIC_INT_PRIORITY_LVL4 = 4;
const _NVIC_INT_PRIORITY_LVL5 = 5;
const _NVIC_INT_PRIORITY_LVL6 = 6;
const _NVIC_INT_PRIORITY_LVL7 = 7;

uint8_t PCM_setCoreVoltageLevel( uint_fast8_t voltageLevel );

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
        ADD          R11, R11, #4
        B            L_loopFZs
    L_norep:
    }
}

void __EnableFPU()
{
    asm {
        ; CPACR is located at address 0xE000ED88
        MOVW             R0, #0xED88
        MOVT             R0, #0xE000
        ; Read CPACR
        LDR              R1, [R0]
        ; Set bits 20-23 to enable CP10 and CP11 coprocessors
        ORR              R1, R1, #0xF00000
        ; Write back the modified value to the CPACR
        STR              R1, [R0]
    }
    asm nop
    asm nop
    asm nop
    asm nop
    // The code below enables rounding towards zero during conversion.
    asm VMRS R0, FPSCR
    R0 = R0 | ( 0b11ul << 22 ); // SWRELARM-665.
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
    uint32_t result;

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
    uint32_t result;

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
    if ( ivt == IVT_INT_MemManage ) {
        // Enable the MemManage interrupt.
        SCB_SHCRS |= SCB_SHCSR_MEMFAULTENA_Msk;
    } else if ( ivt == IVT_INT_BusFault ) {
        // Enable the bus fault interrupt.
        SCB_SHCRS |= SCB_SHCSR_BUSFAULTENA_Msk;
    } else if ( ivt == IVT_INT_UsageFault ) {
        // Enable the usage fault interrupt.
        SCB_SHCRS |= SCB_SHCSR_USGFAULTENA_Msk;
    } else if ( ivt == IVT_INT_SysTick ) {
        // Enable the System Tick interrupt.
        NVIC_STCSR |= SysTick_CTRL_ENABLE_Msk;
    } else if ( ivt >= 16 ) {
        // Enable the general interrupt.
        ptr  = &NVIC_ISER0 + ( ivt - 16 ) / 32;
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
    if ( ivt == IVT_INT_MemManage ) {
        // Disable the MemManage interrupt.
        SCB_SHCRS &= ~( SCB_SHCSR_MEMFAULTENA_Msk );
    } else if ( ivt == IVT_INT_BusFault ) {
        // Disable the bus fault interrupt.
        SCB_SHCRS &= ~( SCB_SHCSR_BUSFAULTENA_Msk );
    } else if ( ivt == IVT_INT_UsageFault ) {
        // Disable the usage fault interrupt.
        SCB_SHCRS &= ~( SCB_SHCSR_USGFAULTENA_Msk );
    } else if ( ivt == IVT_INT_SysTick ) {
        // Disable the System Tick interrupt.
        NVIC_STCSR &= ~( SysTick_CTRL_ENABLE_Msk );
    } else if ( ivt >= 16 ) {
        // Disable the general interrupt.
        ptr  = &NVIC_ICER0 + ( ivt - 16 ) / 32;
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
        p     = &NVIC_IPR0 + ( ( ivt - 16 ) >> 2 );  // >> 2; four vectors per register.
        shift = ( ( ( ivt - 16 ) % 4 ) << 3 ) + 5;   // +5 for high nibble.
    } else if ( ( ivt > 3 ) & ( ivt <= 15 ) ) {
        p     = &SCB_SHPR1 + ( ivt / 4 ) - 1;
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
    SCB_AIRCR = 0x05FA0000 | ( 1ul << SYSRESETREQ );
    // The device should have reset, so this should never be reached. Just in
    // case, loop forever.
    while ( 1 )
        ;
}

static void InitialSetUpFosc()
{
    __System_CLOCK_IN_KHZ = 12345677;
}

#define CSCTL1_MCLK_MASK            0x07
#define CSCTL1_SMCLK_HSMCLK_MASK    0x70
#define CSCTL1_MCLK_HFXTCLK         0x05
#define CSCTL1_SMCLK_HSMCLK_HFXTCLK 0x50

static void InitialSetUpRCCRCC2()
{
    volatile uint32_t ulCSCTL0, ulCSCTL1, ulCSCTL2, ulWDTCTL, ulFLCTL_BANK0_RDCTL;
    volatile uint32_t Fosc_kHz;

    ulCSCTL0            = 12345678;
    ulCSCTL1            = 12345679;
    ulCSCTL2            = 12345680;
    ulWDTCTL            = 12345681;
    ulFLCTL_BANK0_RDCTL = 12345682; // Both banks have the same values, not separating them.

    Fosc_kHz            = 12345677;

    WDT_A_WDTCTL        = 0x5A00 | 0x80; // Stop watchdog.

    // Check if external oscillator is used. If so, it is necessary to set osc
    // pins PORTJ3 and PORTJ2 as primary function.
    if ( ( ( ulCSCTL1 & CSCTL1_MCLK_MASK ) == CSCTL1_MCLK_HFXTCLK ) ||
         ( ( ulCSCTL1 & CSCTL1_SMCLK_HSMCLK_MASK ) == CSCTL1_SMCLK_HSMCLK_HFXTCLK ) ) {
        DIO_PJSEL0.B3 = 1;
        DIO_PJSEL1.B3 = 0;
        DIO_PJSEL0.B2 = 1;
        DIO_PJSEL1.B2 = 0;
    }

    SYSCTL_SYS_SRAM_BANKEN = 0x80; // Enable all SRAM banks.

    // Switches LDO VCORE0 to LDO VCORE1; mandatory for 48 MHz setting.
    while ( PCM_PCMCTL1 & ( 1l << PMR_BUSY ) )
        ;
    PCM_PCMCTL0 = PCM_CTL0_KEY_VAL | 1;
    while ( PCM_PCMCTL1 & ( 1l << PMR_BUSY ) )
        ;

    FLCTL_FLCTL_BANK0_RDCTL = ulFLCTL_BANK0_RDCTL;
    FLCTL_FLCTL_BANK1_RDCTL = ulFLCTL_BANK0_RDCTL;

    CS_CSKEY                = CS_KEY_VAL;
    CS_CSCTL0               = ulCSCTL0;
    CS_CSCTL1               = ulCSCTL1;

    // Get HFXTFREQ and adjust HFXTDRIVE; LFXTDRIVE left default 0x3.
    if ( ( ( ulCSCTL2 >> 20 ) & 0x7 ) == 0 ) {
        CS_CSCTL2 = ulCSCTL2 | 0x3;
    } else {
        CS_CSCTL2 = ulCSCTL2 | 0x10000 | 0x3;

        while ( CS_CSIFGbits.HFXTIFG ) {
            Delay_1us(); // Wait for a bit.
            CS_CSCLRIFGbits.CLR_HFXTIFG = 1;
        }
    }

    // CS_CSCLKEN left default.
    CS_CSKEY = 0;

    // Set watchdog according to config.
    WDT_A_WDTCTL = 0x5A00 | ulWDTCTL;
}


/* Clock System Functions */
static const CS_LFXTCLK_SELECT = 0x0;
static const CS_HFXTCLK_SELECT = 0x5;
static const CS_VLOCLK_SELECT  = 0x1;
static const CS_REFOCLK_SELECT = 0x2;
static const CS_DCOCLK_SELECT  = 0x3;
static const CS_MODOSC_SELECT  = 0x4;

static const CS_LFXT_FAULT     = 0x01;
static const CS_HFXT_FAULT     = 0x02;

static uint32_t lfxtFreq;
static uint32_t hfxtFreq;

static uint32_t CS_VLOCLK_FREQUENCY = 10000;
static uint32_t CS_MODCLK_FREQUENCY = 24000000;

#define CS_CTL0_DCORSEL_MASK                     ((uint32_t)0x00070000)
#define CS_CTL0_DCORSEL_0                        ((uint32_t)0x00000000)          /**< Nominal DCO Frequency Range (MHz): 1 to 2 */
#define CS_CTL0_DCORSEL_1                        ((uint32_t)0x00010000)          /**< Nominal DCO Frequency Range (MHz): 2 to 4 */
#define CS_CTL0_DCORSEL_2                        ((uint32_t)0x00020000)          /**< Nominal DCO Frequency Range (MHz): 4 to 8 */
#define CS_CTL0_DCORSEL_3                        ((uint32_t)0x00030000)          /**< Nominal DCO Frequency Range (MHz): 8 to 16 */
#define CS_CTL0_DCORSEL_4                        ((uint32_t)0x00040000)          /**< Nominal DCO Frequency Range (MHz): 16 to 32 */
#define CS_CTL0_DCORSEL_5                        ((uint32_t)0x00050000)          /**< Nominal DCO Frequency Range (MHz): 32 to 64 */

/* Number of positions to shift for source calculation */
#define CS_ACLK_SRC_BITPOS                       0x08
#define CS_MCLK_SRC_BITPOS                       0x00
#define CS_SMCLK_SRC_BITPOS                      0x04
#define CS_HSMCLK_SRC_BITPOS                     0x04

#define CS_CTL1_SELA_MASK                        ((uint32_t)0x00000700)          /**< SELA Bit Mask */
#define CS_CTL1_DIVA_MASK                        ((uint32_t)0x07000000)          /**< DIVA Bit Mask */
#define CS_CTL1_SELS_MASK                        ((uint32_t)0x00000070)          /**< SELS Bit Mask */
#define CS_CTL1_DIVHS_MASK                       ((uint32_t)0x00700000)          /**< DIVHS Bit Mask */
#define CS_CTL1_DIVS_MASK                        ((uint32_t)0x70000000)          /**< DIVS Bit Mask */
#define CS_CTL1_SELM_MASK                        ((uint32_t)0x00000007)          /**< SELM Bit Mask */
#define CS_CTL1_DIVM_MASK                        ((uint32_t)0x00070000)          /**< DIVM Bit Mask */

/**
 * @brief Register external clock frequencies.
 * @param lfxtFrequency LFXT clock frequency.
 * @param hfxtFrequency HFXT clock frequency.
 * @details This function must be called if we want to use external clocks
 *          as sources for ACLK, MCLK, HSMCLK, SMCLK clocks.
 */
void CS_RegisterExternalClockFrequency( unsigned long lfxtFrequency,
                                        unsigned long hfxtFrequency )
{
    lfxtFreq = lfxtFrequency;
    hfxtFreq = hfxtFrequency;
}

/**
 * @brief Get value for clock divider.
 * @param divider Range from 0 to 7 (see DS).
 * @return Calculated divider.
 * @note Divider value is calculated as 2^divider.
 */
static uint32_t CS_GetDividerValue( uint32_t divider )
{
    return 1ul << divider; // SWRELARM-665
}

/**
 * @brief Clears interrupt flags for clock sources.
 * @param flags Interrupt flags.
 * @return None.
 */
static void CS_ClearInterruptFlag( uint32_t flags )
{
    // Unlocking the module.
    CS_CSKEY = CS_KEY_VAL;
    CS_CSCLRIFG |= flags;
    // Locking the module.
    CS_CSKEY = 1;
}

/**
 * @brief Get frequency for DCO clock.
 * @param None.
 * @return None.
 */
static uint32_t CS_getDCOFrequency()
{
    uint32_t dcoFreq;

    switch ( CS_CSCTL0 & CS_CTL0_DCORSEL_MASK ) {
        case CS_CTL0_DCORSEL_0:
            dcoFreq = 1500000;
            break;
        case CS_CTL0_DCORSEL_1:
            dcoFreq = 3000000;
            break;
        case CS_CTL0_DCORSEL_2:
            dcoFreq = 6000000;
            break;
        case CS_CTL0_DCORSEL_3:
            dcoFreq = 12000000;
            break;
        case CS_CTL0_DCORSEL_4:
            dcoFreq = 24000000;
            break;
        case CS_CTL0_DCORSEL_5:
            dcoFreq = 48000000;
            break;
        default:
            dcoFreq = 0;
    }

    return dcoFreq;
}

/**
 * @brief Get frequency for specific clock source.
 * @param source Clock source. Use:
 *               - CS_LFXTCLK_SELECT
 *               - CS_HFXTCLK_SELECT
 *               - CS_VLOCLK_SELECT
 *               - CS_REFOCLK_SELECT
 *               - CS_DCOCLK_SELECT
 *               - CS_MODOSC_SELECT
 * @param divider Range from 0 to 7 (see DS).
 * @return Frequency for specific clock source.
 */
static uint32_t CS_ComputeClockFrequency( uint32_t source, uint32_t divider )
{
    uint8_t calcDivider;

    calcDivider = CS_GetDividerValue( divider );

    switch ( source ) {

        case CS_LFXTCLK_SELECT: {
            if ( CS_CSIFG & 0x01 ) { // flag LFXTIFG.
                CS_ClearInterruptFlag( CS_LFXT_FAULT );
                if ( CS_CSIFG & 0x01 ) { // flag LFXTIFG.
                    if ( CS_CSCLKEN & 0x8000 ) // REFOFSEL REFO nominal frequency.
                        return ( 128000 / calcDivider );
                    else
                        return ( 32768 / calcDivider );
                }
            }
            return lfxtFreq / calcDivider;
        }

        case CS_HFXTCLK_SELECT: {
            if ( CS_CSIFG & 0x02 ) { // flag HFXTIFG.
                CS_ClearInterruptFlag( CS_HFXT_FAULT );
                if ( CS_CSIFG & 0x02 ) { // flag HFXTIFG.
                    if ( CS_CSCLKEN & 0x8000 ) // REFOFSEL REFO nominal frequency.
                        return ( 128000 / calcDivider );
                    else
                        return ( 32768 / calcDivider );
                }
            }
            return hfxtFreq / calcDivider;
        }

        case CS_VLOCLK_SELECT: {
            return CS_VLOCLK_FREQUENCY / calcDivider;
        }

        case CS_REFOCLK_SELECT: {
            if ( CS_CSCLKEN & 0x8000 ) // REFOFSEL REFO nominal frequency.
                return ( 128000 / calcDivider );
            else
                return ( 32768 / calcDivider );
        }
        case CS_DCOCLK_SELECT: {
            return ( CS_getDCOFrequency() / calcDivider );
        }
        case CS_MODOSC_SELECT: {
            return CS_MODCLK_FREQUENCY / calcDivider;
        }
        default:
            return 0;
    }
}

/**
 * @brief Get frequencies for ACLK, HSCLK, MCLK, and SMCLK.
 * @param CS_Clocks Pointer to clock structure.
 * @return None.
 */
void CS_GetClocksFrequency( CS_ClocksTypeDef * CS_Clocks )
{
    volatile uint32_t lsource, ldivider;
    // ACLK.
    lsource                   = ( CS_CSCTL1 & CS_CTL1_SELA_MASK ) >> CS_ACLK_SRC_BITPOS;
    ldivider                  = ( CS_CSCTL1 & CS_CTL1_DIVA_MASK ) >> 24;
    CS_Clocks->ACLK_Frequency = CS_ComputeClockFrequency( lsource, ldivider );
    // HSMCLK.
    lsource                     = ( CS_CSCTL1 & CS_CTL1_SELS_MASK ) >> CS_HSMCLK_SRC_BITPOS;
    ldivider                    = ( CS_CSCTL1 & CS_CTL1_DIVHS_MASK ) >> 20;
    CS_Clocks->HSMCLK_Frequency = CS_ComputeClockFrequency( lsource, ldivider );
    // SMCLK.
    lsource                    = ( CS_CSCTL1 & CS_CTL1_SELS_MASK ) >> CS_HSMCLK_SRC_BITPOS;
    ldivider                   = ( CS_CSCTL1 & CS_CTL1_DIVS_MASK ) >> 28;
    CS_Clocks->SMCLK_Frequency = CS_ComputeClockFrequency( lsource, ldivider );
    // MCLK.
    lsource                   = ( CS_CSCTL1 & CS_CTL1_SELM_MASK ) >> CS_MCLK_SRC_BITPOS;
    ldivider                  = ( CS_CSCTL1 & CS_CTL1_DIVM_MASK ) >> 16;
    CS_Clocks->MCLK_Frequency = CS_ComputeClockFrequency( lsource, ldivider );
}
