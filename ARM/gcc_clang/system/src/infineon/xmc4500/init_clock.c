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

#include "core_header.h"
#include "mcu.h"

/** \cond 0 */
/* *INDENT-OFF* */
#ifdef __cplusplus
extern "C" {
#endif
/* *INDENT-ON* */
/** \endcond */

/*
 * XMC45xx clock system (Reference Manual, SCU "Clock Generation Unit"):
 *
 *   fOFI   24 MHz internal backup clock (calibrated: PLLCON0.AOTREN / FOTR)
 *   fOSC   OSC_HP, external crystal or clock (SCU_OSCHPCTRL)
 *   fPLL   = fIN / P * N / K2   (fIN = fOSC or fOFI, PLLCON2.PINSEL;
 *            VCO input 4..16 MHz, fVCO 260..520 MHz)
 *   fSYS   = fOFI or fPLL (SYSCLKCR.SYSSEL) / (SYSDIV + 1)   (max 120 MHz)
 *   fCPU   = fSYS / (CPUDIV + 1), fPERIPH = fCPU / (PBDIV + 1), fCCU = fSYS / (CCUDIV + 1)
 *
 * Default configuration (def file): fOFI (automatic calibration) / 2 x 40 = 480 MHz VCO,
 *   / 4 = 120 MHz fPLL, fSYS = fPLL / 1 = fCPU = 120 MHz, 3 flash wait states.
 *
 * Sequence (vendor system_XMC4500.c / RM "Main PLL"): flash wait states are raised
 * first, fOFI calibration, PLL configured in prescaler (bypass) mode and locked
 * with K2 giving fPLL ~ 24 MHz, normal mode, fSYS switched to the PLL, then fPLL
 * is ramped up by K2 steps (at most 2x per step, >= 50 us between steps: data
 * sheet "Positive Load Step Settling Time" tPLSS), final flash wait states.
 * The WDT is disabled after reset and is not touched.
 */

/** System clock frequency, generated from the top-level "clock" value (MHz). */
#define __SYSTEM_CLOCK    ((uint32_t)(FOSC_KHZ_VALUE * 1000UL))

#define OFI_FREQUENCY     (24000000UL)

/* Busy loop counts (>= 1 CPU cycle per loop) at up to 50 MHz, as the vendor code. */
#define DELAY_LOOPS_50US_50MHZ     (2500UL)
#define DELAY_LOOPS_150US_50MHZ    (7500UL)

#define CFG_SYSSEL_PLL    (0UL != (VALUE_SCU_SYSCLKCR & SCU_CLK_SYSCLKCR_SYSSEL_Msk))
#define CFG_SYSDIV        ((VALUE_SCU_SYSCLKCR & SCU_CLK_SYSCLKCR_SYSDIV_Msk) >> SCU_CLK_SYSCLKCR_SYSDIV_Pos)
#define CFG_CPUDIV        ((VALUE_SCU_CPUCLKCR & SCU_CLK_CPUCLKCR_CPUDIV_Msk) >> SCU_CLK_CPUCLKCR_CPUDIV_Pos)
#define CFG_K2DIV         ((VALUE_SCU_PLLCON1 & SCU_PLL_PLLCON1_K2DIV_Msk) >> SCU_PLL_PLLCON1_K2DIV_Pos)
#define CFG_PLL_FROM_OFI  (0UL != (VALUE_SCU_PLLCON2 & SCU_PLL_PLLCON2_PINSEL_Msk))
#define CFG_OSCHP_ON      (0UL == (VALUE_SCU_OSCHPCTRL & (1UL << SCU_OSC_OSCHPCTRL_MODE_Pos)))
#define CFG_WSPFLASH      ((VALUE_FLASH0_FCON & FLASH_FCON_WSPFLASH_Msk) >> FLASH_FCON_WSPFLASH_Pos)

/* fVCO of the configuration, derived from the CPU clock ("clock" of the def
   file) and the dividers: fCPU x CPUDIV x SYSDIV x K2. This also covers the
   crystal frequency, which is not part of the register configuration. */
#define CFG_FVCO          (__SYSTEM_CLOCK * (CFG_CPUDIV + 1UL) * (CFG_SYSDIV + 1UL) * (CFG_K2DIV + 1UL))

#define OSCHP_CFG_Msk     (SCU_OSC_OSCHPCTRL_MODE_Msk | SCU_OSC_OSCHPCTRL_OSCVAL_Msk)

#define PLLSTAT_OSC_USABLE (SCU_PLL_PLLSTAT_PLLHV_Msk | SCU_PLL_PLLSTAT_PLLLV_Msk | SCU_PLL_PLLSTAT_PLLSP_Msk)

extern uint32_t __Vectors[];

uint32_t SystemCoreClock = __SYSTEM_CLOCK;  /*!< System Clock Frequency (Core Clock) */

void SystemCoreClockUpdate(void);

static void _delay_loops(uint32_t loops)
{
    volatile uint32_t i;

    for (i = 0; i < loops; i++) {
        __NOP();
    }
}

static void _flash_set_wait_states(uint32_t ws)
{
    FLASH0->FCON = (FLASH0->FCON & ~FLASH_FCON_WSPFLASH_Msk) |
                   ((ws << FLASH_FCON_WSPFLASH_Pos) & FLASH_FCON_WSPFLASH_Msk);
}

/**
 * \brief Calibration of the internal backup clock fOFI.
 *
 * Automatic calibration uses the standby clock of the hibernate domain as
 * reference: the domain is powered and released from reset first.
 */
static void _ofi_calibration(void)
{
    if (0UL != (VALUE_SCU_PLLCON0 & SCU_PLL_PLLCON0_AOTREN_Msk)) {
        if (0UL == (SCU_POWER->PWRSTAT & SCU_POWER_PWRSTAT_HIBEN_Msk)) {
            SCU_POWER->PWRSET = SCU_POWER_PWRSET_HIB_Msk;
            while (0UL == (SCU_POWER->PWRSTAT & SCU_POWER_PWRSTAT_HIBEN_Msk)) {
                /* Wait until the hibernate domain is enabled */
            }
        }
        if (SCU_RESET->RSTSTAT & SCU_RESET_RSTSTAT_HIBRS_Msk) {
            SCU_RESET->RSTCLR = SCU_RESET_RSTCLR_HIBRS_Msk;
            _delay_loops(DELAY_LOOPS_150US_50MHZ);
        }
        SCU_PLL->PLLCON0 |= SCU_PLL_PLLCON0_AOTREN_Msk;
    } else {
        SCU_PLL->PLLCON0 |= SCU_PLL_PLLCON0_FOTR_Msk;
    }
    _delay_loops(DELAY_LOOPS_50US_50MHZ);
}

/**
 * \brief OSC_HP configuration. The oscillator watchdog of the PLL checks
 *        the frequency (fOSC / (OSCVAL + 1) ~ 2.5 MHz), so the PLL is powered.
 */
static void _oschp_init(void)
{
    SCU_OSC->OSCHPCTRL = (SCU_OSC->OSCHPCTRL & ~OSCHP_CFG_Msk) | (VALUE_SCU_OSCHPCTRL & OSCHP_CFG_Msk);
    if (CFG_OSCHP_ON) {
        SCU_PLL->PLLCON0 &= ~(SCU_PLL_PLLCON0_VCOPWD_Msk | SCU_PLL_PLLCON0_PLLPWD_Msk);
        // Select OSC_HP as PLL input and restart the oscillator watchdog.
        SCU_PLL->PLLCON2 = 0UL;
        SCU_PLL->PLLCON0 &= ~SCU_PLL_PLLCON0_OSCRES_Msk;
        while ((SCU_PLL->PLLSTAT & PLLSTAT_OSC_USABLE) != PLLSTAT_OSC_USABLE) {
            /* Wait until the OSC_HP frequency is usable */
        }
    }
}

/**
 * \brief Lock the main PLL with the configured P and N, fPLL ~ fOFI (24 MHz).
 */
static uint32_t _pll_lock(void)
{
    uint32_t k2_cfg = CFG_K2DIV;
    uint32_t k2 = CFG_FVCO / OFI_FREQUENCY;

    // K2 start value: fPLL close to the 24 MHz the system runs at now.
    k2 = (k2 > 0UL) ? (k2 - 1UL) : 0UL;
    if (k2 < k2_cfg) {
        k2 = k2_cfg;
    }
    if (k2 > (SCU_PLL_PLLCON1_K2DIV_Msk >> SCU_PLL_PLLCON1_K2DIV_Pos)) {
        k2 = SCU_PLL_PLLCON1_K2DIV_Msk >> SCU_PLL_PLLCON1_K2DIV_Pos;
    }

    // Power up the PLL.
    SCU_PLL->PLLCON0 &= ~(SCU_PLL_PLLCON0_VCOPWD_Msk | SCU_PLL_PLLCON0_PLLPWD_Msk);
    if (CFG_PLL_FROM_OFI) {
        // P divider and K1 divider fed by the backup clock fOFI.
        SCU_PLL->PLLCON2 = SCU_PLL_PLLCON2_PINSEL_Msk | SCU_PLL_PLLCON2_K1INSEL_Msk;
    } else {
        // OSC_HP was started by _oschp_init(), PLLCON2 selects it.
        SCU_PLL->PLLCON2 = 0UL;
    }

    // Prescaler (bypass) mode while the dividers are changed.
    SCU_PLL->PLLCON0 |= SCU_PLL_PLLCON0_VCOBYP_Msk;
    while (0UL == (SCU_PLL->PLLSTAT & SCU_PLL_PLLSTAT_VCOBYST_Msk)) {
        /* Wait for prescaler mode */
    }
    // Disconnect the input clock, program the dividers, reconnect.
    SCU_PLL->PLLCON0 |= SCU_PLL_PLLCON0_FINDIS_Msk;
    SCU_PLL->PLLCON1 = (VALUE_SCU_PLLCON1 & (SCU_PLL_PLLCON1_PDIV_Msk | SCU_PLL_PLLCON1_NDIV_Msk)) |
                       ((k2 << SCU_PLL_PLLCON1_K2DIV_Pos) & SCU_PLL_PLLCON1_K2DIV_Msk);
    SCU_PLL->PLLCON0 |= SCU_PLL_PLLCON0_OSCDISCDIS_Msk;
    SCU_PLL->PLLCON0 &= ~SCU_PLL_PLLCON0_FINDIS_Msk;

    // Restart the lock detection and wait for the VCO lock.
    SCU_PLL->PLLCON0 |= SCU_PLL_PLLCON0_RESLD_Msk;
    while (0UL == (SCU_PLL->PLLSTAT & SCU_PLL_PLLSTAT_VCOLOCK_Msk)) {
        /* Wait for PLL lock */
    }

    // Normal mode.
    SCU_PLL->PLLCON0 &= ~SCU_PLL_PLLCON0_VCOBYP_Msk;
    while (SCU_PLL->PLLSTAT & SCU_PLL_PLLSTAT_VCOBYST_Msk) {
        /* Wait for normal mode */
    }
    return k2;
}

/**
 * \brief Ramp fPLL up to the configured K2 divider, at most doubling the
 *        frequency per step, >= 50 us between steps.
 */
static void _pll_ramp(uint32_t k2)
{
    uint32_t k2_cfg = CFG_K2DIV;

    SCU_PLL->PLLCON0 &= ~SCU_PLL_PLLCON0_OSCDISCDIS_Msk;
    while (k2 > k2_cfg) {
        k2 >>= 1;
        if (k2 < k2_cfg) {
            k2 = k2_cfg;
        }
        SCU_PLL->PLLCON1 = (SCU_PLL->PLLCON1 & ~SCU_PLL_PLLCON1_K2DIV_Msk) |
                           ((k2 << SCU_PLL_PLLCON1_K2DIV_Pos) & SCU_PLL_PLLCON1_K2DIV_Msk);
        while (0UL == (SCU_PLL->PLLSTAT & SCU_PLL_PLLSTAT_K2RDY_Msk)) {
            /* Wait until the K2 divider operates on the new value */
        }
        // 50 us at the new fCPU (>= 1 cycle per loop).
        _delay_loops((CFG_FVCO / (k2 + 1UL) / (CFG_SYSDIV + 1UL) / (CFG_CPUDIV + 1UL)) / 20000UL);
    }
    // Clear the oscillator watchdog / VCO lock traps raised while locking.
    SCU_TRAP->TRAPCLR = SCU_TRAP_TRAPCLR_SOSCWDGT_Msk | SCU_TRAP_TRAPCLR_SVCOLCKT_Msk;
}

/**
 * Initialize the system
 *
 * \brief  Setup the microcontroller system.
 *         Initialize the System and update the SystemCoreClock variable.
 */
void SystemInit(void)
{
    uint32_t k2 = 0UL;

    // FPU (also done in Reset_Handler): CP10/CP11 full access.
    SCB->CPACR |= ((3UL << 10 * 2) | (3UL << 11 * 2));
    __DSB();
    __ISB();

    // Vector table in the cached flash alias (also done in Reset_Handler).
    SCB->VTOR = (uint32_t)__Vectors;

    // Unaligned accesses allowed (vendor SystemInit).
    SCB->CCR &= ~SCB_CCR_UNALIGN_TRP_Msk;

    // Flash wait states safe for every intermediate clock (reset value is 6).
    if (((FLASH0->FCON & FLASH_FCON_WSPFLASH_Msk) >> FLASH_FCON_WSPFLASH_Pos) < CFG_WSPFLASH) {
        _flash_set_wait_states(CFG_WSPFLASH);
    }

    // A warm start may still run from the PLL: back to fOFI before reprogramming it.
    if (SCU_CLK->SYSCLKCR & SCU_CLK_SYSCLKCR_SYSSEL_Msk) {
        SCU_CLK->SYSCLKCR = 0UL;
    }

    _ofi_calibration();
    _oschp_init();

    if (CFG_SYSSEL_PLL) {
        k2 = _pll_lock();
    }

    // Clock dividers and fSYS source (fSYS ~ 24 MHz / SYSDIV at this point).
    SCU_CLK->CPUCLKCR = VALUE_SCU_CPUCLKCR & SCU_CLK_CPUCLKCR_CPUDIV_Msk;
    SCU_CLK->PBCLKCR = VALUE_SCU_PBCLKCR & SCU_CLK_PBCLKCR_PBDIV_Msk;
    SCU_CLK->CCUCLKCR = VALUE_SCU_CCUCLKCR & SCU_CLK_CCUCLKCR_CCUDIV_Msk;
    SCU_CLK->SYSCLKCR = VALUE_SCU_SYSCLKCR & (SCU_CLK_SYSCLKCR_SYSSEL_Msk | SCU_CLK_SYSCLKCR_SYSDIV_Msk);

    if (CFG_SYSSEL_PLL) {
        _pll_ramp(k2);
    }

    // Configured flash wait states for the final clock.
    _flash_set_wait_states(CFG_WSPFLASH);

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
