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

#ifndef __MKV46F256VLL16Q_H__
#define __MKV46F256VLL16Q_H__



//*****************************************************************************
//
// Interrupt assignments
//
//*****************************************************************************

#define NUMBER_OF_INT_VECTORS                   68               // Number of interrupts in the Vector table
#define NotAvail_IRQn                           -67              // Not available device specific interrupt
#define NonMaskableInterrupt_IRQn               -14              // Non-maskable Interrupt (NMI)
#define DMA0_IRQn                               0                // DMA channel 0, 16 transfer complete
#define DMA1_IRQn                               1                // DMA channel 1, 17 transfer complete
#define DMA2_IRQn                               2                // DMA channel 2, 18 transfer complete
#define DMA3_IRQn                               3                // DMA channel 3, 19 transfer complete
#define DMA4_IRQn                               4                // DMA channel 4, 20 transfer complete
#define DMA5_IRQn                               5                // DMA channel 5, 21 transfer complete
#define DMA6_IRQn                               6                // DMA channel 6, 22 transfer complete
#define DMA7_IRQn                               7                // DMA channel 7, 23 transfer complete
#define DMA8_IRQn                               8                // DMA channel 8, 24 transfer complete
#define DMA9_IRQn                               9                // DMA channel 9, 25 transfer complete
#define DMA10_IRQn                              10               // DMA channel 10, 26 transfer complete
#define DMA_Error_IRQn                          16               // DMA error interrupt channels 0-1531
#define MCM_Interrupt_IRQn                      17               // MCM interrupt
#define Command_Complete_IRQn                   18               // Command complete
#define Read_Collision_IRQn                     19               // Read collision
#define PMC_IRQn                                20               // Low-voltage detect, low-voltage warning
#define LLWU_IRQn                               21               // Low Leakage Wakeup
#define Both_Watchdog_Modules_Share_This_Interrupt_IRQn 22               // Both watchdog modules share this interrupt
#define I2C0_IRQn                               24               // I2C0
#define SPI0_IRQn                               26               // SPI0
#define UART0_RX_TX_IRQn                        31               // UART0 status sources
#define UART0_ERR_IRQn                          32               // UART0 error sources
#define UART1_RX_TX_IRQn                        33               // UART1 status sources
#define UART1_ERR_IRQn                          34               // UART1 error sources
#define ADCA_Scan_Complete_IRQn                 39               // ADCA Scan complete
#define CMP0_IRQn                               40               // CMP0
#define CMP1_IRQn                               41               // CMP1
#define FTM0_IRQn                               42               // FTM0 8 channels
#define FTM1_IRQn                               43               // FTM1 2 channels
#define LPTMR_IRQn                              58               // LPTMR
#define PORTA_IRQn                              59               // Pin detect (Port A)
#define PORTB_IRQn                              60               // Pin detect (Port B)
#define PORTC_IRQn                              61               // Pin detect (Port C)
#define PORTD_IRQn                              62               // Pin detect (Port D)
#define PORTE_IRQn                              63               // Pin detect (Port E)
#define Software_IRQn                           64               // Software
#define ENC_COMPARE_IRQn                        66               // ENC Compare
#define ENC_HOME_IRQn                           67               // ENC Home
#define ENC_Watchdog/Simultaneous_A_&_B_Change_IRQn 68               // ENC Watchdog/Simultaneous A & B change
#define ENC_INDEX_IRQn                          69               // ENC Index/Roll over/Roll Under
#define CMP2_IRQn                               70               // CMP2
#define FTM3_IRQn                               71               // FTM3 8 channels
#define ADCB_Scan_Complete_IRQn                 73               // ADCB Scan complete
#define CAN0_0Red_Message_buffer_IRQn           75               // FLexCAN0 OR'ed Message buffer (0-15)
#define CAN0_Bus_Off_IRQn                       76               // FLexCAN0 Bus Off
#define CAN0_Error_IRQn                         77               // FLexCAN0 Error
#define CAN0_Tx_Warning_IRQn                    78               // FLexCAN0 Transmit Warning
#define CAN0_Rx_Warning_IRQn                    79               // FLexCAN0 Receive Warning
#define CAN0_Wake_Up_IRQn                       80               // FLexCAN0 Wake Up
#define EFlExPWM_Submodule_0_Compare_IRQn       81               // eFlexPWM submodule 0 Compare
#define EFlExPWM_Submodule_0_Reload_IRQn        82               // eFlexPWM submodule 0 Reload
#define EFlExPWM_Submodule_1_Compare_IRQn       83               // eFlexPWM submodule 1 Compare
#define EFlExPWM_Submodule_1_Reload_IRQn        84               // eFlexPWM submodule 1 Reload
#define EFlExPWM_Submodule_2_Compare_IRQn       85               // eFlexPWM submodule 2 Compare
#define EFlExPWM_Submodule_2_Reload_IRQn        86               // eFlexPWM submodule 2 Reload
#define EFlExPWM_Submodule_3_Compare_IRQn       87               // eFlexPWM submodule 3 Compare
#define EFlExPWM_Submodule_3_Reload_IRQn        88               // eFlexPWM submodule 3 Reload
#define EFlExPWM_All_Input_Captures_IRQn        89               // eFlexPWM all input captures
#define EFlExPWM_Reload_Error_IRQn              90               // eFlexPWM reload error
#define EFlExPWM_Fault_IRQn                     91               // eFlexPWM Fault
#define CMP3_IRQn                               92               // CMP3
#define CAN1_0Red_Message_buffer_IRQn           94               // FLexCAN1 OR'ed Message buffer (0-15)
#define CAN1_Bus_Off_IRQn                       95               // FLexCAN1 Bus Off
#define CAN1_Error_IRQn                         96               // FLexCAN1 Error
#define CAN1_Tx_Warning_IRQn                    97               // FLexCAN1 Transmit Warning
#define CAN1_Rx_Warning_IRQn                    98               // FLexCAN1 Receive Warning
#define CAN1_Wake_Up_IRQn                       99               // FLexCAN1 Wake Up



//*****************************************************************************
//
// Port control and interrupts (PORT) registers
//
//*****************************************************************************

