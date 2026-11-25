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

/*
 * The device headers (mcu.h) of these parts do not include the CMSIS core
 * header, so the register access qualifiers are provided here.
 */
#ifndef __IO
#ifdef __cplusplus
#define __I     volatile
#else
#define __I     volatile const
#endif
#define __O     volatile
#define __IO    volatile
#endif

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
 * Clock tree setup for the OSCCTRL/OSC32KCTRL/GCLK/MCLK based Cortex-M0+
 * devices (SAM C20/C21, SAM L21/L22, SAM R30/R34/R35).
 *
 * Every value used below comes from core_header.h, which is generated from
 * the MCU definition file (VALUE_<KEY> = OR of all field init values).
 * Default configuration (internal oscillators only):
 *  - SAM C20/C21:        OSC48M /1 = 48 MHz -> GCLK0 -> CPU (48 MHz).
 *  - SAM L21/R30/R34/R35: OSC16M (16 MHz) -> GCLK1 /16 = 1 MHz -> FDPLL96M x96
 *                        = 96 MHz -> DPLLPRESC /2 = 48 MHz -> GCLK0 -> CPU.
 *  - SAM L22:            OSC16M (16 MHz) -> GCLK1 /16 = 1 MHz -> FDPLL96M x64
 *                        = 64 MHz -> DPLLPRESC /2 = 32 MHz -> GCLK0 -> CPU.
 * Sequence: flash wait states -> performance level -> bus dividers ->
 * oscillators -> generators not fed by the DPLL -> DPLL -> generators fed by
 * the DPLL -> GCLK0 (main clock) last.
 */

/**
 * System clock frequency, generated from the top-level "clock" value of the
 * MCU definition file.
 */
#define __SYSTEM_CLOCK    (FOSC_KHZ_VALUE * 1000UL)

#define _REG32(address)   (*((volatile uint32_t *)(address)))

// Not every device header defines the enumerated value (e.g. SAM R34).
#ifndef OSCCTRL_DPLLCTRLB_REFCLK_GCLK
#define OSCCTRL_DPLLCTRLB_REFCLK_GCLK   OSCCTRL_DPLLCTRLB_REFCLK(2U)
#endif

/**
 * \brief Set NVM read wait states.
 *
 * Must be done before the main clock frequency is raised.
 */
static void _nvmctrl_set_wait_states(void)
{
    uint32_t data = NVMCTRL_REGS->NVMCTRL_CTRLB & ~NVMCTRL_CTRLB_RWS_Msk;
    data |= VALUE_NVMCTRL_CTRLB & NVMCTRL_CTRLB_RWS_Msk;
    NVMCTRL_REGS->NVMCTRL_CTRLB = data;
}

/**
 * \brief Select the performance level (SAM L2x/R3x only).
 *
 * PL0 is active after reset; PL2 is required for frequencies above the PL0
 * limit (and for OSC16M at 16 MHz / FDPLL96M), so it is selected before any
 * clock is raised.
 */
static void _pm_set_performance_level(void)
{
#ifdef VALUE_PLCFG
    // Performance level switching can be disabled (PLDIS); nothing to do then.
    if (PM_PLCFG_PLDIS_Msk & PM_REGS->PM_PLCFG) {
        return;
    }
    if ((VALUE_PLCFG & PM_PLCFG_PLSEL_Msk) != (PM_REGS->PM_PLCFG & PM_PLCFG_PLSEL_Msk)) {
        // Clear the ready flag, request the new level and wait until it is reached.
        PM_REGS->PM_INTFLAG = PM_INTFLAG_PLRDY_Msk;
        PM_REGS->PM_PLCFG = (uint8_t)((PM_REGS->PM_PLCFG & ~PM_PLCFG_PLSEL_Msk) |
                                      (VALUE_PLCFG & PM_PLCFG_PLSEL_Msk));
        while (PM_INTFLAG_PLRDY_Msk != (PM_REGS->PM_INTFLAG & PM_INTFLAG_PLRDY_Msk)) {
            /* Wait until the performance level is ready */
        }
    }
#endif
}

/**
 * \brief Configure the main clock dividers.
 *
 * Dividers are written from the slowest domain to the fastest one so that
 * f(CPU) >= f(LP) >= f(BUP) holds at every step.
 */
