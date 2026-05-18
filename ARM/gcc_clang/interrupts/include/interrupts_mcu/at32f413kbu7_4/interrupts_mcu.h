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
* @brief AT32F413KBU7-4 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_WWDT = 16;
static const int INTERRUPTS_PVM = 17;
static const int INTERRUPTS_TAMPER = 18;
static const int INTERRUPTS_RTC = 19;
static const int INTERRUPTS_FLASH = 20;
static const int INTERRUPTS_CRM = 21;
static const int INTERRUPTS_EXINT0 = 22;
static const int INTERRUPTS_EXINT1 = 23;
static const int INTERRUPTS_EXINT2 = 24;
static const int INTERRUPTS_EXINT3 = 25;
static const int INTERRUPTS_EXINT4 = 26;
static const int INTERRUPTS_DMA1_Channel1 = 27;
static const int INTERRUPTS_DMA1_Channel2 = 28;
static const int INTERRUPTS_DMA1_Channel3 = 29;
static const int INTERRUPTS_DMA1_Channel4 = 30;
static const int INTERRUPTS_DMA1_Channel5 = 31;
static const int INTERRUPTS_DMA1_Channel6 = 32;
static const int INTERRUPTS_DMA1_Channel7 = 33;
static const int INTERRUPTS_ADC1_2 = 34;
static const int INTERRUPTS_USBFS_H_CAN1_TX = 35;
static const int INTERRUPTS_USBFS_L_CAN1_RX0 = 36;
static const int INTERRUPTS_CAN1_RX1 = 37;
static const int INTERRUPTS_CAN1_SE = 38;
static const int INTERRUPTS_EXINT9_5 = 39;
static const int INTERRUPTS_TMR1_BRK_TMR9 = 40;
static const int INTERRUPTS_TMR1_OVF_TMR10 = 41;
static const int INTERRUPTS_TMR1_TRG_HALL_TMR11 = 42;
static const int INTERRUPTS_TMR1_CH = 43;
static const int INTERRUPTS_TMR2_GLOBAL = 44;
static const int INTERRUPTS_TMR3_GLOBAL = 45;
static const int INTERRUPTS_TMR4_GLOBAL = 46;
static const int INTERRUPTS_I2C1_EVT = 47;
static const int INTERRUPTS_I2C1_ERR = 48;
static const int INTERRUPTS_I2C2_EVT = 49;
static const int INTERRUPTS_I2C2_ERR = 50;
static const int INTERRUPTS_SPI1 = 51;
static const int INTERRUPTS_SPI2 = 52;
static const int INTERRUPTS_USART1 = 53;
static const int INTERRUPTS_USART2 = 54;
static const int INTERRUPTS_USART3 = 55;
static const int INTERRUPTS_EXINT15_10 = 56;
static const int INTERRUPTS_RTCAlarm = 57;
static const int INTERRUPTS_USBFSWakeUp = 58;
static const int INTERRUPTS_TMR8_BRK = 59;
static const int INTERRUPTS_TMR8_OVF = 60;
static const int INTERRUPTS_TMR8_TRG_HALL = 61;
static const int INTERRUPTS_TMR8_CH = 62;
static const int INTERRUPTS_SDIO1 = 65;
static const int INTERRUPTS_TMR5_GLOBAL = 66;
static const int INTERRUPTS_UART4 = 68;
static const int INTERRUPTS_UART5 = 69;
static const int INTERRUPTS_DMA2_Channel1 = 72;
static const int INTERRUPTS_DMA2_Channel2 = 73;
static const int INTERRUPTS_DMA2_Channel3 = 74;
static const int INTERRUPTS_DMA2_Channel4_5 = 75;
static const int INTERRUPTS_CAN2_TX = 84;
static const int INTERRUPTS_CAN2_RX0 = 85;
static const int INTERRUPTS_CAN2_RX1 = 86;
static const int INTERRUPTS_CAN2_SE = 87;
static const int INTERRUPTS_ACC = 88;
static const int INTERRUPTS_USBFS_MAPH = 89;
static const int INTERRUPTS_USBFS_MAPL = 90;
static const int INTERRUPTS_DMA2_Channel6_7 = 91;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for AT32F413KBU7-4.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for AT32F413KBU7-4.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
