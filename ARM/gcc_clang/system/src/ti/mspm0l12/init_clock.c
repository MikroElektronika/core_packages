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

void clockConfig(void)
{
    uint32_t mclkSourceMask = SYSCTL_MCLKCFG_MDIV_MASK;

#if defined(SYSCTL_MCLKCFG_USEHSCLK_MASK)
    mclkSourceMask |= SYSCTL_MCLKCFG_USEHSCLK_MASK;
#endif
#if defined(SYSCTL_MCLKCFG_USELFCLK_MASK)
    mclkSourceMask |= SYSCTL_MCLKCFG_USELFCLK_MASK;
#endif

    /*
     * MSPM0C1/L-series devices use the calibrated 32 MHz SYSOSC as MCLK.
     * Clock configuration may survive lower-level resets, so explicitly
     * restore SYSOSC and remove any MCLK division/source selection.
     */
    SYSCTL->SOCLOCK.SYSOSCCFG &= ~SYSCTL_SYSOSCCFG_DISABLE_MASK;
    clockUpdateRegister(&SYSCTL->SOCLOCK.SYSOSCCFG,
                        SYSCTL_SYSOSCCFG_FREQ_SYSOSCBASE,
                        SYSCTL_SYSOSCCFG_FREQ_MASK);

    clockUpdateRegister(&SYSCTL->SOCLOCK.MCLKCFG,
                        0U,
                        mclkSourceMask);

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

#if defined(SYSCTL_MCLKCFG_UDIV_MASK) && defined(SYSCTL_MCLKCFG_UDIV_NODIVIDE)
    clockUpdateRegister(&SYSCTL->SOCLOCK.MCLKCFG,
                        SYSCTL_MCLKCFG_UDIV_NODIVIDE,
                        SYSCTL_MCLKCFG_UDIV_MASK);
#endif

#if defined(SYSCTL_MCLKCFG_FLASHWAIT_MASK) && defined(SYSCTL_MCLKCFG_FLASHWAIT_WAIT0)
    clockUpdateRegister(&SYSCTL->SOCLOCK.MCLKCFG,
                        SYSCTL_MCLKCFG_FLASHWAIT_WAIT0,
                        SYSCTL_MCLKCFG_FLASHWAIT_MASK);
#endif

    __DSB();
    __ISB();
}
