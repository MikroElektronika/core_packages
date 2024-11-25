/****************************************************************************
**
** Copyright (C) 2024 MikroElektronika d.o.o.
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
* @brief MK10DN512VLK10 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_INITIAL_STACK_POINTER = 0;
static const int INTERRUPTS_INITIAL_PROGRAM_COUNTER = 1;
static const int INTERRUPTS_NMI = 2;
static const int INTERRUPTS_HARD_FAULT = 3;
static const int INTERRUPTS_MEMMANAGE_FAULT = 4;
static const int INTERRUPTS_BUS_FAULT = 5;
static const int INTERRUPTS_USAGE_FAULT = 6;
static const int INTERRUPTS_RESERVED7 = 7;
static const int INTERRUPTS_RESERVED8 = 8;
static const int INTERRUPTS_RESERVED9 = 9;
static const int INTERRUPTS_RESERVED10 = 10;
static const int INTERRUPTS_SVCALL = 11;
static const int INTERRUPTS_DEBUG_MONITOR = 12;
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
static const int INTERRUPTS_NORMAL_INTERRUPT = 33;
static const int INTERRUPTS_COMMAND_COMPLETE = 34;
static const int INTERRUPTS_READ_COLLISION = 35;
static const int INTERRUPTS_PMC = 36;
static const int INTERRUPTS_LLWU = 37;
static const int INTERRUPTS_BOTH_WATCHDOG_MODULES_SHARE_THIS_INTERRUPT = 38;
static const int INTERRUPTS_RESERVED39 = 39;
static const int INTERRUPTS_I2C0 = 40;
static const int INTERRUPTS_I2C1 = 41;
static const int INTERRUPTS_SPI0 = 42;
static const int INTERRUPTS_SPI1 = 43;
static const int INTERRUPTS_RESERVED44 = 44;
static const int INTERRUPTS_CAN0_0RED_MESSAGE_BUFFER = 45;
static const int INTERRUPTS_CAN0_BUS_OFF = 46;
static const int INTERRUPTS_CAN0_ERROR = 47;
static const int INTERRUPTS_CAN0_TX_WARNING = 48;
static const int INTERRUPTS_CAN0_RX_WARNING = 49;
static const int INTERRUPTS_CAN0_WAKE_UP = 50;
static const int INTERRUPTS_TRANSMIT = 51;
static const int INTERRUPTS_RECEIVE = 52;
static const int INTERRUPTS_CAN1_0RED_MESSAGE_BUFFER = 53;
static const int INTERRUPTS_CAN1_BUS_OFF = 54;
static const int INTERRUPTS_CAN1_ERROR = 55;
static const int INTERRUPTS_CAN1_TX_WARNING = 56;
static const int INTERRUPTS_CAN1_RX_WARNING = 57;
static const int INTERRUPTS_CAN1_WAKE_UP = 58;
static const int INTERRUPTS_RESERVED59 = 59;
static const int INTERRUPTS_SINGLE_INTERRUPT_VECTOR_FOR_UART_LON_SOURCES = 60;
static const int INTERRUPTS_UART0_RX_TX = 61;
static const int INTERRUPTS_UART0_ERR = 62;
static const int INTERRUPTS_UART1_RX_TX = 63;
static const int INTERRUPTS_UART1_ERR = 64;
static const int INTERRUPTS_UART2_RX_TX = 65;
static const int INTERRUPTS_UART2_ERR = 66;
static const int INTERRUPTS_UART3_RX_TX = 67;
static const int INTERRUPTS_UART3_ERR = 68;
static const int INTERRUPTS_RESERVED69 = 69;
static const int INTERRUPTS_RESERVED70 = 70;
static const int INTERRUPTS_RESERVED71 = 71;
static const int INTERRUPTS_RESERVED72 = 72;
static const int INTERRUPTS_ADC0 = 73;
static const int INTERRUPTS_ADC1 = 74;
static const int INTERRUPTS_CMP0 = 75;
static const int INTERRUPTS_CMP1 = 76;
static const int INTERRUPTS_CMP2 = 77;
static const int INTERRUPTS_FTM0 = 78;
static const int INTERRUPTS_FTM1 = 79;
static const int INTERRUPTS_FTM2 = 80;
static const int INTERRUPTS_CMT = 81;
static const int INTERRUPTS_ALARM_INTERRUPT = 82;
static const int INTERRUPTS_SECONDS_INTERRUPT = 83;
static const int INTERRUPTS_PIT0 = 84;
static const int INTERRUPTS_PIT1 = 85;
static const int INTERRUPTS_PIT2 = 86;
static const int INTERRUPTS_PIT3 = 87;
static const int INTERRUPTS_PDB = 88;
static const int INTERRUPTS_RESERVED89 = 89;
static const int INTERRUPTS_RESERVED90 = 90;
static const int INTERRUPTS_RESERVED91 = 91;
static const int INTERRUPTS_RESERVED92 = 92;
static const int INTERRUPTS_RESERVED93 = 93;
static const int INTERRUPTS_RESERVED94 = 94;
static const int INTERRUPTS_RESERVED95 = 95;
static const int INTERRUPTS_SDHC = 96;
static const int INTERRUPTS_DAC0 = 97;
static const int INTERRUPTS_RESERVED98 = 98;
static const int INTERRUPTS_SINGLE_INTERRUPT_VECTOR_FOR_ALL_SOURCES = 99;
static const int INTERRUPTS_MCG = 100;
static const int INTERRUPTS_LPTMR0 = 101;
static const int INTERRUPTS_RESERVED102 = 102;
static const int INTERRUPTS_PORTA = 103;
static const int INTERRUPTS_PORTB = 104;
static const int INTERRUPTS_PORTC = 105;
static const int INTERRUPTS_PORTD = 106;
static const int INTERRUPTS_PORTE = 107;
static const int INTERRUPTS_RESERVED108 = 108;
static const int INTERRUPTS_RESERVED109 = 109;
static const int INTERRUPTS_SOFTWARE_INTERRUPT = 110;


// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for MK10DN512VLK10.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for mk20dn32vlh5.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END

