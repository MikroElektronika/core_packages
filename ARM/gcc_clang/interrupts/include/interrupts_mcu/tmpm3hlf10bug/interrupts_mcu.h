/****************************************************************************
**
** Copyright (C) ${COPYRIGHT_YEAR} MikroElektronika d.o.o.
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
* @brief TMPM3HLF10BUG MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_INT00 = 16;
static const int INTERRUPTS_INT01 = 17;
static const int INTERRUPTS_INT03 = 19;
static const int INTERRUPTS_INT04 = 20;
static const int INTERRUPTS_INT05 = 21;
static const int INTERRUPTS_INT06 = 22;
static const int INTERRUPTS_INT07 = 23;
static const int INTERRUPTS_INT08 = 24;
static const int INTERRUPTS_INT10 = 26;
static const int INTERRUPTS_INT11 = 27;
static const int INTERRUPTS_INT12 = 28;
static const int INTERRUPTS_INT14 = 30;
static const int INTERRUPTS_INTEMG0 = 39;
static const int INTERRUPTS_INTOVV0 = 40;
static const int INTERRUPTS_INTPMD0 = 41;
static const int INTERRUPTS_INTENC00 = 42;
static const int INTERRUPTS_INTENC01 = 43;
static const int INTERRUPTS_INTADAPDA = 44;
static const int INTERRUPTS_INTADAPDB = 45;
static const int INTERRUPTS_INTADACP0 = 46;
static const int INTERRUPTS_INTADACP1 = 47;
static const int INTERRUPTS_INTADATRG = 48;
static const int INTERRUPTS_INTADASGL = 49;
static const int INTERRUPTS_INTADACNT = 50;
static const int INTERRUPTS_INTT0RX = 51;
static const int INTERRUPTS_INTT0TX = 52;
static const int INTERRUPTS_INTT0ERR = 53;
static const int INTERRUPTS_INTI2CWUP = 66;
static const int INTERRUPTS_INTI2C0NST = 67;
static const int INTERRUPTS_INTI2C0ATX = 68;
static const int INTERRUPTS_INTI2C0BRX = 69;
static const int INTERRUPTS_INTI2C0NA = 70;
static const int INTERRUPTS_INTI2C2NST = 75;
static const int INTERRUPTS_INTI2C2ATX = 76;
static const int INTERRUPTS_INTI2C2BRX = 77;
static const int INTERRUPTS_INTI2C2NA = 78;
static const int INTERRUPTS_INTUART0RX = 83;
static const int INTERRUPTS_INTUART0TX = 84;
static const int INTERRUPTS_INTUART0ERR = 85;
static const int INTERRUPTS_INTUART1RX = 86;
static const int INTERRUPTS_INTUART1TX = 87;
static const int INTERRUPTS_INTUART1ERR = 88;
static const int INTERRUPTS_INTUART2RX = 89;
static const int INTERRUPTS_INTUART2TX = 90;
static const int INTERRUPTS_INTUART2ERR = 91;
static const int INTERRUPTS_INTUART3RX = 92;
static const int INTERRUPTS_INTUART3TX = 93;
static const int INTERRUPTS_INTUART3ERR = 94;
static const int INTERRUPTS_INTUART4RX = 95;
static const int INTERRUPTS_INTUART4TX = 96;
static const int INTERRUPTS_INTUART4ERR = 97;
static const int INTERRUPTS_INTUART5RX = 98;
static const int INTERRUPTS_INTUART5TX = 99;
static const int INTERRUPTS_INTUART5ERR = 100;
static const int INTERRUPTS_INTT32A00A = 101;
static const int INTERRUPTS_INTT32A00ACAP0 = 102;
static const int INTERRUPTS_INTT32A00ACAP1 = 103;
static const int INTERRUPTS_INTT32A00B = 104;
static const int INTERRUPTS_INTT32A00BCAP0 = 105;
static const int INTERRUPTS_INTT32A00BCAP1 = 106;
static const int INTERRUPTS_INTT32A00C = 107;
static const int INTERRUPTS_INTT32A00CCAP0 = 108;
static const int INTERRUPTS_INTT32A00CCAP1 = 109;
static const int INTERRUPTS_INTT32A01A = 110;
static const int INTERRUPTS_INTT32A01ACAP0 = 111;
static const int INTERRUPTS_INTT32A01ACAP1 = 112;
static const int INTERRUPTS_INTT32A01B = 113;
static const int INTERRUPTS_INTT32A01BCAP0 = 114;
static const int INTERRUPTS_INTT32A01BCAP1 = 115;
static const int INTERRUPTS_INTT32A01C = 116;
static const int INTERRUPTS_INTT32A01CCAP0 = 117;
static const int INTERRUPTS_INTT32A01CCAP1 = 118;
static const int INTERRUPTS_INTT32A02A = 119;
static const int INTERRUPTS_INTT32A02ACAP0 = 120;
static const int INTERRUPTS_INTT32A02ACAP1 = 121;
static const int INTERRUPTS_INTT32A02B = 122;
static const int INTERRUPTS_INTT32A02BCAP0 = 123;
static const int INTERRUPTS_INTT32A02BCAP1 = 124;
static const int INTERRUPTS_INTT32A02C = 125;
static const int INTERRUPTS_INTT32A02CCAP0 = 126;
static const int INTERRUPTS_INTT32A02CCAP1 = 127;
static const int INTERRUPTS_INTT32A03A = 128;
static const int INTERRUPTS_INTT32A03ACAP0 = 129;
static const int INTERRUPTS_INTT32A03ACAP1 = 130;
static const int INTERRUPTS_INTT32A03B = 131;
static const int INTERRUPTS_INTT32A03BCAP0 = 132;
static const int INTERRUPTS_INTT32A03BCAP1 = 133;
static const int INTERRUPTS_INTT32A03C = 134;
static const int INTERRUPTS_INTT32A03CCAP0 = 135;
static const int INTERRUPTS_INTT32A03CCAP1 = 136;
static const int INTERRUPTS_INTT32A04A = 137;
static const int INTERRUPTS_INTT32A04ACAP0 = 138;
static const int INTERRUPTS_INTT32A04ACAP1 = 139;
static const int INTERRUPTS_INTT32A04B = 140;
static const int INTERRUPTS_INTT32A04BCAP0 = 141;
static const int INTERRUPTS_INTT32A04BCAP1 = 142;
static const int INTERRUPTS_INTT32A04C = 143;
static const int INTERRUPTS_INTT32A04CCAP0 = 144;
static const int INTERRUPTS_INTT32A04CCAP1 = 145;
static const int INTERRUPTS_INTT32A05A = 146;
static const int INTERRUPTS_INTT32A05ACAP0 = 147;
static const int INTERRUPTS_INTT32A05ACAP1 = 148;
static const int INTERRUPTS_INTT32A05B = 149;
static const int INTERRUPTS_INTT32A05BCAP0 = 150;
static const int INTERRUPTS_INTT32A05BCAP1 = 151;
static const int INTERRUPTS_INTT32A05C = 152;
static const int INTERRUPTS_INTT32A05CCAP0 = 153;
static const int INTERRUPTS_INTT32A05CCAP1 = 154;
static const int INTERRUPTS_INTT32A06A = 155;
static const int INTERRUPTS_INTT32A06ACAP0 = 156;
static const int INTERRUPTS_INTT32A06ACAP1 = 157;
static const int INTERRUPTS_INTT32A06B = 158;
static const int INTERRUPTS_INTT32A06BCAP0 = 159;
static const int INTERRUPTS_INTT32A06BCAP1 = 160;
static const int INTERRUPTS_INTT32A06C = 161;
static const int INTERRUPTS_INTT32A06CCAP0 = 162;
static const int INTERRUPTS_INTT32A06CCAP1 = 163;
static const int INTERRUPTS_INTT32A07A = 164;
static const int INTERRUPTS_INTT32A07ACAP0 = 165;
static const int INTERRUPTS_INTT32A07ACAP1 = 166;
static const int INTERRUPTS_INTT32A07B = 167;
static const int INTERRUPTS_INTT32A07BCAP0 = 168;
static const int INTERRUPTS_INTT32A07BCAP1 = 169;
static const int INTERRUPTS_INTT32A07C = 170;
static const int INTERRUPTS_INTT32A07CCAP0 = 171;
static const int INTERRUPTS_INTT32A07CCAP1 = 172;
static const int INTERRUPTS_INTPARI = 173;
static const int INTERRUPTS_INTDMAATC = 174;
static const int INTERRUPTS_INTDMAAERR = 175;
static const int INTERRUPTS_INTDMABTC = 176;
static const int INTERRUPTS_INTDMABERR = 177;
static const int INTERRUPTS_INTRTC = 178;
static const int INTERRUPTS_INTRMC0 = 179;
static const int INTERRUPTS_INTFLCRDY = 180;
static const int INTERRUPTS_INTFLDRDY = 181;
static const int INTERRUPTS_INTUART6RX = 184;
static const int INTERRUPTS_INTUART6TX = 185;
static const int INTERRUPTS_INTUART6ERR = 186;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for TMPM3HLF10BUG.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for TMPM3HLF10BUG.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
