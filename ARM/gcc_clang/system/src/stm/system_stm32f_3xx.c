#include "system_stm32f_3xx.h"
#include "stdint.h"
#include "core_header.h"
#include "common.h"
#include "mcu.h"

#define CPU_APSR (0)
#define CPU_IAPSR (1)
#define CPU_EAPSR (2)
#define CPU_XPSR (3)
#define CPU_IPSR (5)
#define CPU_EPSR (6)
#define CPU_IEPSR (7)
#define CPU_MSP (8)
#define CPU_PSP (9)
#define CPU_PRIMASK (16)
#define CPU_BASEPRI (17)
#define CPU_BASEPRI_MAX (18)
#define CPU_FAULTMASK (19)
#define CPU_CONTROL (20)

#define ADDRESS_SCB_AIRCR (0xE000ED0C)
#define SCB_AIRCR_SYSRESETREQ (2)

#if defined (RCC_CFGR2_ADCPRE12)
#define RCC_CFGR2_ADC_PRESCALER_POS RCC_CFGR2_ADCPRE12_Pos
#define RCC_CFGR2_ADC_PRESCALER_MSK RCC_CFGR2_ADCPRE12_Msk
#elif defined (RCC_CFGR2_ADC1PRES)
#define RCC_CFGR2_ADC_PRESCALER_POS RCC_CFGR2_ADC1PRES_Pos
#define RCC_CFGR2_ADC_PRESCALER_MSK RCC_CFGR2_ADC1PRES_Msk
#elif defined (RCC_CFGR_ADCPRE)
#define RCC_CFGR_ADC_PRESCALER_POS RCC_CFGR_ADCPRE_Pos
#define RCC_CFGR_ADC_PRESCALER_MSK RCC_CFGR_ADCPRE_Msk
#endif

static const char APBAHBPrescTable[16] = {0, 0, 0, 0, 1, 2, 3, 4, 1, 2, 3, 4, 6, 7, 8, 9};
static const char ADCPrescTable[4] = {2, 4, 6, 8};

//*****************************************************************************
//
//! Resets the device.
//!
//! This function will perform a software reset of the entire device. The
//! processor and all peripherals are reset and all device registers will
//! return to their defalut values (with the exception of the reset cause
//! register, which will maintain its current value but have the software reset
//! bit set as well).
//!
//! \return This function does not return anything.
//
//*****************************************************************************
void SystemReset(void) {
    //
    // Perform a software reset request. This will cause the device to reset,
    // no further code is executed.
    //
    _REG_VALUE_CLEAR_SET_(*(uint32_t *)ADDRESS_SCB_AIRCR, 0x05FA0000 | (1 << SCB_AIRCR_SYSRESETREQ));
    //
    // The device should have reset, so this should never be reached. Just in
    // case, loop forever.
    //
    while(1)
    {
    }
}

