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

#ifndef __MK28FN2M0ACAU15R_H__
#define __MK28FN2M0ACAU15R_H__



//*****************************************************************************
//
// Interrupt assignments
//
//*****************************************************************************

#define NUMBER_OF_INT_VECTORS                   37               // Number of interrupts in the Vector table
#define NotAvail_IRQn                           -36              // Not available device specific interrupt
#define NonMaskableInterrupt_IRQn               -14              // Non-maskable Interrupt (NMI)
#define HardFault_IRQn                          -13              // Hard Fault
#define MemManageFault_IRQn                     -12              // MemManage Fault
#define BusFault_IRQn                           -11              // Bus Fault
#define UsageFault_IRQn                         -10              // Usage Fault
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
#define DMA11_IRQn                              11               // DMA channel 11, 27 transfer complete
#define DMA12_IRQn                              12               // DMA channel 12, 28 transfer complete
#define DMA13_IRQn                              13               // DMA channel 13, 29 transfer complete
#define DMA14_IRQn                              14               // DMA channel 14, 30 transfer complete
#define DMA15_IRQn                              15               // DMA channel 15, 31 transfer complete
#define DMA_Error_IRQn                          16               // DMA error interrupt channels 0-31
#define MCM_Or_RDC_Interrupt_IRQn               17               // MCM or RDC interrupt
#define Command_Complete_IRQn                   18               // Command complete
#define Read_Collision_IRQn                     19               // Read collision
#define PMC_IRQn                                20               // Low-voltage detect, low-voltage warning, high-voltage detect
#define LLWU_IRQn                               21               // Low Leakage Wakeup
#define Both_Watchdog_Modules_Share_This_Interrupt_IRQn 22               // Both watchdog modules share this interrupt
#define True_Randon_Number_Generator_IRQn       23               // True Randon Number Generator
#define I2C0_IRQn                               24               // -
#define I2C1_IRQn                               25               // -
#define SPI0_IRQn                               26               // Single interrupt vector for all sources
#define SPI1_IRQn                               27               // Single interrupt vector for all sources
#define Transmit_IRQn                           28               // Transmit
#define Receive_IRQn                            29               // Receive
#define Single_Interrupt_Vector_For_LPUART_SourceS_IRQn 30               // Single interrupt vector for LPUART sources
#define Single_Interrupt_Vector_For_LPUART_SourceS_IRQn 31               // Single interrupt vector for LPUART sources



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
#define SIM_SOPT1CFG                  (*((volatile uint32_t *)0x40047004))      // SOPT1 Configuration Register (SIM_SOPT1CFG)
#define SIM_USBPHYCTL                 (*((volatile uint32_t *)0x40047008))      // USB PHY Control Register (SIM_USBPHYCTL)
#define SIM_SOPT2                     (*((volatile uint32_t *)0x40048004))      // System Options Register 2 (SIM_SOPT2)
#define SIM_SOPT4                     (*((volatile uint32_t *)0x4004800C))      // System Options Register 4 (SIM_SOPT4)
#define SIM_SOPT5                     (*((volatile uint32_t *)0x40048010))      // System Options Register 5 (SIM_SOPT5)
#define SIM_SOPT7                     (*((volatile uint32_t *)0x40048018))      // System Options Register 7 (SIM_SOPT7)
#define SIM_SOPT8                     (*((volatile uint32_t *)0x4004801C))      // System Options Register 8 (SIM_SOPT8)
#define SIM_SOPT9                     (*((volatile uint32_t *)0x40048020))      // System Options Register 9 (SIM_SOPT9)
#define SIM_SDID                      (*((volatile uint32_t *)0x40048024))      // System Device Identification Register (SIM_SDID)
#define SIM_SCGC1                     (*((volatile uint32_t *)0x40048028))      // System Clock Gating Control Register 1 (SIM_SCGC1)
#define SIM_SCGC2                     (*((volatile uint32_t *)0x4004802C))      // System Clock Gating Control Register 2 (SIM_SCGC2)
#define SIM_SCGC3                     (*((volatile uint32_t *)0x40048030))      // System Clock Gating Control Register 3 (SIM_SCGC3)
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
#define SIM_CLKDIV4                   (*((volatile uint32_t *)0x40048068))      // System Clock Divider Register 4 (SIM_CLKDIV4)


//*****************************************************************************
//
// Reset Control Module (RCM) registers
//
//*****************************************************************************

#define RCM_SRS0                      (*((volatile uint32_t *)0x4007F000))      // System Reset Status Register 0
#define RCM_SRS1                      (*((volatile uint32_t *)0x4007F001))      // System Reset Status Register 1
#define RCM_RPFC                      (*((volatile uint32_t *)0x4007F004))      // Reset Pin Filter Control register
#define RCM_RPFW                      (*((volatile uint32_t *)0x4007F005))      // Reset Pin Filter Width register
#define RCM_FM                        (*((volatile uint32_t *)0x4007F006))      // Force Mode Register
#define RCM_MR                        (*((volatile uint32_t *)0x4007F007))      // Mode Register
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
// Power Management Controller (PMC) registers
//
//*****************************************************************************

#define PMC_LVDSC1                    (*((volatile uint32_t *)0x4007D000))      // Low Voltage Detect Status And Control 1 register
#define PMC_LVDSC2                    (*((volatile uint32_t *)0x4007D001))      // Low Voltage Detect Status And Control 2 register
#define PMC_REGSC                     (*((volatile uint32_t *)0x4007D002))      // Regulator Status And Control register
#define PMC_HVDSC1                    (*((volatile uint32_t *)0x4007D00B))      // High Voltage Detect Status And Control 1 register
#define PMC_SRAMCTL                   (*((volatile uint32_t *)0x4007D00C))      // SRAM VLLS2 Control register


//*****************************************************************************
//
// Miscellaneous Control Module (MCM) registers
//
//*****************************************************************************

#define MCM_PLASC                     (*((volatile uint32_t *)0xE0080008))      // Crossbar Switch (AXBS) Slave Configuration
#define MCM_PLAMC                     (*((volatile uint32_t *)0xE008000A))      // Crossbar Switch (AXBS) Master Configuration
#define MCM_CR                        (*((volatile uint32_t *)0xE008000C))      // Control Register
#define MCM_ISCR                      (*((volatile uint32_t *)0xE0080010))      // Interrupt Status Register
#define MCM_FADR                      (*((volatile uint32_t *)0xE0080020))      // Fault address register
#define MCM_FATR                      (*((volatile uint32_t *)0xE0080024))      // Fault attributes register
#define MCM_FDR                       (*((volatile uint32_t *)0xE0080028))      // Fault data register
#define MCM_PID                       (*((volatile uint32_t *)0xE0080030))      // Process ID register
#define MCM_CPO                       (*((volatile uint32_t *)0xE0080040))      // Compute Operation Control Register


//*****************************************************************************
//
// Crossbar Switch (AXBS) registers
//
//*****************************************************************************

#define AXBS_PRS0                     (*((volatile uint32_t *)0x40004000))      // Priority Registers Slave
#define AXBS_CRS0                     (*((volatile uint32_t *)0x40004010))      // Control Register
#define AXBS_PRS1                     (*((volatile uint32_t *)0x40004100))      // Priority Registers Slave
#define AXBS_CRS1                     (*((volatile uint32_t *)0x40004110))      // Control Register
#define AXBS_PRS2                     (*((volatile uint32_t *)0x40004200))      // Priority Registers Slave
#define AXBS_CRS2                     (*((volatile uint32_t *)0x40004210))      // Control Register
#define AXBS_PRS3                     (*((volatile uint32_t *)0x40004300))      // Priority Registers Slave
#define AXBS_CRS3                     (*((volatile uint32_t *)0x40004310))      // Control Register
#define AXBS_PRS4                     (*((volatile uint32_t *)0x40004400))      // Priority Registers Slave
#define AXBS_CRS4                     (*((volatile uint32_t *)0x40004410))      // Control Register
#define AXBS_PRS5                     (*((volatile uint32_t *)0x40004500))      // Priority Registers Slave
#define AXBS_CRS5                     (*((volatile uint32_t *)0x40004510))      // Control Register
#define AXBS_PRS6                     (*((volatile uint32_t *)0x40004600))      // Priority Registers Slave
#define AXBS_CRS6                     (*((volatile uint32_t *)0x40004610))      // Control Register
#define AXBS_PRS7                     (*((volatile uint32_t *)0x40004700))      // Priority Registers Slave
#define AXBS_CRS7                     (*((volatile uint32_t *)0x40004710))      // Control Register
#define AXBS_MGPCR0                   (*((volatile uint32_t *)0x40004800))      // Master General Purpose Control Register
#define AXBS_MGPCR1                   (*((volatile uint32_t *)0x40004900))      // Master General Purpose Control Register
#define AXBS_MGPCR2                   (*((volatile uint32_t *)0x40004A00))      // Master General Purpose Control Register
#define AXBS_MGPCR3                   (*((volatile uint32_t *)0x40004B00))      // Master General Purpose Control Register
#define AXBS_MGPCR4                   (*((volatile uint32_t *)0x40004C00))      // Master General Purpose Control Register
#define AXBS_MGPCR5                   (*((volatile uint32_t *)0x40004D00))      // Master General Purpose Control Register
#define AXBS_MGPCR6                   (*((volatile uint32_t *)0x40004E00))      // Master General Purpose Control Register
#define AXBS_MGPCR7                   (*((volatile uint32_t *)0x40004F00))      // Master General Purpose Control Register


//*****************************************************************************
//
// Peripheral Bridge (AIPS-Lite) registers
//
//*****************************************************************************

#define AIPS0_MPRA                    (*((volatile uint32_t *)0x40000000))      // Master Privilege Register A (AIPS0_MPRA)
#define AIPS0_PACRA                   (*((volatile uint32_t *)0x40000020))      // Peripheral Access Control Register (AIPS0_PACRA)
#define AIPS0_PACRB                   (*((volatile uint32_t *)0x40000024))      // Peripheral Access Control Register (AIPS0_PACRB)
#define AIPS0_PACRC                   (*((volatile uint32_t *)0x40000028))      // Peripheral Access Control Register (AIPS0_PACRC)
#define AIPS0_PACRD                   (*((volatile uint32_t *)0x4000002C))      // Peripheral Access Control Register (AIPS0_PACRD)
#define AIPS0_PACRE                   (*((volatile uint32_t *)0x40000040))      // Peripheral Access Control Register (AIPS0_PACRE)
#define AIPS0_PACRF                   (*((volatile uint32_t *)0x40000044))      // Peripheral Access Control Register (AIPS0_PACRF)
#define AIPS0_PACRG                   (*((volatile uint32_t *)0x40000048))      // Peripheral Access Control Register (AIPS0_PACRG)
#define AIPS0_PACRH                   (*((volatile uint32_t *)0x4000004C))      // Peripheral Access Control Register (AIPS0_PACRH)
#define AIPS0_PACRI                   (*((volatile uint32_t *)0x40000050))      // Peripheral Access Control Register (AIPS0_PACRI)
#define AIPS0_PACRJ                   (*((volatile uint32_t *)0x40000054))      // Peripheral Access Control Register (AIPS0_PACRJ)
#define AIPS0_PACRK                   (*((volatile uint32_t *)0x40000058))      // Peripheral Access Control Register (AIPS0_PACRK)
#define AIPS0_PACRL                   (*((volatile uint32_t *)0x4000005C))      // Peripheral Access Control Register (AIPS0_PACRL)
#define AIPS0_PACRM                   (*((volatile uint32_t *)0x40000060))      // Peripheral Access Control Register (AIPS0_PACRM)
#define AIPS0_PACRN                   (*((volatile uint32_t *)0x40000064))      // Peripheral Access Control Register (AIPS0_PACRN)
#define AIPS0_PACRO                   (*((volatile uint32_t *)0x40000068))      // Peripheral Access Control Register (AIPS0_PACRO)
#define AIPS0_PACRP                   (*((volatile uint32_t *)0x4000006C))      // Peripheral Access Control Register (AIPS0_PACRP)
#define AIPS1_MPRA                    (*((volatile uint32_t *)0x40080000))      // Master Privilege Register A (AIPS1_MPRA)
#define AIPS1_PACRA                   (*((volatile uint32_t *)0x40080020))      // Peripheral Access Control Register (AIPS1_PACRA)
#define AIPS1_PACRB                   (*((volatile uint32_t *)0x40080024))      // Peripheral Access Control Register (AIPS1_PACRB)
#define AIPS1_PACRC                   (*((volatile uint32_t *)0x40080028))      // Peripheral Access Control Register (AIPS1_PACRC)
#define AIPS1_PACRD                   (*((volatile uint32_t *)0x4008002C))      // Peripheral Access Control Register (AIPS1_PACRD)
#define AIPS1_PACRE                   (*((volatile uint32_t *)0x40080040))      // Peripheral Access Control Register (AIPS1_PACRE)
#define AIPS1_PACRF                   (*((volatile uint32_t *)0x40080044))      // Peripheral Access Control Register (AIPS1_PACRF)
#define AIPS1_PACRG                   (*((volatile uint32_t *)0x40080048))      // Peripheral Access Control Register (AIPS1_PACRG)
#define AIPS1_PACRH                   (*((volatile uint32_t *)0x4008004C))      // Peripheral Access Control Register (AIPS1_PACRH)
#define AIPS1_PACRI                   (*((volatile uint32_t *)0x40080050))      // Peripheral Access Control Register (AIPS1_PACRI)
#define AIPS1_PACRJ                   (*((volatile uint32_t *)0x40080054))      // Peripheral Access Control Register (AIPS1_PACRJ)
#define AIPS1_PACRK                   (*((volatile uint32_t *)0x40080058))      // Peripheral Access Control Register (AIPS1_PACRK)
#define AIPS1_PACRL                   (*((volatile uint32_t *)0x4008005C))      // Peripheral Access Control Register (AIPS1_PACRL)
#define AIPS1_PACRM                   (*((volatile uint32_t *)0x40080060))      // Peripheral Access Control Register (AIPS1_PACRM)
#define AIPS1_PACRN                   (*((volatile uint32_t *)0x40080064))      // Peripheral Access Control Register (AIPS1_PACRN)
#define AIPS1_PACRO                   (*((volatile uint32_t *)0x40080068))      // Peripheral Access Control Register (AIPS1_PACRO)
#define AIPS1_PACRP                   (*((volatile uint32_t *)0x4008006C))      // Peripheral Access Control Register (AIPS1_PACRP)


//*****************************************************************************
//
// Memory Protection Unit (MPU) registers
//
//*****************************************************************************

#define MPU_CESR                      (*((volatile uint32_t *)0x4000D000))      // Control/Error Status Register (MPU_CESR)
#define MPU_EAR0                      (*((volatile uint32_t *)0x4000D010))      // Error Address Register, slave port n (MPU_EAR0)
#define MPU_EDR0                      (*((volatile uint32_t *)0x4000D014))      // Error Detail Register, slave port n (MPU_EDR0)
#define MPU_EAR1                      (*((volatile uint32_t *)0x4000D018))      // Error Address Register, slave port n (MPU_EAR1)
#define MPU_EDR1                      (*((volatile uint32_t *)0x4000D01C))      // Error Detail Register, slave port n (MPU_EDR1)
#define MPU_EAR2                      (*((volatile uint32_t *)0x4000D020))      // Error Address Register, slave port n (MPU_EAR2)
#define MPU_EDR2                      (*((volatile uint32_t *)0x4000D024))      // Error Detail Register, slave port n (MPU_EDR2)
#define MPU_EAR3                      (*((volatile uint32_t *)0x4000D028))      // Error Address Register, slave port n (MPU_EAR3)
#define MPU_EDR3                      (*((volatile uint32_t *)0x4000D02C))      // Error Detail Register, slave port n (MPU_EDR3)
#define MPU_EAR4                      (*((volatile uint32_t *)0x4000D030))      // Error Address Register, slave port n (MPU_EAR4)
#define MPU_EDR4                      (*((volatile uint32_t *)0x4000D034))      // Error Detail Register, slave port n (MPU_EDR4)
#define MPU_EAR5                      (*((volatile uint32_t *)0x4000D038))      // Error Address Register, slave port n (MPU_EAR5)
#define MPU_EDR5                      (*((volatile uint32_t *)0x4000D03C))      // Error Detail Register, slave port n (MPU_EDR5)
#define MPU_EAR6                      (*((volatile uint32_t *)0x4000D040))      // Error Address Register, slave port n (MPU_EAR6)
#define MPU_EDR6                      (*((volatile uint32_t *)0x4000D044))      // Error Detail Register, slave port n (MPU_EDR6)
#define MPU_RGD0_WORD0                (*((volatile uint32_t *)0x4000D400))      // Region Descriptor n, Word 0 (MPU_RGD0_WORD0)
#define MPU_RGD0_WORD1                (*((volatile uint32_t *)0x4000D404))      // Region Descriptor n, Word 1 (MPU_RGD0_WORD1)
#define MPU_RGD0_WORD2                (*((volatile uint32_t *)0x4000D408))      // Region Descriptor n, Word 2 (MPU_RGD0_WORD2)
#define MPU_RGD0_WORD3                (*((volatile uint32_t *)0x4000D40C))      // Region Descriptor n, Word 3 (MPU_RGD0_WORD3)
#define MPU_RGD1_WORD0                (*((volatile uint32_t *)0x4000D410))      // Region Descriptor n, Word 0 (MPU_RGD1_WORD0)
#define MPU_RGD1_WORD1                (*((volatile uint32_t *)0x4000D414))      // Region Descriptor n, Word 1 (MPU_RGD1_WORD1)
#define MPU_RGD1_WORD2                (*((volatile uint32_t *)0x4000D418))      // Region Descriptor n, Word 2 (MPU_RGD1_WORD2)
#define MPU_RGD1_WORD3                (*((volatile uint32_t *)0x4000D41C))      // Region Descriptor n, Word 3 (MPU_RGD1_WORD3)
#define MPU_RGD2_WORD0                (*((volatile uint32_t *)0x4000D420))      // Region Descriptor n, Word 0 (MPU_RGD2_WORD0)
#define MPU_RGD2_WORD1                (*((volatile uint32_t *)0x4000D424))      // Region Descriptor n, Word 1 (MPU_RGD2_WORD1)
#define MPU_RGD2_WORD2                (*((volatile uint32_t *)0x4000D428))      // Region Descriptor n, Word 2 (MPU_RGD2_WORD2)
#define MPU_RGD2_WORD3                (*((volatile uint32_t *)0x4000D42C))      // Region Descriptor n, Word 3 (MPU_RGD2_WORD3)
#define MPU_RGD3_WORD0                (*((volatile uint32_t *)0x4000D430))      // Region Descriptor n, Word 0 (MPU_RGD3_WORD0)
#define MPU_RGD3_WORD1                (*((volatile uint32_t *)0x4000D434))      // Region Descriptor n, Word 1 (MPU_RGD3_WORD1)
#define MPU_RGD3_WORD2                (*((volatile uint32_t *)0x4000D438))      // Region Descriptor n, Word 2 (MPU_RGD3_WORD2)
#define MPU_RGD3_WORD3                (*((volatile uint32_t *)0x4000D43C))      // Region Descriptor n, Word 3 (MPU_RGD3_WORD3)
#define MPU_RGD4_WORD0                (*((volatile uint32_t *)0x4000D440))      // Region Descriptor n, Word 0 (MPU_RGD4_WORD0)
#define MPU_RGD4_WORD1                (*((volatile uint32_t *)0x4000D444))      // Region Descriptor n, Word 1 (MPU_RGD4_WORD1)
#define MPU_RGD4_WORD2                (*((volatile uint32_t *)0x4000D448))      // Region Descriptor n, Word 2 (MPU_RGD4_WORD2)


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
#define DMAMUX_CHCFG16                (*((volatile uint32_t *)0x40021010))      // Channel Configuration register
#define DMAMUX_CHCFG17                (*((volatile uint32_t *)0x40021011))      // Channel Configuration register
#define DMAMUX_CHCFG18                (*((volatile uint32_t *)0x40021012))      // Channel Configuration register
#define DMAMUX_CHCFG19                (*((volatile uint32_t *)0x40021013))      // Channel Configuration register
#define DMAMUX_CHCFG20                (*((volatile uint32_t *)0x40021014))      // Channel Configuration register
#define DMAMUX_CHCFG21                (*((volatile uint32_t *)0x40021015))      // Channel Configuration register
#define DMAMUX_CHCFG22                (*((volatile uint32_t *)0x40021016))      // Channel Configuration register
#define DMAMUX_CHCFG23                (*((volatile uint32_t *)0x40021017))      // Channel Configuration register
#define DMAMUX_CHCFG24                (*((volatile uint32_t *)0x40021018))      // Channel Configuration register
#define DMAMUX_CHCFG25                (*((volatile uint32_t *)0x40021019))      // Channel Configuration register
#define DMAMUX_CHCFG26                (*((volatile uint32_t *)0x4002101A))      // Channel Configuration register
#define DMAMUX_CHCFG27                (*((volatile uint32_t *)0x4002101B))      // Channel Configuration register
#define DMAMUX_CHCFG28                (*((volatile uint32_t *)0x4002101C))      // Channel Configuration register
#define DMAMUX_CHCFG29                (*((volatile uint32_t *)0x4002101D))      // Channel Configuration register
#define DMAMUX_CHCFG30                (*((volatile uint32_t *)0x4002101E))      // Channel Configuration register
#define DMAMUX_CHCFG31                (*((volatile uint32_t *)0x4002101F))      // Channel Configuration register


//*****************************************************************************
//
// Enhanced Direct Memory Access (eDMA) registers
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
#define EWM_CLKCTRL                   (*((volatile uint32_t *)0x40061004))      // Clock Control Register (EWM_CLKCTRL)
#define EWM_CLKPRESCALER              (*((volatile uint32_t *)0x40061005))      // Clock Prescaler Register (EWM_CLKPRESCALER)


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
#define MCG_C7                        (*((volatile uint32_t *)0x4006400C))      // MCG Control 7 Register
#define MCG_C8                        (*((volatile uint32_t *)0x4006400D))      // MCG Control 8 Register
#define MCG_C9                        (*((volatile uint32_t *)0x4006400E))      // MCG Control 9 Register
#define MCG_C11                       (*((volatile uint32_t *)0x40064010))      // MCG Control 11 Register
#define MCG_C12                       (*((volatile uint32_t *)0x40064011))      // MCG Control 12 Register
#define MCG_S2                        (*((volatile uint32_t *)0x40064012))      // MCG Status 2 Register
#define MCG_T3                        (*((volatile uint32_t *)0x40064013))      // MCG Test 3 Register


//*****************************************************************************
//
// Oscillator (OSC) registers
//
//*****************************************************************************

#define OSC_CR                        (*((volatile uint32_t *)0x0))      // OSC Control Register
#define OSC_OSC_DIV                   (*((volatile uint32_t *)0x2))      // OSC Clock divider register


//*****************************************************************************
//
// Local Memory Controller registers
//
//*****************************************************************************

#define LMEM_PCCCR                    (*((volatile uint32_t *)0xE0082000))      // Cache control register (LMEM_PCCCR)
#define LMEM_PCCLCR                   (*((volatile uint32_t *)0xE0082004))      // Cache line control register (LMEM_PCCLCR)
#define LMEM_PCCSAR                   (*((volatile uint32_t *)0xE0082008))      // Cache search address register (LMEM_PCCSAR)
#define LMEM_PCCCVR                   (*((volatile uint32_t *)0xE008200C))      // Cache read/write value register (LMEM_PCCCVR)
#define LMEM_PCCRMR                   (*((volatile uint32_t *)0xE0082020))      // Cache regions mode register (LMEM_PCCRMR)
#define LMEM_PSCCR                    (*((volatile uint32_t *)0xE0082800))      // Cache control register (LMEM_PSCCR)
#define LMEM_PSCLCR                   (*((volatile uint32_t *)0xE0082804))      // Cache line control register (LMEM_PSCLCR)
#define LMEM_PSCSAR                   (*((volatile uint32_t *)0xE0082808))      // Cache search address register (LMEM_PSCSAR)
#define LMEM_PSCCVR                   (*((volatile uint32_t *)0xE008280C))      // Cache read/write value register (LMEM_PSCCVR)
#define LMEM_PSCRMR                   (*((volatile uint32_t *)0xE0082820))      // Cache regions mode register (LMEM_PSCRMR)


//*****************************************************************************
//
// Flash Memory Controller (FMC) registers
//
//*****************************************************************************

#define FMC_PFAPR                     (*((volatile uint32_t *)0x0))      // Flash Access Protection Register
#define FMC_PFB01CR                   (*((volatile uint32_t *)0x4))      // Flash Bank 0-1 Control Register
#define FMC_PFB23CR                   (*((volatile uint32_t *)0x8))      // Flash Bank 2-3 Control Register
#define FMC_TAGVDW0S0                 (*((volatile uint32_t *)0x100))      // Cache Tag Storage
#define FMC_TAGVDW0S1                 (*((volatile uint32_t *)0x104))      // Cache Tag Storage
#define FMC_TAGVDW0S2                 (*((volatile uint32_t *)0x108))      // Cache Tag Storage


//*****************************************************************************
//
// Synchronous DRAM Controller Module (SDRAM) registers
//
//*****************************************************************************

#define SDRAM_CTRL                    (*((volatile uint32_t *)0x4000F042))      // Control Register (SDRAM_CTRL)
#define SDRAM_AC0                     (*((volatile uint32_t *)0x4000F048))      // Address and Control Register (SDRAM_AC0)
#define SDRAM_CM0                     (*((volatile uint32_t *)0x4000F04C))      // Control Mask (SDRAM_CM0)
#define SDRAM_AC1                     (*((volatile uint32_t *)0x4000F050))      // Address and Control Register (SDRAM_AC1)
#define SDRAM_CM1                     (*((volatile uint32_t *)0x4000F054))      // Control Mask (SDRAM_CM1)


//*****************************************************************************
//
// External Bus Interface (FlexBus) registers
//
//*****************************************************************************

#define FB_CSAR0                      (*((volatile uint32_t *)0x4000C000))      // Chip Select Address Register
#define FB_CSMR0                      (*((volatile uint32_t *)0x4000C004))      // Chip Select Mask Register
#define FB_CSCR0                      (*((volatile uint32_t *)0x4000C008))      // Chip Select Control Register
#define FB_CSAR1                      (*((volatile uint32_t *)0x4000C00C))      // Chip Select Address Register
#define FB_CSMR1                      (*((volatile uint32_t *)0x4000C010))      // Chip Select Mask Register
#define FB_CSCR1                      (*((volatile uint32_t *)0x4000C014))      // Chip Select Control Register
#define FB_CSAR2                      (*((volatile uint32_t *)0x4000C018))      // Chip Select Address Register
#define FB_CSMR2                      (*((volatile uint32_t *)0x4000C01C))      // Chip Select Mask Register
#define FB_CSCR2                      (*((volatile uint32_t *)0x4000C020))      // Chip Select Control Register
#define FB_CSAR3                      (*((volatile uint32_t *)0x4000C024))      // Chip Select Address Register
#define FB_CSMR3                      (*((volatile uint32_t *)0x4000C028))      // Chip Select Mask Register
#define FB_CSCR3                      (*((volatile uint32_t *)0x4000C02C))      // Chip Select Control Register
#define FB_CSAR4                      (*((volatile uint32_t *)0x4000C030))      // Chip Select Address Register
#define FB_CSMR4                      (*((volatile uint32_t *)0x4000C034))      // Chip Select Mask Register
#define FB_CSCR4                      (*((volatile uint32_t *)0x4000C038))      // Chip Select Control Register
#define FB_CSAR5                      (*((volatile uint32_t *)0x4000C03C))      // Chip Select Address Register
#define FB_CSMR5                      (*((volatile uint32_t *)0x4000C040))      // Chip Select Mask Register
#define FB_CSCR5                      (*((volatile uint32_t *)0x4000C044))      // Chip Select Control Register
#define FB_CSPMCR                     (*((volatile uint32_t *)0x4000C060))      // Chip Select port Multiplexing Control Register


//*****************************************************************************
//
// Cyclic Redundancy Check (CRC) registers
//
//*****************************************************************************

