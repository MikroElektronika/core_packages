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

/*
 * Default configuration (from the MCU definition JSON):
 *   RCFAST 12 MHz -> GCLK9 -> PLL0 (VCO = 12 MHz * 8 = 96 MHz, output / 2) = 48 MHz.
 *   CPU and PBA/PBB/PBC/PBD clocks = 48 MHz.
 *   BPM power scaling PS0, flash 1 wait state + high speed read mode (HSEN).
 *
 * The device boots from RCSYS (115 kHz). All power scaling and flash settings
 * are applied while running from RCSYS, so they are always valid for both the
 * current and the target frequency. Only then are the clock sources started,
 * the prescalers programmed and the main clock switched.
 */
#define __SYSTEM_CLOCK    (FOSC_KHZ_VALUE * 1000UL)

/* Write key for the PM/SCIF/BPM/BSCIF unlock registers. */
#define SAM4L_UNLOCK_KEY  0xAAUL

/* WDT control register write keys (two consecutive writes are required). */
#define WDT_FIRST_KEY     0x55UL
#define WDT_SECOND_KEY    0xAAUL

static inline void _pm_write(uint32_t offset, volatile uint32_t *reg, uint32_t value)
{
    PM->reg.PM_UNLOCK = PM_UNLOCK_KEY(SAM4L_UNLOCK_KEY) | PM_UNLOCK_ADDR(offset);
    *reg = value;
}

static inline void _scif_write(uint32_t offset, volatile uint32_t *reg, uint32_t value)
{
    SCIF->reg.SCIF_UNLOCK = SCIF_UNLOCK_KEY(SAM4L_UNLOCK_KEY) | SCIF_UNLOCK_ADDR(offset);
    *reg = value;
}

/**
 * \brief Disable the watchdog if it was enabled at reset (WDTAUTO fuse).
 */
static void _wdt_disable(void)
{
    uint32_t ctrl = WDT->reg.WDT_CTRL;

    // The WDT is disabled after reset unless enabled by the WDTAUTO fuse.
    // It cannot be disabled once SFV (Store Final Value) is set.
    if ((ctrl & WDT_CTRL_EN) && !(ctrl & WDT_CTRL_SFV)) {
        ctrl &= ~(WDT_CTRL_EN | WDT_CTRL_KEY_Msk);
        WDT->reg.WDT_CTRL = ctrl | WDT_CTRL_KEY(WDT_FIRST_KEY);
        WDT->reg.WDT_CTRL = ctrl | WDT_CTRL_KEY(WDT_SECOND_KEY);
        while (WDT->reg.WDT_CTRL & WDT_CTRL_EN) {
            /* Wait until the WDT is disabled */
        }
    }
}

/**
 * \brief Switch the main clock (PM MCCTRL.MCSEL).
 */
static void _pm_set_main_clock(uint32_t mcsel)
{
    _pm_write(PM_MCCTRL_OFFSET, &PM->reg.PM_MCCTRL, mcsel & PM_MCCTRL_MCSEL_Msk);
}

/**
 * \brief Write one PM clock select register (CPUSEL/PBxSEL).
 */
static void _pm_set_divider(uint32_t offset, volatile uint32_t *reg, uint32_t value)
{
    while (!(PM->reg.PM_SR & PM_SR_CKRDY)) {
        /* Wait until the clock select registers can be written */
    }
    _pm_write(offset, reg, value);
    while (!(PM->reg.PM_SR & PM_SR_CKRDY)) {
        /* Wait until the new divider is applied */
    }
}

/**
 * \brief Request a BPM power scaling change without halting the CPU and
 * wait for it to complete.
 *
 * Executed from RAM (.ramfunc, copied by the startup code) because the flash
 * is not accessible while the regulator settles.
 */
__attribute__((section(".ramfunc"), noinline, long_call))
static void _bpm_power_scaling_no_halt(uint32_t pmcon)
{
    BPM->reg.BPM_UNLOCK = BPM_UNLOCK_KEY(SAM4L_UNLOCK_KEY) | BPM_UNLOCK_ADDR(BPM_PMCON_OFFSET);
    BPM->reg.BPM_PMCON = pmcon;
    while (!(BPM->reg.BPM_SR & BPM_SR_PSOK)) {
        /* Wait until the power scaling change is done */
    }
}

