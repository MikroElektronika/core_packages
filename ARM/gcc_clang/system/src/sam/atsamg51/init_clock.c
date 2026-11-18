/****************************************************************************
**
** Copyright (C) 2025 MikroElektronika d.o.o.
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

#include "core_header.h"

/*
 * The ATSAMG51 mcu.h does not include the CMSIS core header (MikroE change),
 * but its component headers need the CMSIS access qualifiers. Provide them
 * only while mcu.h is parsed, then include the CMSIS core header (SCB, __DSB)
 * once the core configuration macros from mcu.h are known.
 */
#ifndef __IO
#define __I     volatile const
#define __O     volatile
#define __IO    volatile
#define INIT_CLOCK_LOCAL_CMSIS_QUALIFIERS
#endif
#include "mcu.h"
#ifdef INIT_CLOCK_LOCAL_CMSIS_QUALIFIERS
#undef __I
#undef __O
#undef __IO
#undef INIT_CLOCK_LOCAL_CMSIS_QUALIFIERS
#endif
#include "core_cm4.h"

/** \cond 0 */
/* *INDENT-OFF* */
#ifdef __cplusplus
extern "C" {
#endif
/* *INDENT-ON* */
/** \endcond */

/**
 * System clock frequency, generated from the top-level "clock" value of the
 * MCU definition (MHz). Default configuration: 24 MHz main RC (factory trimmed), PLLA off, MCK = MAINCK / 1.
 */
#define __SYSTEM_CLOCK    (FOSC_KHZ_VALUE * 1000UL)

/*
 * Flash wait states used while the clock tree is being switched. It is safe
 * for the maximum CPU frequency of this device (FWS = 3 for 48 MHz), so no
 * intermediate clock configuration can violate the flash access time. The
 * configured value (VALUE_EEFC_FMR) is applied once the final clock is active.
 */
#define EFC_FWS_TRANSITION    (3U)

/* PLLA (input: 32 kHz slow clock) is enabled when PLLAEN and MULA are both non-zero. */
#define PLLA_ENABLED    ((0 != (VALUE_CKGR_PLLAR & CKGR_PLLAR_PLLAEN_Msk)) && \
                         (0 != (VALUE_CKGR_PLLAR & CKGR_PLLAR_MULA_Msk)))

static void _pmc_wait_mck_ready(void)
{
    while (PMC_SR_MCKRDY_Msk != (PMC_REGS->PMC_SR & PMC_SR_MCKRDY_Msk)) {
        /* Wait until master clock is ready */
    }
}

static void _efc_write_fws(uint32_t fws)
{
    EFC_REGS->EEFC_FMR = (EFC_REGS->EEFC_FMR & ~EEFC_FMR_FWS_Msk) | (fws & EEFC_FMR_FWS_Msk);
}

/**
 * \brief Use the safe number of flash wait states while clocks are switched.
 */
static void _efc_set_transition_wait_cycles(void)
{
    if ((EFC_REGS->EEFC_FMR & EEFC_FMR_FWS_Msk) < EEFC_FMR_FWS(EFC_FWS_TRANSITION)) {
        _efc_write_fws(EEFC_FMR_FWS(EFC_FWS_TRANSITION));
    }
}

/**
 * \brief Apply the configured number of flash wait states.
 */
static void _efc_set_flash_wait_cycles(void)
{
    _efc_write_fws(VALUE_EEFC_FMR & EEFC_FMR_FWS_Msk);
}

/**
 * \brief Make sure the master clock does not run from a PLL before the PLLs
 *        are (re)programmed (e.g. after a soft reset that kept the PMC state).
 */
static void _pmc_switch_mck_to_mainck(void)
{
    if (PMC_MCKR_CSS_PLLA_CLK <= (PMC_REGS->PMC_MCKR & PMC_MCKR_CSS_Msk)) {
        PMC_REGS->PMC_MCKR = (PMC_REGS->PMC_MCKR & ~PMC_MCKR_CSS_Msk) | PMC_MCKR_CSS_MAIN_CLK;
        _pmc_wait_mck_ready();
    }
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
        while ((SUPC_SR_OSCSEL_CRYST != (SUPC_REGS->SUPC_SR & SUPC_SR_OSCSEL_Msk)) ||
               (PMC_SR_OSCSELS_Msk != (PMC_REGS->PMC_SR & PMC_SR_OSCSELS_Msk))) {
            /* Wait until the slow clock runs from the crystal oscillator */
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
        // Disable the Main RC oscillator if needed.
        if (CKGR_MOR_MOSCRCEN_Msk != (VALUE_CKGR_MOR & CKGR_MOR_MOSCRCEN_Msk)) {
            data = PMC_REGS->CKGR_MOR & ~CKGR_MOR_MOSCRCEN_Msk;
            PMC_REGS->CKGR_MOR = CKGR_MOR_KEY_PASSWD | data;
        }
    }

    // PLLA (bit 29 of CKGR_PLLAR must always be written to zero).
    if (PLLA_ENABLED) {
        PMC_REGS->CKGR_PLLAR = VALUE_CKGR_PLLAR & ~CKGR_PLLAR_ZERO_Msk;
        while (PMC_SR_LOCKA_Msk != (PMC_REGS->PMC_SR & PMC_SR_LOCKA_Msk)) {
            /* Wait until PLLACK stabilize */
        }
    } else {
        // Stop PLLA (PLLAEN = 0, MULA = 0).
        PMC_REGS->CKGR_PLLAR = 0;
    }

    if (VALUE_CKGR_MOR & (CKGR_MOR_MOSCRCEN_Msk | CKGR_MOR_MOSCXTEN_Msk | CKGR_MOR_MOSCXTBY_Msk)) {
        /* Enable main clock failure detection if configured */
        data = PMC_REGS->CKGR_MOR & ~CKGR_MOR_CFDEN_Msk;
        PMC_REGS->CKGR_MOR = CKGR_MOR_KEY_PASSWD | data | (VALUE_CKGR_MOR & CKGR_MOR_CFDEN_Msk);
    }
}

