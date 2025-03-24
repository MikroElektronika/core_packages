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
* @brief MKS22FN256VLH12 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_NMI = 2;
static const int INTERRUPTS_HARD_FAULT = 3;
static const int INTERRUPTS_MEMMANAGE_FAULT = 4;
static const int INTERRUPTS_BUS_FAULT = 5;
static const int INTERRUPTS_USAGE_FAULT = 6;
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
static const int INTERRUPTS_FPU_SOURCES = 33;
static const int INTERRUPTS_COMMAND_COMPLETE = 34;
static const int INTERRUPTS_READ_COLLISION = 35;
static const int INTERRUPTS_PMC = 36;
static const int INTERRUPTS_LLWU = 37;
static const int INTERRUPTS_BOTH_WATCHDOG_MODULES_SHARE_THIS_INTERRUPT = 38;
static const int INTERRUPTS_RANDON_NUMBER_GENERATOR = 39;
static const int INTERRUPTS_LPI2C0 = 40;
static const int INTERRUPTS_LPI2C1 = 41;
static const int INTERRUPTS_SPI0 = 42;
static const int INTERRUPTS_SPI1 = 43;
static const int INTERRUPTS_TRANSMIT = 44;
static const int INTERRUPTS_RECEIVE = 45;
static const int INTERRUPTS_STATUS_AND_ERROR = 46;
static const int INTERRUPTS_UART0_RX_TX = 47;
static const int INTERRUPTS_UART0_ERR = 48;
static const int INTERRUPTS_UART1_RX_TX = 49;
static const int INTERRUPTS_UART1_ERR = 50;
static const int INTERRUPTS_UART2_RX_TX = 51;
static const int INTERRUPTS_UART2_ERR = 52;
static const int INTERRUPTS_RESERVED = 53;
static const int INTERRUPTS_RESERVED_1 = 54;
static const int INTERRUPTS_ADC0 = 55;
static const int INTERRUPTS_CMP0 = 56;
static const int INTERRUPTS_RESERVED_2 = 57;
static const int INTERRUPTS_TPM0 = 58;
static const int INTERRUPTS_TPM1 = 59;
static const int INTERRUPTS_TPM2 = 60;
static const int INTERRUPTS_RESERVED_3 = 61;
static const int INTERRUPTS_ALARM_INTERRUPT = 62;
static const int INTERRUPTS_SECONDS_INTERRUPT = 63;
static const int INTERRUPTS_PIT0 = 64;
static const int INTERRUPTS_PIT1 = 65;
static const int INTERRUPTS_PIT2 = 66;
static const int INTERRUPTS_PIT3 = 67;
static const int INTERRUPTS_PDB = 68;
static const int INTERRUPTS_USB_OTG = 69;
static const int INTERRUPTS_RESERVED_4 = 70;
static const int INTERRUPTS_RESERVED_5 = 71;
static const int INTERRUPTS_DAC0 = 72;
static const int INTERRUPTS_MCG = 73;
static const int INTERRUPTS_LPTMR0 = 74;
static const int INTERRUPTS_PORTA = 75;
static const int INTERRUPTS_PORTB = 76;
static const int INTERRUPTS_PORTC = 77;
static const int INTERRUPTS_PORTD = 78;
static const int INTERRUPTS_PORTE = 79;
static const int INTERRUPTS_SOFTWARE_INTERRUPT4 = 80;
static const int INTERRUPTS_RESERVED_6 = 81;
static const int INTERRUPTS_RESERVED_7 = 82;
static const int INTERRUPTS_RESERVED_8 = 83;
static const int INTERRUPTS_RESERVED_9 = 84;
static const int INTERRUPTS_RESERVED_10 = 85;
static const int INTERRUPTS_FLEXIBLE_IO = 86;
static const int INTERRUPTS_RESERVED_11 = 87;
static const int INTERRUPTS_RESERVED_12 = 88;
static const int INTERRUPTS_RESERVED_13 = 89;
static const int INTERRUPTS_RESERVED_14 = 90;
static const int INTERRUPTS_CAN0_0RED_MESSAGE_BUFFER = 91;
static const int INTERRUPTS_CAN0_BUS_OFF = 92;
static const int INTERRUPTS_CAN0_ERROR = 93;
static const int INTERRUPTS_CAN0_TX_WARNING = 94;
static const int INTERRUPTS_CAN0_RX_WARNING = 95;
static const int INTERRUPTS_CAN0_WAKE_UP = 96;
static const int INTERRUPTS_RESERVED_15 = 97;
static const int INTERRUPTS_RESERVED_16 = 98;
static const int INTERRUPTS_RESERVED_17 = 99;
static const int INTERRUPTS_RESERVED_18 = 100;
static const int INTERRUPTS_RESERVED_19 = 101;
static const int INTERRUPTS_RESERVED_20 = 102;
static const int INTERRUPTS_RESERVED_21 = 103;
static const int INTERRUPTS_TRANSMIT_1 = 104;
static const int INTERRUPTS_RECEIVE_1 = 105;
static const int INTERRUPTS_RESERVED_22 = 106;
static const int INTERRUPTS_RESERVED_23 = 107;
static const int INTERRUPTS_RESERVED_24 = 108;
static const int INTERRUPTS_RESERVED_25 = 109;
static const int INTERRUPTS_0_15 = 110;
static const int INTERRUPTS_BUS_OFF = 111;
static const int INTERRUPTS_ERROR = 112;
static const int INTERRUPTS_TRANSMIT_WARNING = 113;
static const int INTERRUPTS_RECEIVE_WARNING = 114;
static const int INTERRUPTS_WAKE_UP = 115;


// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for MKS22FN256VLH12.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for mk20dn32vlh5.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END

