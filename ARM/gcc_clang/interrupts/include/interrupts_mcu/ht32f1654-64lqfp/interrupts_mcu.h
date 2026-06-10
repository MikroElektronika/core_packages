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
* @brief HT32F1654-64LQFP MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_CKRDY = 16;
static const int INTERRUPTS_LVD = 17;
static const int INTERRUPTS_BOD = 18;
static const int INTERRUPTS_WDT = 19;
static const int INTERRUPTS_RTC = 20;
static const int INTERRUPTS_FLASH = 21;
static const int INTERRUPTS_EVWUP = 22;
static const int INTERRUPTS_LPWUP = 23;
static const int INTERRUPTS_EXTI0 = 24;
static const int INTERRUPTS_EXTI1 = 25;
static const int INTERRUPTS_EXTI2 = 26;
static const int INTERRUPTS_EXTI3 = 27;
static const int INTERRUPTS_EXTI4 = 28;
static const int INTERRUPTS_EXTI5 = 29;
static const int INTERRUPTS_EXTI6 = 30;
static const int INTERRUPTS_EXTI7 = 31;
static const int INTERRUPTS_EXTI8 = 32;
static const int INTERRUPTS_EXTI9 = 33;
static const int INTERRUPTS_EXTI10 = 34;
static const int INTERRUPTS_EXTI11 = 35;
static const int INTERRUPTS_EXTI12 = 36;
static const int INTERRUPTS_EXTI13 = 37;
static const int INTERRUPTS_EXTI14 = 38;
static const int INTERRUPTS_EXTI15 = 39;
static const int INTERRUPTS_COMP = 40;
static const int INTERRUPTS_ADC0 = 41;
static const int INTERRUPTS_MCTM0_BRK = 43;
static const int INTERRUPTS_MCTM0_UP = 44;
static const int INTERRUPTS_MCTM0_TR = 45;
static const int INTERRUPTS_MCTM0_CC = 46;
static const int INTERRUPTS_MCTM1_BRK = 47;
static const int INTERRUPTS_MCTM1_UP = 48;
static const int INTERRUPTS_MCTM1_TR = 49;
static const int INTERRUPTS_MCTM1_CC = 50;
static const int INTERRUPTS_GPTM0 = 51;
static const int INTERRUPTS_GPTM1 = 52;
static const int INTERRUPTS_SCTM0 = 53;
static const int INTERRUPTS_SCTM1 = 54;
static const int INTERRUPTS_PWM0 = 55;
static const int INTERRUPTS_BFTM0 = 57;
static const int INTERRUPTS_BFTM1 = 58;
static const int INTERRUPTS_I2C0 = 59;
static const int INTERRUPTS_I2C1 = 60;
static const int INTERRUPTS_SPI0 = 61;
static const int INTERRUPTS_SPI1 = 62;
static const int INTERRUPTS_USART0 = 63;
static const int INTERRUPTS_USART1 = 64;
static const int INTERRUPTS_UART0 = 65;
static const int INTERRUPTS_UART1 = 66;
static const int INTERRUPTS_SCI = 67;
static const int INTERRUPTS_I2S = 68;
static const int INTERRUPTS_USB = 69;
static const int INTERRUPTS_SDIO = 70;
static const int INTERRUPTS_PDMACH0 = 71;
static const int INTERRUPTS_PDMACH1 = 72;
static const int INTERRUPTS_PDMACH2 = 73;
static const int INTERRUPTS_PDMACH3 = 74;
static const int INTERRUPTS_PDMACH4 = 75;
static const int INTERRUPTS_PDMACH5 = 76;
static const int INTERRUPTS_PDMACH6 = 77;
static const int INTERRUPTS_PDMACH7 = 78;
static const int INTERRUPTS_PDMACH8 = 79;
static const int INTERRUPTS_PDMACH9 = 80;
static const int INTERRUPTS_PDMACH10 = 81;
static const int INTERRUPTS_PDMACH11 = 82;
static const int INTERRUPTS_CSIF = 83;
static const int INTERRUPTS_EBI = 84;
static const int INTERRUPTS_AES = 85;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for HT32F1654-64LQFP.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for HT32F1654-64LQFP.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
