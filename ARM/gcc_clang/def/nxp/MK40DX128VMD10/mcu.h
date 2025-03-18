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

#ifndef __MK40DX128VMD10_H__
#define __MK40DX128VMD10_H__



//*****************************************************************************
//
// Interrupt assignments
//
//*****************************************************************************

#define NUMBER_OF_INT_VECTORS                   0                // Number of interrupts in the Vector table
#define NotAvail_IRQn                           --1               // Not available device specific interrupt



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
#define PORTE_PCR23                   (*((volatile uint32_t *)0x4004D05C))      // Pin Control Register n (PORTE_PCR23)
#define PORTE_PCR24                   (*((volatile uint32_t *)0x4004D060))      // Pin Control Register n (PORTE_PCR24)
#define PORTE_PCR25                   (*((volatile uint32_t *)0x4004D064))      // Pin Control Register n (PORTE_PCR25)
#define PORTE_PCR26                   (*((volatile uint32_t *)0x4004D068))      // Pin Control Register n (PORTE_PCR26)
#define PORTE_PCR27                   (*((volatile uint32_t *)0x4004D06C))      // Pin Control Register n (PORTE_PCR27)
#define PORTE_PCR28                   (*((volatile uint32_t *)0x4004D070))      // Pin Control Register n (PORTE_PCR28)
#define PORTE_PCR29                   (*((volatile uint32_t *)0x4004D074))      // Pin Control Register n (PORTE_PCR29)
#define PORTE_PCR30                   (*((volatile uint32_t *)0x4004D078))      // Pin Control Register n (PORTE_PCR30)
#define PORTE_PCR31                   (*((volatile uint32_t *)0x4004D07C))      // Pin Control Register n (PORTE_PCR31)
#define PORTE_GPCLR                   (*((volatile uint32_t *)0x4004D080))      // Global Pin Control Low Register (PORTE_GPCLR)
#define PORTE_GPCHR                   (*((volatile uint32_t *)0x4004D084))      // Global Pin Control High Register (PORTE_GPCHR)
#define PORTE_ISFR                    (*((volatile uint32_t *)0x4004D0A0))      // Interrupt Status Flag Register (PORTE_ISFR)


//*****************************************************************************
//
// System Integration Module (SIM) registers
//
//*****************************************************************************

#define SIM_SOPT1                     (*((volatile uint32_t *)0x40047000))      // System Options Register 1 (SIM_SOPT1)
#define SIM_SOPT1CFG                  (*((volatile uint32_t *)0x40047004))      // SOPT1 Configuration Register (SIM_SOPT1CFG)
#define SIM_SOPT2                     (*((volatile uint32_t *)0x40048004))      // System Options Register 2 (SIM_SOPT2)
#define SIM_SOPT4                     (*((volatile uint32_t *)0x4004800C))      // System Options Register 4 (SIM_SOPT4)
#define SIM_SOPT5                     (*((volatile uint32_t *)0x40048010))      // System Options Register 5 (SIM_SOPT5)
#define SIM_SOPT7                     (*((volatile uint32_t *)0x40048018))      // System Options Register 7 (SIM_SOPT7)
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


//*****************************************************************************
//
// Reset Control Module (RCM) registers
//
//*****************************************************************************

#define RCM_SRS0                      (*((volatile uint32_t *)0x4007F000))      // System Reset Status Register 0
#define RCM_SRS1                      (*((volatile uint32_t *)0x4007F001))      // System Reset Status Register 1
#define RCM_RPFC                      (*((volatile uint32_t *)0x4007F004))      // Reset Pin Filter Control register
#define RCM_RPFW                      (*((volatile uint32_t *)0x4007F005))      // Reset Pin Filter Width register
#define RCM_MR                        (*((volatile uint32_t *)0x4007F007))      // Mode Register


//*****************************************************************************
//
// System Mode Controller registers
//
//*****************************************************************************

#define SMC_PMPROT                    (*((volatile uint32_t *)0x4007E000))      // Power Mode Protection register (SMC_PMPROT)
#define SMC_PMCTRL                    (*((volatile uint32_t *)0x4007E001))      // Power Mode Control register (SMC_PMCTRL)
#define SMC_VLLSCTRL                  (*((volatile uint32_t *)0x4007E002))      // VLLS Control register (SMC_VLLSCTRL)
#define SMC_PMSTAT                    (*((volatile uint32_t *)0x4007E003))      // Power Mode Status register (SMC_PMSTAT)


//*****************************************************************************
//
// Power Management Controller registers
//
//*****************************************************************************

#define PMC_LVDSC1                    (*((volatile uint32_t *)0x4007D000))      // Low Voltage Detect Status And Control 1 register
#define PMC_LVDSC2                    (*((volatile uint32_t *)0x4007D001))      // Low Voltage Detect Status And Control 2 register
#define PMC_REGSC                     (*((volatile uint32_t *)0x4007D002))      // Regulator Status And Control register


//*****************************************************************************
//
// Low-Leakage Wakeup Unit (LLWU) registers
//
//*****************************************************************************

#define LLWU_PE1                      (*((volatile uint32_t *)0x4007C000))      // LLWU Pin Enable 1 register (LLWU_PE1)
#define LLWU_PE2                      (*((volatile uint32_t *)0x4007C001))      // LLWU Pin Enable 2 register (LLWU_PE2)
#define LLWU_PE3                      (*((volatile uint32_t *)0x4007C002))      // LLWU Pin Enable 3 register (LLWU_PE3)
#define LLWU_PE4                      (*((volatile uint32_t *)0x4007C003))      // LLWU Pin Enable 4 register (LLWU_PE4)
#define LLWU_ME                       (*((volatile uint32_t *)0x4007C004))      // LLWU Module Enable register (LLWU_ME)
#define LLWU_F1                       (*((volatile uint32_t *)0x4007C005))      // LLWU Flag 1 register (LLWU_F1)
#define LLWU_F2                       (*((volatile uint32_t *)0x4007C006))      // LLWU Flag 2 register (LLWU_F2)
#define LLWU_F3                       (*((volatile uint32_t *)0x4007C007))      // LLWU Flag 3 register (LLWU_F3)
#define LLWU_FILT1                    (*((volatile uint32_t *)0x4007C008))      // LLWU Pin Filter 1 register (LLWU_FILT1)
#define LLWU_FILT2                    (*((volatile uint32_t *)0x4007C009))      // LLWU Pin Filter 2 register (LLWU_FILT2)
#define LLWU_RST                      (*((volatile uint32_t *)0x4007C00A))      // LLWU Reset Enable register (LLWU_RST)


//*****************************************************************************
//
// Miscellaneous Control Module (MCM) registers
//
//*****************************************************************************

#define MCM_PLASC                     (*((volatile uint32_t *)0xE0080008))      // Crossbar Switch (AXBS) Slave Configuration
#define MCM_PLAMC                     (*((volatile uint32_t *)0xE008000A))      // Crossbar Switch (AXBS) Master Configuration
#define MCM_CR                        (*((volatile uint32_t *)0xE008000C))      // Control Register
#define MCM_ISR                       (*((volatile uint32_t *)0xE0080010))      // Interrupt Status Register
#define MCM_ETBCC                     (*((volatile uint32_t *)0xE0080014))      // ETB Counter Control register
#define MCM_ETBRL                     (*((volatile uint32_t *)0xE0080018))      // ETB Reload register
#define MCM_ETBCNT                    (*((volatile uint32_t *)0xE008001C))      // ETB Counter Value register
#define MCM_PID                       (*((volatile uint32_t *)0xE0080030))      // Process ID register


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
// Memory Protection Unit (MPU) registers
//
//*****************************************************************************

#define MPU_CESR                      (*((volatile uint32_t *)0x4000D000))      // Control/Error Status Register (MPU_CESR)
#define MPU_EAR0                      (*((volatile uint32_t *)0x4000D010))      // Error  Address Register, slave port n (MPU_EAR0)
#define MPU_EDR0                      (*((volatile uint32_t *)0x4000D014))      // Error  Detail Register, slave port n (MPU_EDR0)
#define MPU_EAR1                      (*((volatile uint32_t *)0x4000D018))      // Error  Address Register, slave port n (MPU_EAR1)
#define MPU_EDR1                      (*((volatile uint32_t *)0x4000D01C))      // Error  Detail Register, slave port n (MPU_EDR1)
#define MPU_EAR2                      (*((volatile uint32_t *)0x4000D020))      // Error  Address Register, slave port n (MPU_EAR2)
#define MPU_EDR2                      (*((volatile uint32_t *)0x4000D024))      // Error  Detail Register, slave port n (MPU_EDR2)
#define MPU_EAR3                      (*((volatile uint32_t *)0x4000D028))      // Error  Address Register, slave port n (MPU_EAR3)
#define MPU_EDR3                      (*((volatile uint32_t *)0x4000D02C))      // Error  Detail Register, slave port n (MPU_EDR3)
#define MPU_EAR4                      (*((volatile uint32_t *)0x4000D030))      // Error  Address Register, slave port n (MPU_EAR4)
#define MPU_EDR4                      (*((volatile uint32_t *)0x4000D034))      // Error  Detail Register, slave port n (MPU_EDR4)
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


//*****************************************************************************
//
// Peripheral Bridge (AIPS-Lite) registers
//
//*****************************************************************************

#define AIPS0_MPRA                    (*((volatile uint32_t *)0x40000000))      // Master Privilege Register A
#define AIPS0_PACRA                   (*((volatile uint32_t *)0x40000020))      // Peripheral Access Control Register
#define AIPS0_PACRB                   (*((volatile uint32_t *)0x40000024))      // Peripheral Access Control Register
#define AIPS0_PACRC                   (*((volatile uint32_t *)0x40000028))      // Peripheral Access Control Register
#define AIPS0_PACRD                   (*((volatile uint32_t *)0x4000002C))      // Peripheral Access Control Register
#define AIPS0_PACRE                   (*((volatile uint32_t *)0x40000040))      // Peripheral Access Control Register
#define AIPS0_PACRF                   (*((volatile uint32_t *)0x40000044))      // Peripheral Access Control Register
#define AIPS0_PACRG                   (*((volatile uint32_t *)0x40000048))      // Peripheral Access Control Register
#define AIPS0_PACRH                   (*((volatile uint32_t *)0x4000004C))      // Peripheral Access Control Register
#define AIPS0_PACRI                   (*((volatile uint32_t *)0x40000050))      // Peripheral Access Control Register
#define AIPS0_PACRJ                   (*((volatile uint32_t *)0x40000054))      // Peripheral Access Control Register
#define AIPS0_PACRK                   (*((volatile uint32_t *)0x40000058))      // Peripheral Access Control Register
#define AIPS0_PACRL                   (*((volatile uint32_t *)0x4000005C))      // Peripheral Access Control Register
#define AIPS0_PACRM                   (*((volatile uint32_t *)0x40000060))      // Peripheral Access Control Register
#define AIPS0_PACRN                   (*((volatile uint32_t *)0x40000064))      // Peripheral Access Control Register
#define AIPS0_PACRO                   (*((volatile uint32_t *)0x40000068))      // Peripheral Access Control Register
#define AIPS0_PACRP                   (*((volatile uint32_t *)0x4000006C))      // Peripheral Access Control Register
#define AIPS1_MPRA                    (*((volatile uint32_t *)0x40080000))      // Master Privilege Register A
#define AIPS1_PACRA                   (*((volatile uint32_t *)0x40080020))      // Peripheral Access Control Register
#define AIPS1_PACRB                   (*((volatile uint32_t *)0x40080024))      // Peripheral Access Control Register
#define AIPS1_PACRC                   (*((volatile uint32_t *)0x40080028))      // Peripheral Access Control Register
#define AIPS1_PACRD                   (*((volatile uint32_t *)0x4008002C))      // Peripheral Access Control Register
#define AIPS1_PACRE                   (*((volatile uint32_t *)0x40080040))      // Peripheral Access Control Register
#define AIPS1_PACRF                   (*((volatile uint32_t *)0x40080044))      // Peripheral Access Control Register
#define AIPS1_PACRG                   (*((volatile uint32_t *)0x40080048))      // Peripheral Access Control Register
#define AIPS1_PACRH                   (*((volatile uint32_t *)0x4008004C))      // Peripheral Access Control Register
#define AIPS1_PACRI                   (*((volatile uint32_t *)0x40080050))      // Peripheral Access Control Register
#define AIPS1_PACRJ                   (*((volatile uint32_t *)0x40080054))      // Peripheral Access Control Register
#define AIPS1_PACRK                   (*((volatile uint32_t *)0x40080058))      // Peripheral Access Control Register
#define AIPS1_PACRL                   (*((volatile uint32_t *)0x4008005C))      // Peripheral Access Control Register
#define AIPS1_PACRM                   (*((volatile uint32_t *)0x40080060))      // Peripheral Access Control Register
#define AIPS1_PACRN                   (*((volatile uint32_t *)0x40080064))      // Peripheral Access Control Register
#define AIPS1_PACRO                   (*((volatile uint32_t *)0x40080068))      // Peripheral Access Control Register
#define AIPS1_PACRP                   (*((volatile uint32_t *)0x4008006C))      // Peripheral Access Control Register


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
// Direct Memory Access Controller (eDMA) registers
//
//*****************************************************************************

#define DMA_CR                        (*((volatile uint32_t *)0x40008000))      // Control Register (DMA_CR)
#define DMA_ES                        (*((volatile uint32_t *)0x40008004))      // Error Status Register (DMA_ES)
#define DMA_ERQ                       (*((volatile uint32_t *)0x4000800C))      // Enable Request Register (DMA_ERQ)
#define DMA_EEI                       (*((volatile uint32_t *)0x40008014))      // Enable Error Interrupt Register (DMA_EEI)
#define DMA_CEEI                      (*((volatile uint32_t *)0x40008018))      // Clear Enable Error Interrupt Register (DMA_CEEI)
#define DMA_SEEI                      (*((volatile uint32_t *)0x40008019))      // Set Enable Error Interrupt Register (DMA_SEEI)
#define DMA_CERQ                      (*((volatile uint32_t *)0x4000801A))      // Clear Enable Request Register (DMA_CERQ)
#define DMA_SERQ                      (*((volatile uint32_t *)0x4000801B))      // Set Enable Request Register (DMA_SERQ)
#define DMA_CDNE                      (*((volatile uint32_t *)0x4000801C))      // Clear DONE Status Bit Register (DMA_CDNE)
#define DMA_SSRT                      (*((volatile uint32_t *)0x4000801D))      // Set START Bit Register (DMA_SSRT)
#define DMA_CERR                      (*((volatile uint32_t *)0x4000801E))      // Clear Error Register (DMA_CERR)
#define DMA_CINT                      (*((volatile uint32_t *)0x4000801F))      // Clear Interrupt Request Register (DMA_CINT)
#define DMA_INT                       (*((volatile uint32_t *)0x40008024))      // Interrupt Request Register (DMA_INT)
#define DMA_ERR                       (*((volatile uint32_t *)0x4000802C))      // Error Register (DMA_ERR)
#define DMA_HRS                       (*((volatile uint32_t *)0x40008034))      // Hardware Request Status Register (DMA_HRS)
#define DMA_DCHPRI3                   (*((volatile uint32_t *)0x40008100))      // Channel n Priority Register (DMA_DCHPRI3)
#define DMA_DCHPRI2                   (*((volatile uint32_t *)0x40008101))      // Channel n Priority Register (DMA_DCHPRI2)
#define DMA_DCHPRI1                   (*((volatile uint32_t *)0x40008102))      // Channel n Priority Register (DMA_DCHPRI1)
#define DMA_DCHPRI0                   (*((volatile uint32_t *)0x40008103))      // Channel n Priority Register (DMA_DCHPRI0)
#define DMA_DCHPRI7                   (*((volatile uint32_t *)0x40008104))      // Channel n Priority Register (DMA_DCHPRI7)
#define DMA_DCHPRI6                   (*((volatile uint32_t *)0x40008105))      // Channel n Priority Register (DMA_DCHPRI6)
#define DMA_DCHPRI5                   (*((volatile uint32_t *)0x40008106))      // Channel n Priority Register (DMA_DCHPRI5)


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
#define MCG_C10                       (*((volatile uint32_t *)0x4006400F))      // MCG Control 10 Register


//*****************************************************************************
//
// Oscillator (OSC) registers
//
//*****************************************************************************

#define OSC_CR                        (*((volatile uint32_t *)0x40065000))      // OSC Control Register


//*****************************************************************************
//
// Flash Memory Controller (FMC) registers
//
//*****************************************************************************

#define FMC_PFAPR                     (*((volatile uint32_t *)0x4001F000))      // Flash Access Protection Register (FMC_PFAPR)
#define FMC_PFB0CR                    (*((volatile uint32_t *)0x4001F004))      // Flash Bank  0 Control Register (FMC_PFB0CR)
#define FMC_PFB1CR                    (*((volatile uint32_t *)0x4001F008))      // Flash Bank  1 Control Register (FMC_PFB1CR)
#define FMC_TAGVDW0S0                 (*((volatile uint32_t *)0x4001F100))      // Cache Tag   Storage (FMC_TAGVDW0S0)
#define FMC_TAGVDW0S1                 (*((volatile uint32_t *)0x4001F104))      // Cache Tag   Storage (FMC_TAGVDW0S1)
#define FMC_TAGVDW0S2                 (*((volatile uint32_t *)0x4001F108))      // Cache Tag   Storage (FMC_TAGVDW0S2)
#define FMC_TAGVDW0S3                 (*((volatile uint32_t *)0x4001F10C))      // Cache Tag   Storage (FMC_TAGVDW0S3)
#define FMC_TAGVDW0S4                 (*((volatile uint32_t *)0x4001F110))      // Cache Tag   Storage (FMC_TAGVDW0S4)
#define FMC_TAGVDW0S5                 (*((volatile uint32_t *)0x4001F114))      // Cache Tag   Storage (FMC_TAGVDW0S5)
#define FMC_TAGVDW0S6                 (*((volatile uint32_t *)0x4001F118))      // Cache Tag   Storage (FMC_TAGVDW0S6)
#define FMC_TAGVDW0S7                 (*((volatile uint32_t *)0x4001F11C))      // Cache Tag   Storage (FMC_TAGVDW0S7)
#define FMC_TAGVDW1S0                 (*((volatile uint32_t *)0x4001F120))      // Cache Tag   Storage (FMC_TAGVDW1S0)
#define FMC_TAGVDW1S1                 (*((volatile uint32_t *)0x4001F124))      // Cache Tag   Storage (FMC_TAGVDW1S1)


//*****************************************************************************
//
// External Bus Interface (FlexBus) registers
//
//*****************************************************************************

#define FB_CSAR0                      (*((volatile uint32_t *)0x4000C000))      // Chip Select Address Register (FB_CSAR0)
#define FB_CSMR0                      (*((volatile uint32_t *)0x4000C004))      // Chip Select Mask Register (FB_CSMR0)
#define FB_CSCR0                      (*((volatile uint32_t *)0x4000C008))      // Chip Select Control Register (FB_CSCR0)
#define FB_CSAR1                      (*((volatile uint32_t *)0x4000C00C))      // Chip Select Address Register (FB_CSAR1)
#define FB_CSMR1                      (*((volatile uint32_t *)0x4000C010))      // Chip Select Mask Register (FB_CSMR1)
#define FB_CSCR1                      (*((volatile uint32_t *)0x4000C014))      // Chip Select Control Register (FB_CSCR1)
#define FB_CSAR2                      (*((volatile uint32_t *)0x4000C018))      // Chip Select Address Register (FB_CSAR2)
#define FB_CSMR2                      (*((volatile uint32_t *)0x4000C01C))      // Chip Select Mask Register (FB_CSMR2)
#define FB_CSCR2                      (*((volatile uint32_t *)0x4000C020))      // Chip Select Control Register (FB_CSCR2)
#define FB_CSAR3                      (*((volatile uint32_t *)0x4000C024))      // Chip Select Address Register (FB_CSAR3)
#define FB_CSMR3                      (*((volatile uint32_t *)0x4000C028))      // Chip Select Mask Register (FB_CSMR3)
#define FB_CSCR3                      (*((volatile uint32_t *)0x4000C02C))      // Chip Select Control Register (FB_CSCR3)
#define FB_CSAR4                      (*((volatile uint32_t *)0x4000C030))      // Chip Select Address Register (FB_CSAR4)
#define FB_CSMR4                      (*((volatile uint32_t *)0x4000C034))      // Chip Select Mask Register (FB_CSMR4)
#define FB_CSCR4                      (*((volatile uint32_t *)0x4000C038))      // Chip Select Control Register (FB_CSCR4)
#define FB_CSAR5                      (*((volatile uint32_t *)0x4000C03C))      // Chip Select Address Register (FB_CSAR5)
#define FB_CSMR5                      (*((volatile uint32_t *)0x4000C040))      // Chip Select Mask Register (FB_CSMR5)
#define FB_CSCR5                      (*((volatile uint32_t *)0x4000C044))      // Chip Select Control Register (FB_CSCR5)
#define FB_CSPMCR                     (*((volatile uint32_t *)0x4000C060))      // Chip Select port Multiplexing Control Register (FB_CSPMCR)


