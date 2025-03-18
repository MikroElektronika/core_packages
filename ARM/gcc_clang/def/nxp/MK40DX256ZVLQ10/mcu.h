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

#ifndef __MK40DX256ZVLQ10_H__
#define __MK40DX256ZVLQ10_H__



//*****************************************************************************
//
// Interrupt assignments
//
//*****************************************************************************

#define NUMBER_OF_INT_VECTORS                   0                // Number of interrupts in the Vector table
#define NotAvail_IRQn                           --1               // Not available device specific interrupt



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
#define WDOG_REFRESH                  (*((volatile uint32_t *)0x4005200C))      // Watchdog Refresh Register
#define WDOG_UNLOCK                   (*((volatile uint32_t *)0x4005200E))      // Watchdog Unlock Register
#define WDOG_TMROUTH                  (*((volatile uint32_t *)0x40052010))      // Watchdog Timer Output Register High
#define WDOG_TMROUTL                  (*((volatile uint32_t *)0x40052012))      // Watchdog Timer Output Register Low
#define WDOG_RSTCNT                   (*((volatile uint32_t *)0x40052014))      // Watchdog Reset Count Register
#define WDOG_PRESC                    (*((volatile uint32_t *)0x40052016))      // Watchdog Prescaler Register


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
#define MCG_ATC                       (*((volatile uint32_t *)0x40064008))      // MCG Auto Trim Control Register
#define MCG_ATCVH                     (*((volatile uint32_t *)0x4006400A))      // MCG Auto Trim Compare Value High Register
#define MCG_ATCVL                     (*((volatile uint32_t *)0x4006400B))      // MCG Auto Trim Compare Value Low Register


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

#define FMC_PFAPR                     (*((volatile uint32_t *)0x4001F000))      // Flash Access Protection Register
#define FMC_PFB0CR                    (*((volatile uint32_t *)0x4001F004))      // Flash Bank 0 Control Register
#define FMC_PFB1CR                    (*((volatile uint32_t *)0x4001F008))      // Flash Bank 1 Control Register
#define FMC_TAGVDW0S0                 (*((volatile uint32_t *)0x4001F100))      // Cache Tag Storage
#define FMC_TAGVDW0S1                 (*((volatile uint32_t *)0x4001F104))      // Cache Tag Storage
#define FMC_TAGVDW0S2                 (*((volatile uint32_t *)0x4001F108))      // Cache Tag Storage
#define FMC_TAGVDW0S3                 (*((volatile uint32_t *)0x4001F10C))      // Cache Tag Storage
#define FMC_TAGVDW0S4                 (*((volatile uint32_t *)0x4001F110))      // Cache Tag Storage
#define FMC_TAGVDW0S5                 (*((volatile uint32_t *)0x4001F114))      // Cache Tag Storage
#define FMC_TAGVDW0S6                 (*((volatile uint32_t *)0x4001F118))      // Cache Tag Storage
#define FMC_TAGVDW0S7                 (*((volatile uint32_t *)0x4001F11C))      // Cache Tag Storage
#define FMC_TAGVDW1S0                 (*((volatile uint32_t *)0x4001F120))      // Cache Tag Storage
#define FMC_TAGVDW1S1                 (*((volatile uint32_t *)0x4001F124))      // Cache Tag Storage
#define FMC_TAGVDW1S2                 (*((volatile uint32_t *)0x4001F128))      // Cache Tag Storage
#define FMC_TAGVDW1S3                 (*((volatile uint32_t *)0x4001F12C))      // Cache Tag Storage


//*****************************************************************************
//
// External Bus Interface (FlexBus) registers
//
//*****************************************************************************

#define FB_CSAR0                      (*((volatile uint32_t *)0x4000C000))      // Chip select address register (FB_CSAR0)
#define FB_CSMR0                      (*((volatile uint32_t *)0x4000C004))      // Chip select mask register (FB_CSMR0)
#define FB_CSCR0                      (*((volatile uint32_t *)0x4000C008))      // Chip select control register (FB_CSCR0)
#define FB_CSAR1                      (*((volatile uint32_t *)0x4000C00C))      // Chip select address register (FB_CSAR1)
#define FB_CSMR1                      (*((volatile uint32_t *)0x4000C010))      // Chip select mask register (FB_CSMR1)
#define FB_CSCR1                      (*((volatile uint32_t *)0x4000C014))      // Chip select control register (FB_CSCR1)
#define FB_CSAR2                      (*((volatile uint32_t *)0x4000C018))      // Chip select address register (FB_CSAR2)
#define FB_CSMR2                      (*((volatile uint32_t *)0x4000C01C))      // Chip select mask register (FB_CSMR2)
#define FB_CSCR2                      (*((volatile uint32_t *)0x4000C020))      // Chip select control register (FB_CSCR2)
#define FB_CSAR3                      (*((volatile uint32_t *)0x4000C024))      // Chip select address register (FB_CSAR3)
#define FB_CSMR3                      (*((volatile uint32_t *)0x4000C028))      // Chip select mask register (FB_CSMR3)
#define FB_CSCR3                      (*((volatile uint32_t *)0x4000C02C))      // Chip select control register (FB_CSCR3)
#define FB_CSAR4                      (*((volatile uint32_t *)0x4000C030))      // Chip select address register (FB_CSAR4)
#define FB_CSMR4                      (*((volatile uint32_t *)0x4000C034))      // Chip select mask register (FB_CSMR4)
#define FB_CSCR4                      (*((volatile uint32_t *)0x4000C038))      // Chip select control register (FB_CSCR4)
#define FB_CSAR5                      (*((volatile uint32_t *)0x4000C03C))      // Chip select address register (FB_CSAR5)


//*****************************************************************************
//
// Cyclic redundancy check (CRC) registers
//
//*****************************************************************************

#define CRC_CRC                       (*((volatile uint32_t *)0x40032000))      // CRC Data Register
#define CRC_GPOLY                     (*((volatile uint32_t *)0x40032004))      // CRC Polynomial Register
#define CRC_CTRL                      (*((volatile uint32_t *)0x40032008))      // CRC Control Register


//*****************************************************************************
//
// Analog-to-Digital Converter (ADC) registers
//
//*****************************************************************************

#define ADC0_SC1A                     (*((volatile uint32_t *)0x4003B000))      // ADC status and control registers 1 (ADC0_SC1A)
#define ADC0_SC1B                     (*((volatile uint32_t *)0x4003B004))      // ADC status and control registers 1 (ADC0_SC1B)
#define ADC0_CFG1                     (*((volatile uint32_t *)0x4003B008))      // ADC configuration register 1 (ADC0_CFG1)
#define ADC0_CFG2                     (*((volatile uint32_t *)0x4003B00C))      // Configuration register 2 (ADC0_CFG2)
#define ADC0_RA                       (*((volatile uint32_t *)0x4003B010))      // ADC data result register (ADC0_RA)
#define ADC0_RB                       (*((volatile uint32_t *)0x4003B014))      // ADC data result register (ADC0_RB)
#define ADC0_CV1                      (*((volatile uint32_t *)0x4003B018))      // Compare value registers (ADC0_CV1)
#define ADC0_CV2                      (*((volatile uint32_t *)0x4003B01C))      // Compare value registers (ADC0_CV2)
#define ADC0_SC2                      (*((volatile uint32_t *)0x4003B020))      // Status and control register 2 (ADC0_SC2)
#define ADC0_SC3                      (*((volatile uint32_t *)0x4003B024))      // Status and control register 3 (ADC0_SC3)
#define ADC0_OFS                      (*((volatile uint32_t *)0x4003B028))      // ADC offset correction register (ADC0_OFS)
#define ADC0_PG                       (*((volatile uint32_t *)0x4003B02C))      // ADC plus-side gain register (ADC0_PG)
#define ADC0_MG                       (*((volatile uint32_t *)0x4003B030))      // ADC minus-side gain register (ADC0_MG)
#define ADC0_CLPD                     (*((volatile uint32_t *)0x4003B034))      // ADC plus-side general calibration value register (ADC0_CLPD)
#define ADC0_CLPS                     (*((volatile uint32_t *)0x4003B038))      // ADC plus-side general calibration value register (ADC0_CLPS)
#define ADC0_CLP4                     (*((volatile uint32_t *)0x4003B03C))      // ADC plus-side general calibration value register (ADC0_CLP4)
#define ADC0_CLP3                     (*((volatile uint32_t *)0x4003B040))      // ADC plus-side general calibration value register (ADC0_CLP3)
#define ADC0_CLP2                     (*((volatile uint32_t *)0x4003B044))      // ADC plus-side general calibration value register (ADC0_CLP2)
#define ADC0_CLP1                     (*((volatile uint32_t *)0x4003B048))      // ADC plus-side general calibration value register (ADC0_CLP1)
#define ADC0_CLP0                     (*((volatile uint32_t *)0x4003B04C))      // ADC plus-side general calibration value register (ADC0_CLP0)
#define ADC0_PGA                      (*((volatile uint32_t *)0x4003B050))      // ADC PGA register (ADC0_PGA)
#define ADC0_CLMD                     (*((volatile uint32_t *)0x4003B054))      // ADC minus-side general calibration value register (ADC0_CLMD)
#define ADC0_CLMS                     (*((volatile uint32_t *)0x4003B058))      // ADC minus-side general calibration value register (ADC0_CLMS)
#define ADC0_CLM4                     (*((volatile uint32_t *)0x4003B05C))      // ADC minus-side general calibration value register (ADC0_CLM4)
#define ADC0_CLM3                     (*((volatile uint32_t *)0x4003B060))      // ADC minus-side general calibration value register (ADC0_CLM3)
#define ADC0_CLM2                     (*((volatile uint32_t *)0x4003B064))      // ADC minus-side general calibration value register (ADC0_CLM2)
#define ADC0_CLM1                     (*((volatile uint32_t *)0x4003B068))      // ADC minus-side general calibration value register (ADC0_CLM1)
#define ADC0_CLM0                     (*((volatile uint32_t *)0x4003B06C))      // ADC minus-side general calibration value register (ADC0_CLM0)
#define ADC1_SC1A                     (*((volatile uint32_t *)0x400BB000))      // ADC status and control registers 1 (ADC1_SC1A)
#define ADC1_SC1B                     (*((volatile uint32_t *)0x400BB004))      // ADC status and control registers 1 (ADC1_SC1B)
#define ADC1_CFG1                     (*((volatile uint32_t *)0x400BB008))      // ADC configuration register 1 (ADC1_CFG1)
#define ADC1_CFG2                     (*((volatile uint32_t *)0x400BB00C))      // Configuration register 2 (ADC1_CFG2)
#define ADC1_RA                       (*((volatile uint32_t *)0x400BB010))      // ADC data result register (ADC1_RA)
#define ADC1_RB                       (*((volatile uint32_t *)0x400BB014))      // ADC data result register (ADC1_RB)
#define ADC1_CV1                      (*((volatile uint32_t *)0x400BB018))      // Compare value registers (ADC1_CV1)
#define ADC1_CV2                      (*((volatile uint32_t *)0x400BB01C))      // Compare value registers (ADC1_CV2)
#define ADC1_SC2                      (*((volatile uint32_t *)0x400BB020))      // Status and control register 2 (ADC1_SC2)
#define ADC1_SC3                      (*((volatile uint32_t *)0x400BB024))      // Status and control register 3 (ADC1_SC3)
#define ADC1_OFS                      (*((volatile uint32_t *)0x400BB028))      // ADC offset correction register (ADC1_OFS)
#define ADC1_PG                       (*((volatile uint32_t *)0x400BB02C))      // ADC plus-side gain register (ADC1_PG)
#define ADC1_MG                       (*((volatile uint32_t *)0x400BB030))      // ADC minus-side gain register (ADC1_MG)
#define ADC1_CLPD                     (*((volatile uint32_t *)0x400BB034))      // ADC plus-side general calibration value register (ADC1_CLPD)
#define ADC1_CLPS                     (*((volatile uint32_t *)0x400BB038))      // ADC plus-side general calibration value register (ADC1_CLPS)
#define ADC1_CLP4                     (*((volatile uint32_t *)0x400BB03C))      // ADC plus-side general calibration value register (ADC1_CLP4)
#define ADC1_CLP3                     (*((volatile uint32_t *)0x400BB040))      // ADC plus-side general calibration value register (ADC1_CLP3)
#define ADC1_CLP2                     (*((volatile uint32_t *)0x400BB044))      // ADC plus-side general calibration value register (ADC1_CLP2)
#define ADC1_CLP1                     (*((volatile uint32_t *)0x400BB048))      // ADC plus-side general calibration value register (ADC1_CLP1)
#define ADC1_CLP0                     (*((volatile uint32_t *)0x400BB04C))      // ADC plus-side general calibration value register (ADC1_CLP0)
#define ADC1_PGA                      (*((volatile uint32_t *)0x400BB050))      // ADC PGA register (ADC1_PGA)
#define ADC1_CLMD                     (*((volatile uint32_t *)0x400BB054))      // ADC minus-side general calibration value register (ADC1_CLMD)
#define ADC1_CLMS                     (*((volatile uint32_t *)0x400BB058))      // ADC minus-side general calibration value register (ADC1_CLMS)
#define ADC1_CLM4                     (*((volatile uint32_t *)0x400BB05C))      // ADC minus-side general calibration value register (ADC1_CLM4)
#define ADC1_CLM3                     (*((volatile uint32_t *)0x400BB060))      // ADC minus-side general calibration value register (ADC1_CLM3)
#define ADC1_CLM2                     (*((volatile uint32_t *)0x400BB064))      // ADC minus-side general calibration value register (ADC1_CLM2)
#define ADC1_CLM1                     (*((volatile uint32_t *)0x400BB068))      // ADC minus-side general calibration value register (ADC1_CLM1)
#define ADC1_CLM0                     (*((volatile uint32_t *)0x400BB06C))      // ADC minus-side general calibration value register (ADC1_CLM0)


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
#define DAC1_DAT0L                    (*((volatile uint32_t *)0x400CD000))      // DAC Data Low Register
#define DAC1_DAT0H                    (*((volatile uint32_t *)0x400CD001))      // DAC Data High Register
#define DAC1_DAT1L                    (*((volatile uint32_t *)0x400CD002))      // DAC Data Low Register
#define DAC1_DAT1H                    (*((volatile uint32_t *)0x400CD003))      // DAC Data High Register
#define DAC1_DAT2L                    (*((volatile uint32_t *)0x400CD004))      // DAC Data Low Register
#define DAC1_DAT2H                    (*((volatile uint32_t *)0x400CD005))      // DAC Data High Register
#define DAC1_DAT3L                    (*((volatile uint32_t *)0x400CD006))      // DAC Data Low Register
#define DAC1_DAT3H                    (*((volatile uint32_t *)0x400CD007))      // DAC Data High Register
#define DAC1_DAT4L                    (*((volatile uint32_t *)0x400CD008))      // DAC Data Low Register
#define DAC1_DAT4H                    (*((volatile uint32_t *)0x400CD009))      // DAC Data High Register
#define DAC1_DAT5L                    (*((volatile uint32_t *)0x400CD00A))      // DAC Data Low Register
#define DAC1_DAT5H                    (*((volatile uint32_t *)0x400CD00B))      // DAC Data High Register
#define DAC1_DAT6L                    (*((volatile uint32_t *)0x400CD00C))      // DAC Data Low Register
#define DAC1_DAT6H                    (*((volatile uint32_t *)0x400CD00D))      // DAC Data High Register
#define DAC1_DAT7L                    (*((volatile uint32_t *)0x400CD00E))      // DAC Data Low Register
#define DAC1_DAT7H                    (*((volatile uint32_t *)0x400CD00F))      // DAC Data High Register
#define DAC1_DAT8L                    (*((volatile uint32_t *)0x400CD010))      // DAC Data Low Register
#define DAC1_DAT8H                    (*((volatile uint32_t *)0x400CD011))      // DAC Data High Register
#define DAC1_DAT9L                    (*((volatile uint32_t *)0x400CD012))      // DAC Data Low Register
#define DAC1_DAT9H                    (*((volatile uint32_t *)0x400CD013))      // DAC Data High Register
#define DAC1_DAT10L                   (*((volatile uint32_t *)0x400CD014))      // DAC Data Low Register
#define DAC1_DAT10H                   (*((volatile uint32_t *)0x400CD015))      // DAC Data High Register
#define DAC1_DAT11L                   (*((volatile uint32_t *)0x400CD016))      // DAC Data Low Register
#define DAC1_DAT11H                   (*((volatile uint32_t *)0x400CD017))      // DAC Data High Register
#define DAC1_DAT12L                   (*((volatile uint32_t *)0x400CD018))      // DAC Data Low Register
#define DAC1_DAT12H                   (*((volatile uint32_t *)0x400CD019))      // DAC Data High Register
#define DAC1_DAT13L                   (*((volatile uint32_t *)0x400CD01A))      // DAC Data Low Register
#define DAC1_DAT13H                   (*((volatile uint32_t *)0x400CD01B))      // DAC Data High Register
#define DAC1_DAT14L                   (*((volatile uint32_t *)0x400CD01C))      // DAC Data Low Register
#define DAC1_DAT14H                   (*((volatile uint32_t *)0x400CD01D))      // DAC Data High Register
#define DAC1_DAT15L                   (*((volatile uint32_t *)0x400CD01E))      // DAC Data Low Register
#define DAC1_DAT15H                   (*((volatile uint32_t *)0x400CD01F))      // DAC Data High Register
#define DAC1_SR                       (*((volatile uint32_t *)0x400CD020))      // DAC Status Register
#define DAC1_C0                       (*((volatile uint32_t *)0x400CD021))      // DAC Control Register
#define DAC1_C1                       (*((volatile uint32_t *)0x400CD022))      // DAC Control Register 1
#define DAC1_C2                       (*((volatile uint32_t *)0x400CD023))      // DAC Control Register 2


//*****************************************************************************
//
// Voltage Reference (VREFV1) registers
//
//*****************************************************************************

#define VREF_TRM                      (*((volatile uint32_t *)0x40074000))      // VREF Trim Register
#define VREF_SC                       (*((volatile uint32_t *)0x40074001))      // VREF Status and Control Register


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