#define CRC_DATA                      (*((volatile uint32_t *)0x40032000))      // CRC Data register
#define CRC_GPOLY                     (*((volatile uint32_t *)0x40032004))      // CRC Polynomial register
#define CRC_CTRL                      (*((volatile uint32_t *)0x40032008))      // CRC Control register


//*****************************************************************************
//
// Memory-Mapped Cryptographic Acceleration Unit (MMCAU) registers
//
//*****************************************************************************

#define CAU_CASR                      (*((volatile uint32_t *)0xE0081000))      // Status Register
#define CAU_CAA                       (*((volatile uint32_t *)0xE0081001))      // Accumulator
#define CAU_CA0                       (*((volatile uint32_t *)0xE0081002))      // General Purpose Register
#define CAU_CA1                       (*((volatile uint32_t *)0xE0081003))      // General Purpose Register
#define CAU_CA2                       (*((volatile uint32_t *)0xE0081004))      // General Purpose Register
#define CAU_CA3                       (*((volatile uint32_t *)0xE0081005))      // General Purpose Register
#define CAU_CA4                       (*((volatile uint32_t *)0xE0081006))      // General Purpose Register
#define CAU_CA5                       (*((volatile uint32_t *)0xE0081007))      // General Purpose Register
#define CAU_CA6                       (*((volatile uint32_t *)0xE0081008))      // General Purpose Register
#define CAU_CA7                       (*((volatile uint32_t *)0xE0081009))      // General Purpose Register
#define CAU_CA8                       (*((volatile uint32_t *)0xE008100A))      // General Purpose Register


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
#define CMP1_CR0                      (*((volatile uint32_t *)0x40073008))      // CMP Control Register 0 (CMP1_CR0)
#define CMP1_CR1                      (*((volatile uint32_t *)0x40073009))      // CMP Control Register 1 (CMP1_CR1)
#define CMP1_FPR                      (*((volatile uint32_t *)0x4007300A))      // CMP Filter Period Register (CMP1_FPR)
#define CMP1_SCR                      (*((volatile uint32_t *)0x4007300B))      // CMP Status and Control Register (CMP1_SCR)
#define CMP1_DACCR                    (*((volatile uint32_t *)0x4007300C))      // DAC Control Register (CMP1_DACCR)
#define CMP1_MUXCR                    (*((volatile uint32_t *)0x4007300D))      // MUX Control Register (CMP1_MUXCR)


//*****************************************************************************
//
// Voltage Reference (VREFV1) registers
//
//*****************************************************************************

#define VREF_TRM                      (*((volatile uint32_t *)0x40074000))      // VREF Trim Register (VREF_TRM)
#define VREF_SC                       (*((volatile uint32_t *)0x40074001))      // VREF Status and Control Register (VREF_SC)


//*****************************************************************************
//
// 12-bit Digital-to-Analog Converter (DAC) registers
//
//*****************************************************************************

#define DAC0_DAT0L                    (*((volatile uint32_t *)0x400CC000))      // DAC Data Low Register
#define DAC0_DAT0H                    (*((volatile uint32_t *)0x400CC001))      // DAC Data High Register
#define DAC0_DAT1L                    (*((volatile uint32_t *)0x400CC002))      // DAC Data Low Register
#define DAC0_DAT1H                    (*((volatile uint32_t *)0x400CC003))      // DAC Data High Register
#define DAC0_DAT2L                    (*((volatile uint32_t *)0x400CC004))      // DAC Data Low Register
#define DAC0_DAT2H                    (*((volatile uint32_t *)0x400CC005))      // DAC Data High Register
#define DAC0_DAT3L                    (*((volatile uint32_t *)0x400CC006))      // DAC Data Low Register
#define DAC0_DAT3H                    (*((volatile uint32_t *)0x400CC007))      // DAC Data High Register
#define DAC0_DAT4L                    (*((volatile uint32_t *)0x400CC008))      // DAC Data Low Register
#define DAC0_DAT4H                    (*((volatile uint32_t *)0x400CC009))      // DAC Data High Register
#define DAC0_DAT5L                    (*((volatile uint32_t *)0x400CC00A))      // DAC Data Low Register
#define DAC0_DAT5H                    (*((volatile uint32_t *)0x400CC00B))      // DAC Data High Register
#define DAC0_DAT6L                    (*((volatile uint32_t *)0x400CC00C))      // DAC Data Low Register
#define DAC0_DAT6H                    (*((volatile uint32_t *)0x400CC00D))      // DAC Data High Register
#define DAC0_DAT7L                    (*((volatile uint32_t *)0x400CC00E))      // DAC Data Low Register
#define DAC0_DAT7H                    (*((volatile uint32_t *)0x400CC00F))      // DAC Data High Register
#define DAC0_DAT8L                    (*((volatile uint32_t *)0x400CC010))      // DAC Data Low Register
#define DAC0_DAT8H                    (*((volatile uint32_t *)0x400CC011))      // DAC Data High Register
#define DAC0_DAT9L                    (*((volatile uint32_t *)0x400CC012))      // DAC Data Low Register
#define DAC0_DAT9H                    (*((volatile uint32_t *)0x400CC013))      // DAC Data High Register
#define DAC0_DAT10L                   (*((volatile uint32_t *)0x400CC014))      // DAC Data Low Register
#define DAC0_DAT10H                   (*((volatile uint32_t *)0x400CC015))      // DAC Data High Register
#define DAC0_DAT11L                   (*((volatile uint32_t *)0x400CC016))      // DAC Data Low Register
#define DAC0_DAT11H                   (*((volatile uint32_t *)0x400CC017))      // DAC Data High Register
#define DAC0_DAT12L                   (*((volatile uint32_t *)0x400CC018))      // DAC Data Low Register
#define DAC0_DAT12H                   (*((volatile uint32_t *)0x400CC019))      // DAC Data High Register
#define DAC0_DAT13L                   (*((volatile uint32_t *)0x400CC01A))      // DAC Data Low Register
#define DAC0_DAT13H                   (*((volatile uint32_t *)0x400CC01B))      // DAC Data High Register
#define DAC0_DAT14L                   (*((volatile uint32_t *)0x400CC01C))      // DAC Data Low Register
#define DAC0_DAT14H                   (*((volatile uint32_t *)0x400CC01D))      // DAC Data High Register
#define DAC0_DAT15L                   (*((volatile uint32_t *)0x400CC01E))      // DAC Data Low Register
#define DAC0_DAT15H                   (*((volatile uint32_t *)0x400CC01F))      // DAC Data High Register
#define DAC0_SR                       (*((volatile uint32_t *)0x400CC020))      // DAC Status Register
#define DAC0_C0                       (*((volatile uint32_t *)0x400CC021))      // DAC Control Register
#define DAC0_C1                       (*((volatile uint32_t *)0x400CC022))      // DAC Control Register 1
#define DAC0_C2                       (*((volatile uint32_t *)0x400CC023))      // DAC Control Register 2


//*****************************************************************************
//
// FlexTimer Module (FTM) registers
//
//*****************************************************************************

#define FTM0_SC                       (*((volatile uint32_t *)0x40038000))      // Status And Control
#define FTM0_CNT                      (*((volatile uint32_t *)0x40038004))      // Counter
#define FTM0_MOD                      (*((volatile uint32_t *)0x40038008))      // Modulo
#define FTM0_C0SC                     (*((volatile uint32_t *)0x4003800C))      // Channel (n) Status And Control
#define FTM0_C0V                      (*((volatile uint32_t *)0x40038010))      // Channel (n) Value
#define FTM0_C1SC                     (*((volatile uint32_t *)0x40038014))      // Channel (n) Status And Control
#define FTM0_C1V                      (*((volatile uint32_t *)0x40038018))      // Channel (n) Value
#define FTM0_C2SC                     (*((volatile uint32_t *)0x4003801C))      // Channel (n) Status And Control
#define FTM0_C2V                      (*((volatile uint32_t *)0x40038020))      // Channel (n) Value
#define FTM0_C3SC                     (*((volatile uint32_t *)0x40038024))      // Channel (n) Status And Control
#define FTM0_C3V                      (*((volatile uint32_t *)0x40038028))      // Channel (n) Value
#define FTM0_C4SC                     (*((volatile uint32_t *)0x4003802C))      // Channel (n) Status And Control
#define FTM0_C4V                      (*((volatile uint32_t *)0x40038030))      // Channel (n) Value
#define FTM0_C5SC                     (*((volatile uint32_t *)0x40038034))      // Channel (n) Status And Control
#define FTM0_C5V                      (*((volatile uint32_t *)0x40038038))      // Channel (n) Value
#define FTM0_C6SC                     (*((volatile uint32_t *)0x4003803C))      // Channel (n) Status And Control
#define FTM0_C6V                      (*((volatile uint32_t *)0x40038040))      // Channel (n) Value
#define FTM0_C7SC                     (*((volatile uint32_t *)0x40038044))      // Channel (n) Status And Control
#define FTM0_C7V                      (*((volatile uint32_t *)0x40038048))      // Channel (n) Value
#define FTM0_CNTIN                    (*((volatile uint32_t *)0x4003804C))      // Counter Initial Value


//*****************************************************************************
//
// Timer/PWM Module (TPM) registers
//
//*****************************************************************************

#define TPM1_SC                       (*((volatile uint32_t *)0x400C9000))      // Status and Control (TPM1_SC)
#define TPM1_CNT                      (*((volatile uint32_t *)0x400C9004))      // Counter (TPM1_CNT)
#define TPM1_MOD                      (*((volatile uint32_t *)0x400C9008))      // Modulo (TPM1_MOD)
#define TPM1_C0SC                     (*((volatile uint32_t *)0x400C900C))      // Channel (n) Status and Control (TPM1_C0SC)
#define TPM1_C0V                      (*((volatile uint32_t *)0x400C9010))      // Channel (n) Value (TPM1_C0V)
#define TPM1_C1SC                     (*((volatile uint32_t *)0x400C9014))      // Channel (n) Status and Control (TPM1_C1SC)
#define TPM1_C1V                      (*((volatile uint32_t *)0x400C9018))      // Channel (n) Value (TPM1_C1V)
#define TPM1_STATUS                   (*((volatile uint32_t *)0x400C9050))      // Capture and Compare Status (TPM1_STATUS)
#define TPM1_COMBINE                  (*((volatile uint32_t *)0x400C9064))      // Combine Channel Register (TPM1_COMBINE)
#define TPM1_POL                      (*((volatile uint32_t *)0x400C9070))      // Channel Polarity (TPM1_POL)
#define TPM1_FILTER                   (*((volatile uint32_t *)0x400C9078))      // Filter Control (TPM1_FILTER)
#define TPM1_QDCTRL                   (*((volatile uint32_t *)0x400C9080))      // Quadrature Decoder Control and Status (TPM1_QDCTRL)
#define TPM1_CONF                     (*((volatile uint32_t *)0x400C9084))      // Configuration (TPM1_CONF)
#define TPM2_SC                       (*((volatile uint32_t *)0x400CA000))      // Status and Control (TPM2_SC)
#define TPM2_CNT                      (*((volatile uint32_t *)0x400CA004))      // Counter (TPM2_CNT)
#define TPM2_MOD                      (*((volatile uint32_t *)0x400CA008))      // Modulo (TPM2_MOD)
#define TPM2_C0SC                     (*((volatile uint32_t *)0x400CA00C))      // Channel (n) Status and Control (TPM2_C0SC)
#define TPM2_C0V                      (*((volatile uint32_t *)0x400CA010))      // Channel (n) Value (TPM2_C0V)
#define TPM2_C1SC                     (*((volatile uint32_t *)0x400CA014))      // Channel (n) Status and Control (TPM2_C1SC)
#define TPM2_C1V                      (*((volatile uint32_t *)0x400CA018))      // Channel (n) Value (TPM2_C1V)
#define TPM2_STATUS                   (*((volatile uint32_t *)0x400CA050))      // Capture and Compare Status (TPM2_STATUS)
#define TPM2_COMBINE                  (*((volatile uint32_t *)0x400CA064))      // Combine Channel Register (TPM2_COMBINE)
#define TPM2_POL                      (*((volatile uint32_t *)0x400CA070))      // Channel Polarity (TPM2_POL)
#define TPM2_FILTER                   (*((volatile uint32_t *)0x400CA078))      // Filter Control (TPM2_FILTER)
#define TPM2_QDCTRL                   (*((volatile uint32_t *)0x400CA080))      // Quadrature Decoder Control and Status (TPM2_QDCTRL)
#define TPM2_CONF                     (*((volatile uint32_t *)0x400CA084))      // Configuration (TPM2_CONF)


//*****************************************************************************
//
// Low-Power Timer (LPTMR) registers
//
//*****************************************************************************

#define LPTMR0_CSR                    (*((volatile uint32_t *)0x40040000))      // Low Power Timer Control Status Register (LPTMR0_CSR)
#define LPTMR0_PSR                    (*((volatile uint32_t *)0x40040004))      // Low Power Timer Prescale Register (LPTMR0_PSR)
#define LPTMR0_CMR                    (*((volatile uint32_t *)0x40040008))      // Low Power Timer Compare Register (LPTMR0_CMR)
#define LPTMR0_CNR                    (*((volatile uint32_t *)0x4004000C))      // Low Power Timer Counter Register (LPTMR0_CNR)
#define LPTMR1_CSR                    (*((volatile uint32_t *)0x40044000))      // Low Power Timer Control Status Register (LPTMR1_CSR)
#define LPTMR1_PSR                    (*((volatile uint32_t *)0x40044004))      // Low Power Timer Prescale Register (LPTMR1_PSR)
#define LPTMR1_CMR                    (*((volatile uint32_t *)0x40044008))      // Low Power Timer Compare Register (LPTMR1_CMR)
#define LPTMR1_CNR                    (*((volatile uint32_t *)0x4004400C))      // Low Power Timer Counter Register (LPTMR1_CNR)


//*****************************************************************************
//
// Carrier Modulator Transmitter (CMT) registers
//
//*****************************************************************************

#define CMT_CGH1                      (*((volatile uint32_t *)0x40062000))      // CMT Carrier Generator High Data Register 1
#define CMT_CGL1                      (*((volatile uint32_t *)0x40062001))      // CMT Carrier Generator Low Data Register 1
#define CMT_CGH2                      (*((volatile uint32_t *)0x40062002))      // CMT Carrier Generator High Data Register 2
#define CMT_CGL2                      (*((volatile uint32_t *)0x40062003))      // CMT Carrier Generator Low Data Register 2
#define CMT_OC                        (*((volatile uint32_t *)0x40062004))      // CMT Output Control Register
#define CMT_MSC                       (*((volatile uint32_t *)0x40062005))      // CMT Modulator Status and Control Register
#define CMT_CMD1                      (*((volatile uint32_t *)0x40062006))      // CMT Modulator Data Register Mark High
#define CMT_CMD2                      (*((volatile uint32_t *)0x40062007))      // CMT Modulator Data Register Mark Low
#define CMT_CMD3                      (*((volatile uint32_t *)0x40062008))      // CMT Modulator Data Register Space High
#define CMT_CMD4                      (*((volatile uint32_t *)0x40062009))      // CMT Modulator Data Register Space Low
#define CMT_PPS                       (*((volatile uint32_t *)0x4006200A))      // CMT Primary Prescaler Register
#define CMT_DMA                       (*((volatile uint32_t *)0x4006200B))      // CMT Direct Memory Access Register


//*****************************************************************************
//
// Programmable Delay Block (PDB) registers
//
//*****************************************************************************

#define PDB0_SC                       (*((volatile uint32_t *)0x40036000))      // Status and Control register
#define PDB0_MOD                      (*((volatile uint32_t *)0x40036004))      // Modulus register
#define PDB0_CNT                      (*((volatile uint32_t *)0x40036008))      // Counter register
#define PDB0_IDLY                     (*((volatile uint32_t *)0x4003600C))      // Interrupt Delay register
#define PDB0_CH0C1                    (*((volatile uint32_t *)0x40036010))      // Channel n Control register 1
#define PDB0_CH0S                     (*((volatile uint32_t *)0x40036014))      // Channel n Status register
#define PDB0_CH0DLY0                  (*((volatile uint32_t *)0x40036018))      // Channel n Delay 0 register
#define PDB0_CH0DLY1                  (*((volatile uint32_t *)0x4003601C))      // Channel n Delay 1 register
#define PDB0_DACINTC0                 (*((volatile uint32_t *)0x40036150))      // DAC Interval Trigger n Control register
#define PDB0_DACINT0                  (*((volatile uint32_t *)0x40036154))      // DAC Interval n register
#define PDB0_POEN                     (*((volatile uint32_t *)0x40036190))      // Pulse-Out n Enable register
#define PDB0_PO0DLY                   (*((volatile uint32_t *)0x40036194))      // Pulse-Out n Delay register
#define PDB0_PO1DLY                   (*((volatile uint32_t *)0x40036198))      // Pulse-Out n Delay register


//*****************************************************************************
//
// Periodic Interrupt Timer (PIT) registers
//
//*****************************************************************************

#define PIT0_MCR                      (*((volatile uint32_t *)0x40037000))      // PIT Module Control Register
#define PIT0_LTMR64H                  (*((volatile uint32_t *)0x400370E0))      // PIT Upper Lifetime Timer Register
#define PIT0_LTMR64L                  (*((volatile uint32_t *)0x400370E4))      // PIT Lower Lifetime Timer Register
#define PIT0_LDVAL0                   (*((volatile uint32_t *)0x40037100))      // Timer Load Value Register
#define PIT0_CVAL0                    (*((volatile uint32_t *)0x40037104))      // Current Timer Value Register
#define PIT0_TCTRL0                   (*((volatile uint32_t *)0x40037108))      // Timer Control Register
#define PIT0_TFLG0                    (*((volatile uint32_t *)0x4003710C))      // Timer Flag Register
#define PIT0_LDVAL1                   (*((volatile uint32_t *)0x40037110))      // Timer Load Value Register
#define PIT0_CVAL1                    (*((volatile uint32_t *)0x40037114))      // Current Timer Value Register
#define PIT0_TCTRL1                   (*((volatile uint32_t *)0x40037118))      // Timer Control Register
#define PIT0_TFLG1                    (*((volatile uint32_t *)0x4003711C))      // Timer Flag Register
#define PIT0_LDVAL2                   (*((volatile uint32_t *)0x40037120))      // Timer Load Value Register
#define PIT0_CVAL2                    (*((volatile uint32_t *)0x40037124))      // Current Timer Value Register
#define PIT0_TCTRL2                   (*((volatile uint32_t *)0x40037128))      // Timer Control Register
#define PIT0_TFLG2                    (*((volatile uint32_t *)0x4003712C))      // Timer Flag Register
#define PIT0_LDVAL3                   (*((volatile uint32_t *)0x40037130))      // Timer Load Value Register
#define PIT0_CVAL3                    (*((volatile uint32_t *)0x40037134))      // Current Timer Value Register
#define PIT0_TCTRL3                   (*((volatile uint32_t *)0x40037138))      // Timer Control Register
#define PIT0_TFLG3                    (*((volatile uint32_t *)0x4003713C))      // Timer Flag Register


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
#define USB0_OTGCTL                   (*((volatile uint32_t *)0x4007201C))      // OTG Control register (USB0_OTGCTL)
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
#define USB0_CLK_RECOVER_CTRL         (*((volatile uint32_t *)0x40072140))      // USB Clock recovery control (USB0_CLK_RECOVER_CTRL)
#define USB0_CLK_RECOVER_IRC_EN       (*((volatile uint32_t *)0x40072144))      // IRC48M oscillator enable register (USB0_CLK_RECOVER_IRC_EN)
#define USB0_CLK_RECOVER_INT_EN       (*((volatile uint32_t *)0x40072154))      // Clock recovery combined interrupt enable (USB0_CLK_RECOVER_INT_EN)
#define USB0_CLK_RECOVER_INT_STATUS   (*((volatile uint32_t *)0x4007215C))      // Clock recovery separated interrupt status (USB0_CLK_RECOVER_INT_STATUS)


//*****************************************************************************
//
// USB Device Charger Detection Module (USBDCD) registers
//
//*****************************************************************************

#define USBDCD_CONTROL                (*((volatile uint32_t *)0x40035000))      // Control register
#define USBDCD_CLOCK                  (*((volatile uint32_t *)0x40035004))      // Clock register
#define USBDCD_STATUS                 (*((volatile uint32_t *)0x40035008))      // Status register
#define USBDCD_SIGNAL_OVERRIDE        (*((volatile uint32_t *)0x4003500C))      // Signal Override Register
#define USBDCD_TIMER0                 (*((volatile uint32_t *)0x40035010))      // TIMER0 register
#define USBDCD_TIMER1                 (*((volatile uint32_t *)0x40035014))      // TIMER1 register
#define USBDCD_TIMER2_BC11            (*((volatile uint32_t *)0x40035018))      // TIMER2_BC11 register
#define USBDCD_TIMER2_BC12            (*((volatile uint32_t *)0x40035018))      // TIMER2_BC12 register


//*****************************************************************************
//
// Universal Serial Bus 2.0 Integrated PHY (USB-PHY) registers
//
//*****************************************************************************