#define PORTA_PCR0                    (*((volatile uint32_t *)0x40049000))      // Pin Control Register n (PORTA_PCR0)
#define PORTA_PCR1                    (*((volatile uint32_t *)0x40049004))      // Pin Control Register n (PORTA_PCR1)
#define PORTA_PCR2                    (*((volatile uint32_t *)0x40049008))      // Pin Control Register n (PORTA_PCR2)
#define PORTA_PCR3                    (*((volatile uint32_t *)0x4004900C))      // Pin Control Register n (PORTA_PCR3)
#define PORTA_PCR4                    (*((volatile uint32_t *)0x40049010))      // Pin Control Register n (PORTA_PCR4)
#define PORTA_PCR5                    (*((volatile uint32_t *)0x40049014))      // Pin Control Register n (PORTA_PCR5)
#define PORTA_PCR6                    (*((volatile uint32_t *)0x40049018))      // Pin Control Register n (PORTA_PCR6)
#define PORTA_PCR7                    (*((volatile uint32_t *)0x4004901C))      // Pin Control Register n (PORTA_PCR7)
#define PORTA_PCR8                    (*((volatile uint32_t *)0x40049020))      // Pin Control Register n (PORTA_PCR8)
#define PORTA_PCR9                    (*((volatile uint32_t *)0x40049024))      // Pin Control Register n (PORTA_PCR9)
#define PORTA_PCR10                   (*((volatile uint32_t *)0x40049028))      // Pin Control Register n (PORTA_PCR10)
#define PORTA_PCR11                   (*((volatile uint32_t *)0x4004902C))      // Pin Control Register n (PORTA_PCR11)
#define PORTA_PCR12                   (*((volatile uint32_t *)0x40049030))      // Pin Control Register n (PORTA_PCR12)
#define PORTA_PCR13                   (*((volatile uint32_t *)0x40049034))      // Pin Control Register n (PORTA_PCR13)
#define PORTA_PCR14                   (*((volatile uint32_t *)0x40049038))      // Pin Control Register n (PORTA_PCR14)
#define PORTA_PCR15                   (*((volatile uint32_t *)0x4004903C))      // Pin Control Register n (PORTA_PCR15)
#define PORTA_PCR16                   (*((volatile uint32_t *)0x40049040))      // Pin Control Register n (PORTA_PCR16)
#define PORTA_PCR17                   (*((volatile uint32_t *)0x40049044))      // Pin Control Register n (PORTA_PCR17)
#define PORTA_PCR18                   (*((volatile uint32_t *)0x40049048))      // Pin Control Register n (PORTA_PCR18)
#define PORTA_PCR19                   (*((volatile uint32_t *)0x4004904C))      // Pin Control Register n (PORTA_PCR19)
#define PORTA_PCR20                   (*((volatile uint32_t *)0x40049050))      // Pin Control Register n (PORTA_PCR20)
#define PORTA_PCR21                   (*((volatile uint32_t *)0x40049054))      // Pin Control Register n (PORTA_PCR21)
#define PORTA_PCR22                   (*((volatile uint32_t *)0x40049058))      // Pin Control Register n (PORTA_PCR22)
#define PORTA_PCR23                   (*((volatile uint32_t *)0x4004905C))      // Pin Control Register n (PORTA_PCR23)
#define PORTA_PCR24                   (*((volatile uint32_t *)0x40049060))      // Pin Control Register n (PORTA_PCR24)
#define PORTA_PCR25                   (*((volatile uint32_t *)0x40049064))      // Pin Control Register n (PORTA_PCR25)
#define PORTA_PCR26                   (*((volatile uint32_t *)0x40049068))      // Pin Control Register n (PORTA_PCR26)
#define PORTA_PCR27                   (*((volatile uint32_t *)0x4004906C))      // Pin Control Register n (PORTA_PCR27)
#define PORTA_PCR28                   (*((volatile uint32_t *)0x40049070))      // Pin Control Register n (PORTA_PCR28)
#define PORTA_PCR29                   (*((volatile uint32_t *)0x40049074))      // Pin Control Register n (PORTA_PCR29)
#define PORTA_PCR30                   (*((volatile uint32_t *)0x40049078))      // Pin Control Register n (PORTA_PCR30)
#define PORTA_PCR31                   (*((volatile uint32_t *)0x4004907C))      // Pin Control Register n (PORTA_PCR31)
#define PORTA_GPCLR                   (*((volatile uint32_t *)0x40049080))      // Global Pin Control Low Register (PORTA_GPCLR)
#define PORTA_GPCHR                   (*((volatile uint32_t *)0x40049084))      // Global Pin Control High Register (PORTA_GPCHR)
#define PORTA_ISFR                    (*((volatile uint32_t *)0x400490A0))      // Interrupt Status Flag Register (PORTA_ISFR)
#define PORTA_DFER                    (*((volatile uint32_t *)0x400490C0))      // Digital Filter Enable Register (PORTA_DFER)
#define PORTA_DFCR                    (*((volatile uint32_t *)0x400490C4))      // Digital Filter Clock Register (PORTA_DFCR)
#define PORTA_DFWR                    (*((volatile uint32_t *)0x400490C8))      // Digital Filter Width Register (PORTA_DFWR)
#define PORTB_PCR0                    (*((volatile uint32_t *)0x4004A000))      // Pin Control Register n (PORTB_PCR0)
#define PORTB_PCR1                    (*((volatile uint32_t *)0x4004A004))      // Pin Control Register n (PORTB_PCR1)
#define PORTB_PCR2                    (*((volatile uint32_t *)0x4004A008))      // Pin Control Register n (PORTB_PCR2)
#define PORTB_PCR3                    (*((volatile uint32_t *)0x4004A00C))      // Pin Control Register n (PORTB_PCR3)
#define PORTB_PCR4                    (*((volatile uint32_t *)0x4004A010))      // Pin Control Register n (PORTB_PCR4)
#define PORTB_PCR5                    (*((volatile uint32_t *)0x4004A014))      // Pin Control Register n (PORTB_PCR5)
#define PORTB_PCR6                    (*((volatile uint32_t *)0x4004A018))      // Pin Control Register n (PORTB_PCR6)
#define PORTB_PCR7                    (*((volatile uint32_t *)0x4004A01C))      // Pin Control Register n (PORTB_PCR7)
#define PORTB_PCR8                    (*((volatile uint32_t *)0x4004A020))      // Pin Control Register n (PORTB_PCR8)
#define PORTB_PCR9                    (*((volatile uint32_t *)0x4004A024))      // Pin Control Register n (PORTB_PCR9)
#define PORTB_PCR10                   (*((volatile uint32_t *)0x4004A028))      // Pin Control Register n (PORTB_PCR10)
#define PORTB_PCR11                   (*((volatile uint32_t *)0x4004A02C))      // Pin Control Register n (PORTB_PCR11)
#define PORTB_PCR12                   (*((volatile uint32_t *)0x4004A030))      // Pin Control Register n (PORTB_PCR12)
#define PORTB_PCR13                   (*((volatile uint32_t *)0x4004A034))      // Pin Control Register n (PORTB_PCR13)
#define PORTB_PCR14                   (*((volatile uint32_t *)0x4004A038))      // Pin Control Register n (PORTB_PCR14)
#define PORTB_PCR15                   (*((volatile uint32_t *)0x4004A03C))      // Pin Control Register n (PORTB_PCR15)
#define PORTB_PCR16                   (*((volatile uint32_t *)0x4004A040))      // Pin Control Register n (PORTB_PCR16)
#define PORTB_PCR17                   (*((volatile uint32_t *)0x4004A044))      // Pin Control Register n (PORTB_PCR17)
#define PORTB_PCR18                   (*((volatile uint32_t *)0x4004A048))      // Pin Control Register n (PORTB_PCR18)
#define PORTB_PCR19                   (*((volatile uint32_t *)0x4004A04C))      // Pin Control Register n (PORTB_PCR19)
#define PORTB_PCR20                   (*((volatile uint32_t *)0x4004A050))      // Pin Control Register n (PORTB_PCR20)
#define PORTB_PCR21                   (*((volatile uint32_t *)0x4004A054))      // Pin Control Register n (PORTB_PCR21)
#define PORTB_PCR22                   (*((volatile uint32_t *)0x4004A058))      // Pin Control Register n (PORTB_PCR22)
#define PORTB_PCR23                   (*((volatile uint32_t *)0x4004A05C))      // Pin Control Register n (PORTB_PCR23)
#define PORTB_PCR24                   (*((volatile uint32_t *)0x4004A060))      // Pin Control Register n (PORTB_PCR24)
#define PORTB_PCR25                   (*((volatile uint32_t *)0x4004A064))      // Pin Control Register n (PORTB_PCR25)
#define PORTB_PCR26                   (*((volatile uint32_t *)0x4004A068))      // Pin Control Register n (PORTB_PCR26)
#define PORTB_PCR27                   (*((volatile uint32_t *)0x4004A06C))      // Pin Control Register n (PORTB_PCR27)
#define PORTB_PCR28                   (*((volatile uint32_t *)0x4004A070))      // Pin Control Register n (PORTB_PCR28)
#define PORTB_PCR29                   (*((volatile uint32_t *)0x4004A074))      // Pin Control Register n (PORTB_PCR29)
#define PORTB_PCR30                   (*((volatile uint32_t *)0x4004A078))      // Pin Control Register n (PORTB_PCR30)
#define PORTB_PCR31                   (*((volatile uint32_t *)0x4004A07C))      // Pin Control Register n (PORTB_PCR31)
#define PORTB_GPCLR                   (*((volatile uint32_t *)0x4004A080))      // Global Pin Control Low Register (PORTB_GPCLR)
#define PORTB_GPCHR                   (*((volatile uint32_t *)0x4004A084))      // Global Pin Control High Register (PORTB_GPCHR)
#define PORTB_ISFR                    (*((volatile uint32_t *)0x4004A0A0))      // Interrupt Status Flag Register (PORTB_ISFR)
#define PORTB_DFER                    (*((volatile uint32_t *)0x4004A0C0))      // Digital Filter Enable Register (PORTB_DFER)
#define PORTB_DFCR                    (*((volatile uint32_t *)0x4004A0C4))      // Digital Filter Clock Register (PORTB_DFCR)
#define PORTB_DFWR                    (*((volatile uint32_t *)0x4004A0C8))      // Digital Filter Width Register (PORTB_DFWR)
#define PORTC_PCR0                    (*((volatile uint32_t *)0x4004B000))      // Pin Control Register n (PORTC_PCR0)
#define PORTC_PCR1                    (*((volatile uint32_t *)0x4004B004))      // Pin Control Register n (PORTC_PCR1)
#define PORTC_PCR2                    (*((volatile uint32_t *)0x4004B008))      // Pin Control Register n (PORTC_PCR2)
#define PORTC_PCR3                    (*((volatile uint32_t *)0x4004B00C))      // Pin Control Register n (PORTC_PCR3)
#define PORTC_PCR4                    (*((volatile uint32_t *)0x4004B010))      // Pin Control Register n (PORTC_PCR4)
#define PORTC_PCR5                    (*((volatile uint32_t *)0x4004B014))      // Pin Control Register n (PORTC_PCR5)
#define PORTC_PCR6                    (*((volatile uint32_t *)0x4004B018))      // Pin Control Register n (PORTC_PCR6)
#define PORTC_PCR7                    (*((volatile uint32_t *)0x4004B01C))      // Pin Control Register n (PORTC_PCR7)
#define PORTC_PCR8                    (*((volatile uint32_t *)0x4004B020))      // Pin Control Register n (PORTC_PCR8)
#define PORTC_PCR9                    (*((volatile uint32_t *)0x4004B024))      // Pin Control Register n (PORTC_PCR9)
#define PORTC_PCR10                   (*((volatile uint32_t *)0x4004B028))      // Pin Control Register n (PORTC_PCR10)
#define PORTC_PCR11                   (*((volatile uint32_t *)0x4004B02C))      // Pin Control Register n (PORTC_PCR11)
#define PORTC_PCR12                   (*((volatile uint32_t *)0x4004B030))      // Pin Control Register n (PORTC_PCR12)
#define PORTC_PCR13                   (*((volatile uint32_t *)0x4004B034))      // Pin Control Register n (PORTC_PCR13)
#define PORTC_PCR14                   (*((volatile uint32_t *)0x4004B038))      // Pin Control Register n (PORTC_PCR14)
#define PORTC_PCR15                   (*((volatile uint32_t *)0x4004B03C))      // Pin Control Register n (PORTC_PCR15)
#define PORTC_PCR16                   (*((volatile uint32_t *)0x4004B040))      // Pin Control Register n (PORTC_PCR16)
#define PORTC_PCR17                   (*((volatile uint32_t *)0x4004B044))      // Pin Control Register n (PORTC_PCR17)
#define PORTC_PCR18                   (*((volatile uint32_t *)0x4004B048))      // Pin Control Register n (PORTC_PCR18)
#define PORTC_PCR19                   (*((volatile uint32_t *)0x4004B04C))      // Pin Control Register n (PORTC_PCR19)
#define PORTC_PCR20                   (*((volatile uint32_t *)0x4004B050))      // Pin Control Register n (PORTC_PCR20)
#define PORTC_PCR21                   (*((volatile uint32_t *)0x4004B054))      // Pin Control Register n (PORTC_PCR21)
#define PORTC_PCR22                   (*((volatile uint32_t *)0x4004B058))      // Pin Control Register n (PORTC_PCR22)
#define PORTC_PCR23                   (*((volatile uint32_t *)0x4004B05C))      // Pin Control Register n (PORTC_PCR23)
#define PORTC_PCR24                   (*((volatile uint32_t *)0x4004B060))      // Pin Control Register n (PORTC_PCR24)
#define PORTC_PCR25                   (*((volatile uint32_t *)0x4004B064))      // Pin Control Register n (PORTC_PCR25)
#define PORTC_PCR26                   (*((volatile uint32_t *)0x4004B068))      // Pin Control Register n (PORTC_PCR26)
#define PORTC_PCR27                   (*((volatile uint32_t *)0x4004B06C))      // Pin Control Register n (PORTC_PCR27)
#define PORTC_PCR28                   (*((volatile uint32_t *)0x4004B070))      // Pin Control Register n (PORTC_PCR28)
#define PORTC_PCR29                   (*((volatile uint32_t *)0x4004B074))      // Pin Control Register n (PORTC_PCR29)
#define PORTC_PCR30                   (*((volatile uint32_t *)0x4004B078))      // Pin Control Register n (PORTC_PCR30)
#define PORTC_PCR31                   (*((volatile uint32_t *)0x4004B07C))      // Pin Control Register n (PORTC_PCR31)
#define PORTC_GPCLR                   (*((volatile uint32_t *)0x4004B080))      // Global Pin Control Low Register (PORTC_GPCLR)
#define PORTC_GPCHR                   (*((volatile uint32_t *)0x4004B084))      // Global Pin Control High Register (PORTC_GPCHR)
#define PORTC_ISFR                    (*((volatile uint32_t *)0x4004B0A0))      // Interrupt Status Flag Register (PORTC_ISFR)
#define PORTC_DFER                    (*((volatile uint32_t *)0x4004B0C0))      // Digital Filter Enable Register (PORTC_DFER)
#define PORTC_DFCR                    (*((volatile uint32_t *)0x4004B0C4))      // Digital Filter Clock Register (PORTC_DFCR)
#define PORTC_DFWR                    (*((volatile uint32_t *)0x4004B0C8))      // Digital Filter Width Register (PORTC_DFWR)
#define PORTD_PCR0                    (*((volatile uint32_t *)0x4004C000))      // Pin Control Register n (PORTD_PCR0)
#define PORTD_PCR1                    (*((volatile uint32_t *)0x4004C004))      // Pin Control Register n (PORTD_PCR1)
#define PORTD_PCR2                    (*((volatile uint32_t *)0x4004C008))      // Pin Control Register n (PORTD_PCR2)
#define PORTD_PCR3                    (*((volatile uint32_t *)0x4004C00C))      // Pin Control Register n (PORTD_PCR3)
#define PORTD_PCR4                    (*((volatile uint32_t *)0x4004C010))      // Pin Control Register n (PORTD_PCR4)
#define PORTD_PCR5                    (*((volatile uint32_t *)0x4004C014))      // Pin Control Register n (PORTD_PCR5)
#define PORTD_PCR6                    (*((volatile uint32_t *)0x4004C018))      // Pin Control Register n (PORTD_PCR6)
#define PORTD_PCR7                    (*((volatile uint32_t *)0x4004C01C))      // Pin Control Register n (PORTD_PCR7)
#define PORTD_PCR8                    (*((volatile uint32_t *)0x4004C020))      // Pin Control Register n (PORTD_PCR8)
#define PORTD_PCR9                    (*((volatile uint32_t *)0x4004C024))      // Pin Control Register n (PORTD_PCR9)
#define PORTD_PCR10                   (*((volatile uint32_t *)0x4004C028))      // Pin Control Register n (PORTD_PCR10)
#define PORTD_PCR11                   (*((volatile uint32_t *)0x4004C02C))      // Pin Control Register n (PORTD_PCR11)
#define PORTD_PCR12                   (*((volatile uint32_t *)0x4004C030))      // Pin Control Register n (PORTD_PCR12)
#define PORTD_PCR13                   (*((volatile uint32_t *)0x4004C034))      // Pin Control Register n (PORTD_PCR13)
#define PORTD_PCR14                   (*((volatile uint32_t *)0x4004C038))      // Pin Control Register n (PORTD_PCR14)
#define PORTD_PCR15                   (*((volatile uint32_t *)0x4004C03C))      // Pin Control Register n (PORTD_PCR15)
#define PORTD_PCR16                   (*((volatile uint32_t *)0x4004C040))      // Pin Control Register n (PORTD_PCR16)
#define PORTD_PCR17                   (*((volatile uint32_t *)0x4004C044))      // Pin Control Register n (PORTD_PCR17)
#define PORTD_PCR18                   (*((volatile uint32_t *)0x4004C048))      // Pin Control Register n (PORTD_PCR18)
#define PORTD_PCR19                   (*((volatile uint32_t *)0x4004C04C))      // Pin Control Register n (PORTD_PCR19)
#define PORTD_PCR20                   (*((volatile uint32_t *)0x4004C050))      // Pin Control Register n (PORTD_PCR20)
#define PORTD_PCR21                   (*((volatile uint32_t *)0x4004C054))      // Pin Control Register n (PORTD_PCR21)
#define PORTD_PCR22                   (*((volatile uint32_t *)0x4004C058))      // Pin Control Register n (PORTD_PCR22)
#define PORTD_PCR23                   (*((volatile uint32_t *)0x4004C05C))      // Pin Control Register n (PORTD_PCR23)
#define PORTD_PCR24                   (*((volatile uint32_t *)0x4004C060))      // Pin Control Register n (PORTD_PCR24)
#define PORTD_PCR25                   (*((volatile uint32_t *)0x4004C064))      // Pin Control Register n (PORTD_PCR25)
#define PORTD_PCR26                   (*((volatile uint32_t *)0x4004C068))      // Pin Control Register n (PORTD_PCR26)
#define PORTD_PCR27                   (*((volatile uint32_t *)0x4004C06C))      // Pin Control Register n (PORTD_PCR27)
#define PORTD_PCR28                   (*((volatile uint32_t *)0x4004C070))      // Pin Control Register n (PORTD_PCR28)
#define PORTD_PCR29                   (*((volatile uint32_t *)0x4004C074))      // Pin Control Register n (PORTD_PCR29)
#define PORTD_PCR30                   (*((volatile uint32_t *)0x4004C078))      // Pin Control Register n (PORTD_PCR30)
#define PORTD_PCR31                   (*((volatile uint32_t *)0x4004C07C))      // Pin Control Register n (PORTD_PCR31)
#define PORTD_GPCLR                   (*((volatile uint32_t *)0x4004C080))      // Global Pin Control Low Register (PORTD_GPCLR)
#define PORTD_GPCHR                   (*((volatile uint32_t *)0x4004C084))      // Global Pin Control High Register (PORTD_GPCHR)
#define PORTD_ISFR                    (*((volatile uint32_t *)0x4004C0A0))      // Interrupt Status Flag Register (PORTD_ISFR)
#define PORTD_DFER                    (*((volatile uint32_t *)0x4004C0C0))      // Digital Filter Enable Register (PORTD_DFER)
#define PORTD_DFCR                    (*((volatile uint32_t *)0x4004C0C4))      // Digital Filter Clock Register (PORTD_DFCR)
#define PORTD_DFWR                    (*((volatile uint32_t *)0x4004C0C8))      // Digital Filter Width Register (PORTD_DFWR)
#define PORTE_PCR0                    (*((volatile uint32_t *)0x4004D000))      // Pin Control Register n (PORTE_PCR0)
#define PORTE_PCR1                    (*((volatile uint32_t *)0x4004D004))      // Pin Control Register n (PORTE_PCR1)
#define PORTE_PCR2                    (*((volatile uint32_t *)0x4004D008))      // Pin Control Register n (PORTE_PCR2)
#define PORTE_PCR3                    (*((volatile uint32_t *)0x4004D00C))      // Pin Control Register n (PORTE_PCR3)
#define PORTE_PCR4                    (*((volatile uint32_t *)0x4004D010))      // Pin Control Register n (PORTE_PCR4)
#define PORTE_PCR5                    (*((volatile uint32_t *)0x4004D014))      // Pin Control Register n (PORTE_PCR5)
#define PORTE_PCR6                    (*((volatile uint32_t *)0x4004D018))      // Pin Control Register n (PORTE_PCR6)
#define PORTE_PCR7                    (*((volatile uint32_t *)0x4004D01C))      // Pin Control Register n (PORTE_PCR7)
#define PORTE_PCR8                    (*((volatile uint32_t *)0x4004D020))      // Pin Control Register n (PORTE_PCR8)
#define PORTE_PCR9                    (*((volatile uint32_t *)0x4004D024))      // Pin Control Register n (PORTE_PCR9)
#define PORTE_PCR10                   (*((volatile uint32_t *)0x4004D028))      // Pin Control Register n (PORTE_PCR10)
#define PORTE_PCR11                   (*((volatile uint32_t *)0x4004D02C))      // Pin Control Register n (PORTE_PCR11)
#define PORTE_PCR12                   (*((volatile uint32_t *)0x4004D030))      // Pin Control Register n (PORTE_PCR12)
#define PORTE_PCR13                   (*((volatile uint32_t *)0x4004D034))      // Pin Control Register n (PORTE_PCR13)
#define PORTE_PCR14                   (*((volatile uint32_t *)0x4004D038))      // Pin Control Register n (PORTE_PCR14)
#define PORTE_PCR15                   (*((volatile uint32_t *)0x4004D03C))      // Pin Control Register n (PORTE_PCR15)
#define PORTE_PCR16                   (*((volatile uint32_t *)0x4004D040))      // Pin Control Register n (PORTE_PCR16)
#define PORTE_PCR17                   (*((volatile uint32_t *)0x4004D044))      // Pin Control Register n (PORTE_PCR17)
#define PORTE_PCR18                   (*((volatile uint32_t *)0x4004D048))      // Pin Control Register n (PORTE_PCR18)
#define PORTE_PCR19                   (*((volatile uint32_t *)0x4004D04C))      // Pin Control Register n (PORTE_PCR19)
#define PORTE_PCR20                   (*((volatile uint32_t *)0x4004D050))      // Pin Control Register n (PORTE_PCR20)
#define PORTE_PCR21                   (*((volatile uint32_t *)0x4004D054))      // Pin Control Register n (PORTE_PCR21)
#define PORTE_PCR22                   (*((volatile uint32_t *)0x4004D058))      // Pin Control Register n (PORTE_PCR22)


