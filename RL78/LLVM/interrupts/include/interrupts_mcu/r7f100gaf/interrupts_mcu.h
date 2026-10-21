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
* @brief R7F100GAF MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// G23 vector offsets from the supplied reference.
#define RL78_VECTOR_INT_WDTI 0x04U
#define RL78_VECTOR_INT_LVI 0x06U
#define RL78_VECTOR_INT_P0 0x08U
#define RL78_VECTOR_INT_P1 0x0AU
#define RL78_VECTOR_INT_P2 0x0CU
#define RL78_VECTOR_INT_P3 0x0EU
#define RL78_VECTOR_INT_P4 0x10U
#define RL78_VECTOR_INT_P5 0x12U
#define RL78_VECTOR_INT_ST2 0x14U
#define RL78_VECTOR_INT_SR2 0x16U
#define RL78_VECTOR_INT_TM11H 0x18U
#define RL78_VECTOR_INT_ELCL 0x1AU
#define RL78_VECTOR_INT_SMSE 0x1CU
#define RL78_VECTOR_INT_ST0 0x1EU
#define RL78_VECTOR_INT_TM00 0x20U
#define RL78_VECTOR_INT_TM01H 0x22U
#define RL78_VECTOR_INT_ST1 0x24U
#define RL78_VECTOR_INT_SR1 0x26U
#define RL78_VECTOR_INT_TM03H 0x28U
#define RL78_VECTOR_INT_IICA0 0x2AU
#define RL78_VECTOR_INT_SR0 0x2CU
#define RL78_VECTOR_INT_TM01 0x2EU
#define RL78_VECTOR_INT_TM02 0x30U
#define RL78_VECTOR_INT_TM03 0x32U
#define RL78_VECTOR_INT_AD 0x34U
#define RL78_VECTOR_INT_RTC 0x36U
#define RL78_VECTOR_INT_ITL 0x38U
#define RL78_VECTOR_INT_KR 0x3AU
#define RL78_VECTOR_INT_ST3 0x3CU
#define RL78_VECTOR_INT_SR3 0x3EU
#define RL78_VECTOR_INT_TM13 0x40U
#define RL78_VECTOR_INT_TM04 0x42U
#define RL78_VECTOR_INT_TM05 0x44U
#define RL78_VECTOR_INT_TM06 0x46U
#define RL78_VECTOR_INT_TM07 0x48U
#define RL78_VECTOR_INT_P6 0x4AU
#define RL78_VECTOR_INT_P7 0x4CU
#define RL78_VECTOR_INT_P8 0x4EU
#define RL78_VECTOR_INT_P9 0x50U
#define RL78_VECTOR_INT_FL 0x52U
#define RL78_VECTOR_INT_P10 0x54U
#define RL78_VECTOR_INT_P11 0x56U
#define RL78_VECTOR_INT_URE0 0x58U
#define RL78_VECTOR_INT_URE1 0x5AU
#define RL78_VECTOR_INT_TM12 0x5CU
#define RL78_VECTOR_INT_TM13H 0x5EU
#define RL78_VECTOR_INT_CTSUWR 0x60U
#define RL78_VECTOR_INT_IICA1 0x62U
#define RL78_VECTOR_INT_CTSURD 0x64U
#define RL78_VECTOR_INT_CTSUFN 0x66U
#define RL78_VECTOR_INT_REMC 0x68U
#define RL78_VECTOR_INT_UT0 0x6AU
#define RL78_VECTOR_INT_UR0 0x6CU
#define RL78_VECTOR_INT_UT1 0x6EU
#define RL78_VECTOR_INT_UR1 0x70U
#define RL78_VECTOR_INT_TM14 0x72U
#define RL78_VECTOR_INT_TM15 0x74U
#define RL78_VECTOR_INT_TM16 0x76U
#define RL78_VECTOR_INT_TM17 0x78U
#define RL78_VECTOR_INT_BRK_I 0x7EU

// Interrupt table
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for R7F100GAF.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for R7F100GAF.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
