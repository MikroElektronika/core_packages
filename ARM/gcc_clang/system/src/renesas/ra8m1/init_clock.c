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
    uint32_t CPUCLK_Frequency;  // CPU clock frequency in Hz
    uint32_t ICLK_Frequency;    // System clock frequency in Hz
    uint32_t PCLKA_Frequency;   // PCLKA clock frequency in Hz
    uint32_t PCLKB_Frequency;   // PCLKB clock frequency in Hz
    uint32_t PCLKC_Frequency;   // PCLKC clock frequency in Hz
    uint32_t PCLKD_Frequency;   // PCLKD clock frequency in Hz
    uint32_t PCLKE_Frequency;   // PCLKE clock frequency in Hz
    uint32_t FCLK_Frequency;    // Flash interface clock frequency in Hz
    uint32_t SPICLK_Frequency;  // SPI clock frequency in Hz
    uint32_t SCICLK_Frequency;  // SCI clock frequency in Hz
} SYSTEM_ClocksTypeDef;

static uint8_t ClockPrescTable[] = { 1, 2, 4, 8, 16, 32, 64, 0, 3, 6, 12 };

/* Helper macros for getting SPI and SCI clock sources. */
#define SCI_SPI_SOURCE_HOCO     (0)
#define SCI_SPI_SOURCE_MOCO     (1)
#define SCI_SPI_SOURCE_LOCO     (2)
#define SCI_SPI_SOURCE_MOSC     (3)
#define SCI_SPI_SOURCE_SOSC     (4)
#define SCI_SPI_SOURCE_PLL1P    (5)
#define SCI_SPI_SOURCE_PLL2P    (6)
#define SCI_SPI_SOURCE_PLL1Q    (7)
#define SCI_SPI_SOURCE_PLL1R    (8)
#define SCI_SPI_SOURCE_PLL2Q    (9)
#define SCI_SPI_SOURCE_PLL2R    (10)
#define HOCO_FREQUENCY_MHZ_16   (0)
#define HOCO_FREQUENCY_MHZ_18   (1)
#define HOCO_FREQUENCY_MHZ_20   (2)
#define HOCO_FREQUENCY_MHZ_32   (4)
#define HOCO_FREQUENCY_MHZ_48   (7)
#define FREQUENCY_32768HZ       (32768)
#define FREQUENCY_8MHZ          (8000000)
#define FREQUENCY_16MHZ         (16000000)
#define FREQUENCY_18MHZ         (18000000)
#define FREQUENCY_20MHZ         (20000000)
#define FREQUENCY_32MHZ         (32000000)
#define FREQUENCY_48MHZ         (48000000)
#define PLLMULNF_HALF           (0xC0)
#define PLLMULNF_TWO_THIRDS     (0x80)
#define PLLMULNF_ONE_THIRD      (0x40)

/* Key code for writing PRCR register. */
#define BSP_PRV_PRCR_KEY                              (0xA500U)
#define BSP_PRV_PRCR_PRC1_UNLOCK                      ((BSP_PRV_PRCR_KEY) | 0x2U)
#define BSP_PRV_PRCR_LOCK                             ((BSP_PRV_PRCR_KEY) | 0x0U)
#define BSP_PRV_STACK_LIMIT                           ((uint32_t) __Vectors[0] - BSP_CFG_STACK_MAIN_BYTES)
#define BSP_PRV_STACK_TOP                             ((uint32_t) __Vectors[0])

#define BSP_PRV_PRCR_UNLOCK                     ((BSP_PRV_PRCR_KEY) | 0x3U)
#define BSP_PRV_PRCR_LOCK                       ((BSP_PRV_PRCR_KEY) | 0x0U)

#define BSP_STACK_POINTER_MONITOR_NMI_ON_DETECTION    (0xA500U)
#define BSP_CFG_STACK_MAIN_BYTES                      (0x400)
#define CCR_CACHE_ENABLE                              (0x000E0201)

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