//*****************************************************************************
//
// Cyclic Redundancy Check (CRC) registers
//
//*****************************************************************************

#define CRC_CRC                       (*((volatile uint32_t *)0x40032000))      // CRC Data register
#define CRC_GPOLY                     (*((volatile uint32_t *)0x40032004))      // CRC Polynomial register
#define CRC_CTRL                      (*((volatile uint32_t *)0x40032008))      // CRC Control register


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
#define ADC0_CLPD                     (*((volatile uint32_t *)0x4003B034))      // ADC Plus-Side  General  Calibration  Value  Register (ADC0_CLPD)
#define ADC0_CLPS                     (*((volatile uint32_t *)0x4003B038))      // ADC Plus-Side  General  Calibration  Value  Register (ADC0_CLPS)
#define ADC0_CLP4                     (*((volatile uint32_t *)0x4003B03C))      // ADC Plus-Side  General  Calibration  Value  Register (ADC0_CLP4)
#define ADC0_CLP3                     (*((volatile uint32_t *)0x4003B040))      // ADC Plus-Side  General  Calibration  Value  Register (ADC0_CLP3)
#define ADC0_CLP2                     (*((volatile uint32_t *)0x4003B044))      // ADC Plus-Side  General  Calibration  Value  Register (ADC0_CLP2)
#define ADC0_CLP1                     (*((volatile uint32_t *)0x4003B048))      // ADC Plus-Side  General  Calibration  Value  Register (ADC0_CLP1)
#define ADC0_CLP0                     (*((volatile uint32_t *)0x4003B04C))      // ADC Plus-Side  General  Calibration  Value  Register (ADC0_CLP0)
#define ADC0_PGA                      (*((volatile uint32_t *)0x4003B050))      // ADC PGA Register (ADC0_PGA)
#define ADC0_CLMD                     (*((volatile uint32_t *)0x4003B054))      // ADC Minus-Side  General  Calibration  Value  Register (ADC0_CLMD)
#define ADC0_CLMS                     (*((volatile uint32_t *)0x4003B058))      // ADC Minus-Side  General  Calibration  Value  Register (ADC0_CLMS)
#define ADC0_CLM4                     (*((volatile uint32_t *)0x4003B05C))      // ADC Minus-Side  General  Calibration  Value  Register (ADC0_CLM4)
#define ADC0_CLM3                     (*((volatile uint32_t *)0x4003B060))      // ADC Minus-Side  General  Calibration  Value  Register (ADC0_CLM3)
#define ADC0_CLM2                     (*((volatile uint32_t *)0x4003B064))      // ADC Minus-Side  General  Calibration  Value  Register (ADC0_CLM2)
#define ADC0_CLM1                     (*((volatile uint32_t *)0x4003B068))      // ADC Minus-Side  General  Calibration  Value  Register (ADC0_CLM1)
#define ADC0_CLM0                     (*((volatile uint32_t *)0x4003B06C))      // ADC Minus-Side  General  Calibration  Value  Register (ADC0_CLM0)
#define ADC1_SC1A                     (*((volatile uint32_t *)0x400BB000))      // ADC Status and Control Registers 1 (ADC1_SC1A)
#define ADC1_SC1B                     (*((volatile uint32_t *)0x400BB004))      // ADC Status and Control Registers 1 (ADC1_SC1B)
#define ADC1_CFG1                     (*((volatile uint32_t *)0x400BB008))      // ADC Configuration Register 1 (ADC1_CFG1)
#define ADC1_CFG2                     (*((volatile uint32_t *)0x400BB00C))      // ADC Configuration Register 2 (ADC1_CFG2)
#define ADC1_RA                       (*((volatile uint32_t *)0x400BB010))      // ADC Data Result Register (ADC1_RA)
#define ADC1_RB                       (*((volatile uint32_t *)0x400BB014))      // ADC Data Result Register (ADC1_RB)
#define ADC1_CV1                      (*((volatile uint32_t *)0x400BB018))      // Compare Value Registers (ADC1_CV1)
#define ADC1_CV2                      (*((volatile uint32_t *)0x400BB01C))      // Compare Value Registers (ADC1_CV2)
#define ADC1_SC2                      (*((volatile uint32_t *)0x400BB020))      // Status and Control Register 2 (ADC1_SC2)
#define ADC1_SC3                      (*((volatile uint32_t *)0x400BB024))      // Status and Control Register 3 (ADC1_SC3)
#define ADC1_OFS                      (*((volatile uint32_t *)0x400BB028))      // ADC Offset Correction Register (ADC1_OFS)
#define ADC1_PG                       (*((volatile uint32_t *)0x400BB02C))      // ADC Plus-Side Gain Register (ADC1_PG)
#define ADC1_MG                       (*((volatile uint32_t *)0x400BB030))      // ADC Minus-Side Gain Register (ADC1_MG)
#define ADC1_CLPD                     (*((volatile uint32_t *)0x400BB034))      // ADC Plus-Side  General  Calibration  Value  Register (ADC1_CLPD)
#define ADC1_CLPS                     (*((volatile uint32_t *)0x400BB038))      // ADC Plus-Side  General  Calibration  Value  Register (ADC1_CLPS)
#define ADC1_CLP4                     (*((volatile uint32_t *)0x400BB03C))      // ADC Plus-Side  General  Calibration  Value  Register (ADC1_CLP4)
#define ADC1_CLP3                     (*((volatile uint32_t *)0x400BB040))      // ADC Plus-Side  General  Calibration  Value  Register (ADC1_CLP3)
#define ADC1_CLP2                     (*((volatile uint32_t *)0x400BB044))      // ADC Plus-Side  General  Calibration  Value  Register (ADC1_CLP2)
#define ADC1_CLP1                     (*((volatile uint32_t *)0x400BB048))      // ADC Plus-Side  General  Calibration  Value  Register (ADC1_CLP1)
#define ADC1_CLP0                     (*((volatile uint32_t *)0x400BB04C))      // ADC Plus-Side  General  Calibration  Value  Register (ADC1_CLP0)
#define ADC1_PGA                      (*((volatile uint32_t *)0x400BB050))      // ADC PGA Register (ADC1_PGA)
#define ADC1_CLMD                     (*((volatile uint32_t *)0x400BB054))      // ADC Minus-Side  General  Calibration  Value  Register (ADC1_CLMD)
#define ADC1_CLMS                     (*((volatile uint32_t *)0x400BB058))      // ADC Minus-Side  General  Calibration  Value  Register (ADC1_CLMS)
#define ADC1_CLM4                     (*((volatile uint32_t *)0x400BB05C))      // ADC Minus-Side  General  Calibration  Value  Register (ADC1_CLM4)
#define ADC1_CLM3                     (*((volatile uint32_t *)0x400BB060))      // ADC Minus-Side  General  Calibration  Value  Register (ADC1_CLM3)
#define ADC1_CLM2                     (*((volatile uint32_t *)0x400BB064))      // ADC Minus-Side  General  Calibration  Value  Register (ADC1_CLM2)
#define ADC1_CLM1                     (*((volatile uint32_t *)0x400BB068))      // ADC Minus-Side  General  Calibration  Value  Register (ADC1_CLM1)
#define ADC1_CLM0                     (*((volatile uint32_t *)0x400BB06C))      // ADC Minus-Side  General  Calibration  Value  Register (ADC1_CLM0)


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


//*****************************************************************************
//
// 12-bit Digital-to-Analog Converter (DAC) registers
//
//*****************************************************************************

#define DAC0_DAT0L                    (*((volatile uint32_t *)0x400CC000))      // DAC Data Low Register
#define DAC0_DATH                     (*((volatile uint32_t *)0x400CC001))      // DAC Data High Register
#define DAC0_DAT1L                    (*((volatile uint32_t *)0x400CC002))      // DAC Data Low Register
#define DAC0_DAT2L                    (*((volatile uint32_t *)0x400CC004))      // DAC Data Low Register
#define DAC0_DAT3L                    (*((volatile uint32_t *)0x400CC006))      // DAC Data Low Register
#define DAC0_DAT4L                    (*((volatile uint32_t *)0x400CC008))      // DAC Data Low Register
#define DAC0_DAT5L                    (*((volatile uint32_t *)0x400CC00A))      // DAC Data Low Register
#define DAC0_DAT6L                    (*((volatile uint32_t *)0x400CC00C))      // DAC Data Low Register
#define DAC0_DAT7L                    (*((volatile uint32_t *)0x400CC00E))      // DAC Data Low Register
#define DAC0_DAT8L                    (*((volatile uint32_t *)0x400CC010))      // DAC Data Low Register
#define DAC0_DAT9L                    (*((volatile uint32_t *)0x400CC012))      // DAC Data Low Register
#define DAC0_DAT10L                   (*((volatile uint32_t *)0x400CC014))      // DAC Data Low Register
#define DAC0_DAT11L                   (*((volatile uint32_t *)0x400CC016))      // DAC Data Low Register
#define DAC0_DAT12L                   (*((volatile uint32_t *)0x400CC018))      // DAC Data Low Register
#define DAC0_DAT13L                   (*((volatile uint32_t *)0x400CC01A))      // DAC Data Low Register
#define DAC0_DAT14L                   (*((volatile uint32_t *)0x400CC01C))      // DAC Data Low Register
#define DAC0_DAT15L                   (*((volatile uint32_t *)0x400CC01E))      // DAC Data Low Register
#define DAC0_SR                       (*((volatile uint32_t *)0x400CC020))      // DAC Status Register
#define DAC0_C0                       (*((volatile uint32_t *)0x400CC021))      // DAC Control Register
#define DAC0_C1                       (*((volatile uint32_t *)0x400CC022))      // DAC Control Register 1
#define DAC0_C2                       (*((volatile uint32_t *)0x400CC023))      // DAC Control Register 2
#define DAC1_DAT0L                    (*((volatile uint32_t *)0x400CD000))      // DAC Data Low Register
#define DAC1_DATH                     (*((volatile uint32_t *)0x400CD001))      // DAC Data High Register
#define DAC1_DAT1L                    (*((volatile uint32_t *)0x400CD002))      // DAC Data Low Register
#define DAC1_DAT2L                    (*((volatile uint32_t *)0x400CD004))      // DAC Data Low Register
#define DAC1_DAT3L                    (*((volatile uint32_t *)0x400CD006))      // DAC Data Low Register
#define DAC1_DAT4L                    (*((volatile uint32_t *)0x400CD008))      // DAC Data Low Register
#define DAC1_DAT5L                    (*((volatile uint32_t *)0x400CD00A))      // DAC Data Low Register
#define DAC1_DAT6L                    (*((volatile uint32_t *)0x400CD00C))      // DAC Data Low Register
#define DAC1_DAT7L                    (*((volatile uint32_t *)0x400CD00E))      // DAC Data Low Register
#define DAC1_DAT8L                    (*((volatile uint32_t *)0x400CD010))      // DAC Data Low Register
#define DAC1_DAT9L                    (*((volatile uint32_t *)0x400CD012))      // DAC Data Low Register
#define DAC1_DAT10L                   (*((volatile uint32_t *)0x400CD014))      // DAC Data Low Register
#define DAC1_DAT11L                   (*((volatile uint32_t *)0x400CD016))      // DAC Data Low Register
#define DAC1_DAT12L                   (*((volatile uint32_t *)0x400CD018))      // DAC Data Low Register
#define DAC1_DAT13L                   (*((volatile uint32_t *)0x400CD01A))      // DAC Data Low Register
#define DAC1_DAT14L                   (*((volatile uint32_t *)0x400CD01C))      // DAC Data Low Register
#define DAC1_DAT15L                   (*((volatile uint32_t *)0x400CD01E))      // DAC Data Low Register
#define DAC1_SR                       (*((volatile uint32_t *)0x400CD020))      // DAC Status Register
#define DAC1_C0                       (*((volatile uint32_t *)0x400CD021))      // DAC Control Register
#define DAC1_C1                       (*((volatile uint32_t *)0x400CD022))      // DAC Control Register 1
#define DAC1_C2                       (*((volatile uint32_t *)0x400CD023))      // DAC Control Register 2


//*****************************************************************************
//
// Voltage Reference (VREFV1) registers
//
//*****************************************************************************

#define VREF_TRM                      (*((volatile uint32_t *)0x40074000))      // VREF Trim Register (VREF_TRM)
#define VREF_SC                       (*((volatile uint32_t *)0x40074001))      // VREF Status and Control Register (VREF_SC)


//*****************************************************************************
//
// Programmable Delay Block (PDB) registers
//
//*****************************************************************************

#define PDB0_SC                       (*((volatile uint32_t *)0x40036000))      // Status and Control Register (PDB0_SC)
#define PDB0_MOD                      (*((volatile uint32_t *)0x40036004))      // Modulus Register (PDB0_MOD)
#define PDB0_CNT                      (*((volatile uint32_t *)0x40036008))      // Counter Register (PDB0_CNT)
#define PDB0_IDLY                     (*((volatile uint32_t *)0x4003600C))      // Interrupt Delay Register (PDB0_IDLY)
#define PDB0_CH0C1                    (*((volatile uint32_t *)0x40036010))      // Channel n Control Register 1 (PDB0_CH0C1)
#define PDB0_CH0S                     (*((volatile uint32_t *)0x40036014))      // Channel n Status Register (PDB0_CH0S)
#define PDB0_CH0DLY0                  (*((volatile uint32_t *)0x40036018))      // Channel n Delay 0 Register (PDB0_CH0DLY0)
#define PDB0_CH0DLY1                  (*((volatile uint32_t *)0x4003601C))      // Channel n Delay 1 Register (PDB0_CH0DLY1)
#define PDB0_CH1C1                    (*((volatile uint32_t *)0x40036038))      // Channel n Control Register 1 (PDB0_CH1C1)
#define PDB0_CH1S                     (*((volatile uint32_t *)0x4003603C))      // Channel n Status Register (PDB0_CH1S)
#define PDB0_CH1DLY0                  (*((volatile uint32_t *)0x40036040))      // Channel n Delay 0 Register (PDB0_CH1DLY0)
#define PDB0_CH1DLY1                  (*((volatile uint32_t *)0x40036044))      // Channel n Delay 1 Register (PDB0_CH1DLY1)
#define PDB0_DACINTC0                 (*((volatile uint32_t *)0x40036150))      // DAC Interval Trigger n Control Register (PDB0_DACINTC0)
#define PDB0_DACINT0                  (*((volatile uint32_t *)0x40036154))      // DAC Interval n Register (PDB0_DACINT0)
#define PDB0_DACINTC1                 (*((volatile uint32_t *)0x40036158))      // DAC Interval Trigger n Control Register (PDB0_DACINTC1)
#define PDB0_DACINT1                  (*((volatile uint32_t *)0x4003615C))      // DAC Interval n Register (PDB0_DACINT1)
#define PDB0_POEN                     (*((volatile uint32_t *)0x40036190))      // Pulse-Out n Enable Register (PDB0_POEN)
#define PDB0_PO0DLY                   (*((volatile uint32_t *)0x40036194))      // Pulse-Out n Delay Register (PDB0_PO0DLY)
#define PDB0_PO1DLY                   (*((volatile uint32_t *)0x40036198))      // Pulse-Out n Delay Register (PDB0_PO1DLY)
#define PDB0_PO2DLY                   (*((volatile uint32_t *)0x4003619C))      // Pulse-Out n Delay Register (PDB0_PO2DLY)


//*****************************************************************************
//
// FlexTimer Module (FTM) registers
//
//*****************************************************************************

#define FTM_SC                        (*((volatile uint32_t *)0x40038000))      // Status And Control
#define FTM_CNT                       (*((volatile uint32_t *)0x40038004))      // Counter
#define FTM_MOD                       (*((volatile uint32_t *)0x40038008))      // Modulo
#define FTM_C0SC                      (*((volatile uint32_t *)0x4003800C))      // Channel (n) Status And Control
#define FTM_C0V                       (*((volatile uint32_t *)0x40038010))      // Channel (n) Value
#define FTM_C1SC                      (*((volatile uint32_t *)0x40038014))      // Channel (n) Status And Control
#define FTM_C1V                       (*((volatile uint32_t *)0x40038018))      // Channel (n) Value
#define FTM_C2SC                      (*((volatile uint32_t *)0x4003801C))      // Channel (n) Status And Control
#define FTM_C2V                       (*((volatile uint32_t *)0x40038020))      // Channel (n) Value
#define FTM_C3SC                      (*((volatile uint32_t *)0x40038024))      // Channel (n) Status And Control
#define FTM_C3V                       (*((volatile uint32_t *)0x40038028))      // Channel (n) Value
#define FTM_C4SC                      (*((volatile uint32_t *)0x4003802C))      // Channel (n) Status And Control
#define FTM_C4V                       (*((volatile uint32_t *)0x40038030))      // Channel (n) Value


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
// Low-Power Timer (LPTMR) registers
//
//*****************************************************************************

#define LPTMR0_CSR                    (*((volatile uint32_t *)0x40040000))      // Low Power Timer Control Status Register (LPTMR0_CSR)
#define LPTMR0_PSR                    (*((volatile uint32_t *)0x40040004))      // Low Power Timer Prescale Register (LPTMR0_PSR)
#define LPTMR0_CMR                    (*((volatile uint32_t *)0x40040008))      // Low Power Timer Compare Register (LPTMR0_CMR)
#define LPTMR0_CNR                    (*((volatile uint32_t *)0x4004000C))      // Low Power Timer Counter Register (LPTMR0_CNR)


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
// Real Time Clock (RTC) registers
//
//*****************************************************************************

#define RTC_TSR                       (*((volatile uint32_t *)0x4003D000))      // RTC Time Seconds Register (RTC_TSR)
#define RTC_TPR                       (*((volatile uint32_t *)0x4003D004))      // RTC Time Prescaler Register (RTC_TPR)
#define RTC_TAR                       (*((volatile uint32_t *)0x4003D008))      // RTC Time Alarm Register (RTC_TAR)
#define RTC_TCR                       (*((volatile uint32_t *)0x4003D00C))      // RTC Time Compensation Register (RTC_TCR)
#define RTC_CR                        (*((volatile uint32_t *)0x4003D010))      // RTC Control Register (RTC_CR)
#define RTC_SR                        (*((volatile uint32_t *)0x4003D014))      // RTC Status Register (RTC_SR)
#define RTC_LR                        (*((volatile uint32_t *)0x4003D018))      // RTC Lock Register (RTC_LR)
#define RTC_IER                       (*((volatile uint32_t *)0x4003D01C))      // RTC Interrupt Enable Register (RTC_IER)
#define RTC_WAR                       (*((volatile uint32_t *)0x4003D800))      // RTC Write Access Register (RTC_WAR)
#define RTC_RAR                       (*((volatile uint32_t *)0x4003D804))      // RTC Read Access Register (RTC_RAR)


//*****************************************************************************
//
// Universal Serial Bus OTG Controller (USBOTG) registers
//
//*****************************************************************************