//*****************************************************************************
//
// FlexTimer (FTM) registers
//
//*****************************************************************************

#define FTM0_SC                       (*((volatile uint32_t *)0x40038000))      // Status and Control (FTM0_SC)
#define FTM0_CNT                      (*((volatile uint32_t *)0x40038004))      // Counter (FTM0_CNT)
#define FTM0_MOD                      (*((volatile uint32_t *)0x40038008))      // Modulo (FTM0_MOD)
#define FTM0_C0SC                     (*((volatile uint32_t *)0x4003800C))      // Channel (n) Status and Control (FTM0_C0SC)
#define FTM0_C0V                      (*((volatile uint32_t *)0x40038010))      // Channel (n) Value (FTM0_C0V)
#define FTM0_C1SC                     (*((volatile uint32_t *)0x40038014))      // Channel (n) Status and Control (FTM0_C1SC)
#define FTM0_C1V                      (*((volatile uint32_t *)0x40038018))      // Channel (n) Value (FTM0_C1V)
#define FTM0_C2SC                     (*((volatile uint32_t *)0x4003801C))      // Channel (n) Status and Control (FTM0_C2SC)
#define FTM0_C2V                      (*((volatile uint32_t *)0x40038020))      // Channel (n) Value (FTM0_C2V)
#define FTM0_C3SC                     (*((volatile uint32_t *)0x40038024))      // Channel (n) Status and Control (FTM0_C3SC)
#define FTM0_C3V                      (*((volatile uint32_t *)0x40038028))      // Channel (n) Value (FTM0_C3V)
#define FTM0_C4SC                     (*((volatile uint32_t *)0x4003802C))      // Channel (n) Status and Control (FTM0_C4SC)
#define FTM0_C4V                      (*((volatile uint32_t *)0x40038030))      // Channel (n) Value (FTM0_C4V)
#define FTM0_C5SC                     (*((volatile uint32_t *)0x40038034))      // Channel (n) Status and Control (FTM0_C5SC)
#define FTM0_C5V                      (*((volatile uint32_t *)0x40038038))      // Channel (n) Value (FTM0_C5V)
#define FTM0_C6SC                     (*((volatile uint32_t *)0x4003803C))      // Channel (n) Status and Control (FTM0_C6SC)
#define FTM0_C6V                      (*((volatile uint32_t *)0x40038040))      // Channel (n) Value (FTM0_C6V)
#define FTM0_C7SC                     (*((volatile uint32_t *)0x40038044))      // Channel (n) Status and Control (FTM0_C7SC)
#define FTM0_C7V                      (*((volatile uint32_t *)0x40038048))      // Channel (n) Value (FTM0_C7V)
#define FTM0_CNTIN                    (*((volatile uint32_t *)0x4003804C))      // Counter Initial Value (FTM0_CNTIN)
#define FTM0_STATUS                   (*((volatile uint32_t *)0x40038050))      // Capture and Compare Status (FTM0_STATUS)
#define FTM0_MODE                     (*((volatile uint32_t *)0x40038054))      // Features Mode Selection (FTM0_MODE)
#define FTM0_SYNC                     (*((volatile uint32_t *)0x40038058))      // Synchronization (FTM0_SYNC)
#define FTM0_OUTINIT                  (*((volatile uint32_t *)0x4003805C))      // Initial State for Channels Output (FTM0_OUTINIT)
#define FTM0_OUTMASK                  (*((volatile uint32_t *)0x40038060))      // Output Mask (FTM0_OUTMASK)
#define FTM0_COMBINE                  (*((volatile uint32_t *)0x40038064))      // Function for Linked Channels (FTM0_COMBINE)
#define FTM0_DEADTIME                 (*((volatile uint32_t *)0x40038068))      // Deadtime Insertion Control (FTM0_DEADTIME)
#define FTM0_EXTTRIG                  (*((volatile uint32_t *)0x4003806C))      // FTM External Trigger (FTM0_EXTTRIG)
#define FTM0_POL                      (*((volatile uint32_t *)0x40038070))      // Channels Polarity (FTM0_POL)
#define FTM0_FMS                      (*((volatile uint32_t *)0x40038074))      // Fault Mode Status (FTM0_FMS)
#define FTM0_FILTER                   (*((volatile uint32_t *)0x40038078))      // Input Capture Filter Control (FTM0_FILTER)
#define FTM0_FLTCTRL                  (*((volatile uint32_t *)0x4003807C))      // Fault Control (FTM0_FLTCTRL)
#define FTM0_QDCTRL                   (*((volatile uint32_t *)0x40038080))      // Quadrature Decoder Control and Status (FTM0_QDCTRL)
#define FTM0_CONF                     (*((volatile uint32_t *)0x40038084))      // Configuration (FTM0_CONF)
#define FTM0_FLTPOL                   (*((volatile uint32_t *)0x40038088))      // FTM Fault Input Polarity (FTM0_FLTPOL)
#define FTM0_SYNCONF                  (*((volatile uint32_t *)0x4003808C))      // Synchronization Configuration (FTM0_SYNCONF)
#define FTM0_INVCTRL                  (*((volatile uint32_t *)0x40038090))      // FTM Inverting Control (FTM0_INVCTRL)
#define FTM0_SWOCTRL                  (*((volatile uint32_t *)0x40038094))      // FTM Software Output Control (FTM0_SWOCTRL)
#define FTM0_PWMLOAD                  (*((volatile uint32_t *)0x40038098))      // FTM PWM Load (FTM0_PWMLOAD)
#define FTM1_SC                       (*((volatile uint32_t *)0x40039000))      // Status and Control (FTM1_SC)
#define FTM1_CNT                      (*((volatile uint32_t *)0x40039004))      // Counter (FTM1_CNT)
#define FTM1_MOD                      (*((volatile uint32_t *)0x40039008))      // Modulo (FTM1_MOD)
#define FTM1_C0SC                     (*((volatile uint32_t *)0x4003900C))      // Channel (n) Status and Control (FTM1_C0SC)
#define FTM1_C0V                      (*((volatile uint32_t *)0x40039010))      // Channel (n) Value (FTM1_C0V)
#define FTM1_C1SC                     (*((volatile uint32_t *)0x40039014))      // Channel (n) Status and Control (FTM1_C1SC)
#define FTM1_C1V                      (*((volatile uint32_t *)0x40039018))      // Channel (n) Value (FTM1_C1V)
#define FTM1_C2SC                     (*((volatile uint32_t *)0x4003901C))      // Channel (n) Status and Control (FTM1_C2SC)
#define FTM1_C2V                      (*((volatile uint32_t *)0x40039020))      // Channel (n) Value (FTM1_C2V)
#define FTM1_C3SC                     (*((volatile uint32_t *)0x40039024))      // Channel (n) Status and Control (FTM1_C3SC)
#define FTM1_C3V                      (*((volatile uint32_t *)0x40039028))      // Channel (n) Value (FTM1_C3V)
#define FTM1_C4SC                     (*((volatile uint32_t *)0x4003902C))      // Channel (n) Status and Control (FTM1_C4SC)
#define FTM1_C4V                      (*((volatile uint32_t *)0x40039030))      // Channel (n) Value (FTM1_C4V)
#define FTM1_C5SC                     (*((volatile uint32_t *)0x40039034))      // Channel (n) Status and Control (FTM1_C5SC)
#define FTM1_C5V                      (*((volatile uint32_t *)0x40039038))      // Channel (n) Value (FTM1_C5V)
#define FTM1_C6SC                     (*((volatile uint32_t *)0x4003903C))      // Channel (n) Status and Control (FTM1_C6SC)
#define FTM1_C6V                      (*((volatile uint32_t *)0x40039040))      // Channel (n) Value (FTM1_C6V)
#define FTM1_C7SC                     (*((volatile uint32_t *)0x40039044))      // Channel (n) Status and Control (FTM1_C7SC)
#define FTM1_C7V                      (*((volatile uint32_t *)0x40039048))      // Channel (n) Value (FTM1_C7V)
#define FTM1_CNTIN                    (*((volatile uint32_t *)0x4003904C))      // Counter Initial Value (FTM1_CNTIN)
#define FTM1_STATUS                   (*((volatile uint32_t *)0x40039050))      // Capture and Compare Status (FTM1_STATUS)
#define FTM1_MODE                     (*((volatile uint32_t *)0x40039054))      // Features Mode Selection (FTM1_MODE)
#define FTM1_SYNC                     (*((volatile uint32_t *)0x40039058))      // Synchronization (FTM1_SYNC)
#define FTM1_OUTINIT                  (*((volatile uint32_t *)0x4003905C))      // Initial State for Channels Output (FTM1_OUTINIT)
#define FTM1_OUTMASK                  (*((volatile uint32_t *)0x40039060))      // Output Mask (FTM1_OUTMASK)
#define FTM1_COMBINE                  (*((volatile uint32_t *)0x40039064))      // Function for Linked Channels (FTM1_COMBINE)
#define FTM1_DEADTIME                 (*((volatile uint32_t *)0x40039068))      // Deadtime Insertion Control (FTM1_DEADTIME)
#define FTM1_EXTTRIG                  (*((volatile uint32_t *)0x4003906C))      // FTM External Trigger (FTM1_EXTTRIG)
#define FTM1_POL                      (*((volatile uint32_t *)0x40039070))      // Channels Polarity (FTM1_POL)
#define FTM1_FMS                      (*((volatile uint32_t *)0x40039074))      // Fault Mode Status (FTM1_FMS)
#define FTM1_FILTER                   (*((volatile uint32_t *)0x40039078))      // Input Capture Filter Control (FTM1_FILTER)
#define FTM1_FLTCTRL                  (*((volatile uint32_t *)0x4003907C))      // Fault Control (FTM1_FLTCTRL)
#define FTM1_QDCTRL                   (*((volatile uint32_t *)0x40039080))      // Quadrature Decoder Control and Status (FTM1_QDCTRL)
#define FTM1_CONF                     (*((volatile uint32_t *)0x40039084))      // Configuration (FTM1_CONF)
#define FTM1_FLTPOL                   (*((volatile uint32_t *)0x40039088))      // FTM Fault Input Polarity (FTM1_FLTPOL)
#define FTM1_SYNCONF                  (*((volatile uint32_t *)0x4003908C))      // Synchronization Configuration (FTM1_SYNCONF)
#define FTM1_INVCTRL                  (*((volatile uint32_t *)0x40039090))      // FTM Inverting Control (FTM1_INVCTRL)
#define FTM1_SWOCTRL                  (*((volatile uint32_t *)0x40039094))      // FTM Software Output Control (FTM1_SWOCTRL)
#define FTM1_PWMLOAD                  (*((volatile uint32_t *)0x40039098))      // FTM PWM Load (FTM1_PWMLOAD)
#define FTM2_SC                       (*((volatile uint32_t *)0x400B8000))      // Status and Control (FTM2_SC)
#define FTM2_CNT                      (*((volatile uint32_t *)0x400B8004))      // Counter (FTM2_CNT)
#define FTM2_MOD                      (*((volatile uint32_t *)0x400B8008))      // Modulo (FTM2_MOD)
#define FTM2_C0SC                     (*((volatile uint32_t *)0x400B800C))      // Channel (n) Status and Control (FTM2_C0SC)
#define FTM2_C0V                      (*((volatile uint32_t *)0x400B8010))      // Channel (n) Value (FTM2_C0V)
#define FTM2_C1SC                     (*((volatile uint32_t *)0x400B8014))      // Channel (n) Status and Control (FTM2_C1SC)
#define FTM2_C1V                      (*((volatile uint32_t *)0x400B8018))      // Channel (n) Value (FTM2_C1V)
#define FTM2_C2SC                     (*((volatile uint32_t *)0x400B801C))      // Channel (n) Status and Control (FTM2_C2SC)
#define FTM2_C2V                      (*((volatile uint32_t *)0x400B8020))      // Channel (n) Value (FTM2_C2V)
#define FTM2_C3SC                     (*((volatile uint32_t *)0x400B8024))      // Channel (n) Status and Control (FTM2_C3SC)
#define FTM2_C3V                      (*((volatile uint32_t *)0x400B8028))      // Channel (n) Value (FTM2_C3V)
#define FTM2_C4SC                     (*((volatile uint32_t *)0x400B802C))      // Channel (n) Status and Control (FTM2_C4SC)
#define FTM2_C4V                      (*((volatile uint32_t *)0x400B8030))      // Channel (n) Value (FTM2_C4V)
#define FTM2_C5SC                     (*((volatile uint32_t *)0x400B8034))      // Channel (n) Status and Control (FTM2_C5SC)
#define FTM2_C5V                      (*((volatile uint32_t *)0x400B8038))      // Channel (n) Value (FTM2_C5V)
#define FTM2_C6SC                     (*((volatile uint32_t *)0x400B803C))      // Channel (n) Status and Control (FTM2_C6SC)
#define FTM2_C6V                      (*((volatile uint32_t *)0x400B8040))      // Channel (n) Value (FTM2_C6V)
#define FTM2_C7SC                     (*((volatile uint32_t *)0x400B8044))      // Channel (n) Status and Control (FTM2_C7SC)
#define FTM2_C7V                      (*((volatile uint32_t *)0x400B8048))      // Channel (n) Value (FTM2_C7V)
#define FTM2_CNTIN                    (*((volatile uint32_t *)0x400B804C))      // Counter Initial Value (FTM2_CNTIN)
#define FTM2_STATUS                   (*((volatile uint32_t *)0x400B8050))      // Capture and Compare Status (FTM2_STATUS)
#define FTM2_MODE                     (*((volatile uint32_t *)0x400B8054))      // Features Mode Selection (FTM2_MODE)
#define FTM2_SYNC                     (*((volatile uint32_t *)0x400B8058))      // Synchronization (FTM2_SYNC)
#define FTM2_OUTINIT                  (*((volatile uint32_t *)0x400B805C))      // Initial State for Channels Output (FTM2_OUTINIT)
#define FTM2_OUTMASK                  (*((volatile uint32_t *)0x400B8060))      // Output Mask (FTM2_OUTMASK)
#define FTM2_COMBINE                  (*((volatile uint32_t *)0x400B8064))      // Function for Linked Channels (FTM2_COMBINE)
#define FTM2_DEADTIME                 (*((volatile uint32_t *)0x400B8068))      // Deadtime Insertion Control (FTM2_DEADTIME)
#define FTM2_EXTTRIG                  (*((volatile uint32_t *)0x400B806C))      // FTM External Trigger (FTM2_EXTTRIG)
#define FTM2_POL                      (*((volatile uint32_t *)0x400B8070))      // Channels Polarity (FTM2_POL)
#define FTM2_FMS                      (*((volatile uint32_t *)0x400B8074))      // Fault Mode Status (FTM2_FMS)
#define FTM2_FILTER                   (*((volatile uint32_t *)0x400B8078))      // Input Capture Filter Control (FTM2_FILTER)
#define FTM2_FLTCTRL                  (*((volatile uint32_t *)0x400B807C))      // Fault Control (FTM2_FLTCTRL)
#define FTM2_QDCTRL                   (*((volatile uint32_t *)0x400B8080))      // Quadrature Decoder Control and Status (FTM2_QDCTRL)
#define FTM2_CONF                     (*((volatile uint32_t *)0x400B8084))      // Configuration (FTM2_CONF)
#define FTM2_FLTPOL                   (*((volatile uint32_t *)0x400B8088))      // FTM Fault Input Polarity (FTM2_FLTPOL)
#define FTM2_SYNCONF                  (*((volatile uint32_t *)0x400B808C))      // Synchronization Configuration (FTM2_SYNCONF)
#define FTM2_INVCTRL                  (*((volatile uint32_t *)0x400B8090))      // FTM Inverting Control (FTM2_INVCTRL)
#define FTM2_SWOCTRL                  (*((volatile uint32_t *)0x400B8094))      // FTM Software Output Control (FTM2_SWOCTRL)
#define FTM2_PWMLOAD                  (*((volatile uint32_t *)0x400B8098))      // FTM PWM Load (FTM2_PWMLOAD)


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
// Low power timer (LPTMR) registers
//
//*****************************************************************************

#define LPTMR0_CSR                    (*((volatile uint32_t *)0x40040000))      // Low Power Timer Control Status Register
#define LPTMR0_PSR                    (*((volatile uint32_t *)0x40040004))      // Low Power Timer Prescale Register
#define LPTMR0_CMR                    (*((volatile uint32_t *)0x40040008))      // Low Power Timer Compare Register
#define LPTMR0_CNR                    (*((volatile uint32_t *)0x4004000C))      // Low Power Timer Counter Register


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
#define CMT_DMA                       (*((volatile uint32_t *)0x4006200B))      // CMT Direct Memory Access


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
// Universal Serial Bus OTG Controller (USBOTG) registers
//
//*****************************************************************************