static void _mclk_init(void)
{
#ifdef VALUE_BUPDIV
    MCLK_REGS->MCLK_BUPDIV = (uint8_t)(VALUE_BUPDIV & MCLK_BUPDIV_BUPDIV_Msk);
    while (MCLK_INTFLAG_CKRDY_Msk != (MCLK_REGS->MCLK_INTFLAG & MCLK_INTFLAG_CKRDY_Msk)) {
        /* Wait until the clock dividers are applied */
    }
#endif
#ifdef VALUE_LPDIV
    MCLK_REGS->MCLK_LPDIV = (uint8_t)(VALUE_LPDIV & MCLK_LPDIV_LPDIV_Msk);
    while (MCLK_INTFLAG_CKRDY_Msk != (MCLK_REGS->MCLK_INTFLAG & MCLK_INTFLAG_CKRDY_Msk)) {
        /* Wait until the clock dividers are applied */
    }
#endif
    MCLK_REGS->MCLK_CPUDIV = (uint8_t)(VALUE_CPUDIV & MCLK_CPUDIV_CPUDIV_Msk);
    while (MCLK_INTFLAG_CKRDY_Msk != (MCLK_REGS->MCLK_INTFLAG & MCLK_INTFLAG_CKRDY_Msk)) {
        /* Wait until the clock dividers are applied */
    }
}

/**
 * \brief Initialize the 32 kHz oscillators.
 *
 * The factory calibration of OSC32K is loaded by hardware at reset, so the
 * CALIB field is preserved.
 */
static void _osc32kctrl_init_sources(void)
{
#ifdef VALUE_XOSC32K
    // If XOSC32K is enabled.
    if (OSC32KCTRL_XOSC32K_ENABLE_Msk == (VALUE_XOSC32K & OSC32KCTRL_XOSC32K_ENABLE_Msk)) {
        OSC32KCTRL_REGS->OSC32KCTRL_XOSC32K = (uint16_t)VALUE_XOSC32K;
        // An on-demand oscillator only starts when a peripheral requests it.
        if (OSC32KCTRL_XOSC32K_ONDEMAND_Msk != (VALUE_XOSC32K & OSC32KCTRL_XOSC32K_ONDEMAND_Msk)) {
            while (OSC32KCTRL_STATUS_XOSC32KRDY_Msk !=
                   (OSC32KCTRL_REGS->OSC32KCTRL_STATUS & OSC32KCTRL_STATUS_XOSC32KRDY_Msk)) {
                /* Wait until XOSC32K is stable */
            }
        }
    }
#endif

#ifdef VALUE_OSC32K
    // If OSC32K is enabled.
    if (OSC32KCTRL_OSC32K_ENABLE_Msk == (VALUE_OSC32K & OSC32KCTRL_OSC32K_ENABLE_Msk)) {
        uint32_t data = OSC32KCTRL_REGS->OSC32KCTRL_OSC32K & OSC32KCTRL_OSC32K_CALIB_Msk;
        data |= VALUE_OSC32K & ~OSC32KCTRL_OSC32K_CALIB_Msk;
        OSC32KCTRL_REGS->OSC32KCTRL_OSC32K = data;
        if (OSC32KCTRL_OSC32K_ONDEMAND_Msk != (VALUE_OSC32K & OSC32KCTRL_OSC32K_ONDEMAND_Msk)) {
            while (OSC32KCTRL_STATUS_OSC32KRDY_Msk !=
                   (OSC32KCTRL_REGS->OSC32KCTRL_STATUS & OSC32KCTRL_STATUS_OSC32KRDY_Msk)) {
                /* Wait until OSC32K is stable */
            }
        }
    }
#endif
}

/**
 * \brief Initialize the high frequency oscillators (XOSC, OSC48M / OSC16M).
 */
