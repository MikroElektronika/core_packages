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
 * @file  init_clock.c
 * @brief Mikroe HPM5301 clock initialization, system and delay implementation.
 *
 * The clock tree is configured from the `VALUE_<REGISTER>` macros generated
 * from the `config_registers` of the MCU definition (def/HPM5301IEG1.json):
 *
 *   IRC24M / XTAL24M -> PLL0 (24 MHz x MFI) -> CLK0..CLK2 (/1.0 .. /13.6)
 *                    -> PLL1 (24 MHz x MFI) -> CLK0..CLK3 (/1.0 .. /13.6)
 *   OSC0_CLK0 / PLLx_CLKy -> SYSCTL clock node mux -> node divider (/1 .. /256)
 *
 * Default configuration (internal IRC24M as PLL reference):
 *   PLL0 = 960 MHz, CPU0 = PLL0_CLK0 / 2 = 480 MHz, AHB = CPU0 / 3 = 160 MHz.
 *
 * Register write sequences follow the HPMicro SDK drivers
 * (hpm_pllctlv2_drv, hpm_sysctl_drv, hpm_pcfg_drv; BSD-3-Clause).
 */

#include "hpm_soc_ip.h"
#include "core_header.h"
#include "delays.h"

/* -------------------------------------------------------------- DEFAULTS */

/* Values used when the generated core header does not provide a register. */
#ifndef VALUE_PLLCTLV2_XTAL
#define VALUE_PLLCTLV2_XTAL          (0x00046500UL)
#endif
#ifndef VALUE_PLLCTLV2_PLL0_MFI
#define VALUE_PLLCTLV2_PLL0_MFI      (0x00000028UL)
#endif
#ifndef VALUE_PLLCTLV2_PLL0_CONFIG
#define VALUE_PLLCTLV2_PLL0_CONFIG   (0x00000001UL)
#endif
#ifndef VALUE_PLLCTLV2_PLL0_DIV0
#define VALUE_PLLCTLV2_PLL0_DIV0     (0x00000000UL)
#endif
#ifndef VALUE_PLLCTLV2_PLL0_DIV1
#define VALUE_PLLCTLV2_PLL0_DIV1     (0x00000003UL)
#endif
#ifndef VALUE_PLLCTLV2_PLL0_DIV2
#define VALUE_PLLCTLV2_PLL0_DIV2     (0x00000007UL)
#endif
#ifndef VALUE_PLLCTLV2_PLL1_MFI
#define VALUE_PLLCTLV2_PLL1_MFI      (0x00000020UL)
#endif
#ifndef VALUE_PLLCTLV2_PLL1_CONFIG
#define VALUE_PLLCTLV2_PLL1_CONFIG   (0x00000001UL)
#endif
#ifndef VALUE_PLLCTLV2_PLL1_DIV0
#define VALUE_PLLCTLV2_PLL1_DIV0     (0x00000000UL)
#endif
#ifndef VALUE_PLLCTLV2_PLL1_DIV1
#define VALUE_PLLCTLV2_PLL1_DIV1     (0x00000001UL)
#endif
#ifndef VALUE_PLLCTLV2_PLL1_DIV2
#define VALUE_PLLCTLV2_PLL1_DIV2     (0x00000003UL)
#endif
#ifndef VALUE_PLLCTLV2_PLL1_DIV3
#define VALUE_PLLCTLV2_PLL1_DIV3     (0x0000000AUL)
#endif
#ifndef VALUE_SYSCTL_CLOCK_CPU0
#define VALUE_SYSCTL_CLOCK_CPU0      (0x00020101UL)
#endif
#ifndef VALUE_SYSCTL_CLOCK_MCT0
#define VALUE_SYSCTL_CLOCK_MCT0      (0x00000000UL)
#endif
#ifndef VALUE_SYSCTL_CLOCK_TMR0
#define VALUE_SYSCTL_CLOCK_TMR0      (0x00000303UL)
#endif
#ifndef VALUE_SYSCTL_CLOCK_TMR1
#define VALUE_SYSCTL_CLOCK_TMR1      (0x00000303UL)
#endif
#ifndef VALUE_SYSCTL_CLOCK_I2C0
#define VALUE_SYSCTL_CLOCK_I2C0      (0x00000303UL)
#endif
#ifndef VALUE_SYSCTL_CLOCK_I2C1
#define VALUE_SYSCTL_CLOCK_I2C1      (0x00000303UL)
#endif
#ifndef VALUE_SYSCTL_CLOCK_I2C2
#define VALUE_SYSCTL_CLOCK_I2C2      (0x00000303UL)
#endif
#ifndef VALUE_SYSCTL_CLOCK_I2C3
#define VALUE_SYSCTL_CLOCK_I2C3      (0x00000303UL)
#endif
#ifndef VALUE_SYSCTL_CLOCK_SPI0
#define VALUE_SYSCTL_CLOCK_SPI0      (0x00000303UL)
#endif
#ifndef VALUE_SYSCTL_CLOCK_SPI1
#define VALUE_SYSCTL_CLOCK_SPI1      (0x00000303UL)
#endif
#ifndef VALUE_SYSCTL_CLOCK_SPI2
#define VALUE_SYSCTL_CLOCK_SPI2      (0x00000303UL)
#endif
#ifndef VALUE_SYSCTL_CLOCK_SPI3
#define VALUE_SYSCTL_CLOCK_SPI3      (0x00000303UL)
#endif
#ifndef VALUE_SYSCTL_CLOCK_URT0
#define VALUE_SYSCTL_CLOCK_URT0      (0x00000000UL)
#endif
#ifndef VALUE_SYSCTL_CLOCK_URT1
#define VALUE_SYSCTL_CLOCK_URT1      (0x00000000UL)
#endif
#ifndef VALUE_SYSCTL_CLOCK_URT2
#define VALUE_SYSCTL_CLOCK_URT2      (0x00000000UL)
#endif
#ifndef VALUE_SYSCTL_CLOCK_URT3
#define VALUE_SYSCTL_CLOCK_URT3      (0x00000000UL)
#endif
#ifndef VALUE_SYSCTL_CLOCK_ANA0
#define VALUE_SYSCTL_CLOCK_ANA0      (0x00000301UL)
#endif
#ifndef VALUE_SYSCTL_CLOCK_REF0
#define VALUE_SYSCTL_CLOCK_REF0      (0x00000000UL)
#endif
#ifndef VALUE_SYSCTL_CLOCK_REF1
#define VALUE_SYSCTL_CLOCK_REF1      (0x00000000UL)
#endif
#ifndef VALUE_SYSCTL_ADCCLK0
#define VALUE_SYSCTL_ADCCLK0         (0x00000100UL)
#endif
#ifndef VALUE_SYSCTL_GROUP0_LINK0
#define VALUE_SYSCTL_GROUP0_LINK0    (0x1FFE600FUL)
#endif
#ifndef VALUE_SYSCTL_GROUP0_LINK1
#define VALUE_SYSCTL_GROUP0_LINK1    (0x000E2060UL)
#endif
#ifndef VALUE_PCFG_DCDC_MODE
#define VALUE_PCFG_DCDC_MODE         (0x000004FBUL)
#endif