#define USB0_PERID                    (*((volatile uint32_t *)0x40072000))      // Peripheral ID Register (USB0_PERID)
#define USB0_IDCOMP                   (*((volatile uint32_t *)0x40072004))      // Peripheral ID Complement Register (USB0_IDCOMP)
#define USB0_REV                      (*((volatile uint32_t *)0x40072008))      // Peripheral Revision Register (USB0_REV)
#define USB0_ADDINFO                  (*((volatile uint32_t *)0x4007200C))      // Peripheral Additional Info Register (USB0_ADDINFO)
#define USB0_OTGISTAT                 (*((volatile uint32_t *)0x40072010))      // OTG Interrupt Status Register (USB0_OTGISTAT)
#define USB0_OTGICR                   (*((volatile uint32_t *)0x40072014))      // OTG Interrupt Control Register (USB0_OTGICR)
#define USB0_OTGSTAT                  (*((volatile uint32_t *)0x40072018))      // OTG Status Register (USB0_OTGSTAT)
#define USB0_OTGCTL                   (*((volatile uint32_t *)0x4007201C))      // OTG Control Register (USB0_OTGCTL)
#define USB0_ISTAT                    (*((volatile uint32_t *)0x40072080))      // Interrupt Status Register (USB0_ISTAT)
#define USB0_INTEN                    (*((volatile uint32_t *)0x40072084))      // Interrupt Enable Register (USB0_INTEN)
#define USB0_ERRSTAT                  (*((volatile uint32_t *)0x40072088))      // Error Interrupt Status Register (USB0_ERRSTAT)
#define USB0_ERREN                    (*((volatile uint32_t *)0x4007208C))      // Error Interrupt Enable Register (USB0_ERREN)
#define USB0_STAT                     (*((volatile uint32_t *)0x40072090))      // Status Register (USB0_STAT)
#define USB0_CTL                      (*((volatile uint32_t *)0x40072094))      // Control Register (USB0_CTL)
#define USB0_ADDR                     (*((volatile uint32_t *)0x40072098))      // Address Register (USB0_ADDR)
#define USB0_BDTPAGE1                 (*((volatile uint32_t *)0x4007209C))      // BDT Page Register 1 (USB0_BDTPAGE1)
#define USB0_FRMNUML                  (*((volatile uint32_t *)0x400720A0))      // Frame Number Register Low (USB0_FRMNUML)
#define USB0_FRMNUMH                  (*((volatile uint32_t *)0x400720A4))      // Frame Number Register High (USB0_FRMNUMH)
#define USB0_TOKEN                    (*((volatile uint32_t *)0x400720A8))      // Token Register (USB0_TOKEN)
#define USB0_SOFTHLD                  (*((volatile uint32_t *)0x400720AC))      // SOF Threshold Register (USB0_SOFTHLD)
#define USB0_BDTPAGE2                 (*((volatile uint32_t *)0x400720B0))      // BDT Page Register 2 (USB0_BDTPAGE2)
#define USB0_BDTPAGE3                 (*((volatile uint32_t *)0x400720B4))      // BDT Page Register 3 (USB0_BDTPAGE3)
#define USB0_ENDPT0                   (*((volatile uint32_t *)0x400720C0))      // Endpoint Control Register (USB0_ENDPT0)
#define USB0_ENDPT1                   (*((volatile uint32_t *)0x400720C4))      // Endpoint Control Register (USB0_ENDPT1)
#define USB0_ENDPT2                   (*((volatile uint32_t *)0x400720C8))      // Endpoint Control Register (USB0_ENDPT2)
#define USB0_ENDPT3                   (*((volatile uint32_t *)0x400720CC))      // Endpoint Control Register (USB0_ENDPT3)
#define USB0_ENDPT4                   (*((volatile uint32_t *)0x400720D0))      // Endpoint Control Register (USB0_ENDPT4)
#define USB0_ENDPT5                   (*((volatile uint32_t *)0x400720D4))      // Endpoint Control Register (USB0_ENDPT5)
#define USB0_ENDPT6                   (*((volatile uint32_t *)0x400720D8))      // Endpoint Control Register (USB0_ENDPT6)
#define USB0_ENDPT7                   (*((volatile uint32_t *)0x400720DC))      // Endpoint Control Register (USB0_ENDPT7)
#define USB0_ENDPT8                   (*((volatile uint32_t *)0x400720E0))      // Endpoint Control Register (USB0_ENDPT8)
#define USB0_ENDPT9                   (*((volatile uint32_t *)0x400720E4))      // Endpoint Control Register (USB0_ENDPT9)
#define USB0_ENDPT10                  (*((volatile uint32_t *)0x400720E8))      // Endpoint Control Register (USB0_ENDPT10)
#define USB0_ENDPT11                  (*((volatile uint32_t *)0x400720EC))      // Endpoint Control Register (USB0_ENDPT11)
#define USB0_ENDPT12                  (*((volatile uint32_t *)0x400720F0))      // Endpoint Control Register (USB0_ENDPT12)
#define USB0_ENDPT13                  (*((volatile uint32_t *)0x400720F4))      // Endpoint Control Register (USB0_ENDPT13)
#define USB0_ENDPT14                  (*((volatile uint32_t *)0x400720F8))      // Endpoint Control Register (USB0_ENDPT14)
#define USB0_ENDPT15                  (*((volatile uint32_t *)0x400720FC))      // Endpoint Control Register (USB0_ENDPT15)
#define USB0_USBCTRL                  (*((volatile uint32_t *)0x40072100))      // USB Control Register (USB0_USBCTRL)
#define USB0_OBSERVE                  (*((volatile uint32_t *)0x40072104))      // USB OTG Observe Register (USB0_OBSERVE)
#define USB0_CONTROL                  (*((volatile uint32_t *)0x40072108))      // USB OTG Control Register (USB0_CONTROL)
#define USB0_USBTRC0                  (*((volatile uint32_t *)0x4007210C))      // USB Transceiver Control Register 0 (USB0_USBTRC0)


//*****************************************************************************
//
// USB Device Charger Detection Module (USBDCD) registers
//
//*****************************************************************************

#define USBDCD_CONTROL                (*((volatile uint32_t *)0x40035000))      // USBDCD control and interrupt bit fields
#define USBDCD_CLOCK                  (*((volatile uint32_t *)0x40035004))      // Clock Register
#define USBDCD_STATUS                 (*((volatile uint32_t *)0x40035008))      // Status Register
#define USBDCD_TIMER0                 (*((volatile uint32_t *)0x40035010))      // TIMER0 Register
#define USBDCD_TIMER1                 (*((volatile uint32_t *)0x40035014))      // TIMER1 Register
#define USBDCD_TIMER2                 (*((volatile uint32_t *)0x40035018))      // TIMER2 Register


//*****************************************************************************
//
// CAN (FlexCAN) registers
//
//*****************************************************************************

#define CAN0_MCR                      (*((volatile uint32_t *)0x40024000))      // Module Configuration Register (CAN0_MCR)
#define CAN0_CTRL1                    (*((volatile uint32_t *)0x40024004))      // Control 1 Register (CAN0_CTRL1)
#define CAN0_TIMER                    (*((volatile uint32_t *)0x40024008))      // Free Running Timer (CAN0_TIMER)
#define CAN0_RXMGMASK                 (*((volatile uint32_t *)0x40024010))      // Rx Mailboxes Global Mask Register (CAN0_RXMGMASK)
#define CAN0_RX14MASK                 (*((volatile uint32_t *)0x40024014))      // Rx 14 Mask Register (CAN0_RX14MASK)
#define CAN0_RX15MASK                 (*((volatile uint32_t *)0x40024018))      // Rx 15 Mask Register (CAN0_RX15MASK)
#define CAN0_ECR                      (*((volatile uint32_t *)0x4002401C))      // Error Counter (CAN0_ECR)
#define CAN0_ESR1                     (*((volatile uint32_t *)0x40024020))      // Error and Status 1 Register (CAN0_ESR1)
#define CAN0_IMASK2                   (*((volatile uint32_t *)0x40024024))      // Interrupt Masks 2 Register (CAN0_IMASK2)
#define CAN0_IMASK1                   (*((volatile uint32_t *)0x40024028))      // Interrupt Masks 1 Register (CAN0_IMASK1)
#define CAN0_IFLAG2                   (*((volatile uint32_t *)0x4002402C))      // Interrupt Flags 2 Register (CAN0_IFLAG2)
#define CAN0_IFLAG1                   (*((volatile uint32_t *)0x40024030))      // Interrupt Flags 1 Register (CAN0_IFLAG1)
#define CAN0_CTRL2                    (*((volatile uint32_t *)0x40024034))      // Control 2 Register (CAN0_CTRL2)
#define CAN0_ESR2                     (*((volatile uint32_t *)0x40024038))      // Error and Status 2 Register (CAN0_ESR2)
#define CAN0_CRCR                     (*((volatile uint32_t *)0x40024044))      // CRC Register (CAN0_CRCR)
#define CAN0_RXFGMASK                 (*((volatile uint32_t *)0x40024048))      // Rx FIFO Global Mask Register (CAN0_RXFGMASK)
#define CAN0_RXFIR                    (*((volatile uint32_t *)0x4002404C))      // Rx FIFO Information Register (CAN0_RXFIR)
#define CAN0_RXIMR0                   (*((volatile uint32_t *)0x40024880))      // Rx Individual Mask Registers (CAN0_RXIMR0)
#define CAN0_RXIMR1                   (*((volatile uint32_t *)0x40024884))      // Rx Individual Mask Registers (CAN0_RXIMR1)
#define CAN0_RXIMR2                   (*((volatile uint32_t *)0x40024888))      // Rx Individual Mask Registers (CAN0_RXIMR2)
#define CAN0_RXIMR3                   (*((volatile uint32_t *)0x4002488C))      // Rx Individual Mask Registers (CAN0_RXIMR3)
#define CAN0_RXIMR4                   (*((volatile uint32_t *)0x40024890))      // Rx Individual Mask Registers (CAN0_RXIMR4)
#define CAN0_RXIMR5                   (*((volatile uint32_t *)0x40024894))      // Rx Individual Mask Registers (CAN0_RXIMR5)
#define CAN0_RXIMR6                   (*((volatile uint32_t *)0x40024898))      // Rx Individual Mask Registers (CAN0_RXIMR6)
#define CAN0_RXIMR7                   (*((volatile uint32_t *)0x4002489C))      // Rx Individual Mask Registers (CAN0_RXIMR7)
#define CAN0_RXIMR8                   (*((volatile uint32_t *)0x400248A0))      // Rx Individual Mask Registers (CAN0_RXIMR8)
#define CAN0_RXIMR9                   (*((volatile uint32_t *)0x400248A4))      // Rx Individual Mask Registers (CAN0_RXIMR9)
#define CAN0_RXIMR10                  (*((volatile uint32_t *)0x400248A8))      // Rx Individual Mask Registers (CAN0_RXIMR10)
#define CAN0_RXIMR11                  (*((volatile uint32_t *)0x400248AC))      // Rx Individual Mask Registers (CAN0_RXIMR11)
#define CAN0_RXIMR12                  (*((volatile uint32_t *)0x400248B0))      // Rx Individual Mask Registers (CAN0_RXIMR12)
#define CAN0_RXIMR13                  (*((volatile uint32_t *)0x400248B4))      // Rx Individual Mask Registers (CAN0_RXIMR13)
#define CAN0_RXIMR14                  (*((volatile uint32_t *)0x400248B8))      // Rx Individual Mask Registers (CAN0_RXIMR14)
#define CAN0_RXIMR15                  (*((volatile uint32_t *)0x400248BC))      // Rx Individual Mask Registers (CAN0_RXIMR15)
#define CAN1_MCR                      (*((volatile uint32_t *)0x400A4000))      // Module Configuration Register (CAN1_MCR)
#define CAN1_CTRL1                    (*((volatile uint32_t *)0x400A4004))      // Control 1 Register (CAN1_CTRL1)
#define CAN1_TIMER                    (*((volatile uint32_t *)0x400A4008))      // Free Running Timer (CAN1_TIMER)
#define CAN1_RXMGMASK                 (*((volatile uint32_t *)0x400A4010))      // Rx Mailboxes Global Mask Register (CAN1_RXMGMASK)
#define CAN1_RX14MASK                 (*((volatile uint32_t *)0x400A4014))      // Rx 14 Mask Register (CAN1_RX14MASK)
#define CAN1_RX15MASK                 (*((volatile uint32_t *)0x400A4018))      // Rx 15 Mask Register (CAN1_RX15MASK)
#define CAN1_ECR                      (*((volatile uint32_t *)0x400A401C))      // Error Counter (CAN1_ECR)
#define CAN1_ESR1                     (*((volatile uint32_t *)0x400A4020))      // Error and Status 1 Register (CAN1_ESR1)
#define CAN1_IMASK2                   (*((volatile uint32_t *)0x400A4024))      // Interrupt Masks 2 Register (CAN1_IMASK2)
#define CAN1_IMASK1                   (*((volatile uint32_t *)0x400A4028))      // Interrupt Masks 1 Register (CAN1_IMASK1)
#define CAN1_IFLAG2                   (*((volatile uint32_t *)0x400A402C))      // Interrupt Flags 2 Register (CAN1_IFLAG2)
#define CAN1_IFLAG1                   (*((volatile uint32_t *)0x400A4030))      // Interrupt Flags 1 Register (CAN1_IFLAG1)
#define CAN1_CTRL2                    (*((volatile uint32_t *)0x400A4034))      // Control 2 Register (CAN1_CTRL2)
#define CAN1_ESR2                     (*((volatile uint32_t *)0x400A4038))      // Error and Status 2 Register (CAN1_ESR2)
#define CAN1_CRCR                     (*((volatile uint32_t *)0x400A4044))      // CRC Register (CAN1_CRCR)
#define CAN1_RXFGMASK                 (*((volatile uint32_t *)0x400A4048))      // Rx FIFO Global Mask Register (CAN1_RXFGMASK)
#define CAN1_RXFIR                    (*((volatile uint32_t *)0x400A404C))      // Rx FIFO Information Register (CAN1_RXFIR)
#define CAN1_RXIMR0                   (*((volatile uint32_t *)0x400A4880))      // Rx Individual Mask Registers (CAN1_RXIMR0)
#define CAN1_RXIMR1                   (*((volatile uint32_t *)0x400A4884))      // Rx Individual Mask Registers (CAN1_RXIMR1)
#define CAN1_RXIMR2                   (*((volatile uint32_t *)0x400A4888))      // Rx Individual Mask Registers (CAN1_RXIMR2)
#define CAN1_RXIMR3                   (*((volatile uint32_t *)0x400A488C))      // Rx Individual Mask Registers (CAN1_RXIMR3)
#define CAN1_RXIMR4                   (*((volatile uint32_t *)0x400A4890))      // Rx Individual Mask Registers (CAN1_RXIMR4)
#define CAN1_RXIMR5                   (*((volatile uint32_t *)0x400A4894))      // Rx Individual Mask Registers (CAN1_RXIMR5)
#define CAN1_RXIMR6                   (*((volatile uint32_t *)0x400A4898))      // Rx Individual Mask Registers (CAN1_RXIMR6)
#define CAN1_RXIMR7                   (*((volatile uint32_t *)0x400A489C))      // Rx Individual Mask Registers (CAN1_RXIMR7)
#define CAN1_RXIMR8                   (*((volatile uint32_t *)0x400A48A0))      // Rx Individual Mask Registers (CAN1_RXIMR8)
#define CAN1_RXIMR9                   (*((volatile uint32_t *)0x400A48A4))      // Rx Individual Mask Registers (CAN1_RXIMR9)
#define CAN1_RXIMR10                  (*((volatile uint32_t *)0x400A48A8))      // Rx Individual Mask Registers (CAN1_RXIMR10)
#define CAN1_RXIMR11                  (*((volatile uint32_t *)0x400A48AC))      // Rx Individual Mask Registers (CAN1_RXIMR11)
#define CAN1_RXIMR12                  (*((volatile uint32_t *)0x400A48B0))      // Rx Individual Mask Registers (CAN1_RXIMR12)
#define CAN1_RXIMR13                  (*((volatile uint32_t *)0x400A48B4))      // Rx Individual Mask Registers (CAN1_RXIMR13)
#define CAN1_RXIMR14                  (*((volatile uint32_t *)0x400A48B8))      // Rx Individual Mask Registers (CAN1_RXIMR14)
#define CAN1_RXIMR15                  (*((volatile uint32_t *)0x400A48BC))      // Rx Individual Mask Registers (CAN1_RXIMR15)


//*****************************************************************************
//
// SPI (DSPI) registers
//
//*****************************************************************************

