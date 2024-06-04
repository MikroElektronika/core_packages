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
* @brief attiny102 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_UCSRD_RXSIE = 0; 
static const int INTERRUPTS_UCSRB_UDRIE = 1; 
static const int INTERRUPTS_UCSRB_TXCIE = 2; 
static const int INTERRUPTS_UCSRB_RXCIE = 3; 
static const int INTERRUPTS_PCICR_PCIE0 = 4; 
static const int INTERRUPTS_PCICR_PCIE1 = 5; 
static const int INTERRUPTS_ADCSRA_ADIE = 6; 
static const int INTERRUPTS_ACSRA_ACIE = 7; 
static const int INTERRUPTS_TIMSK0_TOIE0 = 8; 
static const int INTERRUPTS_TIMSK0_OCIE0A = 9; 
static const int INTERRUPTS_TIMSK0_OCIE0B = 10; 
static const int INTERRUPTS_TIMSK0_ICIE0 = 11; 
static const int INTERRUPTS_WDTCSR_WDIE = 12; 
static const int INTERRUPTS_VLMCSR_VLMIE = 13; 
static const int INTERRUPTS_SREG_I = 14;
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_UCSRD_RXSIE_REGISTER (0xB)
#define INTERRUPT_UCSRB_UDRIE_REGISTER (0xD)
#define INTERRUPT_UCSRB_TXCIE_REGISTER (0xD)
#define INTERRUPT_UCSRB_RXCIE_REGISTER (0xD)
#define INTERRUPT_PCICR_PCIE0_REGISTER (0x12)
#define INTERRUPT_PCICR_PCIE1_REGISTER (0x12)
#define INTERRUPT_ADCSRA_ADIE_REGISTER (0x1D)
#define INTERRUPT_ACSRA_ACIE_REGISTER (0x1F)
#define INTERRUPT_TIMSK0_TOIE0_REGISTER (0x2B)
#define INTERRUPT_TIMSK0_OCIE0A_REGISTER (0x2B)
#define INTERRUPT_TIMSK0_OCIE0B_REGISTER (0x2B)
#define INTERRUPT_TIMSK0_ICIE0_REGISTER (0x2B)
#define INTERRUPT_WDTCSR_WDIE_REGISTER (0x31)
#define INTERRUPT_VLMCSR_VLMIE_REGISTER (0x34)
#define INTERRUPT_SREG_I_REGISTER (0x3F)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_UCSRD_RXSIE_BIT (2)
#define INTERRUPT_UCSRB_UDRIE_BIT (5)
#define INTERRUPT_UCSRB_TXCIE_BIT (6)
#define INTERRUPT_UCSRB_RXCIE_BIT (7)
#define INTERRUPT_PCICR_PCIE0_BIT (0)
#define INTERRUPT_PCICR_PCIE1_BIT (1)
#define INTERRUPT_ADCSRA_ADIE_BIT (3)
#define INTERRUPT_ACSRA_ACIE_BIT (3)
#define INTERRUPT_TIMSK0_TOIE0_BIT (0)
#define INTERRUPT_TIMSK0_OCIE0A_BIT (1)
#define INTERRUPT_TIMSK0_OCIE0B_BIT (2)
#define INTERRUPT_TIMSK0_ICIE0_BIT (3)
#define INTERRUPT_WDTCSR_WDIE_BIT (7)
#define INTERRUPT_VLMCSR_VLMIE_BIT (3)
#define INTERRUPT_SREG_I_BIT (7)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
