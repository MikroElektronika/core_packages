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
* @brief TMPM343FDXBG MCU specific interrupt per module definitions.
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
static const int INTERRUPTS_INTPSCASTOP = 32;
static const int INTERRUPTS_INTPSCABRK = 33;
static const int INTERRUPTS_INTPSCASTEP = 34;
static const int INTERRUPTS_INTPSCAII = 35;
static const int INTERRUPTS_INTPSCAIA = 36;
static const int INTERRUPTS_INTPSCBSTOP = 37;
static const int INTERRUPTS_INTPSCBBRK = 38;
static const int INTERRUPTS_INTPSCBSTEP = 39;
static const int INTERRUPTS_INTPSCBII = 40;
static const int INTERRUPTS_INTPSCBIA = 41;
static const int INTERRUPTS_INTPSCCSTOP = 42;
static const int INTERRUPTS_INTPSCCBRK = 43;
static const int INTERRUPTS_INTPSCCSTEP = 44;
static const int INTERRUPTS_INTPSCCII = 45;
static const int INTERRUPTS_INTPSCCIA = 46;
static const int INTERRUPTS_INTPSCDSTOP = 47;
static const int INTERRUPTS_INTPSCDBRK = 48;
static const int INTERRUPTS_INTPSCDSTEP = 49;
static const int INTERRUPTS_INTPSCDII = 50;
static const int INTERRUPTS_INTPSCDIA = 51;
static const int INTERRUPTS_INTT0RX = 52;
static const int INTERRUPTS_INTT0TX = 53;
static const int INTERRUPTS_INTT0ERR = 54;
static const int INTERRUPTS_INTT1RX = 55;
static const int INTERRUPTS_INTT1TX = 56;
static const int INTERRUPTS_INTT1ERR = 57;
static const int INTERRUPTS_INTT2RX = 58;
static const int INTERRUPTS_INTT2TX = 59;
static const int INTERRUPTS_INTT2ERR = 60;
static const int INTERRUPTS_INTT3RX = 61;
static const int INTERRUPTS_INTT3TX = 62;
static const int INTERRUPTS_INTT3ERR = 63;
static const int INTERRUPTS_INTT4RX = 64;
static const int INTERRUPTS_INTT4TX = 65;
static const int INTERRUPTS_INTT4ERR = 66;
static const int INTERRUPTS_INTUART0 = 67;
static const int INTERRUPTS_INTRX0 = 68;
static const int INTERRUPTS_INTTX0 = 69;
static const int INTERRUPTS_INTI2C = 70;
static const int INTERRUPTS_INTADA = 71;
static const int INTERRUPTS_INTADB = 72;
static const int INTERRUPTS_INTADC = 73;
static const int INTERRUPTS_INTADAHP = 74;
static const int INTERRUPTS_INTADBHP = 75;
static const int INTERRUPTS_INTADCHP = 76;
static const int INTERRUPTS_INTEPHC0 = 77;
static const int INTERRUPTS_INTPHCP0OVF = 78;
static const int INTERRUPTS_INTPHCP0PHE = 79;
static const int INTERRUPTS_INTPHCP0CY0 = 80;
static const int INTERRUPTS_INTPHCP0CY1 = 81;
static const int INTERRUPTS_INTPHCP0CY2 = 82;
static const int INTERRUPTS_INTPHCP0CY3 = 83;
static const int INTERRUPTS_INTPHCP0LMT = 84;
static const int INTERRUPTS_INTEPHC1 = 85;
static const int INTERRUPTS_INTPHCP1OVF = 86;
static const int INTERRUPTS_INTPHCP1PHE = 87;
static const int INTERRUPTS_INTPHCP1CY0 = 88;
static const int INTERRUPTS_INTPHCP1CY1 = 89;
static const int INTERRUPTS_INTPHCP1CY2 = 90;
static const int INTERRUPTS_INTPHCP1CY3 = 91;
static const int INTERRUPTS_INTPHCP1LMT = 92;
static const int INTERRUPTS_INTEPHC2 = 93;
static const int INTERRUPTS_INTPHCP2OVF = 94;
static const int INTERRUPTS_INTPHCP2PHE = 95;
static const int INTERRUPTS_INTPHCP2CY0 = 96;
static const int INTERRUPTS_INTPHCP2CY1 = 97;
static const int INTERRUPTS_INTPHCP2CY2 = 98;
static const int INTERRUPTS_INTPHCP2CY3 = 99;
static const int INTERRUPTS_INTPHCP2LMT = 100;
static const int INTERRUPTS_INTTDA0CMP0 = 101;
static const int INTERRUPTS_INTTDA0CMP1 = 102;
static const int INTERRUPTS_INTTDA0CMP2 = 103;
static const int INTERRUPTS_INTTDA0CMP3 = 104;
static const int INTERRUPTS_INTTDA0CMP4 = 105;
static const int INTERRUPTS_INTTDA1CMP0 = 106;
static const int INTERRUPTS_INTTDA1CMP1 = 107;
static const int INTERRUPTS_INTTDA1CMP2 = 108;
static const int INTERRUPTS_INTTDA1CMP3 = 109;
static const int INTERRUPTS_INTTDA1CMP4 = 110;
static const int INTERRUPTS_INTTDB0CMP0 = 111;
static const int INTERRUPTS_INTTDB0CMP1 = 112;
static const int INTERRUPTS_INTTDB0CMP2 = 113;
static const int INTERRUPTS_INTTDB0CMP3 = 114;
static const int INTERRUPTS_INTTDB0CMP4 = 115;
static const int INTERRUPTS_INTTDB1CMP0 = 116;
static const int INTERRUPTS_INTTDB1CMP1 = 117;
static const int INTERRUPTS_INTTDB1CMP2 = 118;
static const int INTERRUPTS_INTTDB1CMP3 = 119;
static const int INTERRUPTS_INTTDB1CMP4 = 120;
static const int INTERRUPTS_INTTB0 = 121;
static const int INTERRUPTS_INTTB1 = 122;
static const int INTERRUPTS_INTTB2 = 123;
static const int INTERRUPTS_INTTB3 = 124;
static const int INTERRUPTS_INTTB4 = 125;
static const int INTERRUPTS_INTTB5 = 126;
static const int INTERRUPTS_INTTB6 = 127;
static const int INTERRUPTS_INTTB7 = 128;
static const int INTERRUPTS_INTTB8 = 129;
static const int INTERRUPTS_INTTB9 = 130;
static const int INTERRUPTS_INTTBA = 131;
static const int INTERRUPTS_INTTBB = 132;
static const int INTERRUPTS_INTTBC = 133;
static const int INTERRUPTS_INTTBD = 134;
static const int INTERRUPTS_INTTBE = 135;
static const int INTERRUPTS_INTTBF = 136;
static const int INTERRUPTS_INTTBCCAP0 = 137;
static const int INTERRUPTS_INTTBCCAP1 = 138;
static const int INTERRUPTS_INTTBDCAP0 = 139;
static const int INTERRUPTS_INTTBDCAP1 = 140;
static const int INTERRUPTS_INTTBECAP0 = 141;
static const int INTERRUPTS_INTTBECAP1 = 142;
static const int INTERRUPTS_INTTBFCAP0 = 143;
static const int INTERRUPTS_INTTBFCAP1 = 144;
static const int INTERRUPTS_INTADAM0 = 145;
static const int INTERRUPTS_INTADAM1 = 146;
static const int INTERRUPTS_INTADBM0 = 147;
static const int INTERRUPTS_INTADBM1 = 148;
static const int INTERRUPTS_INTADCM0 = 149;
static const int INTERRUPTS_INTADCM1 = 150;
static const int INTERRUPTS_INTDMACATC = 151;
static const int INTERRUPTS_INTDMACAERR = 152;
static const int INTERRUPTS_INTDMACBTC = 153;
static const int INTERRUPTS_INTDMACBERR = 154;
static const int INTERRUPTS_INTDMACCTC = 155;
static const int INTERRUPTS_INTDMACCERR = 156;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for TMPM343FDXBG.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for TMPM343FDXBG.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