#define SPI0_MCR                      (*((volatile uint32_t *)0x4002C000))      // DSPI Module Configuration Register (SPI0_MCR)
#define SPI0_TCR                      (*((volatile uint32_t *)0x4002C008))      // DSPI Transfer Count Register (SPI0_TCR)
#define SPI0_CTAR0                    (*((volatile uint32_t *)0x4002C00C))      // DSPI Clock and Transfer Attributes Register (In Master Mode) (SPI0_CTAR0)
#define SPI0_CTAR0_SLAVE              (*((volatile uint32_t *)0x4002C00C))      // DSPI Clock and Transfer Attributes Register (In Slave Mode) (SPI0_CTAR0_SLAVE)
#define SPI0_CTAR1                    (*((volatile uint32_t *)0x4002C010))      // DSPI Clock and Transfer Attributes Register (In Master Mode) (SPI0_CTAR1)
#define SPI0_SR                       (*((volatile uint32_t *)0x4002C02C))      // DSPI Status Register (SPI0_SR)
#define SPI0_RSER                     (*((volatile uint32_t *)0x4002C030))      // DSPI DMA/Interrupt Request Select and Enable Register (SPI0_RSER)
#define SPI0_PUSHR                    (*((volatile uint32_t *)0x4002C034))      // DSPI PUSH TX FIFO Register In Master Mode (SPI0_PUSHR)
#define SPI0_PUSHR_SLAVE              (*((volatile uint32_t *)0x4002C034))      // DSPI PUSH TX FIFO Register In Slave Mode (SPI0_PUSHR_SLAVE)
#define SPI0_POPR                     (*((volatile uint32_t *)0x4002C038))      // DSPI POP RX FIFO Register (SPI0_POPR)
#define SPI0_TXFR0                    (*((volatile uint32_t *)0x4002C03C))      // DSPI Transmit FIFO Registers (SPI0_TXFR0)
#define SPI0_TXFR1                    (*((volatile uint32_t *)0x4002C040))      // DSPI Transmit FIFO Registers (SPI0_TXFR1)
#define SPI0_TXFR2                    (*((volatile uint32_t *)0x4002C044))      // DSPI Transmit FIFO Registers (SPI0_TXFR2)
#define SPI0_TXFR3                    (*((volatile uint32_t *)0x4002C048))      // DSPI Transmit FIFO Registers (SPI0_TXFR3)
#define SPI0_RXFR0                    (*((volatile uint32_t *)0x4002C07C))      // DSPI Receive FIFO Registers (SPI0_RXFR0)
#define SPI0_RXFR1                    (*((volatile uint32_t *)0x4002C080))      // DSPI Receive FIFO Registers (SPI0_RXFR1)
#define SPI0_RXFR2                    (*((volatile uint32_t *)0x4002C084))      // DSPI Receive FIFO Registers (SPI0_RXFR2)
#define SPI0_RXFR3                    (*((volatile uint32_t *)0x4002C088))      // DSPI Receive FIFO Registers (SPI0_RXFR3)
#define SPI1_MCR                      (*((volatile uint32_t *)0x4002D000))      // DSPI Module Configuration Register (SPI1_MCR)
#define SPI1_TCR                      (*((volatile uint32_t *)0x4002D008))      // DSPI Transfer Count Register (SPI1_TCR)
#define SPI1_CTAR0                    (*((volatile uint32_t *)0x4002D00C))      // DSPI Clock and Transfer Attributes Register (In Master Mode) (SPI1_CTAR0)
#define SPI1_CTAR0_SLAVE              (*((volatile uint32_t *)0x4002D00C))      // DSPI Clock and Transfer Attributes Register (In Slave Mode) (SPI1_CTAR0_SLAVE)
#define SPI1_CTAR1                    (*((volatile uint32_t *)0x4002D010))      // DSPI Clock and Transfer Attributes Register (In Master Mode) (SPI1_CTAR1)
#define SPI1_SR                       (*((volatile uint32_t *)0x4002D02C))      // DSPI Status Register (SPI1_SR)
#define SPI1_RSER                     (*((volatile uint32_t *)0x4002D030))      // DSPI DMA/Interrupt Request Select and Enable Register (SPI1_RSER)
#define SPI1_PUSHR                    (*((volatile uint32_t *)0x4002D034))      // DSPI PUSH TX FIFO Register In Master Mode (SPI1_PUSHR)
#define SPI1_PUSHR_SLAVE              (*((volatile uint32_t *)0x4002D034))      // DSPI PUSH TX FIFO Register In Slave Mode (SPI1_PUSHR_SLAVE)
#define SPI1_POPR                     (*((volatile uint32_t *)0x4002D038))      // DSPI POP RX FIFO Register (SPI1_POPR)
#define SPI1_TXFR0                    (*((volatile uint32_t *)0x4002D03C))      // DSPI Transmit FIFO Registers (SPI1_TXFR0)
#define SPI1_TXFR1                    (*((volatile uint32_t *)0x4002D040))      // DSPI Transmit FIFO Registers (SPI1_TXFR1)
#define SPI1_TXFR2                    (*((volatile uint32_t *)0x4002D044))      // DSPI Transmit FIFO Registers (SPI1_TXFR2)
#define SPI1_TXFR3                    (*((volatile uint32_t *)0x4002D048))      // DSPI Transmit FIFO Registers (SPI1_TXFR3)
#define SPI1_RXFR0                    (*((volatile uint32_t *)0x4002D07C))      // DSPI Receive FIFO Registers (SPI1_RXFR0)
#define SPI1_RXFR1                    (*((volatile uint32_t *)0x4002D080))      // DSPI Receive FIFO Registers (SPI1_RXFR1)
#define SPI1_RXFR2                    (*((volatile uint32_t *)0x4002D084))      // DSPI Receive FIFO Registers (SPI1_RXFR2)
#define SPI1_RXFR3                    (*((volatile uint32_t *)0x4002D088))      // DSPI Receive FIFO Registers (SPI1_RXFR3)
#define SPI2_MCR                      (*((volatile uint32_t *)0x400AC000))      // DSPI Module Configuration Register (SPI2_MCR)
#define SPI2_TCR                      (*((volatile uint32_t *)0x400AC008))      // DSPI Transfer Count Register (SPI2_TCR)
#define SPI2_CTAR0                    (*((volatile uint32_t *)0x400AC00C))      // DSPI Clock and Transfer Attributes Register (In Master Mode) (SPI2_CTAR0)
#define SPI2_CTAR0_SLAVE              (*((volatile uint32_t *)0x400AC00C))      // DSPI Clock and Transfer Attributes Register (In Slave Mode) (SPI2_CTAR0_SLAVE)
#define SPI2_CTAR1                    (*((volatile uint32_t *)0x400AC010))      // DSPI Clock and Transfer Attributes Register (In Master Mode) (SPI2_CTAR1)
#define SPI2_SR                       (*((volatile uint32_t *)0x400AC02C))      // DSPI Status Register (SPI2_SR)
#define SPI2_RSER                     (*((volatile uint32_t *)0x400AC030))      // DSPI DMA/Interrupt Request Select and Enable Register (SPI2_RSER)
#define SPI2_PUSHR                    (*((volatile uint32_t *)0x400AC034))      // DSPI PUSH TX FIFO Register In Master Mode (SPI2_PUSHR)
#define SPI2_PUSHR_SLAVE              (*((volatile uint32_t *)0x400AC034))      // DSPI PUSH TX FIFO Register In Slave Mode (SPI2_PUSHR_SLAVE)
#define SPI2_POPR                     (*((volatile uint32_t *)0x400AC038))      // DSPI POP RX FIFO Register (SPI2_POPR)
#define SPI2_TXFR0                    (*((volatile uint32_t *)0x400AC03C))      // DSPI Transmit FIFO Registers (SPI2_TXFR0)
#define SPI2_TXFR1                    (*((volatile uint32_t *)0x400AC040))      // DSPI Transmit FIFO Registers (SPI2_TXFR1)
#define SPI2_TXFR2                    (*((volatile uint32_t *)0x400AC044))      // DSPI Transmit FIFO Registers (SPI2_TXFR2)
#define SPI2_TXFR3                    (*((volatile uint32_t *)0x400AC048))      // DSPI Transmit FIFO Registers (SPI2_TXFR3)
#define SPI2_RXFR0                    (*((volatile uint32_t *)0x400AC07C))      // DSPI Receive FIFO Registers (SPI2_RXFR0)
#define SPI2_RXFR1                    (*((volatile uint32_t *)0x400AC080))      // DSPI Receive FIFO Registers (SPI2_RXFR1)
#define SPI2_RXFR2                    (*((volatile uint32_t *)0x400AC084))      // DSPI Receive FIFO Registers (SPI2_RXFR2)
#define SPI2_RXFR3                    (*((volatile uint32_t *)0x400AC088))      // DSPI Receive FIFO Registers (SPI2_RXFR3)


//*****************************************************************************
//
// Inter-Integrated Circuit (I2C) registers
//
//*****************************************************************************

#define I2C0_A1                       (*((volatile uint32_t *)0x40066000))      // I2C Address Register 1 (I2C0_A1)
#define I2C0_F                        (*((volatile uint32_t *)0x40066001))      // I2C Frequency Divider register (I2C0_F)
#define I2C0_C1                       (*((volatile uint32_t *)0x40066002))      // I2C Control Register 1 (I2C0_C1)
#define I2C0_S                        (*((volatile uint32_t *)0x40066003))      // I2C Status Register (I2C0_S)
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
#define I2C1_S                        (*((volatile uint32_t *)0x40067003))      // I2C Status Register (I2C1_S)
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

#define UART0_BDH                     (*((volatile uint32_t *)0x4006A000))      // UART Baud Rate Registers:High (UART0_BDH)
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
#define UART1_BDH                     (*((volatile uint32_t *)0x4006B000))      // UART Baud Rate Registers:High (UART1_BDH)
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
#define UART2_BDH                     (*((volatile uint32_t *)0x4006C000))      // UART Baud Rate Registers:High (UART2_BDH)
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
#define UART3_BDH                     (*((volatile uint32_t *)0x4006D000))      // UART Baud Rate Registers:High (UART3_BDH)
#define UART3_BDL                     (*((volatile uint32_t *)0x4006D001))      // UART Baud Rate Registers: Low (UART3_BDL)
#define UART3_C1                      (*((volatile uint32_t *)0x4006D002))      // UART Control Register 1 (UART3_C1)
#define UART3_C2                      (*((volatile uint32_t *)0x4006D003))      // UART Control Register 2 (UART3_C2)
#define UART3_S1                      (*((volatile uint32_t *)0x4006D004))      // UART Status Register 1 (UART3_S1)
#define UART3_S2                      (*((volatile uint32_t *)0x4006D005))      // UART Status Register 2 (UART3_S2)
#define UART3_C3                      (*((volatile uint32_t *)0x4006D006))      // UART Control Register 3 (UART3_C3)
#define UART3_D                       (*((volatile uint32_t *)0x4006D007))      // UART Data Register (UART3_D)
#define UART3_MA1                     (*((volatile uint32_t *)0x4006D008))      // UART Match Address Registers 1 (UART3_MA1)
#define UART3_MA2                     (*((volatile uint32_t *)0x4006D009))      // UART Match Address Registers 2 (UART3_MA2)
#define UART3_C4                      (*((volatile uint32_t *)0x4006D00A))      // UART Control Register 4 (UART3_C4)
#define UART3_C5                      (*((volatile uint32_t *)0x4006D00B))      // UART Control Register 5 (UART3_C5)
#define UART3_ED                      (*((volatile uint32_t *)0x4006D00C))      // UART Extended Data Register (UART3_ED)
#define UART3_MODEM                   (*((volatile uint32_t *)0x4006D00D))      // UART Modem Register (UART3_MODEM)
#define UART3_IR                      (*((volatile uint32_t *)0x4006D00E))      // UART Infrared Register (UART3_IR)
#define UART3_PFIFO                   (*((volatile uint32_t *)0x4006D010))      // UART FIFO Parameters (UART3_PFIFO)
#define UART3_CFIFO                   (*((volatile uint32_t *)0x4006D011))      // UART FIFO Control Register (UART3_CFIFO)
#define UART3_SFIFO                   (*((volatile uint32_t *)0x4006D012))      // UART FIFO Status Register (UART3_SFIFO)
#define UART3_TWFIFO                  (*((volatile uint32_t *)0x4006D013))      // UART FIFO Transmit Watermark (UART3_TWFIFO)
#define UART3_TCFIFO                  (*((volatile uint32_t *)0x4006D014))      // UART FIFO Transmit Count (UART3_TCFIFO)
#define UART3_RWFIFO                  (*((volatile uint32_t *)0x4006D015))      // UART FIFO Receive Watermark (UART3_RWFIFO)
#define UART3_RCFIFO                  (*((volatile uint32_t *)0x4006D016))      // UART FIFO Receive Count (UART3_RCFIFO)
#define UART3_C7816                   (*((volatile uint32_t *)0x4006D018))      // UART 7816 Control Register (UART3_C7816)
#define UART3_IE7816                  (*((volatile uint32_t *)0x4006D019))      // UART 7816 Interrupt Enable Register (UART3_IE7816)
#define UART3_IS7816                  (*((volatile uint32_t *)0x4006D01A))      // UART 7816 Interrupt Status Register (UART3_IS7816)
#define UART3_WP7816T0                (*((volatile uint32_t *)0x4006D01B))      // UART 7816 Wait Parameter Register (UART3_WP7816T0)
#define UART3_WP7816T1                (*((volatile uint32_t *)0x4006D01B))      // UART 7816 Wait Parameter Register (UART3_WP7816T1)
#define UART3_WN7816                  (*((volatile uint32_t *)0x4006D01C))      // UART 7816 Wait N Register (UART3_WN7816)
#define UART3_WF7816                  (*((volatile uint32_t *)0x4006D01D))      // UART 7816 Wait FD Register (UART3_WF7816)
#define UART3_ET7816                  (*((volatile uint32_t *)0x4006D01E))      // UART 7816 Error Threshold Register (UART3_ET7816)
#define UART3_TL7816                  (*((volatile uint32_t *)0x4006D01F))      // UART 7816 Transmit Length Register (UART3_TL7816)
#define UART4_BDH                     (*((volatile uint32_t *)0x400EA000))      // UART Baud Rate Registers:High (UART4_BDH)
#define UART4_BDL                     (*((volatile uint32_t *)0x400EA001))      // UART Baud Rate Registers: Low (UART4_BDL)
#define UART4_C1                      (*((volatile uint32_t *)0x400EA002))      // UART Control Register 1 (UART4_C1)
#define UART4_C2                      (*((volatile uint32_t *)0x400EA003))      // UART Control Register 2 (UART4_C2)
#define UART4_S1                      (*((volatile uint32_t *)0x400EA004))      // UART Status Register 1 (UART4_S1)
#define UART4_S2                      (*((volatile uint32_t *)0x400EA005))      // UART Status Register 2 (UART4_S2)
#define UART4_C3                      (*((volatile uint32_t *)0x400EA006))      // UART Control Register 3 (UART4_C3)
#define UART4_D                       (*((volatile uint32_t *)0x400EA007))      // UART Data Register (UART4_D)
#define UART4_MA1                     (*((volatile uint32_t *)0x400EA008))      // UART Match Address Registers 1 (UART4_MA1)
#define UART4_MA2                     (*((volatile uint32_t *)0x400EA009))      // UART Match Address Registers 2 (UART4_MA2)
#define UART4_C4                      (*((volatile uint32_t *)0x400EA00A))      // UART Control Register 4 (UART4_C4)
#define UART4_C5                      (*((volatile uint32_t *)0x400EA00B))      // UART Control Register 5 (UART4_C5)
#define UART4_ED                      (*((volatile uint32_t *)0x400EA00C))      // UART Extended Data Register (UART4_ED)
#define UART4_MODEM                   (*((volatile uint32_t *)0x400EA00D))      // UART Modem Register (UART4_MODEM)
#define UART4_IR                      (*((volatile uint32_t *)0x400EA00E))      // UART Infrared Register (UART4_IR)
#define UART4_PFIFO                   (*((volatile uint32_t *)0x400EA010))      // UART FIFO Parameters (UART4_PFIFO)
#define UART4_CFIFO                   (*((volatile uint32_t *)0x400EA011))      // UART FIFO Control Register (UART4_CFIFO)
#define UART4_SFIFO                   (*((volatile uint32_t *)0x400EA012))      // UART FIFO Status Register (UART4_SFIFO)
#define UART4_TWFIFO                  (*((volatile uint32_t *)0x400EA013))      // UART FIFO Transmit Watermark (UART4_TWFIFO)
#define UART4_TCFIFO                  (*((volatile uint32_t *)0x400EA014))      // UART FIFO Transmit Count (UART4_TCFIFO)
#define UART4_RWFIFO                  (*((volatile uint32_t *)0x400EA015))      // UART FIFO Receive Watermark (UART4_RWFIFO)
#define UART4_RCFIFO                  (*((volatile uint32_t *)0x400EA016))      // UART FIFO Receive Count (UART4_RCFIFO)
#define UART4_C7816                   (*((volatile uint32_t *)0x400EA018))      // UART 7816 Control Register (UART4_C7816)
#define UART4_IE7816                  (*((volatile uint32_t *)0x400EA019))      // UART 7816 Interrupt Enable Register (UART4_IE7816)
#define UART4_IS7816                  (*((volatile uint32_t *)0x400EA01A))      // UART 7816 Interrupt Status Register (UART4_IS7816)
#define UART4_WP7816T0                (*((volatile uint32_t *)0x400EA01B))      // UART 7816 Wait Parameter Register (UART4_WP7816T0)
#define UART4_WP7816T1                (*((volatile uint32_t *)0x400EA01B))      // UART 7816 Wait Parameter Register (UART4_WP7816T1)
#define UART4_WN7816                  (*((volatile uint32_t *)0x400EA01C))      // UART 7816 Wait N Register (UART4_WN7816)
#define UART4_WF7816                  (*((volatile uint32_t *)0x400EA01D))      // UART 7816 Wait FD Register (UART4_WF7816)
#define UART4_ET7816                  (*((volatile uint32_t *)0x400EA01E))      // UART 7816 Error Threshold Register (UART4_ET7816)
#define UART4_TL7816                  (*((volatile uint32_t *)0x400EA01F))      // UART 7816 Transmit Length Register (UART4_TL7816)
#define UART5_BDH                     (*((volatile uint32_t *)0x400EB000))      // UART Baud Rate Registers:High (UART5_BDH)
#define UART5_BDL                     (*((volatile uint32_t *)0x400EB001))      // UART Baud Rate Registers: Low (UART5_BDL)
#define UART5_C1                      (*((volatile uint32_t *)0x400EB002))      // UART Control Register 1 (UART5_C1)
#define UART5_C2                      (*((volatile uint32_t *)0x400EB003))      // UART Control Register 2 (UART5_C2)
#define UART5_S1                      (*((volatile uint32_t *)0x400EB004))      // UART Status Register 1 (UART5_S1)
#define UART5_S2                      (*((volatile uint32_t *)0x400EB005))      // UART Status Register 2 (UART5_S2)
#define UART5_C3                      (*((volatile uint32_t *)0x400EB006))      // UART Control Register 3 (UART5_C3)
#define UART5_D                       (*((volatile uint32_t *)0x400EB007))      // UART Data Register (UART5_D)
#define UART5_MA1                     (*((volatile uint32_t *)0x400EB008))      // UART Match Address Registers 1 (UART5_MA1)
#define UART5_MA2                     (*((volatile uint32_t *)0x400EB009))      // UART Match Address Registers 2 (UART5_MA2)
#define UART5_C4                      (*((volatile uint32_t *)0x400EB00A))      // UART Control Register 4 (UART5_C4)
#define UART5_C5                      (*((volatile uint32_t *)0x400EB00B))      // UART Control Register 5 (UART5_C5)
#define UART5_ED                      (*((volatile uint32_t *)0x400EB00C))      // UART Extended Data Register (UART5_ED)
#define UART5_MODEM                   (*((volatile uint32_t *)0x400EB00D))      // UART Modem Register (UART5_MODEM)
#define UART5_IR                      (*((volatile uint32_t *)0x400EB00E))      // UART Infrared Register (UART5_IR)
#define UART5_PFIFO                   (*((volatile uint32_t *)0x400EB010))      // UART FIFO Parameters (UART5_PFIFO)
#define UART5_CFIFO                   (*((volatile uint32_t *)0x400EB011))      // UART FIFO Control Register (UART5_CFIFO)
#define UART5_SFIFO                   (*((volatile uint32_t *)0x400EB012))      // UART FIFO Status Register (UART5_SFIFO)


