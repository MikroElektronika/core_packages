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

#ifndef __MKS20FN256VLH12_H__
#define __MKS20FN256VLH12_H__



//*****************************************************************************
//
// Interrupt assignments
//
//*****************************************************************************

#define NUMBER_OF_INT_VECTORS                   105               // Number of interrupts in the Vector table
#define NotAvail_IRQn                           -78              // Not available device specific interrupt
#define NonMaskableInterrupt_IRQn               -14              // Non-maskable Interrupt (NMI)
#define HardFault_IRQn                          -13              // Hard Fault
#define MemManageFault_IRQn                     -12              // MemManage Fault
#define BusFault_IRQn                           -11              // Bus Fault
#define UsageFault_IRQn                         -10              // Usage Fault
#define DMA0_IRQn                               0                // DMA channel 0 transfer complete
#define DMA1_IRQn                               1                // DMA channel 1 transfer complete
#define DMA2_IRQn                               2                // DMA channel 2 transfer complete
#define DMA3_IRQn                               3                // DMA channel 3 transfer complete
#define DMA4_IRQn                               4                // DMA channel 4 transfer complete
#define DMA5_IRQn                               5                // DMA channel 5 transfer complete
#define DMA6_IRQn                               6                // DMA channel 6 transfer complete
#define DMA7_IRQn                               7                // DMA channel 7 transfer complete
#define DMA8_IRQn                               8                // DMA channel 8 transfer complete
#define DMA9_IRQn                               9                // DMA channel 9 transfer complete
#define DMA10_IRQn                              10               // DMA channel 10 transfer complete
#define DMA11_IRQn                              11               // DMA channel 11 transfer complete
#define DMA12_IRQn                              12               // DMA channel 12 transfer complete
#define DMA13_IRQn                              13               // DMA channel 13 transfer complete
#define DMA14_IRQn                              14               // DMA channel 14 transfer complete
#define DMA15_IRQn                              15               // DMA channel 15 transfer complete
#define DMA_Error_IRQn                          16               // DMA error interrupt channels 0-15
#define FPU_SourceS_IRQn                        17               // FPU sources
#define Command_Complete_IRQn                   18               // Command complete
#define Read_Collision_IRQn                     19               // Read collision
#define PMC_IRQn                                20               // Low-voltage detect, low-voltage warning
#define LLWU_IRQn                               21               // Low Leakage Wakeup
#define Both_Watchdog_Modules_Share_This_Interrupt_IRQn 22               // Both watchdog modules share this interrupt
#define Randon_Number_Generator_IRQn            23               // Randon Number Generator
#define LPI2C0_IRQn                             24               // -
#define LPI2C1_IRQn                             25               // -
#define SPI0_IRQn                               26               // Single interrupt vector for all sources
#define SPI1_IRQn                               27               // Single interrupt vector for all sources
#define Transmit_IRQn                           28               // Transmit
#define Receive_IRQn                            29               // Receive
#define Status_And_Error_IRQn                   30               // Status and error
#define UART0_RX_TX_IRQn                        31               // Single interrupt vector for UART status sources
#define UART0_ERR_IRQn                          32               // Single interrupt vector for UART error sources
#define UART1_RX_TX_IRQn                        33               // Single interrupt vector for UART status sources
#define UART1_ERR_IRQn                          34               // Single interrupt vector for UART error sources
#define UART2_RX_TX_IRQn                        35               // Single interrupt vector for UART status sources
#define UART2_ERR_IRQn                          36               // Single interrupt vector for UART error sources
#define ADC0_IRQn                               39               // -
#define CMP0_IRQn                               40               // -
#define TPM0_IRQn                               42               // -
#define TPM1_IRQn                               43               // -
#define TPM2_IRQn                               44               // -
#define Alarm_Interrupt_IRQn                    46               // Alarm interrupt
#define Seconds_Interrupt_IRQn                  47               // Seconds interrupt
#define PIT0_IRQn                               48               // Channel 0
#define PIT1_IRQn                               49               // Channel 1
#define PIT2_IRQn                               50               // Channel 2
#define PIT3_IRQn                               51               // Channel 3
#define PDB_IRQn                                52               // -
#define USB_OTG_IRQn                            53               // -
#define DAC0_IRQn                               56               // -
#define MCG_IRQn                                57               // -
#define LPTMR0_IRQn                             58               // -
#define PORTA_IRQn                              59               // Pin detect (Port A)
#define PORTB_IRQn                              60               // Pin detect (Port B)
#define PORTC_IRQn                              61               // Pin detect (Port C)
#define PORTD_IRQn                              62               // Pin detect (Port D)
#define PORTE_IRQn                              63               // Pin detect (Port E)
#define Software_Interrupt4_IRQn                64               // Software interrupt4
#define Flexible_IO_IRQn                        70               // Flexible IO
#define CAN0_0Red_Message_buffer_IRQn           75               // OR'ed Message buffer (0-15)
#define CAN0_Bus_Off_IRQn                       76               // Bus Off
#define CAN0_Error_IRQn                         77               // Error
#define CAN0_Tx_Warning_IRQn                    78               // Transmit Warning
#define CAN0_Rx_Warning_IRQn                    79               // Receive Warning
#define CAN0_Wake_Up_IRQn                       80               // Wake Up
#define TransmiT_IRQn                           88               // transmit
#define Receive_IRQn                            89               // receive
#define OR'ed_Message_Buffer_(0_15)_IRQn        94               // OR'ed Message buffer (0-15)
#define Bus_Off_IRQn                            95               // Bus Off
#define Error_IRQn                              96               // Error
#define Transmit_Warning_IRQn                   97               // Transmit Warning
#define Receive_Warning_IRQn                    98               // Receive Warning
#define Wake_Up_IRQn                            99               // Wake Up



//*****************************************************************************
//
// Port Control and Interrupts (PORT) registers
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
#define SIM_SOPT5                     (*((volatile uint32_t *)0x40048010))      // System Options Register 5 (SIM_SOPT5)
#define SIM_SOPT7                     (*((volatile uint32_t *)0x40048018))      // System Options Register 7 (SIM_SOPT7)
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
#define SIM_CLKDIV3                   (*((volatile uint32_t *)0x40048064))      // System Clock Divider Register 3 (SIM_CLKDIV3)
#define SIM_MISCCTL                   (*((volatile uint32_t *)0x4004806C))      // Miscellaneous Control Register (SIM_MISCCTL)


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
#define SMC_STOPCTRL                  (*((volatile uint32_t *)0x4007E002))      // PROCESS PHStop Control Register (SMC_STOPCTRL)
#define SMC_PMSTAT                    (*((volatile uint32_t *)0x4007E003))      // Power Mode Status register (SMC_PMSTAT)


//*****************************************************************************
//
// Power Management Controller (PMC) registers
//
//*****************************************************************************

#define PMC_LVDSC1                    (*((volatile uint32_t *)0x4007D000))      // Low Voltage Detect Status And Control 1 register
#define PMC_LVDSC2                    (*((volatile uint32_t *)0x4007D001))      // Low Voltage Detect Status And Control 2 register
#define PMC_REGSC                     (*((volatile uint32_t *)0x4007D002))      // Regulator Status And Control register
#define PMC_HVDSC1                    (*((volatile uint32_t *)0x4007D00B))      // High Voltage Detect Status And Control 1 register


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
// Miscellaneous Control Module (MCM) registers
//
//*****************************************************************************

#define MCM_PLASC                     (*((volatile uint32_t *)0xE0080008))      // Crossbar Switch (AXBS) Slave Configuration
#define MCM_PLAMC                     (*((volatile uint32_t *)0xE008000A))      // Crossbar Switch (AXBS) Master Configuration
#define MCM_PLACR                     (*((volatile uint32_t *)0xE008000C))      // Crossbar Switch (AXBS) Control Register
#define MCM_ISCR                      (*((volatile uint32_t *)0xE0080010))      // Interrupt Status and Control Register
#define MCM_CPO                       (*((volatile uint32_t *)0xE0080040))      // Compute Operation Control Register


//*****************************************************************************
//
// Direct Memory Access Multiplexer (DMAMUX) registers
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
// Enhanced Direct Memory Access (eDMA) registers
//
//*****************************************************************************

#define DMA_CR                        (*((volatile uint32_t *)0x40008000))      // Control Register (DMA_CR)
#define DMA_ES                        (*((volatile uint32_t *)0x40008004))      // Error Status Register (DMA_ES)
#define DMA_ERQ                       (*((volatile uint32_t *)0x4000800C))      // Enable Request Register (DMA_ERQ)
#define DMA_EEI                       (*((volatile uint32_t *)0x40008014))      // Enable Error Interrupt Register (DMA_EEI)
#define DMA_CEEI                      (*((volatile uint32_t *)0x40008018))      // Clear Enable Error Interrupt Register (DMA_CEEI)
#define DMA_SEEI                      (*((volatile uint32_t *)0x40008019))      // Set Enable Error Interrupt Register (DMA_SEEI)


//*****************************************************************************
//
// External Watchdog Monitor (EWM) registers
//
//*****************************************************************************

#define EWM_CTRL                      (*((volatile uint32_t *)0x40061000))      // Control Register (EWM_CTRL)
#define EWM_SERV                      (*((volatile uint32_t *)0x40061001))      // Service Register (EWM_SERV)
#define EWM_CMPL                      (*((volatile uint32_t *)0x40061002))      // Compare Low Register (EWM_CMPL)
#define EWM_CMPH                      (*((volatile uint32_t *)0x40061003))      // Compare High Register (EWM_CMPH)
#define EWM_CLKPRESCALER              (*((volatile uint32_t *)0x40061005))      // Clock Prescaler Register (EWM_CLKPRESCALER)


//*****************************************************************************
//
// Watchdog timer (WDOG) registers
//
//*****************************************************************************

#define WDOG_ST_CTRL_H                (*((volatile uint32_t *)0x40052000))      // Watchdog Status and Control Register High
#define WDOG_ST_CTRL_L                (*((volatile uint32_t *)0x40052002))      // Watchdog Status and Control Register Low
#define WDOG_TO_VAL_H                 (*((volatile uint32_t *)0x40052004))      // Watchdog Time-out Value Register High
#define WDOG_TO_VAL_L                 (*((volatile uint32_t *)0x40052006))      // Watchdog Time-out Value Register Low
#define WDOG_WIN_H                    (*((volatile uint32_t *)0x40052008))      // Watchdog Window Register High
#define WDOG_WIN_L                    (*((volatile uint32_t *)0x4005200A))      // Watchdog Window Register Low
#define WDOG_REFRESH                  (*((volatile uint32_t *)0x4005200C))      // Watchdog Refresh register
#define WDOG_UNLOCK                   (*((volatile uint32_t *)0x4005200E))      // Watchdog Unlock register
#define WDOG_TMROUTH                  (*((volatile uint32_t *)0x40052010))      // Watchdog Timer Output Register High
#define WDOG_TMROUTL                  (*((volatile uint32_t *)0x40052012))      // Watchdog Timer Output Register Low
#define WDOG_RSTCNT                   (*((volatile uint32_t *)0x40052014))      // Watchdog Reset Count register
#define WDOG_PRESC                    (*((volatile uint32_t *)0x40052016))      // Watchdog Prescaler register


//*****************************************************************************
//
// Multipurpose Clock Generator (MCG) registers
//
//*****************************************************************************

#define MCG_C1                        (*((volatile uint32_t *)0x40064000))      // MCG Control 1 Register (MCG_C1)
#define MCG_C2                        (*((volatile uint32_t *)0x40064001))      // MCG Control 2 Register (MCG_C2)
#define MCG_C3                        (*((volatile uint32_t *)0x40064002))      // MCG Control 3 Register (MCG_C3)
#define MCG_C4                        (*((volatile uint32_t *)0x40064003))      // MCG Control 4 Register (MCG_C4)
#define MCG_C5                        (*((volatile uint32_t *)0x40064004))      // MCG Control 5 Register (MCG_C5)
#define MCG_C6                        (*((volatile uint32_t *)0x40064005))      // MCG Control 6 Register (MCG_C6)
#define MCG_S                         (*((volatile uint32_t *)0x40064006))      // MCG Status Register (MCG_S)
#define MCG_SC                        (*((volatile uint32_t *)0x40064008))      // MCG Status and Control Register (MCG_SC)
#define MCG_ATCVH                     (*((volatile uint32_t *)0x4006400A))      // MCG Auto Trim Compare Value High Register (MCG_ATCVH)
#define MCG_ATCVL                     (*((volatile uint32_t *)0x4006400B))      // MCG Auto Trim Compare Value Low Register (MCG_ATCVL)
#define MCG_C7                        (*((volatile uint32_t *)0x4006400C))      // MCG Control 7 Register (MCG_C7)
#define MCG_C8                        (*((volatile uint32_t *)0x4006400D))      // MCG Control 8 Register (MCG_C8)
#define MCG_C12                       (*((volatile uint32_t *)0x40064011))      // MCG Control 12 Register (MCG_C12)
#define MCG_S2                        (*((volatile uint32_t *)0x40064012))      // MCG Status 2 Register (MCG_S2)
#define MCG_T3                        (*((volatile uint32_t *)0x40064013))      // MCG Test 3 Register (MCG_T3)


//*****************************************************************************
//
// Oscillator (OSC) registers
//
//*****************************************************************************

#define OSC_CR                        (*((volatile uint32_t *)0x40065000))      // OSC Control Register
#define OSC_OSC_DIV                   (*((volatile uint32_t *)0x40065002))      // OSC Clock divider register


//*****************************************************************************
//
// Flash Memory Controller (FMC) registers
//
//*****************************************************************************

#define FMC_PFAPR                     (*((volatile uint32_t *)0x4001F000))      // Flash Access Protection Register (FMC_PFAPR)


//*****************************************************************************
//
// Cyclic Redundancy Check (CRC) registers
//
//*****************************************************************************

#define CRC_DATA                      (*((volatile uint32_t *)0x40032000))      // CRC Data register (CRC_DATA)
#define CRC_GPOLY                     (*((volatile uint32_t *)0x40032004))      // CRC Polynomial register (CRC_GPOLY)
#define CRC_CTRL                      (*((volatile uint32_t *)0x40032008))      // CRC Control register (CRC_CTRL)


//*****************************************************************************
//
// Random Number Generator Accelerator (RNGA) registers
//
//*****************************************************************************

#define RNG_CR                        (*((volatile uint32_t *)0x40029000))      // RNGA Control Register (RNG_CR)
#define RNG_SR                        (*((volatile uint32_t *)0x40029004))      // RNGA Status Register (RNG_SR)
#define RNG_ER                        (*((volatile uint32_t *)0x40029008))      // RNGA Entropy Register (RNG_ER)
#define RNG_OR                        (*((volatile uint32_t *)0x4002900C))      // RNGA Output Register (RNG_OR)


//*****************************************************************************
//
// Analog-to-Digital Converter (ADC) registers
//
//*****************************************************************************

#define ADC0_SC1A                     (*((volatile uint32_t *)0x4003B000))      // ADC Status and Control Registers 1 (ADC0_SC1A)
#define ADC0_SC1B                     (*((volatile uint32_t *)0x4003B004))      // ADC Status and Control Registers 1 (ADC0_SC1B)
#define ADC0_CFG1                     (*((volatile uint32_t *)0x4003B008))      // ADC Configuration Register 1 (ADC0_CFG1)
#define ADC0_CFG2                     (*((volatile uint32_t *)0x4003B00C))      // ADC Configuration Register 2 (ADC0_CFG2)
#define ADC0_RA                       (*((volatile uint32_t *)0x4003B010))      // ADC Data Result Register (ADC0_RA)
#define ADC0_RB                       (*((volatile uint32_t *)0x4003B014))      // ADC Data Result Register (ADC0_RB)
#define ADC0_CV1                      (*((volatile uint32_t *)0x4003B018))      // Compare Value Registers (ADC0_CV1)
#define ADC0_CV2                      (*((volatile uint32_t *)0x4003B01C))      // Compare Value Registers (ADC0_CV2)
#define ADC0_SC2                      (*((volatile uint32_t *)0x4003B020))      // Status and Control Register 2 (ADC0_SC2)
#define ADC0_SC3                      (*((volatile uint32_t *)0x4003B024))      // Status and Control Register 3 (ADC0_SC3)
#define ADC0_OFS                      (*((volatile uint32_t *)0x4003B028))      // ADC Offset Correction Register (ADC0_OFS)
#define ADC0_PG                       (*((volatile uint32_t *)0x4003B02C))      // ADC Plus-Side Gain Register (ADC0_PG)
#define ADC0_MG                       (*((volatile uint32_t *)0x4003B030))      // ADC Minus-Side Gain Register (ADC0_MG)
#define ADC0_CLPD                     (*((volatile uint32_t *)0x4003B034))      // ADC Plus-Side General Calibration Value Register (ADC0_CLPD)
#define ADC0_CLPS                     (*((volatile uint32_t *)0x4003B038))      // ADC Plus-Side General Calibration Value Register (ADC0_CLPS)
#define ADC0_CLP4                     (*((volatile uint32_t *)0x4003B03C))      // ADC Plus-Side General Calibration Value Register (ADC0_CLP4)
#define ADC0_CLP3                     (*((volatile uint32_t *)0x4003B040))      // ADC Plus-Side General Calibration Value Register (ADC0_CLP3)
#define ADC0_CLP2                     (*((volatile uint32_t *)0x4003B044))      // ADC Plus-Side General Calibration Value Register (ADC0_CLP2)
#define ADC0_CLP1                     (*((volatile uint32_t *)0x4003B048))      // ADC Plus-Side General Calibration Value Register (ADC0_CLP1)
#define ADC0_CLP0                     (*((volatile uint32_t *)0x4003B04C))      // ADC Plus-Side General Calibration Value Register (ADC0_CLP0)
#define ADC0_CLMD                     (*((volatile uint32_t *)0x4003B054))      // ADC Minus-Side General Calibration Value Register (ADC0_CLMD)
#define ADC0_CLMS                     (*((volatile uint32_t *)0x4003B058))      // ADC Minus-Side General Calibration Value Register (ADC0_CLMS)
#define ADC0_CLM4                     (*((volatile uint32_t *)0x4003B05C))      // ADC Minus-Side General Calibration Value Register (ADC0_CLM4)
#define ADC0_CLM3                     (*((volatile uint32_t *)0x4003B060))      // ADC Minus-Side General Calibration Value Register (ADC0_CLM3)
#define ADC0_CLM2                     (*((volatile uint32_t *)0x4003B064))      // ADC Minus-Side General Calibration Value Register (ADC0_CLM2)
#define ADC0_CLM1                     (*((volatile uint32_t *)0x4003B068))      // ADC Minus-Side General Calibration Value Register (ADC0_CLM1)
#define ADC0_CLM0                     (*((volatile uint32_t *)0x4003B06C))      // ADC Minus-Side General Calibration Value Register (ADC0_CLM0)


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

#define PDB0_SC                       (*((volatile uint32_t *)0x40036000))      // Status and Control register (PDB0_SC)
#define PDB0_MOD                      (*((volatile uint32_t *)0x40036004))      // Modulus register (PDB0_MOD)
#define PDB0_CNT                      (*((volatile uint32_t *)0x40036008))      // Counter register (PDB0_CNT)
#define PDB0_IDLY                     (*((volatile uint32_t *)0x4003600C))      // Interrupt Delay register (PDB0_IDLY)
#define PDB0_CH0C1                    (*((volatile uint32_t *)0x40036010))      // Channel n Control register 1 (PDB0_CH0C1)
#define PDB0_CH0S                     (*((volatile uint32_t *)0x40036014))      // Channel n Status register (PDB0_CH0S)
#define PDB0_CH0DLY0                  (*((volatile uint32_t *)0x40036018))      // Channel n Delay 0 register (PDB0_CH0DLY0)
#define PDB0_CH0DLY1                  (*((volatile uint32_t *)0x4003601C))      // Channel n Delay 1 register (PDB0_CH0DLY1)
#define PDB0_DACINTC0                 (*((volatile uint32_t *)0x40036150))      // DAC Interval Trigger n Control register (PDB0_DACINTC0)
#define PDB0_DACINT0                  (*((volatile uint32_t *)0x40036154))      // DAC Interval n register (PDB0_DACINT0)
#define PDB0_POEN                     (*((volatile uint32_t *)0x40036190))      // Pulse-Out n Enable register (PDB0_POEN)
#define PDB0_PO0DLY                   (*((volatile uint32_t *)0x40036194))      // Pulse-Out n Delay register (PDB0_PO0DLY)


//*****************************************************************************
//
// Timer/PWM Module (TPM) registers
//
//*****************************************************************************

#define TPM0_VERID                    (*((volatile uint32_t *)0x40038000))      // Version ID Register (TPM0_VERID)
#define TPM0_PARAM                    (*((volatile uint32_t *)0x40038004))      // Parameter Register (TPM0_PARAM)
#define TPM0_GLOBAL                   (*((volatile uint32_t *)0x40038008))      // TPM Global Register (TPM0_GLOBAL)
#define TPM0_SC                       (*((volatile uint32_t *)0x40038010))      // Status and Control (TPM0_SC)
#define TPM0_CNT                      (*((volatile uint32_t *)0x40038014))      // Counter (TPM0_CNT)
#define TPM0_MOD                      (*((volatile uint32_t *)0x40038018))      // Modulo (TPM0_MOD)
#define TPM0_STATUS                   (*((volatile uint32_t *)0x4003801C))      // Capture and Compare Status (TPM0_STATUS)
#define TPM0_C0SC                     (*((volatile uint32_t *)0x40038020))      // Channel (n) Status and Control (TPM0_C0SC)
#define TPM0_C0V                      (*((volatile uint32_t *)0x40038024))      // Channel (n) Value (TPM0_C0V)
#define TPM0_C1SC                     (*((volatile uint32_t *)0x40038028))      // Channel (n) Status and Control (TPM0_C1SC)
#define TPM0_C1V                      (*((volatile uint32_t *)0x4003802C))      // Channel (n) Value (TPM0_C1V)
#define TPM0_C2SC                     (*((volatile uint32_t *)0x40038030))      // Channel (n) Status and Control (TPM0_C2SC)
#define TPM0_C2V                      (*((volatile uint32_t *)0x40038034))      // Channel (n) Value (TPM0_C2V)
#define TPM0_C3SC                     (*((volatile uint32_t *)0x40038038))      // Channel (n) Status and Control (TPM0_C3SC)
#define TPM0_C3V                      (*((volatile uint32_t *)0x4003803C))      // Channel (n) Value (TPM0_C3V)
#define TPM0_C4SC                     (*((volatile uint32_t *)0x40038040))      // Channel (n) Status and Control (TPM0_C4SC)
#define TPM0_C4V                      (*((volatile uint32_t *)0x40038044))      // Channel (n) Value (TPM0_C4V)
#define TPM0_C5SC                     (*((volatile uint32_t *)0x40038048))      // Channel (n) Status and Control (TPM0_C5SC)
#define TPM0_C5V                      (*((volatile uint32_t *)0x4003804C))      // Channel (n) Value (TPM0_C5V)
#define TPM0_COMBINE                  (*((volatile uint32_t *)0x40038064))      // Combine Channel Register (TPM0_COMBINE)
#define TPM0_TRIG                     (*((volatile uint32_t *)0x4003806C))      // Channel Trigger (TPM0_TRIG)
#define TPM0_POL                      (*((volatile uint32_t *)0x40038070))      // Channel Polarity (TPM0_POL)
#define TPM0_FILTER                   (*((volatile uint32_t *)0x40038078))      // Filter Control (TPM0_FILTER)
#define TPM0_QDCTRL                   (*((volatile uint32_t *)0x40038080))      // Quadrature Decoder Control and Status (TPM0_QDCTRL)
#define TPM0_CONF                     (*((volatile uint32_t *)0x40038084))      // Configuration (TPM0_CONF)
#define TPM1_VERID                    (*((volatile uint32_t *)0x40039000))      // Version ID Register (TPM1_VERID)
#define TPM1_PARAM                    (*((volatile uint32_t *)0x40039004))      // Parameter Register (TPM1_PARAM)
#define TPM1_GLOBAL                   (*((volatile uint32_t *)0x40039008))      // TPM Global Register (TPM1_GLOBAL)
#define TPM1_SC                       (*((volatile uint32_t *)0x40039010))      // Status and Control (TPM1_SC)
#define TPM1_CNT                      (*((volatile uint32_t *)0x40039014))      // Counter (TPM1_CNT)
#define TPM1_MOD                      (*((volatile uint32_t *)0x40039018))      // Modulo (TPM1_MOD)
#define TPM1_STATUS                   (*((volatile uint32_t *)0x4003901C))      // Capture and Compare Status (TPM1_STATUS)
#define TPM1_C0SC                     (*((volatile uint32_t *)0x40039020))      // Channel (n) Status and Control (TPM1_C0SC)
#define TPM1_C0V                      (*((volatile uint32_t *)0x40039024))      // Channel (n) Value (TPM1_C0V)
#define TPM1_C1SC                     (*((volatile uint32_t *)0x40039028))      // Channel (n) Status and Control (TPM1_C1SC)
#define TPM1_C1V                      (*((volatile uint32_t *)0x4003902C))      // Channel (n) Value (TPM1_C1V)
#define TPM1_C2SC                     (*((volatile uint32_t *)0x40039030))      // Channel (n) Status and Control (TPM1_C2SC)
#define TPM1_C2V                      (*((volatile uint32_t *)0x40039034))      // Channel (n) Value (TPM1_C2V)
#define TPM1_C3SC                     (*((volatile uint32_t *)0x40039038))      // Channel (n) Status and Control (TPM1_C3SC)
#define TPM1_C3V                      (*((volatile uint32_t *)0x4003903C))      // Channel (n) Value (TPM1_C3V)
#define TPM1_C4SC                     (*((volatile uint32_t *)0x40039040))      // Channel (n) Status and Control (TPM1_C4SC)
#define TPM1_C4V                      (*((volatile uint32_t *)0x40039044))      // Channel (n) Value (TPM1_C4V)
#define TPM1_C5SC                     (*((volatile uint32_t *)0x40039048))      // Channel (n) Status and Control (TPM1_C5SC)
#define TPM1_C5V                      (*((volatile uint32_t *)0x4003904C))      // Channel (n) Value (TPM1_C5V)
#define TPM1_COMBINE                  (*((volatile uint32_t *)0x40039064))      // Combine Channel Register (TPM1_COMBINE)
#define TPM1_TRIG                     (*((volatile uint32_t *)0x4003906C))      // Channel Trigger (TPM1_TRIG)
#define TPM1_POL                      (*((volatile uint32_t *)0x40039070))      // Channel Polarity (TPM1_POL)
#define TPM1_FILTER                   (*((volatile uint32_t *)0x40039078))      // Filter Control (TPM1_FILTER)
#define TPM1_QDCTRL                   (*((volatile uint32_t *)0x40039080))      // Quadrature Decoder Control and Status (TPM1_QDCTRL)
#define TPM1_CONF                     (*((volatile uint32_t *)0x40039084))      // Configuration (TPM1_CONF)
#define TPM2_VERID                    (*((volatile uint32_t *)0x4003A000))      // Version ID Register (TPM2_VERID)
#define TPM2_PARAM                    (*((volatile uint32_t *)0x4003A004))      // Parameter Register (TPM2_PARAM)
#define TPM2_GLOBAL                   (*((volatile uint32_t *)0x4003A008))      // TPM Global Register (TPM2_GLOBAL)
#define TPM2_SC                       (*((volatile uint32_t *)0x4003A010))      // Status and Control (TPM2_SC)
#define TPM2_CNT                      (*((volatile uint32_t *)0x4003A014))      // Counter (TPM2_CNT)
#define TPM2_MOD                      (*((volatile uint32_t *)0x4003A018))      // Modulo (TPM2_MOD)
#define TPM2_STATUS                   (*((volatile uint32_t *)0x4003A01C))      // Capture and Compare Status (TPM2_STATUS)
#define TPM2_C0SC                     (*((volatile uint32_t *)0x4003A020))      // Channel (n) Status and Control (TPM2_C0SC)
#define TPM2_C0V                      (*((volatile uint32_t *)0x4003A024))      // Channel (n) Value (TPM2_C0V)
#define TPM2_C1SC                     (*((volatile uint32_t *)0x4003A028))      // Channel (n) Status and Control (TPM2_C1SC)
#define TPM2_C1V                      (*((volatile uint32_t *)0x4003A02C))      // Channel (n) Value (TPM2_C1V)
#define TPM2_C2SC                     (*((volatile uint32_t *)0x4003A030))      // Channel (n) Status and Control (TPM2_C2SC)
#define TPM2_C2V                      (*((volatile uint32_t *)0x4003A034))      // Channel (n) Value (TPM2_C2V)
#define TPM2_C3SC                     (*((volatile uint32_t *)0x4003A038))      // Channel (n) Status and Control (TPM2_C3SC)
#define TPM2_C3V                      (*((volatile uint32_t *)0x4003A03C))      // Channel (n) Value (TPM2_C3V)
#define TPM2_C4SC                     (*((volatile uint32_t *)0x4003A040))      // Channel (n) Status and Control (TPM2_C4SC)
#define TPM2_C4V                      (*((volatile uint32_t *)0x4003A044))      // Channel (n) Value (TPM2_C4V)
#define TPM2_C5SC                     (*((volatile uint32_t *)0x4003A048))      // Channel (n) Status and Control (TPM2_C5SC)
#define TPM2_C5V                      (*((volatile uint32_t *)0x4003A04C))      // Channel (n) Value (TPM2_C5V)
#define TPM2_COMBINE                  (*((volatile uint32_t *)0x4003A064))      // Combine Channel Register (TPM2_COMBINE)
#define TPM2_TRIG                     (*((volatile uint32_t *)0x4003A06C))      // Channel Trigger (TPM2_TRIG)
#define TPM2_POL                      (*((volatile uint32_t *)0x4003A070))      // Channel Polarity (TPM2_POL)
#define TPM2_FILTER                   (*((volatile uint32_t *)0x4003A078))      // Filter Control (TPM2_FILTER)
#define TPM2_QDCTRL                   (*((volatile uint32_t *)0x4003A080))      // Quadrature Decoder Control and Status (TPM2_QDCTRL)
#define TPM2_CONF                     (*((volatile uint32_t *)0x4003A084))      // Configuration (TPM2_CONF)