typedef enum e_elc_event_ra8m1
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
    ELC_EVENT_ICU_IRQ15                     = (0x010), // External pin interrupt 15
    ELC_EVENT_DMAC0_INT                     = (0x011), // DMAC0 transfer end
    ELC_EVENT_DMAC1_INT                     = (0x012), // DMAC1 transfer end
    ELC_EVENT_DMAC2_INT                     = (0x013), // DMAC2 transfer end
    ELC_EVENT_DMAC3_INT                     = (0x014), // DMAC3 transfer end
    ELC_EVENT_DMAC4_INT                     = (0x015), // DMAC4 transfer end
    ELC_EVENT_DMAC5_INT                     = (0x016), // DMAC5 transfer end
    ELC_EVENT_DMAC6_INT                     = (0x017), // DMAC6 transfer end
    ELC_EVENT_DMAC7_INT                     = (0x018), // DMAC7 transfer end
    ELC_EVENT_DTC_END                       = (0x021), // DTC transfer end
    ELC_EVENT_DTC_COMPLETE                  = (0x022), // DTC transfer complete
    ELC_EVENT_DMA_TRANSERR                  = (0x027), // DMA/DTC transfer error
    ELC_EVENT_DBG_CTIIRQ0                   = (0x029), // Coresight Crosstrigger Event
    ELC_EVENT_DBG_CTIIRQ1                   = (0x02A), // Coresight Crosstrigger Event
    ELC_EVENT_DBG_JBRXI                     = (0x02B), // JB RXI
    ELC_EVENT_FCU_FIFERR                    = (0x030), // Flash access error interrupt
    ELC_EVENT_FCU_FRDYI                     = (0x031), // Flash ready interrupt
    ELC_EVENT_LVD_LVD1                      = (0x038), // Voltage monitor 1 interrupt
    ELC_EVENT_LVD_LVD2                      = (0x039), // Voltage monitor 2 interrupt
    ELC_EVENT_VBATT_TADI                    = (0x03D), // VBATT Tamper Detection
    ELC_EVENT_CGC_MOSC_STOP                 = (0x03E), // Main Clock oscillation stop
    ELC_EVENT_ULPT0_INT                     = (0x040), // ULPT0 Underflow
    ELC_EVENT_ULPT0_COMPARE_A               = (0x041), // ULPT0 Compare match A
    ELC_EVENT_ULPT0_COMPARE_B               = (0x042), // ULPT0 Compare match B
    ELC_EVENT_ULPT1_INT                     = (0x043), // ULPT1 Underflow
    ELC_EVENT_ULPT1_COMPARE_A               = (0x044), // ULPT1 Compare match A
    ELC_EVENT_ULPT1_COMPARE_B               = (0x045), // ULPT1 Compare match B
    ELC_EVENT_AGT0_INT                      = (0x046), // AGT interrupt
    ELC_EVENT_AGT0_COMPARE_A                = (0x047), // Compare match A
    ELC_EVENT_AGT0_COMPARE_B                = (0x048), // Compare match B
    ELC_EVENT_AGT1_INT                      = (0x049), // AGT interrupt
    ELC_EVENT_AGT1_COMPARE_A                = (0x04A), // Compare match A
    ELC_EVENT_AGT1_COMPARE_B                = (0x04B), // Compare match B
    ELC_EVENT_IWDT_UNDERFLOW                = (0x052), // IWDT underflow
    ELC_EVENT_WDT0_UNDERFLOW                = (0x053), // WDT0 underflow
    ELC_EVENT_RTC_ALARM                     = (0x055), // Alarm interrupt
    ELC_EVENT_RTC_PERIOD                    = (0x056), // Periodic interrupt
    ELC_EVENT_RTC_CARRY                     = (0x057), // Carry interrupt
    ELC_EVENT_USBFS_FIFO_0                  = (0x058), // DMA/DTC transfer request 0
    ELC_EVENT_USBFS_FIFO_1                  = (0x059), // DMA/DTC transfer request 1
    ELC_EVENT_USBFS_INT                     = (0x05A), // USBFS interrupt
    ELC_EVENT_USBFS_RESUME                  = (0x05B), // USBFS resume interrupt
    ELC_EVENT_IIC0_RXI                      = (0x05C), // Receive data full
    ELC_EVENT_IIC0_TXI                      = (0x05D), // Transmit data empty
    ELC_EVENT_IIC0_TEI                      = (0x05E), // Transmit end
    ELC_EVENT_IIC0_ERI                      = (0x05F), // Transfer error
    ELC_EVENT_IIC0_WUI                      = (0x060), // Wakeup interrupt
    ELC_EVENT_IIC1_RXI                      = (0x061), // Receive data full
    ELC_EVENT_IIC1_TXI                      = (0x062), // Transmit data empty
    ELC_EVENT_IIC1_TEI                      = (0x063), // Transmit end
    ELC_EVENT_IIC1_ERI                      = (0x064), // Transfer error
    ELC_EVENT_SDHIMMC0_ACCS                 = (0x06B), // Card access
    ELC_EVENT_SDHIMMC0_SDIO                 = (0x06C), // SDIO access
    ELC_EVENT_SDHIMMC0_CARD                 = (0x06D), // Card detect
    ELC_EVENT_SDHIMMC0_DMA_REQ              = (0x06E), // DMA transfer request
    ELC_EVENT_SDHIMMC1_ACCS                 = (0x06F), // Card access
    ELC_EVENT_SDHIMMC1_SDIO                 = (0x070), // SDIO access
    ELC_EVENT_SDHIMMC1_CARD                 = (0x071), // Card detect
    ELC_EVENT_SDHIMMC1_DMA_REQ              = (0x072), // DMA transfer request
    ELC_EVENT_SSI0_TXI                      = (0x073), // Transmit data empty
    ELC_EVENT_SSI0_RXI                      = (0x074), // Receive data full
    ELC_EVENT_SSI0_INT                      = (0x076), // Error interrupt
    ELC_EVENT_SSI1_TXI                      = (0x079), // Receive data full/Transmit data empty
    ELC_EVENT_SSI1_RXI                      = (0x079), // Receive data full/Transmit data empty
    ELC_EVENT_SSI1_INT                      = (0x07A), // Error interrupt
    ELC_EVENT_ACMPHS0_INT                   = (0x07B), // High Speed Comparator channel 0 interrupt
    ELC_EVENT_ACMPHS1_INT                   = (0x07C), // High Speed Comparator channel 1 interrupt
    ELC_EVENT_ELC_SOFTWARE_EVENT_0          = (0x083), // Software event 0
    ELC_EVENT_ELC_SOFTWARE_EVENT_1          = (0x084), // Software event 1
    ELC_EVENT_IOPORT_EVENT_1                = (0x088), // Port 1 event
    ELC_EVENT_IOPORT_EVENT_2                = (0x089), // Port 2 event
    ELC_EVENT_IOPORT_EVENT_3                = (0x08A), // Port 3 event
    ELC_EVENT_IOPORT_EVENT_4                = (0x08B), // Port 4 event
    ELC_EVENT_CAC_FREQUENCY_ERROR           = (0x08C), // Frequency error interrupt
    ELC_EVENT_CAC_MEASUREMENT_END           = (0x08D), // Measurement end interrupt
    ELC_EVENT_CAC_OVERFLOW                  = (0x08E), // Overflow interrupt
    ELC_EVENT_POEG0_EVENT                   = (0x08F), // Port Output disable 0 interrupt
    ELC_EVENT_POEG1_EVENT                   = (0x090), // Port Output disable 1 interrupt
    ELC_EVENT_POEG2_EVENT                   = (0x091), // Port Output disable 2 interrupt
    ELC_EVENT_POEG3_EVENT                   = (0x092), // Port Output disable 3 interrupt
    ELC_EVENT_OPS_UVW_EDGE                  = (0x0A0), // UVW edge event
    ELC_EVENT_GPT0_CAPTURE_COMPARE_A        = (0x0A1), // Capture/Compare match A
    ELC_EVENT_GPT0_CAPTURE_COMPARE_B        = (0x0A2), // Capture/Compare match B
    ELC_EVENT_GPT0_COMPARE_C                = (0x0A3), // Compare match C
    ELC_EVENT_GPT0_COMPARE_D                = (0x0A4), // Compare match D
    ELC_EVENT_GPT0_COMPARE_E                = (0x0A5), // Compare match E
    ELC_EVENT_GPT0_COMPARE_F                = (0x0A6), // Compare match F
    ELC_EVENT_GPT0_COUNTER_OVERFLOW         = (0x0A7), // Overflow
    ELC_EVENT_GPT0_COUNTER_UNDERFLOW        = (0x0A8), // Underflow
    ELC_EVENT_GPT0_PC                       = (0x0A9), // Period count function finish
    ELC_EVENT_GPT1_CAPTURE_COMPARE_A        = (0x0AA), // Capture/Compare match A
    ELC_EVENT_GPT1_CAPTURE_COMPARE_B        = (0x0AB), // Capture/Compare match B
    ELC_EVENT_GPT1_COMPARE_C                = (0x0AC), // Compare match C
    ELC_EVENT_GPT1_COMPARE_D                = (0x0AD), // Compare match D
    ELC_EVENT_GPT1_COMPARE_E                = (0x0AE), // Compare match E
    ELC_EVENT_GPT1_COMPARE_F                = (0x0AF), // Compare match F
    ELC_EVENT_GPT1_COUNTER_OVERFLOW         = (0x0B0), // Overflow
    ELC_EVENT_GPT1_COUNTER_UNDERFLOW        = (0x0B1), // Underflow
    ELC_EVENT_GPT1_PC                       = (0x0B2), // Period count function finish
    ELC_EVENT_GPT2_CAPTURE_COMPARE_A        = (0x0B3), // Capture/Compare match A
    ELC_EVENT_GPT2_CAPTURE_COMPARE_B        = (0x0B4), // Capture/Compare match B
    ELC_EVENT_GPT2_COMPARE_C                = (0x0B5), // Compare match C
    ELC_EVENT_GPT2_COMPARE_D                = (0x0B6), // Compare match D
    ELC_EVENT_GPT2_COMPARE_E                = (0x0B7), // Compare match E
    ELC_EVENT_GPT2_COMPARE_F                = (0x0B8), // Compare match F
    ELC_EVENT_GPT2_COUNTER_OVERFLOW         = (0x0B9), // Overflow
    ELC_EVENT_GPT2_COUNTER_UNDERFLOW        = (0x0BA), // Underflow
    ELC_EVENT_GPT2_PC                       = (0x0BB), // Period count function finish
    ELC_EVENT_GPT3_CAPTURE_COMPARE_A        = (0x0BC), // Capture/Compare match A
    ELC_EVENT_GPT3_CAPTURE_COMPARE_B        = (0x0BD), // Capture/Compare match B
    ELC_EVENT_GPT3_COMPARE_C                = (0x0BE), // Compare match C
    ELC_EVENT_GPT3_COMPARE_D                = (0x0BF), // Compare match D
    ELC_EVENT_GPT3_COMPARE_E                = (0x0C0), // Compare match E
    ELC_EVENT_GPT3_COMPARE_F                = (0x0C1), // Compare match F
    ELC_EVENT_GPT3_COUNTER_OVERFLOW         = (0x0C2), // Overflow
    ELC_EVENT_GPT3_COUNTER_UNDERFLOW        = (0x0C3), // Underflow
    ELC_EVENT_GPT3_PC                       = (0x0C4), // Period count function finish
    ELC_EVENT_GPT4_CAPTURE_COMPARE_A        = (0x0C5), // Capture/Compare match A
    ELC_EVENT_GPT4_CAPTURE_COMPARE_B        = (0x0C6), // Capture/Compare match B
    ELC_EVENT_GPT4_COMPARE_C                = (0x0C7), // Compare match C
    ELC_EVENT_GPT4_COMPARE_D                = (0x0C8), // Compare match D
    ELC_EVENT_GPT4_COMPARE_E                = (0x0C9), // Compare match E
    ELC_EVENT_GPT4_COMPARE_F                = (0x0CA), // Compare match F
    ELC_EVENT_GPT4_COUNTER_OVERFLOW         = (0x0CB), // Overflow
    ELC_EVENT_GPT4_COUNTER_UNDERFLOW        = (0x0CC), // Underflow
    ELC_EVENT_GPT5_CAPTURE_COMPARE_A        = (0x0CE), // Capture/Compare match A
    ELC_EVENT_GPT5_CAPTURE_COMPARE_B        = (0x0CF), // Capture/Compare match B
    ELC_EVENT_GPT5_COMPARE_C                = (0x0D0), // Compare match C
    ELC_EVENT_GPT5_COMPARE_D                = (0x0D1), // Compare match D
    ELC_EVENT_GPT5_COMPARE_E                = (0x0D2), // Compare match E
    ELC_EVENT_GPT5_COMPARE_F                = (0x0D3), // Compare match F
    ELC_EVENT_GPT5_COUNTER_OVERFLOW         = (0x0D4), // Overflow
    ELC_EVENT_GPT5_COUNTER_UNDERFLOW        = (0x0D5), // Underflow
    ELC_EVENT_GPT6_CAPTURE_COMPARE_A        = (0x0D7), // Capture/Compare match A
    ELC_EVENT_GPT6_CAPTURE_COMPARE_B        = (0x0D8), // Capture/Compare match B
    ELC_EVENT_GPT6_COMPARE_C                = (0x0D9), // Compare match C
    ELC_EVENT_GPT6_COMPARE_D                = (0x0DA), // Compare match D
    ELC_EVENT_GPT6_COMPARE_E                = (0x0DB), // Compare match E
    ELC_EVENT_GPT6_COMPARE_F                = (0x0DC), // Compare match F
    ELC_EVENT_GPT6_COUNTER_OVERFLOW         = (0x0DD), // Overflow
    ELC_EVENT_GPT6_COUNTER_UNDERFLOW        = (0x0DE), // Underflow
    ELC_EVENT_GPT7_CAPTURE_COMPARE_A        = (0x0E0), // Capture/Compare match A
    ELC_EVENT_GPT7_CAPTURE_COMPARE_B        = (0x0E1), // Capture/Compare match B
    ELC_EVENT_GPT7_COMPARE_C                = (0x0E2), // Compare match C
    ELC_EVENT_GPT7_COMPARE_D                = (0x0E3), // Compare match D
    ELC_EVENT_GPT7_COMPARE_E                = (0x0E4), // Compare match E
    ELC_EVENT_GPT7_COMPARE_F                = (0x0E5), // Compare match F
    ELC_EVENT_GPT7_COUNTER_OVERFLOW         = (0x0E6), // Overflow
    ELC_EVENT_GPT7_COUNTER_UNDERFLOW        = (0x0E7), // Underflow
    ELC_EVENT_GPT8_CAPTURE_COMPARE_A        = (0x0E9), // Capture/Compare match A
    ELC_EVENT_GPT8_CAPTURE_COMPARE_B        = (0x0EA), // Capture/Compare match B
    ELC_EVENT_GPT8_COMPARE_C                = (0x0EB), // Compare match C
    ELC_EVENT_GPT8_COMPARE_D                = (0x0EC), // Compare match D
    ELC_EVENT_GPT8_COMPARE_E                = (0x0ED), // Compare match E
    ELC_EVENT_GPT8_COMPARE_F                = (0x0EE), // Compare match F
    ELC_EVENT_GPT8_COUNTER_OVERFLOW         = (0x0EF), // Overflow
    ELC_EVENT_GPT8_COUNTER_UNDERFLOW        = (0x0F0), // Underflow
    ELC_EVENT_GPT8_PC                       = (0x0F1), // Period count function finish
    ELC_EVENT_GPT9_CAPTURE_COMPARE_A        = (0x0F2), // Capture/Compare match A
    ELC_EVENT_GPT9_CAPTURE_COMPARE_B        = (0x0F3), // Capture/Compare match B
    ELC_EVENT_GPT9_COMPARE_C                = (0x0F4), // Compare match C
    ELC_EVENT_GPT9_COMPARE_D                = (0x0F5), // Compare match D
    ELC_EVENT_GPT9_COMPARE_E                = (0x0F6), // Compare match E
    ELC_EVENT_GPT9_COMPARE_F                = (0x0F7), // Compare match F
    ELC_EVENT_GPT9_COUNTER_OVERFLOW         = (0x0F8), // Overflow
    ELC_EVENT_GPT9_COUNTER_UNDERFLOW        = (0x0F9), // Underflow
    ELC_EVENT_GPT9_PC                       = (0x0FA), // Period count function finish
    ELC_EVENT_GPT10_CAPTURE_COMPARE_A       = (0x0FB), // Capture/Compare match A
    ELC_EVENT_GPT10_CAPTURE_COMPARE_B       = (0x0FC), // Capture/Compare match B
    ELC_EVENT_GPT10_COMPARE_C               = (0x0FD), // Compare match C
    ELC_EVENT_GPT10_COMPARE_D               = (0x0FE), // Compare match D
    ELC_EVENT_GPT10_COMPARE_E               = (0x0FF), // Compare match E
    ELC_EVENT_GPT10_COMPARE_F               = (0x100), // Compare match F
    ELC_EVENT_GPT10_COUNTER_OVERFLOW        = (0x101), // Overflow
    ELC_EVENT_GPT10_COUNTER_UNDERFLOW       = (0x102), // Underflow
    ELC_EVENT_GPT10_PC                      = (0x103), // Period count function finish
    ELC_EVENT_GPT11_CAPTURE_COMPARE_A       = (0x104), // Capture/Compare match A
    ELC_EVENT_GPT11_CAPTURE_COMPARE_B       = (0x105), // Capture/Compare match B
    ELC_EVENT_GPT11_COMPARE_C               = (0x106), // Compare match C
    ELC_EVENT_GPT11_COMPARE_D               = (0x107), // Compare match D
    ELC_EVENT_GPT11_COMPARE_E               = (0x108), // Compare match E
    ELC_EVENT_GPT11_COMPARE_F               = (0x109), // Compare match F
    ELC_EVENT_GPT11_COUNTER_OVERFLOW        = (0x10A), // Overflow
    ELC_EVENT_GPT11_COUNTER_UNDERFLOW       = (0x10B), // Underflow
    ELC_EVENT_GPT12_CAPTURE_COMPARE_A       = (0x10D), // Capture/Compare match A
    ELC_EVENT_GPT12_CAPTURE_COMPARE_B       = (0x10E), // Capture/Compare match B
    ELC_EVENT_GPT12_COMPARE_C               = (0x10F), // Compare match C
    ELC_EVENT_GPT12_COMPARE_D               = (0x110), // Compare match D
    ELC_EVENT_GPT12_COMPARE_E               = (0x111), // Compare match E
    ELC_EVENT_GPT12_COMPARE_F               = (0x112), // Compare match F
    ELC_EVENT_GPT12_COUNTER_OVERFLOW        = (0x113), // Overflow
    ELC_EVENT_GPT12_COUNTER_UNDERFLOW       = (0x114), // Underflow
    ELC_EVENT_GPT13_CAPTURE_COMPARE_A       = (0x116), // Capture/Compare match A
    ELC_EVENT_GPT13_CAPTURE_COMPARE_B       = (0x117), // Capture/Compare match B
    ELC_EVENT_GPT13_COMPARE_C               = (0x118), // Compare match C
    ELC_EVENT_GPT13_COMPARE_D               = (0x119), // Compare match D
    ELC_EVENT_GPT13_COMPARE_E               = (0x11A), // Compare match E
    ELC_EVENT_GPT13_COMPARE_F               = (0x11B), // Compare match F
    ELC_EVENT_GPT13_COUNTER_OVERFLOW        = (0x11C), // Overflow
    ELC_EVENT_GPT13_COUNTER_UNDERFLOW       = (0x11D), // Underflow
    ELC_EVENT_EDMAC0_EINT                   = (0x120), // EDMAC 0 interrupt
    ELC_EVENT_USBHS_FIFO_0                  = (0x121), // DMA transfer request 0
    ELC_EVENT_USBHS_FIFO_1                  = (0x122), // DMA transfer request 1
    ELC_EVENT_USBHS_USB_INT_RESUME          = (0x123), // USBHS interrupt
    ELC_EVENT_SCI0_RXI                      = (0x124), // Receive data full
    ELC_EVENT_SCI0_TXI                      = (0x125), // Transmit data empty
    ELC_EVENT_SCI0_TEI                      = (0x126), // Transmit end
    ELC_EVENT_SCI0_ERI                      = (0x127), // Receive error
    ELC_EVENT_SCI0_AED                      = (0x128), // Active edge detection
    ELC_EVENT_SCI0_BFD                      = (0x129), // Break field detection
    ELC_EVENT_SCI0_AM                       = (0x12A), // Address match event
    ELC_EVENT_SCI1_RXI                      = (0x12B), // Receive data full
    ELC_EVENT_SCI1_TXI                      = (0x12C), // Transmit data empty
    ELC_EVENT_SCI1_TEI                      = (0x12D), // Transmit end
    ELC_EVENT_SCI1_ERI                      = (0x12E), // Receive error
    ELC_EVENT_SCI1_AED                      = (0x12F), // Active edge detection
    ELC_EVENT_SCI1_BFD                      = (0x130), // Break field detection
    ELC_EVENT_SCI1_AM                       = (0x131), // Address match event
    ELC_EVENT_SCI2_RXI                      = (0x132), // Receive data full
    ELC_EVENT_SCI2_TXI                      = (0x133), // Transmit data empty
    ELC_EVENT_SCI2_TEI                      = (0x134), // Transmit end
    ELC_EVENT_SCI2_ERI                      = (0x135), // Receive error
    ELC_EVENT_SCI2_AM                       = (0x138), // Address match event
    ELC_EVENT_SCI3_RXI                      = (0x139), // Receive data full
    ELC_EVENT_SCI3_TXI                      = (0x13A), // Transmit data empty
    ELC_EVENT_SCI3_TEI                      = (0x13B), // Transmit end
    ELC_EVENT_SCI3_ERI                      = (0x13C), // Receive error
    ELC_EVENT_SCI3_AM                       = (0x13F), // Address match event
    ELC_EVENT_SCI4_RXI                      = (0x140), // Receive data full
    ELC_EVENT_SCI4_TXI                      = (0x141), // Transmit data empty
    ELC_EVENT_SCI4_TEI                      = (0x142), // Transmit end
    ELC_EVENT_SCI4_ERI                      = (0x143), // Receive error
    ELC_EVENT_SCI4_AM                       = (0x146), // Address match event
    ELC_EVENT_SCI9_RXI                      = (0x163), // Receive data full
    ELC_EVENT_SCI9_TXI                      = (0x164), // Transmit data empty
    ELC_EVENT_SCI9_TEI                      = (0x165), // Transmit end
    ELC_EVENT_SCI9_ERI                      = (0x166), // Receive error
    ELC_EVENT_SCI9_AM                       = (0x169), // Address match event
    ELC_EVENT_SPI0_RXI                      = (0x178), // Receive buffer full
    ELC_EVENT_SPI0_TXI                      = (0x179), // Transmit buffer empty
    ELC_EVENT_SPI0_IDLE                     = (0x17A), // Idle
    ELC_EVENT_SPI0_ERI                      = (0x17B), // Error
    ELC_EVENT_SPI0_TEI                      = (0x17C), // Transmission complete event
    ELC_EVENT_SPI1_RXI                      = (0x17D), // Receive buffer full
    ELC_EVENT_SPI1_TXI                      = (0x17E), // Transmit buffer empty
    ELC_EVENT_SPI1_IDLE                     = (0x17F), // Idle
    ELC_EVENT_SPI1_ERI                      = (0x180), // Error
    ELC_EVENT_SPI1_TEI                      = (0x181), // Transmission complete event
    ELC_EVENT_XSPI_ERR                      = (0x182), // xSPI Error
    ELC_EVENT_XSPI_CMP                      = (0x183), // xSPI Complete
    ELC_EVENT_CAN_RXF                       = (0x185), // Global receive FIFO interrupt
    ELC_EVENT_CAN_GLERR                     = (0x186), // Global error
    ELC_EVENT_CAN0_DMAREQ0                  = (0x187), // RX fifo DMA request 0
    ELC_EVENT_CAN0_DMAREQ1                  = (0x188), // RX fifo DMA request 1
    ELC_EVENT_CAN1_DMAREQ0                  = (0x18B), // RX fifo DMA request 0
    ELC_EVENT_CAN1_DMAREQ1                  = (0x18C), // RX fifo DMA request 1
    ELC_EVENT_CAN0_TX                       = (0x18F), // Transmit interrupt
    ELC_EVENT_CAN0_CHERR                    = (0x190), // Channel  error
    ELC_EVENT_CAN0_COMFRX                   = (0x191), // Common FIFO receive interrupt
    ELC_EVENT_CAN0_CF_DMAREQ                = (0x192), // Channel  DMA request
    ELC_EVENT_CAN0_RXMB                     = (0x193), // Receive message buffer interrupt
    ELC_EVENT_CAN1_TX                       = (0x194), // Transmit interrupt
    ELC_EVENT_CAN1_CHERR                    = (0x195), // Channel  error
    ELC_EVENT_CAN1_COMFRX                   = (0x196), // Common FIFO receive interrupt
    ELC_EVENT_CAN1_CF_DMAREQ                = (0x197), // Channel  DMA request
    ELC_EVENT_CAN1_RXMB                     = (0x198), // Receive message buffer interrupt
    ELC_EVENT_CAN0_MRAM_ERI                 = (0x19B), // CANFD0 ECC error
    ELC_EVENT_CAN1_MRAM_ERI                 = (0x19C), // CANFD1 ECC error
    ELC_EVENT_I3C0_RESPONSE                 = (0x19D), // Response status buffer full
    ELC_EVENT_I3C0_COMMAND                  = (0x19E), // Command buffer empty
    ELC_EVENT_I3C0_IBI                      = (0x19F), // IBI status buffer full
    ELC_EVENT_I3C0_RX                       = (0x1A0), // Receive
    ELC_EVENT_IICB0_RXI                     = (0x1A0), // Receive
    ELC_EVENT_I3C0_TX                       = (0x1A1), // Transmit
    ELC_EVENT_IICB0_TXI                     = (0x1A1), // Transmit
    ELC_EVENT_I3C0_RCV_STATUS               = (0x1A2), // Receive status buffer full
    ELC_EVENT_I3C0_HRESP                    = (0x1A3), // High priority response queue full
    ELC_EVENT_I3C0_HCMD                     = (0x1A4), // High priority command queue empty
    ELC_EVENT_I3C0_HRX                      = (0x1A5), // High priority rx data buffer full
    ELC_EVENT_I3C0_HTX                      = (0x1A6), // High priority tx data buffer empty
    ELC_EVENT_I3C0_TEND                     = (0x1A7), // Transmit end
    ELC_EVENT_IICB0_TEI                     = (0x1A7), // Transmit end
    ELC_EVENT_I3C0_EEI                      = (0x1A8), // Error
    ELC_EVENT_IICB0_ERI                     = (0x1A8), // Error
    ELC_EVENT_I3C0_STEV                     = (0x1A9), // Synchronous timing
    ELC_EVENT_I3C0_MREFOVF                  = (0x1AA), // MREF counter overflow
    ELC_EVENT_I3C0_MREFCPT                  = (0x1AB), // MREF capture
    ELC_EVENT_I3C0_AMEV                     = (0x1AC), // Additional master-initiated bus event
    ELC_EVENT_I3C0_WU                       = (0x1AD), // Wake-up Condition Detection interrupt
    ELC_EVENT_ADC0_SCAN_END                 = (0x1AE), // End of A/D scanning operation
    ELC_EVENT_ADC0_SCAN_END_B               = (0x1AF), // A/D scan end interrupt for group B
    ELC_EVENT_ADC0_WINDOW_A                 = (0x1B0), // Window A Compare match interrupt
    ELC_EVENT_ADC0_WINDOW_B                 = (0x1B1), // Window B Compare match interrupt
    ELC_EVENT_ADC0_COMPARE_MATCH            = (0x1B2), // Compare match
    ELC_EVENT_ADC0_COMPARE_MISMATCH         = (0x1B3), // Compare mismatch
    ELC_EVENT_ADC1_SCAN_END                 = (0x1B4), // End of A/D scanning operation
    ELC_EVENT_ADC1_SCAN_END_B               = (0x1B5), // A/D scan end interrupt for group B
    ELC_EVENT_ADC1_WINDOW_A                 = (0x1B6), // Window A Compare match interrupt
    ELC_EVENT_ADC1_WINDOW_B                 = (0x1B7), // Window B Compare match interrupt
    ELC_EVENT_ADC1_COMPARE_MATCH            = (0x1B8), // Compare match
    ELC_EVENT_ADC1_COMPARE_MISMATCH         = (0x1B9), // Compare mismatch
    ELC_EVENT_DOC_INT                       = (0x1BA), // Data operation circuit interrupt
    ELC_EVENT_RSIP_TADI                     = (0x1BC), // RSIP Tamper Detection
    ELC_EVENT_CEU_CEUI                      = (0x1DA)  // CEU interrupt
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

