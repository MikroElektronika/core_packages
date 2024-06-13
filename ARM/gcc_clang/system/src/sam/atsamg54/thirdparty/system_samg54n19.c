/**
 * \file
 *
 * \brief System configuration file for ATSAMG54N19
 *
 * Copyright (c) 2017 Atmel Corporation, a wholly owned subsidiary of Microchip Technology Inc.
 *
 * \license_start
 *
 * \page License
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \license_stop
 *
 */

// Note: Changed for MikroE implementation
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
 * Initial system clock frequency. The System RC Oscillator (RCSYS) provides
 *  the source for the main clock at chip startup.
 */
#define __SYSTEM_CLOCK    (FOSC_KHZ_VALUE * 1000)

static void _efc_set_flash_wait_cycles()
{
    uint32_t data = EFC->EEFC_FMR & ~EEFC_FMR_FWS_Msk;
    data |= VALUE_EEFC_FMR & EEFC_FMR_FWS_Msk;
    EFC->EEFC_FMR = data;
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
    if (VALUE_SUPC_CR & SUPC_CR_XTALSEL_CRYSTAL_SEL) {
        // If Bypass mode is selected for XOSC32.
        if (VALUE_SUPC_MR & SUPC_MR_OSCBYPASS_BYPASS) {
            // Set bypass mode for XOSC32K. Must be done before setting XOSC32K.
            SUPC->SUPC_MR |= SUPC_MR_KEY_PASSWD | SUPC_MR_OSCBYPASS_BYPASS;
        }
        // Set XOSC32K as source for the SCLK(slow clock).
        SUPC->SUPC_CR = SUPC_CR_KEY_PASSWD | SUPC_CR_XTALSEL_CRYSTAL_SEL;
        while (!((SUPC->SUPC_SR & SUPC_SR_OSCSEL_CRYST) && (PMC->PMC_SR & PMC_SR_OSCSELS))) {
            /* Wait until the oscillator is ready */
        }
    }

    // If the 8/16/24 MHz RC oscillator is enabled and selected.
    if ((VALUE_CKGR_MOR & CKGR_MOR_MOSCRCEN_Msk) && !(VALUE_CKGR_MOR & CKGR_MOR_MOSCSEL_Msk)){
        /* Enable Fast RC oscillator but DO NOT switch to RC now */
        PMC->CKGR_MOR |= CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCRCEN;
        while (!(PMC->PMC_SR & PMC_SR_MOSCRCS_Msk)) {
            /* Wait until the Fast RC to stabilize */
        }
        data = PMC->CKGR_MOR & ~CKGR_MOR_MOSCRCF_Msk;
        data |= CKGR_MOR_KEY_PASSWD | (VALUE_CKGR_MOR & CKGR_MOR_MOSCRCF_Msk);
        PMC->CKGR_MOR = data;
        while (!(PMC->PMC_SR & PMC_SR_MOSCRCS_Msk)) {
            /* Wait until the Fast RC to stabilize */
        }
        /* Switch to Fast RC */
        data = PMC->CKGR_MOR & ~CKGR_MOR_MOSCSEL;
        data |= CKGR_MOR_KEY_PASSWD;
        PMC->CKGR_MOR = data;
        while (PMC_SR_MOSCSELS != (PMC->PMC_SR & PMC_SR_MOSCSELS_Msk)) {
            /* Wait until the oscilator slection is done */
        }
        if (CKGR_MOR_MOSCXTEN != (VALUE_CKGR_MOR & CKGR_MOR_MOSCXTEN_Msk)) {
            PMC->CKGR_MOR &= ~CKGR_MOR_MOSCXTEN;
        }
        if (CKGR_MOR_MOSCXTBY != (VALUE_CKGR_MOR & CKGR_MOR_MOSCXTBY_Msk)) {
            PMC->CKGR_MOR &= ~CKGR_MOR_MOSCXTBY_Msk;
        }
        data = PMC->PMC_SR;
    }

    // If the 3 to 20 MHz crystal oscillator is enabled and selected.
    if ((VALUE_CKGR_MOR & (CKGR_MOR_MOSCXTEN_Msk | CKGR_MOR_MOSCXTBY_Msk)) && (VALUE_CKGR_MOR & CKGR_MOR_MOSCSEL_Msk)) {
        if (VALUE_CKGR_MOR & CKGR_MOR_MOSCXTBY_Msk) {
            /* Enable Main XTAL oscillator */
            data = PMC->CKGR_MOR & ~CKGR_MOR_MOSCXTEN;
            data |= CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCXTBY | CKGR_MOR_MOSCSEL;
            PMC->CKGR_MOR = data;
        } else {
            data = PMC->CKGR_MOR & ~(CKGR_MOR_MOSCXTBY_Msk | CKGR_MOR_MOSCXTST_Msk);
            data |= CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCXTEN | (VALUE_CKGR_MOR & CKGR_MOR_MOSCXTST_Msk);
            PMC->CKGR_MOR = data;
            while (!(PMC->PMC_SR & PMC_SR_MOSCXTS_Msk)) {
                /* Wait until the XTAL to stabilize */
            }
            PMC->CKGR_MOR |= CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCSEL;
        }
        while (PMC_SR_MOSCSELS != (PMC->PMC_SR & PMC_SR_MOSCSELS_Msk)) {
                /* Wait until the oscilator slection is done */
        }
        if (CKGR_MOR_MOSCRCEN != (VALUE_CKGR_MOR & CKGR_MOR_MOSCRCEN_Msk)) {
            PMC->CKGR_MOR &= ~CKGR_MOR_MOSCRCEN_Msk;
        }
    }

    if (VALUE_CKGR_PLLAR & CKGR_PLLAR_PLLAEN(1)) {
        PMC->CKGR_PLLAR = VALUE_CKGR_PLLAR;
        while (!(PMC->PMC_SR & PMC_SR_LOCKA_Msk)) {
            /* Wait until PLLACK stabilize */
        }
    } else {
        PMC->CKGR_PLLAR &= ~CKGR_PLLAR_PLLAEN_Msk;
    }

    if (VALUE_CKGR_MOR & (CKGR_MOR_MOSCRCEN_Msk | CKGR_MOR_MOSCXTEN_Msk | CKGR_MOR_MOSCXTBY_Msk)) {
        /* Enable main clock failure detection */
        data =  PMC->CKGR_MOR & ~CKGR_MOR_CFDEN_Msk;
        data |= VALUE_CKGR_MOR & CKGR_MOR_CFDEN_Msk;
        PMC->CKGR_MOR = data;
    }
}

