/****************************************************************************
**
** Copyright (C) 2025 MikroElektronika d.o.o.
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
* @brief TMPM332FWUG MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_INT0 = 16;
static const int INTERRUPTS_INT1 = 17;
static const int INTERRUPTS_INT2 = 18;
static const int INTERRUPTS_INT3 = 19;
static const int INTERRUPTS_INT4 = 20;
static const int INTERRUPTS_INTRX0 = 22;
static const int INTERRUPTS_INTTX0 = 23;
static const int INTERRUPTS_INTRX1 = 24;
static const int INTERRUPTS_INTTX1 = 25;
static const int INTERRUPTS_INTSBI0 = 26;
static const int INTERRUPTS_INTSBI1 = 27;
static const int INTERRUPTS_INTCECRX = 28;
static const int INTERRUPTS_INTCECTX = 29;
static const int INTERRUPTS_INTRMCRX0 = 30;
static const int INTERRUPTS_INTADHP = 31;
static const int INTERRUPTS_INTADM0 = 32;
static const int INTERRUPTS_INTADM1 = 33;
static const int INTERRUPTS_INTTB0 = 34;
static const int INTERRUPTS_INTTB1 = 35;
static const int INTERRUPTS_INTTB2 = 36;
static const int INTERRUPTS_INTTB3 = 37;
static const int INTERRUPTS_INTTB4 = 38;
static const int INTERRUPTS_INTTB5 = 39;
static const int INTERRUPTS_INTTB6 = 40;
static const int INTERRUPTS_INTRTC = 41;
static const int INTERRUPTS_INTCAP00 = 42;
static const int INTERRUPTS_INTCAP01 = 43;
static const int INTERRUPTS_INTCAP10 = 44;
static const int INTERRUPTS_INTCAP11 = 45;
static const int INTERRUPTS_INTCAP50 = 46;
static const int INTERRUPTS_INTCAP51 = 47;
static const int INTERRUPTS_INTCAP60 = 48;
static const int INTERRUPTS_INTCAP61 = 49;
static const int INTERRUPTS_INTTB7 = 56;
static const int INTERRUPTS_INTTB8 = 57;
static const int INTERRUPTS_INTTB9 = 58;
static const int INTERRUPTS_INTAD = 65;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for TMPM332FWUG.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for TMPM332FWUG.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
