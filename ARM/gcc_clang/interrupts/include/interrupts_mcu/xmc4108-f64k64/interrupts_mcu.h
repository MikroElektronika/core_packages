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
* @brief XMC4108-F64K64 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_SCU_0 = 16;
static const int INTERRUPTS_ERU0_0 = 17;
static const int INTERRUPTS_ERU0_1 = 18;
static const int INTERRUPTS_ERU0_2 = 19;
static const int INTERRUPTS_ERU0_3 = 20;
static const int INTERRUPTS_ERU1_0 = 21;
static const int INTERRUPTS_ERU1_1 = 22;
static const int INTERRUPTS_ERU1_2 = 23;
static const int INTERRUPTS_ERU1_3 = 24;
static const int INTERRUPTS_PMU0_0 = 28;
static const int INTERRUPTS_VADC0_C0_0 = 30;
static const int INTERRUPTS_VADC0_C0_1 = 31;
static const int INTERRUPTS_VADC0_C0_2 = 32;
static const int INTERRUPTS_VADC0_C0_3 = 33;
static const int INTERRUPTS_VADC0_G0_0 = 34;
static const int INTERRUPTS_VADC0_G0_1 = 35;
static const int INTERRUPTS_VADC0_G0_2 = 36;
static const int INTERRUPTS_VADC0_G0_3 = 37;
static const int INTERRUPTS_VADC0_G1_0 = 38;
static const int INTERRUPTS_VADC0_G1_1 = 39;
static const int INTERRUPTS_VADC0_G1_2 = 40;
static const int INTERRUPTS_VADC0_G1_3 = 41;
static const int INTERRUPTS_DAC0_0 = 58;
static const int INTERRUPTS_DAC0_1 = 59;
static const int INTERRUPTS_CCU40_0 = 60;
static const int INTERRUPTS_CCU40_1 = 61;
static const int INTERRUPTS_CCU40_2 = 62;
static const int INTERRUPTS_CCU40_3 = 63;
static const int INTERRUPTS_CCU41_0 = 64;
static const int INTERRUPTS_CCU41_1 = 65;
static const int INTERRUPTS_CCU41_2 = 66;
static const int INTERRUPTS_CCU41_3 = 67;
static const int INTERRUPTS_CCU80_0 = 76;
static const int INTERRUPTS_CCU80_1 = 77;
static const int INTERRUPTS_CCU80_2 = 78;
static const int INTERRUPTS_CCU80_3 = 79;
static const int INTERRUPTS_POSIF0_0 = 84;
static const int INTERRUPTS_POSIF0_1 = 85;
static const int INTERRUPTS_HRPWM_0 = 88;
static const int INTERRUPTS_HRPWM_1 = 89;
static const int INTERRUPTS_HRPWM_2 = 90;
static const int INTERRUPTS_HRPWM_3 = 91;
static const int INTERRUPTS_CAN0_0 = 92;
static const int INTERRUPTS_CAN0_1 = 93;
static const int INTERRUPTS_CAN0_2 = 94;
static const int INTERRUPTS_CAN0_3 = 95;
static const int INTERRUPTS_CAN0_4 = 96;
static const int INTERRUPTS_CAN0_5 = 97;
static const int INTERRUPTS_CAN0_6 = 98;
static const int INTERRUPTS_CAN0_7 = 99;
static const int INTERRUPTS_USIC0_0 = 100;
static const int INTERRUPTS_USIC0_1 = 101;
static const int INTERRUPTS_USIC0_2 = 102;
static const int INTERRUPTS_USIC0_3 = 103;
static const int INTERRUPTS_USIC0_4 = 104;
static const int INTERRUPTS_USIC0_5 = 105;
static const int INTERRUPTS_USIC1_0 = 106;
static const int INTERRUPTS_USIC1_1 = 107;
static const int INTERRUPTS_USIC1_2 = 108;
static const int INTERRUPTS_USIC1_3 = 109;
static const int INTERRUPTS_USIC1_4 = 110;
static const int INTERRUPTS_USIC1_5 = 111;
static const int INTERRUPTS_LEDTS0_0 = 118;
static const int INTERRUPTS_FCE0_0 = 120;
static const int INTERRUPTS_GPDMA0_0 = 121;
static const int INTERRUPTS_USB0_0 = 123;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for XMC4108-F64K64.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for XMC4108-F64K64.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
