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
* @brief MKV46F256VLL16Q MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_NMI = 2;
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
static const int INTERRUPTS_DMA_ERROR = 32;
static const int INTERRUPTS_MCM_INTERRUPT = 33;
static const int INTERRUPTS_COMMAND_COMPLETE = 34;
static const int INTERRUPTS_READ_COLLISION = 35;
static const int INTERRUPTS_PMC = 36;
static const int INTERRUPTS_LLWU = 37;
static const int INTERRUPTS_BOTH_WATCHDOG_MODULES_SHARE_THIS_INTERRUPT = 38;
static const int INTERRUPTS_I2C0 = 40;
static const int INTERRUPTS_SPI0 = 42;
static const int INTERRUPTS_UART0_RX_TX = 47;
static const int INTERRUPTS_UART0_ERR = 48;
static const int INTERRUPTS_UART1_RX_TX = 49;
static const int INTERRUPTS_UART1_ERR = 50;
static const int INTERRUPTS_ADCA_SCAN_COMPLETE = 55;
static const int INTERRUPTS_CMP0 = 56;
static const int INTERRUPTS_CMP1 = 57;
static const int INTERRUPTS_FTM0 = 58;
static const int INTERRUPTS_FTM1 = 59;
static const int INTERRUPTS_LPTMR = 74;
static const int INTERRUPTS_PORTA = 75;
static const int INTERRUPTS_PORTB = 76;
static const int INTERRUPTS_PORTC = 77;
static const int INTERRUPTS_PORTD = 78;
static const int INTERRUPTS_PORTE = 79;
static const int INTERRUPTS_SOFTWARE = 80;
static const int INTERRUPTS_ENC_COMPARE = 82;
static const int INTERRUPTS_ENC_HOME = 83;
static const int INTERRUPTS_ENC_WATCHDOG_SIMULTANEOUS_A_B_CHANGE = 84;
static const int INTERRUPTS_ENC_INDEX = 85;
static const int INTERRUPTS_CMP2 = 86;
static const int INTERRUPTS_FTM3 = 87;
static const int INTERRUPTS_ADCB_SCAN_COMPLETE = 89;
static const int INTERRUPTS_CAN0_0RED_MESSAGE_BUFFER = 91;
static const int INTERRUPTS_CAN0_BUS_OFF = 92;
static const int INTERRUPTS_CAN0_ERROR = 93;
static const int INTERRUPTS_CAN0_TX_WARNING = 94;
static const int INTERRUPTS_CAN0_RX_WARNING = 95;
static const int INTERRUPTS_CAN0_WAKE_UP = 96;
static const int INTERRUPTS_EFLEXPWM_SUBMODULE_0_COMPARE = 97;
static const int INTERRUPTS_EFLEXPWM_SUBMODULE_0_RELOAD = 98;
static const int INTERRUPTS_EFLEXPWM_SUBMODULE_1_COMPARE = 99;
static const int INTERRUPTS_EFLEXPWM_SUBMODULE_1_RELOAD = 100;
static const int INTERRUPTS_EFLEXPWM_SUBMODULE_2_COMPARE = 101;
static const int INTERRUPTS_EFLEXPWM_SUBMODULE_2_RELOAD = 102;
static const int INTERRUPTS_EFLEXPWM_SUBMODULE_3_COMPARE = 103;
static const int INTERRUPTS_EFLEXPWM_SUBMODULE_3_RELOAD = 104;
static const int INTERRUPTS_EFLEXPWM_ALL_INPUT_CAPTURES = 105;
static const int INTERRUPTS_EFLEXPWM_RELOAD_ERROR = 106;
static const int INTERRUPTS_EFLEXPWM_FAULT = 107;
static const int INTERRUPTS_CMP3 = 108;
static const int INTERRUPTS_CAN1_0RED_MESSAGE_BUFFER = 110;
static const int INTERRUPTS_CAN1_BUS_OFF = 111;
static const int INTERRUPTS_CAN1_ERROR = 112;
static const int INTERRUPTS_CAN1_TX_WARNING = 113;
static const int INTERRUPTS_CAN1_RX_WARNING = 114;
static const int INTERRUPTS_CAN1_WAKE_UP = 115;


// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for MKV46F256VLX16.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for mk20dn32vlh5.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END