//*****************************************************************************
//
// Secured digital host controller (SDHC) registers
//
//*****************************************************************************

#define SDHC_DSADDR                   (*((volatile uint32_t *)0x400B1000))      // DMA System Address Register
#define SDHC_BLKATTR                  (*((volatile uint32_t *)0x400B1004))      // Block Attributes Register
#define SDHC_CMDARG                   (*((volatile uint32_t *)0x400B1008))      // Command Argument Register
#define SDHC_XFERTYP                  (*((volatile uint32_t *)0x400B100C))      // Transfer Type Register
#define SDHC_CMDRSP0                  (*((volatile uint32_t *)0x400B1010))      // Command Response 0
#define SDHC_CMDRSP1                  (*((volatile uint32_t *)0x400B1014))      // Command Response 1
#define SDHC_CMDRSP2                  (*((volatile uint32_t *)0x400B1018))      // Command Response 2
#define SDHC_CMDRSP3                  (*((volatile uint32_t *)0x400B101C))      // Command Response 3
#define SDHC_DATPORT                  (*((volatile uint32_t *)0x400B1020))      // Buffer Data Port Register
#define SDHC_PRSSTAT                  (*((volatile uint32_t *)0x400B1024))      // Present State Register
#define SDHC_PROCTL                   (*((volatile uint32_t *)0x400B1028))      // Protocol Control Register
#define SDHC_SYSCTL                   (*((volatile uint32_t *)0x400B102C))      // System Control Register
#define SDHC_IRQSTAT                  (*((volatile uint32_t *)0x400B1030))      // Interrupt Status Register
#define SDHC_IRQSTATEN                (*((volatile uint32_t *)0x400B1034))      // Interrupt Status Enable Register
#define SDHC_IRQSIGEN                 (*((volatile uint32_t *)0x400B1038))      // Interrupt Signal Enable Register
#define SDHC_AC12ERR                  (*((volatile uint32_t *)0x400B103C))      // Auto CMD12 Error Status Register
#define SDHC_HTCAPBLT                 (*((volatile uint32_t *)0x400B1040))      // Host Controller Capabilities
#define SDHC_WML                      (*((volatile uint32_t *)0x400B1044))      // Watermark Level Register
#define SDHC_FEVT                     (*((volatile uint32_t *)0x400B1050))      // Force Event Register
#define SDHC_ADMAES                   (*((volatile uint32_t *)0x400B1054))      // ADMA Error Status Register
#define SDHC_ADSADDR                  (*((volatile uint32_t *)0x400B1058))      // ADMA System Address Register
#define SDHC_VENDOR                   (*((volatile uint32_t *)0x400B10C0))      // Vendor Specific Register
#define SDHC_MMCBOOT                  (*((volatile uint32_t *)0x400B10C4))      // MMC Boot Register
#define SDHC_HOSTVER                  (*((volatile uint32_t *)0x400B10FC))      // Host Controller Version


//*****************************************************************************
//
// Integrated interchip sound (I2S) registers
//
//*****************************************************************************

#define I2S0_TX0                      (*((volatile uint32_t *)0x4002F000))      // I2S Transmit Data Registers 0 (I2S0_TX0)
#define I2S0_TX1                      (*((volatile uint32_t *)0x4002F004))      // I2S Transmit Data Registers 1 (I2S0_TX1)
#define I2S0_RX0                      (*((volatile uint32_t *)0x4002F008))      // I2S Receive Data Registers 0 (I2S0_RX0)
#define I2S0_RX1                      (*((volatile uint32_t *)0x4002F00C))      // I2S Receive Data Registers 1 (I2S0_RX1)
#define I2S0_CR                       (*((volatile uint32_t *)0x4002F010))      // I2S Control Register (I2S0_CR)
#define I2S0_ISR                      (*((volatile uint32_t *)0x4002F014))      // I2S Interrupt Status Register (I2S0_ISR)
#define I2S0_IER                      (*((volatile uint32_t *)0x4002F018))      // I2S Interrupt Enable Register (I2S0_IER)
#define I2S0_TCR                      (*((volatile uint32_t *)0x4002F01C))      // I2S Transmit Configuration Register (I2S0_TCR)
#define I2S0_RCR                      (*((volatile uint32_t *)0x4002F020))      // I2S Receive Configuration Register (I2S0_RCR)
#define I2S0_TCCR                     (*((volatile uint32_t *)0x4002F024))      // I2S Transmit Clock Control Registers (I2S0_TCCR)
#define I2S0_RCCR                     (*((volatile uint32_t *)0x4002F028))      // I2S Receive Clock Control Registers (I2S0_RCCR)
#define I2S0_FCSR                     (*((volatile uint32_t *)0x4002F02C))      // I2S FIFO Control/Status Register (I2S0_FCSR)
#define I2S0_ACNT                     (*((volatile uint32_t *)0x4002F038))      // I2S AC97 Control Register (I2S0_ACNT)
#define I2S0_ACADD                    (*((volatile uint32_t *)0x4002F03C))      // I2S AC97 Command Address Register (I2S0_ACADD)
#define I2S0_ACDAT                    (*((volatile uint32_t *)0x4002F040))      // I2S AC97 Command Data Register (I2S0_ACDAT)
#define I2S0_ATAG                     (*((volatile uint32_t *)0x4002F044))      // I2S AC97 Tag Register (I2S0_ATAG)
#define I2S0_TMSK                     (*((volatile uint32_t *)0x4002F048))      // I2S Transmit Time Slot Mask Register (I2S0_TMSK)
#define I2S0_RMSK                     (*((volatile uint32_t *)0x4002F04C))      // I2S Receive Time Slot Mask Register (I2S0_RMSK)
#define I2S0_ACCST                    (*((volatile uint32_t *)0x4002F050))      // I2S AC97 Channel Status Register (I2S0_ACCST)
#define I2S0_ACCEN                    (*((volatile uint32_t *)0x4002F054))      // I2S AC97 Channel Enable Register (I2S0_ACCEN)
#define I2S0_ACCDIS                   (*((volatile uint32_t *)0x4002F058))      // I2S AC97 Channel Disable Register (I2S0_ACCDIS)


//*****************************************************************************
//
// General purpose input/output (GPIO) registers
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

#define TSI0_GENCS                    (*((volatile uint32_t *)0x40045000))      // General Control and Status Register (TSI0_GENCS)
#define TSI0_SCANC                    (*((volatile uint32_t *)0x40045004))      // SCAN control register (TSI0_SCANC)
#define TSI0_PEN                      (*((volatile uint32_t *)0x40045008))      // Pin enable register (TSI0_PEN)
#define TSI0_STATUS                   (*((volatile uint32_t *)0x4004500C))      // Status Register (TSI0_STATUS)
#define TSI0_CNTR1                    (*((volatile uint32_t *)0x40045100))      // Counter Register (TSI0_CNTR1)
#define TSI0_CNTR3                    (*((volatile uint32_t *)0x40045104))      // Counter Register (TSI0_CNTR3)
#define TSI0_CNTR5                    (*((volatile uint32_t *)0x40045108))      // Counter Register (TSI0_CNTR5)
#define TSI0_CNTR7                    (*((volatile uint32_t *)0x4004510C))      // Counter Register (TSI0_CNTR7)
#define TSI0_CNTR9                    (*((volatile uint32_t *)0x40045110))      // Counter Register (TSI0_CNTR9)
#define TSI0_CNTR11                   (*((volatile uint32_t *)0x40045114))      // Counter Register (TSI0_CNTR11)
#define TSI0_CNTR13                   (*((volatile uint32_t *)0x40045118))      // Counter Register (TSI0_CNTR13)
#define TSI0_CNTR15                   (*((volatile uint32_t *)0x4004511C))      // Counter Register (TSI0_CNTR15)
#define TSI0_THRESHLD0                (*((volatile uint32_t *)0x40045120))      // Channel n threshold register (TSI0_THRESHLD0)
#define TSI0_THRESHLD1                (*((volatile uint32_t *)0x40045124))      // Channel n threshold register (TSI0_THRESHLD1)
#define TSI0_THRESHLD2                (*((volatile uint32_t *)0x40045128))      // Channel n threshold register (TSI0_THRESHLD2)
#define TSI0_THRESHLD3                (*((volatile uint32_t *)0x4004512C))      // Channel n threshold register (TSI0_THRESHLD3)
#define TSI0_THRESHLD4                (*((volatile uint32_t *)0x40045130))      // Channel n threshold register (TSI0_THRESHLD4)
#define TSI0_THRESHLD5                (*((volatile uint32_t *)0x40045134))      // Channel n threshold register (TSI0_THRESHLD5)
#define TSI0_THRESHLD6                (*((volatile uint32_t *)0x40045138))      // Channel n threshold register (TSI0_THRESHLD6)
#define TSI0_THRESHLD7                (*((volatile uint32_t *)0x4004513C))      // Channel n threshold register (TSI0_THRESHLD7)
#define TSI0_THRESHLD8                (*((volatile uint32_t *)0x40045140))      // Channel n threshold register (TSI0_THRESHLD8)
#define TSI0_THRESHLD9                (*((volatile uint32_t *)0x40045144))      // Channel n threshold register (TSI0_THRESHLD9)
#define TSI0_THRESHLD10               (*((volatile uint32_t *)0x40045148))      // Channel n threshold register (TSI0_THRESHLD10)
#define TSI0_THRESHLD11               (*((volatile uint32_t *)0x4004514C))      // Channel n threshold register (TSI0_THRESHLD11)
#define TSI0_THRESHLD12               (*((volatile uint32_t *)0x40045150))      // Channel n threshold register (TSI0_THRESHLD12)
#define TSI0_THRESHLD13               (*((volatile uint32_t *)0x40045154))      // Channel n threshold register (TSI0_THRESHLD13)
#define TSI0_THRESHLD14               (*((volatile uint32_t *)0x40045158))      // Channel n threshold register (TSI0_THRESHLD14)
#define TSI0_THRESHLD15               (*((volatile uint32_t *)0x4004515C))      // Channel n threshold register (TSI0_THRESHLD15)


//*****************************************************************************
//
// LCD Controller (SLCD) registers
//
//*****************************************************************************

#define LCD_GCR                       (*((volatile uint32_t *)0x0))      // LCD general control register (LCD_GCR)
#define LCD_AR                        (*((volatile uint32_t *)0x4))      // LCD auxiliary register (LCD_AR)
#define LCD_FDCR                      (*((volatile uint32_t *)0x8))      // LCD fault detect control register (LCD_FDCR)
#define LCD_FDSR                      (*((volatile uint32_t *)0xC))      // LCD fault detect status register (LCD_FDSR)
#define LCD_PENL                      (*((volatile uint32_t *)0x10))      // LCD pin enable register (LCD_PENL)
#define LCD_PENH                      (*((volatile uint32_t *)0x14))      // LCD pin enable register (LCD_PENH)
#define LCD_BPENL                     (*((volatile uint32_t *)0x18))      // LCD backplane enable register (LCD_BPENL)
#define LCD_BPENH                     (*((volatile uint32_t *)0x1C))      // LCD backplane enable register (LCD_BPENH)
#define LCD_WF3TO0                    (*((volatile uint32_t *)0x20))      // LCD waveform register (LCD_WF3TO0)
#define LCD_WF7TO4                    (*((volatile uint32_t *)0x24))      // LCD waveform register (LCD_WF7TO4)
#define LCD_WF11TO8                   (*((volatile uint32_t *)0x28))      // LCD waveform register (LCD_WF11TO8)
#define LCD_WF15TO12                  (*((volatile uint32_t *)0x2C))      // LCD waveform register (LCD_WF15TO12)
#define LCD_WF19TO16                  (*((volatile uint32_t *)0x30))      // LCD waveform register (LCD_WF19TO16)
#define LCD_WF23TO20                  (*((volatile uint32_t *)0x34))      // LCD waveform register (LCD_WF23TO20)
#define LCD_WF27TO24                  (*((volatile uint32_t *)0x38))      // LCD waveform register (LCD_WF27TO24)
#define LCD_WF31TO28                  (*((volatile uint32_t *)0x3C))      // LCD waveform register (LCD_WF31TO28)
#define LCD_WF35TO32                  (*((volatile uint32_t *)0x40))      // LCD waveform register (LCD_WF35TO32)
#define LCD_WF39TO36                  (*((volatile uint32_t *)0x44))      // LCD waveform register (LCD_WF39TO36)
#define LCD_WF43TO40                  (*((volatile uint32_t *)0x48))      // LCD waveform register (LCD_WF43TO40)
#define LCD_WF47TO44                  (*((volatile uint32_t *)0x4C))      // LCD waveform register (LCD_WF47TO44)
#define LCD_WF51TO48                  (*((volatile uint32_t *)0x50))      // LCD waveform register (LCD_WF51TO48)
#define LCD_WF55TO52                  (*((volatile uint32_t *)0x54))      // LCD waveform register (LCD_WF55TO52)
#define LCD_WF59TO56                  (*((volatile uint32_t *)0x58))      // LCD waveform register (LCD_WF59TO56)
#define LCD_WF63TO60                  (*((volatile uint32_t *)0x5C))      // LCD waveform register (LCD_WF63TO60)



//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_CR register.
//
//*****************************************************************************

#define CX                            0x00020000      // Cancel Transfer
#define ECX                           0x00010000      // Error Cancel Transfer
#define Reserved                      0x007F8000      // This read-only field is reserved and always has the value zero
#define EMLM                          0x00000080      // Enable Minor Loop Mapping
#define CLM                           0x00000040      // Continuous Link Mode
#define HALT                          0x00000020      // Halt DMA Operations
#define HOE                           0x00000010      // Halt On Error
#define Reserved                      0x00000008      // This read-only field is reserved and always has the value zero
#define ERCA                          0x00000004      // Enable Round Robin Channel Arbitration
#define EDBG                          0x00000002      // Enable Debug
#define Reserved                      0x00000001      // This read-only field is reserved and always has the value zero


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_ES register.
//
//*****************************************************************************

#define VLD                           0x80000000      // Logical OR of all ERR status bits
#define Reserved                      0xFFFC0000000      // This read-only field is reserved and always has the value zero
#define ECX                           0x00010000      // Transfer Cancelled
#define Reserved                      0x00008000      // This read-only field is reserved and always has the value zero
#define CPE                           0x00004000      // Channel Priority Error
#define Reserved                      0x00006000      // This read-only field is reserved and always has the value zero
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

#define Reserved                      0x7FFF80000000      // This read-only field is reserved and always has the value zero
#define ERQ15                         0x00008000      // Enable DMA Request 15
#define ERQ14                         0x00004000      // Enable DMA Request 14
#define ERQ13                         0x00002000      // Enable DMA Request 13
#define ERQ12                         0x00001000      // Enable DMA Request 12
#define ERQ11                         0x00000800      // Enable DMA Request 11
#define ERQ10                         0x00000400      // Enable DMA Request 10
#define ERQ9                          0x00000200      // Enable DMA Request 9
#define ERQ8                          0x00000100      // Enable DMA Request 8
#define ERQ7                          0x00000080      // Enable DMA Request 7
#define ERQ6                          0x00000040      // Enable DMA Request 6
#define ERQ5                          0x00000020      // Enable DMA Request 5
#define ERQ4                          0x00000010      // Enable DMA Request 4
#define ERQ3                          0x00000008      // Enable DMA Request 3
#define ERQ2                          0x00000004      // Enable DMA Request 2
#define ERQ1                          0x00000002      // Enable DMA Request 1
#define ERQ0                          0x00000001      // Enable DMA Request 0


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_EEI register.
//
//*****************************************************************************

#define Reserved                      0x7FFF80000000      // This read-only field is reserved and always has the value zero
#define EEI15                         0x00008000      // Enable Error Interrupt 15
#define EEI14                         0x00004000      // Enable Error Interrupt 14
#define EEI13                         0x00002000      // Enable Error Interrupt 13
#define EEI12                         0x00001000      // Enable Error Interrupt 12
#define EEI11                         0x00000800      // Enable Error Interrupt 11
#define EEI10                         0x00000400      // Enable Error Interrupt 10
#define EEI9                          0x00000200      // Enable Error Interrupt 9
#define EEI8                          0x00000100      // Enable Error Interrupt 8
#define EEI7                          0x00000080      // Enable Error Interrupt 7
#define EEI6                          0x00000040      // Enable Error Interrupt 6
#define EEI5                          0x00000020      // Enable Error Interrupt 5
#define EEI4                          0x00000010      // Enable Error Interrupt 4
#define EEI3                          0x00000008      // Enable Error Interrupt 3
#define EEI2                          0x00000004      // Enable Error Interrupt 2
#define EEI1                          0x00000002      // Enable Error Interrupt 1
#define EEI0                          0x00000001      // Enable Error Interrupt 0


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_CEEI register.
//
//*****************************************************************************

#define NOP                           0x00000080      // No operation
#define CAEE                          0x00000040      // Clear All Enable Error Interrupts
#define Reserved                      0x00000060      // This field is reserved
#define CEEI                          0x00000078      // Clear Enable Error Interrupt


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_SEEI register.
//
//*****************************************************************************

#define NOP                           0x00000080      // No operation
#define SAEE                          0x00000040      // Sets All Enable Error Interrupts
#define Reserved                      0x00000060      // This field is reserved
#define SEEI                          0x00000078      // Set Enable Error Interrupt


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_CERQ register.
//
//*****************************************************************************

#define NOP                           0x00000080      // No operation
#define CAER                          0x00000040      // Clear All Enable Requests
#define Reserved                      0x00000060      // This field is reserved
#define CERQ                          0x00000078      // Clear Enable Request


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_SERQ register.
//
//*****************************************************************************

#define NOP                           0x00000080      // No operation
#define SAER                          0x00000040      // Set All Enable Requests
#define Reserved                      0x00000060      // This field is reserved
#define SERQ                          0x00000078      // Set enable request


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_CDNE register.
//
//*****************************************************************************

#define NOP                           0x00000080      // No operation
#define CADN                          0x00000040      // Clears All DONE Bits
#define Reserved                      0x00000060      // This field is reserved
#define CDNE                          0x00000078      // Clear DONE Bit


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_SSRT register.
//
//*****************************************************************************

