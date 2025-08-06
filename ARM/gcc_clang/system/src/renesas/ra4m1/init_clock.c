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
    uint32_t PCLKA_Frequency;   // PCLKA clock frequency in Hz
    uint32_t PCLKB_Frequency;   // PCLKB clock frequency in Hz
    uint32_t PCLKC_Frequency;   // PCLKC clock frequency in Hz
    uint32_t PCLKD_Frequency;   // PCLKD clock frequency in Hz
    uint32_t FCLK_Frequency;    // Flash interface clock frequency in Hz
} SYSTEM_ClocksTypeDef;

static uint8_t ClockPrescTable[ 7 ] = { 1, 2, 4, 8, 16, 32, 64 };

/* Key code for writing PRCR register. */
#define BSP_PRV_PRCR_KEY                              (0xA500U)
#define BSP_PRV_PRCR_PRC1_UNLOCK                      ((BSP_PRV_PRCR_KEY) | 0x2U)
#define BSP_PRV_PRCR_LOCK                             ((BSP_PRV_PRCR_KEY) | 0x0U)
#define BSP_PRV_STACK_LIMIT                           ((uint32_t) __Vectors[0] - BSP_CFG_STACK_MAIN_BYTES)
#define BSP_PRV_STACK_TOP                             ((uint32_t) __Vectors[0])

#define BSP_PRV_PRCR_UNLOCK                     ((BSP_PRV_PRCR_KEY) | 0x3U)
#define BSP_PRV_PRCR_LOCK                       ((BSP_PRV_PRCR_KEY) | 0x0U)

#define BSP_STACK_POINTER_MONITOR_NMI_ON_DETECTION    (0xA500U)
#define BSP_CFG_STACK_MAIN_BYTES (0x400)

extern uint32_t __etext;
extern uint32_t __data_start__;
extern uint32_t __data_end__;
extern uint32_t __bss_start__;
extern uint32_t __bss_end__;

extern void (* __init_array_start[])(void);
extern void (* __init_array_end[])(void);

#define BSP_CORTEX_VECTOR_TABLE_ENTRIES    (16U)
#define BSP_VECTOR_TABLE_MAX_ENTRIES       (48U)
#define BSP_ICU_VECTOR_MAX_ENTRIES    (BSP_VECTOR_TABLE_MAX_ENTRIES - BSP_CORTEX_VECTOR_TABLE_ENTRIES)
#define BSP_WEAK_REFERENCE            __attribute__((weak))