#define USBPHY_PWD                    (*((volatile uint32_t *)0x400A2000))      // USB PHY Power-Down Register (USBPHY_PWD)
#define USBPHY_PWD_SET                (*((volatile uint32_t *)0x400A2004))      // USB PHY Power-Down Register (USBPHY_PWD_SET)
#define USBPHY_PWD_CLR                (*((volatile uint32_t *)0x400A2008))      // USB PHY Power-Down Register (USBPHY_PWD_CLR)
#define USBPHY_PWD_TOG                (*((volatile uint32_t *)0x400A200C))      // USB PHY Power-Down Register (USBPHY_PWD_TOG)
#define USBPHY_TX                     (*((volatile uint32_t *)0x400A2010))      // USB PHY Transmitter Control Register (USBPHY_TX)
#define USBPHY_TX_SET                 (*((volatile uint32_t *)0x400A2014))      // USB PHY Transmitter Control Register (USBPHY_TX_SET)
#define USBPHY_TX_CLR                 (*((volatile uint32_t *)0x400A2018))      // USB PHY Transmitter Control Register (USBPHY_TX_CLR)
#define USBPHY_TX_TOG                 (*((volatile uint32_t *)0x400A201C))      // USB PHY Transmitter Control Register (USBPHY_TX_TOG)
#define USBPHY_RX                     (*((volatile uint32_t *)0x400A2020))      // USB PHY Receiver Control Register (USBPHY_RX)
#define USBPHY_RX_SET                 (*((volatile uint32_t *)0x400A2024))      // USB PHY Receiver Control Register (USBPHY_RX_SET)
#define USBPHY_RX_CLR                 (*((volatile uint32_t *)0x400A2028))      // USB PHY Receiver Control Register (USBPHY_RX_CLR)
#define USBPHY_RX_TOG                 (*((volatile uint32_t *)0x400A202C))      // USB PHY Receiver Control Register (USBPHY_RX_TOG)
#define USBPHY_CTRL                   (*((volatile uint32_t *)0x400A2030))      // USB PHY General Control Register (USBPHY_CTRL)
#define USBPHY_CTRL_SET               (*((volatile uint32_t *)0x400A2034))      // USB PHY General Control Register (USBPHY_CTRL_SET)
#define USBPHY_CTRL_CLR               (*((volatile uint32_t *)0x400A2038))      // USB PHY General Control Register (USBPHY_CTRL_CLR)
#define USBPHY_CTRL_TOG               (*((volatile uint32_t *)0x400A203C))      // USB PHY General Control Register (USBPHY_CTRL_TOG)
#define USBPHY_STATUS                 (*((volatile uint32_t *)0x400A2040))      // USB PHY Status Register (USBPHY_STATUS)
#define USBPHY_DEBUG                  (*((volatile uint32_t *)0x400A2050))      // USB PHY Debug Register (USBPHY_DEBUG)
#define USBPHY_DEBUG_SET              (*((volatile uint32_t *)0x400A2054))      // USB PHY Debug Register (USBPHY_DEBUG_SET)
#define USBPHY_DEBUG_CLR              (*((volatile uint32_t *)0x400A2058))      // USB PHY Debug Register (USBPHY_DEBUG_CLR)
#define USBPHY_DEBUG_TOG              (*((volatile uint32_t *)0x400A205C))      // USB PHY Debug Register (USBPHY_DEBUG_TOG)
#define USBPHY_DEBUG0_STATUS          (*((volatile uint32_t *)0x400A2060))      // UTMI Debug Status Register 0
#define USBPHY_DEBUG1                 (*((volatile uint32_t *)0x400A2070))      // UTMI Debug Status Register 1 (USBPHY_DEBUG1)
#define USBPHY_DEBUG1_SET             (*((volatile uint32_t *)0x400A2074))      // UTMI Debug Status Register 1 (USBPHY_DEBUG1_SET)
#define USBPHY_DEBUG1_CLR             (*((volatile uint32_t *)0x400A2078))      // UTMI Debug Status Register 1 (USBPHY_DEBUG1_CLR)
#define USBPHY_DEBUG1_TOG             (*((volatile uint32_t *)0x400A207C))      // UTMI Debug Status Register 1 (USBPHY_DEBUG1_TOG)
#define USBPHY_VERSION                (*((volatile uint32_t *)0x400A2080))      // UTMI RTL Version (USBPHY_VERSION)
#define USBPHY_PLL_SIC                (*((volatile uint32_t *)0x400A20A0))      // USB PHY PLL Control/Status Register (USBPHY_PLL_SIC)
#define USBPHY_PLL_SIC_SET            (*((volatile uint32_t *)0x400A20A4))      // USB PHY PLL Control/Status Register (USBPHY_PLL_SIC_SET)
#define USBPHY_PLL_SIC_CLR            (*((volatile uint32_t *)0x400A20A8))      // USB PHY PLL Control/Status Register (USBPHY_PLL_SIC_CLR)
#define USBPHY_PLL_SIC_TOG            (*((volatile uint32_t *)0x400A20AC))      // USB PHY PLL Control/Status Register (USBPHY_PLL_SIC_TOG)
#define USBPHY_USB1_VBUS_DETECT       (*((volatile uint32_t *)0x400A20C0))      // USB PHY VBUS Detect Control Register (USBPHY_USB1_VBUS_DETECT)
#define USBPHY_USB1_VBUS_DETECT_SET   (*((volatile uint32_t *)0x400A20C4))      // USB PHY VBUS Detect Control Register (USBPHY_USB1_VBUS_DETECT_SET)
#define USBPHY_USB1_VBUS_DETECT_CLR   (*((volatile uint32_t *)0x400A20C8))      // USB PHY VBUS Detect Control Register (USBPHY_USB1_VBUS_DETECT_CLR)
#define USBPHY_USB1_VBUS_DETECT_TOG   (*((volatile uint32_t *)0x400A20CC))      // USB PHY VBUS Detect Control Register (USBPHY_USB1_VBUS_DETECT_TOG)
#define USBPHY_USB1_VBUS_DET_STAT     (*((volatile uint32_t *)0x400A20D0))      // USB PHY VBUS Detector Status Register (USBPHY_USB1_VBUS_DET_STAT)
#define USBPHY_USB1_CHRG_DET_STAT     (*((volatile uint32_t *)0x400A20F0))      // USB PHY Charger Detect Status Register (USBPHY_USB1_CHRG_DET_STAT)
#define USBPHY_ANACTRL                (*((volatile uint32_t *)0x400A2100))      // USB PHY Analog Control Register (USBPHY_ANACTRL)
#define USBPHY_ANACTRL_SET            (*((volatile uint32_t *)0x400A2104))      // USB PHY Analog Control Register (USBPHY_ANACTRL_SET)
#define USBPHY_ANACTRL_CLR            (*((volatile uint32_t *)0x400A2108))      // USB PHY Analog Control Register (USBPHY_ANACTRL_CLR)
#define USBPHY_ANACTRL_TOG            (*((volatile uint32_t *)0x400A210C))      // USB PHY Analog Control Register (USBPHY_ANACTRL_TOG)
#define USBPHY_USB1_LOOPBACK          (*((volatile uint32_t *)0x400A2110))      // USB PHY Loopback Control/Status Register (USBPHY_USB1_LOOPBACK)
#define USBPHY_USB1_LOOPBACK_SET      (*((volatile uint32_t *)0x400A2114))      // USB PHY Loopback Control/Status Register (USBPHY_USB1_LOOPBACK_SET)
#define USBPHY_USB1_LOOPBACK_CLR      (*((volatile uint32_t *)0x400A2118))      // USB PHY Loopback Control/Status Register (USBPHY_USB1_LOOPBACK_CLR)
#define USBPHY_USB1_LOOPBACK_TOG      (*((volatile uint32_t *)0x400A211C))      // USB PHY Loopback Control/Status Register (USBPHY_USB1_LOOPBACK_TOG)
#define USBPHY_USB1_LOOPBACK_HSFSCNT  (*((volatile uint32_t *)0x400A2120))      // USB PHY Loopback Packet Number Select Register (USBPHY_USB1_LOOPBACK_HSFSCNT)
#define USBPHY_USB1_LOOPBACK_HSFSCNT_SET(*((volatile uint32_t *)0x400A2124))      // USB PHY Loopback Packet Number Select Register (USBPHY_USB1_LOOPBACK_HSFSCNT_SET)
#define USBPHY_USB1_LOOPBACK_HSFSCNT_CLR(*((volatile uint32_t *)0x400A2128))      // USB PHY Loopback Packet Number Select Register (USBPHY_USB1_LOOPBACK_HSFSCNT_CLR)
#define USBPHY_USB1_LOOPBACK_HSFSCNT_TOG(*((volatile uint32_t *)0x400A212C))      // USB PHY Loopback Packet Number Select Register (USBPHY_USB1_LOOPBACK_HSFSCNT_TOG)
#define USBPHY_TRIM_OVERRIDE_EN       (*((volatile uint32_t *)0x400A2130))      // USB PHY Trim Override Enable Register (USBPHY_TRIM_OVERRIDE_EN)
#define USBPHY_TRIM_OVERRIDE_EN_SET   (*((volatile uint32_t *)0x400A2134))      // USB PHY Trim Override Enable Register (USBPHY_TRIM_OVERRIDE_EN_SET)
#define USBPHY_TRIM_OVERRIDE_EN_CLR   (*((volatile uint32_t *)0x400A2138))      // USB PHY Trim Override Enable Register (USBPHY_TRIM_OVERRIDE_EN_CLR)
#define USBPHY_TRIM_OVERRIDE_EN_TOG   (*((volatile uint32_t *)0x400A213C))      // USB PHY Trim Override Enable Register (USBPHY_TRIM_OVERRIDE_EN_TOG)


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
#define SPI2_MCR                      (*((volatile uint32_t *)0x400AC000))      // Module Configuration Register
#define SPI2_TCR                      (*((volatile uint32_t *)0x400AC008))      // Transfer Count Register
#define SPI2_CTAR0                    (*((volatile uint32_t *)0x400AC00C))      // Clock and Transfer Attributes Register (In Master Mode)
#define SPI2_CTAR0_SLAVE              (*((volatile uint32_t *)0x400AC00C))      // Clock and Transfer Attributes Register (In Slave Mode)
#define SPI2_CTAR1                    (*((volatile uint32_t *)0x400AC010))      // Clock and Transfer Attributes Register (In Master Mode)
#define SPI2_SR                       (*((volatile uint32_t *)0x400AC02C))      // Status Register
#define SPI2_RSER                     (*((volatile uint32_t *)0x400AC030))      // DMA/Interrupt Request Select and Enable Register
#define SPI2_PUSHR                    (*((volatile uint32_t *)0x400AC034))      // PUSH TX FIFO Register In Master Mode
#define SPI2_PUSHR_SLAVE              (*((volatile uint32_t *)0x400AC034))      // PUSH TX FIFO Register In Slave Mode
#define SPI2_POPR                     (*((volatile uint32_t *)0x400AC038))      // POP RX FIFO Register
#define SPI2_TXFR0                    (*((volatile uint32_t *)0x400AC03C))      // Transmit FIFO Registers
#define SPI2_TXFR1                    (*((volatile uint32_t *)0x400AC040))      // Transmit FIFO Registers
#define SPI2_TXFR2                    (*((volatile uint32_t *)0x400AC044))      // Transmit FIFO Registers
#define SPI2_TXFR3                    (*((volatile uint32_t *)0x400AC048))      // Transmit FIFO Registers
#define SPI2_RXFR0                    (*((volatile uint32_t *)0x400AC07C))      // Receive FIFO Registers
#define SPI2_RXFR1                    (*((volatile uint32_t *)0x400AC080))      // Receive FIFO Registers
#define SPI2_RXFR2                    (*((volatile uint32_t *)0x400AC084))      // Receive FIFO Registers
#define SPI2_RXFR3                    (*((volatile uint32_t *)0x400AC088))      // Receive FIFO Registers
#define SPI3_MCR                      (*((volatile uint32_t *)0x400AD000))      // Module Configuration Register
#define SPI3_TCR                      (*((volatile uint32_t *)0x400AD008))      // Transfer Count Register
#define SPI3_CTAR0                    (*((volatile uint32_t *)0x400AD00C))      // Clock and Transfer Attributes Register (In Master Mode)
#define SPI3_CTAR0_SLAVE              (*((volatile uint32_t *)0x400AD00C))      // Clock and Transfer Attributes Register (In Slave Mode)
#define SPI3_CTAR1                    (*((volatile uint32_t *)0x400AD010))      // Clock and Transfer Attributes Register (In Master Mode)
#define SPI3_SR                       (*((volatile uint32_t *)0x400AD02C))      // Status Register
#define SPI3_RSER                     (*((volatile uint32_t *)0x400AD030))      // DMA/Interrupt Request Select and Enable Register
#define SPI3_PUSHR                    (*((volatile uint32_t *)0x400AD034))      // PUSH TX FIFO Register In Master Mode
#define SPI3_PUSHR_SLAVE              (*((volatile uint32_t *)0x400AD034))      // PUSH TX FIFO Register In Slave Mode
#define SPI3_POPR                     (*((volatile uint32_t *)0x400AD038))      // POP RX FIFO Register
#define SPI3_TXFR0                    (*((volatile uint32_t *)0x400AD03C))      // Transmit FIFO Registers
#define SPI3_TXFR1                    (*((volatile uint32_t *)0x400AD040))      // Transmit FIFO Registers
#define SPI3_TXFR2                    (*((volatile uint32_t *)0x400AD044))      // Transmit FIFO Registers
#define SPI3_TXFR3                    (*((volatile uint32_t *)0x400AD048))      // Transmit FIFO Registers
#define SPI3_RXFR0                    (*((volatile uint32_t *)0x400AD07C))      // Receive FIFO Registers
#define SPI3_RXFR1                    (*((volatile uint32_t *)0x400AD080))      // Receive FIFO Registers
#define SPI3_RXFR2                    (*((volatile uint32_t *)0x400AD084))      // Receive FIFO Registers
#define SPI3_RXFR3                    (*((volatile uint32_t *)0x400AD088))      // Receive FIFO Registers


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
#define I2C0_S2                       (*((volatile uint32_t *)0x4006600C))      // I2C Status register 2 (I2C0_S2)
#define I2C1_A1                       (*((volatile uint32_t *)0x40067000))      // I2C Address Register 1 (I2C1_A1)
#define I2C1_F                        (*((volatile uint32_t *)0x40067001))      // I2C Frequency Divider register (I2C1_F)
#define I2C1_C1                       (*((volatile uint32_t *)0x40067002))      // I2C Control Register 1 (I2C1_C1)
#define I2C1_S                        (*((volatile uint32_t *)0x40067003))      // I2C Status register (I2C1_S)
#define I2C1_D                        (*((volatile uint32_t *)0x40067004))      // I2C Data I/O register (I2C1_D)
#define I2C1_C2                       (*((volatile uint32_t *)0x40067005))      // I2C Control Register 2 (I2C1_C2)
#define I2C1_FLT                      (*((volatile uint32_t *)0x40067006))      // I2C Programmable Input Glitch Filter Register (I2C1_FLT)
#define I2C1_RA                       (*((volatile uint32_t *)0x40067007))      // I2C Range Address register (I2C1_RA)
#define I2C1_SMB                      (*((volatile uint32_t *)0x40067008))      // I2C SMBus Control and Status register (I2C1_SMB)
#define I2C1_A2                       (*((volatile uint32_t *)0x40067009))      // I2C Address Register 2 (I2C1_A2)
#define I2C1_SLTH                     (*((volatile uint32_t *)0x4006700A))      // I2C SCL Low Timeout Register High (I2C1_SLTH)
#define I2C1_SLTL                     (*((volatile uint32_t *)0x4006700B))      // I2C SCL Low Timeout Register Low (I2C1_SLTL)
#define I2C1_S2                       (*((volatile uint32_t *)0x4006700C))      // I2C Status register 2 (I2C1_S2)
#define I2C2_A1                       (*((volatile uint32_t *)0x400E6000))      // I2C Address Register 1 (I2C2_A1)
#define I2C2_F                        (*((volatile uint32_t *)0x400E6001))      // I2C Frequency Divider register (I2C2_F)
#define I2C2_C1                       (*((volatile uint32_t *)0x400E6002))      // I2C Control Register 1 (I2C2_C1)
#define I2C2_S                        (*((volatile uint32_t *)0x400E6003))      // I2C Status register (I2C2_S)
#define I2C2_D                        (*((volatile uint32_t *)0x400E6004))      // I2C Data I/O register (I2C2_D)
#define I2C2_C2                       (*((volatile uint32_t *)0x400E6005))      // I2C Control Register 2 (I2C2_C2)
#define I2C2_FLT                      (*((volatile uint32_t *)0x400E6006))      // I2C Programmable Input Glitch Filter Register (I2C2_FLT)
#define I2C2_RA                       (*((volatile uint32_t *)0x400E6007))      // I2C Range Address register (I2C2_RA)
#define I2C2_SMB                      (*((volatile uint32_t *)0x400E6008))      // I2C SMBus Control and Status register (I2C2_SMB)
#define I2C2_A2                       (*((volatile uint32_t *)0x400E6009))      // I2C Address Register 2 (I2C2_A2)
#define I2C2_SLTH                     (*((volatile uint32_t *)0x400E600A))      // I2C SCL Low Timeout Register High (I2C2_SLTH)
#define I2C2_SLTL                     (*((volatile uint32_t *)0x400E600B))      // I2C SCL Low Timeout Register Low (I2C2_SLTL)
#define I2C2_S2                       (*((volatile uint32_t *)0x400E600C))      // I2C Status register 2 (I2C2_S2)
#define I2C3_A1                       (*((volatile uint32_t *)0x400E7000))      // I2C Address Register 1 (I2C3_A1)
#define I2C3_F                        (*((volatile uint32_t *)0x400E7001))      // I2C Frequency Divider register (I2C3_F)
#define I2C3_C1                       (*((volatile uint32_t *)0x400E7002))      // I2C Control Register 1 (I2C3_C1)
#define I2C3_S                        (*((volatile uint32_t *)0x400E7003))      // I2C Status register (I2C3_S)
#define I2C3_D                        (*((volatile uint32_t *)0x400E7004))      // I2C Data I/O register (I2C3_D)
#define I2C3_C2                       (*((volatile uint32_t *)0x400E7005))      // I2C Control Register 2 (I2C3_C2)
#define I2C3_FLT                      (*((volatile uint32_t *)0x400E7006))      // I2C Programmable Input Glitch Filter Register (I2C3_FLT)
#define I2C3_RA                       (*((volatile uint32_t *)0x400E7007))      // I2C Range Address register (I2C3_RA)
#define I2C3_SMB                      (*((volatile uint32_t *)0x400E7008))      // I2C SMBus Control and Status register (I2C3_SMB)
#define I2C3_A2                       (*((volatile uint32_t *)0x400E7009))      // I2C Address Register 2 (I2C3_A2)
#define I2C3_SLTH                     (*((volatile uint32_t *)0x400E700A))      // I2C SCL Low Timeout Register High (I2C3_SLTH)
#define I2C3_SLTL                     (*((volatile uint32_t *)0x400E700B))      // I2C SCL Low Timeout Register Low (I2C3_SLTL)
#define I2C3_S2                       (*((volatile uint32_t *)0x400E700C))      // I2C Status register 2 (I2C3_S2)


//*****************************************************************************
//
// Low Power Universal asynchronous receiver/transmitter (LPUART) registers
//
//*****************************************************************************

#define LPUART0_BAUD                  (*((volatile uint32_t *)0x400C4000))      // LPUART Baud Rate Register
#define LPUART0_STAT                  (*((volatile uint32_t *)0x400C4004))      // LPUART Status Register
#define LPUART0_CTRL                  (*((volatile uint32_t *)0x400C4008))      // LPUART Control Register
#define LPUART0_DATA                  (*((volatile uint32_t *)0x400C400C))      // LPUART Data Register
#define LPUART0_MATCH                 (*((volatile uint32_t *)0x400C4010))      // LPUART Match Address Register
#define LPUART0_MODIR                 (*((volatile uint32_t *)0x400C4014))      // LPUART Modem IrDA Register
#define LPUART0_FIFO                  (*((volatile uint32_t *)0x400C4018))      // LPUART FIFO Register
#define LPUART0_WATER                 (*((volatile uint32_t *)0x400C401C))      // LPUART Watermark Register
#define LPUART1_BAUD                  (*((volatile uint32_t *)0x400C5000))      // LPUART Baud Rate Register
#define LPUART1_STAT                  (*((volatile uint32_t *)0x400C5004))      // LPUART Status Register
#define LPUART1_CTRL                  (*((volatile uint32_t *)0x400C5008))      // LPUART Control Register
#define LPUART1_DATA                  (*((volatile uint32_t *)0x400C500C))      // LPUART Data Register
#define LPUART1_MATCH                 (*((volatile uint32_t *)0x400C5010))      // LPUART Match Address Register
#define LPUART1_MODIR                 (*((volatile uint32_t *)0x400C5014))      // LPUART Modem IrDA Register
#define LPUART1_FIFO                  (*((volatile uint32_t *)0x400C5018))      // LPUART FIFO Register
#define LPUART1_WATER                 (*((volatile uint32_t *)0x400C501C))      // LPUART Watermark Register
#define LPUART2_BAUD                  (*((volatile uint32_t *)0x400C6000))      // LPUART Baud Rate Register
#define LPUART2_STAT                  (*((volatile uint32_t *)0x400C6004))      // LPUART Status Register
#define LPUART2_CTRL                  (*((volatile uint32_t *)0x400C6008))      // LPUART Control Register
#define LPUART2_DATA                  (*((volatile uint32_t *)0x400C600C))      // LPUART Data Register
#define LPUART2_MATCH                 (*((volatile uint32_t *)0x400C6010))      // LPUART Match Address Register
#define LPUART2_MODIR                 (*((volatile uint32_t *)0x400C6014))      // LPUART Modem IrDA Register
#define LPUART2_FIFO                  (*((volatile uint32_t *)0x400C6018))      // LPUART FIFO Register
#define LPUART2_WATER                 (*((volatile uint32_t *)0x400C601C))      // LPUART Watermark Register
#define LPUART3_BAUD                  (*((volatile uint32_t *)0x400C7000))      // LPUART Baud Rate Register
#define LPUART3_STAT                  (*((volatile uint32_t *)0x400C7004))      // LPUART Status Register
#define LPUART3_CTRL                  (*((volatile uint32_t *)0x400C7008))      // LPUART Control Register
#define LPUART3_DATA                  (*((volatile uint32_t *)0x400C700C))      // LPUART Data Register
#define LPUART3_MATCH                 (*((volatile uint32_t *)0x400C7010))      // LPUART Match Address Register
#define LPUART3_MODIR                 (*((volatile uint32_t *)0x400C7014))      // LPUART Modem IrDA Register
#define LPUART3_FIFO                  (*((volatile uint32_t *)0x400C7018))      // LPUART FIFO Register
#define LPUART3_WATER                 (*((volatile uint32_t *)0x400C701C))      // LPUART Watermark Register
#define LPUART4_BAUD                  (*((volatile uint32_t *)0x400D6000))      // LPUART Baud Rate Register
#define LPUART4_STAT                  (*((volatile uint32_t *)0x400D6004))      // LPUART Status Register
#define LPUART4_CTRL                  (*((volatile uint32_t *)0x400D6008))      // LPUART Control Register
#define LPUART4_DATA                  (*((volatile uint32_t *)0x400D600C))      // LPUART Data Register
#define LPUART4_MATCH                 (*((volatile uint32_t *)0x400D6010))      // LPUART Match Address Register
#define LPUART4_MODIR                 (*((volatile uint32_t *)0x400D6014))      // LPUART Modem IrDA Register
#define LPUART4_FIFO                  (*((volatile uint32_t *)0x400D6018))      // LPUART FIFO Register
#define LPUART4_WATER                 (*((volatile uint32_t *)0x400D601C))      // LPUART Watermark Register


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
#define I2S0_TDR1                     (*((volatile uint32_t *)0x4002F024))      // SAI Transmit Data Register (I2S0_TDR1)
#define I2S0_TFR0                     (*((volatile uint32_t *)0x4002F040))      // SAI Transmit FIFO Register (I2S0_TFR0)
#define I2S0_TFR1                     (*((volatile uint32_t *)0x4002F044))      // SAI Transmit FIFO Register (I2S0_TFR1)
#define I2S0_TMR                      (*((volatile uint32_t *)0x4002F060))      // SAI Transmit Mask Register (I2S0_TMR)
#define I2S0_RCSR                     (*((volatile uint32_t *)0x4002F080))      // SAI Receive Control Register (I2S0_RCSR)
#define I2S0_RCR1                     (*((volatile uint32_t *)0x4002F084))      // SAI Receive Configuration 1 Register (I2S0_RCR1)
#define I2S0_RCR2                     (*((volatile uint32_t *)0x4002F088))      // SAI Receive Configuration 2 Register (I2S0_RCR2)
#define I2S0_RCR3                     (*((volatile uint32_t *)0x4002F08C))      // SAI Receive Configuration 3 Register (I2S0_RCR3)
#define I2S0_RCR4                     (*((volatile uint32_t *)0x4002F090))      // SAI Receive Configuration 4 Register (I2S0_RCR4)
#define I2S0_RCR5                     (*((volatile uint32_t *)0x4002F094))      // SAI Receive Configuration 5 Register (I2S0_RCR5)
#define I2S0_RDR0                     (*((volatile uint32_t *)0x4002F0A0))      // SAI Receive Data Register (I2S0_RDR0)
#define I2S0_RDR1                     (*((volatile uint32_t *)0x4002F0A4))      // SAI Receive Data Register (I2S0_RDR1)
#define I2S0_RFR0                     (*((volatile uint32_t *)0x4002F0C0))      // SAI Receive FIFO Register (I2S0_RFR0)
#define I2S0_RFR1                     (*((volatile uint32_t *)0x4002F0C4))      // SAI Receive FIFO Register (I2S0_RFR1)
#define I2S0_RMR                      (*((volatile uint32_t *)0x4002F0E0))      // SAI Receive Mask Register (I2S0_RMR)
#define I2S0_MCR                      (*((volatile uint32_t *)0x4002F100))      // SAI MCLK Control Register (I2S0_MCR)
#define I2S0_MDR                      (*((volatile uint32_t *)0x4002F104))      // SAI MCLK Divide Register (I2S0_MDR)
#define I2S1_TCSR                     (*((volatile uint32_t *)0x400AF000))      // SAI Transmit Control Register (I2S1_TCSR)
#define I2S1_TCR1                     (*((volatile uint32_t *)0x400AF004))      // SAI Transmit Configuration 1 Register (I2S1_TCR1)
#define I2S1_TCR2                     (*((volatile uint32_t *)0x400AF008))      // SAI Transmit Configuration 2 Register (I2S1_TCR2)
#define I2S1_TCR3                     (*((volatile uint32_t *)0x400AF00C))      // SAI Transmit Configuration 3 Register (I2S1_TCR3)
#define I2S1_TCR4                     (*((volatile uint32_t *)0x400AF010))      // SAI Transmit Configuration 4 Register (I2S1_TCR4)
#define I2S1_TCR5                     (*((volatile uint32_t *)0x400AF014))      // SAI Transmit Configuration 5 Register (I2S1_TCR5)
#define I2S1_TDR0                     (*((volatile uint32_t *)0x400AF020))      // SAI Transmit Data Register (I2S1_TDR0)
#define I2S1_TDR1                     (*((volatile uint32_t *)0x400AF024))      // SAI Transmit Data Register (I2S1_TDR1)
#define I2S1_TFR0                     (*((volatile uint32_t *)0x400AF040))      // SAI Transmit FIFO Register (I2S1_TFR0)
#define I2S1_TFR1                     (*((volatile uint32_t *)0x400AF044))      // SAI Transmit FIFO Register (I2S1_TFR1)
#define I2S1_TMR                      (*((volatile uint32_t *)0x400AF060))      // SAI Transmit Mask Register (I2S1_TMR)
#define I2S1_RCSR                     (*((volatile uint32_t *)0x400AF080))      // SAI Receive Control Register (I2S1_RCSR)
#define I2S1_RCR1                     (*((volatile uint32_t *)0x400AF084))      // SAI Receive Configuration 1 Register (I2S1_RCR1)
#define I2S1_RCR2                     (*((volatile uint32_t *)0x400AF088))      // SAI Receive Configuration 2 Register (I2S1_RCR2)
#define I2S1_RCR3                     (*((volatile uint32_t *)0x400AF08C))      // SAI Receive Configuration 3 Register (I2S1_RCR3)
#define I2S1_RCR4                     (*((volatile uint32_t *)0x400AF090))      // SAI Receive Configuration 4 Register (I2S1_RCR4)
#define I2S1_RCR5                     (*((volatile uint32_t *)0x400AF094))      // SAI Receive Configuration 5 Register (I2S1_RCR5)
#define I2S1_RDR0                     (*((volatile uint32_t *)0x400AF0A0))      // SAI Receive Data Register (I2S1_RDR0)
#define I2S1_RDR1                     (*((volatile uint32_t *)0x400AF0A4))      // SAI Receive Data Register (I2S1_RDR1)
#define I2S1_RFR0                     (*((volatile uint32_t *)0x400AF0C0))      // SAI Receive FIFO Register (I2S1_RFR0)
#define I2S1_RFR1                     (*((volatile uint32_t *)0x400AF0C4))      // SAI Receive FIFO Register (I2S1_RFR1)
#define I2S1_RMR                      (*((volatile uint32_t *)0x400AF0E0))      // SAI Receive Mask Register (I2S1_RMR)
#define I2S1_MCR                      (*((volatile uint32_t *)0x400AF100))      // SAI MCLK Control Register (I2S1_MCR)
#define I2S1_MDR                      (*((volatile uint32_t *)0x400AF104))      // SAI MCLK Divide Register (I2S1_MDR)


//*****************************************************************************
//
// Secured digital host controller (SDHC) registers
//
//*****************************************************************************

#define SDHC_DSADDR                   (*((volatile uint32_t *)0x400B1000))      // DMA System Address register
#define SDHC_BLKATTR                  (*((volatile uint32_t *)0x400B1004))      // Block Attributes register
#define SDHC_CMDARG                   (*((volatile uint32_t *)0x400B1008))      // Command Argument register
#define SDHC_XFERTYP                  (*((volatile uint32_t *)0x400B100C))      // Transfer Type register
#define SDHC_CMDRSP0                  (*((volatile uint32_t *)0x400B1010))      // Command Response 0
#define SDHC_CMDRSP1                  (*((volatile uint32_t *)0x400B1014))      // Command Response 1
#define SDHC_CMDRSP2                  (*((volatile uint32_t *)0x400B1018))      // Command Response 2
#define SDHC_CMDRSP3                  (*((volatile uint32_t *)0x400B101C))      // Command Response 3
#define SDHC_DATPORT                  (*((volatile uint32_t *)0x400B1020))      // Buffer Data Port register
#define SDHC_PRSSTAT                  (*((volatile uint32_t *)0x400B1024))      // Present State register
#define SDHC_PROCTL                   (*((volatile uint32_t *)0x400B1028))      // Protocol Control register
#define SDHC_SYSCTL                   (*((volatile uint32_t *)0x400B102C))      // System Control register
#define SDHC_IRQSTAT                  (*((volatile uint32_t *)0x400B1030))      // Interrupt Status register
#define SDHC_IRQSTATEN                (*((volatile uint32_t *)0x400B1034))      // Interrupt Status Enable register
#define SDHC_IRQSIGEN                 (*((volatile uint32_t *)0x400B1038))      // Interrupt Signal Enable register
#define SDHC_AC12ERR                  (*((volatile uint32_t *)0x400B103C))      // Auto CMD12 Error Status Register
#define SDHC_HTCAPBLT                 (*((volatile uint32_t *)0x400B1040))      // Host Controller Capabilities
#define SDHC_WML                      (*((volatile uint32_t *)0x400B1044))      // Watermark Level Register
#define SDHC_FEVT                     (*((volatile uint32_t *)0x400B1050))      // Force Event register
#define SDHC_ADMAES                   (*((volatile uint32_t *)0x400B1054))      // ADMA Error Status register
#define SDHC_ADSADDR                  (*((volatile uint32_t *)0x400B1058))      // ADMA System Address register
#define SDHC_VENDOR                   (*((volatile uint32_t *)0x400B10C0))      // Vendor Specific register
#define SDHC_MMCBOOT                  (*((volatile uint32_t *)0x400B10C4))      // MMC Boot register
#define SDHC_HOSTVER                  (*((volatile uint32_t *)0x400B10FC))      // Host Controller Version


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
#define IRQC                          0x07800000      // Interrupt Configuration
#define LK                            0x00008000      // Lock Register
#define MUX                           0x00001C00      // Pin Mux Control
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
#define GPWD                          0x7FFF8000      // Global Pin Write Data


//*****************************************************************************
//
// The following are defines for the bit fields in the PORTx_GPCHR register.
//
//*****************************************************************************

#define GPWE                          0x7FFF80000000      // Global Pin Write Enable
#define GPWD                          0x7FFF8000      // Global Pin Write Data


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

#define USBREGEN                      0x80000000      // USB voltage regulator enable
#define USBSSTBY                      0x40000000      // USB voltage regulator in standby mode during Stop, VLPS, LLS and VLLS modes
#define USBVSTBY                      0x20000000      // USB voltage regulator in standby mode during VLPR and VLPW modes
#define OSC32KSEL                     0x02000000      // 32K oscillator clock select
#define RAMSIZE                       0x00078000      // RAM size


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SOPT1CFG register.
//
//*****************************************************************************

#define USSWE                         0x04000000      // USB voltage regulator stop standby write enable
#define UVSWE                         0x02000000      // USB voltage regulator VLP standby write enable
#define URWE                          0x01000000      // USB voltage regulator enable write enable


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_USBPHYCTL register.
//
//*****************************************************************************

#define USBDISILIM                    0x00800000      // USB Disable Inrush Current Limit
#define USB3VOUTTRG                   0x01C00000      // USB 3.3V Output Target
#define USBVREGPD                     0x00000200      // Enables the pulldown on the output of the USB Regulator
#define USBVREGSEL                    0x00000100      // Selects the default input voltage source to the USB Regulator in case both VREG_IN0 and VREG_IN1 are powered


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SOPT2 register.
//
//*****************************************************************************

#define SDHCSRC                       0x60000000      // SDHC clock source select
#define LPUARTSRC                     0x18000000      // LPUART clock source select
#define TPMSRC                        0x06000000      // TPM clock source select
#define FLEXIOSRC                     0x01800000      // FlexIO Module Clock Source Select
#define USBSRC                        0x00040000      // USB clock source select
#define PLLFLLSEL                     0x00060000      // PLL/FLL clock select
#define TRACECLKSEL                   0x00001000      // Debug trace clock select
#define FBSL                          0x00000380      // FlexBus security level
#define RTCCLKOUTSEL                  0x00000010      // RTC clock out select
#define USBREGEN                      0x00000002      // USB PHY PLL Regulator Enable
#define USBSLSRC                      0x00000001      // USB Slow Clock Source


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SOPT4 register.
//
//*****************************************************************************