/**
 * \brief Initialize master clock
 */
static void _pmc_init_master_clock(void)
{
    uint32_t data;

    if (VALUE_CKGR_PLLAR & CKGR_PLLAR_PLLAEN(1)) {
        data = PMC->PMC_MCKR & ~PMC_MCKR_PLLADIV2_Msk;
        data |= VALUE_PMC_MCKR & PMC_MCKR_PLLADIV2_Msk;
        PMC->PMC_MCKR = data;
        while (!(PMC->PMC_SR & PMC_SR_MCKRDY_Msk)) {
            /* Wait until master clock is ready */
        }
    }

    // If Slow Clock or Main Clock is selected as source for the master clock.
    if ((VALUE_PMC_MCKR & PMC_MCKR_CSS_Msk) < PMC_MCKR_CSS_PLLA_CLK) {
        data = PMC->PMC_MCKR & ~PMC_MCKR_CSS_Msk;
        data |= VALUE_PMC_MCKR & PMC_MCKR_CSS_Msk;
        PMC->PMC_MCKR = data;
        while (!(PMC->PMC_SR & PMC_SR_MCKRDY_Msk)) {
            /* Wait until master clock is ready */
        }
        data = PMC->PMC_MCKR & ~PMC_MCKR_PRES_Msk;
        data |= VALUE_PMC_MCKR & PMC_MCKR_PRES_Msk;
        PMC->PMC_MCKR = data;
        while (!(PMC->PMC_SR & PMC_SR_MCKRDY_Msk)) {
            /* Wait until master clock is ready */
        }
    } else { // If PLLA Clock or PLLB Clock is selected as source for the master clock.
        data = PMC->PMC_MCKR & ~PMC_MCKR_PRES_Msk;
        data |= VALUE_PMC_MCKR & PMC_MCKR_PRES_Msk;
        PMC->PMC_MCKR = data;
        while (!(PMC->PMC_SR & PMC_SR_MCKRDY_Msk)) {
            /* Wait until master clock is ready */
        }
        data = PMC->PMC_MCKR & ~PMC_MCKR_CSS_Msk;
        data |= VALUE_PMC_MCKR & PMC_MCKR_CSS_Msk;
        PMC->PMC_MCKR = data;
        while (!(PMC->PMC_SR & PMC_SR_MCKRDY_Msk)) {
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
    uint32_t data;

    if (VALUE_PMC_SCER & PMC_SCER_PCK0_Msk) {
        PMC->PMC_PCK[0] = VALUE_PMC_PCK0;
        PMC->PMC_SCER |= PMC_SCER_PCK0;
        while (!(PMC->PMC_SR & PMC_SR_PCKRDY0_Msk)) {
            /* Wait until PCK0 clock is ready */
        }
    } else {
        PMC->PMC_SCDR |= PMC_SCDR_PCK0;
    }

    if (VALUE_PMC_SCER & PMC_SCER_PCK1_Msk) {
        PMC->PMC_PCK[1] = VALUE_PMC_PCK1;
        PMC->PMC_SCER |= PMC_SCER_PCK1;
        while (!(PMC->PMC_SR & PMC_SR_PCKRDY1_Msk)) {
            /* Wait until PCK1 clock is ready */
        }
    } else {
        PMC->PMC_SCDR |= PMC_SCDR_PCK1;
    }

    if (VALUE_PMC_SCER & PMC_SCER_PCK2_Msk) {
        PMC->PMC_PCK[2] = VALUE_PMC_PCK2;
        PMC->PMC_SCER |= PMC_SCER_PCK2;
        while (!(PMC->PMC_SR & PMC_SR_PCKRDY2_Msk)) {
            /* Wait until PCK2 clock is ready */
        }
    } else {
        PMC->PMC_SCDR |= PMC_SCDR_PCK2;
    }
}

uint32_t SystemCoreClock = __SYSTEM_CLOCK;  /*!< System Clock Frequency (Core Clock)*/

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
    // Not implemented
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
