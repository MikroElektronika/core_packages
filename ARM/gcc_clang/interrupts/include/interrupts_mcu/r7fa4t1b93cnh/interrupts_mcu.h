/****************************************************************************
**
** Copyright (C) 2025 MikroElektronika d.o.o.
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
* @brief extracted_R7FA4T1B93CNH MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_RESET = 1;
static const int INTERRUPTS_NMI = 2;
static const int INTERRUPTS_HARDFAULT = 3;
static const int INTERRUPTS_MEMMANAGE = 4;
static const int INTERRUPTS_BUSFAULT = 5;
static const int INTERRUPTS_USAGEFAULT = 6;
static const int INTERRUPTS_SECUREFAULT = 7;
static const int INTERRUPTS_SVC = 11;
static const int INTERRUPTS_DEBUGMON = 12;
static const int INTERRUPTS_PENDSV = 14;
static const int INTERRUPTS_SYSTICK = 15;
static const int INTERRUPTS_IELSR0 = 16;
static const int INTERRUPTS_IELSR1 = 17;
static const int INTERRUPTS_IELSR2 = 18;
static const int INTERRUPTS_IELSR3 = 19;
static const int INTERRUPTS_IELSR4 = 20;
static const int INTERRUPTS_IELSR5 = 21;
static const int INTERRUPTS_IELSR6 = 22;
static const int INTERRUPTS_IELSR7 = 23;
static const int INTERRUPTS_IELSR8 = 24;
static const int INTERRUPTS_IELSR9 = 25;
static const int INTERRUPTS_IELSR10 = 26;
static const int INTERRUPTS_IELSR11 = 27;
static const int INTERRUPTS_IELSR12 = 28;
static const int INTERRUPTS_IELSR13 = 29;
static const int INTERRUPTS_IELSR14 = 30;
static const int INTERRUPTS_IELSR15 = 31;
static const int INTERRUPTS_IELSR16 = 32;
static const int INTERRUPTS_IELSR17 = 33;
static const int INTERRUPTS_IELSR18 = 34;
static const int INTERRUPTS_IELSR19 = 35;
static const int INTERRUPTS_IELSR20 = 36;
static const int INTERRUPTS_IELSR21 = 37;
static const int INTERRUPTS_IELSR22 = 38;
static const int INTERRUPTS_IELSR23 = 39;
static const int INTERRUPTS_IELSR24 = 40;
static const int INTERRUPTS_IELSR25 = 41;
static const int INTERRUPTS_IELSR26 = 42;
static const int INTERRUPTS_IELSR27 = 43;
static const int INTERRUPTS_IELSR28 = 44;
static const int INTERRUPTS_IELSR29 = 45;
static const int INTERRUPTS_IELSR30 = 46;
static const int INTERRUPTS_IELSR31 = 47;
static const int INTERRUPTS_IELSR32 = 48;
static const int INTERRUPTS_IELSR33 = 49;
static const int INTERRUPTS_IELSR34 = 50;
static const int INTERRUPTS_IELSR35 = 51;
static const int INTERRUPTS_IELSR36 = 52;
static const int INTERRUPTS_IELSR37 = 53;
static const int INTERRUPTS_IELSR38 = 54;
static const int INTERRUPTS_IELSR39 = 55;
static const int INTERRUPTS_IELSR40 = 56;
static const int INTERRUPTS_IELSR41 = 57;
static const int INTERRUPTS_IELSR42 = 58;
static const int INTERRUPTS_IELSR43 = 59;
static const int INTERRUPTS_IELSR44 = 60;
static const int INTERRUPTS_IELSR45 = 61;
static const int INTERRUPTS_IELSR46 = 62;
static const int INTERRUPTS_IELSR47 = 63;
static const int INTERRUPTS_IELSR48 = 64;
static const int INTERRUPTS_IELSR49 = 65;
static const int INTERRUPTS_IELSR50 = 66;
static const int INTERRUPTS_IELSR51 = 67;
static const int INTERRUPTS_IELSR52 = 68;
static const int INTERRUPTS_IELSR53 = 69;
static const int INTERRUPTS_IELSR54 = 70;
static const int INTERRUPTS_IELSR55 = 71;
static const int INTERRUPTS_IELSR56 = 72;
static const int INTERRUPTS_IELSR57 = 73;
static const int INTERRUPTS_IELSR58 = 74;
static const int INTERRUPTS_IELSR59 = 75;
static const int INTERRUPTS_IELSR60 = 76;
static const int INTERRUPTS_IELSR61 = 77;
static const int INTERRUPTS_IELSR62 = 78;
static const int INTERRUPTS_IELSR63 = 79;
static const int INTERRUPTS_IELSR64 = 80;
static const int INTERRUPTS_IELSR65 = 81;
static const int INTERRUPTS_IELSR66 = 82;
static const int INTERRUPTS_IELSR67 = 83;
static const int INTERRUPTS_IELSR68 = 84;
static const int INTERRUPTS_IELSR69 = 85;
static const int INTERRUPTS_IELSR70 = 86;
static const int INTERRUPTS_IELSR71 = 87;
static const int INTERRUPTS_IELSR72 = 88;
static const int INTERRUPTS_IELSR73 = 89;
static const int INTERRUPTS_IELSR74 = 90;
static const int INTERRUPTS_IELSR75 = 91;
static const int INTERRUPTS_IELSR76 = 92;
static const int INTERRUPTS_IELSR77 = 93;
static const int INTERRUPTS_IELSR78 = 94;
static const int INTERRUPTS_IELSR79 = 95;
static const int INTERRUPTS_IELSR80 = 96;
static const int INTERRUPTS_IELSR81 = 97;
static const int INTERRUPTS_IELSR82 = 98;
static const int INTERRUPTS_IELSR83 = 99;
static const int INTERRUPTS_IELSR84 = 100;
static const int INTERRUPTS_IELSR85 = 101;
static const int INTERRUPTS_IELSR86 = 102;
static const int INTERRUPTS_IELSR87 = 103;
static const int INTERRUPTS_IELSR88 = 104;
static const int INTERRUPTS_IELSR89 = 105;
static const int INTERRUPTS_IELSR90 = 106;
static const int INTERRUPTS_IELSR91 = 107;
static const int INTERRUPTS_IELSR92 = 108;
static const int INTERRUPTS_IELSR93 = 109;
static const int INTERRUPTS_IELSR94 = 110;
static const int INTERRUPTS_IELSR95 = 111;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for extracted_R7FA4T1B93CNH.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for extracted_R7FA4T1B93CNH.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
