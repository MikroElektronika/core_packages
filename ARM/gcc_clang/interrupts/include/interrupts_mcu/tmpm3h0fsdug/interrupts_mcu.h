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
* @brief TMPM3H0FSDUG MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_INT0 = 16;
static const int INTERRUPTS_INT1 = 17;
static const int INTERRUPTS_INT2 = 18;
static const int INTERRUPTS_INT3 = 19;
static const int INTERRUPTS_INT4 = 20;
static const int INTERRUPTS_INT5 = 21;
static const int INTERRUPTS_INT6 = 22;
static const int INTERRUPTS_INT7 = 23;
static const int INTERRUPTS_INTRX0 = 32;
static const int INTERRUPTS_INTTX0 = 33;
static const int INTERRUPTS_INTRX1 = 34;
static const int INTERRUPTS_INTTX1 = 35;
static const int INTERRUPTS_INTRX2 = 36;
static const int INTERRUPTS_INTTX2 = 37;
static const int INTERRUPTS_INTRX3 = 38;
static const int INTERRUPTS_INTTX3 = 39;
static const int INTERRUPTS_INTRX4 = 40;
static const int INTERRUPTS_INTTX4 = 41;
static const int INTERRUPTS_INTSBI0 = 42;
static const int INTERRUPTS_INTSBI1 = 43;
static const int INTERRUPTS_INTCECRX = 44;
static const int INTERRUPTS_INTCECTX = 45;
static const int INTERRUPTS_INTRMCRX0 = 46;
static const int INTERRUPTS_INTRTC = 48;
static const int INTERRUPTS_INTKWUP = 49;
static const int INTERRUPTS_INTSBI2 = 50;
static const int INTERRUPTS_INTSBI3 = 51;
static const int INTERRUPTS_INTADHP = 53;
static const int INTERRUPTS_INTADM0 = 54;
static const int INTERRUPTS_INTADM1 = 55;
static const int INTERRUPTS_INTTB0 = 56;
static const int INTERRUPTS_INTTB1 = 57;
static const int INTERRUPTS_INTTB2 = 58;
static const int INTERRUPTS_INTTB3 = 59;
static const int INTERRUPTS_INTTB4 = 60;
static const int INTERRUPTS_INTTB5 = 61;
static const int INTERRUPTS_INTTB6 = 62;
static const int INTERRUPTS_INTTB7 = 63;
static const int INTERRUPTS_INTUSB = 72;
static const int INTERRUPTS_INTAD = 74;
static const int INTERRUPTS_INTSSP = 75;
static const int INTERRUPTS_INTCAP10 = 90;
static const int INTERRUPTS_INTCAP11 = 91;
static const int INTERRUPTS_INTCAP20 = 92;
static const int INTERRUPTS_INTCAP21 = 93;
static const int INTERRUPTS_INTCAP50 = 96;
static const int INTERRUPTS_INTCAP51 = 97;
static const int INTERRUPTS_INTCAP60 = 98;
static const int INTERRUPTS_INTCAP61 = 99;
static const int INTERRUPTS_INTCAP70 = 100;
static const int INTERRUPTS_INTCAP71 = 101;
static const int INTERRUPTS_INTDMACERR = 114;
static const int INTERRUPTS_INTDMACTC0 = 115;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for TMPM3H0FSDUG.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for TMPM3H0FSDUG.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