/**
 * \brief Initialize master clock
 */
static void _pmc_init_master_clock(void)
{
    uint32_t data;
    uint32_t pres_mask = PMC_MCKR_PRES_Msk | PMC_MCKR_PLLADIV2_Msk;

    // If Slow Clock or Main Clock is selected as source for the master clock.
    if (PMC_MCKR_CSS_PLLA_CLK > (VALUE_PMC_MCKR & PMC_MCKR_CSS_Msk)) {
        // Select Master Clock source first.
        data = PMC_REGS->PMC_MCKR & ~PMC_MCKR_CSS_Msk;
        data |= VALUE_PMC_MCKR & PMC_MCKR_CSS_Msk;
        PMC_REGS->PMC_MCKR = data;
        _pmc_wait_mck_ready();
        // Then configure Processor Clock prescaler (and PLL dividers).
        data = PMC_REGS->PMC_MCKR & ~pres_mask;
        data |= VALUE_PMC_MCKR & pres_mask;
        PMC_REGS->PMC_MCKR = data;
        _pmc_wait_mck_ready();
    } else { // If the PLLA clock is selected as source for the master clock.
        // Configure Processor Clock prescaler (and PLL dividers) first.
        data = PMC_REGS->PMC_MCKR & ~pres_mask;
        data |= VALUE_PMC_MCKR & pres_mask;
        PMC_REGS->PMC_MCKR = data;
        _pmc_wait_mck_ready();
        // Then select Master Clock source.
        data = PMC_REGS->PMC_MCKR & ~PMC_MCKR_CSS_Msk;
        data |= VALUE_PMC_MCKR & PMC_MCKR_CSS_Msk;
        PMC_REGS->PMC_MCKR = data;
        _pmc_wait_mck_ready();
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
        PMC_REGS->PMC_SCDR = PMC_SCDR_PCK0_Msk;
        PMC_REGS->PMC_PCK[0] = VALUE_PMC_PCK0;
        PMC_REGS->PMC_SCER = PMC_SCER_PCK0_Msk;
        while (!(PMC_REGS->PMC_SR & PMC_SR_PCKRDY0_Msk)) {
            /* Wait until PCK0 clock is ready */
        }
    } else {
        PMC_REGS->PMC_SCDR = PMC_SCDR_PCK0_Msk;
    }

    if (PMC_SCER_PCK1_Msk == (VALUE_PMC_SCER & PMC_SCER_PCK1_Msk)) {
        PMC_REGS->PMC_SCDR = PMC_SCDR_PCK1_Msk;
        PMC_REGS->PMC_PCK[1] = VALUE_PMC_PCK1;
        PMC_REGS->PMC_SCER = PMC_SCER_PCK1_Msk;
        while (!(PMC_REGS->PMC_SR & PMC_SR_PCKRDY1_Msk)) {
            /* Wait until PCK1 clock is ready */
        }
    } else {
        PMC_REGS->PMC_SCDR = PMC_SCDR_PCK1_Msk;
    }

    if (PMC_SCER_PCK2_Msk == (VALUE_PMC_SCER & PMC_SCER_PCK2_Msk)) {
        PMC_REGS->PMC_SCDR = PMC_SCDR_PCK2_Msk;
        PMC_REGS->PMC_PCK[2] = VALUE_PMC_PCK2;
        PMC_REGS->PMC_SCER = PMC_SCER_PCK2_Msk;
        while (!(PMC_REGS->PMC_SR & PMC_SR_PCKRDY2_Msk)) {
            /* Wait until PCK2 clock is ready */
        }
    } else {
        PMC_REGS->PMC_SCDR = PMC_SCDR_PCK2_Msk;
    }
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
    // Disable Watchdog Timer (it is enabled after reset, WDT_MR is write-once).
    WDT_REGS->WDT_MR = WDT_MR_WDDIS_Msk;

    #if defined(__FPU_PRESENT) && (__FPU_PRESENT == 1)
    // Enable Floating Point Unit and synchronize the pipeline.
    SCB->CPACR |= ((3UL << 20) | (3UL << 22));
    __DSB();
    __ISB();
    #endif

    _efc_set_transition_wait_cycles();
    _pmc_switch_mck_to_mainck();
    _pmc_init_sources();
    _pmc_init_master_clock();
    _efc_set_flash_wait_cycles();
    _pmc_init_program_clock();

    // The configured clock is now active.
    SystemCoreClockUpdate();

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