#define CGC_MAINCLOCK_DRIVE_RESERVED_MASK   (0x10U)
#define CGC_MAINCLOCK_DRIVE                 (0x3U | CGC_MAINCLOCK_DRIVE_RESERVED_MASK)
#define BSP_FEATURE_CGC_MODRV_SHIFT         (R_SYSTEM_MOMCR_MODRV0_Pos)
#define BSP_FEATURE_CGC_MODRV_MASK          (R_SYSTEM_MOMCR_MODRV0_Msk | CGC_MAINCLOCK_DRIVE_RESERVED_MASK)
#define BSP_PRV_MODRV                       ((CGC_MAINCLOCK_DRIVE << BSP_FEATURE_CGC_MODRV_SHIFT) & \
                                             BSP_FEATURE_CGC_MODRV_MASK)

#define BSP_IO_PWPR_PFSWE_OFFSET (6)

// -----------------------------------------------------------------------------------------

#define BSP_PLACE_IN_SECTION(x) __attribute__((section(x))) __attribute__((__used__))
#define BSP_DONT_REMOVE         __attribute__((used))

#define OFS_IWDT (0xA001A001 | 1 << 1 | 3 << 2 | 15 << 4 | 3 << 8 | 3 << 10 | 1 << 12 | 1 << 14)
#define OFS_WDT  (1 << 17 | 3 << 18 | 15 << 20 | 3 << 24 | 3 << 26 | 1 << 28 | 1 << 30)
#define BSP_CFG_OPTION_SETTING_OFS0  (OFS_IWDT | OFS_WDT)