#define FTM3TRG1SRC                   0x80000000      // FlexTimer 3 Hardware Trigger 1 Source Select
#define FTM3TRG0SRC                   0x40000000      // FlexTimer 3 Hardware Trigger 0 Source Select
#define FTM0TRG1SRC                   0x20000000      // FlexTimer 0 Hardware Trigger 1 Source Select
#define FTM0TRG0SRC                   0x10000000      // FlexTimer 0 Hardware Trigger 0 Source Select
#define FTM3CLKSEL                    0x08000000      // FlexTimer 3 External Clock Pin Select
#define FTM2CLKSEL                    0x04000000      // FlexTimer 2 External Clock Pin Select
#define FTM1CLKSEL                    0x02000000      // FTM1 External Clock Pin Select
#define FTM0CLKSEL                    0x01000000      // FlexTimer 0 External Clock Pin Select
#define FTM2CH1SRC                    0x00400000      // FTM2 channel 1 input capture source select
#define FTM2CH0SRC                    0x00600000      // FTM2 channel 0 input capture source select
#define FTM1CH0SRC                    0x00180000      // FTM1 channel 0 input capture source select
#define FTM3FLT0                      0x00001000      // FTM3 Fault 0 Select
#define FTM2FLT0                      0x00000100      // FTM2 Fault 0 Select
#define FTM1FLT0                      0x00000010      // FTM1 Fault 0 Select
#define FTM0FLT1                      0x00000004      // FTM0 Fault 1 Select
#define FTM0FLT0                      0x00000001      // FTM0 Fault 0 Select


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SOPT5 register.
//
//*****************************************************************************

#define LPUART1RXSRC                  0x01800000      // LPUART1 receive data source select
#define LPUART1TXSRC                  0x00600000      // LPUART1 transmit data source select
#define LPUART0RXSRC                  0x00180000      // LPUART0 receive data source select
#define LPUART0TXSRC                  0x00060000      // LPUART0 transmit data source select


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SOPT7 register.
//
//*****************************************************************************

#define ADC0ALTTRGEN                  0x00000080      // ADC0 alternate trigger enable
#define ADC0PRETRGSEL                 0x00000010      // ADC0 pretrigger select
#define ADC0TRGSEL                    0x00000078      // ADC0 trigger select


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SOPT8 register.
//
//*****************************************************************************

#define FTM3OCH7SRC                   0x80000000      // FTM3 channel 7 output source
#define FTM3OCH6SRC                   0x40000000      // FTM3 channel 6 output source
#define FTM3OCH5SRC                   0x20000000      // FTM3 channel 5 output source
#define FTM3OCH4SRC                   0x10000000      // FTM3 channel 4 output source
#define FTM3OCH3SRC                   0x08000000      // FTM3 channel 3 output source
#define FTM3OCH2SRC                   0x04000000      // FTM3 channel 2 output source
#define FTM3OCH1SRC                   0x02000000      // FTM3 channel 1 output source
#define FTM3OCH0SRC                   0x01000000      // FTM3 channel 0 output source
#define FTM0OCH7SRC                   0x00800000      // FTM0 channel 7 output source
#define FTM0OCH6SRC                   0x00400000      // FTM0 channel 6 output source
#define FTM0OCH5SRC                   0x00200000      // FTM0 channel 5 output source
#define FTM0OCH4SRC                   0x00100000      // FTM0 channel 4 output source
#define FTM0OCH3SRC                   0x00080000      // FTM0 channel 3 output source
#define FTM0OCH2SRC                   0x00040000      // FTM0 channel 2 output source
#define FTM0OCH1SRC                   0x00020000      // FTM0 channel 1 output source
#define FTM0OCH0SRC                   0x00010000      // FTM0 channel 0 output source
#define FTM3SYNCBIT                   0x00000008      // FTM3 Hardware Trigger 0 Software Synchronization
#define FTM2SYNCBIT                   0x00000004      // FTM2 Hardware Trigger 0 Software Synchronization
#define FTM1SYNCBIT                   0x00000002      // FTM1 Hardware Trigger 0 Software Synchronization
#define FTM0SYNCBIT                   0x00000001      // FTM0 Hardware Trigger 0 Software Synchronization


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SOPT9 register.
//
//*****************************************************************************

#define TPM2CLKSEL                    0x04000000      // TPM2 External Clock Pin Select
#define TPM1CLKSEL                    0x02000000      // TPM1 External Clock Pin Select
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
// The following are defines for the bit fields in the SIM_SCGC1 register.
//
//*****************************************************************************

#define I2C3                          0x00000080      // I2C3 Clock Gate Control
#define I2C2                          0x00000040      // I2C2 Clock Gate Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SCGC2 register.
//
//*****************************************************************************

#define FLEXIO                        0x80000000      // FlexIO Clock Gate Control
#define QSPI                          0x04000000      // QSPI Clock Gate Control
#define LPUART4                       0x00400000      // LPUART4 Clock Gate Control
#define DAC0                          0x00001000      // DAC0 Clock Gate Control
#define TPM2                          0x00000400      // TPM2 Clock Gate Control
#define TPM1                          0x00000200      // TPM1 Clock Gate Control
#define LPUART3                       0x00000080      // LPUART3 Clock Gate Control
#define LPUART2                       0x00000040      // LPUART2 Clock Gate Control
#define LPUART1                       0x00000020      // LPUART1 Clock Gate Control
#define LPUART0                       0x00000010      // LPUART0 Clock Gate Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SCGC3 register.
//
//*****************************************************************************

#define FTM3                          0x02000000      // FTM3 Clock Gate Control
#define FTM2                          0x01000000      // FTM2 Clock Gate Control
#define SDHC                          0x00020000      // SDHC Clock Gate Control
#define I2S1                          0x00008000      // I2S1 Clock Gate Control
#define SPI3                          0x00002000      // SPI3 Clock Gate Control
#define SPI2                          0x00001000      // SPI2 Clock Gate Control
#define USBHSDCD                      0x00000008      // USBHS DCD Clock Gate Control
#define USBHSPHY                      0x00000004      // USBHS PHY Clock Gate Control
#define USBHS                         0x00000002      // USBHS Clock Gate Control
#define TRNG                          0x00000001      // TRNG Clock Gate Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SCGC4 register.
//
//*****************************************************************************

#define VREF                          0x00100000      // VREF Clock Gate Control
#define CMP                           0x00080000      // Comparator Clock Gate Control
#define USBOTG                        0x00040000      // USB Clock Gate Control
#define I2C1                          0x00000080      // I2C1 Clock Gate Control
#define I2C0                          0x00000040      // I2C0 Clock Gate Control
#define CMT                           0x00000004      // CMT Clock Gate Control
#define EWM                           0x00000002      // EWM Clock Gate Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SCGC5 register.
//
//*****************************************************************************

#define PORTE                         0x00002000      // Port E Clock Gate Control
#define PORTD                         0x00001000      // Port D Clock Gate Control
#define PORTC                         0x00000800      // Port C Clock Gate Control
#define PORTB                         0x00000400      // Port B Clock Gate Control
#define PORTA                         0x00000200      // Port A Clock Gate Control
#define LPTMR1                        0x00000010      // LPTMR1 Clock Gate Control
#define LPTMR0                        0x00000001      // LPTMR0 Clock Gate Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SCGC6 register.
//
//*****************************************************************************

#define DAC0                          0x80000000      // DAC0 Clock Gate Control
#define RTC                           0x40000000      // RTC Access Control
#define ADC0                          0x08000000      // ADC0 Clock Gate Control
#define FTM2                          0x04000000      // FTM2 Clock Gate Control
#define FTM1                          0x02000000      // FTM1 Clock Gate Control
#define FTM0                          0x01000000      // FTM0 Clock Gate Control
#define PIT                           0x00800000      // PIT Clock Gate Control
#define PDB                           0x00400000      // PDB Clock Gate Control
#define USBDCD                        0x00200000      // USB DCD Clock Gate Control
#define CRC                           0x00040000      // CRC Clock Gate Control
#define I2S0                          0x00008000      // I2S0 Clock Gate Control
#define SPI1                          0x00002000      // SPI1 Clock Gate Control
#define SPI0                          0x00001000      // SPI0 Clock Gate Control
#define DMAMUX                        0x00000002      // DMA Mux Clock Gate Control
#define FTF                           0x00000001      // Flash Memory Clock Gate Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SCGC7 register.
//
//*****************************************************************************

#define SDRAMC                        0x00000008      // SDRAMC Clock Gate Control
#define MPU                           0x00000004      // MPU Clock Gate Control
#define DMA                           0x00000002      // DMA Clock Gate Control
#define FLEXBUS                       0x00000001      // FlexBus Clock Gate Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_CLKDIV1 register.
//
//*****************************************************************************

#define OUTDIV1                       0x780000000      // Clock 1 output divider value
#define OUTDIV2                       0x78000000      // Clock 2 output divider value
#define OUTDIV3                       0x07800000      // Clock 3 output divider value
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

#define NVMSIZE                       0x780000000      // FlexNVM size
#define PFSIZE                        0x78000000      // Program flash size
#define EESIZE                        0x00780000      // EEPROM size
#define FLASHDOZE                     0x00000002      // Flash Doze
#define FLASHDIS                      0x00000001      // Flash Disable


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_FCFG2 register.
//
//*****************************************************************************

#define SWAPPFLSH                     0x80000000      // Swap program flash
#define MAXADDR0                      0x1FC0000000      // Max address block 0
#define PFLSH                         0x00800000      // Program flash only
#define MAXADDR1                      0x1FC00000      // Max address block 1


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_CLKDIV3 register.
//
//*****************************************************************************

#define PLLFLLDIV                     0x00000038      // PLLFLL clock divider divisor
#define PLLFLLFRAC                    0x00000001      // PLLFLL clock divider fraction


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_CLKDIV4 register.
//
//*****************************************************************************

#define TRACEDIV                      0x00000038      // Trace clock divider divisor
#define TRACEFRAC                     0x00000001      // Trace clock divider fraction ::


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
// The following are defines for the bit fields in the RCM_FM register.
//
//*****************************************************************************

#define FORCEROM                      0x0000000C      // Force ROM Boot


//*****************************************************************************
//
// The following are defines for the bit fields in the RCM_MR register.
//
//*****************************************************************************

#define BOOTROM                       0x0000000C      // Boot ROM Configuration


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
#define SMDM_AP                       0x00000008      // MDM-AP System Reset Request
#define SSW                           0x00000004      // Software
#define SLOCKUP                       0x00000002      // Core Lockup
#define SJTAG                         0x00000001      // JTAG Generated Reset


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
// The following are defines for the bit fields in the PMC_LVDSC2 register.
//
//*****************************************************************************

#define LVWF                          0x00000080      // Low-Voltage Warning Flag
#define LVWACK                        0x00000040      // Low-Voltage Warning Acknowledge
#define LVWIE                         0x00000020      // Low-Voltage Warning Interrupt Enable
#define LVWV                          0x0000001C      // Low-Voltage Warning Voltage Select


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
#define HVDV                          0x00000001      // High-Voltage Detect Voltage Select


//*****************************************************************************
//
// The following are defines for the bit fields in the PMC_SRAMCTL register.
//
//*****************************************************************************

#define VLLS2PD                       0x00007F80      // SRAM VLLS2 Powerdown


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
// The following are defines for the bit fields in the MCM_CR register.
//
//*****************************************************************************

#define SRAMLWP                       0x40000000      // SRAM_L Write Protect
#define SRAMLAP                       0x60000000      // SRAM_L arbitration priority
#define SRAMUWP                       0x04000000      // SRAM_U write protect
#define SRAMUAP                       0x06000000      // SRAM_U arbitration priority


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
#define FIDC                          0x00008000      // FPU input denormal interrupt status
#define FIXC                          0x00001000      // FPU inexact interrupt status
#define FUFC                          0x00000800      // FPU underflow interrupt status
#define FOFC                          0x00000400      // FPU overflow interrupt status
#define FDZC                          0x00000200      // FPU divide-by-zero interrupt status
#define FIOC                          0x00000100      // FPU invalid operation interrupt status
#define WABORTS_OVERRUN               0x00000040      // WABORTS is an imprecise write fault from the TCM backdoor (AHBS, that is, AHB Slave Interface).
#define WABORTS                       0x00000020      // WABORTS is an imprecise write fault from the TCM backdoor (AHBS, that is, AHB Slave Interface).


//*****************************************************************************
//
// The following are defines for the bit fields in the MCM_FADR register.
//
//*****************************************************************************

#define ADDRESS                       0x7FFFFFFF80000000      // Fault address


//*****************************************************************************
//
// The following are defines for the bit fields in the MCM_FATR register.
//
//*****************************************************************************

#define BEOVR                         0x80000000      // Bus error overrun
#define BEMN                          0x00007800      // Bus error master number
#define BEWT                          0x00000080      // Bus error write
#define BESZ                          0x00000060      // Bus error size
#define BEMD                          0x00000002      // Bus error privilege level
#define BEDA                          0x00000001      // Bus error access type


//*****************************************************************************
//
// The following are defines for the bit fields in the MCM_FDR register.
//
//*****************************************************************************

#define DATA                          0x7FFFFFFF80000000      // Fault data


//*****************************************************************************
//
// The following are defines for the bit fields in the MCM_PID register.
//
//*****************************************************************************

#define PID                           0x00007F80      // M0_PID And M1_PID For MPU


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
// The following are defines for the bit fields in the AXBS_PRSn register.
//
//*****************************************************************************

#define M5                            0x01C00000      // Master 5 Priority. Sets the arbitration priority for this port on the associated slave port.
#define M4                            0x001C0000      // Master 4 Priority. Sets the arbitration priority for this port on the associated slave port.
#define M3                            0x0001C000      // Master 3 Priority. Sets the arbitration priority for this port on the associated slave port.
#define M2                            0x00001C00      // Master 2 Priority. Sets the arbitration priority for this port on the associated slave port.
#define M1                            0x000001C0      // Master 1 Priority. Sets the arbitration priority for this port on the associated slave port.
#define M0                            0x00000078      // Master 0 Priority. Sets the arbitration priority for this port on the associated slave port.


//*****************************************************************************
//
// The following are defines for the bit fields in the AXBS_CRSn register.
//
//*****************************************************************************

#define RO                            0x80000000      // Read Only
#define HLP                           0x40000000      // Halt Low Priority
#define ARB                           0x00000600      // Arbitration Mode
#define PCTL                          0x00000060      // Parking Control
#define PARK                          0x0000001C      // Park


//*****************************************************************************
//
// The following are defines for the bit fields in the AIPSx_MPRA register.
//
//*****************************************************************************

#define MTR0                          0x40000000      // Master 0 Trusted For Read
#define MTW0                          0x20000000      // Master 0 Trusted For Writes
#define MPL0                          0x10000000      // Master 0 Privilege Level
#define MTR1                          0x04000000      // Master 1 Trusted for Read
#define MTW1                          0x02000000      // Master 1 Trusted for Writes
#define MPL1                          0x01000000      // Master 1 Privilege Level
#define MTR2                          0x00400000      // Master 2 Trusted For Read
#define MTW2                          0x00200000      // Master 2 Trusted For Writes
#define MPL2                          0x00100000      // Master 2 Privilege Level
#define MTR3                          0x00040000      // Master 3 Trusted For Read
#define MTW3                          0x00020000      // Master 3 Trusted For Writes
#define MPL3                          0x00010000      // Master 3 Privilege Level
#define MTR4                          0x00004000      // Master 4 Trusted For Read
#define MTW4                          0x00002000      // Master 4 Trusted For Writes
#define MPL4                          0x00001000      // Master 4 Privilege Level


//*****************************************************************************
//
// The following are defines for the bit fields in the AIPSx_PACRn register.
//
//*****************************************************************************

#define SP0                           0x40000000      // Supervisor Protect
#define WP0                           0x20000000      // Write Protect
#define TP0                           0x10000000      // Trusted Protect
#define SP1                           0x04000000      // Supervisor Protect
#define WP1                           0x02000000      // Write Protect
#define TP1                           0x01000000      // Trusted Protect
#define SP2                           0x00400000      // Supervisor Protect
#define WP2                           0x00200000      // Write Protect
#define TP2                           0x00100000      // Trusted Protect
#define SP3                           0x00040000      // Supervisor Protect
#define WP3                           0x00020000      // Write Protect
#define TP3                           0x00010000      // Trusted Protect
#define SP4                           0x00004000      // Supervisor Protect
#define WP4                           0x00002000      // Write Protect
#define TP4                           0x00001000      // Trusted Protect
#define SP5                           0x00000400      // Supervisor Protect
#define WP5                           0x00000200      // Write Protect
#define TP5                           0x00000100      // Trusted Protect
#define SP6                           0x00000040      // Supervisor Protect
#define WP6                           0x00000020      // Write Protect
#define TP6                           0x00000010      // Trusted Protect
#define SP7                           0x00000004      // Supervisor Protect
#define WP7                           0x00000002      // Write Protect
#define TP7                           0x00000001      // Trusted Protect


//*****************************************************************************
//
// The following are defines for the bit fields in the MPU_CESR register.
//
//*****************************************************************************

#define SPERR                         0x3F80000000      // Slave Port n Error
#define Reserved                      0x00800000      // This read-only field is reserved and always has the value 1
#define Reserved                      0x01C00000      // This read-only field is reserved and always has the value 0
#define HRL                           0x00780000      // Hardware Revision Level
#define NSP                           0x00078000      // Number Of Slave Ports
#define NRGD                          0x00007800      // Number Of Region Descriptors
#define Reserved                      0x00003F80      // This read-only field is reserved and always has the value 0
#define VLD                           0x00000001      // Valid


//*****************************************************************************
//
// The following are defines for the bit fields in the MPU_EARn register.
//
//*****************************************************************************

#define EADDR                         0x7FFFFFFF80000000      // Error Address


//*****************************************************************************
//
// The following are defines for the bit fields in the MPU_EDRn register.
//
//*****************************************************************************

#define EACD                          0x7FFF80000000      // Error Access Control Detail
#define EPID                          0x007F8000      // Error Process Identification
#define EMN                           0x00000780      // Error Master Number
#define EATTR                         0x00000038      // Error Attributes
#define ERW                           0x00000001      // Error Read/Write


//*****************************************************************************
//
// The following are defines for the bit fields in the MPU_RGDn_WORD0 register.
//
//*****************************************************************************

#define SRTADDR                       0x3FFFFFF80000000      // Start Address


//*****************************************************************************
//
// The following are defines for the bit fields in the MPU_RGDn_WORD1 register.
//
//*****************************************************************************

#define ENDADDR                       0x3FFFFFF80000000      // End Address


//*****************************************************************************
//
// The following are defines for the bit fields in the MPU_RGDn_WORD2 register.
//
//*****************************************************************************

#define M7RE                          0x80000000      // Bus Master 7 Read Enable
#define M7WE                          0x40000000      // Bus Master 7 Write Enable
#define M6RE                          0x20000000      // Bus Master 6 Read Enable
#define M6WE                          0x10000000      // Bus Master 6 Write Enable
#define M5RE                          0x08000000      // Bus Master 5 Read Enable
#define M5WE                          0x04000000      // Bus Master 5 Write Enable
#define M4RE                          0x02000000      // Bus Master 4 Read Enable
#define M4WE                          0x01000000      // Bus Master 4 Write Enable
#define M3PE                          0x00800000      // Bus Master 3 Process Identifier Enable
#define M3SM                          0x00C00000      // Bus Master 3 Supervisor Mode Access Control
#define M3UM                          0x00700000      // Bus Master 3 User Mode Access Control
#define M2PE                          0x00020000      // Bus Master 2 Process Identifier Enable
#define M2SM                          0x00030000      // Bus Master 2 Supervisor Mode Access Control
#define M2UM                          0x0001C000      // Bus Master 2 User Mode Access Control
#define M1PE                          0x00000800      // Bus Master 1 Process Identifier enable
#define M1SM                          0x00000C00      // Bus Master 1 Supervisor Mode Access Control
#define M1UM                          0x00000700      // Bus Master 1 User Mode Access Control
#define M0PE                          0x00000020      // Bus Master 0 Process Identifier enable
#define M0SM                          0x00000030      // Bus Master 0 Supervisor Mode Access Control
#define M0UM                          0x0000001C      // Bus Master 0 User Mode Access Control


//*****************************************************************************
//
// The following are defines for the bit fields in the MPU_RGDn_WORD3 register.
//
//*****************************************************************************

#define PID                           0x7F80000000      // Process Identifier
#define PIDMASK                       0x7F800000      // Process Identifier Mask
#define VLD                           0x00000001      // Valid


//*****************************************************************************
//
// The following are defines for the bit fields in the MPU_RGDAACn register.
//
//*****************************************************************************

#define M7WE                          0x80000000      // Bus Master 7 Write Enable
#define M7RE                          0x40000000      // Bus Master 7 Read Enable
#define M6WE                          0x20000000      // Bus Master 6 Write Enable
#define M6RE                          0x10000000      // Bus Master 6 Read Enable
#define M5WE                          0x08000000      // Bus Master 5 Write Enable
#define M5RE                          0x04000000      // Bus Master 5 Read Enable
#define M4WE                          0x02000000      // Bus Master 4 Write Enable
#define M4RE                          0x01000000      // Bus Master 4 Read Enable
#define M3PE                          0x00800000      // Bus Master 3 Process Identifier Enable
#define M3SM                          0x00C00000      // Bus Master 3 Supervisor Mode Access Control
#define M3UM                          0x00700000      // Bus Master 3 User Mode Access Control
#define M2PE                          0x00020000      // Bus Master 2 Process Identifier Enable
#define M2SM                          0x00030000      // Bus Master 2 Supervisor Mode Access Control
#define M2UM                          0x0001C000      // Bus Master 2 User Mode Access Control
#define M1PE                          0x00000800      // Bus Master 1 Process Identifier enable
#define M1SM                          0x00000C00      // Bus Master 1 Supervisor Mode Access Control
#define M1UM                          0x00000700      // Bus Master 1 User Mode Access Control
#define M0PE                          0x00000020      // Bus Master 0 Process Identifier enable
#define M0SM                          0x00000030      // Bus Master 0 Supervisor Mode Access Control
#define M0UM                          0x0000001C      // Bus Master 0 User Mode Access Control


//*****************************************************************************
//
// The following are defines for the bit fields in the Reserved_memory_and_bit_fields register.
//
//*****************************************************************************

#define -                             0x180000000      // -


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_CR register.
//
//*****************************************************************************

#define CX                            0x00020000      // Cancel Transfer
#define ECX                           0x00010000      // Error Cancel Transfer
#define GRP1PRI                       0x00000400      // Channel Group 1 Priority
#define GRP0PRI                       0x00000100      // Channel Group 0 Priority
#define EMLM                          0x00000080      // Enable Minor Loop Mapping
#define CLM                           0x00000040      // Continuous Link Mode
#define HALT                          0x00000020      // Halt DMA Operations
#define HOE                           0x00000010      // Halt On Error
#define ERGA                          0x00000008      // Enable Round Robin Group Arbitration
#define ERCA                          0x00000004      // Enable Round Robin Channel Arbitration
#define EDBG                          0x00000002      // Enable Debug


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_ES register.
//
//*****************************************************************************

#define VLD                           0x80000000      // -
#define ECX                           0x00010000      // Transfer Canceled
#define GPE                           0x00008000      // Group Priority Error
#define CPE                           0x00004000      // Channel Priority Error
#define ERRCHN                        0x0001F000      // Error Channel Number or Canceled Channel Number
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

#define ERQn                          0x7FFFFFFF80000000      // Enable DMA Request n


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_EEI register.
//
//*****************************************************************************

#define EEIn                          0x7FFFFFFF80000000      // Enable Error Interrupt n


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_CEEI register.
//
//*****************************************************************************

#define NOP                           0x00000080      // No Op enable
#define CAEE                          0x00000040      // Clear All Enable Error Interrupts
#define CEEIn                         0x000007E0      // Clear Enable Error Interrupt n


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_SEEI register.
//
//*****************************************************************************

#define NOP                           0x00000080      // No Op enable
#define SAEE                          0x00000040      // Sets All Enable Error Interrupts
#define SEEIn                         0x000007E0      // Set Enable Error Interrupt n


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_CERQ register.
//
//*****************************************************************************

#define NOP                           0x00000080      // No Op enable
#define CAER                          0x00000040      // Clear All Enable Requests
#define CERQn                         0x000007E0      // Clear Enable Request n


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_SERQ register.
//
//*****************************************************************************

#define NOP                           0x00000080      // No Op enable
#define SAER                          0x00000040      // Set All Enable Requests
#define SERQn                         0x000007E0      // Set Enable Request n


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_CDNE register.
//
//*****************************************************************************

#define NOP                           0x00000080      // No Op enable
#define CADN                          0x00000040      // Clears All DONE Bits
#define CDNE                          0x000007E0      // Clear DONE Bit


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_SSRT register.
//
//*****************************************************************************

#define NOP                           0x00000080      // No Op enable
#define SAST                          0x00000040      // Set All START Bits (activates all channels)
#define SSRTn                         0x000007E0      // Set START Bit


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_CERR register.
//
//*****************************************************************************

#define NOP                           0x00000080      // No Op enable
#define CAEI                          0x00000040      // Clear All Error Indicators
#define CERRn                         0x000007E0      // Clear Error Indicator


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_CINT register.
//
//*****************************************************************************

#define NOP                           0x00000080      // No Op enable
#define CAIR                          0x00000040      // Clear All Interrupt Requests
#define CINTn                         0x000007E0      // Clear Interrupt Request


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_INT register.
//
//*****************************************************************************

#define INTn                          0x7FFFFFFF80000000      // Interrupt Request n


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_ERR register.
//
//*****************************************************************************

#define ERRn                          0x7FFFFFFF80000000      // Error In Channel n
#define ERR31                         0x80000000      // Error In Channel 31
#define ERR30                         0x40000000      // Error In Channel 30
#define ERR29                         0x20000000      // Error In Channel 29
#define ERR28                         0x10000000      // Error In Channel 28
#define ERR27                         0x08000000      // Error In Channel 27
#define ERR26                         0x04000000      // Error In Channel 26
#define ERR25                         0x02000000      // Error In Channel 25
#define ERR24                         0x01000000      // Error In Channel 24
#define ERR23                         0x00800000      // Error In Channel 23
#define ERR22                         0x00400000      // Error In Channel 22
#define ERR21                         0x00200000      // Error In Channel 21
#define ERR20                         0x00100000      // Error In Channel 20
#define ERR19                         0x00080000      // Error In Channel 19
#define ERR18                         0x00040000      // Error In Channel 18
#define ERR17                         0x00020000      // Error In Channel 17
#define ERR16                         0x00010000      // Error In Channel 16
#define ERR15                         0x00008000      // Error In Channel 15
#define ERR14                         0x00004000      // Error In Channel 14
#define ERR13                         0x00002000      // Error In Channel 13
#define ERR12                         0x00001000      // Error In Channel 12
#define ERR11                         0x00000800      // Error In Channel 11
#define ERR10                         0x00000400      // Error In Channel 10
#define ERR9                          0x00000200      // Error In Channel 9
#define ERR8                          0x00000100      // Error In Channel 8
#define ERR7                          0x00000080      // Error In Channel 7
#define ERR6                          0x00000040      // Error In Channel 6
#define ERR5                          0x00000020      // Error In Channel 5
#define ERR4                          0x00000010      // Error In Channel 4
#define ERR3                          0x00000008      // Error In Channel 3
#define ERR2                          0x00000004      // Error In Channel 2
#define ERR1                          0x00000002      // Error In Channel 1
#define ERR0                          0x00000001      // Error In Channel 0


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_HRS register.
//
//*****************************************************************************

