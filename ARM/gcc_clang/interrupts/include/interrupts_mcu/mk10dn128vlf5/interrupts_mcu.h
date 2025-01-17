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
* @brief MK10DN128VLF5 MCU specific interrupt per module definitions.
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
static const int INTERRUPTS_RESERVED = 7;
static const int INTERRUPTS_RESERVED_1 = 8;
static const int INTERRUPTS_RESERVED_2 = 9;
static const int INTERRUPTS_RESERVED_3 = 10;
static const int INTERRUPTS_SVCALL = 11;
static const int INTERRUPTS_DEBUG_MONITOR = 12;
static const int INTERRUPTS_RESERVED_4 = 13;
static const int INTERRUPTS_PENDABLESRVREQ = 14;
static const int INTERRUPTS_SYSTICK = 15;
static const int INTERRUPTS_DMA0 = 16;
static const int INTERRUPTS_DMA1 = 17;
static const int INTERRUPTS_DMA2 = 18;
static const int INTERRUPTS_DMA3 = 19;
static const int INTERRUPTS_DMA_ERROR = 20;
static const int INTERRUPTS_DMA = 21;
static const int INTERRUPTS_COMMAND_COMPLETE = 22;
static const int INTERRUPTS_READ_COLLISION = 23;
static const int INTERRUPTS_PMC = 24;
static const int INTERRUPTS_LLWU = 25;
static const int INTERRUPTS_WDOG_EWM = 26;
static const int INTERRUPTS_I2C0 = 27;
static const int INTERRUPTS_SPI0 = 28;
static const int INTERRUPTS_TRANSMIT = 29;
static const int INTERRUPTS_RECEIVE = 30;
static const int INTERRUPTS_UART0_RX_TX_LON = 31;
static const int INTERRUPTS_UART0_RX_TX = 32;
static const int INTERRUPTS_UART0_ERR = 33;
static const int INTERRUPTS_UART1_RX_TX = 34;
static const int INTERRUPTS_UART1_ERR = 35;
static const int INTERRUPTS_UART2_RX_TX = 36;
static const int INTERRUPTS_UART2_ERR = 37;
static const int INTERRUPTS_ADC0 = 38;
static const int INTERRUPTS_CMP0 = 39;
static const int INTERRUPTS_CMP1 = 40;
static const int INTERRUPTS_FTM0 = 41;
static const int INTERRUPTS_FTM1 = 42;
static const int INTERRUPTS_CMT = 43;
static const int INTERRUPTS_ALARM_INTERRUPT = 44;
static const int INTERRUPTS_SECONDS_INTERRUPT = 45;
static const int INTERRUPTS_PIT0 = 46;
static const int INTERRUPTS_PIT1 = 47;
static const int INTERRUPTS_PIT2 = 48;
static const int INTERRUPTS_PIT3 = 49;
static const int INTERRUPTS_PDB = 50;
static const int INTERRUPTS_RESERVED_5 = 51;
static const int INTERRUPTS_RESERVED_6 = 52;
static const int INTERRUPTS_TSI = 53;
static const int INTERRUPTS_MCG = 54;
static const int INTERRUPTS_LPTMR0 = 55;
static const int INTERRUPTS_PORTA = 56;
static const int INTERRUPTS_PORTB = 57;
static const int INTERRUPTS_PORTC = 58;
static const int INTERRUPTS_PORTD = 59;
static const int INTERRUPTS_PORTE = 60;
static const int INTERRUPTS_SOFTWARE_INITIATED = 61;
static const int INTERRUPTS_RESERVED_7 = 62;
static const int INTERRUPTS_RESERVED_8 = 63;
static const int INTERRUPTS_RESERVED_9 = 64;
static const int INTERRUPTS_RESERVED_10 = 65;
static const int INTERRUPTS_RESERVED_11 = 66;
static const int INTERRUPTS_RESERVED_12 = 67;
static const int INTERRUPTS_RESERVED_13 = 68;
static const int INTERRUPTS_RESERVED_14 = 69;
static const int INTERRUPTS_RESERVED_15 = 70;
static const int INTERRUPTS_RESERVED_16 = 71;
static const int INTERRUPTS_RESERVED_17 = 72;
static const int INTERRUPTS_RESERVED_18 = 73;
static const int INTERRUPTS_RESERVED_19 = 74;
static const int INTERRUPTS_RESERVED_20 = 75;
static const int INTERRUPTS_RESERVED_21 = 76;
static const int INTERRUPTS_RESERVED_22 = 77;
static const int INTERRUPTS_RESERVED_23 = 78;
static const int INTERRUPTS_RESERVED_24 = 79;
static const int INTERRUPTS_RESERVED_25 = 80;
static const int INTERRUPTS_RESERVED_26 = 81;
static const int INTERRUPTS_RESERVED_27 = 82;
static const int INTERRUPTS_RESERVED_28 = 83;
static const int INTERRUPTS_RESERVED_29 = 84;
static const int INTERRUPTS_RESERVED_30 = 85;
static const int INTERRUPTS_RESERVED_31 = 86;
static const int INTERRUPTS_RESERVED_32 = 87;
static const int INTERRUPTS_RESERVED_33 = 88;
static const int INTERRUPTS_RESERVED_34 = 89;
static const int INTERRUPTS_RESERVED_35 = 90;
static const int INTERRUPTS_RESERVED_36 = 91;
static const int INTERRUPTS_RESERVED_37 = 92;
static const int INTERRUPTS_RESERVED_38 = 93;
static const int INTERRUPTS_RESERVED_39 = 94;
static const int INTERRUPTS_RESERVED_40 = 95;
static const int INTERRUPTS_RESERVED_41 = 96;
static const int INTERRUPTS_RESERVED_42 = 97;
static const int INTERRUPTS_RESERVED_43 = 98;
static const int INTERRUPTS_RESERVED_44 = 99;
static const int INTERRUPTS_RESERVED_45 = 100;
static const int INTERRUPTS_RESERVED_46 = 101;
static const int INTERRUPTS_RESERVED_47 = 102;
static const int INTERRUPTS_RESERVED_48 = 103;
static const int INTERRUPTS_RESERVED_49 = 104;
static const int INTERRUPTS_RESERVED_50 = 105;
static const int INTERRUPTS_RESERVED_51 = 106;
static const int INTERRUPTS_RESERVED_52 = 107;
static const int INTERRUPTS_RESERVED_53 = 108;
static const int INTERRUPTS_RESERVED_54 = 109;
static const int INTERRUPTS_RESERVED_55 = 110;
static const int INTERRUPTS_RESERVED_56 = 111;
static const int INTERRUPTS_RESERVED_57 = 112;
static const int INTERRUPTS_RESERVED_58 = 113;
static const int INTERRUPTS_RESERVED_59 = 114;
static const int INTERRUPTS_RESERVED_60 = 115;
static const int INTERRUPTS_RESERVED_61 = 116;
static const int INTERRUPTS_RESERVED_62 = 117;
static const int INTERRUPTS_RESERVED_63 = 118;
static const int INTERRUPTS_RESERVED_64 = 119;
static const int INTERRUPTS_RESERVED_65 = 120;
static const int INTERRUPTS_RESERVED_66 = 121;
static const int INTERRUPTS_RESERVED_67 = 122;
static const int INTERRUPTS_RESERVED_68 = 123;
static const int INTERRUPTS_RESERVED_69 = 124;
static const int INTERRUPTS_RESERVED_70 = 125;
static const int INTERRUPTS_RESERVED_71 = 126;
static const int INTERRUPTS_RESERVED_72 = 127;


// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for MK10DN128VLF5.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for mk20dn32vlh5.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END

