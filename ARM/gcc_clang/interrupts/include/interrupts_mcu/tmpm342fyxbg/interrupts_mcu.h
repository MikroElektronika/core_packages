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
* @brief TMPM342FYXBG MCU specific interrupt per module definitions.
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
static const int INTERRUPTS_INTPSCSTOP = 24;
static const int INTERRUPTS_INTPSCBRK = 25;
static const int INTERRUPTS_INTPSCSTEP = 26;
static const int INTERRUPTS_INTPSCII = 27;
static const int INTERRUPTS_INTPSCIA = 28;
static const int INTERRUPTS_INTTB0 = 29;
static const int INTERRUPTS_INTTB1 = 30;
static const int INTERRUPTS_INTTB2 = 31;
static const int INTERRUPTS_INTTX0 = 32;
static const int INTERRUPTS_INTRX0 = 33;
static const int INTERRUPTS_INTTX1 = 34;
static const int INTERRUPTS_INTRX1 = 35;
static const int INTERRUPTS_INTTX2 = 36;
static const int INTERRUPTS_INTRX2 = 37;
static const int INTERRUPTS_INTTX3 = 38;
static const int INTERRUPTS_INTS = 39;
static const int INTERRUPTS_INTAD0HP = 40;
static const int INTERRUPTS_INTAD0 = 41;
static const int INTERRUPTS_INTAD1HP = 42;
static const int INTERRUPTS_INTAD1 = 43;
static const int INTERRUPTS_INTDSADHP = 44;
static const int INTERRUPTS_INTDSAD = 45;
static const int INTERRUPTS_INTI2C = 46;
static const int INTERRUPTS_INTTB3 = 47;
static const int INTERRUPTS_INTTB4 = 48;
static const int INTERRUPTS_INTTB5 = 49;
static const int INTERRUPTS_INTTB6 = 50;
static const int INTERRUPTS_INTTB7 = 51;
static const int INTERRUPTS_INTTB8 = 52;
static const int INTERRUPTS_INTTB9 = 53;
static const int INTERRUPTS_INTTD0CMP0 = 54;
static const int INTERRUPTS_INTTD0CMP1 = 55;
static const int INTERRUPTS_INTTD0CMP2 = 56;
static const int INTERRUPTS_INTTD0CMP3 = 57;
static const int INTERRUPTS_INTTD0CMP4 = 58;
static const int INTERRUPTS_INTTD1CMP0 = 59;
static const int INTERRUPTS_INTTD1CMP1 = 60;
static const int INTERRUPTS_INTTD1CMP2 = 61;
static const int INTERRUPTS_INTTD1CMP3 = 62;
static const int INTERRUPTS_INTTD1CMP4 = 63;
static const int INTERRUPTS_INTTD2CMP0 = 64;
static const int INTERRUPTS_INTTD2CMP1 = 65;
static const int INTERRUPTS_INTTD2CMP2 = 66;
static const int INTERRUPTS_INTTD2CMP3 = 67;
static const int INTERRUPTS_INTTD2CMP4 = 68;
static const int INTERRUPTS_INTTD3CMP0 = 69;
static const int INTERRUPTS_INTTD3CMP1 = 70;
static const int INTERRUPTS_INTTD3CMP2 = 71;
static const int INTERRUPTS_INTTD3CMP3 = 72;
static const int INTERRUPTS_INTTD3CMP4 = 73;
static const int INTERRUPTS_INTEC0 = 74;
static const int INTERRUPTS_INTEC0OVF = 75;
static const int INTERRUPTS_INTEC0DIR = 76;
static const int INTERRUPTS_INTEC0DT0 = 77;
static const int INTERRUPTS_INTEC0DT1 = 78;
static const int INTERRUPTS_INTEC0DT2 = 79;
static const int INTERRUPTS_INTEC0DT3 = 80;
static const int INTERRUPTS_INTEC1 = 81;
static const int INTERRUPTS_INTEC1OVF = 82;
static const int INTERRUPTS_INTEC1DIR = 83;
static const int INTERRUPTS_INTEC1DT0 = 84;
static const int INTERRUPTS_INTEC1DT1 = 85;
static const int INTERRUPTS_INTEC1DT2 = 86;
static const int INTERRUPTS_INTEC1DT3 = 87;
static const int INTERRUPTS_INTAD0M0 = 88;
static const int INTERRUPTS_INTAD0M1 = 89;
static const int INTERRUPTS_INTAD1M0 = 90;
static const int INTERRUPTS_INTAD1M1 = 91;
static const int INTERRUPTS_INTDMAC0TC = 92;
static const int INTERRUPTS_INTDMAC0ERR = 93;
static const int INTERRUPTS_INTDMAC1TC = 94;
static const int INTERRUPTS_INTDMAC1ERR = 95;
static const int INTERRUPTS_INTSSP = 96;
static const int INTERRUPTS_INTVTX = 97;
static const int INTERRUPTS_INTVRX = 98;
static const int INTERRUPTS_INT8 = 100;
static const int INTERRUPTS_INT9 = 101;
static const int INTERRUPTS_INTA = 102;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for TMPM342FYXBG.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for TMPM342FYXBG.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
