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
#define     __IM     volatile const      /*! Defines 'read only' structure member permissions */
#define     __OM     volatile            /*! Defines 'write only' structure member permissions */
#define     __IOM    volatile            /*! Defines 'read / write' structure member permissions */

#define SCnSCB              ((SCnSCB_Type    *)     SCS_BASE      )   /*!< System control Register not in SCB */
#define SCB                 ((SCB_Type       *)     SCB_BASE      )   /*!< SCB configuration struct */
#define SCS_BASE            (0xE000E000UL)                            /*!< System Control Space Base Address */
#define SCB_BASE            (SCS_BASE +  0x0D00UL)                    /*!< System Control Block Base Address */

typedef struct
{
  __IM  uint32_t CPUID;                  /*!< Offset: 0x000 (R/ )  CPUID Base Register */
  __IOM uint32_t ICSR;                   /*!< Offset: 0x004 (R/W)  Interrupt Control and State Register */
  __IOM uint32_t VTOR;                   /*!< Offset: 0x008 (R/W)  Vector Table Offset Register */
  __IOM uint32_t AIRCR;                  /*!< Offset: 0x00C (R/W)  Application Interrupt and Reset Control Register */
  __IOM uint32_t SCR;                    /*!< Offset: 0x010 (R/W)  System Control Register */
  __IOM uint32_t CCR;                    /*!< Offset: 0x014 (R/W)  Configuration Control Register */
  __IOM uint8_t  SHP[12U];               /*!< Offset: 0x018 (R/W)  System Handlers Priority Registers (4-7, 8-11, 12-15) */
  __IOM uint32_t SHCSR;                  /*!< Offset: 0x024 (R/W)  System Handler Control and State Register */
  __IOM uint32_t CFSR;                   /*!< Offset: 0x028 (R/W)  Configurable Fault Status Register */
  __IOM uint32_t HFSR;                   /*!< Offset: 0x02C (R/W)  HardFault Status Register */
  __IOM uint32_t DFSR;                   /*!< Offset: 0x030 (R/W)  Debug Fault Status Register */
  __IOM uint32_t MMFAR;                  /*!< Offset: 0x034 (R/W)  MemManage Fault Address Register */
  __IOM uint32_t BFAR;                   /*!< Offset: 0x038 (R/W)  BusFault Address Register */
  __IOM uint32_t AFSR;                   /*!< Offset: 0x03C (R/W)  Auxiliary Fault Status Register */
  __IM  uint32_t PFR[2U];                /*!< Offset: 0x040 (R/ )  Processor Feature Register */
  __IM  uint32_t DFR;                    /*!< Offset: 0x048 (R/ )  Debug Feature Register */
  __IM  uint32_t ADR;                    /*!< Offset: 0x04C (R/ )  Auxiliary Feature Register */
  __IM  uint32_t MMFR[4U];               /*!< Offset: 0x050 (R/ )  Memory Model Feature Register */
  __IM  uint32_t ISAR[5U];               /*!< Offset: 0x060 (R/ )  Instruction Set Attributes Register */
        uint32_t RESERVED0[5U];
  __IOM uint32_t CPACR;                  /*!< Offset: 0x088 (R/W)  Coprocessor Access Control Register */
} SCB_Type;
extern void * __Vectors[];
/* Key code for writing PRCR register. */
#define BSP_PRV_PRCR_KEY                              (0xA500U)
#define BSP_PRV_PRCR_PRC1_UNLOCK                      ((BSP_PRV_PRCR_KEY) | 0x2U)
#define BSP_PRV_PRCR_LOCK                             ((BSP_PRV_PRCR_KEY) | 0x0U)
#define BSP_PRV_STACK_LIMIT                           ((uint32_t) __Vectors[0] - BSP_CFG_STACK_MAIN_BYTES)
#define BSP_PRV_STACK_TOP                             ((uint32_t) __Vectors[0])
#define BSP_TZ_STACK_SEAL_VALUE                       (0xFEF5EDA5)

#define ARMV8_MPU_REGION_MIN_SIZE                     (32U)

#define BSP_PRV_PRCR_UNLOCK                     ((BSP_PRV_PRCR_KEY) | 0x3U)
#define BSP_PRV_PRCR_LOCK                       ((BSP_PRV_PRCR_KEY) | 0x0U)

#define BSP_STACK_POINTER_MONITOR_NMI_ON_DETECTION    (0xA500U)
#define BSP_CFG_STACK_MAIN_BYTES (0x400)

