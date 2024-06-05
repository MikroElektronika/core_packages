#include "system_stm32l_1xx.h"
#include "stdint.h"
#include "core_header.h"
#include "common.h"
#include "mcu.h"

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

#define ADDRESS_SCB_AIRCR     (0xE000ED0C)
#define SCB_AIRCR_SYSRESETREQ (2)

static const char PLLMulTable[ 9 ] = { 3, 4, 6, 8, 12, 16, 24, 32, 48 };
static const char APBAHBPrescTable[ 16 ] = { 0, 0, 0, 0, 1, 2, 3, 4, 1, 2, 3, 4, 6, 7, 8, 9 };

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

// VCORE = 1.2
#define VC_1200 0
// VCORE = 1.2
#define VC_1500 1
// VCORE = 1.8
#define VC_1800 2

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
    /*!< Set MSION bit */
    _REG_VALUE_SET_BIT_( RCC->CR, RCC_CR_MSION_Pos );

    /*!< Reset SW[1:0], HPRE[3:0], PPRE1[2:0], PPRE2[2:0], MCOSEL[2:0] and MCOPRE[2:0] bits */
    _REG_VALUE_CLEAR_MASK_( RCC->CFGR, 0x88FFC00CUL );

    /*!< Reset HSION, HSEON, CSSON and PLLON bits */
    _REG_VALUE_CLEAR_MASK_( RCC->CR, 0xEEFEFFFEUL );

    /*!< Reset HSEBYP bit */
    _REG_VALUE_CLEAR_BIT_( RCC->CR, RCC_CR_HSEBYP_Pos );

    /*!< Reset PLLSRC, PLLMUL[3:0] and PLLDIV[1:0] bits */
    _REG_VALUE_CLEAR_MASK_( RCC->CFGR, 0xFF02FFFFUL );

    /*!< Disable all interrupts */
    _REG_VALUE_CLEAR_( RCC->CIR );
}

void systemInit()
{
    if ( VALUE_SVCORE == VC_1200 ) {
        if ( FOSC_KHZ_VALUE > 2000 ) {
            _REG_VALUE_SET_BIT_( FLASH->ACR, FLASH_ACR_ACC64_Pos );
            _REG_VALUE_SET_BIT_( FLASH->ACR, FLASH_ACR_PRFTEN_Pos );
            _REG_VALUE_SET_BIT_( FLASH->ACR, FLASH_ACR_LATENCY_Pos );
        } else {
            _REG_VALUE_CLEAR_BIT_( FLASH->ACR, FLASH_ACR_LATENCY_Pos );
        }
    } else if ( VALUE_SVCORE == VC_1500 ) {
        if ( FOSC_KHZ_VALUE > 8000 ) {
            _REG_VALUE_SET_BIT_( FLASH->ACR, FLASH_ACR_ACC64_Pos );
            _REG_VALUE_SET_BIT_( FLASH->ACR, FLASH_ACR_PRFTEN_Pos );
            _REG_VALUE_SET_BIT_( FLASH->ACR, FLASH_ACR_LATENCY_Pos );
        } else {
            _REG_VALUE_CLEAR_BIT_( FLASH->ACR, FLASH_ACR_LATENCY_Pos );
        }
    } else if ( VALUE_SVCORE == VC_1800 ) {
        if ( FOSC_KHZ_VALUE > 16000 ) {
            _REG_VALUE_SET_BIT_( FLASH->ACR, FLASH_ACR_ACC64_Pos );
            _REG_VALUE_SET_BIT_( FLASH->ACR, FLASH_ACR_PRFTEN_Pos );
            _REG_VALUE_SET_BIT_( FLASH->ACR, FLASH_ACR_LATENCY_Pos );
        } else {
            _REG_VALUE_CLEAR_BIT_( FLASH->ACR, FLASH_ACR_LATENCY_Pos );
        }
    }

    systemClockSetDefault();

    _REG_VALUE_SET_( RCC->CFGR, VALUE_RCC_CFGR );          /* set clock configuration register */
    _REG_VALUE_SET_( RCC->CR, VALUE_RCC_CR & 0x000FFFFF ); /* do not start PLLs yet */

    if ( VALUE_RCC_CR & ( 1ul << RCC_CR_HSION_Pos ) ) {    /* if HSI enabled*/
        while ( _REG_VALUE_GET_BIT_( RCC->CR, RCC_CR_HSIRDY_Pos ) == 0 )
            ;                                              /* Wait for HSIRDY = 1 (HSI is ready)*/
    }

    if ( VALUE_RCC_CR & ( 1ul << RCC_CR_HSEON_Pos ) ) {    /* if HSE enabled*/
        while ( _REG_VALUE_GET_BIT_( RCC->CR, RCC_CR_HSERDY_Pos ) == 0 )
            ;                                              /* Wait for HSERDY = 1 (HSE is ready)*/
    }

    if ( VALUE_RCC_CR & ( 1ul << RCC_CR_PLLON_Pos ) ) {    /* if PLL enabled*/
        _REG_VALUE_SET_BIT_( RCC->CR, RCC_CR_PLLON_Pos );  /* PLL On */
        while ( _REG_VALUE_GET_BIT_( RCC->CR, RCC_CR_PLLRDY_Pos ) == 0 )
            ;                                              /* Wait for PLL1RDY = 1 (PLL is ready)*/
    }

    /* Wait till SYSCLK is stabilized (depending on selected clock) */
    while ( ( _REG_VALUE_GET_( RCC->CFGR ) & RCC_CFGR_SWS_Msk ) != ( ( VALUE_RCC_CFGR << 2 ) & RCC_CFGR_SWS_Msk ) )
        ;
}

void RCC_GetClocksFrequency( RCC_ClocksTypeDef * RCC_Clocks )
{
    uint32_t tmp = 0, presc = 0;

    RCC_Clocks->HCLK_Frequency = FOSC_KHZ_VALUE * 1000;

    /* Compute HCLK, PCLK1, PCLK2 and ADCCLK clocks frequencies -------------*/
    /* Get HCLK prescaler */
    tmp = _REG_VALUE_GET_( RCC->CFGR ) & RCC_CFGR_HPRE_Msk;
    tmp = tmp >> RCC_CFGR_HPRE_Pos;
    presc = APBAHBPrescTable[ tmp ];
    /* HCLK clock frequency */
    RCC_Clocks->SYSCLK_Frequency = RCC_Clocks->HCLK_Frequency << presc;

    /* Get PCLK1 prescaler */
    tmp = _REG_VALUE_GET_( RCC->CFGR ) & RCC_CFGR_PPRE1_Msk;
    tmp = tmp >> RCC_CFGR_PPRE1_Pos;
    presc = APBAHBPrescTable[ tmp ];
    /* PCLK1 clock frequency */
    RCC_Clocks->PCLK1_Frequency = RCC_Clocks->HCLK_Frequency >> presc;

    /* Get PCLK2 prescaler */
    tmp = _REG_VALUE_GET_( RCC->CFGR ) & RCC_CFGR_PPRE2_Msk;
    tmp = tmp >> RCC_CFGR_PPRE2_Pos;
    presc = APBAHBPrescTable[ tmp ];
    /* PCLK2 clock frequency */
    RCC_Clocks->PCLK2_Frequency = RCC_Clocks->HCLK_Frequency >> presc;
}
