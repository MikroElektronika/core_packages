#include "RCC_typedef_G0.h"

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

void _Div_32x32_U( void );

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

/**
 * @brief Goes into an infinite loop.
 * @return None.
 */
void __GenExcept()
{
    while ( 1 ) {
    }
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
    //  Perform a software reset request.  This will cause the device to reset,
    //  no further code is executed.
    SCB_AIRCR = 0x05FA0000 | ( 1ul << SYSRESETREQ );
    //  The device should have reset, so this should never be reached.  Just in
    //  case, loop forever.
    while ( 1 ) {
    }
}

/* ----------------------------PRIVATE MACROS-------------------------------- */

#define RCC_CFGR_SWS    (0x00000038) /* System Clock Switch Status */
#define RCC_CFGR_HPRE   (0x00000F00) /* HLCK Prescaler */
#define RCC_CFGR_PPRE   (0x00007000) /* PCLK Prescaler */
#define PWR_VOS_RANGE_1 (0x00000200) /* Voltage scaling range 1 */
#define PWR_VOS_RANGE_2 (0x00000400) /* Voltage scaling range 2 */
#define ZERO_WAIT_STATE (0x00000000) /* Flash memory access latency */
#define ONE_WAIT_STATE  (0x00000002) /* Flash memory access latency */
#define TWO_WAIT_STATE  (0x00000004) /* Flash memory access latency */

/**
 * @brief Resets the RCC clock configuration to the default reset state.
 * @details The default reset state of the clock configuration is as follows:
 *          - HSI ON and used as system clock source
 *          - HSE, PLL, and PLLI2S OFF
 *          - AHB, APB1, and APB2 prescaler set to 1
 *          - CSS, MCO1, and MCO2 OFF
 *          - All interrupts disabled (not used)
 *          This function does not modify the configuration of:
 *          - Peripheral clocks
 *          - LSI, LSE, and RTC clocks
 * @return None.
 */
static void SystemClockSetDefault( void )
{
    /*  Enable Syscfg clock  */
    RCC_APBENR1.B28 = 1;

    /*  Enable PWR clock  */
    RCC_APBENR2.B0 = 1;

    /*  Reset PLLSRC[1:0]  */
    RCC_PLLSYSCFGR &= ( unsigned long )0x00000003;

    /*  Set HSION bit  */
    RCC_CR |= ( unsigned long )0x00000100;

    /*  Set latency to RANGE 2 (VOS1 = 1)  */
    PWR_CR1 |= ( unsigned long )0x00000400;

    /*  Reset everything but SWS(System clock switch status) */
    RCC_CFGR &= ( unsigned long )0x00000038;

    /*  Reset HSEON, CSSON and PLLON bits  */
    RCC_CR &= ( unsigned long )0xFEF2FFFF;
}

/**
 * @brief Sets correct flash latency.
 * @details Flash latency is dependent on HCLK only.
 *          Range is selected by writing 1 or 0 to VOS bit of PWR1_CR1 register.
 * @note Flash latency is dependent on HCLK only.
 * @return None.
 */
static void set_core_latency( unsigned long core_voltage_value,
                              unsigned long hclk_freq )
{
    /*  Latency depends on HCLK frequency  */
    /*  Range 2  */
    if ( core_voltage_value & PWR_VOS_RANGE_2 ) {
        if ( hclk_freq <= 8000 ) {
            FLASH_ACR |= ZERO_WAIT_STATE;
            while ( ( FLASH_ACR & ZERO_WAIT_STATE ) != ZERO_WAIT_STATE )
                ;
        } else {
            FLASH_ACR |= ONE_WAIT_STATE;
            while ( ( FLASH_ACR & ONE_WAIT_STATE ) != ONE_WAIT_STATE )
                ;
        }
        PWR_CR1 |= PWR_VOS_RANGE_2;
    /*  Range 1  */
    } else if ( core_voltage_value & PWR_VOS_RANGE_1 ) {
        /*  First set the VOS value */
        PWR_CR1 |= PWR_VOS_RANGE_1;

        /*  Wait for voltage scaling flag to be cleared  */
        while ( PWR_SR2.B10 )
            ;

        /*  Then set the flash latency value  */
        if ( hclk_freq <= 24000 ) {
            FLASH_ACR |= ZERO_WAIT_STATE;
            while ( ( FLASH_ACR & ZERO_WAIT_STATE ) != ZERO_WAIT_STATE )
                ;
        } else if ( ( 24000 < hclk_freq ) & ( hclk_freq <= 48000 ) ) {
            FLASH_ACR |= ONE_WAIT_STATE;
            while ( ( FLASH_ACR & ONE_WAIT_STATE ) != ONE_WAIT_STATE )
                ;
        } else {
            FLASH_ACR |= TWO_WAIT_STATE;
            while ( ( FLASH_ACR & TWO_WAIT_STATE ) != TWO_WAIT_STATE )
                ;
        }
    }
}

/**
 * @brief Checks if activated clocks are stable.
 * @return None.
 */
