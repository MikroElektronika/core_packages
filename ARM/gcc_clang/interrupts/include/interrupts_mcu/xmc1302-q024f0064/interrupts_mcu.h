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
* @brief XMC1302-Q024F0064 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_SCU_0 = 16;
static const int INTERRUPTS_SCU_1 = 17;
static const int INTERRUPTS_SCU_2 = 18;
static const int INTERRUPTS_ERU0_0 = 19;
static const int INTERRUPTS_ERU0_1 = 20;
static const int INTERRUPTS_ERU0_2 = 21;
static const int INTERRUPTS_ERU0_3 = 22;
static const int INTERRUPTS_MATH0_0 = 23;
static const int INTERRUPTS_USIC0_0 = 25;
static const int INTERRUPTS_USIC0_1 = 26;
static const int INTERRUPTS_USIC0_2 = 27;
static const int INTERRUPTS_USIC0_3 = 28;
static const int INTERRUPTS_USIC0_4 = 29;
static const int INTERRUPTS_USIC0_5 = 30;
static const int INTERRUPTS_VADC0_C0_0 = 31;
static const int INTERRUPTS_VADC0_C0_1 = 32;
static const int INTERRUPTS_VADC0_G0_0 = 33;
static const int INTERRUPTS_VADC0_G0_1 = 34;
static const int INTERRUPTS_VADC0_G1_0 = 35;
static const int INTERRUPTS_VADC0_G1_1 = 36;
static const int INTERRUPTS_CCU40_0 = 37;
static const int INTERRUPTS_CCU40_1 = 38;
static const int INTERRUPTS_CCU40_2 = 39;
static const int INTERRUPTS_CCU40_3 = 40;
static const int INTERRUPTS_CCU80_0 = 41;
static const int INTERRUPTS_CCU80_1 = 42;
static const int INTERRUPTS_POSIF0_0 = 43;
static const int INTERRUPTS_POSIF0_1 = 44;
static const int INTERRUPTS_BCCU0_0 = 47;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for XMC1302-Q024F0064.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for XMC1302-Q024F0064.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
