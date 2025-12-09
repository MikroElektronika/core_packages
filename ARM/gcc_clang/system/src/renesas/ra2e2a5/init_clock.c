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
    uint32_t PCLKD_Frequency;   // PCLKD clock frequency in Hz
} SYSTEM_ClocksTypeDef;

static uint8_t ClockPrescTable[ 7 ] = { 1, 2, 4, 8, 16, 32, 64 };

/* Key code for writing PRCR register. */
#define BSP_PRV_PRCR_KEY                            (0xA500U)
#define BSP_PRV_PRCR_PRC1_UNLOCK                    ((BSP_PRV_PRCR_KEY) | 0x2U)
#define BSP_PRV_PRCR_LOCK                           ((BSP_PRV_PRCR_KEY) | 0x0U)
#define BSP_PRV_STACK_LIMIT                         ((uint32_t) __Vectors[0] - BSP_CFG_STACK_MAIN_BYTES)
#define BSP_PRV_STACK_TOP                           ((uint32_t) __Vectors[0])

#define BSP_PRV_PRCR_UNLOCK                         ((BSP_PRV_PRCR_KEY) | 0x3U)
#define BSP_PRV_PRCR_LOCK                           ((BSP_PRV_PRCR_KEY) | 0x0U)
#define BSP_IO_PWPR_PFSWE_OFFSET                    (6)

#define BSP_STACK_POINTER_MONITOR_NMI_ON_DETECTION  (0xA500U)
#define BSP_CFG_STACK_MAIN_BYTES                    (0x400)

extern uint32_t __ram_from_flash$$Load;
extern uint32_t __ram_from_flash$$Base;
extern uint32_t __ram_from_flash$$Limit;
extern uint32_t __ram_zero$$Base;
extern uint32_t __ram_zero$$Limit;

extern void (* __init_array_start[])(void);
extern void (* __init_array_end[])(void);

#define BSP_CORTEX_VECTOR_TABLE_ENTRIES    (16U)
#define BSP_VECTOR_TABLE_MAX_ENTRIES       (48U)
#define BSP_ICU_VECTOR_MAX_ENTRIES         (BSP_VECTOR_TABLE_MAX_ENTRIES - BSP_CORTEX_VECTOR_TABLE_ENTRIES)
#define BSP_WEAK_REFERENCE                 __attribute__((weak))

#define BSP_PLACE_IN_SECTION(x)            __attribute__((section(x))) __attribute__((__used__))
#define BSP_DONT_REMOVE                    __attribute__((used))

#define BSP_SECTION_ID_CODE                ".id_code"
#define BSP_SECTION_ROM_REGISTERS          ".rom_registers"