#define USB0_PERID                    (*((volatile uint32_t *)0x40072000))      // Peripheral ID register (USB0_PERID)
#define USB0_IDCOMP                   (*((volatile uint32_t *)0x40072004))      // Peripheral ID Complement register (USB0_IDCOMP)
#define USB0_REV                      (*((volatile uint32_t *)0x40072008))      // Peripheral Revision register (USB0_REV)
#define USB0_ADDINFO                  (*((volatile uint32_t *)0x4007200C))      // Peripheral Additional Info register (USB0_ADDINFO)
#define USB0_OTGISTAT                 (*((volatile uint32_t *)0x40072010))      // OTG Interrupt Status register (USB0_OTGISTAT)
#define USB0_OTGICR                   (*((volatile uint32_t *)0x40072014))      // OTG Interrupt Control Register (USB0_OTGICR)
#define USB0_OTGSTAT                  (*((volatile uint32_t *)0x40072018))      // OTG Status register (USB0_OTGSTAT)
#define USB0_OTGCTL                   (*((volatile uint32_t *)0x4007201C))      // OTG Control register (USB0_OTGCTL)
#define USB0_ISTAT                    (*((volatile uint32_t *)0x40072080))      // Interrupt Status register (USB0_ISTAT)
#define USB0_INTEN                    (*((volatile uint32_t *)0x40072084))      // Interrupt Enable register (USB0_INTEN)
#define USB0_ERRSTAT                  (*((volatile uint32_t *)0x40072088))      // Error Interrupt Status register (USB0_ERRSTAT)
#define USB0_ERREN                    (*((volatile uint32_t *)0x4007208C))      // Error Interrupt Enable register (USB0_ERREN)
#define USB0_STAT                     (*((volatile uint32_t *)0x40072090))      // Status register (USB0_STAT)
#define USB0_CTL                      (*((volatile uint32_t *)0x40072094))      // Control register (USB0_CTL)
#define USB0_ADDR                     (*((volatile uint32_t *)0x40072098))      // Address register (USB0_ADDR)
#define USB0_BDTPAGE1                 (*((volatile uint32_t *)0x4007209C))      // BDT Page Register 1 (USB0_BDTPAGE1)
#define USB0_FRMNUML                  (*((volatile uint32_t *)0x400720A0))      // Frame Number Register Low (USB0_FRMNUML)
#define USB0_FRMNUMH                  (*((volatile uint32_t *)0x400720A4))      // Frame Number Register High (USB0_FRMNUMH)
#define USB0_TOKEN                    (*((volatile uint32_t *)0x400720A8))      // Token register (USB0_TOKEN)
#define USB0_SOFTHLD                  (*((volatile uint32_t *)0x400720AC))      // SOF Threshold Register (USB0_SOFTHLD)
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
#define USB0_USBTRC0                  (*((volatile uint32_t *)0x4007210C))      // USB Transceiver Control Register 0 (USB0_USBTRC0)
#define USB0_USBFRMADJUST             (*((volatile uint32_t *)0x40072114))      // Frame Adjust Register (USB0_USBFRMADJUST)


//*****************************************************************************
//
// USB Device Charger Detection Module (USBDCD) registers
//
//*****************************************************************************

#define USBDCD_CONTROL                (*((volatile uint32_t *)0x40035000))      // Control register
#define USBDCD_CLOCK                  (*((volatile uint32_t *)0x40035004))      // Clock register
#define USBDCD_STATUS                 (*((volatile uint32_t *)0x40035008))      // Status register
#define USBDCD_TIMER0                 (*((volatile uint32_t *)0x40035010))      // TIMER0 register
#define USBDCD_TIMER1                 (*((volatile uint32_t *)0x40035014))      // TIMER1 register
#define USBDCD_TIMER2                 (*((volatile uint32_t *)0x40035018))      // TIMER2 register


//*****************************************************************************
//
// CAN (FlexCAN) registers
//
//*****************************************************************************

#define MCR                           (*((volatile uint32_t *)0x40024000))      // Module Configuration Register (CAN0_MCR)
#define CTRL1                         (*((volatile uint32_t *)0x40024004))      // Control 1 register (CAN0_CTRL1)
#define TIMER                         (*((volatile uint32_t *)0x40024008))      // Free Running Timer (CAN0_TIMER)
#define RXMGMASK                      (*((volatile uint32_t *)0x40024010))      // Rx Mailboxes Global Mask Register (CAN0_RXMGMASK)
#define RX14MASK                      (*((volatile uint32_t *)0x40024014))      // Rx 14 Mask register (CAN0_RX14MASK)
#define RX15MASK                      (*((volatile uint32_t *)0x40024018))      // Rx 15 Mask register (CAN0_RX15MASK)
#define ECR                           (*((volatile uint32_t *)0x4002401C))      // Error Counter (CAN0_ECR)
#define ESR1                          (*((volatile uint32_t *)0x40024020))      // Error and Status 1 register (CAN0_ESR1)
#define IMASK2                        (*((volatile uint32_t *)0x40024028))      // Interrupt Masks 2 register (CAN0_IMASK2)
#define IFLAG2                        (*((volatile uint32_t *)0x40024030))      // Interrupt Flags 2 register (CAN0_IFLAG2)
#define CTRL2                         (*((volatile uint32_t *)0x40024034))      // Control 2 register (CAN0_CTRL2)
#define ESR2                          (*((volatile uint32_t *)0x40024038))      // Error and Status 2 register (CAN0_ESR2)
#define CRCR                          (*((volatile uint32_t *)0x40024044))      // CRC Register (CAN0_CRCR)
#define RXFGMASK                      (*((volatile uint32_t *)0x40024048))      // Rx FIFO Global Mask register (CAN0_RXFGMASK)
#define RXFIR                         (*((volatile uint32_t *)0x4002404C))      // Rx FIFO Information Register (CAN0_RXFIR)
#define RXIMR0                        (*((volatile uint32_t *)0x40024880))      // Rx Individual Mask Registers (CAN0_RXIMR0)
#define RXIMR1                        (*((volatile uint32_t *)0x40024884))      // Rx Individual Mask Registers (CAN0_RXIMR1)
#define RXIMR2                        (*((volatile uint32_t *)0x40024888))      // Rx Individual Mask Registers (CAN0_RXIMR2)
#define RXIMR3                        (*((volatile uint32_t *)0x4002488C))      // Rx Individual Mask Registers (CAN0_RXIMR3)
#define RXIMR4                        (*((volatile uint32_t *)0x40024890))      // Rx Individual Mask Registers (CAN0_RXIMR4)
#define RXIMR5                        (*((volatile uint32_t *)0x40024894))      // Rx Individual Mask Registers (CAN0_RXIMR5)
#define RXIMR6                        (*((volatile uint32_t *)0x40024898))      // Rx Individual Mask Registers (CAN0_RXIMR6)
#define RXIMR7                        (*((volatile uint32_t *)0x4002489C))      // Rx Individual Mask Registers (CAN0_RXIMR7)
#define RXIMR8                        (*((volatile uint32_t *)0x400248A0))      // Rx Individual Mask Registers (CAN0_RXIMR8)
#define RXIMR9                        (*((volatile uint32_t *)0x400248A4))      // Rx Individual Mask Registers (CAN0_RXIMR9)
#define RXIMR10                       (*((volatile uint32_t *)0x400248A8))      // Rx Individual Mask Registers (CAN0_RXIMR10)
#define RXIMR11                       (*((volatile uint32_t *)0x400248AC))      // Rx Individual Mask Registers (CAN0_RXIMR11)
#define RXIMR12                       (*((volatile uint32_t *)0x400248B0))      // Rx Individual Mask Registers (CAN0_RXIMR12)
#define RXIMR13                       (*((volatile uint32_t *)0x400248B4))      // Rx Individual Mask Registers (CAN0_RXIMR13)
#define RXIMR14                       (*((volatile uint32_t *)0x400248B8))      // Rx Individual Mask Registers (CAN0_RXIMR14)
#define RXIMR15                       (*((volatile uint32_t *)0x400248BC))      // Rx Individual Mask Registers (CAN0_RXIMR15)
#define MCR                           (*((volatile uint32_t *)0x400A4000))      // Module Configuration Register (CAN1_MCR)
#define CTRL1                         (*((volatile uint32_t *)0x400A4004))      // Control 1 register (CAN1_CTRL1)
#define TIMER                         (*((volatile uint32_t *)0x400A4008))      // Free Running Timer (CAN1_TIMER)
#define RXMGMASK                      (*((volatile uint32_t *)0x400A4010))      // Rx Mailboxes Global Mask Register (CAN1_RXMGMASK)
#define RX14MASK                      (*((volatile uint32_t *)0x400A4014))      // Rx 14 Mask register (CAN1_RX14MASK)
#define RX15MASK                      (*((volatile uint32_t *)0x400A4018))      // Rx 15 Mask register (CAN1_RX15MASK)
#define ECR                           (*((volatile uint32_t *)0x400A401C))      // Error Counter (CAN1_ECR)
#define ESR1                          (*((volatile uint32_t *)0x400A4020))      // Error and Status 1 register (CAN1_ESR1)
#define IMASK2                        (*((volatile uint32_t *)0x400A4028))      // Interrupt Masks 2 register (CAN1_IMASK2)
#define IFLAG2                        (*((volatile uint32_t *)0x400A4030))      // Interrupt Flags 2 register (CAN1_IFLAG2)
#define CTRL2                         (*((volatile uint32_t *)0x400A4034))      // Control 2 register (CAN1_CTRL2)
#define ESR2                          (*((volatile uint32_t *)0x400A4038))      // Error and Status 2 register (CAN1_ESR2)
#define CRCR                          (*((volatile uint32_t *)0x400A4044))      // CRC Register (CAN1_CRCR)
#define RXFGMASK                      (*((volatile uint32_t *)0x400A4048))      // Rx FIFO Global Mask register (CAN1_RXFGMASK)
#define RXFIR                         (*((volatile uint32_t *)0x400A404C))      // Rx FIFO Information Register (CAN1_RXFIR)
#define RXIMR0                        (*((volatile uint32_t *)0x400A4880))      // Rx Individual Mask Registers (CAN1_RXIMR0)
#define RXIMR1                        (*((volatile uint32_t *)0x400A4884))      // Rx Individual Mask Registers (CAN1_RXIMR1)
#define RXIMR2                        (*((volatile uint32_t *)0x400A4888))      // Rx Individual Mask Registers (CAN1_RXIMR2)
#define RXIMR3                        (*((volatile uint32_t *)0x400A488C))      // Rx Individual Mask Registers (CAN1_RXIMR3)
#define RXIMR4                        (*((volatile uint32_t *)0x400A4890))      // Rx Individual Mask Registers (CAN1_RXIMR4)
#define RXIMR5                        (*((volatile uint32_t *)0x400A4894))      // Rx Individual Mask Registers (CAN1_RXIMR5)
#define RXIMR6                        (*((volatile uint32_t *)0x400A4898))      // Rx Individual Mask Registers (CAN1_RXIMR6)
#define RXIMR7                        (*((volatile uint32_t *)0x400A489C))      // Rx Individual Mask Registers (CAN1_RXIMR7)
#define RXIMR8                        (*((volatile uint32_t *)0x400A48A0))      // Rx Individual Mask Registers (CAN1_RXIMR8)
#define RXIMR9                        (*((volatile uint32_t *)0x400A48A4))      // Rx Individual Mask Registers (CAN1_RXIMR9)
#define RXIMR10                       (*((volatile uint32_t *)0x400A48A8))      // Rx Individual Mask Registers (CAN1_RXIMR10)
#define RXIMR11                       (*((volatile uint32_t *)0x400A48AC))      // Rx Individual Mask Registers (CAN1_RXIMR11)
#define RXIMR12                       (*((volatile uint32_t *)0x400A48B0))      // Rx Individual Mask Registers (CAN1_RXIMR12)
#define RXIMR13                       (*((volatile uint32_t *)0x400A48B4))      // Rx Individual Mask Registers (CAN1_RXIMR13)
#define RXIMR14                       (*((volatile uint32_t *)0x400A48B8))      // Rx Individual Mask Registers (CAN1_RXIMR14)
#define RXIMR15                       (*((volatile uint32_t *)0x400A48BC))      // Rx Individual Mask Registers (CAN1_RXIMR15)


//*****************************************************************************
//
// Serial Peripheral Interface (SPI) registers
//
//*****************************************************************************