typedef enum e_elc_event_ra4m1
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
    ELC_EVENT_ICU_IRQ8                      = (0x009), // External pin interrupt 8
    ELC_EVENT_ICU_IRQ9                      = (0x00A), // External pin interrupt 9
    ELC_EVENT_ICU_IRQ10                     = (0x00B), // External pin interrupt 10
    ELC_EVENT_ICU_IRQ11                     = (0x00C), // External pin interrupt 11
    ELC_EVENT_ICU_IRQ12                     = (0x00D), // External pin interrupt 12
    ELC_EVENT_ICU_IRQ14                     = (0x00F), // External pin interrupt 14
    ELC_EVENT_ICU_IRQ15                     = (0x010), // External pin interrupt 15
    ELC_EVENT_DMAC0_INT                     = (0x011), // DMAC0 transfer end
    ELC_EVENT_DMAC1_INT                     = (0x012), // DMAC1 transfer end
    ELC_EVENT_DMAC2_INT                     = (0x013), // DMAC2 transfer end
    ELC_EVENT_DMAC3_INT                     = (0x014), // DMAC3 transfer end
    ELC_EVENT_DTC_COMPLETE                  = (0x015), // DTC transfer complete
    ELC_EVENT_DTC_END                       = (0x016), // DTC transfer end
    ELC_EVENT_ICU_SNOOZE_CANCEL             = (0x017), // Canceling from Snooze mode
    ELC_EVENT_FCU_FRDYI                     = (0x018), // Flash ready interrupt
    ELC_EVENT_LVD_LVD1                      = (0x019), // Voltage monitor 1 interrupt
    ELC_EVENT_LVD_LVD2                      = (0x01A), // Voltage monitor 2 interrupt
    ELC_EVENT_LVD_VBATT                     = (0x01B), // VBATT low voltage detect
    ELC_EVENT_CGC_MOSC_STOP                 = (0x01C), // Main Clock oscillation stop
    ELC_EVENT_LPM_SNOOZE_REQUEST            = (0x01D), // Snooze entry
    ELC_EVENT_AGT0_INT                      = (0x01E), // AGT interrupt
    ELC_EVENT_AGT0_COMPARE_A                = (0x01F), // Compare match A
    ELC_EVENT_AGT0_COMPARE_B                = (0x020), // Compare match B
    ELC_EVENT_AGT1_INT                      = (0x021), // AGT interrupt
    ELC_EVENT_AGT1_COMPARE_A                = (0x022), // Compare match A
    ELC_EVENT_AGT1_COMPARE_B                = (0x023), // Compare match B
    ELC_EVENT_IWDT_UNDERFLOW                = (0x024), // IWDT underflow
    ELC_EVENT_WDT_UNDERFLOW                 = (0x025), // WDT underflow
    ELC_EVENT_RTC_ALARM                     = (0x026), // Alarm interrupt
    ELC_EVENT_RTC_PERIOD                    = (0x027), // Periodic interrupt
    ELC_EVENT_RTC_CARRY                     = (0x028), // Carry interrupt
    ELC_EVENT_ADC0_SCAN_END                 = (0x029), // End of A/D scanning operation
    ELC_EVENT_ADC0_SCAN_END_B               = (0x02A), // A/D scan end interrupt for group B
    ELC_EVENT_ADC0_WINDOW_A                 = (0x02B), // Window A Compare match interrupt
    ELC_EVENT_ADC0_WINDOW_B                 = (0x02C), // Window B Compare match interrupt
    ELC_EVENT_ADC0_COMPARE_MATCH            = (0x02D), // Compare match
    ELC_EVENT_ADC0_COMPARE_MISMATCH         = (0x02E), // Compare mismatch
    ELC_EVENT_ACMPLP0_INT                   = (0x02F), // Low Power Comparator channel 0 interrupt
    ELC_EVENT_ACMPLP1_INT                   = (0x030), // Low Power Comparator channel 1 interrupt
    ELC_EVENT_USBFS_FIFO_0                  = (0x031), // DMA/DTC transfer request 0
    ELC_EVENT_USBFS_FIFO_1                  = (0x032), // DMA/DTC transfer request 1
    ELC_EVENT_USBFS_INT                     = (0x033), // USBFS interrupt
    ELC_EVENT_USBFS_RESUME                  = (0x034), // USBFS resume interrupt
    ELC_EVENT_IIC0_RXI                      = (0x035), // Receive data full
    ELC_EVENT_IIC0_TXI                      = (0x036), // Transmit data empty
    ELC_EVENT_IIC0_TEI                      = (0x037), // Transmit end
    ELC_EVENT_IIC0_ERI                      = (0x038), // Transfer error
    ELC_EVENT_IIC0_WUI                      = (0x039), // Wakeup interrupt
    ELC_EVENT_IIC1_RXI                      = (0x03A), // Receive data full
    ELC_EVENT_IIC1_TXI                      = (0x03B), // Transmit data empty
    ELC_EVENT_IIC1_TEI                      = (0x03C), // Transmit end
    ELC_EVENT_IIC1_ERI                      = (0x03D), // Transfer error
    ELC_EVENT_SSI0_TXI                      = (0x03E), // Transmit data empty
    ELC_EVENT_SSI0_RXI                      = (0x03F), // Receive data full
    ELC_EVENT_SSI0_INT                      = (0x041), // Error interrupt
    ELC_EVENT_CTSU_WRITE                    = (0x042), // Write request interrupt
    ELC_EVENT_CTSU_READ                     = (0x043), // Measurement data transfer request interrupt
    ELC_EVENT_CTSU_END                      = (0x044), // Measurement end interrupt
    ELC_EVENT_KEY_INT                       = (0x045), // Key interrupt
    ELC_EVENT_DOC_INT                       = (0x046), // Data operation circuit interrupt
    ELC_EVENT_CAC_FREQUENCY_ERROR           = (0x047), // Frequency error interrupt
    ELC_EVENT_CAC_MEASUREMENT_END           = (0x048), // Measurement end interrupt
    ELC_EVENT_CAC_OVERFLOW                  = (0x049), // Overflow interrupt
    ELC_EVENT_CAN0_ERROR                    = (0x04A), // Error interrupt
    ELC_EVENT_CAN0_FIFO_RX                  = (0x04B), // Receive FIFO interrupt
    ELC_EVENT_CAN0_FIFO_TX                  = (0x04C), // Transmit FIFO interrupt
    ELC_EVENT_CAN0_MAILBOX_RX               = (0x04D), // Reception complete interrupt
    ELC_EVENT_CAN0_MAILBOX_TX               = (0x04E), // Transmission complete interrupt
    ELC_EVENT_IOPORT_EVENT_1                = (0x04F), // Port 1 event
    ELC_EVENT_IOPORT_EVENT_2                = (0x050), // Port 2 event
    ELC_EVENT_IOPORT_EVENT_3                = (0x051), // Port 3 event
    ELC_EVENT_IOPORT_EVENT_4                = (0x052), // Port 4 event
    ELC_EVENT_ELC_SOFTWARE_EVENT_0          = (0x053), // Software event 0
    ELC_EVENT_ELC_SOFTWARE_EVENT_1          = (0x054), // Software event 1
    ELC_EVENT_POEG0_EVENT                   = (0x055), // Port Output disable 0 interrupt
    ELC_EVENT_POEG1_EVENT                   = (0x056), // Port Output disable 1 interrupt
    ELC_EVENT_GPT0_CAPTURE_COMPARE_A        = (0x057), // Capture/Compare match A
    ELC_EVENT_GPT0_CAPTURE_COMPARE_B        = (0x058), // Capture/Compare match B
    ELC_EVENT_GPT0_COMPARE_C                = (0x059), // Compare match C
    ELC_EVENT_GPT0_COMPARE_D                = (0x05A), // Compare match D
    ELC_EVENT_GPT0_COMPARE_E                = (0x05B), // Compare match E
    ELC_EVENT_GPT0_COMPARE_F                = (0x05C), // Compare match F
    ELC_EVENT_GPT0_COUNTER_OVERFLOW         = (0x05D), // Overflow
    ELC_EVENT_GPT0_COUNTER_UNDERFLOW        = (0x05E), // Underflow
    ELC_EVENT_GPT1_CAPTURE_COMPARE_A        = (0x05F), // Capture/Compare match A
    ELC_EVENT_GPT1_CAPTURE_COMPARE_B        = (0x060), // Capture/Compare match B
    ELC_EVENT_GPT1_COMPARE_C                = (0x061), // Compare match C
    ELC_EVENT_GPT1_COMPARE_D                = (0x062), // Compare match D
    ELC_EVENT_GPT1_COMPARE_E                = (0x063), // Compare match E
    ELC_EVENT_GPT1_COMPARE_F                = (0x064), // Compare match F
    ELC_EVENT_GPT1_COUNTER_OVERFLOW         = (0x065), // Overflow
    ELC_EVENT_GPT1_COUNTER_UNDERFLOW        = (0x066), // Underflow
    ELC_EVENT_GPT2_CAPTURE_COMPARE_A        = (0x067), // Capture/Compare match A
    ELC_EVENT_GPT2_CAPTURE_COMPARE_B        = (0x068), // Capture/Compare match B
    ELC_EVENT_GPT2_COMPARE_C                = (0x069), // Compare match C
    ELC_EVENT_GPT2_COMPARE_D                = (0x06A), // Compare match D
    ELC_EVENT_GPT2_COMPARE_E                = (0x06B), // Compare match E
    ELC_EVENT_GPT2_COMPARE_F                = (0x06C), // Compare match F
    ELC_EVENT_GPT2_COUNTER_OVERFLOW         = (0x06D), // Overflow
    ELC_EVENT_GPT2_COUNTER_UNDERFLOW        = (0x06E), // Underflow
    ELC_EVENT_GPT3_CAPTURE_COMPARE_A        = (0x06F), // Capture/Compare match A
    ELC_EVENT_GPT3_CAPTURE_COMPARE_B        = (0x070), // Capture/Compare match B
    ELC_EVENT_GPT3_COMPARE_C                = (0x071), // Compare match C
    ELC_EVENT_GPT3_COMPARE_D                = (0x072), // Compare match D
    ELC_EVENT_GPT3_COMPARE_E                = (0x073), // Compare match E
    ELC_EVENT_GPT3_COMPARE_F                = (0x074), // Compare match F
    ELC_EVENT_GPT3_COUNTER_OVERFLOW         = (0x075), // Overflow
    ELC_EVENT_GPT3_COUNTER_UNDERFLOW        = (0x076), // Underflow
    ELC_EVENT_GPT4_CAPTURE_COMPARE_A        = (0x077), // Capture/Compare match A
    ELC_EVENT_GPT4_CAPTURE_COMPARE_B        = (0x078), // Capture/Compare match B
    ELC_EVENT_GPT4_COMPARE_C                = (0x079), // Compare match C
    ELC_EVENT_GPT4_COMPARE_D                = (0x07A), // Compare match D
    ELC_EVENT_GPT4_COMPARE_E                = (0x07B), // Compare match E
    ELC_EVENT_GPT4_COMPARE_F                = (0x07C), // Compare match F
    ELC_EVENT_GPT4_COUNTER_OVERFLOW         = (0x07D), // Overflow
    ELC_EVENT_GPT4_COUNTER_UNDERFLOW        = (0x07E), // Underflow
    ELC_EVENT_GPT5_CAPTURE_COMPARE_A        = (0x07F), // Capture/Compare match A
    ELC_EVENT_GPT5_CAPTURE_COMPARE_B        = (0x080), // Capture/Compare match B
    ELC_EVENT_GPT5_COMPARE_C                = (0x081), // Compare match C
    ELC_EVENT_GPT5_COMPARE_D                = (0x082), // Compare match D
    ELC_EVENT_GPT5_COMPARE_E                = (0x083), // Compare match E
    ELC_EVENT_GPT5_COMPARE_F                = (0x084), // Compare match F
    ELC_EVENT_GPT5_COUNTER_OVERFLOW         = (0x085), // Overflow
    ELC_EVENT_GPT5_COUNTER_UNDERFLOW        = (0x086), // Underflow
    ELC_EVENT_GPT6_CAPTURE_COMPARE_A        = (0x087), // Capture/Compare match A
    ELC_EVENT_GPT6_CAPTURE_COMPARE_B        = (0x088), // Capture/Compare match B
    ELC_EVENT_GPT6_COMPARE_C                = (0x089), // Compare match C
    ELC_EVENT_GPT6_COMPARE_D                = (0x08A), // Compare match D
    ELC_EVENT_GPT6_COMPARE_E                = (0x08B), // Compare match E
    ELC_EVENT_GPT6_COMPARE_F                = (0x08C), // Compare match F
    ELC_EVENT_GPT6_COUNTER_OVERFLOW         = (0x08D), // Overflow
    ELC_EVENT_GPT6_COUNTER_UNDERFLOW        = (0x08E), // Underflow
    ELC_EVENT_GPT7_CAPTURE_COMPARE_A        = (0x08F), // Capture/Compare match A
    ELC_EVENT_GPT7_CAPTURE_COMPARE_B        = (0x090), // Capture/Compare match B
    ELC_EVENT_GPT7_COMPARE_C                = (0x091), // Compare match C
    ELC_EVENT_GPT7_COMPARE_D                = (0x092), // Compare match D
    ELC_EVENT_GPT7_COMPARE_E                = (0x093), // Compare match E
    ELC_EVENT_GPT7_COMPARE_F                = (0x094), // Compare match F
    ELC_EVENT_GPT7_COUNTER_OVERFLOW         = (0x095), // Overflow
    ELC_EVENT_GPT7_COUNTER_UNDERFLOW        = (0x096), // Underflow
    ELC_EVENT_OPS_UVW_EDGE                  = (0x097), // UVW edge event
    ELC_EVENT_SCI0_RXI                      = (0x098), // Receive data full
    ELC_EVENT_SCI0_TXI                      = (0x099), // Transmit data empty
    ELC_EVENT_SCI0_TEI                      = (0x09A), // Transmit end
    ELC_EVENT_SCI0_ERI                      = (0x09B), // Receive error
    ELC_EVENT_SCI0_AM                       = (0x09C), // Address match event
    ELC_EVENT_SCI0_RXI_OR_ERI               = (0x09D), // Receive data full/Receive error
    ELC_EVENT_SCI1_RXI                      = (0x09E), // Receive data full
    ELC_EVENT_SCI1_TXI                      = (0x09F), // Transmit data empty
    ELC_EVENT_SCI1_TEI                      = (0x0A0), // Transmit end
    ELC_EVENT_SCI1_ERI                      = (0x0A1), // Receive error
    ELC_EVENT_SCI1_AM                       = (0x0A2), // Address match event
    ELC_EVENT_SCI2_RXI                      = (0x0A3), // Receive data full
    ELC_EVENT_SCI2_TXI                      = (0x0A4), // Transmit data empty
    ELC_EVENT_SCI2_TEI                      = (0x0A5), // Transmit end
    ELC_EVENT_SCI2_ERI                      = (0x0A6), // Receive error
    ELC_EVENT_SCI2_AM                       = (0x0A7), // Address match event
    ELC_EVENT_SCI9_RXI                      = (0x0A8), // Receive data full
    ELC_EVENT_SCI9_TXI                      = (0x0A9), // Transmit data empty
    ELC_EVENT_SCI9_TEI                      = (0x0AA), // Transmit end
    ELC_EVENT_SCI9_ERI                      = (0x0AB), // Receive error
    ELC_EVENT_SCI9_AM                       = (0x0AC), // Address match event
    ELC_EVENT_SPI0_RXI                      = (0x0AD), // Receive buffer full
    ELC_EVENT_SPI0_TXI                      = (0x0AE), // Transmit buffer empty
    ELC_EVENT_SPI0_IDLE                     = (0x0AF), // Idle
    ELC_EVENT_SPI0_ERI                      = (0x0B0), // Error
    ELC_EVENT_SPI0_TEI                      = (0x0B1), // Transmission complete event
    ELC_EVENT_SPI1_RXI                      = (0x0B2), // Receive buffer full
    ELC_EVENT_SPI1_TXI                      = (0x0B3), // Transmit buffer empty
    ELC_EVENT_SPI1_IDLE                     = (0x0B4), // Idle
    ELC_EVENT_SPI1_ERI                      = (0x0B5), // Error
    ELC_EVENT_SPI1_TEI                      = (0x0B6)  // Transmission complete event
} elc_event_t;