/* ------------------------------------------------------------- CONSTANTS */

/* Run the clock switching code from ILM: the flash (XPI0) clock is changed meanwhile. */
#define HPM_RAMFUNC __attribute__((section(".fast"), noinline))

#define HPM_REF_CLOCK_HZ            (24000000UL)
#define HPM_PLL_MFD_DEFAULT         (240000000UL)
#define HPM_PLL_MFI_MIN             (16UL)
#define HPM_PLL_MFI_MAX             (42UL)
#define HPM_PLL_REFSEL_XTAL         (0UL)
#define HPM_PLL_REFSEL_IRC24M       (1UL)

#define HPM_CLOCK_SOURCE_OSC0_CLK0  (0UL)
#define HPM_CLOCK_NODE_XPI0         (SYSCTL_CLOCK_CLK_TOP_XPI0)

/* Clock group links that must stay on: AHB, LMM0 (ILM/DLM), ROM and XPI0 (flash). */
#define HPM_GROUP0_LINK0_REQUIRED   ((1UL << (SYSCTL_RESOURCE_AHB0 - 256UL)) | \
                                     (1UL << (SYSCTL_RESOURCE_LMM0 - 256UL)) | \
                                     (1UL << (SYSCTL_RESOURCE_ROM0 - 256UL)))
#define HPM_GROUP0_LINK1_REQUIRED   (1UL << (SYSCTL_RESOURCE_XPI0 - 288UL))

