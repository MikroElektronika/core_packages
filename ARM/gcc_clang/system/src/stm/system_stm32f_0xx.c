#include "system_stm32f_0xx.h"
#include "stdint.h"
#include "core_header.h"
#include "common.h"
#include "mcu.h"

#define ADDRESS_SCB_AIRCR     0xE000ED0C
#define ADDRESS_RCC_CR        0x40021000
#define ADDRESS_RCC_CR2       0x40021034
#define ADDRESS_RCC_CFGR      0x40021004
#define ADDRESS_RCC_CFGR2     0x4002102C
#define ADDRESS_RCC_CFGR3     0x40021030
#define ADDRESS_RCC_CSR       0x40021024
#define ADDRESS_FLASH_ACR     0x40022000

#define SCB_AIRCR_SYSRESETREQ 2

#define CPU_APSR              (0)
#define CPU_IAPSR             (1)
#define CPU_EAPSR             (2)
#define CPU_XPSR              (3)
#define CPU_IPSR              (5)
#define CPU_EPSR              (6)
#define CPU_IEPSR             (7)
#define CPU_MSP               (8)
#define CPU_PSP               (9)
#define CPU_PRIMASK           (16)
#define CPU_BASEPRI           (17)
#define CPU_BASEPRI_MAX       (18)
#define CPU_FAULTMASK         (19)
#define CPU_CONTROL           (20)

static const char APBAHBPrescTable[ 16 ] = { 0, 0, 0, 0, 1, 2, 3, 4, 1, 2, 3, 4, 6, 7, 8, 9 };
static const char ADCPrescTable[ 2 ] = { 2, 4 };

/**
 * @brief Resets the device.
 * @details This function will perform a software reset of the entire device. The
 *          processor and all peripherals are reset and all device registers will
 *          return to their default values (with the exception of the reset cause
 *          register, which will maintain its current value but have the software
 *          reset bit set as well).
 * @return This function does not return.
 */
void SystemReset( void )
{
    // Perform a software reset request. This will cause the device to reset,
    // no further code is executed.
    _REG_VALUE_CLEAR_SET_( *( uint32_t * )ADDRESS_SCB_AIRCR, 0x05FA0000 | ( 1ul << SCB_AIRCR_SYSRESETREQ ) );
    // The device should have reset, so this should never be reached. Just in
    // case, loop forever.
    while ( 1 ) {
    }
}

/**
 * @brief Resets the RCC clock configuration to the default reset state.
 * @note   The default reset state of the clock configuration is given below:
 *            - HSI ON and used as system clock source
 *            - HSE, PLL and PLLI2S OFF
 *            - AHB, APB1 and APB2 prescaler set to 1.
 *            - CSS, MCO1 and MCO2 OFF
 *            - All interrupts disabled (not used)
 * @note   This function doesn't modify the configuration of the
 *            - Peripheral clocks
 *            - LSI, LSE and RTC clocks
 * @param None
 * @retval None
 */
static void systemClockSetDefault( void )
{
    /* Set HSION bit */
    _REG_VALUE_SET_BIT_( RCC->CR, RCC_CR_HSION_Pos );

    /* Reset SW[1:0], HPRE[3:0], PPRE[2:0], ADCPRE and MCOSEL[2:0] bits */
    _REG_VALUE_CLEAR_MASK_( RCC->CFGR, 0xF8FFB80C );

    /* Reset HSEON, CSSON and PLLON bits */
    _REG_VALUE_CLEAR_MASK_( RCC->CR, 0xFEF6FFFF );

    /* Reset HSEBYP bit */
    _REG_VALUE_CLEAR_BIT_( RCC->CR, RCC_CR_HSEBYP_Pos );

    /* Reset PLLSRC, PLLXTPRE and PLLMUL[3:0] bits */
    _REG_VALUE_CLEAR_MASK_( RCC->CFGR, 0xFFC0FFFF );

    /* Reset PREDIV1[3:0] bits */
    _REG_VALUE_CLEAR_MASK_( RCC->CFGR2, ~RCC_CFGR2_PREDIV_Msk );

    /* Reset USARTSW[1:0], I2CSW, CECSW and ADCSW bits */
    _REG_VALUE_CLEAR_MASK_( RCC->CFGR3, 0xFFFFFEAC );

    /* Reset HSI14 bit */
    _REG_VALUE_CLEAR_BIT_( RCC->CR2, RCC_CR2_HSI14ON_Pos );
}

