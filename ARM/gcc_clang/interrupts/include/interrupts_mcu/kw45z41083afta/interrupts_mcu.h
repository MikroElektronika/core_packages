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
* @brief KW45Z41083AFTA MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
/* Auxiliary constants */
static const int INTERRUPTS_NOTAVAIL                = -128;

/* Core interrupts */
static const int INTERRUPTS_NONMASKABLEINT          = -14;
static const int INTERRUPTS_HARDFAULT               = -13;
static const int INTERRUPTS_MEMORYMANAGEMENT        = -12;
static const int INTERRUPTS_BUSFAULT                = -11;
static const int INTERRUPTS_USAGEFAULT              = -10;
static const int INTERRUPTS_SECUREFAULT             = -9;
static const int INTERRUPTS_SVCALL                  = -5;
static const int INTERRUPTS_DEBUGMONITOR            = -4;
static const int INTERRUPTS_PENDSV                  = -2;
static const int INTERRUPTS_SYSTICK                 = -1;

/* Device specific interrupts */
static const int INTERRUPTS_CTI                     = 0;
static const int INTERRUPTS_CMC0                    = 1;
static const int INTERRUPTS_DMA0_CH0                = 2;
static const int INTERRUPTS_DMA0_CH1                = 3;
static const int INTERRUPTS_DMA0_CH2                = 4;
static const int INTERRUPTS_DMA0_CH3                = 5;
static const int INTERRUPTS_DMA0_CH4                = 6;
static const int INTERRUPTS_DMA0_CH5                = 7;
static const int INTERRUPTS_DMA0_CH6                = 8;
static const int INTERRUPTS_DMA0_CH7                = 9;
static const int INTERRUPTS_DMA0_CH8                = 10;
static const int INTERRUPTS_DMA0_CH9                = 11;
static const int INTERRUPTS_DMA0_CH10               = 12;
static const int INTERRUPTS_DMA0_CH11               = 13;
static const int INTERRUPTS_DMA0_CH12               = 14;
static const int INTERRUPTS_DMA0_CH13               = 15;
static const int INTERRUPTS_DMA0_CH14               = 16;
static const int INTERRUPTS_DMA0_CH15               = 17;
static const int INTERRUPTS_EWM0                    = 18;
static const int INTERRUPTS_MCM0                    = 19;
static const int INTERRUPTS_MSCM0                   = 20;
static const int INTERRUPTS_SPC0                    = 21;
static const int INTERRUPTS_WUU0                    = 22;
static const int INTERRUPTS_WDOG0                   = 23;
static const int INTERRUPTS_WDOG1                   = 24;
static const int INTERRUPTS_SCG0                    = 25;
static const int INTERRUPTS_SFA0                    = 26;
static const int INTERRUPTS_FMU0                    = 27;
static const int INTERRUPTS_ELE_CMD                 = 28;
static const int INTERRUPTS_ELE_SECURE              = 29;
static const int INTERRUPTS_ELE_NONSECURE           = 30;
static const int INTERRUPTS_TRDC0                   = 31;
static const int INTERRUPTS_RTC_ALARM               = 32;
static const int INTERRUPTS_RTC_SECONDS             = 33;
static const int INTERRUPTS_LPTMR0                  = 34;
static const int INTERRUPTS_LPTMR1                  = 35;
static const int INTERRUPTS_LPIT0                   = 36;
static const int INTERRUPTS_TPM0                    = 37;
static const int INTERRUPTS_TPM1                    = 38;
static const int INTERRUPTS_LPI2C0                  = 39;
static const int INTERRUPTS_LPI2C1                  = 40;
static const int INTERRUPTS_I3C0                    = 41;
static const int INTERRUPTS_LPSPI0                  = 42;
static const int INTERRUPTS_LPSPI1                  = 43;
static const int INTERRUPTS_LPUART0                 = 44;
static const int INTERRUPTS_LPUART1                 = 45;
static const int INTERRUPTS_FLEXIO0                 = 46;
static const int INTERRUPTS_CAN0                    = 47;
static const int INTERRUPTS_RESERVED64              = 48;
static const int INTERRUPTS_RESERVED65              = 49;
static const int INTERRUPTS_RESERVED66              = 50;
static const int INTERRUPTS_RESERVED67              = 51;
static const int INTERRUPTS_RESERVED68              = 52;
static const int INTERRUPTS_RESERVED69              = 53;
static const int INTERRUPTS_RESERVED70              = 54;
static const int INTERRUPTS_RESERVED71              = 55;
static const int INTERRUPTS_RESERVED72              = 56;
static const int INTERRUPTS_RESERVED73              = 57;
static const int INTERRUPTS_RESERVED74              = 58;
static const int INTERRUPTS_GPIOA_INT0              = 59;
static const int INTERRUPTS_GPIOA_INT1              = 60;
static const int INTERRUPTS_GPIOB_INT0              = 61;
static const int INTERRUPTS_GPIOB_INT1              = 62;
static const int INTERRUPTS_GPIOC_INT0              = 63;
static const int INTERRUPTS_GPIOC_INT1              = 64;
static const int INTERRUPTS_GPIOD_INT0              = 65;
static const int INTERRUPTS_GPIOD_INT1              = 66;
static const int INTERRUPTS_PORTA_EFT               = 67;
static const int INTERRUPTS_PORTB_EFT               = 68;
static const int INTERRUPTS_PORTC_EFT               = 69;
static const int INTERRUPTS_PORTD_EFT               = 70;
static const int INTERRUPTS_ADC0                    = 71;
static const int INTERRUPTS_LPCMP0                  = 72;
static const int INTERRUPTS_LPCMP1                  = 73;
static const int INTERRUPTS_VBAT                    = 74;
static const int INTERRUPTS_RESERVED91              = 75;

// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for KW45Z41083AFTA.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for kw45z41083afta.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
