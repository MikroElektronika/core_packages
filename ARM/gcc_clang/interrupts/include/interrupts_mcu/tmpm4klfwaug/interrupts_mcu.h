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
** OF MERCHANTABILITY, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED
** TO THE WARRANTIES FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
** IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
** DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT
** OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
** OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**
****************************************************************************/
/*!
* @file  interrupts_mcu.h
* @brief TMPM4KLFWAUG MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_NONMASKABLEINT = 2;
static const int INTERRUPTS_HARDFAULT = 3;
static const int INTERRUPTS_MEMORYMANAGEMENT = 4;
static const int INTERRUPTS_BUSFAULT = 5;
static const int INTERRUPTS_USAGEFAULT = 6;
static const int INTERRUPTS_SVCALL = 11;
static const int INTERRUPTS_DEBUGMONITOR = 12;
static const int INTERRUPTS_PENDSV = 14;
static const int INTERRUPTS_SYSTICK = 15;
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
static const int INTERRUPTS_INT12 = 28;
static const int INTERRUPTS_INT13 = 29;
static const int INTERRUPTS_INT21 = 37;
static const int INTERRUPTS_INTVCN0 = 38;
static const int INTERRUPTS_INTVCT0 = 39;
static const int INTERRUPTS_INTEMG0 = 40;
static const int INTERRUPTS_INTEMG1 = 41;
static const int INTERRUPTS_INTEMG2 = 42;
static const int INTERRUPTS_INTOVV0 = 43;
static const int INTERRUPTS_INTOVV1 = 44;
static const int INTERRUPTS_INTOVV2 = 45;
static const int INTERRUPTS_INTPWM0 = 46;
static const int INTERRUPTS_INTPWM1 = 47;
static const int INTERRUPTS_INTPWM2 = 48;
static const int INTERRUPTS_INTENC20 = 53;
static const int INTERRUPTS_INTENC21 = 54;
static const int INTERRUPTS_INTADAPDA = 55;
static const int INTERRUPTS_INTADAPDB = 56;
static const int INTERRUPTS_INTADACP0 = 57;
static const int INTERRUPTS_INTADACP1 = 58;
static const int INTERRUPTS_INTADATRG = 59;
static const int INTERRUPTS_INTADASGL = 60;
static const int INTERRUPTS_INTADACNT = 61;
static const int INTERRUPTS_INTADBPDA = 62;
static const int INTERRUPTS_INTADBPDB = 63;
static const int INTERRUPTS_INTADBCP0 = 64;
static const int INTERRUPTS_INTADBCP1 = 65;
static const int INTERRUPTS_INTADBTRG = 66;
static const int INTERRUPTS_INTADBSGL = 67;
static const int INTERRUPTS_INTADBCNT = 68;
static const int INTERRUPTS_INTADCPDA = 69;
static const int INTERRUPTS_INTADCPDB = 70;
static const int INTERRUPTS_INTADCCP0 = 71;
static const int INTERRUPTS_INTADCCP1 = 72;
static const int INTERRUPTS_INTADCTRG = 73;
static const int INTERRUPTS_INTADCSGL = 74;
static const int INTERRUPTS_INTADCCNT = 75;
static const int INTERRUPTS_INTSC0RX = 76;
static const int INTERRUPTS_INTSC0TX = 77;
static const int INTERRUPTS_INTSC0ERR = 78;
static const int INTERRUPTS_INTSC1RX = 79;
static const int INTERRUPTS_INTSC1TX = 80;
static const int INTERRUPTS_INTSC1ERR = 81;
static const int INTERRUPTS_INTSC2RX = 82;
static const int INTERRUPTS_INTSC2TX = 83;
static const int INTERRUPTS_INTSC2ERR = 84;
static const int INTERRUPTS_INTI2C0NST = 88;
static const int INTERRUPTS_INTI2C0ATX = 89;
static const int INTERRUPTS_INTI2C0BRX = 90;
static const int INTERRUPTS_INTI2C0NA = 91;
static const int INTERRUPTS_INTI2C1NST = 92;
static const int INTERRUPTS_INTI2C1ATX = 93;
static const int INTERRUPTS_INTI2C1BRX = 94;
static const int INTERRUPTS_INTI2C1NA = 95;
static const int INTERRUPTS_INTT32A00AC = 99;
static const int INTERRUPTS_INTT32A00ACCAP0 = 100;
static const int INTERRUPTS_INTT32A00ACCAP1 = 101;
static const int INTERRUPTS_INTT32A00B = 102;
static const int INTERRUPTS_INTT32A00BCAP0 = 103;
static const int INTERRUPTS_INTT32A00BCAP1 = 104;
static const int INTERRUPTS_INTT32A01AC = 105;
static const int INTERRUPTS_INTT32A01ACCAP0 = 106;
static const int INTERRUPTS_INTT32A01ACCAP1 = 107;
static const int INTERRUPTS_INTT32A01B = 108;
static const int INTERRUPTS_INTT32A01BCAP0 = 109;
static const int INTERRUPTS_INTT32A01BCAP1 = 110;
static const int INTERRUPTS_INTT32A02AC = 111;
static const int INTERRUPTS_INTT32A02ACCAP0 = 112;
static const int INTERRUPTS_INTT32A02ACCAP1 = 113;
static const int INTERRUPTS_INTT32A02B = 114;
static const int INTERRUPTS_INTT32A02BCAP0 = 115;
static const int INTERRUPTS_INTT32A02BCAP1 = 116;
static const int INTERRUPTS_INTT32A03AC = 117;
static const int INTERRUPTS_INTT32A03ACCAP0 = 118;
static const int INTERRUPTS_INTT32A03ACCAP1 = 119;
static const int INTERRUPTS_INTT32A03B = 120;
static const int INTERRUPTS_INTT32A03BCAP0 = 121;
static const int INTERRUPTS_INTT32A03BCAP1 = 122;
static const int INTERRUPTS_INTT32A04AC = 123;
static const int INTERRUPTS_INTT32A04ACCAP0 = 124;
static const int INTERRUPTS_INTT32A04ACCAP1 = 125;
static const int INTERRUPTS_INTT32A04B = 126;
static const int INTERRUPTS_INTT32A04BCAP0 = 127;
static const int INTERRUPTS_INTT32A04BCAP1 = 128;
static const int INTERRUPTS_INTT32A05AC = 129;
static const int INTERRUPTS_INTT32A05ACCAP0 = 130;
static const int INTERRUPTS_INTT32A05ACCAP1 = 131;
static const int INTERRUPTS_INTT32A05B = 132;
static const int INTERRUPTS_INTT32A05BCAP0 = 133;
static const int INTERRUPTS_INTT32A05BCAP1 = 134;
static const int INTERRUPTS_INTPARI0 = 135;
static const int INTERRUPTS_INTPARI1 = 136;
static const int INTERRUPTS_INTDMAATC = 137;
static const int INTERRUPTS_INTDMAAERR = 138;
static const int INTERRUPTS_INTFLCRDY = 139;
static const int INTERRUPTS_INTFLDRDY = 140;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for TMPM4KLFWAUG.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for TMPM4KLFWAUG.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