#define SPI0_MCR                      (*((volatile uint32_t *)0x4002C000))      // Module Configuration Register
#define SPI0_TCR                      (*((volatile uint32_t *)0x4002C008))      // Transfer Count Register
#define SPI0_CTAR0                    (*((volatile uint32_t *)0x4002C00C))      // DSPI Clock and Transfer Attributes Register (In Master Mode)
#define SPI0_CTAR1                    (*((volatile uint32_t *)0x4002C010))      // DSPI Clock and Transfer Attributes Register (In Master Mode)
#define SPI0_SR                       (*((volatile uint32_t *)0x4002C02C))      // DSPI Status Register
#define SPI0_RSER                     (*((volatile uint32_t *)0x4002C030))      // DMA/Interrupt Request Select and Enable Register
#define SPI0_PUSHR                    (*((volatile uint32_t *)0x4002C034))      // PUSH TX FIFO Register In Master Mode
#define SPI0_POPR                     (*((volatile uint32_t *)0x4002C038))      // POP RX FIFO Register
#define SPI0_TXFR0                    (*((volatile uint32_t *)0x4002C03C))      // DSPI Transmit FIFO Registers
#define SPI0_TXFR1                    (*((volatile uint32_t *)0x4002C040))      // DSPI Transmit FIFO Registers
#define SPI0_TXFR2                    (*((volatile uint32_t *)0x4002C044))      // DSPI Transmit FIFO Registers
#define SPI0_TXFR3                    (*((volatile uint32_t *)0x4002C048))      // DSPI Transmit FIFO Registers
#define SPI0_RXFR0                    (*((volatile uint32_t *)0x4002C07C))      // DSPI Receive FIFO Registers
#define SPI0_RXFR1                    (*((volatile uint32_t *)0x4002C080))      // DSPI Receive FIFO Registers
#define SPI0_RXFR2                    (*((volatile uint32_t *)0x4002C084))      // DSPI Receive FIFO Registers
#define SPI0_RXFR3                    (*((volatile uint32_t *)0x4002C088))      // DSPI Receive FIFO Registers
#define SPI1_MCR                      (*((volatile uint32_t *)0x4002D000))      // Module Configuration Register
#define SPI1_TCR                      (*((volatile uint32_t *)0x4002D008))      // Transfer Count Register
#define SPI1_CTAR0                    (*((volatile uint32_t *)0x4002D00C))      // DSPI Clock and Transfer Attributes Register (In Master Mode)
#define SPI1_CTAR1                    (*((volatile uint32_t *)0x4002D010))      // DSPI Clock and Transfer Attributes Register (In Master Mode)
#define SPI1_SR                       (*((volatile uint32_t *)0x4002D02C))      // DSPI Status Register
#define SPI1_RSER                     (*((volatile uint32_t *)0x4002D030))      // DMA/Interrupt Request Select and Enable Register
#define SPI1_PUSHR                    (*((volatile uint32_t *)0x4002D034))      // PUSH TX FIFO Register In Master Mode
#define SPI1_POPR                     (*((volatile uint32_t *)0x4002D038))      // POP RX FIFO Register
#define SPI1_TXFR0                    (*((volatile uint32_t *)0x4002D03C))      // DSPI Transmit FIFO Registers
#define SPI1_TXFR1                    (*((volatile uint32_t *)0x4002D040))      // DSPI Transmit FIFO Registers
#define SPI1_TXFR2                    (*((volatile uint32_t *)0x4002D044))      // DSPI Transmit FIFO Registers
#define SPI1_TXFR3                    (*((volatile uint32_t *)0x4002D048))      // DSPI Transmit FIFO Registers
#define SPI1_RXFR0                    (*((volatile uint32_t *)0x4002D07C))      // DSPI Receive FIFO Registers
#define SPI1_RXFR1                    (*((volatile uint32_t *)0x4002D080))      // DSPI Receive FIFO Registers
#define SPI1_RXFR2                    (*((volatile uint32_t *)0x4002D084))      // DSPI Receive FIFO Registers
#define SPI1_RXFR3                    (*((volatile uint32_t *)0x4002D088))      // DSPI Receive FIFO Registers
#define SPI2_MCR                      (*((volatile uint32_t *)0x400AC000))      // Module Configuration Register
#define SPI2_TCR                      (*((volatile uint32_t *)0x400AC008))      // Transfer Count Register
#define SPI2_CTAR0                    (*((volatile uint32_t *)0x400AC00C))      // DSPI Clock and Transfer Attributes Register (In Master Mode)
#define SPI2_CTAR1                    (*((volatile uint32_t *)0x400AC010))      // DSPI Clock and Transfer Attributes Register (In Master Mode)
#define SPI2_SR                       (*((volatile uint32_t *)0x400AC02C))      // DSPI Status Register
#define SPI2_RSER                     (*((volatile uint32_t *)0x400AC030))      // DMA/Interrupt Request Select and Enable Register
#define SPI2_PUSHR                    (*((volatile uint32_t *)0x400AC034))      // PUSH TX FIFO Register In Master Mode
#define SPI2_POPR                     (*((volatile uint32_t *)0x400AC038))      // POP RX FIFO Register
#define SPI2_TXFR0                    (*((volatile uint32_t *)0x400AC03C))      // DSPI Transmit FIFO Registers
#define SPI2_TXFR1                    (*((volatile uint32_t *)0x400AC040))      // DSPI Transmit FIFO Registers
#define SPI2_TXFR2                    (*((volatile uint32_t *)0x400AC044))      // DSPI Transmit FIFO Registers
#define SPI2_TXFR3                    (*((volatile uint32_t *)0x400AC048))      // DSPI Transmit FIFO Registers
#define SPI2_RXFR0                    (*((volatile uint32_t *)0x400AC07C))      // DSPI Receive FIFO Registers
#define SPI2_RXFR1                    (*((volatile uint32_t *)0x400AC080))      // DSPI Receive FIFO Registers
#define SPI2_RXFR2                    (*((volatile uint32_t *)0x400AC084))      // DSPI Receive FIFO Registers
#define SPI2_RXFR3                    (*((volatile uint32_t *)0x400AC088))      // DSPI Receive FIFO Registers


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
#define I2C0_FLT                      (*((volatile uint32_t *)0x40066006))      // I2C Programmable Input Glitch Filter register (I2C0_FLT)
#define I2C0_RA                       (*((volatile uint32_t *)0x40066007))      // I2C Range Address register (I2C0_RA)
#define I2C0_SMB                      (*((volatile uint32_t *)0x40066008))      // I2C SMBus Control and Status register (I2C0_SMB)
#define I2C0_A2                       (*((volatile uint32_t *)0x40066009))      // I2C Address Register 2 (I2C0_A2)
#define I2C0_SLTH                     (*((volatile uint32_t *)0x4006600A))      // I2C SCL Low Timeout Register High (I2C0_SLTH)
#define I2C0_SLTL                     (*((volatile uint32_t *)0x4006600B))      // I2C SCL Low Timeout Register Low (I2C0_SLTL)
#define I2C1_A1                       (*((volatile uint32_t *)0x40067000))      // I2C Address Register 1 (I2C1_A1)
#define I2C1_F                        (*((volatile uint32_t *)0x40067001))      // I2C Frequency Divider register (I2C1_F)
#define I2C1_C1                       (*((volatile uint32_t *)0x40067002))      // I2C Control Register 1 (I2C1_C1)
#define I2C1_S                        (*((volatile uint32_t *)0x40067003))      // I2C Status register (I2C1_S)
#define I2C1_D                        (*((volatile uint32_t *)0x40067004))      // I2C Data I/O register (I2C1_D)
#define I2C1_C2                       (*((volatile uint32_t *)0x40067005))      // I2C Control Register 2 (I2C1_C2)
#define I2C1_FLT                      (*((volatile uint32_t *)0x40067006))      // I2C Programmable Input Glitch Filter register (I2C1_FLT)
#define I2C1_RA                       (*((volatile uint32_t *)0x40067007))      // I2C Range Address register (I2C1_RA)
#define I2C1_SMB                      (*((volatile uint32_t *)0x40067008))      // I2C SMBus Control and Status register (I2C1_SMB)
#define I2C1_A2                       (*((volatile uint32_t *)0x40067009))      // I2C Address Register 2 (I2C1_A2)
#define I2C1_SLTH                     (*((volatile uint32_t *)0x4006700A))      // I2C SCL Low Timeout Register High (I2C1_SLTH)
#define I2C1_SLTL                     (*((volatile uint32_t *)0x4006700B))      // I2C SCL Low Timeout Register Low (I2C1_SLTL)


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
#define UART0_WP7816T0                (*((volatile uint32_t *)0x4006A01B))      // UART 7816 Wait Parameter Register (UART0_WP7816T0)
#define UART0_WP7816T1                (*((volatile uint32_t *)0x4006A01B))      // UART 7816 Wait Parameter Register (UART0_WP7816T1)
#define UART0_WN7816                  (*((volatile uint32_t *)0x4006A01C))      // UART 7816 Wait N Register (UART0_WN7816)
#define UART0_WF7816                  (*((volatile uint32_t *)0x4006A01D))      // UART 7816 Wait FD Register (UART0_WF7816)
#define UART0_ET7816                  (*((volatile uint32_t *)0x4006A01E))      // UART 7816 Error Threshold Register (UART0_ET7816)
#define UART0_TL7816                  (*((volatile uint32_t *)0x4006A01F))      // UART 7816 Transmit Length Register (UART0_TL7816)
#define UART0_C6                      (*((volatile uint32_t *)0x4006A021))      // UART CEA709.1-B Control Register 6 (UART0_C6)
#define UART0_PCTH                    (*((volatile uint32_t *)0x4006A022))      // UART CEA709.1-B Packet Cycle Time Counter High (UART0_PCTH)
#define UART0_PCTL                    (*((volatile uint32_t *)0x4006A023))      // UART CEA709.1-B Packet Cycle Time Counter Low (UART0_PCTL)
#define UART0_IE0                     (*((volatile uint32_t *)0x4006A024))      // UART CEA709.1-B Interrupt Enable Register 0 (UART0_IE0)
#define UART0_SDTH                    (*((volatile uint32_t *)0x4006A025))      // UART CEA709.1-B Secondary Delay Timer High (UART0_SDTH)
#define UART0_SDTL                    (*((volatile uint32_t *)0x4006A026))      // UART CEA709.1-B Secondary Delay Timer Low (UART0_SDTL)
#define UART0_PRE                     (*((volatile uint32_t *)0x4006A027))      // UART CEA709.1-B Preamble (UART0_PRE)
#define UART0_TPL                     (*((volatile uint32_t *)0x4006A028))      // UART CEA709.1-B Transmit Packet Length (UART0_TPL)
#define UART0_IE                      (*((volatile uint32_t *)0x4006A029))      // UART CEA709.1-B Interrupt Enable Register (UART0_IE)
#define UART0_WB                      (*((volatile uint32_t *)0x4006A02A))      // UART CEA709.1-B WBASE (UART0_WB)
#define UART0_S3                      (*((volatile uint32_t *)0x4006A02B))      // UART CEA709.1-B Status Register (UART0_S3)
#define UART0_S4                      (*((volatile uint32_t *)0x4006A02C))      // UART CEA709.1-B Status Register (UART0_S4)
#define UART0_RPL                     (*((volatile uint32_t *)0x4006A02D))      // UART CEA709.1-B Received Packet Length (UART0_RPL)
#define UART0_RPREL                   (*((volatile uint32_t *)0x4006A02E))      // UART CEA709.1-B Received Preamble Length (UART0_RPREL)
#define UART0_CPW                     (*((volatile uint32_t *)0x4006A02F))      // UART CEA709.1-B Collision Pulse Width (UART0_CPW)
#define UART0_RIDTH                   (*((volatile uint32_t *)0x4006A030))      // UART CEA709.1-B Receive Indeterminate Time High (UART0_RIDTH)
#define UART0_RIDTL                   (*((volatile uint32_t *)0x4006A031))      // UART CEA709.1-B Receive Indeterminate Time Low (UART0_RIDTL)
#define UART0_TIDTH                   (*((volatile uint32_t *)0x4006A032))      // UART CEA709.1-B Transmit Indeterminate Time High (UART0_TIDTH)
#define UART0_TIDTL                   (*((volatile uint32_t *)0x4006A033))      // UART CEA709.1-B Transmit Indeterminate Time Low (UART0_TIDTL)
#define UART0_RB1TH                   (*((volatile uint32_t *)0x4006A034))      // UART CEA709.1-B Receive Beta1 Timer High (UART0_RB1TH)
#define UART0_RB1TL                   (*((volatile uint32_t *)0x4006A035))      // UART CEA709.1-B Receive Beta1 Timer Low (UART0_RB1TL)
#define UART0_TB1TH                   (*((volatile uint32_t *)0x4006A036))      // UART CEA709.1-B Transmit Beta1 Timer High (UART0_TB1TH)
#define UART0_TB1TL                   (*((volatile uint32_t *)0x4006A037))      // UART CEA709.1-B Transmit Beta1 Timer Low (UART0_TB1TL)
#define UART0_PROG_REG                (*((volatile uint32_t *)0x4006A038))      // UART CEA709.1-B Programmable register (UART0_PROG_REG)
#define UART0_STATE_REG               (*((volatile uint32_t *)0x4006A039))      // UART CEA709.1-B State register (UART0_STATE_REG)
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
#define UART1_WP7816T0                (*((volatile uint32_t *)0x4006B01B))      // UART 7816 Wait Parameter Register (UART1_WP7816T0)
#define UART1_WP7816T1                (*((volatile uint32_t *)0x4006B01B))      // UART 7816 Wait Parameter Register (UART1_WP7816T1)
#define UART1_WN7816                  (*((volatile uint32_t *)0x4006B01C))      // UART 7816 Wait N Register (UART1_WN7816)
#define UART1_WF7816                  (*((volatile uint32_t *)0x4006B01D))      // UART 7816 Wait FD Register (UART1_WF7816)
#define UART1_ET7816                  (*((volatile uint32_t *)0x4006B01E))      // UART 7816 Error Threshold Register (UART1_ET7816)
#define UART1_TL7816                  (*((volatile uint32_t *)0x4006B01F))      // UART 7816 Transmit Length Register (UART1_TL7816)
#define UART1_C6                      (*((volatile uint32_t *)0x4006B021))      // UART CEA709.1-B Control Register 6 (UART1_C6)
#define UART1_PCTH                    (*((volatile uint32_t *)0x4006B022))      // UART CEA709.1-B Packet Cycle Time Counter High (UART1_PCTH)
#define UART1_PCTL                    (*((volatile uint32_t *)0x4006B023))      // UART CEA709.1-B Packet Cycle Time Counter Low (UART1_PCTL)
#define UART1_IE0                     (*((volatile uint32_t *)0x4006B024))      // UART CEA709.1-B Interrupt Enable Register 0 (UART1_IE0)
#define UART1_SDTH                    (*((volatile uint32_t *)0x4006B025))      // UART CEA709.1-B Secondary Delay Timer High (UART1_SDTH)
#define UART1_SDTL                    (*((volatile uint32_t *)0x4006B026))      // UART CEA709.1-B Secondary Delay Timer Low (UART1_SDTL)
#define UART1_PRE                     (*((volatile uint32_t *)0x4006B027))      // UART CEA709.1-B Preamble (UART1_PRE)
#define UART1_TPL                     (*((volatile uint32_t *)0x4006B028))      // UART CEA709.1-B Transmit Packet Length (UART1_TPL)
#define UART1_IE                      (*((volatile uint32_t *)0x4006B029))      // UART CEA709.1-B Interrupt Enable Register (UART1_IE)
#define UART1_WB                      (*((volatile uint32_t *)0x4006B02A))      // UART CEA709.1-B WBASE (UART1_WB)
#define UART1_S3                      (*((volatile uint32_t *)0x4006B02B))      // UART CEA709.1-B Status Register (UART1_S3)
#define UART1_S4                      (*((volatile uint32_t *)0x4006B02C))      // UART CEA709.1-B Status Register (UART1_S4)
#define UART1_RPL                     (*((volatile uint32_t *)0x4006B02D))      // UART CEA709.1-B Received Packet Length (UART1_RPL)
#define UART1_RPREL                   (*((volatile uint32_t *)0x4006B02E))      // UART CEA709.1-B Received Preamble Length (UART1_RPREL)
#define UART1_CPW                     (*((volatile uint32_t *)0x4006B02F))      // UART CEA709.1-B Collision Pulse Width (UART1_CPW)
#define UART1_RIDTH                   (*((volatile uint32_t *)0x4006B030))      // UART CEA709.1-B Receive Indeterminate Time High (UART1_RIDTH)
#define UART1_RIDTL                   (*((volatile uint32_t *)0x4006B031))      // UART CEA709.1-B Receive Indeterminate Time Low (UART1_RIDTL)
#define UART1_TIDTH                   (*((volatile uint32_t *)0x4006B032))      // UART CEA709.1-B Transmit Indeterminate Time High (UART1_TIDTH)
#define UART1_TIDTL                   (*((volatile uint32_t *)0x4006B033))      // UART CEA709.1-B Transmit Indeterminate Time Low (UART1_TIDTL)
#define UART1_RB1TH                   (*((volatile uint32_t *)0x4006B034))      // UART CEA709.1-B Receive Beta1 Timer High (UART1_RB1TH)
#define UART1_RB1TL                   (*((volatile uint32_t *)0x4006B035))      // UART CEA709.1-B Receive Beta1 Timer Low (UART1_RB1TL)
#define UART1_TB1TH                   (*((volatile uint32_t *)0x4006B036))      // UART CEA709.1-B Transmit Beta1 Timer High (UART1_TB1TH)
#define UART1_TB1TL                   (*((volatile uint32_t *)0x4006B037))      // UART CEA709.1-B Transmit Beta1 Timer Low (UART1_TB1TL)
#define UART1_PROG_REG                (*((volatile uint32_t *)0x4006B038))      // UART CEA709.1-B Programmable register (UART1_PROG_REG)
#define UART1_STATE_REG               (*((volatile uint32_t *)0x4006B039))      // UART CEA709.1-B State register (UART1_STATE_REG)
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
#define UART2_WP7816T0                (*((volatile uint32_t *)0x4006C01B))      // UART 7816 Wait Parameter Register (UART2_WP7816T0)
#define UART2_WP7816T1                (*((volatile uint32_t *)0x4006C01B))      // UART 7816 Wait Parameter Register (UART2_WP7816T1)
#define UART2_WN7816                  (*((volatile uint32_t *)0x4006C01C))      // UART 7816 Wait N Register (UART2_WN7816)
#define UART2_WF7816                  (*((volatile uint32_t *)0x4006C01D))      // UART 7816 Wait FD Register (UART2_WF7816)
#define UART2_ET7816                  (*((volatile uint32_t *)0x4006C01E))      // UART 7816 Error Threshold Register (UART2_ET7816)
#define UART2_TL7816                  (*((volatile uint32_t *)0x4006C01F))      // UART 7816 Transmit Length Register (UART2_TL7816)
#define UART2_C6                      (*((volatile uint32_t *)0x4006C021))      // UART CEA709.1-B Control Register 6 (UART2_C6)
#define UART2_PCTH                    (*((volatile uint32_t *)0x4006C022))      // UART CEA709.1-B Packet Cycle Time Counter High (UART2_PCTH)
#define UART2_PCTL                    (*((volatile uint32_t *)0x4006C023))      // UART CEA709.1-B Packet Cycle Time Counter Low (UART2_PCTL)
#define UART2_IE0                     (*((volatile uint32_t *)0x4006C024))      // UART CEA709.1-B Interrupt Enable Register 0 (UART2_IE0)
#define UART2_SDTH                    (*((volatile uint32_t *)0x4006C025))      // UART CEA709.1-B Secondary Delay Timer High (UART2_SDTH)
#define UART2_SDTL                    (*((volatile uint32_t *)0x4006C026))      // UART CEA709.1-B Secondary Delay Timer Low (UART2_SDTL)
#define UART2_PRE                     (*((volatile uint32_t *)0x4006C027))      // UART CEA709.1-B Preamble (UART2_PRE)
#define UART2_TPL                     (*((volatile uint32_t *)0x4006C028))      // UART CEA709.1-B Transmit Packet Length (UART2_TPL)
#define UART2_IE                      (*((volatile uint32_t *)0x4006C029))      // UART CEA709.1-B Interrupt Enable Register (UART2_IE)
#define UART2_WB                      (*((volatile uint32_t *)0x4006C02A))      // UART CEA709.1-B WBASE (UART2_WB)
#define UART2_S3                      (*((volatile uint32_t *)0x4006C02B))      // UART CEA709.1-B Status Register (UART2_S3)
#define UART2_S4                      (*((volatile uint32_t *)0x4006C02C))      // UART CEA709.1-B Status Register (UART2_S4)
#define UART2_RPL                     (*((volatile uint32_t *)0x4006C02D))      // UART CEA709.1-B Received Packet Length (UART2_RPL)
#define UART2_RPREL                   (*((volatile uint32_t *)0x4006C02E))      // UART CEA709.1-B Received Preamble Length (UART2_RPREL)
#define UART2_CPW                     (*((volatile uint32_t *)0x4006C02F))      // UART CEA709.1-B Collision Pulse Width (UART2_CPW)
#define UART2_RIDTH                   (*((volatile uint32_t *)0x4006C030))      // UART CEA709.1-B Receive Indeterminate


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
// Integrated Interchip Sound (I2S) / Synchronous Audio Interface (SAI) registers
//
//*****************************************************************************

#define I2S0_TCSR                     (*((volatile uint32_t *)0x4002F000))      // SAI Transmit Control Register
#define I2S0_TCR1                     (*((volatile uint32_t *)0x4002F004))      // SAI Transmit Configuration 1 Register
#define I2S0_TCR2                     (*((volatile uint32_t *)0x4002F008))      // SAI Transmit Configuration 2 Register
#define I2S0_TCR3                     (*((volatile uint32_t *)0x4002F00C))      // SAI Transmit Configuration 3 Register
#define I2S0_TCR4                     (*((volatile uint32_t *)0x4002F010))      // SAI Transmit Configuration 4 Register
#define I2S0_TCR5                     (*((volatile uint32_t *)0x4002F014))      // SAI Transmit Configuration 5 Register
#define I2S0_TDR0                     (*((volatile uint32_t *)0x4002F020))      // SAI Transmit Data Register
#define I2S0_TDR1                     (*((volatile uint32_t *)0x4002F024))      // SAI Transmit Data Register
#define I2S0_TFR0                     (*((volatile uint32_t *)0x4002F040))      // SAI Transmit FIFO Register
#define I2S0_TFR1                     (*((volatile uint32_t *)0x4002F044))      // SAI Transmit FIFO Register
#define I2S0_TMR                      (*((volatile uint32_t *)0x4002F060))      // SAI Transmit Mask Register
#define I2S0_RCSR                     (*((volatile uint32_t *)0x4002F080))      // SAI Receive Control Register
#define I2S0_RCR1                     (*((volatile uint32_t *)0x4002F084))      // SAI Receive Configuration 1 Register
#define I2S0_RCR2                     (*((volatile uint32_t *)0x4002F088))      // SAI Receive Configuration 2 Register
#define I2S0_RCR3                     (*((volatile uint32_t *)0x4002F08C))      // SAI Receive Configuration 3 Register
#define I2S0_RCR4                     (*((volatile uint32_t *)0x4002F090))      // SAI Receive Configuration 4 Register
#define I2S0_RCR5                     (*((volatile uint32_t *)0x4002F094))      // SAI Receive Configuration 5 Register
#define I2S0_RDR0                     (*((volatile uint32_t *)0x4002F0A0))      // SAI Receive Data Register
#define I2S0_RDR1                     (*((volatile uint32_t *)0x4002F0A4))      // SAI Receive Data Register
#define I2S0_RFR0                     (*((volatile uint32_t *)0x4002F0C0))      // SAI Receive FIFO Register
#define I2S0_RFR1                     (*((volatile uint32_t *)0x4002F0C4))      // SAI Receive FIFO Register
#define I2S0_RMR                      (*((volatile uint32_t *)0x4002F0E0))      // SAI Receive Mask Register
#define I2S0_MCR                      (*((volatile uint32_t *)0x4002F100))      // SAI MCLK Control Register
#define I2S0_MDR                      (*((volatile uint32_t *)0x4002F104))      // SAI MCLK Divide Register


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
// Touch sense input (TSI) registers
//
//*****************************************************************************

#define TSI0_GENCS                    (*((volatile uint32_t *)0x40045000))      // General Control and Status register
#define TSI0_SCANC                    (*((volatile uint32_t *)0x40045004))      // SCAN Control register
#define TSI0_PEN                      (*((volatile uint32_t *)0x40045008))      // Pin Enable register
#define TSI0_WUCNTR                   (*((volatile uint32_t *)0x4004500C))      // Wake-Up Channel Counter Register
#define TSI0_CNTR1                    (*((volatile uint32_t *)0x40045100))      // Counter Register
#define TSI0_CNTR3                    (*((volatile uint32_t *)0x40045104))      // Counter Register
#define TSI0_CNTR5                    (*((volatile uint32_t *)0x40045108))      // Counter Register
#define TSI0_CNTR7                    (*((volatile uint32_t *)0x4004510C))      // Counter Register
#define TSI0_CNTR9                    (*((volatile uint32_t *)0x40045110))      // Counter Register
#define TSI0_CNTR11                   (*((volatile uint32_t *)0x40045114))      // Counter Register
#define TSI0_CNTR13                   (*((volatile uint32_t *)0x40045118))      // Counter Register
#define TSI0_CNTR15                   (*((volatile uint32_t *)0x4004511C))      // Counter Register
#define TSI0_THRESHOLD                (*((volatile uint32_t *)0x40045120))      // Low-Power Channel Threshold register


//*****************************************************************************
//
// LCD Controller (SLCD) registers
//
//*****************************************************************************

#define LCD_GCR                       (*((volatile uint32_t *)0x400BE000))      // LCD General Control Register (LCD_GCR)
#define LCD_AR                        (*((volatile uint32_t *)0x400BE004))      // LCD Auxiliary Register (LCD_AR)
#define LCD_FDCR                      (*((volatile uint32_t *)0x400BE008))      // LCD Fault Detect Control Register (LCD_FDCR)
#define LCD_FDSR                      (*((volatile uint32_t *)0x400BE00C))      // LCD Fault Detect Status Register (LCD_FDSR)
#define LCD_PENL                      (*((volatile uint32_t *)0x400BE010))      // LCD Pin Enable register (LCD_PENL)
#define LCD_PENH                      (*((volatile uint32_t *)0x400BE014))      // LCD Pin Enable register (LCD_PENH)
#define LCD_BPENL                     (*((volatile uint32_t *)0x400BE018))      // LCD Back Plane Enable register (LCD_BPENL)
#define LCD_BPENH                     (*((volatile uint32_t *)0x400BE01C))      // LCD Back Plane Enable register (LCD_BPENH)
#define LCD_WF3TO0                    (*((volatile uint32_t *)0x400BE020))      // LCD Waveform register (LCD_WF3TO0)
#define LCD_WF7TO4                    (*((volatile uint32_t *)0x400BE024))      // LCD Waveform register (LCD_WF7TO4)
#define LCD_WF11TO8                   (*((volatile uint32_t *)0x400BE028))      // LCD Waveform register (LCD_WF11TO8)
#define LCD_WF15TO12                  (*((volatile uint32_t *)0x400BE02C))      // LCD Waveform register (LCD_WF15TO12)
#define LCD_WF19TO16                  (*((volatile uint32_t *)0x400BE030))      // LCD Waveform register (LCD_WF19TO16)
#define LCD_WF23TO20                  (*((volatile uint32_t *)0x400BE034))      // LCD Waveform register (LCD_WF23TO20)
#define LCD_WF27TO24                  (*((volatile uint32_t *)0x400BE038))      // LCD Waveform register (LCD_WF27TO24)
#define LCD_WF31TO28                  (*((volatile uint32_t *)0x400BE03C))      // LCD Waveform register (LCD_WF31TO28)
#define LCD_WF35TO32                  (*((volatile uint32_t *)0x400BE040))      // LCD Waveform register (LCD_WF35TO32)
#define LCD_WF39TO36                  (*((volatile uint32_t *)0x400BE044))      // LCD Waveform register (LCD_WF39TO36)
#define LCD_WF43TO40                  (*((volatile uint32_t *)0x400BE048))      // LCD Waveform register (LCD_WF43TO40)
#define LCD_WF47TO44                  (*((volatile uint32_t *)0x400BE04C))      // LCD Waveform register (LCD_WF47TO44)
#define LCD_WF51TO48                  (*((volatile uint32_t *)0x400BE050))      // LCD Waveform register (LCD_WF51TO48)
#define LCD_WF55TO52                  (*((volatile uint32_t *)0x400BE054))      // LCD Waveform register (LCD_WF55TO52)
#define LCD_WF59TO56                  (*((volatile uint32_t *)0x400BE058))      // LCD Waveform register (LCD_WF59TO56)
#define LCD_WF63TO60                  (*((volatile uint32_t *)0x400BE05C))      // LCD Waveform register (LCD_WF63TO60)



//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SOPT1 register.
//
//*****************************************************************************

#define USBREGEN                      0x80000000      // USB voltage regulator enable
#define USBSSTBY                      0x40000000      // USB voltage regulator in standby mode during Stop, VLPS, LLS and VLLS modes
#define USBVSTBY                      0x20000000      // USB voltage regulator in standby mode during VLPR and VLPW modes
#define Reserved                      0x1FF0000000      // This read-only field is reserved and always has the value 0
#define OSC32KSEL                     0x00180000      // 32K oscillator clock select
#define Reserved                      0x00060000      // This read-only field is reserved and always has the value 0
#define RAMSIZE                       0x00078000      // RAM size
#define Reserved                      0x0001F800      // This read-only field is reserved and always has the value 0
#define Reserved                      0x000007E0      // This read-only field is reserved and always has the value 0


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
// The following are defines for the bit fields in the SIM_SOPT2 register.
//
//*****************************************************************************

