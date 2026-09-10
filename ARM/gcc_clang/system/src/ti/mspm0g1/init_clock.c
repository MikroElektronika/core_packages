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

static inline void clockUpdateRegister(volatile uint32_t *reg,
                                       uint32_t value,
                                       uint32_t mask)
{
    uint32_t tmp = *reg;
    tmp = (tmp & ~mask) | (value & mask);
    *reg = tmp;
}

static void clockSelectSYSOSC32MHz(void)
{
    SYSCTL->SOCLOCK.SYSOSCCFG &= ~SYSCTL_SYSOSCCFG_DISABLE_MASK;
    clockUpdateRegister(&SYSCTL->SOCLOCK.SYSOSCCFG,
                        SYSCTL_SYSOSCCFG_FREQ_SYSOSCBASE,
                        SYSCTL_SYSOSCCFG_FREQ_MASK);

    clockUpdateRegister(&SYSCTL->SOCLOCK.MCLKCFG,
                        0U,
                        SYSCTL_MCLKCFG_USEHSCLK_MASK |
                        SYSCTL_MCLKCFG_USELFCLK_MASK |
                        SYSCTL_MCLKCFG_MDIV_MASK);

#if defined(SYSCTL_CLKSTATUS_HSCLKMUX_MASK) && defined(SYSCTL_CLKSTATUS_HSCLKMUX_SYSOSC)
    while ((SYSCTL->SOCLOCK.CLKSTATUS & SYSCTL_CLKSTATUS_HSCLKMUX_MASK) !=
           SYSCTL_CLKSTATUS_HSCLKMUX_SYSOSC) {
        ;
    }
#endif

#if defined(SYSCTL_CLKSTATUS_CURMCLKSEL_MASK) && defined(SYSCTL_CLKSTATUS_CURMCLKSEL_SYSOSC)
    while ((SYSCTL->SOCLOCK.CLKSTATUS & SYSCTL_CLKSTATUS_CURMCLKSEL_MASK) !=
           SYSCTL_CLKSTATUS_CURMCLKSEL_SYSOSC) {
        ;
    }
#endif
}

