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
* @brief TMPM4L2FWDUG MCU specific interrupt per module definitions.
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
static const int INTERRUPTS_INT07 = 7;
static const int INTERRUPTS_INTT32A00_AT_CT = 8;
static const int INTERRUPTS_INTT32A00_A01_C0 = 9;
static const int INTERRUPTS_INTT32A00_BT_C1 = 10;
static const int INTERRUPTS_INTT32A00_B01 = 11;
static const int INTERRUPTS_INTT32A01_AT_CT = 12;
static const int INTERRUPTS_INTT32A01_A01_C0 = 13;
static const int INTERRUPTS_INTT32A01_BT_C1 = 14;
static const int INTERRUPTS_INTT32A01_B01 = 15;
static const int INTERRUPTS_INTT32A02_AT_CT = 16;
static const int INTERRUPTS_INTT32A02_A01_C0 = 17;
static const int INTERRUPTS_INTT32A02_BT_C1 = 18;
static const int INTERRUPTS_INTT32A02_B01 = 19;
static const int INTERRUPTS_INTT32A03_AT_CT = 20;
static const int INTERRUPTS_INTT32A03_A01_C0 = 21;
static const int INTERRUPTS_INTT32A03_BT_C1 = 22;
static const int INTERRUPTS_INTT32A03_B01 = 23;
static const int INTERRUPTS_INTVCN0 = 24;
static const int INTERRUPTS_INTVCT0 = 25;
static const int INTERRUPTS_INTEMG0 = 26;
static const int INTERRUPTS_INTOVV0 = 27;
static const int INTERRUPTS_INTPWM0 = 28;
static const int INTERRUPTS_INTENC00 = 29;
static const int INTERRUPTS_INTENC01 = 30;
static const int INTERRUPTS_INTADAPDA = 31;
static const int INTERRUPTS_INTADAPDB = 32;
static const int INTERRUPTS_INTADACP0 = 33;
static const int INTERRUPTS_INTADACP1 = 34;
static const int INTERRUPTS_INTADATRG = 35;
static const int INTERRUPTS_INTADASGL = 36;
static const int INTERRUPTS_INTADACNT = 37;
static const int INTERRUPTS_INTT0RX = 38;
static const int INTERRUPTS_INTT0TX = 39;
static const int INTERRUPTS_INTT0ERR = 40;
static const int INTERRUPTS_INTT1RX = 41;
static const int INTERRUPTS_INTT1TX = 42;
static const int INTERRUPTS_INTT1ERR = 43;
static const int INTERRUPTS_INTT2RX = 44;
static const int INTERRUPTS_INTT2TX = 45;
static const int INTERRUPTS_INTT2ERR = 46;
static const int INTERRUPTS_INTUART0RX = 47;
static const int INTERRUPTS_INTUART0TX = 48;
static const int INTERRUPTS_INTUART0ERR = 49;
static const int INTERRUPTS_INTUART1RX = 50;
static const int INTERRUPTS_INTUART1TX = 51;
static const int INTERRUPTS_INTUART1ERR = 52;
static const int INTERRUPTS_INTUART2RX = 53;
static const int INTERRUPTS_INTUART2TX = 54;
static const int INTERRUPTS_INTUART2ERR = 55;
static const int INTERRUPTS_INTPARI0 = 56;
static const int INTERRUPTS_INTFLCRDY = 57;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for TMPM4L2FWDUG.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for TMPM4L2FWDUG.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