#define HRSn                          0x7FFFFFFF80000000      // Hardware Request Status Channel n
#define HRS31                         0x80000000      // Hardware Request Status Channel 31
#define HRS30                         0x40000000      // Hardware Request Status Channel 30
#define HRS29                         0x20000000      // Hardware Request Status Channel 29
#define HRS28                         0x10000000      // Hardware Request Status Channel 28
#define HRS27                         0x08000000      // Hardware Request Status Channel 27
#define HRS26                         0x04000000      // Hardware Request Status Channel 26
#define HRS25                         0x02000000      // Hardware Request Status Channel 25
#define HRS24                         0x01000000      // Hardware Request Status Channel 24
#define HRS23                         0x00800000      // Hardware Request Status Channel 23
#define HRS22                         0x00400000      // Hardware Request Status Channel 22
#define HRS21                         0x00200000      // Hardware Request Status Channel 21
#define HRS20                         0x00100000      // Hardware Request Status Channel 20
#define HRS19                         0x00080000      // Hardware Request Status Channel 19
#define HRS18                         0x00040000      // Hardware Request Status Channel 18
#define HRS17                         0x00020000      // Hardware Request Status Channel 17
#define HRS16                         0x00010000      // Hardware Request Status Channel 16
#define HRS15                         0x00008000      // Hardware Request Status Channel 15
#define HRS14                         0x00004000      // Hardware Request Status Channel 14
#define HRS13                         0x00002000      // Hardware Request Status Channel 13
#define HRS12                         0x00001000      // Hardware Request Status Channel 12
#define HRS11                         0x00000800      // Hardware Request Status Channel 11
#define HRS10                         0x00000400      // Hardware Request Status Channel 10
#define HRS9                          0x00000200      // Hardware Request Status Channel 9
#define HRS8                          0x00000100      // Hardware Request Status Channel 8
#define HRS7                          0x00000080      // Hardware Request Status Channel 7
#define HRS6                          0x00000040      // Hardware Request Status Channel 6
#define HRS5                          0x00000020      // Hardware Request Status Channel 5
#define HRS4                          0x00000010      // Hardware Request Status Channel 4
#define HRS3                          0x00000008      // Hardware Request Status Channel 3
#define HRS2                          0x00000004      // Hardware Request Status Channel 2
#define HRS1                          0x00000002      // Hardware Request Status Channel 1
#define HRS0                          0x00000001      // Hardware Request Status Channel 0


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_EARS register.
//
//*****************************************************************************

#define EDREQn                        0x7FFFFFFF80000000      // Enable asynchronous DMA request in stop mode for channel n
#define EDREQ_31                      0x80000000      // Enable asynchronous DMA request in stop mode for channel 31
#define EDREQ_30                      0x40000000      // Enable asynchronous DMA request in stop mode for channel 30
#define EDREQ_29                      0x20000000      // Enable asynchronous DMA request in stop mode for channel 29
#define EDREQ_28                      0x10000000      // Enable asynchronous DMA request in stop mode for channel 28
#define EDREQ_27                      0x08000000      // Enable asynchronous DMA request in stop mode for channel 27
#define EDREQ_26                      0x04000000      // Enable asynchronous DMA request in stop mode for channel 26
#define EDREQ_25                      0x02000000      // Enable asynchronous DMA request in stop mode for channel 25
#define EDREQ_24                      0x01000000      // Enable asynchronous DMA request in stop mode for channel 24
#define EDREQ_23                      0x00800000      // Enable asynchronous DMA request in stop mode for channel 23
#define EDREQ_22                      0x00400000      // Enable asynchronous DMA request in stop mode for channel 22
#define EDREQ_21                      0x00200000      // Enable asynchronous DMA request in stop mode for channel 21
#define EDREQ_20                      0x00100000      // Enable asynchronous DMA request in stop mode for channel 20
#define EDREQ_19                      0x00080000      // Enable asynchronous DMA request in stop mode for channel 19
#define EDREQ_18                      0x00040000      // Enable asynchronous DMA request in stop mode for channel 18
#define EDREQ_17                      0x00020000      // Enable asynchronous DMA request in stop mode for channel 17
#define EDREQ_16                      0x00010000      // Enable asynchronous DMA request in stop mode for channel 16
#define EDREQ_15                      0x00008000      // Enable asynchronous DMA request in stop mode for channel 15
#define EDREQ_14                      0x00004000      // Enable asynchronous DMA request in stop mode for channel 14
#define EDREQ_13                      0x00002000      // Enable asynchronous DMA request in stop mode for channel 13
#define EDREQ_12                      0x00001000      // Enable asynchronous DMA request in stop mode for channel 12
#define EDREQ_11                      0x00000800      // Enable asynchronous DMA request in stop mode for channel 11
#define EDREQ_10                      0x00000400      // Enable asynchronous DMA request in stop mode for channel 10
#define EDREQ_9                       0x00000200      // Enable asynchronous DMA request in stop mode for channel 9
#define EDREQ_8                       0x00000100      // Enable asynchronous DMA request in stop mode for channel 8
#define EDREQ_7                       0x00000080      // Enable asynchronous DMA request in stop mode for channel 7
#define EDREQ_6                       0x00000040      // Enable asynchronous DMA request in stop mode for channel 6
#define EDREQ_5                       0x00000020      // Enable asynchronous DMA request in stop mode for channel 5
#define EDREQ_4                       0x00000010      // Enable asynchronous DMA request in stop mode for channel 4
#define EDREQ_3                       0x00000008      // Enable asynchronous DMA request in stop mode for channel 3
#define EDREQ_2                       0x00000004      // Enable asynchronous DMA request in stop mode for channel 2
#define EDREQ_1                       0x00000002      // Enable asynchronous DMA request in stop mode for channel 1
#define EDREQ_0                       0x00000001      // Enable asynchronous DMA request in stop mode for channel 0


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_DCHPRIn register.
//
//*****************************************************************************

#define ECP                           0x00000080      // Enable Channel Preemption
#define DPA                           0x00000040      // Disable Preempt Ability
#define GRPPRI                        0x00000060      // Channel n Current Group Priority
#define CHPRI                         0x00000078      // Channel n Arbitration Priority


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

#define SMLOE                         0x80000000      // Source Minor Loop Offset Enable
#define DMLOE                         0x40000000      // Destination Minor Loop Offset enable
#define NBYTES                        0x1FFFFE0000000      // Minor Byte Transfer Count
#define NBYTES                        0x1FFFFF80000000      // Minor Byte Transfer Count
#define MLOFF                         0x0007FE00      // Minor loop offset


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_NBYTES_MLOFFYES register.
//
//*****************************************************************************

#define SMLOE                         0x80000000      // Source Minor Loop Offset Enable
#define DMLOE                         0x40000000      // Destination Minor Loop Offset enable
#define MLOFF                         0x1FFFFE0000000      // If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes 
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
#define Reserved                      0x00004000      // -
#define LINKCH                        0x0003E000      // Minor Loop Link Channel Number
#define CITER                         0x0001FF00      // Current Major Iteration Count
#define LINKCH                        0x000FC000      // Minor Loop Link Channel Number


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_CITER_ELINKNO register.
//
//*****************************************************************************

#define ELINK                         0x00008000      // Enable channel-to-channel linking on minor-loop complete
#define CITER                         0x1FFFC000      // Current Major Iteration Count


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
#define Reserved                      0x00002000      // -
#define MAJORLINKCH                   0x0001F000      // Major Loop Link Channel Number
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
#define Reserved                      0x00004000      // -
#define LINKCH                        0x0003E000      // Link Channel Number
#define BITER                         0x0001FF00      // Starting major iteration count
#define LINKCH                        0x000FC000      // Link Channel Number


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
// The following are defines for the bit fields in the EWM_SERV register.
//
//*****************************************************************************

#define SERVICE                       0x00007F80      // The EWM refresh mechanism requires the CPU to write two values to the SERV register: a first data byte of 0xB4, followed by a second data byte of 0x2C. The EWM refresh is invalid if either of the following conditions is true. • The first or second data byte is not written correctly. • The second data byte is not written within a fixed number of peripheral bus cycles of the first data byte. This fixed number of cycles is called EWM_refresh_time.


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
// The following are defines for the bit fields in the EWM_CTRL register.
//
//*****************************************************************************

#define INTEN                         0x00000008      // This bit when set and EWM_out is asserted, an interrupt request is generated. To de-assert interrupt request, user should clear this bit by writing 0.
#define INEN                          0x00000004      // This bit when set, enables the EWM_in port.
#define ASSIN                         0x00000002      // Default assert state of the EWM_in signal is logic zero. Setting the ASSIN bit inverts the assert state of EWM_in signal to a logic one.
#define EWMEN                         0x00000001      // This bit when set, enables the EWM module. This resets the EWM counter to zero and deasserts the EWM_out signal. This bit when unset, keeps the EWM module disabled. It cannot be re-enabled until a next reset, due to the write-once nature of this bit.


//*****************************************************************************
//
// The following are defines for the bit fields in the EWM_CLKCTRL register.
//
//*****************************************************************************

#define CLKSEL                        0x00000006      // EWM has 4 possible low power clock sources for running EWM counter.     One  of  the  clock source can  be selected by writing into this field. •    00 - lpo_clk[0] will be selected for running EWM counter. •    01 - lpo_clk[1] will be selected for running EWM counter. •    10 - lpo_clk[2] will be selected for running EWM counter. •    11 - lpo_clk[3] will be selected for running EWM counter.


//*****************************************************************************
//
// The following are defines for the bit fields in the EWM_CLKPRESCALER register.
//
//*****************************************************************************

#define CLK_DIV                       0x00007F80      // Selected low power clock source for running the EWM counter can be prescaled as below. •  Prescaled clock frequency = low power clock source frequency / ( 1 + CLK_DIV )


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

#define PRESCVAL                      0x007F8000      // Defines the prescaler value for the watchdog clock.


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

#define PLLCLKEN                      0x00000040      // PLL Clock Enable
#define PLLSTEN                       0x00000020      // PLL Stop Enable
#define Reserved                      0x00000030      // This field is reserved
#define PRDIV                         0x0000001C      // PLL External Reference Divider


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_C6 register.
//
//*****************************************************************************

#define LOLIE0                        0x00000080      // Loss of Lock Interrupt Enable
#define PLLS                          0x00000040      // PLL Select
#define CME0                          0x00000020      // Clock Monitor Enable
#define VDIV                          0x000001F0      // VCO Divider


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




//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_ATCVL register.
//
//*****************************************************************************




//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_C7 register.
//
//*****************************************************************************

#define OSCSEL                        0x00000001      // MCG OSC Clock Select


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_C8 register.
//
//*****************************************************************************

#define LOCRE1                        0x00000080      // Loss of Clock Reset Enable
#define LOLRE                         0x00000040      // PLL Loss of Lock Reset Enable
#define CME1                          0x00000020      // Clock Monitor Enable1
#define LOCS1                         0x00000001      // RTC Loss of Clock Status


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_C9 register.
//
//*****************************************************************************

#define PLL_CME                       0x00000020      // MCG External PLL Clock Monitor Enable
#define PLL_LOCRE                     0x00000010      // MCG External PLL Loss of Clock Reset Enable
#define EXT_PLL_LOCS                  0x00000001      // External PLL Loss of Clock Status


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_C11 register.
//
//*****************************************************************************

#define PLLCS                         0x00000010      // PLL Clock Select


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_S2 register.
//
//*****************************************************************************

#define PLLCST                        0x00000010      // PLL Clock Select Status


//*****************************************************************************
//
// The following are defines for the bit fields in the OSC_CR register.
//
//*****************************************************************************

#define ERCLKEN                       0x00000080      // Enable External Reference Clock
#define EREFSTEN                      0x00000020      // Enable External Reference Clock for Startup
#define SC2P                          0x00000008      // Select Clock 2 Prescaler
#define SC4P                          0x00000004      // Select Clock 4 Prescaler
#define SC8P                          0x00000002      // Select Clock 8 Prescaler
#define SC16P                         0x00000001      // Select Clock 16 Prescaler


//*****************************************************************************
//
// The following are defines for the bit fields in the LMEM_PCCCR register.
//
//*****************************************************************************

#define GO                            0x80000000      // Initiate Cache Command
#define PUSHW1                        0x08000000      // Push Way 1
#define INVW1                         0x04000000      // Invalidate Way 1
#define PUSHW0                        0x02000000      // Push Way 0
#define INVW0                         0x01000000      // Invalidate Way 0
#define PCCR3                         0x00000008      // Forces no allocation on cache misses (must also have PCCR2 asserted)
#define PCCR2                         0x00000004      // Forces all cacheable spaces to write through
#define ENWRBUF                       0x00000002      // Enable Write Buffer
#define ENCACHE                       0x00000001      // Cache enable


//*****************************************************************************
//
// The following are defines for the bit fields in the LMEM_PCCLCR register.
//
//*****************************************************************************

#define LACC                          0x08000000      // Line access type
#define LADSEL                        0x04000000      // Line Address Select
#define LCMD                          0x06000000      // Line Command
#define LCWAY                         0x00400000      // Line Command Way
#define LCIMB                         0x00200000      // Line Command Initial Modified Bit
#define LCIVB                         0x00100000      // Line Command Initial Valid Bit
#define TDSEL                         0x00010000      // Tag/Data Select
#define WSEL                          0x00004000      // Way select
#define LGO                           0x00000001      // Initiate Cache Line Command


//*****************************************************************************
//
// The following are defines for the bit fields in the LMEM_PCCSAR register.
//
//*****************************************************************************

#define PHYADDR                       0x1FFFFFFF80000000      // Physical Address
#define LGO                           0x00000001      // Initiate Cache Line Command


//*****************************************************************************
//
// The following are defines for the bit fields in the LMEM_PCCCVR register.
//
//*****************************************************************************

#define DATA                          0x7FFFFFFF80000000      // Cache read/write Data


//*****************************************************************************
//
// The following are defines for the bit fields in the LMEM_PCCRMR register.
//
//*****************************************************************************

#define R0                            0x180000000      // Region 0 mode
#define R1                            0x60000000      // Region 1 mode
#define R2                            0x18000000      // Region 2 mode
#define R3                            0x06000000      // Region 3 mode
#define R4                            0x01800000      // Region 4 mode
#define R5                            0x00600000      // Region 5 mode
#define R6                            0x00180000      // Region 6 mode
#define R7                            0x00060000      // Region 7 mode
#define R8                            0x00018000      // Region 8 mode
#define R9                            0x00006000      // Region 9 mode
#define R10                           0x00001800      // Region 10 mode
#define R11                           0x00000600      // Region 11 mode
#define R12                           0x00000180      // Region 12 mode
#define R13                           0x00000060      // Region 13 mode
#define R14                           0x00000018      // Region 14 mode
#define R15                           0x00000006      // Region 15 mode


//*****************************************************************************
//
// The following are defines for the bit fields in the LMEM_PSCCR register.
//
//*****************************************************************************

#define GO                            0x80000000      // Initiate Cache Command
#define PUSHW1                        0x08000000      // Push Way 1
#define INVW1                         0x04000000      // Invalidate Way 1
#define PUSHW0                        0x02000000      // Push Way 0
#define INVW0                         0x01000000      // Invalidate Way 0
#define ENWRBUF                       0x00000002      // Enable Write Buffer
#define ENCACHE                       0x00000001      // Cache enable


//*****************************************************************************
//
// The following are defines for the bit fields in the LMEM_PSCLCR register.
//
//*****************************************************************************

#define LACC                          0x08000000      // Line access type
#define LADSEL                        0x04000000      // Line Address Select
#define LCMD                          0x06000000      // Line Command
#define LCWAY                         0x00400000      // Line Command Way
#define LCIMB                         0x00200000      // Line Command Initial Modified Bit
#define LCIVB                         0x00100000      // Line Command Initial Valid Bit
#define TDSEL                         0x00010000      // Tag/Data Select
#define WSEL                          0x00004000      // Way select
#define LGO                           0x00000001      // Initiate Cache Line Command


//*****************************************************************************
//
// The following are defines for the bit fields in the LMEM_PSCSAR register.
//
//*****************************************************************************

#define PHYADDR                       0x1FFFFFFF80000000      // Physical Address
#define LGO                           0x00000001      // Initiate Cache Line Command


//*****************************************************************************
//
// The following are defines for the bit fields in the LMEM_PSCCVR register.
//
//*****************************************************************************

#define DATA                          0x7FFFFFFF80000000      // Cache read/write Data


//*****************************************************************************
//
// The following are defines for the bit fields in the LMEM_PSCRMR register.
//
//*****************************************************************************

#define R0                            0x180000000      // Region 0 mode
#define R1                            0x60000000      // Region 1 mode
#define R2                            0x18000000      // Region 2 mode
#define R3                            0x06000000      // Region 3 mode
#define R4                            0x01800000      // Region 4 mode
#define R5                            0x00600000      // Region 5 mode
#define R6                            0x00180000      // Region 6 mode
#define R7                            0x00060000      // Region 7 mode
#define R8                            0x00018000      // Region 8 mode
#define R9                            0x00006000      // Region 9 mode
#define R10                           0x00001800      // Region 10 mode
#define R11                           0x00000600      // Region 11 mode
#define R12                           0x00000180      // Region 12 mode
#define R13                           0x00000060      // Region 13 mode
#define R14                           0x00000018      // Region 14 mode
#define R15                           0x00000006      // Region 15 mode


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
#define M7AP[1:0]                     0x00000180      // Master 7 Access Protection
#define M6AP[1:0]                     0x00000060      // Master 6 Access Protection
#define M5AP[1:0]                     0x00000018      // Master 5 Access Protection
#define M4AP[1:0]                     0x00000006      // Master 4 Access Protection


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_PFB01CR register.
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


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_PFB23CR register.
//
//*****************************************************************************

#define B1RWSC[3:0]                   0x780000000      // Bank 1 Read Wait State Control
#define                               0xFF8000000      // 
#define B1MW[1:0]                     0x000C0000      // Bank 1 Memory Width
#define                               0x00010000      // 
#define                               0x007F8000      // 
#define                               0x00000380      // 
#define B1DCE                         0x00000010      // Bank 1 Data Cache Enable
#define B1ICE                         0x00000008      // Bank 1 Instruction Cache Enable
#define B1DPE                         0x00000004      // Bank 1 Data Prefetch Enable
#define B1IPE                         0x00000002      // Bank 1 Instruction Prefetch Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_TAGVDW0Sn register.
//
//*****************************************************************************

#define tag[21:6]                     0x1FFFE00000      // 16-bit tag for cache entry
#define                               0x000003E0      // 
#define valid                         0x00000001      // 1-bit valid for cache entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_TAGVDW1Sn register.
//
//*****************************************************************************

#define tag[21:6]                     0x1FFFE00000      // 16-bit tag for cache entry
#define                               0x000003E0      // 
#define valid                         0x00000001      // 1-bit valid for cache entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_TAGVDW2Sn register.
//
//*****************************************************************************

#define tag[21:6]                     0x1FFFE00000      // 16-bit tag for cache entry
#define                               0x000003E0      // 
#define valid                         0x00000001      // 1-bit valid for cache entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_TAGVDW3Sn register.
//
//*****************************************************************************

#define tag[21:6]                     0x1FFFE00000      // 16-bit tag for cache entry
#define                               0x000003E0      // 
#define valid                         0x00000001      // 1-bit valid for cache entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW0SnUM register.
//
//*****************************************************************************

#define data[127:96]                  0x7FFFFFFF80000000      // Bits [127:96] of data entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW0SnMU register.
//
//*****************************************************************************

#define data[95:64]                   0x7FFFFFFF80000000      // Bits [95:64] of data entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW0SnML register.
//
//*****************************************************************************

#define data[63:32]                   0x7FFFFFFF80000000      // Bits [63:32] of data entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW0SnLM register.
//
//*****************************************************************************

#define data[31:0]                    0x7FFFFFFF80000000      // Bits [31:0] of data entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW1SnUM register.
//
//*****************************************************************************

#define data[127:96]                  0x7FFFFFFF80000000      // Bits [127:96] of data entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW1SnMU register.
//
//*****************************************************************************

#define data[95:64]                   0x7FFFFFFF80000000      // Bits [95:64] of data entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW1SnML register.
//
//*****************************************************************************

#define data[63:32]                   0x7FFFFFFF80000000      // Bits [63:32] of data entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW1SnLM register.
//
//*****************************************************************************

#define data[31:0]                    0x7FFFFFFF80000000      // Bits [31:0] of data entry
#define data[31:0]                    0x80000000      // Bits [31:0] of data entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW2SnUM register.
//
//*****************************************************************************

#define data[127:96]                  0x7FFFFFFF80000000      // Bits [127:96] of data entry
#define data[127:96]                  0x80000000000000000000000000000000      // Bits [127:96] of data entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW2SnMU register.
//
//*****************************************************************************

#define data[95:64]                   0x7FFFFFFF80000000      // Bits [95:64] of data entry
#define data[95:64]                   0x800000000000000000000000      // Bits [95:64] of data entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW2SnML register.
//
//*****************************************************************************

#define data[63:32]                   0x7FFFFFFF80000000      // Bits [63:32] of data entry
#define data[63:32]                   0x8000000000000000      // Bits [63:32] of data entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW2SnLM register.
//
//*****************************************************************************

#define data[31:0]                    0x7FFFFFFF80000000      // Bits [31:0] of data entry
#define data[31:0]                    0x80000000      // Bits [31:0] of data entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW3SnUM register.
//
//*****************************************************************************

#define data[127:96]                  0x7FFFFFFF80000000      // Bits [127:96] of data entry
#define data[127:96]                  0x80000000000000000000000000000000      // Bits [127:96] of data entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW3SnMU register.
//
//*****************************************************************************

#define data[95:64]                   0x7FFFFFFF80000000      // Bits [95:64] of data entry
#define data[95:64]                   0x800000000000000000000000      // Bits [95:64] of data entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW3SnML register.
//
//*****************************************************************************

#define data[63:32]                   0x7FFFFFFF80000000      // Bits [63:32] of data entry
#define data[63:32]                   0x8000000000000000      // Bits [63:32] of data entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW3SnLM register.
//
//*****************************************************************************

#define data[31:0]                    0x7FFFFFFF80000000      // Bits [31:0] of data entry ::
#define data[31:0]                    0x80000000      // Bits [31:0] of data entry


//*****************************************************************************
//
// The following are defines for the bit fields in the SDRAM_CTRL register.
//
//*****************************************************************************

#define IS                            0x00000800      // Initiate self-refresh command.
#define RTIM                          0x00000C00      // Refresh timing
#define RC                            0x0001FF00      // Refresh count


//*****************************************************************************
//
// The following are defines for the bit fields in the SDRAM_ACn register.
//
//*****************************************************************************

#define RE                            0x00008000      // Refresh enable
#define CASL                          0x00006000      // CAS Latency
#define CBM                           0x00001C00      // Command bit location
#define IMRS                          0x00000040      // Initiate mode register set (mrs) command.
#define PS                            0x00000060      // Port size.
#define IP                            0x00000008      // Initiate precharge all (pall) command.


//*****************************************************************************
//
// The following are defines for the bit fields in the SDRAM_CMn register.
//
//*****************************************************************************

#define BAM                           0x1FFF80000000      // Base address mask.
#define WP                            0x00000100      // Write protect.
#define V                             0x00000001      // Valid.


//*****************************************************************************
//
// The following are defines for the bit fields in the FB_CSARn register.
//
//*****************************************************************************

#define BA                            0x7FFF80000000      // Base Address


//*****************************************************************************
//
// The following are defines for the bit fields in the FB_CSMRn register.
//
//*****************************************************************************

#define BAM                           0x7FFF80000000      // Base Address Mask
#define WP                            0x00000100      // Write Protect
#define V                             0x00000001      // Valid


//*****************************************************************************
//
// The following are defines for the bit fields in the FB_CSCRn register.
//
//*****************************************************************************

#define SWS                           0x1F80000000      // Secondary Wait States
#define SWSEN                         0x00800000      // Secondary Wait State Enable
#define EXTS                          0x00400000      // Extended Transfer Start/Extended Address Latch Enable
#define ASET                          0x00600000      // Address Setup
#define RDAH                          0x00180000      // Read Address Hold or Deselect
#define WRAH                          0x00060000      // Write Address Hold or Deselect
#define WS                            0x001F8000      // Wait States
#define BLS                           0x00000200      // Byte-Lane Shift
#define AA                            0x00000100      // Auto-Acknowledge Enable
#define PS                            0x00000180      // Port Size
#define BEM                           0x00000020      // Byte-Enable Mode
#define BSTR                          0x00000010      // Burst-Read Enable
#define BSTW                          0x00000008      // Burst-Write Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FB_CSPMCR register.
//
//*****************************************************************************

#define GROUP1                        0x780000000      // FlexBus Signal Group 1 Multiplex control
#define GROUP2                        0x78000000      // FlexBus Signal Group 2 Multiplex control


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
// The following are defines for the bit fields in the CAU_CASR register.
//
//*****************************************************************************

#define VER                           0x780000000      // CAU Version
#define DPE                           0x00000002      // DES Parity Error
#define IC                            0x00000001      // Illegal Command


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
#define CLP1                          0x000007E0      // Calibration Value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLP0 register.
//
//*****************************************************************************

#define CLP0                          0x000007E0      // Calibration Value ::
#define CLP0                          0x000007E0      // Calibration Value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLMD register.
//
//*****************************************************************************

#define CLMD                          0x000007E0      // Calibration Value ::
#define CLMD                          0x000007E0      // Calibration Value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLMS register.
//
//*****************************************************************************

#define CLMS                          0x000007E0      // Calibration Value ::
#define CLMS                          0x000007E0      // Calibration Value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLM4 register.
//
//*****************************************************************************

#define CLM4                          0x0007FE00      // Calibration Value ::
#define CLM4                          0x0007FE00      // Calibration Value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLM3 register.
//
//*****************************************************************************

#define CLM3                          0x0001FF00      // Calibration Value ::
#define CLM3                          0x0001FF00      // Calibration Value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLM2 register.
//
//*****************************************************************************

#define CLM2                          0x00007F80      // Calibration Value ::
#define CLM2                          0x00007F80      // Calibration Value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLM1 register.
//
//*****************************************************************************

#define CLM1                          0x00001FC0      // Calibration Value ::
#define CLM1                          0x00001FC0      // Calibration Value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLM0 register.
//
//*****************************************************************************

#define CLM0                          0x000007E0      // Calibration Value ::
#define CLM0                          0x000007E0      // Calibration Value


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

#define -                             0x00000080      // Reserved
#define DMAEN                         0x00000040      // DMA Enable Control
#define -                             0x00000020      // Reserved
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

#define -                             0x00000080      // Reserved
#define PSEL                          0x000000E0      // Plus Input Mux Control
#define MSEL                          0x0000001C      // Minus Input Mux Control


//*****************************************************************************
//
// The following are defines for the bit fields in the VREF_SC register.
//
//*****************************************************************************

#define VREFEN                        0x00000080      // Internal Voltage Reference enable
#define REGEN                         0x00000040      // Regulator enable


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
#define DACTRGSEL                     0x00000020      // The DAC hardware trigger or the DAC software trigger is selected.
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

#define DMAEN                         0x00000080      // DMA is enabled or disabled.
#define DACBFWM                       0x00000030      // In normal mode it controls when SR[DACBFWMF] is set. When the DAC buffer read pointer reaches the word defined by this field, which is 1–4 words away from the upper limit (DACBUP), SR[DACBFWMF] will be set. In FIFO mode, it is FIFO watermark select field.
#define DACBFMD                       0x0000000C      // The DAC buffer work mode is selected.
#define DACBFEN                       0x00000001      // The DAC buffer read pointer is enabled or disabled.


//*****************************************************************************
//
// The following are defines for the bit fields in the DACx_C2 register.
//
//*****************************************************************************

#define DACBFRP                       0x00000780      // In normal mode it keeps the current value of the buffer read pointer. In FIFO mode, it is the FIFO read pointer. It is writable in FIFO mode. User can configure it to same address to reset FIFO as empty.
#define DACBFUP                       0x00000078      // In normal mode it selects the upper limit of the DAC buffer. The buffer read pointer cannot exceed it. In FIFO mode it is the FIFO write pointer. User cannot set Buffer Up limit in FIFO mode. In Normal mode its reset value is MAX. When IP is configured to FIFO mode, this register becomes Write_Pointer, and its value is initially set to equal READ_POINTER automatically, and the FIFO status is empty. It is writable and user can configure it to the same address to reset FIFO as empty.


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_SC register.
//
//*****************************************************************************

#define TOF                           0x00000080      // Timer Overflow Flag
#define TOIE                          0x00000040      // Timer Overflow Interrupt Enable
#define CPWMS                         0x00000020      // Center-Aligned PWM Select
#define CLKS                          0x00000030      // Clock Source Selection
#define PS                            0x0000001C      // Prescale Factor Selection


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_CNT register.
//
//*****************************************************************************

#define COUNT                         0x7FFF8000      // Counter Value


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_MOD register.
//
//*****************************************************************************

#define MOD                           0x7FFF8000      // Modulo Value


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_CnSC register.
//
//*****************************************************************************

