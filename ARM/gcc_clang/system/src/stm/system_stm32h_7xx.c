#include "system_stm32h_7xx.h"
#include "stdint.h"
#include "core_header.h"
#include "common.h"
#include "mcu.h"

#define ADDRESS_SCB_AIRCR     (0xE000ED0C)
#define SCB_AIRCR_SYSRESETREQ (2)

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

// Voltage range
// 1.15 to 1.26 V
#define VR_1150_1260 2
// Voltage range
// 1.05 to 1.15 V
#define VR_1050_1150 1
// Voltage range
// 0.95 to 1.05 V
#define VR_0950_1050 0

const uint32_t
    _NVIC_PRIORITYGROUP_0 = ( ( uint32_t )0x00000007 ),
    _NVIC_PRIORITYGROUP_1 = ( ( uint32_t )0x00000006 ),
    _NVIC_PRIORITYGROUP_2 = ( ( uint32_t )0x00000005 ),
    _NVIC_PRIORITYGROUP_3 = ( ( uint32_t )0x00000004 ),
    _NVIC_PRIORITYGROUP_4 = ( ( uint32_t )0x00000003 );

#define SCB_AIR_VECTORKEY_POS  16
#define SCB_AIR_VECTORKEY_MASK ((uint32_t)(0xFFFFUL << SCB_AIR_VECTORKEY_POS))
#define SCB_AIR_PRIGROUP_POS   8
#define SCB_AIR_PRIGROUP_MASK  ((uint32_t)(0x7UL << SCB_AIR_PRIGROUP_POS))

static const char APBPrescTable[ 8 ] = { 1, 2, 3, 4, 6, 7, 8, 9 };
static const char APB3_4PrescTable[ 8 ] = { 1, 0, 0, 0, 2, 4, 8, 16 };

