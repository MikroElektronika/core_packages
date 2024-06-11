/****************************************************************************
**
** Copyright (C) 2024 MikroElektronika d.o.o.
** Contact: https://www.mikroe.com/contact
**
** Commercial License Usage
**
** Licensees holding valid commercial NECTO compilers AI licenses may use this
** file in accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The MikroElektronika Company.
** For licensing terms and conditions see
** https://www.mikroe.com/legal/software-license-agreement.
** For further information use the contact form at
** https://www.mikroe.com/contact.
**
**
** GNU Lesser General Public License Usage
**
** Alternatively, this file may be used for
** non-commercial projects under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation: https://www.gnu.org/licenses/lgpl-3.0.html.
**
** The above copyright notice and this permission notice shall be
** included in all copies or substantial portions of the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
** OF MERCHANTABILITY, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED
** TO THE WARRANTIES FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
** IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
** DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT
** OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
** OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**
****************************************************************************/
/*!
 * @file  init_clock.c
 * @brief Mikroe clock initialization API.
 */

#include "core_header.h"
#include "stm32g4xx_hal_rcc.h"
#include "stm32g4xx_hal_pwr_ex.h"

#define FLASH_LATENCY_0  FLASH_ACR_LATENCY_0WS    /*!< FLASH Zero wait state */
#define FLASH_LATENCY_1  FLASH_ACR_LATENCY_1WS    /*!< FLASH One wait state */
#define FLASH_LATENCY_2  FLASH_ACR_LATENCY_2WS    /*!< FLASH Two wait states */
#define FLASH_LATENCY_3  FLASH_ACR_LATENCY_3WS    /*!< FLASH Three wait states */
#define FLASH_LATENCY_4  FLASH_ACR_LATENCY_4WS    /*!< FLASH Four wait states */
#define FLASH_LATENCY_5  FLASH_ACR_LATENCY_5WS    /*!< FLASH Five wait state */
#define FOSC_34_KHz      34000                    /*!< 34 MHz clock frequency */
#define FOSC_68_KHz      68000                    /*!< 68 MHz clock frequency */
#define FOSC_102_KHz     102000                   /*!< 102 MHz clock frequency */
#define FOSC_136_KHz     136000                   /*!< 136 MHz clock frequency */
#define FOSC_170_KHz     170000                   /*!< 170 MHz clock frequency */

static RCC_OscInitTypeDef RCC_OscInitStruct = {0};
static RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

typedef struct RCC_ClocksTypeDef {
    uint32_t SYSCLK_Frequency; // SYSCLK clock frequency  in Hz
    uint32_t HCLK_Frequency;   // HCLK   clock frequency  in Hz
    uint32_t PCLK1_Frequency;  // PCLK1  clock frequency  in Hz
    uint32_t PCLK2_Frequency;  // PCLK2  clock frequency  in Hz
} RCC_ClocksTypeDef_t;

extern uint32_t uwTick;
extern uint32_t uwTickFreq;

__attribute__ ((interrupt("IRQ"))) void SysTick_Handler(void) {
    uwTick += (uint32_t)uwTickFreq;
}