/**
 * \brief Configure BPM power scaling (PMCON.PS). Must run at a clock valid in
 * both the old and the new power scaling mode (RCSYS).
 */
static void _bpm_set_power_scaling(void)
{
    uint32_t pmcon = BPM->reg.BPM_PMCON;
    uint32_t primask;

    if ((pmcon & BPM_PMCON_PS_Msk) == (VALUE_BPM_PMCON & BPM_PMCON_PS_Msk)) {
        // Already in the requested power scaling mode (PS0 after reset).
        return;
    }

    pmcon &= ~BPM_PMCON_PS_Msk;
    pmcon |= (VALUE_BPM_PMCON & BPM_PMCON_PS_Msk) | BPM_PMCON_PSCM | BPM_PMCON_PSCREQ;

    primask = __get_PRIMASK();
    __disable_irq();
    _bpm_power_scaling_no_halt(pmcon);
    __set_PRIMASK(primask);
}

/**
 * \brief Issue one flash controller command and wait until it is completed.
 */
static void _flash_command(uint32_t command)
{
    while (!(HFLASHC->reg.FLASHCALW_FSR & FLASHCALW_FSR_FRDY)) {
        /* Wait until the flash is ready */
    }
    HFLASHC->reg.FLASHCALW_FCMD = FLASHCALW_FCMD_KEY_KEY | (command & FLASHCALW_FCMD_CMD_Msk);
    while (!(HFLASHC->reg.FLASHCALW_FSR & FLASHCALW_FSR_FRDY)) {
        /* Wait until the command is done */
    }
}

/**
 * \brief Set flash wait state and read mode (normal / high speed).
 */
static void _flash_set_wait_state_and_read_mode(void)
{
    uint32_t data = HFLASHC->reg.FLASHCALW_FCR & ~FLASHCALW_FCR_FWS;
    data |= VALUE_HFLASHC_FCR & FLASHCALW_FCR_FWS;
    HFLASHC->reg.FLASHCALW_FCR = data;

    if (FLASHCALW_FCMD_CMD_HSEN == (VALUE_HFLASHC_FCMD & FLASHCALW_FCMD_CMD_Msk)) {
        _flash_command(FLASHCALW_FCMD_CMD_HSEN);
    } else {
        _flash_command(FLASHCALW_FCMD_CMD_HSDIS);
    }
}

/**
 * \brief Initialize clock sources (OSC0, RCFAST, RC80M, GCLK9, PLL0).
 *
 * All requested clock sources are running when this function returns.
 */