static void _oscctrl_init_sources(void)
{
#ifdef VALUE_XOSCCTRL
    // If XOSC is enabled.
    if (OSCCTRL_XOSCCTRL_ENABLE_Msk == (VALUE_XOSCCTRL & OSCCTRL_XOSCCTRL_ENABLE_Msk)) {
        // Automatic amplitude gain control is enabled once the oscillator is stable.
        OSCCTRL_REGS->OSCCTRL_XOSCCTRL = (uint16_t)(VALUE_XOSCCTRL & ~(OSCCTRL_XOSCCTRL_AMPGC_Msk |
                                                                       OSCCTRL_XOSCCTRL_ONDEMAND_Msk));
        while (OSCCTRL_STATUS_XOSCRDY_Msk != (OSCCTRL_REGS->OSCCTRL_STATUS & OSCCTRL_STATUS_XOSCRDY_Msk)) {
            /* Wait until XOSC is stable */
        }
        OSCCTRL_REGS->OSCCTRL_XOSCCTRL = (uint16_t)VALUE_XOSCCTRL;
    }
#endif

#ifdef VALUE_OSC48MCTRL
    // OSC48M is the main clock source after reset; it stays enabled.
    OSCCTRL_REGS->OSCCTRL_OSC48MCTRL = (uint8_t)(VALUE_OSC48MCTRL | OSCCTRL_OSC48MCTRL_ENABLE_Msk);
    OSCCTRL_REGS->OSCCTRL_OSC48MDIV = (uint8_t)(VALUE_OSC48MDIV & OSCCTRL_OSC48MDIV_DIV_Msk);
    while (OSCCTRL_REGS->OSCCTRL_OSC48MSYNCBUSY & OSCCTRL_OSC48MSYNCBUSY_OSC48MDIV_Msk) {
        /* Wait until the OSC48M divider is synchronized */
    }
    while (OSCCTRL_STATUS_OSC48MRDY_Msk != (OSCCTRL_REGS->OSCCTRL_STATUS & OSCCTRL_STATUS_OSC48MRDY_Msk)) {
        /* Wait until OSC48M is stable */
    }
#endif

#ifdef VALUE_OSC16MCTRL
    // OSC16M is the main clock source after reset; it stays enabled.
    OSCCTRL_REGS->OSCCTRL_OSC16MCTRL = (uint8_t)(VALUE_OSC16MCTRL | OSCCTRL_OSC16MCTRL_ENABLE_Msk);
    while (OSCCTRL_STATUS_OSC16MRDY_Msk != (OSCCTRL_REGS->OSCCTRL_STATUS & OSCCTRL_STATUS_OSC16MRDY_Msk)) {
        /* Wait until OSC16M is stable at the new frequency */
    }
#endif
}

/**
 * \brief Write one generic clock generator and wait for synchronization.
 */
static void _gclk_write_generator(uint32_t index, uint32_t value)
{
    GCLK_REGS->GCLK_GENCTRL[index] = value;
    while (GCLK_REGS->GCLK_SYNCBUSY & (1UL << (GCLK_SYNCBUSY_GENCTRL0_Pos + index))) {
        /* Wait until the generator is synchronized */
    }
}

#define _GCLK_IS_DPLL_SOURCED(value) \
    (GCLK_GENCTRL_SRC_DPLL96M == ((value) & GCLK_GENCTRL_SRC_Msk))

#define _GCLK_INIT_GENERATOR(index, value, dpll_sourced) \
    if ((dpll_sourced) == _GCLK_IS_DPLL_SOURCED(value)) { \
        _gclk_write_generator(index, value); \
    }

/**
 * \brief Initialize generic clock generators 1..n.
 *
 * \param dpll_sourced 0 - generators that are not fed by the DPLL
 *                         (initialized before the DPLL, e.g. its reference),
 *                     1 - generators fed by the DPLL (initialized after lock).
 * Generator 0 (main clock) is initialized separately, as the very last step.
 */
static void _gclk_init_generators(uint32_t dpll_sourced)
{
#ifdef VALUE_GENCTRL1
    _GCLK_INIT_GENERATOR(1, VALUE_GENCTRL1, dpll_sourced);
#endif
#ifdef VALUE_GENCTRL2
    _GCLK_INIT_GENERATOR(2, VALUE_GENCTRL2, dpll_sourced);
#endif
#ifdef VALUE_GENCTRL3
    _GCLK_INIT_GENERATOR(3, VALUE_GENCTRL3, dpll_sourced);
#endif
#ifdef VALUE_GENCTRL4
    _GCLK_INIT_GENERATOR(4, VALUE_GENCTRL4, dpll_sourced);
#endif
#ifdef VALUE_GENCTRL5
    _GCLK_INIT_GENERATOR(5, VALUE_GENCTRL5, dpll_sourced);
#endif
#ifdef VALUE_GENCTRL6
    _GCLK_INIT_GENERATOR(6, VALUE_GENCTRL6, dpll_sourced);
#endif
#ifdef VALUE_GENCTRL7
    _GCLK_INIT_GENERATOR(7, VALUE_GENCTRL7, dpll_sourced);
#endif
#ifdef VALUE_GENCTRL8
    _GCLK_INIT_GENERATOR(8, VALUE_GENCTRL8, dpll_sourced);
#endif
}

/**
 * \brief Enable one peripheral channel of the GCLK and wait until it runs.
 */
static void _gclk_enable_channel(uint32_t address, uint32_t value)
{
    _REG32(address) = value;
    while (GCLK_PCHCTRL_CHEN_Msk != (_REG32(address) & GCLK_PCHCTRL_CHEN_Msk)) {
        /* Wait until the peripheral channel is enabled */
    }
}