#define SDHCSRC                       0x60000000      // SDHC clock source select
#define Reserved                      0x1F8000000      // This read-only field is reserved and always has the value 0
#define Reserved                      0x00E00000      // This read-only field is reserved and always has the value 0
#define USBSRC                        0x00040000      // USB clock source select
#define Reserved                      0x00020000      // This read-only field is reserved and always has the value 0
#define PLLFLLSEL                     0x00010000      // PLL/FLL clock select
#define Reserved                      0x00038000      // This read-only field is reserved and always has the value 0
#define TRACECLKSEL                   0x00001000      // Debug trace clock select
#define PTD7PAD                       0x00000800      // PTD7 pad drive strength
#define Reserved                      0x00000400      // This read-only field is reserved and always has the value 0
#define FBSL                          0x00000600      // FlexBus security level
#define CLKOUTSEL                     0x00000380      // CLKOUT select
#define RTCCLKOUTSEL                  0x00000010      // RTC clock out select
#define Reserved                      0x00000078      // This read-only field is reserved and always has the value 0


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SOPT4 register.
//
//*****************************************************************************

#define FTM0TRG1SRC                   0x20000000      // FlexTimer 0 Hardware Trigger 1 Source Select
#define FTM0TRG0SRC                   0x10000000      // FlexTimer 0 Hardware Trigger 0 Source Select
#define Reserved                      0x08000000      // This read-only field is reserved and always has the value 0
#define FTM2CLKSEL                    0x04000000      // FlexTimer 2 External Clock Pin Select
#define FTM1CLKSEL                    0x02000000      // FTM1 External Clock Pin Select
#define FTM0CLKSEL                    0x01000000      // FlexTimer 0 External Clock Pin Select
#define Reserved                      0x01800000      // This read-only field is reserved and always has the value 0
#define FTM2CH0SRC                    0x00600000      // FTM2 channel 0 input capture source select
#define FTM1CH0SRC                    0x00180000      // FTM1 channel 0 input capture source select
#define Reserved                      0x03FE0000      // This read-only field is reserved and always has the value 0
#define FTM2FLT0                      0x00000100      // FTM2 Fault 0 Select
#define Reserved                      0x00000380      // This read-only field is reserved and always has the value 0
#define FTM1FLT0                      0x00000010      // FTM1 Fault 0 Select
#define Reserved                      0x00000008      // This read-only field is reserved and always has the value 0
#define FTM0FLT2                      0x00000004      // FTM0 Fault 2 Select
#define FTM0FLT1                      0x00000002      // FTM0 Fault 1 Select
#define FTM0FLT0                      0x00000001      // FTM0 Fault 0 Select


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SOPT5 register.
//
//*****************************************************************************

#define UART1RXSRC                    0x00000180      // UART 1 receive data source select
#define UART1TXSRC                    0x00000060      // UART 1 transmit data source select
#define UART0RXSRC                    0x00000018      // UART 0 receive data source select
#define UART0TXSRC                    0x00000006      // UART 0 transmit data source select


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SOPT7 register.
//
//*****************************************************************************

#define ADC1ALTTRGEN                  0x00008000      // ADC1 alternate trigger enable
#define Reserved                      0x0000C000      // This read-only field is reserved and always has the value 0
#define ADC1PRETRGSEL                 0x00001000      // ADC1 pre-trigger select
#define ADC1TRGSEL                    0x00007800      // ADC1 trigger select
#define ADC0ALTTRGEN                  0x00000080      // ADC0 alternate trigger enable
#define Reserved                      0x000000C0      // This read-only field is reserved and always has the value 0
#define ADC0PRETRGSEL                 0x00000010      // ADC0 pre-trigger select
#define ADC0TRGSEL                    0x00000078      // ADC0 trigger select


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SDID register.
//
//*****************************************************************************

#define REVID                         0x00078000      // Device revision number
#define Reserved                      0x00000800      // This read-only field is reserved and always has the value 0
#define Reserved                      0x00000400      // This read-only field is reserved and always has the value 0
#define Reserved                      0x00000200      // This read-only field is reserved and always has the value 0
#define Reserved                      0x00000100      // This read-only field is reserved and always has the value 1
#define Reserved                      0x00000080      // This read-only field is reserved and always has the value 0
#define FAMID                         0x000001C0      // Kinetis family identification
#define PINID                         0x00000078      // Pincount identification


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SCGC1 register.
//
//*****************************************************************************

#define UART5                         0x00000800      // UART5 Clock Gate Control
#define UART4                         0x00000400      // UART4 Clock Gate Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SCGC2 register.
//
//*****************************************************************************

#define DAC1                          0x00002000      // DAC1 Clock Gate Control
#define DAC0                          0x00001000      // DAC0 Clock Gate Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SCGC3 register.
//
//*****************************************************************************

#define SLCD                          0x40000000      // Segment LCD Clock Gate Control
#define ADC1                          0x08000000      // ADC1 Clock Gate Control
#define FTM2                          0x01000000      // FTM2 Clock Gate Control
#define SDHC                          0x00020000      // SDHC Clock Gate Control
#define SPI2                          0x00010000      // SPI2 Clock Gate Control
#define FLEXCAN1                      0x00000010      // FlexCAN1 Clock Gate Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SCGC4 register.
//
//*****************************************************************************

#define LLWU                          0x10000000      // LLWU Clock Gate Control
#define VREF                          0x00100000      // VREF Clock Gate Control
#define CMP                           0x00080000      // Comparator Clock Gate Control
#define USBOTG                        0x00040000      // USB Clock Gate Control
#define UART3                         0x00002000      // UART3 Clock Gate Control
#define UART2                         0x00001000      // UART2 Clock Gate Control
#define UART1                         0x00000800      // UART1 Clock Gate Control
#define UART0                         0x00000400      // UART0 Clock Gate Control
#define I2C1                          0x00000080      // I2C1 Clock Gate Control
#define I2C0                          0x00000040      // I2C0 Clock Gate Control
#define CMT                           0x00000008      // CMT Clock Gate Control
#define EWM                           0x00000004      // EWM Clock Gate Control


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
#define TSI                           0x00000020      // TSI Clock Gate Control
#define LPTIMER                       0x00000001      // Low Power Timer Access Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SCGC6 register.
//
//*****************************************************************************

#define RTC                           0x20000000      // RTC Access Control
#define ADC0                          0x08000000      // ADC0 Clock Gate Control
#define FTM1                          0x02000000      // FTM1 Clock Gate Control
#define FTM0                          0x01000000      // FTM0 Clock Gate Control
#define PIT                           0x00800000      // PIT Clock Gate Control
#define PDB                           0x00400000      // PDB Clock Gate Control
#define USBDCD                        0x00200000      // USB DCD Clock Gate Control
#define CRC                           0x00040000      // CRC Clock Gate Control
#define I2S                           0x00008000      // I2S Clock Gate Control
#define SPI1                          0x00002000      // SPI1 Clock Gate Control
#define SPI0                          0x00001000      // SPI0 Clock Gate Control
#define FLEXCAN0                      0x00000010      // FlexCAN0 Clock Gate Control
#define DMAMUX                        0x00000002      // DMA Mux Clock Gate Control
#define FTFL                          0x00000001      // Flash Memory Clock Gate Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SCGC7 register.
//
//*****************************************************************************

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
#define Reserved                      0x07800000      // This read-only field is reserved and always has the value 0
#define EESIZE                        0x00780000      // EEPROM size
#define Reserved                      0x00078000      // This read-only field is reserved and always has the value 0
#define DEPART                        0x00007800      // FlexNVM partition
#define Reserved                      0x00001F80      // This read-only field is reserved and always has the value 0
#define FLASHDOZE                     0x00000002      // Flash Doze
#define FLASHDIS                      0x00000001      // Flash Disable


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_FCFG2 register.
//
//*****************************************************************************

#define SWAPPFLSH                     0x80000000      // Swap program flash
#define MAXADDR0                      0x1FC0000000      // Max address block 0
#define PFLSH                         0x00800000      // Program flash
#define MAXADDR1                      0x1FC00000      // Max address block 1
#define Reserved                      0x7FFF8000      // This read-only field is reserved and always has the value 0


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
#define EZPT                          0x00000010      // EzPort Reset
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
// The following are defines for the bit fields in the RCM_MR register.
//
//*****************************************************************************

#define EZP_MS                        0x00000002      // EZP_MS_B pin state


//*****************************************************************************
//
// The following are defines for the bit fields in the SMC_PMPROT register.
//
//*****************************************************************************

#define AVLP                          0x00000020      // Allow Very-Low-Power Modes
#define ALLS                          0x00000008      // Allow Low-Leakage Stop Mode
#define AVLLS                         0x00000002      // Allow Very-Low-Leakage Stop Mode


//*****************************************************************************
//
// The following are defines for the bit fields in the SMC_PMCTRL register.
//
//*****************************************************************************

#define LPWUI                         0x00000080      // Low-Power Wake Up On Interrupt
#define RUNM                          0x000000C0      // Run Mode Control
#define STOPA                         0x00000008      // Stop Aborted
#define STOPM                         0x0000001C      // Stop Mode Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SMC_VLLSCTRL register.
//
//*****************************************************************************

#define RAM2PO                        0x00000010      // RAM2 Power Option
#define VLLSM                         0x0000001C      // VLLS Mode Control


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

#define BGEN                          0x00000020      // 
#define ACKISO                        0x00000010      // 
#define REGONS                        0x00000004      // 


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_PE1 register.
//
//*****************************************************************************

#define WUPE3                         0x00000180      // Wakeup Pin Enable For LLWU_P3
#define WUPE2                         0x00000060      // Wakeup Pin Enable For LLWU_P2
#define WUPE1                         0x00000018      // Wakeup Pin Enable For LLWU_P1
#define WUPE0                         0x00000006      // Wakeup Pin Enable For LLWU_P0


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_PE2 register.
//
//*****************************************************************************

#define WUPE7                         0x00000180      // Wakeup Pin Enable For LLWU_P7
#define WUPE6                         0x00000060      // Wakeup Pin Enable For LLWU_P6
#define WUPE5                         0x00000018      // Wakeup Pin Enable For LLWU_P5
#define WUPE4                         0x00000006      // Wakeup Pin Enable For LLWU_P4


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_PE3 register.
//
//*****************************************************************************

#define WUPE11                        0x00000180      // Wakeup Pin Enable For LLWU_P11
#define WUPE10                        0x00000060      // Wakeup Pin Enable For LLWU_P10
#define WUPE9                         0x00000018      // Wakeup Pin Enable For LLWU_P9
#define WUPE8                         0x00000006      // Wakeup Pin Enable For LLWU_P8


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_PE4 register.
//
//*****************************************************************************

#define WUPE15                        0x00000180      // Wakeup Pin Enable For LLWU_P15
#define WUPE14                        0x00000060      // Wakeup Pin Enable For LLWU_P14
#define WUPE13                        0x00000018      // Wakeup Pin Enable For LLWU_P13
#define WUPE12                        0x00000006      // Wakeup Pin Enable For LLWU_P12


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
// The following are defines for the bit fields in the LLWU_F1 register.
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
// The following are defines for the bit fields in the LLWU_F2 register.
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
// The following are defines for the bit fields in the LLWU_F3 register.
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
#define FILTE                         0x000000C0      // Digital Filter On External Pin
#define FILTSEL                       0x00000078      // Filter Pin Select


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_FILT2 register.
//
//*****************************************************************************

#define FILTF                         0x00000080      // Filter Detect Flag
#define FILTE                         0x000000C0      // Digital Filter On External Pin
#define FILTSEL                       0x00000078      // Filter Pin Select


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_RST register.
//
//*****************************************************************************

#define LLRSTE                        0x00000002      // Low-Leakage Mode RESET Enable
#define RSTFILT                       0x00000001      // Digital Filter On RESET Pin


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
// The following are defines for the bit fields in the MCM_ISR register.
//
//*****************************************************************************

#define DHREQ                         0x00000008      // Debug Halt Request Indicator
#define NMI                           0x00000004      // Non-maskable Interrupt Pending
#define IRQ                           0x00000002      // Normal Interrupt Pending


//*****************************************************************************
//
// The following are defines for the bit fields in the MCM_ETBCC register.
//
//*****************************************************************************

#define ITDIS                         0x00000020      // ITM-To-TPIU Disable
#define ETDIS                         0x00000010      // ETM-To-TPIU Disable
#define RLRQ                          0x00000008      // Reload Request
#define RSPT                          0x0000000C      // Response Type
#define CNTEN                         0x00000001      // Counter Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the MCM_ETBRL register.
//
//*****************************************************************************

#define RELOAD                        0x001FFC00      // Byte Count Reload Value


//*****************************************************************************
//
// The following are defines for the bit fields in the MCM_ETBCNT register.
//
//*****************************************************************************

#define COUNTER                       0x001FFC00      // Byte Count Counter Value


//*****************************************************************************
//
// The following are defines for the bit fields in the MCM_PID register.
//
//*****************************************************************************

#define PID                           0x00007F80      // M0_PID And M1_PID For MPU ::


//*****************************************************************************
//
// The following are defines for the bit fields in the AXBS_PRSn register.
//
//*****************************************************************************

#define M7                            0x1C0000000      // Master 7 Priority. Sets the arbitration priority for this port on the associated slave port
#define M6                            0x1C000000      // Master 6 Priority. Sets the arbitration priority for this port on the associated slave port
#define M5                            0x01C00000      // Master 5 Priority. Sets the arbitration priority for this port on the associated slave port
#define M4                            0x001C0000      // Master 4 Priority. Sets the arbitration priority for this port on the associated slave port
#define M3                            0x0001C000      // Master 3 Priority. Sets the arbitration priority for this port on the associated slave port
#define M2                            0x00001C00      // Master 2 Priority. Sets the arbitration priority for this port on the associated slave port
#define M1                            0x000001C0      // Master 1 Priority. Sets the arbitration priority for this port on the associated slave port
#define M0                            0x0000001C      // Master 0 Priority. Sets the arbitration priority for this port on the associated slave port


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
// The following are defines for the bit fields in the AXBS_MGPCRn register.
//
//*****************************************************************************

#define AULB                          0x0000001C      // Arbitrates On Undefined Length Bursts


//*****************************************************************************
//
// The following are defines for the bit fields in the MPU_CESR register.
//
//*****************************************************************************

#define SPERR                         0xF80000000      // Slave Port n Error
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
#define Reserved                      0x007F8000      // This read-only field is reserved and always has the value 0
#define EMN                           0x00000780      // Error Master Number
#define EATTR                         0x00000038      // Error Attributes
#define ERW                           0x00000001      // Error Read/Write


//*****************************************************************************
//
// The following are defines for the bit fields in the MPU_RGDn_WORD0 register.
//
//*****************************************************************************

#define SRTADDR                       0x3FFFFFF80000000      // Start Address
#define Reserved                      0x000001F0      // This read-only field is reserved and always has the value 0


//*****************************************************************************
//
// The following are defines for the bit fields in the MPU_RGDn_WORD1 register.
//
//*****************************************************************************

#define ENDADDR                       0x3FFFFFF80000000      // End Address
#define Reserved                      0x000001F0      // This read-only field is reserved and always has the value 1111


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
#define Reserved                      0x00800000      // This bit must be written with a zero
#define M3SM                          0x00C00000      // Bus Master 3 Supervisor Mode Access Control
#define M3UM                          0x00700000      // Bus Master 3 User Mode Access Control
#define Reserved                      0x00020000      // This bit must be written with a zero
#define M2SM                          0x00030000      // Bus Master 2 Supervisor Mode Access Control
#define M2UM                          0x0001C000      // Bus Master 2 User Mode Access control
#define Reserved                      0x00000800      // This bit must be written with a zero
#define M1SM                          0x00000C00      // Bus Master 1 Supervisor Mode Access Control
#define M1UM                          0x00000700      // Bus Master 1 User Mode Access Control
#define Reserved                      0x00000020      // This bit must be written with a zero
#define M0SM                          0x00000030      // Bus Master 0 Supervisor Mode Access Control
#define M0UM                          0x0000001C      // Bus Master 0 User Mode Access Control


//*****************************************************************************
//
// The following are defines for the bit fields in the MPU_RGDn_WORD3 register.
//
//*****************************************************************************

#define Reserved                      0x3FFFFFFF80000000      // This read-only field is reserved and always has the value 0
#define VLD                           0x00000001      // Valid


//*****************************************************************************
//
// The following are defines for the bit fields in the MPU_RGDAACn register.
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
#define Reserved                      0x00800000      // This bit must be written with a zero
#define M3SM                          0x00C00000      // Bus Master 3 Supervisor Mode Access Control
#define M3UM                          0x00700000      // Bus Master 3 User Mode Access Control
#define Reserved                      0x00020000      // This bit must be written with a zero
#define M2SM                          0x00030000      // Bus Master 2 Supervisor Mode Access Control
#define M2UM                          0x0001C000      // Bus Master 2 User Mode Access control
#define Reserved                      0x00000800      // This bit must be written with a zero
#define M1SM                          0x00000C00      // Bus Master 1 Supervisor Mode Access Control
#define M1UM                          0x00000700      // Bus Master 1 User Mode Access Control
#define Reserved                      0x00000020      // This bit must be written with a zero
#define M0SM                          0x00000030      // Bus Master 0 Supervisor Mode Access Control
#define M0UM                          0x0000001C      // Bus Master 0 User Mode Access Control


//*****************************************************************************
//
// The following are defines for the bit fields in the DMAMUX_CHCFGn register.
//
//*****************************************************************************

#define ENBL                          0x00000080      // DMA Channel Enable
#define TRIG                          0x00000040      // DMA Channel Trigger Enable


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

#define VLD                           0x80000000      // Logical OR of all ERR status bits
#define ECX                           0x00010000      // Transfer Cancelled
#define CPE                           0x00004000      // Channel Priority Error
#define ERRCHN                        0x00007800      // Error Channel Number or Cancelled Channel Number
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
#define CEEI                          0x00000078      // Clear Enable Error Interrupt


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_SEEI register.
//
//*****************************************************************************

#define SAEE                          0x00000040      // Sets All Enable Error Interrupts
#define SEEI                          0x00000078      // Set Enable Error Interrupt


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_CERQ register.
//
//*****************************************************************************

#define CAER                          0x00000040      // Clear All Enable Requests
#define CERQ                          0x00000078      // Clear Enable Request


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_SERQ register.
//
//*****************************************************************************

#define SAER                          0x00000040      // Set All Enable Requests
#define SERQ                          0x00000078      // Set enable request


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_CDNE register.
//
//*****************************************************************************

#define CADN                          0x00000040      // Clears All DONE Bits
#define CDNE                          0x00000078      // Clear DONE Bit


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_SSRT register.
//
//*****************************************************************************

#define SAST                          0x00000040      // Set All START Bits (activates all channels)
#define SSRT                          0x00000078      // Set START Bit


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_CERR register.
//
//*****************************************************************************

#define CAEI                          0x00000040      // Clear All Error Indicators
#define CERR                          0x00000078      // Clear Error Indicator


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_CINT register.
//
//*****************************************************************************

#define CAIR                          0x00000040      // Clear All Interrupt Requests
#define CINT                          0x00000078      // Clear Interrupt Request


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
// The following are defines for the bit fields in the DMA_DCHPRIn register.
//
//*****************************************************************************

#define ECP                           0x00000080      // Enable Channel Preemption
#define DPA                           0x00000040      // Disable Preempt Ability
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
#define DSIZE                         0x0000001C      // Destination Data Transfer Size


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
#define NBYTES                        0x7FFFFFFE0000000      // Minor Byte Transfer Count


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

#define SLAST                         0x7FFFFFFF80000000      // Last source Address Adjustment


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

#define DOFF                          0x7FFF8000      // Destination Address Signed offset


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_CITER_ELINKYES register.
//
//*****************************************************************************

#define ELINK                         0x00008000      // Enable channel-to-channel linking on minor-loop complete
#define Reserved                      0x0000C000      // This read-only field is reserved and always has the value 0
#define LINKCH                        0x0000F000      // Link Channel Number
#define CITER                         0x0001FF00      // Current Major Iteration Count


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
#define Reserved                      0x00006000      // This read-only field is reserved and always has the value 0
#define MAJORLINKCH                   0x00007800      // Link Channel Number
#define DONE                          0x00000080      // Channel Done
#define ACTIVE                        0x00000040      // Channel Active
#define MAJORELI                      0x00000020      // Enable channel-to-channel linking on major loop complete
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

#define ELINK                         0x00008000      // Enables channel-to-channel linking on minor loop complete
#define Reserved                      0x0000C000      // This read-only field is reserved and always has the value 0
#define LINKCH                        0x0000F000      // Link Channel Number
#define BITER                         0x0001FF00      // Starting Major Iteration Count


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_BITER_ELINKNO register.
//
//*****************************************************************************

#define ELINK                         0x00008000      // Enables channel-to-channel linking on minor loop complete
#define BITER                         0x1FFFC000      // Starting Major Iteration Count


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA__HRS register.
//
//*****************************************************************************

#define HRSn                          0x7FFF8000      // Hardware Request Status Channel n