#define CHF                           0x00000080      // Channel Flag
#define CHIE                          0x00000040      // Channel Interrupt Enable
#define MSB                           0x00000020      // Channel Mode Select
#define MSA                           0x00000010      // Channel Mode Select
#define ELSB                          0x00000008      // Edge or Level Select
#define ELSA                          0x00000004      // Edge or Level Select
#define ICRST                         0x00000002      // FTM counter reset by the selected input capture event
#define DMA                           0x00000001      // DMA Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_CnV register.
//
//*****************************************************************************

#define VAL                           0x7FFF8000      // Channel Value


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_CNTIN register.
//
//*****************************************************************************

#define INIT                          0x7FFF8000      // Initial Value Of The FTM Counter


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_STATUS register.
//
//*****************************************************************************

#define CH7F-CH0F                     0x00007F80      // Channel Flag


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_MODE register.
//
//*****************************************************************************

#define FAULTIE                       0x00000080      // Fault Interrupt Enable
#define FAULTM                        0x000000C0      // Fault Control Mode
#define CAPTEST                       0x00000010      // Capture Test Mode Enable
#define PWMSYNC                       0x00000008      // PWM Synchronization Mode
#define WPDIS                         0x00000004      // Write Protection Disable
#define INIT                          0x00000002      // Initialize The Channels Output
#define FTMEN                         0x00000001      // FTM Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_SYNC register.
//
//*****************************************************************************

#define SWSYNC                        0x00000080      // PWM Synchronization Software Trigger
#define TRIG2-TRIG0                   0x000001C0      // PWM Synchronization Hardware Trigger
#define SYNCHOM                       0x00000008      // Output Mask Synchronization
#define REINIT                        0x00000004      // FTM Counter Reinitialization By Synchronization
#define CNTMAX                        0x00000002      // Maximum Loading Point Enable
#define CNTMIN                        0x00000001      // Minimum Loading Point Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_OUTINIT register.
//
//*****************************************************************************

#define CH7OI-CH0OI                   0x00007F80      // Channel Output Initialization Value


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_OUTMASK register.
//
//*****************************************************************************

#define CH7OM-CH0OM                   0x00007F80      // Channel Output Mask


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_COMBINE register.
//
//*****************************************************************************

#define FAULTEN3                      0x40000000      // Fault Control Enable For n = 6
#define SYNCEN3                       0x20000000      // Synchronization Enable For n = 6
#define DTEN3                         0x10000000      // Deadtime Enable For n = 6
#define DECAP3                        0x08000000      // Dual Edge Capture Mode Captures For n = 6
#define DECAPEN3                      0x04000000      // Dual Edge Capture Mode Enable For n = 6
#define COMP3                         0x02000000      // Complement Of Channel (n) for n = 6
#define COMBINE3                      0x01000000      // Combine Channels For n = 6
#define FAULTEN2                      0x00400000      // Fault Control Enable For n = 4
#define SYNCEN2                       0x00200000      // Synchronization Enable For n = 4
#define DTEN2                         0x00100000      // Deadtime Enable For n = 4
#define DECAP2                        0x00080000      // Dual Edge Capture Mode Captures For n = 4
#define DECAPEN2                      0x00040000      // Dual Edge Capture Mode Enable For n = 4
#define COMP2                         0x00020000      // Complement Of Channel (n) for n = 4
#define COMBINE2                      0x00010000      // Combine Channels For n = 4
#define FAULTEN1                      0x00004000      // Fault Control Enable For n = 2
#define SYNCEN1                       0x00002000      // Synchronization Enable For n = 2
#define DTEN1                         0x00001000      // Deadtime Enable For n = 2
#define DECAP1                        0x00000800      // Dual Edge Capture Mode Captures For n = 2
#define DECAPEN1                      0x00000400      // Dual Edge Capture Mode Enable For n = 2
#define COMP1                         0x00000200      // Complement Of Channel (n) for n = 2
#define COMBINE1                      0x00000100      // Combine Channels For n = 2
#define FAULTEN0                      0x00000040      // Fault Control Enable For n = 0
#define SYNCEN0                       0x00000020      // Synchronization Enable For n = 0
#define DTEN0                         0x00000010      // Deadtime Enable For n = 0
#define DECAP0                        0x00000008      // Dual Edge Capture Mode Captures For n = 0
#define DECAPEN0                      0x00000004      // Dual Edge Capture Mode Enable For n = 0
#define COMP0                         0x00000002      // Complement Of Channel (n) for n = 0
#define COMBINE0                      0x00000001      // Combine Channels For n = 0


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_DEADTIME register.
//
//*****************************************************************************

#define DTPS                          0x00000180      // Deadtime Prescaler Value
#define DTVAL                         0x000007E0      // Deadtime Value


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_EXTTRIG register.
//
//*****************************************************************************

#define TRIGF                         0x00000080      // Channel Trigger Flag
#define INITTRIGEN                    0x00000040      // Initialization Trigger Enable
#define CH1TRIG-CH2TRIG               0x000007E0      // Channel Trigger Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_POL register.
//
//*****************************************************************************

#define POL7-POL0                     0x00007F80      // Channel Polarity
#define POL7                          0x00000080      // Channel 7 Polarity
#define POL6                          0x00000040      // Channel 6 Polarity
#define POL5                          0x00000020      // Channel 5 Polarity
#define POL4                          0x00000010      // Channel 4 Polarity
#define POL3                          0x00000008      // Channel 3 Polarity
#define POL2                          0x00000004      // Channel 2 Polarity
#define POL1                          0x00000002      // Channel 1 Polarity
#define POL0                          0x00000001      // Channel 0 Polarity


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_FMS register.
//
//*****************************************************************************

#define FAULTF                        0x00000080      // Fault Detection Flag
#define WPEN                          0x00000040      // Write Protection Enable
#define FAULTIN                       0x00000020      // Fault Inputs
#define FAULTF3-FAULTF0               0x000001F0      // Fault Detection Flag
#define FAULTF3                       0x00000008      // Fault Detection Flag 3
#define FAULTF2                       0x00000004      // Fault Detection Flag 2
#define FAULTF1                       0x00000002      // Fault Detection Flag 1
#define FAULTF0                       0x00000001      // Fault Detection Flag 0


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_FILTER register.
//
//*****************************************************************************

#define CH3FVAL                       0x00078000      // Channel 3 Input Filter
#define CH2FVAL                       0x00007800      // Channel 2 Input Filter
#define CH1FVAL                       0x00000780      // Channel 1 Input Filter
#define CH0FVAL                       0x00000078      // Channel 0 Input Filter


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_FLTCTRL register.
//
//*****************************************************************************

#define FFVAL                         0x00007800      // Fault Input Filter
#define FFLTR3EN                      0x00000080      // Fault Input 3 Filter Enable
#define FFLTR2EN                      0x00000040      // Fault Input 2 Filter Enable
#define FFLTR1EN                      0x00000020      // Fault Input 1 Filter Enable
#define FFLTR0EN                      0x00000010      // Fault Input 0 Filter Enable
#define FAULT3EN                      0x00000008      // Fault Input 3 Enable
#define FAULT2EN                      0x00000004      // Fault Input 2 Enable
#define FAULT1EN                      0x00000002      // Fault Input 1 Enable
#define FAULT0EN                      0x00000001      // Fault Input 0 Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_QDCTRL register.
//
//*****************************************************************************

#define PHAFLTREN                     0x00000080      // Phase A Input Filter Enable
#define PHBFLTREN                     0x00000040      // Phase B Input Filter Enable
#define PHAPOL                        0x00000020      // Phase A Input Polarity
#define PHBPOL                        0x00000010      // Phase B Input Polarity
#define QUADMODE                      0x00000008      // Quadrature Decoder Mode
#define QUADIR                        0x00000004      // FTM Counter Direction In Quadrature Decoder Mode
#define TOFDIR                        0x00000002      // Timer Overflow Direction In Quadrature Decoder Mode
#define QUADEN                        0x00000001      // Quadrature Decoder Mode Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_CONF register.
//
//*****************************************************************************

#define GTBEOUT                       0x00000400      // Global Time Base Output
#define GTBEEN                        0x00000200      // Global Time Base Enable
#define BDMMODE                       0x00000180      // BDM Mode
#define NUMTOF                        0x000007E0      // TOF Frequency


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_FLTPOL register.
//
//*****************************************************************************

#define FLT3POL-FLT0POL               0x00000078      // Fault Input Polarity
#define FLT3POL                       0x00000008      // Fault Input 3 Polarity
#define FLT2POL                       0x00000004      // Fault Input 2 Polarity
#define FLT1POL                       0x00000002      // Fault Input 1 Polarity
#define FLT0POL                       0x00000001      // Fault Input 0 Polarity


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_SYNCONF register.
//
//*****************************************************************************

#define HWSOC                         0x00100000      // Software output control synchronization is activated by a hardware trigger
#define HWINVC                        0x00080000      // Inverting control synchronization is activated by a hardware trigger
#define HWOM                          0x00040000      // Output mask synchronization is activated by a hardware trigger
#define HWWRBUF                       0x00020000      // MOD, CNTIN, and CV registers synchronization is activated by a hardware trigger
#define HWRSTCNT                      0x00010000      // FTM counter synchronization is activated by a hardware trigger
#define SWSOC                         0x00001000      // Software output control synchronization is activated by the software trigger
#define SWINVC                        0x00000800      // Inverting control synchronization is activated by the software trigger
#define SWOM                          0x00000400      // Output mask synchronization is activated by the software trigger
#define SWWRBUF                       0x00000200      // MOD, CNTIN, and CV registers synchronization is activated by the software trigger
#define SWRSTCNT                      0x00000100      // FTM counter synchronization is activated by the software trigger
#define SYNCMODE                      0x00000080      // Synchronization Mode
#define SWOC                          0x00000040      // SWOCTRL Register Synchronization
#define INVC                          0x00000020      // INVCTRL Register Synchronization
#define CNTINC                        0x00000008      // CNTIN Register Synchronization
#define HWTRIGMOD                     0x00000001      // Hardware Trigger Mode
#define CNTINC                        0x00000004      // CNTIN Register Synchronization


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_INVCTRL register.
//
//*****************************************************************************

#define INV3EN-INV0EN                 0x00000078      // Pair Channels Inverting Enable
#define INV3EN                        0x00000008      // Pair Channels 3 Inverting Enable
#define INV2EN                        0x00000004      // Pair Channels 2 Inverting Enable
#define INV1EN                        0x00000002      // Pair Channels 1 Inverting Enable
#define INV0EN                        0x00000001      // Pair Channels 0 Inverting Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_SWOCTRL register.
//
//*****************************************************************************

#define CH7OCV-CH0OCV                 0x007F8000      // Channel Software Output Control Value
#define CH7OC-CH0OC                   0x00007F80      // Channel Software Output Control Enable
#define CH7OCV                        0x00008000      // Channel 7 Software Output Control Value
#define CH6OCV                        0x00004000      // Channel 6 Software Output Control Value
#define CH5OCV                        0x00002000      // Channel 5 Software Output Control Value
#define CH4OCV                        0x00001000      // Channel 4 Software Output Control Value
#define CH3OCV                        0x00000800      // Channel 3 Software Output Control Value
#define CH2OCV                        0x00000400      // Channel 2 Software Output Control Value
#define CH1OCV                        0x00000200      // Channel 1 Software Output Control Value
#define CH0OCV                        0x00000100      // Channel 0 Software Output Control Value
#define CH7OC                         0x00000080      // Channel 7 Software Output Control Enable
#define CH6OC                         0x00000040      // Channel 6 Software Output Control Enable
#define CH5OC                         0x00000020      // Channel 5 Software Output Control Enable
#define CH4OC                         0x00000010      // Channel 4 Software Output Control Enable
#define CH3OC                         0x00000008      // Channel 3 Software Output Control Enable
#define CH2OC                         0x00000004      // Channel 2 Software Output Control Enable
#define CH1OC                         0x00000002      // Channel 1 Software Output Control Enable
#define CH0OC                         0x00000001      // Channel 0 Software Output Control Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_PWMLOAD register.
//
//*****************************************************************************

#define LDOK                          0x00000200      // Load Enable
#define CH7SEL-CH0SEL                 0x00007F80      // Channel Select
#define CH7SEL                        0x00000080      // Channel 7 Select
#define CH6SEL                        0x00000040      // Channel 6 Select
#define CH5SEL                        0x00000020      // Channel 5 Select
#define CH4SEL                        0x00000010      // Channel 4 Select
#define CH3SEL                        0x00000008      // Channel 3 Select
#define CH2SEL                        0x00000004      // Channel 2 Select
#define CH1SEL                        0x00000002      // Channel 1 Select
#define CH0SEL                        0x00000001      // Channel 0 Select


//*****************************************************************************
//
// The following are defines for the bit fields in the TPMx_SC register.
//
//*****************************************************************************

#define DMA                           0x00000100      // DMA Enable
#define TOF                           0x00000080      // Timer Overflow Flag
#define TOIE                          0x00000040      // Timer Overflow Interrupt Enable
#define CPWMS                         0x00000020      // Center-Aligned PWM Select
#define CMOD                          0x00000030      // Clock Mode Selection
#define PS                            0x0000001C      // Prescale Factor Selection


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
// The following are defines for the bit fields in the TPMx_CnSC register.
//
//*****************************************************************************

#define CHF                           0x00000080      // Channel Flag
#define CHIE                          0x00000040      // Channel Interrupt Enable
#define MSB                           0x00000020      // Channel Mode Select
#define MSA                           0x00000010      // Channel Mode Select
#define ELSB                          0x00000008      // Edge or Level Select
#define ELSA                          0x00000004      // Edge or Level Select
#define DMA                           0x00000001      // DMA Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the TPMx_CnV register.
//
//*****************************************************************************

#define VAL                           0x7FFF8000      // Channel Value


//*****************************************************************************
//
// The following are defines for the bit fields in the TPMx_STATUS register.
//
//*****************************************************************************

#define TOF                           0x00000100      // Timer Overflow Flag
#define CH1F                          0x00000002      // Channel 1 Flag
#define CH0F                          0x00000001      // Channel 0 Flag


//*****************************************************************************
//
// The following are defines for the bit fields in the TPMx_COMBINE register.
//
//*****************************************************************************

#define COMSWAP0                      0x00000002      // Combine Channel 0 and 1 Swap
#define COMBINE0                      0x00000001      // Combine Channels 0 and 1


//*****************************************************************************
//
// The following are defines for the bit fields in the TPMx_POL register.
//
//*****************************************************************************

#define POL1                          0x00000002      // Channel 1 Polarity
#define POL0                          0x00000001      // Channel 0 Polarity


//*****************************************************************************
//
// The following are defines for the bit fields in the TPMx_FILTER register.
//
//*****************************************************************************

#define CH1FVAL                       0x00000780      // Channel 1 Filter Value
#define CH0FVAL                       0x00000078      // Channel 0 Filter Value


//*****************************************************************************
//
// The following are defines for the bit fields in the TPMx_QDCTRL register.
//
//*****************************************************************************

#define QUADMODE                      0x00000008      // Quadrature Decoder Mode
#define QUADIR                        0x00000004      // Counter Direction in Quadrature Decode Mode
#define TOFDIR                        0x00000002      // Indicates if the TOF bit was set on the top or the bottom of counting
#define QUADEN                        0x00000001      // Enables the quadrature decoder mode


//*****************************************************************************
//
// The following are defines for the bit fields in the TPMx_CONF register.
//
//*****************************************************************************

#define TRGSEL                        0x78000000      // Trigger Select
#define TRGSRC                        0x00800000      // Trigger Source
#define TRGPOL                        0x00400000      // Trigger Polarity
#define CROT                          0x00200000      // Counter Reset on Trigger
#define CSOT                          0x00100000      // Counter Start on Trigger
#define CPOT                          0x00080000      // Counter Pause on Trigger
#define CSOO                          0x00040000      // Counter Stop on Overflow
#define GTBEEN                        0x00020000      // Global Time Base Enable
#define GTBSYNC                       0x00010000      // Global Time Base Synchronization
#define DBGMODE                       0x00018000      // Debug Mode
#define DOZEEN                        0x00002000      // Doze Enable ::


//*****************************************************************************
//
// The following are defines for the bit fields in the LPTMRx_PSR register.
//
//*****************************************************************************

#define PRESCALE                      0x000003C0      // Configures the size of the Prescaler in Time Counter mode or width of the glitch filter in Pulse Counter mode
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

#define COUNTER                       0x7FFF8000      // Counter Value


//*****************************************************************************
//
// The following are defines for the bit fields in the CMT_CGH1 register.
//
//*****************************************************************************

#define PH                            0x00007F80      // Primary Carrier High Time Data Value


//*****************************************************************************
//
// The following are defines for the bit fields in the CMT_CGL1 register.
//
//*****************************************************************************

#define PL                            0x00007F80      // Primary Carrier Low Time Data Value


//*****************************************************************************
//
// The following are defines for the bit fields in the CMT_CGH2 register.
//
//*****************************************************************************

#define SH                            0x00007F80      // Secondary Carrier High Time Data Value


//*****************************************************************************
//
// The following are defines for the bit fields in the CMT_CGL2 register.
//
//*****************************************************************************

#define SL                            0x00007F80      // Secondary Carrier Low Time Data Value


//*****************************************************************************
//
// The following are defines for the bit fields in the CMT_OC register.
//
//*****************************************************************************

#define IROL                          0x00000080      // IRO Latch Control
#define CMTPOL                        0x00000040      // CMT Output Polarity
#define IROPEN                        0x00000020      // IRO Pin Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the CMT_MSC register.
//
//*****************************************************************************

#define EOCF                          0x00000080      // End Of Cycle Status Flag
#define CMTDIV                        0x000000C0      // CMT Clock Divide Prescaler
#define EXSPC                         0x00000010      // Extended Space Enable
#define BASE                          0x00000008      // Baseband Enable
#define FSK                           0x00000004      // FSK Mode Select
#define EOCIE                         0x00000002      // End of Cycle Interrupt Enable
#define MCGEN                         0x00000001      // Modulator and Carrier Generator Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the CMT_CMD1 register.
//
//*****************************************************************************

#define MB[7:0]                       0x00007F80      // MB[7:0]


//*****************************************************************************
//
// The following are defines for the bit fields in the CMT_CMD2 register.
//
//*****************************************************************************

#define MB[15:8]                      0x00007F80      // MB[15:8]


//*****************************************************************************
//
// The following are defines for the bit fields in the CMT_CMD3 register.
//
//*****************************************************************************

#define SB[7:0]                       0x00007F80      // SB[7:0]


//*****************************************************************************
//
// The following are defines for the bit fields in the CMT_CMD4 register.
//
//*****************************************************************************

#define SB[15:8]                      0x00007F80      // SB[15:8]


//*****************************************************************************
//
// The following are defines for the bit fields in the CMT_PPS register.
//
//*****************************************************************************

#define PPSDIV                        0x00000078      // Primary Prescaler Divider


//*****************************************************************************
//
// The following are defines for the bit fields in the CMT_DMA register.
//
//*****************************************************************************

#define DMA                           0x00000001      // DMA Enable


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
#define ERR                           0x007F8000      // PDB Channel Sequence Error Flags


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
// The following are defines for the bit fields in the PITx_MCR register.
//
//*****************************************************************************

#define MDIS                          0x00000002      // Module Disable - (PIT section)
#define FRZ                           0x00000001      // Freeze


//*****************************************************************************
//
// The following are defines for the bit fields in the PITx_LTMR64H register.
//
//*****************************************************************************




//*****************************************************************************
//
// The following are defines for the bit fields in the PITx_LTMR64L register.
//
//*****************************************************************************




//*****************************************************************************
//
// The following are defines for the bit fields in the PITx_LDVALn register.
//
//*****************************************************************************




//*****************************************************************************
//
// The following are defines for the bit fields in the PITx_CVALn register.
//
//*****************************************************************************




//*****************************************************************************
//
// The following are defines for the bit fields in the PITx_TCTRLn register.
//
//*****************************************************************************

#define CHN                           0x00000004      // Chain Mode
#define TIE                           0x00000002      // Timer Interrupt Enable
#define TEN                           0x00000001      // Timer Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the PITx_TFLGn register.
//
//*****************************************************************************

#define TIF                           0x00000001      // Timer Interrupt Flag


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
#define TX                            0x00000008      // Transmit Indicator
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
#define RETRYDIS                      0x00000040      // When set to 1, this bit causes the host to not retry NAK'ed (Negative Acknowledgement) transactions
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

#define BDTBA                         0x00003F80      // Provides address bits 15 through 9 of the BDT base address.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_FRMNUML register.
//
//*****************************************************************************

#define FRM[7:0]                      0x00007F80      // This 8-bit field and the 3-bit field in the Frame Number Register High are used  to  compute  the  address where the current Buffer Descriptor Table (BDT) resides in system memory.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_FRMNUMH register.
//
//*****************************************************************************

#define FRM[10:8]                     0x0000001C      // This 3-bit field and the 8-bit field in the Frame Number Register Low are used  to  compute the  address where the current Buffer Descriptor Table (BDT) resides in system memory.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_TOKEN register.
//
//*****************************************************************************

#define TOKENPID                      0x00000780      // Contains the token type executed by the USB module.
#define TOKENENDPT                    0x00000078      // Holds the Endpoint address for the token command. The four bit value written must be a valid endpoint.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_SOFTHLD register.
//
//*****************************************************************************

#define CNT                           0x07FFE000      // Represents the SOF count threshold in byte times when SOFDYNTHLD=0 or 8 byte times when SOFDYNTHLD=1.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_BDTPAGE2 register.
//
//*****************************************************************************

#define BDTBA                         0x00007F80      // Provides address bits 23 through 16 of the BDT base address that defines     the  location  of  Buffer  Descriptor Table resides in system memory.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_BDTPAGE3 register.
//
//*****************************************************************************

#define BDTBA                         0x00007F80      // Provides address bits 31 through 24 of the BDT base address that defines     the  location  of  Buffer  Descriptor Table resides in system memory.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_USBCTRL register.
//
//*****************************************************************************

#define SUSP                          0x00000080      // Places the USB transceiver into the suspend state.
#define PDE                           0x00000040      // Enables the weak pulldowns on the USB transceiver.
#define UARTCHLS                      0x00000020      // UART Signal Channel Select. This field is valid only when USB signals are selected to be used  as  UART   signals.
#define UARTSEL                       0x00000010      // Selects USB signals to be used as UART signals.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_OBSERVE register.
//
//*****************************************************************************

#define DPPU                          0x00000080      // Provides observability of the D+ Pullup enable at the USB transceiver.
#define DPPD                          0x00000040      // Provides observability of the D+ Pulldown enable at the USB transceiver.
#define DMPD                          0x00000010      // Provides observability of the D- Pulldown enable at the USB transceiver.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_CONTROL register.
//
//*****************************************************************************

#define DPPULLUPNONOTG                0x00000010      // Provides control of the DP Pullup in USBOTG, if USB is configured  in   non-OTG device mode.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_USBTRC0 register.
//
//*****************************************************************************

#define USBRESET                      0x00000080      // Generates a hard reset to USBOTG. After this bit is set and the reset occurs, this bit is automatically cleared.
#define USBRESMEN                     0x00000020      // Asynchronous Resume Interrupt Enable. This bit, when set, allows the USB module to send an asynchronous wakeup event to the MCU upon detection of resume signaling on the USB bus. The MCU then re-enables clocks to the USB module. It is used for low-power suspend mode when USB module clocks are stopped or the USB transceiver is in Suspend mode. Async wakeup only works in device mode.
#define VFEDG_DET                     0x00000010      // VREGIN Falling Edge Interrupt Detect. Use USBx_MISCCTRL[VFEDG_EN] to enable this bitfield.
#define VREDG_DET                     0x00000008      // VREGIN Rising Edge Interrupt Detect. Use USBx_MISCCTRL[VREDG_EN] to enable this bitfield.
#define USB_CLK_RECOVERY_INT          0x00000004      // Combined USB Clock Recovery interrupt status. This read-only field will be set to value high at 1'b1 when any of USB clock recovery interrupt conditions are detected and those interrupts are unmasked.
#define SYNC_DET                      0x00000002      // Synchronous USB Interrupt Detect.
#define USB_RESUME_INT                0x00000001      // USB Asynchronous Interrupt.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_USBFRMADJUST register.
//
//*****************************************************************************

#define ADJ                           0x00007F80      // Frame Adjustment. In Host mode, the frame adjustment is a twos complement number that adjusts the period of each USB frame in 12-MHz clock periods. A SOF is normally generated every 12,000 12-MHz clock cycles. The Frame Adjust Register can adjust this by -128 to +127 to compensate for inaccuracies in the USB 48-MHz clock. Changes to the ADJ bit take effect at the start of the next frame.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_MISCCTRL register.
//
//*****************************************************************************

#define VFEDG_EN                      0x00000010      // VREGIN Falling Edge Interrupt Enable.
#define VREDG_EN                      0x00000008      // VREGIN Rising Edge Interrupt Enable.
#define OWNERRISODIS                  0x00000004      // OWN Error Detect for ISO IN / ISO OUT Disable. This field is only valid for Peripheral mode, that is, CTL[HOSTMODEEN]=0.
#define SOFBUSSET                     0x00000002      // SOF_TOK Interrupt Generation Mode Select. This field is only valid for Host mode, that is, CTL[HOSTMODEEN]=1.
#define SOFDYNTHLD                    0x00000001      // Dynamic SOF Threshold Compare mode. This field is only valid for Host mode, that is, CTL[HOSTMODEEN]=1.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_CLK_RECOVER_CTRL register.
//
//*****************************************************************************

#define CLOCK_RECOVER_EN              0x00000080      // Crystal-less USB enable. This bit must be enabled if user wants to use the crystal-less USB mode for the  Full Speed   USB controller and transceiver.
#define RESET_ROUGH_EN                0x00000040      // Reset/resume to rough phase enable. The clock recovery block tracks the IRC48M to get an accurate 48Mhz clock. It has two phases after user enables clock_recover_en bit, rough phase and tracking phase. The step to fine tune the IRC48M by adjusting the trim fine value is different during these 2 phases. The step in rough phase is larger than that in tracking phase. Switch back to rough stage whenever USB bus reset or bus resume occurs.
#define RESTART_IFRTRIM_EN            0x00000020      // Restart from IFR trim value. IRC48M has a default trim fine value whose default value is factory trimmed (the IFR trim value). Clock recover block tracks the accuracy of the clock 48Mhz and keeps updating the trim fine value accordingly.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_CLK_RECOVER_IRC_EN register.
//
//*****************************************************************************

#define IRC_EN                        0x00000002      // IRC48M enable. This bit is used to enable the on-chip IRC48M module to generate clocks for crystal-less USB. It can be used for FS USB device mode operation. This bit must be set before using the crystal-less USB clock configuration.
#define REG_EN                        0x00000001      // IRC48M regulator enable. This bit is used to enable the local analog regulator for IRC48M module. This bit must be set if user wants to use the crystal-less USB clock configuration.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_CLK_RECOVER_INT_EN register.
//
//*****************************************************************************

#define OVF_ERROR_EN                  0x00000010      // Determines whether OVF_ERROR condition                  signal is used in  generation  of  USB_CLK_RECOVERY_INT.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_CLK_RECOVER_INT_STATUS register.
//
//*****************************************************************************

#define OVF_ERROR                     0x00000010      // Indicates that the USB clock recovery algorithm has detected that the frequency trim adjustment needed for the IRC48M output clock is outside the available TRIM_FINE adjustment range for the IRC48M module.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBDCD_CONTROL register.
//
//*****************************************************************************

#define SR                            0x02000000      // Software Reset
#define START                         0x01000000      // Start Change Detection Sequence
#define BC12                          0x00020000      // BC1.2 compatibility
#define IE                            0x00010000      // Interrupt Enable
#define IF                            0x00000100      // Interrupt Flag
#define IACK                          0x00000001      // Interrupt Acknowledge


//*****************************************************************************
//
// The following are defines for the bit fields in the USBDCD_CLOCK register.
//
//*****************************************************************************

#define CLOCK_SPEED                   0x001FF800      // Numerical Value of Clock Speed in Binary
#define CLOCK_UNIT                    0x00000001      // Unit of Measurement Encoding for Clock Speed


