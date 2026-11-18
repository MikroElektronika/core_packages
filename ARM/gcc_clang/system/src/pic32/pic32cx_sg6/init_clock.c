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
 * System clock frequency. The DFLL48M (48 MHz, open loop) is the source for
 * the main clock at chip startup. The configured value is taken from the
 * NECTO generated FOSC_KHZ_VALUE.
 */
#define __SYSTEM_CLOCK    (FOSC_KHZ_VALUE * 1000UL)

/*
 * Cortex-M Cache Controller (CMCC) policy. The CMCC only caches the NVM/QSPI
 * instruction and data path and is coherent with DMA for SRAM, so it is safe
 * to keep it enabled. It is recommended at 120 MHz.
 */
#ifndef SYSTEM_ENABLE_CMCC
#define SYSTEM_ENABLE_CMCC    1
#endif

/* Generic clock channel indexes (see instance/oscctrl.h). */
#ifndef OSCCTRL_GCLK_ID_DFLL48
#define OSCCTRL_GCLK_ID_DFLL48    (0U)
#endif
#ifndef OSCCTRL_GCLK_ID_FDPLL0
#define OSCCTRL_GCLK_ID_FDPLL0    (1U)
#endif
#ifndef OSCCTRL_GCLK_ID_FDPLL1
#define OSCCTRL_GCLK_ID_FDPLL1    (2U)
#endif

#define _GCLK_GEN_NUM             (12U)
#define _GCLK_GEN_SYNC_MSK(n)     (1UL << (GCLK_SYNCBUSY_GENCTRL_Pos + (n)))
#define _GCLK_GEN_SRC(value)      ((value) & GCLK_GENCTRL_SRC_Msk)
#define _GCLK_GEN_ENABLED(value)  (0 != ((value) & GCLK_GENCTRL_GENEN_Msk))

/* Generator configuration (index = generator number). */
static const uint32_t _gclk_genctrl[_GCLK_GEN_NUM] = {
    VALUE_GENCTRL0, VALUE_GENCTRL1, VALUE_GENCTRL2,  VALUE_GENCTRL3,
    VALUE_GENCTRL4, VALUE_GENCTRL5, VALUE_GENCTRL6,  VALUE_GENCTRL7,
    VALUE_GENCTRL8, VALUE_GENCTRL9, VALUE_GENCTRL10, VALUE_GENCTRL11
};

/**
 * \brief Disable the Watchdog Timer.
 *
 * The WDT is disabled after reset unless it was enabled through the NVM user
 * row fuses. It can not be disabled when the Always-On mode is active.
 */
static void _wdt_disable(void)
{
    if ((WDT_REGS->WDT_CTRLA & WDT_CTRLA_ENABLE_Msk) &&
        !(WDT_REGS->WDT_CTRLA & WDT_CTRLA_ALWAYSON_Msk)) {
        WDT_REGS->WDT_CTRLA &= (uint8_t)~WDT_CTRLA_ENABLE_Msk;
        while (WDT_REGS->WDT_SYNCBUSY & WDT_SYNCBUSY_ENABLE_Msk) {
            /* Wait for synchronization */
        }
    }
}

/**
 * \brief Set NVM read wait states and automatic wait state generation.
 *
 * \param only_increase Write the new setting only if it adds wait states.
 */
static void _nvm_set_wait_states(uint8_t only_increase)
{
    uint16_t data = NVMCTRL_REGS->NVMCTRL_CTRLA;

    if (only_increase &&
        ((VALUE_NVMCTRL_CTRLA & NVMCTRL_CTRLA_RWS_Msk) <= (data & NVMCTRL_CTRLA_RWS_Msk))) {
        return;
    }
    data &= (uint16_t)~(NVMCTRL_CTRLA_RWS_Msk | NVMCTRL_CTRLA_AUTOWS_Msk);
    data |= (uint16_t)(VALUE_NVMCTRL_CTRLA & (NVMCTRL_CTRLA_RWS_Msk | NVMCTRL_CTRLA_AUTOWS_Msk));
    NVMCTRL_REGS->NVMCTRL_CTRLA = data;
}

/**
 * \brief Write a generic clock generator and wait for synchronization.
 */
static void _gclk_gen_write(uint32_t gen, uint32_t value)
{
    GCLK_REGS->GCLK_GENCTRL[gen] = value;
    while (GCLK_REGS->GCLK_SYNCBUSY & _GCLK_GEN_SYNC_MSK(gen)) {
        /* Wait for synchronization */
    }
}