//*****************************************************************************
//
// The following are defines for the bit fields in the EWM_CTRL register.
//
//*****************************************************************************

#define INTEN                         0x00000008      // Interrupt Enable
#define INEN                          0x00000004      // Input Enable
#define ASSIN                         0x00000002      // EWM_in's Assertion State Select
#define EWMEN                         0x00000001      // EWM enable


//*****************************************************************************
//
// The following are defines for the bit fields in the EWM_SERV register.
//
//*****************************************************************************

#define SERVICE                       0x00007F80      // EWM service mechanism


//*****************************************************************************
//
// The following are defines for the bit fields in the EWM_CMPL register.
//
//*****************************************************************************

#define COMPAREL                      0x00007F80      // Compare Low Register


//*****************************************************************************
//
// The following are defines for the bit fields in the EWM_CMPH register.
//
//*****************************************************************************

#define COMPAREH                      0x00007F80      // Compare High Register


//*****************************************************************************
//
// The following are defines for the bit fields in the EWM_CLKPRESCALER register.
//
//*****************************************************************************

#define CLK_DIV                       0x00007F80      // Selected low power source for running the EWM counter can be prescaled ::


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
#define RANGE0                        0x00000060      // Frequency Range Select
#define HGO0                          0x00000008      // High Gain Oscillator Select
#define EREFS0                        0x00000004      // External Reference Select
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

#define LOLS                          0x00000080      // Loss of Lock Status
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
// The following are defines for the bit fields in the OSC_CR register.
//
//*****************************************************************************

#define ERCLKEN                       0x00000080      // Enable External Reference Clock
#define EREFSTEN                      0x00000020      // External Reference Stop Enable
#define SC2P                          0x00000008      // Oscillator 2P Gain Control
#define SC4P                          0x00000004      // Oscillator 4P Gain Control
#define SC8P                          0x00000002      // Oscillator 8P Gain Control
#define SC16P                         0x00000001      // Oscillator 16P Gain Control


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_PFAPR register.
//
//*****************************************************************************

#define M7PFD                         0x00800000      // Master 7 Prefetch Disable
#define M6PFD                         0x00400000      // Master 6 Prefetch Disable
#define M5PFD                         0x00200000      // Master 5 Prefetch Disable
#define M4PFD                         0x00100000      // Master 4 Prefetch Disable
#define M3PFD                         0x00080000      // Master 3 Prefetch Disable
#define M2PFD                         0x00040000      // Master 2 Prefetch Disable
#define M1PFD                         0x00020000      // Master 1 Prefetch Disable
#define M0PFD                         0x00010000      // Master 0 Prefetch Disable
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
// The following are defines for the bit fields in the FMC_PFB1CR register.
//
//*****************************************************************************

#define B1RWSC[3:0]                   0x780000000      // Bank 1 Read Wait State Control
#define B1MW[1:0]                     0x000C0000      // Bank 1 Memory Width
#define B1DCE                         0x00000010      // Bank 1 Data Cache Enable
#define B1ICE                         0x00000008      // Bank 1 Instruction Cache Enable
#define B1DPE                         0x00000004      // Bank 1 Data Prefetch Enable
#define B1IPE                         0x00000002      // Bank 1 Instruction Prefetch Enable
#define B1SEBE                        0x00000001      // Bank 1 Single Entry Buffer Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_TAGVDW0Sn register.
//
//*****************************************************************************

#define tag[18:6]                     0x7FFC0000      // 13-bit tag for cache entry
#define valid                         0x00000001      // 1-bit valid for cache entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_TAGVDW1Sn register.
//
//*****************************************************************************

#define tag[18:6]                     0x7FFC0000      // 13-bit tag for cache entry
#define valid                         0x00000001      // 1-bit valid for cache entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_TAGVDW2Sn register.
//
//*****************************************************************************

#define tag[18:6]                     0x7FFC0000      // 13-bit tag for cache entry
#define valid                         0x00000001      // 1-bit valid for cache entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_TAGVDW3Sn register.
//
//*****************************************************************************

#define tag[18:6]                     0x7FFC0000      // 13-bit tag for cache entry
#define valid                         0x00000001      // 1-bit valid for cache entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW0SnU register.
//
//*****************************************************************************

#define data[63:32]                   0x7FFFFFFF80000000      // Bits [63:32] of data entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW0SnL register.
//
//*****************************************************************************

#define data[31:0]                    0x7FFFFFFF80000000      // Bits [31:0] of data entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW1SnU register.
//
//*****************************************************************************

#define data[63:32]                   0x7FFFFFFF80000000      // Bits [63:32] of data entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW1SnL register.
//
//*****************************************************************************

#define data[31:0]                    0x7FFFFFFF80000000      // Bits [31:0] of data entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW2SnU register.
//
//*****************************************************************************

#define data[63:32]                   0x7FFFFFFF80000000      // Bits [63:32] of data entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW2SnL register.
//
//*****************************************************************************

#define data[31:0]                    0x7FFFFFFF80000000      // Bits [31:0] of data entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW3SnU register.
//
//*****************************************************************************

#define data[63:32]                   0x7FFFFFFF80000000      // Bits [63:32] of data entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW3SnL register.
//
//*****************************************************************************

#define data[31:0]                    0x7FFFFFFF80000000      // Bits [31:0] of data entry ::


//*****************************************************************************
//
// The following are defines for the bit fields in the FB_CSARn register.
//
//*****************************************************************************

#define BA                            0x7FFF80000000      // Base Address
#define Reserved                      0x7FFF8000      // This field is reserved


//*****************************************************************************
//
// The following are defines for the bit fields in the FB_CSMRn register.
//
//*****************************************************************************

#define BAM                           0x7FFF80000000      // Base Address Mask
#define Reserved                      0x003F8000      // This field is reserved
#define WP                            0x00000100      // Write Protect
#define Reserved                      0x00003F80      // This field is reserved
#define V                             0x00000001      // Valid


//*****************************************************************************
//
// The following are defines for the bit fields in the FB_CSCRn register.
//
//*****************************************************************************

#define SWS                           0x1F80000000      // Secondary Wait States
#define Reserved                      0x06000000      // This field is reserved
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
#define Reserved                      0x0000001C      // This field is reserved


//*****************************************************************************
//
// The following are defines for the bit fields in the FB_CSPMCR register.
//
//*****************************************************************************

#define GROUP1-GROUP5                 0x7FFFFFFF80000000      // -


//*****************************************************************************
//
// The following are defines for the bit fields in the CRC_CRC register.
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

#define TOT                           0x180000000      // Type Of Transpose For Writes
#define TOTR                          0x60000000      // Type Of Transpose For Read
#define -                             0x08000000      // This field is reserved
#define FXOR                          0x04000000      // Complement Read Of CRC Data Register
#define WAS                           0x02000000      // -
#define TCRC                          0x01000000      // -


//*****************************************************************************
//
// The following are defines for the bit fields in the VREF_TRM register.
//
//*****************************************************************************

#define CHOPEN                        0x00000040      // Chop oscillator enable
#define TRIM                          0x000007E0      // Trim bits


//*****************************************************************************
//
// The following are defines for the bit fields in the VREF_SC register.
//
//*****************************************************************************

#define VREFEN                        0x00000080      // Internal Voltage Reference enable
#define REGEN                         0x00000040      // Regulator enable
#define ICOMPEN                       0x00000020      // Second order curvature compensation enable
#define VREFST                        0x00000004      // Internal Voltage Reference stable
#define MODE_LV                       0x00000002      //  ::


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

#define CH7F                          0x00000080      // Channel 7 Flag
#define CH6F                          0x00000040      // Channel 6 Flag
#define CH5F                          0x00000020      // Channel 5 Flag
#define CH4F                          0x00000010      // Channel 4 Flag
#define CH3F                          0x00000008      // Channel 3 Flag
#define CH2F                          0x00000004      // Channel 2 Flag
#define CH1F                          0x00000002      // Channel 1 Flag
#define CH0F                          0x00000001      // Channel 0 Flag


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
#define TRIG2                         0x00000040      // PWM Synchronization Hardware Trigger 2
#define TRIG1                         0x00000020      // PWM Synchronization Hardware Trigger 1
#define TRIG0                         0x00000010      // PWM Synchronization Hardware Trigger 0
#define SYNCHOM                       0x00000008      // Output Mask Synchronization
#define REINIT                        0x00000004      // FTM Counter Reinitialization By Synchronization
#define CNTMAX                        0x00000002      // Maximum Loading Point Enable
#define CNTMIN                        0x00000001      // Minimum Loading Point Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_OUTINIT register.
//
//*****************************************************************************

#define CH7OI                         0x00000080      // Channel 7 Output Initialization Value
#define CH6OI                         0x00000040      // Channel 6 Output Initialization Value
#define CH5OI                         0x00000020      // Channel 5 Output Initialization Value
#define CH4OI                         0x00000010      // Channel 4 Output Initialization Value
#define CH3OI                         0x00000008      // Channel 3 Output Initialization Value
#define CH2OI                         0x00000004      // Channel 2 Output Initialization Value
#define CH1OI                         0x00000002      // Channel 1 Output Initialization Value
#define CH0OI                         0x00000001      // Channel 0 Output Initialization Value


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_OUTMASK register.
//
//*****************************************************************************

#define CH7OM                         0x00000080      // Channel 7 Output Mask
#define CH6OM                         0x00000040      // Channel 6 Output Mask
#define CH5OM                         0x00000020      // Channel 5 Output Mask
#define CH4OM                         0x00000010      // Channel 4 Output Mask
#define CH3OM                         0x00000008      // Channel 3 Output Mask
#define CH2OM                         0x00000004      // Channel 2 Output Mask
#define CH1OM                         0x00000002      // Channel 1 Output Mask
#define CH0OM                         0x00000001      // Channel 0 Output Mask


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
#define COMP2                         0x00020000      // Complement Of Channel (n) For n = 4
#define COMBINE2                      0x00010000      // Combine Channels For n = 4
#define FAULTEN1                      0x00004000      // Fault Control Enable For n = 2
#define SYNCEN1                       0x00002000      // Synchronization Enable For n = 2
#define DTEN1                         0x00001000      // Deadtime Enable For n = 2
#define DECAP1                        0x00000800      // Dual Edge Capture Mode Captures For n = 2
#define DECAPEN1                      0x00000400      // Dual Edge Capture Mode Enable For n = 2
#define COMP1                         0x00000200      // Complement Of Channel (n) For n = 2
#define COMBINE1                      0x00000100      // Combine Channels For n = 2
#define FAULTEN0                      0x00000040      // Fault Control Enable For n = 0
#define SYNCEN0                       0x00000020      // Synchronization Enable For n = 0
#define DTEN0                         0x00000010      // Deadtime Enable For n = 0
#define DECAP0                        0x00000008      // Dual Edge Capture Mode Captures For n = 0
#define DECAPEN0                      0x00000004      // Dual Edge Capture Mode Enable For n = 0
#define COMP0                         0x00000002      // Complement Of Channel (n) For n = 0
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
#define CH1TRIG                       0x00000020      // Channel 1 Trigger Enable
#define CH0TRIG                       0x00000010      // Channel 0 Trigger Enable
#define CH5TRIG                       0x00000008      // Channel 5 Trigger Enable
#define CH4TRIG                       0x00000004      // Channel 4 Trigger Enable
#define CH3TRIG                       0x00000002      // Channel 3 Trigger Enable
#define CH2TRIG                       0x00000001      // Channel 2 Trigger Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_POL register.
//
//*****************************************************************************

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
#define FAULTF3                       0x00000010      // Fault Detection Flag 3
#define FAULTF2                       0x00000008      // Fault Detection Flag 2
#define FAULTF1                       0x00000004      // Fault Detection Flag 1
#define FAULTF0                       0x00000002      // Fault Detection Flag 0


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
#define NUMTOF                        0x000001F0      // TOF Frequency


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_FLTPOL register.
//
//*****************************************************************************

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
#define SWOC                          0x00000020      // SWOCTRL Register Synchronization
#define INVC                          0x00000010      // INVCTRL Register Synchronization
#define CNTINC                        0x00000004      // CNTIN Register Synchronization
#define HWTRIGMOD                     0x00000001      // Hardware Trigger Mode
#define Reserved                      0x00038000      // 
#define Reserved                      0x00000040      // 
#define Reserved                      0x00000008      // 
#define Reserved                      0x00000002      // 


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_INVCTRL register.
//
//*****************************************************************************

#define INV3EN                        0x00000008      // Pair Channels 3 Inverting Enable
#define INV2EN                        0x00000004      // Pair Channels 2 Inverting Enable
#define INV1EN                        0x00000002      // Pair Channels 1 Inverting Enable
#define INV0EN                        0x00000001      // Pair Channels 0 Inverting Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_SWOCTRL register.
//
//*****************************************************************************

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
#define CH7SEL                        0x00000080      // Channel 7 Load Enable
#define CH6SEL                        0x00000040      // Channel 6 Load Enable
#define CH5SEL                        0x00000020      // Channel 5 Load Enable
#define CH4SEL                        0x00000010      // Channel 4 Load Enable
#define CH3SEL                        0x00000008      // Channel 3 Load Enable
#define CH2SEL                        0x00000004      // Channel 2 Load Enable
#define CH1SEL                        0x00000002      // Channel 1 Load Enable
#define CH0SEL                        0x00000001      // Channel 0 Load Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the PIT_MCR register.
//
//*****************************************************************************

#define MDIS                          0x00000002      // Module Disable
#define FRZ                           0x00000001      // Freeze


//*****************************************************************************
//
// The following are defines for the bit fields in the PIT_LDVALn register.
//
//*****************************************************************************

#define TSV                           0x7FFFFFFF80000000      // Timer Start Value


//*****************************************************************************
//
// The following are defines for the bit fields in the PIT_CVALn register.
//
//*****************************************************************************

#define TVL                           0x7FFFFFFF80000000      // Current Timer Value


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

#define TIF                           0x00000001      // Timer Interrupt Flag ::


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
// The following are defines for the bit fields in the RTC_TSR register.
//
//*****************************************************************************

#define TSR                           0x7FFFFFFF80000000      // Time Seconds Register


//*****************************************************************************
//
// The following are defines for the bit fields in the RTC_TPR register.
//
//*****************************************************************************

#define TPR                           0x7FFF8000      // Time Prescaler Register


//*****************************************************************************
//
// The following are defines for the bit fields in the RTC_TAR register.
//
//*****************************************************************************

#define TAR                           0x7FFFFFFF80000000      // Time Alarm Register


//*****************************************************************************
//
// The following are defines for the bit fields in the RTC_TCR register.
//
//*****************************************************************************

#define CIC                           0x7F80000000      // Compensation Interval Counter


//*****************************************************************************
//
// The following are defines for the bit fields in the RTC_CR register.
//
//*****************************************************************************

#define SC2P                          0x00002000      // Oscillator 2pF Load Configure


//*****************************************************************************
//
// The following are defines for the bit fields in the RTC_SR register.
//
//*****************************************************************************

#define TCE                           0x00000010      // Time Counter Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the RTC_LR register.
//
//*****************************************************************************

#define LRL                           0x00000040      // Lock Register Lock


//*****************************************************************************
//
// The following are defines for the bit fields in the RTC_IER register.
//
//*****************************************************************************

#define WPON                          0x00000080      // Wakup Pin On


//*****************************************************************************
//
// The following are defines for the bit fields in the RTC_WAR register.
//
//*****************************************************************************

#define IERW                          0x00000080      // Interrupt Enable Register Write


//*****************************************************************************
//
// The following are defines for the bit fields in the RTC_RAR register.
//
//*****************************************************************************

#define IERR                          0x00000080      // Interrupt Enable Register Read


//*****************************************************************************
//
// The following are defines for the bit fields in the USBDCD_CONTROL register.
//
//*****************************************************************************

#define SR                            0x02000000      // Software Reset
#define START                         0x01000000      // Start Change Detection Sequence
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
// The following are defines for the bit fields in the USBDCD_TIMER0 register.
//
//*****************************************************************************

#define TSEQ_INIT                     0x7FE000000      // Sequence Initiation Time
#define TUNITCON                      0x007FF800      // Unit Connection Timer Elapse


//*****************************************************************************
//
// The following are defines for the bit fields in the USBDCD_TIMER1 register.
//
//*****************************************************************************

#define TDCD_DBNC                     0x7FE000000      // Time Period to Debounce D+ Signal
#define TVDPSRC_ON                    0x0007FE00      // Time Period Comparator Enabled


//*****************************************************************************
//
// The following are defines for the bit fields in the USBDCD_TIMER2 register.
//
//*****************************************************************************

#define TVDPSRC_CON                   0x7FE000000      // Time Period Before Enabling D+ Pullup
#define CHECK_DM                      0x00000078      // Time Before Check of D– Line ::


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
#define Reserved                      0x00040000      // This field is reserved
#define SRXDIS                        0x00020000      // Self Reception Disable
#define IRMQ                          0x00010000      // Individual Rx Masking And Queue Enable
#define Reserved                      0x00018000      // This field is reserved
#define LPRIOEN                       0x00002000      // Local Priority Enable
#define AEN                           0x00001000      // Abort Enable
#define Reserved                      0x00001800      // This field is reserved
#define IDAM                          0x00000600      // ID Acceptance Mode
#define Reserved                      0x00000080      // This field is reserved
#define MAXMB                         0x00001FC0      // Number Of The Last Message Buffer


//*****************************************************************************
//
// The following are defines for the bit fields in the CANx_CTRL1 register.
//
//*****************************************************************************

#define PRESDIV                       0x7F80000000      // Prescaler Division Factor
#define RJW                           0x01800000      // Resync Jump Width
#define PSEG1                         0x00E00000      // Phase Segment 1
#define PSEG2                         0x001C0000      // Phase Segment 2
#define BOFFMSK                       0x00008000      // Bus Off Mask
#define ERRMSK                        0x00004000      // Error Mask
#define CLKSRC                        0x00002000      // CAN Engine Clock Source
#define LPB                           0x00001000      // Loop Back Mode
#define TWRNMSK                       0x00000800      // Tx Warning Interrupt Mask
#define RWRNMSK                       0x00000400      // Rx Warning Interrupt Mask
#define Reserved                      0x00000600      // This field is reserved
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

#define MG[31:0]                      0x7FFFFFFF80000000      // Rx Mailboxes Global Mask Bits


//*****************************************************************************
//
// The following are defines for the bit fields in the CANx_RX14MASK register.
//
//*****************************************************************************

#define RX14M[31:0]                   0x7FFFFFFF80000000      // Rx Buffer 14 Mask Bits


//*****************************************************************************
//
// The following are defines for the bit fields in the CANx_RX15MASK register.
//
//*****************************************************************************

#define RX15M[31:0]                   0x7FFFFFFF80000000      // Rx Buffer 15 Mask Bits


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
#define IDLE                          0x00000080      // This bit indicates when CAN bus is in IDLE state
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

#define BUFLM                         0x7FFFFFFF80000000      // Buffer MB i Mask


//*****************************************************************************
//
// The following are defines for the bit fields in the CANx_IFLAG1 register.
//
//*****************************************************************************

#define BUF31TO8I                     0x7FFFFF80000000      // Buffer MBi Interrupt
#define BUF7I                         0x00000080      // Buffer MB7 Interrupt Or "Rx FIFO Overflow"
#define BUF6I                         0x00000040      // Buffer MB6 Interrupt Or "Rx FIFO Warning"
#define BUF5I                         0x00000020      // Buffer MB5 Interrupt Or "Frames available in Rx FIFO"
#define BUF4TO0I                      0x000001F0      // Buffer MB i Interrupt Or "reserved"


//*****************************************************************************
//
// The following are defines for the bit fields in the CANx_CTRL2 register.
//
//*****************************************************************************

#define WRMFRZ                        0x10000000      // Write-Access To Memory In Freeze Mode
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
#define Reserved                      0x00008000      // This field is reserved
#define VPS                           0x00004000      // Valid Priority Status
#define IMB                           0x00002000      // Inactive Mailbox


//*****************************************************************************
//
// The following are defines for the bit fields in the CANx_CRCR register.
//
//*****************************************************************************

#define MBCRC                         0x1FC00000      // CRC Mailbox
#define Reserved                      0x00008000      // This field is reserved
#define TXCRC                         0x1FFFC000      // CRC Transmitted


//*****************************************************************************
//
// The following are defines for the bit fields in the CANx_RXFGMASK register.
//
//*****************************************************************************

#define FGM[31:0]                     0x7FFFFFFF80000000      // Rx FIFO Global Mask Bits


//*****************************************************************************
//
// The following are defines for the bit fields in the CANx_RXFIR register.
//
//*****************************************************************************