//*****************************************************************************
//
// System Integration Module (SIM) registers
//
//*****************************************************************************

#define SIM_SOPT1                     (*((volatile uint32_t *)0x40047000))      // System Options Register 1 (SIM_SOPT1)
#define SIM_SOPT2                     (*((volatile uint32_t *)0x40048004))      // System Options Register 2 (SIM_SOPT2)
#define SIM_SOPT4                     (*((volatile uint32_t *)0x4004800C))      // System Options Register 4 (SIM_SOPT4)
#define SIM_SOPT5                     (*((volatile uint32_t *)0x40048010))      // System Options Register 5 (SIM_SOPT5)
#define SIM_SOPT7                     (*((volatile uint32_t *)0x40048018))      // System Options Register 7 (SIM_SOPT7)
#define SIM_SOPT8                     (*((volatile uint32_t *)0x4004801C))      // System Options Register 8 (SIM_SOPT8)
#define SIM_SOPT9                     (*((volatile uint32_t *)0x40048020))      // System Options Register 9 (SIM_SOPT9)
#define SIM_SDID                      (*((volatile uint32_t *)0x40048024))      // System Device Identification Register (SIM_SDID)
#define SIM_SCGC4                     (*((volatile uint32_t *)0x40048034))      // System Clock Gating Control Register 4 (SIM_SCGC4)
#define SIM_SCGC5                     (*((volatile uint32_t *)0x40048038))      // System Clock Gating Control Register 5 (SIM_SCGC5)
#define SIM_SCGC6                     (*((volatile uint32_t *)0x4004803C))      // System Clock Gating Control Register 6 (SIM_SCGC6)
#define SIM_SCGC7                     (*((volatile uint32_t *)0x40048040))      // System Clock Gating Control Register 7 (SIM_SCGC7)
#define SIM_CLKDIV1                   (*((volatile uint32_t *)0x40048044))      // System Clock Divider Register 1 (SIM_CLKDIV1)
#define SIM_CLKDIV2                   (*((volatile uint32_t *)0x40048048))      // System Clock Divider Register 2 (SIM_CLKDIV2)
#define SIM_FCFG1                     (*((volatile uint32_t *)0x4004804C))      // Flash Configuration Register 1 (SIM_FCFG1)
#define SIM_FCFG2                     (*((volatile uint32_t *)0x40048050))      // Flash Configuration Register 2 (SIM_FCFG2)
#define SIM_UIDH                      (*((volatile uint32_t *)0x40048054))      // Unique Identification Register High (SIM_UIDH)
#define SIM_UIDMH                     (*((volatile uint32_t *)0x40048058))      // Unique Identification Register Mid-High (SIM_UIDMH)
#define SIM_UIDML                     (*((volatile uint32_t *)0x4004805C))      // Unique Identification Register Mid Low (SIM_UIDML)
#define SIM_UIDL                      (*((volatile uint32_t *)0x40048060))      // Unique Identification Register Low (SIM_UIDL)
#define SIM_CLKDIV4                   (*((volatile uint32_t *)0x40048068))      // System Clock Divider Register 4 (SIM_CLKDIV4)
#define SIM_MISCTRL0                  (*((volatile uint32_t *)0x4004806C))      // Miscellaneous Control Register 0 (SIM_MISCTRL0)
#define SIM_MISCTRL1                  (*((volatile uint32_t *)0x40048070))      // Miscellaneous Control Register 1 (SIM_MISCTRL1)
#define SIM_WDOGC                     (*((volatile uint32_t *)0x40048100))      // WDOG Control Register (SIM_WDOGC)
#define SIM_PWRC                      (*((volatile uint32_t *)0x40048104))      // Power Control Register (SIM_PWRC)
#define SIM_ADCOPT                    (*((volatile uint32_t *)0x40048108))      // ADC Channel 6/7 Mux Control Register (SIM_ADCOPT)


//*****************************************************************************
//
// Reset Control Module (RCM) registers
//
//*****************************************************************************

#define RCM_SRS0                      (*((volatile uint32_t *)0x4007F000))      // System Reset Status Register 0
#define RCM_SRS1                      (*((volatile uint32_t *)0x4007F001))      // System Reset Status Register 1
#define RCM_RPFC                      (*((volatile uint32_t *)0x4007F004))      // Reset Pin Filter Control register
#define RCM_RPFW                      (*((volatile uint32_t *)0x4007F005))      // Reset Pin Filter Width register
#define RCM_SSRS0                     (*((volatile uint32_t *)0x4007F008))      // Sticky System Reset Status Register 0
#define RCM_SSRS1                     (*((volatile uint32_t *)0x4007F009))      // Sticky System Reset Status Register 1


//*****************************************************************************
//
// System Mode Controller (SMC) registers
//
//*****************************************************************************

#define SMC_PMPROT                    (*((volatile uint32_t *)0x4007E000))      // Power Mode Protection register (SMC_PMPROT)
#define SMC_PMCTRL                    (*((volatile uint32_t *)0x4007E001))      // Power Mode Control register (SMC_PMCTRL)
#define SMC_STOPCTRL                  (*((volatile uint32_t *)0x4007E002))      // Stop Control Register (SMC_STOPCTRL)
#define SMC_PMSTAT                    (*((volatile uint32_t *)0x4007E003))      // Power Mode Status register (SMC_PMSTAT)


//*****************************************************************************
//
// Low-Leakage Wakeup Unit (LLWU) registers
//
//*****************************************************************************

#define LLWU_PE1                      (*((volatile uint32_t *)0x4007C000))      // LLWU Pin Enable 1 register (LLWU_PE1)
#define LLWU_PE2                      (*((volatile uint32_t *)0x4007C001))      // LLWU Pin Enable 2 register (LLWU_PE2)
#define LLWU_PE3                      (*((volatile uint32_t *)0x4007C002))      // LLWU Pin Enable 3 register (LLWU_PE3)
#define LLWU_PE4                      (*((volatile uint32_t *)0x4007C003))      // LLWU Pin Enable 4 register (LLWU_PE4)
#define LLWU_PE5                      (*((volatile uint32_t *)0x4007C004))      // LLWU Pin Enable 5 register (LLWU_PE5)
#define LLWU_PE6                      (*((volatile uint32_t *)0x4007C005))      // LLWU Pin Enable 6 register (LLWU_PE6)
#define LLWU_PE7                      (*((volatile uint32_t *)0x4007C006))      // LLWU Pin Enable 7 register (LLWU_PE7)
#define LLWU_PE8                      (*((volatile uint32_t *)0x4007C007))      // LLWU Pin Enable 8 register (LLWU_PE8)
#define LLWU_ME                       (*((volatile uint32_t *)0x4007C008))      // LLWU Module Enable register (LLWU_ME)
#define LLWU_PF1                      (*((volatile uint32_t *)0x4007C009))      // LLWU Pin Flag 1 register (LLWU_PF1)
#define LLWU_PF2                      (*((volatile uint32_t *)0x4007C00A))      // LLWU Pin Flag 2 register (LLWU_PF2)
#define LLWU_PF3                      (*((volatile uint32_t *)0x4007C00B))      // LLWU Pin Flag 3 register (LLWU_PF3)
#define LLWU_PF4                      (*((volatile uint32_t *)0x4007C00C))      // LLWU Pin Flag 4 register (LLWU_PF4)
#define LLWU_MF5                      (*((volatile uint32_t *)0x4007C00D))      // LLWU Module Flag 5 register (LLWU_MF5)
#define LLWU_FILT1                    (*((volatile uint32_t *)0x4007C00E))      // LLWU Pin Filter 1 register (LLWU_FILT1)
#define LLWU_FILT2                    (*((volatile uint32_t *)0x4007C00F))      // LLWU Pin Filter 2 register (LLWU_FILT2)


//*****************************************************************************
//
// Peripheral Bridge (AIPS-Lite) registers
//
//*****************************************************************************

#define AIPS_MPRA                     (*((volatile uint32_t *)0x40000000))      // Master Privilege Register A (AIPS_MPRA)
#define AIPS_PACRA                    (*((volatile uint32_t *)0x40000020))      // Peripheral Access Control Register (AIPS_PACRA)
#define AIPS_PACRB                    (*((volatile uint32_t *)0x40000024))      // Peripheral Access Control Register (AIPS_PACRB)
#define AIPS_PACRC                    (*((volatile uint32_t *)0x40000028))      // Peripheral Access Control Register (AIPS_PACRC)
#define AIPS_PACRD                    (*((volatile uint32_t *)0x4000002C))      // Peripheral Access Control Register (AIPS_PACRD)
#define AIPS_PACRE                    (*((volatile uint32_t *)0x40000040))      // Peripheral Access Control Register (AIPS_PACRE)
#define AIPS_PACRF                    (*((volatile uint32_t *)0x40000044))      // Peripheral Access Control Register (AIPS_PACRF)
#define AIPS_PACRG                    (*((volatile uint32_t *)0x40000048))      // Peripheral Access Control Register (AIPS_PACRG)
#define AIPS_PACRH                    (*((volatile uint32_t *)0x4000004C))      // Peripheral Access Control Register (AIPS_PACRH)
#define AIPS_PACRI                    (*((volatile uint32_t *)0x40000050))      // Peripheral Access Control Register (AIPS_PACRI)
#define AIPS_PACRJ                    (*((volatile uint32_t *)0x40000054))      // Peripheral Access Control Register (AIPS_PACRJ)
#define AIPS_PACRK                    (*((volatile uint32_t *)0x40000058))      // Peripheral Access Control Register (AIPS_PACRK)
#define AIPS_PACRL                    (*((volatile uint32_t *)0x4000005C))      // Peripheral Access Control Register (AIPS_PACRL)
#define AIPS_PACRM                    (*((volatile uint32_t *)0x40000060))      // Peripheral Access Control Register (AIPS_PACRM)
#define AIPS_PACRN                    (*((volatile uint32_t *)0x40000064))      // Peripheral Access Control Register (AIPS_PACRN)
#define AIPS_PACRO                    (*((volatile uint32_t *)0x40000068))      // Peripheral Access Control Register (AIPS_PACRO)
#define AIPS_PACRP                    (*((volatile uint32_t *)0x4000006C))      // Peripheral Access Control Register (AIPS_PACRP)


//*****************************************************************************
//
// Direct memory access multiplexer (DMAMUX) registers
//
//*****************************************************************************

