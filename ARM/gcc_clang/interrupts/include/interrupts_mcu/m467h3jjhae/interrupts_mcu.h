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
* @brief M467H3JJHAE MCU specific interrupt per module definitions.
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
static const int INTERRUPTS_DAC = 57;
static const int INTERRUPTS_EADC00 = 58;
static const int INTERRUPTS_EADC01 = 59;
static const int INTERRUPTS_ACMP01 = 60;
static const int INTERRUPTS_ACMP23 = 61;
static const int INTERRUPTS_EADC02 = 62;
static const int INTERRUPTS_EADC03 = 63;
static const int INTERRUPTS_UART2 = 64;
static const int INTERRUPTS_UART3 = 65;
static const int INTERRUPTS_QSPI1 = 66;
static const int INTERRUPTS_SPI1 = 67;
static const int INTERRUPTS_SPI2 = 68;
static const int INTERRUPTS_USBD = 69;
static const int INTERRUPTS_USBH = 70;
static const int INTERRUPTS_USBOTG = 71;
static const int INTERRUPTS_BMC = 72;
static const int INTERRUPTS_SPI5 = 73;
static const int INTERRUPTS_SC0 = 74;
static const int INTERRUPTS_SC1 = 75;
static const int INTERRUPTS_SC2 = 76;
static const int INTERRUPTS_GPJ = 77;
static const int INTERRUPTS_SPI3 = 78;
static const int INTERRUPTS_SPI4 = 79;
static const int INTERRUPTS_EMAC0_TXRX = 82;
static const int INTERRUPTS_SDH0 = 80;
static const int INTERRUPTS_USBD20 = 81;
static const int INTERRUPTS_I2S0 = 84;
static const int INTERRUPTS_I2S1 = 85;
static const int INTERRUPTS_SPI6 = 86;
static const int INTERRUPTS_CRPT = 87;
static const int INTERRUPTS_GPG = 88;
static const int INTERRUPTS_EINT6 = 89;
static const int INTERRUPTS_UART4 = 90;
static const int INTERRUPTS_UART5 = 91;
static const int INTERRUPTS_USCI0 = 92;
static const int INTERRUPTS_SPI7 = 93;
static const int INTERRUPTS_BPWM0 = 94;
static const int INTERRUPTS_BPWM1 = 95;
static const int INTERRUPTS_SPIM = 96;
static const int INTERRUPTS_CCAP = 97;
static const int INTERRUPTS_I2C2 = 98;
static const int INTERRUPTS_I2C3 = 99;
static const int INTERRUPTS_EQEI0 = 100;
static const int INTERRUPTS_EQEI1 = 101;
static const int INTERRUPTS_ECAP0 = 102;
static const int INTERRUPTS_ECAP1 = 103;
static const int INTERRUPTS_GPH = 104;
static const int INTERRUPTS_EINT7 = 105;
static const int INTERRUPTS_SDH1 = 106;
static const int INTERRUPTS_PSIO = 107;
static const int INTERRUPTS_HSUSBH = 108;
static const int INTERRUPTS_USBOTG20 = 109;
static const int INTERRUPTS_ECAP2 = 110;
static const int INTERRUPTS_ECAP3 = 111;
static const int INTERRUPTS_KPI = 112;
static const int INTERRUPTS_HBI = 113;
static const int INTERRUPTS_PDMA1 = 114;
static const int INTERRUPTS_UART8 = 115;
static const int INTERRUPTS_UART9 = 116;
static const int INTERRUPTS_TRNG = 117;
static const int INTERRUPTS_UART6 = 118;
static const int INTERRUPTS_UART7 = 119;
static const int INTERRUPTS_EADC10 = 120;
static const int INTERRUPTS_EADC11 = 121;
static const int INTERRUPTS_EADC12 = 122;
static const int INTERRUPTS_EADC13 = 123;
static const int INTERRUPTS_SPI8 = 124;
static const int INTERRUPTS_KS = 125;
static const int INTERRUPTS_GPI = 126;
static const int INTERRUPTS_SPI9 = 127;
static const int INTERRUPTS_CANFD00 = 128;
static const int INTERRUPTS_CANFD01 = 129;
static const int INTERRUPTS_CANFD10 = 130;
static const int INTERRUPTS_CANFD11 = 131;
static const int INTERRUPTS_EQEI2 = 132;
static const int INTERRUPTS_EQEI3 = 133;
static const int INTERRUPTS_I2C4 = 134;
static const int INTERRUPTS_SPI10 = 135;
static const int INTERRUPTS_CANFD20 = 136;
static const int INTERRUPTS_CANFD21 = 137;
static const int INTERRUPTS_CANFD30 = 138;
static const int INTERRUPTS_CANFD31 = 139;
static const int INTERRUPTS_EADC20 = 140;
static const int INTERRUPTS_EADC21 = 141;
static const int INTERRUPTS_EADC22 = 142;
static const int INTERRUPTS_EADC23 = 143;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for M467H3JJHAE.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for M467H3JJHAE.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
