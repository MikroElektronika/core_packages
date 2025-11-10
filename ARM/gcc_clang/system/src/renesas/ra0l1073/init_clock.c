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

extern void * __Vectors[];

typedef struct
{
    uint32_t ICLK_Frequency;    // System clock frequency in Hz
    uint32_t PCLKB_Frequency;   // PCLKB clock frequency in Hz
} SYSTEM_ClocksTypeDef;

/* Helper macros for setting speed. */
#define BSP_PRV_OPERATING_MODE_MIDDLE_SPEED (2)

/* Key code for writing PRCR register. */
#define BSP_PRV_PRCR_KEY    (0xA500U)
#define BSP_PRV_PRCR_UNLOCK ((BSP_PRV_PRCR_KEY) | 0x3U)
#define BSP_PRV_PRCR_LOCK   ((BSP_PRV_PRCR_KEY) | 0x0U)

extern uint32_t __etext;
extern uint32_t __data_start__;
extern uint32_t __data_end__;
extern uint32_t __bss_start__;
extern uint32_t __bss_end__;

extern void (* __init_array_start[])(void);
extern void (* __init_array_end[])(void);

#define BSP_CORTEX_VECTOR_TABLE_ENTRIES (16U)
#define BSP_VECTOR_TABLE_MAX_ENTRIES    (65U)
#define BSP_ICU_VECTOR_MAX_ENTRIES      (BSP_VECTOR_TABLE_MAX_ENTRIES - BSP_CORTEX_VECTOR_TABLE_ENTRIES)
#define BSP_WEAK_REFERENCE              __attribute__((weak))

#ifndef FSP_HARDWARE_REGISTER_WAIT
    #define FSP_HARDWARE_REGISTER_WAIT(reg, required_value)    while (reg != required_value) { /* Wait. */}
#endif

#define BSP_IO_PWPR_PFSWE_OFFSET (6)

// -----------------------------------------------------------------------------------------

/***********************************************************************
 * ID Code Configuration for On-Chip Flash Protection
 * This section places the user-defined 128-bit ID code into a special
 * memory section. These values can be used to lock/unlock the flash.
 *
 * If BSP_FEATURE_BSP_OSIS_PADDING is enabled, each 32-bit word is
 * followed by 0xFFFFFFFF as padding.
 ***********************************************************************/
#if BSP_FEATURE_FLASH_SUPPORTS_ID_CODE == 1

/** ID code values (4 x 32-bit, optionally padded) */
BSP_DONT_REMOVE static const uint32_t g_bsp_id_codes[] BSP_PLACE_IN_SECTION(BSP_SECTION_ID_CODE) =
{
    BSP_CFG_ID_CODE_LONG_1,
    #if BSP_FEATURE_BSP_OSIS_PADDING
    0xFFFFFFFFU,  // Padding after ID code 1
    #endif

    BSP_CFG_ID_CODE_LONG_2,
    #if BSP_FEATURE_BSP_OSIS_PADDING
    0xFFFFFFFFU,  // Padding after ID code 2
    #endif

    BSP_CFG_ID_CODE_LONG_3,
    #if BSP_FEATURE_BSP_OSIS_PADDING
    0xFFFFFFFFU,  // Padding after ID code 3
    #endif

    BSP_CFG_ID_CODE_LONG_4
};

#endif  // BSP_FEATURE_FLASH_SUPPORTS_ID_CODE

/***********************************************************************
 * BSP ROM Register Configuration for RA0L1
 * This section defines various ROM register settings including:
 * - Option Function Select (OFS) values
 * - High-speed On-Chip Oscillator (HOCO) frequency
 * These values are placed in a special memory section used during boot.
 ***********************************************************************/
#define BSP_PLACE_IN_SECTION(x)            __attribute__((section(x))) __attribute__((used))
#define BSP_DONT_REMOVE                    __attribute__((used))

#define BSP_SECTION_ID_CODE                ".id_code"
#define BSP_SECTION_ROM_REGISTERS          ".option_setting_ofs1"

/***********************************************************************
 * Option Function Select (OFS) Settings
 ***********************************************************************/
#define OFS_SEQ1                           (0xA001A001 | (1 << 1) | (3 << 2))
#define OFS_SEQ2                           ((15 << 4) | (3 << 8) | (3 << 10))
#define OFS_SEQ3                           ((1 << 12) | (1 << 14) | (1 << 17))
#define OFS_SEQ4                           ((3 << 18) | (15 << 20) | (3 << 24) | (3 << 26))
#define OFS_SEQ5                           ((1 << 28) | (1 << 30))

#define BSP_CFG_ROM_REG_OFS0              (OFS_SEQ1 | OFS_SEQ2 | OFS_SEQ3 | OFS_SEQ4 | OFS_SEQ5)

