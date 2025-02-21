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
* @brief at90pwm3 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_EECR_EERIE = 0;
static const int INTERRUPTS_SPCR_SPIE = 1;
static const int INTERRUPTS_SPMCSR_SPMIE = 2;
static const int INTERRUPTS_SREG_I = 3;
static const int INTERRUPTS_WDTCSR_WDIE = 4;
static const int INTERRUPTS_TIMSK0_TOIE0 = 5;
static const int INTERRUPTS_TIMSK0_OCIE0A = 6;
static const int INTERRUPTS_TIMSK0_OCIE0B = 7;
static const int INTERRUPTS_TIMSK1_TOIE1 = 8;
static const int INTERRUPTS_TIMSK1_OCIE1A = 9;
static const int INTERRUPTS_TIMSK1_OCIE1B = 10;
static const int INTERRUPTS_TIMSK1_ICIE1 = 11;
static const int INTERRUPTS_ADCSRA_ADIE = 12;
static const int INTERRUPTS_PIM0_PEOPE0 = 13;
static const int INTERRUPTS_PIM0_PEVE0A = 14;
static const int INTERRUPTS_PIM0_PEVE0B = 15;
static const int INTERRUPTS_PIM0_PSEIE0 = 16;
static const int INTERRUPTS_PIM1_PEOPE1 = 17;
static const int INTERRUPTS_PIM1_PEVE1A = 18;
static const int INTERRUPTS_PIM1_PEVE1B = 19;
static const int INTERRUPTS_PIM1_PSEIE1 = 20;
static const int INTERRUPTS_PIM2_PEOPE2 = 21;
static const int INTERRUPTS_PIM2_PEVE2A = 22;
static const int INTERRUPTS_PIM2_PEVE2B = 23;
static const int INTERRUPTS_PIM2_PSEIE2 = 24;
static const int INTERRUPTS_AC0CON_AC0IE = 25;
static const int INTERRUPTS_AC1CON_AC1IE = 26;
static const int INTERRUPTS_AC2CON_AC2IE = 27;
static const int INTERRUPTS_UCSRB_UDRIE = 28;
static const int INTERRUPTS_UCSRB_TXCIE = 29;
static const int INTERRUPTS_UCSRB_RXCIE = 30;
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_EECR_EERIE_REGISTER (0x3F)
#define INTERRUPT_SPCR_SPIE_REGISTER (0x4C)
#define INTERRUPT_SPMCSR_SPMIE_REGISTER (0x57)
#define INTERRUPT_SREG_I_REGISTER (0x5F)
#define INTERRUPT_WDTCSR_WDIE_REGISTER (0x60)
#define INTERRUPT_TIMSK0_TOIE0_REGISTER (0x6E)
#define INTERRUPT_TIMSK0_OCIE0A_REGISTER (0x6E)
#define INTERRUPT_TIMSK0_OCIE0B_REGISTER (0x6E)
#define INTERRUPT_TIMSK1_TOIE1_REGISTER (0x6F)
#define INTERRUPT_TIMSK1_OCIE1A_REGISTER (0x6F)
#define INTERRUPT_TIMSK1_OCIE1B_REGISTER (0x6F)
#define INTERRUPT_TIMSK1_ICIE1_REGISTER (0x6F)
#define INTERRUPT_ADCSRA_ADIE_REGISTER (0x7A)
#define INTERRUPT_PIM0_PEOPE0_REGISTER (0xA1)
#define INTERRUPT_PIM0_PEVE0A_REGISTER (0xA1)
#define INTERRUPT_PIM0_PEVE0B_REGISTER (0xA1)
#define INTERRUPT_PIM0_PSEIE0_REGISTER (0xA1)
#define INTERRUPT_PIM1_PEOPE1_REGISTER (0xA3)
#define INTERRUPT_PIM1_PEVE1A_REGISTER (0xA3)
#define INTERRUPT_PIM1_PEVE1B_REGISTER (0xA3)
#define INTERRUPT_PIM1_PSEIE1_REGISTER (0xA3)
#define INTERRUPT_PIM2_PEOPE2_REGISTER (0xA5)
#define INTERRUPT_PIM2_PEVE2A_REGISTER (0xA5)
#define INTERRUPT_PIM2_PEVE2B_REGISTER (0xA5)
#define INTERRUPT_PIM2_PSEIE2_REGISTER (0xA5)
#define INTERRUPT_AC0CON_AC0IE_REGISTER (0xAD)
#define INTERRUPT_AC1CON_AC1IE_REGISTER (0xAE)
#define INTERRUPT_AC2CON_AC2IE_REGISTER (0xAF)
#define INTERRUPT_UCSRB_UDRIE_REGISTER (0xC1)
#define INTERRUPT_UCSRB_TXCIE_REGISTER (0xC1)
#define INTERRUPT_UCSRB_RXCIE_REGISTER (0xC1)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_EECR_EERIE_BIT (3)
#define INTERRUPT_SPCR_SPIE_BIT (7)
#define INTERRUPT_SPMCSR_SPMIE_BIT (6)
#define INTERRUPT_SREG_I_BIT (7)
#define INTERRUPT_WDTCSR_WDIE_BIT (8)
#define INTERRUPT_TIMSK0_TOIE0_BIT (0)
#define INTERRUPT_TIMSK0_OCIE0A_BIT (1)
#define INTERRUPT_TIMSK0_OCIE0B_BIT (2)
#define INTERRUPT_TIMSK1_TOIE1_BIT (0)
#define INTERRUPT_TIMSK1_OCIE1A_BIT (1)
#define INTERRUPT_TIMSK1_OCIE1B_BIT (2)
#define INTERRUPT_TIMSK1_ICIE1_BIT (3)
#define INTERRUPT_ADCSRA_ADIE_BIT (3)
#define INTERRUPT_PIM0_PEOPE0_BIT (0)
#define INTERRUPT_PIM0_PEVE0A_BIT (1)
#define INTERRUPT_PIM0_PEVE0B_BIT (2)
#define INTERRUPT_PIM0_PSEIE0_BIT (3)
#define INTERRUPT_PIM1_PEOPE1_BIT (0)
#define INTERRUPT_PIM1_PEVE1A_BIT (1)
#define INTERRUPT_PIM1_PEVE1B_BIT (2)
#define INTERRUPT_PIM1_PSEIE1_BIT (3)
#define INTERRUPT_PIM2_PEOPE2_BIT (0)
#define INTERRUPT_PIM2_PEVE2A_BIT (1)
#define INTERRUPT_PIM2_PEVE2B_BIT (2)
#define INTERRUPT_PIM2_PSEIE2_BIT (3)
#define INTERRUPT_AC0CON_AC0IE_BIT (5)
#define INTERRUPT_AC1CON_AC1IE_BIT (6)
#define INTERRUPT_AC2CON_AC2IE_BIT (5)
#define INTERRUPT_UCSRB_UDRIE_BIT (5)
#define INTERRUPT_UCSRB_TXCIE_BIT (6)
#define INTERRUPT_UCSRB_RXCIE_BIT (7)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