#define DMAMUX_CHCFG0                 (*((volatile uint32_t *)0x40021000))      // Channel Configuration register
#define DMAMUX_CHCFG1                 (*((volatile uint32_t *)0x40021001))      // Channel Configuration register
#define DMAMUX_CHCFG2                 (*((volatile uint32_t *)0x40021002))      // Channel Configuration register
#define DMAMUX_CHCFG3                 (*((volatile uint32_t *)0x40021003))      // Channel Configuration register
#define DMAMUX_CHCFG4                 (*((volatile uint32_t *)0x40021004))      // Channel Configuration register
#define DMAMUX_CHCFG5                 (*((volatile uint32_t *)0x40021005))      // Channel Configuration register
#define DMAMUX_CHCFG6                 (*((volatile uint32_t *)0x40021006))      // Channel Configuration register
#define DMAMUX_CHCFG7                 (*((volatile uint32_t *)0x40021007))      // Channel Configuration register
#define DMAMUX_CHCFG8                 (*((volatile uint32_t *)0x40021008))      // Channel Configuration register
#define DMAMUX_CHCFG9                 (*((volatile uint32_t *)0x40021009))      // Channel Configuration register
#define DMAMUX_CHCFG10                (*((volatile uint32_t *)0x4002100A))      // Channel Configuration register
#define DMAMUX_CHCFG11                (*((volatile uint32_t *)0x4002100B))      // Channel Configuration register
#define DMAMUX_CHCFG12                (*((volatile uint32_t *)0x4002100C))      // Channel Configuration register
#define DMAMUX_CHCFG13                (*((volatile uint32_t *)0x4002100D))      // Channel Configuration register
#define DMAMUX_CHCFG14                (*((volatile uint32_t *)0x4002100E))      // Channel Configuration register
#define DMAMUX_CHCFG15                (*((volatile uint32_t *)0x4002100F))      // Channel Configuration register


//*****************************************************************************
//
// Direct Memory Access Controller (eDMA) registers
//
//*****************************************************************************

#define DMA_CR                        (*((volatile uint32_t *)0x40008000))      // Control Register
#define DMA_ES                        (*((volatile uint32_t *)0x40008004))      // Error Status Register
#define DMA_ERQ                       (*((volatile uint32_t *)0x4000800C))      // Enable Request Register
#define DMA_EEI                       (*((volatile uint32_t *)0x40008014))      // Enable Error Interrupt Register
#define DMA_CEEI                      (*((volatile uint32_t *)0x40008018))      // Clear Enable Error Interrupt Register
#define DMA_SEEI                      (*((volatile uint32_t *)0x40008019))      // Set Enable Error Interrupt Register


//*****************************************************************************
//
// External Watchdog Monitor (EWM) registers
//
//*****************************************************************************

#define EWM_CTRL                      (*((volatile uint32_t *)0x40061000))      // Control Register (EWM_CTRL)
#define EWM_SERV                      (*((volatile uint32_t *)0x40061001))      // Service Register (EWM_SERV)
#define EWM_CMPL                      (*((volatile uint32_t *)0x40061002))      // Compare Low Register (EWM_CMPL)
#define EWM_CMPH                      (*((volatile uint32_t *)0x40061003))      // Compare High Register (EWM_CMPH)


//*****************************************************************************
//
// Watchdog Timer (WDOG) registers
//
//*****************************************************************************

#define WDOG_STCTRLH                  (*((volatile uint32_t *)0x40052000))      // Watchdog Status and Control Register High
#define WDOG_STCTRLL                  (*((volatile uint32_t *)0x40052002))      // Watchdog Status and Control Register Low
#define WDOG_TOVALH                   (*((volatile uint32_t *)0x40052004))      // Watchdog Time-out Value Register High
#define WDOG_TOVALL                   (*((volatile uint32_t *)0x40052006))      // Watchdog Time-out Value Register Low
#define WDOG_WINH                     (*((volatile uint32_t *)0x40052008))      // Watchdog Window Register High
#define WDOG_WINL                     (*((volatile uint32_t *)0x4005200A))      // Watchdog Window Register Low
#define WDOG_REFRESH                  (*((volatile uint32_t *)0x4005200C))      // Watchdog Refresh register
#define WDOG_UNLOCK                   (*((volatile uint32_t *)0x4005200E))      // Watchdog Unlock register
#define WDOG_TMROUTH                  (*((volatile uint32_t *)0x40052010))      // Watchdog Timer Output Register High
#define WDOG_TMROUTL                  (*((volatile uint32_t *)0x40052012))      // Watchdog Timer Output Register Low
#define WDOG_RSTCNT                   (*((volatile uint32_t *)0x40052014))      // Watchdog Reset Count register
#define WDOG_PRESC                    (*((volatile uint32_t *)0x40052016))      // Watchdog Prescaler register


//*****************************************************************************
//
// Inter-Peripheral Crossbar Switch A (XBARA) registers
//
//*****************************************************************************

#define XBARA_SEL0                    (*((volatile uint32_t *)0x40059000))      // Crossbar  A  Select  Register  0 (XBARA_SEL0)
#define XBARA_SEL1                    (*((volatile uint32_t *)0x40059002))      // Crossbar  A  Select  Register  1 (XBARA_SEL1)
#define XBARA_SEL2                    (*((volatile uint32_t *)0x40059004))      // Crossbar  A  Select  Register  2 (XBARA_SEL2)
#define XBARA_SEL3                    (*((volatile uint32_t *)0x40059006))      // Crossbar  A  Select  Register  3 (XBARA_SEL3)
#define XBARA_SEL4                    (*((volatile uint32_t *)0x40059008))      // Crossbar  A  Select  Register  4 (XBARA_SEL4)
#define XBARA_SEL5                    (*((volatile uint32_t *)0x4005900A))      // Crossbar  A  Select  Register  5 (XBARA_SEL5)
#define XBARA_SEL6                    (*((volatile uint32_t *)0x4005900C))      // Crossbar  A  Select  Register  6 (XBARA_SEL6)
#define XBARA_SEL7                    (*((volatile uint32_t *)0x4005900E))      // Crossbar  A  Select  Register  7 (XBARA_SEL7)
#define XBARA_SEL8                    (*((volatile uint32_t *)0x40059010))      // Crossbar  A  Select  Register  8 (XBARA_SEL8)
#define XBARA_SEL9                    (*((volatile uint32_t *)0x40059012))      // Crossbar  A  Select  Register  9 (XBARA_SEL9)
#define XBARA_SEL10                   (*((volatile uint32_t *)0x40059014))      // Crossbar  A  Select  Register  10 (XBARA_SEL10)
#define XBARA_SEL11                   (*((volatile uint32_t *)0x40059016))      // Crossbar  A  Select  Register  11 (XBARA_SEL11)
#define XBARA_SEL12                   (*((volatile uint32_t *)0x40059018))      // Crossbar  A  Select  Register  12 (XBARA_SEL12)
#define XBARA_SEL13                   (*((volatile uint32_t *)0x4005901A))      // Crossbar  A  Select  Register  13 (XBARA_SEL13)
#define XBARA_SEL14                   (*((volatile uint32_t *)0x4005901C))      // Crossbar  A  Select  Register  14 (XBARA_SEL14)
#define XBARA_SEL15                   (*((volatile uint32_t *)0x4005901E))      // Crossbar  A  Select  Register  15 (XBARA_SEL15)
#define XBARA_SEL16                   (*((volatile uint32_t *)0x40059020))      // Crossbar  A  Select  Register  16 (XBARA_SEL16)
#define XBARA_SEL17                   (*((volatile uint32_t *)0x40059022))      // Crossbar  A  Select  Register  17 (XBARA_SEL17)
#define XBARA_SEL18                   (*((volatile uint32_t *)0x40059024))      // Crossbar  A  Select  Register  18 (XBARA_SEL18)
#define XBARA_SEL19                   (*((volatile uint32_t *)0x40059026))      // Crossbar  A  Select  Register  19 (XBARA_SEL19)
#define XBARA_SEL20                   (*((volatile uint32_t *)0x40059028))      // Crossbar  A  Select  Register  20 (XBARA_SEL20)
#define XBARA_SEL21                   (*((volatile uint32_t *)0x4005902A))      // Crossbar  A  Select  Register  21 (XBARA_SEL21)
#define XBARA_SEL22                   (*((volatile uint32_t *)0x4005902C))      // Crossbar  A  Select  Register  22 (XBARA_SEL22)
#define XBARA_SEL23                   (*((volatile uint32_t *)0x4005902E))      // Crossbar  A  Select  Register  23 (XBARA_SEL23)
#define XBARA_SEL24                   (*((volatile uint32_t *)0x40059030))      // Crossbar  A  Select  Register  24 (XBARA_SEL24)
#define XBARA_SEL25                   (*((volatile uint32_t *)0x40059032))      // Crossbar  A  Select  Register  25 (XBARA_SEL25)
#define XBARA_SEL26                   (*((volatile uint32_t *)0x40059034))      // Crossbar  A  Select  Register  26 (XBARA_SEL26)
#define XBARA_SEL27                   (*((volatile uint32_t *)0x40059036))      // Crossbar  A  Select  Register  27 (XBARA_SEL27)
#define XBARA_SEL28                   (*((volatile uint32_t *)0x40059038))      // Crossbar  A  Select  Register  28 (XBARA_SEL28)


//*****************************************************************************
//
// Inter-Peripheral Crossbar Switch B (XBARB) registers
//
//*****************************************************************************

#define XBARB_SEL0                    (*((volatile uint32_t *)0x4005A000))      // Crossbar B Select Register 0
#define XBARB_SEL1                    (*((volatile uint32_t *)0x4005A002))      // Crossbar B Select Register 1
#define XBARB_SEL2                    (*((volatile uint32_t *)0x4005A004))      // Crossbar B Select Register 2
#define XBARB_SEL3                    (*((volatile uint32_t *)0x4005A006))      // Crossbar B Select Register 3
#define XBARB_SEL4                    (*((volatile uint32_t *)0x4005A008))      // Crossbar B Select Register 4
#define XBARB_SEL5                    (*((volatile uint32_t *)0x4005A00A))      // Crossbar B Select Register 5
#define XBARB_SEL6                    (*((volatile uint32_t *)0x4005A00C))      // Crossbar B Select Register 6
#define XBARB_SEL7                    (*((volatile uint32_t *)0x4005A00E))      // Crossbar B Select Register 7


//*****************************************************************************
//
// Crossbar AND/OR/INVERT (AOI) Module registers
//
//*****************************************************************************

#define AOI_BFCRT010                  (*((volatile uint32_t *)0x4005B000))      // Boolean Function Term 0 and 1 Configuration Register for EVENTn
#define AOI_BFCRT230                  (*((volatile uint32_t *)0x4005B002))      // Boolean Function Term 2 and 3 Configuration Register for EVENTn
#define AOI_BFCRT011                  (*((volatile uint32_t *)0x4005B004))      // Boolean Function Term 0 and 1 Configuration Register for EVENTn
#define AOI_BFCRT231                  (*((volatile uint32_t *)0x4005B006))      // Boolean Function Term 2 and 3 Configuration Register for EVENTn
#define AOI_BFCRT012                  (*((volatile uint32_t *)0x4005B008))      // Boolean Function Term 0 and 1 Configuration Register for EVENTn
#define AOI_BFCRT232                  (*((volatile uint32_t *)0x4005B00A))      // Boolean Function Term 2 and 3 Configuration Register for EVENTn
#define AOI_BFCRT013                  (*((volatile uint32_t *)0x4005B00C))      // Boolean Function Term 0 and 1 Configuration Register for EVENTn
#define AOI_BFCRT233                  (*((volatile uint32_t *)0x4005B00E))      // Boolean Function Term 2 and 3 Configuration Register for EVENTn


//*****************************************************************************
//
// Oscillator (OSC) registers
//
//*****************************************************************************

#define OSC_CR                        (*((volatile uint32_t *)0x40065000))      // OSC Control Register
#define OSC_OSC_DIV                   (*((volatile uint32_t *)0x40065002))      // OSC Clock divider register


//*****************************************************************************
//
// Multipurpose Clock Generator (MCG) registers
//
//*****************************************************************************

#define MCG_C1                        (*((volatile uint32_t *)0x40064000))      // MCG Control 1 Register
#define MCG_C2                        (*((volatile uint32_t *)0x40064001))      // MCG Control 2 Register
#define MCG_C3                        (*((volatile uint32_t *)0x40064002))      // MCG Control 3 Register
#define MCG_C4                        (*((volatile uint32_t *)0x40064003))      // MCG Control 4 Register
#define MCG_C5                        (*((volatile uint32_t *)0x40064004))      // MCG Control 5 Register
#define MCG_C6                        (*((volatile uint32_t *)0x40064005))      // MCG Control 6 Register
#define MCG_S                         (*((volatile uint32_t *)0x40064006))      // MCG Status Register
#define MCG_SC                        (*((volatile uint32_t *)0x40064008))      // MCG Status and Control Register
#define MCG_ATCVH                     (*((volatile uint32_t *)0x4006400A))      // MCG Auto Trim Compare Value High Register
#define MCG_ATCVL                     (*((volatile uint32_t *)0x4006400B))      // MCG Auto Trim Compare Value Low Register
#define MCG_C8                        (*((volatile uint32_t *)0x4006400D))      // MCG Control 8 Register


//*****************************************************************************
//
// Flash Memory Controller (FMC) registers
//
//*****************************************************************************