typedef elc_event_t bsp_interrupt_event_t;

#define BSP_FEATURE_ICU_FIXED_IELSR_COUNT                 (0UL)

const bsp_interrupt_event_t g_interrupt_event_link_select[BSP_ICU_VECTOR_MAX_ENTRIES] BSP_WEAK_REFERENCE =
{
    (bsp_interrupt_event_t) 0
};

#ifndef FSP_HARDWARE_REGISTER_WAIT
    #define FSP_HARDWARE_REGISTER_WAIT(reg, required_value)    while (reg != required_value) { /* Wait. */}
#endif

#define CGC_MAINCLOCK_DRIVE_RESERVED_MASK (0x0U)
#define CGC_MAINCLOCK_DRIVE (0x0U | CGC_MAINCLOCK_DRIVE_RESERVED_MASK)
#define BSP_FEATURE_CGC_MODRV_SHIFT (R_SYSTEM_MOMCR_MODRV1_Pos)
#define BSP_FEATURE_CGC_MODRV_MASK (R_SYSTEM_MOMCR_MODRV1_Msk | CGC_MAINCLOCK_DRIVE_RESERVED_MASK)
#define BSP_PRV_MODRV ((CGC_MAINCLOCK_DRIVE << BSP_FEATURE_CGC_MODRV_SHIFT) & \
                       BSP_FEATURE_CGC_MODRV_MASK)

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
 * BSP ROM Register Configuration for RA4M1
 * This section defines various ROM register settings including:
 * - Option Function Select (OFS) values
 * - Memory Protection Unit (MPU) configuration
 * - High-speed On-Chip Oscillator (HOCO) frequency
 * These values are placed in a special memory section used during boot.
 ***********************************************************************/

