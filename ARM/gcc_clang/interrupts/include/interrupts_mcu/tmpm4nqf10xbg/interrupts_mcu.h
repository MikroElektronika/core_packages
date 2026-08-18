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
* @brief TMPM4NQF10XBG MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_INT00 = 16;
static const int INTERRUPTS_INT01 = 17;
static const int INTERRUPTS_INT02 = 18;
static const int INTERRUPTS_INT03 = 19;
static const int INTERRUPTS_INT04 = 20;
static const int INTERRUPTS_INT05 = 21;
static const int INTERRUPTS_INT06 = 22;
static const int INTERRUPTS_INT07 = 23;
static const int INTERRUPTS_INT08 = 24;
static const int INTERRUPTS_INT09 = 25;
static const int INTERRUPTS_INT10 = 26;
static const int INTERRUPTS_INT11 = 27;
static const int INTERRUPTS_INT14 = 30;
static const int INTERRUPTS_INT15 = 31;
static const int INTERRUPTS_INTRTC = 32;
static const int INTERRUPTS_INTCEC0RX = 33;
static const int INTERRUPTS_INTCEC0TX = 34;
static const int INTERRUPTS_INTISDA = 35;
static const int INTERRUPTS_INTISDB = 36;
static const int INTERRUPTS_INTRMC0 = 38;
static const int INTERRUPTS_INTRMC1 = 39;
static const int INTERRUPTS_INTLTTMR0 = 40;
static const int INTERRUPTS_INTHDMAATC = 41;
static const int INTERRUPTS_INTHDMAAERR = 42;
static const int INTERRUPTS_INTHDMABTC = 43;
static const int INTERRUPTS_INTHDMABERR = 44;
static const int INTERRUPTS_INTMDMAATC = 45;
static const int INTERRUPTS_INTT32A00_A_CT = 46;
static const int INTERRUPTS_INTT32A00_B_C01_CPC = 47;
static const int INTERRUPTS_INTT32A01_A_CT = 48;
static const int INTERRUPTS_INTT32A01_B_C01_CPC = 49;
static const int INTERRUPTS_INTT32A02_A_CT = 50;
static const int INTERRUPTS_INTT32A02_B_C01_CPC = 51;
static const int INTERRUPTS_INTT32A03_A_CT = 52;
static const int INTERRUPTS_INTT32A03_B_C01_CPC = 53;
static const int INTERRUPTS_INTT32A04_A_CT = 54;
static const int INTERRUPTS_INTT32A04_B_C01_CPC = 55;
static const int INTERRUPTS_INTT32A05_A_CT = 56;
static const int INTERRUPTS_INTT32A05_B_C01_CPC = 57;
static const int INTERRUPTS_INTT32A06_A_CT = 58;
static const int INTERRUPTS_INTT32A06_B_C01_CPC = 59;
static const int INTERRUPTS_INTT32A07_A_CT = 60;
static const int INTERRUPTS_INTT32A07_B_C01_CPC = 61;
static const int INTERRUPTS_INTT32A08_A_CT = 62;
static const int INTERRUPTS_INTT32A08_B_C01_CPC = 63;
static const int INTERRUPTS_INTT32A09_A_CT = 64;
static const int INTERRUPTS_INTT32A09_B_C01_CPC = 65;
static const int INTERRUPTS_INTT32A10_A_CT = 66;
static const int INTERRUPTS_INTT32A10_B_C01_CPC = 67;
static const int INTERRUPTS_INTT32A11_A_CT = 68;
static const int INTERRUPTS_INTT32A11_B_C01_CPC = 69;
static const int INTERRUPTS_INTT32A12_A_CT = 70;
static const int INTERRUPTS_INTT32A12_B_C01_CPC = 71;
static const int INTERRUPTS_INTT32A13_A_CT = 72;
static const int INTERRUPTS_INTT32A13_B_C01_CPC = 73;
static const int INTERRUPTS_INTEMG0 = 74;
static const int INTERRUPTS_INTOVV0 = 75;
static const int INTERRUPTS_INTPWM0 = 76;
static const int INTERRUPTS_INTT0RX = 77;
static const int INTERRUPTS_INTT0TX = 78;
static const int INTERRUPTS_INTT0ERR = 79;
static const int INTERRUPTS_INTT1RX = 80;
static const int INTERRUPTS_INTT1TX = 81;
static const int INTERRUPTS_INTT1ERR = 82;
static const int INTERRUPTS_INTT2RX = 83;
static const int INTERRUPTS_INTT2TX = 84;
static const int INTERRUPTS_INTT2ERR = 85;
static const int INTERRUPTS_INTT3RX = 86;
static const int INTERRUPTS_INTT3TX = 87;
static const int INTERRUPTS_INTT3ERR = 88;
static const int INTERRUPTS_INTT4RX = 89;
static const int INTERRUPTS_INTT4TX = 90;
static const int INTERRUPTS_INTT4ERR = 91;
static const int INTERRUPTS_INTT5RX = 92;
static const int INTERRUPTS_INTT5TX = 93;
static const int INTERRUPTS_INTT5ERR = 94;
static const int INTERRUPTS_INTT6RX = 95;
static const int INTERRUPTS_INTT6TX = 96;
static const int INTERRUPTS_INTT6ERR = 97;
static const int INTERRUPTS_INTT7RX = 98;
static const int INTERRUPTS_INTT7TX = 99;
static const int INTERRUPTS_INTT7ERR = 100;
static const int INTERRUPTS_INTSMI0 = 104;
static const int INTERRUPTS_INTUART0RX = 105;
static const int INTERRUPTS_INTUART0TX = 106;
static const int INTERRUPTS_INTUART0ERR = 107;
static const int INTERRUPTS_INTUART1RX = 108;
static const int INTERRUPTS_INTUART1TX = 109;
static const int INTERRUPTS_INTUART1ERR = 110;
static const int INTERRUPTS_INTUART2RX = 111;
static const int INTERRUPTS_INTUART2TX = 112;
static const int INTERRUPTS_INTUART2ERR = 113;
static const int INTERRUPTS_INTUART3RX = 114;
static const int INTERRUPTS_INTUART3TX = 115;
static const int INTERRUPTS_INTUART3ERR = 116;
static const int INTERRUPTS_INTUART4RX = 117;
static const int INTERRUPTS_INTUART4TX = 118;
static const int INTERRUPTS_INTUART4ERR = 119;
static const int INTERRUPTS_INTFUART0 = 123;
static const int INTERRUPTS_INTFUART1 = 124;
static const int INTERRUPTS_INTI2C0NST = 125;
static const int INTERRUPTS_INTI2C0ATX = 126;
static const int INTERRUPTS_INTI2C0BRX = 127;
static const int INTERRUPTS_INTI2C0NA = 128;
static const int INTERRUPTS_INTI2C1NST = 129;
static const int INTERRUPTS_INTI2C1ATX = 130;
static const int INTERRUPTS_INTI2C1BRX = 131;
static const int INTERRUPTS_INTI2C1NA = 132;
static const int INTERRUPTS_INTI2C2NST = 133;
static const int INTERRUPTS_INTI2C2ATX = 134;
static const int INTERRUPTS_INTI2C2BRX = 135;
static const int INTERRUPTS_INTI2C2NA = 136;
static const int INTERRUPTS_INTI2C3NST = 137;
static const int INTERRUPTS_INTI2C3ATX = 138;
static const int INTERRUPTS_INTI2C3BRX = 139;
static const int INTERRUPTS_INTI2C3NA = 140;
static const int INTERRUPTS_INTI2C4NST = 141;
static const int INTERRUPTS_INTI2C4ATX = 142;
static const int INTERRUPTS_INTI2C4BRX = 143;
static const int INTERRUPTS_INTI2C4NA = 144;
static const int INTERRUPTS_INTADACP0 = 145;
static const int INTERRUPTS_INTADACP1 = 146;
static const int INTERRUPTS_INTADATRG = 147;
static const int INTERRUPTS_INTADASGL = 148;
static const int INTERRUPTS_INTADACNT = 149;
static const int INTERRUPTS_INTADAHP = 150;
static const int INTERRUPTS_INTFLDRDY = 151;
static const int INTERRUPTS_INTFLCRDY = 152;
static const int INTERRUPTS_INTMDMAABERR = 155;
static const int INTERRUPTS_INTMDMAADERR = 156;
static const int INTERRUPTS_INTI2S0SI = 157;
static const int INTERRUPTS_INTI2S0SIERR = 158;
static const int INTERRUPTS_INTI2S0SO = 159;
static const int INTERRUPTS_INTI2S0SOERR = 160;
static const int INTERRUPTS_INTI2S1SI = 161;
static const int INTERRUPTS_INTI2S1SIERR = 162;
static const int INTERRUPTS_INTI2S1SO = 163;
static const int INTERRUPTS_INTI2S1SOERR = 164;
static const int INTERRUPTS_INTFIR0 = 165;
static const int INTERRUPTS_INTTSSI0RX = 166;
static const int INTERRUPTS_INTTSSI0TX = 167;
static const int INTERRUPTS_INTTSSI0ERR = 168;
static const int INTERRUPTS_INTEMA = 172;
static const int INTERRUPTS_INTEMAMP = 173;
static const int INTERRUPTS_INTCANARXD = 174;
static const int INTERRUPTS_INTCANATXD = 175;
static const int INTERRUPTS_INTCANAGLB = 176;
static const int INTERRUPTS_INTCANBRXD = 177;
static const int INTERRUPTS_INTCANBTXD = 178;
static const int INTERRUPTS_INTCANBGLB = 179;
static const int INTERRUPTS_INTUSBOTGA = 180;
static const int INTERRUPTS_INTUSBOTGAWK = 181;
static const int INTERRUPTS_INTUSBOTGB = 182;
static const int INTERRUPTS_INTUSBOTGBWK = 183;
static const int INTERRUPTS_INTT32A14_A = 184;
static const int INTERRUPTS_INTT32A14_B = 185;
static const int INTERRUPTS_INTT32A14_CT = 186;
static const int INTERRUPTS_INTT32A15_A = 187;
static const int INTERRUPTS_INTT32A15_B = 188;
static const int INTERRUPTS_INTT32A15_C = 189;
static const int INTERRUPTS_INTMDMAADISR = 190;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for TMPM4NQF10XBG.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for TMPM4NQF10XBG.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
