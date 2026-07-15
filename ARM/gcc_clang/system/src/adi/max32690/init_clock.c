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

extern void ( *const __isr_vector[] )( void );

static int MXC_ICC_Ready( mxc_icc_reva_regs_t *icc )
{
    return ( icc->ctrl & MXC_F_ICC_REVA_CTRL_RDY );
}

void MXC_ICC_RevA_Enable( mxc_icc_reva_regs_t *icc )
{
    // Invalidate cache and wait until ready
    icc->ctrl &= ~MXC_F_ICC_REVA_CTRL_EN;
    icc->invalidate = 1;

    while ( !( MXC_ICC_Ready( icc ))) {}

    // Enable Cache
    icc->ctrl |= MXC_F_ICC_REVA_CTRL_EN;
    while ( !( MXC_ICC_Ready( icc ))) {}
}

void MXC_ICC_RevA_Disable( mxc_icc_reva_regs_t *icc )
{
    // Disable Cache
    icc->ctrl &= ~MXC_F_ICC_REVA_CTRL_EN;
}

void MXC_ICC_Enable( mxc_icc_regs_t *icc )
{
    MXC_ICC_RevA_Enable(( mxc_icc_reva_regs_t * )icc );
}

void MXC_ICC_Disable( mxc_icc_regs_t *icc )
{
    MXC_ICC_RevA_Disable(( mxc_icc_reva_regs_t * )icc );
}

void Handle_System_Clock( uint8_t clock_enable_bit, uint8_t clock_ready_bit ) {
    uint16_t timeout = 100000;

    // Enable requested clock.
    MXC_GCR->clkctrl |= 1 << clock_enable_bit;

    // Wait while clock is enabled.
    while ( !( MXC_GCR->clkctrl & ( 1 << clock_ready_bit ))) {
        timeout--;
        if ( !timeout )
            // Fallback to internal IBRO (always enabled).
            return;
    }
}

void SystemInit(void)
{
    uint16_t timeout = 100000;

    /* Configure the interrupt controller to use the application vector table in
     * the application space */
    SCB->VTOR = (uint32_t)__isr_vector;

    *( volatile uint32_t * )0x40000c00 = 1;           // Enable test mode
    *( volatile uint32_t * )0x4000040c = ( 1 << 6 );  // Disable cache read buffer
    *( volatile uint32_t * )0x40000c00 = 0;           // Disable test mode

    // Invalidate cache and enable cache again after reset.
    MXC_ICC_Enable( MXC_ICC0 );
    MXC_ICC_Disable( MXC_ICC0 );
    MXC_ICC_Enable( MXC_ICC0 );

    /* Enable FPU on Cortex-M4, which occupies coprocessor slots 10 & 11
     * Grant full access, per "Table B3-24 CPACR bit assignments".
     * DDI0403D "ARMv7-M Architecture Reference Manual" */
    SCB->CPACR |= SCB_CPACR_CP10_Msk | SCB_CPACR_CP11_Msk;
    __DSB();
    __ISB();

    // Enablke all requested clocks.
    // Internal Secondary Oscillator.
    if ( VALUE_GCR_CLKCTRL & MXC_F_GCR_CLKCTRL_ISO_EN )
        Handle_System_Clock( MXC_F_GCR_CLKCTRL_ISO_EN_POS, MXC_F_GCR_CLKCTRL_ISO_RDY_POS );

    // External RF Oscillator.
    if ( VALUE_GCR_CLKCTRL & MXC_F_GCR_CLKCTRL_ERFO_EN )
        Handle_System_Clock( MXC_F_GCR_CLKCTRL_ERFO_EN_POS, MXC_F_GCR_CLKCTRL_ERFO_RDY_POS );

    // Internal Primary Oscillator.
    if ( VALUE_GCR_CLKCTRL & MXC_F_GCR_CLKCTRL_IPO_EN )
        Handle_System_Clock( MXC_F_GCR_CLKCTRL_IPO_EN_POS, MXC_F_GCR_CLKCTRL_IPO_RDY_POS );

    // External RTC Oscillator.
    if ( VALUE_GCR_CLKCTRL & MXC_F_GCR_CLKCTRL_ERTCO_EN )
        Handle_System_Clock( MXC_F_GCR_CLKCTRL_ERTCO_EN_POS, MXC_F_GCR_CLKCTRL_ERTCO_RDY_POS );

    // Set requested SYSCLK divider.
    MXC_GCR->clkctrl &= ~MXC_F_GCR_CLKCTRL_SYSCLK_DIV;
    MXC_GCR->clkctrl |= VALUE_GCR_CLKCTRL & MXC_F_GCR_CLKCTRL_SYSCLK_DIV;

    // Set requested SYSCLK source.
    MXC_GCR->clkctrl &= ~MXC_F_GCR_CLKCTRL_SYSCLK_SEL;
    MXC_GCR->clkctrl |= VALUE_GCR_CLKCTRL & MXC_F_GCR_CLKCTRL_SYSCLK_SEL;

    // Wait until SYSCLK switch is complete.
    while ( !( MXC_GCR->clkctrl & MXC_F_GCR_CLKCTRL_SYSCLK_RDY )) {
        timeout--;
        if ( !timeout )
            // Fallback to internal IBRO (always enabled).
            return;
    }
}