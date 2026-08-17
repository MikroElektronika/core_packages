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
* @brief TMPM3HMFYFG MCU specific interrupt per module definitions.
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
static const int INTERRUPTS_INTEMG0 = 32;
static const int INTERRUPTS_INTOVV0 = 33;
static const int INTERRUPTS_INTPMD0 = 34;
static const int INTERRUPTS_INTENC00 = 35;
static const int INTERRUPTS_INTENC01 = 36;
static const int INTERRUPTS_INTADAPDA = 37;
static const int INTERRUPTS_INTADAPDB = 38;
static const int INTERRUPTS_INTADACP0 = 39;
static const int INTERRUPTS_INTADACP1 = 40;
static const int INTERRUPTS_INTADATRG = 41;
static const int INTERRUPTS_INTADASGL = 42;
static const int INTERRUPTS_INTADACNT = 43;
static const int INTERRUPTS_INTT0RX = 44;
static const int INTERRUPTS_INTT0TX = 45;
static const int INTERRUPTS_INTT0ERR = 46;
static const int INTERRUPTS_INTI2CWUP = 50;
static const int INTERRUPTS_INTI2C0 = 51;
static const int INTERRUPTS_INTI2C0AL = 52;
static const int INTERRUPTS_INTI2C0BF = 53;
static const int INTERRUPTS_INTI2C0NA = 54;
static const int INTERRUPTS_INTUART0RX = 63;
static const int INTERRUPTS_INTUART0TX = 64;
static const int INTERRUPTS_INTUART0ERR = 65;
static const int INTERRUPTS_INTUART1RX = 66;
static const int INTERRUPTS_INTUART1TX = 67;
static const int INTERRUPTS_INTUART1ERR = 68;
static const int INTERRUPTS_INTT32A00A = 72;
static const int INTERRUPTS_INTT32A00ACAP0 = 73;
static const int INTERRUPTS_INTT32A00ACAP1 = 74;
static const int INTERRUPTS_INTT32A00B = 75;
static const int INTERRUPTS_INTT32A00BCAP0 = 76;
static const int INTERRUPTS_INTT32A00BCAP1 = 77;
static const int INTERRUPTS_INTT32A00C = 78;
static const int INTERRUPTS_INTT32A00CCAP0 = 79;
static const int INTERRUPTS_INTT32A00CCAP1 = 80;
static const int INTERRUPTS_INTT32A01A = 81;
static const int INTERRUPTS_INTT32A01ACAP0 = 82;
static const int INTERRUPTS_INTT32A01ACAP1 = 83;
static const int INTERRUPTS_INTT32A01B = 84;
static const int INTERRUPTS_INTT32A01BCAP0 = 85;
static const int INTERRUPTS_INTT32A01BCAP1 = 86;
static const int INTERRUPTS_INTT32A01C = 87;
static const int INTERRUPTS_INTT32A01CCAP0 = 88;
static const int INTERRUPTS_INTT32A01CCAP1 = 89;
static const int INTERRUPTS_INTT32A02A = 90;
static const int INTERRUPTS_INTT32A02ACAP0 = 91;
static const int INTERRUPTS_INTT32A02ACAP1 = 92;
static const int INTERRUPTS_INTT32A02B = 93;
static const int INTERRUPTS_INTT32A02BCAP0 = 94;
static const int INTERRUPTS_INTT32A02BCAP1 = 95;
static const int INTERRUPTS_INTT32A02C = 96;
static const int INTERRUPTS_INTT32A02CCAP0 = 97;
static const int INTERRUPTS_INTT32A02CCAP1 = 98;
static const int INTERRUPTS_INTT32A03A = 99;
static const int INTERRUPTS_INTT32A03ACAP0 = 100;
static const int INTERRUPTS_INTT32A03ACAP1 = 101;
static const int INTERRUPTS_INTT32A03B = 102;
static const int INTERRUPTS_INTT32A03BCAP0 = 103;
static const int INTERRUPTS_INTT32A03BCAP1 = 104;
static const int INTERRUPTS_INTT32A03C = 105;
static const int INTERRUPTS_INTT32A03CCAP0 = 106;
static const int INTERRUPTS_INTT32A03CCAP1 = 107;
static const int INTERRUPTS_INTT32A04A = 108;
static const int INTERRUPTS_INTT32A04ACAP0 = 109;
static const int INTERRUPTS_INTT32A04ACAP1 = 110;
static const int INTERRUPTS_INTT32A04B = 111;
static const int INTERRUPTS_INTT32A04BCAP0 = 112;
static const int INTERRUPTS_INTT32A04BCAP1 = 113;
static const int INTERRUPTS_INTT32A04C = 114;
static const int INTERRUPTS_INTT32A04CCAP0 = 115;
static const int INTERRUPTS_INTT32A04CCAP1 = 116;
static const int INTERRUPTS_INTT32A05A = 117;
static const int INTERRUPTS_INTT32A05ACAP0 = 118;
static const int INTERRUPTS_INTT32A05ACAP1 = 119;
static const int INTERRUPTS_INTT32A05B = 120;
static const int INTERRUPTS_INTT32A05BCAP0 = 121;
static const int INTERRUPTS_INTT32A05BCAP1 = 122;
static const int INTERRUPTS_INTT32A05C = 123;
static const int INTERRUPTS_INTT32A05CCAP0 = 124;
static const int INTERRUPTS_INTT32A05CCAP1 = 125;
static const int INTERRUPTS_INTDMAATC = 126;
static const int INTERRUPTS_INTDMAAERR = 127;
static const int INTERRUPTS_INTRMC0 = 130;
static const int INTERRUPTS_INTFLCRDY = 131;
static const int INTERRUPTS_INTFLDRDY = 132;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for TMPM3HMFYFG.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for TMPM3HMFYFG.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