#define NOP                           0x00000080      // No operation
#define SAST                          0x00000040      // Set All START Bits (activates all channels)
#define Reserved                      0x00000060      // This field is reserved
#define SSRT                          0x00000078      // Set START Bit


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_CERR register.
//
//*****************************************************************************

#define NOP                           0x00000080      // No operation
#define CAEI                          0x00000040      // Clear All Error Indicators
#define Reserved                      0x00000060      // This field is reserved
#define CERR                          0x00000078      // Clear Error Indicator


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_CINT register.
//
//*****************************************************************************

#define NOP                           0x00000080      // No operation
#define CAIR                          0x00000040      // Clear All Interrupt Requests
#define Reserved                      0x00000060      // This field is reserved
#define CINT                          0x00000078      // Clear Interrupt Request


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_INT register.
//
//*****************************************************************************

#define Reserved                      0x7FFF80000000      // This read-only field is reserved and always has the value zero
#define INT15                         0x00008000      // Interrupt Request 15
#define INT14                         0x00004000      // Interrupt Request 14
#define INT13                         0x00002000      // Interrupt Request 13
#define INT12                         0x00001000      // Interrupt Request 12
#define INT11                         0x00000800      // Interrupt Request 11
#define INT10                         0x00000400      // Interrupt Request 10
#define INT9                          0x00000200      // Interrupt Request 9
#define INT8                          0x00000100      // Interrupt Request 8
#define INT7                          0x00000080      // Interrupt Request 7
#define INT6                          0x00000040      // Interrupt Request 6
#define INT5                          0x00000020      // Interrupt Request 5
#define INT4                          0x00000010      // Interrupt Request 4
#define INT3                          0x00000008      // Interrupt Request 3
#define INT2                          0x00000004      // Interrupt Request 2
#define INT1                          0x00000002      // Interrupt Request 1
#define INT0                          0x00000001      // Interrupt Request 0


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_ERR register.
//
//*****************************************************************************

#define Reserved                      0x7FFF80000000      // This read-only field is reserved and always has the value zero
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

#define Reserved                      0x7FFF80000000      // This read-only field is reserved and always has the value zero
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
#define HRS15-HRS0                    0x7FFF8000      // Hardware Request Status Channel 15-0


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_DCHPRIn register.
//
//*****************************************************************************

#define ECP                           0x00000080      // Enable Channel Preemption
#define DPA                           0x00000040      // Disable Preempt Ability
#define Reserved                      0x00000060      // This read-only field is reserved and always has the value zero
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
#define Reserved                      0x0000C000      // This read-only field is reserved and always has the value zero
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
#define Reserved                      0x00006000      // This read-only field is reserved and always has the value zero
#define MAJORLINKCH                   0x00007800      // Link Channel Number
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

#define ELINK                         0x00008000      // Enables channel-to-channel linking on minor loop complete
#define Reserved                      0x0000C000      // This read-only field is reserved and always has the value zero
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
// The following are defines for the bit fields in the WDOG_STCTRLH register.
//
//*****************************************************************************

#define DISTESTWDOG                   0x00004000      // Allows the WDOG’s functional test mode to be disabled permanently. Once set, it can only be cleared by a reset. It cannot be unlocked for editing once it is set.
#define BYTESEL[1:0]                  0x00006000      // This 2-bit field select the byte to be tested when the watchdog is in the byte test mode.
#define TESTSEL                       0x00000800      // Selects the test to be run on the watchdog timer. Effective only if TESTWDOG is set.
#define TESTWDOG                      0x00000400      // Puts the watchdog in the functional test mode. In this mode the watchdog timer and the associated compare and reset generation logic is tested for correct operation. The clock for the timer is switched from the main watchdog clock to the fast clock input for watchdog functional test. The TESTSEL bit selects the test to be run.
#define STNDBYEN                      0x00000100      // Enables or disables WDOG in Standby mode.
#define WAITEN                        0x00000080      // Enables or disables WDOG in wait mode.
#define STOPEN                        0x00000040      // Enables or disables WDOG in stop mode.
#define DBGEN                         0x00000020      // Enables or disables WDOG in Debug mode.
#define ALLOWUPDATE                   0x00000010      // Enables updates to watchdog write once registers, after initial configuration window (WCT) closes, through unlock sequence.
#define WINEN                         0x00000008      // Enable windowing mode.
#define IRQRSTEN                      0x00000004      // Used to enable the debug breadcrumbs feature. A change in this bit is updated immediately, as opposed to updating after WCT.
#define CLKSRC                        0x00000002      // Selects clock source for the WDOG timer and other internal timing operations.
#define WDOGEN                        0x00000001      // Enables or disables the WDOG’s operation. In the disabled state, the watchdog timer is kept in the reset state, but the other exception conditions can still trigger a reset/interrupt. A change in the value of this bit must be held for more than one WDOG_CLK cycle for the WDOG to be enabled or disabled.


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_STCTRLL register.
//
//*****************************************************************************

#define INTFLG                        0x00008000      // Interrupt flag. It is set when an exception occurs. IRQRSTEN = 1 is a precondition to set this flag. INTFLG = 1 results in an interrupt being issued followed by a reset, WCT time later. The interrupt can be cleared by writing 1 to this bit. It also gets cleared on a system reset.


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

#define WINHIGH                       0x7FFF8000      // Defines the upper 16 bits of the 32-bit window for the windowed mode of operation of the watchdog. It is defined in terms of cycles of the watchdog clock. In this mode the watchdog can be refreshed only when the timer has reached a value greater than or equal to this window length. A refresh outside this window resets the system or if IRQRSTEN is set, it interrupts and then resets the system.


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_WINL register.
//
//*****************************************************************************

#define WINLOW                        0x7FFF8000      // Defines the lower 16 bits of the 32-bit window for the windowed mode of operation of the watchdog. It is defined in terms of cycles of the pre-scaled watchdog clock. In this mode, the watchdog can be refreshed only when the timer reaches a value greater than or equal to this window length value. A refresh outside this window resets the system or if IRQRSTEN is set, it interrupts and then resets the system.


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_REFRESH register.
//
//*****************************************************************************

#define WDOGREFRESH                   0x7FFF8000      // Watchdog refresh register. A sequence of 0xA602 followed by 0xB480 within 20 bus clock cycles when written to this register, refreshes the WDOG and prevents it from resetting the system. Writing a value other than the above mentioned sequence or if the sequence is longer than 20 bus cycles, resets the system or if IRQRSTEN is set, it interrupts and then resets the system.


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_UNLOCK register.
//
//*****************************************************************************

#define WDOGUNLOCK                    0x7FFF8000      // You can write the unlock sequence values to this register to make the watchdog write once registers writable again. The required unlock sequence is 0xC520 followed by 0xD928 within 20 bus clock cycles. A valid unlock sequence opens up a window equal in length to the WCT within which you can update the registers. Writing a value other than the above mentioned sequence or if the sequence is longer than 20 bus cycles, resets the system or if IRQRSTEN is set, it interrupts and then resets the system). The unlock sequence is effective only if ALLOWUPDATE is set.


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

#define RSTCNT                        0x7FFF8000      // Counts the number of times the watchdog resets the system. This register is reset only on a POR. Writing 1 to the bit to be cleared, enables you to clear the contents of this register.


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

#define PLLCLKEN                      0x00000040      // PLL Clock Enable
#define PLLSTEN                       0x00000020      // PLL Stop Enable
#define PRDIV                         0x000001F0      // PLL External Reference Divider


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_C6 register.
//
//*****************************************************************************

#define LOLIE                         0x00000080      // Loss of Lock Interrrupt Enable
#define PLLS                          0x00000040      // PLL Select
#define CME                           0x00000020      // Clock Monitor Enable
#define VDIV                          0x000001F0      // VCO Divider


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_S register.
//
//*****************************************************************************

#define LOLS                          0x00000080      // Loss of Lock Status
#define LOCK                          0x00000040      // Lock Status
#define PLLST                         0x00000020      // PLL Select Status
#define IREFST                        0x00000010      // Internal Reference Status
#define CLKST                         0x00000018      // Clock Mode Status
#define OSCINIT                       0x00000002      // OSC Initialization
#define IRCST                         0x00000001      // Internal Reference Clock Status


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_ATC register.
//
//*****************************************************************************

#define ATME                          0x00000080      // Automatic Trim Machine Enable
#define ATMS                          0x00000040      // Automatic Trim Machine Select
#define ATMF                          0x00000020      // Automatic Trim machine Fail Flag


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
// The following are defines for the bit fields in the OSC_CR register.
//
//*****************************************************************************

#define ERCLKEN                       0x00000080      // External Reference Enable
#define EREFSTEN                      0x00000020      // External Reference Stop Enable
#define SC2P                          0x00000010      // Oscillator 2P Gain Control
#define SC4P                          0x00000008      // Oscillator 4P Gain Control
#define SC8P                          0x00000004      // Oscillator 8P Gain Control
#define SC16P                         0x00000002      // Oscillator 16P Gain Control


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
#define                               0xFF8000000      // 
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

#define BA                            0x7FFF80000000      // Base address
#define Reserved                      0x7FFF8000      // This read-only field is reserved and always has the value zero


//*****************************************************************************
//
// The following are defines for the bit fields in the FB_CSMRn register.
//
//*****************************************************************************

#define BAM                           0x7FFF80000000      // Base address mask
#define Reserved                      0x003F8000      // This read-only field is reserved and always has the value zero
#define WP                            0x00000100      // Write protect
#define Reserved                      0x00003F80      // This read-only field is reserved and always has the value zero
#define V                             0x00000001      // Valid


//*****************************************************************************
//
// The following are defines for the bit fields in the FB_CSCRn register.
//
//*****************************************************************************

#define SWS                           0x1F80000000      // Secondary wait states
#define Reserved                      0x06000000      // This read-only field is reserved and always has the value zero
#define SWSEN                         0x00800000      // Secondary wait state enable
#define EXTS                          0x00400000      // Extended address latch enable
#define ASET                          0x00600000      // Address setup
#define RDAH                          0x00180000      // Read address hold or deselect
#define WRAH                          0x00060000      // Write address hold or deselect
#define WS                            0x001F8000      // Wait states
#define BLS                           0x00000200      // Byte-lane shift
#define AA                            0x00000100      // Auto-acknowledge enable
#define PS                            0x00000180      // Port size
#define BEM                           0x00000020      // Byte-enable mode
#define BSTR                          0x00000010      // Burst-read enable
#define BSTW                          0x00000008      // Burst-write enable
#define Reserved                      0x0000001C      // This read-only field is reserved and always has the value zero


//*****************************************************************************
//
// The following are defines for the bit fields in the FB_CSPMCR register.
//
//*****************************************************************************

#define GROUP1                        0x780000000      // FlexBus signal group 1 multiplex control
#define GROUP2                        0x78000000      // FlexBus signal group 2 multiplex control


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

#define HIGH                          0x7FFF80000000      // High polynominal half-word
#define LOW                           0x7FFF8000      // Low polynominal half-word


//*****************************************************************************
//
// The following are defines for the bit fields in the CRC_CTRL register.
//
//*****************************************************************************

#define TOT                           0x180000000      // Type of Transpose for Writes
#define TOTR                          0x60000000      // Type of Transpose for Read
#define FXOR                          0x04000000      // Complement Read of CRC data register
#define WAS                           0x02000000      // Write CRC data register as seed


//*****************************************************************************
//
// The following are defines for the bit fields in the VREF_TRM register.
//
//*****************************************************************************

#define TRIM                          0x000007E0      // Trim bits


//*****************************************************************************
//
// The following are defines for the bit fields in the VREF_SC register.
//
//*****************************************************************************

#define VREFEN                        0x00000080      // Internal Voltage Reference enable
#define REGEN                         0x00000040      // Regulator enable
#define VREFST                        0x00000004      // Internal Voltage Reference has settled
#define MODE_LV                       0x00000006      // Buffer Mode selection


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_SC register.
//
//*****************************************************************************

#define TOF                           0x00000080      // Timer Overflow Flag
#define TOIE                          0x00000040      // Timer Overflow Interrupt Enable
#define CPWMS                         0x00000020      // Center-aligned PWM Select
#define CLKS                          0x00000030      // Clock Source Selection
#define PS                            0x0000001C      // Prescale Factor Selection


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_CNT register.
//
//*****************************************************************************

#define COUNT                         0x7FFF8000      // Counter value


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_MOD register.
//
//*****************************************************************************

#define MOD                           0x7FFF8000      // Modulo value


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
#define DMA                           0x00000002      // DMA Enable


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

#define INIT                          0x7FFF8000      // Initial Value of the FTM Counter


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
#define INIT                          0x00000002      // Initialize the Channels Output
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
#define REINIT                        0x00000004      // FTM Counter Reinitialization by Synchronization
#define CNTMAX                        0x00000002      // Maximum loading point enable
#define CNTMIN                        0x00000001      // Minimum loading point enable


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

#define FAULTEN3                      0x40000000      // Fault Control Enable for n = 6
#define SYNCEN3                       0x20000000      // Synchronization Enable for n = 6
#define DTEN3                         0x10000000      // Deadtime Enable for n = 6
#define DECAP3                        0x08000000      // Dual Edge Capture Mode Captures for n = 6
#define DECAPEN3                      0x04000000      // Dual Edge Capture Mode Enable for n = 6
#define COMP3                         0x02000000      // Complement of Channel (n) for n = 6
#define COMBINE3                      0x01000000      // Combine Channels for n = 6
#define FAULTEN2                      0x00400000      // Fault Control Enable for n = 4
#define SYNCEN2                       0x00200000      // Synchronization Enable for n = 4
#define DTEN2                         0x00100000      // Deadtime Enable for n = 4
#define DECAP2                        0x00080000      // Dual Edge Capture Mode Captures for n = 4
#define DECAPEN2                      0x00040000      // Dual Edge Capture Mode Enable for n = 4
#define COMP2                         0x00020000      // Complement of Channel (n) for n = 4
#define COMBINE2                      0x00010000      // Combine Channels for n = 4
#define FAULTEN1                      0x00004000      // Fault Control Enable for n = 2
#define SYNCEN1                       0x00002000      // Synchronization Enable for n = 2
#define DTEN1                         0x00001000      // Deadtime Enable for n = 2
#define DECAP1                        0x00000800      // Dual Edge Capture Mode Captures for n = 2
#define DECAPEN1                      0x00000400      // Dual Edge Capture Mode Enable for n = 2
#define COMP1                         0x00000200      // Complement of Channel (n) for n = 2
#define COMBINE1                      0x00000100      // Combine Channels for n = 2
#define FAULTEN0                      0x00000040      // Fault Control Enable for n = 0
#define SYNCEN0                       0x00000020      // Synchronization Enable for n = 0
#define DTEN0                         0x00000010      // Deadtime Enable for n = 0
#define DECAP0                        0x00000008      // Dual Edge Capture Mode Captures for n = 0
#define DECAPEN0                      0x00000004      // Dual Edge Capture Mode Enable for n = 0
#define COMP0                         0x00000002      // Complement of Channel (n) for n = 0
#define COMBINE0                      0x00000001      // Combine Channels for n = 0


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
#define QUADIR                        0x00000004      // FTM Counter Direction in Quadrature Decoder Mode
#define TOFDIR                        0x00000002      // Timer Overflow Direction in Quadrature Decoder Mode
#define QUADEN                        0x00000001      // Quadrature Decoder Mode Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_CONF register.
//
//*****************************************************************************

#define GTBEOUT                       0x00000400      // Global time base output
#define GTBEEN                        0x00000200      // Global time base enable
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
#define SWOC                          0x00000010      // SWOCTRL register synchronization
#define INVC                          0x00000008      // INVCTRL register synchronization
#define CNTINC                        0x00000004      // CNTIN register synchronization
#define HWTRIGMODE                    0x00000001      // Hardware Trigger Mode


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

#define CH7SEL                        0x00078000      // Channel 7 Select
#define CH6SEL                        0x00007800      // Channel 6 Select
#define CH5SEL                        0x00000780      // Channel 5 Select
#define CH4SEL                        0x00000078      // Channel 4 Select


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

#define TSV                           0x7FFFFFFF80000000      // Timer Start Value Bits


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

#define TIE                           0x00000002      // Timer Interrupt Enable Bit
#define TEN                           0x00000001      // Timer Enable Bit


//*****************************************************************************
//
// The following are defines for the bit fields in the PIT_TFLGn register.
//
//*****************************************************************************

#define TIF                           0x00000001      // Timer Interrupt Flag ::


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

#define MB[15:8]                      0x00007F80      // These bits control the upper mark periods of the modulator for all modes


//*****************************************************************************
//
// The following are defines for the bit fields in the CMT_CMD2 register.
//
//*****************************************************************************

#define MB[7:0]                       0x00007F80      // These bits control the lower mark periods of the modulator for all modes


//*****************************************************************************
//
// The following are defines for the bit fields in the CMT_CMD3 register.
//
//*****************************************************************************

#define SB[15:8]                      0x00007F80      // These bits control the upper space periods of the modulator for all modes


//*****************************************************************************
//
// The following are defines for the bit fields in the CMT_CMD4 register.
//
//*****************************************************************************

#define SB[7:0]                       0x00007F80      // These bits control the lower space periods of the modulator for all modes


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

#define DMA                           0x00000001      // DMA Enable ::


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

#define Reserved                      0x7FFF80000000      // This read-only field is reserved and always has the value zero.
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
#define TCV                           0x7F800000      // Time Compensation Value
#define CIR                           0x007F8000      // Compensation Interval Register
#define TCR                           0x00007F80      // Time Compensation Register


//*****************************************************************************
//
// The following are defines for the bit fields in the RTC_CR register.
//
//*****************************************************************************