/***********************************************************************
 * OFS1 Configuration for HOCO Frequency
 ***********************************************************************/
#define BSP_CFG_HOCO_FREQUENCY              (VALUE_SYSTEM_HOCOCR2)
#define BSP_FEATURE_BSP_OFS1_HOCOFRQ_MASK   (0xFFFFCFFFUL)
#define BSP_FEATURE_BSP_OFS1_HOCOFRQ_OFFSET (12UL)

#define BSP_ROM_REG_OFS1_SETTING \
    ((uint32_t) BSP_FEATURE_BSP_OFS1_HOCOFRQ_MASK | \
    ((uint32_t) BSP_CFG_HOCO_FREQUENCY << BSP_FEATURE_BSP_OFS1_HOCOFRQ_OFFSET))

/***********************************************************************
 * ROM Register Table (stored in a dedicated memory section)
 ***********************************************************************/
static const uint32_t g_bsp_rom_registers[] BSP_PLACE_IN_SECTION(BSP_SECTION_ROM_REGISTERS) =
{
    BSP_ROM_REG_OFS1_SETTING    // OFS1 register value (with HOCO frequency)
};

// -----------------------------------------------------------------------------------------

/**
 * @brief Sets the system clock based on user preferences.
 *
 * Configures the system clock source, frequency and dividers according to
 * preferences stored internally by the library. This function is called during
 * system initialization and is not intended for direct use by application code.
 *
 * @return None
 *
 * @note This function is `static` and only available within this source file.
 */
static void system_clock_configuration();

// -----------------------------------------------------------------------------------------

/**
 * @brief Gets the system clock values.
 *
 * Calculates configured clock frequency for system clocks which are used by different
 * MCU modules.
 *
 * @return None
 */
void SYSTEM_GetClocksFrequency( SYSTEM_ClocksTypeDef * SYSTEM_Clocks ) {
    // Get the frequency of main clock.
    SYSTEM_Clocks->ICLK_Frequency = FOSC_KHZ_VALUE * 1000;

    // Get PCLKB clock frequency.
    SYSTEM_Clocks->PCLKB_Frequency = FOSC_KHZ_VALUE * 1000;
}

/**
 * @brief Initializes the microcontroller system.
 *
 * Performs essential setup, including clock configuration and core-level
 * initialization. This function should be called once at startup before
 * using any other peripherals or system services.
 *
 * @return None
 */
void SystemInit(void)
{
    SCB->VTOR = (uint32_t) &__Vectors;

    // Clock setting
    system_clock_configuration();

    memset(&__bss_start__, 0U, ((uint32_t) &__bss_end__ - (uint32_t) &__bss_start__));
    memcpy(&__data_start__, &__etext, ((uint32_t) &__data_end__ - (uint32_t) &__data_start__));

    int32_t count = __init_array_end - __init_array_start;
    for (int32_t i = 0; i < count; i++)
    {
        __init_array_start[i]();
    }

    // Pin config
    R_PMISC->PWPR = 0; // Clear BOWI bit - writing to PFSWE bit enabled
    R_PMISC->PWPR = 1U << BSP_IO_PWPR_PFSWE_OFFSET; // Set PFSWE bit - writing to PFS register enabled
}

// -----------------------------------------------------------------------------------------

