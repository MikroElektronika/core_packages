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
* @brief gd32vf103xx MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_RESERVED = 0;             /*!< RISC-V reserved                           */
static const int INTERRUPTS_MSOFTWARE = 3;            /*!< Software interrupt                        */
static const int INTERRUPTS_MTIMER = 7;               /*!< CPU Timer interrupt                       */
static const int INTERRUPTS_MEMACCESS = 17;           /*!< Bus Error interrupt                       */
static const int INTERRUPTS_PMON = 18;                /*!< Performance Monitor                       */
static const int INTERRUPTS_WWDGT = 19;               /*!< window watchDog timer interrupt           */
static const int INTERRUPTS_LVD = 20;                 /*!< LVD through EXTI line detect interrupt    */
static const int INTERRUPTS_TAMPER = 21;              /*!< tamper through EXTI line detect           */
static const int INTERRUPTS_RTC = 22;                 /*!< RTC alarm interrupt                       */
static const int INTERRUPTS_FMC = 23;                 /*!< FMC interrupt                             */
static const int INTERRUPTS_RCU_CTC = 24;             /*!< RCU and CTC interrupt                     */
static const int INTERRUPTS_EXTI0 = 25;               /*!< EXTI line 0 interrupts                    */
static const int INTERRUPTS_EXTI1 = 26;               /*!< EXTI line 1 interrupts                    */
static const int INTERRUPTS_EXTI2 = 27;               /*!< EXTI line 2 interrupts                    */
static const int INTERRUPTS_EXTI3 = 28;               /*!< EXTI line 3 interrupts                    */
static const int INTERRUPTS_EXTI4 = 29;               /*!< EXTI line 4 interrupts                    */
static const int INTERRUPTS_DMA0_Channel0 = 30;       /*!< DMA0 channel0 interrupt                   */
static const int INTERRUPTS_DMA0_Channel1 = 31;       /*!< DMA0 channel1 interrupt                   */
static const int INTERRUPTS_DMA0_Channel2 = 32;       /*!< DMA0 channel2 interrupt                   */
static const int INTERRUPTS_DMA0_Channel3 = 33;       /*!< DMA0 channel3 interrupt                   */
static const int INTERRUPTS_DMA0_Channel4 = 34;       /*!< DMA0 channel4 interrupt                   */
static const int INTERRUPTS_DMA0_Channel5 = 35;       /*!< DMA0 channel5 interrupt                   */
static const int INTERRUPTS_DMA0_Channel6 = 36;       /*!< DMA0 channel6 interrupt                   */
static const int INTERRUPTS_ADC0_1 = 37;              /*!< ADC0 and ADC1 interrupt                   */
static const int INTERRUPTS_CAN0_TX = 38;             /*!< CAN0 TX interrupts                        */
static const int INTERRUPTS_CAN0_RX0 = 39;            /*!< CAN0 RX0 interrupts                       */
static const int INTERRUPTS_CAN0_RX1 = 40;            /*!< CAN0 RX1 interrupts                       */
static const int INTERRUPTS_CAN0_EWMC = 41;           /*!< CAN0 EWMC interrupts                      */
static const int INTERRUPTS_EXTI5_9 = 42;             /*!< EXTI[9:5] interrupts                      */
static const int INTERRUPTS_TIMER0_BRK = 43;          /*!< TIMER0 break interrupts                   */
static const int INTERRUPTS_TIMER0_UP = 44;           /*!< TIMER0 update interrupts                  */
static const int INTERRUPTS_TIMER0_TRG_CMT = 45;      /*!< TIMER0 trigger and commutation interrupts */
static const int INTERRUPTS_TIMER0_Channel = 46;      /*!< TIMER0 channel capture compare interrupts */
static const int INTERRUPTS_TIMER1 = 47;              /*!< TIMER1 interrupt                          */
static const int INTERRUPTS_TIMER2 = 48;              /*!< TIMER2 interrupt                          */
static const int INTERRUPTS_TIMER3 = 49;              /*!< TIMER3 interrupts                         */
static const int INTERRUPTS_I2C0_EV = 50;             /*!< I2C0 event interrupt                      */
static const int INTERRUPTS_I2C0_ER = 51;             /*!< I2C0 error interrupt                      */
static const int INTERRUPTS_I2C1_EV = 52;             /*!< I2C1 event interrupt                      */
static const int INTERRUPTS_I2C1_ER = 53;             /*!< I2C1 error interrupt                      */
static const int INTERRUPTS_SPI0 = 54;                /*!< SPI0 interrupt                            */
static const int INTERRUPTS_SPI1 = 55;                /*!< SPI1 interrupt                            */
static const int INTERRUPTS_USART0 = 56;              /*!< USART0 interrupt                          */
static const int INTERRUPTS_USART1 = 57;              /*!< USART1 interrupt                          */
static const int INTERRUPTS_USART2 = 58;              /*!< USART2 interrupt                          */
static const int INTERRUPTS_EXTI10_15 = 59;           /*!< EXTI[15:10] interrupts                    */
static const int INTERRUPTS_RTC_ALARM = 60;           /*!< RTC alarm interrupt EXTI                  */
static const int INTERRUPTS_USBFS_WKUP = 61;          /*!< USBFS wakeup interrupt                    */
static const int INTERRUPTS_EXMC = 67;                /*!< EXMC global interrupt                     */
static const int INTERRUPTS_TIMER4 = 69;              /*!< TIMER4 global interrupt                   */
static const int INTERRUPTS_SPI2 = 70;                /*!< SPI2 global interrupt                     */
static const int INTERRUPTS_UART3 = 71;               /*!< UART3 global interrupt                    */
static const int INTERRUPTS_UART4 = 72;               /*!< UART4 global interrupt                    */
static const int INTERRUPTS_TIMER5 = 73;              /*!< TIMER5 global interrupt                   */
static const int INTERRUPTS_TIMER6 = 74;              /*!< TIMER6 global interrupt                   */
static const int INTERRUPTS_DMA1_Channel0 = 75;       /*!< DMA1 channel0 global interrupt            */
static const int INTERRUPTS_DMA1_Channel1 = 76;       /*!< DMA1 channel1 global interrupt            */
static const int INTERRUPTS_DMA1_Channel2 = 77;       /*!< DMA1 channel2 global interrupt            */
static const int INTERRUPTS_DMA1_Channel3 = 78;       /*!< DMA1 channel3 global interrupt            */
static const int INTERRUPTS_DMA1_Channel4 = 79;       /*!< DMA1 channel3 global interrupt            */
static const int INTERRUPTS_CAN1_TX = 82;             /*!< CAN1 TX interrupt                         */
static const int INTERRUPTS_CAN1_RX0 = 83;            /*!< CAN1 RX0 interrupt                        */
static const int INTERRUPTS_CAN1_RX1 = 84;            /*!< CAN1 RX1 interrupt                        */
static const int INTERRUPTS_CAN1_EWMC = 85;           /*!< CAN1 EWMC interrupt                       */
static const int INTERRUPTS_USBFS = 86;               /*!< USBFS global interrupt                    */
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for gd32vf103xx.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for gd32vf103xx.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
