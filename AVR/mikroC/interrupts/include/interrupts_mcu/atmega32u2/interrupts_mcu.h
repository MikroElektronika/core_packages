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
* @brief atmega32u2 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_EECR_EERIE = 0; 
static const int INTERRUPTS_SPCR_SPIE = 1; 
static const int INTERRUPTS_ACSR_ACIE = 2; 
static const int INTERRUPTS_SPMCSR_SPMIE = 3; 
static const int INTERRUPTS_SREG_I = 4; 
static const int INTERRUPTS_WDTCSR_WDIE = 5; 
static const int INTERRUPTS_WDTCKD_WDEWIE = 6; 
static const int INTERRUPTS_PCICR_PCIE = 7; 
static const int INTERRUPTS_TIMSK0_TOIE0 = 8; 
static const int INTERRUPTS_TIMSK0_OCIE0A = 9; 
static const int INTERRUPTS_TIMSK0_OCIE0B = 10; 
static const int INTERRUPTS_TIMSK1_TOIE1 = 11; 
static const int INTERRUPTS_TIMSK1_OCIE1A = 12; 
static const int INTERRUPTS_TIMSK1_OCIE1B = 13; 
static const int INTERRUPTS_TIMSK1_OCIE1C = 14; 
static const int INTERRUPTS_TIMSK1_ICIE1 = 15; 
static const int INTERRUPTS_UCSR1B_UDRIE1 = 16; 
static const int INTERRUPTS_UCSR1B_TXCIE1 = 17; 
static const int INTERRUPTS_UCSR1B_RXCIE1 = 18; 
static const int INTERRUPTS_UDIEN_SUSPE = 19; 
static const int INTERRUPTS_UDIEN_SOFE = 20; 
static const int INTERRUPTS_UDIEN_EORSTE = 21; 
static const int INTERRUPTS_UDIEN_WAKEUPE = 22; 
static const int INTERRUPTS_UDIEN_EORSME = 23; 
static const int INTERRUPTS_UDIEN_UPRSME = 24; 
static const int INTERRUPTS_UEIENX_TXINE = 25; 
static const int INTERRUPTS_UEIENX_STALLEDE = 26; 
static const int INTERRUPTS_UEIENX_RXOUTE = 27; 
static const int INTERRUPTS_UEIENX_RXSTPE = 28; 
static const int INTERRUPTS_UEIENX_NAKOUTE = 29; 
static const int INTERRUPTS_UEIENX_NAKINE = 30; 
static const int INTERRUPTS_UEIENX_FLERRE = 31;
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_EECR_EERIE_REGISTER (0x3F)
#define INTERRUPT_SPCR_SPIE_REGISTER (0x4C)
#define INTERRUPT_ACSR_ACIE_REGISTER (0x50)
#define INTERRUPT_SPMCSR_SPMIE_REGISTER (0x57)
#define INTERRUPT_SREG_I_REGISTER (0x5F)
#define INTERRUPT_WDTCSR_WDIE_REGISTER (0x60)
#define INTERRUPT_WDTCKD_WDEWIE_REGISTER (0x62)
#define INTERRUPT_PCICR_PCIE_REGISTER (0x68)
#define INTERRUPT_TIMSK0_TOIE0_REGISTER (0x6E)
#define INTERRUPT_TIMSK0_OCIE0A_REGISTER (0x6E)
#define INTERRUPT_TIMSK0_OCIE0B_REGISTER (0x6E)
#define INTERRUPT_TIMSK1_TOIE1_REGISTER (0x6F)
#define INTERRUPT_TIMSK1_OCIE1A_REGISTER (0x6F)
#define INTERRUPT_TIMSK1_OCIE1B_REGISTER (0x6F)
#define INTERRUPT_TIMSK1_OCIE1C_REGISTER (0x6F)
#define INTERRUPT_TIMSK1_ICIE1_REGISTER (0x6F)
#define INTERRUPT_UCSR1B_UDRIE1_REGISTER (0xC9)
#define INTERRUPT_UCSR1B_TXCIE1_REGISTER (0xC9)
#define INTERRUPT_UCSR1B_RXCIE1_REGISTER (0xC9)
#define INTERRUPT_UDIEN_SUSPE_REGISTER (0xE2)
#define INTERRUPT_UDIEN_SOFE_REGISTER (0xE2)
#define INTERRUPT_UDIEN_EORSTE_REGISTER (0xE2)
#define INTERRUPT_UDIEN_WAKEUPE_REGISTER (0xE2)
#define INTERRUPT_UDIEN_EORSME_REGISTER (0xE2)
#define INTERRUPT_UDIEN_UPRSME_REGISTER (0xE2)
#define INTERRUPT_UEIENX_TXINE_REGISTER (0xF0)
#define INTERRUPT_UEIENX_STALLEDE_REGISTER (0xF0)
#define INTERRUPT_UEIENX_RXOUTE_REGISTER (0xF0)
#define INTERRUPT_UEIENX_RXSTPE_REGISTER (0xF0)
#define INTERRUPT_UEIENX_NAKOUTE_REGISTER (0xF0)
#define INTERRUPT_UEIENX_NAKINE_REGISTER (0xF0)
#define INTERRUPT_UEIENX_FLERRE_REGISTER (0xF0)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_EECR_EERIE_BIT (3)
#define INTERRUPT_SPCR_SPIE_BIT (7)
#define INTERRUPT_ACSR_ACIE_BIT (3)
#define INTERRUPT_SPMCSR_SPMIE_BIT (7)
#define INTERRUPT_SREG_I_BIT (7)
#define INTERRUPT_WDTCSR_WDIE_BIT (8)
#define INTERRUPT_WDTCKD_WDEWIE_BIT (2)
#define INTERRUPT_PCICR_PCIE_BIT (1)
#define INTERRUPT_TIMSK0_TOIE0_BIT (0)
#define INTERRUPT_TIMSK0_OCIE0A_BIT (1)
#define INTERRUPT_TIMSK0_OCIE0B_BIT (2)
#define INTERRUPT_TIMSK1_TOIE1_BIT (0)
#define INTERRUPT_TIMSK1_OCIE1A_BIT (1)
#define INTERRUPT_TIMSK1_OCIE1B_BIT (2)
#define INTERRUPT_TIMSK1_OCIE1C_BIT (3)
#define INTERRUPT_TIMSK1_ICIE1_BIT (4)
#define INTERRUPT_UCSR1B_UDRIE1_BIT (5)
#define INTERRUPT_UCSR1B_TXCIE1_BIT (6)
#define INTERRUPT_UCSR1B_RXCIE1_BIT (7)
#define INTERRUPT_UDIEN_SUSPE_BIT (0)
#define INTERRUPT_UDIEN_SOFE_BIT (1)
#define INTERRUPT_UDIEN_EORSTE_BIT (2)
#define INTERRUPT_UDIEN_WAKEUPE_BIT (3)
#define INTERRUPT_UDIEN_EORSME_BIT (4)
#define INTERRUPT_UDIEN_UPRSME_BIT (5)
#define INTERRUPT_UEIENX_TXINE_BIT (0)
#define INTERRUPT_UEIENX_STALLEDE_BIT (1)
#define INTERRUPT_UEIENX_RXOUTE_BIT (2)
#define INTERRUPT_UEIENX_RXSTPE_BIT (3)
#define INTERRUPT_UEIENX_NAKOUTE_BIT (4)
#define INTERRUPT_UEIENX_NAKINE_BIT (5)
#define INTERRUPT_UEIENX_FLERRE_BIT (6)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