void systemEnableFPU() {
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
    vmsr FPSCR, R0");
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
static void systemClockSetDefault(void) {
    /* Set HSION bit */
    _REG_VALUE_SET_BIT_(RCC->CR, RCC_CR_HSION_Pos);

    /* Reset CFGR register */
    _REG_VALUE_CLEAR_MASK_(RCC->CFGR, 0x007F0000ul);

    /* Reset HSEON, CSSON and PLLON bits */
    _REG_VALUE_CLEAR_MASK_(RCC->CR, 0xFEF6FFFFul);

    /* Reset HSEBYP bit */
    _REG_VALUE_CLEAR_BIT_(RCC->CR, RCC_CR_HSEBYP_Pos);

    /* Reset PLLSRC, PLLXTPRE, PLLM and USBPRE bits */
    _REG_VALUE_CLEAR_MASK_(RCC->CFGR, 0xFF80FFFFul);

    /* Reset PREDIV1[3:0] bits */
    _REG_VALUE_CLEAR_MASK_(RCC->CFGR2, ~RCC_CFGR_PPRE1_Msk);

    /* Reset USARTSW[1:0], I2CSW and TIMs bits */
    _REG_VALUE_CLEAR_(RCC->CFGR3);

    /* Disable all interrupts */
    _REG_VALUE_CLEAR_(RCC->CIR);
}

void systemInit() {
    uint32_t tmp_rcc_cr;

    if (FOSC_KHZ_VALUE > 48000)
        // two wait states, if 48 MHz < SYSCLK <= 72 MHz
        _REG_VALUE_SET_(FLASH->ACR, FLASH_ACR_LATENCY_1);
    else if (FOSC_KHZ_VALUE > 24000)
        // one wait state, if 24 MHz < SYSCLK <= 48 MHz
        _REG_VALUE_SET_(FLASH->ACR, FLASH_ACR_LATENCY_0);
    else
        // zero wait state, if 0 < SYSCLK <= 24 MHz
        _REG_VALUE_CLEAR_MASK_(FLASH->ACR, ~FLASH_ACR_LATENCY_Msk);

    systemClockSetDefault();

    _REG_VALUE_CLEAR_SET_(RCC->CFGR2, VALUE_RCC_CFGR2);  /* set clock configuration register 2 */
    _REG_VALUE_CLEAR_SET_(RCC->CFGR, VALUE_RCC_CFGR);    /* set clock configuration register */

    tmp_rcc_cr = VALUE_RCC_CR & 0xFFFFFF0Ful;
    tmp_rcc_cr |= _REG_VALUE_GET_(RCC->CR) & 0x000000F0ul;

    _REG_VALUE_SET_(RCC->CR, tmp_rcc_cr & 0x000FFFFFul); /* do not start PLLs yet */

    if (tmp_rcc_cr & (1ul << RCC_CR_HSION_Pos)) {        /* if HSI enabled*/
        while ((_REG_VALUE_GET_BIT_(RCC->CR, RCC_CR_HSIRDY_Pos)) == 0)
        ;       /* Wait for HSIRDY = 1 (HSI is ready)*/
    }

    if (tmp_rcc_cr & (1ul << RCC_CR_HSEON_Pos)) {        /* if HSE enabled*/
        while ((_REG_VALUE_GET_BIT_(RCC->CR, RCC_CR_HSERDY_Pos)) == 0)
        ;       /* Wait for HSERDY = 1 (HSE is ready)*/
    }

    if (tmp_rcc_cr & (1ul << RCC_CR_PLLON_Pos)) {        /* if PLL enabled*/
        _REG_VALUE_SET_BIT_(RCC->CR, RCC_CR_PLLON_Pos);  /* PLL On */
        while ((_REG_VALUE_GET_BIT_(RCC->CR, RCC_CR_PLLRDY_Pos)) == 0)
        ;       /* Wait for PLL1RDY = 1 (PLL is ready)*/
    }

    /* Wait till SYSCLK is stabilized (depending on selected clock) */
    while ((_REG_VALUE_GET_(RCC->CFGR) & RCC_CFGR_SWS_Msk) != ((VALUE_RCC_CFGR << 2) & RCC_CFGR_SWS_Msk))
    ;

    systemEnableFPU();
}

void RCC_GetClocksFrequency(RCC_ClocksTypeDef* RCC_Clocks) {
    uint32_t tmp, presc;

    RCC_Clocks->HCLK_Frequency = FOSC_KHZ_VALUE*1000;
    /* Compute HCLK, PCLK1, PCLK2 and ADCCLK clocks frequencies ----------------*/
    /* Get HCLK prescaler */
    tmp = (_REG_VALUE_GET_(RCC->CFGR) & RCC_CFGR_HPRE_Msk) >> RCC_CFGR_HPRE_Pos;
    presc = APBAHBPrescTable[tmp];
    /* HCLK clock frequency */
    RCC_Clocks->SYSCLK_Frequency = RCC_Clocks->HCLK_Frequency << presc;
    /* Get PCLK1 prescaler */
    tmp = (_REG_VALUE_GET_(RCC->CFGR) & RCC_CFGR_PPRE1_Msk) >> RCC_CFGR_PPRE1_Pos;
    presc = APBAHBPrescTable[tmp];
    /* PCLK1 clock frequency */
    RCC_Clocks->PCLK1_Frequency = RCC_Clocks->HCLK_Frequency >> presc;
    /* Get PCLK2 prescaler */
    tmp = (_REG_VALUE_GET_(RCC->CFGR) & RCC_CFGR_PPRE2_Msk) >> RCC_CFGR_PPRE2_Pos;
    presc = APBAHBPrescTable[tmp];
    /* PCLK2 clock frequency */
    RCC_Clocks->PCLK2_Frequency = RCC_Clocks->HCLK_Frequency >> presc;
    /* Get ADCCLK prescaler */
    #if defined (RCC_CFGR_ADCPRE)
    tmp = (_REG_VALUE_GET_(RCC->CFGR) & RCC_CFGR_ADC_PRESCALER_MSK) >> RCC_CFGR_ADC_PRESCALER_POS;
    #else
    tmp = (_REG_VALUE_GET_(RCC->CFGR2) & RCC_CFGR2_ADC_PRESCALER_MSK) >> RCC_CFGR2_ADC_PRESCALER_POS;
    #endif
    presc = ADCPrescTable[tmp];
    /* ADCCLK clock frequency */
    RCC_Clocks->ADCCLK_Frequency = RCC_Clocks->PCLK2_Frequency / presc;
}
