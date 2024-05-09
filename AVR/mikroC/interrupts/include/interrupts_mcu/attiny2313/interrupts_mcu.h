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
* @brief attiny2313 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_ACSR_ACIE = 0; 
static const int INTERRUPTS_UCSRB_UDRIE = 1; 
static const int INTERRUPTS_UCSRB_TXCIE = 2; 
static const int INTERRUPTS_UCSRB_RXCIE = 3; 
static const int INTERRUPTS_USICR_USIOIE = 4; 
static const int INTERRUPTS_USICR_USISIE = 5; 
static const int INTERRUPTS_EECR_EERIE = 6; 
static const int INTERRUPTS_WDTCR_WDIE = 7; 
static const int INTERRUPTS_TIMSK_OCIE0A = 8; 
static const int INTERRUPTS_TIMSK_TOIE0 = 9; 
static const int INTERRUPTS_TIMSK_OCIE0B = 10; 
static const int INTERRUPTS_TIMSK_ICIE1 = 11; 
static const int INTERRUPTS_TIMSK_OCIE1B = 12; 
static const int INTERRUPTS_TIMSK_OCIE1A = 13; 
static const int INTERRUPTS_TIMSK_TOIE1 = 14; 
static const int INTERRUPTS_SREG_I = 15;
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_ACSR_ACIE_REGISTER (0x28)
#define INTERRUPT_UCSRB_UDRIE_REGISTER (0x2A)
#define INTERRUPT_UCSRB_TXCIE_REGISTER (0x2A)
#define INTERRUPT_UCSRB_RXCIE_REGISTER (0x2A)
#define INTERRUPT_USICR_USIOIE_REGISTER (0x2D)
#define INTERRUPT_USICR_USISIE_REGISTER (0x2D)
#define INTERRUPT_EECR_EERIE_REGISTER (0x3C)
#define INTERRUPT_WDTCR_WDIE_REGISTER (0x41)
#define INTERRUPT_TIMSK_OCIE0A_REGISTER (0x59)
#define INTERRUPT_TIMSK_TOIE0_REGISTER (0x59)
#define INTERRUPT_TIMSK_OCIE0B_REGISTER (0x59)
#define INTERRUPT_TIMSK_ICIE1_REGISTER (0x59)
#define INTERRUPT_TIMSK_OCIE1B_REGISTER (0x59)
#define INTERRUPT_TIMSK_OCIE1A_REGISTER (0x59)
#define INTERRUPT_TIMSK_TOIE1_REGISTER (0x59)
#define INTERRUPT_SREG_I_REGISTER (0x5F)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_ACSR_ACIE_BIT (3)
#define INTERRUPT_UCSRB_UDRIE_BIT (5)
#define INTERRUPT_UCSRB_TXCIE_BIT (6)
#define INTERRUPT_UCSRB_RXCIE_BIT (7)
#define INTERRUPT_USICR_USIOIE_BIT (6)
#define INTERRUPT_USICR_USISIE_BIT (7)
#define INTERRUPT_EECR_EERIE_BIT (3)
#define INTERRUPT_WDTCR_WDIE_BIT (8)
#define INTERRUPT_TIMSK_OCIE0A_BIT (0)
#define INTERRUPT_TIMSK_TOIE0_BIT (1)
#define INTERRUPT_TIMSK_OCIE0B_BIT (2)
#define INTERRUPT_TIMSK_ICIE1_BIT (3)
#define INTERRUPT_TIMSK_OCIE1B_BIT (4)
#define INTERRUPT_TIMSK_OCIE1A_BIT (5)
#define INTERRUPT_TIMSK_TOIE1_BIT (6)
#define INTERRUPT_SREG_I_BIT (7)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
