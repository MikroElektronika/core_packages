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
* @brief at90s8515 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_GIMSK_INT0 = 0;
static const int INTERRUPTS_GIMSK_INT1 = 1;
static const int INTERRUPTS_GIFR_INTF0 = 2;
static const int INTERRUPTS_GIFR_INTF1 = 3;
static const int INTERRUPTS_TIMSK_TOIE0 = 4;
static const int INTERRUPTS_TIMSK_TICIE1 = 5;
static const int INTERRUPTS_TIMSK_OCIE1B = 6;
static const int INTERRUPTS_TIMSK_OCIE1A = 7;
static const int INTERRUPTS_TIMSK_TOIE1 = 8;
static const int INTERRUPTS_TIFR_TOV0 = 9;
static const int INTERRUPTS_TIFR_ICF1 = 10;
static const int INTERRUPTS_TIFR_OCIFB = 11;
static const int INTERRUPTS_TIFR_OCF1A = 12;
static const int INTERRUPTS_TIFR_TOV1 = 13;
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_GIMSK_INT0_REGISTER (0x5B)
#define INTERRUPT_GIMSK_INT1_REGISTER (0x5B)
#define INTERRUPT_GIFR_INTF0_REGISTER (0x5A)
#define INTERRUPT_GIFR_INTF1_REGISTER (0x5A)
#define INTERRUPT_TIMSK_TOIE0_REGISTER (0x59)
#define INTERRUPT_TIMSK_TICIE1_REGISTER (0x59)
#define INTERRUPT_TIMSK_OCIE1B_REGISTER (0x59)
#define INTERRUPT_TIMSK_OCIE1A_REGISTER (0x59)
#define INTERRUPT_TIMSK_TOIE1_REGISTER (0x59)
#define INTERRUPT_TIFR_TOV0_REGISTER (0x58)
#define INTERRUPT_TIFR_ICF1_REGISTER (0x58)
#define INTERRUPT_TIFR_OCIFB_REGISTER (0x58)
#define INTERRUPT_TIFR_OCF1A_REGISTER (0x58)
#define INTERRUPT_TIFR_TOV1_REGISTER (0x58)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_GIMSK_INT0_BIT (6)
#define INTERRUPT_GIMSK_INT1_BIT (7)
#define INTERRUPT_GIFR_INTF0_BIT (6)
#define INTERRUPT_GIFR_INTF1_BIT (7)
#define INTERRUPT_TIMSK_TOIE0_BIT (1)
#define INTERRUPT_TIMSK_TICIE1_BIT (3)
#define INTERRUPT_TIMSK_OCIE1B_BIT (5)
#define INTERRUPT_TIMSK_OCIE1A_BIT (6)
#define INTERRUPT_TIMSK_TOIE1_BIT (7)
#define INTERRUPT_TIFR_TOV0_BIT (1)
#define INTERRUPT_TIFR_ICF1_BIT (3)
#define INTERRUPT_TIFR_OCIFB_BIT (5)
#define INTERRUPT_TIFR_OCF1A_BIT (6)
#define INTERRUPT_TIFR_TOV1_BIT (7)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
