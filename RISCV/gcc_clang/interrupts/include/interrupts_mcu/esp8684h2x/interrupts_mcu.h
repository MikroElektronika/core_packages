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
 * @brief ESP8684H2X MCU specific interrupt per module definitions.
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
static const int INTERRUPTS_APB_CTRL = 12;
static const int INTERRUPTS_GPIO = 13;
static const int INTERRUPTS_GPIO_NMI = 14;
static const int INTERRUPTS_SPI1 = 15;
static const int INTERRUPTS_SPI2 = 16;
static const int INTERRUPTS_UART0 = 17;
static const int INTERRUPTS_UART1 = 18;
static const int INTERRUPTS_LEDC = 19;
static const int INTERRUPTS_EFUSE = 20;
static const int INTERRUPTS_RTC_CORE = 21;
static const int INTERRUPTS_I2C_EXT0 = 22;
static const int INTERRUPTS_TG0_T0_LEVEL = 23;
static const int INTERRUPTS_TG0_WDT_LEVEL = 24;
static const int INTERRUPTS_CACHE_IA = 25;
static const int INTERRUPTS_SYSTIMER_TARGET0 = 26;
static const int INTERRUPTS_SYSTIMER_TARGET1 = 27;
static const int INTERRUPTS_SYSTIMER_TARGET2 = 28;
static const int INTERRUPTS_SPI_MEM_REJECT_CACHE = 29;
static const int INTERRUPTS_ICACHE_PRELOAD0 = 30;
static const int INTERRUPTS_ICACHE_SYNC0 = 31;
static const int INTERRUPTS_APB_ADC = 32;
static const int INTERRUPTS_DMA_CH0 = 33;
static const int INTERRUPTS_SHA = 34;
static const int INTERRUPTS_ECC = 35;
static const int INTERRUPTS_FROM_CPU_INTR0 = 36;
static const int INTERRUPTS_FROM_CPU_INTR1 = 37;
static const int INTERRUPTS_FROM_CPU_INTR2 = 38;
static const int INTERRUPTS_FROM_CPU_INTR3 = 39;
static const int INTERRUPTS_ASSIST_DEBUG = 40;
static const int INTERRUPTS_CORE0_PIF_PMS_SIZE = 41;
static const int INTERRUPTS_CACHE_CORE0_ACS = 42;
// EOF Interrupt table

// Interrupt controller
#define INTERRUPTS_ESP_MATRIX
#define INTERRUPTS_ESP_INTC
#define INTERRUPTS_ESP_SOURCES 43
#define INTERRUPTS_ESP_CPU_LINE 1
#define INTERRUPTS_ESP_MAP_BASE 0x600C2000UL
#define INTERRUPTS_ESP_STATUS_COUNT 2
#define INTERRUPTS_ESP_STATUS_REGS { 0x600C20ACUL, 0x600C20B0UL }
#define INTERRUPTS_ESP_INTERRUPT_CORE0_CPU_INT_ENABLE_REG 0x600C20B8UL
#define INTERRUPTS_ESP_INTERRUPT_CORE0_CPU_INT_TYPE_REG 0x600C20BCUL
#define INTERRUPTS_ESP_INTERRUPT_CORE0_CPU_INT_THRESH_REG 0x600C2148UL
#define INTERRUPTS_ESP_INTERRUPT_CORE0_CPU_INT_PRI_0_REG 0x600C20C8UL
// EOF Interrupt controller

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