/**
 * \brief Write a peripheral clock channel.
 *
 * The channel is disabled before its generator is changed, as required by
 * the datasheet.
 */
static void _gclk_channel_write(uint32_t id, uint32_t value)
{
    value &= (GCLK_PCHCTRL_GEN_Msk | GCLK_PCHCTRL_CHEN_Msk);

    if ((GCLK_REGS->GCLK_PCHCTRL[id] & GCLK_PCHCTRL_CHEN_Msk) &&
        ((GCLK_REGS->GCLK_PCHCTRL[id] & GCLK_PCHCTRL_GEN_Msk) != (value & GCLK_PCHCTRL_GEN_Msk))) {
        GCLK_REGS->GCLK_PCHCTRL[id] &= ~GCLK_PCHCTRL_CHEN_Msk;
        while (GCLK_REGS->GCLK_PCHCTRL[id] & GCLK_PCHCTRL_CHEN_Msk) {
            /* Wait until the channel is disabled */
        }
    }
    GCLK_REGS->GCLK_PCHCTRL[id] = value;
    if (value & GCLK_PCHCTRL_CHEN_Msk) {
        while (!(GCLK_REGS->GCLK_PCHCTRL[id] & GCLK_PCHCTRL_CHEN_Msk)) {
            /* Wait until the channel is enabled */
        }
    }
}

/**
 * \brief Make sure the CPU runs from the DFLL48M before the clock tree is
 * (re)configured. This is the reset state, so normally nothing is done.
 */
static void _gclk0_to_dfll(void)
{
    if (!(OSCCTRL_REGS->OSCCTRL_DFLLCTRLA & OSCCTRL_DFLLCTRLA_ENABLE_Msk)) {
        OSCCTRL_REGS->OSCCTRL_DFLLCTRLA |= OSCCTRL_DFLLCTRLA_ENABLE_Msk;
        while (OSCCTRL_REGS->OSCCTRL_DFLLSYNC & OSCCTRL_DFLLSYNC_ENABLE_Msk) {
            /* Wait for synchronization */
        }
        while (!(OSCCTRL_REGS->OSCCTRL_STATUS & OSCCTRL_STATUS_DFLLRDY_Msk)) {
            /* Wait until the DFLL is ready */
        }
    }
    if (GCLK_GENCTRL_SRC_DFLL != _GCLK_GEN_SRC(GCLK_REGS->GCLK_GENCTRL[0])) {
        _gclk_gen_write(0, GCLK_GENCTRL_SRC_DFLL | GCLK_GENCTRL_GENEN_Msk | GCLK_GENCTRL_DIV(1));
    }
}

/**
 * \brief Initialize the crystal oscillators (XOSC0, XOSC1 and XOSC32K).
 *
 * Every enabled oscillator is running when this function returns.
 */
static void _osc_init_sources(void)
{
    // If XOSC0 is enabled.
    if (VALUE_XOSCCTRL0 & OSCCTRL_XOSCCTRL_ENABLE_Msk) {
        OSCCTRL_REGS->OSCCTRL_XOSCCTRL[0] = VALUE_XOSCCTRL0;
        if (!(VALUE_XOSCCTRL0 & OSCCTRL_XOSCCTRL_ONDEMAND_Msk)) {
            while (!(OSCCTRL_REGS->OSCCTRL_STATUS & OSCCTRL_STATUS_XOSCRDY0_Msk)) {
                /* Wait until XOSC0 is stable */
            }
        }
    }

    // If XOSC1 is enabled.
    if (VALUE_XOSCCTRL1 & OSCCTRL_XOSCCTRL_ENABLE_Msk) {
        OSCCTRL_REGS->OSCCTRL_XOSCCTRL[1] = VALUE_XOSCCTRL1;
        if (!(VALUE_XOSCCTRL1 & OSCCTRL_XOSCCTRL_ONDEMAND_Msk)) {
            while (!(OSCCTRL_REGS->OSCCTRL_STATUS & OSCCTRL_STATUS_XOSCRDY1_Msk)) {
                /* Wait until XOSC1 is stable */
            }
        }
    }

    // If XOSC32K is enabled.
    if (VALUE_XOSC32K & OSC32KCTRL_XOSC32K_ENABLE_Msk) {
        OSC32KCTRL_REGS->OSC32KCTRL_XOSC32K = (uint16_t)VALUE_XOSC32K;
        if (!(VALUE_XOSC32K & OSC32KCTRL_XOSC32K_ONDEMAND_Msk)) {
            while (!(OSC32KCTRL_REGS->OSC32KCTRL_STATUS & OSC32KCTRL_STATUS_XOSC32KRDY_Msk)) {
                /* Wait until XOSC32K is stable */
            }
        }
    }
}

