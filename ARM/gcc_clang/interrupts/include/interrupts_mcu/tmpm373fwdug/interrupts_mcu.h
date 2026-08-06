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
* @brief TMPM373FWDUG MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_INT4 = 20;
static const int INTERRUPTS_INT5 = 21;
static const int INTERRUPTS_INTRX0 = 22;
static const int INTERRUPTS_INTTX0 = 23;
static const int INTERRUPTS_INTRX1 = 24;
static const int INTERRUPTS_INTTX1 = 25;
static const int INTERRUPTS_INTVCNB = 27;
static const int INTERRUPTS_INTEMG1 = 29;
static const int INTERRUPTS_INTOVV1 = 31;
static const int INTERRUPTS_INTADBPDB = 35;
static const int INTERRUPTS_INTTB00 = 36;
static const int INTERRUPTS_INTTB01 = 37;
static const int INTERRUPTS_INTTB10 = 38;
static const int INTERRUPTS_INTTB11 = 39;
static const int INTERRUPTS_INTTB40 = 40;
static const int INTERRUPTS_INTTB41 = 41;
static const int INTERRUPTS_INTTB50 = 42;
static const int INTERRUPTS_INTTB51 = 43;
static const int INTERRUPTS_INTPMD1 = 45;
static const int INTERRUPTS_INTCAP00 = 46;
static const int INTERRUPTS_INTCAP10 = 48;
static const int INTERRUPTS_INTCAP11 = 49;
static const int INTERRUPTS_INTCAP40 = 50;
static const int INTERRUPTS_INTCAP50 = 52;
static const int INTERRUPTS_INT6 = 54;
static const int INTERRUPTS_INT7 = 55;
static const int INTERRUPTS_INTADBCPA = 59;
static const int INTERRUPTS_INTADBCPB = 61;
static const int INTERRUPTS_INTTB20 = 62;
static const int INTERRUPTS_INTTB21 = 63;
static const int INTERRUPTS_INTTB30 = 64;
static const int INTERRUPTS_INTTB31 = 65;
static const int INTERRUPTS_INTCAP20 = 66;
static const int INTERRUPTS_INTCAP21 = 67;
static const int INTERRUPTS_INTCAP30 = 68;
static const int INTERRUPTS_INTCAP31 = 69;
static const int INTERRUPTS_INTADBSFT = 71;
static const int INTERRUPTS_INTADBTMR = 73;
static const int INTERRUPTS_INTENC1 = 79;
static const int INTERRUPTS_INTRX3 = 80;
static const int INTERRUPTS_INTTX3 = 81;
static const int INTERRUPTS_INTTB60 = 82;
static const int INTERRUPTS_INTTB61 = 83;
static const int INTERRUPTS_INTTB70 = 84;
static const int INTERRUPTS_INTTB71 = 85;
static const int INTERRUPTS_INTCAP60 = 86;
static const int INTERRUPTS_INTCAP61 = 87;
static const int INTERRUPTS_INTCAP70 = 88;
static const int INTERRUPTS_INTCAP71 = 89;
static const int INTERRUPTS_INTC = 90;
static const int INTERRUPTS_INTD = 91;
static const int INTERRUPTS_INTE = 92;
static const int INTERRUPTS_INTF = 93;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for TMPM373FWDUG.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for TMPM373FWDUG.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