extern uint32_t __etext;
extern uint32_t __data_start__;
extern uint32_t __data_end__;
extern uint32_t __bss_start__;
extern uint32_t __bss_end__;
extern uint32_t __StackLimit;
extern uint32_t __StackTop;
extern void (* __init_array_start[])(void);

extern void (* __init_array_end[])(void);
#define BSP_CORTEX_VECTOR_TABLE_ENTRIES    (16U)
#define BSP_VECTOR_TABLE_MAX_ENTRIES       (48U)
#define BSP_CFG_INLINE_IRQ_FUNCTIONS       (1)
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


#define CGC_MAINCLOCK_DRIVE_RESERVED_MASK   (0x0U)
#define CGC_MAINCLOCK_DRIVE                 (0x0U | CGC_MAINCLOCK_DRIVE_RESERVED_MASK)
#define BSP_FEATURE_CGC_MODRV_SHIFT         (R_SYSTEM_MOMCR_MODRV1_Pos)
#define BSP_FEATURE_CGC_MODRV_MASK          (R_SYSTEM_MOMCR_MODRV1_Msk | CGC_MAINCLOCK_DRIVE_RESERVED_MASK)
#define BSP_PRV_MODRV                       ((CGC_MAINCLOCK_DRIVE << BSP_FEATURE_CGC_MODRV_SHIFT) & \
                                             BSP_FEATURE_CGC_MODRV_MASK)
#define BSP_PRV_AUTODRVEN                   (0U)
#define BSP_CLOCK_CFG_MAIN_OSC_CLOCK_SOURCE (0)
#define BSP_PRV_MOSEL                       (BSP_CLOCK_CFG_MAIN_OSC_CLOCK_SOURCE << R_SYSTEM_MOMCR_MOSEL_Pos)
#define BSP_PRV_MOMCR (BSP_PRV_MODRV | BSP_PRV_MOSEL | BSP_PRV_AUTODRVEN)
#define BSP_CLOCK_CFG_MAIN_OSC_WAIT        (9)
#define BSP_PRV_MEMWAIT_ONE_WAIT_CYCLES     (1U)

#define BSP_CLOCKS_SYS_CLOCK_DIV_1                   (0)  // System clock divided by 1.
#define BSP_CLOCKS_SYS_CLOCK_DIV_2                   (1)  // System clock divided by 2.
#define BSP_CFG_ICLK_DIV (BSP_CLOCKS_SYS_CLOCK_DIV_1) /* ICLK Div /1 */
#define BSP_CFG_PCLKA_DIV (BSP_CLOCKS_SYS_CLOCK_DIV_1) /* PCLKA Div /1 */
#define BSP_CFG_PCLKB_DIV (BSP_CLOCKS_SYS_CLOCK_DIV_2) /* PCLKB Div /2 */
#define BSP_CFG_PCLKC_DIV (BSP_CLOCKS_SYS_CLOCK_DIV_1) /* PCLKC Div /1 */
#define BSP_CFG_PCLKD_DIV (BSP_CLOCKS_SYS_CLOCK_DIV_1) /* PCLKD Div /1 */
#define BSP_CFG_FCLK_DIV (BSP_CLOCKS_SYS_CLOCK_DIV_2) /* FCLK Div /2 */
#define BSP_PRV_STARTUP_SCKDIVCR_PCLKE_BITS     (0U)
#define BSP_PRV_STARTUP_SCKDIVCR_PCLKD_BITS     (BSP_CFG_PCLKD_DIV & 0xFU)
#define BSP_PRV_STARTUP_SCKDIVCR_PCLKC_BITS     ((BSP_CFG_PCLKC_DIV & 0xFU) << 4U)
#define BSP_PRV_STARTUP_SCKDIVCR_PCLKB_BITS     ((BSP_CFG_PCLKB_DIV & 0xFU) << 8U)
#define BSP_PRV_STARTUP_SCKDIVCR_PCLKA_BITS     ((BSP_CFG_PCLKA_DIV & 0xFU) << 12U)
#define BSP_PRV_STARTUP_SCKDIVCR_BCLK_BITS      ((BSP_CFG_PCLKB_DIV & 0xFU) << 16U)
#define BSP_PRV_STARTUP_SCKDIVCR_FCLK_BITS      ((BSP_CFG_FCLK_DIV & 0xFU) << 28U)

