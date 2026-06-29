/****************************************************************************
**
** Copyright (C) ${COPYRIGHT_YEAR_MIKROE} MikroElektronika d.o.o.
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
* @brief TMPM4L1FWUG MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_INT00 = 0;
static const int INTERRUPTS_INT01 = 1;
static const int INTERRUPTS_INT02 = 2;
static const int INTERRUPTS_INT03 = 3;
static const int INTERRUPTS_INT04 = 4;
static const int INTERRUPTS_INT05 = 5;
static const int INTERRUPTS_INT06 = 6;
static const int INTERRUPTS_INTT32A00_AT_CT = 7;
static const int INTERRUPTS_INTT32A00_A01_C0 = 8;
static const int INTERRUPTS_INTT32A00_BT_C1 = 9;
static const int INTERRUPTS_INTT32A00_B01 = 10;
static const int INTERRUPTS_INTT32A01_AT_CT = 11;
static const int INTERRUPTS_INTT32A01_A01_C0 = 12;
static const int INTERRUPTS_INTT32A01_BT_C1 = 13;
static const int INTERRUPTS_INTT32A01_B01 = 14;
static const int INTERRUPTS_INTT32A02_AT_CT = 15;
static const int INTERRUPTS_INTT32A02_A01_C0 = 16;
static const int INTERRUPTS_INTT32A02_BT_C1 = 17;
static const int INTERRUPTS_INTT32A02_B01 = 18;
static const int INTERRUPTS_INTT32A03_AT_CT = 19;
static const int INTERRUPTS_INTT32A03_A01_C0 = 20;
static const int INTERRUPTS_INTT32A03_BT_C1 = 21;
static const int INTERRUPTS_INTT32A03_B01 = 22;
static const int INTERRUPTS_INTVCN0 = 23;
static const int INTERRUPTS_INTVCT0 = 24;
static const int INTERRUPTS_INTEMG0 = 25;
static const int INTERRUPTS_INTOVV0 = 26;
static const int INTERRUPTS_INTPWM0 = 27;
static const int INTERRUPTS_INTENC00 = 28;
static const int INTERRUPTS_INTENC01 = 29;
static const int INTERRUPTS_INTADAPDA = 30;
static const int INTERRUPTS_INTADAPDB = 31;
static const int INTERRUPTS_INTADACP0 = 32;
static const int INTERRUPTS_INTADACP1 = 33;
static const int INTERRUPTS_INTADATRG = 34;
static const int INTERRUPTS_INTADASGL = 35;
static const int INTERRUPTS_INTADACNT = 36;
static const int INTERRUPTS_INTT0RX = 37;
static const int INTERRUPTS_INTT0TX = 38;
static const int INTERRUPTS_INTT0ERR = 39;
static const int INTERRUPTS_INTT1RX = 40;
static const int INTERRUPTS_INTT1TX = 41;
static const int INTERRUPTS_INTT1ERR = 42;
static const int INTERRUPTS_INTT2RX = 43;
static const int INTERRUPTS_INTT2TX = 44;
static const int INTERRUPTS_INTT2ERR = 45;
static const int INTERRUPTS_INTUART0RX = 46;
static const int INTERRUPTS_INTUART0TX = 47;
static const int INTERRUPTS_INTUART0ERR = 48;
static const int INTERRUPTS_INTUART1RX = 49;
static const int INTERRUPTS_INTUART1TX = 50;
static const int INTERRUPTS_INTUART1ERR = 51;
static const int INTERRUPTS_INTUART2RX = 52;
static const int INTERRUPTS_INTUART2TX = 53;
static const int INTERRUPTS_INTUART2ERR = 54;
static const int INTERRUPTS_INTPARI0 = 55;
static const int INTERRUPTS_INTFLCRDY = 56;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for TMPM4L1FWUG.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for TMPM4L1FWUG.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