/* Busy-wait limits, counted in loop iterations (CPU runs from 24 MHz meanwhile). */
#define HPM_XTAL_TIMEOUT            (2000000UL)
#define HPM_PLL_TIMEOUT             (2000000UL)
#define HPM_DCDC_TIMEOUT            (500000UL)

#define HPM_DCDC_MIN_MV             (600UL)
#define HPM_DCDC_MAX_MV             (1375UL)

#define HPM_CLOCK_MUX_DIV_MASK      (SYSCTL_CLOCK_MUX_MASK | SYSCTL_CLOCK_DIV_MASK)
#define HPM_CPU_CLOCK_MASK          (SYSCTL_CLOCK_CPU_MUX_MASK | SYSCTL_CLOCK_CPU_DIV_MASK | \
                                     SYSCTL_CLOCK_CPU_SUB0_DIV_MASK)

typedef struct
{
    uint8_t  node;
    uint32_t value;
} hpm_clock_node_cfg_t;

/* SYSCTL clock nodes configured from the MCU definition. XPI0 (flash) is kept as set by the boot ROM. */
static const hpm_clock_node_cfg_t hpm_clock_nodes[] = {
    { SYSCTL_CLOCK_CLK_TOP_MCT0, VALUE_SYSCTL_CLOCK_MCT0 },
    { SYSCTL_CLOCK_CLK_TOP_TMR0, VALUE_SYSCTL_CLOCK_TMR0 },
    { SYSCTL_CLOCK_CLK_TOP_TMR1, VALUE_SYSCTL_CLOCK_TMR1 },
    { SYSCTL_CLOCK_CLK_TOP_I2C0, VALUE_SYSCTL_CLOCK_I2C0 },
    { SYSCTL_CLOCK_CLK_TOP_I2C1, VALUE_SYSCTL_CLOCK_I2C1 },
    { SYSCTL_CLOCK_CLK_TOP_I2C2, VALUE_SYSCTL_CLOCK_I2C2 },
    { SYSCTL_CLOCK_CLK_TOP_I2C3, VALUE_SYSCTL_CLOCK_I2C3 },
    { SYSCTL_CLOCK_CLK_TOP_SPI0, VALUE_SYSCTL_CLOCK_SPI0 },
    { SYSCTL_CLOCK_CLK_TOP_SPI1, VALUE_SYSCTL_CLOCK_SPI1 },
    { SYSCTL_CLOCK_CLK_TOP_SPI2, VALUE_SYSCTL_CLOCK_SPI2 },
    { SYSCTL_CLOCK_CLK_TOP_SPI3, VALUE_SYSCTL_CLOCK_SPI3 },
    { SYSCTL_CLOCK_CLK_TOP_URT0, VALUE_SYSCTL_CLOCK_URT0 },
    { SYSCTL_CLOCK_CLK_TOP_URT1, VALUE_SYSCTL_CLOCK_URT1 },
    { SYSCTL_CLOCK_CLK_TOP_URT2, VALUE_SYSCTL_CLOCK_URT2 },
    { SYSCTL_CLOCK_CLK_TOP_URT3, VALUE_SYSCTL_CLOCK_URT3 },
    { SYSCTL_CLOCK_CLK_TOP_ANA0, VALUE_SYSCTL_CLOCK_ANA0 },
    { SYSCTL_CLOCK_CLK_TOP_REF0, VALUE_SYSCTL_CLOCK_REF0 },
    { SYSCTL_CLOCK_CLK_TOP_REF1, VALUE_SYSCTL_CLOCK_REF1 },
};

/* DCDC minimum duty tables from the HPMicro SDK (hpm_pcfg_drv.c), indexed by (mV - 600) / 25. */
static const uint8_t hpm_dcdc_min_duty_pre[] = {
    0x6A, 0x6A, 0x6A, 0x6C, 0x6C, 0x6C, 0x6C, 0x6C,
    0x6E, 0x6E, 0x6E, 0x6E, 0x70, 0x70, 0x70, 0x70,
    0x70, 0x72, 0x72, 0x72, 0x72, 0x74, 0x74, 0x74,
    0x74, 0x74, 0x76, 0x76, 0x76, 0x76, 0x78, 0x78
};
static const uint8_t hpm_dcdc_min_duty_after[] = {
    0x6E, 0x6E, 0x70, 0x70, 0x70, 0x70, 0x72, 0x72,
    0x72, 0x72, 0x74, 0x74, 0x74, 0x74, 0x76, 0x76,
    0x76, 0x78, 0x78, 0x78, 0x78, 0x7A, 0x7A, 0x7A,
    0x7A, 0x7C, 0x7C, 0x7C, 0x7E, 0x7E, 0x7E, 0x7E
};