#define BSP_CFG_OPTION_SETTING_OFS2  ((1 << 0) | (0xFFFFFFFE))

#define BSP_CFG_HOCO_FREQUENCY (VALUE_SYSTEM_HOCOCR2 & 0x7)
#define BSP_FEATURE_BSP_OFS1_HOCOFRQ_OFFSET (9UL)
#define BSP_CFG_OPTION_SETTING_OFS1_SEC_NO_HOCOFRQ (0xFCFFF0D0 | 1 << 3 | 7 | 1 << 5 | 1 << 8 | 1 << 24 | 0 << 25)
#define BSP_CFG_OPTION_SETTING_OFS1_SEC  ((uint32_t) BSP_CFG_OPTION_SETTING_OFS1_SEC_NO_HOCOFRQ |\
            ((uint32_t) BSP_CFG_HOCO_FREQUENCY << BSP_FEATURE_BSP_OFS1_HOCOFRQ_OFFSET))

#if defined(_RA_TZ_SECURE) || defined(_RA_TZ_NONSECURE)
  #define BSP_CFG_OPTION_SETTING_OFS1_SEL  (0 | ((0U << 0U)) | ((0U << 3U)) |\
            ((0U << 5U)) | ((BSP_CFG_CLOCKS_SECURE == 0) ? 0xF00 : 0U) |\
            ((0U << 24U)) | ((0U << 25U)))
