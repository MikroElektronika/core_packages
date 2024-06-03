#include "RCC_typedef_M0Plus.h"
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

// Routine that copies from the memory area pointed to by R7
// to the memory area pointed to by R6
// the address up to which it is copied is in R5.
void __CC2DW()
{
    asm {
    L_loopDW:
        LDRB       R4, [R7, #0]
        ADDS       R7, R7, #1
        STRB       R4, [R6, #0]
        ADDS       R6, R6, #1
        CMP        R6, R5
        BNE        L_loopDW
    }
}

void __CA2AB()
{
    asm {
    L_loopCA2ABs:
        LDRB       R4, [R5, #0]
        ADDS       R5, R5, #1
        STRB       R4, [R6, #0]
        ADDS       R6, R6, #1
        CMP        R5, R7
        BNE        L_loopCA2ABs
    }
}

void __CS2S()
{
    asm {
    L_loopCS2Ss:
        LDRB       R5, [R6, #0]
        ADDS       R6, R6, #1
        CMP        R5, #0
        BEQ        L_CS2Send
        STRB       R5, [R7, #0]
        ADDS       R7, R7, #1
        B          L_loopCS2Ss
    L_CS2Send:
    }
}

void __FZinS()
{
    asm {
    L_loopCS2Ss:
        LDRB       R6, [R7, #0]
        ADDS       R7, R7, #1
        CMP        R6, #0
        BNE        L_loopCS2Ss
        SUBS       R7, R7, #1
    }
}

void __FillZeros()
{
    asm {
        MOVS       R4, #0
        MOVS       R7, #0
        CMP        SP, R5
        BGT        L_loopFZs
        CMP        SP, R6
        BLT        L_loopFZs
        MOV        R7, R5
        MOV        R5, SP
    L_loopFZs:
        STR        R4, [R6, #0]
        ADDS       R6, R6, #4
        CMP        R6, R5
        BNE        L_loopFZs
        CMP        R7, R5
        BLE        L_norep
        MOV        R5, R7
        LDR        R6, [R4]
        ADDS       R6, R6, #4
        B          L_loopFZs
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

#define RCC_CFGR_SWS  (0x0000000C) /* System Clock Switch Status */
#define RCC_CFGR_HPRE (0x000000F0) /* HLCK Prescaler */
#define RCC_CFGR_PPRE (0x00000700) /* PCLK Prescaler */

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
 * @param  None
 * @retval None
 */
static void SystemClockSetDefault( void )
{
    /* Set HSION bit */
    RCC_CR |= ( unsigned long )0x00000001;

    /* Reset SW[1:0], HPRE[3:0], PPRE1[2:0], PPRE2[2:0], MCOSEL[3:0] bits */
    RCC_CFGR &= ( unsigned long )0xF0FFC00C;

    /* Reset HSEON, CSSON and PLLON bits */
    RCC_CR &= ( unsigned long )0xFEF6FEFF;

    /* Reset HSEBYP bit */
    RCC_CR &= ( unsigned long )0xFFFBFFFF;

    /* Reset PLLSRC and PLLMUL[3:0] bits */
    RCC_CFGR &= ( unsigned long )0xFFC2FFFF;
}

static void InitialSetUpRCCRCC2()
{
    unsigned long volatile ulRCC_CR, ulRCC_CFGR;
    unsigned long volatile ulPWR_CR;
    unsigned long volatile Fosc_kHz;
    ulRCC_CR = 12345678;
    ulRCC_CFGR = 12345679;
    ulPWR_CR = 12345680;

    Fosc_kHz = 12345677;

    PWR_CR = ulPWR_CR;

    /* Latency depends from system freq and core voltage */
    /* Voltage range 1 - 1.8V */
    if ( ( ulPWR_CR & 0x00001800 ) == 0x00000800 ) {
        if ( Fosc_kHz > 16000 ) {
            FLASH_ACR |= 1;
            while ( ( FLASH_ACR & 0x1 ) == 0 )
                ;
        } else {
            FLASH_ACR &= ~1ul;
            while ( ( FLASH_ACR & 0x1 ) == 1 )
                ;
        }
    /* Voltage range 2 - 1.5V */
    } else if ( ( ulPWR_CR & 0x00001800 ) == 0x00001000 ) {
        if ( Fosc_kHz > 8000 ) {
            FLASH_ACR |= 1;
            while ( ( FLASH_ACR & 0x1 ) == 0 )
                ;
        } else {
            FLASH_ACR &= ~1ul;
            while ( ( FLASH_ACR & 0x1 ) == 1 )
                ;
        }
    /* Voltage range 3 - 1.2V */
    } else if ( ( ulPWR_CR & 0x00001800 ) == 0x00001800 ) {
        FLASH_ACR &= ~1ul;
        while ( ( FLASH_ACR & 0x1 ) == 1 )
            ;
    }

    /* Enable prefetch */
    FLASH_ACR.PRFTEN = 1;

    SystemClockSetDefault();

    /* Set clock configuration register */
    RCC_CFGR = ulRCC_CFGR;

    /* Do not start PLLs yet */
    RCC_CR   = ulRCC_CR & 0x000FFFFF;

    /* If HSI enabled*/
    if ( ulRCC_CR & ( 1ul << HSI16ON ) ) {
        /* Wait for HSIRDYF = 1 (HSI is ready)*/
        while ( ( RCC_CR & ( 1ul << HSI16RDYF ) ) == 0 )
            ;
    }

    /* If HSE enabled*/
    if ( ulRCC_CR & ( 1ul << HSEON ) ) {
        /* Wait for HSERDY = 1 (HSE is ready)*/
        while ( ( RCC_CR & ( 1ul << HSERDY ) ) == 0 )
            ;
    }

    /* If PLL1 enabled*/
    if ( ulRCC_CR & ( 1ul << PLLON ) ) {
        /* PLL3 On */
        RCC_CR |= ( 1ul << PLLON );
        /* Wait for PLL1RDY = 1 (PLL is ready)*/
        while ( ( RCC_CR & ( 1ul << PLLRDY ) ) == 0 )
            ;
    }

    /* Wait till SYSCLK is stabilized (depending on selected clock) */
    while ( ( RCC_CFGR & RCC_CFGR_SWS ) != ( ( ulRCC_CFGR << 2 ) & RCC_CFGR_SWS ) )
        ;
}

static void InitialSetUpFosc()
{
    __System_CLOCK_IN_KHZ = 12345677;
}

static const char APBAHBPrescTable[ 16 ] = { 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 6, 7, 8, 9 }; // AHB {0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 6, 7, 8, 9}
static const char ADCPrescTable[ 4 ] = { 2, 4, 6, 8 };
static const char PPREPrescTable[] = { 0, 0, 0, 0, 1, 2, 3, 4 };

void RCC_GetClocksFrequency( RCC_ClocksTypeDef * RCC_Clocks )
{
    unsigned long tmp, presc, presc1, presc2;

    RCC_Clocks->HCLK_Frequency = Get_Fosc_kHz() * 1000;

    /* Compute HCLK, PCLK clocks frequencies */
    /* Get HCLK prescaler */
    tmp = RCC_CFGR & RCC_CFGR_HPRE;
    tmp = tmp >> 4;
    presc = APBAHBPrescTable[ tmp ];

    /* HCLK clock frequency */
    RCC_Clocks->SYSCLK_Frequency = RCC_Clocks->HCLK_Frequency << presc;

    /* Get PCLK1 prescaler */
    tmp = RCC_CFGR & RCC_CFGR_PPRE;
    tmp = tmp >> 8;

    /* PCLK1 clock frequency */
    presc1 = PPREPrescTable[ tmp ];
    RCC_Clocks->PCLK1_Frequency = RCC_Clocks->HCLK_Frequency >> presc1;

    /* Get PCLK2 prescaler */
    tmp = RCC_CFGR & 0x00003800;
    tmp = tmp >> 11;

    /* PCLK2 clock frequency */
    presc2 = PPREPrescTable[ tmp ];
    RCC_Clocks->PCLK2_Frequency = RCC_Clocks->HCLK_Frequency >> presc2;
}
