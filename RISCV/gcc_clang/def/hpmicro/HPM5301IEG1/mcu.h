/****************************************************************************
**
** Copyright (C) 2026 MikroElektronika d.o.o.
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
 * @file  mcu.h
 * @brief HPM5301 register definitions.
 *
 * Register, IRQ, pin-mux and CSR definitions come from the HPMicro SDK
 * (thirdparty/hpm5301, BSD-3-Clause), the same set hpm_soc.h provides
 * without the SDK interrupt and driver layers.
 */

#ifndef _MCU_H_
#define _MCU_H_

#include "hpm_soc_ip.h"
#include "hpm_soc_irq.h"
#include "hpm_soc_ip_feature.h"
#include "hpm_soc_feature.h"
#include "riscv/riscv_core.h"
#include "hpm_csr_regs.h"
#include "hpm_misc.h"
#include "hpm_otp_table.h"
#include "hpm_dmamux_src.h"
#include "hpm_trgmmux_src.h"
#include "hpm_iomux.h"
#include "hpm_pmic_iomux.h"

#ifdef __cplusplus
extern "C" {
#endif

/*!< System Clock Frequency (CPU0 clock) in Hz, set by SystemInit(). */
extern uint32_t SystemCoreClock;

/**
 * @brief Configure the clock tree from the MCU definition (called by the startup code).
 */
void SystemInit( void );

/**
 * @brief Update SystemCoreClock from the clock registers.
 */
void SystemCoreClockUpdate( void );

#ifdef __cplusplus
}
#endif

#endif // _MCU_H_
// ------------------------------------------------------------------------- END
