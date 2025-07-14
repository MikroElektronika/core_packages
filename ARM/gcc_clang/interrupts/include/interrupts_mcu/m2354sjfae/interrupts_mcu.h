/****************************************************************************
**
** Copyright (C) ${COPYRIGHT_YEAR} MikroElektronika d.o.o.
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
** OF MERCHANTABILITY, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED
** TO THE WARRANTIES FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
** IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
** DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT
** OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
** OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**
****************************************************************************/
/*!
* @file  interrupts_mcu.h
* @brief m2354sjfae MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_NONMASKABLEINT = -14;
static const int INTERRUPTS_HARDFAULT = -13;
static const int INTERRUPTS_SVCALL = -5;
static const int INTERRUPTS_PENDSV = -2;
static const int INTERRUPTS_SYSTICK = -1;
static const int INTERRUPTS_BOD = 0;
static const int INTERRUPTS_IRC = 1;
static const int INTERRUPTS_PWRWU = 2;
static const int INTERRUPTS_RAMPE = 3;
static const int INTERRUPTS_CKFAIL = 4;
static const int INTERRUPTS_ISP = 5;
static const int INTERRUPTS_RTC = 6;
static const int INTERRUPTS_RTC_TAMPER = 7;
static const int INTERRUPTS_WDT = 8;
static const int INTERRUPTS_WWDT = 9;
static const int INTERRUPTS_EINT0 = 10;
static const int INTERRUPTS_EINT1 = 11;
static const int INTERRUPTS_EINT2 = 12;
static const int INTERRUPTS_EINT3 = 13;
static const int INTERRUPTS_EINT4 = 14;
static const int INTERRUPTS_EINT5 = 15;
static const int INTERRUPTS_GPA = 16;
static const int INTERRUPTS_GPB = 17;
static const int INTERRUPTS_GPC = 18;
static const int INTERRUPTS_GPD = 19;
static const int INTERRUPTS_GPE = 20;
static const int INTERRUPTS_GPF = 21;
static const int INTERRUPTS_QSPI0 = 22;
static const int INTERRUPTS_SPI0 = 23;
static const int INTERRUPTS_BRAKE0 = 24;
static const int INTERRUPTS_EPWM0_P0 = 25;
static const int INTERRUPTS_EPWM0_P1 = 26;
static const int INTERRUPTS_EPWM0_P2 = 27;
static const int INTERRUPTS_BRAKE1 = 28;
static const int INTERRUPTS_EPWM1_P0 = 29;
static const int INTERRUPTS_EPWM1_P1 = 30;
static const int INTERRUPTS_EPWM1_P2 = 31;
static const int INTERRUPTS_TMR0 = 32;
static const int INTERRUPTS_TMR1 = 33;
static const int INTERRUPTS_TMR2 = 34;
static const int INTERRUPTS_TMR3 = 35;
static const int INTERRUPTS_UART0 = 36;
static const int INTERRUPTS_UART1 = 37;
static const int INTERRUPTS_I2C0 = 38;
static const int INTERRUPTS_I2C1 = 39;
static const int INTERRUPTS_PDMA0 = 40;
static const int INTERRUPTS_DAC = 41;
static const int INTERRUPTS_EADC0 = 42;
static const int INTERRUPTS_EADC1 = 43;
static const int INTERRUPTS_ACMP01 = 44;
static const int INTERRUPTS_EADC2 = 46;
static const int INTERRUPTS_EADC3 = 47;
static const int INTERRUPTS_UART2 = 48;
static const int INTERRUPTS_UART3 = 49;
static const int INTERRUPTS_SPI1 = 51;
static const int INTERRUPTS_SPI2 = 52;
static const int INTERRUPTS_USBD = 53;
static const int INTERRUPTS_USBH = 54;
static const int INTERRUPTS_USBOTG = 55;
static const int INTERRUPTS_CAN0 = 56;
static const int INTERRUPTS_SC0 = 58;
static const int INTERRUPTS_SC1 = 59;
static const int INTERRUPTS_SC2 = 60;
static const int INTERRUPTS_SPI3 = 62;
static const int INTERRUPTS_SDH0 = 64;
static const int INTERRUPTS_I2S0 = 68;
static const int INTERRUPTS_CRPT = 71;
static const int INTERRUPTS_GPG = 72;
static const int INTERRUPTS_EINT6 = 73;
static const int INTERRUPTS_UART4 = 74;
static const int INTERRUPTS_UART5 = 75;
static const int INTERRUPTS_USCI0 = 76;
static const int INTERRUPTS_USCI1 = 77;
static const int INTERRUPTS_BPWM0 = 78;
static const int INTERRUPTS_BPWM1 = 79;
static const int INTERRUPTS_I2C2 = 82;
static const int INTERRUPTS_QEI0 = 84;
static const int INTERRUPTS_QEI1 = 85;
static const int INTERRUPTS_ECAP0 = 86;
static const int INTERRUPTS_ECAP1 = 87;
static const int INTERRUPTS_GPH = 88;
static const int INTERRUPTS_EINT7 = 89;
static const int INTERRUPTS_PDMA1 = 98;
static const int INTERRUPTS_SCU = 99;
static const int INTERRUPTS_LCD = 100;
static const int INTERRUPTS_TRNG = 101;
static const int INTERRUPTS_KS = 109;
static const int INTERRUPTS_TAMPER = 110;
static const int INTERRUPTS_EWDT = 111;
static const int INTERRUPTS_EWWDT = 112;
static const int INTERRUPTS_NS_ISP = 113;
static const int INTERRUPTS_TMR4 = 114;
static const int INTERRUPTS_TMR5 = 115;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for m2354sjfae.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for m2354sjfae.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
