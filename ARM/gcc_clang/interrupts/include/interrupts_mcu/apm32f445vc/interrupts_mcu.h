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
* @brief APM32F445VC MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_DMA0 = 16;
static const int INTERRUPTS_DMA1 = 17;
static const int INTERRUPTS_DMA2 = 18;
static const int INTERRUPTS_DMA3 = 19;
static const int INTERRUPTS_DMA4 = 20;
static const int INTERRUPTS_DMA5 = 21;
static const int INTERRUPTS_DMA6 = 22;
static const int INTERRUPTS_DMA7 = 23;
static const int INTERRUPTS_DMA8 = 24;
static const int INTERRUPTS_DMA9 = 25;
static const int INTERRUPTS_DMA10 = 26;
static const int INTERRUPTS_DMA11 = 27;
static const int INTERRUPTS_DMA12 = 28;
static const int INTERRUPTS_DMA13 = 29;
static const int INTERRUPTS_DMA14 = 30;
static const int INTERRUPTS_DMA15 = 31;
static const int INTERRUPTS_DMA_Error = 32;
static const int INTERRUPTS_MC = 33;
static const int INTERRUPTS_FLASH = 34;
static const int INTERRUPTS_Read_Collision = 35;
static const int INTERRUPTS_LVD_LVW = 36;
static const int INTERRUPTS_FLASH_Fault = 37;
static const int INTERRUPTS_WDT_EWDT = 38;
static const int INTERRUPTS_RMU = 39;
static const int INTERRUPTS_LPI2C_Master = 40;
static const int INTERRUPTS_LPI2C_Slave = 41;
static const int INTERRUPTS_LPSPI0 = 42;
static const int INTERRUPTS_LPSPI1 = 43;
static const int INTERRUPTS_LPSPI2 = 44;
static const int INTERRUPTS_LPUART0_RxTx = 47;
static const int INTERRUPTS_LPUART1_RxTx = 49;
static const int INTERRUPTS_LPUART2_RxTx = 51;
static const int INTERRUPTS_ADC0 = 55;
static const int INTERRUPTS_ADC1 = 56;
static const int INTERRUPTS_COMP = 57;
static const int INTERRUPTS_EREP_single_fault = 60;
static const int INTERRUPTS_EREP_double_fault = 61;
static const int INTERRUPTS_RTC = 62;
static const int INTERRUPTS_RTC_Seconds = 63;
static const int INTERRUPTS_LPITMR_Ch0 = 64;
static const int INTERRUPTS_LPITMR_Ch1 = 65;
static const int INTERRUPTS_LPITMR_Ch2 = 66;
static const int INTERRUPTS_LPITMR_Ch3 = 67;
static const int INTERRUPTS_PDU0 = 68;
static const int INTERRUPTS_SCG = 73;
static const int INTERRUPTS_LPTMR = 74;
static const int INTERRUPTS_PMA = 75;
static const int INTERRUPTS_PMB = 76;
static const int INTERRUPTS_PMC = 77;
static const int INTERRUPTS_PMD = 78;
static const int INTERRUPTS_PME = 79;
static const int INTERRUPTS_SWI = 80;
static const int INTERRUPTS_PDU1 = 84;
static const int INTERRUPTS_CFGIO = 85;
static const int INTERRUPTS_CAN0_ORed = 94;
static const int INTERRUPTS_CAN0_Error = 95;
static const int INTERRUPTS_CAN0_Wake_Up = 96;
static const int INTERRUPTS_CAN0_ORed_0_15_MB = 97;
static const int INTERRUPTS_CAN0_ORed_16_31_MB = 98;
static const int INTERRUPTS_CAN1_ORed = 101;
static const int INTERRUPTS_CAN1_Error = 102;
static const int INTERRUPTS_CAN1_ORed_0_15_MB = 104;
static const int INTERRUPTS_CAN2_ORed = 108;
static const int INTERRUPTS_CAN2_Error = 109;
static const int INTERRUPTS_CAN2_ORed_0_15_MB = 111;
static const int INTERRUPTS_CFGTMR0_Ch0_Ch1 = 115;
static const int INTERRUPTS_CFGTMR0_Ch2_Ch3 = 116;
static const int INTERRUPTS_CFGTMR0_Ch4_Ch5 = 117;
static const int INTERRUPTS_CFGTMR0_Ch6_Ch7 = 118;
static const int INTERRUPTS_CFGTMR0_Fault = 119;
static const int INTERRUPTS_CFGTMR0_Ovf_Reload = 120;
static const int INTERRUPTS_CFGTMR1_Ch0_Ch1 = 121;
static const int INTERRUPTS_CFGTMR1_Ch2_Ch3 = 122;
static const int INTERRUPTS_CFGTMR1_Ch4_Ch5 = 123;
static const int INTERRUPTS_CFGTMR1_Ch6_Ch7 = 124;
static const int INTERRUPTS_CFGTMR1_Fault = 125;
static const int INTERRUPTS_CFGTMR1_Ovf_Reload = 126;
static const int INTERRUPTS_CFGTMR2_Ch0_Ch1 = 127;
static const int INTERRUPTS_CFGTMR2_Ch2_Ch3 = 128;
static const int INTERRUPTS_CFGTMR2_Ch4_Ch5 = 129;
static const int INTERRUPTS_CFGTMR2_Ch6_Ch7 = 130;
static const int INTERRUPTS_CFGTMR2_Fault = 131;
static const int INTERRUPTS_CFGTMR2_Ovf_Reload = 132;
static const int INTERRUPTS_CFGTMR3_Ch0_Ch1 = 133;
static const int INTERRUPTS_CFGTMR3_Ch2_Ch3 = 134;
static const int INTERRUPTS_CFGTMR3_Ch4_Ch5 = 135;
static const int INTERRUPTS_CFGTMR3_Ch6_Ch7 = 136;
static const int INTERRUPTS_CFGTMR3_Fault = 137;
static const int INTERRUPTS_CFGTMR3_Ovf_Reload = 138;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for APM32F445VC.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for APM32F445VC.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
