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
* @brief TMPM380FWDFG MCU specific interrupt per module definitions.
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
static const int INTERRUPTS_INTRX0 = 22;
static const int INTERRUPTS_INTTX0 = 23;
static const int INTERRUPTS_INTRX1 = 24;
static const int INTERRUPTS_INTTX1 = 25;
static const int INTERRUPTS_INTSSP0 = 26;
static const int INTERRUPTS_INTSSP1 = 27;
static const int INTERRUPTS_INTEMG0 = 28;
static const int INTERRUPTS_INTEMG1 = 29;
static const int INTERRUPTS_INTSBI0 = 30;
static const int INTERRUPTS_INTSBI1 = 31;
static const int INTERRUPTS_INTADPD0 = 32;
static const int INTERRUPTS_INTRTC = 33;
static const int INTERRUPTS_INTADPD1 = 34;
static const int INTERRUPTS_INTRMCRX = 35;
static const int INTERRUPTS_INTTB00 = 36;
static const int INTERRUPTS_INTTB01 = 37;
static const int INTERRUPTS_INTTB10 = 38;
static const int INTERRUPTS_INTTB11 = 39;
static const int INTERRUPTS_INTTB40 = 40;
static const int INTERRUPTS_INTTB41 = 41;
static const int INTERRUPTS_INTTB50 = 42;
static const int INTERRUPTS_INTTB51 = 43;
static const int INTERRUPTS_INTPMD0 = 44;
static const int INTERRUPTS_INTPMD1 = 45;
static const int INTERRUPTS_INTCAP00 = 46;
static const int INTERRUPTS_INTCAP01 = 47;
static const int INTERRUPTS_INTCAP10 = 48;
static const int INTERRUPTS_INTCAP11 = 49;
static const int INTERRUPTS_INTCAP40 = 50;
static const int INTERRUPTS_INTCAP41 = 51;
static const int INTERRUPTS_INTCAP50 = 52;
static const int INTERRUPTS_INTCAP51 = 53;
static const int INTERRUPTS_INT6 = 54;
static const int INTERRUPTS_INT7 = 55;
static const int INTERRUPTS_INTRX2 = 56;
static const int INTERRUPTS_INTTX2 = 57;
static const int INTERRUPTS_INTADCP0 = 58;
static const int INTERRUPTS_INTADCP1 = 59;
static const int INTERRUPTS_INTRX4 = 60;
static const int INTERRUPTS_INTTX4 = 61;
static const int INTERRUPTS_INTTB20 = 62;
static const int INTERRUPTS_INTTB21 = 63;
static const int INTERRUPTS_INTTB30 = 64;
static const int INTERRUPTS_INTTB31 = 65;
static const int INTERRUPTS_INTCAP20 = 66;
static const int INTERRUPTS_INTCAP21 = 67;
static const int INTERRUPTS_INTCAP30 = 68;
static const int INTERRUPTS_INTCAP31 = 69;
static const int INTERRUPTS_INTADSFT = 70;
static const int INTERRUPTS_INTADTMR = 72;
static const int INTERRUPTS_INT8 = 74;
static const int INTERRUPTS_INT9 = 75;
static const int INTERRUPTS_INTA = 76;
static const int INTERRUPTS_INTB = 77;
static const int INTERRUPTS_INTENC0 = 78;
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
static const int INTERRUPTS_INTDMACERR = 94;
static const int INTERRUPTS_INTDMACTC = 95;
static const int INTERRUPTS_INTMTTB00 = 96;
static const int INTERRUPTS_INTMTTB01 = 97;
static const int INTERRUPTS_INTMTTB10 = 98;
static const int INTERRUPTS_INTMTTB11 = 99;
static const int INTERRUPTS_INTMTTB20 = 100;
static const int INTERRUPTS_INTMTTB21 = 101;
static const int INTERRUPTS_INTMTCAP00 = 102;
static const int INTERRUPTS_INTMTCAP01 = 103;
static const int INTERRUPTS_INTMTCAP10 = 104;
static const int INTERRUPTS_INTMTCAP11 = 105;
static const int INTERRUPTS_INTMTCAP20 = 106;
static const int INTERRUPTS_INTMTCAP21 = 107;
static const int INTERRUPTS_INTMTEMG0 = 108;
static const int INTERRUPTS_INTMTEMG1 = 109;
static const int INTERRUPTS_INTMTEMG2 = 110;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for TMPM380FWDFG.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for TMPM380FWDFG.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
