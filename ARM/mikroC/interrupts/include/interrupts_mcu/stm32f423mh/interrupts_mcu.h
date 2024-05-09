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
* @brief stm32f423mh MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_NMI = 2;
static const int INTERRUPTS_HARDFAULT = 3;
static const int INTERRUPTS_MEMMANAGE = 4;
static const int INTERRUPTS_BUSFAULT = 5;
static const int INTERRUPTS_USAGEFAULT = 6;
static const int INTERRUPTS_RESERVED1 = 7;
static const int INTERRUPTS_RESERVED2 = 8;
static const int INTERRUPTS_RESERVED3 = 9;
static const int INTERRUPTS_RESERVED4 = 10;
static const int INTERRUPTS_SVCALL = 11;
static const int INTERRUPTS_DEBUGMON = 12;
static const int INTERRUPTS_RESERVED5 = 13;
static const int INTERRUPTS_PENDSV = 14;
static const int INTERRUPTS_SYSTICK = 15;
static const int INTERRUPTS_WWDG = 16;
static const int INTERRUPTS_PVD = 17;
static const int INTERRUPTS_TAMP_STAMP = 18;
static const int INTERRUPTS_RTC_WKUP = 19;
static const int INTERRUPTS_FLASH = 20;
static const int INTERRUPTS_RCC = 21;
static const int INTERRUPTS_EXTI0 = 22;
static const int INTERRUPTS_EXTI1 = 23;
static const int INTERRUPTS_EXTI2 = 24;
static const int INTERRUPTS_EXTI3 = 25;
static const int INTERRUPTS_EXTI4 = 26;
static const int INTERRUPTS_DMA1_STREAM0 = 27;
static const int INTERRUPTS_DMA1_STREAM1 = 28;
static const int INTERRUPTS_DMA1_STREAM2 = 29;
static const int INTERRUPTS_DMA1_STREAM3 = 30;
static const int INTERRUPTS_DMA1_STREAM4 = 31;
static const int INTERRUPTS_DMA1_STREAM5 = 32;
static const int INTERRUPTS_DMA1_STREAM6 = 33;
static const int INTERRUPTS_ADC = 34;
static const int INTERRUPTS_CAN1_TX = 35;
static const int INTERRUPTS_CAN1_RX0 = 36;
static const int INTERRUPTS_CAN1_RX1 = 37;
static const int INTERRUPTS_CAN1_SCE = 38;
static const int INTERRUPTS_EXTI9_5 = 39;
static const int INTERRUPTS_TIM1_BRK_TIM9 = 40;
static const int INTERRUPTS_TIM1_UP_TIM10 = 41;
static const int INTERRUPTS_TIM1_TRG_COM_TIM11 = 42;
static const int INTERRUPTS_TIM1_CC = 43;
static const int INTERRUPTS_TIM2 = 44;
static const int INTERRUPTS_TIM3 = 45;
static const int INTERRUPTS_TIM4 = 46;
static const int INTERRUPTS_I2C1_EVT = 47;
static const int INTERRUPTS_I2C1_ERR = 48;
static const int INTERRUPTS_I2C2_EVT = 49;
static const int INTERRUPTS_I2C2_ERR = 50;
static const int INTERRUPTS_SPI1 = 51;
static const int INTERRUPTS_SPI2 = 52;
static const int INTERRUPTS_USART1 = 53;
static const int INTERRUPTS_USART2 = 54;
static const int INTERRUPTS_USART3 = 55;
static const int INTERRUPTS_EXTI15_10 = 56;
static const int INTERRUPTS_EXTI17_RTC_ALARM = 57;
static const int INTERRUPTS_EXTI18_OTG_FS_WKUP = 58;
static const int INTERRUPTS_TIM8_BRK_TIM12 = 59;
static const int INTERRUPTS_TIM8_UP_TIM13 = 60;
static const int INTERRUPTS_TIM8_TRG_COM_TIM14 = 61;
static const int INTERRUPTS_TIM8_CC = 62;
static const int INTERRUPTS_DMA1_STREAM7 = 63;
static const int INTERRUPTS_FSMC = 64;
static const int INTERRUPTS_SDIO = 65;
static const int INTERRUPTS_TIM5 = 66;
static const int INTERRUPTS_SPI3 = 67;
static const int INTERRUPTS_UART4 = 68;
static const int INTERRUPTS_UART5 = 69;
static const int INTERRUPTS_TIM6_GLB_IT_DAC1_DAC2 = 70;
static const int INTERRUPTS_TIM7 = 71;
static const int INTERRUPTS_DMA2_STREAM0 = 72;
static const int INTERRUPTS_DMA2_STREAM1 = 73;
static const int INTERRUPTS_DMA2_STREAM2 = 74;
static const int INTERRUPTS_DMA2_STREAM3 = 75;
static const int INTERRUPTS_DMA2_STREAM4 = 76;
static const int INTERRUPTS_DFSDM1_FLT0 = 77;
static const int INTERRUPTS_DFSDM1_FLT1 = 78;
static const int INTERRUPTS_CAN2_TX = 79;
static const int INTERRUPTS_CAN2_RX0 = 80;
static const int INTERRUPTS_CAN2_RX1 = 81;
static const int INTERRUPTS_CAN2_SCE = 82;
static const int INTERRUPTS_OTG_FS = 83;
static const int INTERRUPTS_DMA2_STREAM5 = 84;
static const int INTERRUPTS_DMA2_STREAM6 = 85;
static const int INTERRUPTS_DMA2_STREAM7 = 86;
static const int INTERRUPTS_USART6 = 87;
static const int INTERRUPTS_I2C3_EV = 88;
static const int INTERRUPTS_I2C3_ER = 89;
static const int INTERRUPTS_CAN3_TX = 90;
static const int INTERRUPTS_CAN3_RX0 = 91;
static const int INTERRUPTS_CAN3_RX1 = 92;
static const int INTERRUPTS_CAN3_SCE = 93;
static const int INTERRUPTS_RESERVED6 = 94;
static const int INTERRUPTS_CRYPTO = 95;
static const int INTERRUPTS_RNG = 96;
static const int INTERRUPTS_FPU = 97;
static const int INTERRUPTS_UART7 = 98;
static const int INTERRUPTS_UART8 = 99;
static const int INTERRUPTS_SPI4 = 100;
static const int INTERRUPTS_SPI5 = 101;
static const int INTERRUPTS_RESERVED7 = 102;
static const int INTERRUPTS_SAI1 = 103;
static const int INTERRUPTS_UART9 = 104;
static const int INTERRUPTS_UART10 = 105;
static const int INTERRUPTS_RESERVED8 = 106;
static const int INTERRUPTS_RESERVED9 = 107;
static const int INTERRUPTS_QUAD_SPI = 108;
static const int INTERRUPTS_RESERVED10 = 109;
static const int INTERRUPTS_RESERVED11 = 110;
static const int INTERRUPTS_I2CFMP1_EVT = 111;
static const int INTERRUPTS_I2CFMP1_ERR = 112;
static const int INTERRUPTS_EXTI23_LPTIM1 = 113;
static const int INTERRUPTS_DFSDM2_FLT0 = 114;
static const int INTERRUPTS_DFSDM2_FLT1 = 115;
static const int INTERRUPTS_DFSDM2_FLT2 = 116;
static const int INTERRUPTS_DFSDM2_FLT3 = 117;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for stm32f423mh.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for stm32f423mh.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