//*****************************************************************************
//
// Periodic Interrupt Timer (PIT) registers
//
//*****************************************************************************

#define PIT_MCR                       (*((volatile uint32_t *)0x40037000))      // PIT Module Control Register
#define PIT_LTMR64H                   (*((volatile uint32_t *)0x400370E0))      // PIT Upper Lifetime Timer Register
#define PIT_LTMR64L                   (*((volatile uint32_t *)0x400370E4))      // PIT Lower Lifetime Timer Register
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
// Low Power Timer (LPTMR) registers
//
//*****************************************************************************

#define LPTMR0_CSR                    (*((volatile uint32_t *)0x40040000))      // Low Power Timer Control Status Register (LPTMR0_CSR)
#define LPTMR0_PSR                    (*((volatile uint32_t *)0x40040004))      // Low Power Timer Prescale Register (LPTMR0_PSR)
#define LPTMR0_CMR                    (*((volatile uint32_t *)0x40040008))      // Low Power Timer Compare Register (LPTMR0_CMR)
#define LPTMR0_CNR                    (*((volatile uint32_t *)0x4004000C))      // Low Power Timer Counter Register (LPTMR0_CNR)


//*****************************************************************************
//
// Real Time Clock (RTC) registers
//
//*****************************************************************************

#define RTC_TSR                       (*((volatile uint32_t *)0x4003D000))      // RTC Time Seconds Register
#define RTC_TPR                       (*((volatile uint32_t *)0x4003D004))      // RTC Time Prescaler Register
#define RTC_TAR                       (*((volatile uint32_t *)0x4003D008))      // RTC Time Alarm Register
#define RTC_TCR                       (*((volatile uint32_t *)0x4003D00C))      // RTC Time Compensation Register
#define RTC_CR                        (*((volatile uint32_t *)0x4003D010))      // RTC Control Register
#define RTC_SR                        (*((volatile uint32_t *)0x4003D014))      // RTC Status Register
#define RTC_LR                        (*((volatile uint32_t *)0x4003D018))      // RTC Lock Register
#define RTC_IER                       (*((volatile uint32_t *)0x4003D01C))      // RTC Interrupt Enable Register
#define RTC_WAR                       (*((volatile uint32_t *)0x4003D800))      // RTC Write Access Register
#define RTC_RAR                       (*((volatile uint32_t *)0x4003D804))      // RTC Read Access Register


//*****************************************************************************
//
// Universal Serial Bus Full Speed OTG Controller (USBFSOTG) registers
//
//*****************************************************************************

#define USB0_PERID                    (*((volatile uint32_t *)0x40072000))      // Peripheral ID register (USB0_PERID)
#define USB0_IDCOMP                   (*((volatile uint32_t *)0x40072004))      // Peripheral ID Complement register (USB0_IDCOMP)
#define USB0_REV                      (*((volatile uint32_t *)0x40072008))      // Peripheral Revision register (USB0_REV)
#define USB0_ADDINFO                  (*((volatile uint32_t *)0x4007200C))      // Peripheral Additional Info register (USB0_ADDINFO)
#define USB0_OTGISTAT                 (*((volatile uint32_t *)0x40072010))      // OTG Interrupt Status register (USB0_OTGISTAT)
#define USB0_OTGICR                   (*((volatile uint32_t *)0x40072014))      // OTG Interrupt Control register (USB0_OTGICR)
#define USB0_OTGSTAT                  (*((volatile uint32_t *)0x40072018))      // OTG Status register (USB0_OTGSTAT)
#define USB0_OTGCTL                   (*((volatile uint32_t *)0x4007201C))      // PROCESS PHOTG Control register (USB0_OTGCTL)
#define USB0_ISTAT                    (*((volatile uint32_t *)0x40072080))      // Interrupt Status register (USB0_ISTAT)
#define USB0_INTEN                    (*((volatile uint32_t *)0x40072084))      // Interrupt Enable register (USB0_INTEN)
#define USB0_ERRSTAT                  (*((volatile uint32_t *)0x40072088))      // Error Interrupt Status register (USB0_ERRSTAT)
#define USB0_ERREN                    (*((volatile uint32_t *)0x4007208C))      // Error Interrupt Enable register (USB0_ERREN)
#define USB0_STAT                     (*((volatile uint32_t *)0x40072090))      // Status register (USB0_STAT)
#define USB0_CTL                      (*((volatile uint32_t *)0x40072094))      // Control register (USB0_CTL)
#define USB0_ADDR                     (*((volatile uint32_t *)0x40072098))      // Address register (USB0_ADDR)
#define USB0_BDTPAGE1                 (*((volatile uint32_t *)0x4007209C))      // BDT Page register 1 (USB0_BDTPAGE1)
#define USB0_FRMNUML                  (*((volatile uint32_t *)0x400720A0))      // Frame Number register Low (USB0_FRMNUML)
#define USB0_FRMNUMH                  (*((volatile uint32_t *)0x400720A4))      // Frame Number register High (USB0_FRMNUMH)
#define USB0_TOKEN                    (*((volatile uint32_t *)0x400720A8))      // Token register (USB0_TOKEN)
#define USB0_SOFTHLD                  (*((volatile uint32_t *)0x400720AC))      // SOF Threshold register (USB0_SOFTHLD)
#define USB0_BDTPAGE2                 (*((volatile uint32_t *)0x400720B0))      // BDT Page Register 2 (USB0_BDTPAGE2)
#define USB0_BDTPAGE3                 (*((volatile uint32_t *)0x400720B4))      // BDT Page Register 3 (USB0_BDTPAGE3)
#define USB0_ENDPT0                   (*((volatile uint32_t *)0x400720C0))      // Endpoint Control register (USB0_ENDPT0)
#define USB0_ENDPT1                   (*((volatile uint32_t *)0x400720C4))      // Endpoint Control register (USB0_ENDPT1)
#define USB0_ENDPT2                   (*((volatile uint32_t *)0x400720C8))      // Endpoint Control register (USB0_ENDPT2)
#define USB0_ENDPT3                   (*((volatile uint32_t *)0x400720CC))      // Endpoint Control register (USB0_ENDPT3)
#define USB0_ENDPT4                   (*((volatile uint32_t *)0x400720D0))      // Endpoint Control register (USB0_ENDPT4)
#define USB0_ENDPT5                   (*((volatile uint32_t *)0x400720D4))      // Endpoint Control register (USB0_ENDPT5)
#define USB0_ENDPT6                   (*((volatile uint32_t *)0x400720D8))      // Endpoint Control register (USB0_ENDPT6)
#define USB0_ENDPT7                   (*((volatile uint32_t *)0x400720DC))      // Endpoint Control register (USB0_ENDPT7)
#define USB0_ENDPT8                   (*((volatile uint32_t *)0x400720E0))      // Endpoint Control register (USB0_ENDPT8)
#define USB0_ENDPT9                   (*((volatile uint32_t *)0x400720E4))      // Endpoint Control register (USB0_ENDPT9)
#define USB0_ENDPT10                  (*((volatile uint32_t *)0x400720E8))      // Endpoint Control register (USB0_ENDPT10)
#define USB0_ENDPT11                  (*((volatile uint32_t *)0x400720EC))      // Endpoint Control register (USB0_ENDPT11)
#define USB0_ENDPT12                  (*((volatile uint32_t *)0x400720F0))      // Endpoint Control register (USB0_ENDPT12)
#define USB0_ENDPT13                  (*((volatile uint32_t *)0x400720F4))      // Endpoint Control register (USB0_ENDPT13)
#define USB0_ENDPT14                  (*((volatile uint32_t *)0x400720F8))      // Endpoint Control register (USB0_ENDPT14)
#define USB0_ENDPT15                  (*((volatile uint32_t *)0x400720FC))      // Endpoint Control register (USB0_ENDPT15)
#define USB0_USBCTRL                  (*((volatile uint32_t *)0x40072100))      // USB Control register (USB0_USBCTRL)
#define USB0_OBSERVE                  (*((volatile uint32_t *)0x40072104))      // USB OTG Observe register (USB0_OBSERVE)
#define USB0_CONTROL                  (*((volatile uint32_t *)0x40072108))      // USB OTG Control register (USB0_CONTROL)
#define USB0_USBTRC0                  (*((volatile uint32_t *)0x4007210C))      // USB Transceiver Control register 0 (USB0_USBTRC0)
#define USB0_USBFRMADJUST             (*((volatile uint32_t *)0x40072114))      // Frame Adjust Register (USB0_USBFRMADJUST)
#define USB0_MISCCTRL                 (*((volatile uint32_t *)0x4007212C))      // Miscellaneous Control register (USB0_MISCCTRL)
#define USB0_STALL_IL_DIS             (*((volatile uint32_t *)0x40072130))      // Peripheral mode stall disable for endpoints 7 to 0 in IN direction (USB0_STALL_IL_DIS)
#define USB0_STALL_IH_DIS             (*((volatile uint32_t *)0x40072134))      // Peripheral mode stall disable for endpoints 15 to 8 in IN direction (USB0_STALL_IH_DIS)
#define USB0_STALL_OL_DIS             (*((volatile uint32_t *)0x40072138))      // Peripheral mode stall disable for endpoints 7 to 0 in OUT direction (USB0_STALL_OL_DIS)
#define USB0_STALL_OH_DIS             (*((volatile uint32_t *)0x4007213C))      // Peripheral mode stall disable for endpoints 15 to 8 in OUT direction (USB0_STALL_OH_DIS)
#define USB0_CLK_RECOVER_CTRL         (*((volatile uint32_t *)0x40072140))      // USB Clock recovery control (USB0_CLK_RECOVER_CTRL)
#define USB0_CLK_RECOVER_IRC_EN       (*((volatile uint32_t *)0x40072144))      // PROCESS PHIRC48M oscillator enable register (USB0_CLK_RECOVER_IRC_EN)
#define USB0_CLK_RECOVER_INT_EN       (*((volatile uint32_t *)0x40072154))      // Clock recovery combined interrupt enable (USB0_CLK_RECOVER_INT_EN)
#define USB0_CLK_RECOVER_INT_STATUS   (*((volatile uint32_t *)0x4007215C))      // Clock recovery separated interrupt status (USB0_CLK_RECOVER_INT_STATUS)


//*****************************************************************************
//
// CAN (FlexCAN) registers
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
#define SPI1_MCR                      (*((volatile uint32_t *)0x4002D000))      // Module Configuration Register
#define SPI1_TCR                      (*((volatile uint32_t *)0x4002D008))      // Transfer Count Register
#define SPI1_CTAR0                    (*((volatile uint32_t *)0x4002D00C))      // Clock and Transfer Attributes Register (In Master Mode)
#define SPI1_CTAR0_SLAVE              (*((volatile uint32_t *)0x4002D00C))      // Clock and Transfer Attributes Register (In Slave Mode)
#define SPI1_CTAR1                    (*((volatile uint32_t *)0x4002D010))      // Clock and Transfer Attributes Register (In Master Mode)
#define SPI1_SR                       (*((volatile uint32_t *)0x4002D02C))      // Status Register
#define SPI1_RSER                     (*((volatile uint32_t *)0x4002D030))      // DMA/Interrupt Request Select and Enable Register
#define SPI1_PUSHR                    (*((volatile uint32_t *)0x4002D034))      // PUSH TX FIFO Register In Master Mode
#define SPI1_PUSHR_SLAVE              (*((volatile uint32_t *)0x4002D034))      // PUSH TX FIFO Register In Slave Mode
#define SPI1_POPR                     (*((volatile uint32_t *)0x4002D038))      // POP RX FIFO Register
#define SPI1_TXFR0                    (*((volatile uint32_t *)0x4002D03C))      // Transmit FIFO Registers
#define SPI1_TXFR1                    (*((volatile uint32_t *)0x4002D040))      // Transmit FIFO Registers
#define SPI1_TXFR2                    (*((volatile uint32_t *)0x4002D044))      // Transmit FIFO Registers
#define SPI1_TXFR3                    (*((volatile uint32_t *)0x4002D048))      // Transmit FIFO Registers
#define SPI1_RXFR0                    (*((volatile uint32_t *)0x4002D07C))      // Receive FIFO Registers
#define SPI1_RXFR1                    (*((volatile uint32_t *)0x4002D080))      // Receive FIFO Registers
#define SPI1_RXFR2                    (*((volatile uint32_t *)0x4002D084))      // Receive FIFO Registers
#define SPI1_RXFR3                    (*((volatile uint32_t *)0x4002D088))      // Receive FIFO Registers


//*****************************************************************************
//
// Low Power Inter-Integrated Circuit (LPI2C) registers
//
//*****************************************************************************

#define LPI2C0_VERID                  (*((volatile uint32_t *)0x40066000))      // Version ID Register
#define LPI2C0_PARAM                  (*((volatile uint32_t *)0x40066004))      // Parameter Register
#define LPI2C0_MCR                    (*((volatile uint32_t *)0x40066010))      // Master Control Register
#define LPI2C0_MSR                    (*((volatile uint32_t *)0x40066014))      // Master Status Register
#define LPI2C0_MIER                   (*((volatile uint32_t *)0x40066018))      // Master Interrupt Enable Register
#define LPI2C0_MDER                   (*((volatile uint32_t *)0x4006601C))      // Master DMA Enable Register
#define LPI2C0_MCFGR0                 (*((volatile uint32_t *)0x40066020))      // Master Configuration Register 0
#define LPI2C0_MCFGR1                 (*((volatile uint32_t *)0x40066024))      // Master Configuration Register 1
#define LPI2C0_MCFGR2                 (*((volatile uint32_t *)0x40066028))      // Master Configuration Register 2
#define LPI2C0_MCFGR3                 (*((volatile uint32_t *)0x4006602C))      // Master Configuration Register 3
#define LPI2C0_MDMR                   (*((volatile uint32_t *)0x40066040))      // Master Data Match Register
#define LPI2C0_MCCR0                  (*((volatile uint32_t *)0x40066048))      // Master Clock Configuration Register 0
#define LPI2C0_MCCR1                  (*((volatile uint32_t *)0x40066050))      // Master Clock Configuration Register 1
#define LPI2C0_MFCR                   (*((volatile uint32_t *)0x40066058))      // Master FIFO Control Register
#define LPI2C0_MFSR                   (*((volatile uint32_t *)0x4006605C))      // Master FIFO Status Register
#define LPI2C0_MTDR                   (*((volatile uint32_t *)0x40066060))      // Master Transmit Data Register
#define LPI2C0_MRDR                   (*((volatile uint32_t *)0x40066070))      // Master Receive Data Register
#define LPI2C0_SCR                    (*((volatile uint32_t *)0x40066110))      // Slave Control Register
#define LPI2C0_SSR                    (*((volatile uint32_t *)0x40066114))      // Slave Status Register
#define LPI2C0_SIER                   (*((volatile uint32_t *)0x40066118))      // Slave Interrupt Enable Register
#define LPI2C0_SDER                   (*((volatile uint32_t *)0x4006611C))      // Slave DMA Enable Register
#define LPI2C0_SCFGR1                 (*((volatile uint32_t *)0x40066124))      // Slave Configuration Register 1
#define LPI2C0_SCFGR2                 (*((volatile uint32_t *)0x40066128))      // Slave Configuration Register 2
#define LPI2C0_SAMR                   (*((volatile uint32_t *)0x40066140))      // Slave Address Match Register
#define LPI2C0_SASR                   (*((volatile uint32_t *)0x40066150))      // Slave Address Status Register
#define LPI2C0_STAR                   (*((volatile uint32_t *)0x40066154))      // Slave Transmit ACK Register
#define LPI2C0_STDR                   (*((volatile uint32_t *)0x40066160))      // Slave Transmit Data Register
#define LPI2C0_SRDR                   (*((volatile uint32_t *)0x40066170))      // Slave Receive Data Register
#define LPI2C1_VERID                  (*((volatile uint32_t *)0x40067000))      // Version ID Register
#define LPI2C1_PARAM                  (*((volatile uint32_t *)0x40067004))      // Parameter Register
#define LPI2C1_MCR                    (*((volatile uint32_t *)0x40067010))      // Master Control Register
#define LPI2C1_MSR                    (*((volatile uint32_t *)0x40067014))      // Master Status Register
#define LPI2C1_MIER                   (*((volatile uint32_t *)0x40067018))      // Master Interrupt Enable Register
#define LPI2C1_MDER                   (*((volatile uint32_t *)0x4006701C))      // Master DMA Enable Register
#define LPI2C1_MCFGR0                 (*((volatile uint32_t *)0x40067020))      // Master Configuration Register 0
#define LPI2C1_MCFGR1                 (*((volatile uint32_t *)0x40067024))      // Master Configuration Register 1
#define LPI2C1_MCFGR2                 (*((volatile uint32_t *)0x40067028))      // Master Configuration Register 2
#define LPI2C1_MCFGR3                 (*((volatile uint32_t *)0x4006702C))      // Master Configuration Register 3
#define LPI2C1_MDMR                   (*((volatile uint32_t *)0x40067040))      // Master Data Match Register
#define LPI2C1_MCCR0                  (*((volatile uint32_t *)0x40067048))      // Master Clock Configuration Register 0
#define LPI2C1_MCCR1                  (*((volatile uint32_t *)0x40067050))      // Master Clock Configuration Register 1
#define LPI2C1_MFCR                   (*((volatile uint32_t *)0x40067058))      // Master FIFO Control Register
#define LPI2C1_MFSR                   (*((volatile uint32_t *)0x4006705C))      // Master FIFO Status Register
#define LPI2C1_MTDR                   (*((volatile uint32_t *)0x40067060))      // Master Transmit Data Register
#define LPI2C1_MRDR                   (*((volatile uint32_t *)0x40067070))      // Master Receive Data Register
#define LPI2C1_SCR                    (*((volatile uint32_t *)0x40067110))      // Slave Control Register
#define LPI2C1_SSR                    (*((volatile uint32_t *)0x40067114))      // Slave Status Register
#define LPI2C1_SIER                   (*((volatile uint32_t *)0x40067118))      // Slave Interrupt Enable Register
#define LPI2C1_SDER                   (*((volatile uint32_t *)0x4006711C))      // Slave DMA Enable Register
#define LPI2C1_SCFGR1                 (*((volatile uint32_t *)0x40067124))      // Slave Configuration Register 1
#define LPI2C1_SCFGR2                 (*((volatile uint32_t *)0x40067128))      // Slave Configuration Register 2
#define LPI2C1_SAMR                   (*((volatile uint32_t *)0x40067140))      // Slave Address Match Register
#define LPI2C1_SASR                   (*((volatile uint32_t *)0x40067150))      // Slave Address Status Register
#define LPI2C1_STAR                   (*((volatile uint32_t *)0x40067154))      // Slave Transmit ACK Register
#define LPI2C1_STDR                   (*((volatile uint32_t *)0x40067160))      // Slave Transmit Data Register
#define LPI2C1_SRDR                   (*((volatile uint32_t *)0x40067170))      // Slave Receive Data Register


//*****************************************************************************
//
// Universal Asynchronous Receiver/Transmitter (UART) registers
//
//*****************************************************************************