/*!< System Clock Frequency (Core Clock), updated from the clock registers. */
uint32_t SystemCoreClock = FOSC_KHZ_VALUE * 1000UL;

/* ----------------------------------------------------- PRIVATE FUNCTIONS */

#ifdef CLANG_RISCV
void _exit()
{
    // No return function in clang-llvm.
    while ( 1 )
        ;
}
#endif

static inline uint64_t hpm_read_cycles( void )
{
    uint32_t high, low, high_check;

    do {
        __asm volatile( "csrr %0, mcycleh" : "=r"( high ) );
        __asm volatile( "csrr %0, mcycle" : "=r"( low ) );
        __asm volatile( "csrr %0, mcycleh" : "=r"( high_check ) );
    } while ( high != high_check );

    return ( ( uint64_t )high << 32 ) | low;
}

static void hpm_delay_cycles( uint64_t cycles )
{
    uint64_t start = hpm_read_cycles();

    while ( ( hpm_read_cycles() - start ) < cycles ) {
    }
}

/**
 * @brief Post divider register of PLL output @p clk.
 * @note PLL1 has four outputs: its DIV3 register follows DIV2 (offset 0xCC),
 *       past the three-entry DIV array of the SDK register structure.
 */
static inline volatile uint32_t *hpm_pll_div_reg( uint32_t pll, uint32_t clk )
{
    return ( volatile uint32_t * )&HPM_PLLCTLV2->PLL[pll].DIV[0] + clk;
}

static HPM_RAMFUNC uint32_t hpm_pll_frequency( uint32_t pll )
{
    uint32_t mfi = PLLCTLV2_PLL_MFI_MFI_GET( HPM_PLLCTLV2->PLL[pll].MFI );
    uint32_t mfn = PLLCTLV2_PLL_MFN_MFN_GET( HPM_PLLCTLV2->PLL[pll].MFN );
    uint32_t mfd = PLLCTLV2_PLL_MFD_MFD_GET( HPM_PLLCTLV2->PLL[pll].MFD );
    uint32_t frequency = HPM_REF_CLOCK_HZ * mfi;

    if ( 0 != mfd ) {
        // Fractional part: 24 MHz * MFN / MFD.
        frequency += ( uint32_t )( ( ( uint64_t )HPM_REF_CLOCK_HZ * mfn ) / mfd );
    }

    return frequency;
}

static HPM_RAMFUNC uint32_t hpm_source_frequency( uint32_t source )
{
    uint32_t pll, clk, div;

    if ( HPM_CLOCK_SOURCE_OSC0_CLK0 == source ) {
        return HPM_REF_CLOCK_HZ;
    }

    // Sources 1-3: PLL0 CLK0..CLK2, 4-7: PLL1 CLK0..CLK3.
    pll = ( source < 4UL ) ? 0UL : 1UL;
    clk = ( source < 4UL ) ? ( source - 1UL ) : ( source - 4UL );
    div = PLLCTLV2_PLL_DIV_DIV_GET( *hpm_pll_div_reg( pll, clk ) );

    // Post divider factor is 1 + DIV / 5.
    return ( uint32_t )( ( ( uint64_t )hpm_pll_frequency( pll ) * 5UL ) / ( 5UL + div ) );
}

static HPM_RAMFUNC uint32_t hpm_node_frequency( uint32_t node_value )
{
    return hpm_source_frequency( SYSCTL_CLOCK_MUX_GET( node_value ) ) /
           ( SYSCTL_CLOCK_DIV_GET( node_value ) + 1UL );
}

static HPM_RAMFUNC void hpm_wait_cpu_clock( void )
{
    while ( SYSCTL_CLOCK_CPU_GLB_BUSY_MASK & HPM_SYSCTL->CLOCK_CPU[0] ) {
    }
}

static HPM_RAMFUNC void hpm_wait_resources( void )
{
    while ( SYSCTL_RESOURCE_GLB_BUSY_MASK & HPM_SYSCTL->RESOURCE[0] ) {
    }
}