#else
#define BSP_CFG_OPTION_SETTING_OFS1_SEL  (0)
#endif

#if defined BSP_CFG_OPTION_SETTING_OFS0 && !BSP_TZ_NONSECURE_BUILD
BSP_DONT_REMOVE static const uint32_t BSP_PLACE_IN_SECTION(".option_setting_ofs0")\
        g_bsp_cfg_option_setting_ofs0[] = {BSP_CFG_OPTION_SETTING_OFS0};
#endif
#if defined BSP_CFG_OPTION_SETTING_OFS2 && !BSP_TZ_NONSECURE_BUILD
BSP_DONT_REMOVE static const uint32_t BSP_PLACE_IN_SECTION(".option_setting_ofs2")\
        g_bsp_cfg_option_setting_ofs2[] = {BSP_CFG_OPTION_SETTING_OFS2};
#endif
#if defined BSP_CFG_OPTION_SETTING_DUALSEL && !BSP_TZ_NONSECURE_BUILD
BSP_DONT_REMOVE static const uint32_t BSP_PLACE_IN_SECTION(".option_setting_dualsel")\
        g_bsp_cfg_option_setting_dualsel[] = {BSP_CFG_OPTION_SETTING_DUALSEL};
#endif
#if defined BSP_CFG_OPTION_SETTING_OFS1
BSP_DONT_REMOVE static const uint32_t BSP_PLACE_IN_SECTION(".option_setting_ofs1")\
        g_bsp_cfg_option_setting_ofs1[] = {BSP_CFG_OPTION_SETTING_OFS1};
#endif
#if defined BSP_CFG_OPTION_SETTING_BANKSEL
BSP_DONT_REMOVE static const uint32_t BSP_PLACE_IN_SECTION(".option_setting_banksel")\
        g_bsp_cfg_option_setting_banksel[] = {BSP_CFG_OPTION_SETTING_BANKSEL};
#endif
#if defined BSP_CFG_OPTION_SETTING_BPS
BSP_DONT_REMOVE static const uint32_t BSP_PLACE_IN_SECTION(".option_setting_bps")\
        g_bsp_cfg_option_setting_bps[] = {BSP_CFG_OPTION_SETTING_BPS};
#endif
#if defined BSP_CFG_OPTION_SETTING_PBPS
BSP_DONT_REMOVE static const uint32_t BSP_PLACE_IN_SECTION(".option_setting_pbps")\
        g_bsp_cfg_option_setting_pbps[] = {BSP_CFG_OPTION_SETTING_PBPS};
#endif
#if defined BSP_CFG_OPTION_SETTING_OFS1_SEC && !BSP_TZ_NONSECURE_BUILD
BSP_DONT_REMOVE static const uint32_t BSP_PLACE_IN_SECTION(".option_setting_ofs1_sec")\
        g_bsp_cfg_option_setting_ofs1_sec[] = {BSP_CFG_OPTION_SETTING_OFS1_SEC};
