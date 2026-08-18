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
* @brief TMPM366FYFG MCU specific interrupt per module definitions.
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
static const int INTERRUPTS_INTRX0 = 24;
static const int INTERRUPTS_INTTX0 = 25;
static const int INTERRUPTS_INTRX1 = 26;
static const int INTERRUPTS_INTTX1 = 27;
static const int INTERRUPTS_INTUSBWKUP = 28;
static const int INTERRUPTS_INTSBI0 = 30;
static const int INTERRUPTS_INTSBI1 = 31;
static const int INTERRUPTS_INTADHP = 32;
static const int INTERRUPTS_INTAD = 33;
static const int INTERRUPTS_INTADM0 = 34;
static const int INTERRUPTS_INTADM1 = 35;
static const int INTERRUPTS_INTTB0 = 36;
static const int INTERRUPTS_INTTB1 = 37;
static const int INTERRUPTS_INTTB2 = 38;
static const int INTERRUPTS_INTTB3 = 39;
static const int INTERRUPTS_INTTB4 = 40;
static const int INTERRUPTS_INTTB5 = 41;
static const int INTERRUPTS_INTTB6 = 42;
static const int INTERRUPTS_INTTB7 = 43;
static const int INTERRUPTS_INTTB8 = 44;
static const int INTERRUPTS_INTTB9 = 45;
static const int INTERRUPTS_INTUSB = 46;
static const int INTERRUPTS_INTSSP2 = 47;
static const int INTERRUPTS_INTUSBPON = 50;
static const int INTERRUPTS_INTUART = 51;
static const int INTERRUPTS_INTCAP00 = 52;
static const int INTERRUPTS_INTCAP01 = 53;
static const int INTERRUPTS_INTCAP10 = 54;
static const int INTERRUPTS_INTCAP11 = 55;
static const int INTERRUPTS_INTCAP20 = 56;
static const int INTERRUPTS_INTCAP21 = 57;
static const int INTERRUPTS_INTCAP30 = 58;
static const int INTERRUPTS_INTCAP31 = 59;
static const int INTERRUPTS_INTCAP40 = 60;
static const int INTERRUPTS_INTCAP41 = 61;
static const int INTERRUPTS_INTCAP50 = 62;
static const int INTERRUPTS_INTCAP51 = 63;
static const int INTERRUPTS_INTCAP60 = 64;
static const int INTERRUPTS_INTCAP61 = 65;
static const int INTERRUPTS_INTCAP70 = 66;
static const int INTERRUPTS_INTCAP71 = 67;
static const int INTERRUPTS_INTCAP80 = 68;
static const int INTERRUPTS_INTCAP81 = 69;
static const int INTERRUPTS_INTCAP90 = 70;
static const int INTERRUPTS_INTCAP91 = 71;
static const int INTERRUPTS_INT8 = 72;
static const int INTERRUPTS_INT9 = 73;
static const int INTERRUPTS_INTSSP1 = 74;
static const int INTERRUPTS_INTSSP0 = 75;
static const int INTERRUPTS_INTDMAC0TC = 76;
static const int INTERRUPTS_INTDMAC1TC = 77;
static const int INTERRUPTS_INTDMAC0ERR = 78;
static const int INTERRUPTS_INTDMAC1ERR = 79;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for TMPM366FYFG.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for TMPM366FYFG.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
