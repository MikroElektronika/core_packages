/****************************************************************************
**
** Copyright (C) ${COPYRIGHT_YEAR_MIKROE} MikroElektronika d.o.o.
** Contact: https://www.mikroe.com/contact
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
 * @file  init_clock.c
 * @brief Mikroe clock initialization API.
 */

#include "mcu.h"
#include "core_header.h"

/** \cond 0 */
/* *INDENT-OFF* */
#ifdef __cplusplus
extern "C" {
#endif
/* *INDENT-ON* */
/** \endcond */

/**
 * System clock frequency. The main RC oscillator (12 MHz) drives PLLA
 * (x25 = 300 MHz) in the default configuration. The configured value is taken
 * from the NECTO generated FOSC_KHZ_VALUE.
 */
#define __SYSTEM_CLOCK    (FOSC_KHZ_VALUE * 1000UL)

/*
 * Cortex-M7 cache policy. Instruction cache is recommended at 300 MHz.
 * Keep data cache disabled until every DMA buffer/descriptor is either placed
 * in a non-cacheable MPU region or maintained with clean/invalidate operations.
 */
#ifndef SYSTEM_ENABLE_ICACHE
#define SYSTEM_ENABLE_ICACHE    1
#endif

#ifndef SYSTEM_ENABLE_DCACHE
#define SYSTEM_ENABLE_DCACHE    0
#endif

static void _efc_set_flash_wait_cycles()
{
    uint32_t data = EFC_REGS->EEFC_FMR & ~EEFC_FMR_FWS_Msk;
    data |= VALUE_EEFC_FMR & EEFC_FMR_FWS_Msk;
    EFC_REGS->EEFC_FMR = data;
}
/**
 * \brief Initialize clock sources
 *
 * All clock sources are running when this function returns.
 */
static void _pmc_init_sources(void)
{
    uint32_t data = 0;

    // If XOSC32K is selected.
    if (SUPC_CR_XTALSEL_CRYSTAL_SEL == (VALUE_SUPC_CR & SUPC_CR_XTALSEL_Msk)) {
        // If Bypass mode is selected for XOSC32.
        if (SUPC_MR_OSCBYPASS_BYPASS == (VALUE_SUPC_MR & SUPC_MR_OSCBYPASS_Msk)) {
            // Set bypass mode for XOSC32K. Must be done before setting XOSC32K.
            SUPC_REGS->SUPC_MR |= SUPC_MR_KEY_PASSWD | SUPC_MR_OSCBYPASS_BYPASS;
        }
        // Set XOSC32K as source for the SCLK(slow clock).
        SUPC_REGS->SUPC_CR = SUPC_CR_KEY_PASSWD | SUPC_CR_XTALSEL_CRYSTAL_SEL;
        while ((SUPC_SR_OSCSEL_CRYST != (SUPC_REGS->SUPC_SR & SUPC_SR_OSCSEL_Msk)) &&
               (PMC_SR_OSCSELS_Msk != (PMC_REGS->PMC_SR & PMC_SR_OSCSELS_Msk))) {
            /* Wait until the oscillator is ready */
        }
    }

    // If the Main RC oscillator is enabled and selected.
    if ((CKGR_MOR_MOSCRCEN_Msk == (VALUE_CKGR_MOR & CKGR_MOR_MOSCRCEN_Msk)) &&
        (CKGR_MOR_MOSCSEL_Msk != (VALUE_CKGR_MOR & CKGR_MOR_MOSCSEL_Msk))) {
        /* Enable Fast RC oscillator but DO NOT switch to RC now */
        PMC_REGS->CKGR_MOR |= CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCRCEN_Msk;
        while (PMC_SR_MOSCRCS_Msk != (PMC_REGS->PMC_SR & PMC_SR_MOSCRCS_Msk)) {
            /* Wait until the Fast RC to stabilize */
        }
        /* Set Fast RC oscillator clock frequency */
        data = PMC_REGS->CKGR_MOR & ~CKGR_MOR_MOSCRCF_Msk;
        data |= CKGR_MOR_KEY_PASSWD | (VALUE_CKGR_MOR & CKGR_MOR_MOSCRCF_Msk);
        PMC_REGS->CKGR_MOR = data;
        while (PMC_SR_MOSCRCS_Msk != (PMC_REGS->PMC_SR & PMC_SR_MOSCRCS_Msk)) {
            /* Wait until the Fast RC to stabilize */
        }
        /* Switch to Fast RC */
        data = PMC_REGS->CKGR_MOR & ~CKGR_MOR_MOSCSEL_Msk;
        data |= CKGR_MOR_KEY_PASSWD;
        PMC_REGS->CKGR_MOR = data;
        while (PMC_SR_MOSCSELS_Msk != (PMC_REGS->PMC_SR & PMC_SR_MOSCSELS_Msk)) {
            /* Wait until the oscillator selection is done */
        }
        // Disable the Main Crystal oscillator if needed.
        if (CKGR_MOR_MOSCXTEN_Msk != (VALUE_CKGR_MOR & CKGR_MOR_MOSCXTEN_Msk)) {
            data = PMC_REGS->CKGR_MOR & ~CKGR_MOR_MOSCXTEN_Msk;
            PMC_REGS->CKGR_MOR = CKGR_MOR_KEY_PASSWD | data;
        }
        // Disable the Main Crystal oscillator Bypass if needed.
        if (CKGR_MOR_MOSCXTBY_Msk != (VALUE_CKGR_MOR & CKGR_MOR_MOSCXTBY_Msk)) {
            data = PMC_REGS->CKGR_MOR & ~CKGR_MOR_MOSCXTBY_Msk;
            PMC_REGS->CKGR_MOR = CKGR_MOR_KEY_PASSWD | data;
        }
        data = PMC_REGS->PMC_SR;
    }

    // If the Main Crystal oscillator is enabled/bypassed and selected.
    if ((0 != (VALUE_CKGR_MOR & (CKGR_MOR_MOSCXTEN_Msk | CKGR_MOR_MOSCXTBY_Msk))) &&
        (CKGR_MOR_MOSCSEL_Msk == (VALUE_CKGR_MOR & CKGR_MOR_MOSCSEL_Msk))) {
        if (CKGR_MOR_MOSCXTBY_Msk == (VALUE_CKGR_MOR & CKGR_MOR_MOSCXTBY_Msk)) {
            /* Enable Main XTAL oscillator bypass */
            data = PMC_REGS->CKGR_MOR & ~CKGR_MOR_MOSCXTEN_Msk;
            data |= CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCXTBY_Msk | CKGR_MOR_MOSCSEL_Msk;
            PMC_REGS->CKGR_MOR = data;
        } else {
            /* Enable Main XTAL oscillator */
            data = PMC_REGS->CKGR_MOR & ~(CKGR_MOR_MOSCXTBY_Msk | CKGR_MOR_MOSCXTST_Msk);
            data |= CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCXTEN_Msk | (VALUE_CKGR_MOR & CKGR_MOR_MOSCXTST_Msk);
            PMC_REGS->CKGR_MOR = data;
            while (PMC_SR_MOSCXTS_Msk != (PMC_REGS->PMC_SR & PMC_SR_MOSCXTS_Msk)) {
                /* Wait until the XTAL to stabilize */
            }
            PMC_REGS->CKGR_MOR |= CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCSEL_Msk;
        }
        while (PMC_SR_MOSCSELS_Msk != (PMC_REGS->PMC_SR & PMC_SR_MOSCSELS_Msk)) {
                /* Wait until the oscillator selection is done */
        }
        if (CKGR_MOR_MOSCRCEN_Msk != (VALUE_CKGR_MOR & CKGR_MOR_MOSCRCEN_Msk)) {
            data = PMC_REGS->CKGR_MOR & ~CKGR_MOR_MOSCRCEN_Msk;
            PMC_REGS->CKGR_MOR = CKGR_MOR_KEY_PASSWD | data;
        }
    }

    /* Stop PLL first */
    // If the PLLA is enabled.
    if ((CKGR_PLLAR_DIVA_0_Val != (VALUE_CKGR_PLLAR & CKGR_PLLAR_DIVA_Msk)) &&
        (CKGR_PLLAR_MULA(0) < (VALUE_CKGR_PLLAR & CKGR_PLLAR_MULA_Msk))) {
        /* Program PLL */
        PMC_REGS->CKGR_PLLAR = CKGR_PLLAR_ONE_Msk | VALUE_CKGR_PLLAR;
        while (PMC_SR_LOCKA_Msk != (PMC_REGS->PMC_SR & PMC_SR_LOCKA_Msk)) {
            /* Wait until PLLACK stabilize */
        }
    }

    // If UPLL is enabled.
    if (CKGR_UCKR_UPLLEN_Msk == (VALUE_CKGR_UCKR & CKGR_UCKR_UPLLEN_Msk)) {
        #ifdef VALUE_UTMI_CKTRIM
        // UTMI_CKTRIM is not present for MCUs of type Jxx.
        UTMI_REGS->UTMI_CKTRIM = VALUE_UTMI_CKTRIM;
        #endif
        // Configure UPLL.
        PMC_REGS->CKGR_UCKR = VALUE_CKGR_UCKR;
	    while (PMC_SR_LOCKU_Msk != (PMC_REGS->PMC_SR & PMC_SR_LOCKU_Msk)) {
		    /* Wait until USB UTMI stabilize */
        }
        data = PMC_REGS->PMC_MCKR & ~PMC_MCKR_UPLLDIV_Msk;
        data |= VALUE_PMC_MCKR & PMC_MCKR_UPLLDIV_Msk;
        PMC_REGS->PMC_MCKR = data;
        while (PMC_SR_MCKRDY_Msk != (PMC_REGS->PMC_SR & PMC_SR_MCKRDY_Msk)) {
            /* Wait until master clock is ready */
        }
	} else {
        // Disasble UPLL.
        PMC_REGS->CKGR_UCKR &= ~CKGR_UCKR_UPLLEN_Msk;
    }

    if (VALUE_CKGR_MOR & (CKGR_MOR_MOSCRCEN_Msk | CKGR_MOR_MOSCXTEN_Msk | CKGR_MOR_MOSCXTBY_Msk)) {
        /* Enable main clock failure detection */
        PMC_REGS->CKGR_MOR |= CKGR_MOR_KEY_PASSWD | (VALUE_CKGR_MOR & CKGR_MOR_CFDEN_Msk);
    }
}

/**
 * \brief Initialize master clock
 */
static void _pmc_init_master_clock(void)
{
    uint32_t data;

    if (CKGR_UCKR_UPLLEN_Msk == (VALUE_CKGR_UCKR & CKGR_UCKR_UPLLEN_Msk)) {
        data = PMC_REGS->PMC_MCKR & ~PMC_MCKR_UPLLDIV2_Msk;
        data |= VALUE_PMC_MCKR & PMC_MCKR_UPLLDIV2_Msk;
        PMC_REGS->PMC_MCKR = data;
        while (PMC_SR_MCKRDY_Msk != (PMC_REGS->PMC_SR & PMC_SR_MCKRDY_Msk)) {
            /* Wait until master clock is ready */
        }
    }

    // If Slow Clock or Main Clock is selected as source for the master clock.
    if (PMC_MCKR_CSS_PLLA_CLK > (VALUE_PMC_MCKR & PMC_MCKR_CSS_Msk)) {
        // Select Host Clock source.
        data = PMC_REGS->PMC_MCKR & ~PMC_MCKR_CSS_Msk;
        data |= VALUE_PMC_MCKR & PMC_MCKR_CSS_Msk;
        PMC_REGS->PMC_MCKR = data;
        while (PMC_SR_MCKRDY_Msk != (PMC_REGS->PMC_SR & PMC_SR_MCKRDY_Msk)) {
            /* Wait until master clock is ready */
        }
        // Configure Processor Clock prescaler.
        data = PMC_REGS->PMC_MCKR & ~PMC_MCKR_PRES_Msk;
        data |= VALUE_PMC_MCKR & PMC_MCKR_PRES_Msk;
        PMC_REGS->PMC_MCKR = data;
        while (PMC_SR_MCKRDY_Msk != (PMC_REGS->PMC_SR & PMC_SR_MCKRDY_Msk)) {
            /* Wait until master clock is ready */
        }
        // Configure Host Clock divisor.
        data = PMC_REGS->PMC_MCKR & ~PMC_MCKR_MDIV_Msk;
        data |= VALUE_PMC_MCKR & PMC_MCKR_MDIV_Msk;
        PMC_REGS->PMC_MCKR = data;
        while (PMC_SR_MCKRDY_Msk != (PMC_REGS->PMC_SR & PMC_SR_MCKRDY_Msk)) {
            /* Wait until master clock is ready */
        }
    } else { // If PLLA Clock or UPLL Clock is selected as source for the host clock.
        // Configure Processor Clock prescaler.
        data = PMC_REGS->PMC_MCKR & ~PMC_MCKR_PRES_Msk;
        data |= VALUE_PMC_MCKR & PMC_MCKR_PRES_Msk;
        PMC_REGS->PMC_MCKR = data;
        while (PMC_SR_MCKRDY_Msk != (PMC_REGS->PMC_SR & PMC_SR_MCKRDY_Msk)) {
            /* Wait until master clock is ready */
        }
        // Configure Host Clock divisor.
        data = PMC_REGS->PMC_MCKR & ~PMC_MCKR_MDIV_Msk;
        data |= VALUE_PMC_MCKR & PMC_MCKR_MDIV_Msk;
        PMC_REGS->PMC_MCKR = data;
        while (PMC_SR_MCKRDY_Msk != (PMC_REGS->PMC_SR & PMC_SR_MCKRDY_Msk)) {
            /* Wait until master clock is ready */
        }
        // Select Host Clock source.
        data = PMC_REGS->PMC_MCKR & ~PMC_MCKR_CSS_Msk;
        data |= VALUE_PMC_MCKR & PMC_MCKR_CSS_Msk;
        PMC_REGS->PMC_MCKR = data;
        while (PMC_SR_MCKRDY_Msk != (PMC_REGS->PMC_SR & PMC_SR_MCKRDY_Msk)) {
            /* Wait until master clock is ready */
        }
    }
}

/**
 * \brief Initializes programmable clock generators
 *
 * Programmable clock are running when this function returns.
 */
static void _pmc_init_program_clock(void)
{
    if (PMC_SCER_PCK0_Msk == (VALUE_PMC_SCER & PMC_SCER_PCK0_Msk)) {
        PMC_REGS->PMC_PCK[0] = VALUE_PMC_PCK0;
        PMC_REGS->PMC_SCER |= PMC_SCER_PCK0_Msk;
        while (!(PMC_REGS->PMC_SR & PMC_SR_PCKRDY0_Msk)) {
            /* Wait until PCK0 clock is ready */
        }
    } else {
        PMC_REGS->PMC_SCDR |= PMC_SCDR_PCK0_Msk;
    }

    if (PMC_SCER_PCK1_Msk == (VALUE_PMC_SCER & PMC_SCER_PCK1_Msk)) {
        PMC_REGS->PMC_PCK[1] = VALUE_PMC_PCK1;
        PMC_REGS->PMC_SCER |= PMC_SCER_PCK1_Msk;
        while (!(PMC_REGS->PMC_SR & PMC_SR_PCKRDY1_Msk)) {
            /* Wait until PCK1 clock is ready */
        }
    } else {
        PMC_REGS->PMC_SCDR |= PMC_SCDR_PCK1_Msk;
    }

    if (PMC_SCER_PCK2_Msk == (VALUE_PMC_SCER & PMC_SCER_PCK2_Msk)) {
        PMC_REGS->PMC_PCK[2] = VALUE_PMC_PCK2;
        PMC_REGS->PMC_SCER |= PMC_SCER_PCK2_Msk;
        while (!(PMC_REGS->PMC_SR & PMC_SR_PCKRDY2_Msk)) {
            /* Wait until PCK2 clock is ready */
        }
    } else {
        PMC_REGS->PMC_SCDR |= PMC_SCDR_PCK2_Msk;
    }

    if (PMC_SCER_PCK3_Msk == (VALUE_PMC_SCER & PMC_SCER_PCK3_Msk)) {
        PMC_REGS->PMC_PCK[3] = VALUE_PMC_PCK3;
        PMC_REGS->PMC_SCER |= PMC_SCER_PCK3_Msk;
        while (!(PMC_REGS->PMC_SR & PMC_SR_PCKRDY3_Msk)) {
            /* Wait until PCK3 clock is ready */
        }
    } else {
        PMC_REGS->PMC_SCDR |= PMC_SCDR_PCK3_Msk;
    }

    if (PMC_SCER_PCK4_Msk == (VALUE_PMC_SCER & PMC_SCER_PCK4_Msk)) {
        PMC_REGS->PMC_PCK[4] = VALUE_PMC_PCK4;
        PMC_REGS->PMC_SCER |= PMC_SCER_PCK4_Msk;
        while (!(PMC_REGS->PMC_SR & PMC_SR_PCKRDY4_Msk)) {
            /* Wait until PCK4 clock is ready */
        }
    } else {
        PMC_REGS->PMC_SCDR |= PMC_SCDR_PCK4_Msk;
    }

    if (PMC_SCER_PCK5_Msk == (VALUE_PMC_SCER & PMC_SCER_PCK5_Msk)) {
        PMC_REGS->PMC_PCK[5] = VALUE_PMC_PCK5;
        PMC_REGS->PMC_SCER |= PMC_SCER_PCK5_Msk;
        while (!(PMC_REGS->PMC_SR & PMC_SR_PCKRDY5_Msk)) {
            /* Wait until PCK5 clock is ready */
        }
    } else {
        PMC_REGS->PMC_SCDR |= PMC_SCDR_PCK5_Msk;
    }

    if (PMC_SCER_PCK6_Msk == (VALUE_PMC_SCER & PMC_SCER_PCK6_Msk)) {
        PMC_REGS->PMC_PCK[6] = VALUE_PMC_PCK6;
        PMC_REGS->PMC_SCER |= PMC_SCER_PCK6_Msk;
        while (!(PMC_REGS->PMC_SR & PMC_SR_PCKRDY6_Msk)) {
            /* Wait until PCK6 clock is ready */
        }
    } else {
        PMC_REGS->PMC_SCDR |= PMC_SCDR_PCK6_Msk;
    }

    #ifdef PMC_SCER_PCK7_Msk
    // PCK7 is not present for MCUs of type Jxx.
    if (PMC_SCER_PCK7_Msk == (VALUE_PMC_SCER & PMC_SCER_PCK7_Msk)) {
        PMC_REGS->PMC_PCK[7] = VALUE_PMC_PCK7;
        PMC_REGS->PMC_SCER |= PMC_SCER_PCK7_Msk;
        while (!(PMC_REGS->PMC_SR & PMC_SR_PCKRDY7_Msk)) {
            /* Wait until PCK7 clock is ready */
        }
    } else {
        PMC_REGS->PMC_SCDR |= PMC_SCDR_PCK7_Msk;
    }
    #endif
}

/**
 * \brief Initializes USB FS clock generators
 *
 * USB FS clock are running when this function returns.
 */
static void _pmc_init_usb_clock(void)
{
    if (PMC_SCER_USBCLK_Msk == (VALUE_PMC_SCER & PMC_SCER_USBCLK_Msk)) {
        PMC_REGS->PMC_USB = VALUE_PMC_USB;
        PMC_REGS->PMC_SCER |= PMC_SCER_USBCLK_Msk;
    } else {
        PMC_REGS->PMC_SCDR |= PMC_SCDR_USBCLK_Msk;
    }
}

/**
 * \brief Initializes generic clock generators
 *
 * Generic clock are running when this function returns.
 */
static void _pmc_init_generic_clock(void)
{
    // Put PMC_PCR register into read mode for GCLK0/I2SC0
    PMC_REGS->PMC_PCR = PMC_PCR_PID(69);
    #ifdef VALUE_PMC_PCR_I2SC0
    // I2SC0 is not present for MCUs of type Jxx.
    // If GCLK0 is enabled.
    if (PMC_PCR_GCLKEN_Msk == (VALUE_PMC_PCR_I2SC0 & PMC_PCR_GCLKEN_Msk)) {
        // Select generic clock for I2SC0.
        MATRIX_REGS->CCFG_PCCR |= CCFG_PCCR_I2SC0CC_Msk;
        // If GCLK0 is not actually enabled.
        if (PMC_PCR_GCLKEN_Msk != (PMC_REGS->PMC_PCR & PMC_PCR_GCLKEN_Msk)) {
            // Put PMC_PCR register into write mode and configure GCLK0.
            PMC_REGS->PMC_PCR = PMC_PCR_CMD_Msk | VALUE_PMC_PCR_I2SC0;
        }
    } else {
        // Select peripheral clock for I2SC0.
        MATRIX_REGS->CCFG_PCCR &= ~CCFG_PCCR_I2SC0CC_Msk;
        // If GCLK0 is actually enabled.
        if (PMC_PCR_GCLKEN_Msk != (PMC_REGS->PMC_PCR & PMC_PCR_GCLKEN_Msk)) {
            // Put PMC_PCR register into write mode and disable GCLK0.
            PMC_REGS->PMC_PCR = PMC_PCR_CMD_Msk | PMC_PCR_PID(69);
        }
    }
    #endif

    // Put PMC_PCR register into read mode for GCLK1/I2SC1
    PMC_REGS->PMC_PCR = PMC_PCR_PID(70);
    #ifdef VALUE_PMC_PCR_I2SC1
    // I2SC1 is only present for MCUs of type Qxx.
    // If GCLK0 is enabled.
    if (PMC_PCR_GCLKEN_Msk == (VALUE_PMC_PCR_I2SC1 & PMC_PCR_GCLKEN_Msk)) {
        // Select generic clock for I2SC1.
        MATRIX_REGS->CCFG_PCCR |= CCFG_PCCR_I2SC1CC_Msk;
        // If GCLK0 is not actually enabled.
        if (PMC_PCR_GCLKEN_Msk != (PMC_REGS->PMC_PCR & PMC_PCR_GCLKEN_Msk)) {
            // Put PMC_PCR register into write mode and configure GCLK0.
            PMC_REGS->PMC_PCR = PMC_PCR_CMD_Msk | VALUE_PMC_PCR_I2SC1;
        }
    } else {
        // Select peripheral clock for I2SC1.
        MATRIX_REGS->CCFG_PCCR &= ~CCFG_PCCR_I2SC1CC_Msk;
        // If GCLK0 is actually enabled.
        if (PMC_PCR_GCLKEN_Msk != (PMC_REGS->PMC_PCR & PMC_PCR_GCLKEN_Msk)) {
            // Put PMC_PCR register into write mode and disable GCLK0.
            PMC_REGS->PMC_PCR = PMC_PCR_CMD_Msk | PMC_PCR_PID(70);
        }
    }
    #endif
}

uint32_t SystemCoreClock = __SYSTEM_CLOCK;  /*!< System Clock Frequency (Core Clock)*/

void SystemCoreClockUpdate(void);

/**
 * Initialize the system
 *
 * \brief  Setup the microcontroller system.
 *         Initialize the System and update the SystemCoreClock variable.
 */
void SystemInit(void)
{
    // Keep the default device state after reset
    SystemCoreClock = __SYSTEM_CLOCK;

    _efc_set_flash_wait_cycles();
    _pmc_init_sources();
    _pmc_init_master_clock();
    _pmc_init_program_clock();
    _pmc_init_usb_clock();
    _pmc_init_generic_clock();

    // The configured clock is now active.
    SystemCoreClockUpdate();

    // Disable Watchdog Timer.
    WDT_REGS->WDT_MR = WDT_MR_WDDIS_Msk;

    // Enable Floating Point Unit and synchronize the pipeline.
    SCB->CPACR |= ((3UL << 20) | (3UL << 22));
    __DSB();
    __ISB();

#if SYSTEM_ENABLE_ICACHE
    SCB_EnableICache();
#endif

#if SYSTEM_ENABLE_DCACHE
    SCB_EnableDCache();
#endif

    return;
}

/**
 * Update SystemCoreClock variable
 *
 * \brief  Updates the SystemCoreClock with current core Clock
 *         retrieved from cpu registers.
 */
void SystemCoreClockUpdate(void)
{
    /*
     * FOSC_KHZ_VALUE is generated from the JSON top-level "clock" value.
     * For the default configuration it is 300000 kHz
     * (main RC 12 MHz -> PLLA /1 x25 -> PRES /1 = HCLK, MDIV /2 = MCK 150 MHz).
     */
    SystemCoreClock = __SYSTEM_CLOCK;
    return;
}

/** \cond 0 */
/* *INDENT-OFF* */
#ifdef __cplusplus
}
#endif
/* *INDENT-ON* */
/** \endcond */
