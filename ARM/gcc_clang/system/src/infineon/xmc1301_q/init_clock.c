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
 * XMC13xx clock system (Reference Manual, SCU "Clock Control"):
 *
 *   DCLK = DCO1 = 64 MHz (internal oscillator, no external clock input)
 *   MCLK (CPU, bus)  = DCLK / (2 x (IDIV + FDIV / 256))
 *   PCLK (CCU4/CCU8/POSIF/MATH/BCCU) = MCLK or 2 x MCLK (CLKCR.PCLKSEL)
 *
 * Default configuration (def file): IDIV = 1, FDIV = 0, PCLKSEL = 1
 *   -> MCLK = 32 MHz, PCLK = 64 MHz from the internal DCO1 (datasheet maximum).
 *
 * The startup software (SSW) enters the application with MCLK = 32 MHz
 * (CLK_VAL1 = 0 in the boot header -> IDIV = 1, PCLK = MCLK). The divider is then
 * changed in steps of at most 4x, waiting for CLKCR.VDDC2LOW = 0 after every
 * step: the EVR must not see load changes bigger than 4x the base load
 * ("VDDC Response During Load Change").
 *
 * The watchdog (WDT) is clock gated and disabled after reset, it is not touched.
 */

/** System clock frequency, generated from the top-level "clock" value (MHz). */
#define __SYSTEM_CLOCK    ((uint32_t)(FOSC_KHZ_VALUE * 1000UL))

/* SCU_PASSWD values: disable / enable the bit protection scheme of the
   protected clock bits (IDIV, FDIV, PCLKSEL, RTCCLKSEL, ...). */
#define SCU_PASSWD_PROTECTION_OFF    (0x000000C0UL)
#define SCU_PASSWD_PROTECTION_ON     (0x000000C3UL)

#define XMC_FDIV_BITS     (8UL)
#define XMC_FDIV_MASK     ((1UL << XMC_FDIV_BITS) - 1UL)

/* Configured divider as one fixed point number: IDIV.FDIV */
#define CFG_IDIV          ((VALUE_SCU_CLKCR & SCU_CLK_CLKCR_IDIV_Msk) >> SCU_CLK_CLKCR_IDIV_Pos)
#define CFG_FDIV          ((VALUE_SCU_CLKCR & SCU_CLK_CLKCR_FDIV_Msk) >> SCU_CLK_CLKCR_FDIV_Pos)
#define CFG_DIVIDER       ((0UL == CFG_IDIV) ? (1UL << XMC_FDIV_BITS) : \
                           ((CFG_IDIV << XMC_FDIV_BITS) | CFG_FDIV))

/* CLKCR bits written together with the divider */
#define CLKCR_SEL_Msk     (SCU_CLK_CLKCR_PCLKSEL_Msk | SCU_CLK_CLKCR_RTCCLKSEL_Msk | \
                           SCU_CLK_CLKCR_CNTADJ_Msk)

uint32_t SystemCoreClock = __SYSTEM_CLOCK;  /*!< System Clock Frequency (Core Clock) */

void SystemCoreClockUpdate(void);

/**
 * \brief Wait until the core voltage has settled after a load change.
 */
static void _scu_wait_vddc(void)
{
    while (SCU_CLK->CLKCR & SCU_CLK_CLKCR_VDDC2LOW_Msk) {
        /* VDDC too low: EVR is regulating, clock may be blanked */
    }
}

/**
 * \brief Current MCLK divider as IDIV.FDIV fixed point value.
 */
static uint32_t _mclk_divider_get(void)
{
    uint32_t clkcr = SCU_CLK->CLKCR;
    uint32_t idiv = (clkcr & SCU_CLK_CLKCR_IDIV_Msk) >> SCU_CLK_CLKCR_IDIV_Pos;
    uint32_t fdiv = (clkcr & SCU_CLK_CLKCR_FDIV_Msk) >> SCU_CLK_CLKCR_FDIV_Pos;

    if (0UL == idiv) {
        // Divider bypassed: same MCLK as IDIV = 1, FDIV = 0.
        return 1UL << XMC_FDIV_BITS;
    }
    return (idiv << XMC_FDIV_BITS) | fdiv;
}

/**
 * \brief Program an MCLK divider (IDIV.FDIV) and wait for VDDC to settle.
 */
static void _mclk_divider_set(uint32_t divider, uint32_t sel)
{
    uint32_t idiv = divider >> XMC_FDIV_BITS;
    uint32_t fdiv = divider & XMC_FDIV_MASK;

    // IDIV/FDIV/PCLKSEL/RTCCLKSEL take effect when CLKCR is written.
    SCU_CLK->CLKCR = (sel & CLKCR_SEL_Msk) |
                     ((idiv << SCU_CLK_CLKCR_IDIV_Pos) & SCU_CLK_CLKCR_IDIV_Msk) |
                     ((fdiv << SCU_CLK_CLKCR_FDIV_Pos) & SCU_CLK_CLKCR_FDIV_Msk);
    _scu_wait_vddc();
}

/**
 * \brief Move MCLK to the configured divider in steps of at most 4x.
 */
static void _mclk_init(uint32_t sel)
{
    uint32_t target = CFG_DIVIDER;
    uint32_t divider = _mclk_divider_get();

    // Frequency increase by more than 4x: divide the divider by 4 per step.
    while (divider > (target << 2)) {
        divider >>= 2;
        _mclk_divider_set(divider, sel);
    }
    // Frequency decrease by more than 4x: multiply the divider by 4 per step.
    while ((divider << 2) < target) {
        divider <<= 2;
        _mclk_divider_set(divider, sel);
    }
    _mclk_divider_set(target, sel);
}

/**
 * Initialize the system
 *
 * \brief  Setup the microcontroller system.
 *         Initialize the System and update the SystemCoreClock variable.
 */
void SystemInit(void)
{
    /* Fixed flash wait states (XMC1100/1200/1300 Data Sheet Addendum "Fixed Flash
       Wait States", as the vendor SystemInit): one wait state is valid for every
       MCLK up to 32 MHz. NVMCONF.WS first, then switch CONFIG1.FIXWS (no other
       CONFIG1 bit may be modified). */
    NVM->NVMCONF |= NVM_NVMCONF_WS_Msk;
    NVM->CONFIG1 |= NVM_CONFIG1_FIXWS_Msk;
    // Open the bit protection of the clock control bits.
    SCU_GENERAL->PASSWD = SCU_PASSWD_PROTECTION_OFF;

    _mclk_init(VALUE_SCU_CLKCR);

    // Close the bit protection again.
    SCU_GENERAL->PASSWD = SCU_PASSWD_PROTECTION_ON;

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
