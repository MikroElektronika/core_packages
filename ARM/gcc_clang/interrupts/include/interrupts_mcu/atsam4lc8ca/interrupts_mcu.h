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
* @brief ATSAM4LC8CA MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_HFLASHC = 16;
static const int INTERRUPTS_PDCA_0 = 17;
static const int INTERRUPTS_PDCA_1 = 18;
static const int INTERRUPTS_PDCA_2 = 19;
static const int INTERRUPTS_PDCA_3 = 20;
static const int INTERRUPTS_PDCA_4 = 21;
static const int INTERRUPTS_PDCA_5 = 22;
static const int INTERRUPTS_PDCA_6 = 23;
static const int INTERRUPTS_PDCA_7 = 24;
static const int INTERRUPTS_PDCA_8 = 25;
static const int INTERRUPTS_PDCA_9 = 26;
static const int INTERRUPTS_PDCA_10 = 27;
static const int INTERRUPTS_PDCA_11 = 28;
static const int INTERRUPTS_PDCA_12 = 29;
static const int INTERRUPTS_PDCA_13 = 30;
static const int INTERRUPTS_PDCA_14 = 31;
static const int INTERRUPTS_PDCA_15 = 32;
static const int INTERRUPTS_CRCCU = 33;
static const int INTERRUPTS_USBC = 34;
static const int INTERRUPTS_PEVC_0 = 35;
static const int INTERRUPTS_PEVC_1 = 36;
static const int INTERRUPTS_AESA = 37;
static const int INTERRUPTS_PM = 38;
static const int INTERRUPTS_SCIF = 39;
static const int INTERRUPTS_FREQM = 40;
static const int INTERRUPTS_GPIO_0 = 41;
static const int INTERRUPTS_GPIO_1 = 42;
static const int INTERRUPTS_GPIO_2 = 43;
static const int INTERRUPTS_GPIO_3 = 44;
static const int INTERRUPTS_GPIO_4 = 45;
static const int INTERRUPTS_GPIO_5 = 46;
static const int INTERRUPTS_GPIO_6 = 47;
static const int INTERRUPTS_GPIO_7 = 48;
static const int INTERRUPTS_GPIO_8 = 49;
static const int INTERRUPTS_GPIO_9 = 50;
static const int INTERRUPTS_GPIO_10 = 51;
static const int INTERRUPTS_GPIO_11 = 52;
static const int INTERRUPTS_BPM = 53;
static const int INTERRUPTS_BSCIF = 54;
static const int INTERRUPTS_AST_0 = 55;
static const int INTERRUPTS_AST_1 = 56;
static const int INTERRUPTS_AST_2 = 57;
static const int INTERRUPTS_AST_3 = 58;
static const int INTERRUPTS_AST_4 = 59;
static const int INTERRUPTS_WDT = 60;
static const int INTERRUPTS_EIC_0 = 61;
static const int INTERRUPTS_EIC_1 = 62;
static const int INTERRUPTS_EIC_2 = 63;
static const int INTERRUPTS_EIC_3 = 64;
static const int INTERRUPTS_EIC_4 = 65;
static const int INTERRUPTS_EIC_5 = 66;
static const int INTERRUPTS_EIC_6 = 67;
static const int INTERRUPTS_EIC_7 = 68;
static const int INTERRUPTS_IISC = 69;
static const int INTERRUPTS_SPI = 70;
static const int INTERRUPTS_TC0_0 = 71;
static const int INTERRUPTS_TC0_1 = 72;
static const int INTERRUPTS_TC0_2 = 73;
static const int INTERRUPTS_TC1_0 = 74;
static const int INTERRUPTS_TC1_1 = 75;
static const int INTERRUPTS_TC1_2 = 76;
static const int INTERRUPTS_TWIM0 = 77;
static const int INTERRUPTS_TWIS0 = 78;
static const int INTERRUPTS_TWIM1 = 79;
static const int INTERRUPTS_TWIS1 = 80;
static const int INTERRUPTS_USART0 = 81;
static const int INTERRUPTS_USART1 = 82;
static const int INTERRUPTS_USART2 = 83;
static const int INTERRUPTS_USART3 = 84;
static const int INTERRUPTS_ADCIFE = 85;
static const int INTERRUPTS_DACC = 86;
static const int INTERRUPTS_ACIFC = 87;
static const int INTERRUPTS_ABDACB = 88;
static const int INTERRUPTS_TRNG = 89;
static const int INTERRUPTS_PARC = 90;
static const int INTERRUPTS_CATB = 91;
static const int INTERRUPTS_TWIM2 = 93;
static const int INTERRUPTS_TWIM3 = 94;
static const int INTERRUPTS_LCDCA = 95;
static const int INTERRUPTS_PERIPH_COUNT = 96;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for ATSAM4LC8CA.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for ATSAM4LC8CA.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