static void _scif_init_sources(void)
{
    uint32_t data;

    // OSC0 (external crystal or clock).
    if (SCIF_OSCCTRL0_OSCEN == (VALUE_SCIF_OSCCTRL0 & SCIF_OSCCTRL0_OSCEN)) {
        _scif_write(SCIF_OSCCTRL0_OFFSET, &SCIF->reg.SCIF_OSCCTRL0, VALUE_SCIF_OSCCTRL0);
        while (!(SCIF->reg.SCIF_PCLKSR & SCIF_PCLKSR_OSC0RDY)) {
            /* Wait until OSC0 is stable */
        }
    }

    // RCFAST 4/8/12 MHz RC oscillator. Keep the factory calibration (CALIB/FCD).
    if (SCIF_RCFASTCFG_EN == (VALUE_SCIF_RCFASTCFG & SCIF_RCFASTCFG_EN)) {
        data = SCIF->reg.SCIF_RCFASTCFG & ~(SCIF_RCFASTCFG_FRANGE_Msk | SCIF_RCFASTCFG_EN);
        data |= (VALUE_SCIF_RCFASTCFG & SCIF_RCFASTCFG_FRANGE_Msk) | SCIF_RCFASTCFG_EN;
        _scif_write(SCIF_RCFASTCFG_OFFSET, &SCIF->reg.SCIF_RCFASTCFG, data);
        while (!(SCIF->reg.SCIF_RCFASTCFG & SCIF_RCFASTCFG_EN)) {
            /* Wait until RCFAST is enabled */
        }
    }

    // RC80M 80 MHz RC oscillator. Keep the factory calibration (CALIB/FCD).
    if (SCIF_RC80MCR_EN == (VALUE_SCIF_RC80MCR & SCIF_RC80MCR_EN)) {
        data = SCIF->reg.SCIF_RC80MCR | SCIF_RC80MCR_EN;
        _scif_write(SCIF_RC80MCR_OFFSET, &SCIF->reg.SCIF_RC80MCR, data);
        while (!(SCIF->reg.SCIF_RC80MCR & SCIF_RC80MCR_EN)) {
            /* Wait until RC80M is enabled */
        }
    }

    // PLL0.
    if (SCIF_PLL_PLLEN == (VALUE_SCIF_PLL0 & SCIF_PLL_PLLEN)) {
        // GCLK9 is the PLL0 reference when PLLOSC selects it.
        if ((SCIF_PLL_PLLOSC(1) == (VALUE_SCIF_PLL0 & SCIF_PLL_PLLOSC_Msk)) &&
            (SCIF_GCCTRL_CEN == (VALUE_SCIF_GCCTRL9 & SCIF_GCCTRL_CEN))) {
            SCIF->reg.SCIF_GCCTRL[9].reg.SCIF_GCCTRL = 0;
            SCIF->reg.SCIF_GCCTRL[9].reg.SCIF_GCCTRL = VALUE_SCIF_GCCTRL9 & ~SCIF_GCCTRL_CEN;
            SCIF->reg.SCIF_GCCTRL[9].reg.SCIF_GCCTRL = VALUE_SCIF_GCCTRL9;
        }
        // Program the PLL with PLLEN cleared first, then enable it.
        _scif_write(SCIF_PLL_OFFSET, &SCIF->reg.SCIF_PLL[0].reg.SCIF_PLL, 0);
        _scif_write(SCIF_PLL_OFFSET, &SCIF->reg.SCIF_PLL[0].reg.SCIF_PLL,
                    VALUE_SCIF_PLL0 & ~SCIF_PLL_PLLEN);
        _scif_write(SCIF_PLL_OFFSET, &SCIF->reg.SCIF_PLL[0].reg.SCIF_PLL, VALUE_SCIF_PLL0);
        while (!(SCIF->reg.SCIF_PCLKSR & SCIF_PCLKSR_PLL0LOCK)) {
            /* Wait until PLL0 is locked */
        }
    }
}

/**
 * \brief Initialize CPU and peripheral bus dividers, then switch the main clock.
 */
static void _pm_init_main_clock(void)
{
    _pm_set_divider(PM_CPUSEL_OFFSET, &PM->reg.PM_CPUSEL,
                    VALUE_PM_CPUSEL & (PM_CPUSEL_CPUSEL_Msk | PM_CPUSEL_CPUDIV));
    _pm_set_divider(PM_PBASEL_OFFSET, &PM->reg.PM_PBASEL,
                    VALUE_PM_PBASEL & (PM_PBASEL_PBSEL_Msk | PM_PBASEL_PBDIV));
    _pm_set_divider(PM_PBBSEL_OFFSET, &PM->reg.PM_PBBSEL,
                    VALUE_PM_PBBSEL & (PM_PBBSEL_PBSEL_Msk | PM_PBBSEL_PBDIV));
    _pm_set_divider(PM_PBCSEL_OFFSET, &PM->reg.PM_PBCSEL,
                    VALUE_PM_PBCSEL & (PM_PBCSEL_PBSEL_Msk | PM_PBCSEL_PBDIV));
    _pm_set_divider(PM_PBDSEL_OFFSET, &PM->reg.PM_PBDSEL,
                    VALUE_PM_PBDSEL & (PM_PBDSEL_PBSEL_Msk | PM_PBDSEL_PBDIV));

    _pm_set_main_clock(VALUE_PM_MCCTRL);
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

    _wdt_disable();

    // Run from RCSYS while power scaling, flash and clock sources are changed.
    if (0 != (PM->reg.PM_MCCTRL & PM_MCCTRL_MCSEL_Msk)) {
        _pm_set_main_clock(0);
    }

    // Power scaling and flash wait states first (valid at RCSYS for any target).
    _bpm_set_power_scaling();
    _flash_set_wait_state_and_read_mode();

    // Start sources, set dividers and switch the main clock.
    _scif_init_sources();
    _pm_init_main_clock();

    // The configured clock is now active.
    SystemCoreClockUpdate();

#if defined(__FPU_PRESENT) && (__FPU_PRESENT == 1U)
    // Enable Floating Point Unit and synchronize the pipeline.
    SCB->CPACR |= ((3UL << 20) | (3UL << 22));
    __DSB();
    __ISB();
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
     * For the default configuration it is 48000 kHz.
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
