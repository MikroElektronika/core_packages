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

extern uint32_t __ram_from_flash$$Load;
extern uint32_t __ram_from_flash$$Base;
extern uint32_t __ram_from_flash$$Limit;
extern uint32_t __ram_zero$$Base;
extern uint32_t __ram_zero$$Limit;

extern void (* __init_array_start[])(void);
extern void (* __init_array_end[])(void);

#define BSP_CORTEX_VECTOR_TABLE_ENTRIES    (16U)
#define BSP_VECTOR_TABLE_MAX_ENTRIES       (112U)
#define BSP_ICU_VECTOR_MAX_ENTRIES         (BSP_VECTOR_TABLE_MAX_ENTRIES - BSP_CORTEX_VECTOR_TABLE_ENTRIES)
#define BSP_WEAK_REFERENCE                 __attribute__((weak))

typedef enum e_elc_event_ra6e2
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
    ELC_EVENT_ICU_IRQ13                     = (0x00E), // External pin interrupt 13
    ELC_EVENT_ICU_IRQ14                     = (0x00F), // External pin interrupt 14
    ELC_EVENT_DMAC0_INT                     = (0x020), // DMAC0 transfer end
    ELC_EVENT_DMAC1_INT                     = (0x021), // DMAC1 transfer end
    ELC_EVENT_DMAC2_INT                     = (0x022), // DMAC2 transfer end
    ELC_EVENT_DMAC3_INT                     = (0x023), // DMAC3 transfer end
    ELC_EVENT_DMAC4_INT                     = (0x024), // DMAC4 transfer end
    ELC_EVENT_DMAC5_INT                     = (0x025), // DMAC5 transfer end
    ELC_EVENT_DMAC6_INT                     = (0x026), // DMAC6 transfer end
    ELC_EVENT_DMAC7_INT                     = (0x027), // DMAC7 transfer end
    ELC_EVENT_DTC_COMPLETE                  = (0x029), // DTC transfer complete
    ELC_EVENT_DMA_TRANSERR                  = (0x02B), // DMA/DTC transfer error
    ELC_EVENT_ICU_SNOOZE_CANCEL             = (0x02D), // Canceling from Snooze mode
    ELC_EVENT_FCU_FIFERR                    = (0x030), // Flash access error interrupt
    ELC_EVENT_FCU_FRDYI                     = (0x031), // Flash ready interrupt
    ELC_EVENT_LVD_LVD1                      = (0x038), // Voltage monitor 1 interrupt
    ELC_EVENT_LVD_LVD2                      = (0x039), // Voltage monitor 2 interrupt
    ELC_EVENT_CGC_MOSC_STOP                 = (0x03B), // Main Clock oscillation stop
    ELC_EVENT_LPM_SNOOZE_REQUEST            = (0x03C), // Snooze entry
    ELC_EVENT_AGT0_INT                      = (0x040), // AGT interrupt
    ELC_EVENT_AGT0_COMPARE_A                = (0x041), // Compare match A
    ELC_EVENT_AGT0_COMPARE_B                = (0x042), // Compare match B
    ELC_EVENT_AGT1_INT                      = (0x043), // AGT interrupt
    ELC_EVENT_AGT1_COMPARE_A                = (0x044), // Compare match A
    ELC_EVENT_AGT1_COMPARE_B                = (0x045), // Compare match B
    ELC_EVENT_IWDT_UNDERFLOW                = (0x052), // IWDT underflow
    ELC_EVENT_WDT_UNDERFLOW                 = (0x053), // WDT underflow
    ELC_EVENT_RTC_ALARM                     = (0x054), // Alarm interrupt
    ELC_EVENT_RTC_PERIOD                    = (0x055), // Periodic interrupt
    ELC_EVENT_RTC_CARRY                     = (0x056), // Carry interrupt
    ELC_EVENT_CAN_RXF                       = (0x059), // Global receive FIFO interrupt
    ELC_EVENT_CAN_GLERR                     = (0x05A), // Global error
    ELC_EVENT_CAN_DMAREQ0                   = (0x05B), // RX fifo DMA request 0
    ELC_EVENT_CAN_DMAREQ1                   = (0x05C), // RX fifo DMA request 1
    ELC_EVENT_CAN0_TX                       = (0x063), // Transmit interrupt
    ELC_EVENT_CAN0_CHERR                    = (0x064), // Channel  error
    ELC_EVENT_CAN0_COMFRX                   = (0x065), // Common FIFO receive interrupt
    ELC_EVENT_CAN0_CF_DMAREQ                = (0x066), // Channel  DMA request
    ELC_EVENT_CAN0_RXMB                     = (0x067), // Receive message buffer interrupt
    ELC_EVENT_USBFS_INT                     = (0x06D), // USBFS interrupt
    ELC_EVENT_USBFS_RESUME                  = (0x06E), // USBFS resume interrupt
    ELC_EVENT_SSI0_TXI                      = (0x08A), // Transmit data empty
    ELC_EVENT_SSI0_RXI                      = (0x08B), // Receive data full
    ELC_EVENT_SSI0_INT                      = (0x08D), // Error interrupt
    ELC_EVENT_CAC_FREQUENCY_ERROR           = (0x09E), // Frequency error interrupt
    ELC_EVENT_CAC_MEASUREMENT_END           = (0x09F), // Measurement end interrupt
    ELC_EVENT_CAC_OVERFLOW                  = (0x0A0), // Overflow interrupt
    ELC_EVENT_CEC_INTDA                     = (0x0AB), // Data interrupt
    ELC_EVENT_CEC_INTCE                     = (0x0AC), // Communication complete interrupt
    ELC_EVENT_CEC_INTERR                    = (0x0AD), // Error interrupt
    ELC_EVENT_IOPORT_EVENT_1                = (0x0B1), // Port 1 event
    ELC_EVENT_IOPORT_EVENT_2                = (0x0B2), // Port 2 event
    ELC_EVENT_IOPORT_EVENT_3                = (0x0B3), // Port 3 event
    ELC_EVENT_IOPORT_EVENT_4                = (0x0B4), // Port 4 event
    ELC_EVENT_ELC_SOFTWARE_EVENT_0          = (0x0B5), // Software event 0
    ELC_EVENT_ELC_SOFTWARE_EVENT_1          = (0x0B6), // Software event 1
    ELC_EVENT_POEG0_EVENT                   = (0x0B7), // Port Output disable 0 interrupt
    ELC_EVENT_POEG1_EVENT                   = (0x0B8), // Port Output disable 1 interrupt
    ELC_EVENT_POEG2_EVENT                   = (0x0B9), // Port Output disable 2 interrupt
    ELC_EVENT_POEG3_EVENT                   = (0x0BA), // Port Output disable 3 interrupt
    ELC_EVENT_GPT0_CAPTURE_COMPARE_A        = (0x0C0), // Capture/Compare match A
    ELC_EVENT_GPT0_CAPTURE_COMPARE_B        = (0x0C1), // Capture/Compare match B
    ELC_EVENT_GPT0_COMPARE_C                = (0x0C2), // Compare match C
    ELC_EVENT_GPT0_COMPARE_D                = (0x0C3), // Compare match D
    ELC_EVENT_GPT0_COMPARE_E                = (0x0C4), // Compare match E
    ELC_EVENT_GPT0_COMPARE_F                = (0x0C5), // Compare match F
    ELC_EVENT_GPT0_COUNTER_OVERFLOW         = (0x0C6), // Overflow
    ELC_EVENT_GPT0_COUNTER_UNDERFLOW        = (0x0C7), // Underflow
    ELC_EVENT_GPT0_PC                       = (0x0C8), // Period count function finish
    ELC_EVENT_GPT0_AD_TRIG_A                = (0x0C9), // A/D converter start request A
    ELC_EVENT_GPT0_AD_TRIG_B                = (0x0CA), // A/D converter start request B
    ELC_EVENT_GPT1_CAPTURE_COMPARE_A        = (0x0CB), // Capture/Compare match A
    ELC_EVENT_GPT1_CAPTURE_COMPARE_B        = (0x0CC), // Capture/Compare match B
    ELC_EVENT_GPT1_COMPARE_C                = (0x0CD), // Compare match C
    ELC_EVENT_GPT1_COMPARE_D                = (0x0CE), // Compare match D
    ELC_EVENT_GPT1_COMPARE_E                = (0x0CF), // Compare match E
    ELC_EVENT_GPT1_COMPARE_F                = (0x0D0), // Compare match F
    ELC_EVENT_GPT1_COUNTER_OVERFLOW         = (0x0D1), // Overflow
    ELC_EVENT_GPT1_COUNTER_UNDERFLOW        = (0x0D2), // Underflow
    ELC_EVENT_GPT1_PC                       = (0x0D3), // Period count function finish
    ELC_EVENT_GPT1_AD_TRIG_A                = (0x0D4), // A/D converter start request A
    ELC_EVENT_GPT1_AD_TRIG_B                = (0x0D5), // A/D converter start request B
    ELC_EVENT_GPT2_CAPTURE_COMPARE_A        = (0x0D6), // Capture/Compare match A
    ELC_EVENT_GPT2_CAPTURE_COMPARE_B        = (0x0D7), // Capture/Compare match B
    ELC_EVENT_GPT2_COMPARE_C                = (0x0D8), // Compare match C
    ELC_EVENT_GPT2_COMPARE_D                = (0x0D9), // Compare match D
    ELC_EVENT_GPT2_COMPARE_E                = (0x0DA), // Compare match E
    ELC_EVENT_GPT2_COMPARE_F                = (0x0DB), // Compare match F
    ELC_EVENT_GPT2_COUNTER_OVERFLOW         = (0x0DC), // Overflow
    ELC_EVENT_GPT2_COUNTER_UNDERFLOW        = (0x0DD), // Underflow
    ELC_EVENT_GPT2_AD_TRIG_A                = (0x0DF), // A/D converter start request A
    ELC_EVENT_GPT2_AD_TRIG_B                = (0x0E0), // A/D converter start request B
    ELC_EVENT_GPT3_CAPTURE_COMPARE_A        = (0x0E1), // Capture/Compare match A
    ELC_EVENT_GPT3_CAPTURE_COMPARE_B        = (0x0E2), // Capture/Compare match B
    ELC_EVENT_GPT3_COMPARE_C                = (0x0E3), // Compare match C
    ELC_EVENT_GPT3_COMPARE_D                = (0x0E4), // Compare match D
    ELC_EVENT_GPT3_COMPARE_E                = (0x0E5), // Compare match E
    ELC_EVENT_GPT3_COMPARE_F                = (0x0E6), // Compare match F
    ELC_EVENT_GPT3_COUNTER_OVERFLOW         = (0x0E7), // Overflow
    ELC_EVENT_GPT3_COUNTER_UNDERFLOW        = (0x0E8), // Underflow
    ELC_EVENT_GPT3_AD_TRIG_A                = (0x0EA), // A/D converter start request A
    ELC_EVENT_GPT3_AD_TRIG_B                = (0x0EB), // A/D converter start request B
    ELC_EVENT_GPT4_CAPTURE_COMPARE_A        = (0x0EC), // Capture/Compare match A
    ELC_EVENT_GPT4_CAPTURE_COMPARE_B        = (0x0ED), // Capture/Compare match B
    ELC_EVENT_GPT4_COMPARE_C                = (0x0EE), // Compare match C
    ELC_EVENT_GPT4_COMPARE_D                = (0x0EF), // Compare match D
    ELC_EVENT_GPT4_COMPARE_E                = (0x0F0), // Compare match E
    ELC_EVENT_GPT4_COMPARE_F                = (0x0F1), // Compare match F
    ELC_EVENT_GPT4_COUNTER_OVERFLOW         = (0x0F2), // Overflow
    ELC_EVENT_GPT4_COUNTER_UNDERFLOW        = (0x0F3), // Underflow
    ELC_EVENT_GPT4_PC                       = (0x0F4), // Period count function finish
    ELC_EVENT_GPT4_AD_TRIG_A                = (0x0F5), // A/D converter start request A
    ELC_EVENT_GPT4_AD_TRIG_B                = (0x0F6), // A/D converter start request B
    ELC_EVENT_GPT5_CAPTURE_COMPARE_A        = (0x0F7), // Capture/Compare match A
    ELC_EVENT_GPT5_CAPTURE_COMPARE_B        = (0x0F8), // Capture/Compare match B
    ELC_EVENT_GPT5_COMPARE_C                = (0x0F9), // Compare match C
    ELC_EVENT_GPT5_COMPARE_D                = (0x0FA), // Compare match D
    ELC_EVENT_GPT5_COMPARE_E                = (0x0FB), // Compare match E
    ELC_EVENT_GPT5_COMPARE_F                = (0x0FC), // Compare match F
    ELC_EVENT_GPT5_COUNTER_OVERFLOW         = (0x0FD), // Overflow
    ELC_EVENT_GPT5_COUNTER_UNDERFLOW        = (0x0FE), // Underflow
    ELC_EVENT_GPT5_PC                       = (0x0FF), // Period count function finish
    ELC_EVENT_GPT5_AD_TRIG_A                = (0x100), // A/D converter start request A
    ELC_EVENT_GPT5_AD_TRIG_B                = (0x101), // A/D converter start request B
    ELC_EVENT_OPS_UVW_EDGE                  = (0x15C), // UVW edge event
    ELC_EVENT_ADC0_SCAN_END                 = (0x160), // End of A/D scanning operation
    ELC_EVENT_ADC0_SCAN_END_B               = (0x161), // A/D scan end interrupt for group B
    ELC_EVENT_ADC0_WINDOW_A                 = (0x162), // Window A Compare match interrupt
    ELC_EVENT_ADC0_WINDOW_B                 = (0x163), // Window B Compare match interrupt
    ELC_EVENT_ADC0_COMPARE_MATCH            = (0x164), // Compare match
    ELC_EVENT_ADC0_COMPARE_MISMATCH         = (0x165), // Compare mismatch
    ELC_EVENT_SCI0_RXI                      = (0x180), // Receive data full
    ELC_EVENT_SCI0_TXI                      = (0x181), // Transmit data empty
    ELC_EVENT_SCI0_TEI                      = (0x182), // Transmit end
    ELC_EVENT_SCI0_ERI                      = (0x183), // Receive error
    ELC_EVENT_SCI0_AM                       = (0x184), // Address match event
    ELC_EVENT_SCI0_RXI_OR_ERI               = (0x185), // Receive data full/Receive error
    ELC_EVENT_SCI9_RXI                      = (0x1B6), // Receive data full
    ELC_EVENT_SCI9_TXI                      = (0x1B7), // Transmit data empty
    ELC_EVENT_SCI9_TEI                      = (0x1B8), // Transmit end
    ELC_EVENT_SCI9_ERI                      = (0x1B9), // Receive error
    ELC_EVENT_SCI9_AM                       = (0x1BA), // Address match event
    ELC_EVENT_SPI0_RXI                      = (0x1C4), // Receive buffer full
    ELC_EVENT_SPI0_TXI                      = (0x1C5), // Transmit buffer empty
    ELC_EVENT_SPI0_IDLE                     = (0x1C6), // Idle
    ELC_EVENT_SPI0_ERI                      = (0x1C7), // Error
    ELC_EVENT_SPI0_TEI                      = (0x1C8), // Transmission complete event
    ELC_EVENT_SPI1_RXI                      = (0x1C9), // Receive buffer full
    ELC_EVENT_SPI1_TXI                      = (0x1CA), // Transmit buffer empty
    ELC_EVENT_SPI1_IDLE                     = (0x1CB), // Idle
    ELC_EVENT_SPI1_ERI                      = (0x1CC), // Error
    ELC_EVENT_SPI1_TEI                      = (0x1CD), // Transmission complete event
    ELC_EVENT_CAN0_MRAM_ERI                 = (0x1D0), // CANFD0 ECC error
    ELC_EVENT_QSPI_INT                      = (0x1DA), // QSPI interrupt
    ELC_EVENT_DOC_INT                       = (0x1DB), // Data operation circuit interrupt
    ELC_EVENT_I3C0_RESPONSE                 = (0x1DC), // Response status buffer full
    ELC_EVENT_I3C0_COMMAND                  = (0x1DD), // Command buffer empty
    ELC_EVENT_I3C0_IBI                      = (0x1DE), // IBI status buffer full
    ELC_EVENT_I3C0_RX                       = (0x1DF), // Receive
    ELC_EVENT_IICB0_RXI                     = (0x1DF), // Receive
    ELC_EVENT_I3C0_TX                       = (0x1E0), // Transmit
    ELC_EVENT_IICB0_TXI                     = (0x1E0), // Transmit
    ELC_EVENT_I3C0_RCV_STATUS               = (0x1E1), // Receive status buffer full
    ELC_EVENT_I3C0_HRESP                    = (0x1E2), // High priority response queue full
    ELC_EVENT_I3C0_HCMD                     = (0x1E3), // High priority command queue empty
    ELC_EVENT_I3C0_HRX                      = (0x1E4), // High priority rx data buffer full
    ELC_EVENT_I3C0_HTX                      = (0x1E5), // High priority tx data buffer empty
    ELC_EVENT_I3C0_TEND                     = (0x1E6), // Transmit end
    ELC_EVENT_IICB0_TEI                     = (0x1E6), // Transmit end
    ELC_EVENT_I3C0_EEI                      = (0x1E7), // Error
    ELC_EVENT_IICB0_ERI                     = (0x1E7), // Error
    ELC_EVENT_I3C0_STEV                     = (0x1E8), // Synchronous timing
    ELC_EVENT_I3C0_MREFOVF                  = (0x1E9), // MREF counter overflow
    ELC_EVENT_I3C0_MREFCPT                  = (0x1EA), // MREF capture
    ELC_EVENT_I3C0_AMEV                     = (0x1EB), // Additional master-initiated bus event
    ELC_EVENT_I3C0_WU                       = (0x1EC), // Wake-up Condition Detection interrupt
    ELC_EVENT_TRNG_RDREQ                    = (0x1F3)  // TRNG Read Request
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