#endif
#if defined BSP_CFG_OPTION_SETTING_BANKSEL_SEC && !BSP_TZ_NONSECURE_BUILD
BSP_DONT_REMOVE static const uint32_t BSP_PLACE_IN_SECTION(".option_setting_banksel_sec")\
        g_bsp_cfg_option_setting_banksel_sec[] = {BSP_CFG_OPTION_SETTING_BANKSEL_SEC};
#endif
#if defined BSP_CFG_OPTION_SETTING_BPS_SEC && !BSP_TZ_NONSECURE_BUILD
BSP_DONT_REMOVE static const uint32_t BSP_PLACE_IN_SECTION(".option_setting_bps_sec")\
        g_bsp_cfg_option_setting_bps_sec[] = {BSP_CFG_OPTION_SETTING_BPS_SEC};
#endif
#if defined BSP_CFG_OPTION_SETTING_PBPS_SEC && !BSP_TZ_NONSECURE_BUILD
BSP_DONT_REMOVE static const uint32_t BSP_PLACE_IN_SECTION(".option_setting_pbps_sec")\
        g_bsp_cfg_option_setting_pbps_sec[] = {BSP_CFG_OPTION_SETTING_PBPS_SEC};
#endif
#if defined BSP_CFG_OPTION_SETTING_OFS1_SEL && !BSP_TZ_NONSECURE_BUILD
BSP_DONT_REMOVE static const uint32_t BSP_PLACE_IN_SECTION(".option_setting_ofs1_sel")\
        g_bsp_cfg_option_setting_ofs1_sel[] = {BSP_CFG_OPTION_SETTING_OFS1_SEL};
#endif
#if defined BSP_CFG_OPTION_SETTING_BANKSEL_SEL && !BSP_TZ_NONSECURE_BUILD
BSP_DONT_REMOVE static const uint32_t BSP_PLACE_IN_SECTION(".option_setting_banksel_sel")\
        g_bsp_cfg_option_setting_banksel_sel[] = {BSP_CFG_OPTION_SETTING_BANKSEL_SEL};
#endif
#if defined BSP_CFG_OPTION_SETTING_BPS_SEL && !BSP_TZ_NONSECURE_BUILD
BSP_DONT_REMOVE static const uint32_t BSP_PLACE_IN_SECTION(".option_setting_bps_sel")\
        g_bsp_cfg_option_setting_bps_sel[] = {BSP_CFG_OPTION_SETTING_BPS_SEL};
#endif
#if defined BSP_CFG_OPTION_SETTING_DATA_FLASH_FSBLCTRL0 && !BSP_TZ_NONSECURE_BUILD
BSP_DONT_REMOVE static const uint32_t BSP_PLACE_IN_SECTION(".option_setting_data_flash_fsblctrl0")\
        g_bsp_cfg_option_setting_data_flash_fsblctrl0[] = {BSP_CFG_OPTION_SETTING_DATA_FLASH_FSBLCTRL0};
#endif
#if defined BSP_CFG_OPTION_SETTING_DATA_FLASH_FSBLCTRL1 && !BSP_TZ_NONSECURE_BUILD
BSP_DONT_REMOVE static const uint32_t BSP_PLACE_IN_SECTION(".option_setting_data_flash_fsblctrl1")\
        g_bsp_cfg_option_setting_data_flash_fsblctrl1[] = {BSP_CFG_OPTION_SETTING_DATA_FLASH_FSBLCTRL1};
#endif
#if defined BSP_CFG_OPTION_SETTING_DATA_FLASH_FSBLCTRL2 && !BSP_TZ_NONSECURE_BUILD
BSP_DONT_REMOVE static const uint32_t BSP_PLACE_IN_SECTION(".option_setting_data_flash_fsblctrl2")\
        g_bsp_cfg_option_setting_data_flash_fsblctrl2[] = {BSP_CFG_OPTION_SETTING_DATA_FLASH_FSBLCTRL2};
#endif
#if defined BSP_CFG_OPTION_SETTING_DATA_FLASH_SACC0 && !BSP_TZ_NONSECURE_BUILD
BSP_DONT_REMOVE static const uint32_t BSP_PLACE_IN_SECTION(".option_setting_data_flash_sacc0")\
        g_bsp_cfg_option_setting_data_flash_sacc0[] = {BSP_CFG_OPTION_SETTING_DATA_FLASH_SACC0};
#endif
#if defined BSP_CFG_OPTION_SETTING_DATA_FLASH_SACC1 && !BSP_TZ_NONSECURE_BUILD
BSP_DONT_REMOVE static const uint32_t BSP_PLACE_IN_SECTION(".option_setting_data_flash_sacc1")\
        g_bsp_cfg_option_setting_data_flash_sacc1[] = {BSP_CFG_OPTION_SETTING_DATA_FLASH_SACC1};
#endif
#if defined BSP_CFG_OPTION_SETTING_DATA_FLASH_SAMR && !BSP_TZ_NONSECURE_BUILD
BSP_DONT_REMOVE static const uint32_t BSP_PLACE_IN_SECTION(".option_setting_data_flash_samr")\
        g_bsp_cfg_option_setting_data_flash_samr[] = {BSP_CFG_OPTION_SETTING_DATA_FLASH_SAMR};
#endif

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
 * @brief Gets PLL subclock values.
 *
 * Calculates configured clock frequency for PLL1P, PLL1Q, PLL1R, PLL2P, PLL2Q and PLL2R.
 *
 * @return PLL subclock value.
 */
uint32_t SYSTEM_GetPLLClocksFrequency( uint32_t pll_config_value, \
                                        uint32_t hoco_frequency, uint8_t prescaler ) {
    uint32_t pll_frequency;

    // Get PLL source clock.
    if ( pll_config_value & R_SYSTEM_PLLCCR_PLSRCSEL_Msk )
        pll_frequency = hoco_frequency;
    else
        // Note: MOSC value used by EK-RA8M1 Board.
        pll_frequency = FREQUENCY_20MHZ;
    // Divide PLL source clock based on PLIDIV value.
    pll_frequency /= ( pll_config_value & R_SYSTEM_PLLCCR_PLIDIV_Msk ) + 1;
    // Multiply result clock based on PLLMUL value.
    pll_frequency *= (( pll_config_value & R_SYSTEM_PLLCCR_PLLMUL_Msk )\
        >> R_SYSTEM_PLLCCR_PLLMUL_Pos ) + 1;
    // Take into consideration the PLLMULNF part.
    if ( PLLMULNF_HALF == ( pll_config_value & R_SYSTEM_PLLCCR_PLLMULNF_Msk ))
        pll_frequency += pll_frequency / 2;
    else if ( PLLMULNF_TWO_THIRDS == ( pll_config_value & R_SYSTEM_PLLCCR_PLLMULNF_Msk ))
        pll_frequency += pll_frequency * 2 / 3;
    else if ( PLLMULNF_ONE_THIRD == ( pll_config_value & R_SYSTEM_PLLCCR_PLLMULNF_Msk ))
        pll_frequency += pll_frequency / 3;

    return ( pll_frequency / prescaler );
}

/**
 * @brief Gets the peripheral clock values for SPI and SCI modules.
 *
 * Calculates configured clock frequency for SPI and SCI clocks.
 *
 * @return SPI or SCI peripheral clock value.
 */
