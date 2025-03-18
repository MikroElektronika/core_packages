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
* @brief atmega328pb MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_EECR_EERIE = 0; 
static const int INTERRUPTS_SPCR0_SPIE = 1; 
static const int INTERRUPTS_SPMCSR_SPMIE = 2; 
static const int INTERRUPTS_SREG_I = 3; 
static const int INTERRUPTS_WDTCSR_WDIE = 4; 
static const int INTERRUPTS_XFDCSR_XFDIE = 5; 
static const int INTERRUPTS_PCICR_PCIE = 6; 
static const int INTERRUPTS_TIMSK0_TOIE0 = 7; 
static const int INTERRUPTS_TIMSK0_OCIE0A = 8; 
static const int INTERRUPTS_TIMSK0_OCIE0B = 9; 
static const int INTERRUPTS_TIMSK1_TOIE1 = 10; 
static const int INTERRUPTS_TIMSK1_OCIE1A = 11; 
static const int INTERRUPTS_TIMSK1_OCIE1B = 12; 
static const int INTERRUPTS_TIMSK1_ICIE1 = 13; 
static const int INTERRUPTS_TIMSK2_TOIE2 = 14; 
static const int INTERRUPTS_TIMSK2_OCIE2A = 15; 
static const int INTERRUPTS_TIMSK2_OCIE2B = 16; 
static const int INTERRUPTS_TIMSK3_TOIE3 = 17; 
static const int INTERRUPTS_TIMSK3_OCIE3A = 18; 
static const int INTERRUPTS_TIMSK3_OCIE3B = 19; 
static const int INTERRUPTS_TIMSK3_ICIE3 = 20; 
static const int INTERRUPTS_TIMSK4_TOIE4 = 21; 
static const int INTERRUPTS_TIMSK4_OCIE4A = 22; 
static const int INTERRUPTS_TIMSK4_OCIE4B = 23; 
static const int INTERRUPTS_TIMSK4_ICIE4 = 24; 
static const int INTERRUPTS_ADCSRA_ADIE = 25; 
static const int INTERRUPTS_SPCR1_SPIE1 = 26; 
static const int INTERRUPTS_TWCR0_TWIE = 27; 
static const int INTERRUPTS_UCSR0B_UDRIE0 = 28; 
static const int INTERRUPTS_UCSR0B_TXCIE0 = 29; 
static const int INTERRUPTS_UCSR0B_RXCIE0 = 30; 
static const int INTERRUPTS_UCSR0D_RXSIE = 31; 
static const int INTERRUPTS_UCSR1B_UDRIE1 = 32; 
static const int INTERRUPTS_UCSR1B_TXCIE1 = 33; 
static const int INTERRUPTS_UCSR1B_RXCIE1 = 34; 
static const int INTERRUPTS_UCSR1D_RXSIE1 = 35; 
static const int INTERRUPTS_TWCR1_TWIE1 = 36; 
static const int INTERRUPTS_ACSR_ACIE = 37;
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_EECR_EERIE_REGISTER (0x3F)
#define INTERRUPT_SPCR0_SPIE_REGISTER (0x4C)
#define INTERRUPT_SPMCSR_SPMIE_REGISTER (0x57)
#define INTERRUPT_SREG_I_REGISTER (0x5F)
#define INTERRUPT_WDTCSR_WDIE_REGISTER (0x60)
#define INTERRUPT_XFDCSR_XFDIE_REGISTER (0x62)
#define INTERRUPT_PCICR_PCIE_REGISTER (0x68)
#define INTERRUPT_TIMSK0_TOIE0_REGISTER (0x6E)
#define INTERRUPT_TIMSK0_OCIE0A_REGISTER (0x6E)
#define INTERRUPT_TIMSK0_OCIE0B_REGISTER (0x6E)
#define INTERRUPT_TIMSK1_TOIE1_REGISTER (0x6F)
#define INTERRUPT_TIMSK1_OCIE1A_REGISTER (0x6F)
#define INTERRUPT_TIMSK1_OCIE1B_REGISTER (0x6F)
#define INTERRUPT_TIMSK1_ICIE1_REGISTER (0x6F)
#define INTERRUPT_TIMSK2_TOIE2_REGISTER (0x70)
#define INTERRUPT_TIMSK2_OCIE2A_REGISTER (0x70)
#define INTERRUPT_TIMSK2_OCIE2B_REGISTER (0x70)
#define INTERRUPT_TIMSK3_TOIE3_REGISTER (0x71)
#define INTERRUPT_TIMSK3_OCIE3A_REGISTER (0x71)
#define INTERRUPT_TIMSK3_OCIE3B_REGISTER (0x71)
#define INTERRUPT_TIMSK3_ICIE3_REGISTER (0x71)
#define INTERRUPT_TIMSK4_TOIE4_REGISTER (0x72)
#define INTERRUPT_TIMSK4_OCIE4A_REGISTER (0x72)
#define INTERRUPT_TIMSK4_OCIE4B_REGISTER (0x72)
#define INTERRUPT_TIMSK4_ICIE4_REGISTER (0x72)
#define INTERRUPT_ADCSRA_ADIE_REGISTER (0x7A)
#define INTERRUPT_SPCR1_SPIE1_REGISTER (0xAC)
#define INTERRUPT_TWCR0_TWIE_REGISTER (0xBC)
#define INTERRUPT_UCSR0B_UDRIE0_REGISTER (0xC1)
#define INTERRUPT_UCSR0B_TXCIE0_REGISTER (0xC1)
#define INTERRUPT_UCSR0B_RXCIE0_REGISTER (0xC1)
#define INTERRUPT_UCSR0D_RXSIE_REGISTER (0xC3)
#define INTERRUPT_UCSR1B_UDRIE1_REGISTER (0xC9)
#define INTERRUPT_UCSR1B_TXCIE1_REGISTER (0xC9)
#define INTERRUPT_UCSR1B_RXCIE1_REGISTER (0xC9)
#define INTERRUPT_UCSR1D_RXSIE1_REGISTER (0xCB)
#define INTERRUPT_TWCR1_TWIE1_REGISTER (0xDC)
#define INTERRUPT_ACSR_ACIE_REGISTER (0x50)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_EECR_EERIE_BIT (3)
#define INTERRUPT_SPCR0_SPIE_BIT (7)
#define INTERRUPT_SPMCSR_SPMIE_BIT (7)
#define INTERRUPT_SREG_I_BIT (7)
#define INTERRUPT_WDTCSR_WDIE_BIT (8)
#define INTERRUPT_XFDCSR_XFDIE_BIT (0)
#define INTERRUPT_PCICR_PCIE_BIT (3)
#define INTERRUPT_TIMSK0_TOIE0_BIT (0)
#define INTERRUPT_TIMSK0_OCIE0A_BIT (1)
#define INTERRUPT_TIMSK0_OCIE0B_BIT (2)
#define INTERRUPT_TIMSK1_TOIE1_BIT (0)
#define INTERRUPT_TIMSK1_OCIE1A_BIT (1)
#define INTERRUPT_TIMSK1_OCIE1B_BIT (2)
#define INTERRUPT_TIMSK1_ICIE1_BIT (3)
#define INTERRUPT_TIMSK2_TOIE2_BIT (0)
#define INTERRUPT_TIMSK2_OCIE2A_BIT (1)
#define INTERRUPT_TIMSK2_OCIE2B_BIT (2)
#define INTERRUPT_TIMSK3_TOIE3_BIT (0)
#define INTERRUPT_TIMSK3_OCIE3A_BIT (1)
#define INTERRUPT_TIMSK3_OCIE3B_BIT (2)
#define INTERRUPT_TIMSK3_ICIE3_BIT (3)
#define INTERRUPT_TIMSK4_TOIE4_BIT (0)
#define INTERRUPT_TIMSK4_OCIE4A_BIT (1)
#define INTERRUPT_TIMSK4_OCIE4B_BIT (2)
#define INTERRUPT_TIMSK4_ICIE4_BIT (3)
#define INTERRUPT_ADCSRA_ADIE_BIT (3)
#define INTERRUPT_SPCR1_SPIE1_BIT (7)
#define INTERRUPT_TWCR0_TWIE_BIT (0)
#define INTERRUPT_UCSR0B_UDRIE0_BIT (5)
#define INTERRUPT_UCSR0B_TXCIE0_BIT (6)
#define INTERRUPT_UCSR0B_RXCIE0_BIT (7)
#define INTERRUPT_UCSR0D_RXSIE_BIT (2)
#define INTERRUPT_UCSR1B_UDRIE1_BIT (5)
#define INTERRUPT_UCSR1B_TXCIE1_BIT (6)
#define INTERRUPT_UCSR1B_RXCIE1_BIT (7)
#define INTERRUPT_UCSR1D_RXSIE1_BIT (2)
#define INTERRUPT_TWCR1_TWIE1_BIT (0)
#define INTERRUPT_ACSR_ACIE_BIT (3)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
