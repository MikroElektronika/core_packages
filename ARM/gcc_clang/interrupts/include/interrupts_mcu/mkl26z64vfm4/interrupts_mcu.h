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
* @brief MKL26Z64VFM4 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_NMI = 2;
static const int INTERRUPTS_HARD_FAULT = 3;
static const int INTERRUPTS_RESERVED = 4;
static const int INTERRUPTS_RESERVED_1 = 5;
static const int INTERRUPTS_RESERVED_2 = 6;
static const int INTERRUPTS_RESERVED_3 = 7;
static const int INTERRUPTS_RESERVED_4 = 8;
static const int INTERRUPTS_RESERVED_5 = 9;
static const int INTERRUPTS_RESERVED_6 = 10;
static const int INTERRUPTS_SVCALL = 11;
static const int INTERRUPTS_RESERVED_7 = 12;
static const int INTERRUPTS_RESERVED_8 = 13;
static const int INTERRUPTS_PENDABLESRVREQ = 14;
static const int INTERRUPTS_SYSTICK = 15;
static const int INTERRUPTS_DMA0 = 16;
static const int INTERRUPTS_DMA1 = 17;
static const int INTERRUPTS_DMA2 = 18;
static const int INTERRUPTS_DMA3 = 19;
static const int INTERRUPTS_RESERVED_9 = 20;
static const int INTERRUPTS_COMMAND_COMPLETE_AND_READ_COLLISION = 21;
static const int INTERRUPTS_PMC = 22;
static const int INTERRUPTS_LLWU = 23;
static const int INTERRUPTS_I2C0 = 24;
static const int INTERRUPTS_I2C1 = 25;
static const int INTERRUPTS_SPI0 = 26;
static const int INTERRUPTS_SPI1 = 27;
static const int INTERRUPTS_UART0_ERR = 28;
static const int INTERRUPTS_UART1_ERR = 29;
static const int INTERRUPTS_UART2_ERR = 30;
static const int INTERRUPTS_ADC0 = 31;
static const int INTERRUPTS_CMP0 = 32;
static const int INTERRUPTS_TPM0 = 33;
static const int INTERRUPTS_TPM1 = 34;
static const int INTERRUPTS_TPM2 = 35;
static const int INTERRUPTS_ALARM_INTERRUPT = 36;
static const int INTERRUPTS_SECONDS_INTERRUPT = 37;
static const int INTERRUPTS_SVIC = 38;
static const int INTERRUPTS_SINGLE_INTERRUPT_VECTOR_FOR_ALL_SOURCES = 39;
static const int INTERRUPTS_USB_OTG = 40;
static const int INTERRUPTS_DAC0 = 41;
static const int INTERRUPTS_TSI0 = 42;
static const int INTERRUPTS_MCG = 43;
static const int INTERRUPTS_LPTMR0 = 44;
static const int INTERRUPTS_RESERVED_10 = 45;
static const int INTERRUPTS_PORTA = 46;
static const int INTERRUPTS_PORTC = 47;


// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for MKL26Z64VFM4.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for mk20dn32vlh5.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END

