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
* @brief NUC1263ND4AE MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_BOD = 16;
static const int INTERRUPTS_WDT = 17;
static const int INTERRUPTS_EINT024 = 18;
static const int INTERRUPTS_EINT135 = 19;
static const int INTERRUPTS_GPAB = 20;
static const int INTERRUPTS_GPCDF = 21;
static const int INTERRUPTS_BPWM0 = 22;
static const int INTERRUPTS_BPWM1 = 23;
static const int INTERRUPTS_TMR0 = 24;
static const int INTERRUPTS_TMR1 = 25;
static const int INTERRUPTS_TMR2 = 26;
static const int INTERRUPTS_TMR3 = 27;
static const int INTERRUPTS_UART0 = 28;
static const int INTERRUPTS_UART1 = 29;
static const int INTERRUPTS_SPI0 = 30;
static const int INTERRUPTS_SPI1 = 31;
static const int INTERRUPTS_BPWM2 = 32;
static const int INTERRUPTS_BPWM3 = 33;
static const int INTERRUPTS_I2C0 = 34;
static const int INTERRUPTS_I2C1 = 35;
static const int INTERRUPTS_I2C2 = 36;
static const int INTERRUPTS_USBD = 39;
static const int INTERRUPTS_ACMP01 = 41;
static const int INTERRUPTS_PDMA = 42;
static const int INTERRUPTS_PWRWU = 44;
static const int INTERRUPTS_ADC = 45;
static const int INTERRUPTS_CLKDIRC = 46;
static const int INTERRUPTS_LLSI0 = 48;
static const int INTERRUPTS_LLSI1 = 49;
static const int INTERRUPTS_LLSI2 = 50;
static const int INTERRUPTS_LLSI3 = 51;
static const int INTERRUPTS_LLSI4 = 52;
static const int INTERRUPTS_LLSI5 = 53;
static const int INTERRUPTS_SPI2 = 58;
static const int INTERRUPTS_UART2 = 59;
static const int INTERRUPTS_I3CS0 = 60;
static const int INTERRUPTS_I3CS1 = 61;
static const int INTERRUPTS_DAC = 62;
static const int INTERRUPTS_ACMP23 = 63;
static const int INTERRUPTS_TS = 64;
static const int INTERRUPTS_SPDH = 65;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for NUC1263ND4AE.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for NUC1263ND4AE.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
