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
 * XMC14xx clock system (Reference Manual, SCU "Clock Control"):
 *
 *   DCLK = DCO1 (48 MHz) x 2 = 96 MHz, or OSC_HP (4-20 MHz crystal /
 *                    4-48 MHz external clock) x 2 (CLKCR1.DCLKSEL)
 *   MCLK (CPU, bus)  = DCLK / (2 x (IDIV + FDIV / 1024))
 *   PCLK (CCU4/CCU8/POSIF/MATH/BCCU) = MCLK or 2 x MCLK (CLKCR.PCLKSEL)
 *
 * Default configuration (def file): IDIV = 1, FDIV = 0, PCLKSEL = 1
 *   -> MCLK = 48 MHz, PCLK = 96 MHz from the internal DCO1 (datasheet maximum).
 *
 * The startup software (SSW) enters the application with MCLK = 48 MHz
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

#define XMC_FDIV_BITS     (10UL)
#define XMC_FDIV_MASK     ((1UL << XMC_FDIV_BITS) - 1UL)

/* Configured divider as one fixed point number: IDIV.FDIV */
#define CFG_IDIV          ((VALUE_SCU_CLKCR & SCU_CLK_CLKCR_IDIV_Msk) >> SCU_CLK_CLKCR_IDIV_Pos)
#define CFG_FDIV          (((VALUE_SCU_CLKCR & SCU_CLK_CLKCR_FDIV_Msk) >> SCU_CLK_CLKCR_FDIV_Pos) | \
                           ((VALUE_SCU_CLKCR1 & SCU_CLK_CLKCR1_FDIV_Msk) << 8))
#define CFG_DIVIDER       ((0UL == CFG_IDIV) ? (1UL << XMC_FDIV_BITS) : \
                           ((CFG_IDIV << XMC_FDIV_BITS) | CFG_FDIV))

/* CLKCR bits written together with the divider */
#define CLKCR_SEL_Msk     (SCU_CLK_CLKCR_PCLKSEL_Msk | SCU_CLK_CLKCR_RTCCLKSEL_Msk | \
                           SCU_CLK_CLKCR_CNTADJ_Msk)

/* OSC_HP / DCLK configuration (SCU_ANAOSCHPCTRL, SCU_CLKCR1) */
#define OSCHP_CFG_Msk     (SCU_ANALOG_ANAOSCHPCTRL_MODE_Msk | SCU_ANALOG_ANAOSCHPCTRL_GAINSEL_Msk | \
                           SCU_ANALOG_ANAOSCHPCTRL_HYSCTRL_Msk | SCU_ANALOG_ANAOSCHPCTRL_SHBY_Msk)
#define OSCHP_ENABLED     (SCU_ANALOG_ANAOSCHPCTRL_MODE_Msk != (VALUE_SCU_ANAOSCHPCTRL & SCU_ANALOG_ANAOSCHPCTRL_MODE_Msk))
#define OSCHP_DIRECT_IN   ((1UL << SCU_ANALOG_ANAOSCHPCTRL_MODE_Pos) == (VALUE_SCU_ANAOSCHPCTRL & SCU_ANALOG_ANAOSCHPCTRL_MODE_Msk))
#define DCLK_FROM_OSCHP   (0UL != (VALUE_SCU_CLKCR1 & SCU_CLK_CLKCR1_DCLKSEL_Msk))
#define RTC_FROM_OSCLP    ((5UL << SCU_CLK_CLKCR_RTCCLKSEL_Pos) == (VALUE_SCU_CLKCR & SCU_CLK_CLKCR_RTCCLKSEL_Msk))

/* PCLK = 2 x MCLK must not be used with an external clock in direct input mode
   (CLKCR.PCLKSEL description): PCLK = MCLK is forced in that case. */
#define CLKCR_SEL_VALUE   ((DCLK_FROM_OSCHP && OSCHP_DIRECT_IN) ? \
                           (VALUE_SCU_CLKCR & ~SCU_CLK_CLKCR_PCLKSEL_Msk) : VALUE_SCU_CLKCR)

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
    // FDIV[9:8] is in CLKCR1.
    fdiv |= (SCU_CLK->CLKCR1 & SCU_CLK_CLKCR1_FDIV_Msk) << 8;
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
    // FDIV[9:8] goes to CLKCR1, it is applied with the next CLKCR write.
    SCU_CLK->CLKCR1 = (SCU_CLK->CLKCR1 & ~SCU_CLK_CLKCR1_FDIV_Msk) | ((fdiv >> 8) & SCU_CLK_CLKCR1_FDIV_Msk);
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
 * \brief Busy wait, at least 3 MCLK cycles per loop.
 */