void systemInit()
{
    uint32_t tmp, sys_clk, presc;

    tmp = VALUE_RCC_CFGR & 0x000000F0;
    tmp = tmp >> 4;
    presc = APBAHBPrescTable[ tmp ];

    sys_clk = FOSC_KHZ_VALUE << presc;

    if ( sys_clk > 24000 )
        _REG_VALUE_SET_( FLASH->ACR, FLASH_ACR_LATENCY );
    else
        _REG_VALUE_CLEAR_MASK_( FLASH->ACR, 0xFFFFFFF8 );

    systemClockSetDefault();

    _REG_VALUE_CLEAR_SET_( RCC->CFGR, VALUE_RCC_CFGR );          /* set clock configuration register */
    _REG_VALUE_CLEAR_SET_( RCC->CFGR2, VALUE_RCC_CFGR2 );        /* set clock configuration register 2 */
    _REG_VALUE_CLEAR_SET_( RCC->CR, VALUE_RCC_CR & 0x000FFFFF ); /* do not start PLLs yet */
    _REG_VALUE_CLEAR_SET_( RCC->CSR, VALUE_RCC_CSR );
    _REG_VALUE_CLEAR_SET_( RCC->CR2, VALUE_RCC_CR2 );

    if ( VALUE_RCC_CR & ( 1ul << RCC_CR_HSION_Pos ) ) {   /* if HSI enabled*/
        while ( _REG_VALUE_GET_BIT_( RCC->CR, RCC_CR_HSIRDY_Pos ) == 0 )
            ;                                             /* Wait for RCC_CR_HSIRDY_Pos = 1 (HSI is ready)*/
    }

    if ( VALUE_RCC_CR & ( 1ul << RCC_CR_HSEON_Pos ) ) {   /* if HSE enabled*/
        while ( _REG_VALUE_GET_BIT_( RCC->CR, RCC_CR_HSERDY_Pos ) == 0 )
            ;                                             /* Wait for RCC_CR_HSERDY_Pos = 1 (HSE is ready)*/
    }

    if ( VALUE_RCC_CR & ( 1ul << RCC_CR_PLLON_Pos ) ) {   /* if PLL enabled*/
        _REG_VALUE_SET_BIT_( RCC->CR, RCC_CR_PLLON_Pos ); /* PLL On */
        while ( _REG_VALUE_GET_BIT_( RCC->CR, RCC_CR_PLLRDY_Pos ) == 0 )
            ;                                             /* Wait for PLL1RDY = 1 (PLL is ready)*/
    }

    /* Wait till SYSCLK is stabilized (depending on selected clock) */
    while ( ( _REG_VALUE_GET_( RCC->CFGR ) & RCC_CFGR_SWS_Msk ) != ( ( VALUE_RCC_CFGR << 2 ) & RCC_CFGR_SWS_Msk ) )
        ;
}

void RCC_GetClocksFrequency( RCC_ClocksTypeDef * RCC_Clocks )
{
    uint32_t tmp, presc;

    RCC_Clocks->HCLK_Frequency = FOSC_KHZ_VALUE * 1000;

    /* Compute HCLK, PCLK clocks frequencies -----------------------------------*/
    /* Get HCLK prescaler */
    tmp = _REG_VALUE_GET_( RCC->CFGR ) & RCC_CFGR_HPRE_Msk;
    tmp = tmp >> RCC_CFGR_HPRE_Pos;
    presc = APBAHBPrescTable[ tmp ];
    /* HCLK clock frequency */
    RCC_Clocks->SYSCLK_Frequency = RCC_Clocks->HCLK_Frequency << presc;

    /* Get PCLK prescaler */
    tmp = _REG_VALUE_GET_( RCC->CFGR ) & RCC_CFGR_PPRE_Msk;
    tmp = tmp >> RCC_CFGR_PPRE_Pos;
    presc = APBAHBPrescTable[ tmp ];
    /* PCLK clock frequency */
    RCC_Clocks->PCLK_Frequency = RCC_Clocks->HCLK_Frequency >> presc;

    /* Get ADC clock frequency */
    if ( _REG_VALUE_GET_( RCC->CR ) & RCC_CR2_HSI14ON_Pos ) { // ADC Clock 14MHz
        RCC_Clocks->ADCCLK_Frequency = 14000000;
    } else if ( RCC_Clocks->PCLK_Frequency > 24000000 ) {
        RCC_Clocks->ADCCLK_Frequency = RCC_Clocks->PCLK_Frequency >> 2;
    } else {
        RCC_Clocks->ADCCLK_Frequency = RCC_Clocks->PCLK_Frequency >> 1;
    }
}
