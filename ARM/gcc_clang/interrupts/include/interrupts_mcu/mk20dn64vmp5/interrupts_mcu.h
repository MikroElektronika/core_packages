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
* @brief mk20dn64vmp5 MCU specific interrupt per module definitions.
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
static const int INTERRUPTS_DMA_ERROR = 20;
static const int INTERRUPTS_RESERVED21 = 21;
static const int INTERRUPTS_FTFL = 22;
static const int INTERRUPTS_READ_COLLISION = 23;
static const int INTERRUPTS_LVD_LVW = 24;
static const int INTERRUPTS_LLW = 25;
static const int INTERRUPTS_WATCHDOG = 26;
static const int INTERRUPTS_I2C0 = 27;
static const int INTERRUPTS_SPI0 = 28;
static const int INTERRUPTS_I2S0_TX = 29;
static const int INTERRUPTS_I2S0_RX = 30;
static const int INTERRUPTS_UART0_LON = 31;
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
static const int INTERRUPTS_RTC = 44;
static const int INTERRUPTS_RTC_SECONDS = 45;
static const int INTERRUPTS_PIT0 = 46;
static const int INTERRUPTS_PIT1 = 47;
static const int INTERRUPTS_PIT2 = 48;
static const int INTERRUPTS_PIT3 = 49;
static const int INTERRUPTS_PDB0 = 50;
static const int INTERRUPTS_USB0 = 51;
static const int INTERRUPTS_USBDCD = 52;
static const int INTERRUPTS_TSI0 = 53;
static const int INTERRUPTS_MCG = 54;
static const int INTERRUPTS_LPTIMER = 55;
static const int INTERRUPTS_PORTA = 56;
static const int INTERRUPTS_PORTB = 57;
static const int INTERRUPTS_PORTC = 58;
static const int INTERRUPTS_PORTD = 59;
static const int INTERRUPTS_PORTE = 60;
static const int INTERRUPTS_SWI = 61;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for mk20dn64vmp5.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for mk20dn64vmp5.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
