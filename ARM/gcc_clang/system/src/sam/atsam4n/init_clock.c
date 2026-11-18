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
 * System clock frequency, generated from the top-level "clock" value of the
 * MCU definition (MHz). Default configuration: 8 MHz main RC / 2 -> PLLA x25 = 100 MHz, MCK = PLLACK / 1.
 */
#define __SYSTEM_CLOCK    (FOSC_KHZ_VALUE * 1000UL)

/*
 * Flash wait states used while the clock tree is being switched. It is safe
 * for the maximum CPU frequency of this device (FWS = 4 for 100 MHz), so no
 * intermediate clock configuration can violate the flash access time. The
 * configured value (VALUE_EEFC_FMR) is applied once the final clock is active.
 */
#define EFC_FWS_TRANSITION    (4UL)

/* SAM4S/SA/SD name the flash controller EFC0 (SD devices also have EFC1). */
#if defined(EFC0) && !defined(EFC)
#define EFC    EFC0
#endif

#define PLLA_ENABLED    ((0 != (VALUE_CKGR_PLLAR & CKGR_PLLAR_DIVA_Msk)) && \
                         (0 != (VALUE_CKGR_PLLAR & CKGR_PLLAR_MULA_Msk)))

#ifdef VALUE_CKGR_PLLBR
#define PLLB_ENABLED    ((0 != (VALUE_CKGR_PLLBR & CKGR_PLLBR_DIVB_Msk)) && \
                         (0 != (VALUE_CKGR_PLLBR & CKGR_PLLBR_MULB_Msk)))
#endif

static void _pmc_wait_mck_ready(void)
{
    while (PMC_SR_MCKRDY != (PMC->PMC_SR & PMC_SR_MCKRDY)) {
        /* Wait until master clock is ready */
    }
}

static void _efc_write_fws(uint32_t fws)
{
    EFC->EEFC_FMR = (EFC->EEFC_FMR & ~EEFC_FMR_FWS_Msk) | (fws & EEFC_FMR_FWS_Msk);
    #ifdef EFC1
    // Devices with two flash banks have a second flash controller.
    EFC1->EEFC_FMR = (EFC1->EEFC_FMR & ~EEFC_FMR_FWS_Msk) | (fws & EEFC_FMR_FWS_Msk);
    #endif
}

/**
 * \brief Use the safe number of flash wait states while clocks are switched.
 */
