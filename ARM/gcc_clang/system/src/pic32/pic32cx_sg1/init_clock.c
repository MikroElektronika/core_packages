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
 * System clock frequency. The processor clock is the 48 MHz PLL (locked to
 * the 32 kHz clock domain) divided by PCR_PROC_CLK_CTRL (divide by 4 = 12 MHz
 * at chip startup). The configured value is taken from the NECTO generated
 * FOSC_KHZ_VALUE.
 */
#define __SYSTEM_CLOCK    (FOSC_KHZ_VALUE * 1000UL)

/* 32 kHz clock source selection bits of VBAT_CLK32_EN (bit 0 is a test bit). */
#define _VBAT_CLK32_CFG_Msk    (VBAT_CLK32_EN_EXT_32K_Msk | VBAT_CLK32_EN_C32KHZ_SRC_Msk | \
                                VBAT_CLK32_EN_XOSEL_Msk)

/* Processor clock divider (PCR_PROC_CLK_CTRL.DIV, bits 7:0): only 1, 3, 4, 16 and 48 are legal. */
#define _PROC_CLK_DIV          ((VALUE_PROC_CLK_CTRL) & 0xFFUL)
#if !((_PROC_CLK_DIV == 1) || (_PROC_CLK_DIV == 3) || (_PROC_CLK_DIV == 4) || \
      (_PROC_CLK_DIV == 16) || (_PROC_CLK_DIV == 48))
#error "PCR_PROC_CLK_CTRL: the processor clock divider must be 1, 3, 4, 16 or 48."
#endif

/*
 * Upper bound of the PLL lock polling loop. The PLL normally relocks within
 * a few milliseconds; the bound only keeps a missing 32 kHz reference from
 * stalling the startup forever (the PLL keeps running unlocked then).
 */
#define _PLL_LOCK_TIMEOUT      (0x00100000UL)

/**
 * \brief Disable the Watchdog Timer.
 *
 * The WDT is disabled after reset (WDT_CTRL = 0); it is only running here if
 * the Boot ROM or a previous application enabled it. WDT_EN can be cleared at
 * any time. The WDT_STS status bit (write 1 to clear) is preserved.
 */
static void _wdt_disable(void)
{
    uint16_t ctrl = WDT_REGS->WDT_CTRL;

    if (ctrl & WDT_CTRL_WDT_EN_Msk) {
        WDT_REGS->WDT_CTRL = (uint16_t)(ctrl & ~(WDT_CTRL_WDT_EN_Msk | WDT_CTRL_WDT_STS_Msk));
    }
}

/**
 * \brief Wait until the 48 MHz PLL is locked to the 32 kHz clock domain.
 */
static void _pll_wait_lock(void)
{
    uint32_t timeout = _PLL_LOCK_TIMEOUT;

    while (!(PCR_REGS->PCR_OSC_ID & PCR_OSC_ID_PLL_LOCK_Msk) && timeout) {
        /* Wait for the PLL lock */
        timeout--;
    }
}

/**
 * \brief Select the source of the 32 kHz clock domain (and PLL reference).
 *
 * The register is VBAT powered, so it is only written when the configuration
 * differs. The hardware keeps the always-on silicon oscillator while no clock
 * is detected on the crystal pins / the 32KHZ_IN pin.
 */
static void _clk32_init(void)
{
    uint32_t data = VBAT_REGS->VBAT_CLK32_EN;

    if ((data & _VBAT_CLK32_CFG_Msk) != (VALUE_VBAT_CLK32_EN & _VBAT_CLK32_CFG_Msk)) {
        data &= ~_VBAT_CLK32_CFG_Msk;
        data |= (VALUE_VBAT_CLK32_EN & _VBAT_CLK32_CFG_Msk);
        VBAT_REGS->VBAT_CLK32_EN = data;
    }
}

/**
 * \brief Set the processor clock divider (48 MHz PLL / PROC_DIV).
 *
 * The code executes from SRAM, so there are no flash wait states to adjust.
 */
static void _proc_clk_init(void)
{
    PCR_REGS->PCR_PROC_CLK_CTRL = (PCR_REGS->PCR_PROC_CLK_CTRL & ~PCR_PROC_CLK_CTRL_DIV_Msk) |
                                  _PROC_CLK_DIV;
    __DSB();
    __ISB();
}

/**
 * \brief Set the slow clock divider (SLOW_CLK = 48 MHz / n, 0 = off).
 */
static void _slow_clk_init(void)
{
    PCR_REGS->PCR_SLOW_CLK_CTRL = (PCR_REGS->PCR_SLOW_CLK_CTRL & ~PCR_SLOW_CLK_CTRL_DIV_Msk) |
                                  (VALUE_SLOW_CLK_CTRL & PCR_SLOW_CLK_CTRL_DIV_Msk);
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

    // Disable Watchdog Timer (disabled after reset, unless enabled before).
    _wdt_disable();

    // Select the 32 kHz clock domain source the PLL locks to.
    _clk32_init();

    // Let the PLL (re)lock before the processor clock is raised.
    _pll_wait_lock();

    _proc_clk_init();
    _slow_clk_init();

    // The configured clock is now active.
    SystemCoreClockUpdate();

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
     * For the default configuration it is 48000 kHz
     * (silicon oscillator 32 kHz -> 48 MHz PLL -> PROC_CLK_CTRL /1).
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
