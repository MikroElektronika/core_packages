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
* @brief atmega162 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_UCSR1B_UDRIE1 = 0; 
static const int INTERRUPTS_UCSR1B_TXCIE1 = 1; 
static const int INTERRUPTS_UCSR1B_RXCIE1 = 2; 
static const int INTERRUPTS_ACSR_ACIE = 3; 
static const int INTERRUPTS_UCSR0B_UDRIE0 = 4; 
static const int INTERRUPTS_UCSR0B_TXCIE0 = 5; 
static const int INTERRUPTS_UCSR0B_RXCIE0 = 6; 
static const int INTERRUPTS_SPCR_SPIE = 7; 
static const int INTERRUPTS_EECR_EERIE = 8; 
static const int INTERRUPTS_SPMCR_SPMIE = 9; 
static const int INTERRUPTS_TIMSK_TICIE1 = 10; 
static const int INTERRUPTS_TIMSK_OCIE1B = 11; 
static const int INTERRUPTS_TIMSK_OCIE1A = 12; 
static const int INTERRUPTS_TIMSK_TOIE1 = 13; 
static const int INTERRUPTS_TIMSK_TOIE2 = 14; 
static const int INTERRUPTS_TIMSK_OCIE2 = 15; 
static const int INTERRUPTS_TIMSK_TOIE0 = 16; 
static const int INTERRUPTS_GICR_PCIE = 17; 
static const int INTERRUPTS_SREG_I = 18; 
static const int INTERRUPTS_ETIMSK_TOIE3 = 19; 
static const int INTERRUPTS_ETIMSK_OCIE3B = 20; 
static const int INTERRUPTS_ETIMSK_OCIE3A = 21; 
static const int INTERRUPTS_ETIMSK_TICIE3 = 22;
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_UCSR1B_UDRIE1_REGISTER (0x21)
#define INTERRUPT_UCSR1B_TXCIE1_REGISTER (0x21)
#define INTERRUPT_UCSR1B_RXCIE1_REGISTER (0x21)
#define INTERRUPT_ACSR_ACIE_REGISTER (0x28)
#define INTERRUPT_UCSR0B_UDRIE0_REGISTER (0x2A)
#define INTERRUPT_UCSR0B_TXCIE0_REGISTER (0x2A)
#define INTERRUPT_UCSR0B_RXCIE0_REGISTER (0x2A)
#define INTERRUPT_SPCR_SPIE_REGISTER (0x2D)
#define INTERRUPT_EECR_EERIE_REGISTER (0x3C)
#define INTERRUPT_SPMCR_SPMIE_REGISTER (0x57)
#define INTERRUPT_TIMSK_TICIE1_REGISTER (0x59)
#define INTERRUPT_TIMSK_OCIE1B_REGISTER (0x59)
#define INTERRUPT_TIMSK_OCIE1A_REGISTER (0x59)
#define INTERRUPT_TIMSK_TOIE1_REGISTER (0x59)
#define INTERRUPT_TIMSK_TOIE2_REGISTER (0x59)
#define INTERRUPT_TIMSK_OCIE2_REGISTER (0x59)
#define INTERRUPT_TIMSK_TOIE0_REGISTER (0x59)
#define INTERRUPT_GICR_PCIE_REGISTER (0x5B)
#define INTERRUPT_SREG_I_REGISTER (0x5F)
#define INTERRUPT_ETIMSK_TOIE3_REGISTER (0x7D)
#define INTERRUPT_ETIMSK_OCIE3B_REGISTER (0x7D)
#define INTERRUPT_ETIMSK_OCIE3A_REGISTER (0x7D)
#define INTERRUPT_ETIMSK_TICIE3_REGISTER (0x7D)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_UCSR1B_UDRIE1_BIT (5)
#define INTERRUPT_UCSR1B_TXCIE1_BIT (6)
#define INTERRUPT_UCSR1B_RXCIE1_BIT (7)
#define INTERRUPT_ACSR_ACIE_BIT (3)
#define INTERRUPT_UCSR0B_UDRIE0_BIT (5)
#define INTERRUPT_UCSR0B_TXCIE0_BIT (6)
#define INTERRUPT_UCSR0B_RXCIE0_BIT (7)
#define INTERRUPT_SPCR_SPIE_BIT (7)
#define INTERRUPT_EECR_EERIE_BIT (3)
#define INTERRUPT_SPMCR_SPMIE_BIT (6)
#define INTERRUPT_TIMSK_TICIE1_BIT (0)
#define INTERRUPT_TIMSK_OCIE1B_BIT (1)
#define INTERRUPT_TIMSK_OCIE1A_BIT (2)
#define INTERRUPT_TIMSK_TOIE1_BIT (3)
#define INTERRUPT_TIMSK_TOIE2_BIT (4)
#define INTERRUPT_TIMSK_OCIE2_BIT (5)
#define INTERRUPT_TIMSK_TOIE0_BIT (7)
#define INTERRUPT_GICR_PCIE_BIT (3)
#define INTERRUPT_SREG_I_BIT (7)
#define INTERRUPT_ETIMSK_TOIE3_BIT (0)
#define INTERRUPT_ETIMSK_OCIE3B_BIT (1)
#define INTERRUPT_ETIMSK_OCIE3A_BIT (2)
#define INTERRUPT_ETIMSK_TICIE3_BIT (3)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