uint32_t voltage_range;

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
        nop \n\t \
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
    uint32_t tmp = 0, presc1 = 0, presc2 = 0;

    /* Get System clock */
    RCC_Clocks->SYSCLK_Frequency = FOSC_KHZ_VALUE * 1000;

    /* Get HCLK prescaler */
    if ( _REG_VALUE_GET_( RCC->D1CFGR ) & 0x08 ) {
        tmp = _REG_VALUE_GET_( RCC->D1CFGR ) & 0x07;
        presc1 = APBPrescTable[ tmp ];
    } else {
        presc1 = 0;
    }

    /* Get D1C prescaler */
    if ( _REG_VALUE_GET_( RCC->D1CFGR ) & 0x0800 ) {
        tmp = _REG_VALUE_GET_( RCC->D1CFGR & 0x0700 ) >> 8;
        presc2 = APBPrescTable[ tmp ];
    } else {
        presc2 = 0;
    }
    /* HCLK clock frequency */
    RCC_Clocks->HCLK_Frequency = RCC_Clocks->SYSCLK_Frequency >> ( presc1 + presc2 );

    /* Get PCLK1 prescaler */
    if ( _REG_VALUE_GET_( RCC->D2CFGR ) & 0x40 ) {
        tmp = _REG_VALUE_GET_( RCC->D2CFGR & 0x30 ) >> 4;
        presc1 = APBPrescTable[ tmp ];
    } else {
        presc1 = 0;
    }
    /* PCLK1 clock frequency */
    RCC_Clocks->PCLK1_Frequency = RCC_Clocks->HCLK_Frequency >> presc1;

    /* Get PCLK2 prescaler */
    if ( _REG_VALUE_GET_( RCC->D2CFGR ) & 0x0E00 ) {
        tmp = _REG_VALUE_GET_( RCC->D2CFGR & 0x06 ) >> 8;
        presc1 = APBPrescTable[ tmp ];
    } else {
        presc1 = 0;
    }
    /* PCLK2 clock frequency */
    RCC_Clocks->PCLK2_Frequency = RCC_Clocks->HCLK_Frequency >> presc1;

    /* Get PCLK3 prescaler */
    if ( _REG_VALUE_GET_( RCC->D1CFGR ) & 0x40 ) {
        tmp = ( _REG_VALUE_GET_( RCC->D1CFGR ) & 0x70 ) >> 4;
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
 *
 */
static void systemClockSetDefault( void )
{
    /* Set HSION bit */
    _REG_VALUE_SET_BIT_( RCC->CR, RCC_CR_HSION_Pos );

    /* Reset CFGR register */
    _REG_VALUE_CLEAR_( RCC->CFGR );

    /* Reset HSEON, CSSON , CSION,RC48ON, CSIKERON PLL1ON, PLL2ON and PLL3ON bits */
    _REG_VALUE_CLEAR_MASK_( RCC->CR, 0xEAF6ED7FUL );

    /* Reset D1CFGR register */
    _REG_VALUE_CLEAR_( RCC->D1CFGR );

    /* Reset D2CFGR register */
    _REG_VALUE_CLEAR_( RCC->D2CFGR );

    /* Reset D3CFGR register */
    _REG_VALUE_CLEAR_( RCC->D3CFGR );

    /* Reset PLLCKSELR register */
    _REG_VALUE_CLEAR_( RCC->PLLCKSELR );

    /* Reset PLLCFGR register */
    _REG_VALUE_CLEAR_( RCC->PLLCFGR );

    /* Reset PLL1DIVR register */
    _REG_VALUE_SET_( RCC->PLL1DIVR, 0x00000200UL );

    /* Reset PLL1FRACR register */
    _REG_VALUE_CLEAR_( RCC->PLL1FRACR );

    /* Reset PLL2DIVR register */
    _REG_VALUE_SET_( RCC->PLL2DIVR, 0x00000200UL );

    /* Reset PLL2FRACR register */
    _REG_VALUE_CLEAR_( RCC->PLL2FRACR );

    /* Reset PLL3DIVR register */
    _REG_VALUE_SET_( RCC->PLL3DIVR, 0x00000200UL );

    /* Reset PLL3FRACR register */
    _REG_VALUE_CLEAR_( RCC->PLL3FRACR );

    /* Reset HSEBYP bit */
    _REG_VALUE_CLEAR_BIT_( RCC->CR, RCC_CR_HSEBYP_Pos );

    /* Disable all interrupts */
    _REG_VALUE_CLEAR_( RCC->CICR );
}

void systemInit()
{
    systemClockSetDefault();

    // Enable power clock
    _REG_VALUE_SET_BIT_( RCC->APB1HENR, RCC_APB1HENR_OPAMPEN_Pos );

    // Set VCORE
    if ( VALUE_PWR_D3CR == 0x0000C000UL ) {
        voltage_range = VR_1150_1260;
    } else if ( VALUE_PWR_D3CR == 0x00008000UL ) {
        voltage_range = VR_1050_1150;
    } else if ( VALUE_PWR_D3CR == 0x00004000UL ) {
        voltage_range = VR_0950_1050;
    }
    _REG_VALUE_SET_( PWR->D3CR, VALUE_PWR_D3CR ); // Internal VCORE voltage

    if ( voltage_range == VR_1150_1260 ) {
        if ( FOSC_KHZ_VALUE > 225000 )
            _REG_VALUE_CLEAR_MASK_( FLASH->ACR, FLASH_ACR_LATENCY_4WS | FLASH_ACR_WRHIGHFREQ_1 ); // latency = 4, WRHIGHFREQ = 0b10
        else if ( FOSC_KHZ_VALUE > 210000 )
            _REG_VALUE_CLEAR_MASK_( FLASH->ACR, FLASH_ACR_LATENCY_3WS | FLASH_ACR_WRHIGHFREQ_1 ); // latency = 3, WRHIGHFREQ = 0b10
        else if ( FOSC_KHZ_VALUE > 185000 )
            _REG_VALUE_CLEAR_MASK_( FLASH->ACR, FLASH_ACR_LATENCY_2WS | FLASH_ACR_WRHIGHFREQ_1 ); // latency = 2, WRHIGHFREQ = 0b10
        else if ( FOSC_KHZ_VALUE > 140000 )
            _REG_VALUE_CLEAR_MASK_( FLASH->ACR, FLASH_ACR_LATENCY_2WS | FLASH_ACR_WRHIGHFREQ_0 ); // latency = 2, WRHIGHFREQ = 0b01
        else if ( FOSC_KHZ_VALUE > 70000 )
            _REG_VALUE_CLEAR_MASK_( FLASH->ACR, FLASH_ACR_LATENCY_1WS | FLASH_ACR_WRHIGHFREQ_0 ); // latency = 1, WRHIGHFREQ = 0b01
        else
            _REG_VALUE_CLEAR_MASK_( FLASH->ACR, 0 );                                              // latency = 0, WRHIGHFREQ = 0b00
    } else if ( voltage_range == VR_1050_1150 ) {
        if ( FOSC_KHZ_VALUE >= 225000 )
            _REG_VALUE_CLEAR_MASK_( FLASH->ACR, FLASH_ACR_LATENCY_4WS | FLASH_ACR_WRHIGHFREQ_1 ); // latency = 4, WRHIGHFREQ = 0b10
        else if ( FOSC_KHZ_VALUE > 165000 )
            _REG_VALUE_CLEAR_MASK_( FLASH->ACR, FLASH_ACR_LATENCY_3WS | FLASH_ACR_WRHIGHFREQ_1 ); // latency = 3, WRHIGHFREQ = 0b10
        else if ( FOSC_KHZ_VALUE > 110000 )
            _REG_VALUE_CLEAR_MASK_( FLASH->ACR, FLASH_ACR_LATENCY_2WS | FLASH_ACR_WRHIGHFREQ_0 ); // latency = 2, WRHIGHFREQ = 0b01
        else if ( FOSC_KHZ_VALUE > 55000 )
            _REG_VALUE_CLEAR_MASK_( FLASH->ACR, FLASH_ACR_LATENCY_1WS | FLASH_ACR_WRHIGHFREQ_0 ); // latency = 1, WRHIGHFREQ = 0b01
        else
            _REG_VALUE_CLEAR_MASK_( FLASH->ACR, 0 );                                              // latency = 0, WRHIGHFREQ = 0b00
    } else if ( voltage_range == VR_0950_1050 ) {
        if ( FOSC_KHZ_VALUE > 225000 )
            _REG_VALUE_CLEAR_MASK_( FLASH->ACR, FLASH_ACR_LATENCY_4WS | FLASH_ACR_WRHIGHFREQ_1 ); // latency = 4, WRHIGHFREQ = 0b10
        else if ( FOSC_KHZ_VALUE > 180000 )
            _REG_VALUE_CLEAR_MASK_( FLASH->ACR, FLASH_ACR_LATENCY_4WS | FLASH_ACR_WRHIGHFREQ_1 ); // latency = 4, WRHIGHFREQ = 0b10
        else if ( FOSC_KHZ_VALUE > 135000 )
            _REG_VALUE_CLEAR_MASK_( FLASH->ACR, FLASH_ACR_LATENCY_3WS | FLASH_ACR_WRHIGHFREQ_1 ); // latency = 3, WRHIGHFREQ = 0b10
        else if ( FOSC_KHZ_VALUE > 90000 )
            _REG_VALUE_CLEAR_MASK_( FLASH->ACR, FLASH_ACR_LATENCY_2WS | FLASH_ACR_WRHIGHFREQ_0 ); // latency = 2, WRHIGHFREQ = 0b01
        else if ( FOSC_KHZ_VALUE > 45000 )
            _REG_VALUE_CLEAR_MASK_( FLASH->ACR, FLASH_ACR_LATENCY_1WS | FLASH_ACR_WRHIGHFREQ_0 ); // latency = 1, WRHIGHFREQ = 0b01
        else
            _REG_VALUE_CLEAR_MASK_( FLASH->ACR, 0 );                                              // latency = 0, WRHIGHFREQ = 0b00
    }

    _REG_VALUE_SET_( RCC->CFGR, VALUE_RCC_CFGR );                /* set clock configuration register 2 */
    _REG_VALUE_SET_( RCC->CR, ( VALUE_RCC_CR & 0x000FF3BFUL ) ); /* do not start PLLs yet */
    _REG_VALUE_SET_( RCC->PLLCKSELR, VALUE_RCC_PLLCKSELR );      /* set PLL prescaler register */
    _REG_VALUE_SET_( RCC->PLLCFGR, VALUE_RCC_PLLCFGR );          /* set clock configuration register */
    _REG_VALUE_SET_( RCC->CSR, VALUE_RCC_CSR );                  /* set LSI clock */
    _REG_VALUE_SET_( RCC->BDCR, VALUE_RCC_BDCR );                /* set LSE clock */
    _REG_VALUE_SET_( RCC->D1CFGR, VALUE_RCC_D1CFGR );            /* set clock domain 1 */
    _REG_VALUE_SET_( RCC->D2CFGR, VALUE_RCC_D2CFGR );            /* set clock domain 2 */
    _REG_VALUE_SET_( RCC->D3CFGR, VALUE_RCC_D3CFGR );            /* set clock domain 3 */
    _REG_VALUE_SET_( RCC->PLL1DIVR, VALUE_RCC_PLL1DIVR );        /* set PLL1 configuration register */
    _REG_VALUE_SET_( RCC->PLL2DIVR, VALUE_RCC_PLL2DIVR );        /* set PLL2 configuration register */
    _REG_VALUE_SET_( RCC->PLL3DIVR, VALUE_RCC_PLL3DIVR );        /* set PLL3 configuration register */

    if ( VALUE_RCC_CR & ( 1ul << RCC_CR_HSION_Pos ) ) {          /* if HSI enabled*/
        while ( _REG_VALUE_GET_BIT_( RCC->CR, RCC_CR_HSIRDY_Pos ) == 0 )
            ;                                                    /* Wait for HSIRDY = 1 (HSI is ready)*/
    }

    if ( VALUE_RCC_CR & ( 1ul << RCC_CR_HSEON_Pos ) ) {          /* if HSE enabled*/
        while ( _REG_VALUE_GET_BIT_( RCC->CR, RCC_CR_HSERDY_Pos ) == 0 )
            ;                                                    /* Wait for HSERDY = 1 (HSE is ready)*/
    }

    if ( VALUE_RCC_CR & ( 1ul << RCC_CR_PLL1ON_Pos ) ) {         /* if PLL1 enabled*/
        _REG_VALUE_SET_BIT_( RCC->CR, RCC_CR_PLL1ON_Pos );       /* PLL1 On */
        while ( _REG_VALUE_GET_BIT_( RCC->CR, RCC_CR_PLL1RDY_Pos ) == 0 )
            ;                                                    /* Wait for PLL1RDY = 1 (PLL1 is ready)*/
    }

    if ( VALUE_RCC_CR & ( 1ul << RCC_CR_PLL2ON_Pos ) ) {         /* if PLL2 enabled*/
        _REG_VALUE_SET_BIT_( RCC->CR, RCC_CR_PLL2ON_Pos );       /* PLL2 On */
        while ( _REG_VALUE_GET_BIT_( RCC->CR, RCC_CR_PLL2RDY_Pos ) == 0 )
            ;                                                    /* Wait for PLL2RDY = 1 (PLL2 is ready)*/
    }

    if ( VALUE_RCC_CR & ( 1ul << RCC_CR_PLL3ON_Pos ) ) {         /* if PLL3 enabled*/
        _REG_VALUE_SET_BIT_( RCC->CR, RCC_CR_PLL3ON_Pos );       /* PLL3 On */
        while ( _REG_VALUE_GET_BIT_( RCC->CR, RCC_CR_PLL3RDY_Pos ) == 0 )
            ;                                                    /* Wait for PLL3RDY = 1 (PLL3 is ready)*/
    }

    /* Wait till SYSCLK is stabilized (depending on selected clock) */
    while ( ( _REG_VALUE_GET_( RCC->CFGR ) & RCC_CFGR_SWS_Pos ) != ( ( VALUE_RCC_CFGR << 3 ) & RCC_CFGR_SWS_Pos ) )
        ;

    systemEnableFPU();
}
