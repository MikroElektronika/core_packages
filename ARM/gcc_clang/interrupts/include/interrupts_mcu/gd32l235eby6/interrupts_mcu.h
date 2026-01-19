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
* @brief GD32L235EBY6 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_WWDGT = 16;
static const int INTERRUPTS_LVD = 17;
static const int INTERRUPTS_TAMPER_STAMP = 18;
static const int INTERRUPTS_RTC_WKUP = 19;
static const int INTERRUPTS_FMC = 20;
static const int INTERRUPTS_RCU_CTC = 21;
static const int INTERRUPTS_EXTI0 = 22;
static const int INTERRUPTS_EXTI1 = 23;
static const int INTERRUPTS_EXTI2 = 24;
static const int INTERRUPTS_EXTI3 = 25;
static const int INTERRUPTS_EXTI4 = 26;
static const int INTERRUPTS_DMA_Channel0 = 27;
static const int INTERRUPTS_DMA_Channel1 = 28;
static const int INTERRUPTS_DMA_Channel2 = 29;
static const int INTERRUPTS_DMA_Channel3 = 30;
static const int INTERRUPTS_DMA_Channel4 = 31;
static const int INTERRUPTS_DMA_Channel5 = 32;
static const int INTERRUPTS_DMA_Channel6 = 33;
static const int INTERRUPTS_ADC = 34;
static const int INTERRUPTS_USBD_HP_CAN_TX = 35;
static const int INTERRUPTS_USBD_LP_CAN_RX0 = 36;
static const int INTERRUPTS_USBD_HP = 35;
static const int INTERRUPTS_USBD_LP = 36;
static const int INTERRUPTS_TIMER1 = 37;
static const int INTERRUPTS_TIMER2 = 38;
static const int INTERRUPTS_TIMER8 = 39;
static const int INTERRUPTS_TIMER11 = 40;
static const int INTERRUPTS_TIMER5 = 41;
static const int INTERRUPTS_TIMER6 = 42;
static const int INTERRUPTS_USART0 = 43;
static const int INTERRUPTS_USART1 = 44;
static const int INTERRUPTS_UART3 = 45;
static const int INTERRUPTS_UART4 = 46;
static const int INTERRUPTS_I2C0_EV = 47;
static const int INTERRUPTS_I2C0_ER = 48;
static const int INTERRUPTS_I2C1_EV = 49;
static const int INTERRUPTS_I2C1_ER = 50;
static const int INTERRUPTS_SPI0 = 51;
static const int INTERRUPTS_SPI1 = 52;
static const int INTERRUPTS_DAC = 53;
static const int INTERRUPTS_I2C2_EV = 55;
static const int INTERRUPTS_I2C2_ER = 56;
static const int INTERRUPTS_RTC_Alarm = 57;
static const int INTERRUPTS_USBD_WKUP = 58;
static const int INTERRUPTS_EXTI5_9 = 59;
static const int INTERRUPTS_TIMER0_TRG_CMT_UP_BRK = 60;
static const int INTERRUPTS_TIMER0_Channel = 61;
static const int INTERRUPTS_TIMER14 = 62;
static const int INTERRUPTS_EXTI10_15 = 63;
static const int INTERRUPTS_TIMER40 = 64;
static const int INTERRUPTS_CAN_RX1 = 65;
static const int INTERRUPTS_CAN_EWMC = 66;
static const int INTERRUPTS_DMAMUX = 71;
static const int INTERRUPTS_CMP0 = 72;
static const int INTERRUPTS_CMP1 = 73;
static const int INTERRUPTS_I2C0_WKUP = 74;
static const int INTERRUPTS_I2C2_WKUP = 75;
static const int INTERRUPTS_USART0_WKUP = 76;
static const int INTERRUPTS_LPUART0 = 77;
static const int INTERRUPTS_LPUART = 77;
static const int INTERRUPTS_CAU = 78;
static const int INTERRUPTS_TRNG = 79;
static const int INTERRUPTS_SLCD = 80;
static const int INTERRUPTS_USART1_WKUP = 81;
static const int INTERRUPTS_I2C1_WKUP = 82;
static const int INTERRUPTS_LPUART0_WKUP = 83;
static const int INTERRUPTS_LPTIMER0 = 84;
static const int INTERRUPTS_LPUART1_WKUP = 85;
static const int INTERRUPTS_LPTIMER1 = 86;
static const int INTERRUPTS_LPUART1 = 87;
static const int INTERRUPTS_LPUART_WKUP = 83;
static const int INTERRUPTS_LPTIMER = 84;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for GD32L235EBY6.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for GD32L235EBY6.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