#define BSP_PLACE_IN_SECTION(x)            __attribute__((section(x))) __attribute__((__used__))
#define BSP_DONT_REMOVE                    __attribute__((used))

#define BSP_SECTION_ID_CODE                ".id_code"
#define BSP_SECTION_ROM_REGISTERS          ".rom_registers"

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
 * OFS1 Configuration - HOCO Frequency and other boot options
 ***********************************************************************/
#define BSP_CFG_ROM_REG_OFS1              (0xFFFFFEC3 | (1 << 2) | (3 << 3) | (0 << 8))  // HOCO-related
#define BSP_CFG_HOCO_FREQUENCY            (4)       // HOCO frequency selection (e.g., 4 = 48 MHz)
#define BSP_FEATURE_BSP_OFS1_HOCOFRQ_MASK (0xFFFF8FFFUL)
#define BSP_FEATURE_BSP_OFS1_HOCOFRQ_OFFSET (12UL)

#define BSP_ROM_REG_OFS1_SETTING \
    (((uint32_t) BSP_CFG_ROM_REG_OFS1 & BSP_FEATURE_BSP_OFS1_HOCOFRQ_MASK) | \
     ((uint32_t) BSP_CFG_HOCO_FREQUENCY << BSP_FEATURE_BSP_OFS1_HOCOFRQ_OFFSET))

