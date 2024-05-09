#include "system_stm32g_0xx.h"
#include "core_header.h"
#include "common.h"
#include "mcu.h"
#include "stdint.h"

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

//*****************************************************************************
//
//! Resets the device.
//!
//! This function will perform a software reset of the entire device. The
//! processor and all peripherals are reset and all device registers will
//! return to their default values (with the exception of the reset cause
//! register, which will maintain its current value but have the software reset
//! bit set as well).
//!
//! \return This function does not return anything.
//
//*****************************************************************************
void SystemReset(void) {
    // Perform a software reset request. This will cause the device to reset,
    // no further code is executed.
    _REG_VALUE_CLEAR_SET_(*(uint32_t *)ADDRESS_SCB_AIRCR, 0x05FA0000 | (1ul << SCB_AIRCR_SYSRESETREQ));

    // The device should have reset, so this should never be reached. Just in
    // case, loop forever.
    while(1) {}
}

/**
 * @brief Resets the RCC clock configuration to the default reset state.
 * @note   The default reset state of the clock configuration is given below:
 *             - HSI ON and used as system clock source
 *             - HSE, PLL and PLLI2S OFF
 *             - AHB, APB1 and APB2 prescaler set to 1.
 *             - CSS, MCO1 and MCO2 OFF
 *             - All interrupts disabled (not used)
 * @note   This function doesn't modify the configuration of the
 *             - Peripheral clocks
 *             - LSI, LSE and RTC clocks
 * @param None
 * @retval None
 */
static void systemClockSetDefault(void) {
    /* Enable Syscfg clock */
    _REG_VALUE_SET_BIT_(RCC->APBENR1, RCC_APBENR1_PWREN_Pos);
    /* Enable PWR clock */
    _REG_VALUE_SET_BIT_(RCC->APBENR2, RCC_APBENR2_SYSCFGEN_Pos);
    /* Reset PLLSRC[1:0] */
    _REG_VALUE_CLEAR_MASK_(RCC->PLLCFGR, ~RCC_PLLCFGR_PLLSRC_Msk);
    /* Set HSION bit */
    _REG_VALUE_SET_BIT_(RCC->CR, RCC_CR_HSION_Pos);
    /* Set latency to RANGE 2 (VOS1 = 1) */
    _REG_VALUE_SET_BIT_(PWR->CR1, 0x00000400UL);
    /* Reset everything but SWS(System clock switch status) */
    _REG_VALUE_CLEAR_MASK_(RCC->CFGR, 0x00000038UL);
    /* Reset HSEON, CSSON and PLLON bits */
    _REG_VALUE_CLEAR_MASK_(RCC->CR, 0xFEF2FFFFUL);
}
//*****************************************************************************
//! Sets correct flash latency!!!
// ----------------------               | ------------------------
//      RANGE 1         |               | |     RANGE 2          |
// -------||------------|               | |-------||-------------|
//    WS  ||    HCLK    |               | |   WS ||    HCLK      |
// -------||------------|               | |-------||-------------|
//    0   ||   <= 24MHz |               | |   0   ||   <= 8MHz   |
// -------||----------------------------| |-------||----------------------------
//    1   ||   24MHz < HCLK <= 48MHz   || |   1   ||   8MHz < HCLK <= 16MHz    |
// -------||------------|-------------- | |-------||-------------|--------------
//    2   ||   > 48MHz  |               | |   2   ||      /      |
// -------||------------|               | |-------||-------------|
//
// Flash latency is dependent on HCLK only!!!
// Range is selected by writing 1 or 0 to VOS bit of PWR1_CR1 register.
// This bit is set via edit project.
//*****************************************************************************
static void set_core_latency(uint32_t core_voltage_value, uint32_t hclk_freq) {
    /* latency depends on HCLK frequency */
    if (core_voltage_value & PWR_CR1_VOS_1) {                   /* range 2 */
        if (hclk_freq <= 8000) {
            while ((FLASH->ACR & ~FLASH_ACR_LATENCY_Msk) != ~FLASH_ACR_LATENCY_Msk);
        } else {
            _REG_VALUE_SET_(FLASH->ACR, FLASH_ACR_LATENCY_1);
            while((_REG_VALUE_GET_(FLASH->ACR) & FLASH_ACR_LATENCY_1) != FLASH_ACR_LATENCY_1);
        }
        _REG_VALUE_SET_(PWR->CR1, PWR_CR1_VOS_1);
    } else if (core_voltage_value & PWR_CR1_VOS_0) {            /* range 1 */
        /* first set the VOS value */
        _REG_VALUE_SET_(PWR->CR1, PWR_CR1_VOS_0);
        /* wait for voltage scaling flag to be cleared */
        while (_REG_VALUE_GET_BIT_(PWR->SR2, PWR_SR2_VOSF_Pos));
        /* then set the flash latency value */
        if (hclk_freq <= 24000) {
            while ((FLASH->ACR & ~FLASH_ACR_LATENCY_Msk) != ~FLASH_ACR_LATENCY_Msk);
        } else if ((24000 < hclk_freq) & (hclk_freq <= 48000)) {
            _REG_VALUE_SET_(FLASH->ACR, FLASH_ACR_LATENCY_1);
            while((_REG_VALUE_GET_(FLASH->ACR) & FLASH_ACR_LATENCY_1) != FLASH_ACR_LATENCY_1);
        } else {
            _REG_VALUE_SET_(FLASH->ACR, FLASH_ACR_LATENCY_2);
            while((_REG_VALUE_GET_(FLASH->ACR) & FLASH_ACR_LATENCY_2) != FLASH_ACR_LATENCY_2);
        }
    }
}
//*****************************************************************************
//
//! Checks if activated clocks are stable.
//
//*****************************************************************************
void is_clock_stable(void) {
    if (_REG_VALUE_GET_BIT_(RCC->CR, RCC_CR_HSION_Pos)) {                  /* if HSI enabled */
        while ((_REG_VALUE_GET_BIT_(RCC->CR, RCC_CR_HSIRDY_Pos)) == 0)
        ;       /* Wait for HSIRDYF = 1 (HSI is ready) */
    }
    if (_REG_VALUE_GET_BIT_(RCC->CR, RCC_CR_HSEON_Pos)) {                  /* if HSE enabled */
        while ((_REG_VALUE_GET_BIT_(RCC->CR, RCC_CR_HSERDY_Pos)) == 0)
        ;       /* Wait for HSERDY = 1 (HSE is ready) */
    }
    if (_REG_VALUE_GET_BIT_(RCC->CR, RCC_CR_PLLON_Pos)) {                  /* if PLL enabled */
        while ((_REG_VALUE_GET_BIT_(RCC->CR, RCC_CR_PLLRDY_Pos)) == 0)
        ;       /* Wait for PLL1RDY = 1 (PLL is ready) */
    }
    if (_REG_VALUE_GET_BIT_(RCC->CSR, RCC_CSR_LSION_Pos)) {                /* if LSI enabled */
        while ((_REG_VALUE_GET_BIT_(RCC->CSR, RCC_CSR_LSIRDY_Pos)) == 0)
        ;       /* Wait for LSIRDY = 1 (LSI is ready) */
    }
    if (_REG_VALUE_GET_BIT_(RCC->BDCR, RCC_BDCR_LSEON_Pos)) {              /* if LSE enabled */
        while ((_REG_VALUE_GET_BIT_(RCC->BDCR, RCC_BDCR_LSERDY_Pos)) == 0)
        ;       /* Wait for LSERDY = 1 (LSE is ready) */
    }
}
//*****************************************************************************
//
// Initial clock set-up.
//
//*****************************************************************************
void systemInit(void) {
    /* set correct core latency */
    set_core_latency(VALUE_PWR_CR1, FOSC_KHZ_VALUE);
    /* turn prefetch on */
    _REG_VALUE_SET_BIT_(FLASH->ACR, FLASH_ACR_PRFTEN_Pos);
    /* set default clock settings */
    systemClockSetDefault();
    /* now set real values */
    _REG_VALUE_CLEAR_SET_(RCC->PLLCFGR, VALUE_RCC_PLLSYSCFGR);
    _REG_VALUE_CLEAR_SET_(RCC->CR, VALUE_RCC_CR);
    _REG_VALUE_CLEAR_SET_(RCC->CFGR, VALUE_RCC_CFGR);
    _REG_VALUE_CLEAR_SET_(RCC->BDCR, VALUE_RCC_BDCR);
    _REG_VALUE_CLEAR_SET_(RCC->CSR, VALUE_RCC_CSR);
    _REG_VALUE_CLEAR_SET_(RCC->CCIPR, VALUE_RCC_CCIPR);
    /* Wait for clock to stabilize */
    is_clock_stable();
    /* Wait till SYSCLK is stabilized (depending on selected clock) */
    while ((_REG_VALUE_GET_(RCC->CFGR) & RCC_CFGR_SWS_Msk) != ((VALUE_RCC_CFGR<<3) & RCC_CFGR_SWS_Msk))
    ;
}

