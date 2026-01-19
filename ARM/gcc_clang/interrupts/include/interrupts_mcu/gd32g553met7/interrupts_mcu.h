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
* @brief GD32G553MET7 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_WWDGT = 16;
static const int INTERRUPTS_LVD_VAVD_VOVD_VUVD = 17;
static const int INTERRUPTS_TAMPER = 18;
static const int INTERRUPTS_RTC_WKUP = 19;
static const int INTERRUPTS_FMC = 20;
static const int INTERRUPTS_RCU = 21;
static const int INTERRUPTS_EXTI0 = 22;
static const int INTERRUPTS_EXTI1 = 23;
static const int INTERRUPTS_EXTI2 = 24;
static const int INTERRUPTS_EXTI3 = 25;
static const int INTERRUPTS_EXTI4 = 26;
static const int INTERRUPTS_DMA0_Channel0 = 27;
static const int INTERRUPTS_DMA0_Channel1 = 28;
static const int INTERRUPTS_DMA0_Channel2 = 29;
static const int INTERRUPTS_DMA0_Channel3 = 30;
static const int INTERRUPTS_DMA0_Channel4 = 31;
static const int INTERRUPTS_DMA0_Channel5 = 32;
static const int INTERRUPTS_DMA0_Channel6 = 33;
static const int INTERRUPTS_ADC0_1 = 34;
static const int INTERRUPTS_EXTI5_9 = 39;
static const int INTERRUPTS_TIMER0_BRK = 40;
static const int INTERRUPTS_TIMER0_UP = 41;
static const int INTERRUPTS_TIMER0_TRG_CMT_IDX = 42;
static const int INTERRUPTS_TIMER0_Channel = 43;
static const int INTERRUPTS_TIMER1 = 44;
static const int INTERRUPTS_TIMER2 = 45;
static const int INTERRUPTS_TIMER3 = 46;
static const int INTERRUPTS_I2C0_EV_WKUP = 47;
static const int INTERRUPTS_I2C0_ER = 48;
static const int INTERRUPTS_I2C1_EV_WKUP = 49;
static const int INTERRUPTS_I2C1_ER = 50;
static const int INTERRUPTS_SPI0 = 51;
static const int INTERRUPTS_SPI1 = 52;
static const int INTERRUPTS_USART0 = 53;
static const int INTERRUPTS_USART1 = 54;
static const int INTERRUPTS_USART2 = 55;
static const int INTERRUPTS_EXTI10_15 = 56;
static const int INTERRUPTS_RTC_Alarm = 57;
static const int INTERRUPTS_TIMER7_BRK_TRS_IDX = 59;
static const int INTERRUPTS_TIMER7_UP = 60;
static const int INTERRUPTS_TIMER7_TRG_CMT_IDX = 61;
static const int INTERRUPTS_TIMER7_Channel = 62;
static const int INTERRUPTS_ADC2 = 63;
static const int INTERRUPTS_SYSCFG = 64;
static const int INTERRUPTS_LPTIMER = 65;
static const int INTERRUPTS_TIMER4 = 66;
static const int INTERRUPTS_SPI2 = 67;
static const int INTERRUPTS_UART3 = 68;
static const int INTERRUPTS_UART4 = 69;
static const int INTERRUPTS_TIMER5_DAC0_2 = 70;
static const int INTERRUPTS_TIMER6_DAC1_3 = 71;
static const int INTERRUPTS_DMA1_Channel0 = 72;
static const int INTERRUPTS_DMA1_Channel1 = 73;
static const int INTERRUPTS_DMA1_Channel2 = 74;
static const int INTERRUPTS_DMA1_Channel3 = 75;
static const int INTERRUPTS_DMA1_Channel4 = 76;
static const int INTERRUPTS_ADC3 = 77;
static const int INTERRUPTS_VUVD1_VOVD1 = 79;
static const int INTERRUPTS_CMP0_3 = 80;
static const int INTERRUPTS_CMP4_7 = 81;
static const int INTERRUPTS_CMP = 82;
static const int INTERRUPTS_HRTIMER_IRQ0 = 83;
static const int INTERRUPTS_HRTIMER_IRQ1 = 84;
static const int INTERRUPTS_HRTIMER_IRQ2 = 85;
static const int INTERRUPTS_HRTIMER_IRQ3 = 86;
static const int INTERRUPTS_HRTIMER_IRQ4 = 87;
static const int INTERRUPTS_HRTIMER_IRQ5 = 88;
static const int INTERRUPTS_HRTIMER_IRQ6 = 89;
static const int INTERRUPTS_HRTIMER_IRQ7 = 90;
static const int INTERRUPTS_HRTIMER_IRQ8 = 91;
static const int INTERRUPTS_HRTIMER_IRQ9 = 92;
static const int INTERRUPTS_TIMER19_BRK_TRS_IDX = 93;
static const int INTERRUPTS_TIMER19_UP = 94;
static const int INTERRUPTS_TIMER19_TRG_CMT_IDX = 95;
static const int INTERRUPTS_TIMER19_Channel = 96;
static const int INTERRUPTS_FPU = 97;
static const int INTERRUPTS_I2C2_EV_WKUP = 98;
static const int INTERRUPTS_I2C2_ER = 99;
static const int INTERRUPTS_CAU = 101;
static const int INTERRUPTS_TRNG = 106;
static const int INTERRUPTS_I2C3_EV_WKUP = 108;
static const int INTERRUPTS_I2C3_ER = 109;
static const int INTERRUPTS_DMAMUX_OVR = 110;
static const int INTERRUPTS_QSPI = 111;
static const int INTERRUPTS_FFT = 112;
static const int INTERRUPTS_DMA1_Channel5 = 113;
static const int INTERRUPTS_DMA1_Channel6 = 114;
static const int INTERRUPTS_CLA = 115;
static const int INTERRUPTS_TMU = 116;
static const int INTERRUPTS_FAC = 117;
static const int INTERRUPTS_HPDF0 = 118;
static const int INTERRUPTS_HPDF1 = 119;
static const int INTERRUPTS_HPDF2 = 120;
static const int INTERRUPTS_HPDF3 = 121;
static const int INTERRUPTS_TIMER14 = 122;
static const int INTERRUPTS_TIMER15 = 123;
static const int INTERRUPTS_TIMER16 = 124;
static const int INTERRUPTS_CAN0_WKUP = 125;
static const int INTERRUPTS_CAN0_Message = 126;
static const int INTERRUPTS_CAN0_Busoff = 127;
static const int INTERRUPTS_CAN0_Error = 128;
static const int INTERRUPTS_CAN0_FastError = 129;
static const int INTERRUPTS_CAN0_TEC = 130;
static const int INTERRUPTS_CAN0_REC = 131;
static const int INTERRUPTS_CAN1_WKUP = 132;
static const int INTERRUPTS_CAN1_Message = 133;
static const int INTERRUPTS_CAN1_Busoff = 134;
static const int INTERRUPTS_CAN1_Error = 135;
static const int INTERRUPTS_CAN1_FastError = 136;
static const int INTERRUPTS_CAN1_TEC = 137;
static const int INTERRUPTS_CAN1_REC = 138;
static const int INTERRUPTS_CAN2_WKUP = 139;
static const int INTERRUPTS_CAN2_Message = 140;
static const int INTERRUPTS_CAN2_Busoff = 141;
static const int INTERRUPTS_CAN2_Error = 142;
static const int INTERRUPTS_CAN2_FastError = 143;
static const int INTERRUPTS_CAN2_TEC = 144;
static const int INTERRUPTS_CAN2_REC = 145;
static const int INTERRUPTS_TIMER0_DEC = 146;
static const int INTERRUPTS_TIMER1_DEC = 147;
static const int INTERRUPTS_TIMER2_DEC = 148;
static const int INTERRUPTS_TIMER3_DEC = 149;
static const int INTERRUPTS_TIMER4_DEC = 150;
static const int INTERRUPTS_TIMER7_DEC = 151;
static const int INTERRUPTS_TIMER19_DEC = 152;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for GD32G553MET7.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for GD32G553MET7.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