#define UART0_BDH                     (*((volatile uint32_t *)0x4006A000))      // UART Baud Rate Registers: High (UART0_BDH)
#define UART0_BDL                     (*((volatile uint32_t *)0x4006A001))      // UART Baud Rate Registers: Low (UART0_BDL)
#define UART0_C1                      (*((volatile uint32_t *)0x4006A002))      // UART Control Register 1 (UART0_C1)
#define UART0_C2                      (*((volatile uint32_t *)0x4006A003))      // UART Control Register 2 (UART0_C2)
#define UART0_S1                      (*((volatile uint32_t *)0x4006A004))      // UART Status Register 1 (UART0_S1)
#define UART0_S2                      (*((volatile uint32_t *)0x4006A005))      // UART Status Register 2 (UART0_S2)
#define UART0_C3                      (*((volatile uint32_t *)0x4006A006))      // UART Control Register 3 (UART0_C3)
#define UART0_D                       (*((volatile uint32_t *)0x4006A007))      // UART Data Register (UART0_D)
#define UART0_MA1                     (*((volatile uint32_t *)0x4006A008))      // UART Match Address Registers 1 (UART0_MA1)
#define UART0_MA2                     (*((volatile uint32_t *)0x4006A009))      // UART Match Address Registers 2 (UART0_MA2)
#define UART0_C4                      (*((volatile uint32_t *)0x4006A00A))      // UART Control Register 4 (UART0_C4)
#define UART0_C5                      (*((volatile uint32_t *)0x4006A00B))      // UART Control Register 5 (UART0_C5)
#define UART0_ED                      (*((volatile uint32_t *)0x4006A00C))      // UART Extended Data Register (UART0_ED)
#define UART0_MODEM                   (*((volatile uint32_t *)0x4006A00D))      // UART Modem Register (UART0_MODEM)
#define UART0_IR                      (*((volatile uint32_t *)0x4006A00E))      // UART Infrared Register (UART0_IR)
#define UART0_PFIFO                   (*((volatile uint32_t *)0x4006A010))      // UART FIFO Parameters (UART0_PFIFO)
#define UART0_CFIFO                   (*((volatile uint32_t *)0x4006A011))      // UART FIFO Control Register (UART0_CFIFO)
#define UART0_SFIFO                   (*((volatile uint32_t *)0x4006A012))      // UART FIFO Status Register (UART0_SFIFO)
#define UART0_TWFIFO                  (*((volatile uint32_t *)0x4006A013))      // UART FIFO Transmit Watermark (UART0_TWFIFO)
#define UART0_TCFIFO                  (*((volatile uint32_t *)0x4006A014))      // UART FIFO Transmit Count (UART0_TCFIFO)
#define UART0_RWFIFO                  (*((volatile uint32_t *)0x4006A015))      // UART FIFO Receive Watermark (UART0_RWFIFO)
#define UART0_RCFIFO                  (*((volatile uint32_t *)0x4006A016))      // UART FIFO Receive Count (UART0_RCFIFO)
#define UART0_C7816                   (*((volatile uint32_t *)0x4006A018))      // UART 7816 Control Register (UART0_C7816)
#define UART0_IE7816                  (*((volatile uint32_t *)0x4006A019))      // UART 7816 Interrupt Enable Register (UART0_IE7816)
#define UART0_IS7816                  (*((volatile uint32_t *)0x4006A01A))      // UART 7816 Interrupt Status Register (UART0_IS7816)
#define UART0_WP7816                  (*((volatile uint32_t *)0x4006A01B))      // UART 7816 Wait Parameter Register (UART0_WP7816)
#define UART0_WN7816                  (*((volatile uint32_t *)0x4006A01C))      // UART 7816 Wait N Register (UART0_WN7816)
#define UART0_WF7816                  (*((volatile uint32_t *)0x4006A01D))      // UART 7816 Wait FD Register (UART0_WF7816)
#define UART0_ET7816                  (*((volatile uint32_t *)0x4006A01E))      // UART 7816 Error Threshold Register (UART0_ET7816)
#define UART0_TL7816                  (*((volatile uint32_t *)0x4006A01F))      // UART 7816 Transmit Length Register (UART0_TL7816)
#define UART0_AP7816A_T0              (*((volatile uint32_t *)0x4006A03A))      // UART 7816 ATR Duration Timer Register A (UART0_AP7816A_T0)
#define UART0_AP7816B_T0              (*((volatile uint32_t *)0x4006A03B))      // UART 7816 ATR Duration Timer Register B (UART0_AP7816B_T0)
#define UART0_WP7816A_T0              (*((volatile uint32_t *)0x4006A03C))      // UART 7816 Wait Parameter Register A (UART0_WP7816A_T0)
#define UART0_WP7816A_T1              (*((volatile uint32_t *)0x4006A03C))      // UART 7816 Wait Parameter Register A (UART0_WP7816A_T1)
#define UART0_WP7816B_T0              (*((volatile uint32_t *)0x4006A03D))      // UART 7816 Wait Parameter Register B (UART0_WP7816B_T0)
#define UART0_WP7816B_T1              (*((volatile uint32_t *)0x4006A03D))      // UART 7816 Wait Parameter Register B (UART0_WP7816B_T1)
#define UART0_WGP7816_T1              (*((volatile uint32_t *)0x4006A03E))      // UART 7816 Wait and Guard Parameter Register (UART0_WGP7816_T1)
#define UART0_WP7816C_T1              (*((volatile uint32_t *)0x4006A03F))      // UART 7816 Wait Parameter Register C (UART0_WP7816C_T1)
#define UART1_BDH                     (*((volatile uint32_t *)0x4006B000))      // UART Baud Rate Registers: High (UART1_BDH)
#define UART1_BDL                     (*((volatile uint32_t *)0x4006B001))      // UART Baud Rate Registers: Low (UART1_BDL)
#define UART1_C1                      (*((volatile uint32_t *)0x4006B002))      // UART Control Register 1 (UART1_C1)
#define UART1_C2                      (*((volatile uint32_t *)0x4006B003))      // UART Control Register 2 (UART1_C2)
#define UART1_S1                      (*((volatile uint32_t *)0x4006B004))      // UART Status Register 1 (UART1_S1)
#define UART1_S2                      (*((volatile uint32_t *)0x4006B005))      // UART Status Register 2 (UART1_S2)
#define UART1_C3                      (*((volatile uint32_t *)0x4006B006))      // UART Control Register 3 (UART1_C3)
#define UART1_D                       (*((volatile uint32_t *)0x4006B007))      // UART Data Register (UART1_D)
#define UART1_MA1                     (*((volatile uint32_t *)0x4006B008))      // UART Match Address Registers 1 (UART1_MA1)
#define UART1_MA2                     (*((volatile uint32_t *)0x4006B009))      // UART Match Address Registers 2 (UART1_MA2)
#define UART1_C4                      (*((volatile uint32_t *)0x4006B00A))      // UART Control Register 4 (UART1_C4)
#define UART1_C5                      (*((volatile uint32_t *)0x4006B00B))      // UART Control Register 5 (UART1_C5)
#define UART1_ED                      (*((volatile uint32_t *)0x4006B00C))      // UART Extended Data Register (UART1_ED)
#define UART1_MODEM                   (*((volatile uint32_t *)0x4006B00D))      // UART Modem Register (UART1_MODEM)
#define UART1_IR                      (*((volatile uint32_t *)0x4006B00E))      // UART Infrared Register (UART1_IR)
#define UART1_PFIFO                   (*((volatile uint32_t *)0x4006B010))      // UART FIFO Parameters (UART1_PFIFO)
#define UART1_CFIFO                   (*((volatile uint32_t *)0x4006B011))      // UART FIFO Control Register (UART1_CFIFO)
#define UART1_SFIFO                   (*((volatile uint32_t *)0x4006B012))      // UART FIFO Status Register (UART1_SFIFO)
#define UART1_TWFIFO                  (*((volatile uint32_t *)0x4006B013))      // UART FIFO Transmit Watermark (UART1_TWFIFO)
#define UART1_TCFIFO                  (*((volatile uint32_t *)0x4006B014))      // UART FIFO Transmit Count (UART1_TCFIFO)
#define UART1_RWFIFO                  (*((volatile uint32_t *)0x4006B015))      // UART FIFO Receive Watermark (UART1_RWFIFO)
#define UART1_RCFIFO                  (*((volatile uint32_t *)0x4006B016))      // UART FIFO Receive Count (UART1_RCFIFO)
#define UART1_C7816                   (*((volatile uint32_t *)0x4006B018))      // UART 7816 Control Register (UART1_C7816)
#define UART1_IE7816                  (*((volatile uint32_t *)0x4006B019))      // UART 7816 Interrupt Enable Register (UART1_IE7816)
#define UART1_IS7816                  (*((volatile uint32_t *)0x4006B01A))      // UART 7816 Interrupt Status Register (UART1_IS7816)
#define UART1_WP7816                  (*((volatile uint32_t *)0x4006B01B))      // UART 7816 Wait Parameter Register (UART1_WP7816)
#define UART1_WN7816                  (*((volatile uint32_t *)0x4006B01C))      // UART 7816 Wait N Register (UART1_WN7816)
#define UART1_WF7816                  (*((volatile uint32_t *)0x4006B01D))      // UART 7816 Wait FD Register (UART1_WF7816)
#define UART1_ET7816                  (*((volatile uint32_t *)0x4006B01E))      // UART 7816 Error Threshold Register (UART1_ET7816)
#define UART1_TL7816                  (*((volatile uint32_t *)0x4006B01F))      // UART 7816 Transmit Length Register (UART1_TL7816)
#define UART1_AP7816A_T0              (*((volatile uint32_t *)0x4006B03A))      // UART 7816 ATR Duration Timer Register A (UART1_AP7816A_T0)
#define UART1_AP7816B_T0              (*((volatile uint32_t *)0x4006B03B))      // UART 7816 ATR Duration Timer Register B (UART1_AP7816B_T0)
#define UART1_WP7816A_T0              (*((volatile uint32_t *)0x4006B03C))      // UART 7816 Wait Parameter Register A (UART1_WP7816A_T0)
#define UART1_WP7816A_T1              (*((volatile uint32_t *)0x4006B03C))      // UART 7816 Wait Parameter Register A (UART1_WP7816A_T1)
#define UART1_WP7816B_T0              (*((volatile uint32_t *)0x4006B03D))      // UART 7816 Wait Parameter Register B (UART1_WP7816B_T0)
#define UART1_WP7816B_T1              (*((volatile uint32_t *)0x4006B03D))      // UART 7816 Wait Parameter Register B (UART1_WP7816B_T1)
#define UART1_WGP7816_T1              (*((volatile uint32_t *)0x4006B03E))      // UART 7816 Wait and Guard Parameter Register (UART1_WGP7816_T1)
#define UART1_WP7816C_T1              (*((volatile uint32_t *)0x4006B03F))      // UART 7816 Wait Parameter Register C (UART1_WP7816C_T1)
#define UART2_BDH                     (*((volatile uint32_t *)0x4006C000))      // UART Baud Rate Registers: High (UART2_BDH)
#define UART2_BDL                     (*((volatile uint32_t *)0x4006C001))      // UART Baud Rate Registers: Low (UART2_BDL)
#define UART2_C1                      (*((volatile uint32_t *)0x4006C002))      // UART Control Register 1 (UART2_C1)
#define UART2_C2                      (*((volatile uint32_t *)0x4006C003))      // UART Control Register 2 (UART2_C2)
#define UART2_S1                      (*((volatile uint32_t *)0x4006C004))      // UART Status Register 1 (UART2_S1)
#define UART2_S2                      (*((volatile uint32_t *)0x4006C005))      // UART Status Register 2 (UART2_S2)
#define UART2_C3                      (*((volatile uint32_t *)0x4006C006))      // UART Control Register 3 (UART2_C3)
#define UART2_D                       (*((volatile uint32_t *)0x4006C007))      // UART Data Register (UART2_D)
#define UART2_MA1                     (*((volatile uint32_t *)0x4006C008))      // UART Match Address Registers 1 (UART2_MA1)
#define UART2_MA2                     (*((volatile uint32_t *)0x4006C009))      // UART Match Address Registers 2 (UART2_MA2)
#define UART2_C4                      (*((volatile uint32_t *)0x4006C00A))      // UART Control Register 4 (UART2_C4)
#define UART2_C5                      (*((volatile uint32_t *)0x4006C00B))      // UART Control Register 5 (UART2_C5)
#define UART2_ED                      (*((volatile uint32_t *)0x4006C00C))      // UART Extended Data Register (UART2_ED)
#define UART2_MODEM                   (*((volatile uint32_t *)0x4006C00D))      // UART Modem Register (UART2_MODEM)
#define UART2_IR                      (*((volatile uint32_t *)0x4006C00E))      // UART Infrared Register (UART2_IR)
#define UART2_PFIFO                   (*((volatile uint32_t *)0x4006C010))      // UART FIFO Parameters (UART2_PFIFO)
#define UART2_CFIFO                   (*((volatile uint32_t *)0x4006C011))      // UART FIFO Control Register (UART2_CFIFO)
#define UART2_SFIFO                   (*((volatile uint32_t *)0x4006C012))      // UART FIFO Status Register (UART2_SFIFO)
#define UART2_TWFIFO                  (*((volatile uint32_t *)0x4006C013))      // UART FIFO Transmit Watermark (UART2_TWFIFO)
#define UART2_TCFIFO                  (*((volatile uint32_t *)0x4006C014))      // UART FIFO Transmit Count (UART2_TCFIFO)
#define UART2_RWFIFO                  (*((volatile uint32_t *)0x4006C015))      // UART FIFO Receive Watermark (UART2_RWFIFO)
#define UART2_RCFIFO                  (*((volatile uint32_t *)0x4006C016))      // UART FIFO Receive Count (UART2_RCFIFO)
#define UART2_C7816                   (*((volatile uint32_t *)0x4006C018))      // UART 7816 Control Register (UART2_C7816)
#define UART2_IE7816                  (*((volatile uint32_t *)0x4006C019))      // UART 7816 Interrupt Enable Register (UART2_IE7816)
#define UART2_IS7816                  (*((volatile uint32_t *)0x4006C01A))      // UART 7816 Interrupt Status Register (UART2_IS7816)
#define UART2_WP7816                  (*((volatile uint32_t *)0x4006C01B))      // UART 7816 Wait Parameter Register (UART2_WP7816)
#define UART2_WN7816                  (*((volatile uint32_t *)0x4006C01C))      // UART 7816 Wait N Register (UART2_WN7816)
#define UART2_WF7816                  (*((volatile uint32_t *)0x4006C01D))      // UART 7816 Wait FD Register (UART2_WF7816)
#define UART2_ET7816                  (*((volatile uint32_t *)0x4006C01E))      // UART 7816 Error Threshold Register (UART2_ET7816)
#define UART2_TL7816                  (*((volatile uint32_t *)0x4006C01F))      // UART 7816 Transmit Length Register (UART2_TL7816)
#define UART2_AP7816A_T0              (*((volatile uint32_t *)0x4006C03A))      // UART 7816 ATR Duration Timer Register A (UART2_AP7816A_T0)
#define UART2_AP7816B_T0              (*((volatile uint32_t *)0x4006C03B))      // UART 7816 ATR Duration Timer Register B (UART2_AP7816B_T0)
#define UART2_WP7816A_T0              (*((volatile uint32_t *)0x4006C03C))      // UART 7816 Wait Parameter Register A (UART2_WP7816A_T0)
#define UART2_WP7816A_T1              (*((volatile uint32_t *)0x4006C03C))      // UART 7816 Wait Parameter Register A (UART2_WP7816A_T1)
#define UART2_WP7816B_T0              (*((volatile uint32_t *)0x4006C03D))      // UART 7816 Wait Parameter Register B (UART2_WP7816B_T0)
#define UART2_WP7816B_T1              (*((volatile uint32_t *)0x4006C03D))      // UART 7816 Wait Parameter Register B (UART2_WP7816B_T1)
#define UART2_WGP7816_T1              (*((volatile uint32_t *)0x4006C03E))      // UART 7816 Wait and Guard Parameter Register (UART2_WGP7816_T1)
#define UART2_WP7816C_T1              (*((volatile uint32_t *)0x4006C03F))      // UART 7816 Wait Parameter Register C (UART2_WP7816C_T1)


//*****************************************************************************
//
// Low Power Universal Asynchronous Receiver/Transmitter (LPUART) registers
//
//*****************************************************************************

#define LPUART0_BAUD                  (*((volatile uint32_t *)0x4002A000))      // LPUART Baud Rate Register (LPUART0_BAUD)
#define LPUART0_STAT                  (*((volatile uint32_t *)0x4002A004))      // LPUART Status Register (LPUART0_STAT)
#define LPUART0_CTRL                  (*((volatile uint32_t *)0x4002A008))      // LPUART Control Register (LPUART0_CTRL)
#define LPUART0_DATA                  (*((volatile uint32_t *)0x4002A00C))      // LPUART Data Register (LPUART0_DATA)
#define LPUART0_MATCH                 (*((volatile uint32_t *)0x4002A010))      // LPUART Match Address Register (LPUART0_MATCH)
#define LPUART0_MODIR                 (*((volatile uint32_t *)0x4002A014))      // LPUART Modem IrDA Register (LPUART0_MODIR)


//*****************************************************************************
//
// Flexible I/O (FlexIO) registers
//
//*****************************************************************************

#define FLEXIO_VERID                  (*((volatile uint32_t *)0x4005F000))      // Version ID Register
#define FLEXIO_PARAM                  (*((volatile uint32_t *)0x4005F004))      // Parameter Register
#define FLEXIO_CTRL                   (*((volatile uint32_t *)0x4005F008))      // FlexIO Control Register
#define FLEXIO_PIN                    (*((volatile uint32_t *)0x4005F00C))      // Pin State Register
#define FLEXIO_SHIFTSTAT              (*((volatile uint32_t *)0x4005F010))      // Shifter Status Register
#define FLEXIO_SHIFTERR               (*((volatile uint32_t *)0x4005F014))      // Shifter Error Register
#define FLEXIO_TIMSTAT                (*((volatile uint32_t *)0x4005F018))      // Timer Status Register
#define FLEXIO_SHIFTSIEN              (*((volatile uint32_t *)0x4005F020))      // Shifter Status Interrupt Enable
#define FLEXIO_SHIFTEIEN              (*((volatile uint32_t *)0x4005F024))      // Shifter Error Interrupt Enable
#define FLEXIO_TIMIEN                 (*((volatile uint32_t *)0x4005F028))      // Timer Interrupt Enable Register
#define FLEXIO_SHIFTSDEN              (*((volatile uint32_t *)0x4005F030))      // Shifter Status DMA Enable
#define FLEXIO_SHIFTCTL0              (*((volatile uint32_t *)0x4005F080))      // Shifter Control N Register
#define FLEXIO_SHIFTCTL1              (*((volatile uint32_t *)0x4005F084))      // Shifter Control N Register
#define FLEXIO_SHIFTCTL2              (*((volatile uint32_t *)0x4005F088))      // Shifter Control N Register
#define FLEXIO_SHIFTCTL3              (*((volatile uint32_t *)0x4005F08C))      // Shifter Control N Register
#define FLEXIO_SHIFTCFG0              (*((volatile uint32_t *)0x4005F100))      // Shifter Configuration N Register
#define FLEXIO_SHIFTCFG1              (*((volatile uint32_t *)0x4005F104))      // Shifter Configuration N Register
#define FLEXIO_SHIFTCFG2              (*((volatile uint32_t *)0x4005F108))      // Shifter Configuration N Register
#define FLEXIO_SHIFTCFG3              (*((volatile uint32_t *)0x4005F10C))      // Shifter Configuration N Register
#define FLEXIO_SHIFTBUF0              (*((volatile uint32_t *)0x4005F200))      // Shifter Buffer N Register
#define FLEXIO_SHIFTBUF1              (*((volatile uint32_t *)0x4005F204))      // Shifter Buffer N Register
#define FLEXIO_SHIFTBUF2              (*((volatile uint32_t *)0x4005F208))      // Shifter Buffer N Register
#define FLEXIO_SHIFTBUF3              (*((volatile uint32_t *)0x4005F20C))      // Shifter Buffer N Register
#define FLEXIO_SHIFTBUFBIS0           (*((volatile uint32_t *)0x4005F280))      // Shifter Buffer N Bit Swapped Register
#define FLEXIO_SHIFTBUFBIS1           (*((volatile uint32_t *)0x4005F284))      // Shifter Buffer N Bit Swapped Register
#define FLEXIO_SHIFTBUFBIS2           (*((volatile uint32_t *)0x4005F288))      // Shifter Buffer N Bit Swapped Register
#define FLEXIO_SHIFTBUFBIS3           (*((volatile uint32_t *)0x4005F28C))      // Shifter Buffer N Bit Swapped Register
#define FLEXIO_SHIFTBUFBYS0           (*((volatile uint32_t *)0x4005F300))      // Shifter Buffer N Byte Swapped Register
#define FLEXIO_SHIFTBUFBYS1           (*((volatile uint32_t *)0x4005F304))      // Shifter Buffer N Byte Swapped Register
#define FLEXIO_SHIFTBUFBYS2           (*((volatile uint32_t *)0x4005F308))      // Shifter Buffer N Byte Swapped Register
#define FLEXIO_SHIFTBUFBYS3           (*((volatile uint32_t *)0x4005F30C))      // Shifter Buffer N Byte Swapped Register
#define FLEXIO_SHIFTBUFBBS0           (*((volatile uint32_t *)0x4005F380))      // Shifter Buffer N Bit Byte Swapped Register
#define FLEXIO_SHIFTBUFBBS1           (*((volatile uint32_t *)0x4005F384))      // Shifter Buffer N Bit Byte Swapped Register
#define FLEXIO_SHIFTBUFBBS2           (*((volatile uint32_t *)0x4005F388))      // Shifter Buffer N Bit Byte Swapped Register
#define FLEXIO_SHIFTBUFBBS3           (*((volatile uint32_t *)0x4005F38C))      // Shifter Buffer N Bit Byte Swapped Register
#define FLEXIO_TIMCTL0                (*((volatile uint32_t *)0x4005F400))      // Timer Control N Register
#define FLEXIO_TIMCTL1                (*((volatile uint32_t *)0x4005F404))      // Timer Control N Register
#define FLEXIO_TIMCTL2                (*((volatile uint32_t *)0x4005F408))      // Timer Control N Register
#define FLEXIO_TIMCTL3                (*((volatile uint32_t *)0x4005F40C))      // Timer Control N Register
#define FLEXIO_TIMCFG0                (*((volatile uint32_t *)0x4005F480))      // Timer Configuration N Register
#define FLEXIO_TIMCFG1                (*((volatile uint32_t *)0x4005F484))      // Timer Configuration N Register
#define FLEXIO_TIMCFG2                (*((volatile uint32_t *)0x4005F488))      // Timer Configuration N Register
#define FLEXIO_TIMCFG3                (*((volatile uint32_t *)0x4005F48C))      // Timer Configuration N Register
#define FLEXIO_TIMCMP0                (*((volatile uint32_t *)0x4005F500))      // Timer Compare N Register
#define FLEXIO_TIMCMP1                (*((volatile uint32_t *)0x4005F504))      // Timer Compare N Register
#define FLEXIO_TIMCMP2                (*((volatile uint32_t *)0x4005F508))      // Timer Compare N Register
#define FLEXIO_TIMCMP3                (*((volatile uint32_t *)0x4005F50C))      // Timer Compare N Register


//*****************************************************************************
//
// Integrated Interchip Sound (I2S) / Synchronous Audio Interface (SAI) registers
//
//*****************************************************************************

#define I2S0_TCSR                     (*((volatile uint32_t *)0x4002F000))      // SAI Transmit Control Register (I2S0_TCSR)
#define I2S0_TCR1                     (*((volatile uint32_t *)0x4002F004))      // SAI Transmit Configuration 1 Register (I2S0_TCR1)
#define I2S0_TCR2                     (*((volatile uint32_t *)0x4002F008))      // SAI Transmit Configuration 2 Register (I2S0_TCR2)
#define I2S0_TCR3                     (*((volatile uint32_t *)0x4002F00C))      // SAI Transmit Configuration 3 Register (I2S0_TCR3)
#define I2S0_TCR4                     (*((volatile uint32_t *)0x4002F010))      // SAI Transmit Configuration 4 Register (I2S0_TCR4)
#define I2S0_TCR5                     (*((volatile uint32_t *)0x4002F014))      // SAI Transmit Configuration 5 Register (I2S0_TCR5)
#define I2S0_TDR0                     (*((volatile uint32_t *)0x4002F020))      // SAI Transmit Data Register (I2S0_TDR0)
#define I2S0_TFR0                     (*((volatile uint32_t *)0x4002F040))      // SAI Transmit FIFO Register (I2S0_TFR0)
#define I2S0_TMR                      (*((volatile uint32_t *)0x4002F060))      // SAI Transmit Mask Register (I2S0_TMR)
#define I2S0_RCSR                     (*((volatile uint32_t *)0x4002F080))      // SAI Receive Control Register (I2S0_RCSR)
#define I2S0_RCR1                     (*((volatile uint32_t *)0x4002F084))      // SAI Receive Configuration 1 Register (I2S0_RCR1)
#define I2S0_RCR2                     (*((volatile uint32_t *)0x4002F088))      // SAI Receive Configuration 2 Register (I2S0_RCR2)
#define I2S0_RCR3                     (*((volatile uint32_t *)0x4002F08C))      // SAI Receive Configuration 3 Register (I2S0_RCR3)
#define I2S0_RCR4                     (*((volatile uint32_t *)0x4002F090))      // SAI Receive Configuration 4 Register (I2S0_RCR4)
#define I2S0_RCR5                     (*((volatile uint32_t *)0x4002F094))      // SAI Receive Configuration 5 Register (I2S0_RCR5)
#define I2S0_RDR0                     (*((volatile uint32_t *)0x4002F0A0))      // SAI Receive Data Register (I2S0_RDR0)
#define I2S0_RFR0                     (*((volatile uint32_t *)0x4002F0C0))      // SAI Receive FIFO Register (I2S0_RFR0)
#define I2S0_RMR                      (*((volatile uint32_t *)0x4002F0E0))      // SAI Receive Mask Register (I2S0_RMR)
#define I2S0_MCR                      (*((volatile uint32_t *)0x4002F100))      // SAI MCLK Control Register (I2S0_MCR)
#define I2S0_MDR                      (*((volatile uint32_t *)0x4002F104))      // SAI MCLK Divide Register (I2S0_MDR)
#define I2S1_TCSR                     (*((volatile uint32_t *)0x40030000))      // SAI Transmit Control Register (I2S1_TCSR)
#define I2S1_TCR1                     (*((volatile uint32_t *)0x40030004))      // SAI Transmit Configuration 1 Register (I2S1_TCR1)
#define I2S1_TCR2                     (*((volatile uint32_t *)0x40030008))      // SAI Transmit Configuration 2 Register (I2S1_TCR2)
#define I2S1_TCR3                     (*((volatile uint32_t *)0x4003000C))      // SAI Transmit Configuration 3 Register (I2S1_TCR3)
#define I2S1_TCR4                     (*((volatile uint32_t *)0x40030010))      // SAI Transmit Configuration 4 Register (I2S1_TCR4)
#define I2S1_TCR5                     (*((volatile uint32_t *)0x40030014))      // SAI Transmit Configuration 5 Register (I2S1_TCR5)
#define I2S1_TDR0                     (*((volatile uint32_t *)0x40030020))      // SAI Transmit Data Register (I2S1_TDR0)
#define I2S1_TFR0                     (*((volatile uint32_t *)0x40030040))      // SAI Transmit FIFO Register (I2S1_TFR0)
#define I2S1_TMR                      (*((volatile uint32_t *)0x40030060))      // SAI Transmit Mask Register (I2S1_TMR)
#define I2S1_RCSR                     (*((volatile uint32_t *)0x40030080))      // SAI Receive Control Register (I2S1_RCSR)
#define I2S1_RCR1                     (*((volatile uint32_t *)0x40030084))      // SAI Receive Configuration 1 Register (I2S1_RCR1)
#define I2S1_RCR2                     (*((volatile uint32_t *)0x40030088))      // SAI Receive Configuration 2 Register (I2S1_RCR2)
#define I2S1_RCR3                     (*((volatile uint32_t *)0x4003008C))      // SAI Receive Configuration 3 Register (I2S1_RCR3)
#define I2S1_RCR4                     (*((volatile uint32_t *)0x40030090))      // SAI Receive Configuration 4 Register (I2S1_RCR4)
#define I2S1_RCR5                     (*((volatile uint32_t *)0x40030094))      // SAI Receive Configuration 5 Register (I2S1_RCR5)
#define I2S1_RDR0                     (*((volatile uint32_t *)0x400300A0))      // SAI Receive Data Register (I2S1_RDR0)
#define I2S1_RFR0                     (*((volatile uint32_t *)0x400300C0))      // SAI Receive FIFO Register (I2S1_RFR0)
#define I2S1_RMR                      (*((volatile uint32_t *)0x400300E0))      // SAI Receive Mask Register (I2S1_RMR)
#define I2S1_MCR                      (*((volatile uint32_t *)0x40030100))      // SAI MCLK Control Register (I2S1_MCR)
#define I2S1_MDR                      (*((volatile uint32_t *)0x40030104))      // SAI MCLK Divide Register (I2S1_MDR)


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