static HPM_RAMFUNC void hpm_set_clock_node( uint32_t node, uint32_t value )
{
    HPM_SYSCTL->CLOCK[node] = ( HPM_SYSCTL->CLOCK[node] & ~HPM_CLOCK_MUX_DIV_MASK ) |
                              ( value & HPM_CLOCK_MUX_DIV_MASK );
    while ( SYSCTL_CLOCK_LOC_BUSY_MASK & HPM_SYSCTL->CLOCK[node] ) {
    }
}

static HPM_RAMFUNC void hpm_set_cpu_clock( uint32_t value )
{
    HPM_SYSCTL->CLOCK_CPU[0] = ( HPM_SYSCTL->CLOCK_CPU[0] & ~HPM_CPU_CLOCK_MASK ) |
                               ( value & HPM_CPU_CLOCK_MASK );
    hpm_wait_cpu_clock();
}

static HPM_RAMFUNC void hpm_dcdc_wait_ready( void )
{
    volatile uint32_t timeout = 0;

    while ( !( PCFG_DCDC_MODE_READY_MASK & HPM_PCFG->DCDC_MODE ) ) {
        if ( ++timeout >= HPM_DCDC_TIMEOUT ) {
            break;
        }
    }
}

static HPM_RAMFUNC void hpm_dcdc_switch_to_dcm( void )
{
    uint32_t index;

    HPM_PCFG->DCDC_MODE |= 0x77000UL;
    HPM_PCFG->DCDC_ADVMODE = ( HPM_PCFG->DCDC_ADVMODE & ~0x73F0067UL ) | 0x4120067UL;
    HPM_PCFG->DCDC_PROT &= ~PCFG_DCDC_PROT_SHORT_CURRENT_MASK;
    HPM_PCFG->DCDC_PROT |= PCFG_DCDC_PROT_DISABLE_SHORT_MASK;
    HPM_PCFG->DCDC_MISC = 0x100000UL;
    index = PCFG_DCDC_MODE_VOLT_GET( HPM_PCFG->DCDC_MODE );
    index = ( index > HPM_DCDC_MIN_MV ) ? ( ( index - HPM_DCDC_MIN_MV ) / 25UL ) : 0UL;
    if ( index >= sizeof( hpm_dcdc_min_duty_pre ) ) {
        index = sizeof( hpm_dcdc_min_duty_pre ) - 1UL;
    }
    HPM_PCFG->DCDC_ADVPARAM = ( HPM_PCFG->DCDC_ADVPARAM & ~PCFG_DCDC_ADVPARAM_MIN_DUT_MASK ) |
                              PCFG_DCDC_ADVPARAM_MIN_DUT_SET( hpm_dcdc_min_duty_pre[index] );
    hpm_dcdc_wait_ready();
    HPM_PCFG->DCDC_ADVPARAM = ( HPM_PCFG->DCDC_ADVPARAM & ~PCFG_DCDC_ADVPARAM_MIN_DUT_MASK ) |
                              PCFG_DCDC_ADVPARAM_MIN_DUT_SET( hpm_dcdc_min_duty_after[index] );
    hpm_dcdc_wait_ready();
}

/**
 * @brief Set the internal DCDC (VDD_SOC) output voltage, as pcfg_dcdc_set_voltage() of the SDK.
 * @note A value outside 600-1375 mV (0 in the MCU definition) keeps the current
 *       setting, for boards that supply VDD_SOC from an external regulator.
 */
static HPM_RAMFUNC void hpm_dcdc_set_voltage( uint32_t millivolts )
{
    uint32_t mode;

    if ( ( millivolts < HPM_DCDC_MIN_MV ) || ( millivolts > HPM_DCDC_MAX_MV ) ||
         ( millivolts == PCFG_DCDC_MODE_VOLT_GET( HPM_PCFG->DCDC_MODE ) ) ) {
        return;
    }

    mode = PCFG_DCDC_MODE_MODE_GET( HPM_PCFG->DCDC_MODE );
    HPM_PCFG->DCDC_MODE = ( HPM_PCFG->DCDC_MODE & ~( PCFG_DCDC_MODE_VOLT_MASK | 0xF000UL ) ) |
                          PCFG_DCDC_MODE_VOLT_SET( millivolts ) | ( mode << 12U );

    if ( PCFG_DCDC_ADVMODE_EN_DCM_MASK & HPM_PCFG->DCDC_ADVMODE ) {
        hpm_dcdc_switch_to_dcm();
    } else {
        HPM_PCFG->DCDC_ADVPARAM = ( HPM_PCFG->DCDC_ADVPARAM & ~PCFG_DCDC_ADVPARAM_MIN_DUT_MASK ) |
                                  PCFG_DCDC_ADVPARAM_MIN_DUT_SET( 0x6AUL );
        hpm_dcdc_wait_ready();
    }
}

