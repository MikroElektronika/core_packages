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
* @brief TMPM4K1FUAUG MCU specific interrupt per module definitions.
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
static const int INTERRUPTS_INTVCN0 = 27;
static const int INTERRUPTS_INTVCT0 = 28;
static const int INTERRUPTS_INTEMG0 = 29;
static const int INTERRUPTS_INTEMG1 = 30;
static const int INTERRUPTS_INTOVV0 = 31;
static const int INTERRUPTS_INTOVV1 = 32;
static const int INTERRUPTS_INTPWM0 = 33;
static const int INTERRUPTS_INTPWM1 = 34;
static const int INTERRUPTS_INTENC00 = 35;
static const int INTERRUPTS_INTENC01 = 36;
static const int INTERRUPTS_INTADAPDA = 37;
static const int INTERRUPTS_INTADAPDB = 38;
static const int INTERRUPTS_INTADAPDC = 39;
static const int INTERRUPTS_INTADAPDD = 40;
static const int INTERRUPTS_INTADAPFLG = 41;
static const int INTERRUPTS_INTADACP0 = 42;
static const int INTERRUPTS_INTADACP1 = 43;
static const int INTERRUPTS_INTADATRG = 44;
static const int INTERRUPTS_INTADASGL = 45;
static const int INTERRUPTS_INTADACNT = 46;
static const int INTERRUPTS_INTSC0RX = 47;
static const int INTERRUPTS_INTSC0TX = 48;
static const int INTERRUPTS_INTSC0ERR = 49;
static const int INTERRUPTS_INTSC2RX = 53;
static const int INTERRUPTS_INTSC2TX = 54;
static const int INTERRUPTS_INTSC2ERR = 55;
static const int INTERRUPTS_INTI2C0 = 59;
static const int INTERRUPTS_INTI2C0AL = 60;
static const int INTERRUPTS_INTI2C0BF = 61;
static const int INTERRUPTS_INTI2C0NA = 62;
static const int INTERRUPTS_INTT32A0AC = 63;
static const int INTERRUPTS_INTT32A0ACCAP0 = 64;
static const int INTERRUPTS_INTT32A0ACCAP1 = 65;
static const int INTERRUPTS_INTT32A0B = 66;
static const int INTERRUPTS_INTT32A0BCAP0 = 67;
static const int INTERRUPTS_INTT32A0BCAP1 = 68;
static const int INTERRUPTS_INTT32A1AC = 69;
static const int INTERRUPTS_INTT32A1ACCAP0 = 70;
static const int INTERRUPTS_INTT32A1ACCAP1 = 71;
static const int INTERRUPTS_INTT32A1B = 72;
static const int INTERRUPTS_INTT32A1BCAP0 = 73;
static const int INTERRUPTS_INTT32A1BCAP1 = 74;
static const int INTERRUPTS_INTT32A2AC = 75;
static const int INTERRUPTS_INTT32A2ACCAP0 = 76;
static const int INTERRUPTS_INTT32A2ACCAP1 = 77;
static const int INTERRUPTS_INTT32A2B = 78;
static const int INTERRUPTS_INTT32A2BCAP0 = 79;
static const int INTERRUPTS_INTT32A2BCAP1 = 80;
static const int INTERRUPTS_INTT32A3AC = 81;
static const int INTERRUPTS_INTT32A3ACCAP0 = 82;
static const int INTERRUPTS_INTT32A3ACCAP1 = 83;
static const int INTERRUPTS_INTT32A3B = 84;
static const int INTERRUPTS_INTT32A3BCAP0 = 85;
static const int INTERRUPTS_INTT32A3BCAP1 = 86;
static const int INTERRUPTS_INTT32A4AC = 87;
static const int INTERRUPTS_INTT32A4ACCAP0 = 88;
static const int INTERRUPTS_INTT32A4ACCAP1 = 89;
static const int INTERRUPTS_INTT32A4B = 90;
static const int INTERRUPTS_INTT32A4BCAP0 = 91;
static const int INTERRUPTS_INTT32A4BCAP1 = 92;
static const int INTERRUPTS_INTT32A5AC = 93;
static const int INTERRUPTS_INTT32A5ACCAP0 = 94;
static const int INTERRUPTS_INTT32A5ACCAP1 = 95;
static const int INTERRUPTS_INTT32A5B = 96;
static const int INTERRUPTS_INTT32A5BCAP0 = 97;
static const int INTERRUPTS_INTT32A5BCAP1 = 98;
static const int INTERRUPTS_INTPARI = 99;
static const int INTERRUPTS_INTDMAATC = 100;
static const int INTERRUPTS_INTDMAAERR = 101;
static const int INTERRUPTS_INTFLCRDY = 103;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for TMPM4K1FUAUG.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for TMPM4K1FUAUG.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
