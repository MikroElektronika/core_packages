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
* @brief EFR32MG27C140F768IM32 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_CRYPTOACC = 16;
static const int INTERRUPTS_TRNG = 17;
static const int INTERRUPTS_PKE = 18;
static const int INTERRUPTS_SMU_SECURE = 19;
static const int INTERRUPTS_SMU_S_PRIVILEGED = 20;
static const int INTERRUPTS_SMU_NS_PRIVILEGED = 21;
static const int INTERRUPTS_EMU = 22;
static const int INTERRUPTS_EMUEFP = 23;
static const int INTERRUPTS_DCDC = 24;
static const int INTERRUPTS_ETAMPDET = 25;
static const int INTERRUPTS_TIMER0 = 26;
static const int INTERRUPTS_TIMER1 = 27;
static const int INTERRUPTS_TIMER2 = 28;
static const int INTERRUPTS_TIMER3 = 29;
static const int INTERRUPTS_TIMER4 = 30;
static const int INTERRUPTS_RTCC = 31;
static const int INTERRUPTS_USART0_RX = 32;
static const int INTERRUPTS_USART0_TX = 33;
static const int INTERRUPTS_USART1_RX = 34;
static const int INTERRUPTS_USART1_TX = 35;
static const int INTERRUPTS_EUSART0_RX = 36;
static const int INTERRUPTS_EUSART0_TX = 37;
static const int INTERRUPTS_ICACHE0 = 38;
static const int INTERRUPTS_BURTC = 39;
static const int INTERRUPTS_LETIMER0 = 40;
static const int INTERRUPTS_SYSCFG = 41;
static const int INTERRUPTS_LDMA = 42;
static const int INTERRUPTS_LFXO = 43;
static const int INTERRUPTS_LFRCO = 44;
static const int INTERRUPTS_ULFRCO = 45;
static const int INTERRUPTS_GPIO_ODD = 46;
static const int INTERRUPTS_GPIO_EVEN = 47;
static const int INTERRUPTS_I2C0 = 48;
static const int INTERRUPTS_I2C1 = 49;
static const int INTERRUPTS_EMUDG = 50;
static const int INTERRUPTS_EMUSE = 51;
static const int INTERRUPTS_AGC = 52;
static const int INTERRUPTS_BUFC = 53;
static const int INTERRUPTS_FRC_PRI = 54;
static const int INTERRUPTS_FRC = 55;
static const int INTERRUPTS_MODEM = 56;
static const int INTERRUPTS_PROTIMER = 57;
static const int INTERRUPTS_RAC_RSM = 58;
static const int INTERRUPTS_RAC_SEQ = 59;
static const int INTERRUPTS_RDMAILBOX = 60;
static const int INTERRUPTS_RFSENSE = 61;
static const int INTERRUPTS_SYNTH = 62;
static const int INTERRUPTS_PRORTC = 63;
static const int INTERRUPTS_ACMP0 = 64;
static const int INTERRUPTS_WDOG0 = 65;
static const int INTERRUPTS_HFXO0 = 66;
static const int INTERRUPTS_HFRCO0 = 67;
static const int INTERRUPTS_CMU = 68;
static const int INTERRUPTS_AES = 69;
static const int INTERRUPTS_IADC = 70;
static const int INTERRUPTS_MSC = 71;
static const int INTERRUPTS_DPLL0 = 72;
static const int INTERRUPTS_PDM = 73;
static const int INTERRUPTS_SW0 = 74;
static const int INTERRUPTS_SW1 = 75;
static const int INTERRUPTS_SW2 = 76;
static const int INTERRUPTS_SW3 = 77;
static const int INTERRUPTS_KERNEL0 = 78;
static const int INTERRUPTS_KERNEL1 = 79;
static const int INTERRUPTS_M33CTI0 = 80;
static const int INTERRUPTS_M33CTI1 = 81;
static const int INTERRUPTS_FPUEXH = 82;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for EFR32MG27C140F768IM32.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for EFR32MG27C140F768IM32.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