//*****************************************************************************
//
// The following are defines for the bit fields in the USBDCD_STATUS register.
//
//*****************************************************************************

#define ACTIVE                        0x00400000      // Active Status Indicator
#define TO                            0x00200000      // Timeout Flag
#define ERR                           0x00100000      // Error Flag
#define SEQ_STAT                      0x00180000      // Charger Detection Sequence Status
#define SEQ_RES                       0x00060000      // Charger Detection Sequence Results


//*****************************************************************************
//
// The following are defines for the bit fields in the USBDCD_SIGNAL_OVERRIDE register.
//
//*****************************************************************************

#define PS                            0x00000006      // Phase Selection


//*****************************************************************************
//
// The following are defines for the bit fields in the USBDCD_TIMER0 register.
//
//*****************************************************************************

#define TSEQ_INIT                     0x7FE000000      // Sequence Initiation Time
#define TUNITCON                      0x00078000      // Unit Connection Timer Elapse


//*****************************************************************************
//
// The following are defines for the bit fields in the USBDCD_TIMER1 register.
//
//*****************************************************************************

#define TDCD_DBNC                     0x7FE000000      // Time Period to Debounce D+ Signal
#define TVDPSRC_ON                    0x0007FE00      // Time Period Comparator Enabled


//*****************************************************************************
//
// The following are defines for the bit fields in the USBDCD_TIMER2_BC11 register.
//
//*****************************************************************************

#define TVDPSRC_CON                   0x7FE000000      // Time Period Before Enabling D+ Pullup
#define CHECK_DM                      0x00000078      // Time Before Check of D– Line


//*****************************************************************************
//
// The following are defines for the bit fields in the USBDCD_TIMER2_BC12 register.
//
//*****************************************************************************

#define TWAIT_AFTER_PRD               0x7FE000000      // 
#define TVDMSRC_ON                    0x0007FE00      //  ::


//*****************************************************************************
//
// The following are defines for the bit fields in the USBPHY_PWDn register.
//
//*****************************************************************************

#define RXPWDRX                       0x00100000      // Power-down the entire USB PHY receiver block except for the full-speed differential receiver
#define RXPWDDIFF                     0x00080000      // Power-down the USB high-speed differential receiver
#define RXPWD1PT1                     0x00040000      // Power-down the USB full-speed differential receiver
#define RXPWDENV                      0x00020000      // Power-down the USB high-speed receiver envelope detector (squelch signal)
#define TXPWDV2I                      0x00001000      // Power-down the USB PHY transmit V-to-I converter and the current mirror
#define TXPWDIBIAS                    0x00000800      // Power-down the USB PHY current bias block for the transmitter
#define TXPWDFS                       0x00000400      // Power-down the USB full-speed drivers


//*****************************************************************************
//
// The following are defines for the bit fields in the USBPHY_TXn register.
//
//*****************************************************************************

#define USBPHY_TX_EDGECTRL            0x70000000      // Controls the edge-rate of the current sensing transistors used in HS transmit
#define TXCAL45DP                     0x00780000      // Decode to trim the nominal 45Ω series termination resistance to the USB_DP output pin
#define TXCAL45DM                     0x00007800      // Decode to trim the nominal 45Ω series termination resistance to the USB_DM output pin
#define D_CAL                         0x00000780      // Decode to trim the nominal 17.78mA current source for the High Speed TX drivers on USB_DP and USB_DM


//*****************************************************************************
//
// The following are defines for the bit fields in the USBPHY_RXn register.
//
//*****************************************************************************

#define RXDBYPASS                     0x00400000      // Use the output of the USB_DP single-ended receiver in place of the full-speed differential receiver
#define DISCONADJ                     0x000001C0      // The DISCONADJ field adjusts the trip point for the disconnect detector
#define ENVADJ                        0x00000008      // The ENVADJ field adjusts the trip point for the envelope detector


//*****************************************************************************
//
// The following are defines for the bit fields in the USBPHY_CTRLn register.
//
//*****************************************************************************

#define SFTRST                        0x80000000      // Soft-reset the USBPHY_PWD, USBPHY_TX, USBPHY_RX, and USBPHY_CTRL registers
#define CLKGATE                       0x40000000      // Gate UTMI Clocks
#define UTMI_SUSPENDM                 0x20000000      // Indicates a powered-down state
#define HOST_FORCE_LS_SE0             0x10000000      // Forces the next FS packet that is transmitted to have a EOP with low-speed timing
#define OTG_ID_VALUE                  0x08000000      // Indicates the results of USB_ID pin while monitoring the cable plugged into the Micro- or Mini-AB receptacle
#define FSDLL_RST_EN                  0x01000000      // Enables the feature to reset the FSDLL lock detection logic at the end of each TX packet
#define ENAUTOCLR_PHY_PWD             0x00100000      // Enables the feature to auto-clear the PWD register bits in USBPHY_PWD if there is wakeup event while USB is suspended
#define ENAUTOCLR_CLKGATE             0x00080000      // Enables the feature to auto-clear the CLKGATE bit if there is wakeup event while USB is suspended
#define AUTORESUME_EN                 0x00040000      // Enable the auto resume feature
#define ENUTMILEVEL3                  0x00008000      // Enables UTMI+ Level 3 operation for the USB HS PHY
#define ENUTMILEVEL2                  0x00004000      // Enables UTMI+ Level 2 operation for the USB HS PHY
#define DEVPLUGIN_IRQ                 0x00001000      // Indicates that the device is connected
#define ENDEVPLUGINDET                0x00000010      // Enables non-standard resistive plugged-in detection
#define HOSTDISCONDETECT_IRQ          0x00000008      // Indicates that the device has disconnected in High-Speed mode
#define ENHOSTDISCONDETECT            0x00000002      // Enables high-speed disconnect detector


//*****************************************************************************
//
// The following are defines for the bit fields in the USBPHY_STATUS register.
//
//*****************************************************************************

#define RESUME_STATUS                 0x00000400      // Indicates that the host is sending a wake-up after Suspend and has triggered an interrupt
#define OTGID_STATUS                  0x00000100      // Indicates the results of USB_ID pin on the USB cable plugged into the local Micro- or Mini-AB receptacle
#define DEVPLUGIN_STATUS              0x00000040      // Status indicator for non-standard resistive plugged-in detection
#define HOSTDISCONDETECT_STATUS       0x00000008      // Indicates at the local host (downstream) port that the remote device has disconnected while in High-Speed mode


//*****************************************************************************
//
// The following are defines for the bit fields in the USBPHY_DEBUGn register.
//
//*****************************************************************************

#define CLKGATE                       0x40000000      // Gate Test Clocks
#define HOST_RESUME_DEBUG             0x20000000      // Choose to trigger the host resume SE0 with HOST_FORCE_LS_SE0 = 0 or UTMI_SUSPEND = 1
#define SQUELCHRESETLENGTH            0xF0000000      // Duration of RESET in terms of the number of 480-MHz cycles
#define ENSQUELCHRESET                0x01000000      // Set bit to allow squelch to reset high-speed receive
#define SQUELCHRESETCOUNT             0x01F00000      // Delay in between the detection of squelch to the reset of high-speed RX
#define ENTX2RXCOUNT                  0x00001000      // Set this bit to allow a countdown to transition in between TX and RX
#define TX2RXCOUNT                    0x00007800      // Delay in between the end of transmit to the beginning of receive
#define ENHSTPULLDOWN                 0x00000060      // This bit field selects host pulldown overdrive mode
#define HSTPULLDOWN                   0x00000018      // This bit field selects whether to connect pulldown resistors on the USB_DP/USB_DM pins if the corresponding pulldown overdrive mode is enabled through USBPHY_DEBUG[5:4]
#define DEBUG_INTERFACE_HOLD          0x00000002      // Use holding registers to assist in timing for external UTMI interface
#define OTGIDPIOLOCK                  0x00000001      // Once OTG ID from USBPHY_STATUS_OTGID_STATUS is sampled, use this to hold the value


//*****************************************************************************
//
// The following are defines for the bit fields in the USBPHY_DEBUG0_STATUS register.
//
//*****************************************************************************

#define SQUELCH_COUNT                 0x1F80000000      // Running count of the squelch reset instead of normal end for HS RX
#define UTMI_RXERROR_FAIL_COUNT       0x7FE000000      // Running count of the UTMI_RXERROR
#define LOOP_BACK_FAIL_COUNT          0x7FFF8000      // Running count of the failed pseudo-random generator loopback


//*****************************************************************************
//
// The following are defines for the bit fields in the USBPHY_DEBUG1n register.
//
//*****************************************************************************

#define ENTAILADJVD                   0x0000C000      // Delay increment of the rise of squelch


//*****************************************************************************
//
// The following are defines for the bit fields in the USBPHY_VERSION register.
//
//*****************************************************************************

#define MAJOR                         0x7F80000000      // Fixed read-only value reflecting the MAJOR field of the RTL version
#define MINOR                         0x7F800000      // Fixed read-only value reflecting the MINOR field of the RTL version
#define STEP                          0x7FFF8000      // Fixed read-only value reflecting the stepping of the RTL version


//*****************************************************************************
//
// The following are defines for the bit fields in the USBPHY_PLL_SICn register.
//
//*****************************************************************************

#define PLL_LOCK                      0x80000000      // USB PLL lock status indicator
#define PLL_BYPASS                    0x00010000      // Bypass the USB PLL
#define PLL_ENABLE                    0x00002000      // Enable the clock output from the USB PLL
#define PLL_POWER                     0x00001000      // Power up the USB PLL
#define PLL_EN_USB_CLKS               0x00000040      // Enable the USB clock output from the USB PHY PLL
#define PLL_DIV_SEL                   0x00000070      // This field controls the USB PLL feedback loop divider


//*****************************************************************************
//
// The following are defines for the bit fields in the USBPHY_USB1_VBUS_DETECTn register.
//
//*****************************************************************************

#define Reserved                      0x1C0000000      // 
#define Reserved                      0x08000000      // 
#define DISCHARGE_VBUS                0x04000000      // Controls VBUS discharge resistor
#define Reserved                      0x0E000000      // 
#define Reserved                      0x00C00000      // 
#define PWRUP_CMPS                    0x00100000      // Enables the VBUS_VALID comparator
#define Reserved                      0x00080000      // 
#define VBUSVALID_TO_SESSVALID        0x00040000      // Selects the comparator used for VBUS_VALID
#define Reserved                      0x00FE0000      // 
#define VBUS_SOURCE_SEL               0x00000C00      // Selects the source of the VBUS_VALID signal reported to the USB controller
#define VBUSVALID_SEL                 0x00000100      // Selects the source of the VBUS_VALID signal reported to the USB controller
#define VBUSVALID_OVERRIDE            0x00000080      // Override value for VBUS_VALID signal sent to USB controller
#define AVALID_OVERRIDE               0x00000040      // Override value for A-Device Session Valid
#define BVALID_OVERRIDE               0x00000020      // Override value for B-Device Session Valid
#define SESSEND_OVERRIDE              0x00000010      // Override value for SESSEND
#define VBUS_OVERRIDE_EN              0x00000008      // VBUS detect signal override enable
#define VBUSVALID_THRESH              0x0000001C      // Sets the threshold for the VBUSVALID comparator


//*****************************************************************************
//
// The following are defines for the bit fields in the USBPHY_USB1_VBUS_DET_STAT register.
//
//*****************************************************************************

#define VBUS_VALID_3V                 0x00000010      // VBUS_VALID_3V detector status
#define VBUS_VALID                    0x00000008      // VBUS voltage status
#define AVALID                        0x00000004      // A-Device Session Valid status
#define BVALID                        0x00000002      // B-Device Session Valid status
#define SESSEND                       0x00000001      // Session End indicator


//*****************************************************************************
//
// The following are defines for the bit fields in the USBPHY_USB1_CHRG_DET_STAT register.
//
//*****************************************************************************

#define SECDET_DCP                    0x00000010      // Battery Charging Secondary Detection phase output
#define DP_STATE                      0x00000008      // Single ended receiver output for the USB_DP pin, from charger detection circuits
#define DM_STATE                      0x00000004      // Single ended receiver output for the USB_DM pin, from charger detection circuits
#define CHRG_DETECTED                 0x00000002      // Battery Charging Primary Detection phase output
#define PLUG_CONTACT                  0x00000001      // Battery Charging Data Contact Detection phase output


//*****************************************************************************
//
// The following are defines for the bit fields in the USBPHY_ANACTRLn register.
//
//*****************************************************************************

#define EMPH_CUR_CTRL                 0x00018000      // Controls the amount of pre-emphasis current added for the High-Speed TX drivers after each data transition when the USBPHY_ANACTRL[EMPH_EN] bit is set high to 1'b1
#define EMPH_EN                       0x00002000      // Enables pre-emphasis for the High-Speed TX drivers
#define EMPH_PULSE_CTRL               0x00003000      // Controls pre-emphasis time duration for the High Speed TX drivers after each data transition when the USBPHY_ANACTRL[EMPH_EN] bit is set high to 1'b1
#define DEV_PULLDOWN                  0x00000400      // Setting this field to 1'b1 will enable the 15kΩ pulldown resistors on both USB_DP and USB_DM pins
#define PFD_FRAC                      0x00007E00      // PFD fractional divider setting used to select the pfd_clk output frequency
#define PFD_CLK_SEL                   0x00000018      // This bit field for the PFD selects the frequency relationship between the local pfd_clk output and the exported USB1PFDCLK
#define PFD_CLKGATE                   0x00000002      // This bit field controls clock gating (disabling) for the PFD pfd_clk output for power savings when the PFD is not used
#define TESTCLK_SEL                   0x00000001      // Test clock selection to analog test


//*****************************************************************************
//
// The following are defines for the bit fields in the USBPHY_USB1_LOOPBACKn register.
//
//*****************************************************************************

#define TSTPKT                        0x7F800000      // Selects the packet data byte used for USB loopback testing in Pulse mode
#define TSTI_HSFS_MODE_EN             0x00008000      // Setting this bit field to value 1'b1 will enable the loopback test to dynamically change the packet speed
#define UTMO_DIG_TST1                 0x00000100      // Mode control for USB loopback test
#define UTMO_DIG_TST0                 0x00000080      // Mode control for USB loopback test
#define TSTI_TX_HIZ                   0x00000040      // Sets TX Hi-Z for USB loopback test
#define TSTI_TX_EN                    0x00000020      // Enable TX for USB loopback test
#define TSTI_TX_LS_MODE               0x00000010      // Set to value 1'b1 to choose LS for USB loopback testing, set to value 1'b0 to choose HS or FS mode
#define TSTI_TX_HS_MODE               0x00000008      // Select HS or FS mode for USB loopback testing
#define UTMI_DIG_TST1                 0x0000000C      // Mode control for USB loopback test
#define UTMI_TESTSTART                0x00000001      // This bit enables the USB loopback test


//*****************************************************************************
//
// The following are defines for the bit fields in the USBPHY_USB1_LOOPBACK_HSFSCNTn register.
//
//*****************************************************************************

#define TSTI_FS_NUMBER                0x7FFF80000000      // Full speed packet number, used when USBPHY_USB1_LOOPBACK[TSTI_HSFS_MODE_EN] is set to value 1'b1
#define TSTI_HS_NUMBER                0x7FFF8000      // High speed packet number, used when USBPHY_USB1_LOOPBACK[TSTI_HSFS_MODE_EN] is set to value 1'b1 ::


//*****************************************************************************
//
// The following are defines for the bit fields in the USBPHY_TRIM_OVERRIDE_ENn register.
//
//*****************************************************************************

#define TRIM_TX_CAL45DM_OVERRIDE      0x00000010      // Enables the override of the nominal 45Ω series termination resistance to the USB_DM output pin
#define TRIM_TX_CAL45DP_OVERRIDE      0x00000008      // Enables the override of the nominal 45Ω series termination resistance to the USB_DP output pin
#define TRIM_TX_D_CAL_OVERRIDE        0x00000004      // Enables the override of the nominal 17.78mA current source for the High Speed TX drivers on USB_DP and USB_DM
#define TRIM_ENV_TAIL_ADJ_VD_OVERRIDE 0x00000002      // Enables the override of the delay increment of the rise of squelch
#define TRIM_PLL_DIV_SEL_OVERRIDE     0x00000001      // Enables the override of the PLL reference frequency


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
// The following are defines for the bit fields in the I2Cx_A1 register.
//
//*****************************************************************************

#define AD[7:1]                       0x00003F80      // Contains the primary slave address used by the I2C module when it is addressed as a slave. This field is used in the 7-bit address scheme and the lower seven bits in the 10-bit address scheme.


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Cx_F register.
//
//*****************************************************************************

#define MULT                          0x00000180      // Defines the multiplier factor (mul). This factor is used along with the SCL divider to generate the I2C baud rate.
#define ICR                           0x000007E0      // Prescales the I2C module clock for bit rate selection. This field and the MULT field determine the I2C baud rate, the SDA hold time, the SCL start hold time, and the SCL stop hold time. For a list of values corresponding to each ICR setting, see I2C divider and hold values.


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Cx_C1 register.
//
//*****************************************************************************

#define IICEN                         0x00000080      // Enables I2C module operation.
#define IICIE                         0x00000040      // Enables I2C interrupt requests.
#define MST                           0x00000020      // When MST is changed from 0 to 1, a START signal is generated on the bus and master mode is selected. When this bit changes from 1 to 0, a STOP signal is generated and the mode of operation changes from master to slave.
#define TX                            0x00000010      // Selects the direction of master and slave transfers. In master mode this bit must be set according to the type of transfer required. Therefore, for address cycles, this bit is always set. When addressed as a slave this bit must be set by software according to the SRW bit in the status register.
#define TXAK                          0x00000008      // Specifies the value driven onto the SDA during data acknowledge cycles for both master and slave receivers. The value of SMB[FACK] affects NACK/ACK generation.
#define RSTA                          0x00000004      // Writing 1 to this bit generates a repeated START condition provided it is the current master. This bit will always be read as 0. Attempting a repeat at the wrong time results in loss of arbitration.
#define WUEN                          0x00000002      // The I2C module can wake the MCU from low power mode with no peripheral bus running when slave address matching occurs.
#define DMAEN                         0x00000001      // Enables or disables the DMA function.


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Cx_S register.
//
//*****************************************************************************

#define TCF                           0x00000080      // Acknowledges a byte transfer; TCF is set on the completion of a byte transfer. This bit is valid only during or immediately following a transfer to or from the I2C module. TCF is cleared by reading the I2C data register in receive mode or by writing to the I2C data register in transmit mode.
#define IAAS                          0x00000040      // This bit is set by one of the following conditions:;; The calling address matches the programmed primary slave address in the A1 register, or matches the range address in the RA register (which must be set to a nonzero value and under the condition I2C_C2[RMEN] = 1).;; C2[GCAEN] is set and a general call is received.;; SMB[SIICAEN] is set and the calling address matches the second programmed slave address.;; ALERTEN is set and an SMBus alert response address is received;; RMEN is set and an address is received that is within the range between the values of the A1 and RA registers.
#define BUSY                          0x00000020      // Indicates the status of the bus regardless of slave or master mode. This bit is set when a START signal is detected and cleared when a STOP signal is detected.
#define ARBL                          0x00000010      // This bit is set by hardware when the arbitration procedure is lost. The ARBL bit must be cleared by software, by writing 1 to it.
#define RAM                           0x00000008      // This bit is set to 1 by any of the following conditions, if I2C_C2[RMEN] = 1:;; Any nonzero calling address is received that matches the address in the RA register.;; The calling address is within the range of values of the A1 and RA registers.
#define SRW                           0x00000004      // When addressed as a slave, SRW indicates the value of the R/W command bit of the calling address sent to the master.
#define IICIF                         0x00000002      // This bit sets when an interrupt is pending. This bit must be cleared by software by writing 1 to it, such as in the interrupt routine. One of the following events can set this bit:;; One byte transfer, including ACK/NACK bit, completes if FACK is 0. An ACK or NACK is sent on the bus by writing 0 or 1 to TXAK after this bit is set in receive mode.;; One byte transfer, excluding ACK/NACK bit, completes if FACK is 1.;; Match of slave address to calling address including primary slave address, range slave address, alert response address, second slave address, or general call address.;; Arbitration lost;; In SMBus mode, any timeouts except SCL and SDA high timeouts;; I2C bus stop or start detection if the SSIE bit in the Input Glitch Filter register is 1
#define RXAK                          0x00000001      // 


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Cx_D register.
//
//*****************************************************************************

#define DATA                          0x00007F80      // In master transmit mode, when data is written to this register, a data transfer is initiated. The most significant bit is sent first. In master receive mode, reading this register initiates receiving of the next byte of data.


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Cx_C2 register.
//
//*****************************************************************************

#define GCAEN                         0x00000080      // Enables general call address.
#define ADEXT                         0x00000040      // Controls the number of bits used for the slave address.
#define HDRS                          0x00000020      // Controls the drive capability of the I2C pads.
#define SBRC                          0x00000010      // Enables independent slave mode baud rate at maximum frequency, which forces clock stretching on SCL in very fast I2C modes. To a slave, an example of a "very fast" mode is when the master transfers at 40 kbit/s but the slave can capture the master's data at only 10 kbit/s.
#define RMEN                          0x00000008      // This bit controls the slave address matching for addresses between the values of the A1 and RA registers. When this bit is set, a slave address matching occurs for any address greater than the value of the A1 register and less than or equal to the value of the RA register.
#define AD[10:8]                      0x0000001C      // Contains the upper three bits of the slave address in the 10-bit address scheme. This field is valid only while the ADEXT bit is set.


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Cx_FLT register.
//
//*****************************************************************************

#define SHEN                          0x00000080      // Set this bit to hold off entry to stop mode when any data transmission or reception is occurring.
#define STOPF                         0x00000040      // Hardware sets this bit when the I2C bus's stop status is detected. The STOPF bit must be cleared by writing 1 to it.
#define SSIE                          0x00000020      // This bit enables the interrupt for I2C bus stop or start detection.
#define STARTF                        0x00000010      // Hardware sets this bit when the I2C bus's start status is detected. The STARTF bit must be cleared by writing 1 to it.
#define FLT                           0x00000001      // Controls the width of the glitch, in terms of I2C module clock cycles, that the filter must absorb. For any glitch whose size is less than or equal to this width setting, the filter does not allow the glitch to pass.


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Cx_RA register.
//
//*****************************************************************************

#define RAD                           0x00003F80      // This field contains the slave address to be used by the I2C module. The field is used in the 7-bit address scheme. If I2C_C2[RMEN] is set to 1, any nonzero value write enables this register. This register value can be considered as a maximum boundary in the range matching mode.


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Cx_SMB register.
//
//*****************************************************************************

#define FACK                          0x00000080      // For SMBus packet error checking, the CPU must be able to issue an ACK or NACK according to the result of receiving data byte.
#define ALERTEN                       0x00000040      // Enables or disables SMBus alert response address matching.
#define SIICAEN                       0x00000020      // Enables or disables SMBus device default address.
#define TCKSEL                        0x00000010      // Selects the clock source of the timeout counter.
#define SLTF                          0x00000008      // This bit is set when the SLT register (consisting of the SLTH and SLTL registers) is loaded with a non-zero value (LoValue) and an SCL low timeout occurs. Software clears this bit by writing a logic 1 to it.
#define SHTF1                         0x00000004      // This read-only bit sets when SCL and SDA are held high more than clock × LoValue / 512, which indicates the bus is free. This bit is cleared automatically.
#define SHTF2                         0x00000002      // This bit sets when SCL is held high and SDA is held low more than clock × LoValue / 512. Software clears this bit by writing 1 to it.
#define SHTF2IE                       0x00000001      // Enables SCL high and SDA low timeout interrupt.


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Cx_A2 register.
//
//*****************************************************************************

#define SAD                           0x00003F80      // Contains the slave address used by the SMBus. This field is used on the device default address or other related addresses.


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Cx_SLTH register.
//
//*****************************************************************************

#define SSLT[15:8]                    0x00007F80      // Most significant byte of SCL low timeout value that determines the timeout period of SCL low.


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Cx_SLTL register.
//
//*****************************************************************************

#define SSLT[7:0]                     0x00007F80      // Least significant byte of SCL low timeout value that determines the timeout period of SCL low.


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Cx_S2 register.
//
//*****************************************************************************

#define ERROR                         0x00000002      // Indicates if there are read or write errors with the Tx and Rx buffers.
#define EMPTY                         0x00000001      // 


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
#define RDMAE                         0x00400000      // Receiver Full DMA Enable
#define MATCFG                        0x00600000      // Match Configuration
#define BOTHEDGE                      0x00180000      // Both Edge Sampling
#define RESYNCDIS                     0x00020000      // Resynchronization Disable
#define LBKDIE                        0x00010000      // LIN Break Detect Interrupt Enable
#define RXEDGIE                       0x00008000      // RX Input Active Edge Interrupt Enable
#define SBNS                          0x00004000      // Stop Bit Number Select
#define SBR                           0x07FFE000      // Baud Rate Modulo Divisor


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
#define LOOPS                         0x00000080      // Loop  Mode Select
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

#define                               0x7FFF80000000      // This field is reserved
#define NOISY                         0x00008000      // The current received dataword contained in DATA[R9:R0] was received     with  noise
#define PARITYE                       0x00004000      // The current received dataword contained in DATA[R9:R0] was received     with  a parity  error
#define FRETSC                        0x00002000      // Frame Error / Transmit Special Character
#define RXEMPT                        0x00001000      // Receive Buffer Empty
#define IDLINE                        0x00000800      // Idle Line
#define                               0x00000400      // This field is reserved
#define R9T9-R0T0                     0x0007FE00      // Read receive data buffer 9-0 or write transmit data buffer 9-0 ::


//*****************************************************************************
//
// The following are defines for the bit fields in the LPUARTx_MATCH register.
//
//*****************************************************************************

#define                               0x1F80000000      // This field is reserved
#define MA2                           0x7FE000000      // Match Address 2
#define                               0x001F8000      // This field is reserved
#define MA1                           0x0007FE00      // Match Address 1


//*****************************************************************************
//
// The following are defines for the bit fields in the LPUARTx_MODIR register.
//
//*****************************************************************************

#define                               0xFFF80000000      // This field is reserved
#define IREN                          0x00040000      // Infrared enable
#define TNP                           0x00060000      // Transmitter narrow pulse
#define RTSWATER                      0x007F8000      // Receive RTS Configuration
#define                               0x00000180      // This field is reserved
#define TXCTSSRC                      0x00000020      // Transmit CTS Source
#define TXCTSC                        0x00000010      // Transmit CTS Configuration
#define RXRTSE                        0x00000008      // Receiver request-to-send enable
#define TXRTSPOL                      0x00000004      // Transmitter request-to-send polarity
#define TXRTSE                        0x00000002      // Transmitter request-to-send enable
#define TXCTSE                        0x00000001      // Transmitter clear-to-send enable


//*****************************************************************************
//
// The following are defines for the bit fields in the LPUARTx_FIFO register.
//
//*****************************************************************************

#define                               0x7F80000000      // This field is reserved
#define TXEMPT                        0x00800000      // Transmit Buffer/FIFO Empty
#define RXEMPT                        0x00400000      // Receive Buffer/FIFO Empty
#define                               0x01E00000      // This field is reserved
#define TXOF                          0x00020000      // Transmitter Buffer Overflow Flag
#define RXUF                          0x00010000      // Receiver Buffer Underflow Flag
#define TXFLUSH                       0x00008000      // Transmit FIFO/Buffer Flush
#define RXFLUSH                       0x00004000      // Receive FIFO/Buffer Flush
#define                               0x00002000      // This field is reserved
#define RXIDEN                        0x00007000      // Receiver Idle Empty Enable
#define TXOFE                         0x00000200      // Transmit FIFO Overflow Interrupt Enable
#define RXUFE                         0x00000100      // Receive FIFO Underflow Interrupt Enable
#define TXFE                          0x00000080      // Transmit FIFO Enable
#define TXFIFOSIZE                    0x000001C0      // Transmit FIFO. Buffer Depth
#define RXFE                          0x00000008      // Receive FIFO Enable
#define RXFIFOSIZE                    0x0000001C      // Receive FIFO. Buffer Depth


//*****************************************************************************
//
// The following are defines for the bit fields in the LPUARTx_WATER register.
//
//*****************************************************************************

