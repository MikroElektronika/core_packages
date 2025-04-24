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
** OF MERCHANTABILITY,  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
** IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
** DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT
** OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
** OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**
****************************************************************************/
/*!
* @file  interrupts_mcu.h
* @brief MKL82Z128VMP7 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
/* Auxiliary constants */
static const int INTERRUPTS_NOTAVAIL                = -128;

/* Core interrupts */
static const int INTERRUPTS_NONMASKABLEINT          = -14;
static const int INTERRUPTS_HARDFAULT               = -13;
static const int INTERRUPTS_SVCALL                  = -5;
static const int INTERRUPTS_PENDSV                  = -2;
static const int INTERRUPTS_SYSTICK                 = -1;

/* Device specific interrupts */
static const int INTERRUPTS_DMA0_DMA4               = 0;
static const int INTERRUPTS_DMA1_DMA5               = 1;
static const int INTERRUPTS_DMA2_DMA6               = 2;
static const int INTERRUPTS_DMA3_DMA7               = 3;
static const int INTERRUPTS_DMA_ERROR               = 4;
static const int INTERRUPTS_FLEXIO0                 = 5;
static const int INTERRUPTS_TPM0                    = 6;
static const int INTERRUPTS_TPM1                    = 7;
static const int INTERRUPTS_TPM2                    = 8;
static const int INTERRUPTS_PIT0                    = 9;
static const int INTERRUPTS_SPI0                    = 10;
static const int INTERRUPTS_EMVSIM0                 = 11;
static const int INTERRUPTS_LPUART0                 = 12;
static const int INTERRUPTS_LPUART1                 = 13;
static const int INTERRUPTS_I2C0                    = 14;
static const int INTERRUPTS_QSPI0                   = 15;
static const int INTERRUPTS_RESERVED32              = 16;
static const int INTERRUPTS_PORTA                   = 17;
static const int INTERRUPTS_PORTB                   = 18;
static const int INTERRUPTS_PORTC                   = 19;
static const int INTERRUPTS_PORTD                   = 20;
static const int INTERRUPTS_PORTE                   = 21;
static const int INTERRUPTS_LLWU                    = 22;
static const int INTERRUPTS_LTC0                    = 23;
static const int INTERRUPTS_USB0                    = 24;
static const int INTERRUPTS_ADC0                    = 25;
static const int INTERRUPTS_LPTMR0                  = 26;
static const int INTERRUPTS_RTC_SECONDS             = 27;
static const int INTERRUPTS_INTMUX0_0               = 28;
static const int INTERRUPTS_INTMUX0_1               = 29;
static const int INTERRUPTS_INTMUX0_2               = 30;
static const int INTERRUPTS_INTMUX0_3               = 31;
static const int INTERRUPTS_LPTMR1                  = 32;
static const int INTERRUPTS_RESERVED49              = 33;
static const int INTERRUPTS_RESERVED50              = 34;
static const int INTERRUPTS_RESERVED51              = 35;
static const int INTERRUPTS_SPI1                    = 36;
static const int INTERRUPTS_LPUART2                 = 37;
static const int INTERRUPTS_EMVSIM1                 = 38;
static const int INTERRUPTS_I2C1                    = 39;
static const int INTERRUPTS_TSI0                    = 40;
static const int INTERRUPTS_PMC                     = 41;
static const int INTERRUPTS_FTFA                    = 42;
static const int INTERRUPTS_MCG                     = 43;
static const int INTERRUPTS_WDOG_EWM                = 44;
static const int INTERRUPTS_DAC0                    = 45;
static const int INTERRUPTS_TRNG0                   = 46;
static const int INTERRUPTS_RESERVED63              = 47;
static const int INTERRUPTS_CMP0                    = 48;
static const int INTERRUPTS_RESERVED65              = 49;
static const int INTERRUPTS_RTC_ALARM               = 50;
static const int INTERRUPTS_RESERVED67              = 51;
static const int INTERRUPTS_RESERVED68              = 52;
static const int INTERRUPTS_RESERVED69              = 53;
static const int INTERRUPTS_RESERVED70              = 54;
static const int INTERRUPTS_RESERVED71              = 55;
static const int INTERRUPTS_DMA4                    = 56;
static const int INTERRUPTS_DMA5                    = 57;
static const int INTERRUPTS_DMA6                    = 58;
static const int INTERRUPTS_DMA7                    = 59;
static const int INTERRUPTS_RESERVED76              = 60;
static const int INTERRUPTS_RESERVED77              = 61;
static const int INTERRUPTS_RESERVED78              = 62;
static const int INTERRUPTS_RESERVED79              = 63;

// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for MKL82Z128VMP7.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for mkl82z128vmp7.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