uint32_t SYSTEM_GetSPISCIClocksFrequency ( uint8_t config_value ) {
    uint32_t hoco_frequency, peripheral_clock;
    uint8_t prescaler;

    // Get HOCO frequency.
    if( HOCO_FREQUENCY_MHZ_16 == ( VALUE_SYSTEM_HOCOCR2 & 0x7 ))
        hoco_frequency = FREQUENCY_16MHZ;
    else if ( HOCO_FREQUENCY_MHZ_18 == ( VALUE_SYSTEM_HOCOCR2 & 0x7 ))
        hoco_frequency = FREQUENCY_18MHZ;
    else if ( HOCO_FREQUENCY_MHZ_20 == ( VALUE_SYSTEM_HOCOCR2 & 0x7 ))
        hoco_frequency = FREQUENCY_20MHZ;
    else if ( HOCO_FREQUENCY_MHZ_32 == ( VALUE_SYSTEM_HOCOCR2 & 0x7 ))
        hoco_frequency = FREQUENCY_32MHZ;
    else if ( HOCO_FREQUENCY_MHZ_48 == ( VALUE_SYSTEM_HOCOCR2 & 0x7 ))
        hoco_frequency = FREQUENCY_48MHZ;

    switch ( config_value ) {
        case SCI_SPI_SOURCE_HOCO:
            peripheral_clock = hoco_frequency;
            break;
        case SCI_SPI_SOURCE_MOCO:
            peripheral_clock = FREQUENCY_8MHZ;
            break;
        case SCI_SPI_SOURCE_LOCO:
            peripheral_clock = FREQUENCY_32768HZ;
            break;
        case SCI_SPI_SOURCE_MOSC:
            // Note: MOSC value used by EK-RA8M1 Board.
            peripheral_clock = FREQUENCY_20MHZ;
            break;
        case SCI_SPI_SOURCE_SOSC:
            peripheral_clock = FREQUENCY_32768HZ;
            break;
        case SCI_SPI_SOURCE_PLL1P:
            prescaler = (( VALUE_SYSTEM_PLLCCR2 & R_SYSTEM_PLLCCR2_PLODIVP_Msk ) \
                >> R_SYSTEM_PLLCCR2_PLODIVP_Pos ) + 1;
            peripheral_clock = \
                SYSTEM_GetPLLClocksFrequency( VALUE_SYSTEM_PLLCCR, hoco_frequency, prescaler );
            break;
        case SCI_SPI_SOURCE_PLL2P:
            prescaler = (( VALUE_SYSTEM_PLL2CCR2 & R_SYSTEM_PLL2CCR2_PL2ODIVP_Msk ) \
                >> R_SYSTEM_PLL2CCR2_PL2ODIVP_Pos ) + 1;
            peripheral_clock = \
                SYSTEM_GetPLLClocksFrequency( VALUE_SYSTEM_PLL2CCR, hoco_frequency, prescaler );
            break;
        case SCI_SPI_SOURCE_PLL1Q:
            prescaler = (( VALUE_SYSTEM_PLLCCR2 & R_SYSTEM_PLLCCR2_PLODIVQ_Msk ) \
                >> R_SYSTEM_PLLCCR2_PLODIVQ_Pos ) + 1;
            peripheral_clock = \
                SYSTEM_GetPLLClocksFrequency( VALUE_SYSTEM_PLLCCR, hoco_frequency, prescaler );
            break;
        case SCI_SPI_SOURCE_PLL1R:
            prescaler = (( VALUE_SYSTEM_PLLCCR2 & R_SYSTEM_PLLCCR2_PLODIVR_Msk ) \
                >> R_SYSTEM_PLLCCR2_PLODIVR_Pos ) + 1;
            peripheral_clock = \
                SYSTEM_GetPLLClocksFrequency( VALUE_SYSTEM_PLLCCR, hoco_frequency, prescaler );
            break;
        case SCI_SPI_SOURCE_PLL2Q:
            prescaler = (( VALUE_SYSTEM_PLL2CCR2 & R_SYSTEM_PLL2CCR2_PL2ODIVQ_Msk ) \
                >> R_SYSTEM_PLL2CCR2_PL2ODIVQ_Pos ) + 1;
            peripheral_clock = \
                SYSTEM_GetPLLClocksFrequency( VALUE_SYSTEM_PLL2CCR, hoco_frequency, prescaler );
            break;
        case SCI_SPI_SOURCE_PLL2R:
            prescaler = (( VALUE_SYSTEM_PLL2CCR2 & R_SYSTEM_PLL2CCR2_PL2ODIVR_Msk ) \
                >> R_SYSTEM_PLL2CCR2_PL2ODIVR_Pos ) + 1;
            peripheral_clock = \
                SYSTEM_GetPLLClocksFrequency( VALUE_SYSTEM_PLL2CCR, hoco_frequency, prescaler );
            break;

        default:
            break;
    }

    return peripheral_clock;
}

/**
 * @brief Gets the system clock values.
 *
 * Calculates configured clock frequency for system clocks which are used by different
 * MCU modules.
 *
 * @return None
 */