#define RXCOUNT                       0x7F80000000      // Receive Counter
#define RXWATER                       0x7F800000      // Receive Watermark
#define TXCOUNT                       0x007F8000      // Transmit Counter
#define TXWATER                       0x00007F80      // Transmit Watermark ::


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
#define WSF                           0x00100000      // Word Start Flag
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

#define TFW                           0x0000001C      // Transmit FIFO Watermark


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

#define CFR                           0x06000000      // Channel FIFO Reset
#define TCE                           0x00060000      // Transmit Channel Enable
#define WDFL                          0x00000001      // Word Flag Configuration


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_TCR4 register.
//
//*****************************************************************************

#define FCONT                         0x10000000      // FIFO Continue on Error
#define FCOMB                         0x18000000      // FIFO Combine Mode
#define FPACK                         0x06000000      // FIFO Packing Mode
#define FRSZ                          0x01F00000      // Frame size
#define SYWD                          0x0001F000      // Sync Width
#define Reserved                      0x00000380      // 
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

#define WCP                           0x80000000      // Write Channel Pointer
#define WFP                           0x00780000      // Write FIFO Pointer
#define RFP                           0x00000001      // Read FIFO Pointer


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_TMR register.
//
//*****************************************************************************

#define TWM                           0x7FFFFFFF80000000      // Transmit Word Mask


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
#define WSF                           0x00100000      // Word Start Flag
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

#define RFW                           0x0000001C      // Receive FIFO Watermark


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

#define CFR                           0x06000000      // Channel FIFO Reset
#define RCE                           0x00060000      // Receive Channel Enable
#define WDFL                          0x00000001      // Word Flag Configuration


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_RCR4 register.
//
//*****************************************************************************

#define FCONT                         0x10000000      // FIFO Continue on Error
#define FCOMB                         0x18000000      // FIFO Combine Mode
#define FPACK                         0x06000000      // FIFO Packing Mode
#define FRSZ                          0x01F00000      // Frame size
#define SYWD                          0x0001F000      // Sync Width
#define Reserved                      0x00000380      // 
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

#define Reserved                      0x80000000      // 
#define WFP                           0x00780000      // Write FIFO Pointer
#define RCP                           0x00008000      // Receive Channel Pointer
#define RFP                           0x00000001      // Read FIFO Pointer


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_RMR register.
//
//*****************************************************************************

#define RWM                           0x7FFFFFFF80000000      // Receive Word Mask



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
// The following are defines for the bit fields in the SDHC_DSADDR register.
//
//*****************************************************************************

#define DSADDR                        0x1FFFFFFF80000000      // Contains the 32-bit system memory address for a DMA transfer. Because the address must be word (4 bytes) align, the least 2 bits are reserved, always 0. When the SDHC stops a DMA transfer, this register points to the system address of the next contiguous data position. It can be accessed only when no transaction is executing, that is, after a transaction has stopped. Read operation during transfers may return an invalid value. The host driver shall initialize this register before starting a DMA transaction. After DMA has stopped, the system address of the next contiguous data position can be read from this register. This register is protected during a data transfer. When data lines are active, write to this register is ignored. The host driver shall wait, until PRSSTAT[DLA] is cleared, before writing to this register. The SDHC internal DMA does not support a virtual memory system. It supports only continuous physical memory access. And due to AHB burst limitations, if the burst must cross the 1 KB boundary, SDHC will automatically change SEQ burst type to NSEQ. Because this register supports dynamic address reflecting, when IRQSTAT[TC] bit is set, it automatically alters the value of internal address counter, so SW cannot change this register when IRQSTAT[TC] is set.


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_BLKATTR register.
//
//*****************************************************************************

#define BLKCNT                        0x7FFF80000000      // This register is enabled when XFERTYP[BCEN] is set to 1 and is valid only for multiple block transfers. For single block transfer, this register will always read as 1. The host driver shall set this register to a value between 1 and the maximum block count. The SDHC decrements the block count after each block transfer and stops when the count reaches zero. Setting the block count to 0 results in no data blocks being transferred. This register must be accessed only when no transaction is executing, that is, after transactions are stopped. During data transfer, read operations on this register may return an invalid value and write operations are ignored. When saving transfer content as a result of a suspend command, the number of blocks yet to be transferred can be determined by reading this register. The reading of this register must be applied after transfer is paused by stop at block gap operation and before sending the command marked as suspend. This is because when suspend command is sent out, SDHC will regard the current transfer as aborted and change BLKCNT back to its original value instead of keeping the dynamical indicator of remained block count. When restoring transfer content prior to issuing a resume command, the host driver shall restore the previously saved block count. NOTE: Although the BLKCNT field is 0 after reset, the read of reset value is 0x1. This is because when XFERTYP[MSBSEL] is 0, indicating a single block transfer, the read value of BLKCNT is always 1.
#define Reserved                      0x00038000      // This read-only field is reserved and always has the value 0.
#define BLKSIZE                       0x01FFF000      // Specifies the block size for block data transfers. Values ranging from 1 byte up to the maximum buffer size can be set. It can be accessed only when no transaction is executing, that is, after a transaction has stopped. Read operations during transfers may return an invalid value, and write operations will be ignored.


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_CMDARG register.
//
//*****************************************************************************

#define CMDARG                        0x7FFFFFFF80000000      // The SD/MMC command argument is specified as bits 39-8 of the command format in the SD Memory Card Physical Layer Specification and SDIO Card Specification. This register is write protected when PRSSTAT[CDIHB0] is set.


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_XFERTYP register.
//
//*****************************************************************************

#define Reserved                      0x180000000      // This read-only field is reserved and always has the value 0.
#define CMDINX                        0x7E0000000      // These bits shall be set to the command number that is specified in bits 45-40 of the command-format in the SD Memory Card Physical Layer Specification and SDIO Card Specification.
#define CMDTYP                        0x01800000      // There are three types of special commands: suspend, resume, and abort. These bits shall be set to 00b for all other commands.
#define DPSEL                         0x00200000      // This bit is set to 1 to indicate that data is present and shall be transferred using the DAT line. It is set to 0 for the following: Commands using only the CMD line, for example: CMD52. Commands with no data transfer, but using the busy signal on DAT[0] line, R1b or R5b, for example: CMD38. NOTE: In resume command, this bit shall be set, and other bits in this register shall be set the same as when the transfer was initially launched.That is to say, when this bit is set, while the DTDSEL bit is 0, writes to the register Transfer Type are ignored.
#define CICEN                         0x00100000      // If this bit is set to 1, the SDHC will check the index field in the response to see if it has the same value as the command index. If it is not, it is reported as a command index error. If this bit is set to 0, the index field is not checked.
#define CCCEN                         0x00080000      // If this bit is set to 1, the SDHC shall check the CRC field in the response. If an error is detected, it is reported as a Command CRC Error. If this bit is set to 0, the CRC field is not checked. The number of bits checked by the CRC field value changes according to the length of the response.
#define Reserved                      0x00040000      // This read-only field is reserved and always has the value 0.
#define RSPTYP                        0x00060000      // 00b: No response;; 01b: Response length 136;; 10b: Response length 48;; 11b: Response length 48, check busy after response
#define Reserved                      0x01FF8000      // This read-only field is reserved and always has the value 0.
#define MSBSEL                        0x00000020      // Enables multiple block DAT line data transfers. For any other commands, this bit shall be set to 0. If this bit is 0, it is not necessary to set the block count register.
#define DTDSEL                        0x00000010      // Defines the direction of DAT line data transfers. The bit is set to 1 by the host driver to transfer data from the SD card to the SDHC and is set to 0 for all other commands.
#define Reserved                      0x00000008      // This read-only field is reserved and always has the value 0.
#define AC12EN                        0x00000004      // Multiple block transfers for memory require a CMD12 to stop the transaction. When this bit is set to 1, the SDHC will issue a CMD12 automatically when the last block transfer has completed. The host driver shall not set this bit to issue commands that do not require CMD12 to stop a multiple block data transfer. In particular, secure commands defined in File Security Specification (see reference list) do not require CMD12. In single block transfer, the SDHC will ignore this bit whether it is set or not.
#define BCEN                          0x00000002      // Used to enable the Block Count register, which is only relevant for multiple block transfers. When this bit is 0, the internal counter for block is disabled, which is useful in executing an infinite transfer.
#define DMAEN                         0x00000001      // Enables DMA functionality. If this bit is set to 1, a DMA operation shall begin when the host driver sets the DPSEL bit of this register. Whether the simple DMA, or the advanced DMA, is active depends on PROCTL[DMAS].


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_CMDRSP0 register.
//
//*****************************************************************************

#define CMDRSP0                       0x7FFFFFFF80000000      // Command Response 0


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_CMDRSP1 register.
//
//*****************************************************************************

#define CMDRSP1                       0x7FFFFFFF80000000      // Command Response 1


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_CMDRSP2 register.
//
//*****************************************************************************

#define CMDRSP2                       0x7FFFFFFF80000000      // Command Response 2


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_CMDRSP3 register.
//
//*****************************************************************************

#define CMDRSP3                       0x7FFFFFFF80000000      // Command Response 3


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_DATPORT register.
//
//*****************************************************************************

#define DATCONT                       0x7FFFFFFF80000000      // The Buffer Data Port register is for 32-bit data access by the CPU or the external DMA. When the internal DMA is enabled, any write to this register is ignored, and any read from this register will always yield 0s.


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_PRSSTAT register.
//
//*****************************************************************************

#define DLSL                          0x7F80000000      // Used to check the DAT line level to recover from errors, and for debugging. This is especially useful in detecting the busy signal level from DAT[0]. The reset value is effected by the external pullup/pulldown resistors. By default, the read value of this field after reset is 8’b11110111, when DAT[3] is pulled down and the other lines are pulled up.
#define CLSL                          0x00800000      // Used to check the CMD line level to recover from errors, and for debugging. The reset value is effected by the external pullup/pulldown resistor, by default, the read value of this bit after reset is 1b, when the command line is pulled up.
#define Reserved                      0x0FC00000      // This read-only field is reserved and always has the value 0.
#define CINS                          0x00010000      // Indicates whether a card has been inserted. The SDHC debounces this signal so that the host driver will not need to wait for it to stabilize. Changing from a 0 to 1 generates a card insertion interrupt in the Interrupt Status register. Changing from a 1 to 0 generates a card removal interrupt in the Interrupt Status register. A write to the force event register does not effect this bit. SYSCTL[RSTA] does not effect this bit. A software reset does not effect this bit.
#define Reserved                      0x00078000      // This read-only field is reserved and always has the value 0.
#define BREN                          0x00000800      // Used for non-DMA read transfers. The SDHC may implement multiple buffers to transfer data efficiently. This read-only flag indicates that valid data exists in the host side buffer. If this bit is high, valid data greater than the watermark level exist in the buffer. This read-only flag indicates that valid data exists in the host side buffer.
#define BWEN                          0x00000400      // Used for non-DMA write transfers. The SDHC can implement multiple buffers to transfer data efficiently. This read-only flag indicates whether space is available for write data. If this bit is 1, valid data greater than the watermark level can be written to the buffer. This read-only flag indicates whether space is available for write data.
#define RTA                           0x00000200      // Used for detecting completion of a read transfer. This bit is set for either of the following conditions: After the end bit of the read command. When writing a 1 to PROCTL[CREQ] to restart a read transfer. A transfer complete interrupt is generated when this bit changes to 0. This bit is cleared for either of the following conditions: When the last data block as specified by block length is transferred to the system, that is, all data are read away from SDHC internal buffer. When all valid data blocks have been transferred from SDHC internal buffer to the system and no current block transfers are being sent as a result of the stop at block gap request being set to 1.
#define WTA                           0x00000100      // Indicates that a write transfer is active. If this bit is 0, it means no valid write data exists in the SDHC. This bit is set in either of the following cases: After the end bit of the write command. When writing 1 to PROCTL[CREQ] to restart a write transfer. This bit is cleared in either of the following cases: After getting the CRC status of the last data block as specified by the transfer count (single and multiple). After getting the CRC status of any block where data transmission is about to be stopped by a stop at block gap request. During a write transaction, a block gap event interrupt is generated when this bit is changed to 0, as result of the stop at block gap request being set. This status is useful for the host driver in determining when to issue commands during write busy state.
#define SDOFF                         0x00000080      // Indicates that the SD clock is internally gated off, because of buffer over/under-run or read pause without read wait assertion, or the driver has cleared SYSCTL[SDCLKEN] to stop the SD clock. This bit is for the host driver to debug data transaction on the SD bus.
#define PEROFF                        0x00000040      // Indicates that the SDHC clock is internally gated off. This bit is for the host driver to debug transaction on the SD bus. When INITA bit is set, SDHC sending 80 clock cycles to the card, SDCLKEN must be 1 to enable the output card clock, otherwise the SDHC clock will never be gate off, so SDHC clock will be always active. SDHC clock bus clock SDHC clock
#define HCKOFF                        0x00000020      // Indicates that the system clock is internally gated off. This bit is for the host driver to debug during a data transfer.
#define IPGOFF                        0x00000010      // Indicates that the bus clock is internally gated off. This bit is for the host driver to debug.
#define SDSTB                         0x00000008      // Indicates that the internal card clock is stable. This bit is for the host driver to poll clock status when changing the clock frequency. It is recommended to clear SYSCTL[SDCLKEN] to remove glitch on the card clock when the frequency is changing.
#define DLA                           0x00000004      // Indicates whether one of the DAT lines on the SD bus is in use. In the case of read transactions: This status indicates whether a read transfer is executing on the SD bus. Changes in this value from 1 to 0, between data blocks, generates a block gap event interrupt in the Interrupt Status register. This bit will be set in either of the following cases: After the end bit of the read command. When writing a 1 to PROCTL[CREQ] to restart a read transfer. This bit will be cleared in either of the following cases: When the end bit of the last data block is sent from the SD bus to the SDHC. When the read wait state is stopped by a suspend command and the DAT2 line is released. The SDHC will wait at the next block gap by driving read wait at the start of the interrupt cycle. If the read wait signal is already driven (data buffer cannot receive data), the SDHC can wait for a current block gap by continuing to drive the read wait signal. It is necessary to support read wait to use the suspend / resume function. This bit will remain 1 during read wait. In the case of write transactions: This status indicates that a write transfer is executing on the SD bus. Changes in this value from 1 to 0 generate a transfer complete interrupt in the interrupt status register. This bit will be set in either of the following cases: After the end bit of the write command. When writing to 1 to PROCTL[CREQ] to continue a write transfer. This bit will be cleared in either of the following cases: When the SD card releases write busy of the last data block, the SDHC will also detect if the output is not busy. If the SD card does not drive the busy signal after the CRC status is received, the SDHC shall assume the card drive "Not busy". When the SD card releases write busy, prior to waiting for write transfer, and as a result of a stop at block gap request. In the case of command with busy pending: This status indicates that a busy state follows the command and the data line is in use. This bit will be cleared when the DAT0 line is released.
#define CDIHB                         0x00000002      // This status bit is generated if either the DLA or the RTA is set to 1. If this bit is 0, it indicates that the SDHC can issue the next SD/MMC Command. Commands with a busy signal belong to CDIHB, for example, R1b, R5b type. Except in the case when the command busy is finished, changing from 1 to 0 generates a transfer complete interrupt in the Interrupt Status register. NOTE: The SD host driver can save registers for a suspend transaction after this bit has changed from 1 to 0.
#define CIHB                          0x00000001      // If this status bit is 0, it indicates that the CMD line is not in use and the SDHC can issue a SD/MMC Command using the CMD line. This bit is set also immediately after the Transfer Type register is written. This bit is cleared when the command response is received. Even if the CDIHB bit is set to 1, Commands using only the CMD line can be issued if this bit is 0. Changing from 1 to 0 generates a command complete interrupt in the interrupt status register. If the SDHC cannot issue the command because of a command conflict error (see command CRC error) or because of a command not issued by auto CMD12 error, this bit will remain 1 and the command complete is not set. The status of issuing an auto CMD12 does not show on this bit.


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_PROCTL register.
//
//*****************************************************************************

#define Reserved                      0xF80000000      // This read-only field is reserved and always has the value 0.
#define WECRM                         0x04000000      // Enables a wakeup event, via IRQSTAT[CRM]. FN_WUS (Wake Up Support) in CIS does not effect this bit. When this bit is set, IRQSTAT[CRM] and the SDHC interrupt can be asserted without SD_CLK toggling. When the wakeup feature is not enabled, the SD_CLK must be active to assert IRQSTAT[CRM] and the SDHC interrupt.
#define WECINS                        0x02000000      // Enables a wakeup event, via IRQSTAT[CINS]. FN_WUS (Wake Up Support) in CIS does not effect this bit. When this bit is set, IRQSTATEN[CINSEN] and the SDHC interrupt can be asserted without SD_CLK toggling. When the wakeup feature is not enabled, the SD_CLK must be active to assert IRQSTATEN[CINSEN] and the SDHC interrupt.
#define WECINT                        0x01000000      // Enables a wakeup event, via IRQSTAT[CINT]. This bit can be set to 1 if FN_WUS (Wake Up Support) in CIS is set to 1. When this bit is set, the card interrupt status and the SDHC interrupt can be asserted without SD_CLK toggling. When the wakeup feature is not enabled, the SD_CLK must be active to assert the card interrupt status and the SDHC interrupt.
#define Reserved                      0x07800000      // This read-only field is reserved and always has the value 0.
#define IABG                          0x00080000      // Valid only in 4-bit mode, of the SDIO card, and selects a sample point in the interrupt cycle. Setting to 1 enables interrupt detection at the block gap for a multiple block transfer. Setting to 0 disables interrupt detection during a multiple block transfer. If the SDIO card can't signal an interrupt during a multiple block transfer, this bit must be set to 0 to avoid an inadvertent interrupt. When the host driver detects an SDIO card insertion, it shall set this bit according to the CCCR of the card.
#define RWCTL                         0x00040000      // The read wait function is optional for SDIO cards. If the card supports read wait, set this bit to enable use of the read wait protocol to stop read data using the DAT[2] line. Otherwise, the SDHC has to stop the SD Clock to hold read data, which restricts commands generation. When the host driver detects an SDIO card insertion, it shall set this bit according to the CCCR of the card. If the card does not support read wait, this bit shall never be set to 1, otherwise DAT line conflicts may occur. If this bit is set to 0, stop at block gap during read operation is also supported, but the SDHC will stop the SD Clock to pause reading operation.
#define CREQ                          0x00020000      // Used to restart a transaction which was stopped using the PROCTL[SABGREQ]. When a suspend operation is not accepted by the card, it is also by setting this bit to restart the paused transfer. To cancel stop at the block gap, set PROCTL[SABGREQ] to 0 and set this bit to 1 to restart the transfer. The SDHC automatically clears this bit, therefore it is not necessary for the host driver to set this bit to 0. If both PROCTL[SABGREQ] and this bit are 1, the continue request is ignored.
#define SABGREQ                       0x00010000      // Used to stop executing a transaction at the next block gap for both DMA and non-DMA transfers. Until the IRQSTATEN[TCSEN] is set to 1, indicating a transfer completion, the host driver shall leave this bit set to 1. Clearing both PROCTL[SABGREQ] and PROCTL[CREQ] does not cause the transaction to restart. Read Wait is used to stop the read transaction at the block gap. The SDHC will honor the PROCTL[SABGREQ] for write transfers, but for read transfers it requires that SDIO card support read wait. Therefore, the host driver shall not set this bit during read transfers unless the SDIO card supports read wait and has set PROCTL[RWCTL] to 1, otherwise the SDHC will stop the SD bus clock to pause the read operation during block gap. In the case of write transfers in which the host driver writes data to the data port register, the host driver shall set this bit after all block data is written. If this bit is set to 1, the host driver shall not write data to the Data Port register after a block is sent. Once this bit is set, the host driver shall not clear this bit before IRQSTATEN[TCSEN] is set, otherwise the SDHC's behavior is undefined. This bit effects PRSSTAT[RTA], PRSSTAT[WTA], and PRSSTAT[CDIHB].
#define Reserved                      0x001F8000      // This read-only field is reserved and always has the value 0.
#define DMAS                          0x00000600      // This field is valid while DMA (SDMA or ADMA) is enabled and selects the DMA operation.
#define CDSS                          0x00000080      // Selects the source for the card detection.
#define CDTL                          0x00000040      // Enabled while the CDSS is set to 1 and it indicates card insertion.
#define EMODE                         0x00000060      // The SDHC supports all four endian modes in data transfer.
#define D3CD                          0x00000008      // If this bit is set, DAT3 should be pulled down to act as a card detection pin. Be cautious when using this feature, because DAT3 is also a chip-select for the SPI mode. A pulldown on this pin and CMD0 may set the card into the SPI mode, which the SDHC does not support. Note: Keep this bit set if SDIO interrupt is used.
#define DTW                           0x0000000C      // Selects the data width of the SD bus for a data transfer. The host driver shall set it to match the data width of the card. Possible data transfer width is 1-bit, 4-bits or 8-bits.
#define LCTL                          0x00000001      // This bit, fully controlled by the host driver, is used to caution the user not to remove the card while the card is being accessed. If the software is going to issue multiple SD commands, this bit can be set during all these transactions. It is not necessary to change for each transaction. When the software issues multiple SD commands, setting the bit once before the first command is sufficient: it is not necessary to reset the bit between commands.


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_SYSCTL register.
//
//*****************************************************************************

#define Reserved                      0x780000000      // This read-only field is reserved and always has the value 0.
#define INITA                         0x08000000      // When this bit is set, 80 SD-clocks are sent to the card. After the 80 clocks are sent, this bit is self-cleared. This bit is very useful during the card power-up period when 74 SD-clocks are needed and the clock auto gating feature is enabled. Writing 1 to this bit when this bit is already 1 has no effect. Writing 0 to this bit at any time has no effect. When either of the PRSSTAT[CIHB] and PRSSTAT[CDIHB] bits are set, writing 1 to this bit is ignored, that is, when command line or data lines are active, write to this bit is not allowed. On the otherhand, when this bit is set, that is, during intialization active period, it is allowed to issue command, and the command bit stream will appear on the CMD pad after all 80 clock cycles are done. So when this bit is set, the driver can make sure the 80 clock cycles are sent out. This is very useful when the driver needs send 80 cycles to the card and does not want to wait till this bit is self-cleared.
#define RSTD                          0x04000000      // Only part of the data circuit is reset. DMA circuit is also reset. The following registers and bits are cleared by this bit: Data Port register Buffer Is Cleared And Initialized.Present State register Buffer Read Enable Buffer Write Enable Read Transfer Active Write Transfer Active DAT Line Active Command Inhibit (DAT) Protocol Control register Continue Request Stop At Block Gap Request Interrupt Status register Buffer Read Ready Buffer Write Ready DMA Interrupt Block Gap Event Transfer Complete
#define RSTC                          0x02000000      // Only part of the command circuit is reset. The following registers and bits are cleared by this bit: PRSSTAT[CIHB] IRQSTAT[CC]
#define RSTA                          0x01000000      // Effects the entire host controller except for the card detection circuit. Register bits of type ROC, RW, RW1C, RWAC are cleared. During its initialization, the host driver shall set this bit to 1 to reset the SDHC. The SDHC shall reset this bit to 0 when the capabilities registers are valid and the host driver can read them. Additional use of software reset for all does not affect the value of the capabilities registers. After this bit is set, it is recommended that the host driver reset the external card and reinitialize it.
#define Reserved                      0x07800000      // This read-only field is reserved and always has the value 0.
#define DTOCV                         0x00780000      // Determines the interval by which DAT line timeouts are detected. See IRQSTAT[DTOE] for information on factors that dictate time-out generation. Time-out clock frequency will be generated by dividing the base clock SDCLK value by this value. The host driver can clear IRQSTATEN[DTOESEN] to prevent inadvertent time-out events.
#define SDCLKFS                       0x007F8000      // Used to select the frequency of the SDCLK pin. The frequency is not programmed directly. Rather this register holds the prescaler (this register) and divisor (next register) of the base clock frequency register. Setting 00h bypasses the frequency prescaler of the SD


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_AC12ERR register.
//
//*****************************************************************************

#define CNIBAC12E                     0x00000080      // Command Not Issued By Auto CMD12 Error
#define Reserved                      0x000000C0      // 
#define AC12IE                        0x00000010      // Auto CMD12 Index Error
#define AC12CE                        0x00000008      // Auto CMD12 CRC Error
#define AC12EBE                       0x00000004      // Auto CMD12 End Bit Error
#define AC12TOE                       0x00000002      // Auto CMD12 Timeout Error
#define AC12NE                        0x00000001      // Auto CMD12 Not Executed


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_HTCAPBLT register.
//
//*****************************************************************************

#define VS33                          0x04000000      // Voltage Support 3.3 V
#define SRS                           0x00800000      // Suspend/Resume Support
#define DMAS                          0x00400000      // DMA Support
#define HSS                           0x00200000      // High Speed Support
#define ADMAS                         0x00100000      // ADMA Support
#define MBL                           0x001C0000      // Max Block Length


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_WML register.
//
//*****************************************************************************

#define WRWML                         0x1F0000000      // Write Watermark Level
#define RDWML                         0x0001F000      // Read Watermark Level


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_FEVT register.
//
//*****************************************************************************

#define CINT                          0x80000000      // Force Event Card Interrupt
#define Reserved                      0xC0000000      // 
#define DMAE                          0x10000000      // Force Event DMA Error
#define Reserved                      0x38000000      // 
#define AC12E                         0x01000000      // Force Event Auto Command 12 Error
#define Reserved                      0x00800000      // 
#define DEBE                          0x00400000      // Force Event Data End Bit Error
#define DCE                           0x00200000      // Force Event Data CRC Error
#define DTOE                          0x00100000      // Force Event Data Time Out Error
#define CIE                           0x00080000      // Force Event Command Index Error
#define CEBE                          0x00040000      // Force Event Command End Bit Error
#define CCE                           0x00020000      // Force Event Command CRC Error
#define CTOE                          0x00010000      // Force Event Command Time Out Error
#define Reserved                      0x007F8000      // 
#define CNIBAC12E                     0x00000080      // Force Event Command Not Executed By Auto Command 12 Error
#define Reserved                      0x000000C0      // 
#define AC12IE                        0x00000010      // Force Event Auto Command 12 Index Error
#define AC12EBE                       0x00000008      // Force Event Auto Command 12 End Bit Error
#define AC12CE                        0x00000004      // Force Event Auto Command 12 CRC Error
#define AC12TOE                       0x00000002      // Force Event Auto Command 12 Time Out Error
#define AC12NE                        0x00000001      // Force Event Auto Command 12 Not Executed


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_ADMAES register.
//
//*****************************************************************************

#define ADMADCE                       0x00000008      // ADMA Descriptor Error
#define ADMALME                       0x00000004      // ADMA Length Mismatch Error
#define ADMAES                        0x00000001      // ADMA Error State (When ADMA Error Is Occurred.)


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_ADSADDR register.
//
//*****************************************************************************

#define ADSADDR                       0x1FFFFFFF80000000      // ADMA System Address


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_VENDOR register.
//
//*****************************************************************************

#define INTSTVAL                      0x30000000      // Internal State Value
#define EXBLKNU                       0x00000002      // Exact Block Number Block Read Enable For SDIO CMD53


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_MMCBOOT register.
//
//*****************************************************************************

#define BOOTBLKCNT                    0x7FFF80000000      // Defines the stop at block gap value of automatic mode. When received card block cnt is equal to BOOTBLKCNT and AUTOSABGEN is 1, then stop at block gap.
#define AUTOSABGEN                    0x00000080      // When boot, enable auto stop at block gap function. This function will be triggered, and host will stop at block gap when received card block cnt is equal to BOOTBLKCNT.
#define BOOTEN                        0x00000040      // Boot Mode Enable
#define BOOTMODE                      0x00000020      // Boot Mode Select
#define BOOTACK                       0x00000010      // Boot Ack Mode Select
#define DTOCVACK                      0x00000001      // Boot ACK Time Out Counter Value


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_HOSTVER register.
//
//*****************************************************************************

#define VVN                           0x007F8000      // Vendor Version Number
#define SVN                           0x00000078      // Specification Version Number



#endif // __MK28FN2M0ACAU15R_H__

