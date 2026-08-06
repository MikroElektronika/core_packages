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
* @brief TMPM364F10FG MCU specific interrupt per module definitions.
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
static const int INTERRUPTS_INT8 = 24;
static const int INTERRUPTS_INT9 = 25;
static const int INTERRUPTS_INTA = 26;
static const int INTERRUPTS_INTB = 27;
static const int INTERRUPTS_INTC = 28;
static const int INTERRUPTS_INTD = 29;
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
static const int INTERRUPTS_INTRMCRX1 = 47;
static const int INTERRUPTS_INTRTC = 48;
static const int INTERRUPTS_INTKWUP = 49;
static const int INTERRUPTS_INTSBI2 = 50;
static const int INTERRUPTS_INTSBI3 = 51;
static const int INTERRUPTS_INTSBI4 = 52;
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
static const int INTERRUPTS_INTTB8 = 64;
static const int INTERRUPTS_INTTB9 = 65;
static const int INTERRUPTS_INTTBA = 66;
static const int INTERRUPTS_INTTBB = 67;
static const int INTERRUPTS_INTTBC = 68;
static const int INTERRUPTS_INTTBD = 69;
static const int INTERRUPTS_INTTBE = 70;
static const int INTERRUPTS_INTTBF = 71;
static const int INTERRUPTS_INTUSB = 72;
static const int INTERRUPTS_INTCANSTA = 73;
static const int INTERRUPTS_INTAD = 74;
static const int INTERRUPTS_INTSSP = 75;
static const int INTERRUPTS_INTRX5 = 76;
static const int INTERRUPTS_INTTX5 = 77;
static const int INTERRUPTS_INTRX6 = 78;
static const int INTERRUPTS_INTTX6 = 79;
static const int INTERRUPTS_INTRX7 = 80;
static const int INTERRUPTS_INTTX7 = 81;
static const int INTERRUPTS_INTRX8 = 82;
static const int INTERRUPTS_INTTX8 = 83;
static const int INTERRUPTS_INTRX9 = 84;
static const int INTERRUPTS_INTTX9 = 85;
static const int INTERRUPTS_INTRX10 = 86;
static const int INTERRUPTS_INTTX10 = 87;
static const int INTERRUPTS_INTRX11 = 88;
static const int INTERRUPTS_INTTX11 = 89;
static const int INTERRUPTS_INTCAP10 = 90;
static const int INTERRUPTS_INTCAP11 = 91;
static const int INTERRUPTS_INTCAP20 = 92;
static const int INTERRUPTS_INTCAP21 = 93;
static const int INTERRUPTS_INTCANRX = 94;
static const int INTERRUPTS_INTCANTX = 95;
static const int INTERRUPTS_INTCAP50 = 96;
static const int INTERRUPTS_INTCAP51 = 97;
static const int INTERRUPTS_INTCAP60 = 98;
static const int INTERRUPTS_INTCAP61 = 99;
static const int INTERRUPTS_INTCAP70 = 100;
static const int INTERRUPTS_INTCAP71 = 101;
static const int INTERRUPTS_INTCAP90 = 102;
static const int INTERRUPTS_INTCAP91 = 103;
static const int INTERRUPTS_INTCAPA0 = 104;
static const int INTERRUPTS_INTCAPA1 = 105;
static const int INTERRUPTS_INTCAPB0 = 106;
static const int INTERRUPTS_INTCAPB1 = 107;
static const int INTERRUPTS_INTCAPD0 = 108;
static const int INTERRUPTS_INTCAPD1 = 109;
static const int INTERRUPTS_INTCAPE0 = 110;
static const int INTERRUPTS_INTCAPE1 = 111;
static const int INTERRUPTS_INTCAPF0 = 112;
static const int INTERRUPTS_INTCAPF1 = 113;
static const int INTERRUPTS_INTDMACERR = 114;
static const int INTERRUPTS_INTDMACTC0 = 115;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for TMPM364F10FG.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for TMPM364F10FG.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
