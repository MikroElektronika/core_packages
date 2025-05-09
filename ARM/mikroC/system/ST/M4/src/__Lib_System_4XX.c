#include "RCC_typedef.h"
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

unsigned long _VOLTAGE_RANGE;
static char APBAHBPrescTable[ 16 ] = { 0, 0, 0, 0, 1, 2, 3, 4, 1, 2, 3, 4, 6, 7, 8, 9 };

// Routine that copies from the memory area pointed to by R12
// to the memory area pointed to by R11
// the address up to which it is copied is in R10.
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

void __GenExcept()
{
    while ( 1 )
        ;
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
    // Perform a software reset request.  This will cause the device to reset,
    // no further code is executed.
    SCB_AIRCR = 0x05FA0000 | ( 1ul << SYSRESETREQ );
    // The device should have reset, so this should never be reached.  Just in
    // case, loop forever.
    while ( 1 ) {
    }
}

void __EnableFPU()
{
    asm {
        ; CPACR is located at address 0xE000ED88
        MOVW     R0, #0xED88
        MOVT     R0, #0xE000
        ; Read CPACR
        LDR     R1, [R0]
        ; Set bits 20-23 to enable CP10 and CP11 coprocessors
        ORR     R1, R1, #0xF00000
        ; Write back the modified value to the CPACR
        STR     R1, [R0]
    }
    asm nop
    asm nop
    asm nop
    asm nop
    // The code below includes rounding to zero during conversion.
    asm vmrs R0, FPSCR
    R0 = R0 | ( 0b11ul << 22 ); // SWRELARM-665
    asm vmsr FPSCR, R0
}

static void InitialSetUpFosc()
{
    __System_CLOCK_IN_KHZ = 12345677;
    _VOLTAGE_RANGE = 12345676;
}

#define RCC_CFGR_SWS (0x0000000C) /* System Clock Switch Status */

#define VR_2700_3600 3 /* Voltage range 2.7 to 3.6V */
#define VR_2400_2700 2 /* Voltage range 2.7 to 3.6V */
#define VR_2100_2400 1 /* Voltage range 2.7 to 3.6V */
#define VR_1800_2100 0 /* Voltage range 1.8 to 2.1V */

void RCC_GetClocksFrequency( RCC_ClocksTypeDef * RCC_Clocks )
{
    unsigned long tmp = 0, presc = 0, pllvco = 0, pllp = 2, pllsource = 0, pllm = 2;

    RCC_Clocks->HCLK_Frequency = Get_Fosc_kHz() * 1000;

    /* Get HCLK prescaler */
    tmp = RCC_CFGR & 0xF0;
    tmp = tmp >> 4;
    presc = APBAHBPrescTable[ tmp ];

    /* HCLK clock frequency */
    RCC_Clocks->SYSCLK_Frequency = RCC_Clocks->HCLK_Frequency << presc;

    /* Get PCLK1 prescaler */
    tmp = RCC_CFGR & ( 0b111L << 10 );
    tmp = tmp >> 10;
    presc = APBAHBPrescTable[ tmp ];

    /* PCLK1 clock frequency */
    RCC_Clocks->PCLK1_Frequency = RCC_Clocks->HCLK_Frequency >> presc;

    /* Get PCLK2 prescaler */
    tmp = RCC_CFGR & ( 0b111L << 13 );
    tmp = tmp >> 13;
    presc = APBAHBPrescTable[ tmp ];

    /* PCLK2 clock frequency */
    RCC_Clocks->PCLK2_Frequency = RCC_Clocks->HCLK_Frequency >> presc;
}

/**
 * @brief  Resets the RCC clock configuration to the default reset state.
 * @note   The default reset state of the clock configuration is given below:
 *            - HSI ON and used as system clock source
 *            - HSE, PLL and PLLI2S OFF
 *            - AHB, APB1 and APB2 prescaler set to 1.
 *            - CSS, MCO1 and MCO2 OFF
 *            - All interrupts disabled (not used)
 * @note   This function doesn't modify the configuration of the
 *            - Peripheral clocks
 *            - LSI, LSE and RTC clocks
 * @retval None.
 */
static void SystemClockSetDefault( void )
{
    /* Set HSION bit */
    RCC_CR |= ( unsigned long )0x00000001;

    /* Reset CFGR register */
    RCC_CFGR = 0x00000000;

    /* Reset HSEON, CSSON and PLLON bits */
    RCC_CR &= ( unsigned long )0xFEF6FFFF;

    /* Reset PLLCFGR register */
    RCC_PLLCFGR = 0x24003010;

    /* Reset HSEBYP bit */
    RCC_CR &= ( unsigned long )0xFFFBFFFF;
}

