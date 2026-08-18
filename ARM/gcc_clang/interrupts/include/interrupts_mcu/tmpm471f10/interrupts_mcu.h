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
* @brief TMPM471F10 MCU specific interrupt per module definitions.
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
static const int INTERRUPTS_INTEMG0 = 32;
static const int INTERRUPTS_INTEMG1 = 33;
static const int INTERRUPTS_INTOVV0 = 34;
static const int INTERRUPTS_INTOVV1 = 35;
static const int INTERRUPTS_INTPWM0 = 36;
static const int INTERRUPTS_INTPWM1 = 37;
static const int INTERRUPTS_INTENC00 = 38;
static const int INTERRUPTS_INTENC01 = 39;
static const int INTERRUPTS_INTENC10 = 40;
static const int INTERRUPTS_INTENC11 = 41;
static const int INTERRUPTS_INTADAPDA = 42;
static const int INTERRUPTS_INTADAPDB = 43;
static const int INTERRUPTS_INTADACP0 = 44;
static const int INTERRUPTS_INTADACP1 = 45;
static const int INTERRUPTS_INTADATRG = 46;
static const int INTERRUPTS_INTADASGL = 47;
static const int INTERRUPTS_INTADACNT = 48;
static const int INTERRUPTS_INTADBPDA = 49;
static const int INTERRUPTS_INTADBPDB = 50;
static const int INTERRUPTS_INTADBCP0 = 51;
static const int INTERRUPTS_INTADBCP1 = 52;
static const int INTERRUPTS_INTADBTRG = 53;
static const int INTERRUPTS_INTADBSGL = 54;
static const int INTERRUPTS_INTADBCNT = 55;
static const int INTERRUPTS_INTSC0RX = 56;
static const int INTERRUPTS_INTSC0TX = 57;
static const int INTERRUPTS_INTSC0ERR = 58;
static const int INTERRUPTS_INTSC1RX = 59;
static const int INTERRUPTS_INTSC1TX = 60;
static const int INTERRUPTS_INTSC1ERR = 61;
static const int INTERRUPTS_INTSC2RX = 62;
static const int INTERRUPTS_INTSC2TX = 63;
static const int INTERRUPTS_INTSC2ERR = 64;
static const int INTERRUPTS_INTSC3RX = 65;
static const int INTERRUPTS_INTSC3TX = 66;
static const int INTERRUPTS_INTSC3ERR = 67;
static const int INTERRUPTS_INTUART4RX = 68;
static const int INTERRUPTS_INTUART4TX = 69;
static const int INTERRUPTS_INTUART4ERR = 70;
static const int INTERRUPTS_INTI2C0ST = 71;
static const int INTERRUPTS_INTI2C0TBE = 72;
static const int INTERRUPTS_INTI2C0RBF = 73;
static const int INTERRUPTS_INTI2C1ST = 74;
static const int INTERRUPTS_INTI2C1TBE = 75;
static const int INTERRUPTS_INTI2C1RBF = 76;
static const int INTERRUPTS_INTT32A00AC = 77;
static const int INTERRUPTS_INTT32A00ACCAP0 = 78;
static const int INTERRUPTS_INTT32A00ACCAP1 = 79;
static const int INTERRUPTS_INTT32A00B = 80;
static const int INTERRUPTS_INTT32A00BCAP0 = 81;
static const int INTERRUPTS_INTT32A00BCAP1 = 82;
static const int INTERRUPTS_INTT32A01AC = 83;
static const int INTERRUPTS_INTT32A01ACCAP0 = 84;
static const int INTERRUPTS_INTT32A01ACCAP1 = 85;
static const int INTERRUPTS_INTT32A01B = 86;
static const int INTERRUPTS_INTT32A01BCAP0 = 87;
static const int INTERRUPTS_INTT32A01BCAP1 = 88;
static const int INTERRUPTS_INTT32A02AC = 89;
static const int INTERRUPTS_INTT32A02ACCAP0 = 90;
static const int INTERRUPTS_INTT32A02ACCAP1 = 91;
static const int INTERRUPTS_INTT32A02B = 92;
static const int INTERRUPTS_INTT32A02BCAP0 = 93;
static const int INTERRUPTS_INTT32A02BCAP1 = 94;
static const int INTERRUPTS_INTT32A03AC = 95;
static const int INTERRUPTS_INTT32A03ACCAP0 = 96;
static const int INTERRUPTS_INTT32A03ACCAP1 = 97;
static const int INTERRUPTS_INTT32A03B = 98;
static const int INTERRUPTS_INTT32A03BCAP0 = 99;
static const int INTERRUPTS_INTT32A03BCAP1 = 100;
static const int INTERRUPTS_INTT32A04AC = 101;
static const int INTERRUPTS_INTT32A04ACCAP0 = 102;
static const int INTERRUPTS_INTT32A04ACCAP1 = 103;
static const int INTERRUPTS_INTT32A04B = 104;
static const int INTERRUPTS_INTT32A04BCAP0 = 105;
static const int INTERRUPTS_INTT32A04BCAP1 = 106;
static const int INTERRUPTS_INTPARI0 = 107;
static const int INTERRUPTS_INTPARI1 = 108;
static const int INTERRUPTS_INTDMAATC = 109;
static const int INTERRUPTS_INTDMAAERR = 110;
static const int INTERRUPTS_INTFLCRDY = 111;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for TMPM471F10.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for TMPM471F10.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