//*****************************************************************************
//
// The following are defines for the bit fields in the PORTx_PCRn register.
//
//*****************************************************************************

#define ISF                           0x01000000      // Interrupt Status Flag
#define IRQC                          0x00780000      // Interrupt Configuration
#define LK                            0x00008000      // Lock Register
#define MUX                           0x00007800      // Pin Mux Control
#define DSE                           0x00000040      // Drive Strength Enable
#define ODE                           0x00000020      // Open Drain Enable
#define PFE                           0x00000010      // Passive Filter Enable
#define SRE                           0x00000004      // Slew Rate Enable
#define PE                            0x00000002      // Pull Enable
#define PS                            0x00000001      // Pull Select


//*****************************************************************************
//
// The following are defines for the bit fields in the PORTx_GPCLR register.
//
//*****************************************************************************

#define GPWE                          0x7FFF80000000      // Global Pin Write Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the PORTx_GPCHR register.
//
//*****************************************************************************

#define GPWE                          0x7FFF80000000      // Global Pin Write Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the PORTx_ISFR register.
//
//*****************************************************************************

#define ISF                           0x7FFFFFFF80000000      // Interrupt Status Flag


//*****************************************************************************
//
// The following are defines for the bit fields in the PORTx_DFER register.
//
//*****************************************************************************

#define DFE                           0x7FFFFFFF80000000      // Digital Filter Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the PORTx_DFCR register.
//
//*****************************************************************************

#define CS                            0x00000001      // Clock Source


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SOPT1 register.
//
//*****************************************************************************

#define OSC32KSEL                     0x00180000      // 32K oscillator clock select
#define OSC32KOUT                     0x00060000      // 32K Oscillator Clock Output
#define RAMSIZE                       0x00078000      // RAM size


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SOPT2 register.
//
//*****************************************************************************

#define LPUARTSRC                     0x18000000      // LPUART clock source select
#define TPMSRC                        0x06000000      // TPM clock source select
#define FLEXIOSRC                     0x01800000      // FlexIO Module Clock Source Select
#define USBSRC                        0x00040000      // USB clock source select
#define PLLFLLSEL                     0x00060000      // PLL/FLL clock select
#define TRACECLKSEL                   0x00001000      // Debug trace clock select
#define LPI2C0SRC                     0x00001800      // LPI2C0 source
#define LPI2C1SRC                     0x00000018      // LPI2C1 source


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SOPT5 register.
//
//*****************************************************************************

#define LPUART0RXSRC                  0x00180000      // LPUART0 receive data source select
#define LPUART0TXSRC                  0x00060000      // LPUART0 transmit data source select
#define UART1RXSRC                    0x00000180      // UART 1 receive data source select
#define UART1TXSRC                    0x00000060      // UART 1 transmit data source select
#define UART0RXSRC                    0x00000018      // UART 0 receive data source select
#define UART0TXSRC                    0x00000006      // UART 0 transmit data source select


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SOPT7 register.
//
//*****************************************************************************

#define ADC0ALTTRGEN                  0x00000080      // ADC0 alternate trigger enable
#define ADC0PRETRGSEL                 0x000000C0      // ADC0 pretrigger select
#define ADC0TRGSEL                    0x000001F0      // ADC0 trigger select


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SOPT9 register.
//
//*****************************************************************************

#define TPM2CLKSEL                    0x04000000      // TPM2 External Clock Pin Select
#define TPM1CLKSEL                    0x02000000      // TPM1 External Clock Pin Select
#define TPM0CLKSEL                    0x01000000      // TPM0 External Clock Pin Select
#define TPM2CH0SRC                    0x00600000      // TPM2 channel 0 input capture source select
#define TPM1CH0SRC                    0x00180000      // TPM1 channel 0 input capture source select


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SDID register.
//
//*****************************************************************************

#define FAMILYID                      0x780000000      // Kinetis Family ID
#define SUBFAMID                      0x78000000      // Kinetis Sub-Family ID
#define SERIESID                      0x07800000      // Kinetis Series ID
#define REVID                         0x00078000      // Device revision number
#define DIEID                         0x0000F800      // Device Die ID
#define FAMID                         0x000001C0      // Kinetis family identification
#define PINID                         0x00000078      // Pincount identification


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SCGC4 register.
//
//*****************************************************************************

#define CMP                           0x00080000      // Comparator Clock Gate Control
#define USBOTG                        0x00040000      // USB Clock Gate Control
#define UART2                         0x00001000      // UART2 Clock Gate Control
#define UART1                         0x00000800      // UART1 Clock Gate Control
#define UART0                         0x00000400      // UART0 Clock Gate Control
#define LPI2C1                        0x00000080      // LPI2C1 Clock Gate Control
#define LPI2C0                        0x00000040      // LPI2C0 Clock Gate Control
#define Reserved                      0x00000020      // This read-only field is reserved and always has the value 1
#define Reserved                      0x00000010      // This read-only field is reserved and always has the value 1
#define Reserved                      0x00000008      // This read-only field is reserved and always has the value 0
#define Reserved                      0x00000004      // This read-only field is reserved and always has the value 0
#define EWM                           0x00000002      // EWM Clock Gate Control
#define Reserved                      0x00000001      // This read-only field is reserved and always has the value 0


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SCGC5 register.
//
//*****************************************************************************

#define FLEXIO                        0x80000000      // FlexIO Clock Gate Control
#define PORTE                         0x00002000      // Port E Clock Gate Control
#define PORTD                         0x00001000      // Port D Clock Gate Control
#define PORTC                         0x00000800      // Port C Clock Gate Control
#define PORTB                         0x00000400      // Port B Clock Gate Control
#define PORTA                         0x00000200      // Port A Clock Gate Control
#define LPTMR                         0x00000001      // Low Power Timer Access Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SCGC6 register.
//
//*****************************************************************************

#define DAC0                          0x80000000      // DAC0 Clock Gate Control
#define RTC                           0x20000000      // RTC Access Control
#define Reserved                      0x10000000      // This read-only field is reserved and always has the value 0
#define ADC0                          0x08000000      // ADC0 Clock Gate Control
#define TPM2                          0x04000000      // TPM2 Clock Gate Control
#define TPM1                          0x02000000      // TPM1 Clock Gate Control
#define TPM0                          0x01000000      // TPM0 Clock Gate Control
#define PIT                           0x00800000      // PIT Clock Gate Control
#define PDB                           0x00400000      // PDB Clock Gate Control
#define CRC                           0x00040000      // CRC Clock Gate Control
#define I2S1                          0x00010000      // I2S1 Clock Gate Control
#define I2S0                          0x00008000      // I2S0 Clock Gate Control
#define SPI1                          0x00002000      // SPI1 Clock Gate Control
#define SPI0                          0x00001000      // SPI0 Clock Gate Control
#define LPUART0                       0x00000400      // LPUART0 Clock Gate Control
#define RNGA                          0x00000200      // RNGA Clock Gate Control
#define FLEXCAN1                      0x00000020      // FlexCAN1 Clock Gate Control
#define FLEXCAN0                      0x00000010      // FlexCAN0 Clock Gate Control
#define DMAMUX                        0x00000002      // DMA Mux Clock Gate Control
#define FTF                           0x00000001      // Flash Memory Clock Gate Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SCGC7 register.
//
//*****************************************************************************

#define DMA                           0x00000002      // DMA Clock Gate Control
#define Reserved                      0x00000001      // This read-only field is reserved and always has the value 0


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_CLKDIV1 register.
//
//*****************************************************************************

#define OUTDIV1                       0x780000000      // Clock 1 output divider value
#define OUTDIV2                       0x78000000      // Clock 2 output divider value
#define OUTDIV4                       0x00780000      // Clock 4 output divider value


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_CLKDIV2 register.
//
//*****************************************************************************

#define USBDIV                        0x00000038      // USB clock divider divisor
#define USBFRAC                       0x00000001      // USB clock divider fraction


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_FCFG1 register.
//
//*****************************************************************************

#define PFSIZE                        0x78000000      // Program flash size
#define FLASHDOZE                     0x00000002      // Flash Doze
#define FLASHDIS                      0x00000001      // Flash Disable


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_FCFG2 register.
//
//*****************************************************************************

#define MAXADDR0                      0x1FC0000000      // Max address block 0


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_UIDH register.
//
//*****************************************************************************

#define UID                           0x7FFFFFFF80000000      // Unique Identification


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_UIDMH register.
//
//*****************************************************************************

#define UID                           0x7FFFFFFF80000000      // Unique Identification


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_UIDML register.
//
//*****************************************************************************

#define UID                           0x7FFFFFFF80000000      // Unique Identification


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_UIDL register.
//
//*****************************************************************************

#define UID                           0x7FFFFFFF80000000      // Unique Identification


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_CLKDIV3 register.
//
//*****************************************************************************

#define PLLFLLDIV                     0x00000038      // PLLFLL clock divider divisor
#define PLLFLLFRAC                    0x00000001      // PLLFLL clock divider fraction


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_MISCCTL register.
//
//*****************************************************************************

#define FlexIOS0                      0x00000004      // FlexIO clock Slot 0 selection
#define UARTSELONUSB                  0x00000002      // UART Selection over USB DP/DM pins


//*****************************************************************************
//
// The following are defines for the bit fields in the RCM_SRS0 register.
//
//*****************************************************************************

#define POR                           0x00000080      // Power-On Reset
#define PIN                           0x00000040      // External Reset Pin
#define WDOG                          0x00000020      // Watchdog
#define LOL                           0x00000008      // Loss-of-Lock Reset
#define LOC                           0x00000004      // Loss-of-Clock Reset
#define LVD                           0x00000002      // Low-Voltage Detect Reset
#define WAKEUP                        0x00000001      // Low Leakage Wakeup Reset


//*****************************************************************************
//
// The following are defines for the bit fields in the RCM_SRS1 register.
//
//*****************************************************************************

#define SACKERR                       0x00000020      // Stop Mode Acknowledge Error Reset
#define MDM_AP                        0x00000008      // MDM-AP System Reset Request
#define SW                            0x00000004      // Software
#define LOCKUP                        0x00000002      // Core Lockup
#define JTAG                          0x00000001      // JTAG Generated Reset


//*****************************************************************************
//
// The following are defines for the bit fields in the RCM_RPFC register.
//
//*****************************************************************************

#define RSTFLTSS                      0x00000004      // Reset Pin Filter Select in Stop Mode
#define RSTFLTSRW                     0x00000006      // Reset Pin Filter Select in Run and Wait Modes


//*****************************************************************************
//
// The following are defines for the bit fields in the RCM_RPFW register.
//
//*****************************************************************************

#define RSTFLTSEL                     0x000001F0      // Reset Pin Filter Bus Clock Select


//*****************************************************************************
//
// The following are defines for the bit fields in the RCM_SSRS0 register.
//
//*****************************************************************************

#define SPOR                          0x00000080      // Sticky Power-On Reset
#define SPIN                          0x00000040      // Sticky External Reset Pin
#define SWDOG                         0x00000020      // Sticky Watchdog
#define SLOL                          0x00000008      // Sticky Loss-of-Lock Reset
#define SLOC                          0x00000004      // Sticky Loss-of-Clock Reset
#define SLVD                          0x00000002      // Sticky Low-Voltage Detect Reset
#define SWAKEUP                       0x00000001      // Sticky Low Leakage Wakeup Reset


//*****************************************************************************
//
// The following are defines for the bit fields in the RCM_SSRS1 register.
//
//*****************************************************************************

#define SSACKERR                      0x00000020      // Sticky Stop Mode Acknowledge Error Reset
#define SMDM_AP                       0x00000008      // Sticky MDM-AP System Reset Request
#define SSW                           0x00000004      // Sticky Software
#define SLOCKUP                       0x00000002      // Sticky Core Lockup
#define SJTAG                         0x00000001      // Sticky JTAG Generated Reset


//*****************************************************************************
//
// The following are defines for the bit fields in the SMC_PMPROT register.
//
//*****************************************************************************

#define AHSRUN                        0x00000080      // Allow High Speed Run mode
#define AVLP                          0x00000020      // Allow Very-Low-Power Modes
#define ALLS                          0x00000008      // Allow Low-Leakage Stop Mode
#define AVLLS                         0x00000002      // Allow Very-Low-Leakage Stop Mode


//*****************************************************************************
//
// The following are defines for the bit fields in the SMC_PMCTRL register.
//
//*****************************************************************************

#define RUNM                          0x000000C0      // Run Mode Control
#define STOPA                         0x00000008      // Stop Aborted
#define STOPM                         0x0000001C      // Stop Mode Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SMC_STOPCTRL register.
//
//*****************************************************************************

#define PSTOPO                        0x00000180      // Partial Stop Option
#define PORPO                         0x00000020      // POR Power Option
#define LPOPO                         0x00000008      // LPO Power Option
#define LLSM                          0x0000001C      // LLS or VLLS Mode Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SMC_PMSTAT register.
//
//*****************************************************************************

#define PMSTAT                        0x00000001      // Power Mode Status ::


//*****************************************************************************
//
// The following are defines for the bit fields in the PMC_LVDSC1 register.
//
//*****************************************************************************

#define LVDF                          0x00000080      // Low-Voltage Detect Flag
#define LVDACK                        0x00000040      // Low-Voltage Detect Acknowledge
#define LVDIE                         0x00000020      // Low-Voltage Detect Interrupt Enable
#define LVDRE                         0x00000010      // Low-Voltage Detect Reset Enable
#define LVDV                          0x00000006      // Low-Voltage Detect Voltage Select


//*****************************************************************************
//
// The following are defines for the bit fields in the PMC_LVDSC2 register.
//
//*****************************************************************************

#define LVWF                          0x00000080      // Low-Voltage Warning Flag
#define LVWACK                        0x00000040      // Low-Voltage Warning Acknowledge
#define LVWIE                         0x00000020      // Low-Voltage Warning Interrupt Enable
#define LVWV                          0x00000006      // Low-Voltage Warning Voltage Select


//*****************************************************************************
//
// The following are defines for the bit fields in the PMC_REGSC register.
//
//*****************************************************************************

#define BGEN                          0x00000010      // Bandgap Enable In VLPx Operation
#define ACKISO                        0x00000008      // Acknowledge Isolation
#define REGONS                        0x00000004      // Regulator In Run Regulation Status
#define BGBE                          0x00000001      // Bandgap Buffer Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the PMC_HVDSC1 register.
//
//*****************************************************************************

#define HVDF                          0x00000080      // High-Voltage Detect Flag
#define HVDACK                        0x00000040      // High-Voltage Detect Acknowledge
#define HVDIE                         0x00000020      // High-Voltage Detect Interrupt Enable
#define HVDRE                         0x00000010      // High-Voltage Detect Reset Enable
#define HVDV                          0x00000006      // High-Voltage Detect Voltage Select


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_PE1 register.
//
//*****************************************************************************

#define WUPE3                         0x00000080      // Wakeup Pin Enable For LLWU_P3
#define WUPE2                         0x00000020      // Wakeup Pin Enable For LLWU_P2
#define WUPE1                         0x00000008      // Wakeup Pin Enable For LLWU_P1
#define WUPE0                         0x00000002      // Wakeup Pin Enable For LLWU_P0


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_PE2 register.
//
//*****************************************************************************

#define WUPE7                         0x00000080      // Wakeup Pin Enable For LLWU_P7
#define WUPE6                         0x00000020      // Wakeup Pin Enable For LLWU_P6
#define WUPE5                         0x00000008      // Wakeup Pin Enable For LLWU_P5
#define WUPE4                         0x00000002      // Wakeup Pin Enable For LLWU_P4


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_PE3 register.
//
//*****************************************************************************

#define WUPE11                        0x00000080      // Wakeup Pin Enable For LLWU_P11
#define WUPE10                        0x00000020      // Wakeup Pin Enable For LLWU_P10
#define WUPE9                         0x00000008      // Wakeup Pin Enable For LLWU_P9
#define WUPE8                         0x00000002      // Wakeup Pin Enable For LLWU_P8


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_PE4 register.
//
//*****************************************************************************

#define WUPE15                        0x00000080      // Wakeup Pin Enable For LLWU_P15
#define WUPE14                        0x00000020      // Wakeup Pin Enable For LLWU_P14
#define WUPE13                        0x00000008      // Wakeup Pin Enable For LLWU_P13
#define WUPE12                        0x00000002      // Wakeup Pin Enable For LLWU_P12


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_PE5 register.
//
//*****************************************************************************

#define WUPE19                        0x00000080      // Wakeup Pin Enable For LLWU_P19
#define WUPE18                        0x00000020      // Wakeup Pin Enable For LLWU_P18
#define WUPE17                        0x00000008      // Wakeup Pin Enable For LLWU_P17
#define WUPE16                        0x00000002      // Wakeup Pin Enable For LLWU_P16


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_PE6 register.
//
//*****************************************************************************

#define WUPE23                        0x00000080      // Wakeup Pin Enable For LLWU_P23
#define WUPE22                        0x00000020      // Wakeup Pin Enable For LLWU_P22
#define WUPE21                        0x00000008      // Wakeup Pin Enable For LLWU_P21
#define WUPE20                        0x00000002      // Wakeup Pin Enable For LLWU_P20


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_PE7 register.
//
//*****************************************************************************

#define WUPE27                        0x00000080      // Wakeup Pin Enable For LLWU_P27
#define WUPE26                        0x00000020      // Wakeup Pin Enable For LLWU_P26
#define WUPE25                        0x00000008      // Wakeup Pin Enable For LLWU_P25
#define WUPE24                        0x00000002      // Wakeup Pin Enable For LLWU_P24


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_PE8 register.
//
//*****************************************************************************

#define WUPE31                        0x00000080      // Wakeup Pin Enable For LLWU_P31
#define WUPE30                        0x00000020      // Wakeup Pin Enable For LLWU_P30
#define WUPE29                        0x00000008      // Wakeup Pin Enable For LLWU_P29
#define WUPE28                        0x00000002      // Wakeup Pin Enable For LLWU_P28


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_ME register.
//
//*****************************************************************************

#define WUME7                         0x00000080      // Wakeup Module Enable For Module 7
#define WUME6                         0x00000040      // Wakeup Module Enable For Module 6
#define WUME5                         0x00000020      // Wakeup Module Enable For Module 5
#define WUME4                         0x00000010      // Wakeup Module Enable For Module 4
#define WUME3                         0x00000008      // Wakeup Module Enable For Module 3
#define WUME2                         0x00000004      // Wakeup Module Enable For Module 2
#define WUME1                         0x00000002      // Wakeup Module Enable For Module 1
#define WUME0                         0x00000001      // Wakeup Module Enable For Module 0


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_PF1 register.
//
//*****************************************************************************

#define WUF7                          0x00000080      // Wakeup Flag For LLWU_P7
#define WUF6                          0x00000040      // Wakeup Flag For LLWU_P6
#define WUF5                          0x00000020      // Wakeup Flag For LLWU_P5
#define WUF4                          0x00000010      // Wakeup Flag For LLWU_P4
#define WUF3                          0x00000008      // Wakeup Flag For LLWU_P3
#define WUF2                          0x00000004      // Wakeup Flag For LLWU_P2
#define WUF1                          0x00000002      // Wakeup Flag For LLWU_P1
#define WUF0                          0x00000001      // Wakeup Flag For LLWU_P0


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_PF2 register.
//
//*****************************************************************************

#define WUF15                         0x00000080      // Wakeup Flag For LLWU_P15
#define WUF14                         0x00000040      // Wakeup Flag For LLWU_P14
#define WUF13                         0x00000020      // Wakeup Flag For LLWU_P13
#define WUF12                         0x00000010      // Wakeup Flag For LLWU_P12
#define WUF11                         0x00000008      // Wakeup Flag For LLWU_P11
#define WUF10                         0x00000004      // Wakeup Flag For LLWU_P10
#define WUF9                          0x00000002      // Wakeup Flag For LLWU_P9
#define WUF8                          0x00000001      // Wakeup Flag For LLWU_P8


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_PF3 register.
//
//*****************************************************************************

#define WUF23                         0x00000080      // Wakeup Flag For LLWU_P23
#define WUF22                         0x00000040      // Wakeup Flag For LLWU_P22
#define WUF21                         0x00000020      // Wakeup Flag For LLWU_P21
#define WUF20                         0x00000010      // Wakeup Flag For LLWU_P20
#define WUF19                         0x00000008      // Wakeup Flag For LLWU_P19
#define WUF18                         0x00000004      // Wakeup Flag For LLWU_P18
#define WUF17                         0x00000002      // Wakeup Flag For LLWU_P17
#define WUF16                         0x00000001      // Wakeup Flag For LLWU_P16


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_PF4 register.
//
//*****************************************************************************

#define WUF31                         0x00000080      // Wakeup Flag For LLWU_P31
#define WUF30                         0x00000040      // Wakeup Flag For LLWU_P30
#define WUF29                         0x00000020      // Wakeup Flag For LLWU_P29
#define WUF28                         0x00000010      // Wakeup Flag For LLWU_P28
#define WUF27                         0x00000008      // Wakeup Flag For LLWU_P27
#define WUF26                         0x00000004      // Wakeup Flag For LLWU_P26
#define WUF25                         0x00000002      // Wakeup Flag For LLWU_P25
#define WUF24                         0x00000001      // Wakeup Flag For LLWU_P24


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_MF5 register.
//
//*****************************************************************************

#define MWUF7                         0x00000080      // Wakeup flag For module 7
#define MWUF6                         0x00000040      // Wakeup flag For module 6
#define MWUF5                         0x00000020      // Wakeup flag For module 5
#define MWUF4                         0x00000010      // Wakeup flag For module 4
#define MWUF3                         0x00000008      // Wakeup flag For module 3
#define MWUF2                         0x00000004      // Wakeup flag For module 2
#define MWUF1                         0x00000002      // Wakeup flag For module 1
#define MWUF0                         0x00000001      // Wakeup flag For module 0


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_FILT1 register.
//
//*****************************************************************************

#define FILTF                         0x00000080      // Filter Detect Flag
#define FILTE                         0x00000040      // Digital Filter On External Pin
#define FILTSEL                       0x00000010      // Filter Pin Select


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_FILT2 register.
//
//*****************************************************************************

#define FILTF                         0x00000080      // Filter Detect Flag
#define FILTE                         0x00000040      // Digital Filter On External Pin
#define FILTSEL                       0x00000010      // Filter Pin Select
#define FILTE                         0x000000C0      // Digital Filter On External Pin
#define FILTSEL                       0x000001F0      // Filter Pin Select


//*****************************************************************************
//
// The following are defines for the bit fields in the MCM_PLASC register.
//
//*****************************************************************************

#define ASC                           0x00007F80      // Each bit in the ASC field indicates whether there is a corresponding connection to the crossbar switch's slave input port.


//*****************************************************************************
//
// The following are defines for the bit fields in the MCM_PLAMC register.
//
//*****************************************************************************

#define AMC                           0x00007F80      // Each bit in the AMC field indicates whether there is a corresponding connection to the AXBS master input port.


//*****************************************************************************
//
// The following are defines for the bit fields in the MCM_PLACR register.
//
//*****************************************************************************

#define ARB                           0x00000200      // Arbitration select


//*****************************************************************************
//
// The following are defines for the bit fields in the MCM_ISCR register.
//
//*****************************************************************************

#define FIDCE                         0x80000000      // FPU input denormal interrupt enable
#define Reserved                      0xC0000000      // This read-only field is reserved and always has the value 0.
#define FIXCE                         0x10000000      // FPU inexact interrupt enable
#define FUFCE                         0x08000000      // FPU underflow interrupt enable
#define FOFCE                         0x04000000      // FPU overflow interrupt enable
#define FDZCE                         0x02000000      // FPU divide-by-zero interrupt enable
#define FIOCE                         0x01000000      // FPU invalid operation interrupt enable
#define Reserved                      0x7F800000      // This read-only field is reserved and always has the value 0.
#define FIDC                          0x00008000      // FPU input denormal interrupt status
#define Reserved                      0x0000C000      // This read-only field is reserved and always has the value 0.
#define FIXC                          0x00001000      // FPU inexact interrupt status
#define FUFC                          0x00000800      // FPU underflow interrupt status
#define FOFC                          0x00000400      // FPU overflow interrupt status
#define FDZC                          0x00000200      // FPU divide-by-zero interrupt status
#define FIOC                          0x00000100      // FPU invalid operation interrupt status
#define Reserved                      0x00007F80      // This read-only field is reserved and always has the value 0.


//*****************************************************************************
//
// The following are defines for the bit fields in the MCM_CPO register.
//
//*****************************************************************************

#define CPOWOI                        0x00000004      // Compute Operation wakeup on interrupt
#define CPOACK                        0x00000002      // Compute Operation acknowledge
#define CPOREQ                        0x00000001      // Compute Operation request


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_CR register.
//
//*****************************************************************************

#define CX                            0x00020000      // Cancel Transfer
#define ECX                           0x00010000      // Error Cancel Transfer
#define EMLM                          0x00000080      // Enable Minor Loop Mapping
#define CLM                           0x00000040      // Continuous Link Mode
#define HALT                          0x00000020      // Halt DMA Operations
#define HOE                           0x00000010      // Halt On Error
#define ERCA                          0x00000004      // Enable Round Robin Channel Arbitration
#define EDBG                          0x00000002      // Enable Debug


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_ES register.
//
//*****************************************************************************

