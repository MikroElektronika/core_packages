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
* @brief GD32VW553HIQ6 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_WWDGT = 35;
static const int INTERRUPTS_LVD = 36;
static const int INTERRUPTS_TAMPER_STAMP = 37;
static const int INTERRUPTS_RTC_WKUP = 38;
static const int INTERRUPTS_FMC = 39;
static const int INTERRUPTS_RCU = 40;
static const int INTERRUPTS_EXTI0 = 41;
static const int INTERRUPTS_EXTI1 = 42;
static const int INTERRUPTS_EXTI2 = 43;
static const int INTERRUPTS_EXTI3 = 44;
static const int INTERRUPTS_EXTI4 = 45;
static const int INTERRUPTS_DMA_Channel0 = 46;
static const int INTERRUPTS_DMA_Channel1 = 47;
static const int INTERRUPTS_DMA_Channel2 = 48;
static const int INTERRUPTS_DMA_Channel3 = 49;
static const int INTERRUPTS_DMA_Channel4 = 50;
static const int INTERRUPTS_DMA_Channel5 = 51;
static const int INTERRUPTS_DMA_Channel6 = 52;
static const int INTERRUPTS_DMA_Channel7 = 53;
static const int INTERRUPTS_ADC = 54;
static const int INTERRUPTS_EXTI5_9 = 58;
static const int INTERRUPTS_TIMER0_BRK = 59;
static const int INTERRUPTS_TIMER0_UP = 60;
static const int INTERRUPTS_TIMER0_CMT = 61;
static const int INTERRUPTS_TIMER0_Channel = 62;
static const int INTERRUPTS_TIMER1 = 63;
static const int INTERRUPTS_TIMER2 = 64;
static const int INTERRUPTS_I2C0_EV = 66;
static const int INTERRUPTS_I2C0_ER = 67;
static const int INTERRUPTS_I2C1_EV = 68;
static const int INTERRUPTS_I2C1_ER = 69;
static const int INTERRUPTS_SPI = 70;
static const int INTERRUPTS_USART0 = 72;
static const int INTERRUPTS_UART1 = 73;
static const int INTERRUPTS_UART2 = 74;
static const int INTERRUPTS_EXTI10_15 = 75;
static const int INTERRUPTS_RTC_Alarm = 76;
static const int INTERRUPTS_VLVDF = 77;
static const int INTERRUPTS_TIMER15 = 79;
static const int INTERRUPTS_TIMER16 = 80;
static const int INTERRUPTS_I2C0_WKUP = 86;
static const int INTERRUPTS_USART0_WKUP = 87;
static const int INTERRUPTS_TIMER5 = 89;
static const int INTERRUPTS_WIFI_TRIGGER = 90;
static const int INTERRUPTS_WIFI_MAC = 91;
static const int INTERRUPTS_WIFI_TX = 92;
static const int INTERRUPTS_WIFI_RX = 93;
static const int INTERRUPTS_LA = 99;
static const int INTERRUPTS_WIFI_WKUP = 100;
static const int INTERRUPTS_BLE_WKUP = 101;
static const int INTERRUPTS_PLATFORM_WAKE = 102;
static const int INTERRUPTS_ISO_BT_STAMP0 = 103;
static const int INTERRUPTS_ISO_BT_STAMP1 = 104;
static const int INTERRUPTS_ISO_BT_STAMP2 = 105;
static const int INTERRUPTS_ISO_BT_STAMP3 = 106;
static const int INTERRUPTS_ISO_BT_STAMP4 = 107;
static const int INTERRUPTS_ISO_BT_STAMP5 = 108;
static const int INTERRUPTS_ISO_BT_STAMP6 = 109;
static const int INTERRUPTS_ISO_BT_STAMP7 = 110;
static const int INTERRUPTS_PMU = 111;
static const int INTERRUPTS_CAU = 114;
static const int INTERRUPTS_HAU_TRNG = 115;
static const int INTERRUPTS_WIFI_INT = 117;
static const int INTERRUPTS_WIFI_SW_TRIG = 118;
static const int INTERRUPTS_WIFI_FINE_TIMER_TARGET = 119;
static const int INTERRUPTS_WIFI_STAMP_TARGET1 = 120;
static const int INTERRUPTS_WIFI_STAMP_TARGET2 = 121;
static const int INTERRUPTS_WIFI_STAMP_TARGET3 = 122;
static const int INTERRUPTS_WIFI_ENCRYPTION_ENGINE = 123;
static const int INTERRUPTS_WIFI_SLEEP_MODE = 124;
static const int INTERRUPTS_WIFI_HALF_SLOT = 125;
static const int INTERRUPTS_WIFI_FIFO_ACTIVITY = 126;
static const int INTERRUPTS_WIFI_ERROR = 127;
static const int INTERRUPTS_WIFI_FREQ_SELECT = 128;
static const int INTERRUPTS_EFUSE = 129;
static const int INTERRUPTS_QSPI = 130;
static const int INTERRUPTS_PKCAU = 131;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for GD32VW553HIQ6.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for GD32VW553HIQ6.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
