/****************************************************************************
**
** Copyright (C) 2023 MikroElektronika d.o.o.
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
* @brief msp432p401r MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_NMI = 2;
static const int INTERRUPTS_HARDFAULT = 3;
static const int INTERRUPTS_MEMMANAGE = 4;
static const int INTERRUPTS_BUSFAULT = 5;
static const int INTERRUPTS_USAGEFAULT = 6;
static const int INTERRUPTS_RESERVED1 = 7;
static const int INTERRUPTS_RESERVED2 = 8;
static const int INTERRUPTS_RESERVED3 = 9;
static const int INTERRUPTS_RESERVED4 = 10;
static const int INTERRUPTS_SVCALL = 11;
static const int INTERRUPTS_DEBUGMON = 12;
static const int INTERRUPTS_RESERVED5 = 13;
static const int INTERRUPTS_PENDSV = 14;
static const int INTERRUPTS_SYSTICK = 15;
static const int INTERRUPTS_PSS = 16;
static const int INTERRUPTS_CS = 17;
static const int INTERRUPTS_PCM = 18;
static const int INTERRUPTS_WDT_A = 19;
static const int INTERRUPTS_FPU_INT = 20;
static const int INTERRUPTS_FLCTL_A = 21;
static const int INTERRUPTS_COMP_E0 = 22;
static const int INTERRUPTS_COMP_E1 = 23;
static const int INTERRUPTS_TA0_0 = 24;
static const int INTERRUPTS_TA0_N = 25;
static const int INTERRUPTS_TA1_0 = 26;
static const int INTERRUPTS_TA1_N = 27;
static const int INTERRUPTS_TA2_0 = 28;
static const int INTERRUPTS_TA2_N = 29;
static const int INTERRUPTS_TA3_0 = 30;
static const int INTERRUPTS_TA3_N = 31;
static const int INTERRUPTS_EUSCIA0 = 32;
static const int INTERRUPTS_EUSCIA1 = 33;
static const int INTERRUPTS_EUSCIA2 = 34;
static const int INTERRUPTS_EUSCIA3 = 35;
static const int INTERRUPTS_EUSCIB0 = 36;
static const int INTERRUPTS_EUSCIB1 = 37;
static const int INTERRUPTS_EUSCIB2 = 38;
static const int INTERRUPTS_EUSCIB3 = 39;
static const int INTERRUPTS_ADC14 = 40;
static const int INTERRUPTS_T32_INT1 = 41;
static const int INTERRUPTS_T32_INT2 = 42;
static const int INTERRUPTS_T32_INTC = 43;
static const int INTERRUPTS_AES256 = 44;
static const int INTERRUPTS_RTC_C = 45;
static const int INTERRUPTS_DMA_ERR = 46;
static const int INTERRUPTS_DMA_INT3 = 47;
static const int INTERRUPTS_DMA_INT2 = 48;
static const int INTERRUPTS_DMA_INT1 = 49;
static const int INTERRUPTS_DMA_INT0 = 50;
static const int INTERRUPTS_PORT1 = 51;
static const int INTERRUPTS_PORT2 = 52;
static const int INTERRUPTS_PORT3 = 53;
static const int INTERRUPTS_PORT4 = 54;
static const int INTERRUPTS_PORT5 = 55;
static const int INTERRUPTS_PORT6 = 56;
static const int INTERRUPTS_LCD_F = 57;
static const int INTERRUPTS_RESERVED6 = 58;
static const int INTERRUPTS_RESERVED7 = 59;
static const int INTERRUPTS_RESERVED8 = 60;
static const int INTERRUPTS_RESERVED9 = 61;
static const int INTERRUPTS_RESERVED10 = 62;
static const int INTERRUPTS_RESERVED11 = 63;
static const int INTERRUPTS_RESERVED12 = 64;
static const int INTERRUPTS_RESERVED13 = 65;
static const int INTERRUPTS_RESERVED14 = 66;
static const int INTERRUPTS_RESERVED15 = 67;
static const int INTERRUPTS_RESERVED16 = 68;
static const int INTERRUPTS_RESERVED17 = 69;
static const int INTERRUPTS_RESERVED18 = 70;
static const int INTERRUPTS_RESERVED19 = 71;
static const int INTERRUPTS_RESERVED20 = 72;
static const int INTERRUPTS_RESERVED21 = 73;
static const int INTERRUPTS_RESERVED22 = 74;
static const int INTERRUPTS_RESERVED23 = 75;
static const int INTERRUPTS_RESERVED24 = 76;
static const int INTERRUPTS_RESERVED25 = 77;
static const int INTERRUPTS_RESERVED26 = 78;
static const int INTERRUPTS_RESERVED27 = 79;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for msp432p401r.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for msp432p401r.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