void clockConfig(void)
{
    uint32_t pllParam0;
    uint32_t pllParam1;
    uint32_t cpussCtl;

    /*
     * Configure from a known 32 MHz SYSOSC state first. This is also required
     * before accessing the FACTORY region on devices affected by FLASH_ERR_01.
     */
    clockSelectSYSOSC32MHz();

    /*
     * Cache the 16-32 MHz SYSPLL factory trim values while MCLK is <= 32 MHz.
     * Disable instruction cache around FACTORY-region access per CPU_ERR_01.
     */
    cpussCtl = CPUSS->CTL;
    CPUSS->CTL = (cpussCtl & ~CPUSS_CTL_ICACHE_MASK) |
                 CPUSS_CTL_PREFETCH_ENABLE |
                 CPUSS_CTL_LITEN_ENABLE;
    __DSB();
    __ISB();

    pllParam0 = FACTORYREGION->PLLSTARTUP0_16_32MHZ;
    pllParam1 = FACTORYREGION->PLLSTARTUP1_16_32MHZ;

    CPUSS->CTL = cpussCtl;
    __DSB();
    __ISB();

    /* 80 MHz MCLK requires two flash wait states and ULPCLK = MCLK / 2. */
    clockUpdateRegister(&SYSCTL->SOCLOCK.MCLKCFG,
                        SYSCTL_MCLKCFG_FLASHWAIT_WAIT2 |
                        SYSCTL_MCLKCFG_UDIV_DIVIDE2,
                        SYSCTL_MCLKCFG_FLASHWAIT_MASK |
                        SYSCTL_MCLKCFG_UDIV_MASK);

    /* Disable SYSPLL before changing its retained configuration. */
    SYSCTL->SOCLOCK.HSCLKEN &= ~SYSCTL_HSCLKEN_SYSPLLEN_MASK;
    while ((SYSCTL->SOCLOCK.CLKSTATUS & SYSCTL_CLKSTATUS_SYSPLLOFF_MASK) !=
           SYSCTL_CLKSTATUS_SYSPLLOFF_TRUE) {
        ;
    }

    /* SYSPLL reference = 32 MHz SYSOSC, PDIV = /2. */
    clockUpdateRegister(&SYSCTL->SOCLOCK.SYSPLLCFG0,
                        SYSCTL_SYSPLLCFG0_SYSPLLREF_SYSOSC,
                        SYSCTL_SYSPLLCFG0_SYSPLLREF_MASK);
    clockUpdateRegister(&SYSCTL->SOCLOCK.SYSPLLCFG1,
                        SYSCTL_SYSPLLCFG1_PDIV_REFDIV2,
                        SYSCTL_SYSPLLCFG1_PDIV_MASK);

    SYSCTL->SOCLOCK.SYSPLLPARAM0 = pllParam0;
    SYSCTL->SOCLOCK.SYSPLLPARAM1 = pllParam1;

    /*
     * TI SysConfig 80 MHz setting:
     *   QDIV = 9, RDIVCLK2X = 3, RDIVCLK1 = 1,
     *   CLK2X/CLK1 enabled, and CLK2X selected for MCLK.
     */
    clockUpdateRegister(&SYSCTL->SOCLOCK.SYSPLLCFG1,
                        (9U << SYSCTL_SYSPLLCFG1_QDIV_OFS),
                        SYSCTL_SYSPLLCFG1_QDIV_MASK);

    clockUpdateRegister(&SYSCTL->SOCLOCK.SYSPLLCFG0,
                        (3U << SYSCTL_SYSPLLCFG0_RDIVCLK2X_OFS) |
                        (1U << SYSCTL_SYSPLLCFG0_RDIVCLK1_OFS) |
                        SYSCTL_SYSPLLCFG0_ENABLECLK2X_ENABLE |
                        SYSCTL_SYSPLLCFG0_ENABLECLK1_ENABLE |
                        SYSCTL_SYSPLLCFG0_MCLK2XVCO_ENABLE,
                        SYSCTL_SYSPLLCFG0_RDIVCLK2X_MASK |
                        SYSCTL_SYSPLLCFG0_RDIVCLK1_MASK |
                        SYSCTL_SYSPLLCFG0_RDIVCLK0_MASK |
                        SYSCTL_SYSPLLCFG0_ENABLECLK2X_MASK |
                        SYSCTL_SYSPLLCFG0_ENABLECLK1_MASK |
                        SYSCTL_SYSPLLCFG0_ENABLECLK0_MASK |
                        SYSCTL_SYSPLLCFG0_MCLK2XVCO_MASK);

    SYSCTL->SOCLOCK.HSCLKEN |= SYSCTL_HSCLKEN_SYSPLLEN_ENABLE;
    while ((SYSCTL->SOCLOCK.CLKSTATUS & SYSCTL_CLKSTATUS_SYSPLLGOOD_MASK) !=
           SYSCTL_CLKSTATUS_SYSPLLGOOD_TRUE) {
        ;
    }

    clockUpdateRegister(&SYSCTL->SOCLOCK.HSCLKCFG,
                        SYSCTL_HSCLKCFG_HSCLKSEL_SYSPLL,
                        SYSCTL_HSCLKCFG_HSCLKSEL_MASK);
    while ((SYSCTL->SOCLOCK.CLKSTATUS & SYSCTL_CLKSTATUS_HSCLKGOOD_MASK) !=
           SYSCTL_CLKSTATUS_HSCLKGOOD_TRUE) {
        ;
    }

    SYSCTL->SOCLOCK.MCLKCFG &= ~SYSCTL_MCLKCFG_USELFCLK_MASK;
    SYSCTL->SOCLOCK.MCLKCFG |= SYSCTL_MCLKCFG_USEHSCLK_ENABLE;
    while ((SYSCTL->SOCLOCK.CLKSTATUS & SYSCTL_CLKSTATUS_HSCLKMUX_MASK) !=
           SYSCTL_CLKSTATUS_HSCLKMUX_HSCLK) {
        ;
    }

    __DSB();
    __ISB();
}
