/****************************************************************************
**
** Copyright (C) 2024 MikroElektronika d.o.o.
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
* @brief ATSAMV70Q19A MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_RESET = 1;
static const int INTERRUPTS_NONMASKABLEINT = 2;
static const int INTERRUPTS_HARDFAULT = 3;
static const int INTERRUPTS_MEMORYMANAGEMENT = 4;
static const int INTERRUPTS_BUSFAULT = 5;
static const int INTERRUPTS_USAGEFAULT = 6;
static const int INTERRUPTS_SVCALL = 11;
static const int INTERRUPTS_DEBUGMONITOR = 12;
static const int INTERRUPTS_PENDSV = 14;
static const int INTERRUPTS_SYSTICK = 15;
static const int INTERRUPTS_SUPC = 16;
static const int INTERRUPTS_RSTC = 17;
static const int INTERRUPTS_RTC = 18;
static const int INTERRUPTS_RTT = 19;
static const int INTERRUPTS_WDT = 20;
static const int INTERRUPTS_PMC = 21;
static const int INTERRUPTS_EFC = 22;
static const int INTERRUPTS_UART0 = 23;
static const int INTERRUPTS_UART1 = 24;
static const int INTERRUPTS_PIOA = 26;
static const int INTERRUPTS_PIOB = 27;
static const int INTERRUPTS_PIOC = 28;
static const int INTERRUPTS_USART0 = 29;
static const int INTERRUPTS_USART1 = 30;
static const int INTERRUPTS_USART2 = 31;
static const int INTERRUPTS_PIOD = 32;
static const int INTERRUPTS_PIOE = 33;
static const int INTERRUPTS_HSMCI = 34;
static const int INTERRUPTS_TWIHS0 = 35;
static const int INTERRUPTS_TWIHS1 = 36;
static const int INTERRUPTS_SPI0 = 37;
static const int INTERRUPTS_SSC = 38;
static const int INTERRUPTS_TC0 = 39;
static const int INTERRUPTS_TC1 = 40;
static const int INTERRUPTS_TC2 = 41;
static const int INTERRUPTS_TC3 = 42;
static const int INTERRUPTS_TC4 = 43;
static const int INTERRUPTS_TC5 = 44;
static const int INTERRUPTS_AFEC0 = 45;
static const int INTERRUPTS_DACC = 46;
static const int INTERRUPTS_PWM0 = 47;
static const int INTERRUPTS_ICM = 48;
static const int INTERRUPTS_ACC = 49;
static const int INTERRUPTS_USBHS = 50;
static const int INTERRUPTS_MCAN0_INT0 = 51;
static const int INTERRUPTS_MCAN0_INT1 = 52;
static const int INTERRUPTS_MCAN1_INT0 = 53;
static const int INTERRUPTS_MCAN1_INT1 = 54;
static const int INTERRUPTS_AFEC1 = 56;
static const int INTERRUPTS_TWIHS2 = 57;
static const int INTERRUPTS_SPI1 = 58;
static const int INTERRUPTS_QSPI = 59;
static const int INTERRUPTS_UART2 = 60;
static const int INTERRUPTS_UART3 = 61;
static const int INTERRUPTS_UART4 = 62;
static const int INTERRUPTS_TC6 = 63;
static const int INTERRUPTS_TC7 = 64;
static const int INTERRUPTS_TC8 = 65;
static const int INTERRUPTS_TC9 = 66;
static const int INTERRUPTS_TC10 = 67;
static const int INTERRUPTS_TC11 = 68;
static const int INTERRUPTS_MLB = 69;
static const int INTERRUPTS_AES = 72;
static const int INTERRUPTS_TRNG = 73;
static const int INTERRUPTS_XDMAC = 74;
static const int INTERRUPTS_ISI = 75;
static const int INTERRUPTS_PWM1 = 76;
static const int INTERRUPTS_FPU = 77;
static const int INTERRUPTS_SDRAMC = 78;
static const int INTERRUPTS_RSWDT = 79;
static const int INTERRUPTS_IXC = 84;
static const int INTERRUPTS_PERIPH_COUNT = 85;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for ATSAMV70Q19A.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for ATSAMV70Q19A.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