#define CGC_MAINCLOCK_DRIVE_RESERVED_MASK   (0x0U)
#define CGC_MAINCLOCK_DRIVE                 (0x3U | CGC_MAINCLOCK_DRIVE_RESERVED_MASK)
#define BSP_FEATURE_CGC_MODRV_SHIFT         (R_SYSTEM_MOMCR_MODRV0_Pos)
#define BSP_FEATURE_CGC_MODRV_MASK          (R_SYSTEM_MOMCR_MODRV0_Msk | CGC_MAINCLOCK_DRIVE_RESERVED_MASK)
#define BSP_PRV_MODRV                       ((CGC_MAINCLOCK_DRIVE << BSP_FEATURE_CGC_MODRV_SHIFT) & \
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

#define BSP_PLACE_IN_SECTION(x)            __attribute__((section(x))) __attribute__((__used__))
#define BSP_DONT_REMOVE                    __attribute__((used))

#define BSP_SECTION_ID_CODE                ".id_code"
#define BSP_SECTION_ROM_REGISTERS          ".rom_registers"

#define BSP_FEATURE_FLASH_SUPPORTS_ID_CODE 1
#if BSP_FEATURE_FLASH_SUPPORTS_ID_CODE == 1
#define BSP_CFG_ID_CODE_LONG_1 (0xFFFFFFFF)
#define BSP_CFG_ID_CODE_LONG_2 (0xFFFFFFFF)
#define BSP_CFG_ID_CODE_LONG_3 (0xFFFFFFFF)
#define BSP_CFG_ID_CODE_LONG_4 (0xffFFFFFF)
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
#define HOCO_ENABLE (VALUE_SYSTEM_HOCOCR & 0x1)
#define HOCO_FREQ (VALUE_SYSTEM_HOCOCR2 & 0x3)