static void InitialSetUpRCCRCC2()
{
    unsigned long volatile ulRCC_CR, ulRCC_CFGR, ulRCC_PLLCFGR, ulVOLTAGE_RANGE;
    unsigned long Fosc_kHz;
    ulRCC_CR = 12345678;
    ulRCC_PLLCFGR = 12345679;
    ulRCC_CFGR = 12345680;
    ulVOLTAGE_RANGE = 12345681;
    Fosc_kHz = 12345677;

    if ( ulVOLTAGE_RANGE == VR_2700_3600 ) {
        if ( Fosc_kHz > 150000 )
            FLASH_ACR |= 5;
        else if ( Fosc_kHz > 120000 )
            FLASH_ACR |= 4;
        else if ( Fosc_kHz > 90000 )
            FLASH_ACR |= 3;
        else if ( Fosc_kHz > 60000 )
            FLASH_ACR |= 2;
        else if ( Fosc_kHz > 30000 )
            FLASH_ACR |= 1;
        else
            FLASH_ACR &= ~7ul;
    } else if ( ulVOLTAGE_RANGE == VR_2400_2700 ) {
        if ( Fosc_kHz > 144000 )
            FLASH_ACR |= 6;
        else if ( Fosc_kHz > 120000 )
            FLASH_ACR |= 5;
        else if ( Fosc_kHz > 96000 )
            FLASH_ACR |= 4;
        else if ( Fosc_kHz > 72000 )
            FLASH_ACR |= 3;
        else if ( Fosc_kHz > 48000 )
            FLASH_ACR |= 2;
        else if ( Fosc_kHz > 24000 )
            FLASH_ACR |= 1;
        else
            FLASH_ACR &= ~7ul;
    } else if ( ulVOLTAGE_RANGE == VR_2100_2400 ) {
        if ( Fosc_kHz > 120000 )
            FLASH_ACR |= 7;
        else if ( Fosc_kHz > 108000 )
            FLASH_ACR |= 6;
        else if ( Fosc_kHz > 90000 )
            FLASH_ACR |= 5;
        else if ( Fosc_kHz > 72000 )
            FLASH_ACR |= 4;
        else if ( Fosc_kHz > 54000 )
            FLASH_ACR |= 3;
        else if ( Fosc_kHz > 36000 )
            FLASH_ACR |= 2;
        else if ( Fosc_kHz > 18000 )
            FLASH_ACR |= 1;
        else
            FLASH_ACR &= ~7ul;
    } else if ( ulVOLTAGE_RANGE == VR_1800_2100 ) {
        if ( Fosc_kHz > 112000 )
            FLASH_ACR |= 7;
        else if ( Fosc_kHz > 96000 )
            FLASH_ACR |= 6;
        else if ( Fosc_kHz > 80000 )
            FLASH_ACR |= 5;
        else if ( Fosc_kHz > 64000 )
            FLASH_ACR |= 4;
        else if ( Fosc_kHz > 48000 )
            FLASH_ACR |= 3;
        else if ( Fosc_kHz > 32000 )
            FLASH_ACR |= 2;
        else if ( Fosc_kHz > 16000 )
            FLASH_ACR |= 1;
        else
            FLASH_ACR &= ~7ul;
    }

    /* Prefetch enable */
    FLASH_ACR.PRFTEN = 1;

    /* Instruction cache enable */
    FLASH_ACR.ICEN = 1;

    SystemClockSetDefault();

    /* Set clock configuration register */
    RCC_PLLCFGR = ulRCC_PLLCFGR;

    /* Set clock configuration register 2 */
    RCC_CFGR    = ulRCC_CFGR;

    /* Do not start PLLs yet */
    RCC_CR      = ulRCC_CR & 0x000FFFFF;

    /* If HSI enabled */
    if ( ulRCC_CR & ( 1ul << HSION ) ) {
        /* Wait for HSIRDY = 1 (HSI is ready) */
        while ( ( RCC_CR & ( 1ul << HSIRDY ) ) == 0 )
            ;
    }

    /* If HSE enabled */
    if ( ulRCC_CR & ( 1ul << HSEON ) ) {
        /* Wait for HSERDY = 1 (HSE is ready) */
        while ( ( RCC_CR & ( 1ul << HSERDY ) ) == 0 )
            ;
    }

    /* If PLL1 enabled */
    if ( ulRCC_CR & ( 1ul << PLLON ) ) {
        /* PLL3 On */
        RCC_CR |= ( 1ul << PLLON );
        /* Wait for PLL1RDY = 1 (PLL is ready) */
        while ( ( RCC_CR & ( 1ul << PLLRDY ) ) == 0 )
            ;
    }

    /* Wait till SYSCLK is stabilized (depending on selected clock) */
    while ( ( RCC_CFGR & RCC_CFGR_SWS ) != ( ( ulRCC_CFGR << 2 ) & RCC_CFGR_SWS ) )
        ;
}
