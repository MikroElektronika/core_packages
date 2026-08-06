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
* @brief TMPM368FDFG MCU specific interrupt per module definitions.
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
static const int INTERRUPTS_INTE = 30;
static const int INTERRUPTS_INTF = 31;
static const int INTERRUPTS_INTRX0 = 32;
static const int INTERRUPTS_INTTX0 = 33;
static const int INTERRUPTS_INTRX1 = 34;
static const int INTERRUPTS_INTTX1 = 35;
static const int INTERRUPTS_INTRX2 = 36;
static const int INTERRUPTS_INTTX2 = 37;
static const int INTERRUPTS_INTRX3 = 38;
static const int INTERRUPTS_INTTX3 = 39;
static const int INTERRUPTS_INTUART4 = 40;
static const int INTERRUPTS_INTUART5 = 41;
static const int INTERRUPTS_INTSBI0 = 42;
static const int INTERRUPTS_INTSBI1 = 43;
static const int INTERRUPTS_INTSBI2 = 44;
static const int INTERRUPTS_INTSSP0 = 45;
static const int INTERRUPTS_INTSSP1 = 46;
static const int INTERRUPTS_INTSSP2 = 47;
static const int INTERRUPTS_INTUSBH = 48;
static const int INTERRUPTS_INTUSBD = 49;
static const int INTERRUPTS_INTUSBWKUP = 50;
static const int INTERRUPTS_INTCANRX = 51;
static const int INTERRUPTS_INTCANTX = 52;
static const int INTERRUPTS_INTCANGB = 53;
static const int INTERRUPTS_INTETH = 54;
static const int INTERRUPTS_INTETHWK = 55;
static const int INTERRUPTS_INTADAHP = 56;
static const int INTERRUPTS_INTADAM0 = 57;
static const int INTERRUPTS_INTADAM1 = 58;
static const int INTERRUPTS_INTADA = 59;
static const int INTERRUPTS_INTADBHP = 60;
static const int INTERRUPTS_INTADBM0 = 61;
static const int INTERRUPTS_INTADBM1 = 62;
static const int INTERRUPTS_INTADB = 63;
static const int INTERRUPTS_INTEMG0 = 64;
static const int INTERRUPTS_INTPMD0 = 65;
static const int INTERRUPTS_INTENC0 = 66;
static const int INTERRUPTS_INTEMG1 = 67;
static const int INTERRUPTS_INTPMD1 = 68;
static const int INTERRUPTS_INTENC1 = 69;
static const int INTERRUPTS_INTMTEMG0 = 70;
static const int INTERRUPTS_INTMTPTB00 = 71;
static const int INTERRUPTS_INTMTTTB01 = 72;
static const int INTERRUPTS_INTMTCAP00 = 73;
static const int INTERRUPTS_INTMTCAP01 = 74;
static const int INTERRUPTS_INTMTEMG1 = 75;
static const int INTERRUPTS_INTMTPTB10 = 76;
static const int INTERRUPTS_INTMTTTB11 = 77;
static const int INTERRUPTS_INTMTCAP10 = 78;
static const int INTERRUPTS_INTMTCAP11 = 79;
static const int INTERRUPTS_INTMTEMG2 = 80;
static const int INTERRUPTS_INTMTPTB20 = 81;
static const int INTERRUPTS_INTMTTTB21 = 82;
static const int INTERRUPTS_INTMTCAP20 = 83;
static const int INTERRUPTS_INTMTCAP21 = 84;
static const int INTERRUPTS_INTMTEMG3 = 85;
static const int INTERRUPTS_INTMTPTB30 = 86;
static const int INTERRUPTS_INTMTTTB31 = 87;
static const int INTERRUPTS_INTMTCAP30 = 88;
static const int INTERRUPTS_INTMTCAP31 = 89;
static const int INTERRUPTS_INTRMCRX = 90;
static const int INTERRUPTS_INTTB0 = 91;
static const int INTERRUPTS_INTCAP00 = 92;
static const int INTERRUPTS_INTCAP01 = 93;
static const int INTERRUPTS_INTTB1 = 94;
static const int INTERRUPTS_INTCAP10 = 95;
static const int INTERRUPTS_INTCAP11 = 96;
static const int INTERRUPTS_INTTB2 = 97;
static const int INTERRUPTS_INTCAP20 = 98;
static const int INTERRUPTS_INTCAP21 = 99;
static const int INTERRUPTS_INTTB3 = 100;
static const int INTERRUPTS_INTCAP30 = 101;
static const int INTERRUPTS_INTCAP31 = 102;
static const int INTERRUPTS_INTTB4 = 103;
static const int INTERRUPTS_INTCAP40 = 104;
static const int INTERRUPTS_INTCAP41 = 105;
static const int INTERRUPTS_INTTB5 = 106;
static const int INTERRUPTS_INTCAP50 = 107;
static const int INTERRUPTS_INTCAP51 = 108;
static const int INTERRUPTS_INTTB6 = 109;
static const int INTERRUPTS_INTCAP60 = 110;
static const int INTERRUPTS_INTCAP61 = 111;
static const int INTERRUPTS_INTTB7 = 112;
static const int INTERRUPTS_INTCAP70 = 113;
static const int INTERRUPTS_INTCAP71 = 114;
static const int INTERRUPTS_INTRTC = 115;
static const int INTERRUPTS_INTDMAADA = 116;
static const int INTERRUPTS_INTDMAADB = 117;
static const int INTERRUPTS_INTDMADAA = 118;
static const int INTERRUPTS_INTDMADAB = 119;
static const int INTERRUPTS_INTDMASPR0 = 120;
static const int INTERRUPTS_INTDMASPT0 = 121;
static const int INTERRUPTS_INTDMASPR1 = 122;
static const int INTERRUPTS_INTDMASPT1 = 123;
static const int INTERRUPTS_INTDMASPR2 = 124;
static const int INTERRUPTS_INTDMASPT2 = 125;
static const int INTERRUPTS_INTDMAUTR4 = 126;
static const int INTERRUPTS_INTDMAUTT4 = 127;
static const int INTERRUPTS_INTDMAUTR5 = 128;
static const int INTERRUPTS_INTDMAUTT5 = 129;
static const int INTERRUPTS_INTDMARX0 = 130;
static const int INTERRUPTS_INTDMATX0 = 131;
static const int INTERRUPTS_INTDMARX1 = 132;
static const int INTERRUPTS_INTDMATX1 = 133;
static const int INTERRUPTS_INTDMARX2 = 134;
static const int INTERRUPTS_INTDMATX2 = 135;
static const int INTERRUPTS_INTDMARX3 = 136;
static const int INTERRUPTS_INTDMATX3 = 137;
static const int INTERRUPTS_INTDMASBI1 = 138;
static const int INTERRUPTS_INTDMASBI2 = 139;
static const int INTERRUPTS_INTDMATB = 140;
static const int INTERRUPTS_INTDMARQ = 141;
static const int INTERRUPTS_INTDMAAERR = 142;
static const int INTERRUPTS_INTDMABERR = 143;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for TMPM368FDFG.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for TMPM368FDFG.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