void is_clock_stable( void )
{
    /*  If HSI enabled  */
    if ( RCC_CR & ( 1ul << HSION ) ) {
        /*  Wait for HSIRDYF = 1 (HSI is ready)  */
        while ( ( RCC_CR & ( 1ul << HSIRDY ) ) == 0 )
            ;
    }

    /*  If HSE enabled  */
    if ( RCC_CR & ( 1ul << HSEON ) ) {
        /*  Wait for HSERDY = 1 (HSE is ready)  */
        while ( ( RCC_CR & ( 1ul << HSERDY ) ) == 0 )
            ;
    }

    /*  If PLL enabled  */
    if ( RCC_CR & ( 1ul << PLLON ) ) {
        /*  Wait for PLL1RDY = 1 (PLL is ready)  */
        while ( ( RCC_CR & ( 1ul << PLLRDY ) ) == 0 )
            ;
    }

    /*  If LSI enabled  */
    if ( RCC_CSR & ( 1ul << LSION ) ) {
        /*  Wait for LSIRDY = 1 (LSI is ready)  */
        while ( ( RCC_CSR & ( 1ul << LSIRDY ) ) == 0 )
            ;
    }

    /*  If LSE enabled  */
    if ( RCC_BDCR & ( 1ul << LSEON ) ) {
        /*  Wait for LSERDY = 1 (LSE is ready)  */
        while ( ( RCC_BDCR & ( 1ul << LSERDY ) ) == 0 )
            ;
    }
}

/**
 * @brief Initial clock set-up.
 * @details This function sets up the initial clock configuration.
 * @return None.
 */
static void InitialSetUpRCCRCC2( void )
{
    unsigned long volatile ulRCC_CR,
        ulRCC_CFGR,
        ulRCC_PLLSYSCFGR,
        ulRCC_CCIPR,
        ulRCC_BDCR,
        ulRCC_CSR,
        ulPWR_CR1;
    unsigned long volatile Fosc_kHz;

    /*  Initial register values  */
    ulRCC_CR = 12345678;
    ulRCC_CFGR = 12345679;
    ulRCC_PLLSYSCFGR = 12345680;
    ulRCC_CCIPR = 12345681;
    ulRCC_BDCR = 12345682;
    ulRCC_CSR = 12345683;
    ulPWR_CR1 = 12345684;

    /*  Initial clock value  */
    Fosc_kHz = 12345677;

    /*  Set correct core latency  */
    set_core_latency( ulPWR_CR1, Fosc_kHz );
    /*  Turn prefetch on  */
    FLASH_ACR.PRFTEN = 1;

    /*  Set default clock settings  */
    SystemClockSetDefault();

    /*  Now set real values  */
    RCC_PLLSYSCFGR = ulRCC_PLLSYSCFGR;
    RCC_CR = ulRCC_CR;
    RCC_CFGR = ulRCC_CFGR;
    RCC_BDCR = ulRCC_BDCR;
    RCC_CSR = ulRCC_CSR;
    RCC_CCIPR = ulRCC_CCIPR;

    /*  Wait for clock to stabilize  */
    is_clock_stable();

    /*  Wait till SYSCLK is stabilized (depending on selected clock)  */
    while ( ( RCC_CFGR & RCC_CFGR_SWS ) != ( ( ulRCC_CFGR << 3 ) & RCC_CFGR_SWS ) )
        ;
}

/**
 * @brief Initial system clock value.
 * @details This function initializes the system clock value.
 * @return None.
 */
static void InitialSetUpFosc( void )
{
    __System_CLOCK_IN_KHZ = 12345677;
}

/* Prescaler tables */
static const char AHBPrescTable[ 8 ] = { 1, 2, 4, 8, 32, 64, 128, 256 };
static const char APBPrescTable[ 4 ] = { 2, 4, 8, 16 };

/**
 * @brief Get the correct prescaler and divider values.
 * @details This function calculates and returns the correct prescaler and divider values
 *          based on the system requirements.
 * @param[out] prescaler The calculated prescaler value.
 * @param[out] divider The calculated divider value.
 * @return None.
 */
void RCC_GetClocksFrequency( RCC_ClocksTypeDef * RCC_Clocks )
{
    unsigned long tmp, presc, presc1, presc2;

    RCC_Clocks->HCLK_Frequency = Get_Fosc_kHz() * 1000;

    /*  Compute SYSCLK, PCLK clocks frequencies  */
    /*  Get HCLK prescaler  */
    tmp = RCC_CFGR & RCC_CFGR_HPRE;
    tmp = tmp >> 8;
    if ( tmp & 0x08 )
        presc = 1;
    else {
        tmp &= 0x07;
        presc = AHBPrescTable[ tmp ];
    }

    /*  SYSCLK clock frequency  */
    RCC_Clocks->SYSCLK_Frequency = RCC_Clocks->HCLK_Frequency * presc;

    /*  Get PCLK prescaler  */
    tmp = RCC_CFGR & RCC_CFGR_PPRE;
    tmp = tmp >> 12;
    if ( !tmp ) {
        /*  PCLK clock prescaler is 1  */
        presc1 = 1;
        /*  TPCLK prescaler is 1  */
        presc2 = 1;
    } else {
        tmp &= 0x03;
        /*  PCLK clock prescaler  */
        presc1 = APBPrescTable[ tmp ];
        /*  TPCLK prescaler is 2  */
        presc2 = 2;
    }

    /*  PCLK clock frequency  */
    RCC_Clocks->PCLK_Frequency = RCC_Clocks->HCLK_Frequency / presc1;

    /*  Get TPCLK prescaler  */
    /*  TPCLK clock is calculated in the following way:
        If APB Prescaler = 1 then TPCLK prescaler is x1
        else if APB Presc > 1 then TPCLK presc is x2  */
    RCC_Clocks->TPCLK_Frequency = RCC_Clocks->PCLK_Frequency * presc2;
}