typedef enum e_elc_event_ra2e2
{
    ELC_EVENT_NONE                          = (0x0),   // Link disabled
    ELC_EVENT_ICU_IRQ0                      = (0x001), // External pin interrupt 0
    ELC_EVENT_ICU_IRQ1                      = (0x002), // External pin interrupt 1
    ELC_EVENT_ICU_IRQ2                      = (0x003), // External pin interrupt 2
    ELC_EVENT_ICU_IRQ3                      = (0x004), // External pin interrupt 3
    ELC_EVENT_ICU_IRQ4                      = (0x005), // External pin interrupt 4
    ELC_EVENT_ICU_IRQ5                      = (0x006), // External pin interrupt 5
    ELC_EVENT_ICU_IRQ6                      = (0x007), // External pin interrupt 6
    ELC_EVENT_ICU_IRQ7                      = (0x008), // External pin interrupt 7
    ELC_EVENT_DTC_COMPLETE                  = (0x009), // DTC transfer complete
    ELC_EVENT_DTC_END                       = (0x00A), // DTC transfer end
    ELC_EVENT_ICU_SNOOZE_CANCEL             = (0x00B), // Canceling from Snooze mode
    ELC_EVENT_FCU_FRDYI                     = (0x00C), // Flash ready interrupt
    ELC_EVENT_LVD_LVD1                      = (0x00D), // Voltage monitor 1 interrupt
    ELC_EVENT_LVD_LVD2                      = (0x00E), // Voltage monitor 2 interrupt
    ELC_EVENT_LPM_SNOOZE_REQUEST            = (0x010), // Snooze entry
    ELC_EVENT_AGT0_INT                      = (0x011), // AGT interrupt
    ELC_EVENT_AGT0_COMPARE_A                = (0x012), // Compare match A
    ELC_EVENT_AGT0_COMPARE_B                = (0x013), // Compare match B
    ELC_EVENT_AGT1_INT                      = (0x014), // AGT interrupt
    ELC_EVENT_AGT1_COMPARE_A                = (0x015), // Compare match A
    ELC_EVENT_AGT1_COMPARE_B                = (0x016), // Compare match B
    ELC_EVENT_IWDT_UNDERFLOW                = (0x017), // IWDT underflow
    ELC_EVENT_WDT_UNDERFLOW                 = (0x018), // WDT underflow
    ELC_EVENT_ADC0_SCAN_END                 = (0x01C), // End of A/D scanning operation
    ELC_EVENT_ADC0_SCAN_END_B               = (0x01D), // A/D scan end interrupt for group B
    ELC_EVENT_ADC0_WINDOW_A                 = (0x01E), // Window A Compare match interrupt
    ELC_EVENT_ADC0_WINDOW_B                 = (0x01F), // Window B Compare match interrupt
    ELC_EVENT_ADC0_COMPARE_MATCH            = (0x020), // Compare match
    ELC_EVENT_ADC0_COMPARE_MISMATCH         = (0x021), // Compare mismatch
    ELC_EVENT_KEY_INT                       = (0x033), // Key interrupt
    ELC_EVENT_DOC_INT                       = (0x034), // Data operation circuit interrupt
    ELC_EVENT_CAC_FREQUENCY_ERROR           = (0x035), // Frequency error interrupt
    ELC_EVENT_CAC_MEASUREMENT_END           = (0x036), // Measurement end interrupt
    ELC_EVENT_CAC_OVERFLOW                  = (0x037), // Overflow interrupt
    ELC_EVENT_IOPORT_EVENT_1                = (0x03D), // Port 1 event
    ELC_EVENT_IOPORT_EVENT_2                = (0x03E), // Port 2 event
    ELC_EVENT_ELC_SOFTWARE_EVENT_0          = (0x03F), // Software event 0
    ELC_EVENT_ELC_SOFTWARE_EVENT_1          = (0x040), // Software event 1
    ELC_EVENT_POEG0_EVENT                   = (0x041), // Port Output disable 0 interrupt
    ELC_EVENT_POEG1_EVENT                   = (0x042), // Port Output disable 1 interrupt
    ELC_EVENT_GPT4_CAPTURE_COMPARE_A        = (0x05E), // Capture/Compare match A
    ELC_EVENT_GPT4_CAPTURE_COMPARE_B        = (0x05F), // Capture/Compare match B
    ELC_EVENT_GPT4_COMPARE_C                = (0x060), // Compare match C
    ELC_EVENT_GPT4_COMPARE_D                = (0x061), // Compare match D
    ELC_EVENT_GPT4_COUNTER_OVERFLOW         = (0x062), // Overflow
    ELC_EVENT_GPT4_COUNTER_UNDERFLOW        = (0x063), // Underflow
    ELC_EVENT_GPT5_CAPTURE_COMPARE_A        = (0x064), // Capture/Compare match A
    ELC_EVENT_GPT5_CAPTURE_COMPARE_B        = (0x065), // Capture/Compare match B
    ELC_EVENT_GPT5_COMPARE_C                = (0x066), // Compare match C
    ELC_EVENT_GPT5_COMPARE_D                = (0x067), // Compare match D
    ELC_EVENT_GPT5_COUNTER_OVERFLOW         = (0x068), // Overflow
    ELC_EVENT_GPT5_COUNTER_UNDERFLOW        = (0x069), // Underflow
    ELC_EVENT_GPT6_CAPTURE_COMPARE_A        = (0x06A), // Capture/Compare match A
    ELC_EVENT_GPT6_CAPTURE_COMPARE_B        = (0x06B), // Capture/Compare match B
    ELC_EVENT_GPT6_COMPARE_C                = (0x06C), // Compare match C
    ELC_EVENT_GPT6_COMPARE_D                = (0x06D), // Compare match D
    ELC_EVENT_GPT6_COUNTER_OVERFLOW         = (0x06E), // Overflow
    ELC_EVENT_GPT6_COUNTER_UNDERFLOW        = (0x06F), // Underflow
    ELC_EVENT_GPT_UVWEDGE                   = (0x070), // UVW edge event
    ELC_EVENT_SCI9_RXI                      = (0x07C), // Receive data full
    ELC_EVENT_SCI9_TXI                      = (0x07D), // Transmit data empty
    ELC_EVENT_SCI9_TEI                      = (0x07E), // Transmit end
    ELC_EVENT_SCI9_ERI                      = (0x07F), // Receive error
    ELC_EVENT_SCI9_AM                       = (0x080), // Address match event
    ELC_EVENT_SPI0_RXI                      = (0x081), // Receive buffer full
    ELC_EVENT_SPI0_TXI                      = (0x082), // Transmit buffer empty
    ELC_EVENT_SPI0_IDLE                     = (0x083), // Idle
    ELC_EVENT_SPI0_ERI                      = (0x084), // Error
    ELC_EVENT_SPI0_TEI                      = (0x085), // Transmission complete event
    ELC_EVENT_AES_WRREQ                     = (0x08B), // AES Write Request
    ELC_EVENT_AES_RDREQ                     = (0x08C), // AES Read Request
    ELC_EVENT_TRNG_RDREQ                    = (0x08D), // TRNG Read Request
    ELC_EVENT_GPT7_CAPTURE_COMPARE_A        = (0x098), // Capture/Compare match A
    ELC_EVENT_GPT7_CAPTURE_COMPARE_B        = (0x099), // Capture/Compare match B
    ELC_EVENT_GPT7_COMPARE_C                = (0x09A), // Compare match C
    ELC_EVENT_GPT7_COMPARE_D                = (0x09B), // Compare match D
    ELC_EVENT_GPT7_COUNTER_OVERFLOW         = (0x09C), // Overflow
    ELC_EVENT_GPT7_COUNTER_UNDERFLOW        = (0x09D), // Underflow
    ELC_EVENT_GPT8_CAPTURE_COMPARE_A        = (0x09E), // Capture/Compare match A
    ELC_EVENT_GPT8_CAPTURE_COMPARE_B        = (0x09F), // Capture/Compare match B
    ELC_EVENT_GPT8_COMPARE_C                = (0x0A0), // Compare match C
    ELC_EVENT_GPT8_COMPARE_D                = (0x0A1), // Compare match D
    ELC_EVENT_GPT8_COUNTER_OVERFLOW         = (0x0A2), // Overflow
    ELC_EVENT_GPT8_COUNTER_UNDERFLOW        = (0x0A3), // Underflow
    ELC_EVENT_GPT9_CAPTURE_COMPARE_A        = (0x0A4), // Capture/Compare match A
    ELC_EVENT_GPT9_CAPTURE_COMPARE_B        = (0x0A5), // Capture/Compare match B
    ELC_EVENT_GPT9_COMPARE_C                = (0x0A6), // Compare match C
    ELC_EVENT_GPT9_COMPARE_D                = (0x0A7), // Compare match D
    ELC_EVENT_GPT9_COUNTER_OVERFLOW         = (0x0A8), // Overflow
    ELC_EVENT_GPT9_COUNTER_UNDERFLOW        = (0x0A9), // Underflow
    ELC_EVENT_I3C0_RESPONSE                 = (0x0AA), // Response status buffer full
    ELC_EVENT_I3C0_COMMAND                  = (0x0AB), // Command buffer empty
    ELC_EVENT_I3C0_IBI                      = (0x0AC), // IBI status buffer full
    ELC_EVENT_I3C0_RX                       = (0x0AD), // Receive
    ELC_EVENT_IICB0_RXI                     = (0x0AD), // Receive
    ELC_EVENT_I3C0_TX                       = (0x0AE), // Transmit
    ELC_EVENT_IICB0_TXI                     = (0x0AE), // Transmit
    ELC_EVENT_I3C0_RCV_STATUS               = (0x0AF), // Receive status buffer full
    ELC_EVENT_I3C0_TEND                     = (0x0B4), // Transmit end
    ELC_EVENT_IICB0_TEI                     = (0x0B4), // Transmit end
    ELC_EVENT_I3C0_EEI                      = (0x0B5), // Error
    ELC_EVENT_IICB0_ERI                     = (0x0B5)  // Error
} elc_event_t;