void SYSTEM_GetClocksFrequency( SYSTEM_ClocksTypeDef * SYSTEM_Clocks ) {
    uint32_t source_clock;
    uint8_t prescaler;

    // Get the frequency of CPU clock.
    SYSTEM_Clocks->CPUCLK_Frequency = FOSC_KHZ_VALUE * 1000;

    // Get the source frequency for all clocks.
    prescaler = ClockPrescTable[ ( VALUE_SYSTEM_SCKDIVCR2 & 0xF ) ];
    source_clock = SYSTEM_Clocks->CPUCLK_Frequency * prescaler;

    // Get FCLK clock frequency.
    prescaler = ClockPrescTable[ ( VALUE_SYSTEM_SCKDIVCR & 0xF0000000 ) >> 28 ];
    SYSTEM_Clocks->FCLK_Frequency = source_clock / prescaler;

    // Get the frequency of system clock.
    prescaler = ClockPrescTable[ ( VALUE_SYSTEM_SCKDIVCR & 0xF000000 ) >> 24 ];
    SYSTEM_Clocks->ICLK_Frequency = source_clock / prescaler;

    // Get PCLKE clock frequency.
    prescaler = ClockPrescTable[ ( VALUE_SYSTEM_SCKDIVCR & 0xF00000 ) >> 20 ];
    SYSTEM_Clocks->PCLKE_Frequency = source_clock / prescaler;

    // Get PCLKA clock frequency.
    prescaler = ClockPrescTable[ ( VALUE_SYSTEM_SCKDIVCR & 0xF000 ) >> 12 ];
    SYSTEM_Clocks->PCLKA_Frequency = source_clock / prescaler;

    // Get PCLKB clock frequency.
    prescaler = ClockPrescTable[ ( VALUE_SYSTEM_SCKDIVCR & 0xF00 ) >> 8 ];
    SYSTEM_Clocks->PCLKB_Frequency = source_clock / prescaler;

    // Get PCLKC clock frequency.
    prescaler = ClockPrescTable[ ( VALUE_SYSTEM_SCKDIVCR & 0xF0 ) >> 4 ];
    SYSTEM_Clocks->PCLKC_Frequency = source_clock / prescaler;

    // Get PCLKD clock frequency.
    prescaler = ClockPrescTable[ ( VALUE_SYSTEM_SCKDIVCR & 0xF ) ];
    SYSTEM_Clocks->PCLKD_Frequency = source_clock / prescaler;

    // Get the source clock of SPI module.
    SYSTEM_Clocks->SPICLK_Frequency = \
        SYSTEM_GetSPISCIClocksFrequency( VALUE_SYSTEM_SPICKCR & R_SYSTEM_SPICKCR_CKSEL_Msk );

    // Get the source clock of SCI module.
    SYSTEM_Clocks->SCICLK_Frequency = \
        SYSTEM_GetSPISCIClocksFrequency( VALUE_SYSTEM_SCICKCR & R_SYSTEM_SCICKCR_SCICKSEL_Msk );
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
    /* Enable the instruction cache, branch prediction, and the branch cache
     * (required for Low Overhead Branch (LOB) extension). See sections 6.5, 6.6
     * and 6.7 in the Arm Cortex-M85 Processor Technical Reference Manual
     * (Document ID: 101924_0002_05_en, Issue: 05). See section D1.2.9 in the
     * Armv8-M Architecture Reference Manual (Document number: DDI0553B.w,
     * Document version: ID07072023)
     */
    SCB->CCR = (uint32_t) CCR_CACHE_ENABLE;
    __DSB();
    __ISB();

    // If Cortex-M85 revision is r1p1 or newer.
    const uint32_t cpuid          = SCB->CPUID;
    const uint32_t cpuid_variant  = ((cpuid & SCB_CPUID_VARIANT_Msk) >> SCB_CPUID_VARIANT_Pos);
    const uint32_t cpuid_revision = ((cpuid & SCB_CPUID_REVISION_Msk) >> SCB_CPUID_REVISION_Pos);
    if (((cpuid_variant == 1) && (cpuid_revision >= 1)) || (cpuid_variant > 1)) {
        MEMSYSCTL->MSCR |= MEMSYSCTL_MSCR_FORCEWT_Msk;
        __DSB();
        __ISB();
    }
    else {
        /* Apply Arm Cortex-M85 errata workarounds for D-Cache.
         * See erratum 3175626 and 3190818 in the Cortex-M85 AT640 and Cortex-M85
         * with FPU AT641 Software Developer Errata Notice (Date of issue:
         * March 07, 2024, Document version: 13.0, Document ID: SDEN-2236668).
         */
        MEMSYSCTL->MSCR |= MEMSYSCTL_MSCR_FORCEWT_Msk;
        __DSB();
        __ISB();
        ICB->ACTLR |= (1U << 16U);
        __DSB();
        __ISB();
    }

    // Set-up FPU settings
    SCB->CPACR |= (0xF << 20);
    SCB->VTOR = (uint32_t) &__Vectors;

    // BSP clock init start
    R_SYSTEM->PRCR = (uint16_t) BSP_PRV_PRCR_UNLOCK;

    /* Enable the flash cache and don't disable it while running from flash.
     * On these MCUs, the flash cache does not need to be disabled when
     * adjusting the operating power mode. */
    R_FCACHE->FCACHEIV = 1U;
    FSP_HARDWARE_REGISTER_WAIT(R_FCACHE->FCACHEIV, 0U);

    // Enable flash cache
    R_FCACHE->FCACHEE = 1U;

    // Clock setting
    system_clock_configuration();

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

    R_SYSTEM->OPCCR = VALUE_SYSTEM_OPCCR;

    if ( !( VALUE_SYSTEM_MOSCCR & R_SYSTEM_MOSCCR_MOSTP_Msk ) ) {
        // Main oscillator selected
        R_SYSTEM->MOSCCR_b.MOSTP = 1; // Stop XTAL
        R_SYSTEM->MOMCR = VALUE_SYSTEM_MOMCR;
        R_SYSTEM->MOSCWTCR = VALUE_SYSTEM_MOSCWTCR;
        R_SYSTEM->MOSCCR_b.MOSTP = 0; // Start XTAL

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
        if ( HOCO_FREQUENCY_MHZ_20 == ( VALUE_SYSTEM_HOCOCR2 & 0x7 ) ) {
            R_SYSTEM->FLLCR2_b.FLLCNTL = 0x263;
        } else if ( HOCO_FREQUENCY_MHZ_18 == ( VALUE_SYSTEM_HOCOCR2 & 0x7 ) ) {
            R_SYSTEM->FLLCR2_b.FLLCNTL = 0x226;
        } else if (( HOCO_FREQUENCY_MHZ_16 == ( VALUE_SYSTEM_HOCOCR2 & 0x7 ) ) ||
            ( HOCO_FREQUENCY_MHZ_32 == ( VALUE_SYSTEM_HOCOCR2 & 0x7 )) ||
            ( HOCO_FREQUENCY_MHZ_48 == ( VALUE_SYSTEM_HOCOCR2 & 0x7 ) )) {
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
        R_SYSTEM->PLLCCR = (uint16_t) VALUE_SYSTEM_PLLCCR;
        R_SYSTEM->PLLCCR2 = (uint16_t) VALUE_SYSTEM_PLLCCR2;
        R_SYSTEM->PLLCR_b.PLLSTP = 0; // PLL is operating

        while ( !( R_SYSTEM->OSCSF_b.PLLSF ) ) {
            // Wait for PLL to stabilize
        }
    } else {
        R_SYSTEM->PLLCR_b.PLLSTP = 1; // PLL is stopped
    }

    if ( !( VALUE_SYSTEM_PLL2CR & R_SYSTEM_PLL2CR_PLL2STP_Msk ) ) {
        R_SYSTEM->PLL2CR_b.PLL2STP = 1; // PLL is stopped
        R_SYSTEM->PLL2CCR = (uint16_t) VALUE_SYSTEM_PLL2CCR;
        R_SYSTEM->PLL2CCR2 = (uint16_t) VALUE_SYSTEM_PLL2CCR2;
        R_SYSTEM->PLL2CR_b.PLL2STP = 0; // PLL is operating

        while ( !( R_SYSTEM->OSCSF_b.PLL2SF ) ) {
            // Wait for PLL to stabilize
        }
    } else {
        R_SYSTEM->PLL2CR_b.PLL2STP = 1; // PLL is stopped
    }

    R_SYSTEM->LOCOCR = VALUE_SYSTEM_LOCOCR;

    R_SYSTEM->MOCOCR = VALUE_SYSTEM_MOCOCR;

    if ( 240000 < FOSC_KHZ_VALUE )
        R_FCACHE->FLWT = 5; // 5 waits
    else if ( 192000 < FOSC_KHZ_VALUE )
        R_FCACHE->FLWT = 4; // 4 waits
    else if ( 144000 < FOSC_KHZ_VALUE )
        R_FCACHE->FLWT = 3; // 3 waits
    else if ( 96000 < FOSC_KHZ_VALUE )
        R_FCACHE->FLWT = 2; // 2 waits
    else if ( 48000 < FOSC_KHZ_VALUE )
        R_FCACHE->FLWT = 1; // 1 wait
    else
        R_FCACHE->FLWT = 0; // 0 waits

    R_SYSTEM->SCKDIVCR = VALUE_SYSTEM_SCKDIVCR;

    R_SYSTEM->SCKSCR = VALUE_SYSTEM_SCKSCR;

    Delay_ms(1);

    R_SYSTEM->SCKDIVCR2 = VALUE_SYSTEM_SCKDIVCR2;

    Delay_ms(1);

    if ( VALUE_SYSTEM_CKOCR & R_SYSTEM_CKOCR_CKOEN_Msk ) {
        R_SYSTEM->CKOCR = VALUE_SYSTEM_CKOCR & ( R_SYSTEM_CKOCR_CKODIV_Msk | R_SYSTEM_CKOCR_CKOSEL_Msk );
        R_SYSTEM->CKOCR_b.CKOEN = 1; // Enable clock out
    }

    R_SYSTEM->SCICKCR = VALUE_SYSTEM_SCICKCR;
    R_SYSTEM->SPICKCR = VALUE_SYSTEM_SPICKCR;

    /* If PLL2 is enabled and PLL1 is not chosen as source clock
     * or PLL2 is disabled and PLL1 is chosen as clock source.
     */
    if (( !( VALUE_SYSTEM_PLL2CR & R_SYSTEM_PLL2CR_PLL2STP_Msk ) && (( VALUE_SYSTEM_SCKSCR & R_SYSTEM_SCKSCR_CKSEL_Msk ) != 0x5 )) || \
            ( ( VALUE_SYSTEM_PLL2CR & R_SYSTEM_PLL2CR_PLL2STP_Msk ) && (( VALUE_SYSTEM_SCKSCR & R_SYSTEM_SCKSCR_CKSEL_Msk ) == 0x5 ))) {
        // Unlock LVOCR register
        R_SYSTEM->PRCR = (uint16_t) BSP_PRV_PRCR_PRC1_UNLOCK;

        /* Set LVOCR according to BSP configuration.
        * Configure prior to warm start post clock
        * since OSPI_B may initialize within and begin using I/O. */
        R_SYSTEM->LVOCR = 0;
    }

    // Lock LVOCR register
    R_SYSTEM->PRCR = (uint16_t) BSP_PRV_PRCR_LOCK;
}