#define FMC_PFAPR                     (*((volatile uint32_t *)0x4001F000))      // Flash Access Protection Register (FMC_PFAPR)
#define FMC_PFB0CR                    (*((volatile uint32_t *)0x4001F004))      // Flash Bank 0 Control Register (FMC_PFB0CR)
#define FMC_TAGVDW0S0                 (*((volatile uint32_t *)0x4001F100))      // Cache Tag Storage (FMC_TAGVDW0S0)
#define FMC_TAGVDW0S1                 (*((volatile uint32_t *)0x4001F104))      // Cache Tag Storage (FMC_TAGVDW0S1)
#define FMC_TAGVDW1S0                 (*((volatile uint32_t *)0x4001F108))      // Cache Tag Storage (FMC_TAGVDW1S0)
#define FMC_TAGVDW1S1                 (*((volatile uint32_t *)0x4001F10C))      // Cache Tag Storage (FMC_TAGVDW1S1)
#define FMC_TAGVDW2S0                 (*((volatile uint32_t *)0x4001F110))      // Cache Tag Storage (FMC_TAGVDW2S0)
#define FMC_TAGVDW2S1                 (*((volatile uint32_t *)0x4001F114))      // Cache Tag Storage (FMC_TAGVDW2S1)
#define FMC_TAGVDW3S0                 (*((volatile uint32_t *)0x4001F118))      // Cache Tag Storage (FMC_TAGVDW3S0)
#define FMC_TAGVDW3S1                 (*((volatile uint32_t *)0x4001F11C))      // Cache Tag Storage (FMC_TAGVDW3S1)
#define FMC_DATAW0S0UM                (*((volatile uint32_t *)0x4001F200))      // Cache Data Storage (uppermost word)
#define FMC_DATAW0S0MU                (*((volatile uint32_t *)0x4001F204))      // Cache Data Storage (mid-upper word)
#define FMC_DATAW0S0ML                (*((volatile uint32_t *)0x4001F208))      // Cache Data Storage (mid-lower word)
#define FMC_DATAW0S0LM                (*((volatile uint32_t *)0x4001F20C))      // Cache Data Storage (lowermost word)
#define FMC_DATAW0S1UM                (*((volatile uint32_t *)0x4001F210))      // Cache Data Storage (uppermost word)
#define FMC_DATAW0S1MU                (*((volatile uint32_t *)0x4001F214))      // Cache Data Storage (mid-upper word)
#define FMC_DATAW0S1ML                (*((volatile uint32_t *)0x4001F218))      // Cache Data Storage (mid-lower word)
#define FMC_DATAW0S1LM                (*((volatile uint32_t *)0x4001F21C))      // Cache Data Storage (lowermost word)
#define FMC_DATAW1S0UM                (*((volatile uint32_t *)0x4001F240))      // Cache Data Storage (uppermost word)
#define FMC_DATAW1S0MU                (*((volatile uint32_t *)0x4001F244))      // Cache Data Storage (mid-upper word)
#define FMC_DATAW1S0ML                (*((volatile uint32_t *)0x4001F248))      // Cache Data Storage (mid-lower word)
#define FMC_DATAW1S0LM                (*((volatile uint32_t *)0x4001F24C))      // Cache Data Storage (lowermost word)
#define FMC_DATAW1S1UM                (*((volatile uint32_t *)0x4001F250))      // Cache Data Storage (uppermost word)
#define FMC_DATAW1S1MU                (*((volatile uint32_t *)0x4001F254))      // Cache Data Storage (mid-upper word)
#define FMC_DATAW1S1ML                (*((volatile uint32_t *)0x4001F258))      // Cache Data Storage (mid-lower word)
#define FMC_DATAW1S1LM                (*((volatile uint32_t *)0x4001F25C))      // Cache Data Storage (lowermost word)


//*****************************************************************************
//
// Cyclic redundancy check (CRC) registers
//
//*****************************************************************************

#define CRC_DATA                      (*((volatile uint32_t *)0x40032000))      // CRC Data register
#define CRC_GPOLY                     (*((volatile uint32_t *)0x40032004))      // CRC Polynomial register
#define CRC_CTRL                      (*((volatile uint32_t *)0x40032008))      // CRC Control register


//*****************************************************************************
//
// 12-bit Cyclic Analog-to-Digital Converter (ADC) registers
//
//*****************************************************************************

#define ADC_CTRL1                     (*((volatile uint32_t *)0x4005C000))      // ADC Control Register 1 (ADC_CTRL1)
#define ADC_CTRL2                     (*((volatile uint32_t *)0x4005C002))      // ADC Control Register 2 (ADC_CTRL2)
#define ADC_ZXCTRL1                   (*((volatile uint32_t *)0x4005C004))      // ADC Zero Crossing Control 1 Register (ADC_ZXCTRL1)
#define ADC_ZXCTRL2                   (*((volatile uint32_t *)0x4005C006))      // ADC Zero Crossing Control 2 Register (ADC_ZXCTRL2)
#define ADC_CLIST1                    (*((volatile uint32_t *)0x4005C008))      // ADC Channel List Register 1 (ADC_CLIST1)
#define ADC_CLIST2                    (*((volatile uint32_t *)0x4005C00A))      // ADC Channel List Register 2 (ADC_CLIST2)
#define ADC_CLIST3                    (*((volatile uint32_t *)0x4005C00C))      // ADC Channel List Register 3 (ADC_CLIST3)
#define ADC_CLIST4                    (*((volatile uint32_t *)0x4005C00E))      // ADC Channel List Register 4 (ADC_CLIST4)
#define ADC_SDIS                      (*((volatile uint32_t *)0x4005C010))      // ADC Sample Disable Register (ADC_SDIS)
#define ADC_STAT                      (*((volatile uint32_t *)0x4005C012))      // ADC Status Register (ADC_STAT)
#define ADC_RDY                       (*((volatile uint32_t *)0x4005C014))      // ADC Ready Register (ADC_RDY)
#define ADC_LOLIMSTAT                 (*((volatile uint32_t *)0x4005C016))      // ADC Low Limit Status Register (ADC_LOLIMSTAT)
#define ADC_HILIMSTAT                 (*((volatile uint32_t *)0x4005C018))      // ADC High Limit Status Register (ADC_HILIMSTAT)
#define ADC_ZXSTAT                    (*((volatile uint32_t *)0x4005C01A))      // ADC Zero Crossing Status Register (ADC_ZXSTAT)
#define ADC_RSLT0                     (*((volatile uint32_t *)0x4005C01C))      // ADC Result Registers with sign extension (ADC_RSLT0)
#define ADC_RSLT1                     (*((volatile uint32_t *)0x4005C01E))      // ADC Result Registers with sign extension (ADC_RSLT1)
#define ADC_RSLT2                     (*((volatile uint32_t *)0x4005C020))      // ADC Result Registers with sign extension (ADC_RSLT2)
#define ADC_RSLT3                     (*((volatile uint32_t *)0x4005C022))      // ADC Result Registers with sign extension (ADC_RSLT3)
#define ADC_RSLT4                     (*((volatile uint32_t *)0x4005C024))      // ADC Result Registers with sign extension (ADC_RSLT4)
#define ADC_RSLT5                     (*((volatile uint32_t *)0x4005C026))      // ADC Result Registers with sign extension (ADC_RSLT5)
#define ADC_RSLT6                     (*((volatile uint32_t *)0x4005C028))      // ADC Result Registers with sign extension (ADC_RSLT6)
#define ADC_RSLT7                     (*((volatile uint32_t *)0x4005C02A))      // ADC Result Registers with sign extension (ADC_RSLT7)
#define ADC_RSLT8                     (*((volatile uint32_t *)0x4005C02C))      // ADC Result Registers with sign extension (ADC_RSLT8)
#define ADC_RSLT9                     (*((volatile uint32_t *)0x4005C02E))      // ADC Result Registers with sign extension (ADC_RSLT9)
#define ADC_RSLT10                    (*((volatile uint32_t *)0x4005C030))      // ADC Result Registers with sign extension (ADC_RSLT10)
#define ADC_RSLT11                    (*((volatile uint32_t *)0x4005C032))      // ADC Result Registers with sign extension (ADC_RSLT11)
#define ADC_RSLT12                    (*((volatile uint32_t *)0x4005C034))      // ADC Result Registers with sign extension (ADC_RSLT12)
#define ADC_RSLT13                    (*((volatile uint32_t *)0x4005C036))      // ADC Result Registers with sign extension (ADC_RSLT13)
#define ADC_RSLT14                    (*((volatile uint32_t *)0x4005C038))      // ADC Result Registers with sign extension (ADC_RSLT14)
#define ADC_RSLT15                    (*((volatile uint32_t *)0x4005C03A))      // ADC Result Registers with sign extension (ADC_RSLT15)
#define ADC_LOLIM0                    (*((volatile uint32_t *)0x4005C03C))      // ADC Low Limit Registers (ADC_LOLIM0)
#define ADC_LOLIM1                    (*((volatile uint32_t *)0x4005C03E))      // ADC Low Limit Registers (ADC_LOLIM1)
#define ADC_LOLIM2                    (*((volatile uint32_t *)0x4005C040))      // ADC Low Limit Registers (ADC_LOLIM2)
#define ADC_LOLIM3                    (*((volatile uint32_t *)0x4005C042))      // ADC Low Limit Registers (ADC_LOLIM3)
#define ADC_LOLIM4                    (*((volatile uint32_t *)0x4005C044))      // ADC Low Limit Registers (ADC_LOLIM4)
#define ADC_LOLIM5                    (*((volatile uint32_t *)0x4005C046))      // ADC Low Limit Registers (ADC_LOLIM5)
#define ADC_LOLIM6                    (*((volatile uint32_t *)0x4005C048))      // ADC Low Limit Registers (ADC_LOLIM6)
#define ADC_LOLIM7                    (*((volatile uint32_t *)0x4005C04A))      // ADC Low Limit Registers (ADC_LOLIM7)
#define ADC_LOLIM8                    (*((volatile uint32_t *)0x4005C04C))      // ADC Low Limit Registers (ADC_LOLIM8)
#define ADC_LOLIM9                    (*((volatile uint32_t *)0x4005C04E))      // ADC Low Limit Registers (ADC_LOLIM9)
#define ADC_LOLIM10                   (*((volatile uint32_t *)0x4005C050))      // ADC Low Limit Registers (ADC_LOLIM10)
#define ADC_LOLIM11                   (*((volatile uint32_t *)0x4005C052))      // ADC Low Limit Registers (ADC_LOLIM11)
#define ADC_LOLIM12                   (*((volatile uint32_t *)0x4005C054))      // ADC Low Limit Registers (ADC_LOLIM12)
#define ADC_LOLIM13                   (*((volatile uint32_t *)0x4005C056))      // ADC Low Limit Registers (ADC_LOLIM13)
#define ADC_LOLIM14                   (*((volatile uint32_t *)0x4005C058))      // ADC Low Limit Registers (ADC_LOLIM14)
#define ADC_LOLIM15                   (*((volatile uint32_t *)0x4005C05A))      // ADC Low Limit Registers (ADC_LOLIM15)
#define ADC_HILIM0                    (*((volatile uint32_t *)0x4005C05C))      // ADC High Limit Registers (ADC_HILIM0)
#define ADC_HILIM1                    (*((volatile uint32_t *)0x4005C05E))      // ADC High Limit Registers (ADC_HILIM1)
#define ADC_HILIM2                    (*((volatile uint32_t *)0x4005C060))      // ADC High Limit Registers (ADC_HILIM2)
#define ADC_HILIM3                    (*((volatile uint32_t *)0x4005C062))      // ADC High Limit Registers (ADC_HILIM3)
#define ADC_HILIM4                    (*((volatile uint32_t *)0x4005C064))      // ADC High Limit Registers (ADC_HILIM4)
#define ADC_HILIM5                    (*((volatile uint32_t *)0x4005C066))      // ADC High Limit Registers (ADC_HILIM5)
#define ADC_HILIM6                    (*((volatile uint32_t *)0x4005C068))      // ADC High Limit Registers (ADC_HILIM6)
#define ADC_HILIM7                    (*((volatile uint32_t *)0x4005C06A))      // ADC High Limit Registers (ADC_HILIM7)
#define ADC_HILIM8                    (*((volatile uint32_t *)0x4005C06C))      // ADC High Limit Registers (ADC_HILIM8)
#define ADC_HILIM9                    (*((volatile uint32_t *)0x4005C06E))      // ADC High Limit Registers (ADC_HILIM9)
#define ADC_HILIM10                   (*((volatile uint32_t *)0x4005C070))      // ADC High Limit Registers (ADC_HILIM10)
#define ADC_HILIM11                   (*((volatile uint32_t *)0x4005C072))      // ADC High Limit Registers (ADC_HILIM11)
#define ADC_HILIM12                   (*((volatile uint32_t *)0x4005C074))      // ADC High Limit Registers (ADC_HILIM12)
#define ADC_HILIM13                   (*((volatile uint32_t *)0x4005C076))      // ADC High Limit Registers (ADC_HILIM13)
#define ADC_HILIM14                   (*((volatile uint32_t *)0x4005C078))      // ADC High Limit Registers (ADC_HILIM14)
#define ADC_HILIM15                   (*((volatile uint32_t *)0x4005C07A))      // ADC High Limit Registers (ADC_HILIM15)
#define ADC_OFFST0                    (*((volatile uint32_t *)0x4005C07C))      // ADC Offset Registers (ADC_OFFST0)
#define ADC_OFFST1                    (*((volatile uint32_t *)0x4005C07E))      // ADC Offset Registers (ADC_OFFST1)
#define ADC_OFFST2                    (*((volatile uint32_t *)0x4005C080))      // ADC Offset Registers (ADC_OFFST2)
#define ADC_OFFST3                    (*((volatile uint32_t *)0x4005C082))      // ADC Offset Registers (ADC_OFFST3)
#define ADC_OFFST4                    (*((volatile uint32_t *)0x4005C084))      // ADC Offset Registers (ADC_OFFST4)
#define ADC_OFFST5                    (*((volatile uint32_t *)0x4005C086))      // ADC Offset Registers (ADC_OFFST5)
#define ADC_OFFST6                    (*((volatile uint32_t *)0x4005C088))      // ADC Offset Registers (ADC_OFFST6)
#define ADC_OFFST7                    (*((volatile uint32_t *)0x4005C08A))      // ADC Offset Registers (ADC_OFFST7)
#define ADC_OFFST8                    (*((volatile uint32_t *)0x4005C08C))      // ADC Offset Registers (ADC_OFFST8)
#define ADC_OFFST9                    (*((volatile uint32_t *)0x4005C08E))      // ADC Offset Registers (ADC_OFFST9)
#define ADC_OFFST10                   (*((volatile uint32_t *)0x4005C090))      // ADC Offset Registers (ADC_OFFST10)
#define ADC_OFFST11                   (*((volatile uint32_t *)0x4005C092))      // ADC Offset Registers (ADC_OFFST11)
#define ADC_OFFST12                   (*((volatile uint32_t *)0x4005C094))      // ADC Offset Registers (ADC_OFFST12)
#define ADC_OFFST13                   (*((volatile uint32_t *)0x4005C096))      // ADC Offset Registers (ADC_OFFST13)
#define ADC_OFFST14                   (*((volatile uint32_t *)0x4005C098))      // ADC Offset Registers (ADC_OFFST14)
#define ADC_OFFST15                   (*((volatile uint32_t *)0x4005C09A))      // ADC Offset Registers (ADC_OFFST15)
#define ADC_PWR                       (*((volatile uint32_t *)0x4005C09C))      // ADC Power Control Register (ADC_PWR)
#define ADC_CAL                       (*((volatile uint32_t *)0x4005C09E))      // ADC Calibration Register (ADC_CAL)
#define ADC_GC1                       (*((volatile uint32_t *)0x4005C0A0))      // Gain Control 1 Register (ADC_GC1)
#define ADC_GC2                       (*((volatile uint32_t *)0x4005C0A2))      // Gain Control 2 Register (ADC_GC2)
#define ADC_SCTRL                     (*((volatile uint32_t *)0x4005C0A4))      // ADC Scan Control Register (ADC_SCTRL)
#define ADC_PWR2                      (*((volatile uint32_t *)0x4005C0A6))      // ADC Power Control Register (ADC_PWR2)
#define ADC_CTRL3                     (*((volatile uint32_t *)0x4005C0A8))      // ADC Control Register 3 (ADC_CTRL3)
#define ADC_SCHLTEN                   (*((volatile uint32_t *)0x4005C0AA))      // ADC Scan Interrupt Enable Register (ADC_SCHLTEN)