#define BSP_PRV_STARTUP_SCKDIVCR_ICLK_BITS       ((BSP_CFG_ICLK_DIV & 0xFU) << 24U)
#define BSP_PRV_STARTUP_SCKDIVCR            (BSP_PRV_STARTUP_SCKDIVCR_ICLK_BITS |  \
                                            BSP_PRV_STARTUP_SCKDIVCR_PCLKE_BITS | \
                                            BSP_PRV_STARTUP_SCKDIVCR_PCLKD_BITS | \
                                            BSP_PRV_STARTUP_SCKDIVCR_PCLKC_BITS | \
                                            BSP_PRV_STARTUP_SCKDIVCR_PCLKB_BITS | \
                                            BSP_PRV_STARTUP_SCKDIVCR_PCLKA_BITS | \
                                            BSP_PRV_STARTUP_SCKDIVCR_BCLK_BITS |  \
                                            BSP_PRV_STARTUP_SCKDIVCR_FCLK_BITS)

#define BSP_CLOCKS_SOURCE_CLOCK_MAIN_OSC    (3) // The main oscillator.
#define BSP_CFG_CLKOUT_SOURCE (BSP_CLOCKS_SOURCE_CLOCK_MAIN_OSC) /* CLKOUT Src: XTAL */
#define BSP_CFG_CLOCK_SOURCE (BSP_CLOCKS_SOURCE_CLOCK_MAIN_OSC) /* Clock Src: XTAL */
// #define WEAK_INIT_ATTRIBUTE     __attribute__((weak, alias("bsp_init_internal")))
// void bsp_init(void * p_args) WEAK_INIT_ATTRIBUTE;

#define BSP_IO_PWPR_PFSWE_OFFSET (6)

#define NULL ((void *)0)

// ---------------------------------------------------------

#ifndef BSP_CLOCK_CFG_MAIN_OSC_POPULATED
#define BSP_CLOCK_CFG_MAIN_OSC_POPULATED (1)
#endif

#define SCKSCR_CKSEL_HOCO 0x0
#define SCKSCR_CKSEL_MOCO 0x1
#define SCKSCR_CKSEL_LOCO 0x2
#define SCKSCR_CKSEL_MOSC 0x3
#define SCKSCR_CKSEL_SOSC 0x4
#define SCKSCR_CKSEL_PLL 0x5

// ---------------------------------------------------------
/*
* TODO
*/
static void system_clock_configuration();

// ---------------------------------------------------------
/**
 * Initialize the system
 * @param  none
 * @return none
 * @brief  Set-up and initialize the microcontroller system.
 */

void SystemInit(void)
{
    // R_SYSTEM->OFS0.WDTSTRT &= ~(1<<17 | 1<<1);
    /* Set-up FPU settings. */
    SCB->CPACR |= ((3UL << (10*2)) | (3UL << (11*2)));
    SCB->VTOR = (uint32_t) &__Vectors;

    R_SYSTEM->PRCR = (uint16_t) BSP_PRV_PRCR_PRC1_UNLOCK;
    R_SYSTEM->VBTCR1 = 1U;
    FSP_HARDWARE_REGISTER_WAIT(R_SYSTEM->VBTSR_b.VBTRVLD, 1U);
    /* Lock VBTCR1 register. */
    R_SYSTEM->PRCR = (uint16_t) BSP_PRV_PRCR_LOCK;

    // R_FACI_LP->DFLCTL = 1U; // Warm start

    // Bsp clock init start
    R_SYSTEM->PRCR = (uint16_t) BSP_PRV_PRCR_UNLOCK;
    R_FCACHE->FCACHEE = 0U; // Flash cache disable

    // CLOCK OVDE TREBA DA SE SETUJE
    system_clock_configuration();
    // CLOCK OVDE TREBA DA SE SETUJE

    /* Configure main oscillator drive. */
    R_SYSTEM->MOMCR = BSP_PRV_MOMCR;
    /* Set the stabilization time for XTAL. */
    R_SYSTEM->MOSCWTCR = (uint8_t) BSP_CLOCK_CFG_MAIN_OSC_WAIT;
    // SOSC - JE L' NEOPHODNO?
    // MCUs that support low voltage mode start up in low voltage mode. - JE L' MORA??

    R_SYSTEM->HOCOCR = 1U;
    R_SYSTEM->MOSCCR = 0U;

    FSP_HARDWARE_REGISTER_WAIT(R_SYSTEM->OSCSF_b.MOSCSF, 1U);

    R_SYSTEM->MEMWAIT = BSP_PRV_MEMWAIT_ONE_WAIT_CYCLES;
    R_SYSTEM->SCKDIVCR = BSP_PRV_STARTUP_SCKDIVCR;
    R_SYSTEM->SCKSCR = BSP_CFG_CLOCK_SOURCE;
    // TODO lock ponovo?
    // Bsp clock init end

    R_FCACHE->FCACHEIV = 1U;
    FSP_HARDWARE_REGISTER_WAIT(R_FCACHE->FCACHEIV, 0U);

    /* Enable flash cache. */
    R_FCACHE->FCACHEE = 1U;

    /* To prevent an undesired current draw, this MCU requires a reset
     * of the TRNG circuit after the clocks are initialized */
    // bsp_reset_trng_circuit(); // TODO

    /* Disable MSP monitoring  */
    R_MPU_SPMON->SP[0].CTL = 0;

    /* Setup NMI interrupt  */
    R_MPU_SPMON->SP[0].OAD = BSP_STACK_POINTER_MONITOR_NMI_ON_DETECTION;

    /* Setup start address  */
    R_MPU_SPMON->SP[0].SA = BSP_PRV_STACK_LIMIT;

    /* Setup end address  */
    R_MPU_SPMON->SP[0].EA = BSP_PRV_STACK_TOP;

    /* Set SPEEN bit to enable NMI on stack monitor exception. NMIER bits cannot be cleared after reset, so no need
    * to read-modify-write. */
    R_ICU->NMIER = R_ICU_NMIER_SPEEN_Msk;

    /* Enable MSP monitoring  */
    R_MPU_SPMON->SP[0].CTL = 1U;

    memset(&__bss_start__, 0U, ((uint32_t) &__bss_end__ - (uint32_t) &__bss_start__));
    memcpy(&__data_start__, &__etext, ((uint32_t) &__data_end__ - (uint32_t) &__data_start__));

    int32_t count = __init_array_end - __init_array_start;
    for (int32_t i = 0; i < count; i++)
    {
        __init_array_start[i]();
    }

    // Pin config
    R_PMISC->PWPR = 0;                               ///< Clear BOWI bit - writing to PFSWE bit enabled
    R_PMISC->PWPR = 1U << BSP_IO_PWPR_PFSWE_OFFSET;  ///< Set PFSWE bit - writing to PFS register enabled
    // Pin config


    for (uint32_t i = 0U; i < (BSP_ICU_VECTOR_MAX_ENTRIES - BSP_FEATURE_ICU_FIXED_IELSR_COUNT); i++)
    {
        if (0U != g_interrupt_event_link_select[i])
        {
            R_ICU->IELSR[i] = (uint32_t) g_interrupt_event_link_select[i];
        }
    }
}