#define IDHIT                         0x0001FF00      // Identifier Acceptance Filter Hit Indicator


//*****************************************************************************
//
// The following are defines for the bit fields in the CANx_RXIMRn register.
//
//*****************************************************************************

#define MI[31:0]                      0x7FFFFFFF80000000      // Individual Mask Bits


//*****************************************************************************
//
// The following are defines for the bit fields in the Message_buffer_structure register.
//
//*****************************************************************************

#define CODE                          0x780000000      // Message Buffer Code
#define SRR                           0x08000000      // Substitute Remote Request
#define IDE                           0x04000000      // ID Extended Bit
#define RTR                           0x06000000      // Remote Transmission Request
#define DLC                           0x07800000      // Length of Data in Bytes
#define PRIO                          0x00780000      // Local priority
#define ID                            0x7FFF8000      // Frame Identifier


//*****************************************************************************
//
// The following are defines for the bit fields in the Rx_FIFO_structure register.
//
//*****************************************************************************

#define ID Filter Table               0x7FFFFFFF80000000      // 0: The corresponding bit in the filter is "don't care.";; 1: The corresponding bit in the filter is checked.


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_DSADDR register.
//
//*****************************************************************************

#define DSADDR                        0x1FFFFFFF80000000      // Contains the 32-bit system memory address for a DMA transfer. Because the address must be word (4 bytes) align, the least 2 bits are reserved, always 0. When the SDHC stops a DMA transfer, this register points to the system address of the next contiguous data position. It can be accessed only when no transaction is executing, that is, after a transaction has stopped. Read operation during transfers may return an invalid value. The host driver shall initialize this register before starting a DMA transaction. After DMA has stopped, the system address of the next contiguous data position can be read from this register. This register is protected during a data transfer. When data lines are active, write to this register is ignored. The host driver shall wait, until PRSSTAT[DLA] is cleared, before writing to this register. The SDHC internal DMA does not support a virtual memory system. It supports only continuous physical memory access. And due to AHB burst limitations, if the burst must cross the 1 KB boundary, SDHC will automatically change SEQ burst type to NSEQ.


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_BLKATTR register.
//
//*****************************************************************************

#define BLKCNT                        0x7FFF80000000      // This register is enabled when XFERTYP[BCEN] is set to 1 and is valid only for multiple block transfers. For single block transfer, this register will always read as 1. The host driver shall set this register to a value between 1 and the maximum block count. The SDHC decrements the block count after each block transfer and stops when the count reaches zero. Setting the block count to 0 results in no data blocks being transferred. This register must be accessed only when no transaction is executing, that is, after transactions are stopped. During data transfer, read operations on this register may return an invalid value and write operations are ignored. When saving transfer content as a result of a suspend command, the number of blocks yet to be transferred can be determined by reading this register. The reading of this register must be applied after transfer is paused by stop at block gap operation and before sending the command marked as suspend. This is because when suspend command is sent out, SDHC will regard the current transfer as aborted and change BLKCNT back to its original value instead of keeping the dynamical indicator of remained block count. When restoring transfer content prior to issuing a resume command, the host driver shall restore the previously saved block count. NOTE: Although the BLKCNT field is 0 after reset, the read of reset value is 0x1. This is because when XFERTYP[MSBSEL] is 0, indicating a single block transfer, the read value of BLKCNT is always 1.
#define BLKSIZE                       0x01FFF000      // Specifies the block size for block data transfers. Values ranging from 1 byte up to the maximum buffer size can be set. It can be accessed only when no transaction is executing, that is, after a transaction has stopped. Read operations during transfers may return an invalid value, and write operations will be ignored.


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_CMDARG register.
//
//*****************************************************************************

#define CMDARG                        0x7FFFFFFF80000000      // The SD/MMC command argument is specified as bits 39-8 of the command format in the SD or MMC specification. This register is write protected when PRSSTAT[CDIHB0] is set.


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_XFERTYP register.
//
//*****************************************************************************

#define CMDINX                        0x7E0000000      // These bits shall be set to the command number that is specified in bits 45-40 of the command-format in the SD Memory Card Physical Layer Specification and SDIO Card Specification.
#define CMDTYP                        0x01800000      // There are three types of special commands: suspend, resume, and abort. These bits shall be set to 00b for all other commands.
#define DPSEL                         0x00200000      // This bit is set to 1 to indicate that data is present and shall be transferred using the DAT line. It is set to 0 for the following: Commands using only the CMD line, for example: CMD52. Commands with no data transfer, but using the busy signal on DAT[0] line, R1b or R5b, for example: CMD38. NOTE: In resume command, this bit shall be set, and other bits in this register shall be set the same as when the transfer was initially launched. When the Write Protect switch is on, that is, the WPSPL bit is active as 0, any command with a write operation will be ignored. That is to say, when this bit is set, while the DTDSEL bit is 0, writes to the register Transfer Type are ignored.
#define CICEN                         0x00100000      // If this bit is set to 1, the SDHC will check the index field in the response to see if it has the same value as the command index. If it is not, it is reported as a command index error. If this bit is set to 0, the index field is not checked.
#define CCCEN                         0x00080000      // If this bit is set to 1, the SDHC shall check the CRC field in the response. If an error is detected, it is reported as a Command CRC Error. If this bit is set to 0, the CRC field is not checked. The number of bits checked by the CRC field value changes according to the length of the response.
#define RSPTYP                        0x00060000      // 00b No response. 01b Response length 136. 10b Response length 48. 11b Response length 48, check busy after response.
#define MSBSEL                        0x00008000      // Enables multiple block DAT line data transfers. For any other commands, this bit shall be set to 0. If this bit is 0, it is not necessary to set the block count register.
#define DTDSEL                        0x00000010      // Defines the direction of DAT line data transfers. The bit is set to 1 by the host driver to transfer data from the SD card to the SDHC and is set to 0 for all other commands.
#define AC12EN                        0x00000004      // Multiple block transfers for memory require a CMD12 to stop the transaction. When this bit is set to 1, the SDHC will issue a CMD12 automatically when the last block transfer has completed. The host driver shall not set this bit to issue commands that do not require CMD12 to stop a multiple block data transfer. In particular, secure commands defined in File Security Specification (see reference list) do not require CMD12. In single block transfer, the SDHC will ignore this bit whether it is set or not.
#define BCEN                          0x00000002      // Used to enable the Block Count register, which is only relevant for multiple block transfers. When this bit is 0, the internal counter for block is disabled, which is useful in executing an infinite transfer.
#define DMAEN                         0x00000001      // Enables DMA functionality. If this bit is set to 1, a DMA operation shall begin when the host driver sets the DPSEL bit of this register. Whether the simple DMA, or the advanced DMA, is active depends on PROCTL[DMAS].


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_PRSSTAT register.
//
//*****************************************************************************

#define DLSL                          0x7F80000000      // Used to check the DAT line level to recover from errors, and for debugging. This is especially useful in detecting the busy signal level from DAT[0]. The reset value is effected by the external pullup/pulldown resistors. By default, the read value of this field after reset is 8’b11110111, when DAT[3] is pulled down and the other lines are pulled up.
#define CLSL                          0x00800000      // Used to check the CMD line level to recover from errors, and for debugging. The reset value is effected by the external pullup/pulldown resistor, by default, the read value of this bit after reset is 1b, when the command line is pulled up.
#define CINS                          0x00010000      // Indicates whether a card has been inserted. The SDHC debounces this signal so that the host driver will not need to wait for it to stabilize. Changing from a 0 to 1 generates a card insertion interrupt in the Interrupt Status register. Changing from a 1 to 0 generates a card removal interrupt in the Interrupt Status register. A write to the force event register does not effect this bit. SYSCTL[RSTA] does not effect this bit. A software reset does not effect this bit.
#define BREN                          0x00000800      // Used for non-DMA read transfers. The SDHC may implement multiple buffers to transfer data efficiently. This read-only flag indicates that valid data exists in the host side buffer. If this bit is high, valid data greater than the watermark level exist in the buffer. This read-only flag indicates that valid data exists in the host side buffer.
#define BWEN                          0x00000400      // Used for non-DMA write transfers. The SDHC can implement multiple buffers to transfer data efficiently. This read-only flag indicates whether space is available for write data. If this bit is 1, valid data greater than the watermark level can be written to the buffer. This read-only flag indicates whether space is available for write data.
#define RTA                           0x00000200      // Used for detecting completion of a read transfer. This bit is set for either of the following conditions: After the end bit of the read command. When writing a 1 to PROCTL[CREQ] to restart a read transfer. A transfer complete interrupt is generated when this bit changes to 0. This bit is cleared for either of the following conditions: When the last data block as specified by block length is transferred to the system, that is, all data are read away from SDHC internal buffer. When all valid data blocks have been transferred from SDHC internal buffer to the system and no current block transfers are being sent as a result of the stop at block gap request being set to 1.
#define WTA                           0x00000100      // Indicates that a write transfer is active. If this bit is 0, it means no valid write data exists in the SDHC. This bit is set in either of the following cases: After the end bit of the write command. When writing 1 to PROCTL[CREQ] to restart a write transfer. This bit is cleared in either of the following cases: After getting the CRC status of the last data block as specified by the transfer count (single and multiple). After getting the CRC status of any block where data transmission is about to be stopped by a stop at block gap request. During a write transaction, a block gap event interrupt is generated when this bit is changed to 0, as result of the stop at block gap request being set. This status is useful for the host driver in determining when to issue commands during write busy state.
#define SDOFF                         0x00000080      // Indicates that the SD clock is internally gated off, because of buffer over/under-run or read pause without read wait assertion, or the driver has cleared SYSCTL[SDCLKEN] to stop the SD clock. This bit is for the host driver to debug data transaction on the SD bus.
#define PEROFF                        0x00000040      // Indicates that the SDHC clock is internally gated off. This bit is for the host driver to debug transaction on the SD bus. When INITA bit is set, SDHC sending 80 clock cycles to the card, SDCLKEN must be 1 to enable the output card clock, otherwise the SDHC clock will never be gate off, so SDHC clock and bus clock will be always active.
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

#define WECRM                         0x04000000      // Enables a wakeup event, via IRQSTAT[CRM]. FN_WUS (Wake Up Support) in CIS does not effect this bit. When this bit is set, IRQSTAT[CRM] and the SDHC interrupt can be asserted without SD_CLK toggling. When the wakeup feature is not enabled, the SD_CLK must be active to assert IRQSTAT[CRM] and the SDHC interrupt.
#define WECINS                        0x02000000      // Enables a wakeup event, via IRQSTAT[CINS]. FN_WUS (Wake Up Support) in CIS does not effect this bit. When this bit is set, IRQSTATEN[CINSEN] and the SDHC interrupt can be asserted without SD_CLK toggling. When the wakeup feature is not enabled, the SD_CLK must be active to assert IRQSTATEN[CINSEN] and the SDHC interrupt.
#define WECINT                        0x01000000      // Enables a wakeup event, via IRQSTAT[CINT]. This bit can be set to 1 if FN_WUS (Wake Up Support) in CIS is set to 1. When this bit is set, the card interrupt status and the SDHC interrupt can be asserted without SD_CLK toggling. When the wakeup feature is not enabled, the SD_CLK must be active to assert the card interrupt status and the SDHC interrupt.
#define IABG                          0x00080000      // Valid only in 4-bit mode, of the SDIO card, and selects a sample point in the interrupt cycle. Setting to 1 enables interrupt detection at the block gap for a multiple block transfer. Setting to 0 disables interrupt detection during a multiple block transfer. If the SDIO card can't signal an interrupt during a multiple block transfer, this bit must be set to 0 to avoid an inadvertent interrupt. When the host driver detects an SDIO card insertion, it shall set this bit according to the CCCR of the card.
#define RWCTL                         0x00040000      // The read wait function is optional for SDIO cards. If the card supports read wait, set this bit to enable use of the read wait protocol to stop read data using the DAT[2] line. Otherwise, the SDHC has to stop the SD Clock to hold read data, which restricts commands generation. When the host driver detects an SDIO card insertion, it shall set this bit according to the CCCR of the card. If the card does not support read wait, this bit shall never be set to 1, otherwise DAT line conflicts may occur. If this bit is set to 0, stop at block gap during read operation is also supported, but the SDHC will stop the SD Clock to pause reading operation.
#define CREQ                          0x00020000      // Used to restart a transaction which was stopped using the PROCTL[SABGREQ]. When a suspend operation is not accepted by the card, it is also by setting this bit to restart the paused transfer. To cancel stop at the block gap, set PROCTL[SABGREQ] to 0 and set this bit to 1 to restart the transfer. The SDHC automatically clears this bit, therefore it is not necessary for the host driver to set this bit to 0. If both PROCTL[SABGREQ] and this bit are 1, the continue request is ignored.
#define SABGREQ                       0x00010000      // Used to stop executing a transaction at the next block gap for both DMA and non-DMA transfers. Until the IRQSTATEN[TCSEN] is set to 1, indicating a transfer completion, the host driver shall leave this bit set to 1. Clearing both PROCTL[SABGREQ] and PROCTL[CREQ] does not cause the transaction to restart. Read Wait is used to stop the read transaction at the block gap. The SDHC will honor the PROCTL[SABGREQ] for write transfers, but for read transfers it requires that SDIO card support read wait. Therefore, the host driver shall not set this bit during read transfers unless the SDIO card supports read wait and has set PROCTL[RWCTL] to 1, otherwise the SDHC will stop the SD bus clock to pause the read operation during block gap. In the case of write transfers in which the host driver writes data to the data port register, the host driver shall set this bit after all block data is written. If this bit is set to 1, the host driver shall not write data to the Data Port register after a block is sent. Once this bit is set, the host driver shall not clear this bit before IRQSTATEN[TCSEN] is set, otherwise the SDHC's behavior is undefined. This bit effects PRSSTAT[RTA], PRSSTAT[WTA], and PRSSTAT[CDIHB].
#define This field is reserved.       0x001F8000      // 0;; 1
#define DMAS                          0x00000600      // This field is valid while DMA (SDMA or ADMA) is enabled and selects the DMA operation. 00 No DMA or simple DMA is selected. 01 ADMA1 is selected. 10 ADMA2 is selected. 11 Reserved
#define CDSS                          0x00000080      // Selects the source for the card detection. 0b Card detection level is selected for normal purpose. 1b Card detection test level is selected for test purpose.
#define CDTL                          0x00000040      // Enabled while the CDSS is set to 1 and it indicates card insertion. 0b Card detect test level is 0, no card inserted. 1b Card detect test level is 1, card inserted.
#define EMODE                         0x00000060      // The SDHC supports all four endian modes in data transfer. 00b Big endian mode 01b Half word big endian mode 10b Little endian mode 11b Reserved
#define D3CD                          0x00000008      // If this bit is set, DAT3 should be pulled down to act as a card detection pin. Be cautious when using this feature, because DAT3 is also a chip-select for the SPI mode. A pulldown on this pin and CMD0 may set the card into the SPI mode, which the SDHC does not support. Note: Keep this bit set if SDIO interrupt is used.
#define DTW                           0x0000000C      // Selects the data width of the SD bus for a data transfer. The host driver shall set it to match the data width of the card. Possible data transfer width is 1-bit, 4-bits or 8-bits. 00b 1-bit mode 01b 4-bit mode 10b 8-bit mode 11b Reserved
#define LCTL                          0x00000001      // This bit, fully controlled by the host driver, is used to caution the user not to remove the card while the card is being accessed. If the software is going to issue multiple SD commands, this bit can be set during all these transactions. It is not necessary to change for each transaction. When the software issues multiple SD commands, setting the bit once before the first command is sufficient: it is not necessary to reset the bit between commands.


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_SYSCTL register.
//
//*****************************************************************************

#define INITA                         0x08000000      // When this bit is set, 80 SD-clocks are sent to the card. After the 80 clocks are sent, this bit is self-cleared. This bit is very useful during the card power-up period when 74 SD-clocks are needed and the clock auto gating feature is enabled. Writing 1 to this bit when this bit is already 1 has no effect. Writing 0 to this bit at any time has no effect. When either of the PRSSTAT[CIHB] and PRSSTAT[CDIHB] bits are set, writing 1 to this bit is ignored, that is, when command line or data lines are active, write to this bit is not allowed. On the other hand, when this bit is set, that is, during initialization active period, it is allowed to issue command, and the command bit stream will appear on the CMD pad after all 80 clock cycles are done. So when this command ends, the driver can make sure the 80 clock cycles are sent out. This is very useful when the driver needs send 80 cycles to the card and does not want to wait till this bit is self-cleared.
#define RSTD                          0x04000000      // Only part of the data circuit is reset. DMA circuit is also reset. The following registers and bits are cleared by this bit: Data Port register Buffer Is Cleared And Initialized. Present State register Buffer Read Enable Buffer Write Enable Read Transfer Active Write Transfer Active DAT Line Active Command Inhibit (DAT) Protocol Control register Continue Request Stop At Block Gap Request Interrupt Status register Buffer Read Ready Buffer Write Ready DMA Interrupt Block Gap Event Transfer Complete
#define RSTC                          0x02000000      // Only part of the command circuit is reset. The following registers and bits are cleared by this bit: PRSSTAT[CIHB] IRQSTAT[CC]
#define RSTA                          0x01000000      // Effects the entire host controller except for the card detection circuit. Register bits of type ROC, RW, RW1C, RWAC are cleared. During its initialization, the host driver shall set this bit to 1 to reset the SDHC. The SDHC shall reset this bit to 0 when the capabilities registers are valid and the host driver can read them. Additional use of software reset for all does not affect the value of the capabilities registers. After this bit is set, it is recommended that the host driver reset the external card and reinitialize it.
#define This field is reserved.       0x07800000      // 0;; 1
#define DTOCV                         0x00780000      // Determines the interval by which DAT line timeouts are detected. See IRQSTAT[DTOE] for information on factors that dictate time-out generation. Time-out clock frequency will be generated by dividing the base clock SDCLK value by this value. The host driver can clear IRQSTATEN[DTOESEN] to prevent inadvertent time-out events. 0000b SDCLK x 2^13 0001b SDCLK x 2^14 ... 1110b SDCLK x 2^27 1111b Reserved
#define SDCLKFS                       0x007F8000      // Used to select the frequency of the SDCLK pin. The frequency is not programmed directly. Rather this register holds the prescaler (this register) and divisor (next register) of the base clock frequency register. Setting 00h bypasses the frequency prescaler of the SD Clock. Multiple bits must not be set, or the behavior of this prescaler is undefined. The two default divider values can be calculated by the frequency of SDHC clock and the following divisor bits. The frequency of SDCLK is set by the following formula: Clock frequency = (Base clock) / (prescaler x divisor) For example, if the base clock frequency is 96 MHz, and the target frequency is 25 MHz, then choosing the prescaler value of 01h and divisor value of 1h will yield 24 MHz, which is the nearest frequency less than or equal to the target. Similarly, to approach a clock value of 400 kHz, the prescaler value of 08h and divisor value of eh yields the exact clock value of 400 kHz. The reset value of this field is 80h, so if the input base clock (SDHC clock) is about 96 MHz, the default SD clock after reset is 375 kHz. According to the SD Physical Specification Version 1.1 and the SDIO Card Specification Version 1.2, the maximum SD clock frequency is 50 MHz and shall never exceed this limit. Only the following settings are allowed: 01h Base clock divided by 2. 02h Base clock divided by 4. 04h Base clock divided by 8. 08h Base clock divided by 16. 10h Base clock divided by 32. 20h Base clock divided by 64. 40h Base clock divided by 128. 80h Base clock divided by 256.
#define DVS                           0x00000780      // Used to provide a more exact divisor to generate the desired SD clock frequency. Note the divider can even support odd divisor without deterioration of duty cycle. The setting are as following: 0h Divisor by 1. 1h Divisor by 2. ... Eh Divisor by 15. Fh Divisor by 16.
#define SDCLKEN                       0x00000008      // The host controller shall stop SDCLK when writing this bit to 0. SDCLK frequency can be changed when this bit is 0. Then, the host controller shall maintain the same clock frequency until SDCLK is stopped (stop at SDCLK = 0). If the IRQSTAT[CINS] is cleared, this bit must be cleared by the host driver to save power.
#define PEREN                         0x00000004      // If this bit is set, SDHC clock will always be active and no automatic gating is applied. Thus the SDCLK is active except for when auto gating-off during buffer danger (buffer about to over-run or under-run). When this bit is cleared, the SDHC clock will be automatically off whenever there is no transaction on the SD bus. Because this bit is only a feature enabling bit, clearing this bit does not stop SDCLK immediately. The SDHC clock will be internally gated off, if none of the following factors are met: The cmd part is reset, or Data part is reset, or A soft reset, or The cmd is about to send, or Clock divisor is just updated, or Continue request is just set, or This bit is set, or Card insertion is detected, or Card removal is detected, or Card external interrupt is detected, or 80 clocks for initialization phase is ongoing
#define HCKEN                         0x00000002      // If this bit is set, system clock will always be active and no automatic gating is applied. When this bit is cleared, system clock will be automatically off when no data transfer is on the SD bus.
#define IPGEN                         0x00000001      // If this bit is set, bus clock will always be active and no automatic gating is applied. The bus clock will be internally gated off, if none of the following factors are met: The cmd part is reset, or Data part is reset, or Soft reset, or The cmd is about to send, or Clock divisor is just updated, or Continue request is just set, or This bit is set, or Card insertion is detected, or Card removal is detected, or Card external interrupt is detected, or The SDHC clock is not gated off NOTE: The bus clock will not be auto gated off if the SDHC clock is not gated off. So clearing only this bit has no effect unless the PEREN bit is also cleared.


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_IRQSTAT register.
//
//*****************************************************************************