//*****************************************************************************
//
// Prescaler tables.
//
//*****************************************************************************
static const char AHBPrescTable[8]     = {1, 2, 4, 8, 32, 64, 128, 256};
static const char APBPrescTable[4]     = {2, 4, 8, 16};
//*****************************************************************************
//
// Get the correct prescaler and divider values.
//
//*****************************************************************************
void RCC_GetClocksFrequency(RCC_ClocksTypeDef* RCC_Clocks) {
    uint32_t tmp, presc, presc1, presc2;

    RCC_Clocks->HCLK_Frequency = FOSC_KHZ_VALUE*1000;

    /* Compute SYSCLK, PCLK clocks frequencies */
    /* Get HCLK prescaler */
    tmp = _REG_VALUE_GET_(RCC->CFGR) & RCC_CFGR_HPRE_Msk;
    tmp = tmp >> RCC_CFGR_HPRE_Pos;

    if (tmp & 0x08)
        presc = 1;
    else {
        tmp &= 0x07;
        presc = AHBPrescTable[tmp];
    }
    /* SYSCLK clock frequency */
    RCC_Clocks->SYSCLK_Frequency = RCC_Clocks->HCLK_Frequency * presc;

    /* Get PCLK prescaler */
    tmp = _REG_VALUE_GET_(RCC->CFGR) & RCC_CFGR_PPRE_Msk;
    tmp = tmp >> RCC_CFGR_PPRE_Pos;
    if (!tmp) {
        /* PCLK clock prescaler is 1 */
        presc1 = 1;
        /* TPCLK prescaler is 1 */
        presc2 = 1;
    } else {
        tmp &= 0x03;
        /* PCLK clock prescaler */
        presc1 = APBPrescTable[tmp];
        /* TPCLK prescaler is 2 */
        presc2 = 2;
    }
    /* PCLK clock frequency */
    RCC_Clocks->PCLK_Frequency = RCC_Clocks->HCLK_Frequency / presc1;

    /* Get TPCLK prescaler */
    /* TPCLK clock is calculated in the following way:
      If APB Prescaler = 1 then TPCLK prescaler is x1
      else if APB Presc > 1 then TPCLK presc is x2 */
    RCC_Clocks->TPCLK_Frequency = RCC_Clocks->PCLK_Frequency * presc2;
}
