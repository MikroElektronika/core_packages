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
* @brief attiny841 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_ADCSRA_ADIE = 0; 
static const int INTERRUPTS_ACSR0A_ACIE0 = 1; 
static const int INTERRUPTS_ACSR1A_ACIE1 = 2; 
static const int INTERRUPTS_TIMSK1_TOIE1 = 3; 
static const int INTERRUPTS_TIMSK1_OCIE1A = 4; 
static const int INTERRUPTS_TIMSK1_OCIE1B = 5; 
static const int INTERRUPTS_TIMSK1_ICIE1 = 6; 
static const int INTERRUPTS_TIMSK2_TOIE2 = 7; 
static const int INTERRUPTS_TIMSK2_OCIE2A = 8; 
static const int INTERRUPTS_TIMSK2_OCIE2B = 9; 
static const int INTERRUPTS_TIMSK2_ICIE2 = 10; 
static const int INTERRUPTS_EECR_EERIE = 11; 
static const int INTERRUPTS_WDTCSR_WDIE = 12; 
static const int INTERRUPTS_TIMSK0_TOIE0 = 13; 
static const int INTERRUPTS_TIMSK0_OCIE0A = 14; 
static const int INTERRUPTS_TIMSK0_OCIE0B = 15; 
static const int INTERRUPTS_GIMSK_PCIE = 16; 
static const int INTERRUPTS_SREG_I = 17; 
static const int INTERRUPTS_UCSR0D_RXSIE0 = 18; 
static const int INTERRUPTS_UCSR0B_UDRIE0 = 19; 
static const int INTERRUPTS_UCSR0B_TXCIE0 = 20; 
static const int INTERRUPTS_UCSR0B_RXCIE0 = 21; 
static const int INTERRUPTS_UCSR1D_RXSIE1 = 22; 
static const int INTERRUPTS_UCSR1B_UDRIE1 = 23; 
static const int INTERRUPTS_UCSR1B_TXCIE1 = 24; 
static const int INTERRUPTS_UCSR1B_RXCIE1 = 25; 
static const int INTERRUPTS_TWSCRA_TWSIE = 26; 
static const int INTERRUPTS_TWSCRA_TWASIE = 27; 
static const int INTERRUPTS_TWSCRA_TWDIE = 28; 
static const int INTERRUPTS_SPCR_SPIE = 29;
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_ADCSRA_ADIE_REGISTER (0x25)
#define INTERRUPT_ACSR0A_ACIE0_REGISTER (0x2A)
#define INTERRUPT_ACSR1A_ACIE1_REGISTER (0x2C)
#define INTERRUPT_TIMSK1_TOIE1_REGISTER (0x2F)
#define INTERRUPT_TIMSK1_OCIE1A_REGISTER (0x2F)
#define INTERRUPT_TIMSK1_OCIE1B_REGISTER (0x2F)
#define INTERRUPT_TIMSK1_ICIE1_REGISTER (0x2F)
#define INTERRUPT_TIMSK2_TOIE2_REGISTER (0x31)
#define INTERRUPT_TIMSK2_OCIE2A_REGISTER (0x31)
#define INTERRUPT_TIMSK2_OCIE2B_REGISTER (0x31)
#define INTERRUPT_TIMSK2_ICIE2_REGISTER (0x31)
#define INTERRUPT_EECR_EERIE_REGISTER (0x3C)
#define INTERRUPT_WDTCSR_WDIE_REGISTER (0x41)
#define INTERRUPT_TIMSK0_TOIE0_REGISTER (0x59)
#define INTERRUPT_TIMSK0_OCIE0A_REGISTER (0x59)
#define INTERRUPT_TIMSK0_OCIE0B_REGISTER (0x59)
#define INTERRUPT_GIMSK_PCIE_REGISTER (0x5B)
#define INTERRUPT_SREG_I_REGISTER (0x5F)
#define INTERRUPT_UCSR0D_RXSIE0_REGISTER (0x83)
#define INTERRUPT_UCSR0B_UDRIE0_REGISTER (0x85)
#define INTERRUPT_UCSR0B_TXCIE0_REGISTER (0x85)
#define INTERRUPT_UCSR0B_RXCIE0_REGISTER (0x85)
#define INTERRUPT_UCSR1D_RXSIE1_REGISTER (0x93)
#define INTERRUPT_UCSR1B_UDRIE1_REGISTER (0x95)
#define INTERRUPT_UCSR1B_TXCIE1_REGISTER (0x95)
#define INTERRUPT_UCSR1B_RXCIE1_REGISTER (0x95)
#define INTERRUPT_TWSCRA_TWSIE_REGISTER (0xA5)
#define INTERRUPT_TWSCRA_TWASIE_REGISTER (0xA5)
#define INTERRUPT_TWSCRA_TWDIE_REGISTER (0xA5)
#define INTERRUPT_SPCR_SPIE_REGISTER (0xB2)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_ADCSRA_ADIE_BIT (3)
#define INTERRUPT_ACSR0A_ACIE0_BIT (3)
#define INTERRUPT_ACSR1A_ACIE1_BIT (3)
#define INTERRUPT_TIMSK1_TOIE1_BIT (0)
#define INTERRUPT_TIMSK1_OCIE1A_BIT (1)
#define INTERRUPT_TIMSK1_OCIE1B_BIT (2)
#define INTERRUPT_TIMSK1_ICIE1_BIT (3)
#define INTERRUPT_TIMSK2_TOIE2_BIT (0)
#define INTERRUPT_TIMSK2_OCIE2A_BIT (1)
#define INTERRUPT_TIMSK2_OCIE2B_BIT (2)
#define INTERRUPT_TIMSK2_ICIE2_BIT (3)
#define INTERRUPT_EECR_EERIE_BIT (3)
#define INTERRUPT_WDTCSR_WDIE_BIT (7)
#define INTERRUPT_TIMSK0_TOIE0_BIT (0)
#define INTERRUPT_TIMSK0_OCIE0A_BIT (1)
#define INTERRUPT_TIMSK0_OCIE0B_BIT (2)
#define INTERRUPT_GIMSK_PCIE_BIT (1)
#define INTERRUPT_SREG_I_BIT (7)
#define INTERRUPT_UCSR0D_RXSIE0_BIT (2)
#define INTERRUPT_UCSR0B_UDRIE0_BIT (5)
#define INTERRUPT_UCSR0B_TXCIE0_BIT (6)
#define INTERRUPT_UCSR0B_RXCIE0_BIT (7)
#define INTERRUPT_UCSR1D_RXSIE1_BIT (2)
#define INTERRUPT_UCSR1B_UDRIE1_BIT (5)
#define INTERRUPT_UCSR1B_TXCIE1_BIT (6)
#define INTERRUPT_UCSR1B_RXCIE1_BIT (7)
#define INTERRUPT_TWSCRA_TWSIE_BIT (2)
#define INTERRUPT_TWSCRA_TWASIE_BIT (4)
#define INTERRUPT_TWSCRA_TWDIE_BIT (5)
#define INTERRUPT_SPCR_SPIE_BIT (7)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