/***********************************************************************
 * MPU Configuration
 ***********************************************************************/
#define BSP_CFG_USE_LOW_VOLTAGE_MODE              (0)

#define BSP_CFG_ROM_REG_MPU_PC0_ENABLE            (1)
#define BSP_CFG_ROM_REG_MPU_PC0_START             (0x00FFFFFC)
#define BSP_CFG_ROM_REG_MPU_PC0_END               (0x00FFFFFF)

#define BSP_CFG_ROM_REG_MPU_PC1_ENABLE            (1)
#define BSP_CFG_ROM_REG_MPU_PC1_START             (0x00FFFFFC)
#define BSP_CFG_ROM_REG_MPU_PC1_END               (0x00FFFFFF)

#define BSP_CFG_ROM_REG_MPU_REGION0_ENABLE        (1)
#define BSP_CFG_ROM_REG_MPU_REGION0_START         (0x00FFFFFC)
#define BSP_CFG_ROM_REG_MPU_REGION0_END           (0x00FFFFFF)

#define BSP_CFG_ROM_REG_MPU_REGION1_ENABLE        (1)
#define BSP_CFG_ROM_REG_MPU_REGION1_START         (0x200FFFFC)
#define BSP_CFG_ROM_REG_MPU_REGION1_END           (0x200FFFFF)

