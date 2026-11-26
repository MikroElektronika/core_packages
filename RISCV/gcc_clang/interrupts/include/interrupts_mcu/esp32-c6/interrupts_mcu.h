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
 * @brief ESP32-C6 MCU specific interrupt per module definitions.
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
static const int INTERRUPTS_I2C_MASTER = 11;
static const int INTERRUPTS_ZB_MAC = 12;
static const int INTERRUPTS_PMU = 13;
static const int INTERRUPTS_EFUSE = 14;
static const int INTERRUPTS_LP_RTC_TIMER = 15;
static const int INTERRUPTS_LP_UART = 16;
static const int INTERRUPTS_LP_I2C = 17;
static const int INTERRUPTS_LP_WDT = 18;
static const int INTERRUPTS_LP_PERI_TIMEOUT = 19;
static const int INTERRUPTS_LP_APM_M0 = 20;
static const int INTERRUPTS_LP_APM_M1 = 21;
static const int INTERRUPTS_FROM_CPU_INTR0 = 22;
static const int INTERRUPTS_FROM_CPU_INTR1 = 23;
static const int INTERRUPTS_FROM_CPU_INTR2 = 24;
static const int INTERRUPTS_FROM_CPU_INTR3 = 25;
static const int INTERRUPTS_ASSIST_DEBUG = 26;
static const int INTERRUPTS_TRACE = 27;
static const int INTERRUPTS_CACHE = 28;
static const int INTERRUPTS_CPU_PERI_TIMEOUT = 29;
static const int INTERRUPTS_GPIO = 30;
static const int INTERRUPTS_GPIO_NMI = 31;
static const int INTERRUPTS_PAU = 32;
static const int INTERRUPTS_HP_PERI_TIMEOUT = 33;
static const int INTERRUPTS_MODEM_PERI_TIMEOUT = 34;
static const int INTERRUPTS_HP_APM_M0 = 35;
static const int INTERRUPTS_HP_APM_M1 = 36;
static const int INTERRUPTS_HP_APM_M2 = 37;
static const int INTERRUPTS_HP_APM_M3 = 38;
static const int INTERRUPTS_LP_APM0 = 39;
static const int INTERRUPTS_MSPI = 40;
static const int INTERRUPTS_I2S0 = 41;
static const int INTERRUPTS_UHCI0 = 42;
static const int INTERRUPTS_UART0 = 43;
static const int INTERRUPTS_UART1 = 44;
static const int INTERRUPTS_LEDC = 45;
static const int INTERRUPTS_TWAI0 = 46;
static const int INTERRUPTS_TWAI1 = 47;
static const int INTERRUPTS_USB_SERIAL_JTAG = 48;
static const int INTERRUPTS_RMT = 49;
static const int INTERRUPTS_I2C_EXT0 = 50;
static const int INTERRUPTS_TG0_T0_LEVEL = 51;
static const int INTERRUPTS_TG0_T1_LEVEL = 52;
static const int INTERRUPTS_TG0_WDT_LEVEL = 53;
static const int INTERRUPTS_TG1_T0_LEVEL = 54;
static const int INTERRUPTS_TG1_T1_LEVEL = 55;
static const int INTERRUPTS_TG1_WDT_LEVEL = 56;
static const int INTERRUPTS_SYSTIMER_TARGET0 = 57;
static const int INTERRUPTS_SYSTIMER_TARGET1 = 58;
static const int INTERRUPTS_SYSTIMER_TARGET2 = 59;
static const int INTERRUPTS_APB_ADC = 60;
static const int INTERRUPTS_MCPWM0 = 61;
static const int INTERRUPTS_PCNT = 62;
static const int INTERRUPTS_PARL_IO = 63;
static const int INTERRUPTS_SLC0 = 64;
static const int INTERRUPTS_SLC = 65;
static const int INTERRUPTS_DMA_IN_CH0 = 66;
static const int INTERRUPTS_DMA_IN_CH1 = 67;
static const int INTERRUPTS_DMA_IN_CH2 = 68;
static const int INTERRUPTS_DMA_OUT_CH0 = 69;
static const int INTERRUPTS_DMA_OUT_CH1 = 70;
static const int INTERRUPTS_DMA_OUT_CH2 = 71;
static const int INTERRUPTS_GSPI2 = 72;
static const int INTERRUPTS_AES = 73;
static const int INTERRUPTS_SHA = 74;
static const int INTERRUPTS_RSA = 75;
static const int INTERRUPTS_ECC = 76;
// EOF Interrupt table

// Interrupt controller
#define INTERRUPTS_ESP_MATRIX
#define INTERRUPTS_ESP_PLIC
#define INTERRUPTS_ESP_SOURCES 77
#define INTERRUPTS_ESP_CPU_LINE 1
#define INTERRUPTS_ESP_MAP_BASE 0x60010000UL
#define INTERRUPTS_ESP_STATUS_COUNT 3
#define INTERRUPTS_ESP_STATUS_REGS { 0x60010134UL, 0x60010138UL, 0x6001013CUL }
#define INTERRUPTS_ESP_PLIC_MXINT_ENABLE_REG 0x20001000UL
#define INTERRUPTS_ESP_PLIC_MXINT_TYPE_REG 0x20001004UL
#define INTERRUPTS_ESP_PLIC_MXINT_THRESH_REG 0x20001090UL
#define INTERRUPTS_ESP_PLIC_MXINT0_PRI_REG 0x20001010UL
// EOF Interrupt controller

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
