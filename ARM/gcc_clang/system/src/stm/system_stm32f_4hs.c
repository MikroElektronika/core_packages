#include "system_stm32f_4hs.h"
#include "stdint.h"
#include "core_header.h"
#include "common.h"
#include "mcu.h"

#define ADDRESS_SCB_AIRCR (0xE000ED0C)
#define SCB_AIRCR_SYSRESETREQ (2)

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

//Voltage range
//2.7 to 3.6 V
#define VR_2700_3600 3
//Voltage range
//2.4 to 2.7 V
#define VR_2400_2700 2
//Voltage range
//2.1 to 2.4 V
#define VR_2100_2400 1
//Voltage range
//1.8 to 2.1 V
#define VR_1800_2100 0

static char APBAHBPrescTable[16] = {0, 0, 0, 0, 1, 2, 3, 4, 1, 2, 3, 4, 6, 7, 8, 9};

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
//! \return This function does not return.
//
//*****************************************************************************
void SystemReset(void) {
    //
    // Perform a software reset request. This will cause the device to reset,
    // no further code is executed.
    //
    _REG_VALUE_CLEAR_SET_(*(uint32_t *)ADDRESS_SCB_AIRCR, 0x05FA0000 | (1ul << SCB_AIRCR_SYSRESETREQ));
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

void RCC_GetClocksFrequency(RCC_ClocksTypeDef* RCC_Clocks) {
    uint32_t tmp = 0, presc = 0;

    RCC_Clocks->HCLK_Frequency = FOSC_KHZ_VALUE*1000;

    /* Get HCLK prescaler */
    tmp = _REG_VALUE_GET_(RCC->CFGR) & RCC_CFGR_HPRE_Msk;
    tmp = tmp >> RCC_CFGR_HPRE_Pos;
    presc = APBAHBPrescTable[tmp];
    /* HCLK clock frequency */
    RCC_Clocks->SYSCLK_Frequency = RCC_Clocks->HCLK_Frequency << presc;

    /* Get PCLK1 prescaler */
    tmp = _REG_VALUE_GET_(RCC->CFGR) & RCC_CFGR_PPRE1_Msk;
    tmp = tmp >> RCC_CFGR_PPRE1_Pos;
    presc = APBAHBPrescTable[tmp];
    /* PCLK1 clock frequency */
    RCC_Clocks->PCLK1_Frequency = RCC_Clocks->HCLK_Frequency >> presc;

    /* Get PCLK2 prescaler */
    tmp = _REG_VALUE_GET_(RCC->CFGR) & RCC_CFGR_PPRE2_Msk;
    tmp = tmp >> RCC_CFGR_PPRE2_Pos;
    presc = APBAHBPrescTable[tmp];
    /* PCLK2 clock frequency */
    RCC_Clocks->PCLK2_Frequency = RCC_Clocks->HCLK_Frequency >> presc;
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
    _REG_VALUE_CLEAR_(RCC->CFGR);

    /* Reset HSEON, CSSON and PLLON bits */
    _REG_VALUE_CLEAR_MASK_(RCC->CR, 0xFEF6FFFFul);

    /* Reset PLLCFGR register */
    _REG_VALUE_CLEAR_MASK_(RCC->PLLCFGR, 0x24003010ul);

    /* Reset HSEBYP bit */
    _REG_VALUE_CLEAR_BIT_(RCC->CR, RCC_CR_HSEBYP_Pos);

    /* Disable all interrupts */
    _REG_VALUE_CLEAR_(RCC->CIR);
}

/**
  * @brief Sets the overdrive mode.
  * @note Used to get max mcu frequency.
  * @param None
  * @retval None
  */
static void EnableOverdriveMode() {
    // Enable power clock
    _REG_VALUE_SET_BIT_(RCC->APB1ENR, RCC_APB1ENR_PWREN_Pos);

    // Set overdrive bit
    _REG_VALUE_SET_BIT_(PWR->CR, PWR_CR_ODEN_Pos); // ODEN
    // Wait for overdrive ready flag to be set
    while(_REG_VALUE_GET_BIT_(PWR->CSR, PWR_CSR_ODRDY_Pos) == 0) // ODRDY
    ;
    // Enable overdrive switching
    _REG_VALUE_SET_BIT_(PWR->CR, PWR_CR_ODSWEN_Pos); //ODSWEN
    // Wait for overdrive switch ready flag to be set
    while(_REG_VALUE_GET_BIT_(PWR->CSR, PWR_CSR_ODSWRDY_Pos) == 0) //ODSWRDY
    ;
}

void systemInit() {

    systemClockSetDefault();

    _REG_VALUE_SET_BIT_(FLASH->ACR, FLASH_ACR_PRFTEN_Pos);    // PRFTEN Prefetch enable
    _REG_VALUE_SET_BIT_(FLASH->ACR, FLASH_ACR_ICEN_Pos);      // ICEN Instruction cache enable

    if (VALUE_SVRANGE == VR_2700_3600) {
        if (FOSC_KHZ_VALUE > 150000)
          _REG_VALUE_SET_(FLASH->ACR, FLASH_ACR_LATENCY_5WS);
        else if (FOSC_KHZ_VALUE > 120000)
          _REG_VALUE_SET_(FLASH->ACR, FLASH_ACR_LATENCY_4WS);
        else if (FOSC_KHZ_VALUE > 90000)
          _REG_VALUE_SET_(FLASH->ACR, FLASH_ACR_LATENCY_3WS);
        else if (FOSC_KHZ_VALUE > 60000)
          _REG_VALUE_SET_(FLASH->ACR, FLASH_ACR_LATENCY_2WS);
        else if (FOSC_KHZ_VALUE > 30000)
          _REG_VALUE_SET_(FLASH->ACR, FLASH_ACR_LATENCY_1WS);
        else
          _REG_VALUE_CLEAR_MASK_(FLASH->ACR, ~FLASH_ACR_LATENCY_Msk);
    } else if (VALUE_SVRANGE == VR_2400_2700) {
        if (FOSC_KHZ_VALUE > 168000)
          _REG_VALUE_SET_(FLASH->ACR, FLASH_ACR_LATENCY_7WS);
        else if (FOSC_KHZ_VALUE > 144000)
          _REG_VALUE_SET_(FLASH->ACR, FLASH_ACR_LATENCY_6WS);
        else if (FOSC_KHZ_VALUE > 120000)
          _REG_VALUE_SET_(FLASH->ACR, FLASH_ACR_LATENCY_5WS);
        else if (FOSC_KHZ_VALUE > 96000)
          _REG_VALUE_SET_(FLASH->ACR, FLASH_ACR_LATENCY_4WS);
        else if (FOSC_KHZ_VALUE > 72000)
          _REG_VALUE_SET_(FLASH->ACR, FLASH_ACR_LATENCY_3WS);
        else if (FOSC_KHZ_VALUE > 48000)
          _REG_VALUE_SET_(FLASH->ACR, FLASH_ACR_LATENCY_2WS);
        else if (FOSC_KHZ_VALUE > 24000)
          _REG_VALUE_SET_(FLASH->ACR, FLASH_ACR_LATENCY_1WS);
        else
          _REG_VALUE_CLEAR_MASK_(FLASH->ACR, ~FLASH_ACR_LATENCY_Msk);
    } else if (VALUE_SVRANGE == VR_2100_2400) {
        if (FOSC_KHZ_VALUE > 176000)
          _REG_VALUE_SET_(FLASH->ACR, FLASH_ACR_LATENCY_8WS);
        else if (FOSC_KHZ_VALUE > 154000)
          _REG_VALUE_SET_(FLASH->ACR, FLASH_ACR_LATENCY_7WS);
        else if (FOSC_KHZ_VALUE > 132000)
          _REG_VALUE_SET_(FLASH->ACR, FLASH_ACR_LATENCY_6WS);
        else if (FOSC_KHZ_VALUE > 110000)
          _REG_VALUE_SET_(FLASH->ACR, FLASH_ACR_LATENCY_5WS);
        else if (FOSC_KHZ_VALUE > 88000)
          _REG_VALUE_SET_(FLASH->ACR, FLASH_ACR_LATENCY_4WS);
        else if (FOSC_KHZ_VALUE > 66000)
          _REG_VALUE_SET_(FLASH->ACR, FLASH_ACR_LATENCY_3WS);
        else if (FOSC_KHZ_VALUE > 44000)
          _REG_VALUE_SET_(FLASH->ACR, FLASH_ACR_LATENCY_2WS);
        else if (FOSC_KHZ_VALUE > 22000)
          _REG_VALUE_SET_(FLASH->ACR, FLASH_ACR_LATENCY_1WS);
        else
          _REG_VALUE_CLEAR_MASK_(FLASH->ACR, ~FLASH_ACR_LATENCY_Msk);
    } else if (VALUE_SVRANGE == VR_1800_2100) {
        if (FOSC_KHZ_VALUE > 160000)
          _REG_VALUE_SET_(FLASH->ACR, FLASH_ACR_LATENCY_8WS);
        else if (FOSC_KHZ_VALUE > 140000)
          _REG_VALUE_SET_(FLASH->ACR, FLASH_ACR_LATENCY_7WS);
        else if (FOSC_KHZ_VALUE > 120000)
          _REG_VALUE_SET_(FLASH->ACR, FLASH_ACR_LATENCY_6WS);
        else if (FOSC_KHZ_VALUE > 100000)
          _REG_VALUE_SET_(FLASH->ACR, FLASH_ACR_LATENCY_5WS);
        else if (FOSC_KHZ_VALUE > 80000)
          _REG_VALUE_SET_(FLASH->ACR, FLASH_ACR_LATENCY_4WS);
        else if (FOSC_KHZ_VALUE > 60000)
          _REG_VALUE_SET_(FLASH->ACR, FLASH_ACR_LATENCY_3WS);
        else if (FOSC_KHZ_VALUE > 40000)
          _REG_VALUE_SET_(FLASH->ACR, FLASH_ACR_LATENCY_2WS);
        else if (FOSC_KHZ_VALUE > 20000)
          _REG_VALUE_SET_(FLASH->ACR, FLASH_ACR_LATENCY_1WS);
        else
          _REG_VALUE_CLEAR_MASK_(FLASH->ACR, ~FLASH_ACR_LATENCY_Msk);
    }

    // enable overdrive mode
    EnableOverdriveMode();

    _REG_VALUE_CLEAR_SET_(RCC->PLLCFGR, VALUE_RCC_PLLCFGR);         /* set clock configuration register */
    _REG_VALUE_CLEAR_SET_(RCC->CFGR, VALUE_RCC_CFGR);               /* set clock configuration register 2 */
    _REG_VALUE_CLEAR_SET_(RCC->CR, VALUE_RCC_CR & 0x000FFFFF);      /* do not start PLLs yet */

    if (VALUE_RCC_CR & (1ul << RCC_CR_HSION_Pos)) {                 /* if HSI enabled*/
        while ((_REG_VALUE_GET_BIT_(RCC->CR, RCC_CR_HSIRDY_Pos)) == 0)
        ;       /* Wait for HSIRDY = 1 (HSI is ready)*/
    }

    if (VALUE_RCC_CR & (1ul << RCC_CR_HSEON_Pos)) {                 /* if HSE enabled*/
        while ((_REG_VALUE_GET_BIT_(RCC->CR, RCC_CR_HSERDY_Pos)) == 0)
        ;       /* Wait for HSERDY = 1 (HSE is ready)*/
    }

    if (VALUE_RCC_CR & (1ul << RCC_CR_PLLON_Pos)) {                /* if PLL enabled*/
        _REG_VALUE_SET_BIT_(RCC->CR, RCC_CR_PLLON_Pos);            /* PLL On */
        while ((_REG_VALUE_GET_BIT_(RCC->CR, RCC_CR_PLLRDY_Pos)) == 0)
        ;       /* Wait for PLL1RDY = 1 (PLL is ready)*/
    }

    /* Wait till SYSCLK is stabilized (depending on selected clock) */
    while ((_REG_VALUE_GET_(RCC->CFGR) & RCC_CFGR_SWS_Msk) != ((VALUE_RCC_CFGR<<2) & RCC_CFGR_SWS_Msk))
    ;

    systemEnableFPU();
}