#define ECX                           0x00010000      // Transfer Canceled
#define CPE                           0x00004000      // Channel Priority Error
#define ERRCHN                        0x00007800      // Error Channel Number or Canceled Channel Number
#define SAE                           0x00000080      // Source Address Error
#define SOE                           0x00000040      // Source Offset Error
#define DAE                           0x00000020      // Destination Address Error
#define DOE                           0x00000010      // Destination Offset Error
#define NCE                           0x00000008      // NBYTES/CITER Configuration Error
#define SGE                           0x00000004      // Scatter/Gather Configuration Error
#define SBE                           0x00000002      // Source Bus Error
#define DBE                           0x00000001      // Destination Bus Error


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_ERQ register.
//
//*****************************************************************************

#define ERQ15-ERQ0                    0x7FFF8000      // Enable DMA Request 15-0


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_EEI register.
//
//*****************************************************************************

#define EEI15-EEI0                    0x7FFF8000      // Enable Error Interrupt 15-0


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_CEEI register.
//
//*****************************************************************************

#define CAEE                          0x00000040      // Clear All Enable Error Interrupts
#define CEEI                          0x7FFF8000      // Clear Enable Error Interrupt


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_SEEI register.
//
//*****************************************************************************

#define SAEE                          0x00000040      // Sets All Enable Error Interrupts
#define SEEI                          0x7FFF8000      // Set Enable Error Interrupt


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_CERQ register.
//
//*****************************************************************************

#define CAER                          0x00000040      // Clear All Enable Requests
#define CERQ                          0x7FFF8000      // Clear Enable Request


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_SERQ register.
//
//*****************************************************************************

#define SAER                          0x00000040      // Set All Enable Requests
#define SERQ                          0x7FFF8000      // Set Enable Request


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_CDNE register.
//
//*****************************************************************************

#define CADN                          0x00000040      // Clears All DONE Bits
#define CDNE                          0x7FFF8000      // Clear DONE Bit


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_SSRT register.
//
//*****************************************************************************

#define SAST                          0x00000040      // Set All START Bits (activates all channels)
#define SSRT                          0x7FFF8000      // Set START Bit


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_CERR register.
//
//*****************************************************************************

#define CAEI                          0x00000040      // Clear All Error Indicators
#define CERR                          0x7FFF8000      // Clear Error Indicator


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_CINT register.
//
//*****************************************************************************

#define CAIR                          0x00000040      // Clear All Interrupt Requests
#define CINT                          0x7FFF8000      // Clear Interrupt Request


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_INT register.
//
//*****************************************************************************

#define INT15-INT0                    0x7FFF8000      // Interrupt Request 15-0


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_ERR register.
//
//*****************************************************************************

#define ERR15-ERR0                    0x7FFF8000      // Error In Channel 15-0


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_HRS register.
//
//*****************************************************************************

#define HRS15-HRS0                    0x7FFF8000      // Hardware Request Status Channel 15-0


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_EARS register.
//
//*****************************************************************************

#define EDREQ_15-EDREQ_0              0x7FFF8000      // Enable asynchronous DMA request in stop mode for channel 15-0


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_DCHPRIn register.
//
//*****************************************************************************

#define ECP                           0x00000080      // Enable Channel Preemption
#define DPA                           0x00000040      // Disable Preempt Ability
#define CHPRI                         0x000001F0      // Channel n Arbitration Priority


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_SADDR register.
//
//*****************************************************************************

#define SADDR                         0x7FFFFFFF80000000      // Source Address


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_SOFF register.
//
//*****************************************************************************

#define SOFF                          0x7FFF8000      // Source address signed offset


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_ATTR register.
//
//*****************************************************************************

#define SMOD                          0x000F8000      // Source Address Modulo
#define SSIZE                         0x00001C00      // Source data transfer size
#define DMOD                          0x00000F80      // Destination Address Modulo
#define DSIZE                         0x0000001C      // Destination data transfer size


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_NBYTES_MLNO register.
//
//*****************************************************************************

#define NBYTES                        0x7FFFFFFF80000000      // Minor Byte Transfer Count


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_NBYTES_MLOFFNO register.
//
//*****************************************************************************

#define SMLOE                         0x180000000      // Source Minor Loop Offset Enable
#define DMLOE                         0x60000000      // Destination Minor Loop Offset enable
#define NBYTES                        0x7FFFFFF8000000      // Minor Byte Transfer Count


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_NBYTES_MLOFFYES register.
//
//*****************************************************************************

#define SMLOE                         0x180000000      // Source Minor Loop Offset Enable
#define DMLOE                         0x60000000      // Destination Minor Loop Offset enable
#define MLOFF                         0x1FFFF8000000      // If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes
#define NBYTES                        0x0007FE00      // Minor Byte Transfer Count


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_SLAST register.
//
//*****************************************************************************

#define SLAST                         0x7FFFFFFF80000000      // Last Source Address Adjustment


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_DADDR register.
//
//*****************************************************************************

#define DADDR                         0x7FFFFFFF80000000      // Destination Address


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_DOFF register.
//
//*****************************************************************************

#define DOFF                          0x7FFF8000      // Destination Address Signed Offset


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_CITER_ELINKYES register.
//
//*****************************************************************************

#define ELINK                         0x00008000      // Enable channel-to-channel linking on minor-loop complete
#define Reserved                      0x0000C000      // This field is reserved
#define LINKCH                        0x0000F000      // Minor Loop Link Channel Number
#define CITER                         0x0001FF00      // Current Major Iteration Count


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_CITER_ELINKNO register.
//
//*****************************************************************************

#define ELINK                         0x00008000      // Enable channel-to-channel linking on minor-loop complete
#define CITER                         0x1FFFC000      // Current Major Iteration Count
#define CITER                         0x0001FF00      // Current Major Iteration Count


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_DLASTSGA register.
//
//*****************************************************************************

#define DLASTSGA                      0x7FFFFFFF80000000      // Destination last address adjustment or the memory address for the next transfer control descriptor to be loaded into this channel (scatter/gather)


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_CSR register.
//
//*****************************************************************************

#define BWC                           0x00018000      // Bandwidth Control
#define Reserved                      0x00006000      // This field is reserved
#define MAJORLINKCH                   0x00007800      // Major Loop Link Channel Number
#define DONE                          0x00000080      // Channel Done
#define ACTIVE                        0x00000040      // Channel Active
#define MAJORELINK                    0x00000020      // Enable channel-to-channel linking on major loop complete
#define ESG                           0x00000010      // Enable Scatter/Gather Processing
#define DREQ                          0x00000008      // Disable Request
#define INTHALF                       0x00000004      // Enable an interrupt when major counter is half complete
#define INTMAJOR                      0x00000002      // Enable an interrupt when major iteration count completes
#define START                         0x00000001      // Channel Start


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_BITER_ELINKYES register.
//
//*****************************************************************************

#define ELINK                         0x00008000      // Enable channel-to-channel linking on minor-loop complete
#define Reserved                      0x0000C000      // This field is reserved
#define LINKCH                        0x0000F000      // Link Channel Number
#define BITER                         0x0001FF00      // Starting major iteration count


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_BITER_ELINKNO register.
//
//*****************************************************************************

#define ELINK                         0x00008000      // Enable channel-to-channel linking on minor-loop complete
#define BITER                         0x1FFFC000      // Starting major iteration count
#define BITER                         0x0001FF00      // Starting major iteration count


//*****************************************************************************
//
// The following are defines for the bit fields in the EWM_CTRL register.
//
//*****************************************************************************

#define INTEN                         0x00000008      // Interrupt Enable.
#define INEN                          0x00000004      // Input Enable.
#define ASSIN                         0x00000002      // EWM_in's Assertion State Select.
#define EWMEN                         0x00000001      // EWM enable.


//*****************************************************************************
//
// The following are defines for the bit fields in the EWM_SERV register.
//
//*****************************************************************************

#define SERVICE                       0x00007F80      // The EWM refresh mechanism requires the CPU to write two values to the SERV register: a first data byte of 0xB4, followed by a second data byte of 0x2C.


//*****************************************************************************
//
// The following are defines for the bit fields in the EWM_CMPL register.
//
//*****************************************************************************

#define COMPAREL                      0x00007F80      // To prevent runaway code from changing this field, software should  write to  this  field  after  a  CPU  reset even if the (default) minimum refresh time is required.


//*****************************************************************************
//
// The following are defines for the bit fields in the EWM_CMPH register.
//
//*****************************************************************************

#define COMPAREH                      0x00007F80      // To prevent runaway code from changing this field, software should  write to  this  field  after  a  CPU  reset even if the (default) maximum refresh time is required.


//*****************************************************************************
//
// The following are defines for the bit fields in the EWM_CLKPRESCALER register.
//
//*****************************************************************************

#define CLK_DIV                       0x00007F80      // Selected low power clock source for running the EWM counter can be prescaled as below. ::


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_STCTRLH register.
//
//*****************************************************************************

#define DISTESTWDOG                   0x00004000      // Allows the WDOG’s functional test mode to be disabled permanently. After it is set, it can only be cleared by a reset. It cannot be unlocked for editing after it is set.
#define BYTESEL[1:0]                  0x00006000      // This 2-bit field selects the byte to be tested when the watchdog is in the byte test mode.
#define TESTSEL                       0x00000800      // Effective only if TESTWDOG is set. Selects the test to be run on the watchdog timer.
#define TESTWDOG                      0x00000400      // Puts the watchdog in the functional test mode. In this mode, the watchdog timer and the associated compare and reset generation logic is tested for correct operation. The clock for the timer is switched from the main watchdog clock to the fast clock input for watchdog functional test. The TESTSEL bit selects the test to be run.
#define WAITEN                        0x00000080      // Enables or disables WDOG in Wait mode.
#define STOPEN                        0x00000040      // Enables or disables WDOG in Stop mode.
#define DBGEN                         0x00000020      // Enables or disables WDOG in Debug mode.
#define ALLOWUPDATE                   0x00000010      // Enables updates to watchdog write-once registers, after the reset-triggered initial configuration window (WCT) closes, through unlock sequence.
#define WINEN                         0x00000008      // Enables Windowing mode.
#define IRQRSTEN                      0x00000004      // Used to enable the debug breadcrumbs feature. A change in this bit is updated immediately, as opposed to updating after WCT.
#define CLKSRC                        0x00000002      // Selects clock source for the WDOG timer and other internal timing operations.
#define WDOGEN                        0x00000001      // Enables or disables the WDOG’s operation. In the disabled state, the watchdog timer is kept in the reset state, but the other exception conditions can still trigger a reset/interrupt. A change in the value of this bit must be held for more than one WDOG_CLK cycle for the WDOG to be enabled or disabled.


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_STCTRLL register.
//
//*****************************************************************************

#define INTFLG                        0x00008000      // Interrupt flag. It is set when an exception occurs. IRQRSTEN = 1 is a precondition to set this flag. INTFLG = 1 results in an interrupt being issued followed by a reset, WCT later. The interrupt can be cleared by writing 1 to this bit. It also gets cleared on a system reset.


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_TOVALH register.
//
//*****************************************************************************

#define TOVALHIGH                     0x7FFF8000      // Defines the upper 16 bits of the 32-bit time-out value for the watchdog timer. It is defined in terms of cycles of the watchdog clock.


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_TOVALL register.
//
//*****************************************************************************

#define TOVALLOW                      0x7FFF8000      // Defines the lower 16 bits of the 32-bit time-out value for the watchdog timer. It is defined in terms of cycles of the watchdog clock.


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_WINH register.
//
//*****************************************************************************

#define WINHIGH                       0x7FFF8000      // Defines the upper 16 bits of the 32-bit window for the windowed mode of operation of the watchdog. It is defined in terms of cycles of the watchdog clock. In this mode, the watchdog can be refreshed only when the timer has reached a value greater than or equal to this window length. A refresh outside this window resets the system or if IRQRSTEN is set, it interrupts and then resets the system.


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_WINL register.
//
//*****************************************************************************

#define WINLOW                        0x7FFF8000      // Defines the lower 16 bits of the 32-bit window for the windowed mode of operation of the watchdog. It is defined in terms of cycles of the pre-scaled watchdog clock. In this mode, the watchdog can be refreshed only when the timer reaches a value greater than or equal to this window length value. A refresh outside of this window resets the system or if IRQRSTEN is set, it interrupts and then resets the system.


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_REFRESH register.
//
//*****************************************************************************

#define WDOGREFRESH                   0x7FFF8000      // Watchdog refresh register. A sequence of 0xA602 followed by 0xB480 within 20 bus clock cycles written to this register refreshes the WDOG and prevents it from resetting the system. Writing a value other than the above mentioned sequence or if the sequence is longer than 20 bus cycles, resets the system, or if IRQRSTEN is set, it interrupts and then resets the system.


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_UNLOCK register.
//
//*****************************************************************************

#define WDOGUNLOCK                    0x7FFF8000      // Writing the unlock sequence values to this register to makes the watchdog write-once registers writable again. The required unlock sequence is 0xC520 followed by 0xD928 within 20 bus clock cycles. A valid unlock sequence opens a window equal in length to the WCT within which you can update the registers. Writing a value other than the above mentioned sequence or if the sequence is longer than 20 bus cycles, resets the system or if IRQRSTEN is set, it interrupts and then resets the system. The unlock sequence is effective only if ALLOWUPDATE is set.


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_TMROUTH register.
//
//*****************************************************************************

#define TIMEROUTHIGH                  0x7FFF8000      // Shows the value of the upper 16 bits of the watchdog timer.


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_TMROUTL register.
//
//*****************************************************************************

#define TIMEROUTLOW                   0x7FFF8000      // Shows the value of the lower 16 bits of the watchdog timer.


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_RSTCNT register.
//
//*****************************************************************************

#define RSTCNT                        0x7FFF8000      // Counts the number of times the watchdog resets the system. This register is reset only on a POR. Writing 1 to the bit to be cleared enables you to clear the contents of this register.


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_PRESC register.
//
//*****************************************************************************

#define PRESCVAL                      0x00001C00      // 3-bit prescaler for the watchdog clock source. A value of zero indicates no division of the input WDOG clock. The watchdog clock is divided by (PRESCVAL + 1) to provide the prescaled WDOG_CLK.


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_C1 register.
//
//*****************************************************************************

#define CLKS                          0x00000180      // Clock Source Select
#define FRDIV                         0x000000E0      // FLL External Reference Divider
#define IREFS                         0x00000004      // Internal Reference Select
#define IRCLKEN                       0x00000002      // Internal Reference Clock Enable
#define IREFSTEN                      0x00000001      // Internal Reference Stop Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_C2 register.
//
//*****************************************************************************

#define LOCRE0                        0x00000080      // Loss of Clock Reset Enable
#define FCFTRIM                       0x00000040      // Fast Internal Reference Clock Fine Trim
#define RANGE                         0x00000060      // Frequency Range Select
#define HGO                           0x00000008      // High Gain Oscillator Select
#define EREFS                         0x00000004      // External Reference Select
#define LP                            0x00000002      // Low Power Select
#define IRCS                          0x00000001      // Internal Reference Clock Select


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_C3 register.
//
//*****************************************************************************

#define SCTRIM                        0x00007F80      // Slow Internal Reference Clock Trim Setting


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_C4 register.
//
//*****************************************************************************

#define DMX32                         0x00000080      // DCO Maximum Frequency with 32.768 kHz Reference
#define DRST_DRS                      0x000000C0      // DCO Range Select
#define FCTRIM                        0x000000F0      // Fast Internal Reference Clock Trim Setting
#define SCFTRIM                       0x00000001      // Slow Internal Reference Clock Fine Trim


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_C5 register.
//
//*****************************************************************************

#define PLLCLKEN0                     0x00000040      // PLL Clock Enable
#define PLLSTEN0                      0x00000020      // PLL Stop Enable
#define PRDIV0                        0x000001F0      // PLL External Reference Divider


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_C6 register.
//
//*****************************************************************************

#define LOLIE0                        0x00000080      // Loss of Lock Interrupt Enable
#define PLLS                          0x00000040      // PLL Select
#define CME0                          0x00000020      // Clock Monitor Enable
#define VDIV0                         0x000001F0      // VCO 0 Divider


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_S register.
//
//*****************************************************************************

#define LOLS0                         0x00000080      // Loss of Lock Status
#define LOCK0                         0x00000040      // Lock Status
#define PLLST                         0x00000020      // PLL Select Status
#define IREFST                        0x00000010      // Internal Reference Status
#define CLKST                         0x00000018      // Clock Mode Status
#define OSCINIT0                      0x00000002      // OSC Initialization
#define IRCST                         0x00000001      // Internal Reference Clock Status


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_SC register.
//
//*****************************************************************************

#define ATME                          0x00000080      // Automatic Trim Machine Enable
#define ATMS                          0x00000040      // Automatic Trim Machine Select
#define ATMF                          0x00000020      // Automatic Trim Machine Fail Flag
#define FLTPRSRV                      0x00000010      // FLL Filter Preserve Enable
#define FCRDIV                        0x00000038      // Fast Clock Internal Reference Divider
#define LOCS0                         0x00000001      // OSC0 Loss of Clock Status


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_ATCVH register.
//
//*****************************************************************************

#define ATCVH                         0x00007F80      // ATM Compare Value High


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_ATCVL register.
//
//*****************************************************************************

#define ATCVL                         0x00007F80      // ATM Compare Value Low


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_C7 register.
//
//*****************************************************************************

#define OSCSEL                        0x00000006      // MCG OSC Clock Select


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_C8 register.
//
//*****************************************************************************

#define LOCRE1                        0x00000080      // Loss of Clock Reset Enable
#define LOLRE                         0x00000040      // PLL Loss of Lock Reset Enable
#define CME1                          0x00000020      // Clock Monitor Enable1
#define LOCS1                         0x00000001      // OSC1 Loss of Clock Status


//*****************************************************************************
//
// The following are defines for the bit fields in the OSC_CR register.
//
//*****************************************************************************

#define ERCLKEN                       0x00000080      // Enable External Reference Clock
#define EREFSTEN                      0x00000020      // Enable External Reference Clock for 32k Oscillator
#define SC2P                          0x00000008      // Oscillator Clock Divider 2 Prescaler
#define SC4P                          0x00000004      // Oscillator Clock Divider 4 Prescaler
#define SC8P                          0x00000002      // Oscillator Clock Divider 8 Prescaler
#define SC16P                         0x00000001      // Oscillator Clock Divider 16 Prescaler


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_PFAPR register.
//
//*****************************************************************************

#define M7PFD                         0x01800000      // Master 7 Prefetch Disable
#define M6PFD                         0x00600000      // Master 6 Prefetch Disable
#define M5PFD                         0x00180000      // Master 5 Prefetch Disable
#define M4PFD                         0x00060000      // Master 4 Prefetch Disable
#define M3PFD                         0x00018000      // Master 3 Prefetch Disable
#define M2PFD                         0x00006000      // Master 2 Prefetch Disable
#define M1PFD                         0x00001800      // Master 1 Prefetch Disable
#define M0PFD                         0x00000600      // Master 0 Prefetch Disable
#define M7AP[1:0]                     0x00018000      // Master 7 Access Protection
#define M6AP[1:0]                     0x00006000      // Master 6 Access Protection
#define M5AP[1:0]                     0x00001800      // Master 5 Access Protection
#define M4AP[1:0]                     0x00000600      // Master 4 Access Protection
#define M3AP[1:0]                     0x00000180      // Master 3 Access Protection
#define M2AP[1:0]                     0x00000060      // Master 2 Access Protection
#define M1AP[1:0]                     0x00000018      // Master 1 Access Protection
#define M0AP[1:0]                     0x00000006      // Master 0 Access Protection


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_PFB0CR register.
//
//*****************************************************************************

#define B0RWSC[3:0]                   0x780000000      // Bank 0 Read Wait State Control
#define CLCK_WAY[3:0]                 0x78000000      // Cache Lock Way x
#define CINV_WAY[3:0]                 0x07800000      // Cache Invalidate Way x
#define S_B_INV                       0x00080000      // Invalidate Prefetch Speculation Buffer
#define B0MW[1:0]                     0x000C0000      // Bank 0 Memory Width
#define CRC[2:0]                      0x00000380      // Cache Replacement Control
#define B0DCE                         0x00000010      // Bank 0 Data Cache Enable
#define B0ICE                         0x00000008      // Bank 0 Instruction Cache Enable
#define B0DPE                         0x00000004      // Bank 0 Data Prefetch Enable
#define B0IPE                         0x00000002      // Bank 0 Instruction Prefetch Enable
#define B0SEBE                        0x00000001      // Bank 0 Single Entry Buffer Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_TAGVDW0Sn register.
//
//*****************************************************************************

#define tag[18:5]                     0xFFFC0000      // 14-bit tag for cache entry
#define valid                         0x00000001      // 1-bit valid for cache entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_TAGVDW1Sn register.
//
//*****************************************************************************

#define tag[18:5]                     0xFFFC0000      // 14-bit tag for cache entry
#define valid                         0x00000001      // 1-bit valid for cache entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_TAGVDW2Sn register.
//
//*****************************************************************************

#define tag[18:5]                     0xFFFC0000      // 14-bit tag for cache entry
#define valid                         0x00000001      // 1-bit valid for cache entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_TAGVDW3Sn register.
//
//*****************************************************************************

#define tag[18:5]                     0xFFFC0000      // 14-bit tag for cache entry
#define valid                         0x00000001      // 1-bit valid for cache entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW0SnU register.
//
//*****************************************************************************

#define Bits [63:32] of data entry    0x8000000000000000      // 


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW0SnL register.
//
//*****************************************************************************

#define Bits [31:0] of data entry     0x80000000      // 


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW1SnU register.
//
//*****************************************************************************

#define Bits [63:32] of data entry    0x8000000000000000      // 


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW1SnL register.
//
//*****************************************************************************

#define Bits [31:0] of data entry     0x80000000      // 


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW2SnU register.
//
//*****************************************************************************

#define Bits [63:32] of data entry    0x8000000000000000      // 


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW2SnL register.
//
//*****************************************************************************

#define Bits [31:0] of data entry     0x80000000      // 


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW3SnU register.
//
//*****************************************************************************

#define Bits [63:32] of data entry    0x8000000000000000      // 


//*****************************************************************************
//
// The following are defines for the bit fields in the CRC_DATA register.
//
//*****************************************************************************

#define HU                            0x7F80000000      // CRC High Upper Byte
#define HL                            0x7F800000      // CRC High Lower Byte
#define LU                            0x007F8000      // CRC Low Upper Byte
#define LL                            0x00007F80      // CRC Low Lower Byte


//*****************************************************************************
//
// The following are defines for the bit fields in the CRC_GPOLY register.
//
//*****************************************************************************

#define HIGH                          0x7FFF80000000      // High Polynominal Half-word
#define LOW                           0x7FFF8000      // Low Polynominal Half-word


//*****************************************************************************
//
// The following are defines for the bit fields in the CRC_CTRL register.
//
//*****************************************************************************

#define TOT                           0x04000000      // -
#define TOTR                          0x02000000      // -
#define FXOR                          0x01000000      // -
#define WAS                           0x00800000      // -
#define TCRC                          0x00400000      // -


//*****************************************************************************
//
// The following are defines for the bit fields in the RNG_SR register.
//
//*****************************************************************************

#define OREG_SIZE                     0x7F800000      // Output Register Size
#define OREG_LVL                      0x007F8000      // Output Register Level
#define SLP                           0x00000010      // Sleep
#define ERRI                          0x00000008      // Error Interrupt
#define ORU                           0x00000004      // Output Register Underflow
#define LRS                           0x00000002      // Last Read Status
#define SECV                          0x00000001      // Security Violation


//*****************************************************************************
//
// The following are defines for the bit fields in the RNG_ER register.
//
//*****************************************************************************

#define EXT_ENT                       0x7FFFFFFF80000000      // External Entropy


//*****************************************************************************
//
// The following are defines for the bit fields in the RNG_OR register.
//
//*****************************************************************************

#define RANDOUT                       0x7FFFFFFF80000000      // Random Output ::


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_SC1n register.
//
//*****************************************************************************

#define COCO                          0x00000080      // Conversion Complete Flag
#define AIEN                          0x00000040      // Interrupt Enable
#define DIFF                          0x00000020      // Differential Mode Enable
#define ADCH                          0x000001F0      // Input channel select


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CFG1 register.
//
//*****************************************************************************

#define ADLPC                         0x00000080      // Low-Power Configuration
#define ADIV                          0x000000C0      // Clock Divide Select
#define ADLSMP                        0x00000010      // Sample Time Configuration
#define MODE                          0x00000018      // Conversion mode selection
#define ADICLK                        0x00000006      // Input Clock Select


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CFG2 register.
//
//*****************************************************************************

#define MUXSEL                        0x00000010      // ADC Mux Select
#define ADACKEN                       0x00000008      // Asynchronous Clock Output Enable
#define ADHSC                         0x00000004      // High-Speed Configuration
#define ADLSTS                        0x00000006      // Long Sample Time Select


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_Rn register.
//
//*****************************************************************************

#define D                             0x7FFF8000      // Data result ::


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CVn register.
//
//*****************************************************************************

#define CV                            0x7FFF8000      // Compare Value ::


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_SC2 register.
//
//*****************************************************************************

#define ADACT                         0x00000080      // Conversion Active
#define ADTRG                         0x00000040      // Conversion Trigger Select
#define ACFE                          0x00000020      // Compare Function Enable
#define ACFGT                         0x00000010      // Compare Function Greater Than Enable
#define ACREN                         0x00000008      // Compare Function Range Enable
#define DMAEN                         0x00000004      // DMA Enable
#define REFSEL                        0x00000006      // Voltage Reference Selection


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_SC3 register.
//
//*****************************************************************************

#define CAL                           0x00000080      // Calibration
#define CALF                          0x00000040      // Calibration Failed Flag
#define ADCO                          0x00000008      // Continuous Conversion Enable
#define AVGE                          0x00000004      // Hardware Average Enable
#define AVGS                          0x00000006      // Hardware Average Select


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_OFS register.
//
//*****************************************************************************

#define OFS                           0x7FFF8000      // Offset Error Correction Value ::


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_PG register.
//
//*****************************************************************************

#define PG                            0x7FFF8000      // Plus-Side Gain ::


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_MG register.
//
//*****************************************************************************

