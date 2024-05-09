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
* @brief atmega6490 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_EIMSK_PCIE = 0; 
static const int INTERRUPTS_EECR_EERIE = 1; 
static const int INTERRUPTS_SPCR_SPIE = 2; 
static const int INTERRUPTS_ACSR_ACIE = 3; 
static const int INTERRUPTS_SPMCSR_SPMIE = 4; 
static const int INTERRUPTS_SREG_I = 5; 
static const int INTERRUPTS_TIMSK0_TOIE0 = 6; 
static const int INTERRUPTS_TIMSK0_OCIE0A = 7; 
static const int INTERRUPTS_TIMSK1_TOIE1 = 8; 
static const int INTERRUPTS_TIMSK1_OCIE1A = 9; 
static const int INTERRUPTS_TIMSK1_OCIE1B = 10; 
static const int INTERRUPTS_TIMSK1_ICIE1 = 11; 
static const int INTERRUPTS_TIMSK2_TOIE2 = 12; 
static const int INTERRUPTS_TIMSK2_OCIE2A = 13; 
static const int INTERRUPTS_ADCSRA_ADIE = 14; 
static const int INTERRUPTS_USICR_USIOIE = 15; 
static const int INTERRUPTS_USICR_USISIE = 16; 
static const int INTERRUPTS_UCSR0B_UDRIE0 = 17; 
static const int INTERRUPTS_UCSR0B_TXCIE0 = 18; 
static const int INTERRUPTS_UCSR0B_RXCIE0 = 19; 
static const int INTERRUPTS_LCDCRA_LCDIE = 20;
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_EIMSK_PCIE_REGISTER (0x3D)
#define INTERRUPT_EECR_EERIE_REGISTER (0x3F)
#define INTERRUPT_SPCR_SPIE_REGISTER (0x4C)
#define INTERRUPT_ACSR_ACIE_REGISTER (0x50)
#define INTERRUPT_SPMCSR_SPMIE_REGISTER (0x57)
#define INTERRUPT_SREG_I_REGISTER (0x5F)
#define INTERRUPT_TIMSK0_TOIE0_REGISTER (0x6E)
#define INTERRUPT_TIMSK0_OCIE0A_REGISTER (0x6E)
#define INTERRUPT_TIMSK1_TOIE1_REGISTER (0x6F)
#define INTERRUPT_TIMSK1_OCIE1A_REGISTER (0x6F)
#define INTERRUPT_TIMSK1_OCIE1B_REGISTER (0x6F)
#define INTERRUPT_TIMSK1_ICIE1_REGISTER (0x6F)
#define INTERRUPT_TIMSK2_TOIE2_REGISTER (0x70)
#define INTERRUPT_TIMSK2_OCIE2A_REGISTER (0x70)
#define INTERRUPT_ADCSRA_ADIE_REGISTER (0x7A)
#define INTERRUPT_USICR_USIOIE_REGISTER (0xB8)
#define INTERRUPT_USICR_USISIE_REGISTER (0xB8)
#define INTERRUPT_UCSR0B_UDRIE0_REGISTER (0xC1)
#define INTERRUPT_UCSR0B_TXCIE0_REGISTER (0xC1)
#define INTERRUPT_UCSR0B_RXCIE0_REGISTER (0xC1)
#define INTERRUPT_LCDCRA_LCDIE_REGISTER (0xE4)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_EIMSK_PCIE_BIT (4)
#define INTERRUPT_EECR_EERIE_BIT (3)
#define INTERRUPT_SPCR_SPIE_BIT (7)
#define INTERRUPT_ACSR_ACIE_BIT (3)
#define INTERRUPT_SPMCSR_SPMIE_BIT (6)
#define INTERRUPT_SREG_I_BIT (7)
#define INTERRUPT_TIMSK0_TOIE0_BIT (0)
#define INTERRUPT_TIMSK0_OCIE0A_BIT (1)
#define INTERRUPT_TIMSK1_TOIE1_BIT (0)
#define INTERRUPT_TIMSK1_OCIE1A_BIT (1)
#define INTERRUPT_TIMSK1_OCIE1B_BIT (2)
#define INTERRUPT_TIMSK1_ICIE1_BIT (3)
#define INTERRUPT_TIMSK2_TOIE2_BIT (0)
#define INTERRUPT_TIMSK2_OCIE2A_BIT (1)
#define INTERRUPT_ADCSRA_ADIE_BIT (3)
#define INTERRUPT_USICR_USIOIE_BIT (6)
#define INTERRUPT_USICR_USISIE_BIT (7)
#define INTERRUPT_UCSR0B_UDRIE0_BIT (5)
#define INTERRUPT_UCSR0B_TXCIE0_BIT (6)
#define INTERRUPT_UCSR0B_RXCIE0_BIT (7)
#define INTERRUPT_LCDCRA_LCDIE_BIT (1)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
