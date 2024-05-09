/****************************************************************************
**
** Copyright (C) 2023 MikroElektronika d.o.o.
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
* @brief cec1302 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_NMI = 2;
static const int INTERRUPTS_HARDFAULT = 3;
static const int INTERRUPTS_MEMMANAGE = 4;
static const int INTERRUPTS_BUSFAULT = 5;
static const int INTERRUPTS_USAGEFAULT = 6;
static const int INTERRUPTS_RESERVED1 = 7;
static const int INTERRUPTS_RESERVED2 = 8;
static const int INTERRUPTS_RESERVED3 = 9;
static const int INTERRUPTS_RESERVED4 = 10;
static const int INTERRUPTS_SVCALL = 11;
static const int INTERRUPTS_DEBUGMON = 12;
static const int INTERRUPTS_RESERVED5 = 13;
static const int INTERRUPTS_PENDSV = 14;
static const int INTERRUPTS_SYSTICK = 15;
static const int INTERRUPTS_I2C0 = 16;
static const int INTERRUPTS_I2C1 = 17;
static const int INTERRUPTS_I2C2 = 18;
static const int INTERRUPTS_I2C3 = 19;
static const int INTERRUPTS_DMA0 = 20;
static const int INTERRUPTS_DMA1 = 21;
static const int INTERRUPTS_DMA2 = 22;
static const int INTERRUPTS_DMA3 = 23;
static const int INTERRUPTS_DMA4 = 24;
static const int INTERRUPTS_DMA5 = 25;
static const int INTERRUPTS_DMA6 = 26;
static const int INTERRUPTS_DMA7 = 27;
static const int INTERRUPTS_LPC = 28;
static const int INTERRUPTS_UART_0 = 29;
static const int INTERRUPTS_EMI_0 = 30;
static const int INTERRUPTS_ACPIEC0_IBF = 31;
static const int INTERRUPTS_ACPIEC0_OBF = 32;
static const int INTERRUPTS_ACPIEC1_IBF = 33;
static const int INTERRUPTS_ACPIEC1_OBF = 34;
static const int INTERRUPTS_ACPIPM1_CTL = 35;
static const int INTERRUPTS_ACPIPM1_EN = 36;
static const int INTERRUPTS_ACPIPM1_STS = 37;
static const int INTERRUPTS_KBC8042_OBF = 38;
static const int INTERRUPTS_KBC8042_IBF = 39;
static const int INTERRUPTS_MAILBOX = 40;
static const int INTERRUPTS_PECIHOST = 41;
static const int INTERRUPTS_TACH_0 = 42;
static const int INTERRUPTS_TACH_1 = 43;
static const int INTERRUPTS_ADC_SNGL = 44;
static const int INTERRUPTS_ADC_RPT = 45;
static const int INTERRUPTS_ADC2PWM_N1 = 46;
static const int INTERRUPTS_ADC2PWM_N2 = 47;
static const int INTERRUPTS_PS2_0 = 48;
static const int INTERRUPTS_PS2_1 = 49;
static const int INTERRUPTS_PS2_2 = 50;
static const int INTERRUPTS_PS2_3 = 51;
static const int INTERRUPTS_SPI0_TX = 52;
static const int INTERRUPTS_SPI0_RX = 53;
static const int INTERRUPTS_HTIMER = 54;
static const int INTERRUPTS_KSC_INT = 55;
static const int INTERRUPTS_MAILBOX_DATA = 56;
static const int INTERRUPTS_RPM_STALL = 57;
static const int INTERRUPTS_RPM_SPIN = 58;
static const int INTERRUPTS_PFR_STS = 59;
static const int INTERRUPTS_PWM_WDT0 = 60;
static const int INTERRUPTS_PWM_WDT1 = 61;
static const int INTERRUPTS_PWM_WDT2 = 62;
static const int INTERRUPTS_BCM_ERR = 63;
static const int INTERRUPTS_BCM_BUSY = 64;
static const int INTERRUPTS_TIMER0 = 65;
static const int INTERRUPTS_TIMER1 = 66;
static const int INTERRUPTS_TIMER2 = 67;
static const int INTERRUPTS_TIMER3 = 68;
static const int INTERRUPTS_TIMER4 = 69;
static const int INTERRUPTS_TIMER5 = 70;
static const int INTERRUPTS_SPI1_TX = 71;
static const int INTERRUPTS_SPI1_RX = 72;
static const int INTERRUPTS_GIRQ08 = 73;
static const int INTERRUPTS_GIRQ09 = 74;
static const int INTERRUPTS_GIRQ10 = 75;
static const int INTERRUPTS_GIRQ11 = 76;
static const int INTERRUPTS_GIRQ12 = 77;
static const int INTERRUPTS_GIRQ13 = 78;
static const int INTERRUPTS_GIRQ14 = 79;
static const int INTERRUPTS_GIRQ15 = 80;
static const int INTERRUPTS_GIRQ16 = 81;
static const int INTERRUPTS_GIRQ17 = 82;
static const int INTERRUPTS_GIRQ18 = 83;
static const int INTERRUPTS_GIRQ19 = 84;
static const int INTERRUPTS_GIRQ20 = 85;
static const int INTERRUPTS_GIRQ21 = 86;
static const int INTERRUPTS_GIRQ22 = 87;
static const int INTERRUPTS_GIRQ23 = 88;
static const int INTERRUPTS_DMA8 = 97;
static const int INTERRUPTS_DMA9 = 98;
static const int INTERRUPTS_DMA10 = 99;
static const int INTERRUPTS_DMA11 = 100;
static const int INTERRUPTS_PWM_WDT3 = 101;
static const int INTERRUPTS_RTC = 107;
static const int INTERRUPTS_RTC_ALARM = 108;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for cec1302.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for cec1302.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
