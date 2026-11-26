/****************************************************************************
**
** Copyright (C) 2025 MikroElektronika d.o.o.
** Contact: https://www.mikroe.com/contact
**
** This file is part of the mikroSDK package
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
 * @file  interrupts_mcu.h
 * @brief ESP32-C61HF4 MCU specific interrupt per module definitions.
 *        INTERRUPTS_<SOURCE> values are interrupt matrix source numbers (ESP-IDF soc/interrupts.h).
 *        interrupt_enable() routes a source to CPU interrupt line 1; the common trap handler calls
 *        <SOURCE>_IRQHandler for every pending enabled source.
 */

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_WIFI_MAC = 0;
static const int INTERRUPTS_WIFI_MAC_NMI = 1;
static const int INTERRUPTS_WIFI_PWR = 2;
static const int INTERRUPTS_WIFI_BB = 3;
static const int INTERRUPTS_BT_MAC = 4;
static const int INTERRUPTS_BT_BB = 5;
static const int INTERRUPTS_BT_BB_NMI = 6;
static const int INTERRUPTS_LP_TIMER = 7;
static const int INTERRUPTS_COEX = 8;
static const int INTERRUPTS_BLE_TIMER = 9;
static const int INTERRUPTS_BLE_SEC = 10;
static const int INTERRUPTS_I2C_MST = 11;
static const int INTERRUPTS_ZB_MAC = 12;
static const int INTERRUPTS_PMU = 13;
static const int INTERRUPTS_EFUSE = 14;
static const int INTERRUPTS_LP_RTC_TIMER = 15;
static const int INTERRUPTS_LP_WDT = 16;
static const int INTERRUPTS_LP_PERI_TIMEOUT = 17;
static const int INTERRUPTS_LP_APM_M0 = 18;
static const int INTERRUPTS_CPU_INTR_FROM_CPU_0 = 19;
static const int INTERRUPTS_CPU_INTR_FROM_CPU_1 = 20;
static const int INTERRUPTS_CPU_INTR_FROM_CPU_2 = 21;
static const int INTERRUPTS_CPU_INTR_FROM_CPU_3 = 22;
static const int INTERRUPTS_ASSIST_DEBUG = 23;
static const int INTERRUPTS_TRACE = 24;
static const int INTERRUPTS_CACHE = 25;
static const int INTERRUPTS_CPU_PERI_TIMEOUT = 26;
static const int INTERRUPTS_GPIO_INTERRUPT_PRO = 27;
static const int INTERRUPTS_GPIO_INTERRUPT_EXT = 28;
static const int INTERRUPTS_PAU = 29;
static const int INTERRUPTS_HP_PERI_TIMEOUT = 30;
static const int INTERRUPTS_MODEM_PERI_TIMEOUT = 31;
static const int INTERRUPTS_HP_APM_M0 = 32;
static const int INTERRUPTS_HP_APM_M1 = 33;
static const int INTERRUPTS_HP_APM_M2 = 34;
static const int INTERRUPTS_HP_APM_M3 = 35;
static const int INTERRUPTS_CPU_APM_M0 = 36;
static const int INTERRUPTS_CPU_APM_M1 = 37;
static const int INTERRUPTS_MSPI = 38;
static const int INTERRUPTS_I2S0 = 39;
static const int INTERRUPTS_UART0 = 40;
static const int INTERRUPTS_UART1 = 41;
static const int INTERRUPTS_UART2 = 42;
static const int INTERRUPTS_LEDC = 43;
static const int INTERRUPTS_USB_SERIAL_JTAG = 44;
static const int INTERRUPTS_I2C_EXT0 = 45;
static const int INTERRUPTS_TG0_T0 = 46;
static const int INTERRUPTS_TG0_T1 = 47;
static const int INTERRUPTS_TG0_WDT = 48;
static const int INTERRUPTS_TG1_T0 = 49;
static const int INTERRUPTS_TG1_T1 = 50;
static const int INTERRUPTS_TG1_WDT = 51;
static const int INTERRUPTS_SYSTIMER_TARGET0 = 52;
static const int INTERRUPTS_SYSTIMER_TARGET1 = 53;
static const int INTERRUPTS_SYSTIMER_TARGET2 = 54;
static const int INTERRUPTS_APB_ADC = 55;
static const int INTERRUPTS_SLC0 = 56;
static const int INTERRUPTS_SLC1 = 57;
static const int INTERRUPTS_DMA_IN_CH0 = 58;
static const int INTERRUPTS_DMA_IN_CH1 = 59;
static const int INTERRUPTS_DMA_OUT_CH0 = 60;
static const int INTERRUPTS_DMA_OUT_CH1 = 61;
static const int INTERRUPTS_GPSPI2 = 62;
static const int INTERRUPTS_SHA = 63;
static const int INTERRUPTS_ECC = 64;
static const int INTERRUPTS_ECDSA = 65;
// EOF Interrupt table

// Interrupt controller
#define INTERRUPTS_ESP_MATRIX
#define INTERRUPTS_ESP_CLIC
#define INTERRUPTS_ESP_SOURCES 66
#define INTERRUPTS_ESP_CPU_LINE 1
#define INTERRUPTS_ESP_MAP_BASE 0x60010000UL
#define INTERRUPTS_ESP_STATUS_COUNT 3
#define INTERRUPTS_ESP_STATUS_REGS { 0x60010108UL, 0x6001010CUL, 0x60010110UL }
#define INTERRUPTS_ESP_DR_REG_CLIC_CTRL_BASE 0x20801000UL
#define INTERRUPTS_ESP_NLBITS 0x00000003UL
#define INTERRUPTS_ESP_CLIC_EXT_INTR_NUM_OFFSET 0x00000010UL
#define INTERRUPTS_ESP_DR_REG_CLIC_BASE 0x20800000UL
// EOF Interrupt controller

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