#define BSP_CFG_ROM_REG_MPU_REGION2_ENABLE        (1)
#define BSP_CFG_ROM_REG_MPU_REGION2_START         (0x407FFFFC)
#define BSP_CFG_ROM_REG_MPU_REGION2_END           (0x407FFFFF)

#define BSP_CFG_ROM_REG_MPU_REGION3_ENABLE        (1)
#define BSP_CFG_ROM_REG_MPU_REGION3_START         (0x400DFFFC)
#define BSP_CFG_ROM_REG_MPU_REGION3_END           (0x400DFFFF)

#define BSP_FEATURE_BSP_MPU_REGION0_MASK          (0x00FFFFFFUL)

/* MPU Control Register value based on the configuration above */
#define BSP_ROM_REG_MPU_CONTROL_SETTING           \
    ((0xFFFFFCF0U) | \
    ((uint32_t) BSP_CFG_ROM_REG_MPU_PC0_ENABLE        <<  8) | \
    ((uint32_t) BSP_CFG_ROM_REG_MPU_PC1_ENABLE        <<  9) | \
    ((uint32_t) BSP_CFG_ROM_REG_MPU_REGION0_ENABLE    <<  0) | \
    ((uint32_t) BSP_CFG_ROM_REG_MPU_REGION1_ENABLE    <<  1) | \
    ((uint32_t) BSP_CFG_ROM_REG_MPU_REGION2_ENABLE    <<  2) | \
    ((uint32_t) BSP_CFG_ROM_REG_MPU_REGION3_ENABLE    <<  3))