static void system_clock_configuration() {
    uint8_t operating_mode = ( VALUE_SYSTEM_FLMODE & R_FACI_LP_FLMODE_MODE_Msk ) >> R_FACI_LP_FLMODE_MODE_Pos;
    // Unlock write protection register
    R_SYSTEM->PRCR = (uint16_t) BSP_PRV_PRCR_UNLOCK;

    // The CMC register can be written only once after release from the reset state.
    if ( VALUE_SYSTEM_CMC & R_SYSTEM_CMC_SOSEL_Msk )
        R_SYSTEM->CMC = VALUE_SYSTEM_CMC;
    else
        R_SYSTEM->CMC = ( VALUE_SYSTEM_CMC & 0x3F );

    // Stop RTC counter operation to update the OSMC register.
    R_RTC_C->RTCC0_b.RTCE = 0U;

    // Stop the Sub-Clock Oscillator to update the OSMC register.
    R_SYSTEM->SOSCCR = 1U;

    // Update OSMC register.
    R_SYSTEM->OSMC = VALUE_SYSTEM_OSMC;

    // Set SOSC if requested.
    R_SYSTEM->SOSCCR = VALUE_SYSTEM_SOSCCR;

    if ( operating_mode != R_FACI_LP->FLMODE_b.MODE )
    {
        // Enable FLMWRP.FLMWEN bit before writing to FLMODE register.
        R_FACI_LP->FLMWRP_b.FLMWEN = 0x1U;

        if (( BSP_PRV_OPERATING_MODE_MIDDLE_SPEED != operating_mode ) &&
            ( BSP_PRV_OPERATING_MODE_MIDDLE_SPEED != R_FACI_LP->FLMODE_b.MODE ))
        {
            // Set flash operating mode to middle-speed mode first.
            R_FACI_LP->FLMODE = ( uint8_t )( BSP_PRV_OPERATING_MODE_MIDDLE_SPEED << R_FACI_LP_FLMODE_MODE_Pos );
        }

        // Set flash operating mode.
        R_FACI_LP->FLMODE = ( uint8_t )( operating_mode << R_FACI_LP_FLMODE_MODE_Pos );

        // Disable FLMWRP.FLMWEN bit after writing to FLMODE register.
        R_FACI_LP->FLMWRP_b.FLMWEN = 0x0U;
    }

    if ( !( VALUE_SYSTEM_HOCOCR & R_SYSTEM_HOCOCR_HCSTP_Msk ) )
    {
        R_SYSTEM->HOCOCR_b.HCSTP = 0; // Start HOCO

        while ( !( R_SYSTEM->OSCSF_b.HOCOSF ) ) {
            // Wait for HOCO to stabilize
        }
    }

    if ( !( VALUE_SYSTEM_MOSCCR & R_SYSTEM_MOSCCR_MOSTP_Msk ) ) {
        // Main oscillator selected
        R_SYSTEM->MOSCCR_b.MOSTP = 1; // Stop XTAL
        R_SYSTEM->MOSCCR_b.MOSTP = 0; // Start XTAL
    }

    R_SYSTEM->LOCOCR = VALUE_SYSTEM_LOCOCR;

    R_SYSTEM->MOCOCR = VALUE_SYSTEM_MOCOCR;

    /* Start clocks that require other clocks.
     *
     * | System clock source | FOCOSCR.CKSEL | FMAINSCR.CKSEL | FSUBSCR.CKSEL | ICLKSCR.CKSEL |
     * | ------------------- | ------------- | -------------- | ------------- | ------------- |
     * | HOCO                | 0U            | 0U             | x             | 0U            |
     * | MOCO                | 1U            | 0U             | x             | 0U            |
     * | MOSC                | x             | 1U             | x             | 0U            |
     * | LOCO                | x             | x              | 1U            | 1U            |
     * | SOSC                | x             | x              | 0U            | 1U            |
     *
     * */

    // Set source clock for system clock.
    R_SYSTEM->ICLKSCR_b.CKSEL = 0;
    FSP_HARDWARE_REGISTER_WAIT( R_SYSTEM->ICLKSCR_b.CKST, 0 );

    // Set source clock for main oscillator.
    R_SYSTEM->FMAINSCR = VALUE_SYSTEM_FMAINSCR;
    FSP_HARDWARE_REGISTER_WAIT( R_SYSTEM->FMAINSCR_b.CKST, VALUE_SYSTEM_FMAINSCR & R_SYSTEM_FMAINSCR_CKSEL_Msk );

    // Set the flexible oscilator source clock.
    R_SYSTEM->FOCOSCR = VALUE_SYSTEM_FOCOSCR;
    FSP_HARDWARE_REGISTER_WAIT( R_SYSTEM->FOCOSCR_b.CKST, VALUE_SYSTEM_FOCOSCR & R_SYSTEM_FOCOSCR_CKSEL_Msk );

    if ( !( VALUE_SYSTEM_FOCOSCR & R_SYSTEM_FOCOSCR_CKSEL_Msk ) )
        // Due to register access restrictions, only set the HOCODIV when system clock source is HOCO.
        R_SYSTEM->HOCODIV = VALUE_SYSTEM_HOCODIV;

    // Set sub-clock oscillator source.
    R_SYSTEM->FSUBSCR = VALUE_SYSTEM_FSUBSCR;

    // Set system clock source as FSUB if requested.
    if ( VALUE_SYSTEM_ICLKSCR ) {
        R_SYSTEM->ICLKSCR = VALUE_SYSTEM_ICLKSCR;
        FSP_HARDWARE_REGISTER_WAIT( R_SYSTEM->ICLKSCR_b.CKST, 1 );
    }

    // Set MOCODIV.
    R_SYSTEM->MOCODIV = VALUE_SYSTEM_MOCODIV;

    // Set MOSCDIV.
    R_SYSTEM->MOSCDIV = VALUE_SYSTEM_MOSCDIV;

    // Lock write protection register
    R_SYSTEM->PRCR = (uint16_t) BSP_PRV_PRCR_LOCK;
}