typedef elc_event_t bsp_interrupt_event_t;

#define BSP_FEATURE_ICU_FIXED_IELSR_COUNT                 (0UL)

const bsp_interrupt_event_t g_interrupt_event_link_select[BSP_ICU_VECTOR_MAX_ENTRIES] BSP_WEAK_REFERENCE =
{
    (bsp_interrupt_event_t) 0
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
    uint32_t prescaler, source_clock;

    // Get the frequency of main clock.
    SYSTEM_Clocks->ICLK_Frequency = FOSC_KHZ_VALUE * 1000;

    // Get the source frequency for all clocks.
    prescaler = ClockPrescTable[ ( VALUE_SYSTEM_SCKDIVCR & 0x7000000 ) >> 24 ];
    source_clock = SYSTEM_Clocks->ICLK_Frequency * prescaler;

    // Get PCLKB clock frequency.
    prescaler = ClockPrescTable[ ( VALUE_SYSTEM_SCKDIVCR & 0x700 ) >> 8 ];
    SYSTEM_Clocks->PCLKB_Frequency = source_clock / prescaler;

    // Get PCLKD clock frequency.
    prescaler = ClockPrescTable[ ( VALUE_SYSTEM_SCKDIVCR & 0x7 ) ];
    SYSTEM_Clocks->PCLKD_Frequency = source_clock / prescaler;
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
    // Set-up vector table settings
    SCB->VTOR = (uint32_t) &__Vectors;

    // Lock VBTCR1 register
    R_SYSTEM->PRCR = (uint16_t) BSP_PRV_PRCR_LOCK;

    // BSP clock init start
    R_SYSTEM->PRCR = (uint16_t) BSP_PRV_PRCR_UNLOCK;

    // Clock setting
    system_clock_configuration();

    // Disable MSP monitoring
    R_MPU_SPMON->SP[0].CTL = 0;

    // Setup NMI interrupt
    R_MPU_SPMON->SP[0].OAD = BSP_STACK_POINTER_MONITOR_NMI_ON_DETECTION;

    // Setup start address
    R_MPU_SPMON->SP[0].SA = BSP_PRV_STACK_LIMIT;

    // Setup end address
    R_MPU_SPMON->SP[0].EA = BSP_PRV_STACK_TOP;

    /* Set SPEEN bit to enable NMI on stack monitor exception.
    * NMIER bits cannot be cleared after reset, so no need
    * to read-modify-write. */
    R_ICU->NMIER = R_ICU_NMIER_SPEEN_Msk;

    // Enable MSP monitoring
    R_MPU_SPMON->SP[0].CTL = 1U;

    memset(
        &__ram_zero$$Base,
        0,
        (uint32_t)&__ram_zero$$Limit - (uint32_t)&__ram_zero$$Base
    );

    memcpy(
        &__ram_from_flash$$Base,
        &__ram_from_flash$$Load,
        (uint32_t)&__ram_from_flash$$Limit - (uint32_t)&__ram_from_flash$$Base
    );

    int32_t count = __init_array_end - __init_array_start;
    for (int32_t i = 0; i < count; i++)
    {
        __init_array_start[i]();
    }

    // Pin config
    R_PMISC->PWPR = 0; // Clear BOWI bit - writing to PFSWE bit enabled
    R_PMISC->PWPR = 1U << BSP_IO_PWPR_PFSWE_OFFSET; // Set PFSWE bit - writing to PFS register enabled

    for (uint32_t i = 0U; i < (BSP_ICU_VECTOR_MAX_ENTRIES - BSP_FEATURE_ICU_FIXED_IELSR_COUNT); i++)
    {
        if (0U != g_interrupt_event_link_select[i])
        {
            R_ICU->IELSR[i] = (uint32_t) g_interrupt_event_link_select[i];
        }
    }
}