/**
 * \brief Initialize the generic clock generators 1..11.
 *
 * \param after_dpll 0: generators that do not depend on a DPLL or on GCLK1,
 *                   1: generators sourced by DPLL0, DPLL1 or GCLK1.
 */
static void _gclk_init_generators(uint8_t after_dpll)
{
    uint32_t gen;
    uint32_t src;
    uint8_t late;

    for (gen = 1; gen < _GCLK_GEN_NUM; gen++) {
        if (!_GCLK_GEN_ENABLED(_gclk_genctrl[gen])) {
            continue;
        }
        src = _GCLK_GEN_SRC(_gclk_genctrl[gen]);
        late = (GCLK_GENCTRL_SRC_DPLL0 == src) || (GCLK_GENCTRL_SRC_DPLL1 == src) ||
               (GCLK_GENCTRL_SRC_GCLKGEN1 == src);
        if (late == after_dpll) {
            _gclk_gen_write(gen, _gclk_genctrl[gen]);
        }
    }
}

/**
 * \brief Initialize the DFLL48M.
 *
 * The DFLL48M runs in open loop mode after reset. It is never disabled here
 * because it may be clocking the CPU.
 */
static void _dfll_init(void)
{
    // If closed loop (or USB clock recovery) mode is selected.
    if (VALUE_DFLLCTRLB & OSCCTRL_DFLLCTRLB_MODE_Msk) {
        if (!(VALUE_DFLLCTRLB & OSCCTRL_DFLLCTRLB_USBCRM_Msk)) {
            // Reference clock from a generic clock generator.
            _gclk_channel_write(OSCCTRL_GCLK_ID_DFLL48, VALUE_PCHCTRL_DFLL48 | GCLK_PCHCTRL_CHEN_Msk);
        }
        OSCCTRL_REGS->OSCCTRL_DFLLMUL = VALUE_DFLLMUL;
        while (OSCCTRL_REGS->OSCCTRL_DFLLSYNC & OSCCTRL_DFLLSYNC_DFLLMUL_Msk) {
            /* Wait for synchronization */
        }
        // Reload the current tuning values (recommended before closed loop).
        OSCCTRL_REGS->OSCCTRL_DFLLVAL = OSCCTRL_REGS->OSCCTRL_DFLLVAL;
        while (OSCCTRL_REGS->OSCCTRL_DFLLSYNC & OSCCTRL_DFLLSYNC_DFLLVAL_Msk) {
            /* Wait for synchronization */
        }
        OSCCTRL_REGS->OSCCTRL_DFLLCTRLB = (uint8_t)VALUE_DFLLCTRLB;
        while (OSCCTRL_REGS->OSCCTRL_DFLLSYNC & OSCCTRL_DFLLSYNC_DFLLCTRLB_Msk) {
            /* Wait for synchronization */
        }
        while (!(OSCCTRL_REGS->OSCCTRL_STATUS & OSCCTRL_STATUS_DFLLRDY_Msk)) {
            /* Wait until the DFLL is ready */
        }
        if (!(VALUE_DFLLCTRLB & OSCCTRL_DFLLCTRLB_USBCRM_Msk)) {
            while (!(OSCCTRL_REGS->OSCCTRL_STATUS & OSCCTRL_STATUS_DFLLLCKC_Msk)) {
                /* Wait for the coarse lock */
            }
        }
    }

    // Apply RUNSTDBY/ONDEMAND while keeping the DFLL enabled.
    if ((OSCCTRL_REGS->OSCCTRL_DFLLCTRLA & ~OSCCTRL_DFLLCTRLA_ENABLE_Msk) !=
        (VALUE_DFLLCTRLA & ~OSCCTRL_DFLLCTRLA_ENABLE_Msk)) {
        OSCCTRL_REGS->OSCCTRL_DFLLCTRLA = (uint8_t)(VALUE_DFLLCTRLA | OSCCTRL_DFLLCTRLA_ENABLE_Msk);
        while (OSCCTRL_REGS->OSCCTRL_DFLLSYNC & OSCCTRL_DFLLSYNC_ENABLE_Msk) {
            /* Wait for synchronization */
        }
    }
}

