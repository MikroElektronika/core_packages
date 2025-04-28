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
* @brief MK27FN2M0AVMI15 MCU specific interrupt per module definitions.
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
static const int INTERRUPTS_DMA0_DMA16              = 0;
static const int INTERRUPTS_DMA1_DMA17              = 1;
static const int INTERRUPTS_DMA2_DMA18              = 2;
static const int INTERRUPTS_DMA3_DMA19              = 3;
static const int INTERRUPTS_DMA4_DMA20              = 4;
static const int INTERRUPTS_DMA5_DMA21              = 5;
static const int INTERRUPTS_DMA6_DMA22              = 6;
static const int INTERRUPTS_DMA7_DMA23              = 7;
static const int INTERRUPTS_DMA8_DMA24              = 8;
static const int INTERRUPTS_DMA9_DMA25              = 9;
static const int INTERRUPTS_DMA10_DMA26             = 10;
static const int INTERRUPTS_DMA11_DMA27             = 11;
static const int INTERRUPTS_DMA12_DMA28             = 12;
static const int INTERRUPTS_DMA13_DMA29             = 13;
static const int INTERRUPTS_DMA14_DMA30             = 14;
static const int INTERRUPTS_DMA15_DMA31             = 15;
static const int INTERRUPTS_DMA_ERROR               = 16;
static const int INTERRUPTS_MCM                     = 17;
static const int INTERRUPTS_FTFE                    = 18;
static const int INTERRUPTS_READ_COLLISION          = 19;
static const int INTERRUPTS_LVD_LVW                 = 20;
static const int INTERRUPTS_LLWU                    = 21;
static const int INTERRUPTS_WDOG_EWM                = 22;
static const int INTERRUPTS_TRNG0                   = 23;
static const int INTERRUPTS_I2C0                    = 24;
static const int INTERRUPTS_I2C1                    = 25;
static const int INTERRUPTS_SPI0                    = 26;
static const int INTERRUPTS_SPI1                    = 27;
static const int INTERRUPTS_I2S0_TX                 = 28;
static const int INTERRUPTS_I2S0_RX                 = 29;
static const int INTERRUPTS_LPUART0                 = 30;
static const int INTERRUPTS_LPUART1                 = 31;
static const int INTERRUPTS_LPUART2                 = 32;
static const int INTERRUPTS_LPUART3                 = 33;
static const int INTERRUPTS_LPUART4                 = 34;
static const int INTERRUPTS_RESERVED51              = 35;
static const int INTERRUPTS_RESERVED52              = 36;
static const int INTERRUPTS_RESERVED53              = 37;
static const int INTERRUPTS_RESERVED54              = 38;
static const int INTERRUPTS_ADC0                    = 39;
static const int INTERRUPTS_CMP0                    = 40;
static const int INTERRUPTS_CMP1                    = 41;
static const int INTERRUPTS_FTM0                    = 42;
static const int INTERRUPTS_FTM1                    = 43;
static const int INTERRUPTS_FTM2                    = 44;
static const int INTERRUPTS_CMT                     = 45;
static const int INTERRUPTS_RTC                     = 46;
static const int INTERRUPTS_RTC_SECONDS             = 47;
static const int INTERRUPTS_PIT0CH0                 = 48;
static const int INTERRUPTS_PIT0CH1                 = 49;
static const int INTERRUPTS_PIT0CH2                 = 50;
static const int INTERRUPTS_PIT0CH3                 = 51;
static const int INTERRUPTS_PDB0                    = 52;
static const int INTERRUPTS_USB0                    = 53;
static const int INTERRUPTS_USBDCD                  = 54;
static const int INTERRUPTS_RESERVED71              = 55;
static const int INTERRUPTS_DAC0                    = 56;
static const int INTERRUPTS_MCG                     = 57;
static const int INTERRUPTS_LPTMR0_LPTMR1           = 58;
static const int INTERRUPTS_PORTA                   = 59;
static const int INTERRUPTS_PORTB                   = 60;
static const int INTERRUPTS_PORTC                   = 61;
static const int INTERRUPTS_PORTD                   = 62;
static const int INTERRUPTS_PORTE                   = 63;
static const int INTERRUPTS_SWI                     = 64;
static const int INTERRUPTS_SPI2                    = 65;
static const int INTERRUPTS_SPI3                    = 66;
static const int INTERRUPTS_RESERVED83              = 67;
static const int INTERRUPTS_I2S1_TX                 = 68;
static const int INTERRUPTS_I2S1_RX                 = 69;
static const int INTERRUPTS_FLEXIO0                 = 70;
static const int INTERRUPTS_FTM3                    = 71;
static const int INTERRUPTS_RESERVED88              = 72;
static const int INTERRUPTS_RESERVED89              = 73;
static const int INTERRUPTS_I2C2                    = 74;
static const int INTERRUPTS_RESERVED91              = 75;
static const int INTERRUPTS_RESERVED92              = 76;
static const int INTERRUPTS_RESERVED93              = 77;
static const int INTERRUPTS_RESERVED94              = 78;
static const int INTERRUPTS_RESERVED95              = 79;
static const int INTERRUPTS_RESERVED96              = 80;
static const int INTERRUPTS_SDHC                    = 81;
static const int INTERRUPTS_RESERVED98              = 82;
static const int INTERRUPTS_RESERVED99              = 83;
static const int INTERRUPTS_RESERVED100             = 84;
static const int INTERRUPTS_RESERVED101             = 85;
static const int INTERRUPTS_RESERVED102             = 86;
static const int INTERRUPTS_RESERVED103             = 87;
static const int INTERRUPTS_TPM1                    = 88;
static const int INTERRUPTS_TPM2                    = 89;
static const int INTERRUPTS_USBHSDCD                = 90;
static const int INTERRUPTS_I2C3                    = 91;
static const int INTERRUPTS_RESERVED108             = 92;
static const int INTERRUPTS_USBHS                   = 93;
static const int INTERRUPTS_RESERVED110             = 94;
static const int INTERRUPTS_RESERVED111             = 95;
static const int INTERRUPTS_RESERVED112             = 96;
static const int INTERRUPTS_RESERVED113             = 97;
static const int INTERRUPTS_RESERVED114             = 98;
static const int INTERRUPTS_RESERVED115             = 99;
static const int INTERRUPTS_QUADSPI0                = 100;
static const int INTERRUPTS_RESERVED117             = 101;
static const int INTERRUPTS_RESERVED118             = 102;
static const int INTERRUPTS_RESERVED119             = 103;
static const int INTERRUPTS_RESERVED120             = 104;
static const int INTERRUPTS_RESERVED121             = 105;
static const int INTERRUPTS_RESERVED122             = 106;

// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for MK27FN2M0AVMI15.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for mk27fn2m0avmi15.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