//*****************************************************************************
//
// Comparator (CMP) registers
//
//*****************************************************************************

#define CMP0_CR0                      (*((volatile uint32_t *)0x40073000))      // CMP Control Register 0 (CMP0_CR0)
#define CMP0_CR1                      (*((volatile uint32_t *)0x40073001))      // CMP Control Register 1 (CMP0_CR1)
#define CMP0_FPR                      (*((volatile uint32_t *)0x40073002))      // CMP Filter Period Register (CMP0_FPR)
#define CMP0_SCR                      (*((volatile uint32_t *)0x40073003))      // CMP Status and Control Register (CMP0_SCR)
#define CMP0_DACCR                    (*((volatile uint32_t *)0x40073004))      // DAC Control Register (CMP0_DACCR)
#define CMP0_MUXCR                    (*((volatile uint32_t *)0x40073005))      // MUX Control Register (CMP0_MUXCR)
#define CMP1_CR0                      (*((volatile uint32_t *)0x40073008))      // CMP Control Register 0 (CMP1_CR0)
#define CMP1_CR1                      (*((volatile uint32_t *)0x40073009))      // CMP Control Register 1 (CMP1_CR1)
#define CMP1_FPR                      (*((volatile uint32_t *)0x4007300A))      // CMP Filter Period Register (CMP1_FPR)
#define CMP1_SCR                      (*((volatile uint32_t *)0x4007300B))      // CMP Status and Control Register (CMP1_SCR)
#define CMP1_DACCR                    (*((volatile uint32_t *)0x4007300C))      // DAC Control Register (CMP1_DACCR)
#define CMP1_MUXCR                    (*((volatile uint32_t *)0x4007300D))      // MUX Control Register (CMP1_MUXCR)
#define CMP2_CR0                      (*((volatile uint32_t *)0x40073010))      // CMP Control Register 0 (CMP2_CR0)
#define CMP2_CR1                      (*((volatile uint32_t *)0x40073011))      // CMP Control Register 1 (CMP2_CR1)
#define CMP2_FPR                      (*((volatile uint32_t *)0x40073012))      // CMP Filter Period Register (CMP2_FPR)
#define CMP2_SCR                      (*((volatile uint32_t *)0x40073013))      // CMP Status and Control Register (CMP2_SCR)
#define CMP2_DACCR                    (*((volatile uint32_t *)0x40073014))      // DAC Control Register (CMP2_DACCR)
#define CMP2_MUXCR                    (*((volatile uint32_t *)0x40073015))      // MUX Control Register (CMP2_MUXCR)
#define CMP3_CR0                      (*((volatile uint32_t *)0x40073018))      // CMP Control Register 0 (CMP3_CR0)
#define CMP3_CR1                      (*((volatile uint32_t *)0x40073019))      // CMP Control Register 1 (CMP3_CR1)
#define CMP3_FPR                      (*((volatile uint32_t *)0x4007301A))      // CMP Filter Period Register (CMP3_FPR)
#define CMP3_SCR                      (*((volatile uint32_t *)0x4007301B))      // CMP Status and Control Register (CMP3_SCR)
#define CMP3_DACCR                    (*((volatile uint32_t *)0x4007301C))      // DAC Control Register (CMP3_DACCR)
#define CMP3_MUXCR                    (*((volatile uint32_t *)0x4007301D))      // MUX Control Register (CMP3_MUXCR)


//*****************************************************************************
//
// 12-bit Digital-to-Analog Converter (DAC) registers
//
//*****************************************************************************

#define DAC0_DAT0L                    (*((volatile uint32_t *)0x4003F000))      // DAC Data Low Register
#define DAC0_DAT0H                    (*((volatile uint32_t *)0x4003F001))      // DAC Data High Register
#define DAC0_DAT1L                    (*((volatile uint32_t *)0x4003F002))      // DAC Data Low Register
#define DAC0_DAT1H                    (*((volatile uint32_t *)0x4003F003))      // DAC Data High Register
#define DAC0_DAT2L                    (*((volatile uint32_t *)0x4003F004))      // DAC Data Low Register
#define DAC0_DAT2H                    (*((volatile uint32_t *)0x4003F005))      // DAC Data High Register
#define DAC0_DAT3L                    (*((volatile uint32_t *)0x4003F006))      // DAC Data Low Register
#define DAC0_DAT3H                    (*((volatile uint32_t *)0x4003F007))      // DAC Data High Register
#define DAC0_DAT4L                    (*((volatile uint32_t *)0x4003F008))      // DAC Data Low Register
#define DAC0_DAT4H                    (*((volatile uint32_t *)0x4003F009))      // DAC Data High Register
#define DAC0_DAT5L                    (*((volatile uint32_t *)0x4003F00A))      // DAC Data Low Register
#define DAC0_DAT5H                    (*((volatile uint32_t *)0x4003F00B))      // DAC Data High Register
#define DAC0_DAT6L                    (*((volatile uint32_t *)0x4003F00C))      // DAC Data Low Register
#define DAC0_DAT6H                    (*((volatile uint32_t *)0x4003F00D))      // DAC Data High Register
#define DAC0_DAT7L                    (*((volatile uint32_t *)0x4003F00E))      // DAC Data Low Register
#define DAC0_DAT7H                    (*((volatile uint32_t *)0x4003F00F))      // DAC Data High Register
#define DAC0_DAT8L                    (*((volatile uint32_t *)0x4003F010))      // DAC Data Low Register
#define DAC0_DAT8H                    (*((volatile uint32_t *)0x4003F011))      // DAC Data High Register
#define DAC0_DAT9L                    (*((volatile uint32_t *)0x4003F012))      // DAC Data Low Register
#define DAC0_DAT9H                    (*((volatile uint32_t *)0x4003F013))      // DAC Data High Register
#define DAC0_DAT10L                   (*((volatile uint32_t *)0x4003F014))      // DAC Data Low Register
#define DAC0_DAT10H                   (*((volatile uint32_t *)0x4003F015))      // DAC Data High Register
#define DAC0_DAT11L                   (*((volatile uint32_t *)0x4003F016))      // DAC Data Low Register
#define DAC0_DAT11H                   (*((volatile uint32_t *)0x4003F017))      // DAC Data High Register
#define DAC0_DAT12L                   (*((volatile uint32_t *)0x4003F018))      // DAC Data Low Register
#define DAC0_DAT12H                   (*((volatile uint32_t *)0x4003F019))      // DAC Data High Register
#define DAC0_DAT13L                   (*((volatile uint32_t *)0x4003F01A))      // DAC Data Low Register
#define DAC0_DAT13H                   (*((volatile uint32_t *)0x4003F01B))      // DAC Data High Register
#define DAC0_DAT14L                   (*((volatile uint32_t *)0x4003F01C))      // DAC Data Low Register
#define DAC0_DAT14H                   (*((volatile uint32_t *)0x4003F01D))      // DAC Data High Register
#define DAC0_DAT15L                   (*((volatile uint32_t *)0x4003F01E))      // DAC Data Low Register
#define DAC0_DAT15H                   (*((volatile uint32_t *)0x4003F01F))      // DAC Data High Register
#define DAC0_SR                       (*((volatile uint32_t *)0x4003F020))      // DAC Status Register
#define DAC0_C0                       (*((volatile uint32_t *)0x4003F021))      // DAC Control Register
#define DAC0_C1                       (*((volatile uint32_t *)0x4003F022))      // DAC Control Register 1
#define DAC0_C2                       (*((volatile uint32_t *)0x4003F023))      // DAC Control Register 2


//*****************************************************************************
//
// Programmable Delay Block (PDB) registers
//
//*****************************************************************************

#define PDB1_SC                       (*((volatile uint32_t *)0x40031000))      // Status and Control register
#define PDB1_MOD                      (*((volatile uint32_t *)0x40031004))      // Modulus register
#define PDB1_CNT                      (*((volatile uint32_t *)0x40031008))      // Counter register
#define PDB1_IDLY                     (*((volatile uint32_t *)0x4003100C))      // Interrupt Delay register
#define PDB1_CH0C1                    (*((volatile uint32_t *)0x40031010))      // Channel n Control register 1
#define PDB1_CH0S                     (*((volatile uint32_t *)0x40031014))      // Channel n Status register
#define PDB1_CH0DLY0                  (*((volatile uint32_t *)0x40031018))      // Channel n Delay 0 register
#define PDB1_CH0DLY1                  (*((volatile uint32_t *)0x4003101C))      // Channel n Delay 1 register
#define PDB1_CH0DLY2                  (*((volatile uint32_t *)0x40031020))      // Channel n Delay 2 register
#define PDB1_CH0DLY3                  (*((volatile uint32_t *)0x40031024))      // Channel n Delay 3 register
#define PDB1_DACINTC0                 (*((volatile uint32_t *)0x40031150))      // DAC Interval Trigger n Control register
#define PDB1_DACINT0                  (*((volatile uint32_t *)0x40031154))      // DAC Interval n register
#define PDB1_POEN                     (*((volatile uint32_t *)0x40031190))      // Pulse-Out n Enable register
#define PDB1_PO0DLY                   (*((volatile uint32_t *)0x40031194))      // Pulse-Out n Delay register
#define PDB1_PO1DLY                   (*((volatile uint32_t *)0x40031198))      // Pulse-Out n Delay register
#define PDB1_PO2DLY                   (*((volatile uint32_t *)0x4003119C))      // Pulse-Out n Delay register
#define PDB1_PO3DLY                   (*((volatile uint32_t *)0x400311A0))      // Pulse-Out n Delay register
#define PDB0_SC                       (*((volatile uint32_t *)0x40036000))      // Status and Control register
#define PDB0_MOD                      (*((volatile uint32_t *)0x40036004))      // Modulus register
#define PDB0_CNT                      (*((volatile uint32_t *)0x40036008))      // Counter register
#define PDB0_IDLY                     (*((volatile uint32_t *)0x4003600C))      // Interrupt Delay register
#define PDB0_CH0C1                    (*((volatile uint32_t *)0x40036010))      // Channel n Control register 1
#define PDB0_CH0S                     (*((volatile uint32_t *)0x40036014))      // Channel n Status register
#define PDB0_CH0DLY0                  (*((volatile uint32_t *)0x40036018))      // Channel n Delay 0 register
#define PDB0_CH0DLY1                  (*((volatile uint32_t *)0x4003601C))      // Channel n Delay 1 register
#define PDB0_CH0DLY2                  (*((volatile uint32_t *)0x40036020))      // Channel n Delay 2 register
#define PDB0_CH0DLY3                  (*((volatile uint32_t *)0x40036024))      // Channel n Delay 3 register
#define PDB0_DACINTC0                 (*((volatile uint32_t *)0x40036150))      // DAC Interval Trigger n Control register
#define PDB0_DACINT0                  (*((volatile uint32_t *)0x40036154))      // DAC Interval n register
#define PDB0_POEN                     (*((volatile uint32_t *)0x40036190))      // Pulse-Out n Enable register
#define PDB0_PO0DLY                   (*((volatile uint32_t *)0x40036194))      // Pulse-Out n Delay register
#define PDB0_PO1DLY                   (*((volatile uint32_t *)0x40036198))      // Pulse-Out n Delay register
#define PDB0_PO2DLY                   (*((volatile uint32_t *)0x4003619C))      // Pulse-Out n Delay register
#define PDB0_PO3DLY                   (*((volatile uint32_t *)0x400361A0))      // Pulse-Out n Delay register