/**
 * @brief Turn the 24 MHz crystal oscillator on and wait until it is stable.
 * @return 1 if the crystal is running, 0 if it did not start (no crystal fitted).
 */
static HPM_RAMFUNC uint32_t hpm_xtal_start( void )
{
    volatile uint32_t timeout = 0;
    uint32_t status;

    HPM_PLLCTLV2->XTAL = ( HPM_PLLCTLV2->XTAL & ~PLLCTLV2_XTAL_RAMP_TIME_MASK ) |
                         ( VALUE_PLLCTLV2_XTAL & PLLCTLV2_XTAL_RAMP_TIME_MASK );

    // Keep the crystal on while the PLLs are reprogrammed.
    HPM_SYSCTL->RESOURCE[SYSCTL_RESOURCE_CLK_SRC_XTAL] =
        ( HPM_SYSCTL->RESOURCE[SYSCTL_RESOURCE_CLK_SRC_XTAL] & ~SYSCTL_RESOURCE_MODE_MASK ) | SYSCTL_RESOURCE_MODE_SET( 1UL );

    do {
        status = HPM_PLLCTLV2->XTAL;
        if ( ( PLLCTLV2_XTAL_ENABLE_MASK & status ) && !( PLLCTLV2_XTAL_BUSY_MASK & status ) &&
             ( PLLCTLV2_XTAL_RESPONSE_MASK & status ) ) {
            return 1;
        }
    } while ( ++timeout < HPM_XTAL_TIMEOUT );

    return 0;
}

static HPM_RAMFUNC void hpm_xtal_release( void )
{
    // Back to automatic mode: the crystal stays on as long as a PLL references it.
    HPM_SYSCTL->RESOURCE[SYSCTL_RESOURCE_CLK_SRC_XTAL] &= ~SYSCTL_RESOURCE_MODE_MASK;
}

static HPM_RAMFUNC void hpm_pll_wait_stable( volatile uint32_t *status_reg, uint32_t busy, uint32_t response,
                                             uint32_t enable )
{
    volatile uint32_t timeout = 0;
    uint32_t status;

    do {
        status = *status_reg;
        if ( !( enable & status ) || ( !( busy & status ) && ( response & status ) ) ) {
            return;
        }
    } while ( ++timeout < HPM_PLL_TIMEOUT );
}

/**
 * @brief Program a PLL: reference, integer multiplier (MFN = 0) and post dividers.
 */
static HPM_RAMFUNC void hpm_pll_init( uint32_t pll, uint32_t refsel, uint32_t mfi, const uint32_t *divs, uint32_t div_count )
{
    uint32_t index;

    if ( mfi < HPM_PLL_MFI_MIN ) {
        mfi = HPM_PLL_MFI_MIN;
    } else if ( mfi > HPM_PLL_MFI_MAX ) {
        mfi = HPM_PLL_MFI_MAX;
    }

    HPM_PLLCTLV2->PLL[pll].CONFIG = ( HPM_PLLCTLV2->PLL[pll].CONFIG & ~PLLCTLV2_PLL_CONFIG_REFSEL_MASK ) |
                                    PLLCTLV2_PLL_CONFIG_REFSEL_SET( refsel );
    HPM_PLLCTLV2->PLL[pll].MFD = HPM_PLL_MFD_DEFAULT;
    HPM_PLLCTLV2->PLL[pll].MFN = 0;
    HPM_PLLCTLV2->PLL[pll].MFI = PLLCTLV2_PLL_MFI_MFI_SET( mfi );
    hpm_pll_wait_stable( &HPM_PLLCTLV2->PLL[pll].MFI, PLLCTLV2_PLL_MFI_BUSY_MASK,
                         PLLCTLV2_PLL_MFI_RESPONSE_MASK, PLLCTLV2_PLL_MFI_ENABLE_MASK );

    for ( index = 0; index < div_count; index++ ) {
        volatile uint32_t *div_reg = hpm_pll_div_reg( pll, index );

        *div_reg = ( *div_reg & ~PLLCTLV2_PLL_DIV_DIV_MASK ) | PLLCTLV2_PLL_DIV_DIV_SET( divs[index] );
        hpm_pll_wait_stable( div_reg, PLLCTLV2_PLL_DIV_BUSY_MASK,
                             PLLCTLV2_PLL_DIV_RESPONSE_MASK, PLLCTLV2_PLL_DIV_ENABLE_MASK );
    }
}

