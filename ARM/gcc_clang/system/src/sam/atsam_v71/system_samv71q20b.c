/**
 * \file
 *
 * \brief System configuration file for ATSAMV71Q20B
 *
 * Copyright (c) 2019 Microchip Technology Inc.
 *
 * \license_start
 *
 * \page License
 *
 * SPDX-License-Identifier: Apache-2.0
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
    if (SUPC_CR_XTALSEL_CRYSTAL_SEL == (VALUE_SUPC_CR & SUPC_CR_XTALSEL_Msk)) {
        // If Bypass mode is selected for XOSC32.
        if (SUPC_MR_OSCBYPASS_BYPASS == (VALUE_SUPC_MR & SUPC_MR_OSCBYPASS_Msk)) {
            // Set bypass mode for XOSC32K. Must be done before setting XOSC32K.
            SUPC->SUPC_MR |= SUPC_MR_KEY_PASSWD | SUPC_MR_OSCBYPASS_BYPASS;
        }
        // Set XOSC32K as source for the SCLK(slow clock).
        SUPC->SUPC_CR = SUPC_CR_KEY_PASSWD | SUPC_CR_XTALSEL_CRYSTAL_SEL;
        while ((SUPC_SR_OSCSEL_CRYST != (SUPC->SUPC_SR & SUPC_SR_OSCSEL_Msk)) &&
               (PMC_SR_OSCSELS != (PMC->PMC_SR & PMC_SR_OSCSELS_Msk))) {
            /* Wait until the oscillator is ready */
        }
    }

    // If the Main RC oscillator is enabled and selected.
    if ((CKGR_MOR_MOSCRCEN == (VALUE_CKGR_MOR & CKGR_MOR_MOSCRCEN_Msk)) &&
        (CKGR_MOR_MOSCSEL != (VALUE_CKGR_MOR & CKGR_MOR_MOSCSEL_Msk))) {
        /* Enable Fast RC oscillator but DO NOT switch to RC now */
        PMC->CKGR_MOR |= CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCRCEN;
        while (PMC_SR_MOSCRCS != (PMC->PMC_SR & PMC_SR_MOSCRCS_Msk)) {
            /* Wait until the Fast RC to stabilize */
        }
        /* Set Fast RC oscillator clock frequency */
        data = PMC->CKGR_MOR & ~CKGR_MOR_MOSCRCF_Msk;
        data |= CKGR_MOR_KEY_PASSWD | (VALUE_CKGR_MOR & CKGR_MOR_MOSCRCF_Msk);
        PMC->CKGR_MOR = data;
        while (PMC_SR_MOSCRCS != (PMC->PMC_SR & PMC_SR_MOSCRCS_Msk)) {
            /* Wait until the Fast RC to stabilize */
        }
        /* Switch to Fast RC */
        data = PMC->CKGR_MOR & ~CKGR_MOR_MOSCSEL_Msk;
        data |= CKGR_MOR_KEY_PASSWD;
        PMC->CKGR_MOR = data;
        while (PMC_SR_MOSCSELS != (PMC->PMC_SR & PMC_SR_MOSCSELS_Msk)) {
            /* Wait until the oscillator selection is done */
        }
        // Disable the Main Crystal oscillator if needed.
        if (CKGR_MOR_MOSCXTEN != (VALUE_CKGR_MOR & CKGR_MOR_MOSCXTEN_Msk)) {
            PMC->CKGR_MOR &= ~CKGR_MOR_MOSCXTEN_Msk;
        }
        // Disable the Main Crystal oscillator Bypass if needed.
        if (CKGR_MOR_MOSCXTBY != (VALUE_CKGR_MOR & CKGR_MOR_MOSCXTBY_Msk)) {
            PMC->CKGR_MOR &= ~CKGR_MOR_MOSCXTBY_Msk;
        }
        data = PMC->PMC_SR;
    }

    // If the Main Crystal oscillator is enabled/bypassed and selected.
    if ((0 != (VALUE_CKGR_MOR & (CKGR_MOR_MOSCXTEN_Msk | CKGR_MOR_MOSCXTBY_Msk))) &&
        (CKGR_MOR_MOSCSEL == (VALUE_CKGR_MOR & CKGR_MOR_MOSCSEL_Msk))) {
        if (CKGR_MOR_MOSCXTBY == (VALUE_CKGR_MOR & CKGR_MOR_MOSCXTBY_Msk)) {
            /* Enable Main XTAL oscillator bypass */
            data = PMC->CKGR_MOR & ~CKGR_MOR_MOSCXTEN;
            data |= CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCXTBY | CKGR_MOR_MOSCSEL;
            PMC->CKGR_MOR = data;
        } else {
            /* Enable Main XTAL oscillator */
            data = PMC->CKGR_MOR & ~(CKGR_MOR_MOSCXTBY_Msk | CKGR_MOR_MOSCXTST_Msk);
            data |= CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCXTEN | (VALUE_CKGR_MOR & CKGR_MOR_MOSCXTST_Msk);
            PMC->CKGR_MOR = data;
            while (PMC_SR_MOSCXTS != (PMC->PMC_SR & PMC_SR_MOSCXTS_Msk)) {
                /* Wait until the XTAL to stabilize */
            }
            PMC->CKGR_MOR |= CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCSEL;
        }
        while (PMC_SR_MOSCSELS != (PMC->PMC_SR & PMC_SR_MOSCSELS_Msk)) {
                /* Wait until the oscillator selection is done */
        }
        if (CKGR_MOR_MOSCRCEN != (VALUE_CKGR_MOR & CKGR_MOR_MOSCRCEN_Msk)) {
            PMC->CKGR_MOR &= ~CKGR_MOR_MOSCRCEN_Msk;
        }
    }

    /* Stop PLL first */
    // If the PLLA is enabled.
    if ((CKGR_PLLAR_DIVA_0_Val != (VALUE_CKGR_PLLAR & CKGR_PLLAR_DIVA_Msk)) &&
        (CKGR_PLLAR_MULA(0) < (VALUE_CKGR_PLLAR & CKGR_PLLAR_MULA_Msk))) {
        /* Program PLL */
        PMC->CKGR_PLLAR = CKGR_PLLAR_ONE | VALUE_CKGR_PLLAR;
        while (PMC_SR_LOCKA != (PMC->PMC_SR & PMC_SR_LOCKA_Msk)) {
            /* Wait until PLLACK stabilize */
        }
    }

    // If UPLL is enabled.
    if (CKGR_UCKR_UPLLEN == (VALUE_CKGR_UCKR & CKGR_UCKR_UPLLEN_Msk)) {
        UTMI->UTMI_CKTRIM = VALUE_UTMI_CKTRIM;
        // Configure UPLL.
        PMC->CKGR_UCKR = VALUE_CKGR_UCKR;
	    while (PMC_SR_LOCKU != (PMC->PMC_SR & PMC_SR_LOCKU_Msk)) {
		    /* Wait until USB UTMI stabilize */
        }
        data = PMC->PMC_MCKR & ~PMC_MCKR_UPLLDIV_Msk;
        data |= VALUE_PMC_MCKR & PMC_MCKR_UPLLDIV_Msk;
        PMC->PMC_MCKR = data;
        while (PMC_SR_MCKRDY != (PMC->PMC_SR & PMC_SR_MCKRDY)) {
            /* Wait until master clock is ready */
        }
	} else {
        // Disasble UPLL.
        PMC->CKGR_UCKR &= ~CKGR_UCKR_UPLLEN;
    }

    if (VALUE_CKGR_MOR & (CKGR_MOR_MOSCRCEN_Msk | CKGR_MOR_MOSCXTEN_Msk | CKGR_MOR_MOSCXTBY_Msk)) {
        /* Enable main clock failure detection */
        PMC->CKGR_MOR |= CKGR_MOR_KEY_PASSWD | (VALUE_CKGR_MOR & CKGR_MOR_CFDEN_Msk);
    }
}