static void _delay_loops(uint32_t loops)
{
    volatile uint32_t i;

    for (i = 0; i < loops; i++) {
        __NOP();
    }
}

/**
 * \brief Configure OSC_HP and select the DCLK source (DCO1 or OSC_HP).
 *
 * Sequence of the vendor SystemInit / Reference Manual 14.5.2.7 with the
 * corrections of errata OSC_CM.D001 (MODE 00B = crystal mode, GAINSEL/HYSCTRL
 * meaning) and SCU_CM.023 (XOWD restart: disable/enable with one DCO2 cycle in
 * between). The XTAL oscillator watchdog is restarted until it reports a
 * running clock (no loss of external clock, SRRAW1.LOECI = 0).
 */
static void _dclk_init(void)
{
    if (OSCHP_ENABLED) {
        SCU_ANALOG->ANAOSCHPCTRL = (uint16_t)((SCU_ANALOG->ANAOSCHPCTRL & ~OSCHP_CFG_Msk) |
                                              (VALUE_SCU_ANAOSCHPCTRL & OSCHP_CFG_Msk));
        if (DCLK_FROM_OSCHP) {
            do {
                // Clear the loss of external clock flag before restarting the detection.
                SCU_INTERRUPT->SRCLR1 = SCU_INTERRUPT_SRCLR1_LOECI_Msk;
                SCU_CLK->OSCCSR &= ~SCU_CLK_OSCCSR_XOWDEN_Msk;
                // At least one DCO2 (32 kHz) cycle, 3 cycles per loop at 48 MHz max.
                _delay_loops(538UL);
                SCU_CLK->OSCCSR |= SCU_CLK_OSCCSR_XOWDEN_Msk | SCU_CLK_OSCCSR_XOWDRES_Msk;
                while (SCU_CLK->OSCCSR & SCU_CLK_OSCCSR_XOWDRES_Msk) {
                    /* XOWDRES is cleared by hardware after the restart */
                }
                // At least 5 DCO2 cycles for the update of the XOWD result.
                _delay_loops(2685UL);
            } while (SCU_INTERRUPT->SRRAW1 & SCU_INTERRUPT_SRRAW1_LOECI_Msk);
        }
    }

    // DCLK source and ADC converter clock (FDIV[9:8] is written with the divider).
    SCU_CLK->CLKCR1 = (SCU_CLK->CLKCR1 & ~(SCU_CLK_CLKCR1_DCLKSEL_Msk | SCU_CLK_CLKCR1_ADCCLKSEL_Msk)) |
                      (VALUE_SCU_CLKCR1 & (SCU_CLK_CLKCR1_DCLKSEL_Msk | SCU_CLK_CLKCR1_ADCCLKSEL_Msk));
    _scu_wait_vddc();

    if (!OSCHP_ENABLED) {
        // OSC_HP not used: oscillator and shaper powered down (reset state).
        SCU_ANALOG->ANAOSCHPCTRL |= (uint16_t)SCU_ANALOG_ANAOSCHPCTRL_MODE_Msk;
    }

    if (RTC_FROM_OSCLP) {
        // RTC clock from the 32.768 kHz crystal: enable OSC_LP. The RTC counts as soon as
        // the crystal oscillates (start-up time up to several 100 ms, not waited for here).
        SCU_ANALOG->ANAOSCLPCTRL &= (uint16_t)~SCU_ANALOG_ANAOSCLPCTRL_MODE_Msk;
    }
}

/**
 * Initialize the system
 *
 * \brief  Setup the microcontroller system.
 *         Initialize the System and update the SystemCoreClock variable.
 */
void SystemInit(void)
{
    /* Enable the flash prefetch unit (bypassed after reset). Flash wait states are
       generated automatically by the NVM. */
    SCU_GENERAL->PFUCR &= ~SCU_GENERAL_PFUCR_PFUBYP_Msk;
    // Open the bit protection of the clock control bits.
    SCU_GENERAL->PASSWD = SCU_PASSWD_PROTECTION_OFF;

    // OSC_HP and DCLK source.
    _dclk_init();
    _mclk_init(CLKCR_SEL_VALUE);

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