#define SC2P                          0x00002000      // Oscillator 2pF load configure
#define SC4P                          0x00001000      // Oscillator 4pF load configure
#define SC8P                          0x00000800      // Oscillator 8pF load configure
#define SC16P                         0x00000400      // Oscillator 16pF load configure
#define CLKO                          0x00000200      // Clock Output
#define OSCE                          0x00000100      // Oscillator Enable
#define UM                            0x00000008      // Update Mode
#define SUP                           0x00000004      // Supervisor Access
#define WPE                           0x00000002      // Wakeup Pin Enable
#define SWR                           0x00000001      // Software Reset


//*****************************************************************************
//
// The following are defines for the bit fields in the RTC_SR register.
//
//*****************************************************************************

#define TCE                           0x00000010      // Time Counter Enable
#define TAF                           0x00000004      // Time Alarm Flag
#define TOF                           0x00000002      // Time Overflow Flag
#define TIF                           0x00000001      // Time Invalid Flag


//*****************************************************************************
//
// The following are defines for the bit fields in the RTC_LR register.
//
//*****************************************************************************

#define Reserved                      0x00000080      // This read-only field is reserved and always has the value one.
#define LRL                           0x00000040      // Lock Register Lock
#define SRL                           0x00000020      // Status Register Lock
#define CRL                           0x00000010      // Control Register Lock
#define TCL                           0x00000008      // Time Compensation Lock


//*****************************************************************************
//
// The following are defines for the bit fields in the RTC_IER register.
//
//*****************************************************************************

#define TAIE                          0x00000004      // Time Alarm Interrupt Enable
#define TOIE                          0x00000002      // Time Overflow Interrupt Enable
#define TIIE                          0x00000001      // Time Invalid Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the RTC_WAR register.
//
//*****************************************************************************

#define IERW                          0x00000080      // Interrupt Enable Register Write
#define LRW                           0x00000040      // Lock Register Write
#define SRW                           0x00000020      // Status Register Write
#define CRW                           0x00000010      // Control Register Write
#define TCRW                          0x00000008      // Time Compensation Register Write
#define TARW                          0x00000004      // Time Alarm Register Write
#define TPRW                          0x00000002      // Time Prescaler Register Write
#define TSRW                          0x00000001      // Time Seconds Register Write


//*****************************************************************************
//
// The following are defines for the bit fields in the RTC_RAR register.
//
//*****************************************************************************

#define IERR                          0x00000080      // Interrupt Enable Register Read
#define LRR                           0x00000040      // Lock Register Read
#define SRR                           0x00000020      // Status Register Read


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
#define CLOCK_UNIT                    0x00000001      // Unit of measurement encoding for Clock Speed


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

#define TVDPSRC_CON                   0x7FE000000      // 


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
#define LPMACK                        0x00100000      // Low Power Mode Acknowledge
#define Reserved                      0x00080000      // 
#define DOZE                          0x00040000      // Doze Mode Enable
#define SRXDIS                        0x00020000      // Self Reception Disable
#define IRMQ                          0x00010000      // Individual Rx Masking and Queue Enable
#define Reserved                      0x00018000      // 
#define LPRIOEN                       0x00002000      // Local Priority Enable
#define AEN                           0x00001000      // Abort Enable
#define Reserved                      0x00001800      // 
#define IDAM                          0x00000600      // ID Acceptance Mode
#define Reserved                      0x00000080      // 
#define MAXMB                         0x00001FC0      // Number of the Last Message Buffer


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
#define Reserved                      0x00000600      // 
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

#define Reserved                      0x7FFF80000000      // 
#define TIMER                         0x7FFF8000      // Timer value


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

#define Reserved                      0x7FFF80000000      // 
#define RXERRCNT                      0x007F8000      // Receive Error Counter
#define TXERRCNT                      0x00007F80      // Transmit Error Counter


//*****************************************************************************
//
// The following are defines for the bit fields in the CANx_ESR1 register.
//
//*****************************************************************************

#define Reserved                      0xFFF80000000      // 
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
#define IDLE                          0x00000080      // 
#define TX                            0x00000040      // FlexCAN in Transmission
#define FLTCONF                       0x00000060      // Fault Confinement State
#define RX                            0x00000008      // FlexCAN in Reception
#define BOFFINT                       0x00000004      // ‘Bus Off’ Interrupt
#define ERRINT                        0x00000002      // Error Interrupt
#define WAKINT                        0x00000001      // Wake-Up Interrupt


//*****************************************************************************
//
// The following are defines for the bit fields in the CANx_IMASK2 register.
//
//*****************************************************************************

#define BUFHM                         0x7FFFFFFF80000000      // Buffer MBi Mask


//*****************************************************************************
//
// The following are defines for the bit fields in the CANx_IMASK1 register.
//
//*****************************************************************************

#define BUFLM                         0x7FFFFFFF80000000      // Buffer MBi Mask


//*****************************************************************************
//
// The following are defines for the bit fields in the CANx_IFLAG2 register.
//
//*****************************************************************************

#define BUFHI                         0x7FFFFFFF80000000      // Buffer MBi Interrupt


//*****************************************************************************
//
// The following are defines for the bit fields in the CANx_IFLAG1 register.
//
//*****************************************************************************

#define BUF31TO8I                     0x7FFFFF80000000      // Buffer MBi Interrupt
#define BUF7I                         0x00000080      // Buffer MB7 Interrupt or "Rx FIFO Overflow"
#define BUF6I                         0x00000040      // Buffer MB6 Interrupt or "Rx FIFO Warning"
#define BUF5I                         0x00000020      // Buffer MB5 Interrupt or "Frames available in Rx FIFO"
#define BUF4TO0I                      0x000001F0      // Buffer MBi Interrupt or "reserved"


//*****************************************************************************
//
// The following are defines for the bit fields in the CANx_CTRL2 register.
//
//*****************************************************************************

#define Reserved                      0x80000000      // 
#define Reserved                      0xC0000000      // 
#define WRMFRZ                        0x10000000      // Write-Access to Memory in Freeze mode
#define RFFN                          0x78000000      // Number of Rx FIFO Filters
#define TASD                          0x0F800000      // Tx Arbitration Start Delay
#define MRP                           0x00040000      // Mailboxes Reception Priority
#define RRS                           0x00020000      // Remote Request Storing
#define EACEN                         0x00010000      // Entire Frame Arbitration Field Comparison Enable for Rx Mailboxes
#define Reserved                      0x7FFF8000      // 


//*****************************************************************************
//
// The following are defines for the bit fields in the CANx_ESR2 register.
//
//*****************************************************************************

#define Reserved                      0xFF80000000      // 
#define LPTM                          0x1FC00000      // Lowest Priority Tx Mailbox
#define Reserved                      0x00008000      // 
#define VPS                           0x00004000      // Valid Priority Status
#define IMB                           0x00002000      // Inactive Mailbox
#define Reserved                      0x01FFF000      // 


//*****************************************************************************
//
// The following are defines for the bit fields in the CANx_CRCR register.
//
//*****************************************************************************

#define Reserved                      0xFF80000000      // 
#define MBCRC                         0x1FC00000      // CRC Mailbox
#define Reserved                      0x00008000      // 
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

#define Reserved                      0x3FFFFF80000000      // 
#define IDHIT                         0x0001FF00      // Identifier Acceptance Filter Hit Indicator


//*****************************************************************************
//
// The following are defines for the bit fields in the CANx_RXIMR register.
//
//*****************************************************************************

#define MI[31:0]                      0x7FFFFFFF80000000      // Individual Mask Bits ::


//*****************************************************************************
//
// The following are defines for the bit fields in the CANx_RXIMRn register.
//
//*****************************************************************************

#define MI[31:0]                      0x7FFFFFFF80000000      // Individual Mask Bits


//*****************************************************************************
//
// The following are defines for the bit fields in the Message_Buffer_Structure register.
//
//*****************************************************************************

#define CODE                          0x780000000      // Message Buffer Code
#define SRR                           0x08000000      // Substitute Remote Request
#define IDE                           0x04000000      // ID Extended Bit
#define RTR                           0x02000000      // Remote Transmission Request
#define DLC                           0x0F000000      // Length of Data in Bytes
#define PRIO                          0x01F00000      // Local priority
#define ID                            0x7FFF8000      // Frame Identifier


//*****************************************************************************
//
// The following are defines for the bit fields in the Rx_FIFO_Structure register.
//
//*****************************************************************************




//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_DSADDR register.
//
//*****************************************************************************

#define DSADDR                        0x1FFFFFFF80000000      // This register contains the 32-bit system memory address for a DMA transfer. Since the address must be word (4 bytes) align, the least 2 bits are reserved, always 0. When the SDHC stops a DMA transfer, this register points to the system address of the next contiguous data position. It can be accessed only when no transaction is executing (i.e. after a transaction has stopped). Read operation during transfers may return an invalid value. The host driver shall initialize this register before starting a DMA transaction. After DMA has stopped, the system address of the next contiguous data position can be read from this register. This register is protected during a data transfer. When data lines are active, write to this register is ignored. The host driver shall wait, until the PRSSTAT[DLA] is cleared, before writing to this register. The SDHC internal DMA does not support a virtual memory system. It only supports continuous physical memory access. And due to AHB burst limitations, if the burst must cross the 1 KB boundary, SDHC will automatically change SEQ burst type to NSEQ. Since this register supports dynamic address reflecting, when IRQSTAT[TC] bit is set, it automatically alters the value of internal address counter, so SW cannot change this register when IRQSTAT[TC] bit is set.
#define Reserved                      0x00000006      // This read-only field is reserved and always has the value zero.


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_BLKATTR register.
//
//*****************************************************************************

#define BLKCNT                        0x7FFF80000000      // This register is enabled when the XFERTYP[BCEN] is set to 1 and is valid only for multiple block transfers. For single block transfer, this register will always read as 1. The host driver shall set this register to a value between 1 and the maximum block count. The SDHC decrements the block count after each block transfer and stops when the count reaches zero. Setting the block count to 0 results in no data blocks being transferred. This register should be accessed only when no transaction is executing (that is after transactions are stopped). During data transfer, read operations on this register may return an invalid value and write operations are ignored. When saving transfer content as a result of a suspend command, the number of blocks yet to be transferred can be determined by reading this register. The reading of this register should be applied after transfer is paused by stop at block gap operation and before sending the command marked as suspend. This is because when suspend command is sent out, SDHC will regard the current transfer is aborted and change BLKCNT back to its original value instead of keeping the dynamical indicator of remained block count. When restoring transfer content prior to issuing a resume command, the host driver shall restore the previously saved block count. NOTE: Although the BLKCNT field is 0 after reset, the read of reset value is 0x1. This is because when XFERTYP[MSBSEL] bit is 0, indicating a single block transfer, the read value of BLKCNT is always 1. 0000h Stop count;; 0001h 1 block;; 0002h 2 blocks;; ...;; FFFFh 65535 blocks
#define Reserved                      0x00038000      // This read-only field is reserved and always has the value zero.
#define BLKSIZE                       0x01FFF000      // This register specifies the block size for block data transfers. Values ranging from 1 byte up to the maximum buffer size can be set. It can be accessed only when no transaction is executing (that is after a transaction has stopped). Read operations during transfers may return an invalid value, and write operations will be ignored. 000h No data transfer;; 001h 1 Byte;; 002h 2 Bytes;; 003h 3 Bytes;; 004h 4 Bytes;; ...;; 1FFh 511 Bytes;; 200h 512 Bytes;; ...;; 800h 2048 Bytes;; ...;; 1000h 4096 Bytes


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_CMDARG register.
//
//*****************************************************************************

#define CMDARG                        0x7FFFFFFF80000000      // The SD/MMC command argument is specified as bits 39-8 of the command-format in the SD or MMC specification.This register is write protected when the PRSSTAT[CDIHB0] bit is set.


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_XFERTYP register.
//
//*****************************************************************************

#define CMDINX                        0x7E0000000      // These bits shall be set to the command number that is specified in bits 45-40 of the command-format in the SD Memory Card Physical Layer Specification and SDIO Card Specification.
#define CMDTYP                        0x01800000      // There are three types of special commands: suspend, resume and abort. These bits shall be set to 00b for all other commands. 00b Normal other commands;; 01b Suspend CMD52 for writing bus suspend in CCCR;; 10b Resume CMD52 for writing function select in CCCR;; 11b Abort CMD12, CMD52 for writing I/O abort in CCCR
#define DPSEL                         0x00200000      // This bit is set to 1 to indicate that data is present and shall be transferred using the DAT line. It is set to 0 for the following: Commands using only the CMD line (for example: CMD52). Commands with no data transfer, but using the busy signal on DAT[0] line (R1b or R5b, for example: CMD38). NOTE: In resume command, this bit shall be set, and other bits in this register shall be set the same as when the transfer was initially launched. When the Write Protect switch is on, (i.e. the WPSPL bit is active as ‘0’), any command with a write operation will be ignored. That is to say, when this bit is set, while the DTDSEL bit is 0, writes to the register Transfer Type are ignored. 0b No data present;; 1b Data present
#define CICEN                         0x00100000      // If this bit is set to 1, the SDHC will check the index field in the response to see if it has the same value as the command index. If it is not, it is reported as a command index error. If this bit is set to 0, the index field is not checked. 0b Disable;; 1b Enable
#define CCCEN                         0x00080000      // If this bit is set to 1, the SDHC shall check the CRC field in the response. If an error is detected, it is reported as a Command CRC Error. If this bit is set to 0, the CRC field is not checked. The number of bits checked by the CRC field value changes according to the length of the response. 0b Disable;; 1b Enable
#define Reserved                      0x00040000      // This read-only field is reserved and always has the value zero.
#define RSPTYP                        0x00060000      // 00b No response;; 01b Response length 136;; 10b Response length 48;; 11b Response length 48, check busy after response
#define Reserved                      0x01FF8000      // This read-only field is reserved and always has the value zero.
#define MSBSEL                        0x00000020      // This bit enables multiple block DAT line data transfers. For any other commands, this bit shall be set to 0. If this bit is 0, it is not necessary to set the block count register. 0b Single block;; 1b Multiple blocks
#define DTDSEL                        0x00000010      // This bit defines the direction of DAT line data transfers. The bit is set to 1 by the host driver to transfer data from the SD card to the SDHC and is set to 0 for all other commands. 0b Write (host to card) ;; 1b Read (card to host)
#define Reserved                      0x00000008      // This read-only field is reserved and always has the value zero.
#define AC12EN                        0x00000004      // Multiple block transfers for memory require a CMD12 to stop the transaction. When this bit is set to 1, the SDHC will issue a CMD12 automatically when the last block transfer has completed. The host driver shall not set this bit to issue commands that do not require CMD12 to stop a multiple block data transfer. In particular, secure commands defined in File Security Specification (see reference list) do not require CMD12. In single block transfer, the SDHC will ignore this bit no matter if it is set or not. 0b Disable;; 1b Enable
#define BCEN                          0x00000002      // This bit is used to enable the Block Count register, which is only relevant for multiple block transfers. When this bit is 0, the internal counter for block is disabled, which is useful in executing an infinite transfer. 0b Disable;; 1b Enable
#define DMAEN                         0x00000001      // This bit enables DMA functionality. If this bit is set to 1, a DMA operation shall begin when the host driver sets the DPSEL bit of this register. Whether the simple DMA, or the advanced DMA, is active depends on the PROCTL[DMAS]. 0b Disable;; 1b Enable


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

#define DLSL                          0x7F80000000      // DAT Line Signal Level
#define CLSL                          0x00800000      // CMD Line Signal Level
#define Reserved                      0x0FC00000      // This read-only field is reserved and always has the value zero.
#define CINS                          0x00010000      // Card Inserted
#define Reserved                      0x00078000      // This read-only field is reserved and always has the value zero.
#define BREN                          0x00000800      // Buffer Read Enable
#define BWEN                          0x00000400      // Buffer Write Enable
#define RTA                           0x00000200      // Read Transfer Active
#define WTA                           0x00000100      // Write Transfer Active
#define SDOFF                         0x00000080      // SD Clock Gated Off Internally
#define PEROFF                        0x00000040      // SDHC clock Gated Off Internally
#define HCKOFF                        0x00000020      // System Clock Gated Off Internally
#define IPGOFF                        0x00000010      // Bus Clock Gated Off Internally
#define SDSTB                         0x00000008      // SD Clock Stable
#define DLA                           0x00000004      // Data Line Active
#define CDIHB                         0x00000002      // Command Inhibit (DAT)
#define CIHB                          0x00000001      // Command Inhibit (CMD)


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_PROCTL register.
//
//*****************************************************************************

#define Reserved                      0xF80000000      // This read-only field is reserved and always has the value zero.
#define WECRM                         0x04000000      // Wakeup Event Enable On SD Card Removal
#define WECINS                        0x02000000      // Wakeup Event Enable On SD Card Insertion
#define WECINT                        0x01000000      // Wakeup Event Enable On Card Interrupt
#define Reserved                      0x07800000      // This read-only field is reserved and always has the value zero.
#define IABG                          0x00080000      // Interrupt At Block Gap
#define RWCTL                         0x00040000      // Read Wait Control
#define CREQ                          0x00020000      // Continue Request
#define SABGREQ                       0x00010000      // Stop At Block Gap Request
#define Reserved                      0x001F8000      // This read-only field is reserved and always has the value zero.
#define DMAS                          0x00000600      // DMA Select
#define CDSS                          0x00000080      // Card Detect Signal Selection
#define CDTL                          0x00000040      // Card Detect Test Level
#define EMODE                         0x00000060      // Endian Mode
#define D3CD                          0x00000008      // DAT3 as Card Detection Pin
#define DTW                           0x0000000C      // Data Transfer Width
#define LCTL                          0x00000001      // LED Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_SYSCTL register.
//
//*****************************************************************************

#define Reserved                      0x780000000      // This read-only field is reserved and always has the value zero.
#define INITA                         0x08000000      // Initialization Active
#define RSTD                          0x04000000      // Software Reset For DAT Line
#define RSTC                          0x02000000      // Software Reset For CMD Line
#define RSTA                          0x01000000      // Software Reset For ALL
#define Reserved                      0x07800000      // This read-only field is reserved and always has the value zero.
#define DTOCV                         0x00780000      // Data Timeout Counter Value
#define SDCLKFS                       0x007F8000      // SDCLK Frequency Select
#define DVS                           0x00000780      // Divisor
#define SDCLKEN                       0x00000008      // SD Clock Enable
#define PEREN                         0x00000004      // Peripheral Clock Enable
#define HCKEN                         0x00000002      // System Clock Enable
#define IPGEN                         0x00000001      // IPG Clock Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_IRQSTAT register.
//
//*****************************************************************************