static void system_clock_configuration() {
    // R_SYSTEM->MOSCCR_b.MOSTP   = 1;            // Stop XTAL
    // R_SYSTEM->MOMCR_b.MODRV1    = 0;           // 10-20 MHz
    // R_SYSTEM->MOMCR_b.MOSEL    = 0;            // External clock input
    // R_SYSTEM->MOSCWTCR_b.MSTS = 9;             // XTAL wait time
    // R_SYSTEM->MOSCCR_b.MOSTP   = 0;            // Start XTAL
    // while (!(R_SYSTEM->OSCSF_b.MOSCSF));       // Wait for XTAL
    // R_SYSTEM->SCKSCR_b.CKSEL = 3;

    // Unlock write protection register
    R_SYSTEM->PRCR = (uint16_t) BSP_PRV_PRCR_UNLOCK;

    // Disable cache before modifying MEMWAIT, SOPCCR or OPCCR
    R_FCACHE->FCACHEE = 0U;

    // bsp_clock_freq_var_init();

    /*
        - System Clock Division Control Register (SCKDIVCR)
        - System Clock Source Control Register (SCKSCR) ?
        - PLL Clock Control Register 2 (PLLCCR2) ?
        - PLL Control Register (PLLCR) ?
        - Main Clock Oscillator Control Register (MOSCCR) ?
        - Sub-Clock Oscillator Control Register (SOSCCR)
        - Low-Speed On-Chip Oscillator Control Register (LOCOCR)
        - High-Speed On-Chip Oscillator Control Register (HOCOCR)
        - High-Speed On-Chip Oscillator Control Register 2 (HOCOCR2)
        - Middle-Speed On-Chip Oscillator Control Register (MOCOCR)
        - Oscillation Stabilization Flag Register (OSCSF) ?
        - Main Clock Oscillator Wait Control Register (MOSCWTCR) ?
        - High-Speed On-Chip Oscillator Wait Control Register (HOCOWTCR)
        - Main Clock Oscillator Mode Oscillation Control Register (MOMCR) ?
        - Sub-Clock Oscillator Mode Control Register (SOMCR)
        - Clock Out Control Register (CKOCR)
        - USB Clock Control Register (USBCKCR)
    */
    if ( VALUE_SYSTEM_MOSCCR & R_SYSTEM_MOSCCR_MOSTP_Msk ) { // TODO - 0 is for ON, 1 is for OFF - handle this
        // Main oscillator selected
        R_SYSTEM->MOSCCR_b.MOSTP = 1; // Stop XTAL

        if ( VALUE_SYSTEM_MOSCCR & R_SYSTEM_MOMCR_MODRV1_Msk )
            // 1 MHz to 10 MHz
            R_SYSTEM->MOMCR_b.MODRV1 = 1; // 1 MHz to 10 MHz
        else
            // 10 MHz to 20 MHz
            R_SYSTEM->MOMCR_b.MODRV1 = 0; // 10 MHz to 20 MHz

        if ( VALUE_SYSTEM_MOSCCR & R_SYSTEM_MOMCR_MOSEL_Msk )
            // External clock input
            R_SYSTEM->MOMCR_b.MOSEL = 1; // External clock input
        else
            // Resonator
            R_SYSTEM->MOMCR_b.MOSEL = 0; // Resonator

        if ( ( ( VALUE_SYSTEM_MOSCWTCR & R_SYSTEM_MOSCWTCR_MSTS_Msk ) >> R_SYSTEM_MOSCWTCR_MSTS_Pos ) == 0 )
            // Wait time = 2 cycles (0.25 탎)
            R_SYSTEM->MOSCWTCR_b.MSTS = 0;
        else if ( ( ( VALUE_SYSTEM_MOSCWTCR & R_SYSTEM_MOSCWTCR_MSTS_Msk ) >> R_SYSTEM_MOSCWTCR_MSTS_Pos ) == 1 )
            // Wait time = 1024 cycles (128 탎)
            R_SYSTEM->MOSCWTCR_b.MSTS = 1;
        else if ( ( ( VALUE_SYSTEM_MOSCWTCR & R_SYSTEM_MOSCWTCR_MSTS_Msk ) >> R_SYSTEM_MOSCWTCR_MSTS_Pos ) == 2 )
            // Wait time = 2048 cycles (256 탎)
            R_SYSTEM->MOSCWTCR_b.MSTS = 2;
        else if ( ( ( VALUE_SYSTEM_MOSCWTCR & R_SYSTEM_MOSCWTCR_MSTS_Msk ) >> R_SYSTEM_MOSCWTCR_MSTS_Pos ) == 3 )
            // Wait time = 4096 cycles (512 탎)
            R_SYSTEM->MOSCWTCR_b.MSTS = 3;
        else if ( ( ( VALUE_SYSTEM_MOSCWTCR & R_SYSTEM_MOSCWTCR_MSTS_Msk ) >> R_SYSTEM_MOSCWTCR_MSTS_Pos ) == 4 )
            // Wait time = 8192 cycles (1024 탎)
            R_SYSTEM->MOSCWTCR_b.MSTS = 4;
        else if ( ( ( VALUE_SYSTEM_MOSCWTCR & R_SYSTEM_MOSCWTCR_MSTS_Msk ) >> R_SYSTEM_MOSCWTCR_MSTS_Pos ) == 5 )
            // Wait time = 16384 cycles (2048 탎) (value after reset)
            R_SYSTEM->MOSCWTCR_b.MSTS = 5;
        else if ( ( ( VALUE_SYSTEM_MOSCWTCR & R_SYSTEM_MOSCWTCR_MSTS_Msk ) >> R_SYSTEM_MOSCWTCR_MSTS_Pos ) == 6 )
            // Wait time = 32768 cycles (4096 탎)
            R_SYSTEM->MOSCWTCR_b.MSTS = 6;
        else if ( ( ( VALUE_SYSTEM_MOSCWTCR & R_SYSTEM_MOSCWTCR_MSTS_Msk ) >> R_SYSTEM_MOSCWTCR_MSTS_Pos ) == 7 )
            // Wait time = 65536 cycles (8192 탎)
            R_SYSTEM->MOSCWTCR_b.MSTS = 7;
        else if ( ( ( VALUE_SYSTEM_MOSCWTCR & R_SYSTEM_MOSCWTCR_MSTS_Msk ) >> R_SYSTEM_MOSCWTCR_MSTS_Pos ) == 8 )
            // Wait time = 131072 cycles (16384 탎)
            R_SYSTEM->MOSCWTCR_b.MSTS = 8;
        else if ( ( ( VALUE_SYSTEM_MOSCWTCR & R_SYSTEM_MOSCWTCR_MSTS_Msk ) >> R_SYSTEM_MOSCWTCR_MSTS_Pos ) == 9 )
            // Wait time = 262144 cycles (32768 탎)
            R_SYSTEM->MOSCWTCR_b.MSTS = 9;

        R_SYSTEM->MOSCCR_b.MOSTP = 0; // Start XTAL

        while ( !( R_SYSTEM->OSCSF_b.MOSCSF ) ) {
            // Wait for XTAL to stabilize
        }

        if ( VALUE_SYSTEM_PLLCR & R_SYSTEM_PLLCR_PLLSTP_Msk ) { // TODO - 0 is for ON, 1 is for OFF - handle this
            R_SYSTEM->PLLCR_b.PLLSTP = 1; // PLL is stopped

            uint8_t pllmul_value = ( VALUE_SYSTEM_PLLCCR2 & R_SYSTEM_PLLCCR2_PLLMUL_Msk ) >> R_SYSTEM_PLLCCR2_PLLMUL_Pos;
            R_SYSTEM->PLLCCR2_b.PLLMUL = pllmul_value; // PLL Frequency Multiplication Factor Select

            if ( ( VALUE_SYSTEM_PLLCCR2 & R_SYSTEM_PLLCCR2_PLODIV_Msk ) >> R_SYSTEM_PLLCCR2_PLODIV_Pos == 1 )
                // PLL Output Frequency Division Ratio Select
                R_SYSTEM->PLLCCR2_b.PLODIV = 1; // Divide by /2
            else if ( ( VALUE_SYSTEM_PLLCCR2 & R_SYSTEM_PLLCCR2_PLODIV_Msk ) >> R_SYSTEM_PLLCCR2_PLODIV_Pos == 2 )
                R_SYSTEM->PLLCCR2_b.PLODIV = 2; // Divide by /4

            R_SYSTEM->PLLCR_b.PLLSTP = 0; // PLL is operating

            // TODO here or no?
            // R_SYSTEM->SCKSCR_b.CKSEL = SCKSCR_CKSEL_PLL; // PLL is the clock source

            while ( !( R_SYSTEM->OSCSF_b.PLLSF ) ) {
                // Wait for PLL to stabilize
            }
        } else {
            R_SYSTEM->PLLCR_b.PLLSTP = 1; // PLL is stopped

            // TODO here or no?
            // R_SYSTEM->SCKSCR_b.CKSEL = SCKSCR_CKSEL_MOSC; // MOSC is the clock source
        }
    }
    // TODO else ili ne?
    if ( VALUE_SYSTEM_HOCOCR & R_SYSTEM_HOCOCR_HCSTP_Msk ) { // TODO - 0 is for ON, 1 is for OFF - handle this
        R_SYSTEM->HOCOCR_b.HCSTP = 1; // Stop HOCO (until HOCO is fully configured)

        if ( ( VALUE_SYSTEM_HOCOCR2 & R_SYSTEM_HOCOCR2_HCFRQ1_Msk ) >> R_SYSTEM_HOCOCR2_HCFRQ1_Pos == 0 )
            // HOCO Frequency = 24 MHz
            R_SYSTEM->HOCOCR2_b.HCFRQ1 = 0;
        else if ( ( VALUE_SYSTEM_HOCOCR2 & R_SYSTEM_HOCOCR2_HCFRQ1_Msk ) >> R_SYSTEM_HOCOCR2_HCFRQ1_Pos == 2 )
            // HOCO Frequency = 32 MHz
            R_SYSTEM->HOCOCR2_b.HCFRQ1 = 2;
        else if ( ( VALUE_SYSTEM_HOCOCR2 & R_SYSTEM_HOCOCR2_HCFRQ1_Msk ) >> R_SYSTEM_HOCOCR2_HCFRQ1_Pos == 4 )
            // HOCO Frequency = 48 MHz
            R_SYSTEM->HOCOCR2_b.HCFRQ1 = 4;
        else if ( ( VALUE_SYSTEM_HOCOCR2 & R_SYSTEM_HOCOCR2_HCFRQ1_Msk ) >> R_SYSTEM_HOCOCR2_HCFRQ1_Pos == 5 )
            // HOCO Frequency = 64 MHz
            R_SYSTEM->HOCOCR2_b.HCFRQ1 = 5;

        if ( ( VALUE_SYSTEM_HOCOWTCR & R_SYSTEM_HOCOWTCR_HSTS_Msk ) >> R_SYSTEM_HOCOWTCR_HSTS_Pos == 5 )
            // Wait time for 24, 32 or 48 MHz HOCO frequency or low-voltage mode
            R_SYSTEM->HOCOWTCR_b.HSTS = 5;
        else if ( ( VALUE_SYSTEM_HOCOWTCR & R_SYSTEM_HOCOWTCR_HSTS_Msk ) >> R_SYSTEM_HOCOWTCR_HSTS_Pos == 6 )
            // Wait time for 64 MHz HOCO frequency
            R_SYSTEM->HOCOWTCR_b.HSTS = 6;

        R_SYSTEM->HOCOCR_b.HCSTP = 0; // Start HOCO

        while ( !( R_SYSTEM->OSCSF_b.HOCOSF ) ) {
            // Wait for HOCO to stabilize
        }
    }

    if ( VALUE_SYSTEM_LOCOCR & R_SYSTEM_LOCOCR_LCSTP_Msk ) { // TODO - 0 is for ON, 1 is for OFF - handle this
        R_SYSTEM->LOCOCR_b.LCSTP = 0; // Start LOCO
    }

    if ( VALUE_SYSTEM_MOCOCR & R_SYSTEM_MOCOCR_MCSTP_Msk ) { // TODO - 0 is for ON, 1 is for OFF - handle this
        R_SYSTEM->MOCOCR_b.MCSTP = 0; // Start MOCO
    }

    if ( VALUE_SYSTEM_SOSCCR & R_SYSTEM_SOSCCR_SOSTP_Msk ) { // TODO - 0 is for ON, 1 is for OFF - handle this
        R_SYSTEM->SOSCCR_b.SOSTP = 1; // Stop SOSC

        if ( ( VALUE_SYSTEM_SOMCR & R_SYSTEM_SOMCR_SODRV_Msk ) >> R_SYSTEM_SOMCR_SODRV_Pos == 0 )
            // Normal mode
            R_SYSTEM->SOMCR_b.SODRV = 0;
        else if ( ( VALUE_SYSTEM_SOMCR & R_SYSTEM_SOMCR_SODRV_Msk ) >> R_SYSTEM_SOMCR_SODRV_Pos == 1 )
            // Low power mode 1
            R_SYSTEM->SOMCR_b.SODRV = 1;
        else if ( ( VALUE_SYSTEM_SOMCR & R_SYSTEM_SOMCR_SODRV_Msk ) >> R_SYSTEM_SOMCR_SODRV_Pos == 2 )
            // Low power mode 2
            R_SYSTEM->SOMCR_b.SODRV = 2;
        else if ( ( VALUE_SYSTEM_SOMCR & R_SYSTEM_SOMCR_SODRV_Msk ) >> R_SYSTEM_SOMCR_SODRV_Pos == 3 )
            // Low power mode 3
            R_SYSTEM->SOMCR_b.SODRV = 3;

        R_SYSTEM->SOSCCR_b.SOSTP = 0; // Start SOSC
    }

    if ( ( VALUE_SYSTEM_SCKSCR & R_SYSTEM_SCKSCR_CKSEL_Msk ) >> R_SYSTEM_SCKSCR_CKSEL_Pos == 0 )
        // Clock source is HOCO
        R_SYSTEM->SCKSCR_b.CKSEL = 0;
    else if ( ( VALUE_SYSTEM_SCKSCR & R_SYSTEM_SCKSCR_CKSEL_Msk ) >> R_SYSTEM_SCKSCR_CKSEL_Pos == 1 )
        // Clock source is MOCO
        R_SYSTEM->SCKSCR_b.CKSEL = 1;
    else if ( ( VALUE_SYSTEM_SCKSCR & R_SYSTEM_SCKSCR_CKSEL_Msk ) >> R_SYSTEM_SCKSCR_CKSEL_Pos == 2 )
        // Clock source is LOCO
        R_SYSTEM->SCKSCR_b.CKSEL = 2;
    else if ( ( VALUE_SYSTEM_SCKSCR & R_SYSTEM_SCKSCR_CKSEL_Msk ) >> R_SYSTEM_SCKSCR_CKSEL_Pos == 3 )
        // Clock source is MOSC
        R_SYSTEM->SCKSCR_b.CKSEL = 3;
    else if ( ( VALUE_SYSTEM_SCKSCR & R_SYSTEM_SCKSCR_CKSEL_Msk ) >> R_SYSTEM_SCKSCR_CKSEL_Pos == 4 )
        // Clock source is SOSC
        R_SYSTEM->SCKSCR_b.CKSEL = 4;
    else if ( ( VALUE_SYSTEM_SCKSCR & R_SYSTEM_SCKSCR_CKSEL_Msk ) >> R_SYSTEM_SCKSCR_CKSEL_Pos == 5 )
        // Clock source is PLL
        R_SYSTEM->SCKSCR_b.CKSEL = 5;

    if ( VALUE_SYSTEM_CKOCR & R_SYSTEM_CKOCR_CKOEN_Msk ) {
        if ( ( VALUE_SYSTEM_CKOCR & R_SYSTEM_CKOCR_CKOSEL_Msk ) >> R_SYSTEM_CKOCR_CKOSEL_Pos == 0 )
            // Clock out source is HOCO
            R_SYSTEM->CKOCR_b.CKOSEL = 0;
        else if ( ( VALUE_SYSTEM_CKOCR & R_SYSTEM_CKOCR_CKOSEL_Msk ) >> R_SYSTEM_CKOCR_CKOSEL_Pos == 1 )
            // Clock out source is MOCO
            R_SYSTEM->CKOCR_b.CKOSEL = 1;
        else if ( ( VALUE_SYSTEM_CKOCR & R_SYSTEM_CKOCR_CKOSEL_Msk ) >> R_SYSTEM_CKOCR_CKOSEL_Pos == 2 )
            // Clock out source is LOCO
            R_SYSTEM->CKOCR_b.CKOSEL = 2;
        else if ( ( VALUE_SYSTEM_CKOCR & R_SYSTEM_CKOCR_CKOSEL_Msk ) >> R_SYSTEM_CKOCR_CKOSEL_Pos == 3 )
            // Clock out source is MOSC
            R_SYSTEM->CKOCR_b.CKOSEL = 3;
        else if ( ( VALUE_SYSTEM_CKOCR & R_SYSTEM_CKOCR_CKOSEL_Msk ) >> R_SYSTEM_CKOCR_CKOSEL_Pos == 4 )
            // Clock out source is SOSC
            R_SYSTEM->CKOCR_b.CKOSEL = 4;

        if ( ( VALUE_SYSTEM_CKOCR & R_SYSTEM_CKOCR_CKODIV_Msk ) >> R_SYSTEM_CKOCR_CKODIV_Pos == 0 )
            // Clock out input frequency division is 1
            R_SYSTEM->CKOCR_b.CKODIV = 0;
        else if ( ( VALUE_SYSTEM_CKOCR & R_SYSTEM_CKOCR_CKODIV_Msk ) >> R_SYSTEM_CKOCR_CKODIV_Pos == 1 )
            // Clock out input frequency division is 2
            R_SYSTEM->CKOCR_b.CKODIV = 1;
        else if ( ( VALUE_SYSTEM_CKOCR & R_SYSTEM_CKOCR_CKODIV_Msk ) >> R_SYSTEM_CKOCR_CKODIV_Pos == 2 )
            // Clock out input frequency division is 4
            R_SYSTEM->CKOCR_b.CKODIV = 2;
        else if ( ( VALUE_SYSTEM_CKOCR & R_SYSTEM_CKOCR_CKODIV_Msk ) >> R_SYSTEM_CKOCR_CKODIV_Pos == 3 )
            // Clock out input frequency division is 8
            R_SYSTEM->CKOCR_b.CKODIV = 3;
        else if ( ( VALUE_SYSTEM_CKOCR & R_SYSTEM_CKOCR_CKODIV_Msk ) >> R_SYSTEM_CKOCR_CKODIV_Pos == 4 )
            // Clock out input frequency division is 16
            R_SYSTEM->CKOCR_b.CKOSEL = 4;
        else if ( ( VALUE_SYSTEM_CKOCR & R_SYSTEM_CKOCR_CKODIV_Msk ) >> R_SYSTEM_CKOCR_CKODIV_Pos == 5 )
            // Clock out input frequency division is 32
            R_SYSTEM->CKOCR_b.CKOSEL = 5;
        else if ( ( VALUE_SYSTEM_CKOCR & R_SYSTEM_CKOCR_CKODIV_Msk ) >> R_SYSTEM_CKOCR_CKODIV_Pos == 6 )
            // Clock out input frequency division is 64
            R_SYSTEM->CKOCR_b.CKOSEL = 6;
        else if ( ( VALUE_SYSTEM_CKOCR & R_SYSTEM_CKOCR_CKODIV_Msk ) >> R_SYSTEM_CKOCR_CKODIV_Pos == 7 )
            // Clock out input frequency division is 128
            R_SYSTEM->CKOCR_b.CKOSEL = 7;

        R_SYSTEM->CKOCR_b.CKOEN = 1; // Enable clock out
    }

    // Lock write protection register
    R_SYSTEM->PRCR = (uint16_t) BSP_PRV_PRCR_LOCK; // TODO check if it's done here
}
