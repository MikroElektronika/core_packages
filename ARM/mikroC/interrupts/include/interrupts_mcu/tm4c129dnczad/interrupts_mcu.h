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
* @brief tm4c129dnczad MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_FAULT_NMI = 2;
static const int INTERRUPTS_FAULT_HARD = 3;
static const int INTERRUPTS_FAULT_MPU = 4;
static const int INTERRUPTS_FAULT_BUS = 5;
static const int INTERRUPTS_FAULT_USAGE = 6;
static const int INTERRUPTS_MCU_RESERVED7 = 7;
static const int INTERRUPTS_MCU_RESERVED8 = 8;
static const int INTERRUPTS_MCU_RESERVED9 = 9;
static const int INTERRUPTS_MCU_RESERVED10 = 10;
static const int INTERRUPTS_FAULT_SVCALL = 11;
static const int INTERRUPTS_FAULT_DEBUG = 12;
static const int INTERRUPTS_MCU_RESERVED13 = 13;
static const int INTERRUPTS_FAULT_PENDSV = 14;
static const int INTERRUPTS_FAULT_SYSTICK = 15;
static const int INTERRUPTS_GPIOA = 16;
static const int INTERRUPTS_GPIOB = 17;
static const int INTERRUPTS_GPIOC = 18;
static const int INTERRUPTS_GPIOD = 19;
static const int INTERRUPTS_GPIOE = 20;
static const int INTERRUPTS_UART0 = 21;
static const int INTERRUPTS_UART1 = 22;
static const int INTERRUPTS_SSI0 = 23;
static const int INTERRUPTS_I2C0 = 24;
static const int INTERRUPTS_PWM0_FAULT = 25;
static const int INTERRUPTS_PWM0_GEN0 = 26;
static const int INTERRUPTS_PWM0_GEN1 = 27;
static const int INTERRUPTS_PWM0_GEN2 = 28;
static const int INTERRUPTS_QEI0 = 29;
static const int INTERRUPTS_ADC0SS0 = 30;
static const int INTERRUPTS_ADC0SS1 = 31;
static const int INTERRUPTS_ADC0SS2 = 32;
static const int INTERRUPTS_ADC0SS3 = 33;
static const int INTERRUPTS_WATCHDOG = 34;
static const int INTERRUPTS_TIMER0A_16_32_BIT = 35;
static const int INTERRUPTS_TIMER0B_16_32_BIT = 36;
static const int INTERRUPTS_TIMER1A_16_32_BIT = 37;
static const int INTERRUPTS_TIMER1B_16_32_BIT = 38;
static const int INTERRUPTS_TIMER2A_16_32_BIT = 39;
static const int INTERRUPTS_TIMER2B_16_32_BIT = 40;
static const int INTERRUPTS_COMP0 = 41;
static const int INTERRUPTS_COMP1 = 42;
static const int INTERRUPTS_COMP2 = 43;
static const int INTERRUPTS_SYSCTL = 44;
static const int INTERRUPTS_FLASH = 45;
static const int INTERRUPTS_GPIOF = 46;
static const int INTERRUPTS_GPIOG = 47;
static const int INTERRUPTS_GPIOH = 48;
static const int INTERRUPTS_UART2 = 49;
static const int INTERRUPTS_SSI1 = 50;
static const int INTERRUPTS_TIMER3A_16_32_BIT = 51;
static const int INTERRUPTS_TIMER3B_16_32_BIT = 52;
static const int INTERRUPTS_I2C1 = 53;
static const int INTERRUPTS_CAN0 = 54;
static const int INTERRUPTS_CAN1 = 55;
static const int INTERRUPTS_ETHERNET_MAC = 56;
static const int INTERRUPTS_HIBERNATE = 57;
static const int INTERRUPTS_USB = 58;
static const int INTERRUPTS_PWM_GEN3 = 59;
static const int INTERRUPTS_UDMA = 60;
static const int INTERRUPTS_UDMAERR = 61;
static const int INTERRUPTS_ADC1SS0 = 62;
static const int INTERRUPTS_ADC1SS1 = 63;
static const int INTERRUPTS_ADC1SS2 = 64;
static const int INTERRUPTS_ADC1SS3 = 65;
static const int INTERRUPTS_EPI0 = 66;
static const int INTERRUPTS_GPIOJ = 67;
static const int INTERRUPTS_GPIOK = 68;
static const int INTERRUPTS_GPIOL = 69;
static const int INTERRUPTS_SSI2 = 70;
static const int INTERRUPTS_SSI3 = 71;
static const int INTERRUPTS_UART3 = 72;
static const int INTERRUPTS_UART4 = 73;
static const int INTERRUPTS_UART5 = 74;
static const int INTERRUPTS_UART6 = 75;
static const int INTERRUPTS_UART7 = 76;
static const int INTERRUPTS_I2C2 = 77;
static const int INTERRUPTS_I2C3 = 78;
static const int INTERRUPTS_TIMER4A_16_32_BIT = 79;
static const int INTERRUPTS_TIMER4B_16_32_BIT = 80;
static const int INTERRUPTS_TIMER5A_16_32_BIT = 81;
static const int INTERRUPTS_TIMER5B_16_32_BIT = 82;
static const int INTERRUPTS_FPE = 83;
static const int INTERRUPTS_RESERVED0 = 84;
static const int INTERRUPTS_RESERVED1 = 85;
static const int INTERRUPTS_I2C4 = 86;
static const int INTERRUPTS_I2C5 = 87;
static const int INTERRUPTS_GPIOM = 88;
static const int INTERRUPTS_GPION = 89;
static const int INTERRUPTS_RESERVED2 = 90;
static const int INTERRUPTS_TAMPER = 91;
static const int INTERRUPTS_GPIOP0 = 92;
static const int INTERRUPTS_GPIOP1 = 93;
static const int INTERRUPTS_GPIOP2 = 94;
static const int INTERRUPTS_GPIOP3 = 95;
static const int INTERRUPTS_GPIOP4 = 96;
static const int INTERRUPTS_GPIOP5 = 97;
static const int INTERRUPTS_GPIOP6 = 98;
static const int INTERRUPTS_GPIOP7 = 99;
static const int INTERRUPTS_GPIOQ0 = 100;
static const int INTERRUPTS_GPIOQ1 = 101;
static const int INTERRUPTS_GPIOQ2 = 102;
static const int INTERRUPTS_GPIOQ3 = 103;
static const int INTERRUPTS_GPIOQ4 = 104;
static const int INTERRUPTS_GPIOQ5 = 105;
static const int INTERRUPTS_GPIOQ6 = 106;
static const int INTERRUPTS_GPIOQ7 = 107;
static const int INTERRUPTS_GPIOR = 108;
static const int INTERRUPTS_GPIOS = 109;
static const int INTERRUPTS_SHA_MD5 = 110;
static const int INTERRUPTS_SHA_AES = 111;
static const int INTERRUPTS_SHA_DES = 112;
static const int INTERRUPTS_SHA_LCD = 113;
static const int INTERRUPTS_TIMER6A_16_32_BIT = 114;
static const int INTERRUPTS_TIMER6B_16_32_BIT = 115;
static const int INTERRUPTS_TIMER7A_16_32_BIT = 116;
static const int INTERRUPTS_TIMER7B_16_32_BIT = 117;
static const int INTERRUPTS_I2C6 = 118;
static const int INTERRUPTS_I2C7 = 119;
static const int INTERRUPTS_RESERVED3 = 120;
static const int INTERRUPTS_ONE_WIRE = 121;
static const int INTERRUPTS_RESERVED4 = 122;
static const int INTERRUPTS_RESERVED5 = 123;
static const int INTERRUPTS_RESERVED6 = 124;
static const int INTERRUPTS_I2C8 = 125;
static const int INTERRUPTS_I2C9 = 126;
static const int INTERRUPTS_GPIOT = 127;
static const int INTERRUPTS_RESERVED7 = 128;
static const int INTERRUPTS_RESERVED8 = 129;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for tm4c129dnczad.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for tm4c129dnczad.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
