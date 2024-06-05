#include "system_stm32l_0xx.h"
#include "stdint.h"
#include "core_header.h"
#include "common.h"
#include "mcu.h"

#define ADDRESS_SCB_AIRCR     0xE000ED0C
#define SCB_AIRCR_SYSRESETREQ 2

// Category 1 devices do not feature HSE clock security system (CSS).
#if !defined(RCC_CR_CSSHSEON)
#define CATEGORY_1_DEVICE
#endif

static const char APBAHBPrescTable[ 16 ] = { 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 6, 7, 8, 9 };
static const char ADCPrescTable[ 4 ] = { 2, 4, 6, 8 };
static const char PPREPrescTable[] = { 0, 0, 0, 0, 1, 2, 3, 4 };

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

    /* Reset SW[1:0], HPRE[3:0], PPRE1[2:0], PPRE2[2:0], MCOSEL[3:0] bits */
    _REG_VALUE_CLEAR_MASK_( RCC->CFGR, 0xF0FFC00CUL );

    /* Reset HSEON, CSSON and PLLON bits */
    _REG_VALUE_CLEAR_BIT_( RCC->CR, RCC_CR_HSEON_Pos );
#if !defined( CATEGORY_1_DEVICE )
    _REG_VALUE_CLEAR_BIT_( RCC->CR, RCC_CR_CSSHSEON_Pos );
#endif
    _REG_VALUE_CLEAR_BIT_( RCC->CR, RCC_CR_PLLON_Pos );

    /* Reset HSEBYP bit */
    _REG_VALUE_CLEAR_BIT_( RCC->CR, RCC_CR_HSEBYP_Pos );

    /* Reset PLLSRC and PLLMUL[3:0] bits */
    _REG_VALUE_CLEAR_MASK_( RCC->CFGR, 0xFFC2FFFFUL );
}

void systemInit()
{
    _REG_VALUE_SET_( PWR->CR, VALUE_PWR_CR );

    // latency depends from system freq and core voltage
    // voltage range 1 - 1.8V
    if ( ( VALUE_PWR_CR & 0x00001800UL ) == 0x00000800UL ) {
        if ( FOSC_KHZ_VALUE > 16000 ) {
            _REG_VALUE_SET_BIT_( FLASH->ACR, FLASH_ACR_LATENCY_Pos );
            while ( _REG_VALUE_GET_BIT_( FLASH->ACR, FLASH_ACR_LATENCY_Pos ) == 0 )
                ;
        } else {
            _REG_VALUE_CLEAR_BIT_( FLASH->ACR, FLASH_ACR_LATENCY_Pos );
            while ( _REG_VALUE_GET_BIT_( FLASH->ACR, FLASH_ACR_LATENCY_Pos ) == 1 )
                ;
        }
    } else if ( ( VALUE_PWR_CR & 0x00001800UL ) == 0x00001000UL ) { // range 2 1.5V default
        if ( FOSC_KHZ_VALUE > 8000 ) {
            _REG_VALUE_SET_BIT_( FLASH->ACR, FLASH_ACR_LATENCY_Pos );
            while ( _REG_VALUE_GET_BIT_( FLASH->ACR, FLASH_ACR_LATENCY_Pos ) == 0 )
                ;
        } else {
            _REG_VALUE_CLEAR_BIT_( FLASH->ACR, FLASH_ACR_LATENCY_Pos );
            while ( _REG_VALUE_GET_BIT_( FLASH->ACR, FLASH_ACR_LATENCY_Pos ) == 1 )
                ;
        }
    } else if ( ( VALUE_PWR_CR & 0x00001800UL ) == 0x00001800UL ) { // range 3 1.2V default
        _REG_VALUE_CLEAR_BIT_( FLASH->ACR, FLASH_ACR_LATENCY_Pos );
        while ( _REG_VALUE_GET_BIT_( FLASH->ACR, FLASH_ACR_LATENCY_Pos ) == 1 )
            ;
    }

    _REG_VALUE_SET_BIT_( FLASH->ACR, FLASH_ACR_PRFTEN_Pos );

    systemClockSetDefault();

#ifdef VALUE_RCC_CRRCR
    _REG_VALUE_CLEAR_SET_( RCC->CRRCR, VALUE_RCC_CRRCR );
#endif

    _REG_VALUE_CLEAR_SET_( RCC->CFGR, VALUE_RCC_CFGR );                     /* set clock configuration register */

    _REG_VALUE_CLEAR_SET_( RCC->CR, VALUE_RCC_CR & 0x000FFFFF );            /* do not start PLLs yet */

#ifdef VALUE_RCC_CRRCR
    if ( VALUE_RCC_CRRCR & ( 1ul << RCC_CRRCR_HSI48ON_Pos ) ) {             /* if HSI48 enabled*/
        _REG_VALUE_SET_BIT_( RCC->APB2ENR, RCC_APB2ENR_SYSCFGEN_Pos );      // System configuration controller clock enable bit

        _REG_VALUE_SET_BIT_( SYSCFG->CFGR3, SYSCFG_CFGR3_ENREF_HSI48_Pos ); // VREFINT reference for HSI48 oscillator enabled

        while ( _REG_VALUE_GET_BIT_( RCC->CRRCR, RCC_CRRCR_HSI48RDY_Pos ) == 0 )
            ;                                                               /* Wait for HSI48RDY = 1 (HSI48 is ready)*/
    }

#endif
    if ( VALUE_RCC_CR & ( 1ul << RCC_CR_HSION_Pos ) ) {   /* if HSI enabled*/
        while ( _REG_VALUE_GET_BIT_( RCC->CR, RCC_CR_HSIRDY_Pos ) == 0 )
            ;                                             /* Wait for HSIRDYF = 1 (HSI is ready)*/
    }

    if ( VALUE_RCC_CR & ( 1ul << RCC_CR_HSEON_Pos ) ) {   /* if HSE enabled*/
        while ( _REG_VALUE_GET_BIT_( RCC->CR, RCC_CR_HSERDY_Pos ) == 0 )
            ;                                             /* Wait for HSERDY = 1 (HSE is ready)*/
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
    uint32_t tmp, presc, presc1, presc2;

    RCC_Clocks->HCLK_Frequency = FOSC_KHZ_VALUE * 1000;

    /* Compute HCLK, PCLK clocks frequencies --------------------------------*/
    /* Get HCLK prescaler */
    tmp = _REG_VALUE_GET_( RCC->CFGR ) & RCC_CFGR_HPRE_Msk;
    tmp = tmp >> RCC_CFGR_HPRE_Pos;
    presc = APBAHBPrescTable[ tmp ];
    /* HCLK clock frequency */
    RCC_Clocks->SYSCLK_Frequency = RCC_Clocks->HCLK_Frequency << presc;
    /* Get PCLK1 prescaler */
    tmp = _REG_VALUE_GET_( RCC->CFGR ) & RCC_CFGR_PPRE1_Msk;
    tmp = tmp >> RCC_CFGR_PPRE1_Pos;
    /* PCLK1 clock frequency */
    presc1 = PPREPrescTable[ tmp ];
    RCC_Clocks->PCLK1_Frequency = RCC_Clocks->HCLK_Frequency >> presc1;
    /* Get PCLK2 prescaler */
    tmp = _REG_VALUE_GET_( RCC->CFGR ) & RCC_CFGR_PPRE2_Msk;
    tmp = tmp >> RCC_CFGR_PPRE2_Pos;
    /* PCLK2 clock frequency */
    presc2 = PPREPrescTable[ tmp ];
    RCC_Clocks->PCLK2_Frequency = RCC_Clocks->HCLK_Frequency >> presc2;
}