/**
 * \brief Initialize one fractional digital PLL.
 *
 * The DPLL is locked and ready when this function returns (unless it runs on
 * demand).
 */
static void _dpll_init(uint32_t n, uint32_t ctrla, uint32_t ratio, uint32_t ctrlb,
                       uint32_t pchctrl, uint32_t gclk_id)
{
    if (!(ctrla & OSCCTRL_DPLLCTRLA_ENABLE_Msk)) {
        return;
    }

    // Stop the DPLL first if it is already running.
    if (OSCCTRL_REGS->DPLL[n].OSCCTRL_DPLLCTRLA & OSCCTRL_DPLLCTRLA_ENABLE_Msk) {
        OSCCTRL_REGS->DPLL[n].OSCCTRL_DPLLCTRLA = 0;
        while (OSCCTRL_REGS->DPLL[n].OSCCTRL_DPLLSYNCBUSY & OSCCTRL_DPLLSYNCBUSY_ENABLE_Msk) {
            /* Wait for synchronization */
        }
    }

    // If the dedicated generic clock is selected as reference.
    if (OSCCTRL_DPLLCTRLB_REFCLK_GCLK == (ctrlb & OSCCTRL_DPLLCTRLB_REFCLK_Msk)) {
        _gclk_channel_write(gclk_id, pchctrl | GCLK_PCHCTRL_CHEN_Msk);
    }

    OSCCTRL_REGS->DPLL[n].OSCCTRL_DPLLCTRLB = ctrlb;
    OSCCTRL_REGS->DPLL[n].OSCCTRL_DPLLRATIO = ratio;
    while (OSCCTRL_REGS->DPLL[n].OSCCTRL_DPLLSYNCBUSY & OSCCTRL_DPLLSYNCBUSY_DPLLRATIO_Msk) {
        /* Wait for synchronization */
    }
    OSCCTRL_REGS->DPLL[n].OSCCTRL_DPLLCTRLA = (uint8_t)ctrla;
    while (OSCCTRL_REGS->DPLL[n].OSCCTRL_DPLLSYNCBUSY & OSCCTRL_DPLLSYNCBUSY_ENABLE_Msk) {
        /* Wait for synchronization */
    }
    if (!(ctrla & OSCCTRL_DPLLCTRLA_ONDEMAND_Msk)) {
        while ((OSCCTRL_REGS->DPLL[n].OSCCTRL_DPLLSTATUS &
                (OSCCTRL_DPLLSTATUS_LOCK_Msk | OSCCTRL_DPLLSTATUS_CLKRDY_Msk)) !=
               (OSCCTRL_DPLLSTATUS_LOCK_Msk | OSCCTRL_DPLLSTATUS_CLKRDY_Msk)) {
            /* Wait until the DPLL is locked and ready */
        }
    }
}

/**
 * \brief Initialize the main clock: CPU divider and generator 0.
 */
static void _mclk_init(void)
{
    MCLK_REGS->MCLK_CPUDIV = (uint8_t)VALUE_CPUDIV;
    while (!(MCLK_REGS->MCLK_INTFLAG & MCLK_INTFLAG_CKRDY_Msk)) {
        /* Wait until the main clock is ready */
    }

    // Switch generator 0 (CPU/main clock) to the configured source.
    _gclk_gen_write(0, VALUE_GENCTRL0 | GCLK_GENCTRL_GENEN_Msk);
}

/**
 * \brief Return 1 if an enabled generator uses the given source.
 */
static uint8_t _gclk_source_used(uint32_t src)
{
    uint32_t gen;

    for (gen = 0; gen < _GCLK_GEN_NUM; gen++) {
        if (_GCLK_GEN_ENABLED(_gclk_genctrl[gen]) && (src == _GCLK_GEN_SRC(_gclk_genctrl[gen]))) {
            return 1;
        }
    }
    return 0;
}

/**
 * \brief Disable the clocks that are not used by the configuration.
 */