#define MG                            0x7FFF8000      // Minus-Side Gain ::


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLPD register.
//
//*****************************************************************************

#define CLPD                          0x000007E0      // Calibration Value ::


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLPS register.
//
//*****************************************************************************

#define CLPS                          0x000007E0      // Calibration Value ::


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLP4 register.
//
//*****************************************************************************

#define CLP4                          0x0007FE00      // Calibration Value ::


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLP3 register.
//
//*****************************************************************************

#define CLP3                          0x0001FF00      // Calibration Value ::


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLP2 register.
//
//*****************************************************************************

#define CLP2                          0x00007F80      // Calibration Value ::


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLP1 register.
//
//*****************************************************************************

#define CLP1                          0x00001FC0      // Calibration Value ::
#define CLP1                          0x00000020      // Calibration Value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLP0 register.
//
//*****************************************************************************

#define CLP0                          0x000007E0      // Calibration Value ::
#define CLP0                          0x00000020      // Calibration Value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLMD register.
//
//*****************************************************************************

#define CLMD                          0x000007E0      // Calibration Value ::
#define CLMD                          0x00000020      // Calibration Value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLMS register.
//
//*****************************************************************************

#define CLMS                          0x000007E0      // Calibration Value ::
#define CLMS                          0x00000020      // Calibration Value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLM4 register.
//
//*****************************************************************************

#define CLM4                          0x0007FE00      // Calibration Value ::
#define CLM4                          0x00000200      // Calibration Value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLM3 register.
//
//*****************************************************************************

#define CLM3                          0x0001FF00      // Calibration Value ::
#define CLM3                          0x00000100      // Calibration Value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLM2 register.
//
//*****************************************************************************

#define CLM2                          0x00007F80      // Calibration Value ::
#define CLM2                          0x00000080      // Calibration Value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLM1 register.
//
//*****************************************************************************

#define CLM1                          0x00001FC0      // Calibration Value ::
#define CLM1                          0x00000040      // Calibration Value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLM0 register.
//
//*****************************************************************************

#define CLM0                          0x000007E0      // Calibration Value ::
#define CLM0                          0x00000020      // Calibration Value


//*****************************************************************************
//
// The following are defines for the bit fields in the CMPx_CR1 register.
//
//*****************************************************************************

#define SE                            0x00000080      // Sample Enable
#define WE                            0x00000040      // Windowing Enable
#define TRIGM                         0x00000020      // Trigger Mode Enable
#define PMODE                         0x00000010      // Power Mode Select
#define INV                           0x00000008      // Comparator INVERT
#define COS                           0x00000004      // Comparator Output Select
#define OPE                           0x00000002      // Comparator Output Pin Enable
#define EN                            0x00000001      // Comparator Module Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the CMPx_FPR register.
//
//*****************************************************************************

#define FILT_PER                      0x00007F80      // Filter Sample Period


//*****************************************************************************
//
// The following are defines for the bit fields in the CMPx_SCR register.
//
//*****************************************************************************

#define DMAEN                         0x00000040      // DMA Enable Control
#define IER                           0x00000010      // Comparator Interrupt Enable Rising
#define IEF                           0x00000008      // Comparator Interrupt Enable Falling
#define CFR                           0x00000004      // Analog Comparator Flag Rising
#define CFF                           0x00000002      // Analog Comparator Flag Falling
#define COUT                          0x00000001      // Analog Comparator Output


//*****************************************************************************
//
// The following are defines for the bit fields in the CMPx_DACCR register.
//
//*****************************************************************************

#define DACEN                         0x00000080      // DAC Enable
#define VRSEL                         0x00000040      // Supply Voltage Reference Source Select
#define VOSEL                         0x000007E0      // DAC Output Voltage Select


//*****************************************************************************
//
// The following are defines for the bit fields in the CMPx_MUXCR register.
//
//*****************************************************************************

#define PSEL                          0x000000E0      // Plus Input Mux Control
#define MSEL                          0x0000001C      // Minus Input Mux Control


//*****************************************************************************
//
// The following are defines for the bit fields in the DACx_DATnL register.
//
//*****************************************************************************

#define DATA0                         0x00000001      // When the DAC buffer is not enabled, DATA[11:0] controls the output voltage based on the following formula: V out = V in * (1 + DACDAT0[11:0])/4096. When the DAC buffer is enabled, DATA is mapped to the 16-word buffer.


//*****************************************************************************
//
// The following are defines for the bit fields in the DACx_DATnH register.
//
//*****************************************************************************

#define DATA1                         0x00000001      // When the DAC Buffer is not enabled, DATA[11:0] controls the output voltage based on the following formula. V out = V in * (1 + DACDAT0[11:0])/4096. When the DAC buffer is enabled, DATA[11:0] is mapped to the 16-word buffer.


//*****************************************************************************
//
// The following are defines for the bit fields in the DACx_SR register.
//
//*****************************************************************************

#define DACBFWMF                      0x00000004      // This bit is set if the remaining FIFO data is less than the watermark setting. It is cleared automatically by writing data into FIFO by DMA or CPU. Write to this bit is ignored in FIFO mode.
#define DACBFRPTF                     0x00000002      // In FIFO mode, it is FIFO nearly empty flag. It is set when only one data remains in FIFO. Any DAC trigger does not increase the Read Pointer if this bit is set to avoid any possible glitch or abrupt change at DAC output. It is cleared automatically if FIFO is not empty.
#define DACBFRPBF                     0x00000001      // In FIFO mode, it is FIFO FULL status bit. It means FIFO read pointer equals Write Pointer because of Write Pointer increase. If this bit is set, any write to FIFO from either DMA or CPU is ignored by DAC. It is cleared if there is any DAC trigger making the DAC read pointer increase. Write to this bit is ignored in FIFO mode.


//*****************************************************************************
//
// The following are defines for the bit fields in the DACx_C0 register.
//
//*****************************************************************************

#define DACEN                         0x00000080      // Starts the Programmable Reference Generator operation.
#define DACRFS                        0x00000040      // The DAC selects DACREF_1 or DACREF_2 as the reference voltage.
#define DACTRGSEL                     0x00000020      // The DAC hardware trigger or DAC software trigger is selected.
#define DACSWTRG                      0x00000010      // Active high. This is a write-only field, which always reads 0. If DAC software trigger is selected and buffer is enabled, writing 1 to this field will advance the buffer read pointer once.
#define LPEN                          0x00000008      // DAC Low Power Control.
#define DACBWIEN                      0x00000004      // The DAC buffer watermark interrupt is enabled or disabled.
#define DACBTIEN                      0x00000002      // The DAC buffer read pointer top flag interrupt is enabled or disabled.
#define DACBBIEN                      0x00000001      // The DAC buffer read pointer bottom flag interrupt is enabled or disabled.


//*****************************************************************************
//
// The following are defines for the bit fields in the DACx_C1 register.
//
//*****************************************************************************

#define DMAEN                         0x00000080      // DMA is enabled or disabled. When DMA is enabled, the DMA request will be generated by original interrupts. The interrupts will not be presented on this module at the same time.
#define DACBFWM                       0x00000030      // In normal mode it controls when SR[DACBFWMF] is set. When the DAC buffer read pointer reaches the word defined by this field, which is 1–4 words away from the upper limit (DACBUP), SR[DACBFWMF] will be set. This allows user configuration of the watermark interrupt. In FIFO mode, it is FIFO watermark select field.
#define DACBFMD                       0x0000000C      // The DAC buffer work mode is selected.
#define DACBFEN                       0x00000001      // The DAC buffer read pointer is enabled or disabled.


//*****************************************************************************
//
// The following are defines for the bit fields in the DACx_C2 register.
//
//*****************************************************************************

#define DACBFRP                       0x00000780      // In normal mode it keeps the current value of the buffer read pointer. FIFO mode, it is the FIFO read pointer. It is writable in FIFO mode. User can configure it to same address to reset FIFO as empty.
#define DACBFUP                       0x00000078      // In normal mode it selects the upper limit of the DAC buffer. The buffer read pointer cannot exceed it. In FIFO mode it is the FIFO write pointer. User cannot set Buffer Up limit in FIFO mode. In Normal mode its reset value is MAX. When IP is configured to FIFO mode, this register becomes Write_Pointer, and its value is initially set to equal READ_POINTER automatically, and the FIFO status is empty. It is writable and user can configure it to the same address to reset FIFO as empty.


//*****************************************************************************
//
// The following are defines for the bit fields in the PDBx_SC register.
//
//*****************************************************************************

#define LDMOD                         0x00180000      // Load Mode Select
#define PDBEIE                        0x00020000      // PDB Sequence Error Interrupt Enable
#define SWTRIG                        0x00010000      // Software Trigger
#define DMAEN                         0x00008000      // DMA Enable
#define PRESCALER                     0x0001C000      // Prescaler Divider Select
#define TRGSEL                        0x00007800      // Trigger Input Source Select
#define PDBEN                         0x00000080      // PDB Enable
#define PDBIF                         0x00000040      // PDB Interrupt Flag
#define PDBIE                         0x00000020      // PDB Interrupt Enable
#define MULT                          0x00000018      // Multiplication Factor Select for Prescaler
#define CONT                          0x00000002      // Continuous Mode Enable
#define LDOK                          0x00000001      // Load OK


//*****************************************************************************
//
// The following are defines for the bit fields in the PDBx_MOD register.
//
//*****************************************************************************

#define MOD                           0x7FFF8000      // PDB Modulus


//*****************************************************************************
//
// The following are defines for the bit fields in the PDBx_CNT register.
//
//*****************************************************************************

#define CNT                           0x7FFF8000      // PDB Counter


//*****************************************************************************
//
// The following are defines for the bit fields in the PDBx_IDLY register.
//
//*****************************************************************************

#define IDLY                          0x7FFF8000      // PDB Interrupt Delay


//*****************************************************************************
//
// The following are defines for the bit fields in the PDBx_CHnC1 register.
//
//*****************************************************************************

#define BB                            0x7F800000      // PDB Channel Pre-Trigger Back-to-Back Operation Enable
#define TOS                           0x007F8000      // PDB Channel Pre-Trigger Output Select
#define EN                            0x00000001      // PDB Channel Pre-Trigger Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the PDBx_CHnS register.
//
//*****************************************************************************

#define CF                            0x7F800000      // PDB Channel Flags
#define ERR                           0x00000001      // PDB Channel Sequence Error Flags


//*****************************************************************************
//
// The following are defines for the bit fields in the PDBx_CHnDLY0 register.
//
//*****************************************************************************

#define DLY                           0x7FFF8000      // PDB Channel Delay


//*****************************************************************************
//
// The following are defines for the bit fields in the PDBx_CHnDLY1 register.
//
//*****************************************************************************

#define DLY                           0x7FFF8000      // PDB Channel Delay


//*****************************************************************************
//
// The following are defines for the bit fields in the PDBx_DACINTCn register.
//
//*****************************************************************************

#define EXT                           0x00000002      // DAC External Trigger Input Enable
#define TOE                           0x00000001      // DAC Interval Trigger Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the PDBx_DACINTn register.
//
//*****************************************************************************

#define INT                           0x7FFF8000      // DAC Interval


//*****************************************************************************
//
// The following are defines for the bit fields in the PDBx_POEN register.
//
//*****************************************************************************

#define POEN                          0x00007F80      // PDB Pulse-Out Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the PDBx_POnDLY register.
//
//*****************************************************************************

#define DLY1                          0x007F8000      // PDB Pulse-Out Delay 1
#define DLY2                          0x00007F80      // PDB Pulse-Out Delay 2


//*****************************************************************************
//
// The following are defines for the bit fields in the TPMx_VERID register.
//
//*****************************************************************************

#define MAJOR                         0x7F80000000      // Major Version Number


//*****************************************************************************
//
// The following are defines for the bit fields in the TPMx_PARAM register.
//
//*****************************************************************************

#define WIDTH                         0x7F800000      // Counter Width


//*****************************************************************************
//
// The following are defines for the bit fields in the TPMx_GLOBAL register.
//
//*****************************************************************************

#define RST                           0x00000002      // Software Reset


//*****************************************************************************
//
// The following are defines for the bit fields in the TPMx_SC register.
//
//*****************************************************************************

#define DMA                           0x00000100      // DMA Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the TPMx_CNT register.
//
//*****************************************************************************

#define COUNT                         0x7FFF8000      // Counter value


//*****************************************************************************
//
// The following are defines for the bit fields in the TPMx_MOD register.
//
//*****************************************************************************

#define MOD                           0x7FFF8000      // Modulo value


//*****************************************************************************
//
// The following are defines for the bit fields in the TPMx_STATUS register.
//
//*****************************************************************************

#define TOF                           0x00000100      // Timer Overflow Flag


//*****************************************************************************
//
// The following are defines for the bit fields in the TPMx_CnSC register.
//
//*****************************************************************************

#define CHF                           0x00000080      // Channel Flag


//*****************************************************************************
//
// The following are defines for the bit fields in the TPMx_CnV register.
//
//*****************************************************************************

#define VAL                           0x7FFF8000      // Channel Value


//*****************************************************************************
//
// The following are defines for the bit fields in the TPMx_COMBINE register.
//
//*****************************************************************************

#define COMSWAP2                      0x00020000      // Combine Channels 4 and 5 Swap


//*****************************************************************************
//
// The following are defines for the bit fields in the TPMx_TRIG register.
//
//*****************************************************************************

#define TRIGn                         0x000007E0      // Channel n Trigger


//*****************************************************************************
//
// The following are defines for the bit fields in the TPMx_POL register.
//
//*****************************************************************************

#define POLn                          0x000007E0      // Channel n Polarity


//*****************************************************************************
//
// The following are defines for the bit fields in the TPMx_FILTER register.
//
//*****************************************************************************

#define CH5FVAL                       0x07800000      // Channel 5 Filter Value


//*****************************************************************************
//
// The following are defines for the bit fields in the TPMx_QDCTRL register.
//
//*****************************************************************************

#define QUADMODE                      0x00000008      // Quadrature Decoder Mode


//*****************************************************************************
//
// The following are defines for the bit fields in the TPMx_CONF register.
//
//*****************************************************************************

#define TRGSEL                        0x18000000      // -;; 25


//*****************************************************************************
//
// The following are defines for the bit fields in the PIT_MCR register.
//
//*****************************************************************************

#define MDIS                          0x00000002      // Module Disable - (PIT section)
#define FRZ                           0x00000001      // Freeze


//*****************************************************************************
//
// The following are defines for the bit fields in the PIT_LTMR64H register.
//
//*****************************************************************************




//*****************************************************************************
//
// The following are defines for the bit fields in the PIT_LTMR64L register.
//
//*****************************************************************************




//*****************************************************************************
//
// The following are defines for the bit fields in the PIT_LDVALn register.
//
//*****************************************************************************




//*****************************************************************************
//
// The following are defines for the bit fields in the PIT_CVALn register.
//
//*****************************************************************************




//*****************************************************************************
//
// The following are defines for the bit fields in the PIT_TCTRLn register.
//
//*****************************************************************************

#define CHN                           0x00000004      // Chain Mode
#define TIE                           0x00000002      // Timer Interrupt Enable
#define TEN                           0x00000001      // Timer Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the PIT_TFLGn register.
//
//*****************************************************************************

#define TIF                           0x00000001      // Timer Interrupt Flag


//*****************************************************************************
//
// The following are defines for the bit fields in the LPTMRx_CSR register.
//
//*****************************************************************************

#define TCF                           0x00000080      // Timer Compare Flag
#define TIE                           0x00000040      // Timer Interrupt Enable
#define TPS                           0x00000060      // Timer Pin Select
#define TPP                           0x00000008      // Timer Pin Polarity
#define TFC                           0x00000004      // Timer Free-Running Counter
#define TMS                           0x00000002      // Timer Mode Select
#define TEN                           0x00000001      // Timer Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the LPTMRx_PSR register.
//
//*****************************************************************************

#define PRESCALE                      0x000003C0      // Prescale Value
#define PBYP                          0x00000004      // Prescaler Bypass
#define PCS                           0x00000006      // Prescaler Clock Select


//*****************************************************************************
//
// The following are defines for the bit fields in the LPTMRx_CMR register.
//
//*****************************************************************************

#define COMPARE                       0x7FFF8000      // Compare Value


//*****************************************************************************
//
// The following are defines for the bit fields in the LPTMRx_CNR register.
//
//*****************************************************************************

#define COUNTER                       0x7FFF8000      // Counter Value ::


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_PERID register.
//
//*****************************************************************************

#define ID                            0x00000001      // Peripheral Identification


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_IDCOMP register.
//
//*****************************************************************************

#define NID                           0x00000001      // Ones' complement of PERID[ID] bits


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_REV register.
//
//*****************************************************************************

#define REV                           0x00000078      // Revision


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_ADDINFO register.
//
//*****************************************************************************

#define IEHOST                        0x00000001      // This bit is set if host mode is enabled


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_OTGISTAT register.
//
//*****************************************************************************

#define ONEMSEC                       0x00000040      // This bit is set when the 1 millisecond timer expires
#define LINE_STATE_CHG                0x00000020      // This interrupt is set when the USB line state (CTL[SE0] and CTL[JSTATE] bits) are stable without change for 1 millisecond, and the value of the line state is different from the last time when the line state was stable


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_OTGICR register.
//
//*****************************************************************************

#define ONEMSECEN                     0x00000040      // One Millisecond Interrupt Enable
#define LINESTATEEN                   0x00000020      // Line State Change Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_OTGSTAT register.
//
//*****************************************************************************

#define LINESTATESTABLE               0x00000020      // Indicates that the internal signals that control the LINE_STATE_CHG field of OTGISTAT are stable for at least 1 ms


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_OTGCTL register.
//
//*****************************************************************************

#define DPHIGH                        0x00000080      // D+ Data Line pullup resistor enable
#define DPLOW                         0x00000020      // D+ Data Line pull-down resistor enable
#define DMLOW                         0x00000010      // D– Data Line pull-down resistor enable
#define OTGEN                         0x00000004      // On-The-Go pullup/pulldown resistor enable


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_ISTAT register.
//
//*****************************************************************************

#define STALL                         0x00000080      // Stall Interrupt
#define ATTACH                        0x00000040      // Attach Interrupt
#define RESUME                        0x00000020      // This bit is set when a K-state is observed on the DP/DM signals for 2.5 µs
#define SLEEP                         0x00000010      // This bit is set when the USB Module detects a constant idle on the USB bus for 3 ms
#define TOKDNE                        0x00000008      // This bit is set when the current token being processed has completed
#define SOFTOK                        0x00000004      // This bit is set when the USB Module receives a Start Of Frame (SOF) token
#define ERROR                         0x00000002      // This bit is set when any of the error conditions within Error Interrupt Status (ERRSTAT) register occur
#define USBRST                        0x00000001      // This bit is set when the USB Module has decoded a valid USB reset


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_INTEN register.
//
//*****************************************************************************

#define STALLEN                       0x00000080      // STALL Interrupt Enable
#define ATTACHEN                      0x00000040      // ATTACH Interrupt Enable
#define RESUMEEN                      0x00000020      // RESUME Interrupt Enable
#define SLEEPEN                       0x00000010      // SLEEP Interrupt Enable
#define TOKDNEEN                      0x00000008      // TOKDNE Interrupt Enable
#define SOFTOKEN                      0x00000004      // SOFTOK Interrupt Enable
#define ERROREN                       0x00000002      // ERROR Interrupt Enable
#define USBRSTEN                      0x00000001      // USBRST Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_ERRSTAT register.
//
//*****************************************************************************

#define BTSERR                        0x00000080      // This bit is set when a bit stuff error is detected
#define OWNERR                        0x00000040      // This field is valid when the USB Module is operating in peripheral mode (CTL[HOSTMODEEN]=0)
#define DMAERR                        0x00000020      // This bit is set if the USB Module has requested a DMA access to read a new BDT but has not been given the bus before it needs to receive or transmit data
#define BTOERR                        0x00000010      // This bit is set when a bus turnaround timeout error occurs
#define DFN8                          0x00000008      // This bit is set if the data field received was not 8 bits in length
#define CRC16                         0x00000004      // This bit is set when a data packet is rejected due to a CRC16 error
#define CRC5EOF                       0x00000002      // This error interrupt has two functions
#define PIDERR                        0x00000001      // This bit is set when the PID check field fails


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_ERREN register.
//
//*****************************************************************************

#define BTSERREN                      0x00000080      // BTSERR Interrupt Enable
#define OWNERREN                      0x00000040      // OWNERR Interrupt Enable
#define DMAERREN                      0x00000020      // DMAERR Interrupt Enable
#define BTOERREN                      0x00000010      // BTOERR Interrupt Enable
#define DFN8EN                        0x00000008      // DFN8 Interrupt Enable
#define CRC16EN                       0x00000004      // CRC16 Interrupt Enable
#define CRC5EOFEN                     0x00000002      // CRC5/EOF Interrupt Enable
#define PIDERREN                      0x00000001      // PIDERR Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_STAT register.
//
//*****************************************************************************

#define ENDP                          0x00000780      // This four-bit field encodes the endpoint address that received or transmitted the previous token
#define TX                            0x00000008      // This bit is set if the last buffer descriptor updated was in the odd bank of the BDT
#define ODD                           0x00000004      // This bit is set if the last buffer descriptor updated was in the odd bank of the BDT


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_CTL register.
//
//*****************************************************************************

#define JSTATE                        0x00000080      // Live USB differential receiver JSTATE signal
#define SE0                           0x00000040      // Live USB Single Ended Zero signal
#define TXSUSPENDTOKENBUSY            0x00000020      // In Host mode, TOKEN_BUSY is set when the USB module is busy executing a USB token
#define RESET                         0x00000010      // Setting this bit enables the USB Module to generate USB reset signaling
#define HOSTMODEEN                    0x00000008      // When set to 1, this bit enables the USB Module to operate in Host mode
#define RESUME                        0x00000004      // When set to 1 this bit enables the USB Module to execute resume signaling
#define ODDRST                        0x00000002      // Setting this bit to 1 resets all the BDT ODD ping/pong fields to 0, which then specifies the EVEN BDT bank
#define USBENSOFEN                    0x00000001      // USB Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_ADDR register.
//
//*****************************************************************************

#define LSEN                          0x00000080      // Low Speed Enable bit
#define ADDR                          0x00001FC0      // USB Address


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_ENDPTn register.
//
//*****************************************************************************

#define HOSTWOHUB                     0x00000080      // Host without a hub
#define RETRYDIS                      0x00000040      // This is a Host mode only bit and is present in the control register for endpoint 0 (ENDPT0) only
#define Reserved                      0x00000020      // This field is reserved
#define EPCTLDIS                      0x00000010      // This bit, when set, disables control (SETUP) transfers
#define EPRXEN                        0x00000008      // This bit, when set, enables the endpoint for RX transfers
#define EPTXEN                        0x00000004      // This bit, when set, enables the endpoint for TX transfers
#define EPSTALL                       0x00000002      // When set, this bit indicates that the endpoint is stalled
#define EPHSHK                        0x00000001      // When set this bit enables an endpoint to perform handshaking during a transaction to this endpoint


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_BDTPAGE1 register.
//
//*****************************************************************************

#define BDTBA                         0x00003F80      // Provides address bits 15 through 9 of the BDT base address


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_FRMNUML register.
//
//*****************************************************************************

#define FRM[7:0]                      0x00007F80      // This 8-bit field and the 3-bit field in the Frame Number Register High are used to compute the address where the current Buffer Descriptor Table (BDT) resides in system memory


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_FRMNUMH register.
//
//*****************************************************************************

#define FRM[10:8]                     0x0000001C      // This 3-bit field and the 8-bit field in the Frame Number Register Low are used to compute the address where the current Buffer Descriptor Table (BDT) resides in system memory


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_TOKEN register.
//
//*****************************************************************************

#define TOKENPID                      0x00000780      // Contains the token type executed by the USB module
#define TOKENENDPT                    0x00000078      // Holds the Endpoint address for the token command


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_SOFTHLD register.
//
//*****************************************************************************

#define CNT                           0x00007F80      // Represents the SOF count threshold in byte times when SOFDYNTHLD=0 or 8 byte times when SOFDYNTHLD=1


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_BDTPAGE2 register.
//
//*****************************************************************************

#define BDTBA                         0x00003F80      // Provides address bits 23 through 16 of the BDT base address that defines the location of Buffer Descriptor Table resides in system memory


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_BDTPAGE3 register.
//
//*****************************************************************************

#define BDTBA                         0x00003F80      // Provides address bits 31 through 24 of the BDT base address that defines the location of Buffer Descriptor Table resides in system memory


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_USBCTRL register.
//
//*****************************************************************************

#define SUSP                          0x00000080      // Places the USB transceiver into the suspend state
#define PDE                           0x00000040      // Enables the weak pulldowns on the USB transceiver
#define UARTCHLS                      0x00000020      // UART Signal Channel Select
#define UARTSEL                       0x00000010      // Selects USB signals to be used as UART signals


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_OBSERVE register.
//
//*****************************************************************************

#define DPPU                          0x00000080      // Provides observability of the D+ Pullup enable at the USB transceiver
#define DPPD                          0x00000040      // Provides observability of the D+ Pulldown enable at the USB transceiver
#define DMPD                          0x00000010      // Provides observability of the D- Pulldown enable at the USB transceiver


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_CONTROL register.
//
//*****************************************************************************

#define DPPULLUPNONOTG                0x00000010      // Provides control of the DP Pullup in USBOTG, if USB is configured in non-OTG device mode


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_USBTRC0 register.
//
//*****************************************************************************

#define USBRESET                      0x00000080      // Generates a hard reset to USBOTG
#define USBRESMEN                     0x00000020      // Asynchronous Resume Interrupt Enable
#define VFEDG_DET                     0x00000010      // VREGIN Falling Edge Interrupt Detect
#define VREDG_DET                     0x00000008      // VREGIN Rising Edge Interrupt Detect
#define USB_CLK_RECOVERY_INT          0x00000004      // Combined USB Clock Recovery interrupt status
#define SYNC_DET                      0x00000002      // Synchronous USB Interrupt Detect
#define USB_RESUME_INT                0x00000001      // USB Asynchronous Interrupt


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_USBFRMADJUST register.
//
//*****************************************************************************

