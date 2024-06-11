#include "system_stm32l_4xx.h"
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

// Voltage range 1V
#define VR_1000 0x00000400
// Voltage range 1.2V
#define VR_1200 0x00000200

static char APBAHBPrescTable[ 16 ] = { 0, 0, 0, 0, 1, 2, 3, 4, 1, 2, 3, 4, 6, 7, 8, 9 };

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

void systemEnableFPU()
{
    asm(
        "MOVW R0, #0xED88 \n\t \
        MOVT R0, #0xE000 \n\t \
        LDR R1, [R0] \n\t \
        ORR R1, R1, #0xF00000 \n\t \
        STR R1, [R0] \n\t \
        nop \n\t \
        nop \n\t \
        nop \n\t \
        nop \n\t \
        vmrs R0, FPSCR \n\t \
        MOV R1, #0 \n\t \
        MOVT R1, #0xC0 \n\t \
        ORR R0, R0, R1 \n\t \
        vmsr FPSCR, R0"
    );
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

/**
 * @brief Resets the RCC clock configuration to the default reset state.
 * @note   The default reset state of the clock configuration is given below: *
 * @param None
 * @retval None
 */
static void systemClockSetDefault( void )
{
    /* Set MSION bit */
    _REG_VALUE_SET_BIT_( RCC->CR, RCC_CR_MSION_Pos );

    /* Reset CFGR register */
    _REG_VALUE_CLEAR_( RCC->CFGR );

    /* Reset HSEON, CSSON , HSION, and PLLON bits */
    _REG_VALUE_CLEAR_MASK_( RCC->CR, 0xEAF6FFFFUL );

    /* Reset PLLCFGR register */
    _REG_VALUE_CLEAR_( RCC->PLLCFGR );

    /* Reset HSEBYP bit */
    _REG_VALUE_CLEAR_BIT_( RCC->CR, RCC_CR_HSEBYP_Pos );

    /* Disable all interrupts */
    _REG_VALUE_CLEAR_( RCC->CIFR );
}

void systemInit()
{

    systemClockSetDefault();

    if ( VALUE_PWR_CR1 == VR_1200 ) {
        if ( FOSC_KHZ_VALUE > 64000 )
            _REG_VALUE_SET_( FLASH->ACR, FLASH_ACR_LATENCY_4WS );
        else if ( FOSC_KHZ_VALUE > 48000 )
            _REG_VALUE_SET_( FLASH->ACR, FLASH_ACR_LATENCY_3WS );
        else if ( FOSC_KHZ_VALUE > 32000 )
            _REG_VALUE_SET_( FLASH->ACR, FLASH_ACR_LATENCY_2WS );
        else if ( FOSC_KHZ_VALUE > 16000 )
            _REG_VALUE_SET_( FLASH->ACR, FLASH_ACR_LATENCY_1WS );
        else
            _REG_VALUE_CLEAR_MASK_( FLASH->ACR, ~FLASH_ACR_LATENCY_Msk );
    } else if ( VALUE_PWR_CR1 == VR_1000 ) {
        if ( FOSC_KHZ_VALUE > 18000 )
            _REG_VALUE_SET_( FLASH->ACR, FLASH_ACR_LATENCY_3WS );
        else if ( FOSC_KHZ_VALUE > 12000 )
            _REG_VALUE_SET_( FLASH->ACR, FLASH_ACR_LATENCY_2WS );
        else if ( FOSC_KHZ_VALUE > 6000 )
            _REG_VALUE_SET_( FLASH->ACR, FLASH_ACR_LATENCY_1WS );
        else
            _REG_VALUE_CLEAR_MASK_( FLASH->ACR, ~FLASH_ACR_LATENCY_Msk );
    }

    _REG_VALUE_SET_BIT_( FLASH->ACR, FLASH_ACR_PRFTEN_Pos );       // Prefetch enable
    _REG_VALUE_SET_BIT_( FLASH->ACR, FLASH_ACR_ICEN_Pos );         // Instruction cache enable
    _REG_VALUE_SET_BIT_( FLASH->ACR, FLASH_ACR_DCEN_Pos );         // Data cache enable

    _REG_VALUE_CLEAR_SET_( RCC->PLLCFGR, VALUE_RCC_PLLCFGR );      /* set clock configuration register */
    _REG_VALUE_CLEAR_SET_( RCC->CFGR, VALUE_RCC_CFGR );            /* set clock configuration register 2 */
    _REG_VALUE_CLEAR_SET_( RCC->CSR, VALUE_RCC_CSR );
    _REG_VALUE_CLEAR_SET_( RCC->CR, VALUE_RCC_CR & 0x000FFFFFUL ); /* do not start PLLs yet */

    #if defined(VALUE_RCC_CRRCR) && defined (VALUE_RCC_CCIPR)
    _REG_VALUE_SET_( RCC->CRRCR, VALUE_RCC_CRRCR );                /* set HSI48 clock */
    _REG_VALUE_CLEAR_SET_( RCC->CCIPR, VALUE_RCC_CCIPR );          /* select CLK48 source */
    #endif

    if ( VALUE_RCC_CR & ( 1ul << RCC_CR_MSION_Pos ) ) {            /* if MSI enabled*/
        while ( ( _REG_VALUE_GET_BIT_( RCC->CR, RCC_CR_MSIRDY_Pos ) ) == 0 )
            ;                                                      /* Wait for MSIRDY = 1 (MSI is ready)*/
    }

    if ( VALUE_RCC_CR & ( 1ul << RCC_CR_HSION_Pos ) ) {            /* if HSI enabled*/
        while ( ( _REG_VALUE_GET_BIT_( RCC->CR, RCC_CR_HSIRDY_Pos ) ) == 0 )
            ;                                                      /* Wait for HSIRDY = 1 (HSI is ready)*/
    }

    if ( VALUE_RCC_CR & ( 1ul << RCC_CR_HSEON_Pos ) ) {            /* if HSE enabled*/
        while ( ( _REG_VALUE_GET_BIT_( RCC->CR, RCC_CR_HSERDY_Pos ) ) == 0 )
            ;                                                      /* Wait for HSERDY = 1 (HSE is ready)*/
    }

    if ( VALUE_RCC_CR & ( 1ul << RCC_CR_PLLON_Pos ) ) {            /* if PLL enabled*/
        _REG_VALUE_SET_BIT_( RCC->CR, RCC_CR_PLLON_Pos );          /* PLL On */
        while ( ( _REG_VALUE_GET_BIT_( RCC->CR, RCC_CR_PLLRDY_Pos ) ) == 0 )
            ;                                                      /* Wait for PLL1RDY = 1 (PLL is ready)*/
    }
    #if defined(VALUE_RCC_CRRCR) && defined(VALUE_RCC_CCIPR)
    if ( VALUE_RCC_CRRCR & ( 1ul << RCC_CRRCR_HSI48ON_Pos ) ) {    /* if HSI48 enabled*/
        while ( ( _REG_VALUE_GET_BIT_( RCC->CRRCR, RCC_CRRCR_HSI48RDY_Pos ) ) == 0 )
            ;                                                      /* Wait for HSI48RDY = 1 (HSI48 is ready)*/
    }
    #endif

    /* Wait till SYSCLK is stabilized (depending on selected clock) */
    while ( ( _REG_VALUE_GET_( RCC->CFGR ) & RCC_CFGR_SWS_Msk ) != ( ( VALUE_RCC_CFGR << 2 ) & RCC_CFGR_SWS_Msk ) )
        ;

    systemEnableFPU();
}