static void _disable_unused_clocks(void)
{
    uint32_t gen;

    // Disable generators 1..11 that are not enabled in the configuration.
    for (gen = 1; gen < _GCLK_GEN_NUM; gen++) {
        if (!_GCLK_GEN_ENABLED(_gclk_genctrl[gen]) &&
            (GCLK_REGS->GCLK_GENCTRL[gen] & GCLK_GENCTRL_GENEN_Msk)) {
            _gclk_gen_write(gen, _gclk_genctrl[gen]);
        }
    }

    // Disable DPLL0 if it is not enabled in the configuration.
    if (!(VALUE_DPLL0CTRLA & OSCCTRL_DPLLCTRLA_ENABLE_Msk) &&
        !_gclk_source_used(GCLK_GENCTRL_SRC_DPLL0) &&
        (OSCCTRL_REGS->DPLL[0].OSCCTRL_DPLLCTRLA & OSCCTRL_DPLLCTRLA_ENABLE_Msk)) {
        OSCCTRL_REGS->DPLL[0].OSCCTRL_DPLLCTRLA = 0;
        while (OSCCTRL_REGS->DPLL[0].OSCCTRL_DPLLSYNCBUSY & OSCCTRL_DPLLSYNCBUSY_ENABLE_Msk) {
            /* Wait for synchronization */
        }
    }

    // Disable DPLL1 if it is not enabled in the configuration.
    if (!(VALUE_DPLL1CTRLA & OSCCTRL_DPLLCTRLA_ENABLE_Msk) &&
        !_gclk_source_used(GCLK_GENCTRL_SRC_DPLL1) &&
        (OSCCTRL_REGS->DPLL[1].OSCCTRL_DPLLCTRLA & OSCCTRL_DPLLCTRLA_ENABLE_Msk)) {
        OSCCTRL_REGS->DPLL[1].OSCCTRL_DPLLCTRLA = 0;
        while (OSCCTRL_REGS->DPLL[1].OSCCTRL_DPLLSYNCBUSY & OSCCTRL_DPLLSYNCBUSY_ENABLE_Msk) {
            /* Wait for synchronization */
        }
    }

    // Disable the DFLL48M if it is not enabled and no generator uses it.
    if (!(VALUE_DFLLCTRLA & OSCCTRL_DFLLCTRLA_ENABLE_Msk) &&
        !_gclk_source_used(GCLK_GENCTRL_SRC_DFLL)) {
        OSCCTRL_REGS->OSCCTRL_DFLLCTRLA = (uint8_t)VALUE_DFLLCTRLA;
        while (OSCCTRL_REGS->OSCCTRL_DFLLSYNC & OSCCTRL_DFLLSYNC_ENABLE_Msk) {
            /* Wait for synchronization */
        }
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
    // Keep the default device state after reset
    SystemCoreClock = __SYSTEM_CLOCK;

    // Disable Watchdog Timer (only enabled after reset by the user row fuses).
    _wdt_disable();

    // Add NVM wait states before the clock frequency is raised.
    _nvm_set_wait_states(1);

    _gclk0_to_dfll();
    _osc_init_sources();
    _gclk_init_generators(0);
    _dfll_init();
    _dpll_init(0, VALUE_DPLL0CTRLA, VALUE_DPLL0RATIO, VALUE_DPLL0CTRLB,
               VALUE_PCHCTRL_FDPLL0, OSCCTRL_GCLK_ID_FDPLL0);
    _dpll_init(1, VALUE_DPLL1CTRLA, VALUE_DPLL1RATIO, VALUE_DPLL1CTRLB,
               VALUE_PCHCTRL_FDPLL1, OSCCTRL_GCLK_ID_FDPLL1);
    _gclk_init_generators(1);
    _mclk_init();

    // Final NVM wait states (may remove wait states for lower frequencies).
    _nvm_set_wait_states(0);

    _disable_unused_clocks();

    // The configured clock is now active.
    SystemCoreClockUpdate();

    // Enable Floating Point Unit and synchronize the pipeline.
    SCB->CPACR |= ((3UL << 20) | (3UL << 22));
    __DSB();
    __ISB();

#if SYSTEM_ENABLE_CMCC
    // Enable the Cortex-M Cache Controller.
    if (!(CMCC_REGS->CMCC_SR & CMCC_SR_CSTS_Msk)) {
        CMCC_REGS->CMCC_CTRL = CMCC_CTRL_CEN_Msk;
    }
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
     * For the default configuration it is 120000 kHz
     * (DFLL48M -> GCLK1 /48 = 1 MHz -> DPLL0 x120 -> GCLK0 /1 -> CPU /1).
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
