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
 *
 * PIC32CX MT (MTC/MTG/MTSH) clock system (PMC):
 *  - TD_SLCK: embedded 32 kHz RC or 32.768 kHz crystal (SUPC_CR.TDXTALSEL), MD_SLCK: 32 kHz RC.
 *  - MAINCK: main RC 12 MHz or 12..48 MHz crystal (CKGR_MOR.MOSCSEL).
 *  - PLLA: TD_SLCK or MAINCK x (MUL + 1) = VCO (380..600 MHz),
 *          PLLACK0 = VCO / (DIVPMC0 + 1), PLLACK1 = VCO / (DIVPMC1 + 1).
 *  - PLLB: PLLACK0 or MAINCK x (MUL + 1) = VCO (300..600 MHz), PLLBCK = VCO / (DIVPMC0 + 1).
 *  - CPU_CLK0 = MCK0 = (MD_SLCK | MAINCK | PLLACK1 | PLLBCK) / PRES, at most 200 MHz.
 *  The three PLLs share PMC_PLL_CTRLx; PMC_PLL_UPDT.ID selects the PLL being accessed.
 *
 * Dual-core MTC/MTSH parts (NECTO dual-core projects, like the RA8 dual-core MCUs): one
 * definition holds the clock registers of both cores and the same file is built per core,
 * core 1 with CORE_CM4_1 (CORE_CM4_0 or nothing for core 0, MTG and single-core projects).
 *  - PLLC: PLLACK0 or MAINCK x (MUL + 1) = VCO (300..600 MHz), PLLCCK = VCO / (DIVPMC0 + 1).
 *  - CPU_CLK1 = MCK1 = (MD_SLCK | MAINCK | MCK0 | PLLACK1 | PLLBCK | PLLCCK) / (CPPRES + 1),
 *    MCK1DIV = MCK1 or MCK1 / 2 (RATIO_MCK1DIV).
 *  Core 0 configures every clock, core 1's included, then starts core 1: core 1 has no flash,
 *  its image is stored at the start of IFLASH1 (core_1_m4ef linker script, programmed with the
 *  project's merged hex), copied to SRAM1, and core 1 is clocked and released from reset.
 *  Core 1 only enables its FPU; its clock (SystemCoreClock, delays) comes from
 *  PIC32CX_MT_CORE1_KHZ (delay_parameters.h, derived from the definition registers).
 */

#include "core_header.h"
#include "mcu.h"

/** \cond 0 */
/* *INDENT-OFF* */
#ifdef __cplusplus
extern "C" {
#endif
/* *INDENT-ON* */
/** \endcond */

/**
 * Configured core clock frequency, generated from the definition "clock" value.
 */
#define __SYSTEM_CLOCK    (FOSC_KHZ_VALUE * 1000UL)

uint32_t SystemCoreClock = __SYSTEM_CLOCK;  /*!< System Clock Frequency (Core Clock)*/

void SystemCoreClockUpdate(void);

#if !defined(CORE_CM4_1) && defined(VALUE_PMC_PLLA_CTRL0)
/* PMC_PLL_UPDT.ID values. */
#define PLL_ID_PLLA             (0UL)
#define PLL_ID_PLLB             (1UL)
#define PLL_ID_PLLC             (2UL)

/* Recommended PMC_PLL_ACR values and start-up times (PMC_PLL_UPDT.STUPTIM). */
#define PLLA_RECOMMENDED_ACR    (0x0F020038UL)
#define PLLB_RECOMMENDED_ACR    (0x28020038UL)
#define PLLC_RECOMMENDED_ACR    (0x28020038UL)
#define PLLA_UPDT_STUPTIM_VAL   (0x02UL)
#define PLLB_UPDT_STUPTIM_VAL   (0x00UL)
#define PLLC_UPDT_STUPTIM_VAL   (0x00UL)

/**
 * \brief Select a PLL for the PMC_PLL_CTRLx/SSR/ACR registers (PMC_PLL_UPDT.ID).
 *
 * \param id PLL index (0 = PLLA, 1 = PLLB, 2 = PLLC).
 * \param update Non-zero to also apply the written PLL settings (PMC_PLL_UPDT.UPDATE).
 */
static void _pmc_pll_select(uint32_t id, uint32_t update)
{
    uint32_t data = PMC_REGS->PMC_PLL_UPDT & ~(PMC_PLL_UPDT_UPDATE_Msk | PMC_PLL_UPDT_ID_Msk);

    data |= PMC_PLL_UPDT_ID(id);
    if (update) {
        data |= PMC_PLL_UPDT_UPDATE_Msk;
    }
    PMC_REGS->PMC_PLL_UPDT = data;
}

/**
 * \brief Stop a PLL: disable its outputs first, then the PLL itself.
 *
 * \param id PLL index (0 = PLLA, 1 = PLLB, 2 = PLLC).
 */
static void _pmc_pll_disable(uint32_t id)
{
    _pmc_pll_select(id, 0);
    PMC_REGS->PMC_PLL_CTRL0 &= ~(PMC_PLL_CTRL0_ENPLLO0_Msk | PMC_PLL_CTRL0_ENPLLO1_Msk);
    _pmc_pll_select(id, 1);
    PMC_REGS->PMC_PLL_CTRL0 &= ~PMC_PLL_CTRL0_ENPLL_Msk;
    _pmc_pll_select(id, 1);
}

/**
 * \brief Program and start a PLL, then wait for its lock.
 *
 * \param id      PLL index (0 = PLLA, 1 = PLLB, 2 = PLLC).
 * \param ctrl0   PMC_PLL_CTRL0 value: reference (PLLMS), output dividers and output enables.
 * \param ctrl1   PMC_PLL_CTRL1 value: multiplier (MUL).
 * \param acr     Recommended PMC_PLL_ACR value of this PLL.
 * \param stuptim PMC_PLL_UPDT.STUPTIM value of this PLL.
 */
static void _pmc_pll_enable(uint32_t id, uint32_t ctrl0, uint32_t ctrl1, uint32_t acr, uint32_t stuptim)
{
    uint32_t data;

    // Select the PLL and its start-up time.
    data = PMC_REGS->PMC_PLL_UPDT & ~PMC_PLL_UPDT_Msk;
    PMC_REGS->PMC_PLL_UPDT = data | PMC_PLL_UPDT_ID(id) | PMC_PLL_UPDT_STUPTIM(stuptim);

    // Loop filter, integer multiplier, no fractional part and no spread spectrum.
    PMC_REGS->PMC_PLL_ACR = acr;
    PMC_REGS->PMC_PLL_SSR = 0;
    PMC_REGS->PMC_PLL_CTRL1 = ctrl1 & PMC_PLL_CTRL1_MUL_Msk;
    PMC_REGS->PMC_PLL_CTRL2 = 0;
    PMC_REGS->PMC_PLL_UPDT |= PMC_PLL_UPDT_UPDATE_Msk;

    // Enable the PLL, its lock detection, its outputs and dividers.
    data = PMC_REGS->PMC_PLL_CTRL0 & ~PMC_PLL_CTRL0_Msk;
    data |= PMC_PLL_CTRL0_ENLOCK_Msk | PMC_PLL_CTRL0_ENPLL_Msk | ctrl0;
    PMC_REGS->PMC_PLL_CTRL0 = data;
    PMC_REGS->PMC_PLL_UPDT |= PMC_PLL_UPDT_UPDATE_Msk;

    while (0 == (PMC_REGS->PMC_PLL_ISR0 & (PMC_PLL_ISR0_LOCK0_Msk << id))) {
        /* Wait until the PLL is locked */
    }
}
#endif /* !CORE_CM4_1 && VALUE_PMC_PLLA_CTRL0 */

#if !defined(CORE_CM4_1) && defined(VALUE_PMC_PLLA_CTRL0)
/* Core 0: the clock system is configured here. */

/*
 * Flash wait states used while the clocks are being switched. The flash access time is 32 ns,
 * so 7 wait states (Harmony convention FWS >= f x 32 ns) cover every clock up to 218 MHz,
 * above the 200 MHz CPU_CLK0 maximum.
 */
#define FLASH_TRANSITION_FWS    (7UL)

/**
 * \brief Wait until the master clock MCK0 is ready.
 */
static void _pmc_wait_mck0_ready(void)
{
    while (PMC_SR_MCKRDY_Msk != (PMC_REGS->PMC_SR & PMC_SR_MCKRDY_Msk)) {
        /* Wait until master clock is ready */
    }
}

/**
 * \brief Disable the dual watchdog timer (both watchdogs are enabled after reset).
 */
static void _dwdt_disable(void)
{
    DWDT_REGS->DWDT_WDT0_MR |= DWDT_WDT0_MR_WDDIS_Msk;
    DWDT_REGS->DWDT_WDT1_MR |= DWDT_WDT1_MR_WDDIS_Msk;
}

/**
 * \brief Set the flash wait states of both flash controllers (SEFC0 and SEFC1).
 *
 * \param fws Absolute SEFC_EEFC_FMR.FWS field value.
 */
static void _sefc_set_flash_wait_states(uint32_t fws)
{
    uint32_t data;

    data = SEFC0_REGS->SEFC_EEFC_FMR & ~(SEFC_EEFC_FMR_FWS_Msk | SEFC_EEFC_FMR_CLOE_Msk);
    data |= SEFC_EEFC_FMR_ALWAYS1_Msk | (VALUE_SEFC_EEFC_FMR & SEFC_EEFC_FMR_CLOE_Msk) | (fws & SEFC_EEFC_FMR_FWS_Msk);
    SEFC0_REGS->SEFC_EEFC_FMR = data;

    data = SEFC1_REGS->SEFC_EEFC_FMR & ~(SEFC_EEFC_FMR_FWS_Msk | SEFC_EEFC_FMR_CLOE_Msk);
    data |= SEFC_EEFC_FMR_ALWAYS1_Msk | (VALUE_SEFC_EEFC_FMR & SEFC_EEFC_FMR_CLOE_Msk) | (fws & SEFC_EEFC_FMR_FWS_Msk);
    SEFC1_REGS->SEFC_EEFC_FMR = data;
}

/**
 * \brief Enable or bypass the flash high-speed patch (enabled for CPU clocks of 160 MHz and above).
 *
 * The SFR write protection state is restored afterwards.
 */
static void _sfr_set_flash_patch(void)
{
    uint32_t wpen = SFR_REGS->SFR_WPMR & SFR_WPMR_WPEN_Msk;

    SFR_REGS->SFR_WPMR = SFR_WPMR_WPKEY_PASSWD;
    SFR_REGS->SFR_FLASH = VALUE_SFR_FLASH & SFR_FLASH_PATCH_BYPASS_Msk;
    SFR_REGS->SFR_WPMR = SFR_WPMR_WPKEY_PASSWD | wpen;
}

/**
 * \brief Run the processor clock from MAINCK before the clock sources are reprogrammed.
 *
 * After a cold reset the core already runs from the 12 MHz main RC oscillator; after a warm
 * reset it may still run from a PLL, which must not be reprogrammed while in use.
 */
static void _pmc_switch_to_mainck(void)
{
    if (CKGR_MOR_MOSCRCEN_Msk != (PMC_REGS->CKGR_MOR & CKGR_MOR_MOSCRCEN_Msk)) {
        PMC_REGS->CKGR_MOR = (PMC_REGS->CKGR_MOR & ~CKGR_MOR_KEY_Msk) | CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCRCEN_Msk;
    }
    while (PMC_SR_MOSCRCS_Msk != (PMC_REGS->PMC_SR & PMC_SR_MOSCRCS_Msk)) {
        /* Wait until the main RC oscillator is stabilized */
    }

    if (PMC_CPU_CKR_CSS_MAINCK != (PMC_REGS->PMC_CPU_CKR & PMC_CPU_CKR_CSS_Msk)) {
        PMC_REGS->PMC_CPU_CKR = (PMC_REGS->PMC_CPU_CKR & ~PMC_CPU_CKR_CSS_Msk) | PMC_CPU_CKR_CSS_MAINCK;
        _pmc_wait_mck0_ready();
    }
}

/**
 * \brief Initialize the timing domain slow clock (TD_SLCK).
 *
 * Once the 32.768 kHz crystal is selected, only a VDDBU power-on returns TD_SLCK to the RC.
 */
static void _supc_init_slow_clock(void)
{
    if (SUPC_CR_TDXTALSEL_XTAL == (VALUE_SUPC_CR & SUPC_CR_TDXTALSEL_Msk)) {
        if (SUPC_SR_TDOSCSEL_XTAL != (SUPC_REGS->SUPC_SR & SUPC_SR_TDOSCSEL_Msk)) {
            if (SUPC_MR_OSCBYPASS_BYPASS == (VALUE_SUPC_MR & SUPC_MR_OSCBYPASS_Msk)) {
                // External 32.768 kHz clock on XIN32: must be set before selecting the crystal oscillator.
                SUPC_REGS->SUPC_MR = (SUPC_REGS->SUPC_MR & ~SUPC_MR_KEY_Msk) | SUPC_MR_KEY_PASSWD | SUPC_MR_OSCBYPASS_BYPASS;
            }
            SUPC_REGS->SUPC_CR = SUPC_CR_KEY_PASSWD | SUPC_CR_TDXTALSEL_XTAL;
            while (SUPC_SR_TDOSCSEL_XTAL != (SUPC_REGS->SUPC_SR & SUPC_SR_TDOSCSEL_Msk)) {
                /* Wait until TD_SLCK is switched to the crystal oscillator */
            }
        }
    }
}

/**
 * \brief Initialize the main clock (MAINCK): main RC oscillator and main crystal oscillator.
 *
 * The processor runs from MAINCK while this function executes.
 */
static void _pmc_init_main_clock(void)
{
    uint32_t data;

    // Run MAINCK from the main RC oscillator while the crystal oscillator is reconfigured.
    if (CKGR_MOR_MOSCSEL_Msk == (PMC_REGS->CKGR_MOR & CKGR_MOR_MOSCSEL_Msk)) {
        data = PMC_REGS->CKGR_MOR & ~(CKGR_MOR_KEY_Msk | CKGR_MOR_MOSCSEL_Msk);
        PMC_REGS->CKGR_MOR = data | CKGR_MOR_KEY_PASSWD;
        while (PMC_SR_MOSCSELS_Msk != (PMC_REGS->PMC_SR & PMC_SR_MOSCSELS_Msk)) {
            /* Wait until the oscillator selection is done */
        }
    }

    if (CKGR_MOR_MOSCXTBY_Msk == (VALUE_CKGR_MOR & CKGR_MOR_MOSCXTBY_Msk)) {
        // External clock on XIN: bypass the main crystal oscillator.
        data = PMC_REGS->CKGR_MOR & ~(CKGR_MOR_KEY_Msk | CKGR_MOR_MOSCXTEN_Msk);
        PMC_REGS->CKGR_MOR = data | CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCXTBY_Msk;
    } else if (CKGR_MOR_MOSCXTEN_Msk == (VALUE_CKGR_MOR & CKGR_MOR_MOSCXTEN_Msk)) {
        // Main crystal oscillator with the configured start-up time.
        data = PMC_REGS->CKGR_MOR & ~(CKGR_MOR_KEY_Msk | CKGR_MOR_MOSCXTBY_Msk | CKGR_MOR_MOSCXTST_Msk);
        data |= CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCXTEN_Msk | (VALUE_CKGR_MOR & CKGR_MOR_MOSCXTST_Msk);
        PMC_REGS->CKGR_MOR = data;
        while (PMC_SR_MOSCXTS_Msk != (PMC_REGS->PMC_SR & PMC_SR_MOSCXTS_Msk)) {
            /* Wait until the main crystal oscillator is stabilized */
        }
    } else {
        // The main crystal oscillator is not used: disable it and its bypass.
        data = PMC_REGS->CKGR_MOR & ~(CKGR_MOR_KEY_Msk | CKGR_MOR_MOSCXTEN_Msk | CKGR_MOR_MOSCXTBY_Msk);
        PMC_REGS->CKGR_MOR = data | CKGR_MOR_KEY_PASSWD;
    }

    if ((CKGR_MOR_MOSCSEL_Msk == (VALUE_CKGR_MOR & CKGR_MOR_MOSCSEL_Msk)) &&
        (0 != (VALUE_CKGR_MOR & (CKGR_MOR_MOSCXTEN_Msk | CKGR_MOR_MOSCXTBY_Msk)))) {
        // Switch MAINCK to the main crystal oscillator.
        data = PMC_REGS->CKGR_MOR & ~CKGR_MOR_KEY_Msk;
        PMC_REGS->CKGR_MOR = data | CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCSEL_Msk;
        while (PMC_SR_MOSCSELS_Msk != (PMC_REGS->PMC_SR & PMC_SR_MOSCSELS_Msk)) {
            /* Wait until the oscillator selection is done */
        }
        // The main RC oscillator is no longer needed unless the configuration keeps it.
        if (CKGR_MOR_MOSCRCEN_Msk != (VALUE_CKGR_MOR & CKGR_MOR_MOSCRCEN_Msk)) {
            data = PMC_REGS->CKGR_MOR & ~(CKGR_MOR_KEY_Msk | CKGR_MOR_MOSCRCEN_Msk);
            PMC_REGS->CKGR_MOR = data | CKGR_MOR_KEY_PASSWD;
        }
    }

    // Clock failure detector.
    data = PMC_REGS->CKGR_MOR & ~(CKGR_MOR_KEY_Msk | CKGR_MOR_CFDEN_Msk);
    PMC_REGS->CKGR_MOR = data | CKGR_MOR_KEY_PASSWD | (VALUE_CKGR_MOR & CKGR_MOR_CFDEN_Msk);
}

/**
 * \brief Initialize PLLA and PLLB. PLLs the configuration does not enable are stopped.
 *
 * The processor runs from MAINCK while this function executes. PLLC is left untouched.
 */
static void _pmc_init_plls(void)
{
    // PLLB may run from PLLACK0: stop it before PLLA.
    _pmc_pll_disable(PLL_ID_PLLB);
    _pmc_pll_disable(PLL_ID_PLLA);

    if (PMC_PLL_CTRL0_ENPLL_Msk == (VALUE_PMC_PLLA_CTRL0 & PMC_PLL_CTRL0_ENPLL_Msk)) {
        _pmc_pll_enable(PLL_ID_PLLA,
                        VALUE_PMC_PLLA_CTRL0 & (PMC_PLL_CTRL0_DIVPMC0_Msk | PMC_PLL_CTRL0_DIVPMC1_Msk |
                                                PMC_PLL_CTRL0_PLLMS_Msk | PMC_PLL_CTRL0_ENPLLO0_Msk |
                                                PMC_PLL_CTRL0_ENPLLO1_Msk),
                        VALUE_PMC_PLLA_CTRL1, PLLA_RECOMMENDED_ACR, PLLA_UPDT_STUPTIM_VAL);
    }

    if (PMC_PLL_CTRL0_ENPLL_Msk == (VALUE_PMC_PLLB_CTRL0 & PMC_PLL_CTRL0_ENPLL_Msk)) {
        _pmc_pll_enable(PLL_ID_PLLB,
                        VALUE_PMC_PLLB_CTRL0 & (PMC_PLL_CTRL0_DIVPMC0_Msk | PMC_PLL_CTRL0_PLLMS_Msk |
                                                PMC_PLL_CTRL0_ENPLLO0_Msk),
                        VALUE_PMC_PLLB_CTRL1, PLLB_RECOMMENDED_ACR, PLLB_UPDT_STUPTIM_VAL);
    }
}

/**
 * \brief Initialize the core 0 processor clock (CPU_CLK0) and master clock (MCK0).
 *
 * The core 1 fields of PMC_CPU_CKR (CPCSS, CPPRES, RATIO_MCK1DIV) are kept.
 */
static void _pmc_init_cpu_clock(void)
{
    const uint32_t ratios = PMC_CPU_CKR_RATIO_MCK0DIV_Msk | PMC_CPU_CKR_RATIO_MCK0DIV2_Msk;
    uint32_t data;

    if (PMC_CPU_CKR_CSS_PLLACK1 <= (VALUE_PMC_CPU_CKR & PMC_CPU_CKR_CSS_Msk)) {
        // PLL source: program the prescaler first, then the source and the MCK0 dividers.
        data = PMC_REGS->PMC_CPU_CKR & ~PMC_CPU_CKR_PRES_Msk;
        PMC_REGS->PMC_CPU_CKR = data | (VALUE_PMC_CPU_CKR & PMC_CPU_CKR_PRES_Msk);
        _pmc_wait_mck0_ready();

        data = PMC_REGS->PMC_CPU_CKR & ~(PMC_CPU_CKR_CSS_Msk | ratios);
        PMC_REGS->PMC_CPU_CKR = data | (VALUE_PMC_CPU_CKR & (PMC_CPU_CKR_CSS_Msk | ratios));
        _pmc_wait_mck0_ready();
    } else {
        // Slow clock or MAINCK: program the source first, then the prescaler and the MCK0 dividers.
        data = PMC_REGS->PMC_CPU_CKR & ~PMC_CPU_CKR_CSS_Msk;
        PMC_REGS->PMC_CPU_CKR = data | (VALUE_PMC_CPU_CKR & PMC_CPU_CKR_CSS_Msk);
        _pmc_wait_mck0_ready();

        data = PMC_REGS->PMC_CPU_CKR & ~(PMC_CPU_CKR_PRES_Msk | ratios);
        PMC_REGS->PMC_CPU_CKR = data | (VALUE_PMC_CPU_CKR & (PMC_CPU_CKR_PRES_Msk | ratios));
        _pmc_wait_mck0_ready();
    }
}
#endif /* !CORE_CM4_1 && VALUE_PMC_PLLA_CTRL0 */

#if !defined(CORE_CM4_1) && defined(VALUE_PMC_PLLC_CTRL0)
/* Dual-core parts, core 0: PLLC, the core 1 clock and the core 1 start-up. */

#define CORE1_CKR_MSK           (PMC_CPU_CKR_CPCSS_Msk | PMC_CPU_CKR_CPPRES_Msk | PMC_CPU_CKR_RATIO_MCK1DIV_Msk)

/**
 * \brief Wait until the core 1 master clock MCK1 is ready.
 */
static void _pmc_wait_mck1_ready(void)
{
    while (PMC_SR_CPMCKRDY_Msk != (PMC_REGS->PMC_SR & PMC_SR_CPMCKRDY_Msk)) {
        /* Wait until the coprocessor master clock is ready */
    }
}

/**
 * \brief Run core 1 from MAINCK while the PLLs are reprogrammed (after a warm reset it may run from one).
 */
static void _pmc_core1_switch_to_mainck(void)
{
    uint32_t data;

    if (PMC_CPU_CKR_CPCSS_MAINCK != (PMC_REGS->PMC_CPU_CKR & PMC_CPU_CKR_CPCSS_Msk)) {
        data = PMC_REGS->PMC_CPU_CKR & ~PMC_CPU_CKR_CPCSS_Msk;
        PMC_REGS->PMC_CPU_CKR = data | PMC_CPU_CKR_CPCSS_MAINCK;
        _pmc_wait_mck1_ready();
    }
}

/**
 * \brief Initialize PLLC: stopped, then started when the configuration enables it.
 */
static void _pmc_init_pllc(void)
{
    _pmc_pll_disable(PLL_ID_PLLC);

    if (PMC_PLL_CTRL0_ENPLL_Msk == (VALUE_PMC_PLLC_CTRL0 & PMC_PLL_CTRL0_ENPLL_Msk)) {
        _pmc_pll_enable(PLL_ID_PLLC,
                        VALUE_PMC_PLLC_CTRL0 & (PMC_PLL_CTRL0_DIVPMC0_Msk | PMC_PLL_CTRL0_PLLMS_Msk |
                                                PMC_PLL_CTRL0_ENPLLO0_Msk),
                        VALUE_PMC_PLLC_CTRL1, PLLC_RECOMMENDED_ACR, PLLC_UPDT_STUPTIM_VAL);
    }
}

/**
 * \brief Initialize the core 1 processor clock (CPU_CLK1) and master clock (MCK1).
 *
 * Same sequence as the MPLAB Harmony clock plib: a temporary prescaler (different from the
 * target one) with MCK1DIV = MCK1 / 2, then the source, then the prescaler and MCK1DIV ratio.
 * The core 0 fields of PMC_CPU_CKR (CSS, PRES, RATIO_MCK0DIV, RATIO_MCK0DIV2) are kept.
 */
static void _pmc_init_cpu1_clock(void)
{
    const uint32_t target = VALUE_PMC_CPU_CKR & CORE1_CKR_MSK;
    const uint32_t ratio = PMC_CPU_CKR_CPPRES_Msk | PMC_CPU_CKR_RATIO_MCK1DIV_Msk;
    uint32_t dummy;
    uint32_t data;

    if (PMC_CPU_CKR_CPPRES_CLK_2 == (target & PMC_CPU_CKR_CPPRES_Msk)) {
        dummy = PMC_CPU_CKR_CPPRES_CLK_3;
    } else {
        dummy = PMC_CPU_CKR_CPPRES_CLK_2;
    }
    data = PMC_REGS->PMC_CPU_CKR & ~ratio;
    PMC_REGS->PMC_CPU_CKR = data | dummy | PMC_CPU_CKR_RATIO_MCK1DIV_Msk;
    _pmc_wait_mck1_ready();

    data = PMC_REGS->PMC_CPU_CKR & ~PMC_CPU_CKR_CPCSS_Msk;
    PMC_REGS->PMC_CPU_CKR = data | (target & PMC_CPU_CKR_CPCSS_Msk);
    _pmc_wait_mck1_ready();

    data = PMC_REGS->PMC_CPU_CKR & ~ratio;
    PMC_REGS->PMC_CPU_CKR = data | (target & ratio);
    _pmc_wait_mck1_ready();
}

/**
 * \brief Hold core 1 in reset with its processor clock stopped (it may run after a warm reset).
 */
static void _core1_hold(void)
{
    RSTC_REGS->RSTC_MR = RSTC_MR_KEY_PASSWD | (RSTC_REGS->RSTC_MR & ~(RSTC_MR_KEY_Msk | RSTC_MR_CPROCEN_Msk));
    PMC_REGS->PMC_SCDR = PMC_SCDR_CPKEY_PASSWD | PMC_SCDR_CPCK_Msk;
}

/* Core 1 image: stored at the start of IFLASH1, run from SRAM1 (address 0 for core 1). */
#define CORE1_IMAGE_ADDR        (IFLASH1_ADDR)

/**
 * \brief Check that IFLASH1 holds a core 1 image: its initial stack pointer must lie in core 1's
 * SRAM1 (0 .. IRAM1_SIZE in its own view) or SRAM2, and its reset handler in SRAM1 (Thumb).
 * Erased flash (no core 1 project programmed) fails, so core 1 is then left in reset.
 */
static uint32_t _core1_image_present(void)
{
    const volatile uint32_t *image = (const volatile uint32_t *)CORE1_IMAGE_ADDR;
    const uint32_t stack = image[0];
    const uint32_t reset = image[1];
    const uint32_t stack_ok = ((0U != stack) && (stack <= IRAM1_SIZE)) ||
                              ((stack > IRAM2_ADDR) && (stack <= (IRAM2_ADDR + IRAM2_SIZE)));
    const uint32_t reset_ok = (1U == (reset & 1U)) && ((reset & ~1UL) < IRAM1_SIZE);

    return (stack_ok && reset_ok) ? 1U : 0U;
}

/**
 * \brief Load the core 1 image into SRAM1 and release core 1.
 *
 * The core 1 bus master clock (CPBMCK) and peripherals (CPEREN) are enabled first so that
 * core 0 can write SRAM1, then core 1 gets its processor clock (CPCK) and leaves reset (CPROCEN).
 */
static void _core1_start(void)
{
    const volatile uint32_t *source = (const volatile uint32_t *)CORE1_IMAGE_ADDR;
    volatile uint32_t *destination = (volatile uint32_t *)IRAM1_ADDR;
    uint32_t index;

    if (0U == _core1_image_present()) {
        return;
    }

    PMC_REGS->PMC_SCER = PMC_SCER_CPKEY_PASSWD | PMC_SCER_CPBMCK_Msk;
    RSTC_REGS->RSTC_MR = RSTC_MR_KEY_PASSWD | (RSTC_REGS->RSTC_MR & ~RSTC_MR_KEY_Msk) | RSTC_MR_CPEREN_Msk;

    for (index = 0U; index < (IRAM1_SIZE / sizeof(uint32_t)); index++) {
        destination[index] = source[index];
    }
    __DSB();

    PMC_REGS->PMC_SCER = PMC_SCER_CPKEY_PASSWD | PMC_SCER_CPCK_Msk;
    RSTC_REGS->RSTC_MR = RSTC_MR_KEY_PASSWD | (RSTC_REGS->RSTC_MR & ~RSTC_MR_KEY_Msk) | RSTC_MR_CPROCEN_Msk;
}
#endif /* !CORE_CM4_1 && VALUE_PMC_PLLC_CTRL0 */

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

#if !defined(CORE_CM4_1) && defined(VALUE_PMC_PLLA_CTRL0)
    // Disable the watchdogs before the (possibly long) oscillator start-ups.
    _dwdt_disable();

#ifdef VALUE_PMC_PLLC_CTRL0
    // Dual-core parts: stop core 1 and run it from MAINCK while the PLLs change.
    _core1_hold();
    _pmc_core1_switch_to_mainck();
#endif

    // Raise the flash wait states, then run the core from MAINCK while the sources change.
    _sefc_set_flash_wait_states(SEFC_EEFC_FMR_FWS(FLASH_TRANSITION_FWS));
    _pmc_switch_to_mainck();

    _supc_init_slow_clock();
    _pmc_init_main_clock();
    _pmc_init_plls();

    // Flash patch for the target frequency, switch the core clock, then settle the wait states.
    _sfr_set_flash_patch();
    _pmc_init_cpu_clock();
    _sefc_set_flash_wait_states(VALUE_SEFC_EEFC_FMR & SEFC_EEFC_FMR_FWS_Msk);

    // The configured clock is now active.
    SystemCoreClockUpdate();

#ifdef VALUE_PMC_PLLC_CTRL0
    // Dual-core parts: PLLC and the core 1 clock, then load and start core 1.
    _pmc_init_pllc();
    _pmc_init_cpu1_clock();
    _core1_start();
#endif
#else
    // Core 1 (or a part without clock registers): the clocks belong to core 0.
    SystemCoreClockUpdate();
#endif

    // Enable Floating Point Unit and synchronize the pipeline.
    SCB->CPACR |= ((3UL << 20) | (3UL << 22));
    __DSB();
    __ISB();

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
     * Default core 0 configuration (internal oscillators only):
     * main RC 12 MHz -> PLLB x33 = 396 MHz -> DIVPMC0 /2 = 198 MHz (PLLBCK)
     * -> CPU_CLK0 = MCK0 (PRES /1) = 198000 kHz, MCK0DIV = 99 MHz, 7 flash wait states.
     * Core 1 of the dual-core parts (CORE_CM4_1), default configuration set by core 0:
     * MAINCK 12 MHz (main RC) -> PLLC x40 = 480 MHz -> DIVPMC0 /2 = 240 MHz (PLLCCK)
     * -> CPU_CLK1 = MCK1 (CPPRES /1) = 240000 kHz (PIC32CX_MT_CORE1_KHZ), MCK1DIV = 120 MHz.
     */
#if defined(CORE_CM4_1) && defined(PIC32CX_MT_CORE1_KHZ)
    SystemCoreClock = PIC32CX_MT_CORE1_KHZ * 1000UL;
#else
    SystemCoreClock = __SYSTEM_CLOCK;
#endif
    return;
}

/** \cond 0 */
/* *INDENT-OFF* */
#ifdef __cplusplus
}
#endif
/* *INDENT-ON* */
/** \endcond */
