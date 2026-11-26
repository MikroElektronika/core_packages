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
 * @brief ESP32-C3 MCU specific interrupt per module definitions.
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
static const int INTERRUPTS_RWBT = 7;
static const int INTERRUPTS_RWBLE = 8;
static const int INTERRUPTS_RWBT_NMI = 9;
static const int INTERRUPTS_RWBLE_NMI = 10;
static const int INTERRUPTS_I2C_MASTER = 11;
static const int INTERRUPTS_SLC0 = 12;
static const int INTERRUPTS_SLC1 = 13;
static const int INTERRUPTS_APB_CTRL = 14;
static const int INTERRUPTS_UHCI0 = 15;
static const int INTERRUPTS_GPIO = 16;
static const int INTERRUPTS_GPIO_NMI = 17;
static const int INTERRUPTS_SPI1 = 18;
static const int INTERRUPTS_SPI2 = 19;
static const int INTERRUPTS_I2S0 = 20;
static const int INTERRUPTS_UART0 = 21;
static const int INTERRUPTS_UART1 = 22;
static const int INTERRUPTS_LEDC = 23;
static const int INTERRUPTS_EFUSE = 24;
static const int INTERRUPTS_TWAI = 25;
static const int INTERRUPTS_USB_SERIAL_JTAG = 26;
static const int INTERRUPTS_RTC_CORE = 27;
static const int INTERRUPTS_RMT = 28;
static const int INTERRUPTS_I2C_EXT0 = 29;
static const int INTERRUPTS_TIMER1 = 30;
static const int INTERRUPTS_TIMER2 = 31;
static const int INTERRUPTS_TG0_T0_LEVEL = 32;
static const int INTERRUPTS_TG0_WDT_LEVEL = 33;
static const int INTERRUPTS_TG1_T0_LEVEL = 34;
static const int INTERRUPTS_TG1_WDT_LEVEL = 35;
static const int INTERRUPTS_CACHE_IA = 36;
static const int INTERRUPTS_SYSTIMER_TARGET0 = 37;
static const int INTERRUPTS_SYSTIMER_TARGET1 = 38;
static const int INTERRUPTS_SYSTIMER_TARGET2 = 39;
static const int INTERRUPTS_SPI_MEM_REJECT_CACHE = 40;
static const int INTERRUPTS_ICACHE_PRELOAD0 = 41;
static const int INTERRUPTS_ICACHE_SYNC0 = 42;
static const int INTERRUPTS_APB_ADC = 43;
static const int INTERRUPTS_DMA_CH0 = 44;
static const int INTERRUPTS_DMA_CH1 = 45;
static const int INTERRUPTS_DMA_CH2 = 46;
static const int INTERRUPTS_RSA = 47;
static const int INTERRUPTS_AES = 48;
static const int INTERRUPTS_SHA = 49;
static const int INTERRUPTS_FROM_CPU_INTR0 = 50;
static const int INTERRUPTS_FROM_CPU_INTR1 = 51;
static const int INTERRUPTS_FROM_CPU_INTR2 = 52;
static const int INTERRUPTS_FROM_CPU_INTR3 = 53;
static const int INTERRUPTS_ASSIST_DEBUG = 54;
static const int INTERRUPTS_DMA_APBPERI_PMS = 55;
static const int INTERRUPTS_CORE0_IRAM0_PMS = 56;
static const int INTERRUPTS_CORE0_DRAM0_PMS = 57;
static const int INTERRUPTS_CORE0_PIF_PMS = 58;
static const int INTERRUPTS_CORE0_PIF_PMS_SIZE = 59;
static const int INTERRUPTS_BAK_PMS_VIOLATE = 60;
static const int INTERRUPTS_CACHE_CORE0_ACS = 61;
// EOF Interrupt table

// Interrupt controller
#define INTERRUPTS_ESP_MATRIX
#define INTERRUPTS_ESP_INTC
#define INTERRUPTS_ESP_SOURCES 62
#define INTERRUPTS_ESP_CPU_LINE 1
#define INTERRUPTS_ESP_MAP_BASE 0x600C2000UL
#define INTERRUPTS_ESP_STATUS_COUNT 2
#define INTERRUPTS_ESP_STATUS_REGS { 0x600C20F8UL, 0x600C20FCUL }
#define INTERRUPTS_ESP_INTERRUPT_CORE0_CPU_INT_ENABLE_REG 0x600C2104UL
#define INTERRUPTS_ESP_INTERRUPT_CORE0_CPU_INT_TYPE_REG 0x600C2108UL
#define INTERRUPTS_ESP_INTERRUPT_CORE0_CPU_INT_THRESH_REG 0x600C2194UL
#define INTERRUPTS_ESP_INTERRUPT_CORE0_CPU_INT_PRI_0_REG 0x600C2114UL
// EOF Interrupt controller

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