#define Reserved                      0x380000000      // This read-only field is reserved and always has the value zero.
#define DMAE                          0x10000000      // DMA Error
#define Reserved                      0x38000000      // This read-only field is reserved and always has the value zero.
#define AC12E                         0x01000000      // Auto CMD12 Error
#define Reserved                      0x00800000      // This read-only field is reserved and always has the value zero.
#define DEBE                          0x00400000      // Data End Bit Error
#define DCE                           0x00200000      // Data CRC Error
#define DTOE                          0x00100000      // Data Timeout Error
#define CIE                           0x00080000      // Command Index Error
#define CEBE                          0x00040000      // Command End Bit Error
#define CCE                           0x00020000      // Command CRC Error
#define CTOE                          0x00010000      // Command Timeout Error
#define Reserved                      0x003F8000      // This read-only field is reserved and always has the value zero.
#define CINT                          0x00000100      // Card Interrupt
#define CRM                           0x00000080      // Card Removal
#define CINS                          0x00000040      // Card Insertion
#define BRR                           0x00000020      // Buffer Read Ready
#define BWR                           0x00000010      // Buffer Write Ready
#define DINT                          0x00000008      // DMA Interrupt
#define BGE                           0x00000004      // Block Gap Event
#define TC                            0x00000002      // Transfer Complete
#define CC                            0x00000001      // Command Complete


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_IRQSTATEN register.
//
//*****************************************************************************

#define Reserved                      0x380000000      // This read-only field is reserved and always has the value zero.
#define DMAESEN                       0x10000000      // DMA Error Status Enable
#define Reserved                      0x38000000      // This read-only field is reserved and always has the value zero.
#define AC12ESEN                      0x01000000      // Auto CMD12 Error Status Enable
#define Reserved                      0x00800000      // This read-only field is reserved and always has the value zero.
#define DEBESEN                       0x00400000      // Data End Bit Error Status Enable
#define DCESEN                        0x00200000      // Data CRC Error Status Enable
#define DTOESEN                       0x00100000      // Data Timeout Error Status Enable
#define CIESEN                        0x00080000      // Command Index Error Status Enable
#define CEBESEN                       0x00040000      // Command End Bit Error Status Enable
#define CCESEN                        0x00020000      // Command CRC Error Status Enable
#define CTOESEN                       0x00010000      // Command Timeout Error Status Enable
#define Reserved                      0x003F8000      // This read-only field is reserved and always has the value zero.
#define CINTSEN                       0x00000100      // Card Interrupt Status Enable
#define CRMSEN                        0x00000080      // Card Removal Status Enable
#define CINSEN                        0x00000040      // Card Insertion Status Enable
#define BRRSEN                        0x00000020      // Buffer Read Ready Status Enable
#define BWRSEN                        0x00000010      // Buffer Write Ready Status Enable
#define DINTSEN                       0x00000008      // DMA Interrupt Status Enable
#define BGESEN                        0x00000004      // Block Gap Event Status Enable
#define TCSEN                         0x00000002      // Transfer Complete Status Enable
#define CCSEN                         0x00000001      // Command Complete Status Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_IRQSIGEN register.
//
//*****************************************************************************

#define Reserved                      0x380000000      // This read-only field is reserved and always has the value zero.
#define DMAEIEN                       0x10000000      // DMA Error Interrupt Enable
#define Reserved                      0x38000000      // This read-only field is reserved and always has the value zero.
#define AC12EIEN                      0x01000000      // Auto CMD12 Error Interrupt Enable
#define Reserved                      0x00800000      // This read-only field is reserved and always has the value zero.
#define DEBEIEN                       0x00400000      // Data End Bit Error Interrupt Enable
#define DCEIEN                        0x00200000      // Data CRC Error Interrupt Enable
#define DTOEIEN                       0x00100000      // Data Timeout Error Interrupt Enable
#define CIEIEN                        0x00080000      // Command Index Error Interrupt Enable
#define CEBEIEN                       0x00040000      // Command End Bit Error Interrupt Enable
#define CCEIEN                        0x00020000      // Command CRC Error Interrupt Enable
#define CTOEIEN                       0x00010000      // Command Timeout Error Interrupt Enable
#define Reserved                      0x003F8000      // This read-only field is reserved and always has the value zero.
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

#define Reserved                      0x7FFFFF80000000      // This read-only field is reserved and always has the value zero.
#define CNIBAC12E                     0x00000080      // Command Not Issued By Auto CMD12 Error
#define Reserved                      0x000000C0      // This read-only field is reserved and always has the value zero.
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

#define Reserved                      0xF80000000      // This read-only field is reserved and always has the value zero.
#define VS18                          0x04000000      // Voltage Support 1.8 V
#define VS30                          0x02000000      // Voltage Support 3.0 V
#define VS33                          0x01000000      // Voltage Support 3.3 V
#define SRS                           0x00800000      // Suspend/Resume Support
#define DMAS                          0x00400000      // DMA Support
#define HSS                           0x00200000      // High Speed Support
#define ADMAS                         0x00100000      // ADMA Support
#define Reserved                      0x00080000      // This read-only field is reserved and always has the value zero.
#define MBL                           0x001C0000      // Max Block Length
#define Reserved                      0x7FFF8000      // This read-only field is reserved and always has the value zero.


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_WML register.
//
//*****************************************************************************

#define Reserved                      0x380000000      // This read-only field is reserved and always has the value zero.
#define Reserved                      0x1F0000000      // This read-only field is reserved and always has the value zero.
#define WRWML                         0x7F800000      // Write Watermark Level
#define Reserved                      0x00038000      // This read-only field is reserved and always has the value zero.
#define Reserved                      0x0001F000      // This read-only field is reserved and always has the value zero.
#define RDWML                         0x00007F80      // Read Watermark Level


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_FEVT register.
//
//*****************************************************************************

#define Reserved                      0x380000000      // This read-only field is reserved and always has the value zero.
#define CINT                          0x10000000      // Force Event Card Interrupt
#define Reserved                      0x38000000      // This read-only field is reserved and always has the value zero.
#define DMAE                          0x01000000      // Force Event DMA Error
#define Reserved                      0x00800000      // This read-only field is reserved and always has the value zero.
#define AC12E                         0x00400000      // Force Event Auto Command 12 Error
#define Reserved                      0x00200000      // This read-only field is reserved and always has the value zero.
#define DEBE                          0x00100000      // Force Event Data End Bit Error
#define DCE                           0x00080000      // Force Event Data CRC Error
#define DTOE                          0x00040000      // Force Event Data Time Out Error
#define CIE                           0x00020000      // Force Event Command Index Error
#define CEBE                          0x00010000      // Force Event Command End Bit Error
#define CCE                           0x00008000      // Force Event Command CRC Error
#define CTOE                          0x00004000      // Force Event Command Time Out Error
#define Reserved                      0x0007E000      // This read-only field is reserved and always has the value zero.
#define CNIBAC12E                     0x00000080      // Force Event Command Not Executed By Auto Command 12 Error
#define Reserved                      0x000000C0      // This read-only field is reserved and always has the value zero.
#define AC12IE                        0x00000010      // Force Event Auto Command 12 Index Error
#define AC12EBE                       0x00000008      // Force Event Auto Command 12 End Bit Error
#define AC12CE                        0x00000004      // Force Event Auto Command 12 CRC Error
#define AC12TOE                       0x00000002      // Force Event Auto Command 12 Time Out Error
#define AC12NE                        0x00000001      // Force Event Auto Command 12 Not Executed
#define CINT                          0x80000000      // Force Event Card Interrupt


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_ADMAES register.
//
//*****************************************************************************

#define Reserved                      0x7FFFFFF80000000      // This read-only field is reserved and always has the value zero.
#define ADMADCE                       0x00000008      // ADMA Descritor Error
#define ADMALME                       0x00000004      // ADMA Length Mismatch Error
#define ADMAES                        0x00000006      // ADMA Error State (when ADMA Error is occurred.)


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_ADSADDR register.
//
//*****************************************************************************

#define ADSADDR                       0x1FFFFFFF80000000      // ADMA System Address
#define Reserved                      0x00000006      // This read-only field is reserved and always has the value zero.


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_VENDOR register.
//
//*****************************************************************************

#define Reserved                      0x780000000      // This read-only field is reserved and always has the
#define EXBLKNU                       0x00000002      // Exact block number block read enable for SDIO CMD53
#define EXTDMAEN                      0x00000001      // External DMA Request Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_MMCBOOT register.
//
//*****************************************************************************

#define BOOTBLKCNT                    0x7FFF80000000      // The value defines the stop at block gap value of automatic mode. When received card                block cnt is equal to BOOTBLKCNT and AUTOSABGEN is 1, then stop at block gap.
#define AUTOSABGEN                    0x00000080      // When boot, enable auto stop at block gap   function. This function will      be  triggered,   and  host will stop at block gap when received card block cnt is  equal to BOOTBLKCNT.
#define BOOTEN                        0x00000040      // Boot mode enable
#define BOOTMODE                      0x00000020      // Boot mode select
#define BOOTACK                       0x00000010      // Boot ack mode select
#define DTOCVACK                      0x00000078      // Boot ACK time out counter value.


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_HOSTVER register.
//
//*****************************************************************************

#define VVN                           0x007F8000      // Vendor Version Number
#define SVN                           0x00007F80      // Specification Version Number


//*****************************************************************************
//
// The following are defines for the bit fields in the LCD_GCR register.
//
//*****************************************************************************

#define RVEN                          0x80000000      // Regulated voltage enable
#define RVTRIM                        0x78000000      // Regulated voltage trim
#define CPSEL                         0x00800000      // Charge pump or resistor bias select
#define HREFSEL                       0x00400000      // High reference select
#define LADJ                          0x00600000      // Load adjust
#define VSUPPLY                       0x00060000      // Voltage supply control
#define LCDIEN                        0x00008000      // LCD frame frequency interrupt enable
#define FDCIEN                        0x00004000      // LCD fault detection complete interrupt enable
#define ALTDIV                        0x00006000      // LCD alternate clock divider
#define LCDWAIT                       0x00000200      // LCD driver, charge pump, resistor bias network, and voltage regulator stop while in Wait mode.
#define LCDSTP                        0x00000100      // LCD driver, charge pump, resistor bias network, and voltage regulator while in Stop mode.
#define LCDEN                         0x00000080      // LCD driver enable
#define SOURCE                        0x00000040      // LCD clock source select
#define LCLK                          0x000000E0      // LCD clock prescaler
#define DUTY                          0x0000001C      // LCD duty select


//*****************************************************************************
//
// The following are defines for the bit fields in the LCD_AR register.
//
//*****************************************************************************

#define LCDIF                         0x00008000      // LCD frame frequency interrupt flag
#define BLINK                         0x00000080      // Blink command
#define ALT                           0x00000040      // Alternate display mode
#define BLANK                         0x00000020      // Blank display mode
#define BMODE                         0x00000008      // Blink mode
#define BRATE                         0x0000001C      // Blink-rate configuration


//*****************************************************************************
//
// The following are defines for the bit fields in the LCD_FDCR register.
//
//*****************************************************************************

#define FDPRS                         0x0001C000      // Fault detect clock prescaler
#define FDSWW                         0x00003800      // Fault detect sample window width
#define FDEN                          0x00000100      // Fault detect enable
#define FDBPEN                        0x00000040      // Fault detect backplane enable
#define FDPINID                       0x000007E0      // Fault detect pin ID


//*****************************************************************************
//
// The following are defines for the bit fields in the LCD_FDSR register.
//
//*****************************************************************************

#define FDCF                          0x00008000      // Fault detection complete flag
#define FDCNT                         0x00007F80      // Fault detect counter


//*****************************************************************************
//
// The following are defines for the bit fields in the LCD_PENn register.
//
//*****************************************************************************

#define PEN                           0x7FFFFFFF80000000      // LCD pin enable


//*****************************************************************************
//
// The following are defines for the bit fields in the LCD_BPENn register.
//
//*****************************************************************************

#define BPEN                          0x7FFFFFFF80000000      // Backplane enable


//*****************************************************************************
//
// The following are defines for the bit fields in the LCD_WF3TO0 register.
//
//*****************************************************************************

#define WF3                           0x7F80000000      // Segment-on frontplane operation — Each bit turns on or off the segments associated with LCD_P3 in the following pattern: HGFEDCBA (most-significant bit controls segment H and least significant bit controls segment A). Segment-on backplane operation — Each bit activates or deactivates the phases associated with LCD_P3 in the following pattern: HGFEDCBA (most-significant bit controls phase H and least significant bit controls phase A)
#define WF2                           0x7F800000      // Controls segments or phases connected to LCD_P2 as described above for WF3
#define WF1                           0x007F8000      // Controls segments or phases connected to LCD_P1 as described above for WF3
#define WF0                           0x00007F80      // Controls segments or phases connected to LCD_P0 as described above for WF3


//*****************************************************************************
//
// The following are defines for the bit fields in the LCD_WF35TO32 register.
//
//*****************************************************************************

#define WF35                          0x7F80000000      // Controls segments or phases connected to LCD_P35 as described above for WF3TO0[WF3]
#define WF34                          0x7F800000      // Controls segments or phases connected to LCD_P34 as described above for WF3TO0[WF3]
#define WF33                          0x007F8000      // Controls segments or phases connected to LCD_P33 as described above for WF3TO0[WF3]
#define WF32                          0x00007F80      // Controls segments or phases connected to LCD_P32 as described above for WF3TO0[WF3]


//*****************************************************************************
//
// The following are defines for the bit fields in the LCD_WF39TO36 register.
//
//*****************************************************************************

#define WF39                          0x7F80000000      // Controls segments or phases connected to LCD_P39 as described above for WF3TO0[WF3]
#define WF38                          0x7F800000      // Controls segments or phases connected to LCD_P38 as described above for WF3TO0[WF3]
#define WF37                          0x007F8000      // Controls segments or phases connected to LCD_P37 as described above for WF3TO0[WF3]
#define WF36                          0x00007F80      // Controls segments or phases connected to LCD_P36 as described above for WF3TO0[WF3]


//*****************************************************************************
//
// The following are defines for the bit fields in the LCD_WF43TO40 register.
//
//*****************************************************************************

#define WF43                          0x7F80000000      // Controls segments or phases connected to LCD_P43 as described above for WF3TO0[WF3]
#define WF42                          0x7F800000      // Controls segments or phases connected to LCD_P42 as described above for WF3TO0[WF3]
#define WF41                          0x007F8000      // Controls segments or phases connected to LCD_P41 as described above for WF3TO0[WF3]
#define WF40                          0x00007F80      // Controls segments or phases connected to LCD_P40 as described above for WF3TO0[WF3]


//*****************************************************************************
//
// The following are defines for the bit fields in the LCD_WF47TO44 register.
//
//*****************************************************************************

#define WF47                          0x7F80000000      // Controls segments or phases connected to LCD_P47 as described above for WF3TO0[WF3]
#define WF46                          0x7F800000      // Controls segments or phases connected to LCD_P46 as described above for WF3TO0[WF3]
#define WF45                          0x007F8000      // Controls segments or phases connected to LCD_P45 as described above for WF3TO0[WF3]
#define WF44                          0x00007F80      // Controls segments or phases connected to LCD_P44 as described above for WF3TO0[WF3]


//*****************************************************************************
//
// The following are defines for the bit fields in the LCD_WF51TO48 register.
//
//*****************************************************************************

#define WF51                          0x7F80000000      // Controls segments or phases connected to LCD_P51 as described above for WF3TO0[WF3]
#define WF50                          0x7F800000      // Controls segments or phases connected to LCD_P50 as described above for WF3TO0[WF3]
#define WF49                          0x007F8000      // Controls segments or phases connected to LCD_P49 as described above for WF3TO0[WF3]
#define WF48                          0x00007F80      // Controls segments or phases connected to LCD_P48 as described above for WF3TO0[WF3]


//*****************************************************************************
//
// The following are defines for the bit fields in the LCD_WF55TO52 register.
//
//*****************************************************************************

#define WF55                          0x7F80000000      // Controls segments or phases connected to LCD_P55 as described above for WF3TO0[WF3]
#define WF54                          0x7F800000      // Controls segments or phases connected to LCD_P54 as described above for WF3TO0[WF3]
#define WF53                          0x007F8000      // Controls segments or phases connected to LCD_P53 as described above for WF3TO0[WF3]
#define WF52                          0x00007F80      // Controls segments or phases connected to LCD_P52 as described above for WF3TO0[WF3]


//*****************************************************************************
//
// The following are defines for the bit fields in the LCD_WF59TO56 register.
//
//*****************************************************************************

#define WF59                          0x7F80000000      // Controls segments or phases connected to LCD_P59 as described above for WF3TO0[WF3]
#define WF58                          0x7F800000      // Controls segments or phases connected to LCD_P58 as described above for WF3TO0[WF3]
#define WF57                          0x007F8000      // Controls segments or phases connected to LCD_P57 as described above for WF3TO0[WF3]
#define WF56                          0x00007F80      // Controls segments or phases connected to LCD_P56 as described above for WF3TO0[WF3]


//*****************************************************************************
//
// The following are defines for the bit fields in the LCD_WF63TO60 register.
//
//*****************************************************************************

#define WF63                          0x7F80000000      // Controls segments or phases connected to LCD_P63 as described above for WF3TO0[WF3]
#define WF62                          0x7F800000      // Controls segments or phases connected to LCD_P62 as described above for WF3TO0[WF3]
#define WF61                          0x007F8000      // Controls segments or phases connected to LCD_P61 as described above for WF3TO0[WF3]
#define WF60                          0x00007F80      // Controls segments or phases connected to LCD_P60 as described above for WF3TO0[WF3]



#endif // __MK40DX256ZVLQ10_H__

