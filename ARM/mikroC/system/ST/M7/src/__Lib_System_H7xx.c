#include "RCC_typedef_H7.h"
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

static const char APBPrescTable[ 8 ] = { 1, 2, 3, 4, 6, 7, 8, 9 };
static const char APB3_4PrescTable[ 8 ] = { 1, 0, 0, 0, 2, 4, 8, 16 };

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
    asm nop
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

#define RCC_CFGR_SWS (0x00000038) /* System Clock Switch Status */

#define VR_1150_1260 2 /* Voltage range 1.15V to 1.26V */
#define VR_1050_1150 1 /* Voltage range 1.05V to 1.15V */
#define VR_0950_1050 0 /* Voltage range 0.95V to 1.05V */

void RCC_GetClocksFrequency( RCC_ClocksTypeDef * RCC_Clocks )
{
    unsigned long tmp = 0, presc1 = 0, presc2 = 0;

    /* Get System clock */
    RCC_Clocks->SYSCLK_Frequency = Get_Fosc_kHz() * 1000;

    /* Get HCLK prescaler */
    if ( RCC_D1CFGR & 0x08 ) {
        tmp    = RCC_D1CFGR & 0x07;
        presc1 = APBPrescTable[ tmp ];
    } else {
        presc1 = 0;
    }

    /* Get D1C prescaler */
    if ( RCC_D1CFGR & 0x0800 ) {
        tmp    = ( RCC_D1CFGR & 0x0700 ) >> 8;
        presc2 = APBPrescTable[ tmp ];
    } else {
        presc2 = 0;
    }

    /* HCLK clock frequency */
    RCC_Clocks->HCLK_Frequency = RCC_Clocks->SYSCLK_Frequency >> ( presc1 + presc2 );

    /* Get PCLK1 prescaler */
    if ( RCC_D2CFGR & 0x40 ) {
        tmp    = ( RCC_D2CFGR & 0x30 ) >> 4;
        presc1 = APBPrescTable[ tmp ];
    } else {
        presc1 = 0;
    }

    /* PCLK1 clock frequency */
    RCC_Clocks->PCLK1_Frequency = RCC_Clocks->HCLK_Frequency >> presc1;

    /* Get PCLK2 prescaler */
    if ( RCC_D2CFGR & 0x0E00 ) {
        tmp    = ( RCC_D2CFGR & 0x06 ) >> 8;
        presc1 = APBPrescTable[ tmp ];
    } else {
        presc1 = 0;
    }

    /* PCLK2 clock frequency */
    RCC_Clocks->PCLK2_Frequency = RCC_Clocks->HCLK_Frequency >> presc1;

    /* Get PCLK3 prescaler */
    if ( RCC_D1CFGR & 0x40 ) {
        tmp    = ( RCC_D1CFGR & 0x70 ) >> 4;
        presc1 = APB3_4PrescTable[ tmp ];
    } else {
        presc1 = APB3_4PrescTable[ 0 ];
    }

    /* PCLK3 clock frequency */
    RCC_Clocks->PCLK3_Frequency = ( RCC_Clocks->HCLK_Frequency ) / presc1;

    /* PCLK4 clock frequency */
    /* Always has the same value as PCLK3 */
    RCC_Clocks->PCLK4_Frequency = RCC_Clocks->PCLK3_Frequency;
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
 * @return None
 *
 */
static void SystemClockSetDefault( void )
{
    /* Set HSION bit */
    RCC_CR |= ( unsigned long )0x00000001;

    /* Reset CFGR register */
    RCC_CFGR = 0x00000000;

    /* Reset HSEON, CSSON , CSION,RC48ON, CSIKERON PLL1ON, PLL2ON and PLL3ON bits */
    RCC_CR &= ( unsigned long )0xEAF6ED7F;

    /* Reset D1CFGR register */
    RCC_D1CFGR = 0x00000000;

    /* Reset D2CFGR register */
    RCC_D2CFGR = 0x00000000;

    /* Reset D3CFGR register */
    RCC_D3CFGR = 0x00000000;

    /* Reset PLLCKSELR register */
    RCC_PLLCKSELR = 0x00000000;

    /* Reset PLLCFGR register */
    RCC_PLLCFGR = 0x00000000;

    /* Reset PLL1DIVR register */
    RCC_PLL1DIVR = 0x00000200;
    /* Reset PLL1FRACR register */
    RCC_PLL1FRACR = 0x00000000;

    /* Reset PLL2DIVR register */
    RCC_PLL2DIVR = 0x00000200;

    /* Reset PLL2FRACR register */
    RCC_PLL2FRACR = 0x00000000;

    /* Reset PLL3DIVR register */
    RCC_PLL3DIVR = 0x00000200;

    /* Reset PLL3FRACR register */
    RCC_PLL3FRACR = 0x00000000;

    /* Reset HSEBYP bit */
    RCC_CR &= ( unsigned long )0xFFFBFFFF;

    /* Disable all interrupts */
    RCC_CICR = 0x00000000;
}

const _NVIC_PRIORITYGROUP_0 = ( ( unsigned long )0x00000007 ),
      _NVIC_PRIORITYGROUP_1 = ( ( unsigned long )0x00000006 ),
      _NVIC_PRIORITYGROUP_2 = ( ( unsigned long )0x00000005 ),
      _NVIC_PRIORITYGROUP_3 = ( ( unsigned long )0x00000004 ),
      _NVIC_PRIORITYGROUP_4 = ( ( unsigned long )0x00000003 );

#define SCB_AIR_VECTORKEY_POS  16
#define SCB_AIR_VECTORKEY_MASK ((unsigned long)(0xFFFFUL << SCB_AIR_VECTORKEY_POS))
#define SCB_AIR_PRIGROUP_POS   8
#define SCB_AIR_PRIGROUP_MASK  ((unsigned long)(0x7UL << SCB_AIR_PRIGROUP_POS))

static void InitialSetUpRCCRCC2()
{
    unsigned long volatile ulRCC_CR, ulRCC_CFGR, ulRCC_D1CFGR, ulRCC_D2CFGR, ulRCC_D3CFGR;
    unsigned long volatile ulRCC_PLLCKSELR, ulRCC_PLLCFGR, ulRCC_PLL1DIVR, ulRCC_PLL2DIVR, ulRCC_PLL3DIVR, ulRCC_CSR, ulRCC_BDCR, ulPWR_D3CR;
    unsigned long Fosc_kHz;

    ulRCC_CR = 12345678;
    ulRCC_CFGR = 12345679;
    ulRCC_D1CFGR = 12345680;
    ulRCC_D2CFGR = 12345681;
    ulRCC_D3CFGR = 12345682;
    ulRCC_PLLCKSELR = 12345683;
    ulRCC_PLLCFGR = 12345684;
    ulRCC_PLL1DIVR = 12345685;
    ulRCC_PLL2DIVR = 12345686;
    ulRCC_PLL3DIVR = 12345687;
    ulRCC_BDCR = 12345688;
    ulRCC_CSR = 12345689;
    ulPWR_D3CR = 12345690;
    Fosc_kHz = 12345677;

    SystemClockSetDefault();

    /* Enable power clock */
    RCC_APB1HENR |= 0x00000010;

    /* set VCORE */
    if ( ulPWR_D3CR == 0x0000C000 ) {
        _VOLTAGE_RANGE = VR_1150_1260;
    } else if ( ulPWR_D3CR == 0x00008000 ) {
        _VOLTAGE_RANGE = VR_1050_1150;
    } else if ( ulPWR_D3CR == 0x00004000 ) {
        _VOLTAGE_RANGE = VR_0950_1050;
    }
    PWR_D3CR = ulPWR_D3CR;

    if ( _VOLTAGE_RANGE == VR_1150_1260 ) {
        if ( Fosc_kHz > 225000 )
            Flash_ACR &= 0x24;
        else if ( Fosc_kHz > 210000 )
            Flash_ACR &= 0x23;
        else if ( Fosc_kHz > 185000 )
            Flash_ACR &= 0x22;
        else if ( Fosc_kHz > 140000 )
            Flash_ACR &= 0x12;
        else if ( Fosc_kHz > 70000 )
            Flash_ACR &= 0x11;
        else
            Flash_ACR &= 0;
    } else if ( _VOLTAGE_RANGE == VR_1050_1150 ) {
        if ( Fosc_kHz >= 225000 )
            Flash_ACR &= 0x24;
        else if ( Fosc_kHz > 165000 )
            Flash_ACR &= 0x23;
        else if ( Fosc_kHz > 110000 )
            Flash_ACR &= 0x12;
        else if ( Fosc_kHz > 55000 )
            Flash_ACR &= 0x11;
        else
            Flash_ACR &= 0;
    } else if ( _VOLTAGE_RANGE == VR_0950_1050 ) {
        if ( Fosc_kHz > 225000 )
            Flash_ACR &= 0x24;
        else if ( Fosc_kHz > 180000 )
            Flash_ACR &= 0x24;
        else if ( Fosc_kHz > 135000 )
            Flash_ACR &= 0x23;
        else if ( Fosc_kHz > 90000 )
            Flash_ACR &= 0x12;
        else if ( Fosc_kHz > 45000 )
            Flash_ACR &= 0x11;
        else
            Flash_ACR &= 0;
    }

    /* Set clock configuration register 2 */
    RCC_CFGR = ulRCC_CFGR;

    /* Do not start PLLs yet */
    RCC_CR = ( ulRCC_CR & 0x000FF3BF );

    /* Set PLL prescaler register */
    RCC_PLLCKSELR = ulRCC_PLLCKSELR;

    /* Set clock configuration register */
    RCC_PLLCFGR = ulRCC_PLLCFGR;

    /* Set LSI clock */
    RCC_CSR = ulRCC_CSR;

    /* Set LSE clock */
    RCC_BDCR = ulRCC_BDCR;

    /* Set clock domain 1 */
    RCC_D1CFGR = ulRCC_D1CFGR;

    /* Set clock domain 2 */
    RCC_D2CFGR = ulRCC_D2CFGR;

    /* Set clock domain 3 */
    RCC_D3CFGR = ulRCC_D3CFGR;

    /* Set PLL1 configuration register */
    RCC_PLL1DIVR = ulRCC_PLL1DIVR;

    /* Set PLL2 configuration register */
    RCC_PLL2DIVR = ulRCC_PLL2DIVR;

    /* Set PLL3 configuration register */
    RCC_PLL3DIVR = ulRCC_PLL3DIVR;

    /* if HSI enabled */
    if ( ulRCC_CR & ( 1ul << HSION ) ) {
        /* Wait for HSIRDY = 1 (HSI is ready) */
        while ( ( RCC_CR & ( 1ul << HSIRDY ) ) == 0 )
            ;
    }

    /* if HSE enabled */
    if ( ulRCC_CR & ( 1ul << HSEON ) ) {
        /* Wait for HSERDY = 1 (HSE is ready) */
        while ( ( RCC_CR & ( 1ul << HSERDY ) ) == 0 )
            ;
    }

    /* if PLL1 enabled */
    if ( ulRCC_CR & ( 1ul << PLL1ON ) ) {
        /* PLL1 On */
        RCC_CR |= ( 1ul << PLL1ON );
        /* Wait for PLL1RDY = 1 (PLL1 is ready) */
        while ( ( RCC_CR & ( 1ul << PLL1RDY ) ) == 0 )
            ;
    }

    /* if PLL2 enabled */
    if ( ulRCC_CR & ( 1ul << PLL2ON ) ) {
        /* PLL2 On */
        RCC_CR |= ( 1ul << PLL2ON );
        /* Wait for PLL2RDY = 1 (PLL2 is ready) */
        while ( ( RCC_CR & ( 1ul << PLL2RDY ) ) == 0 )
            ;
    }

    /* if PLL3 enabled */
    if ( ulRCC_CR & ( 1ul << PLL3ON ) ) {
        /* PLL3 On */
        RCC_CR |= ( 1ul << PLL3ON );
        /* Wait for PLL3RDY = 1 (PLL3 is ready) */
        while ( ( RCC_CR & ( 1ul << PLL3RDY ) ) == 0 )
            ;
    }

    /* Wait till SYSCLK is stabilized (depending on selected clock) */
    while ( ( RCC_CFGR & RCC_CFGR_SWS ) != ( ( ulRCC_CFGR << 3 ) & RCC_CFGR_SWS ) )
        ;
}
