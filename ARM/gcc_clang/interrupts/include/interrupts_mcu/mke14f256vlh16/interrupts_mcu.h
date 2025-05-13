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
* @brief MKE14F256VLH16 MCU specific interrupt per module definitions.
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
static const int INTERRUPTS_SVCALL                  = -5;
static const int INTERRUPTS_DEBUGMONITOR            = -4;
static const int INTERRUPTS_PENDSV                  = -2;
static const int INTERRUPTS_SYSTICK                 = -1;

/* Device specific interrupts */
static const int INTERRUPTS_DMA0                    = 0;
static const int INTERRUPTS_DMA1                    = 1;
static const int INTERRUPTS_DMA2                    = 2;
static const int INTERRUPTS_DMA3                    = 3;
static const int INTERRUPTS_DMA4                    = 4;
static const int INTERRUPTS_DMA5                    = 5;
static const int INTERRUPTS_DMA6                    = 6;
static const int INTERRUPTS_DMA7                    = 7;
static const int INTERRUPTS_DMA8                    = 8;
static const int INTERRUPTS_DMA9                    = 9;
static const int INTERRUPTS_DMA10                   = 10;
static const int INTERRUPTS_DMA11                   = 11;
static const int INTERRUPTS_DMA12                   = 12;
static const int INTERRUPTS_DMA13                   = 13;
static const int INTERRUPTS_DMA14                   = 14;
static const int INTERRUPTS_DMA15                   = 15;
static const int INTERRUPTS_DMA_ERROR               = 16;
static const int INTERRUPTS_MCM                     = 17;
static const int INTERRUPTS_FTFE                    = 18;
static const int INTERRUPTS_READ_COLLISION          = 19;
static const int INTERRUPTS_LVD_LVW                 = 20;
static const int INTERRUPTS_DOUBLEBIT_FAULT         = 21;
static const int INTERRUPTS_WDOG_EWM                = 22;
static const int INTERRUPTS_RESERVED39              = 23;
static const int INTERRUPTS_LPI2C0                  = 24;
static const int INTERRUPTS_LPI2C1                  = 25;
static const int INTERRUPTS_LPSPI0                  = 26;
static const int INTERRUPTS_LPSPI1                  = 27;
static const int INTERRUPTS_RESERVED44              = 28;
static const int INTERRUPTS_PWT                     = 29;
static const int INTERRUPTS_RESERVED46              = 30;
static const int INTERRUPTS_LPUART0_TX              = 31;
static const int INTERRUPTS_LPUART0_RX              = 32;
static const int INTERRUPTS_LPUART1_TX              = 33;
static const int INTERRUPTS_LPUART1_RX              = 34;
static const int INTERRUPTS_LPUART2_TX              = 35;
static const int INTERRUPTS_LPUART2_RX              = 36;
static const int INTERRUPTS_RESERVED53              = 37;
static const int INTERRUPTS_RESERVED54              = 38;
static const int INTERRUPTS_ADC0                    = 39;
static const int INTERRUPTS_CMP0                    = 40;
static const int INTERRUPTS_CMP1                    = 41;
static const int INTERRUPTS_FTM0                    = 42;
static const int INTERRUPTS_FTM1                    = 43;
static const int INTERRUPTS_FTM2                    = 44;
static const int INTERRUPTS_RESERVED61              = 45;
static const int INTERRUPTS_RTC                     = 46;
static const int INTERRUPTS_RTC_SECONDS             = 47;
static const int INTERRUPTS_LPIT0_CH0               = 48;
static const int INTERRUPTS_LPIT0_CH1               = 49;
static const int INTERRUPTS_LPIT0_CH2               = 50;
static const int INTERRUPTS_LPIT0_CH3               = 51;
static const int INTERRUPTS_PDB0                    = 52;
static const int INTERRUPTS_RESERVED69              = 53;
static const int INTERRUPTS_RESERVED70              = 54;
static const int INTERRUPTS_RESERVED71              = 55;
static const int INTERRUPTS_DAC0                    = 56;
static const int INTERRUPTS_SCG_RCM                 = 57;
static const int INTERRUPTS_LPTMR0                  = 58;
static const int INTERRUPTS_PORTA                   = 59;
static const int INTERRUPTS_PORTB                   = 60;
static const int INTERRUPTS_PORTC                   = 61;
static const int INTERRUPTS_PORTD                   = 62;
static const int INTERRUPTS_PORTE                   = 63;
static const int INTERRUPTS_SWI                     = 64;
static const int INTERRUPTS_RESERVED81              = 65;
static const int INTERRUPTS_RESERVED82              = 66;
static const int INTERRUPTS_RESERVED83              = 67;
static const int INTERRUPTS_PDB1                    = 68;
static const int INTERRUPTS_FLEXIO                  = 69;
static const int INTERRUPTS_CMP2                    = 70;
static const int INTERRUPTS_FTM3                    = 71;
static const int INTERRUPTS_RESERVED88              = 72;
static const int INTERRUPTS_ADC1                    = 73;
static const int INTERRUPTS_ADC2                    = 74;
static const int INTERRUPTS_RESERVED91              = 75;
static const int INTERRUPTS_RESERVED92              = 76;
static const int INTERRUPTS_PDB2                    = 77;
static const int INTERRUPTS_RESERVED94              = 78;
static const int INTERRUPTS_RESERVED95              = 79;
static const int INTERRUPTS_RESERVED96              = 80;
static const int INTERRUPTS_RESERVED97              = 81;
static const int INTERRUPTS_RESERVED98              = 82;
static const int INTERRUPTS_RESERVED99              = 83;
static const int INTERRUPTS_RESERVED100             = 84;
static const int INTERRUPTS_RESERVED101             = 85;
static const int INTERRUPTS_RESERVED102             = 86;
static const int INTERRUPTS_RESERVED103             = 87;
static const int INTERRUPTS_RESERVED104             = 88;
static const int INTERRUPTS_RESERVED105             = 89;
static const int INTERRUPTS_RESERVED106             = 90;
static const int INTERRUPTS_RESERVED107             = 91;

// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for MKE14F256VLH16.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for mke14f256vlh16.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
