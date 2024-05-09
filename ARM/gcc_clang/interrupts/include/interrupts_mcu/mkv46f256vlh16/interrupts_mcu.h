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
* @brief mkv46f256vlh16 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_NMI = 2;
static const int INTERRUPTS_HARD_FAULT = 3;
static const int INTERRUPTS_MEM_MANAGE_FAULT = 4;
static const int INTERRUPTS_BUS_FAULT = 5;
static const int INTERRUPTS_USAGE_FAULT = 6;
static const int INTERRUPTS_RESERVED7 = 7;
static const int INTERRUPTS_RESERVED8 = 8;
static const int INTERRUPTS_RESERVED9 = 9;
static const int INTERRUPTS_RESERVED10 = 10;
static const int INTERRUPTS_SVCALL = 11;
static const int INTERRUPTS_DEBUGMONITOR = 12;
static const int INTERRUPTS_RESERVED13 = 13;
static const int INTERRUPTS_PENDABLESRVREQ = 14;
static const int INTERRUPTS_SYSTICK = 15;
static const int INTERRUPTS_DMA0 = 16;
static const int INTERRUPTS_DMA1 = 17;
static const int INTERRUPTS_DMA2 = 18;
static const int INTERRUPTS_DMA3 = 19;
static const int INTERRUPTS_DMA4 = 20;
static const int INTERRUPTS_DMA5 = 21;
static const int INTERRUPTS_DMA6 = 22;
static const int INTERRUPTS_DMA7 = 23;
static const int INTERRUPTS_DMA8 = 24;
static const int INTERRUPTS_DMA9 = 25;
static const int INTERRUPTS_DMA10 = 26;
static const int INTERRUPTS_DMA11 = 27;
static const int INTERRUPTS_DMA12 = 28;
static const int INTERRUPTS_DMA13 = 29;
static const int INTERRUPTS_DMA14 = 30;
static const int INTERRUPTS_DMA15 = 31;
static const int INTERRUPTS_DMA_ERROR = 32;
static const int INTERRUPTS_MCM = 33;
static const int INTERRUPTS_FTFA = 34;
static const int INTERRUPTS_FTFA_COLLISION = 35;
static const int INTERRUPTS_PMC = 36;
static const int INTERRUPTS_LLWU = 37;
static const int INTERRUPTS_WDOG_EWM = 38;
static const int INTERRUPTS_RESERVED39 = 39;
static const int INTERRUPTS_I2C0 = 40;
static const int INTERRUPTS_RESERVED41 = 41;
static const int INTERRUPTS_SPI0 = 42;
static const int INTERRUPTS_RESERVED43 = 43;
static const int INTERRUPTS_RESERVED44 = 44;
static const int INTERRUPTS_RESERVED45 = 45;
static const int INTERRUPTS_RESERVED46 = 46;
static const int INTERRUPTS_UART0_RX_TX = 47;
static const int INTERRUPTS_UART0_ERR = 48;
static const int INTERRUPTS_UART1_RX_TX = 49;
static const int INTERRUPTS_UART1_ERR = 50;
static const int INTERRUPTS_RESERVED51 = 51;
static const int INTERRUPTS_RESERVED52 = 52;
static const int INTERRUPTS_RESERVED53 = 53;
static const int INTERRUPTS_ADC_ERR = 54;
static const int INTERRUPTS_ADCA = 55;
static const int INTERRUPTS_CMP0 = 56;
static const int INTERRUPTS_CMP1 = 57;
static const int INTERRUPTS_FTM0 = 58;
static const int INTERRUPTS_FTM1 = 59;
static const int INTERRUPTS_RESERVED60 = 60;
static const int INTERRUPTS_RESERVED61 = 61;
static const int INTERRUPTS_RESERVED62 = 62;
static const int INTERRUPTS_RESERVED63 = 63;
static const int INTERRUPTS_PIT0 = 64;
static const int INTERRUPTS_PIT1 = 65;
static const int INTERRUPTS_PIT2 = 66;
static const int INTERRUPTS_PIT3 = 67;
static const int INTERRUPTS_PDB0 = 68;
static const int INTERRUPTS_RESERVED69 = 69;
static const int INTERRUPTS_XBARA = 70;
static const int INTERRUPTS_PDB1 = 71;
static const int INTERRUPTS_DAC0 = 72;
static const int INTERRUPTS_MCG = 73;
static const int INTERRUPTS_LPTMR0 = 74;
static const int INTERRUPTS_PORTA = 75;
static const int INTERRUPTS_PORTB = 76;
static const int INTERRUPTS_PORTC = 77;
static const int INTERRUPTS_PORTD = 78;
static const int INTERRUPTS_PORTE = 79;
static const int INTERRUPTS_SWI = 80;
static const int INTERRUPTS_RESERVED81 = 81;
static const int INTERRUPTS_ENC0_COMPARE = 82;
static const int INTERRUPTS_ENC0_HOME = 83;
static const int INTERRUPTS_ENC0_WDOG_SAB = 84;
static const int INTERRUPTS_ENC0_INDEX = 85;
static const int INTERRUPTS_CMP2 = 86;
static const int INTERRUPTS_FTM3 = 87;
static const int INTERRUPTS_RESERVED88 = 88;
static const int INTERRUPTS_ADCB = 89;
static const int INTERRUPTS_RESERVED90 = 90;
static const int INTERRUPTS_CAN0_ORED_MESSAGE_BUFFER = 91;
static const int INTERRUPTS_CAN0_BUS_OFF = 92;
static const int INTERRUPTS_CAN0_ERROR = 93;
static const int INTERRUPTS_CAN0_TX_WARNING = 94;
static const int INTERRUPTS_CAN0_RX_WARNING = 95;
static const int INTERRUPTS_CAN0_WAKE_UP = 96;
static const int INTERRUPTS_PWMA_CMP0 = 97;
static const int INTERRUPTS_PWMA_RELOAD0 = 98;
static const int INTERRUPTS_PWMA_CMP1 = 99;
static const int INTERRUPTS_PWMA_RELOAD1 = 100;
static const int INTERRUPTS_PWMA_CMP2 = 101;
static const int INTERRUPTS_PWMA_RELOAD2 = 102;
static const int INTERRUPTS_PWMA_CMP3 = 103;
static const int INTERRUPTS_PWMA_RELOAD3 = 104;
static const int INTERRUPTS_PWMA_CAP = 105;
static const int INTERRUPTS_PWMA_RERR = 106;
static const int INTERRUPTS_PWMA_FAULT = 107;
static const int INTERRUPTS_CMP3 = 108;
static const int INTERRUPTS_RESERVED109 = 109;
static const int INTERRUPTS_CAN1_ORED_MESSAGE_BUFFER = 110;
static const int INTERRUPTS_CAN1_BUS_OFF = 111;
static const int INTERRUPTS_CAN1_ERROR = 112;
static const int INTERRUPTS_CAN1_TX_WARNING = 113;
static const int INTERRUPTS_CAN1_RX_WARNING = 114;
static const int INTERRUPTS_CAN1_WAKE_UP = 115;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for mkv46f256vlh16.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for mkv46f256vlh16.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