//*****************************************************************************
//
// FlexTimer Module (FTM) registers
//
//*****************************************************************************

#define FTM3_SC                       (*((volatile uint32_t *)0x40026000))      // Status And Control
#define FTM3_CNT                      (*((volatile uint32_t *)0x40026004))      // Counter
#define FTM3_MOD                      (*((volatile uint32_t *)0x40026008))      // Modulo
#define FTM3_C0SC                     (*((volatile uint32_t *)0x4002600C))      // Channel (n) Status And Control
#define FTM3_C0V                      (*((volatile uint32_t *)0x40026010))      // Channel (n) Value
#define FTM3_C1SC                     (*((volatile uint32_t *)0x40026014))      // Channel (n) Status And Control
#define FTM3_C1V                      (*((volatile uint32_t *)0x40026018))      // Channel (n) Value
#define FTM3_C2SC                     (*((volatile uint32_t *)0x4002601C))      // Channel (n) Status And Control
#define FTM3_C2V                      (*((volatile uint32_t *)0x40026020))      // Channel (n) Value
#define FTM3_C3SC                     (*((volatile uint32_t *)0x40026024))      // Channel (n) Status And Control
#define FTM3_C3V                      (*((volatile uint32_t *)0x40026028))      // Channel (n) Value
#define FTM3_C4SC                     (*((volatile uint32_t *)0x4002602C))      // Channel (n) Status And Control
#define FTM3_C4V                      (*((volatile uint32_t *)0x40026030))      // Channel (n) Value
#define FTM3_C5SC                     (*((volatile uint32_t *)0x40026034))      // Channel (n) Status And Control
#define FTM3_C5V                      (*((volatile uint32_t *)0x40026038))      // Channel (n) Value
#define FTM3_C6SC                     (*((volatile uint32_t *)0x4002603C))      // Channel (n) Status And Control
#define FTM3_C6V                      (*((volatile uint32_t *)0x40026040))      // Channel (n) Value
#define FTM3_C7SC                     (*((volatile uint32_t *)0x40026044))      // Channel (n) Status And Control
#define FTM3_C7V                      (*((volatile uint32_t *)0x40026048))      // Channel (n) Value
#define FTM3_CNTIN                    (*((volatile uint32_t *)0x4002604C))      // Counter Initial Value


//*****************************************************************************
//
// Periodic Interrupt Timer (PIT) registers
//
//*****************************************************************************

#define PIT_MCR                       (*((volatile uint32_t *)0x40037000))      // PIT Module Control Register
#define PIT_LDVAL0                    (*((volatile uint32_t *)0x40037100))      // Timer Load Value Register
#define PIT_CVAL0                     (*((volatile uint32_t *)0x40037104))      // Current Timer Value Register
#define PIT_TCTRL0                    (*((volatile uint32_t *)0x40037108))      // Timer Control Register
#define PIT_TFLG0                     (*((volatile uint32_t *)0x4003710C))      // Timer Flag Register
#define PIT_LDVAL1                    (*((volatile uint32_t *)0x40037110))      // Timer Load Value Register
#define PIT_CVAL1                     (*((volatile uint32_t *)0x40037114))      // Current Timer Value Register
#define PIT_TCTRL1                    (*((volatile uint32_t *)0x40037118))      // Timer Control Register
#define PIT_TFLG1                     (*((volatile uint32_t *)0x4003711C))      // Timer Flag Register
#define PIT_LDVAL2                    (*((volatile uint32_t *)0x40037120))      // Timer Load Value Register
#define PIT_CVAL2                     (*((volatile uint32_t *)0x40037124))      // Current Timer Value Register
#define PIT_TCTRL2                    (*((volatile uint32_t *)0x40037128))      // Timer Control Register
#define PIT_TFLG2                     (*((volatile uint32_t *)0x4003712C))      // Timer Flag Register
#define PIT_LDVAL3                    (*((volatile uint32_t *)0x40037130))      // Timer Load Value Register
#define PIT_CVAL3                     (*((volatile uint32_t *)0x40037134))      // Current Timer Value Register
#define PIT_TCTRL3                    (*((volatile uint32_t *)0x40037138))      // Timer Control Register
#define PIT_TFLG3                     (*((volatile uint32_t *)0x4003713C))      // Timer Flag Register


//*****************************************************************************
//
// Quadrature Encoder/Decoder (ENC) registers
//
//*****************************************************************************

#define ENC0_CTRL                     (*((volatile uint32_t *)0x40055000))      // Control Register (ENC0_CTRL)
#define ENC0_FILT                     (*((volatile uint32_t *)0x40055002))      // Input Filter Register (ENC0_FILT)
#define ENC0_WTR                      (*((volatile uint32_t *)0x40055004))      // Watchdog Timeout Register (ENC0_WTR)
#define ENC0_POSD                     (*((volatile uint32_t *)0x40055006))      // Position Difference Counter Register (ENC0_POSD)
#define ENC0_POSDH                    (*((volatile uint32_t *)0x40055008))      // Position Difference Hold Register (ENC0_POSDH)
#define ENC0_REV                      (*((volatile uint32_t *)0x4005500A))      // Revolution Counter Register (ENC0_REV)
#define ENC0_REVH                     (*((volatile uint32_t *)0x4005500C))      // Revolution Hold Register (ENC0_REVH)
#define ENC0_UPOS                     (*((volatile uint32_t *)0x4005500E))      // Upper Position Counter Register (ENC0_UPOS)
#define ENC0_LPOS                     (*((volatile uint32_t *)0x40055010))      // Lower Position Counter Register (ENC0_LPOS)
#define ENC0_UPOSH                    (*((volatile uint32_t *)0x40055012))      // Upper Position Hold Register (ENC0_UPOSH)
#define ENC0_LPOSH                    (*((volatile uint32_t *)0x40055014))      // Lower Position Hold Register (ENC0_LPOSH)
#define ENC0_UINIT                    (*((volatile uint32_t *)0x40055016))      // Upper Initialization Register (ENC0_UINIT)
#define ENC0_LINIT                    (*((volatile uint32_t *)0x40055018))      // Lower Initialization Register (ENC0_LINIT)
#define ENC0_IMR                      (*((volatile uint32_t *)0x4005501A))      // Input Monitor Register (ENC0_IMR)
#define ENC0_TST                      (*((volatile uint32_t *)0x4005501C))      // Test Register (ENC0_TST)
#define ENC0_CTRL2                    (*((volatile uint32_t *)0x4005501E))      // Control 2 Register (ENC0_CTRL2)
#define ENC0_UMOD                     (*((volatile uint32_t *)0x40055020))      // Upper Modulus Register (ENC0_UMOD)
#define ENC0_LMOD                     (*((volatile uint32_t *)0x40055022))      // Lower Modulus Register (ENC0_LMOD)
#define ENC0_UCOMP                    (*((volatile uint32_t *)0x40055024))      // Upper Position Compare Register (ENC0_UCOMP)
#define ENC0_LCOMP                    (*((volatile uint32_t *)0x40055026))      // Lower Position Compare Register (ENC0_LCOMP)


//*****************************************************************************
//
// Low-Power Timer (LPTMR) registers
//
//*****************************************************************************

#define LPTMR0_CSR                    (*((volatile uint32_t *)0x40040000))      // Low Power Timer Control Status Register (LPTMR0_CSR)
#define LPTMR0_PSR                    (*((volatile uint32_t *)0x40040004))      // Low Power Timer Prescale Register (LPTMR0_PSR)
#define LPTMR0_CMR                    (*((volatile uint32_t *)0x40040008))      // Low Power Timer Compare Register (LPTMR0_CMR)
#define LPTMR0_CNR                    (*((volatile uint32_t *)0x4004000C))      // Low Power Timer Counter Register (LPTMR0_CNR)


//*****************************************************************************
//
// Flex Controller Area Network (FlexCAN) registers
//
//*****************************************************************************

#define CAN_MCR                       (*((volatile uint32_t *)0x40024000))      // Module Configuration Register
#define CAN_CTRL1                     (*((volatile uint32_t *)0x40024004))      // Control 1 register
#define CAN_TIMER                     (*((volatile uint32_t *)0x40024008))      // Free Running Timer
#define CAN_RXMGMASK                  (*((volatile uint32_t *)0x40024010))      // Rx Mailboxes Global Mask Register
#define CAN_RX14MASK                  (*((volatile uint32_t *)0x40024014))      // Rx 14 Mask register
#define CAN_RX15MASK                  (*((volatile uint32_t *)0x40024018))      // Rx 15 Mask register
#define CAN_ECR                       (*((volatile uint32_t *)0x4002401C))      // Error Counter
#define CAN_ESR1                      (*((volatile uint32_t *)0x40024020))      // Error and Status 1 register
#define CAN_IMASK1                    (*((volatile uint32_t *)0x40024028))      // Interrupt Masks 1 register
#define CAN_IFLAG1                    (*((volatile uint32_t *)0x40024030))      // Interrupt Flags 1 register
#define CAN_CTRL2                     (*((volatile uint32_t *)0x40024034))      // Control 2 register
#define CAN_ESR2                      (*((volatile uint32_t *)0x40024038))      // Error and Status 2 register
#define CAN_CRCR                      (*((volatile uint32_t *)0x40024044))      // CRC Register
#define CAN_RXFGMASK                  (*((volatile uint32_t *)0x40024048))      // Rx FIFO Global Mask register
#define CAN_RXFIR                     (*((volatile uint32_t *)0x4002404C))      // Rx FIFO Information Register
#define CAN_CBT                       (*((volatile uint32_t *)0x40024050))      // CAN Bit Timing Register
#define CAN_RXIMR0                    (*((volatile uint32_t *)0x40024880))      // Rx Individual Mask Registers
#define CAN_RXIMR1                    (*((volatile uint32_t *)0x40024884))      // Rx Individual Mask Registers
#define CAN_RXIMR2                    (*((volatile uint32_t *)0x40024888))      // Rx Individual Mask Registers
#define CAN_RXIMR3                    (*((volatile uint32_t *)0x4002488C))      // Rx Individual Mask Registers
#define CAN_RXIMR4                    (*((volatile uint32_t *)0x40024890))      // Rx Individual Mask Registers
#define CAN_RXIMR5                    (*((volatile uint32_t *)0x40024894))      // Rx Individual Mask Registers
#define CAN_RXIMR6                    (*((volatile uint32_t *)0x40024898))      // Rx Individual Mask Registers
#define CAN_RXIMR7                    (*((volatile uint32_t *)0x4002489C))      // Rx Individual Mask Registers
#define CAN_RXIMR8                    (*((volatile uint32_t *)0x400248A0))      // Rx Individual Mask Registers
#define CAN_RXIMR9                    (*((volatile uint32_t *)0x400248A4))      // Rx Individual Mask Registers
#define CAN_RXIMR10                   (*((volatile uint32_t *)0x400248A8))      // Rx Individual Mask Registers
#define CAN_RXIMR11                   (*((volatile uint32_t *)0x400248AC))      // Rx Individual Mask Registers
#define CAN_RXIMR12                   (*((volatile uint32_t *)0x400248B0))      // Rx Individual Mask Registers
#define CAN_RXIMR13                   (*((volatile uint32_t *)0x400248B4))      // Rx Individual Mask Registers
#define CAN_RXIMR14                   (*((volatile uint32_t *)0x400248B8))      // Rx Individual Mask Registers
#define CAN_RXIMR15                   (*((volatile uint32_t *)0x400248BC))      // Rx Individual Mask Registers
#define CAN1_MCR                      (*((volatile uint32_t *)0x40025000))      // Module Configuration Register
#define CAN1_CTRL1                    (*((volatile uint32_t *)0x40025004))      // Control 1 register
#define CAN1_TIMER                    (*((volatile uint32_t *)0x40025008))      // Free Running Timer
#define CAN1_RXMGMASK                 (*((volatile uint32_t *)0x40025010))      // Rx Mailboxes Global Mask Register
#define CAN1_RX14MASK                 (*((volatile uint32_t *)0x40025014))      // Rx 14 Mask register
#define CAN1_RX15MASK                 (*((volatile uint32_t *)0x40025018))      // Rx 15 Mask register
#define CAN1_ECR                      (*((volatile uint32_t *)0x4002501C))      // Error Counter
#define CAN1_ESR1                     (*((volatile uint32_t *)0x40025020))      // Error and Status 1 register
#define CAN1_IMASK1                   (*((volatile uint32_t *)0x40025028))      // Interrupt Masks 1 register
#define CAN1_IFLAG1                   (*((volatile uint32_t *)0x40025030))      // Interrupt Flags 1 register
#define CAN1_CTRL2                    (*((volatile uint32_t *)0x40025034))      // Control 2 register
#define CAN1_ESR2                     (*((volatile uint32_t *)0x40025038))      // Error and Status 2 register
#define CAN1_CRCR                     (*((volatile uint32_t *)0x40025044))      // CRC Register
#define CAN1_RXFGMASK                 (*((volatile uint32_t *)0x40025048))      // Rx FIFO Global Mask register
#define CAN1_RXFIR                    (*((volatile uint32_t *)0x4002504C))      // Rx FIFO Information Register
#define CAN1_CBT                      (*((volatile uint32_t *)0x40025050))      // CAN Bit Timing Register
#define CAN1_RXIMR0                   (*((volatile uint32_t *)0x40025880))      // Rx Individual Mask Registers
#define CAN1_RXIMR1                   (*((volatile uint32_t *)0x40025884))      // Rx Individual Mask Registers
#define CAN1_RXIMR2                   (*((volatile uint32_t *)0x40025888))      // Rx Individual Mask Registers
#define CAN1_RXIMR3                   (*((volatile uint32_t *)0x4002588C))      // Rx Individual Mask Registers
#define CAN1_RXIMR4                   (*((volatile uint32_t *)0x40025890))      // Rx Individual Mask Registers
#define CAN1_RXIMR5                   (*((volatile uint32_t *)0x40025894))      // Rx Individual Mask Registers
#define CAN1_RXIMR6                   (*((volatile uint32_t *)0x40025898))      // Rx Individual Mask Registers
#define CAN1_RXIMR7                   (*((volatile uint32_t *)0x4002589C))      // Rx Individual Mask Registers
#define CAN1_RXIMR8                   (*((volatile uint32_t *)0x400258A0))      // Rx Individual Mask Registers
#define CAN1_RXIMR9                   (*((volatile uint32_t *)0x400258A4))      // Rx Individual Mask Registers
#define CAN1_RXIMR10                  (*((volatile uint32_t *)0x400258A8))      // Rx Individual Mask Registers
#define CAN1_RXIMR11                  (*((volatile uint32_t *)0x400258AC))      // Rx Individual Mask Registers
#define CAN1_RXIMR12                  (*((volatile uint32_t *)0x400258B0))      // Rx Individual Mask Registers
#define CAN1_RXIMR13                  (*((volatile uint32_t *)0x400258B4))      // Rx Individual Mask Registers
#define CAN1_RXIMR14                  (*((volatile uint32_t *)0x400258B8))      // Rx Individual Mask Registers
#define CAN1_RXIMR15                  (*((volatile uint32_t *)0x400258BC))      // Rx Individual Mask Registers


