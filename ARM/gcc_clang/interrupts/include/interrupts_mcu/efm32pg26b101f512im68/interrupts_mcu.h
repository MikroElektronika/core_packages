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
* @brief EFM32PG26B101F512IM68 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_SMU_SECURE = 16;
static const int INTERRUPTS_SMU_S_PRIVILEGED = 17;
static const int INTERRUPTS_SMU_NS_PRIVILEGED = 18;
static const int INTERRUPTS_EMU = 19;
static const int INTERRUPTS_TIMER0 = 20;
static const int INTERRUPTS_TIMER1 = 21;
static const int INTERRUPTS_TIMER2 = 22;
static const int INTERRUPTS_TIMER3 = 23;
static const int INTERRUPTS_TIMER4 = 24;
static const int INTERRUPTS_TIMER5 = 25;
static const int INTERRUPTS_TIMER6 = 26;
static const int INTERRUPTS_TIMER7 = 27;
static const int INTERRUPTS_TIMER8 = 28;
static const int INTERRUPTS_TIMER9 = 29;
static const int INTERRUPTS_USART0_RX = 30;
static const int INTERRUPTS_USART0_TX = 31;
static const int INTERRUPTS_USART1_RX = 32;
static const int INTERRUPTS_USART1_TX = 33;
static const int INTERRUPTS_USART2_RX = 34;
static const int INTERRUPTS_USART2_TX = 35;
static const int INTERRUPTS_EUSART0_RX = 36;
static const int INTERRUPTS_EUSART0_TX = 37;
static const int INTERRUPTS_EUSART1_RX = 38;
static const int INTERRUPTS_EUSART1_TX = 39;
static const int INTERRUPTS_EUSART2_RX = 40;
static const int INTERRUPTS_EUSART2_TX = 41;
static const int INTERRUPTS_EUSART3_RX = 42;
static const int INTERRUPTS_EUSART3_TX = 43;
static const int INTERRUPTS_ICACHE0 = 45;
static const int INTERRUPTS_BURTC = 46;
static const int INTERRUPTS_LETIMER0 = 47;
static const int INTERRUPTS_SYSCFG = 48;
static const int INTERRUPTS_MPAHBRAM0 = 49;
static const int INTERRUPTS_MPAHBRAM1 = 50;
static const int INTERRUPTS_LDMA = 51;
static const int INTERRUPTS_LFXO = 52;
static const int INTERRUPTS_LFRCO = 53;
static const int INTERRUPTS_ULFRCO = 54;
static const int INTERRUPTS_GPIO_ODD = 55;
static const int INTERRUPTS_GPIO_EVEN = 56;
static const int INTERRUPTS_I2C0 = 57;
static const int INTERRUPTS_I2C1 = 58;
static const int INTERRUPTS_I2C2 = 59;
static const int INTERRUPTS_I2C3 = 60;
static const int INTERRUPTS_EMUDG = 61;
static const int INTERRUPTS_HOSTMAILBOX = 70;
static const int INTERRUPTS_ACMP0 = 72;
static const int INTERRUPTS_ACMP1 = 73;
static const int INTERRUPTS_WDOG0 = 74;
static const int INTERRUPTS_WDOG1 = 75;
static const int INTERRUPTS_HFXO0 = 76;
static const int INTERRUPTS_HFRCO0 = 77;
static const int INTERRUPTS_HFRCOEM23 = 78;
static const int INTERRUPTS_CMU = 79;
static const int INTERRUPTS_IADC = 81;
static const int INTERRUPTS_MSC = 82;
static const int INTERRUPTS_DPLL0 = 83;
static const int INTERRUPTS_EMUEFP = 84;
static const int INTERRUPTS_DCDC = 85;
static const int INTERRUPTS_PCNT0 = 86;
static const int INTERRUPTS_SW0 = 87;
static const int INTERRUPTS_SW1 = 88;
static const int INTERRUPTS_SW2 = 89;
static const int INTERRUPTS_SW3 = 90;
static const int INTERRUPTS_KERNEL0 = 91;
static const int INTERRUPTS_KERNEL1 = 92;
static const int INTERRUPTS_M33CTI0 = 93;
static const int INTERRUPTS_M33CTI1 = 94;
static const int INTERRUPTS_FPUEXH = 95;
static const int INTERRUPTS_SETAMPERHOST = 96;
static const int INTERRUPTS_SEMBRX = 97;
static const int INTERRUPTS_SEMBTX = 98;
static const int INTERRUPTS_SYSRTC_APP = 99;
static const int INTERRUPTS_SYSRTC_SEQ = 100;
static const int INTERRUPTS_KEYSCAN = 101;
static const int INTERRUPTS_VDAC0 = 104;
static const int INTERRUPTS_VDAC1 = 105;
static const int INTERRUPTS_AHB2AHB0 = 106;
static const int INTERRUPTS_AHB2AHB1 = 107;
static const int INTERRUPTS_LCD = 108;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for EFM32PG26B101F512IM68.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for EFM32PG26B101F512IM68.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
