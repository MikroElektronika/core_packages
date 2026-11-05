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
 * This mcu.h does not include the CMSIS core header (MikroE change), but its
 * component headers need the CMSIS access qualifiers. Provide them only while
 * mcu.h is parsed, then include the CMSIS core header (SCB, __DSB, caches)
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
#include "core_cm7.h"

/** \cond 0 */
/* *INDENT-OFF* */
#ifdef __cplusplus
extern "C" {
#endif
/* *INDENT-ON* */
/** \endcond */

/**
 * System clock frequency (core clock), generated from the JSON "clock" value.
 * Default configuration: 10 MHz main RC -> PLLA x10 = 100 MHz (VCO1) / PRES 2 = 50 MHz core, MCK = 25 MHz.
 */
#define __SYSTEM_CLOCK    (FOSC_KHZ_VALUE * 1000UL)

/*
 * Cortex-M7 cache policy. Instruction cache is enabled by default.
 * Keep data cache disabled until every DMA buffer/descriptor is either placed
 * in a non-cacheable MPU region or maintained with clean/invalidate operations.
 */
#ifndef SYSTEM_ENABLE_ICACHE
#define SYSTEM_ENABLE_ICACHE    1
#endif

#ifndef SYSTEM_ENABLE_DCACHE
#define SYSTEM_ENABLE_DCACHE    0
#endif

/*
 * Note: the embedded Flash (HEFC) of this device has no software-configurable
 * wait states (HEFC_FMR has no FWS field), so there is no flash setup step.
 */

static void _pmc_wait_mckrdy(void)
{
    while (PMC_SR_MCKRDY_Msk != (PMC_REGS->PMC_SR & PMC_SR_MCKRDY_Msk)) {
        /* Wait until master clock is ready */
    }
}

/**
 * \brief Initialize the timing domain slow clock (TD_SLCK).
 */
static void _supc_init_slow_clock(void)
{
    // If the 32.768 kHz crystal oscillator is selected.
    if (SUPC_CR_TDXTALSEL_Msk == (VALUE_SUPC_CR & SUPC_CR_TDXTALSEL_Msk)) {
        #ifdef VALUE_SUPC_MR
        // If Bypass mode is selected for the 32.768 kHz oscillator.
        if (SUPC_MR_OSCBYPASS_Msk == (VALUE_SUPC_MR & SUPC_MR_OSCBYPASS_Msk)) {
            // Must be done before selecting the crystal (keep supply monitor settings).
            SUPC_REGS->SUPC_MR = (SUPC_REGS->SUPC_MR & (SUPC_MR_CORSMDIS_Msk | SUPC_MR_CORSMRSTEN_Msk)) |
                                 SUPC_MR_KEY_PASSWD | SUPC_MR_OSCBYPASS_Msk;
        }
        #endif
        SUPC_REGS->SUPC_CR = SUPC_CR_KEY_PASSWD | SUPC_CR_TDXTALSEL_Msk;
        #ifdef VALUE_SUPC_MR
        if (SUPC_MR_OSCBYPASS_Msk != (VALUE_SUPC_MR & SUPC_MR_OSCBYPASS_Msk))
        #endif
        {
            while (0 == (SUPC_REGS->SUPC_SR & SUPC_SR_TDOSCSEL_Msk)) {
                /* Wait until the crystal is selected for TD_SLCK */
            }
        }
    }
}

/**
 * \brief Initialize the main clock (MAINCK) sources.
 */
static void _pmc_init_main_clock(void)
{
    uint32_t data;

    // If the Main RC oscillator is enabled.
    if (CKGR_MOR_MOSCRCEN_Msk == (VALUE_CKGR_MOR & CKGR_MOR_MOSCRCEN_Msk)) {
        PMC_REGS->CKGR_MOR |= CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCRCEN_Msk;
        while (PMC_SR_MOSCRCS_Msk != (PMC_REGS->PMC_SR & PMC_SR_MOSCRCS_Msk)) {
            /* Wait until the RC oscillator is ready */
        }
        // Set the RC oscillator frequency.
        data = PMC_REGS->CKGR_MOR & ~CKGR_MOR_MOSCRCF_Msk;
        data |= CKGR_MOR_KEY_PASSWD | (VALUE_CKGR_MOR & CKGR_MOR_MOSCRCF_Msk);
        PMC_REGS->CKGR_MOR = data;
        while (PMC_SR_MOSCRCS_Msk != (PMC_REGS->PMC_SR & PMC_SR_MOSCRCS_Msk)) {
            /* Wait until the RC oscillator is ready */
        }
        // If the RC oscillator is selected as MAINCK source.
        if (CKGR_MOR_MOSCSEL_Msk != (VALUE_CKGR_MOR & CKGR_MOR_MOSCSEL_Msk)) {
            data = PMC_REGS->CKGR_MOR & ~CKGR_MOR_MOSCSEL_Msk;
            PMC_REGS->CKGR_MOR = CKGR_MOR_KEY_PASSWD | data;
            while (PMC_SR_MOSCSELS_Msk != (PMC_REGS->PMC_SR & PMC_SR_MOSCSELS_Msk)) {
                /* Wait until the oscillator selection is done */
            }
            // Disable the external oscillator if it is not used.
            if (CKGR_MOR_MOSCXTEN_Msk != (VALUE_CKGR_MOR & CKGR_MOR_MOSCXTEN_Msk)) {
                data = PMC_REGS->CKGR_MOR & ~CKGR_MOR_MOSCXTEN_Msk;
                PMC_REGS->CKGR_MOR = CKGR_MOR_KEY_PASSWD | data;
            }
            #ifdef CKGR_MOR_MOSCXTBY_Msk
            if (CKGR_MOR_MOSCXTBY_Msk != (VALUE_CKGR_MOR & CKGR_MOR_MOSCXTBY_Msk)) {
                data = PMC_REGS->CKGR_MOR & ~CKGR_MOR_MOSCXTBY_Msk;
                PMC_REGS->CKGR_MOR = CKGR_MOR_KEY_PASSWD | data;
            }
            #endif
        }
    }

    // If the external main oscillator (crystal / external clock) is selected.
    if (CKGR_MOR_MOSCSEL_Msk == (VALUE_CKGR_MOR & CKGR_MOR_MOSCSEL_Msk)) {
        #ifdef CKGR_MOR_MOSCXTBY_Msk
        if (CKGR_MOR_MOSCXTBY_Msk == (VALUE_CKGR_MOR & CKGR_MOR_MOSCXTBY_Msk)) {
            // External clock signal on XIN (crystal oscillator bypassed).
            data = PMC_REGS->CKGR_MOR & ~CKGR_MOR_MOSCXTEN_Msk;
            PMC_REGS->CKGR_MOR = CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCXTBY_Msk | data;
        } else {
            // Main crystal oscillator.
            data = PMC_REGS->CKGR_MOR & ~CKGR_MOR_MOSCXTST_Msk;
            data |= CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCXTEN_Msk | (VALUE_CKGR_MOR & CKGR_MOR_MOSCXTST_Msk);
            PMC_REGS->CKGR_MOR = data;
            while (PMC_SR_MOSCXTS_Msk != (PMC_REGS->PMC_SR & PMC_SR_MOSCXTS_Msk)) {
                /* Wait until the crystal oscillator is stable */
            }
        }
        #else
        // External clock signal on XIN.
        PMC_REGS->CKGR_MOR |= CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCXTEN_Msk;
        #endif
        PMC_REGS->CKGR_MOR |= CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCSEL_Msk;
        while (PMC_SR_MOSCSELS_Msk != (PMC_REGS->PMC_SR & PMC_SR_MOSCSELS_Msk)) {
            /* Wait until the oscillator selection is done */
        }
        // Disable the RC oscillator if it is not used.
        if (CKGR_MOR_MOSCRCEN_Msk != (VALUE_CKGR_MOR & CKGR_MOR_MOSCRCEN_Msk)) {
            data = PMC_REGS->CKGR_MOR & ~CKGR_MOR_MOSCRCEN_Msk;
            PMC_REGS->CKGR_MOR = CKGR_MOR_KEY_PASSWD | data;
        }
    }

    // Enable main clock failure detection if requested.
    PMC_REGS->CKGR_MOR |= CKGR_MOR_KEY_PASSWD | (VALUE_CKGR_MOR & CKGR_MOR_CFDEN_Msk);

    _pmc_wait_mckrdy();
}

/**
 * \brief Initialize PLLA.
 */
static void _pmc_init_plla(void)
{
    uint32_t data;

    // If the PLLA is enabled (DIVA != 0 and MULA != 0).
    if ((0 != (VALUE_CKGR_PLLAR & CKGR_PLLAR_DIVA_Msk)) &&
        (0 != (VALUE_CKGR_PLLAR & CKGR_PLLAR_MULA_Msk))) {
        // PLLA charge pump current and loop filter.
        data = PMC_REGS->PMC_PLL_CFG &
               ~(PMC_PLL_CFG_OUTCUR_PLLA_Msk | PMC_PLL_CFG_SCA_Msk | PMC_PLL_CFG_SRA_Msk);
        data |= VALUE_PMC_PLL_CFG & (PMC_PLL_CFG_OUTCUR_PLLA_Msk | PMC_PLL_CFG_SCA_Msk | PMC_PLL_CFG_SRA_Msk);
        PMC_REGS->PMC_PLL_CFG = data;
        // Program and enable PLLA.
        PMC_REGS->CKGR_PLLAR = CKGR_PLLAR_ONE_Msk | VALUE_CKGR_PLLAR;
        while (PMC_SR_LOCKA_Msk != (PMC_REGS->PMC_SR & PMC_SR_LOCKA_Msk)) {
            /* Wait until PLLA is locked */
        }
    }
}

/**
 * \brief Initialize master clock
 */
static void _pmc_init_master_clock(void)
{
    uint32_t data;

    // If Slow Clock or Main Clock is selected as source for the master clock.
    if (PMC_MCKR_CSS_PLLA_CLK > (VALUE_PMC_MCKR & PMC_MCKR_CSS_Msk)) {
        // Select clock source.
        data = PMC_REGS->PMC_MCKR & ~PMC_MCKR_CSS_Msk;
        PMC_REGS->PMC_MCKR = data | (VALUE_PMC_MCKR & PMC_MCKR_CSS_Msk);
        _pmc_wait_mckrdy();
        // Configure Processor Clock prescaler.
        data = PMC_REGS->PMC_MCKR & ~PMC_MCKR_PRES_Msk;
        PMC_REGS->PMC_MCKR = data | (VALUE_PMC_MCKR & PMC_MCKR_PRES_Msk);
        _pmc_wait_mckrdy();
        // Configure Master Clock divisor.
        data = PMC_REGS->PMC_MCKR & ~PMC_MCKR_MDIV_Msk;
        PMC_REGS->PMC_MCKR = data | (VALUE_PMC_MCKR & PMC_MCKR_MDIV_Msk);
        _pmc_wait_mckrdy();
    } else { // PLLA Clock is selected as source for the master clock.
        // Configure Processor Clock prescaler.
        data = PMC_REGS->PMC_MCKR & ~PMC_MCKR_PRES_Msk;
        PMC_REGS->PMC_MCKR = data | (VALUE_PMC_MCKR & PMC_MCKR_PRES_Msk);
        _pmc_wait_mckrdy();
        // Configure Master Clock divisor.
        data = PMC_REGS->PMC_MCKR & ~PMC_MCKR_MDIV_Msk;
        PMC_REGS->PMC_MCKR = data | (VALUE_PMC_MCKR & PMC_MCKR_MDIV_Msk);
        _pmc_wait_mckrdy();
        // Select clock source.
        data = PMC_REGS->PMC_MCKR & ~PMC_MCKR_CSS_Msk;
        PMC_REGS->PMC_MCKR = data | (VALUE_PMC_MCKR & PMC_MCKR_CSS_Msk);
        _pmc_wait_mckrdy();
    }
}

/**
 * \brief Configure one programmable clock (PCKx) from its JSON values.
 */
static void _pmc_init_one_pck(uint32_t index, uint32_t enable, uint32_t value)
{
    uint32_t mask = PMC_SCER_PCK0_Msk << index;

    if (enable) {
        PMC_REGS->PMC_SCDR = mask;
        PMC_REGS->PMC_PCK[index] = value;
        PMC_REGS->PMC_SCER = mask;
        while (!(PMC_REGS->PMC_SR & (PMC_SR_PCKRDY0_Msk << index))) {
            /* Wait until PCKx clock is ready */
        }
    } else {
        PMC_REGS->PMC_SCDR = mask;
    }
}

/**
 * \brief Initializes programmable clock generators
 */
static void _pmc_init_program_clock(void)
{
    _pmc_init_one_pck(0, VALUE_PMC_SCER & PMC_SCER_PCK0_Msk, VALUE_PMC_PCK0);
    _pmc_init_one_pck(1, VALUE_PMC_SCER & PMC_SCER_PCK1_Msk, VALUE_PMC_PCK1);
    _pmc_init_one_pck(2, VALUE_PMC_SCER & PMC_SCER_PCK2_Msk, VALUE_PMC_PCK2);
    _pmc_init_one_pck(3, VALUE_PMC_SCER & PMC_SCER_PCK3_Msk, VALUE_PMC_PCK3);
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
    uint32_t data;

    // Keep the default device state after reset
    SystemCoreClock = __SYSTEM_CLOCK;

    // If MCK is still running from PLLA (e.g. after a soft reset), move it to
    // MAINCK first so that PLLA can be reprogrammed safely.
    if (PMC_MCKR_CSS_PLLA_CLK == (PMC_REGS->PMC_MCKR & PMC_MCKR_CSS_Msk)) {
        data = PMC_REGS->PMC_MCKR & ~PMC_MCKR_CSS_Msk;
        PMC_REGS->PMC_MCKR = data | PMC_MCKR_CSS_MAIN_CLK;
        _pmc_wait_mckrdy();
    }

    _supc_init_slow_clock();
    _pmc_init_main_clock();
    _pmc_init_plla();
    _pmc_init_master_clock();
    _pmc_init_program_clock();

    // The configured clock is now active.
    SystemCoreClockUpdate();

    // Disable the Watchdog Timers (WDT is enabled at reset). WDT_MR is write-once.
    WDT_REGS->WDT_MR = WDT_MR_WDDIS_Msk;
    #ifdef WDT1_REGS
    WDT1_REGS->WDT_MR = WDT_MR_WDDIS_Msk;
    #endif
    #ifdef RSWDT_REGS
    RSWDT_REGS->RSWDT_MR = RSWDT_MR_WDDIS_Msk;
    #endif

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
    /* FOSC_KHZ_VALUE is generated from the JSON top-level "clock" value. */
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