#define BSP_CFG_ROM_REG_OFS1                (0xFFFFFEF8 | (1 << 2) | (3) |  (1 << 8))   // TODO HOCO options
#define BSP_CFG_HOCO_FREQUENCY              (HOCO_FREQ)                                 // TODO HOCO options
#define BSP_FEATURE_BSP_OFS1_HOCOFRQ_MASK   (0xFFFFF9FFUL)
#define BSP_FEATURE_BSP_OFS1_HOCOFRQ_OFFSET (9UL)

#define BSP_ROM_REG_OFS1_SETTING \
    (((uint32_t) BSP_CFG_ROM_REG_OFS1 & BSP_FEATURE_BSP_OFS1_HOCOFRQ_MASK) | \
     ((uint32_t) BSP_CFG_HOCO_FREQUENCY << BSP_FEATURE_BSP_OFS1_HOCOFRQ_OFFSET))

/***********************************************************************
 * MPU Configuration
 ***********************************************************************/
#define BSP_CFG_USE_LOW_VOLTAGE_MODE              (0)

#define BSP_CFG_ROM_REG_MPU_PC0_ENABLE            (1)
#define BSP_CFG_ROM_REG_MPU_PC0_START             (0xFFFFFFFC)
#define BSP_CFG_ROM_REG_MPU_PC0_END               (0xFFFFFFFF)