#define ADJ                           0x00007F80      // Frame Adjustment


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_MISCCTRL register.
//
//*****************************************************************************

#define STL_ADJ_EN                    0x00000080      // USB Peripheral mode Stall Adjust Enable
#define VFEDG_EN                      0x00000010      // VREGIN Falling Edge Interrupt Enable
#define VREDG_EN                      0x00000008      // VREGIN Rising Edge Interrupt Enable
#define OWNERRISODIS                  0x00000004      // OWN Error Detect for ISO IN / ISO OUT Disable
#define SOFBUSSET                     0x00000002      // SOF_TOK Interrupt Generation Mode Select
#define SOFDYNTHLD                    0x00000001      // Dynamic SOF Threshold Compare mode


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_STALL_IL_DIS register.
//
//*****************************************************************************

#define STALL_I_DIS7-0                0x00007F80      // Disable endpoint 7-0 IN direction


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_STALL_IH_DIS register.
//
//*****************************************************************************

#define STALL_I_DIS15-8               0x00007F80      // Disable endpoint 15-8 IN direction


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_STALL_OL_DIS register.
//
//*****************************************************************************

#define STALL_O_DIS7-0                0x00007F80      // Disable endpoint 7-0 OUT direction


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_STALL_OH_DIS register.
//
//*****************************************************************************

#define STALL_O_DIS15-8               0x00007F80      // Disable endpoint 15-8 OUT direction


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_CLK_RECOVER_CTRL register.
//
//*****************************************************************************

#define CLOCK_RECOVER_EN              0x00000080      // Crystal-less USB enable
#define RESET_ROUGH_EN                0x00000040      // Reset/resume to rough phase enable
#define RESTART_IFRTRIM_EN            0x00000020      // Restart from IFR trim value


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_CLK_RECOVER_IRC_EN register.
//
//*****************************************************************************

#define IRC_EN                        0x00000002      // IRC48M enable
#define REG_EN                        0x00000001      // IRC48M regulator enable


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_CLK_RECOVER_INT_EN register.
//
//*****************************************************************************

#define OVF_ERROR_EN                  0x00000010      // Determines whether OVF_ERROR condition signal is used in generation of USB_CLK_RECOVERY_INT


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_CLK_RECOVER_INT_STATUS register.
//
//*****************************************************************************

#define OVF_ERROR                     0x00000010      // OVF_ERROR condition signal


//*****************************************************************************
//
// The following are defines for the bit fields in the CANx_MCR register.
//
//*****************************************************************************

#define MDIS                          0x80000000      // Module Disable
#define FRZ                           0x40000000      // Freeze Enable
#define RFEN                          0x20000000      // Rx FIFO Enable
#define HALT                          0x10000000      // Halt FlexCAN
#define NOTRDY                        0x08000000      // FlexCAN Not Ready
#define WAKMSK                        0x04000000      // Wake Up Interrupt Mask
#define SOFTRST                       0x02000000      // Soft Reset
#define FRZACK                        0x01000000      // Freeze Mode Acknowledge
#define SUPV                          0x00800000      // Supervisor Mode
#define SLFWAK                        0x00400000      // Self Wake Up
#define WRNEN                         0x00200000      // Warning Interrupt Enable
#define LPMACK                        0x00100000      // Low-Power Mode Acknowledge
#define WAKSRC                        0x00080000      // Wake Up Source
#define DOZE                          0x00040000      // Doze Mode Enable
#define SRXDIS                        0x00020000      // Self Reception Disable
#define IRMQ                          0x00010000      // Individual Rx Masking And Queue Enable
#define DMA                           0x00008000      // DMA Enable
#define LPRIOEN                       0x00002000      // Local Priority Enable
#define AEN                           0x00001000      // Abort Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the CANx_CTRL1 register.
//
//*****************************************************************************

#define PRESDIV                       0x7F80000000      // Prescaler Division Factor
#define RJW                           0x01800000      // Resync Jump Width
#define PSEG1                         0x00E00000      // Phase Segment 1
#define PSEG2                         0x001C0000      // Phase Segment 2
#define BOFFMSK                       0x00008000      // Bus Off Interrupt Mask
#define ERRMSK                        0x00004000      // Error Interrupt Mask
#define CLKSRC                        0x00002000      // CAN Engine Clock Source
#define LPB                           0x00001000      // Loop Back Mode
#define TWRNMSK                       0x00000800      // Tx Warning Interrupt Mask
#define RWRNMSK                       0x00000400      // Rx Warning Interrupt Mask
#define SMP                           0x00000080      // CAN Bit Sampling
#define BOFFREC                       0x00000040      // Bus Off Recovery
#define TSYN                          0x00000020      // Timer Sync
#define LBUF                          0x00000010      // Lowest Buffer Transmitted First
#define LOM                           0x00000008      // Listen-Only Mode
#define PROPSEG                       0x0000001C      // Propagation Segment


//*****************************************************************************
//
// The following are defines for the bit fields in the CANx_TIMER register.
//
//*****************************************************************************

#define TIMER                         0x7FFF8000      // Timer Value


//*****************************************************************************
//
// The following are defines for the bit fields in the CANx_RXMGMASK register.
//
//*****************************************************************************

#define MG                            0x7FFFFFFF80000000      // Rx Mailboxes Global Mask Bits


//*****************************************************************************
//
// The following are defines for the bit fields in the CANx_RX14MASK register.
//
//*****************************************************************************

#define RX14M                         0x7FFFFFFF80000000      // Rx Buffer 14 Mask Bits


//*****************************************************************************
//
// The following are defines for the bit fields in the CANx_RX15MASK register.
//
//*****************************************************************************

#define RX15M                         0x7FFFFFFF80000000      // Rx Buffer 15 Mask Bits


//*****************************************************************************
//
// The following are defines for the bit fields in the CANx_ECR register.
//
//*****************************************************************************

#define RXERRCNT                      0x007F8000      // Receive Error Counter
#define TXERRCNT                      0x00007F80      // Transmit Error Counter


//*****************************************************************************
//
// The following are defines for the bit fields in the CANx_ESR1 register.
//
//*****************************************************************************

#define ERROVR                        0x00200000      // Error Overrun bit
#define BOFFDONEINT                   0x00100000      // Bus Off Done Interrupt
#define SYNCH                         0x00040000      // CAN Synchronization Status
#define TWRNINT                       0x00020000      // Tx Warning Interrupt Flag
#define RWRNINT                       0x00010000      // Rx Warning Interrupt Flag
#define BIT1ERR                       0x00008000      // Bit1 Error
#define BIT0ERR                       0x00004000      // Bit0 Error
#define ACKERR                        0x00002000      // Acknowledge Error
#define CRCERR                        0x00001000      // Cyclic Redundancy Check Error
#define FRMERR                        0x00000800      // Form Error
#define STFERR                        0x00000400      // Stuffing Error
#define TXWRN                         0x00000200      // TX Error Warning
#define RXWRN                         0x00000100      // Rx Error Warning
#define IDLE                          0x00000080      // IDLE
#define TX                            0x00000040      // FlexCAN In Transmission
#define FLTCONF                       0x00000060      // Fault Confinement State
#define RX                            0x00000008      // FlexCAN In Reception
#define BOFFINT                       0x00000004      // Bus Off Interrupt
#define ERRINT                        0x00000002      // Error Interrupt
#define WAKINT                        0x00000001      // Wake-Up Interrupt


//*****************************************************************************
//
// The following are defines for the bit fields in the CANx_IMASK1 register.
//
//*****************************************************************************

#define BUF31TO0M                     0x7FFFFFFF80000000      // Buffer MB i Mask


//*****************************************************************************
//
// The following are defines for the bit fields in the CANx_IFLAG1 register.
//
//*****************************************************************************

#define BUF31TO8I                     0x7FFFFF80000000      // Buffer MBi Interrupt
#define BUF7I                         0x00000080      // Buffer MB7 Interrupt Or "Rx FIFO Overflow"
#define BUF6I                         0x00000040      // Buffer MB6 Interrupt Or "Rx FIFO Warning"
#define BUF5I                         0x00000020      // Buffer MB5 Interrupt Or "Frames available in Rx FIFO"
#define BUF4TO1I                      0x000000F0      // Buffer MB i Interrupt Or "reserved"
#define BUF0I                         0x00000001      // Buffer MB0 Interrupt Or Clear FIFO bit


//*****************************************************************************
//
// The following are defines for the bit fields in the CANx_CTRL2 register.
//
//*****************************************************************************

#define BOFFDONEMSK                   0x40000000      // Bus Off Done Interrupt Mask
#define RFFN                          0x78000000      // Number Of Rx FIFO Filters
#define TASD                          0x0F800000      // Tx Arbitration Start Delay
#define MRP                           0x00040000      // Mailboxes Reception Priority
#define RRS                           0x00020000      // Remote Request Storing
#define EACEN                         0x00010000      // Entire Frame Arbitration Field Comparison Enable For Rx Mailboxes


//*****************************************************************************
//
// The following are defines for the bit fields in the CANx_ESR2 register.
//
//*****************************************************************************

#define LPTM                          0x1FC00000      // Lowest Priority Tx Mailbox
#define VPS                           0x00004000      // Valid Priority Status
#define IMB                           0x00002000      // Inactive Mailbox


//*****************************************************************************
//
// The following are defines for the bit fields in the CANx_CRCR register.
//
//*****************************************************************************

#define MBCRC                         0x1FC00000      // CRC Mailbox
#define TXCRC                         0x7FFF8000      // Transmitted CRC value


//*****************************************************************************
//
// The following are defines for the bit fields in the CANx_RXFGMASK register.
//
//*****************************************************************************

#define FGM                           0x7FFFFFFF80000000      // Rx FIFO Global Mask Bits


//*****************************************************************************
//
// The following are defines for the bit fields in the CANx_RXFIR register.
//
//*****************************************************************************

#define IDHIT                         0x0001FF00      // Identifier Acceptance Filter Hit Indicator


//*****************************************************************************
//
// The following are defines for the bit fields in the CANx_CBT register.
//
//*****************************************************************************

#define BTF                           0x80000000      // Bit Timing Format Enable
#define EPRESDIV                      0xFFC0000000      // Extended Prescaler Division Factor
#define ERJW                          0x00780000      // Extended Resync Jump Width
#define EPROPSEG                      0x001F8000      // Extended Propagation Segment
#define EPSEG1                        0x00003E00      // Extended Phase Segment 1
#define EPSEG2                        0x000001F0      // Extended Phase Segment 2 ::


//*****************************************************************************
//
// The following are defines for the bit fields in the CANx_RXIMRn register.
//
//*****************************************************************************

#define MI                            0x7FFFFFFF80000000      // Mask Identifier Bits ::


//*****************************************************************************
//
// The following are defines for the bit fields in the SPIx_MCR register.
//
//*****************************************************************************

#define MSTR                          0x80000000      // Master/Slave Mode Select
#define CONT_SCKE                     0x40000000      // Continuous SCK Enable
#define DCONF                         0x60000000      // SPI Configuration
#define FRZ                           0x08000000      // Freeze
#define MTFE                          0x04000000      // Modified Transfer Format Enable
#define PCSSE                         0x02000000      // Peripheral Chip Select Strobe Enable
#define ROOE                          0x01000000      // Receive FIFO Overflow Overwrite Enable
#define PCSIS                         0x07E00000      // Peripheral Chip Select x Inactive State
#define DOZE                          0x00008000      // Doze Enable
#define MDIS                          0x00004000      // Module Disable
#define DIS_TXF                       0x00002000      // Disable Transmit FIFO
#define DIS_RXF                       0x00001000      // Disable Receive FIFO
#define CLR_TXF                       0x00000800      // Clear TX FIFO
#define CLR_RXF                       0x00000400      // Clear RX FIFO
#define SMPL_PT                       0x00000600      // Sample Point
#define HALT                          0x00000001      // Halt


//*****************************************************************************
//
// The following are defines for the bit fields in the SPIx_TCR register.
//
//*****************************************************************************

#define SPI_TCNT                      0x7FFF80000000      // SPI Transfer Counter


//*****************************************************************************
//
// The following are defines for the bit fields in the SPIx_CTARn register.
//
//*****************************************************************************

#define DBR                           0x80000000      // Double Baud Rate
#define FMSZ                          0x3C0000000      // Frame Size
#define CPOL                          0x04000000      // Clock Polarity
#define CPHA                          0x02000000      // Clock Phase
#define LSBFE                         0x01000000      // LSB First
#define PCSSCK                        0x01800000      // PCS to SCK Delay Prescaler
#define PASC                          0x00600000      // After SCK Delay Prescaler
#define PDT                           0x00180000      // Delay after Transfer Prescaler
#define PBR                           0x00060000      // Baud Rate Prescaler
#define CSSCK                         0x00078000      // PCS to SCK Delay Scaler
#define ASC                           0x00007800      // After SCK Delay Scaler
#define DT                            0x00000780      // Delay After Transfer Scaler
#define BR                            0x00000078      // Baud Rate Scaler


//*****************************************************************************
//
// The following are defines for the bit fields in the SPIx_CTARn_SLAVE register.
//
//*****************************************************************************

#define FMSZ                          0x3C0000000      // Frame Size
#define CPOL                          0x04000000      // Clock Polarity
#define CPHA                          0x02000000      // Clock Phase


//*****************************************************************************
//
// The following are defines for the bit fields in the SPIx_SR register.
//
//*****************************************************************************

#define TCF                           0x80000000      // Transfer Complete Flag
#define TXRXS                         0x40000000      // TX and RX Status
#define EOQF                          0x10000000      // End of Queue Flag
#define TFUF                          0x08000000      // Transmit FIFO Underflow Flag
#define TFFF                          0x02000000      // Transmit FIFO Fill Flag
#define RFOF                          0x00080000      // Receive FIFO Overflow Flag
#define RFDF                          0x00020000      // Receive FIFO Drain Flag
#define TXCTR                         0x00078000      // TX FIFO Counter
#define TXNXTPTR                      0x00007800      // Transmit Next Pointer
#define RXCTR                         0x00000780      // RX FIFO Counter
#define POPNXTPTR                     0x00000078      // Pop Next Pointer


//*****************************************************************************
//
// The following are defines for the bit fields in the SPIx_RSER register.
//
//*****************************************************************************

#define TCF_RE                        0x80000000      // Transmission Complete Request Enable
#define EOQF_RE                       0x10000000      // Finished Request Enable
#define TFUF_RE                       0x08000000      // Transmit FIFO Underflow Request Enable
#define TFFF_RE                       0x02000000      // Transmit FIFO Fill Request Enable
#define TFFF_DIRS                     0x01000000      // Transmit FIFO Fill DMA or Interrupt Request Select
#define RFOF_RE                       0x00080000      // Receive FIFO Overflow Request Enable
#define RFDF_RE                       0x00020000      // Receive FIFO Drain Request Enable
#define RFDF_DIRS                     0x00010000      // Receive FIFO Drain DMA or Interrupt Request Select


//*****************************************************************************
//
// The following are defines for the bit fields in the SPIx_PUSHR register.
//
//*****************************************************************************

#define CONT                          0x80000000      // Continuous Peripheral Chip Select Enable
#define CTAS                          0x1C0000000      // Clock and Transfer Attributes Select
#define EOQ                           0x08000000      // End  Of Queue
#define CTCNT                         0x04000000      // Clear Transfer Counter
#define PCS                           0x07E00000      // Select which PCS signals are to be asserted      for  the  transfer
#define TXDATA                        0x7FFF8000      // Transmit Data


//*****************************************************************************
//
// The following are defines for the bit fields in the SPIx_PUSHR_SLAVE register.
//
//*****************************************************************************

#define TXDATA                        0x7FFF8000      // Transmit Data


//*****************************************************************************
//
// The following are defines for the bit fields in the SPIx_POPR register.
//
//*****************************************************************************

#define RXDATA                        0x7FFFFFFF80000000      // Received Data


//*****************************************************************************
//
// The following are defines for the bit fields in the SPIx_TXFRn register.
//
//*****************************************************************************

#define TXCMD_TXDATA                  0x7FFF80000000      // Transmit Command or Transmit Data
#define TXDATA                        0x7FFF8000      // Transmit Data


//*****************************************************************************
//
// The following are defines for the bit fields in the SPIx_RXFRn register.
//
//*****************************************************************************

#define RXDATA                        0x7FFFFFFF80000000      // Receive Data ::


//*****************************************************************************
//
// The following are defines for the bit fields in the LPI2Cx_VERID register.
//
//*****************************************************************************

#define MAJOR                         0x7F80000000      // Major Version Number


//*****************************************************************************
//
// The following are defines for the bit fields in the LPI2Cx_PARAM register.
//
//*****************************************************************************

#define MRXFIFO                       0x00078000      // Master Receive FIFO Size


//*****************************************************************************
//
// The following are defines for the bit fields in the LPI2Cx_MCR register.
//
//*****************************************************************************

#define RRF                           0x00000200      // Reset Receive FIFO


//*****************************************************************************
//
// The following are defines for the bit fields in the LPI2Cx_MSR register.
//
//*****************************************************************************

#define BBF                           0x02000000      // Bus Busy Flag


//*****************************************************************************
//
// The following are defines for the bit fields in the LPI2Cx_MIER register.
//
//*****************************************************************************

#define DMIE                          0x00004000      // Data Match Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the LPI2Cx_MDER register.
//
//*****************************************************************************

#define RDDE                          0x00000002      // Receive Data DMA Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the LPI2Cx_MCFGR0 register.
//
//*****************************************************************************

#define RDMO                          0x00000200      // Receive Data Match Only


//*****************************************************************************
//
// The following are defines for the bit fields in the LPI2Cx_MCFGR1 register.
//
//*****************************************************************************

#define PINCFG                        0x1C000000      // Pin Configuration


//*****************************************************************************
//
// The following are defines for the bit fields in the LPI2Cx_MCFGR2 register.
//
//*****************************************************************************

#define FILTSDA                       0x78000000      // Glitch Filter SDA


//*****************************************************************************
//
// The following are defines for the bit fields in the LPI2Cx_MCFGR3 register.
//
//*****************************************************************************

#define PINLOW                        0x7FF80000      // Pin Low Timeout


//*****************************************************************************
//
// The following are defines for the bit fields in the LPI2Cx_MDMR register.
//
//*****************************************************************************

#define MATCH1                        0x7F800000      // Match 1 Value


//*****************************************************************************
//
// The following are defines for the bit fields in the LPI2Cx_MCCR0 register.
//
//*****************************************************************************

#define DATAVD                        0x7E0000000      // Data Valid Delay


//*****************************************************************************
//
// The following are defines for the bit fields in the LPI2Cx_MCCR1 register.
//
//*****************************************************************************

#define DATAVD                        0x7E0000000      // Data Valid Delay


//*****************************************************************************
//
// The following are defines for the bit fields in the LPI2Cx_MFCR register.
//
//*****************************************************************************

#define RXWATER                       0x7F800000      // Receive FIFO Watermark


//*****************************************************************************
//
// The following are defines for the bit fields in the LPI2Cx_MFSR register.
//
//*****************************************************************************

#define RXCOUNT                       0x7F800000      // Receive FIFO Count


//*****************************************************************************
//
// The following are defines for the bit fields in the LPI2Cx_MTDR register.
//
//*****************************************************************************

#define CMD                           0x00001C00      // Command Data


//*****************************************************************************
//
// The following are defines for the bit fields in the LPI2Cx_MRDR register.
//
//*****************************************************************************

#define RXEMPTY                       0x00004000      // RX Empty



//*****************************************************************************
//
// The following are defines for the bit fields in the LPI2Cx_SCR register.
//
//*****************************************************************************

#define RRF                           0x00000200      // Reset Receive FIFO
#define RTF                           0x00000100      // Reset Transmit FIFO
#define FILTDZ                        0x00000020      // Filter Doze Enable
#define FILTEN                        0x00000010      // Filter Enable
#define RST                           0x00000002      // Software Reset
#define SEN                           0x00000001      // Slave Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the LPI2Cx_SSR register.
//
//*****************************************************************************

#define BBF                           0x02000000      // Bus Busy Flag
#define SBF                           0x01000000      // Slave Busy Flag
#define SARF                          0x00008000      // SMBus Alert Response Flag
#define GCF                           0x00004000      // General Call Flag
#define AM1F                          0x00002000      // Address Match 1 Flag
#define AM0F                          0x00001000      // Address Match 0 Flag
#define FEF                           0x00000800      // FIFO Error Flag
#define BEF                           0x00000400      // Bit Error Flag
#define SDF                           0x00000200      // STOP Detect Flag
#define RSF                           0x00000100      // Repeated Start Flag
#define TAF                           0x00000008      // Transmit ACK Flag
#define AVF                           0x00000004      // Address Valid Flag
#define RDF                           0x00000002      // Receive Data Flag
#define TDF                           0x00000001      // Transmit Data Flag


//*****************************************************************************
//
// The following are defines for the bit fields in the LPI2Cx_SIER register.
//
//*****************************************************************************

#define SARIE                         0x00008000      // SMBus Alert Response Interrupt Enable
#define GCIE                          0x00004000      // General Call Interrupt Enable
#define AM1F                          0x00002000      // Address Match 1 Interrupt Enable
#define AM0IE                         0x00001000      // Address Match 0 Interrupt Enable
#define FEIE                          0x00000800      // FIFO Error Interrupt Enable
#define BEIE                          0x00000400      // Bit Error Interrupt Enable
#define SDIE                          0x00000200      // STOP Detect Interrupt Enable
#define RSIE                          0x00000100      // Repeated Start Interrupt Enable
#define TAIE                          0x00000008      // Transmit ACK Interrupt Enable
#define AVIE                          0x00000004      // Address Valid Interrupt Enable
#define RDIE                          0x00000002      // Receive Data Interrupt Enable
#define TDIE                          0x00000001      // Transmit Data Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the LPI2Cx_SDER register.
//
//*****************************************************************************

#define AVDE                          0x00000004      // Address Valid DMA Enable
#define RDDE                          0x00000002      // Receive Data DMA Enable
#define TDDE                          0x00000001      // Transmit Data DMA Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the LPI2Cx_SCFGR1 register.
//
//*****************************************************************************

#define ADDRCFG                       0x001C0000      // Address Configuration
#define HSMEN                         0x00002000      // High Speed Mode Enable
#define IGNACK                        0x00001000      // Ignore NACK
#define RXCFG                         0x00000800      // Receive Data Configuration
#define TXCFG                         0x00000400      // Transmit Flag Configuration
#define SAEN                          0x00000200      // SMBus Alert Enable
#define GCEN                          0x00000100      // General Call Enable
#define ACKSTALL                      0x00000008      // ACK SCL Stall
#define TXDSTALL                      0x00000004      // TX Data SCL Stall
#define RXSTALL                       0x00000002      // RX SCL Stall
#define ADRSTALL                      0x00000001      // Address SCL Stall


//*****************************************************************************
//
// The following are defines for the bit fields in the LPI2Cx_SCFGR2 register.
//
//*****************************************************************************

#define FILTSDA                       0x78000000      // Glitch Filter SDA
#define FILTSCL                       0x07800000      // Glitch Filter SCL
#define Reserved                      0x00018000      // 
#define DATAVD                        0x0007E000      // Data Valid Delay
#define Reserved                      0x00000780      // 
#define CLKHOLD                       0x00000078      // Clock Hold Time


//*****************************************************************************
//
// The following are defines for the bit fields in the LPI2Cx_SAMR register.
//
//*****************************************************************************

#define ADDR1                         0xFFC000000      // Address 1 Value
#define Reserved                      0x003F0000      // 
#define ADDR0                         0x000FFC00      // Address 0 Value
#define Reserved                      0x00000001      // 


//*****************************************************************************
//
// The following are defines for the bit fields in the LPI2Cx_SASR register.
//
//*****************************************************************************

#define ANV                           0x00004000      // Address Not Valid
#define Reserved                      0x0000E000      // 
#define RADDR                         0x001FFC00      // Received Address


//*****************************************************************************
//
// The following are defines for the bit fields in the LPI2Cx_STAR register.
//
//*****************************************************************************

#define TXNACK                        0x00000001      // Transmit NACK


//*****************************************************************************
//
// The following are defines for the bit fields in the LPI2Cx_STDR register.
//
//*****************************************************************************

#define Reserved                      0x7FFFFF80000000      // 
#define DATA                          0x00007F80      // Transmit Data


//*****************************************************************************
//
// The following are defines for the bit fields in the LPI2Cx_SRDR register.
//
//*****************************************************************************

#define Reserved                      0x7FFF80000000      // 
#define SOF                           0x00008000      // Start Of Frame
#define RXEMPTY                       0x00004000      // RX Empty
#define Reserved                      0x0007E000      // 
#define DATA                          0x00007F80      // Receive Data ::


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_BDH register.
//
//*****************************************************************************

#define LBKDIE                        0x00000080      // LIN Break Detect Interrupt or DMA Request Enable
#define RXEDGIE                       0x00000040      // RxD Input Active Edge Interrupt Enable
#define SBNS                          0x00000020      // Stop Bit Number Select
#define SBR                           0x000001F0      // UART Baud Rate Bits


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_BDL register.
//
//*****************************************************************************

#define SBR                           0x01FFF000      // UART Baud Rate Bits


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_C1 register.
//
//*****************************************************************************

#define LOOPS                         0x00000080      // Loop Mode Select
#define UARTSWAI                      0x00000040      // UART Stops in Wait Mode
#define RSRC                          0x00000020      // Receiver Source Select
#define M                             0x00000010      // 9-bit or 8-bit Mode Select
#define WAKE                          0x00000008      // Receiver Wakeup Method Select
#define ILT                           0x00000004      // Idle Line Type Select
#define PE                            0x00000002      // Parity Enable
#define PT                            0x00000001      // Parity Type


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_C2 register.
//
//*****************************************************************************

