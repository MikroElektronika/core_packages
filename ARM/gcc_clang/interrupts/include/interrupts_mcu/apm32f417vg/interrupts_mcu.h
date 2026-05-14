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
* @brief APM32F417VG MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_WWDT = 16;
static const int INTERRUPTS_PVD = 17;
static const int INTERRUPTS_TAMP_STAMP = 18;
static const int INTERRUPTS_RTC_WKUP = 19;
static const int INTERRUPTS_FLASH = 20;
static const int INTERRUPTS_RCM = 21;
static const int INTERRUPTS_EINT0 = 22;
static const int INTERRUPTS_EINT1 = 23;
static const int INTERRUPTS_EINT2 = 24;
static const int INTERRUPTS_EINT3 = 25;
static const int INTERRUPTS_EINT4 = 26;
static const int INTERRUPTS_DMA1_STR0 = 27;
static const int INTERRUPTS_DMA1_STR1 = 28;
static const int INTERRUPTS_DMA1_STR2 = 29;
static const int INTERRUPTS_DMA1_STR3 = 30;
static const int INTERRUPTS_DMA1_STR4 = 31;
static const int INTERRUPTS_DMA1_STR5 = 32;
static const int INTERRUPTS_DMA1_STR6 = 33;
static const int INTERRUPTS_ADC = 34;
static const int INTERRUPTS_CAN1_TX = 35;
static const int INTERRUPTS_CAN1_RX0 = 36;
static const int INTERRUPTS_CAN1_RX1 = 37;
static const int INTERRUPTS_CAN1_SCE = 38;
static const int INTERRUPTS_EINT9_5 = 39;
static const int INTERRUPTS_TMR1_BRK_TMR9 = 40;
static const int INTERRUPTS_TMR1_UP_TMR10 = 41;
static const int INTERRUPTS_TMR1_TRG_COM_TMR11 = 42;
static const int INTERRUPTS_TMR1_CC = 43;
static const int INTERRUPTS_TMR2 = 44;
static const int INTERRUPTS_TMR3 = 45;
static const int INTERRUPTS_TMR4 = 46;
static const int INTERRUPTS_I2C1_EV = 47;
static const int INTERRUPTS_I2C1_ER = 48;
static const int INTERRUPTS_I2C2_EV = 49;
static const int INTERRUPTS_I2C2_ER = 50;
static const int INTERRUPTS_SPI1 = 51;
static const int INTERRUPTS_SPI2 = 52;
static const int INTERRUPTS_USART1 = 53;
static const int INTERRUPTS_USART2 = 54;
static const int INTERRUPTS_USART3 = 55;
static const int INTERRUPTS_EINT15_10 = 56;
static const int INTERRUPTS_RTC_Alarm = 57;
static const int INTERRUPTS_OTG_FS_WKUP = 58;
static const int INTERRUPTS_TMR8_BRK_TMR12 = 59;
static const int INTERRUPTS_TMR8_UP_TMR13 = 60;
static const int INTERRUPTS_TMR8_TRG_COM_TMR14 = 61;
static const int INTERRUPTS_TMR8_CC = 62;
static const int INTERRUPTS_DMA1_STR7 = 63;
static const int INTERRUPTS_EMMC = 64;
static const int INTERRUPTS_SDIO = 65;
static const int INTERRUPTS_TMR5 = 66;
static const int INTERRUPTS_SPI3 = 67;
static const int INTERRUPTS_UART4 = 68;
static const int INTERRUPTS_UART5 = 69;
static const int INTERRUPTS_TMR6_DAC = 70;
static const int INTERRUPTS_TMR7 = 71;
static const int INTERRUPTS_DMA2_STR0 = 72;
static const int INTERRUPTS_DMA2_STR1 = 73;
static const int INTERRUPTS_DMA2_STR2 = 74;
static const int INTERRUPTS_DMA2_STR3 = 75;
static const int INTERRUPTS_DMA2_STR4 = 76;
static const int INTERRUPTS_ETH = 77;
static const int INTERRUPTS_ETH_WKUP = 78;
static const int INTERRUPTS_CAN2_TX = 79;
static const int INTERRUPTS_CAN2_RX0 = 80;
static const int INTERRUPTS_CAN2_RX1 = 81;
static const int INTERRUPTS_CAN2_SCE = 82;
static const int INTERRUPTS_OTG_FS = 83;
static const int INTERRUPTS_DMA2_STR5 = 84;
static const int INTERRUPTS_DMA2_STR6 = 85;
static const int INTERRUPTS_DMA2_STR7 = 86;
static const int INTERRUPTS_USART6 = 87;
static const int INTERRUPTS_I2C3_EV = 88;
static const int INTERRUPTS_I2C3_ER = 89;
static const int INTERRUPTS_OTG_HS1_EP1_OUT = 90;
static const int INTERRUPTS_OTG_HS1_EP1_IN = 91;
static const int INTERRUPTS_OTG_HS1_WKUP = 92;
static const int INTERRUPTS_OTG_HS1 = 93;
static const int INTERRUPTS_DCI = 94;
static const int INTERRUPTS_CRYP = 95;
static const int INTERRUPTS_HASH_RNG = 96;
static const int INTERRUPTS_FPU = 97;
static const int INTERRUPTS_SM3 = 98;
static const int INTERRUPTS_SM4 = 99;
static const int INTERRUPTS_BN = 100;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for APM32F417VG.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for APM32F417VG.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
