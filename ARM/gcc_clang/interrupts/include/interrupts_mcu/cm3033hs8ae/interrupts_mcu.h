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
* @brief CM3033HS8AE MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_BOD = 16;
static const int INTERRUPTS_IRC = 17;
static const int INTERRUPTS_PWRWU = 18;
static const int INTERRUPTS_RAMPE = 19;
static const int INTERRUPTS_CKFAIL = 20;
static const int INTERRUPTS_ISP = 21;
static const int INTERRUPTS_RTC = 22;
static const int INTERRUPTS_WDT0 = 24;
static const int INTERRUPTS_WWDT0 = 25;
static const int INTERRUPTS_EINT0 = 26;
static const int INTERRUPTS_EINT1 = 27;
static const int INTERRUPTS_EINT2 = 28;
static const int INTERRUPTS_EINT3 = 29;
static const int INTERRUPTS_EINT4 = 30;
static const int INTERRUPTS_EINT5 = 31;
static const int INTERRUPTS_GPA = 32;
static const int INTERRUPTS_GPB = 33;
static const int INTERRUPTS_GPC = 34;
static const int INTERRUPTS_GPD = 35;
static const int INTERRUPTS_GPE = 36;
static const int INTERRUPTS_GPF = 37;
static const int INTERRUPTS_QSPI0 = 38;
static const int INTERRUPTS_SPI0 = 39;
static const int INTERRUPTS_BRAKE0 = 40;
static const int INTERRUPTS_EPWM0P0 = 41;
static const int INTERRUPTS_EPWM0P1 = 42;
static const int INTERRUPTS_EPWM0P2 = 43;
static const int INTERRUPTS_BRAKE1 = 44;
static const int INTERRUPTS_EPWM1P0 = 45;
static const int INTERRUPTS_EPWM1P1 = 46;
static const int INTERRUPTS_EPWM1P2 = 47;
static const int INTERRUPTS_TMR0 = 48;
static const int INTERRUPTS_TMR1 = 49;
static const int INTERRUPTS_TMR2 = 50;
static const int INTERRUPTS_TMR3 = 51;
static const int INTERRUPTS_UART0 = 52;
static const int INTERRUPTS_UART1 = 53;
static const int INTERRUPTS_I2C0 = 54;
static const int INTERRUPTS_I2C1 = 55;
static const int INTERRUPTS_PDMA0 = 56;
static const int INTERRUPTS_EADC00 = 58;
static const int INTERRUPTS_EADC01 = 59;
static const int INTERRUPTS_ACMP01 = 60;
static const int INTERRUPTS_EADC02 = 62;
static const int INTERRUPTS_EADC03 = 63;
static const int INTERRUPTS_UART2 = 64;
static const int INTERRUPTS_UART3 = 65;
static const int INTERRUPTS_SPI1 = 67;
static const int INTERRUPTS_SPI2 = 68;
static const int INTERRUPTS_USBH = 70;
static const int INTERRUPTS_ETI = 72;
static const int INTERRUPTS_CRC = 73;
static const int INTERRUPTS_NS_ISP = 75;
static const int INTERRUPTS_SCU = 76;
static const int INTERRUPTS_SDH0 = 80;
static const int INTERRUPTS_USBD20 = 81;
static const int INTERRUPTS_WDT1 = 83;
static const int INTERRUPTS_I2S0 = 84;
static const int INTERRUPTS_GPG = 88;
static const int INTERRUPTS_EINT6 = 89;
static const int INTERRUPTS_UART4 = 90;
static const int INTERRUPTS_USCI0 = 92;
static const int INTERRUPTS_USCI1 = 93;
static const int INTERRUPTS_BPWM0 = 94;
static const int INTERRUPTS_BPWM1 = 95;
static const int INTERRUPTS_I2C2 = 98;
static const int INTERRUPTS_EQEI0 = 100;
static const int INTERRUPTS_ECAP0 = 102;
static const int INTERRUPTS_GPH = 104;
static const int INTERRUPTS_EINT7 = 105;
static const int INTERRUPTS_WWDT1 = 107;
static const int INTERRUPTS_HSUSBH = 108;
static const int INTERRUPTS_USBOTG20 = 109;
static const int INTERRUPTS_NS_RAMPE = 112;
static const int INTERRUPTS_I3C0 = 124;
static const int INTERRUPTS_CANFD00 = 128;
static const int INTERRUPTS_CANFD01 = 129;
static const int INTERRUPTS_CANFD10 = 130;
static const int INTERRUPTS_CANFD11 = 131;
static const int INTERRUPTS_SPB = 135;
static const int INTERRUPTS_LLSI0 = 144;
static const int INTERRUPTS_LLSI1 = 145;
static const int INTERRUPTS_LLSI2 = 146;
static const int INTERRUPTS_LLSI3 = 147;
static const int INTERRUPTS_LLSI4 = 148;
static const int INTERRUPTS_LLSI5 = 149;
static const int INTERRUPTS_LLSI6 = 150;
static const int INTERRUPTS_LLSI7 = 151;
static const int INTERRUPTS_LLSI8 = 152;
static const int INTERRUPTS_LLSI9 = 153;
static const int INTERRUPTS_ELLSI0 = 154;
static const int INTERRUPTS_BPWM2 = 155;
static const int INTERRUPTS_BPWM3 = 156;
static const int INTERRUPTS_BPWM4 = 157;
static const int INTERRUPTS_BPWM5 = 158;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for CM3033HS8AE.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for CM3033HS8AE.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