#define TIE                           0x00000080      // Transmitter Interrupt or DMA Transfer Enable
#define TCIE                          0x00000040      // Transmission Complete Interrupt Enable
#define RIE                           0x00000020      // Receiver Full Interrupt or DMA Transfer Enable
#define ILIE                          0x00000010      // Idle Line Interrupt Enable
#define TE                            0x00000008      // Transmitter Enable
#define RE                            0x00000004      // Receiver Enable
#define RWU                           0x00000002      // Receiver Wakeup Control
#define SBK                           0x00000001      // Send Break


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_S1 register.
//
//*****************************************************************************

#define TDRE                          0x00000080      // Transmit Data Register Empty Flag
#define TC                            0x00000040      // Transmit Complete Flag
#define RDRF                          0x00000020      // Receive Data Register Full Flag
#define IDLE                          0x00000010      // Idle Line Flag
#define OR                            0x00000008      // Receiver Overrun Flag
#define NF                            0x00000004      // Noise Flag
#define FE                            0x00000002      // Framing Error Flag
#define PF                            0x00000001      // Parity Error Flag


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_S2 register.
//
//*****************************************************************************

#define LBKDIF                        0x00000080      // LIN Break Detect Interrupt Flag
#define RXEDGIF                       0x00000040      // RxD Pin Active Edge Interrupt Flag
#define MSBF                          0x00000020      // Most Significant Bit First
#define RXINV                         0x00000010      // Receive Data Inversion
#define RWUID                         0x00000008      // Receive Wakeup Idle Detect
#define BRK13                         0x00000004      // Break Transmit Character Length
#define LBKDE                         0x00000002      // LIN Break Detection Enable
#define RAF                           0x00000001      // Receiver Active Flag


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_C3 register.
//
//*****************************************************************************

#define R8                            0x00000080      // Received Bit 8
#define T8                            0x00000040      // Transmit Bit 8
#define TXDIR                         0x00000020      // Transmitter Pin Data Direction in Single-Wire mode
#define TXINV                         0x00000010      // Transmit Data Inversion
#define ORIE                          0x00000008      // Overrun Error Interrupt Enable
#define NEIE                          0x00000004      // Noise Error Interrupt Enable
#define FEIE                          0x00000002      // Framing Error Interrupt Enable
#define PEIE                          0x00000001      // Parity Error Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_MA1 register.
//
//*****************************************************************************

#define MA                            0x00007F80      // Match Address


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_MA2 register.
//
//*****************************************************************************

#define MA                            0x00007F80      // Match Address


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_C4 register.
//
//*****************************************************************************

#define MAEN1                         0x00000080      // Match Address Mode Enable 1
#define MAEN2                         0x00000040      // Match Address Mode Enable 2
#define M10                           0x00000020      // 10-bit Mode select


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_C5 register.
//
//*****************************************************************************

#define TDMAS                         0x00000080      // Transmitter DMA Select
#define RDMAS                         0x00000020      // Receiver Full DMA Select
#define LBKDDMAS                      0x00000010      // LIN Break Detect DMA Select Bit


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_ED register.
//
//*****************************************************************************

#define NOISY                         0x00000080      // 
#define PARITYE                       0x00000040      // 


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_MODEM register.
//
//*****************************************************************************

#define RXRTSE                        0x00000008      // Receiver request-to-send enable
#define TXRTSPOL                      0x00000004      // Transmitter request-to-send polarity
#define TXRTSE                        0x00000002      // Transmitter request-to-send enable
#define TXCTSE                        0x00000001      // Transmitter clear-to-send enable


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_IR register.
//
//*****************************************************************************

#define IREN                          0x00000004      // Infrared enable
#define TNP                           0x00000006      // Transmitter narrow pulse


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_PFIFO register.
//
//*****************************************************************************

#define TXFE                          0x00000080      // Transmit FIFO Enable
#define TXFIFOSIZE                    0x000001C0      // Transmit FIFO Buffer Depth
#define RXFE                          0x00000008      // Receive FIFO Enable
#define RXFIFOSIZE                    0x0000001C      // Receive FIFO Buffer Depth


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_CFIFO register.
//
//*****************************************************************************

#define TXFLUSH                       0x00000080      // Transmit FIFO/Buffer Flush
#define RXFLUSH                       0x00000040      // Receive FIFO/Buffer Flush
#define RXOFE                         0x00000004      // Receive FIFO Overflow Interrupt Enable
#define TXOFE                         0x00000002      // Transmit FIFO Overflow Interrupt Enable
#define RXUFE                         0x00000001      // Receive FIFO Underflow Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_SFIFO register.
//
//*****************************************************************************

#define TXEMPT                        0x00000080      // Transmit Buffer/FIFO Empty
#define RXEMPT                        0x00000040      // Receive Buffer/FIFO Empty
#define RXOF                          0x00000004      // Receiver Buffer Overflow Flag
#define TXOF                          0x00000002      // Transmitter Buffer Overflow Flag
#define RXUF                          0x00000001      // Receiver Buffer Underflow Flag


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_TWFIFO register.
//
//*****************************************************************************

#define TXWATER                       0x00007F80      // Transmit Watermark


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_TCFIFO register.
//
//*****************************************************************************

#define TXCOUNT                       0x00007F80      // Transmit Counter


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_RWFIFO register.
//
//*****************************************************************************

#define RXWATER                       0x00007F80      // Receive Watermark


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_RCFIFO register.
//
//*****************************************************************************

#define RXCOUNT                       0x00007F80      // Receive Counter


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_C7816 register.
//
//*****************************************************************************

#define ONACK                         0x00000010      // Generate NACK on Overflow
#define ANACK                         0x00000008      // Generate NACK on Error
#define INIT                          0x00000004      // Detect Initial Character
#define TTYPE                         0x00000002      // Transfer Type
#define ISO_7816E                     0x00000001      // ISO-7816 Functionality Enabled


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_IE7816 register.
//
//*****************************************************************************

#define WTE                           0x00000080      // Wait Timer Interrupt Enable
#define CWTE                          0x00000040      // Character Wait Timer Interrupt Enable
#define BWTE                          0x00000020      // Block Wait Timer Interrupt Enable
#define INITDE                        0x00000010      // Initial Character Detected Interrupt Enable
#define ADTE                          0x00000008      // ATR Duration Timer Interrupt Enable
#define GTVE                          0x00000004      // Guard Timer Violated Interrupt Enable
#define TXTE                          0x00000002      // Transmit Threshold Exceeded Interrupt Enable
#define RXTE                          0x00000001      // Receive Threshold Exceeded Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_IS7816 register.
//
//*****************************************************************************

#define WT                            0x00000080      // Wait Timer Interrupt
#define CWT                           0x00000040      // Character Wait Timer Interrupt
#define BWT                           0x00000020      // Block Wait Timer Interrupt
#define INITD                         0x00000010      // Initial Character Detected Interrupt
#define ADT                           0x00000008      // ATR Duration Time Interrupt
#define GTV                           0x00000004      // Guard Timer Violated Interrupt
#define TXT                           0x00000002      // Transmit Threshold Exceeded Interrupt
#define RXT                           0x00000001      // Receive Threshold Exceeded Interrupt


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_WP7816 register.
//
//*****************************************************************************

#define WTX                           0x00007F80      // Wait Time Multiplier (C7816[TTYPE] = 1)


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_WN7816 register.
//
//*****************************************************************************

#define GTN                           0x00007F80      // Guard Band N


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_WF7816 register.
//
//*****************************************************************************

#define GTFD                          0x00007F80      // FD Multiplier


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_ET7816 register.
//
//*****************************************************************************

#define TXTHRESHOLD                   0x00000780      // Transmit NACK Threshold
#define RXTHRESHOLD                   0x00000078      // Receive NACK Threshold


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_TL7816 register.
//
//*****************************************************************************

#define TLEN                          0x00007F80      // Transmit Length


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_AP7816A_T0 register.
//
//*****************************************************************************

#define ADTI_H                        0x00007F80      // ATR Duration Time Integer High (C7816[TTYPE] = 0)


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_AP7816B_T0 register.
//
//*****************************************************************************

#define ADTI_L                        0x00007F80      // ATR Duration Time Integer Low (C7816[TTYPE] = 0)


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_WP7816A_T0 register.
//
//*****************************************************************************

#define WI_H                          0x00007F80      // Wait Time Integer High (C7816[TTYPE] = 0)


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_WP7816A_T1 register.
//
//*****************************************************************************

#define BWI_H                         0x00007F80      // Block Wait Time Integer High (C7816[TTYPE] = 1)


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_WP7816B_T0 register.
//
//*****************************************************************************

#define WI_L                          0x00007F80      // Wait Time Integer Low (C7816[TTYPE] = 0)


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_WP7816B_T1 register.
//
//*****************************************************************************

#define BWI_L                         0x00007F80      // Block Wait Time Integer Low (C7816[TTYPE] = 1)


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_WGP7816_T1 register.
//
//*****************************************************************************

#define CWI1                          0x00000780      // Character Wait Time Integer 1 (C7816[TTYPE] = 1)
#define BGI                           0x00000078      // Block Guard Time Integer (C7816[TTYPE] = 1) ::


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_WP7816C_T1 register.
//
//*****************************************************************************

#define CWI2                          0x00007F80      //  ::
#define CWI2                          0x00000780      // Character Wait Time Integer 2 (C7816[TTYPE] = 1) ::


//*****************************************************************************
//
// The following are defines for the bit fields in the LPUARTx_BAUD register.
//
//*****************************************************************************

#define MAEN1                         0x80000000      // Match Address Mode Enable 1
#define MAEN2                         0x40000000      // Match Address Mode Enable 2
#define M10                           0x20000000      // 10-bit Mode select
#define OSR                           0x1F0000000      // Oversampling Ratio
#define TDMAE                         0x00800000      // Transmitter DMA Enable
#define RDMAE                         0x00200000      // Receiver Full DMA Enable
#define MATCFG                        0x00180000      // Match Configuration
#define BOTHEDGE                      0x00020000      // Both Edge Sampling
#define RESYNCDIS                     0x00010000      // Resynchronization Disable
#define LBKDIE                        0x00008000      // LIN Break Detect Interrupt Enable
#define RXEDGIE                       0x00004000      // RX Input Active Edge Interrupt Enable
#define SBNS                          0x00002000      // Stop Bit Number Select
#define SBR                           0x01FFF000      // Baud Rate Modulo Divisor


//*****************************************************************************
//
// The following are defines for the bit fields in the LPUARTx_STAT register.
//
//*****************************************************************************

#define LBKDIF                        0x80000000      // LIN Break Detect Interrupt Flag
#define RXEDGIF                       0x40000000      // LPUART_RX Pin Active Edge Interrupt Flag
#define MSBF                          0x20000000      // MSB First
#define RXINV                         0x10000000      // Receive Data Inversion
#define RWUID                         0x08000000      // Receive Wake Up Idle Detect
#define BRK13                         0x04000000      // Break Character Generation Length
#define LBKDE                         0x02000000      // LIN Break Detection Enable
#define RAF                           0x01000000      // Receiver Active Flag
#define TDRE                          0x00800000      // Transmit Data Register Empty Flag
#define TC                            0x00400000      // Transmission Complete Flag
#define RDRF                          0x00200000      // Receive Data Register Full Flag
#define IDLE                          0x00100000      // Idle Line Flag
#define OR                            0x00080000      // Receiver Overrun Flag
#define NF                            0x00040000      // Noise Flag
#define FE                            0x00020000      // Framing Error Flag
#define PF                            0x00010000      // Parity Error Flag
#define MA1F                          0x00008000      // Match 1 Flag
#define MA2F                          0x00004000      // Match 2 Flag


//*****************************************************************************
//
// The following are defines for the bit fields in the LPUARTx_CTRL register.
//
//*****************************************************************************

#define R8T9                          0x80000000      // Receive Bit 8 / Transmit Bit 9
#define R9T8                          0x40000000      // Receive Bit 9 / Transmit Bit 8
#define TXDIR                         0x20000000      // LPUART_TX Pin Direction in Single-Wire Mode
#define TXINV                         0x10000000      // Transmit Data Inversion
#define ORIE                          0x08000000      // Overrun Interrupt Enable
#define NEIE                          0x04000000      // Noise Error Interrupt Enable
#define FEIE                          0x02000000      // Framing Error Interrupt Enable
#define PEIE                          0x01000000      // Parity Error Interrupt Enable
#define TIE                           0x00800000      // Transmit Interrupt Enable
#define TCIE                          0x00400000      // Transmission Complete Interrupt Enable for
#define RIE                           0x00200000      // Receiver Interrupt Enable
#define ILIE                          0x00100000      // Idle Line Interrupt Enable
#define TE                            0x00080000      // Transmitter Enable
#define RE                            0x00040000      // Receiver Enable
#define RWU                           0x00020000      // Receiver Wakeup Control
#define SBK                           0x00010000      // Send Break
#define MA1IE                         0x00008000      // Match 1 Interrupt Enable
#define MA2IE                         0x00004000      // Match 2 Interrupt Enable
#define IDLECFG                       0x00001C00      // Idle Configuration
#define LOOPS                         0x00000080      // Loop Mode Select
#define DOZEEN                        0x00000040      // Doze Enable
#define RSRC                          0x00000020      // Receiver Source Select
#define M                             0x00000010      // 9-Bit or 8-Bit Mode Select
#define WAKE                          0x00000008      // Receiver Wakeup Method Select
#define ILT                           0x00000004      // Idle Line Type Select
#define PE                            0x00000002      // Parity Enable
#define PT                            0x00000001      // Parity Type


//*****************************************************************************
//
// The following are defines for the bit fields in the LPUARTx_DATA register.
//
//*****************************************************************************

#define NOISY                         0x00008000      // The current received dataword contained in DATA[R9:R0] was received with noise
#define PARITYE                       0x00004000      // The current received dataword contained in DATA[R9:R0] was received with a parity error
#define FRETSC                        0x00002000      // Frame Error / Transmit Special Character
#define RXEMPT                        0x00001000      // Receive Buffer Empty
#define IDLINE                        0x00000800      // Idle Line
#define R9T9-R0T0                     0x0007FE00      // Read receive data buffer 9-0 or write transmit data buffer 9-0


//*****************************************************************************
//
// The following are defines for the bit fields in the LPUARTx_MATCH register.
//
//*****************************************************************************

#define MA2                           0x7FE000000      // Match Address 2
#define MA1                           0x001F8000      // Match Address 1


//*****************************************************************************
//
// The following are defines for the bit fields in the LPUARTx_MODIR register.
//
//*****************************************************************************

#define IREN                          0x60000000      // IrDA Enable
#define TNP                           0x08000000      // Transmitter Pulse
#define TXCTSSRC                      0x0C000000      // Transmitter CTS Source
#define TXCTSC                        0x01000000      // Transmitter CTS Control
#define RXRTSE                        0x00800000      // Receiver RTS Enable
#define TXRTSPOL                      0x00400000      // Transmitter RTS Polarity
#define TXRTSE                        0x00200000      // Transmitter RTS Enable
#define TXCTSE                        0x00100000      // Transmitter CTS Enable ::


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_TCSR register.
//
//*****************************************************************************

#define TE                            0x80000000      // Transmitter Enable
#define STOPE                         0x40000000      // Stop Enable
#define DBGE                          0x20000000      // Debug Enable
#define BCE                           0x10000000      // Bit Clock Enable
#define FR                            0x02000000      // FIFO Reset
#define SR                            0x01000000      // Software Reset
#define WSF                           0x03800000      // Word Start Flag
#define SEF                           0x00080000      // Sync Error Flag
#define FEF                           0x00040000      // FIFO Error Flag
#define FWF                           0x00020000      // FIFO Warning Flag
#define FRF                           0x00010000      // FIFO Request Flag
#define WSIE                          0x00001000      // Word Start Interrupt Enable
#define SEIE                          0x00000800      // Sync Error Interrupt Enable
#define FEIE                          0x00000400      // FIFO Error Interrupt Enable
#define FWIE                          0x00000200      // FIFO Warning Interrupt Enable
#define FRIE                          0x00000100      // FIFO Request Interrupt Enable
#define FWDE                          0x00000002      // FIFO Warning DMA Enable
#define FRDE                          0x00000001      // FIFO Request DMA Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_TCR1 register.
//
//*****************************************************************************

#define TFW                           0x00000001      // Transmit FIFO Watermark


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_TCR2 register.
//
//*****************************************************************************

#define SYNC                          0x180000000      // Synchronous Mode
#define BCS                           0x20000000      // Bit Clock Swap
#define BCI                           0x10000000      // Bit Clock Input
#define MSEL                          0x18000000      // MCLK Select
#define BCP                           0x02000000      // Bit Clock Polarity
#define BCD                           0x01000000      // Bit Clock Direction
#define DIV                           0x00007F80      // Bit Clock Divide


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_TCR3 register.
//
//*****************************************************************************

#define TCE                           0x00010000      // Transmit Channel Enable
#define WDFL                          0x00000001      // Word Flag Configuration


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_TCR4 register.
//
//*****************************************************************************

#define FCONT                         0x10000000      // FIFO Continue on Error
#define FPACK                         0x06000000      // FIFO Packing Mode
#define FRSZ                          0x00780000      // Frame size
#define SYWD                          0x0001F000      // Sync Width
#define MF                            0x00000010      // MSB First
#define FSE                           0x00000008      // Frame Sync Early
#define ONDEM                         0x00000004      // On Demand Mode
#define FSP                           0x00000002      // Frame Sync Polarity
#define FSD                           0x00000001      // Frame Sync Direction


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_TCR5 register.
//
//*****************************************************************************

#define WNW                           0x1F0000000      // Word N Width
#define W0W                           0x01F00000      // Word 0 Width
#define FBT                           0x0001F000      // First Bit Shifted


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_TDRn register.
//
//*****************************************************************************

#define TDR                           0x7FFFFFFF80000000      // Transmit Data Register


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_TFRn register.
//
//*****************************************************************************

#define WFP                           0x00780000      // Write FIFO Pointer
#define RFP                           0x07FF8000      // Read FIFO Pointer


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_TMR register.
//
//*****************************************************************************

#define TWM                           0x7FFF8000      // Transmit Word Mask


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_RCSR register.
//
//*****************************************************************************

#define RE                            0x80000000      // Receiver Enable
#define STOPE                         0x40000000      // Stop Enable
#define DBGE                          0x20000000      // Debug Enable
#define BCE                           0x10000000      // Bit Clock Enable
#define FR                            0x02000000      // FIFO Reset
#define SR                            0x01000000      // Software Reset
#define WSF                           0x03800000      // Word Start Flag
#define SEF                           0x00080000      // Sync Error Flag
#define FEF                           0x00040000      // FIFO Error Flag
#define FWF                           0x00020000      // FIFO Warning Flag
#define FRF                           0x00010000      // FIFO Request Flag
#define WSIE                          0x00001000      // Word Start Interrupt Enable
#define SEIE                          0x00000800      // Sync Error Interrupt Enable
#define FEIE                          0x00000400      // FIFO Error Interrupt Enable
#define FWIE                          0x00000200      // FIFO Warning Interrupt Enable
#define FRIE                          0x00000100      // FIFO Request Interrupt Enable
#define FWDE                          0x00000002      // FIFO Warning DMA Enable
#define FRDE                          0x00000001      // FIFO Request DMA Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_RCR1 register.
//
//*****************************************************************************

#define RFW                           0x00000001      // Receive FIFO Watermark


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_RCR2 register.
//
//*****************************************************************************

#define SYNC                          0x180000000      // Synchronous Mode
#define BCS                           0x20000000      // Bit Clock Swap
#define BCI                           0x10000000      // Bit Clock Input
#define MSEL                          0x18000000      // MCLK Select
#define BCP                           0x02000000      // Bit Clock Polarity
#define BCD                           0x01000000      // Bit Clock Direction
#define DIV                           0x00007F80      // Bit Clock Divide


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_RCR3 register.
//
//*****************************************************************************

#define RCE                           0x00010000      // Receive Channel Enable
#define WDFL                          0x00000001      // Word Flag Configuration


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_RCR4 register.
//
//*****************************************************************************

#define FCONT                         0x10000000      // FIFO Continue on Error
#define FPACK                         0x06000000      // FIFO Packing Mode
#define FRSZ                          0x00780000      // Frame size
#define SYWD                          0x0001F000      // Sync Width
#define MF                            0x00000010      // MSB First
#define FSE                           0x00000008      // Frame Sync Early
#define ONDEM                         0x00000004      // On Demand Mode
#define FSP                           0x00000002      // Frame Sync Polarity
#define FSD                           0x00000001      // Frame Sync Direction


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_RCR5 register.
//
//*****************************************************************************

#define WNW                           0x1F0000000      // Word N Width
#define W0W                           0x01F00000      // Word 0 Width
#define FBT                           0x0001F000      // First Bit Shifted


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_RDRn register.
//
//*****************************************************************************

#define RDR                           0x7FFFFFFF80000000      // Receive Data Register


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_RFRn register.
//
//*****************************************************************************

#define WFP                           0x00780000      // Write FIFO Pointer
#define RFP                           0x07FF8000      // Read FIFO Pointer
#define RFP                           0x01FFC000      // FIFO read pointer for receive data channel


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_RMR register.
//
//*****************************************************************************

#define RWM                           0x7FFF8000      // Receive Word Mask
#define RWM                           0x7FFF80000000      // Receive Word Mask


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_MCR register.
//
//*****************************************************************************

#define DUF                           0x80000000      // Divider Update Flag
#define MOE                           0x40000000      // MCLK Output Enable
#define MICS                          0x06000000      // MCLK Input Clock Select


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_MDR register.
//
//*****************************************************************************

#define FRACT                         0x07F80000      // MCLK Fraction
#define DIVIDE                        0x007FF800      // MCLK Divide ::


//*****************************************************************************
//
// The following are defines for the bit fields in the GPIOx_PDOR register.
//
//*****************************************************************************

#define PDO                           0x7FFFFFFF80000000      // Port Data Output Register bits for unbonded pins return a undefined value when read.


//*****************************************************************************
//
// The following are defines for the bit fields in the GPIOx_PSOR register.
//
//*****************************************************************************

#define PTSO                          0x7FFFFFFF80000000      // Port Set Output


//*****************************************************************************
//
// The following are defines for the bit fields in the GPIOx_PCOR register.
//
//*****************************************************************************

#define PTCO                          0x7FFFFFFF80000000      // Port Clear Output


//*****************************************************************************
//
// The following are defines for the bit fields in the GPIOx_PTOR register.
//
//*****************************************************************************

#define PTTO                          0x7FFFFFFF80000000      // Port Toggle Output


//*****************************************************************************
//
// The following are defines for the bit fields in the GPIOx_PDIR register.
//
//*****************************************************************************

#define PDI                           0x7FFFFFFF80000000      // Port Data Input


//*****************************************************************************
//
// The following are defines for the bit fields in the GPIOx_PDDR register.
//
//*****************************************************************************

#define PDD                           0x7FFFFFFF80000000      // Port Data Direction


//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_VERID register.
//
//*****************************************************************************

#define MAJOR                         0x7F80000000      // Major Version Number


//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_PARAM register.
//
//*****************************************************************************

#define TRIGGER                       0x7F80000000      // Trigger Number


//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_CTRL register.
//
//*****************************************************************************

#define DOZEN                         0x80000000      // Doze Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_PIN register.
//
//*****************************************************************************

#define PDI                           0x00000001      // Pin Data Input


//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_SHIFTSTAT register.
//
//*****************************************************************************

#define SSF                           0x00000001      // Shifter Status Flag


//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_SHIFTERR register.
//
//*****************************************************************************

#define SEF                           0x00000001      // Shifter Error Flags


//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_TIMSTAT register.
//
//*****************************************************************************

#define TSF                           0x00000001      // Timer Status Flags


//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_SHIFTSIEN register.
//
//*****************************************************************************

#define SSIE                          0x00000001      // Shifter Status Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_SHIFTEIEN register.
//
//*****************************************************************************

#define SEIE                          0x00000001      // Shifter Error Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_TIMIEN register.
//
//*****************************************************************************

#define TEIE                          0x00000001      // Timer Status Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_SHIFTSDEN register.
//
//*****************************************************************************

#define SSDE                          0x00000001      // Shifter Status DMA Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_SHIFTCTLn register.
//
//*****************************************************************************

#define TIMSEL                        0x06000000      // Timer Select


//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_SHIFTCFGn register.
//
//*****************************************************************************

#define INSRC                         0x00000100      // Input Source


//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_SHIFTBUFn register.
//
//*****************************************************************************

#define SHIFTBUF                      0x7FFFFFFF80000000      // Shift Buffer


//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_SHIFTBUFBISn register.
//
//*****************************************************************************

#define SHIFTBUFBIS                   0x7FFFFFFF80000000      // Shift Buffer


//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_SHIFTBUFBYSn register.
//
//*****************************************************************************

#define SHIFTBUFBYS                   0x7FFFFFFF80000000      // Shift Buffer



//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_SHIFTBUFBBSn register.
//
//*****************************************************************************

#define SHIFTBUFBBS                   0x7FFFFFFF80000000      // Shift Buffer



//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_TIMCTLn register.
//
//*****************************************************************************

#define TRGSEL                        0x78000000      // Trigger Select
#define TRGPOL                        0x00800000      // Trigger Polarity
#define TRGSRC                        0x00400000      // Trigger Source
#define PINCFG                        0x00060000      // Timer Pin Configuration
#define PINSEL                        0x00001C00      // Timer Pin Select
#define PINPOL                        0x00000080      // Timer Pin Polarity
#define TIMOD                         0x00000006      // Timer Mode


//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_TIMCFGn register.
//
//*****************************************************************************

#define TIMOUT                        0x06000000      // Timer Output
#define TIMDEC                        0x00600000      // Timer Decrement
#define TIMRST                        0x001C0000      // Timer Reset
#define TIMDIS                        0x0001C000      // Timer Disable
#define TIMENA                        0x00001C00      // Timer Enable
#define TSTOP                         0x00000060      // Timer Stop Bit
#define TSTART                        0x00000002      // Timer Start Bit


//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_TIMCMPn register.
//
//*****************************************************************************

#define CMP                           0x7FFF8000      // Compare Value



#endif // __MKS20FN256VLH12_H__

