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
* @brief MKE15Z128VLH7 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_NON_MASKABLE_INTERRUPT = -1;
static const int INTERRUPTS_RESERVED = 0;
static const int INTERRUPTS_RESERVED_1 = 1;
static const int INTERRUPTS_RESERVED_2 = 2;
static const int INTERRUPTS_RESERVED_3 = 3;
static const int INTERRUPTS_RESERVED_4 = 4;
static const int INTERRUPTS_RESERVED_5 = 5;
static const int INTERRUPTS_RESERVED_6 = 6;
static const int INTERRUPTS_RESERVED_7 = 7;
static const int INTERRUPTS_RESERVED_8 = 8;
static const int INTERRUPTS_RESERVED_9 = 9;
static const int INTERRUPTS_RESERVED_10 = 10;
static const int INTERRUPTS_RESERVED_11 = 11;
static const int INTERRUPTS_RESERVED_12 = 12;
static const int INTERRUPTS_RESERVED_13 = 13;
static const int INTERRUPTS_RESERVED_14 = 14;
static const int INTERRUPTS_RESERVED_15 = 15;
static const int INTERRUPTS_DMA0 = 16;
static const int INTERRUPTS_DMA1 = 17;
static const int INTERRUPTS_DMA2 = 18;
static const int INTERRUPTS_DMA3 = 19;
static const int INTERRUPTS_DMA4 = 20;
static const int INTERRUPTS_DMA5 = 21;
static const int INTERRUPTS_DMA6 = 22;
static const int INTERRUPTS_DMA7 = 23;
static const int INTERRUPTS_DMA_ERROR = 24;
static const int INTERRUPTS_MCM_SINGLE_FAULT_INTERRUPT = 25;
static const int INTERRUPTS_MCM_DOUBLE_FAULT_INTERRUPT = 26;
static const int INTERRUPTS_MCM_STOP_ACKNOWLEDGE_INTERRUPT = 27;
static const int INTERRUPTS_FTFE_COMMAND_COMPLETE_INTERRUPT = 28;
static const int INTERRUPTS_CMP0 = 31;
static const int INTERRUPTS_CMP1 = 32;
static const int INTERRUPTS_FTM0 = 33;
static const int INTERRUPTS_FTM0_1 = 34;
static const int INTERRUPTS_FTM1 = 35;
static const int INTERRUPTS_FTM1_1 = 36;
static const int INTERRUPTS_FTM2 = 37;
static const int INTERRUPTS_FTM2_1 = 38;
static const int INTERRUPTS_CAN0_ORED_0RED_MESSAGE_BUFFER = 39;
static const int INTERRUPTS_CAN0_BUSOFF_BUS_OFF = 40;
static const int INTERRUPTS_CAN0_ERROR_ERROR = 41;
static const int INTERRUPTS_CAN0_TX_TX_WARNING = 42;
static const int INTERRUPTS_CAN0_RX_RX_WARNING = 43;
static const int INTERRUPTS_CAN0_WAKEUP_WAKE_UP = 44;
static const int INTERRUPTS_I2S0_TRANSMIT_INTERRUPT = 45;
static const int INTERRUPTS_I2S0_RECEIVE_INTERRUPT = 46;
static const int INTERRUPTS_LPUART0_TRANSMIT_INTERRUPT = 48;
static const int INTERRUPTS_LPUART0_RECEIVE_INTERRUPT = 49;
static const int INTERRUPTS_LPUART1_TRANSMIT_INTERRUPT = 50;
static const int INTERRUPTS_LPUART1_RECEIVE_INTERRUPT = 51;
static const int INTERRUPTS_LPUART2_TRANSMIT_INTERRUPT = 52;
static const int INTERRUPTS_LPUART2_RECEIVE_INTERRUPT = 53;
static const int INTERRUPTS_SPI0_RX = 55;
static const int INTERRUPTS_SPI0_TX = 56;
static const int INTERRUPTS_I2C0 = 58;
static const int INTERRUPTS_I2C1 = 59;
static const int INTERRUPTS_CAN1_ORED_0RED_MESSAGE_BUFFER = 60;
static const int INTERRUPTS_CAN1_BUSOFF_BUS_OFF = 61;
static const int INTERRUPTS_CAN1_ERROR_ERROR = 62;
static const int INTERRUPTS_CAN1_TX_TX_WARNING = 63;
static const int INTERRUPTS_CAN1_RX_RX_WARNING = 64;
static const int INTERRUPTS_CAN1_WAKEUP_WAKE_UP = 65;


// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for MKE15Z128VLH7.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for mk20dn32vlh5.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END