/***********************************************************************
 * ROM Register Table (stored in a dedicated memory section)
 ***********************************************************************/
BSP_DONT_REMOVE static const uint32_t g_bsp_rom_registers[] BSP_PLACE_IN_SECTION(BSP_SECTION_ROM_REGISTERS) =
{
    (uint32_t) BSP_CFG_ROM_REG_OFS0,           // OFS0 register value
    (uint32_t) BSP_ROM_REG_OFS1_SETTING,       // OFS1 register value (with HOCO frequency)

#if __MPU_PRESENT
    // PC0 settings
    ((uint32_t) BSP_CFG_ROM_REG_MPU_PC0_START & 0xFFFFFFFCU),
    ((uint32_t) BSP_CFG_ROM_REG_MPU_PC0_END | 0x00000003U),

    // PC1 settings
    ((uint32_t) BSP_CFG_ROM_REG_MPU_PC1_START & 0xFFFFFFFCU),
    ((uint32_t) BSP_CFG_ROM_REG_MPU_PC1_END | 0x00000003U),

    // MPU Region 0
    ((uint32_t)(BSP_CFG_ROM_REG_MPU_REGION0_START & BSP_FEATURE_BSP_MPU_REGION0_MASK & 0xFFFFFFFCU)),
    ((uint32_t)((BSP_CFG_ROM_REG_MPU_REGION0_END & BSP_FEATURE_BSP_MPU_REGION0_MASK) | 0x00000003U)),

    // MPU Region 1
    ((uint32_t) BSP_CFG_ROM_REG_MPU_REGION1_START & 0xFFFFFFFCU),
    ((uint32_t) BSP_CFG_ROM_REG_MPU_REGION1_END | 0x00000003U),

    // MPU Region 2
    (((uint32_t) BSP_CFG_ROM_REG_MPU_REGION2_START & 0x407FFFFCU) | 0x40000000U),
    (((uint32_t) BSP_CFG_ROM_REG_MPU_REGION2_END & 0x407FFFFCU) | 0x40000003U),

    // MPU Region 3
    (((uint32_t) BSP_CFG_ROM_REG_MPU_REGION3_START & 0x407FFFFCU) | 0x40000000U),
    (((uint32_t) BSP_CFG_ROM_REG_MPU_REGION3_END & 0x407FFFFCU) | 0x40000003U),

    // MPU Control Register
    (uint32_t) BSP_ROM_REG_MPU_CONTROL_SETTING
#endif
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

    // Get PCLKA clock frequency.
    prescaler = ClockPrescTable[ ( VALUE_SYSTEM_SCKDIVCR & 0x7000 ) >> 12 ];
    SYSTEM_Clocks->PCLKA_Frequency = source_clock / prescaler;

    // Get PCLKB clock frequency.
    prescaler = ClockPrescTable[ ( VALUE_SYSTEM_SCKDIVCR & 0x700 ) >> 8 ];
    SYSTEM_Clocks->PCLKB_Frequency = source_clock / prescaler;

    // Get PCLKC clock frequency.
    prescaler = ClockPrescTable[ ( VALUE_SYSTEM_SCKDIVCR & 0x70 ) >> 4 ];
    SYSTEM_Clocks->PCLKC_Frequency = source_clock / prescaler;

    // Get PCLKD clock frequency.
    prescaler = ClockPrescTable[ ( VALUE_SYSTEM_SCKDIVCR & 0x7 ) ];
    SYSTEM_Clocks->PCLKD_Frequency = source_clock / prescaler;

    // Get FCLK clock frequency.
    prescaler = ClockPrescTable[ ( VALUE_SYSTEM_SCKDIVCR & 0x7000 ) >> 12 ];
    SYSTEM_Clocks->FCLK_Frequency = source_clock / prescaler;
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
    // Set-up FPU settings
    SCB->CPACR |= ((3UL << (10*2)) | (3UL << (11*2)));
    SCB->VTOR = (uint32_t) &__Vectors;

    R_SYSTEM->PRCR = (uint16_t) BSP_PRV_PRCR_PRC1_UNLOCK;
    R_SYSTEM->VBTCR1 = 1U;
    FSP_HARDWARE_REGISTER_WAIT(R_SYSTEM->VBTSR_b.VBTRVLD, 1U);

    // Lock VBTCR1 register
    R_SYSTEM->PRCR = (uint16_t) BSP_PRV_PRCR_LOCK;

    // BSP clock init start
    R_SYSTEM->PRCR = (uint16_t) BSP_PRV_PRCR_UNLOCK;
    // Flash cache disable
    R_FCACHE->FCACHEE = 0U;

    // Clock setting
    system_clock_configuration();

    FSP_HARDWARE_REGISTER_WAIT(R_SYSTEM->OSCSF_b.MOSCSF, 1U);

    R_FCACHE->FCACHEIV = 1U;
    FSP_HARDWARE_REGISTER_WAIT(R_FCACHE->FCACHEIV, 0U);

    // Enable flash cache
    R_FCACHE->FCACHEE = 1U;

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

    // Disable cache before modifying MEMWAIT, SOPCCR or OPCCR
    R_FCACHE->FCACHEE = 0U;

    R_SYSTEM->OPCCR = VALUE_SYSTEM_OPCCR;

    R_SYSTEM->MEMWAIT = VALUE_SYSTEM_MEMWAIT;

    if ( !( VALUE_SYSTEM_MOSCCR & R_SYSTEM_MOSCCR_MOSTP_Msk ) ) {
        // Main oscillator selected
        R_SYSTEM->MOSCCR_b.MOSTP = 1; // Stop XTAL
        R_SYSTEM->MOMCR = VALUE_SYSTEM_MOMCR;
        R_SYSTEM->MOSCWTCR = VALUE_SYSTEM_MOSCWTCR;
        R_SYSTEM->MOSCCR_b.MOSTP = 0; // Start XTAL
        uint8_t check = R_SYSTEM->MOSCCR; // Read MOSTP

        while ( !( R_SYSTEM->OSCSF_b.MOSCSF ) ) {
            // Wait for XTAL to stabilize
        }

        if ( !( VALUE_SYSTEM_PLLCR & R_SYSTEM_PLLCR_PLLSTP_Msk ) ) {
            R_SYSTEM->PLLCR_b.PLLSTP = 1; // PLL is stopped
            R_SYSTEM->PLLCCR2 = VALUE_SYSTEM_PLLCCR2;
            R_SYSTEM->PLLCR_b.PLLSTP = 0; // PLL is operating

            while ( !( R_SYSTEM->OSCSF_b.PLLSF ) ) {
                // Wait for PLL to stabilize
            }
        } else {
            R_SYSTEM->PLLCR_b.PLLSTP = 1; // PLL is stopped
        }
    }

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

    if ( !( VALUE_SYSTEM_SOSCCR & R_SYSTEM_SOSCCR_SOSTP_Msk ) ) {
        R_SYSTEM->SOSCCR_b.SOSTP = 1; // Stop SOSC
        R_SYSTEM->SOMCR = VALUE_SYSTEM_SOMCR;
        R_SYSTEM->SOSCCR_b.SOSTP = 0; // Start SOSC
    }

    R_SYSTEM->SCKSCR = VALUE_SYSTEM_SCKSCR;

    if ( VALUE_SYSTEM_CKOCR & R_SYSTEM_CKOCR_CKOEN_Msk ) {
        R_SYSTEM->CKOCR = VALUE_SYSTEM_CKOCR & ( R_SYSTEM_CKOCR_CKODIV_Msk | R_SYSTEM_CKOCR_CKOSEL_Msk );
        R_SYSTEM->CKOCR_b.CKOEN = 1; // Enable clock out
    }

    R_SYSTEM->SCKDIVCR = VALUE_SYSTEM_SCKDIVCR;

    // Lock write protection register
    R_SYSTEM->PRCR = (uint16_t) BSP_PRV_PRCR_LOCK;
}