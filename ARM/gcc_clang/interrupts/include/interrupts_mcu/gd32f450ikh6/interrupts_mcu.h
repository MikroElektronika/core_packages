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
* @brief GD32F450IKH6 MCU specific interrupt per module definitions.
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
static const int INTERRUPTS_DMA0_Channel0 = 27;
static const int INTERRUPTS_DMA0_Channel1 = 28;
static const int INTERRUPTS_DMA0_Channel2 = 29;
static const int INTERRUPTS_DMA0_Channel3 = 30;
static const int INTERRUPTS_DMA0_Channel4 = 31;
static const int INTERRUPTS_DMA0_Channel5 = 32;
static const int INTERRUPTS_DMA0_Channel6 = 33;
static const int INTERRUPTS_ADC = 34;
static const int INTERRUPTS_CAN0_TX = 35;
static const int INTERRUPTS_CAN0_RX0 = 36;
static const int INTERRUPTS_CAN0_RX1 = 37;
static const int INTERRUPTS_CAN0_EWMC = 38;
static const int INTERRUPTS_EXTI5_9 = 39;
static const int INTERRUPTS_TIMER0_BRK_TIMER8 = 40;
static const int INTERRUPTS_TIMER0_UP_TIMER9 = 41;
static const int INTERRUPTS_TIMER0_TRG_CMT_TIMER10 = 42;
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
static const int INTERRUPTS_USBFS_WKUP = 58;
static const int INTERRUPTS_TIMER7_BRK_TIMER11 = 59;
static const int INTERRUPTS_TIMER7_UP_TIMER12 = 60;
static const int INTERRUPTS_TIMER7_TRG_CMT_TIMER13 = 61;
static const int INTERRUPTS_TIMER7_Channel = 62;
static const int INTERRUPTS_DMA0_Channel7 = 63;
static const int INTERRUPTS_EXMC = 64;
static const int INTERRUPTS_SDIO = 65;
static const int INTERRUPTS_TIMER4 = 66;
static const int INTERRUPTS_SPI2 = 67;
static const int INTERRUPTS_UART3 = 68;
static const int INTERRUPTS_UART4 = 69;
static const int INTERRUPTS_TIMER5_DAC = 70;
static const int INTERRUPTS_TIMER6 = 71;
static const int INTERRUPTS_DMA1_Channel0 = 72;
static const int INTERRUPTS_DMA1_Channel1 = 73;
static const int INTERRUPTS_DMA1_Channel2 = 74;
static const int INTERRUPTS_DMA1_Channel3 = 75;
static const int INTERRUPTS_DMA1_Channel4 = 76;
static const int INTERRUPTS_ENET = 77;
static const int INTERRUPTS_ENET_WKUP = 78;
static const int INTERRUPTS_CAN1_TX = 79;
static const int INTERRUPTS_CAN1_RX0 = 80;
static const int INTERRUPTS_CAN1_RX1 = 81;
static const int INTERRUPTS_CAN1_EWMC = 82;
static const int INTERRUPTS_USBFS = 83;
static const int INTERRUPTS_DMA1_Channel5 = 84;
static const int INTERRUPTS_DMA1_Channel6 = 85;
static const int INTERRUPTS_DMA1_Channel7 = 86;
static const int INTERRUPTS_USART5 = 87;
static const int INTERRUPTS_I2C2_EV = 88;
static const int INTERRUPTS_I2C2_ER = 89;
static const int INTERRUPTS_USBHS_EP1_Out = 90;
static const int INTERRUPTS_USBHS_EP1_In = 91;
static const int INTERRUPTS_USBHS_WKUP = 92;
static const int INTERRUPTS_USBHS = 93;
static const int INTERRUPTS_DCI = 94;
static const int INTERRUPTS_TRNG = 96;
static const int INTERRUPTS_FPU = 97;
static const int INTERRUPTS_UART6 = 98;
static const int INTERRUPTS_UART7 = 99;
static const int INTERRUPTS_SPI3 = 100;
static const int INTERRUPTS_SPI4 = 101;
static const int INTERRUPTS_SPI5 = 102;
static const int INTERRUPTS_TLI = 104;
static const int INTERRUPTS_TLI_ER = 105;
static const int INTERRUPTS_IPA = 106;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for GD32F450IKH6.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for GD32F450IKH6.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