/**
 * \brief Initialize master clock
 */
static void _pmc_init_master_clock(void)
{
    uint32_t data;

    if (CKGR_UCKR_UPLLEN == (VALUE_CKGR_UCKR & CKGR_UCKR_UPLLEN_Msk)) {
        data = PMC->PMC_MCKR & ~PMC_MCKR_UPLLDIV2_Msk;
        data |= VALUE_PMC_MCKR & PMC_MCKR_UPLLDIV2_Msk;
        PMC->PMC_MCKR = data;
        while (PMC_SR_MCKRDY != (PMC->PMC_SR & PMC_SR_MCKRDY_Msk)) {
            /* Wait until master clock is ready */
        }
    }

    // If Slow Clock or Main Clock is selected as source for the master clock.
    if (PMC_MCKR_CSS_PLLA_CLK > (VALUE_PMC_MCKR & PMC_MCKR_CSS_Msk)) {
        // Select Host Clock source.
        data = PMC->PMC_MCKR & ~PMC_MCKR_CSS_Msk;
        data |= VALUE_PMC_MCKR & PMC_MCKR_CSS_Msk;
        PMC->PMC_MCKR = data;
        while (PMC_SR_MCKRDY != (PMC->PMC_SR & PMC_SR_MCKRDY_Msk)) {
            /* Wait until master clock is ready */
        }
        // Configure Processor Clock prescaler.
        data = PMC->PMC_MCKR & ~PMC_MCKR_PRES_Msk;
        data |= VALUE_PMC_MCKR & PMC_MCKR_PRES_Msk;
        PMC->PMC_MCKR = data;
        while (PMC_SR_MCKRDY != (PMC->PMC_SR & PMC_SR_MCKRDY_Msk)) {
            /* Wait until master clock is ready */
        }
        // Configure Host Clock divisor.
        data = PMC->PMC_MCKR & ~PMC_MCKR_MDIV_Msk;
        data |= VALUE_PMC_MCKR & PMC_MCKR_MDIV_Msk;
        PMC->PMC_MCKR = data;
        while (PMC_SR_MCKRDY != (PMC->PMC_SR & PMC_SR_MCKRDY_Msk)) {
            /* Wait until master clock is ready */
        }
    } else { // If PLLA Clock or UPLL Clock is selected as source for the host clock.
        // Configure Processor Clock prescaler.
        data = PMC->PMC_MCKR & ~PMC_MCKR_PRES_Msk;
        data |= VALUE_PMC_MCKR & PMC_MCKR_PRES_Msk;
        PMC->PMC_MCKR = data;
        while (PMC_SR_MCKRDY != (PMC->PMC_SR & PMC_SR_MCKRDY_Msk)) {
            /* Wait until master clock is ready */
        }
        // Configure Host Clock divisor.
        data = PMC->PMC_MCKR & ~PMC_MCKR_MDIV_Msk;
        data |= VALUE_PMC_MCKR & PMC_MCKR_MDIV_Msk;
        PMC->PMC_MCKR = data;
        while (PMC_SR_MCKRDY != (PMC->PMC_SR & PMC_SR_MCKRDY_Msk)) {
            /* Wait until master clock is ready */
        }
        // Select Host Clock source.
        data = PMC->PMC_MCKR & ~PMC_MCKR_CSS_Msk;
        data |= VALUE_PMC_MCKR & PMC_MCKR_CSS_Msk;
        PMC->PMC_MCKR = data;
        while (PMC_SR_MCKRDY != (PMC->PMC_SR & PMC_SR_MCKRDY_Msk)) {
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

    if (PMC_SCER_PCK0 == (VALUE_PMC_SCER & PMC_SCER_PCK0_Msk)) {
        PMC->PMC_PCK[0] = VALUE_PMC_PCK0;
        PMC->PMC_SCER |= PMC_SCER_PCK0;
        while (!(PMC->PMC_SR & PMC_SR_PCKRDY0_Msk)) {
            /* Wait until PCK0 clock is ready */
        }
    } else {
        PMC->PMC_SCDR |= PMC_SCDR_PCK0;
    }

    if (PMC_SCER_PCK1 == (VALUE_PMC_SCER & PMC_SCER_PCK1_Msk)) {
        PMC->PMC_PCK[1] = VALUE_PMC_PCK1;
        PMC->PMC_SCER |= PMC_SCER_PCK1;
        while (!(PMC->PMC_SR & PMC_SR_PCKRDY1_Msk)) {
            /* Wait until PCK1 clock is ready */
        }
    } else {
        PMC->PMC_SCDR |= PMC_SCDR_PCK1;
    }

    if (PMC_SCER_PCK2 == (VALUE_PMC_SCER & PMC_SCER_PCK2_Msk)) {
        PMC->PMC_PCK[2] = VALUE_PMC_PCK2;
        PMC->PMC_SCER |= PMC_SCER_PCK2;
        while (!(PMC->PMC_SR & PMC_SR_PCKRDY2_Msk)) {
            /* Wait until PCK2 clock is ready */
        }
    } else {
        PMC->PMC_SCDR |= PMC_SCDR_PCK2;
    }

    if (PMC_SCER_PCK3 == (VALUE_PMC_SCER & PMC_SCER_PCK3_Msk)) {
        PMC->PMC_PCK[3] = VALUE_PMC_PCK3;
        PMC->PMC_SCER |= PMC_SCER_PCK3;
        while (!(PMC->PMC_SR & PMC_SR_PCKRDY3_Msk)) {
            /* Wait until PCK3 clock is ready */
        }
    } else {
        PMC->PMC_SCDR |= PMC_SCDR_PCK3;
    }

    if (PMC_SCER_PCK4 == (VALUE_PMC_SCER & PMC_SCER_PCK4_Msk)) {
        PMC->PMC_PCK[4] = VALUE_PMC_PCK4;
        PMC->PMC_SCER |= PMC_SCER_PCK4;
        while (!(PMC->PMC_SR & PMC_SR_PCKRDY4_Msk)) {
            /* Wait until PCK4 clock is ready */
        }
    } else {
        PMC->PMC_SCDR |= PMC_SCDR_PCK4;
    }

    if (PMC_SCER_PCK5 == (VALUE_PMC_SCER & PMC_SCER_PCK5_Msk)) {
        PMC->PMC_PCK[5] = VALUE_PMC_PCK5;
        PMC->PMC_SCER |= PMC_SCER_PCK5;
        while (!(PMC->PMC_SR & PMC_SR_PCKRDY5_Msk)) {
            /* Wait until PCK5 clock is ready */
        }
    } else {
        PMC->PMC_SCDR |= PMC_SCDR_PCK5;
    }

    if (PMC_SCER_PCK6 == (VALUE_PMC_SCER & PMC_SCER_PCK6_Msk)) {
        PMC->PMC_PCK[6] = VALUE_PMC_PCK6;
        PMC->PMC_SCER |= PMC_SCER_PCK6;
        while (!(PMC->PMC_SR & PMC_SR_PCKRDY6_Msk)) {
            /* Wait until PCK6 clock is ready */
        }
    } else {
        PMC->PMC_SCDR |= PMC_SCDR_PCK6;
    }

    if (PMC_SCER_PCK7 == (VALUE_PMC_SCER & PMC_SCER_PCK7_Msk)) {
        PMC->PMC_PCK[7] = VALUE_PMC_PCK7;
        PMC->PMC_SCER |= PMC_SCER_PCK7;
        while (!(PMC->PMC_SR & PMC_SR_PCKRDY7_Msk)) {
            /* Wait until PCK7 clock is ready */
        }
    } else {
        PMC->PMC_SCDR |= PMC_SCDR_PCK7;
    }
}

/**
 * \brief Initializes USB FS clock generators
 *
 * USB FS clock are running when this function returns.
 */
static void _pmc_init_usb_clock(void)
{
    if (PMC_SCER_USBCLK == (VALUE_PMC_SCER & PMC_SCER_USBCLK_Msk)) {
        PMC->PMC_USB = VALUE_PMC_USB;
        PMC->PMC_SCER |= PMC_SCER_USBCLK;
    } else {
        PMC->PMC_SCDR |= PMC_SCDR_USBCLK;
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
    PMC->PMC_PCR = PMC_PCR_PID(69);
    // If GCLK0 is enabled.
    if (PMC_PCR_GCLKEN == (VALUE_PMC_PCR_I2SC0 & PMC_PCR_GCLKEN_Msk)) {
        // Select generic clock for I2SC0.
        MATRIX->CCFG_PCCR |= CCFG_PCCR_I2SC0CC;
        // If GCLK0 is not actually enabled.
        if (PMC_PCR_GCLKEN != (PMC->PMC_PCR & PMC_PCR_GCLKEN_Msk)) {
            // Put PMC_PCR register into write mode and configure GCLK0.
            PMC->PMC_PCR = PMC_PCR_CMD | VALUE_PMC_PCR_I2SC0;
        }
    } else {
        // Select peripheral clock for I2SC0.
        MATRIX->CCFG_PCCR &= ~CCFG_PCCR_I2SC0CC_Msk;
        // If GCLK0 is actually enabled.
        if (PMC_PCR_GCLKEN != (PMC->PMC_PCR & PMC_PCR_GCLKEN_Msk)) {
            // Put PMC_PCR register into write mode and disable GCLK0.
            PMC->PMC_PCR = PMC_PCR_CMD | PMC_PCR_PID(69);
        }
    }

    // Put PMC_PCR register into read mode for GCLK1/I2SC1
    PMC->PMC_PCR = PMC_PCR_PID(70);
    // If GCLK0 is enabled.
    if (PMC_PCR_GCLKEN == (VALUE_PMC_PCR_I2SC1 & PMC_PCR_GCLKEN_Msk)) {
        // Select generic clock for I2SC1.
        MATRIX->CCFG_PCCR |= CCFG_PCCR_I2SC1CC;
        // If GCLK0 is not actually enabled.
        if (PMC_PCR_GCLKEN != (PMC->PMC_PCR & PMC_PCR_GCLKEN_Msk)) {
            // Put PMC_PCR register into write mode and configure GCLK0.
            PMC->PMC_PCR = PMC_PCR_CMD | VALUE_PMC_PCR_I2SC1;
        }
    } else {
        // Select peripheral clock for I2SC1.
        MATRIX->CCFG_PCCR &= ~CCFG_PCCR_I2SC1CC_Msk;
        // If GCLK0 is actually enabled.
        if (PMC_PCR_GCLKEN != (PMC->PMC_PCR & PMC_PCR_GCLKEN_Msk)) {
            // Put PMC_PCR register into write mode and disable GCLK0.
            PMC->PMC_PCR = PMC_PCR_CMD | PMC_PCR_PID(70);
        }
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
    _pmc_init_usb_clock();
    _pmc_init_generic_clock();

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