/* ------------------------------------------------------ PUBLIC FUNCTIONS */

void SystemCoreClockUpdate( void );

/**
 * @brief Setup the microcontroller clock tree from the MCU definition.
 *
 * Called by the startup code before global constructors and main. Runs from
 * ILM because the flash interface (XPI0) clock is moved to 24 MHz while the
 * PLLs are reprogrammed; it is restored afterwards at most at its boot-time
 * frequency, so the flash timing configured by the boot ROM stays valid.
 */
HPM_RAMFUNC void SystemInit( void )
{
    uint32_t refsel[2];
    uint32_t pll0_divs[3] = { VALUE_PLLCTLV2_PLL0_DIV0, VALUE_PLLCTLV2_PLL0_DIV1, VALUE_PLLCTLV2_PLL0_DIV2 };
    uint32_t pll1_divs[4] = { VALUE_PLLCTLV2_PLL1_DIV0, VALUE_PLLCTLV2_PLL1_DIV1, VALUE_PLLCTLV2_PLL1_DIV2,
                              VALUE_PLLCTLV2_PLL1_DIV3 };
    uint32_t xpi0_boot = HPM_SYSCTL->CLOCK[HPM_CLOCK_NODE_XPI0];
    uint32_t xpi0_boot_frequency = hpm_node_frequency( xpi0_boot );
    uint32_t xpi0_source_frequency, xpi0_div, xtal_forced = 0;
    uint32_t index;

    // Peripheral clocks of group 0 (bus, memories, flash and the selected peripherals), linked to CPU0.
    HPM_SYSCTL->GROUP0[0].VALUE = VALUE_SYSCTL_GROUP0_LINK0 | HPM_GROUP0_LINK0_REQUIRED;
    HPM_SYSCTL->GROUP0[1].VALUE = VALUE_SYSCTL_GROUP0_LINK1 | HPM_GROUP0_LINK1_REQUIRED;
    HPM_SYSCTL->AFFILIATE[0].SET = 1UL; // Group 0 -> CPU0.
    hpm_wait_resources();

    // Run CPU0, AHB and the flash interface from OSC0_CLK0 (24 MHz) while the PLLs change.
    hpm_set_cpu_clock( SYSCTL_CLOCK_CPU_MUX_SET( HPM_CLOCK_SOURCE_OSC0_CLK0 ) );
    hpm_set_clock_node( HPM_CLOCK_NODE_XPI0, SYSCTL_CLOCK_MUX_SET( HPM_CLOCK_SOURCE_OSC0_CLK0 ) );

    // Core voltage first, so it is already high enough for the faster clocks.
    hpm_dcdc_set_voltage( PCFG_DCDC_MODE_VOLT_GET( VALUE_PCFG_DCDC_MODE ) );

    refsel[0] = PLLCTLV2_PLL_CONFIG_REFSEL_GET( VALUE_PLLCTLV2_PLL0_CONFIG );
    refsel[1] = PLLCTLV2_PLL_CONFIG_REFSEL_GET( VALUE_PLLCTLV2_PLL1_CONFIG );
    if ( ( HPM_PLL_REFSEL_XTAL == refsel[0] ) || ( HPM_PLL_REFSEL_XTAL == refsel[1] ) ) {
        xtal_forced = 1;
        if ( !hpm_xtal_start() ) {
            // No crystal: fall back to the internal 24 MHz RC oscillator (same frequency).
            refsel[0] = HPM_PLL_REFSEL_IRC24M;
            refsel[1] = HPM_PLL_REFSEL_IRC24M;
        }
    }

    hpm_pll_init( 0, refsel[0], PLLCTLV2_PLL_MFI_MFI_GET( VALUE_PLLCTLV2_PLL0_MFI ), pll0_divs, 3 );
    hpm_pll_init( 1, refsel[1], PLLCTLV2_PLL_MFI_MFI_GET( VALUE_PLLCTLV2_PLL1_MFI ), pll1_divs, 4 );

    if ( xtal_forced ) {
        hpm_xtal_release();
    }

    // Peripheral clock nodes.
    for ( index = 0; index < ( sizeof( hpm_clock_nodes ) / sizeof( hpm_clock_nodes[0] ) ); index++ ) {
        hpm_set_clock_node( hpm_clock_nodes[index].node, hpm_clock_nodes[index].value );
    }
    HPM_SYSCTL->ADCCLK[0] = ( HPM_SYSCTL->ADCCLK[0] & ~SYSCTL_ADCCLK_MUX_MASK ) |
                            ( VALUE_SYSCTL_ADCCLK0 & SYSCTL_ADCCLK_MUX_MASK );

    // CPU0 and AHB.
    hpm_set_cpu_clock( VALUE_SYSCTL_CLOCK_CPU0 );

    // Flash interface: boot ROM source, divider raised if needed to stay at or below the boot frequency.
    xpi0_source_frequency = hpm_source_frequency( SYSCTL_CLOCK_MUX_GET( xpi0_boot ) );
    xpi0_div = SYSCTL_CLOCK_DIV_GET( xpi0_boot ) + 1UL;
    if ( 0 != xpi0_boot_frequency ) {
        while ( ( xpi0_div < 256UL ) && ( ( xpi0_source_frequency / xpi0_div ) > xpi0_boot_frequency ) ) {
            xpi0_div++;
        }
    }
    hpm_set_clock_node( HPM_CLOCK_NODE_XPI0, ( xpi0_boot & SYSCTL_CLOCK_MUX_MASK ) | SYSCTL_CLOCK_DIV_SET( xpi0_div - 1UL ) );

    SystemCoreClockUpdate();
}