/**
 * \brief Initialize the fractional digital PLL (FDPLL96M).
 */
static void _oscctrl_init_dpll(void)
{
    // If the DPLL is not enabled, keep its reset state (disabled).
    if (OSCCTRL_DPLLCTRLA_ENABLE_Msk != (VALUE_DPLLCTRLA & OSCCTRL_DPLLCTRLA_ENABLE_Msk)) {
        return;
    }

    // GCLK reference input (GCLK_DPLL).
    if (OSCCTRL_DPLLCTRLB_REFCLK_GCLK == (VALUE_DPLLCTRLB & OSCCTRL_DPLLCTRLB_REFCLK_Msk)) {
        _gclk_enable_channel(ADDRESS_PCHCTRL_FDPLL, VALUE_PCHCTRL_FDPLL);
    }
    // Optional 32 kHz clock for the DPLL lock timer (GCLK_DPLL_32K).
    if (GCLK_PCHCTRL_CHEN_Msk == (VALUE_PCHCTRL_FDPLL32K & GCLK_PCHCTRL_CHEN_Msk)) {
        _gclk_enable_channel(ADDRESS_PCHCTRL_FDPLL32K, VALUE_PCHCTRL_FDPLL32K);
    }

    OSCCTRL_REGS->OSCCTRL_DPLLRATIO = VALUE_DPLLRATIO;
    while (OSCCTRL_REGS->OSCCTRL_DPLLSYNCBUSY & OSCCTRL_DPLLSYNCBUSY_DPLLRATIO_Msk) {
        /* Wait until the ratio is synchronized */
    }
    OSCCTRL_REGS->OSCCTRL_DPLLCTRLB = VALUE_DPLLCTRLB;
    OSCCTRL_REGS->OSCCTRL_DPLLPRESC = (uint8_t)(VALUE_DPLLPRESC & OSCCTRL_DPLLPRESC_PRESC_Msk);
    while (OSCCTRL_REGS->OSCCTRL_DPLLSYNCBUSY & OSCCTRL_DPLLSYNCBUSY_DPLLPRESC_Msk) {
        /* Wait until the prescaler is synchronized */
    }

    // Enable the DPLL (always running while locking) and wait for lock.
    OSCCTRL_REGS->OSCCTRL_DPLLCTRLA = (uint8_t)(VALUE_DPLLCTRLA & ~OSCCTRL_DPLLCTRLA_ONDEMAND_Msk);
    while (OSCCTRL_REGS->OSCCTRL_DPLLSYNCBUSY & OSCCTRL_DPLLSYNCBUSY_ENABLE_Msk) {
        /* Wait until the enable bit is synchronized */
    }
    while ((OSCCTRL_DPLLSTATUS_LOCK_Msk | OSCCTRL_DPLLSTATUS_CLKRDY_Msk) !=
           (OSCCTRL_REGS->OSCCTRL_DPLLSTATUS & (OSCCTRL_DPLLSTATUS_LOCK_Msk | OSCCTRL_DPLLSTATUS_CLKRDY_Msk))) {
        /* Wait until the DPLL is locked and its output is ready */
    }

    // Switch to on-demand operation if requested.
    if (OSCCTRL_DPLLCTRLA_ONDEMAND_Msk == (VALUE_DPLLCTRLA & OSCCTRL_DPLLCTRLA_ONDEMAND_Msk)) {
        OSCCTRL_REGS->OSCCTRL_DPLLCTRLA |= OSCCTRL_DPLLCTRLA_ONDEMAND_Msk;
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

    // Wait states and performance level first, before any frequency increase.
    _nvmctrl_set_wait_states();
    _pm_set_performance_level();
    _mclk_init();

    // Clock sources.
    _osc32kctrl_init_sources();
    _oscctrl_init_sources();

    // Generators that do not depend on the DPLL (DPLL reference included).
    _gclk_init_generators(0);
    _oscctrl_init_dpll();
    // Generators fed by the DPLL.
    _gclk_init_generators(1);

    // Main clock (GCLK0) last: the CPU switches to the final frequency here.
    _gclk_write_generator(0, VALUE_GENCTRL0 | GCLK_GENCTRL_GENEN_Msk);

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
     * FOSC_KHZ_VALUE is generated from the JSON top-level "clock" value
     * (48000 kHz for SAM C2x/L21/R3x and 32000 kHz for SAM L22 by default).
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
