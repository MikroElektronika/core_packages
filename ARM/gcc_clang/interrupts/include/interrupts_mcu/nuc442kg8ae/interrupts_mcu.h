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
* @brief nuc442kg8ae MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_NONMASKABLEINT = -14;
static const int INTERRUPTS_MEMORYMANAGEMENT = -12;
static const int INTERRUPTS_BUSFAULT = -11;
static const int INTERRUPTS_USAGEFAULT = -10;
static const int INTERRUPTS_SVCALL = -5;
static const int INTERRUPTS_DEBUGMONITOR = -4;
static const int INTERRUPTS_PENDSV = -2;
static const int INTERRUPTS_SYSTICK = -1;
static const int INTERRUPTS_BOD = 0;
static const int INTERRUPTS_IRC = 1;
static const int INTERRUPTS_PWRWU = 2;
static const int INTERRUPTS_SRAMF = 3;
static const int INTERRUPTS_CLKF = 4;
static const int INTERRUPTS_RTC = 6;
static const int INTERRUPTS_TAMPER = 7;
static const int INTERRUPTS_EINT0 = 8;
static const int INTERRUPTS_EINT1 = 9;
static const int INTERRUPTS_EINT2 = 10;
static const int INTERRUPTS_EINT3 = 11;
static const int INTERRUPTS_EINT4 = 12;
static const int INTERRUPTS_EINT5 = 13;
static const int INTERRUPTS_EINT6 = 14;
static const int INTERRUPTS_EINT7 = 15;
static const int INTERRUPTS_GPA = 16;
static const int INTERRUPTS_GPB = 17;
static const int INTERRUPTS_GPC = 18;
static const int INTERRUPTS_GPD = 19;
static const int INTERRUPTS_GPE = 20;
static const int INTERRUPTS_GPF = 21;
static const int INTERRUPTS_GPG = 22;
static const int INTERRUPTS_GPH = 23;
static const int INTERRUPTS_GPI = 24;
static const int INTERRUPTS_TMR0 = 32;
static const int INTERRUPTS_TMR1 = 33;
static const int INTERRUPTS_TMR2 = 34;
static const int INTERRUPTS_TMR3 = 35;
static const int INTERRUPTS_PDMA = 40;
static const int INTERRUPTS_ADC = 42;
static const int INTERRUPTS_WDT = 46;
static const int INTERRUPTS_WWDT = 47;
static const int INTERRUPTS_EADC0 = 48;
static const int INTERRUPTS_EADC1 = 49;
static const int INTERRUPTS_EADC2 = 50;
static const int INTERRUPTS_EADC3 = 51;
static const int INTERRUPTS_ACMP = 56;
static const int INTERRUPTS_OPA0 = 60;
static const int INTERRUPTS_OPA1 = 61;
static const int INTERRUPTS_ICAP0 = 62;
static const int INTERRUPTS_ICAP1 = 63;
static const int INTERRUPTS_PWM0CH0 = 64;
static const int INTERRUPTS_PWM0CH1 = 65;
static const int INTERRUPTS_PWM0CH2 = 66;
static const int INTERRUPTS_PWM0CH3 = 67;
static const int INTERRUPTS_PWM0CH4 = 68;
static const int INTERRUPTS_PWM0CH5 = 69;
static const int INTERRUPTS_PWM0_BRK = 70;
static const int INTERRUPTS_QEI0 = 71;
static const int INTERRUPTS_PWM1CH0 = 72;
static const int INTERRUPTS_PWM1CH1 = 73;
static const int INTERRUPTS_PWM1CH2 = 74;
static const int INTERRUPTS_PWM1CH3 = 75;
static const int INTERRUPTS_PWM1CH4 = 76;
static const int INTERRUPTS_PWM1CH5 = 77;
static const int INTERRUPTS_PWM1BRK = 78;
static const int INTERRUPTS_QEI1 = 79;
static const int INTERRUPTS_EPWM0 = 80;
static const int INTERRUPTS_EPWM0BRK = 81;
static const int INTERRUPTS_EPWM1 = 82;
static const int INTERRUPTS_EPWM1BRK = 83;
static const int INTERRUPTS_USBD = 88;
static const int INTERRUPTS_USBH = 89;
static const int INTERRUPTS_USB_OTG = 90;
static const int INTERRUPTS_EMAC_TX = 92;
static const int INTERRUPTS_EMAC_RX = 93;
static const int INTERRUPTS_SPI0 = 96;
static const int INTERRUPTS_SPI1 = 97;
static const int INTERRUPTS_SPI2 = 98;
static const int INTERRUPTS_SPI3 = 99;
static const int INTERRUPTS_UART0 = 104;
static const int INTERRUPTS_UART1 = 105;
static const int INTERRUPTS_UART2 = 106;
static const int INTERRUPTS_UART3 = 107;
static const int INTERRUPTS_UART4 = 108;
static const int INTERRUPTS_UART5 = 109;
static const int INTERRUPTS_I2C0 = 112;
static const int INTERRUPTS_I2C1 = 113;
static const int INTERRUPTS_I2C2 = 114;
static const int INTERRUPTS_I2C3 = 115;
static const int INTERRUPTS_I2C4 = 116;
static const int INTERRUPTS_SC0 = 120;
static const int INTERRUPTS_SC1 = 121;
static const int INTERRUPTS_SC2 = 122;
static const int INTERRUPTS_SC3 = 123;
static const int INTERRUPTS_SC4 = 124;
static const int INTERRUPTS_SC5 = 125;
static const int INTERRUPTS_CAN0 = 128;
static const int INTERRUPTS_CAN1 = 129;
static const int INTERRUPTS_I2S0 = 132;
static const int INTERRUPTS_I2S1 = 133;
static const int INTERRUPTS_SD = 136;
static const int INTERRUPTS_PS2D = 138;
static const int INTERRUPTS_CAP = 139;
static const int INTERRUPTS_CRPT = 140;
static const int INTERRUPTS_CRC = 141;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for nuc442kg8ae.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for nuc442kg8ae.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
