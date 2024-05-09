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
* @brief pic24f16kl402 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_NVM = 0;
static const int INTERRUPTS_AD1 = 1;
static const int INTERRUPTS_U1TX = 2;
static const int INTERRUPTS_U1RX = 3;
static const int INTERRUPTS_T3 = 4;
static const int INTERRUPTS_T2 = 5;
static const int INTERRUPTS_CCP2 = 6;
static const int INTERRUPTS_T1 = 7;
static const int INTERRUPTS_CCP1 = 8;
static const int INTERRUPTS_INT0 = 9;
static const int INTERRUPTS_U2TX = 10;
static const int INTERRUPTS_U2RX = 11;
static const int INTERRUPTS_INT2 = 12;
static const int INTERRUPTS_T4 = 13;
static const int INTERRUPTS_CCP3 = 14;
static const int INTERRUPTS_INT1 = 15;
static const int INTERRUPTS_CN = 16;
static const int INTERRUPTS_CM = 17;
static const int INTERRUPTS_BCL1 = 18;
static const int INTERRUPTS_SSP1 = 19;
static const int INTERRUPTS_T3G = 20;
static const int INTERRUPTS_BCL2 = 21;
static const int INTERRUPTS_SSP2 = 22;
static const int INTERRUPTS_HLVD = 23;
static const int INTERRUPTS_U2ER = 24;
static const int INTERRUPTS_U1ER = 25;
static const int INTERRUPTS_ULPWU = 26;
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_NVM_REGISTER (IEC0)
#define INTERRUPT_AD1_REGISTER (IEC0)
#define INTERRUPT_U1TX_REGISTER (IEC0)
#define INTERRUPT_U1RX_REGISTER (IEC0)
#define INTERRUPT_T3_REGISTER (IEC0)
#define INTERRUPT_T2_REGISTER (IEC0)
#define INTERRUPT_CCP2_REGISTER (IEC0)
#define INTERRUPT_T1_REGISTER (IEC0)
#define INTERRUPT_CCP1_REGISTER (IEC0)
#define INTERRUPT_INT0_REGISTER (IEC0)
#define INTERRUPT_U2TX_REGISTER (IEC1)
#define INTERRUPT_U2RX_REGISTER (IEC1)
#define INTERRUPT_INT2_REGISTER (IEC1)
#define INTERRUPT_T4_REGISTER (IEC1)
#define INTERRUPT_CCP3_REGISTER (IEC1)
#define INTERRUPT_INT1_REGISTER (IEC1)
#define INTERRUPT_CN_REGISTER (IEC1)
#define INTERRUPT_CM_REGISTER (IEC1)
#define INTERRUPT_BCL1_REGISTER (IEC1)
#define INTERRUPT_SSP1_REGISTER (IEC1)
#define INTERRUPT_T3G_REGISTER (IEC2)
#define INTERRUPT_BCL2_REGISTER (IEC3)
#define INTERRUPT_SSP2_REGISTER (IEC3)
#define INTERRUPT_HLVD_REGISTER (IEC4)
#define INTERRUPT_U2ER_REGISTER (IEC4)
#define INTERRUPT_U1ER_REGISTER (IEC4)
#define INTERRUPT_ULPWU_REGISTER (IEC5)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_NVM_BIT (15)
#define INTERRUPT_AD1_BIT (13)
#define INTERRUPT_U1TX_BIT (12)
#define INTERRUPT_U1RX_BIT (11)
#define INTERRUPT_T3_BIT (8)
#define INTERRUPT_T2_BIT (7)
#define INTERRUPT_CCP2_BIT (6)
#define INTERRUPT_T1_BIT (3)
#define INTERRUPT_CCP1_BIT (2)
#define INTERRUPT_INT0_BIT (0)
#define INTERRUPT_U2TX_BIT (15)
#define INTERRUPT_U2RX_BIT (14)
#define INTERRUPT_INT2_BIT (13)
#define INTERRUPT_T4_BIT (11)
#define INTERRUPT_CCP3_BIT (9)
#define INTERRUPT_INT1_BIT (4)
#define INTERRUPT_CN_BIT (3)
#define INTERRUPT_CM_BIT (2)
#define INTERRUPT_BCL1_BIT (1)
#define INTERRUPT_SSP1_BIT (0)
#define INTERRUPT_T3G_BIT (5)
#define INTERRUPT_BCL2_BIT (2)
#define INTERRUPT_SSP2_BIT (1)
#define INTERRUPT_HLVD_BIT (8)
#define INTERRUPT_U2ER_BIT (2)
#define INTERRUPT_U1ER_BIT (1)
#define INTERRUPT_ULPWU_BIT (0)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