/**
 * @brief Update SystemCoreClock with the CPU0 clock read from the clock registers.
 */
HPM_RAMFUNC void SystemCoreClockUpdate( void )
{
    uint32_t cpu = HPM_SYSCTL->CLOCK_CPU[0];

    SystemCoreClock = hpm_source_frequency( SYSCTL_CLOCK_CPU_MUX_GET( cpu ) ) / ( SYSCTL_CLOCK_CPU_DIV_GET( cpu ) + 1UL );
}

/* ----------------------------------------------------------------- DELAYS */
/* Delays count CPU cycles with the mcycle counter (enabled by the startup code). */

void __attribute__( ( noinline ) ) Delay_Cyc( uint32_t cycles_div_by_10 )
{
    hpm_delay_cycles( ( uint64_t )cycles_div_by_10 * 10UL );
}

void __attribute__( ( noinline ) ) Delay_us( uint32_t time_us )
{
    hpm_delay_cycles( ( ( uint64_t )SystemCoreClock * time_us ) / 1000000UL );
}

void __attribute__( ( noinline ) ) Delay_ms( uint32_t time_ms )
{
    hpm_delay_cycles( ( ( uint64_t )SystemCoreClock * time_ms ) / 1000UL );
}

void __attribute__( ( noinline ) ) Delay_Advanced_ms( uint32_t time_ms, uint32_t current_fosc_khz )
{
    hpm_delay_cycles( ( uint64_t )current_fosc_khz * time_ms );
}

void Delay_1us()
{
    Delay_us( 1 );
}

void Delay_5us()
{
    Delay_us( 5 );
}

void Delay_6us()
{
    Delay_us( 6 );
}

void Delay_9us()
{
    Delay_us( 9 );
}

void Delay_10us()
{
    Delay_us( 10 );
}

void Delay_22us()
{
    Delay_us( 22 );
}

void Delay_50us()
{
    Delay_us( 50 );
}

void Delay_55us()
{
    Delay_us( 55 );
}

void Delay_60us()
{
    Delay_us( 60 );
}

void Delay_64us()
{
    Delay_us( 64 );
}

void Delay_70us()
{
    Delay_us( 70 );
}

void Delay_80us()
{
    Delay_us( 80 );
}

void Delay_410us()
{
    Delay_us( 410 );
}

void Delay_480us()
{
    Delay_us( 480 );
}

void Delay_500us()
{
    Delay_us( 500 );
}

void Delay_5500us()
{
    Delay_us( 5500 );
}

void Delay_1ms()
{
    Delay_ms( 1 );
}

void Delay_5ms()
{
    Delay_ms( 5 );
}

void Delay_8ms()
{
    Delay_ms( 8 );
}

void Delay_10ms()
{
    Delay_ms( 10 );
}

void Delay_100ms()
{
    Delay_ms( 100 );
}

void Delay_1sec()
{
    Delay_ms( 1000 );
}

/* -----END OF FILE----- */
