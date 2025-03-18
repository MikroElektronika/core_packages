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
** EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
** OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
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
#include "stm32c0xx_hal_rcc.h"

#define FLASH_LATENCY_0  0x00       /*!< FLASH Zero wait state */
#define FLASH_LATENCY_1  0x01       /*!< FLASH One wait state */
#define FOSC_24_KHz      24000      /*!< 24 MHz clock frequency */

static RCC_OscInitTypeDef RCC_OscInitStruct = {0};
static RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

typedef struct RCC_ClocksTypeDef {
    uint32_t SYSCLK_Frequency; // SYSCLK clock frequency  in Hz
    uint32_t HCLK_Frequency;   // HCLK   clock frequency  in Hz
    uint32_t PCLK_Frequency;   // PCLK   clock frequency  in Hz
    uint32_t TPCLK_Frequency;  // TPCLK  clock frequency  in Hz
} RCC_ClocksTypeDef_t;

extern uint32_t uwTick;
extern uint32_t uwTickFreq;

__attribute__ ((interrupt("IRQ"))) void SysTick_Handler(void) {
    uwTick += (uint32_t)uwTickFreq;
}

void clockConfig(void) {
    uint8_t flatency;

    /* Reset of all peripherals, initialize the Flash interface and the Systick. */
    HAL_Init();

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
    if (VALUE_RCC_CSR1 & RCC_CSR1_LSEON) {
        RCC_OscInitStruct.OscillatorType |= RCC_OSCILLATORTYPE_LSE;
    }
    if (VALUE_RCC_CSR2 & RCC_CSR2_LSION) {
        RCC_OscInitStruct.OscillatorType |= RCC_OSCILLATORTYPE_LSI;
    }

    /* Get the HSE clock state information */
    RCC_OscInitStruct.HSEState = VALUE_RCC_CR & RCC_HSE_BYPASS;

    /* Get the LSE clock state information */
    RCC_OscInitStruct.LSEState = VALUE_RCC_CSR1 & RCC_LSE_BYPASS;

    /* Get the HSI clock state information */
    RCC_OscInitStruct.HSIState = VALUE_RCC_CR & RCC_CR_HSION_Msk;

    /* Get the HSI clock division factor */
    RCC_OscInitStruct.HSIDiv = VALUE_RCC_CR & RCC_CR_HSIDIV_Msk;

    /* Get the HSI clock calibration information */
    RCC_OscInitStruct.HSICalibrationValue = (VALUE_RCC_ICSCR & RCC_ICSCR_HSITRIM_Msk) >> RCC_ICSCR_HSITRIM_Pos;

    /* Get the LSI clock state information */
    RCC_OscInitStruct.LSIState = VALUE_RCC_CSR2 & RCC_CSR2_LSION_Msk;

    /* Configure RCC control registers */
    if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
        while(1);

    /* Set all clock types for configuration */
    RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_ALL;

    /* Get the source clock information */
    RCC_ClkInitStruct.SYSCLKSource = VALUE_RCC_CFGR & RCC_CFGR_SW_Msk;

    /* Set system clock divider as 1 */
    RCC_ClkInitStruct.SYSCLKDivider = RCC_SYSCLK_DIV1;

    /* Get the AHB prescaler value */
    RCC_ClkInitStruct.AHBCLKDivider = VALUE_RCC_CFGR & RCC_CFGR_HPRE_Msk;

    /* Get the APB prescaler value */
    RCC_ClkInitStruct.APB1CLKDivider = VALUE_RCC_CFGR & RCC_CFGR_PPRE_Msk;

    /* Set flash latency based on the frequency value*/
    if (FOSC_24_KHz < FOSC_KHZ_VALUE) {
        flatency = FLASH_LATENCY_1;
    } else {
        flatency = FLASH_LATENCY_0;
    }

    /* Configure RCC configuration register */
    if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, flatency) != HAL_OK)
        while(1);
}

//*****************************************************************************
// Prescaler tables
//*****************************************************************************

static const uint16_t AHBPrescArray[9] = {1, 2, 4, 8, 32, 64, 128, 256, 512};
static const uint8_t APBPrescArray[5] = {1, 2, 4, 8, 16};

//*****************************************************************************
// Compute SYSCLK, PCLK clocks frequencies
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
    tmp = READ_REG(RCC->CFGR) & RCC_CFGR_PPRE_Msk;
    tmp = tmp >> RCC_CFGR_PPRE_Pos;
    if (tmp < 4) { tmp = 3; }
    presc = APBPrescArray[tmp - 3];

    /* PCLK1 clock frequency */
    RCC_Clocks->PCLK_Frequency = RCC_Clocks->HCLK_Frequency / presc;

    /**
     * Get TPCLK prescaler
     * TPCLK clock is calculated in the following way:
     * If APB Prescaler = 1 then TPCLK prescaler is x1
     * else if APB Presc > 1 then TPCLK presc is x2
     **/
    if (presc == 1) {
        RCC_Clocks->TPCLK_Frequency = RCC_Clocks->PCLK_Frequency;
    } else {
        RCC_Clocks->TPCLK_Frequency = RCC_Clocks->PCLK_Frequency * 2;
    }
}
