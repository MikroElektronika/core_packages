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
* @brief EFR32FG25B211F1920IM56 MCU specific interrupt per module definitions.
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
static const int INTERRUPTS_ETAMPDET = 24;
static const int INTERRUPTS_TIMER4 = 25;
static const int INTERRUPTS_TIMER5 = 26;
static const int INTERRUPTS_TIMER6 = 27;
static const int INTERRUPTS_TIMER7 = 28;
static const int INTERRUPTS_EUSART0_RX = 29;
static const int INTERRUPTS_EUSART0_TX = 30;
static const int INTERRUPTS_EUSART1_RX = 31;
static const int INTERRUPTS_EUSART1_TX = 32;
static const int INTERRUPTS_EUSART2_RX = 33;
static const int INTERRUPTS_EUSART2_TX = 34;
static const int INTERRUPTS_EUSART3_RX = 35;
static const int INTERRUPTS_EUSART3_TX = 36;
static const int INTERRUPTS_EUSART4_RX = 37;
static const int INTERRUPTS_EUSART4_TX = 38;
static const int INTERRUPTS_ICACHE0 = 39;
static const int INTERRUPTS_BURTC = 40;
static const int INTERRUPTS_LETIMER0 = 41;
static const int INTERRUPTS_SYSCFG = 42;
static const int INTERRUPTS_MPAHBRAM = 43;
static const int INTERRUPTS_LDMA = 44;
static const int INTERRUPTS_LFXO = 45;
static const int INTERRUPTS_LFRCO = 46;
static const int INTERRUPTS_ULFRCO = 47;
static const int INTERRUPTS_GPIO_ODD = 48;
static const int INTERRUPTS_GPIO_EVEN = 49;
static const int INTERRUPTS_I2C0 = 50;
static const int INTERRUPTS_I2C1 = 51;
static const int INTERRUPTS_EMUDG = 52;
static const int INTERRUPTS_AGC = 53;
static const int INTERRUPTS_BUFC = 54;
static const int INTERRUPTS_FRC_PRI = 55;
static const int INTERRUPTS_FRC = 56;
static const int INTERRUPTS_MODEM = 57;
static const int INTERRUPTS_PROTIMER = 58;
static const int INTERRUPTS_RAC_RSM = 59;
static const int INTERRUPTS_RAC_SEQ = 60;
static const int INTERRUPTS_HOSTMAILBOX = 61;
static const int INTERRUPTS_SYNTH = 62;
static const int INTERRUPTS_ACMP0 = 63;
static const int INTERRUPTS_ACMP1 = 64;
static const int INTERRUPTS_WDOG0 = 65;
static const int INTERRUPTS_WDOG1 = 66;
static const int INTERRUPTS_HFXO0 = 67;
static const int INTERRUPTS_HFRCO0 = 68;
static const int INTERRUPTS_HFRCOEM23 = 69;
static const int INTERRUPTS_CMU = 70;
static const int INTERRUPTS_AES = 71;
static const int INTERRUPTS_IADC = 72;
static const int INTERRUPTS_MSC = 73;
static const int INTERRUPTS_DPLL0 = 74;
static const int INTERRUPTS_DCDC = 76;
static const int INTERRUPTS_VDAC = 77;
static const int INTERRUPTS_PCNT0 = 78;
static const int INTERRUPTS_USB = 79;
static const int INTERRUPTS_SW0 = 80;
static const int INTERRUPTS_SW1 = 81;
static const int INTERRUPTS_SW2 = 82;
static const int INTERRUPTS_SW3 = 83;
static const int INTERRUPTS_KERNEL0 = 84;
static const int INTERRUPTS_KERNEL1 = 85;
static const int INTERRUPTS_M33CTI0 = 86;
static const int INTERRUPTS_M33CTI1 = 87;
static const int INTERRUPTS_FPUEXH = 88;
static const int INTERRUPTS_SETAMPERHOST = 89;
static const int INTERRUPTS_SEMBRX = 90;
static const int INTERRUPTS_SEMBTX = 91;
static const int INTERRUPTS_LESENSE = 92;
static const int INTERRUPTS_SYSRTC_APP = 93;
static const int INTERRUPTS_SYSRTC_SEQ = 94;
static const int INTERRUPTS_RFECA0 = 95;
static const int INTERRUPTS_RFECA1 = 96;
static const int INTERRUPTS_RFFPLL = 97;
static const int INTERRUPTS_USBPLL0 = 98;
static const int INTERRUPTS_AHB2AHB0 = 99;
static const int INTERRUPTS_AHB2AHB1 = 100;
static const int INTERRUPTS_AHB2AHB2 = 101;
static const int INTERRUPTS_AHB2AHB3 = 102;
static const int INTERRUPTS_RFTIMER = 103;
static const int INTERRUPTS_SOFTM = 104;
static const int INTERRUPTS_RFLDMA = 105;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for EFR32FG25B211F1920IM56.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for EFR32FG25B211F1920IM56.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