static void _efc_set_transition_wait_cycles(void)
{
    if ((EFC->EEFC_FMR & EEFC_FMR_FWS_Msk) < EEFC_FMR_FWS(EFC_FWS_TRANSITION)) {
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
    if (PMC_MCKR_CSS_PLLA_CLK <= (PMC->PMC_MCKR & PMC_MCKR_CSS_Msk)) {
        PMC->PMC_MCKR = (PMC->PMC_MCKR & ~PMC_MCKR_CSS_Msk) | PMC_MCKR_CSS_MAIN_CLK;
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
    if (SUPC_CR_XTALSEL_CRYSTAL_SEL == (VALUE_SUPC_CR & SUPC_CR_XTALSEL)) {
        // If Bypass mode is selected for XOSC32.
        if (SUPC_MR_OSCBYPASS_BYPASS == (VALUE_SUPC_MR & SUPC_MR_OSCBYPASS)) {
            // Set bypass mode for XOSC32K. Must be done before setting XOSC32K.
            SUPC->SUPC_MR |= SUPC_MR_KEY_PASSWD | SUPC_MR_OSCBYPASS_BYPASS;
        }
        // Set XOSC32K as source for the SCLK(slow clock).
        SUPC->SUPC_CR = SUPC_CR_KEY_PASSWD | SUPC_CR_XTALSEL_CRYSTAL_SEL;
        while ((SUPC_SR_OSCSEL_CRYST != (SUPC->SUPC_SR & SUPC_SR_OSCSEL)) ||
               (PMC_SR_OSCSELS != (PMC->PMC_SR & PMC_SR_OSCSELS))) {
            /* Wait until the slow clock runs from the crystal oscillator */
        }
    }

    // If the Main RC oscillator is enabled and selected.
    if ((CKGR_MOR_MOSCRCEN == (VALUE_CKGR_MOR & CKGR_MOR_MOSCRCEN)) &&
        (CKGR_MOR_MOSCSEL != (VALUE_CKGR_MOR & CKGR_MOR_MOSCSEL))) {
        /* Enable Fast RC oscillator but DO NOT switch to RC now */
        PMC->CKGR_MOR |= CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCRCEN;
        while (PMC_SR_MOSCRCS != (PMC->PMC_SR & PMC_SR_MOSCRCS)) {
            /* Wait until the Fast RC to stabilize */
        }
        /* Set Fast RC oscillator clock frequency */
        data = PMC->CKGR_MOR & ~CKGR_MOR_MOSCRCF_Msk;
        data |= CKGR_MOR_KEY_PASSWD | (VALUE_CKGR_MOR & CKGR_MOR_MOSCRCF_Msk);
        PMC->CKGR_MOR = data;
        while (PMC_SR_MOSCRCS != (PMC->PMC_SR & PMC_SR_MOSCRCS)) {
            /* Wait until the Fast RC to stabilize */
        }
        /* Switch to Fast RC */
        data = PMC->CKGR_MOR & ~CKGR_MOR_MOSCSEL;
        data |= CKGR_MOR_KEY_PASSWD;
        PMC->CKGR_MOR = data;
        while (PMC_SR_MOSCSELS != (PMC->PMC_SR & PMC_SR_MOSCSELS)) {
            /* Wait until the oscillator selection is done */
        }
        // Disable the Main Crystal oscillator if needed.
        if (CKGR_MOR_MOSCXTEN != (VALUE_CKGR_MOR & CKGR_MOR_MOSCXTEN)) {
            data = PMC->CKGR_MOR & ~CKGR_MOR_MOSCXTEN;
            PMC->CKGR_MOR = CKGR_MOR_KEY_PASSWD | data;
        }
        // Disable the Main Crystal oscillator Bypass if needed.
        if (CKGR_MOR_MOSCXTBY != (VALUE_CKGR_MOR & CKGR_MOR_MOSCXTBY)) {
            data = PMC->CKGR_MOR & ~CKGR_MOR_MOSCXTBY;
            PMC->CKGR_MOR = CKGR_MOR_KEY_PASSWD | data;
        }
    }

    // If the Main Crystal oscillator is enabled/bypassed and selected.
    if ((0 != (VALUE_CKGR_MOR & (CKGR_MOR_MOSCXTEN | CKGR_MOR_MOSCXTBY))) &&
        (CKGR_MOR_MOSCSEL == (VALUE_CKGR_MOR & CKGR_MOR_MOSCSEL))) {
        if (CKGR_MOR_MOSCXTBY == (VALUE_CKGR_MOR & CKGR_MOR_MOSCXTBY)) {
            /* Enable Main XTAL oscillator bypass */
            data = PMC->CKGR_MOR & ~CKGR_MOR_MOSCXTEN;
            data |= CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCXTBY | CKGR_MOR_MOSCSEL;
            PMC->CKGR_MOR = data;
        } else {
            /* Enable Main XTAL oscillator */
            data = PMC->CKGR_MOR & ~(CKGR_MOR_MOSCXTBY | CKGR_MOR_MOSCXTST_Msk);
            data |= CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCXTEN | (VALUE_CKGR_MOR & CKGR_MOR_MOSCXTST_Msk);
            PMC->CKGR_MOR = data;
            while (PMC_SR_MOSCXTS != (PMC->PMC_SR & PMC_SR_MOSCXTS)) {
                /* Wait until the XTAL to stabilize */
            }
            PMC->CKGR_MOR |= CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCSEL;
        }
        while (PMC_SR_MOSCSELS != (PMC->PMC_SR & PMC_SR_MOSCSELS)) {
            /* Wait until the oscillator selection is done */
        }
        // Disable the Main RC oscillator if needed.
        if (CKGR_MOR_MOSCRCEN != (VALUE_CKGR_MOR & CKGR_MOR_MOSCRCEN)) {
            data = PMC->CKGR_MOR & ~CKGR_MOR_MOSCRCEN;
            PMC->CKGR_MOR = CKGR_MOR_KEY_PASSWD | data;
        }
    }

    // PLLA (bit 29 of CKGR_PLLAR must always be written to one).
    if (PLLA_ENABLED) {
        PMC->CKGR_PLLAR = CKGR_PLLAR_ONE | VALUE_CKGR_PLLAR;
        while (PMC_SR_LOCKA != (PMC->PMC_SR & PMC_SR_LOCKA)) {
            /* Wait until PLLACK stabilize */
        }
    } else {
        // Stop PLLA (MULA = 0).
        PMC->CKGR_PLLAR = CKGR_PLLAR_ONE;
    }

    #ifdef VALUE_CKGR_PLLBR
    // PLLB is present on SAM4S/SA/SD devices only.
    if (PLLB_ENABLED) {
        PMC->CKGR_PLLBR = VALUE_CKGR_PLLBR;
        while (PMC_SR_LOCKB != (PMC->PMC_SR & PMC_SR_LOCKB)) {
            /* Wait until PLLBCK stabilize */
        }
    } else {
        // Stop PLLB (MULB = 0).
        PMC->CKGR_PLLBR = 0;
    }
    #endif

    if (VALUE_CKGR_MOR & (CKGR_MOR_MOSCRCEN | CKGR_MOR_MOSCXTEN | CKGR_MOR_MOSCXTBY)) {
        /* Enable main clock failure detection if configured */
        data = PMC->CKGR_MOR & ~CKGR_MOR_CFDEN;
        PMC->CKGR_MOR = CKGR_MOR_KEY_PASSWD | data | (VALUE_CKGR_MOR & CKGR_MOR_CFDEN);
    }
}

/**
 * \brief Initialize master clock
 */
static void _pmc_init_master_clock(void)
{
    uint32_t data;
    uint32_t pres_mask = PMC_MCKR_PRES_Msk | PMC_MCKR_PLLADIV2;

    #ifdef PMC_MCKR_PLLBDIV2
    pres_mask |= PMC_MCKR_PLLBDIV2;
    #endif

    // If Slow Clock or Main Clock is selected as source for the master clock.
    if (PMC_MCKR_CSS_PLLA_CLK > (VALUE_PMC_MCKR & PMC_MCKR_CSS_Msk)) {
        // Select Master Clock source first.
        data = PMC->PMC_MCKR & ~PMC_MCKR_CSS_Msk;
        data |= VALUE_PMC_MCKR & PMC_MCKR_CSS_Msk;
        PMC->PMC_MCKR = data;
        _pmc_wait_mck_ready();
        // Then configure Processor Clock prescaler (and PLL dividers).
        data = PMC->PMC_MCKR & ~pres_mask;
        data |= VALUE_PMC_MCKR & pres_mask;
        PMC->PMC_MCKR = data;
        _pmc_wait_mck_ready();
    } else { // If a PLL clock is selected as source for the master clock.
        // Configure Processor Clock prescaler (and PLL dividers) first.
        data = PMC->PMC_MCKR & ~pres_mask;
        data |= VALUE_PMC_MCKR & pres_mask;
        PMC->PMC_MCKR = data;
        _pmc_wait_mck_ready();
        // Then select Master Clock source.
        data = PMC->PMC_MCKR & ~PMC_MCKR_CSS_Msk;
        data |= VALUE_PMC_MCKR & PMC_MCKR_CSS_Msk;
        PMC->PMC_MCKR = data;
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
    if (PMC_SCER_PCK0 == (VALUE_PMC_SCER & PMC_SCER_PCK0)) {
        PMC->PMC_SCDR = PMC_SCDR_PCK0;
        PMC->PMC_PCK[0] = VALUE_PMC_PCK0;
        PMC->PMC_SCER = PMC_SCER_PCK0;
        while (!(PMC->PMC_SR & PMC_SR_PCKRDY0)) {
            /* Wait until PCK0 clock is ready */
        }
    } else {
        PMC->PMC_SCDR = PMC_SCDR_PCK0;
    }

    if (PMC_SCER_PCK1 == (VALUE_PMC_SCER & PMC_SCER_PCK1)) {
        PMC->PMC_SCDR = PMC_SCDR_PCK1;
        PMC->PMC_PCK[1] = VALUE_PMC_PCK1;
        PMC->PMC_SCER = PMC_SCER_PCK1;
        while (!(PMC->PMC_SR & PMC_SR_PCKRDY1)) {
            /* Wait until PCK1 clock is ready */
        }
    } else {
        PMC->PMC_SCDR = PMC_SCDR_PCK1;
    }

    if (PMC_SCER_PCK2 == (VALUE_PMC_SCER & PMC_SCER_PCK2)) {
        PMC->PMC_SCDR = PMC_SCDR_PCK2;
        PMC->PMC_PCK[2] = VALUE_PMC_PCK2;
        PMC->PMC_SCER = PMC_SCER_PCK2;
        while (!(PMC->PMC_SR & PMC_SR_PCKRDY2)) {
            /* Wait until PCK2 clock is ready */
        }
    } else {
        PMC->PMC_SCDR = PMC_SCDR_PCK2;
    }
}

/**
 * \brief Initializes USB device port (UDP) clock
 *
 * The UDP needs a 48 MHz clock: PLL output / (USBDIV + 1).
 */
static void _pmc_init_usb_clock(void)
{
    #if defined(PMC_SCER_UDP) && defined(VALUE_PMC_USB)
    if (PMC_SCER_UDP == (VALUE_PMC_SCER & PMC_SCER_UDP)) {
        PMC->PMC_USB = VALUE_PMC_USB;
        PMC->PMC_SCER = PMC_SCER_UDP;
    } else {
        PMC->PMC_SCDR = PMC_SCDR_UDP;
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
    // Disable Watchdog Timer (it is enabled after reset, WDT_MR is write-once).
    WDT->WDT_MR = WDT_MR_WDDIS;

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
    _pmc_init_usb_clock();

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