#define BSP_CFG_ROM_REG_MPU_PC1_ENABLE            (1)
#define BSP_CFG_ROM_REG_MPU_PC1_START             (0xFFFFFFFC)
#define BSP_CFG_ROM_REG_MPU_PC1_END               (0xFFFFFFFF)

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

    // Lock VBTCR1 register
    R_SYSTEM->PRCR = (uint16_t) BSP_PRV_PRCR_LOCK;

    // BSP clock init start
    R_SYSTEM->PRCR = (uint16_t) BSP_PRV_PRCR_UNLOCK;
    // Flash cache disable
    R_FCACHE->FCACHEE = 0U;

    // Clock setting
    system_clock_configuration();

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

    memcpy(
        &__ram_from_flash$$Base,
        &__ram_from_flash$$Load,
        (uint32_t)&__ram_from_flash$$Limit - (uint32_t)&__ram_from_flash$$Base
    );

    memset(
        &__ram_zero$$Base,
        0,
        (uint32_t)&__ram_zero$$Limit - (uint32_t)&__ram_zero$$Base
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

    // Disable cache before modifying SOPCCR or OPCCR
    R_FCACHE->FCACHEE = 0U;

    R_SYSTEM->OPCCR = VALUE_SYSTEM_OPCCR;

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
    }

    if ( !( VALUE_SYSTEM_SOSCCR & R_SYSTEM_SOSCCR_SOSTP_Msk ) ) {
        R_SYSTEM->SOSCCR_b.SOSTP = 1; // Stop SOSC
        R_SYSTEM->SOMCR = VALUE_SYSTEM_SOMCR;
        R_SYSTEM->SOSCCR_b.SOSTP = 0; // Start SOSC
    }

    if ( !( VALUE_SYSTEM_HOCOCR & R_SYSTEM_HOCOCR_HCSTP_Msk ) ) {
        if( 0x2 == ( VALUE_SYSTEM_HOCOCR2 & 0x3 ) ) // 20MHz
        {
            R_SYSTEM->FLLCR2_b.FLLCNTL = 0x263;
        } else if ( 0x1 == ( VALUE_SYSTEM_HOCOCR2 & 0x3 ) ) // 18MHz
        {
            R_SYSTEM->FLLCR2_b.FLLCNTL = 0x226;
        } else if ( 0x0 == ( VALUE_SYSTEM_HOCOCR2 & 0x3 ) ) // 16MHz
        {
            R_SYSTEM->FLLCR2_b.FLLCNTL = 0x1E9;
        }

        R_SYSTEM->FLLCR1_b.FLLEN = 0x1;

        R_SYSTEM->HOCOCR2 = VALUE_SYSTEM_HOCOCR2;
        R_SYSTEM->HOCOCR_b.HCSTP = 0; // Start HOCO

        while ( !( R_SYSTEM->OSCSF_b.HOCOSF ) ) {
            // Wait for HOCO to stabilize
        }
    }

    if ( !( VALUE_SYSTEM_PLLCR & R_SYSTEM_PLLCR_PLLSTP_Msk ) ) {
        R_SYSTEM->PLLCR_b.PLLSTP = 1; // PLL is stopped
        R_SYSTEM->PLLCCR = VALUE_SYSTEM_PLLCCR;
        R_SYSTEM->PLLCR_b.PLLSTP = 0; // PLL is operating

        while ( !( R_SYSTEM->OSCSF_b.PLLSF ) ) {
            // Wait for PLL to stabilize
        }
    } else {
        R_SYSTEM->PLLCR_b.PLLSTP = 1; // PLL is stopped
    }

    R_SYSTEM->LOCOCR = VALUE_SYSTEM_LOCOCR;

    R_SYSTEM->MOCOCR = VALUE_SYSTEM_MOCOCR;

    Delay_1ms();

    R_SYSTEM->SCKSCR = VALUE_SYSTEM_SCKSCR;

    Delay_1ms();

    if ( 150000 < FOSC_KHZ_VALUE ) {
        R_FCACHE->FLWT = 3; // 3 waits
    } else if ( 100000 < FOSC_KHZ_VALUE ) {
        R_FCACHE->FLWT = 2; // 2 waits
    } else if ( 50000 < FOSC_KHZ_VALUE ) {
        R_FCACHE->FLWT = 1; // 1 wait
    } else {
        R_FCACHE->FLWT = 0; // 0 waits
    }

    R_SYSTEM->SCKDIVCR = VALUE_SYSTEM_SCKDIVCR;

    if ( VALUE_SYSTEM_CKOCR & R_SYSTEM_CKOCR_CKOEN_Msk ) {
        R_SYSTEM->CKOCR = VALUE_SYSTEM_CKOCR & ( R_SYSTEM_CKOCR_CKODIV_Msk | R_SYSTEM_CKOCR_CKOSEL_Msk );
        R_SYSTEM->CKOCR_b.CKOEN = 1; // Enable clock out
    }

    // Lock write protection register
    R_SYSTEM->PRCR = (uint16_t) BSP_PRV_PRCR_LOCK;
}