#define DMAE                          0x10000000      // Occurs when an Internal DMA transfer has failed. This bit is set to 1, when some error occurs in the data transfer. This error can be caused by either Simple DMA or ADMA, depending on which DMA is in use. The value in DMA System Address register is the next fetch address where the error occurs. Because any error corrupts the whole data block, the host driver shall restart the transfer from the corrupted block boundary. The address of the block boundary can be calculated either from the current DSADDR value or from the remaining number of blocks and the block size.
#define AC12E                         0x01000000      // Occurs when detecting that one of the bits in the Auto CMD12 Error Status register has changed from 0 to 1. This bit is set to 1, not only when the errors in Auto CMD12 occur, but also when the Auto CMD12 is not executed due to the previous command error.
#define DEBE                          0x00400000      // Occurs either when detecting 0 at the end bit position of read data, which uses the DAT line, or at the end bit position of the CRC.
#define DCE                           0x00200000      // Occurs when detecting a CRC error when transferring read data, which uses the DAT line, or when detecting the Write CRC status having a value other than 010.
#define DTOE                          0x00100000      // Occurs when detecting one of following time-out conditions. Busy time-out for R1b,R5b type Busy time-out after Write CRC status Read Data time-out
#define CIE                           0x00080000      // Occurs if a Command Index error occurs in the command response.
#define CEBE                          0x00040000      // Occurs when detecting that the end bit of a command response is 0.
#define CCE                           0x00020000      // Command CRC Error is generated in two cases. If a response is returned and the Command Timeout Error is set to 0, indicating no time-out, this bit is set when detecting a CRC error in the command response. The SDHC detects a CMD line conflict by monitoring the CMD line when a command is issued. If the SDHC drives the CMD line to 1, but detects 0 on the CMD line at the next SDCLK edge, then the SDHC shall abort the command (Stop driving CMD line) and set this bit to 1. The Command Timeout Error shall also be set to 1 to distinguish CMD line conflict.
#define CTOE                          0x00010000      // Occurs only if no response is returned within 64 SDCLK cycles from the end bit of the command. If the SDHC detects a


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_IRQSIGEN register.
//
//*****************************************************************************

#define DMAEIEN                       0x10000000      // DMA Error Interrupt Enable
#define AC12EIEN                      0x01000000      // Auto CMD12 Error Interrupt Enable
#define DEBEIEN                       0x00400000      // Data End Bit Error Interrupt Enable
#define DCEIEN                        0x00200000      // Data CRC Error Interrupt Enable
#define DTOEIEN                       0x00100000      // Data Timeout Error Interrupt Enable
#define CIEIEN                        0x00080000      // Command Index Error Interrupt Enable
#define CEBEIEN                       0x00040000      // Command End Bit Error Interrupt Enable
#define CCEIEN                        0x00020000      // Command CRC Error Interrupt Enable
#define CTOEIEN                       0x00010000      // Command Timeout Error Interrupt Enable
#define CINTIEN                       0x00000100      // Card Interrupt Enable
#define CRMIEN                        0x00000080      // Card Removal Interrupt Enable
#define CINSIEN                       0x00000040      // Card Insertion Interrupt Enable
#define BRRIEN                        0x00000020      // Buffer Read Ready Interrupt Enable
#define BWRIEN                        0x00000010      // Buffer Write Ready Interrupt Enable
#define DINTIEN                       0x00000008      // DMA Interrupt Enable
#define BGEIEN                        0x00000004      // Block Gap Event Interrupt Enable
#define TCIEN                         0x00000002      // Transfer Complete Interrupt Enable
#define CCIEN                         0x00000001      // Command Complete Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_AC12ERR register.
//
//*****************************************************************************

#define CNIBAC12E                     0x00000080      // Command Not Issued By Auto CMD12 Error
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

#define VS18                          0x04000000      // Voltage Support 1.8 V
#define VS30                          0x02000000      // Voltage Support 3.0 V
#define VS33                          0x01000000      // Voltage Support 3.3 V
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
#define RDWML                         0x00007F80      // Read Watermark Level


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_FEVT register.
//
//*****************************************************************************

#define CINT                          0x80000000      // Force Event Card Interrupt
#define DMAE                          0x10000000      // Force Event DMA Error
#define AC12E                         0x01000000      // Force Event Auto Command 12 Error
#define DEBE                          0x00400000      // Force Event Data End Bit Error
#define DCE                           0x00200000      // Force Event Data CRC Error
#define DTOE                          0x00100000      // Force Event Data Time Out Error
#define CIE                           0x00080000      // Force Event Command Index Error
#define CEBE                          0x00040000      // Force Event Command End Bit Error
#define CCE                           0x00020000      // Force Event Command CRC Error
#define CTOE                          0x00010000      // Force Event Command Time Out Error
#define CNIBAC12E                     0x00000080      // Force Event Command Not Executed By Auto Command 12 Error
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
#define ADMAES                        0x00000006      // ADMA Error State (When ADMA Error Is Occurred.)


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

#define EXBLKNU                       0x00000002      // Exact Block Number Block Read Enable For SDIO CMD53
#define EXTDMAEN                      0x00000001      // External DMA Request Enable


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
#define DTOCVACK                      0x00000078      // Boot ACK Time Out Counter Value


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_HOSTVER register.
//
//*****************************************************************************

#define VVN                           0x007F8000      // Vendor Version Number


//*****************************************************************************
//
// The following are defines for the bit fields in the LCD_GCR register.
//
//*****************************************************************************

#define Regulated Voltage Enable      0x80000000      // Enables internal voltage regulator. It must have the charge pump enabled.
#define Regulated Voltage Trim        0x78000000      // This 4-bit trim register is used to adjust the regulated input. Each bit in the register has equal weight. The regulated input is changed by 1.5% for each count.
#define Charge Pump or Resistor Bias Select0x00800000      // Selects the LCD controller charge pump or a resistor network to supply the LCD voltages VLL1, VLL2, and VLL3.
#define High Reference Select         0x00400000      // When using the VIREG inputs, this bit configures internal circuits to supply VLL1.
#define Load Adjust                   0x00600000      // Configures SLCD to handle different LCD glass capacitance.
#define Voltage Supply Control        0x00060000      // Configures whether the LCD controller power supply is external or internal. Avoid modifying this field while the LCD controller is enabled, for example, if LCDEN = 1.
#define LCD Frame Frequency Interrupt Enable0x00008000      // Enables an LCD interrupt event that coincides with the LCD controller frame frequency.
#define LCD Fault Detection Complete Interrupt Enable0x00004000      // Enables an LCD interrupt event when fault detection is completed.
#define LCD Alternate Clock Divider   0x00006000      // Functions as a clock divider to divide the alternate clock before it is selected as LCD clock source.
#define LCD Wait                      0x00000200      // LCD driver, charge pump, resistor bias network, and voltage regulator stop while in Wait mode.
#define LCD Stop                      0x00000100      // LCD driver, charge pump, resistor bias network, and voltage regulator stop while in Stop mode.
#define LCD Driver Enable             0x00000080      // Starts LCD controller waveform generator.
#define LCD Clock Source Select       0x00000040      // The LCD controller has two possible clock sources. This bit is used to select which clock source is the basis for LCD clock.
#define LCD Clock Prescaler           0x000000E0      // Used as a clock divider to generate the SLCD frame frequency. LCD controller duty cycle configuration is used to determine the LCD controller frame frequency. LCD controller frame frequency calculations are provided in SLCD base clock and frame frequency.
#define LCD duty select               0x0000001C      // Selects the duty cycle of the LCD controller driver.


//*****************************************************************************
//
// The following are defines for the bit fields in the LCD_AR register.
//
//*****************************************************************************

#define LCD Frame Frequency Interrupt flag0x00008000      // Indicates a frame frequency interrupt condition has occurred. To clear the interrupt, write 1 to LCDIF.
#define Blink command                 0x00000080      // Starts or stops SLCD blinking.
#define Alternate display mode        0x00000040      // For four back planes or less, the LCD back plane sequencer changes to output an alternate display. ALT bit is ignored if DUTY[2:0] is 101 or greater.
#define Blank display mode            0x00000020      // Asserting this bit clears all segments in the LCD.
#define Blink mode                    0x00000008      // Selects the blink mode displayed during the blink period.
#define Blink-rate configuration      0x0000001C      // Selects frequency at which the LCD blinks when the BLINK bit is asserted. The following equation provides an expression for the LCD controller blink rate and shows how BRATE field is used in the LCD blink-rate calculation.


//*****************************************************************************
//
// The following are defines for the bit fields in the LCD_FDCR register.
//
//*****************************************************************************

#define Fault Detect Clock Prescaler  0x0001C000      // Fault detect sample clock frequency is:
#define Fault Detect Sample Window Width0x00003800      // Specifies the sample window width of fault detection, in number of cycles in the range from 4–512 (Sample window = 4*2^N).
#define Reserved                      0x00000100      // 
#define Fault Detect Enable           0x00000080      // If LCDEN is 1, asserting FDEN inserts a test frame after normal LCD refresh frame is completed. After the test frame is done, Fault detection complete flag (FDCF) is set. When the test frame is done, a normal LCD refresh frame starts. FDEN is one-shot register, it clears after FDCF is set.
#define Fault Detect Back Plane Enable0x00000040      // Enables "back plane" timing for the fault detect circuit. FDBPEN = 0 generates front plane timing. This bit specifies the type of pin selected under fault detect test.
#define Fault Detect Pin ID           0x000007E0      // Specifies the LCD pin to be checked by pullup fault detection.


//*****************************************************************************
//
// The following are defines for the bit fields in the LCD_FDSR register.
//
//*****************************************************************************

#define Fault Detection Complete Flag 0x00008000      // FDCF indicates that the fault detection is completed. Writing 1 to this bit clears it to zero. This bit also acts as an interrupt flag when FDCIEN is set. Software can use either interrupt or polling to check whether one pin fault detection is completed.
#define Reserved                      0x001FC000      // 
#define Fault Detect Counter          0x00007F80      // Contains how many “one/high” are sampled inside the fault detect sample window.


//*****************************************************************************
//
// The following are defines for the bit fields in the LCD_PENn register.
//
//*****************************************************************************

#define LCD Pin Enable                0x7FFFFFFF80000000      // The PEN[63:0] bits enable the LCD_P[63:0] pins for LCD operation. PENL contains PEN[31:0], and PENH contains PEN[63:32].


//*****************************************************************************
//
// The following are defines for the bit fields in the LCD_BPENn register.
//
//*****************************************************************************

#define Back Plane Enable             0x7FFFFFFF80000000      // The BPEN[63:0] bits configure the LCD_P[63:0] pins to operate as an LCD back plane or LCD front plane. BPENL contains BPEN[31:0], and BPENH contains BPEN[63:32].


//*****************************************************************************
//
// The following are defines for the bit fields in the LCD_WF3TO0 register.
//
//*****************************************************************************

#define Segment-on front plane operation — Each bit turns on or off the segments associated with LCD_P3 in the following pattern: HGFEDCBA (most significant bit controls segment H and least significant bit controls segment A).0x7F80000000      // 0: Segment off or phase deactivated;; 1: Segment on or phase activated.
#define Controls segments or phases connected to LCD_P2 as described above for WF3.0x7F800000      // 
#define Controls segments or phases connected to LCD_P1 as described above for WF3.0x007F8000      // 
#define Controls segments or phases connected to LCD_P0 as described above for WF3.0x00007F80      // 


//*****************************************************************************
//
// The following are defines for the bit fields in the LCD_WF7TO4 register.
//
//*****************************************************************************

#define Controls segments or phases connected to LCD_P7 as described above for WF3TO0[WF3].0x7F80000000      // 
#define Controls segments or phases connected to LCD_P6 as described above for WF3TO0[WF3].0x7F800000      // 
#define Controls segments or phases connected to LCD_P5 as described above for WF3TO0[WF3].0x007F8000      // 
#define Controls segments or phases connected to LCD_P4 as described above for WF3TO0[WF3].0x00007F80      // 


//*****************************************************************************
//
// The following are defines for the bit fields in the LCD_WF11TO8 register.
//
//*****************************************************************************

#define Controls segments or phases connected to LCD_P11 as described above for WF3TO0[WF3].0x7F80000000      // 
#define Controls segments or phases connected to LCD_P10 as described above for WF3TO0[WF3].0x7F800000      // 
#define Controls segments or phases connected to LCD_P9 as described above for WF3TO0[WF3].0x007F8000      // 
#define Controls segments or phases connected to LCD_P8 as described above for WF3TO0[WF3].0x00007F80      // 


//*****************************************************************************
//
// The following are defines for the bit fields in the LCD_WF15TO12 register.
//
//*****************************************************************************

#define Controls segments or phases connected to LCD_P15 as described above for WF3TO0[WF3].0x7F80000000      // 
#define Controls segments or phases connected to LCD_P14 as described above for WF3TO0[WF3].0x7F800000      // 
#define Controls segments or phases connected to LCD_P13 as described above for WF3TO0[WF3].0x007F8000      // 
#define Controls segments or phases connected to LCD_P12 as described above for WF3TO0[WF3].0x00007F80      // 


//*****************************************************************************
//
// The following are defines for the bit fields in the LCD_WF19TO16 register.
//
//*****************************************************************************

#define Controls segments or phases connected to LCD_P19 as described above for WF3TO0[WF3].0x7F80000000      // 
#define Controls segments or phases connected to LCD_P18 as described above for WF3TO0[WF3].0x7F800000      // 
#define Controls segments or phases connected to LCD_P17 as described above for WF3TO0[WF3].0x007F8000      // 
#define Controls segments or phases connected to LCD_P16 as described above for WF3TO0[WF3].0x00007F80      // 


//*****************************************************************************
//
// The following are defines for the bit fields in the LCD_WF23TO20 register.
//
//*****************************************************************************

#define Controls segments or phases connected to LCD_P23 as described above for WF3TO0[WF3].0x7F80000000      // 
#define Controls segments or phases connected to LCD_P22 as described above for WF3TO0[WF3].0x7F800000      // 
#define Controls segments or phases connected to LCD_P21 as described above for WF3TO0[WF3].0x007F8000      // 
#define Controls segments or phases connected to LCD_P20 as described above for WF3TO0[WF3].0x00007F80      // 


//*****************************************************************************
//
// The following are defines for the bit fields in the LCD_WF27TO24 register.
//
//*****************************************************************************

#define Controls segments or phases connected to LCD_P27 as described above for WF3TO0[WF3].0x7F80000000      // 
#define Controls segments or phases connected to LCD_P26 as described above for WF3TO0[WF3].0x7F800000      // 
#define Controls segments or phases connected to LCD_P25 as described above for WF3TO0[WF3].0x007F8000      // 
#define Controls segments or phases connected to LCD_P24 as described above for WF3TO0[WF3].0x00007F80      // 


//*****************************************************************************
//
// The following are defines for the bit fields in the LCD_WF31TO28 register.
//
//*****************************************************************************

#define Controls segments or phases connected to LCD_P31 as described above for WF3TO0[WF3].0x7F80000000      // 
#define Controls segments or phases connected to LCD_P30 as described above for WF3TO0[WF3].0x7F800000      // 
#define Controls segments or phases connected to LCD_P29 as described above for WF3TO0[WF3].0x007F8000      // 
#define Controls segments or phases connected to LCD_P28 as described above for WF3TO0[WF3].0x00007F80      // 


//*****************************************************************************
//
// The following are defines for the bit fields in the LCD_WF35TO32 register.
//
//*****************************************************************************

#define Controls segments or phases connected to LCD_P35 as described above for WF3TO0[WF3].0x7F80000000      // 
#define Controls segments or phases connected to LCD_P34 as described above for WF3TO0[WF3].0x7F800000      // 
#define Controls segments or phases connected to LCD_P33 as described above for WF3TO0[WF3].0x007F8000      // 
#define Controls segments or phases connected to LCD_P32 as described above for WF3TO0[WF3].0x00007F80      // 


//*****************************************************************************
//
// The following are defines for the bit fields in the LCD_WF39TO36 register.
//
//*****************************************************************************

#define Controls segments or phases connected to LCD_P39 as described above for WF3TO0[WF3].0x7F80000000      // 
#define Controls segments or phases connected to LCD_P38 as described above for WF3TO0[WF3].0x7F800000      // 
#define Controls segments or phases connected to LCD_P37 as described above for WF3TO0[WF3].0x007F8000      // 
#define Controls segments or phases connected to LCD_P36 as described above for WF3TO0[WF3].0x00007F80      // 


//*****************************************************************************
//
// The following are defines for the bit fields in the LCD_WF43TO40 register.
//
//*****************************************************************************

#define Controls segments or phases connected to LCD_P43 as described above for WF3TO0[WF3].0x7F80000000      // 
#define Controls segments or phases connected to LCD_P42 as described above for WF3TO0[WF3].0x7F800000      // 
#define Controls segments or phases connected to LCD_P41 as described above for WF3TO0[WF3].0x007F8000      // 
#define Controls segments or phases connected to LCD_P40 as described above for WF3TO0[WF3].0x00007F80      // 


//*****************************************************************************
//
// The following are defines for the bit fields in the LCD_WF47TO44 register.
//
//*****************************************************************************

#define Controls segments or phases connected to LCD_P47 as described above for WF3TO0[WF3].0x7F80000000      // 
#define Controls segments or phases connected to LCD_P46 as described above for WF3TO0[WF3].0x7F800000      // 
#define Controls segments or phases connected to LCD_P45 as described above for WF3TO0[WF3].0x007F8000      // 
#define Controls segments or phases connected to LCD_P44 as described above for WF3TO0[WF3].0x00007F80      // 


//*****************************************************************************
//
// The following are defines for the bit fields in the LCD_WF51TO48 register.
//
//*****************************************************************************

#define Controls segments or phases connected to LCD_P51 as described above for WF3TO0[WF3].0x7F80000000      // 
#define Controls segments or phases connected to LCD_P50 as described above for WF3TO0[WF3].0x7F800000      // 
#define Controls segments or phases connected to LCD_P49 as described above for WF3TO0[WF3].0x007F8000      // 
#define Controls segments or phases connected to LCD_P48 as described above for WF3TO0[WF3].0x00007F80      // 


//*****************************************************************************
//
// The following are defines for the bit fields in the LCD_WF55TO52 register.
//
//*****************************************************************************

#define Controls segments or phases connected to LCD_P55 as described above for WF3TO0[WF3].0x7F80000000      // 
#define Controls segments or phases connected to LCD_P54 as described above for WF3TO0[WF3].0x7F800000      // 
#define Controls segments or phases connected to LCD_P53 as described above for WF3TO0[WF3].0x007F8000      // 
#define Controls segments or phases connected to LCD_P52 as described above for WF3TO0[WF3].0x00007F80      // 


//*****************************************************************************
//
// The following are defines for the bit fields in the LCD_WF59TO56 register.
//
//*****************************************************************************

#define Controls segments or phases connected to LCD_P59 as described above for WF3TO0[WF3].0x7F80000000      // 
#define Controls segments or phases connected to LCD_P58 as described above for WF3TO0[WF3].0x7F800000      // 
#define Controls segments or phases connected to LCD_P57 as described above for WF3TO0[WF3].0x007F8000      // 
#define Controls segments or phases connected to LCD_P56 as described above for WF3TO0[WF3].0x00007F80      // 


//*****************************************************************************
//
// The following are defines for the bit fields in the LCD_WF63TO60 register.
//
//*****************************************************************************

#define Controls segments or phases connected to LCD_P63 as described above for WF3TO0[WF3].0x7F80000000      // 
#define Controls segments or phases connected to LCD_P62 as described above for WF3TO0[WF3].0x7F800000      // 
#define Controls segments or phases connected to LCD_P61 as described above for WF3TO0[WF3].0x007F8000      // 



#endif // __MK40DX128VMD10_H__