// -----------------------------------------------------------------------------------------

static void system_clock_configuration() {
    // Unlock write protection register
    R_SYSTEM->PRCR = (uint16_t) BSP_PRV_PRCR_UNLOCK;

    // Make sure that Non-Secure mode used for all system registers
    R_SYSTEM->CGFSAR = 0xFFFFFFFF;

    R_SYSTEM->OPCCR = VALUE_SYSTEM_OPCCR;

    if ( !( VALUE_SYSTEM_HOCOCR & R_SYSTEM_HOCOCR_HCSTP_Msk ) ) {
        if ( R_SYSTEM->OSCSF_b.HOCOSF ) {
            R_SYSTEM->HOCOCR_b.HCSTP = 1; // Stop HOCO (until HOCO is fully configured)
            while ( R_SYSTEM->OSCSF_b.HOCOSF ) {
                // Wait for HOCOSF to be cleared
            }
        }
        R_SYSTEM->HOCOCR2 = VALUE_SYSTEM_HOCOCR2;
        R_SYSTEM->HOCOWTCR = VALUE_SYSTEM_HOCOWTCR;
        R_SYSTEM->HOCOCR_b.HCSTP = 0; // Start HOCO

        while ( !( R_SYSTEM->OSCSF_b.HOCOSF ) ) {
            // Wait for HOCO to stabilize
        }
    }

    R_SYSTEM->LOCOCR = VALUE_SYSTEM_LOCOCR;

    R_SYSTEM->MOCOCR = VALUE_SYSTEM_MOCOCR;

    Delay_1ms();

    R_SYSTEM->SCKSCR = VALUE_SYSTEM_SCKSCR;

    Delay_1ms();

    // Set the PRCR.PRC0 bit to 1 (write enabled) before rewriting SCKDIVCR register
    R_SYSTEM->PRCR_b.PRC0 = 1;

    R_SYSTEM->SCKDIVCR = VALUE_SYSTEM_SCKDIVCR;

    if ( VALUE_SYSTEM_CKOCR & R_SYSTEM_CKOCR_CKOEN_Msk ) {
        R_SYSTEM->CKOCR = VALUE_SYSTEM_CKOCR & ( R_SYSTEM_CKOCR_CKODIV_Msk | R_SYSTEM_CKOCR_CKOSEL_Msk );
        R_SYSTEM->CKOCR_b.CKOEN = 1; // Enable clock out
    }

    // Lock write protection register
    R_SYSTEM->PRCR = (uint16_t) BSP_PRV_PRCR_LOCK;
}