//*****************************************************************************
//
// Serial Peripheral Interface (SPI) registers
//
//*****************************************************************************

#define SPI0_MCR                      (*((volatile uint32_t *)0x4002C000))      // Module Configuration Register
#define SPI0_TCR                      (*((volatile uint32_t *)0x4002C008))      // Transfer Count Register
#define SPI0_CTAR0                    (*((volatile uint32_t *)0x4002C00C))      // Clock and Transfer Attributes Register (In Master Mode)
#define SPI0_CTAR0_SLAVE              (*((volatile uint32_t *)0x4002C00C))      // Clock and Transfer Attributes Register (In Slave Mode)
#define SPI0_CTAR1                    (*((volatile uint32_t *)0x4002C010))      // Clock and Transfer Attributes Register (In Master Mode)
#define SPI0_SR                       (*((volatile uint32_t *)0x4002C02C))      // Status Register
#define SPI0_RSER                     (*((volatile uint32_t *)0x4002C030))      // DMA/Interrupt Request Select and Enable Register
#define SPI0_PUSHR                    (*((volatile uint32_t *)0x4002C034))      // PUSH TX FIFO Register In Master Mode
#define SPI0_PUSHR_SLAVE              (*((volatile uint32_t *)0x4002C034))      // PUSH TX FIFO Register In Slave Mode
#define SPI0_POPR                     (*((volatile uint32_t *)0x4002C038))      // POP RX FIFO Register
#define SPI0_TXFR0                    (*((volatile uint32_t *)0x4002C03C))      // Transmit FIFO Registers
#define SPI0_TXFR1                    (*((volatile uint32_t *)0x4002C040))      // Transmit FIFO Registers
#define SPI0_TXFR2                    (*((volatile uint32_t *)0x4002C044))      // Transmit FIFO Registers
#define SPI0_TXFR3                    (*((volatile uint32_t *)0x4002C048))      // Transmit FIFO Registers
#define SPI0_RXFR0                    (*((volatile uint32_t *)0x4002C07C))      // Receive FIFO Registers
#define SPI0_RXFR1                    (*((volatile uint32_t *)0x4002C080))      // Receive FIFO Registers
#define SPI0_RXFR2                    (*((volatile uint32_t *)0x4002C084))      // Receive FIFO Registers
#define SPI0_RXFR3                    (*((volatile uint32_t *)0x4002C088))      // Receive FIFO Registers


//*****************************************************************************
//
// Inter-Integrated Circuit (I2C) registers
//
//*****************************************************************************

#define I2C0_A1                       (*((volatile uint32_t *)0x40066000))      // I2C Address Register 1 (I2C0_A1)
#define I2C0_F                        (*((volatile uint32_t *)0x40066001))      // I2C Frequency Divider register (I2C0_F)
#define I2C0_C1                       (*((volatile uint32_t *)0x40066002))      // I2C Control Register 1 (I2C0_C1)
#define I2C0_S                        (*((volatile uint32_t *)0x40066003))      // I2C Status register (I2C0_S)
#define I2C0_D                        (*((volatile uint32_t *)0x40066004))      // I2C Data I/O register (I2C0_D)
#define I2C0_C2                       (*((volatile uint32_t *)0x40066005))      // I2C Control Register 2 (I2C0_C2)
#define I2C0_FLT                      (*((volatile uint32_t *)0x40066006))      // I2C Programmable Input Glitch Filter Register (I2C0_FLT)
#define I2C0_RA                       (*((volatile uint32_t *)0x40066007))      // I2C Range Address register (I2C0_RA)
#define I2C0_SMB                      (*((volatile uint32_t *)0x40066008))      // I2C SMBus Control and Status register (I2C0_SMB)
#define I2C0_A2                       (*((volatile uint32_t *)0x40066009))      // I2C Address Register 2 (I2C0_A2)
#define I2C0_SLTH                     (*((volatile uint32_t *)0x4006600A))      // I2C SCL Low Timeout Register High (I2C0_SLTH)
#define I2C0_SLTL                     (*((volatile uint32_t *)0x4006600B))      // I2C SCL Low Timeout Register Low (I2C0_SLTL)


//*****************************************************************************
//
// Universal Asynchronous Receiver/Transmitter (UART) / FlexSCI registers
//
//*****************************************************************************

#define UART0_BDH                     (*((volatile uint32_t *)0x4006A000))      // Baud Rate Registers: High
#define UART0_BDL                     (*((volatile uint32_t *)0x4006A001))      // Baud Rate Registers: Low
#define UART0_C1                      (*((volatile uint32_t *)0x4006A002))      // Control Register 1
#define UART0_C2                      (*((volatile uint32_t *)0x4006A003))      // Control Register 2
#define UART0_S1                      (*((volatile uint32_t *)0x4006A004))      // Status Register 1
#define UART0_S2                      (*((volatile uint32_t *)0x4006A005))      // Status Register 2
#define UART0_C3                      (*((volatile uint32_t *)0x4006A006))      // Control Register 3
#define UART0_D                       (*((volatile uint32_t *)0x4006A007))      // Data Register
#define UART0_MA1                     (*((volatile uint32_t *)0x4006A008))      // Match Address Registers 1
#define UART0_MA2                     (*((volatile uint32_t *)0x4006A009))      // Match Address Registers 2
#define UART0_C4                      (*((volatile uint32_t *)0x4006A00A))      // Control Register 4
#define UART0_C5                      (*((volatile uint32_t *)0x4006A00B))      // Control Register 5
#define UART0_ED                      (*((volatile uint32_t *)0x4006A00C))      // Extended Data Register
#define UART0_MODEM                   (*((volatile uint32_t *)0x4006A00D))      // Modem Register
#define UART0_PFIFO                   (*((volatile uint32_t *)0x4006A010))      // FIFO Parameters
#define UART0_CFIFO                   (*((volatile uint32_t *)0x4006A011))      // FIFO Control Register
#define UART0_SFIFO                   (*((volatile uint32_t *)0x4006A012))      // FIFO Status Register
#define UART0_TWFIFO                  (*((volatile uint32_t *)0x4006A013))      // FIFO Transmit Watermark
#define UART0_TCFIFO                  (*((volatile uint32_t *)0x4006A014))      // FIFO Transmit Count
#define UART0_RWFIFO                  (*((volatile uint32_t *)0x4006A015))      // FIFO Receive Watermark
#define UART0_RCFIFO                  (*((volatile uint32_t *)0x4006A016))      // FIFO Receive Count
#define UART1_BDH                     (*((volatile uint32_t *)0x4006B000))      // Baud Rate Registers: High
#define UART1_BDL                     (*((volatile uint32_t *)0x4006B001))      // Baud Rate Registers: Low
#define UART1_C1                      (*((volatile uint32_t *)0x4006B002))      // Control Register 1
#define UART1_C2                      (*((volatile uint32_t *)0x4006B003))      // Control Register 2
#define UART1_S1                      (*((volatile uint32_t *)0x4006B004))      // Status Register 1
#define UART1_S2                      (*((volatile uint32_t *)0x4006B005))      // Status Register 2
#define UART1_C3                      (*((volatile uint32_t *)0x4006B006))      // Control Register 3
#define UART1_D                       (*((volatile uint32_t *)0x4006B007))      // Data Register
#define UART1_MA1                     (*((volatile uint32_t *)0x4006B008))      // Match Address Registers 1
#define UART1_MA2                     (*((volatile uint32_t *)0x4006B009))      // Match Address Registers 2
#define UART1_C4                      (*((volatile uint32_t *)0x4006B00A))      // Control Register 4
#define UART1_C5                      (*((volatile uint32_t *)0x4006B00B))      // Control Register 5
#define UART1_ED                      (*((volatile uint32_t *)0x4006B00C))      // Extended Data Register
#define UART1_MODEM                   (*((volatile uint32_t *)0x4006B00D))      // Modem Register
#define UART1_PFIFO                   (*((volatile uint32_t *)0x4006B010))      // FIFO Parameters
#define UART1_CFIFO                   (*((volatile uint32_t *)0x4006B011))      // FIFO Control Register
#define UART1_SFIFO                   (*((volatile uint32_t *)0x4006B012))      // FIFO Status Register
#define UART1_TWFIFO                  (*((volatile uint32_t *)0x4006B013))      // FIFO Transmit Watermark
#define UART1_TCFIFO                  (*((volatile uint32_t *)0x4006B014))      // FIFO Transmit Count
#define UART1_RWFIFO                  (*((volatile uint32_t *)0x4006B015))      // FIFO Receive Watermark
#define UART1_RCFIFO                  (*((volatile uint32_t *)0x4006B016))      // FIFO Receive Count


//*****************************************************************************
//
// General-Purpose Input/Output (GPIO) registers
//
//*****************************************************************************

#define GPIOA_PDOR                    (*((volatile uint32_t *)0x400FF000))      // Port Data Output Register
#define GPIOA_PSOR                    (*((volatile uint32_t *)0x400FF004))      // Port Set Output Register
#define GPIOA_PCOR                    (*((volatile uint32_t *)0x400FF008))      // Port Clear Output Register
#define GPIOA_PTOR                    (*((volatile uint32_t *)0x400FF00C))      // Port Toggle Output Register
#define GPIOA_PDIR                    (*((volatile uint32_t *)0x400FF010))      // Port Data Input Register
#define GPIOA_PDDR                    (*((volatile uint32_t *)0x400FF014))      // Port Data Direction Register
#define GPIOB_PDOR                    (*((volatile uint32_t *)0x400FF040))      // Port Data Output Register
#define GPIOB_PSOR                    (*((volatile uint32_t *)0x400FF044))      // Port Set Output Register
#define GPIOB_PCOR                    (*((volatile uint32_t *)0x400FF048))      // Port Clear Output Register
#define GPIOB_PTOR                    (*((volatile uint32_t *)0x400FF04C))      // Port Toggle Output Register
#define GPIOB_PDIR                    (*((volatile uint32_t *)0x400FF050))      // Port Data Input Register
#define GPIOB_PDDR                    (*((volatile uint32_t *)0x400FF054))      // Port Data Direction Register
#define GPIOC_PDOR                    (*((volatile uint32_t *)0x400FF080))      // Port Data Output Register
#define GPIOC_PSOR                    (*((volatile uint32_t *)0x400FF084))      // Port Set Output Register
#define GPIOC_PCOR                    (*((volatile uint32_t *)0x400FF088))      // Port Clear Output Register
#define GPIOC_PTOR                    (*((volatile uint32_t *)0x400FF08C))      // Port Toggle Output Register
#define GPIOC_PDIR                    (*((volatile uint32_t *)0x400FF090))      // Port Data Input Register
#define GPIOC_PDDR                    (*((volatile uint32_t *)0x400FF094))      // Port Data Direction Register
#define GPIOD_PDOR                    (*((volatile uint32_t *)0x400FF0C0))      // Port Data Output Register
#define GPIOD_PSOR                    (*((volatile uint32_t *)0x400FF0C4))      // Port Set Output Register
#define GPIOD_PCOR                    (*((volatile uint32_t *)0x400FF0C8))      // Port Clear Output Register
#define GPIOD_PTOR                    (*((volatile uint32_t *)0x400FF0CC))      // Port Toggle Output Register
#define GPIOD_PDIR                    (*((volatile uint32_t *)0x400FF0D0))      // Port Data Input Register
#define GPIOD_PDDR                    (*((volatile uint32_t *)0x400FF0D4))      // Port Data Direction Register
#define GPIOE_PDOR                    (*((volatile uint32_t *)0x400FF100))      // Port Data Output Register
#define GPIOE_PSOR                    (*((volatile uint32_t *)0x400FF104))      // Port Set Output Register
#define GPIOE_PCOR                    (*((volatile uint32_t *)0x400FF108))      // Port Clear Output Register
#define GPIOE_PTOR                    (*((volatile uint32_t *)0x400FF10C))      // Port Toggle Output Register
#define GPIOE_PDIR                    (*((volatile uint32_t *)0x400FF110))      // Port Data Input Register
#define GPIOE_PDDR                    (*((volatile uint32_t *)0x400FF114))      // Port Data Direction Register

