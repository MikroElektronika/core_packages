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
* @brief MM32F3277E8P MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_WWDG_IWDG = 16;
static const int INTERRUPTS_WWDG = 16;
static const int INTERRUPTS_PVD = 17;
static const int INTERRUPTS_TAMPER = 18;
static const int INTERRUPTS_RTC = 19;
static const int INTERRUPTS_FLASH = 20;
static const int INTERRUPTS_RCC_CRS = 21;
static const int INTERRUPTS_EXTI0 = 22;
static const int INTERRUPTS_EXTI1 = 23;
static const int INTERRUPTS_EXTI2 = 24;
static const int INTERRUPTS_EXTI3 = 25;
static const int INTERRUPTS_EXTI4 = 26;
static const int INTERRUPTS_DMA1_Channel1 = 27;
static const int INTERRUPTS_DMA1_Channel2 = 28;
static const int INTERRUPTS_DMA1_Channel3 = 29;
static const int INTERRUPTS_DMA1_Channel4 = 30;
static const int INTERRUPTS_DMA1_Channel5 = 31;
static const int INTERRUPTS_DMA1_Channel6 = 32;
static const int INTERRUPTS_DMA1_Channel7 = 33;
static const int INTERRUPTS_ADC1 = 34;
static const int INTERRUPTS_ADC1_2 = 34;
static const int INTERRUPTS_ADC2 = 34;
static const int INTERRUPTS_FlashCache = 35;
static const int INTERRUPTS_CAN1_RX = 37;
static const int INTERRUPTS_CAN = 37;
static const int INTERRUPTS_EXTI9_5 = 39;
static const int INTERRUPTS_TIM1_BRK = 40;
static const int INTERRUPTS_TIM1_UP = 41;
static const int INTERRUPTS_IM1_TRG_COM = 42;
static const int INTERRUPTS_TIM1_CC = 43;
static const int INTERRUPTS_TIM2 = 44;
static const int INTERRUPTS_TIM3 = 45;
static const int INTERRUPTS_TIM4 = 46;
static const int INTERRUPTS_I2C1 = 47;
static const int INTERRUPTS_I2C2 = 49;
static const int INTERRUPTS_SPI1 = 51;
static const int INTERRUPTS_SPI2 = 52;
static const int INTERRUPTS_UART1 = 53;
static const int INTERRUPTS_UART2 = 54;
static const int INTERRUPTS_UART3 = 55;
static const int INTERRUPTS_EXTI15_10 = 56;
static const int INTERRUPTS_RTCAlarm = 57;
static const int INTERRUPTS_USB_WKUP = 58;
static const int INTERRUPTS_TIM8_BRK = 59;
static const int INTERRUPTS_TIM8_UP = 60;
static const int INTERRUPTS_TIM8_TRG_COM = 61;
static const int INTERRUPTS_TIM8_CC = 62;
static const int INTERRUPTS_ADC3 = 63;
static const int INTERRUPTS_SDIO = 65;
static const int INTERRUPTS_TIM5 = 66;
static const int INTERRUPTS_SPI3 = 67;
static const int INTERRUPTS_UART4 = 68;
static const int INTERRUPTS_UART5 = 69;
static const int INTERRUPTS_TIM6 = 70;
static const int INTERRUPTS_TIM7 = 71;
static const int INTERRUPTS_DMA2_Channel1 = 72;
static const int INTERRUPTS_DMA2_Channel2 = 73;
static const int INTERRUPTS_DMA2_Channel3 = 74;
static const int INTERRUPTS_DMA2_Channel4 = 75;
static const int INTERRUPTS_DMA2_Channel5 = 76;
static const int INTERRUPTS_ETHERNET_MAC = 77;
static const int INTERRUPTS_COMP1_2 = 80;
static const int INTERRUPTS_USB_FS = 83;
static const int INTERRUPTS_UART6 = 87;
static const int INTERRUPTS_UART7 = 98;
static const int INTERRUPTS_UART8 = 99;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for MM32F3277E8P.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for MM32F3277E8P.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