void clockConfig(void) {
    uint8_t flatency;

    /* Enable FPU. */
    SCB->CPACR |= (0xFUL << 20);

    /* Reset of all peripherals, initialize the Flash interface and the Systick. */
    HAL_Init();

    /* Set voltage scaling range selection as boosted 1 */
    if (HAL_PWREx_ControlVoltageScaling(PWR_REGULATOR_VOLTAGE_SCALE1_BOOST) != HAL_OK) {
        while (1);
    }

    /* Enable system and power clocks */
    __HAL_RCC_SYSCFG_CLK_ENABLE();
    __HAL_RCC_PWR_CLK_ENABLE();

    /* Get the oscillator type */
    RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_NONE;
    if (VALUE_RCC_CR & RCC_CR_HSEON) {
        RCC_OscInitStruct.OscillatorType |= RCC_OSCILLATORTYPE_HSE;
    }
    if (VALUE_RCC_CR & RCC_CR_HSION) {
        RCC_OscInitStruct.OscillatorType |= RCC_OSCILLATORTYPE_HSI;
    }
    if (VALUE_RCC_BDCR & RCC_BDCR_LSEON) {
        RCC_OscInitStruct.OscillatorType |= RCC_OSCILLATORTYPE_LSE;
    }
    if (VALUE_RCC_CSR & RCC_CSR_LSION) {
        RCC_OscInitStruct.OscillatorType |= RCC_OSCILLATORTYPE_LSI;
    }
    if (VALUE_RCC_CRRCR & RCC_CRRCR_HSI48ON) {
        RCC_OscInitStruct.OscillatorType |= RCC_OSCILLATORTYPE_HSI48;
    }

    /* Get the HSE clock state information */
    RCC_OscInitStruct.HSEState = VALUE_RCC_CR & RCC_HSE_BYPASS;

    /* Get the LSE clock state information */
    RCC_OscInitStruct.LSEState = VALUE_RCC_BDCR & RCC_LSE_BYPASS;

    /* Get the HSI clock state information */
    RCC_OscInitStruct.HSIState = VALUE_RCC_CR & RCC_CR_HSION;

    /* Get the HSI clock calibration information */
    RCC_OscInitStruct.HSICalibrationValue = (VALUE_RCC_ICSCR & RCC_ICSCR_HSITRIM_Msk) >> RCC_ICSCR_HSITRIM_Pos;

    /* Get the LSI clock state information */
    RCC_OscInitStruct.LSIState = VALUE_RCC_CSR & RCC_CSR_LSION;

    /* Get the HSI48 clock state information */
    RCC_OscInitStruct.HSI48State = VALUE_RCC_CRRCR & RCC_CRRCR_HSI48ON;

    /* Get the PLL state information */
    RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
    if (VALUE_RCC_CR & RCC_CR_PLLON_Msk) {
        RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
    } else {
        RCC_OscInitStruct.PLL.PLLState = RCC_PLL_OFF;
    }

    /* Get the PLL source information */
    RCC_OscInitStruct.PLL.PLLSource = VALUE_RCC_PLLCFGR & RCC_PLLCFGR_PLLSRC_Msk;

    /* Get the PLLM information */
    RCC_OscInitStruct.PLL.PLLM = ((VALUE_RCC_PLLCFGR & RCC_PLLCFGR_PLLM_Msk) >> RCC_PLLCFGR_PLLM_Pos) + 1;

    /* Get the PLLN information */
    RCC_OscInitStruct.PLL.PLLN = (VALUE_RCC_PLLCFGR & RCC_PLLCFGR_PLLN_Msk) >> RCC_PLLCFGR_PLLN_Pos;

    /* Get the PLLP information */
    RCC_OscInitStruct.PLL.PLLP = (VALUE_RCC_PLLCFGR & RCC_PLLCFGR_PLLP_Msk) >> RCC_PLLCFGR_PLLP_Pos;

    /* Get the PLLQ information */
    RCC_OscInitStruct.PLL.PLLQ = (((VALUE_RCC_PLLCFGR & RCC_PLLCFGR_PLLQ_Msk) >> RCC_PLLCFGR_PLLQ_Pos) + 1) << 1;

    /* Get the PLLR information */
    RCC_OscInitStruct.PLL.PLLR = (((VALUE_RCC_PLLCFGR & RCC_PLLCFGR_PLLR_Msk) >> RCC_PLLCFGR_PLLR_Pos) + 1) << 1;

    /* Configure RCC control registers */
    if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
        while(1);

    /* Set all clock types for configuration */
    RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_ALL;

    /* Get the source clock information */
    RCC_ClkInitStruct.SYSCLKSource = VALUE_RCC_CFGR & RCC_CFGR_SW_Msk;

    /* Get the AHB prescaler value */
    RCC_ClkInitStruct.AHBCLKDivider = VALUE_RCC_CFGR & RCC_CFGR_HPRE_Msk;

    /* Get the APB prescaler value */
    RCC_ClkInitStruct.APB1CLKDivider = VALUE_RCC_CFGR & RCC_CFGR_PPRE1_Msk;

    /* Get the APB prescaler value */
    RCC_ClkInitStruct.APB2CLKDivider = (VALUE_RCC_CFGR & RCC_CFGR_PPRE2_Msk) >> 3;

    /* Set flash latency based on the frequency value */
    if (FOSC_34_KHz >= FOSC_KHZ_VALUE) {
        flatency = FLASH_LATENCY_0;
    } else if ((FOSC_68_KHz >= FOSC_KHZ_VALUE) && (FOSC_34_KHz < FOSC_KHZ_VALUE)) {
        flatency = FLASH_LATENCY_1;
    } else if ((FOSC_102_KHz >= FOSC_KHZ_VALUE) && (FOSC_68_KHz < FOSC_KHZ_VALUE)) {
        flatency = FLASH_LATENCY_2;
    } else if ((FOSC_136_KHz >= FOSC_KHZ_VALUE) && (FOSC_102_KHz < FOSC_KHZ_VALUE)) {
        flatency = FLASH_LATENCY_3;
    } else {
        flatency = FLASH_LATENCY_4;
    }

    /* Configure RCC configuration register */
    if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, flatency) != HAL_OK)
        while(1);
}

//*****************************************************************************
// Prescaler tables.
//*****************************************************************************

static const uint16_t AHBPrescArray[9] = {1, 2, 4, 8, 32, 64, 128, 256, 512};
static const uint8_t APBPrescArray[5] = {1, 2, 4, 8, 16};

//*****************************************************************************
// Compute HCLK, PCLK1, PCLK2 and ADCCLK clocks frequencies.
//*****************************************************************************

void RCC_GetClocksFrequency(RCC_ClocksTypeDef_t *RCC_Clocks) {
    volatile uint32_t tmp = 0, presc = 0;

    RCC_Clocks->SYSCLK_Frequency = FOSC_KHZ_VALUE * 1000;

    /* Get HCLK prescaler */
    tmp = READ_REG(RCC->CFGR) & RCC_CFGR_HPRE_Msk;
    tmp = tmp >> RCC_CFGR_HPRE_Pos;
    if (tmp < 8) { tmp = 7; }
    presc = AHBPrescArray[tmp - 7];

    /* HCLK clock frequency */
    RCC_Clocks->HCLK_Frequency = RCC_Clocks->SYSCLK_Frequency / presc;

    /* Get PCLK1 prescaler */
    tmp = READ_REG(RCC->CFGR) & RCC_CFGR_PPRE1_Msk;
    tmp = tmp >> RCC_CFGR_PPRE1_Pos;
    if (tmp < 4) { tmp = 3; }
    presc = APBPrescArray[tmp - 3];

    /* PCLK1 clock frequency */
    RCC_Clocks->PCLK1_Frequency = RCC_Clocks->HCLK_Frequency / presc;

    /* Get PCLK2 prescaler */
    tmp = READ_REG(RCC->CFGR) & RCC_CFGR_PPRE2_Msk;
    tmp = tmp >> RCC_CFGR_PPRE2_Pos;
    if (tmp < 4) { tmp = 3; }
    presc = APBPrescArray[tmp - 3];

    /* PCLK2 clock frequency */
    RCC_Clocks->PCLK2_Frequency = RCC_Clocks->HCLK_Frequency / presc;
}
