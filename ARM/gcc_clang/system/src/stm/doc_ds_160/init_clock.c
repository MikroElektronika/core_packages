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
#include "stm32l4xx_hal_rcc.h"
#include "stm32l4xx_hal_pwr_ex.h"

static RCC_OscInitTypeDef RCC_OscInitStruct = {0};
static RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

typedef struct RCC_ClocksTypeDef {
    uint32_t SYSCLK_Frequency; // SYSCLK clock frequency  in Hz
    uint32_t HCLK_Frequency;   // HCLK   clock frequency  in Hz
    uint32_t PCLK1_Frequency;  // PCLK1  clock frequency  in Hz
    uint32_t PCLK2_Frequency;  // PCLK2  clock frequency  in Hz
    uint32_t TPCLK1_Frequency; // TPCLK1 clock frequency  in Hz
    uint32_t TPCLK2_Frequency; // TPCLK2 clock frequency  in Hz
} RCC_ClocksTypeDef_t;

extern uint32_t uwTick;
extern uint32_t uwTickFreq;

__attribute__ ((interrupt("IRQ"))) void SysTick_Handler(void) {
    uwTick += (uint32_t)uwTickFreq;
}

void clockConfig(void) {
    HAL_Init();

    // Enable system and power clocks.
    __HAL_RCC_SYSCFG_CLK_ENABLE();
    __HAL_RCC_PWR_CLK_ENABLE();

    // Configure the main internal regulator output voltage.
    if (HAL_PWREx_ControlVoltageScaling(PWR_REGULATOR_VOLTAGE_SCALE1_BOOST) != HAL_OK)
        while(1);

    // Select oscillators for configuration. More can be selected at once.
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
    if  (VALUE_RCC_CSR & RCC_CSR_LSION) {
        RCC_OscInitStruct.OscillatorType |= RCC_OSCILLATORTYPE_LSI;
    }
    if (VALUE_RCC_CR & RCC_CR_MSION) {
        RCC_OscInitStruct.OscillatorType |= RCC_OSCILLATORTYPE_MSI;
    }
    #if defined(RCC_HSI48_SUPPORT)
    if (VALUE_RCC_CRRCR & RCC_CRRCR_HSI48ON) {
        RCC_OscInitStruct.OscillatorType |= RCC_OSCILLATORTYPE_HSI48;
    }
    #endif /* RCC_HSI48_SUPPORT */

    // Get HSE oscillator state.
    RCC_OscInitStruct.HSEState = VALUE_RCC_CR & RCC_HSE_BYPASS;

    // Get LSE oscillator state.
    #if defined(RCC_BDCR_LSESYSDIS)
    RCC_OscInitStruct.LSEState = VALUE_RCC_BDCR & RCC_LSE_BYPASS_RTC_ONLY;
    #else /* RCC_BDCR_LSESYSDIS */
    RCC_OscInitStruct.LSEState = VALUE_RCC_BDCR & RCC_LSE_BYPASS;
    #endif /* RCC_BDCR_LSESYSDIS */

    // Get HSI oscillator state.
    RCC_OscInitStruct.HSIState = VALUE_RCC_CR & RCC_CR_HSION;
    // Get HSI oscillator calibration value.
    RCC_OscInitStruct.HSICalibrationValue = (VALUE_RCC_ICSCR & RCC_ICSCR_HSITRIM_Msk) >> RCC_ICSCR_HSITRIM_Pos;
    // Get LSI oscillator state.
    RCC_OscInitStruct.LSIState = VALUE_RCC_CSR & RCC_CSR_LSION;
    // Get LSI oscillator state.
    #if defined(RCC_CSR_LSIPREDIV)
    RCC_OscInitStruct.LSIDiv = VALUE_RCC_CSR & RCC_CSR_LSIPREDIV;
    #endif /* RCC_CSR_LSIPREDIV */
    // Get MSI oscillator state.
    RCC_OscInitStruct.MSIState = VALUE_RCC_CR & RCC_CR_MSION;
    // Get MSI oscillator calibration value.
    RCC_OscInitStruct.MSICalibrationValue = (VALUE_RCC_ICSCR & RCC_ICSCR_MSITRIM_Msk) >> RCC_ICSCR_MSITRIM_Pos;
    // Get MSI oscillator clock range.
    RCC_OscInitStruct.MSIClockRange = VALUE_RCC_CR & RCC_CR_MSIRANGE_Msk;
    // Get HSI48 oscillator state.
    #if defined(RCC_HSI48_SUPPORT)
    RCC_OscInitStruct.HSI48State = VALUE_RCC_CRRCR & RCC_CRRCR_HSI48ON;
    #else
    RCC_OscInitStruct.HSI48State = RCC_HSI48_OFF;
    #endif /* RCC_HSI48_SUPPORT */
    // Get PLL state.
    RCC_OscInitStruct.PLL.PLLState = (VALUE_RCC_CR & RCC_CR_PLLON) ? RCC_PLL_ON : RCC_PLL_OFF;
    // Get PLL source.
    RCC_OscInitStruct.PLL.PLLSource = VALUE_RCC_PLLCFGR & RCC_PLLCFGR_PLLSRC_Msk;
    // Get PLL M divider.
    RCC_OscInitStruct.PLL.PLLM = ((VALUE_RCC_PLLCFGR & RCC_PLLCFGR_PLLM_Msk) >> RCC_PLLCFGR_PLLM_Pos ) + 1;
    // Get PLL N multiplier.
    RCC_OscInitStruct.PLL.PLLN = (VALUE_RCC_PLLCFGR & RCC_PLLCFGR_PLLN_Msk) >> RCC_PLLCFGR_PLLN_Pos;
    // Get PLL P divider.
    #if defined(RCC_PLLP_SUPPORT)
    RCC_OscInitStruct.PLL.PLLP = (VALUE_RCC_PLLCFGR & RCC_PLLCFGR_PLLP_Msk) >> RCC_PLLCFGR_PLLP_Pos;
    #endif /* RCC_PLLP_SUPPORT */
    // Get PLL Q divider.
    RCC_OscInitStruct.PLL.PLLQ = (((VALUE_RCC_PLLCFGR & RCC_PLLCFGR_PLLQ_Msk) >> RCC_PLLCFGR_PLLQ_Pos) + 1) << 1;
    // Get PLL R divider.
    RCC_OscInitStruct.PLL.PLLR = (((VALUE_RCC_PLLCFGR & RCC_PLLCFGR_PLLR_Msk) >> RCC_PLLCFGR_PLLR_Pos) + 1) << 1;

    // Initializes the RCC Oscillators according to the specified parameters in the RCC_OscInitTypeDef structure.
    if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
        while(1);

    // Select which bus clock will be configured. More can be selected at once.
    RCC_ClkInitStruct.ClockType = (RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2);
    // Gets SYSCLK clock source.
    RCC_ClkInitStruct.SYSCLKSource = VALUE_RCC_CFGR & RCC_CFGR_SW_Msk;
    // Gets AHB1 clock source.
    RCC_ClkInitStruct.AHBCLKDivider = VALUE_RCC_CFGR & RCC_CFGR_HPRE_Msk;
    // Gets APB1 clock source.
    RCC_ClkInitStruct.APB1CLKDivider = VALUE_RCC_CFGR & RCC_CFGR_PPRE1_Msk;
    // Gets APB2 clock source.
    RCC_ClkInitStruct.APB2CLKDivider = (VALUE_RCC_CFGR & RCC_CFGR_PPRE2_Msk) >> 3;

    uint32_t flash_latency = FLASH_ACR_LATENCY_0WS;
    if (FOSC_KHZ_VALUE > 100000) {
        flash_latency = FLASH_ACR_LATENCY_5WS;
    }
    else if (FOSC_KHZ_VALUE > 80000) {
        flash_latency = FLASH_ACR_LATENCY_4WS;
    }
    else if (FOSC_KHZ_VALUE > 60000) {
        flash_latency = FLASH_ACR_LATENCY_3WS;
    }
    else if (FOSC_KHZ_VALUE > 40000) {
        flash_latency = FLASH_ACR_LATENCY_2WS;
    }
    else if (FOSC_KHZ_VALUE > 20000) {
        flash_latency = FLASH_ACR_LATENCY_1WS;
    }

    // Initializes the CPU, AHB and APB buses clocks.
    if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, flash_latency) != HAL_OK)
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
    tmp = READ_REG(RCC->CFGR) & RCC_CFGR_PPRE1_Msk;
    tmp = tmp >> RCC_CFGR_PPRE1_Pos;
    if (tmp < 4) { tmp = 3; }
    presc = APBPrescArray[tmp - 3];

    /* PCLK1 clock frequency */
    RCC_Clocks->PCLK1_Frequency = RCC_Clocks->HCLK_Frequency / presc;

    /**
     * Get TPCLK1 prescaler
     * TPCLK1 clock is calculated in the following way:
     * If APB1 Prescaler = 1 then TPCLK prescaler is x1
     * else if APB1 Presc > 1 then TPCLK presc is x2
     **/
    if (presc == 1) {
        RCC_Clocks->TPCLK1_Frequency = RCC_Clocks->PCLK1_Frequency;
    } else {
        RCC_Clocks->TPCLK1_Frequency = RCC_Clocks->PCLK1_Frequency * 2;
    }

    /* Get PCLK2 prescaler */
    tmp = READ_REG(RCC->CFGR) & RCC_CFGR_PPRE2_Msk;
    tmp = tmp >> RCC_CFGR_PPRE2_Pos;
    if (tmp < 4) { tmp = 3; }
    presc = APBPrescArray[tmp - 3];

    /* PCLK2 clock frequency */
    RCC_Clocks->PCLK2_Frequency = RCC_Clocks->HCLK_Frequency / presc;

    /**
     * Get TPCLK2 prescaler
     * TPCLK2 clock is calculated in the following way:
     * If APB2 Prescaler = 1 then TPCLK prescaler is x1
     * else if APB2 Presc > 1 then TPCLK presc is x2
     **/
    if (presc == 1) {
        RCC_Clocks->TPCLK2_Frequency = RCC_Clocks->PCLK2_Frequency;
    } else {
        RCC_Clocks->TPCLK2_Frequency = RCC_Clocks->PCLK2_Frequency * 2;
    }
}
