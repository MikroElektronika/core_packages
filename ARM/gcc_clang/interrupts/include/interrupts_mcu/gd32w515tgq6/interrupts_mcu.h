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
* @brief GD32W515TGQ6 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_WWDGT = 16;
static const int INTERRUPTS_LVD = 17;
static const int INTERRUPTS_TAMPER_STAMP = 18;
static const int INTERRUPTS_RTC_WKUP = 19;
static const int INTERRUPTS_FMC = 20;
static const int INTERRUPTS_RCU = 21;
static const int INTERRUPTS_EXTI0 = 22;
static const int INTERRUPTS_EXTI1 = 23;
static const int INTERRUPTS_EXTI2 = 24;
static const int INTERRUPTS_EXTI3 = 25;
static const int INTERRUPTS_EXTI4 = 26;
static const int INTERRUPTS_DMA0_Channel0 = 27;
static const int INTERRUPTS_DMA0_Channel1 = 28;
static const int INTERRUPTS_DMA0_Channel2 = 29;
static const int INTERRUPTS_DMA0_Channel3 = 30;
static const int INTERRUPTS_DMA0_Channel4 = 31;
static const int INTERRUPTS_DMA0_Channel5 = 32;
static const int INTERRUPTS_DMA0_Channel6 = 33;
static const int INTERRUPTS_DMA0_Channel7 = 34;
static const int INTERRUPTS_ADC = 35;
static const int INTERRUPTS_TAMPER_STAMP_S = 36;
static const int INTERRUPTS_RTC_WKUP_S = 37;
static const int INTERRUPTS_RTC_Alarm_S = 38;
static const int INTERRUPTS_EXTI5_9 = 39;
static const int INTERRUPTS_TIMER0_BRK = 40;
static const int INTERRUPTS_TIMER0_UP = 41;
static const int INTERRUPTS_TIMER0_CMT = 42;
static const int INTERRUPTS_TIMER0_Channel = 43;
static const int INTERRUPTS_TIMER1 = 44;
static const int INTERRUPTS_TIMER2 = 45;
static const int INTERRUPTS_TIMER3 = 46;
static const int INTERRUPTS_I2C0_EV = 47;
static const int INTERRUPTS_I2C0_ER = 48;
static const int INTERRUPTS_I2C1_EV = 49;
static const int INTERRUPTS_I2C1_ER = 50;
static const int INTERRUPTS_SPI0 = 51;
static const int INTERRUPTS_SPI1 = 52;
static const int INTERRUPTS_USART0 = 53;
static const int INTERRUPTS_USART1 = 54;
static const int INTERRUPTS_USART2 = 55;
static const int INTERRUPTS_EXTI10_15 = 56;
static const int INTERRUPTS_RTC_Alarm = 57;
static const int INTERRUPTS_VLVDF = 58;
static const int INTERRUPTS_TIMER15 = 60;
static const int INTERRUPTS_TIMER16 = 61;
static const int INTERRUPTS_SDIO = 65;
static const int INTERRUPTS_TIMER4 = 66;
static const int INTERRUPTS_I2C0_WKUP = 67;
static const int INTERRUPTS_USART0_WKUP = 68;
static const int INTERRUPTS_USART2_WKUP = 69;
static const int INTERRUPTS_TIMER5 = 70;
static const int INTERRUPTS_DMA1_Channel0 = 72;
static const int INTERRUPTS_DMA1_Channel1 = 73;
static const int INTERRUPTS_DMA1_Channel2 = 74;
static const int INTERRUPTS_DMA1_Channel3 = 75;
static const int INTERRUPTS_DMA1_Channel4 = 76;
static const int INTERRUPTS_DMA1_Channel5 = 77;
static const int INTERRUPTS_DMA1_Channel6 = 78;
static const int INTERRUPTS_DMA1_Channel7 = 79;
static const int INTERRUPTS_WIFI11N_WKUP = 82;
static const int INTERRUPTS_USBFS = 83;
static const int INTERRUPTS_USBFS_WKUP = 92;
static const int INTERRUPTS_CAU = 95;
static const int INTERRUPTS_HAU_TRNG = 96;
static const int INTERRUPTS_FPU = 97;
static const int INTERRUPTS_WIFI11N_INT0 = 107;
static const int INTERRUPTS_WIFI11N_INT1 = 108;
static const int INTERRUPTS_WIFI11N_INT2 = 109;
static const int INTERRUPTS_EFUSE = 110;
static const int INTERRUPTS_QSPI = 111;
static const int INTERRUPTS_PKCAU = 112;
static const int INTERRUPTS_TSI = 113;
static const int INTERRUPTS_ICACHE = 114;
static const int INTERRUPTS_TZIAC_S = 115;
static const int INTERRUPTS_FMC_S = 116;
static const int INTERRUPTS_QSPI_S = 117;
static const int INTERRUPTS_DCI = 94;
static const int INTERRUPTS_HPDF_INT0 = 105;
static const int INTERRUPTS_HPDF_INT1 = 106;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for GD32W515TGQ6.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for GD32W515TGQ6.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
