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
* @brief atmega103 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_EIMSK_INT0 = 0;
static const int INTERRUPTS_EIMSK_INT1 = 1;
static const int INTERRUPTS_EIMSK_INT2 = 2;
static const int INTERRUPTS_EIMSK_INT3 = 3;
static const int INTERRUPTS_EIMSK_INT4 = 4;
static const int INTERRUPTS_EIMSK_INT5 = 5;
static const int INTERRUPTS_EIMSK_INT6 = 6;
static const int INTERRUPTS_EIMSK_INT7 = 7;
static const int INTERRUPTS_EIFR_INTF4 = 8;
static const int INTERRUPTS_EIFR_INTF5 = 9;
static const int INTERRUPTS_EIFR_INTF6 = 10;
static const int INTERRUPTS_EIFR_INTF7 = 11;
static const int INTERRUPTS_TIMSK_TOIE0 = 12;
static const int INTERRUPTS_TIMSK_OCIE0  = 13;
static const int INTERRUPTS_TIMSK_TOIE1 = 14;
static const int INTERRUPTS_TIMSK_OCIE1B = 15;
static const int INTERRUPTS_TIMSK_OCIE1A = 16;
static const int INTERRUPTS_TIMSK_TICIE1 = 17;
static const int INTERRUPTS_TIMSK_TOIE2 = 18;
static const int INTERRUPTS_TIMSK_OCIE2 = 19;
static const int INTERRUPTS_TIFR_TOV0 = 20;
static const int INTERRUPTS_TIFR_OCF0 = 21;
static const int INTERRUPTS_TIFR_TOV1 = 22;
static const int INTERRUPTS_TIFR_OCF1B = 23;
static const int INTERRUPTS_TIFR_OCF1A = 24;
static const int INTERRUPTS_TIFR_ICF1 = 25;
static const int INTERRUPTS_TIFR_TOV2 = 26;
static const int INTERRUPTS_TIFR_OCF2  = 27;
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_EIMSK_INT0_REGISTER (0x59)
#define INTERRUPT_EIMSK_INT1_REGISTER (0x59)
#define INTERRUPT_EIMSK_INT2_REGISTER (0x59)
#define INTERRUPT_EIMSK_INT3_REGISTER (0x59)
#define INTERRUPT_EIMSK_INT4_REGISTER (0x59)
#define INTERRUPT_EIMSK_INT5_REGISTER (0x59)
#define INTERRUPT_EIMSK_INT6_REGISTER (0x59)
#define INTERRUPT_EIMSK_INT7_REGISTER (0x59)
#define INTERRUPT_EIFR_INTF4_REGISTER (0x58)
#define INTERRUPT_EIFR_INTF5_REGISTER (0x58)
#define INTERRUPT_EIFR_INTF6_REGISTER (0x58)
#define INTERRUPT_EIFR_INTF7_REGISTER (0x58)
#define INTERRUPT_TIMSK_TOIE0_REGISTER (0x57)
#define INTERRUPT_TIMSK_OCIE0_REGISTER (0x57)
#define INTERRUPT_TIMSK_TOIE1_REGISTER (0x57)
#define INTERRUPT_TIMSK_OCIE1B_REGISTER (0x57)
#define INTERRUPT_TIMSK_OCIE1A_REGISTER (0x57)
#define INTERRUPT_TIMSK_TICIE1_REGISTER (0x57)
#define INTERRUPT_TIMSK_TOIE2_REGISTER (0x57)
#define INTERRUPT_TIMSK_OCIE2_REGISTER (0x57)
#define INTERRUPT_TIFR_TOV0_REGISTER (0x56)
#define INTERRUPT_TIFR_OCF0_REGISTER (0x56)
#define INTERRUPT_TIFR_TOV1_REGISTER (0x56)
#define INTERRUPT_TIFR_OCF1B_REGISTER (0x56)
#define INTERRUPT_TIFR_OCF1A_REGISTER (0x56)
#define INTERRUPT_TIFR_ICF1_REGISTER (0x56)
#define INTERRUPT_TIFR_TOV2_REGISTER (0x56)
#define INTERRUPT_TIFR_OCF2_REGISTER (0x56)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_EIMSK_INT0_BIT (0)
#define INTERRUPT_EIMSK_INT1_BIT (1)
#define INTERRUPT_EIMSK_INT2_BIT (2)
#define INTERRUPT_EIMSK_INT3_BIT (3)
#define INTERRUPT_EIMSK_INT4_BIT (4)
#define INTERRUPT_EIMSK_INT5_BIT (5)
#define INTERRUPT_EIMSK_INT6_BIT (6)
#define INTERRUPT_EIMSK_INT7_BIT (7)
#define INTERRUPT_EIFR_INTF4_BIT (4)
#define INTERRUPT_EIFR_INTF5_BIT (5)
#define INTERRUPT_EIFR_INTF6_BIT (6)
#define INTERRUPT_EIFR_INTF7_BIT (7)
#define INTERRUPT_TIMSK_TOIE0_BIT (0)
#define INTERRUPT_TIMSK_OCIE0_BIT (1)
#define INTERRUPT_TIMSK_TOIE1_BIT (2)
#define INTERRUPT_TIMSK_OCIE1B_BIT (3)
#define INTERRUPT_TIMSK_OCIE1A_BIT (4)
#define INTERRUPT_TIMSK_TICIE1_BIT (5)
#define INTERRUPT_TIMSK_TOIE2_BIT (6)
#define INTERRUPT_TIMSK_OCIE2_BIT (7)
#define INTERRUPT_TIFR_TOV0_BIT (0)
#define INTERRUPT_TIFR_OCF0_BIT (1)
#define INTERRUPT_TIFR_TOV1_BIT (2)
#define INTERRUPT_TIFR_OCF1B_BIT (3)
#define INTERRUPT_TIFR_OCF1A_BIT (4)
#define INTERRUPT_TIFR_ICF1_BIT (5)
#define INTERRUPT_TIFR_TOV2_BIT (6)
#define INTERRUPT_TIFR_OCF2_BIT (7)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
