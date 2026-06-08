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
* @brief M2L31YGDAE MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_BOD = 16;
static const int INTERRUPTS_IRCTRIM = 17;
static const int INTERRUPTS_PWRWU = 18;
static const int INTERRUPTS_SRAM_PERR = 19;
static const int INTERRUPTS_CLKFAIL = 20;
static const int INTERRUPTS_RMC = 21;
static const int INTERRUPTS_RTC = 22;
static const int INTERRUPTS_TAMPER = 23;
static const int INTERRUPTS_WDT = 24;
static const int INTERRUPTS_WWDT = 25;
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
static const int INTERRUPTS_EBRAKE0 = 40;
static const int INTERRUPTS_EPWM0_P0 = 41;
static const int INTERRUPTS_EPWM0_P1 = 42;
static const int INTERRUPTS_EPWM0_P2 = 43;
static const int INTERRUPTS_EBRAKE1 = 44;
static const int INTERRUPTS_EPWM1_P0 = 45;
static const int INTERRUPTS_EPWM1_P1 = 46;
static const int INTERRUPTS_EPWM1_P2 = 47;
static const int INTERRUPTS_TMR0 = 48;
static const int INTERRUPTS_TMR1 = 49;
static const int INTERRUPTS_TMR2 = 50;
static const int INTERRUPTS_TMR3 = 51;
static const int INTERRUPTS_UART0 = 52;
static const int INTERRUPTS_UART1 = 53;
static const int INTERRUPTS_I2C0 = 54;
static const int INTERRUPTS_I2C1 = 55;
static const int INTERRUPTS_PDMA0 = 56;
static const int INTERRUPTS_DAC = 57;
static const int INTERRUPTS_EADC0_INT0 = 58;
static const int INTERRUPTS_EADC0_INT1 = 59;
static const int INTERRUPTS_ACMP01 = 60;
static const int INTERRUPTS_ACMP2 = 61;
static const int INTERRUPTS_EADC0_INT2 = 62;
static const int INTERRUPTS_EADC0_INT3 = 63;
static const int INTERRUPTS_UART2 = 64;
static const int INTERRUPTS_UART3 = 65;
static const int INTERRUPTS_SPI1 = 67;
static const int INTERRUPTS_SPI2 = 68;
static const int INTERRUPTS_USBD = 69;
static const int INTERRUPTS_USBH = 70;
static const int INTERRUPTS_USBOTG = 71;
static const int INTERRUPTS_ETI = 72;
static const int INTERRUPTS_CRC0 = 73;
static const int INTERRUPTS_SPI3 = 78;
static const int INTERRUPTS_TK = 79;
static const int INTERRUPTS_OPA = 86;
static const int INTERRUPTS_CRPT = 87;
static const int INTERRUPTS_GPG = 88;
static const int INTERRUPTS_EINT6 = 89;
static const int INTERRUPTS_UART4 = 90;
static const int INTERRUPTS_UART5 = 91;
static const int INTERRUPTS_USCI0 = 92;
static const int INTERRUPTS_USCI1 = 93;
static const int INTERRUPTS_I2C2 = 98;
static const int INTERRUPTS_I2C3 = 99;
static const int INTERRUPTS_EQEI0 = 100;
static const int INTERRUPTS_EQEI1 = 101;
static const int INTERRUPTS_ECAP0 = 102;
static const int INTERRUPTS_ECAP1 = 103;
static const int INTERRUPTS_GPH = 104;
static const int INTERRUPTS_EINT7 = 105;
static const int INTERRUPTS_LPPDMA0 = 114;
static const int INTERRUPTS_TRNG = 117;
static const int INTERRUPTS_UART6 = 118;
static const int INTERRUPTS_UART7 = 119;
static const int INTERRUPTS_UTCPD = 124;
static const int INTERRUPTS_CANFD00 = 128;
static const int INTERRUPTS_CANFD01 = 129;
static const int INTERRUPTS_CANFD10 = 130;
static const int INTERRUPTS_CANFD11 = 131;
static const int INTERRUPTS_BRAKE0 = 144;
static const int INTERRUPTS_PWM0_P0 = 145;
static const int INTERRUPTS_PWM0_P1 = 146;
static const int INTERRUPTS_PWM0_P2 = 147;
static const int INTERRUPTS_BRAKE1 = 148;
static const int INTERRUPTS_PWM1_P0 = 149;
static const int INTERRUPTS_PWM1_P1 = 150;
static const int INTERRUPTS_PWM1_P2 = 151;
static const int INTERRUPTS_LPADC0 = 152;
static const int INTERRUPTS_LPUART0 = 153;
static const int INTERRUPTS_LPI2C0 = 154;
static const int INTERRUPTS_LPSPI0 = 155;
static const int INTERRUPTS_LPTMR0 = 156;
static const int INTERRUPTS_LPTMR1 = 157;
static const int INTERRUPTS_TTMR0 = 158;
static const int INTERRUPTS_TTMR1 = 159;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for M2L31YGDAE.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for M2L31YGDAE.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
