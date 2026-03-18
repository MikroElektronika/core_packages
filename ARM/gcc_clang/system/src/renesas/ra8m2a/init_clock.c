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
static uint8_t SCI_SPI_CLK_PrescTable[] = {1, 2, 4, 6, 8, 3, 5};

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

typedef enum e_elc_event_ra8m2
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
    ELC_EVENT_ICU_IRQ16                     = (0x011), // External pin interrupt 16
    ELC_EVENT_ICU_IRQ17                     = (0x012), // External pin interrupt 17
    ELC_EVENT_ICU_IRQ18                     = (0x013), // External pin interrupt 18
    ELC_EVENT_ICU_IRQ19                     = (0x014), // External pin interrupt 19
    ELC_EVENT_ICU_IRQ20                     = (0x015), // External pin interrupt 20
    ELC_EVENT_ICU_IRQ21                     = (0x016), // External pin interrupt 21
    ELC_EVENT_ICU_IRQ22                     = (0x017), // External pin interrupt 22
    ELC_EVENT_ICU_IRQ23                     = (0x018), // External pin interrupt 23
    ELC_EVENT_ICU_IRQ24                     = (0x019), // External pin interrupt 24
    ELC_EVENT_ICU_IRQ25                     = (0x01A), // External pin interrupt 25
    ELC_EVENT_ICU_IRQ26                     = (0x01B), // External pin interrupt 26
    ELC_EVENT_ICU_IRQ27                     = (0x01C), // External pin interrupt 27
    ELC_EVENT_ICU_IRQ28                     = (0x01D), // External pin interrupt 28
    ELC_EVENT_ICU_IRQ29                     = (0x01E), // External pin interrupt 29
    ELC_EVENT_ICU_IRQ30                     = (0x01F), // External pin interrupt 30
    ELC_EVENT_ICU_IRQ31                     = (0x020), // External pin interrupt 31
    ELC_EVENT_DMAC0_INT                     = (0x040), // DMAC0 transfer end
    ELC_EVENT_DMAC1_INT                     = (0x041), // DMAC1 transfer end
    ELC_EVENT_DMAC2_INT                     = (0x042), // DMAC2 transfer end
    ELC_EVENT_DMAC3_INT                     = (0x043), // DMAC3 transfer end
    ELC_EVENT_DMAC4_INT                     = (0x044), // DMAC4 transfer end
    ELC_EVENT_DMAC5_INT                     = (0x045), // DMAC5 transfer end
    ELC_EVENT_DMAC6_INT                     = (0x046), // DMAC6 transfer end
    ELC_EVENT_DMAC7_INT                     = (0x047), // DMAC7 transfer end
    ELC_EVENT_DMAC10_INT                    = (0x048), // DMAC10 transfer end
    ELC_EVENT_DMAC11_INT                    = (0x049), // DMAC11 transfer end
    ELC_EVENT_DMAC12_INT                    = (0x04A), // DMAC12 transfer end
    ELC_EVENT_DMAC13_INT                    = (0x04B), // DMAC13 transfer end
    ELC_EVENT_DMAC14_INT                    = (0x04C), // DMAC14 transfer end
    ELC_EVENT_DMAC15_INT                    = (0x04D), // DMAC15 transfer end
    ELC_EVENT_DMAC16_INT                    = (0x04E), // DMAC16 transfer end
    ELC_EVENT_DMAC17_INT                    = (0x04F), // DMAC17 transfer end
    ELC_EVENT_DTC_END                       = (0x052), // DTC transfer end
    ELC_EVENT_DTC1_END                      = (0x055), // DTC1 transfer end
    ELC_EVENT_DMA_TRANSERR                  = (0x056), // DMA/DTC transfer error
    ELC_EVENT_DMA1_TRANSERR                 = (0x057), // DMA1/DTC1 transfer error
    ELC_EVENT_DBG_CTIIRQ0                   = (0x058), // Coresight Crosstrigger Event
    ELC_EVENT_DBG_CTIIRQ1                   = (0x059), // Coresight Crosstrigger Event
    ELC_EVENT_DBG_JBRXI                     = (0x05A), // JB RXI
    ELC_EVENT_IPC_IRQ0                      = (0x05B), // CPU Mutual Interrupt 0
    ELC_EVENT_IPC_IRQ1                      = (0x05C), // CPU Mutual Interrupt 1
    ELC_EVENT_LM0_ERR                       = (0x05F), // Local memory 0 error
    ELC_EVENT_LM1_ERR                       = (0x060), // Local memory 1 error
    ELC_EVENT_CPU0_LOCKUP                   = (0x061), // CPU 0 lockup
    ELC_EVENT_CPU1_LOCKUP                   = (0x062), // CPU 1 lockup
    ELC_EVENT_BUS_ERR                       = (0x063), // BUS error
    ELC_EVENT_CM_ERR                        = (0x064), // Common memory error
    ELC_EVENT_FPU_EXC                       = (0x065), // FPU exception
    ELC_EVENT_MRAM_MRCRD                    = (0x068), // MRAM read error interrupt for MRC
    ELC_EVENT_MRAM_MRERD                    = (0x069), // MRAM read error interrupt for MRE
    ELC_EVENT_MRAM_MRCPR                    = (0x06B), // MRAM sequencer error interrupt for MRC
    ELC_EVENT_MRAM_MREPR                    = (0x06C), // MRAM sequencer error interrupt for MRE
    ELC_EVENT_MRAM_ENDOFPE                  = (0x06D), // MRAM sequencer ready
    ELC_EVENT_LVD_LVD1                      = (0x070), // Voltage monitor 1 interrupt
    ELC_EVENT_LVD_LVD2                      = (0x071), // Voltage monitor 2 interrupt
    ELC_EVENT_VBATT_TADI                    = (0x075), // VBATT Tamper Detection
    ELC_EVENT_CGC_MOSC_STOP                 = (0x076), // Main Clock oscillation stop
    ELC_EVENT_CGC_SOSC_STOP                 = (0x077), // Sub oscillation stop
    ELC_EVENT_ULPT0_INT                     = (0x080), // ULPT0 Underflow
    ELC_EVENT_ULPT0_COMPARE_A               = (0x081), // ULPT0 Compare match A
    ELC_EVENT_ULPT0_COMPARE_B               = (0x082), // ULPT0 Compare match B
    ELC_EVENT_ULPT1_INT                     = (0x083), // ULPT1 Underflow
    ELC_EVENT_ULPT1_COMPARE_A               = (0x084), // ULPT1 Compare match A
    ELC_EVENT_ULPT1_COMPARE_B               = (0x085), // ULPT1 Compare match B
    ELC_EVENT_AGT0_INT                      = (0x086), // AGT interrupt
    ELC_EVENT_AGT0_COMPARE_A                = (0x087), // Compare match A
    ELC_EVENT_AGT0_COMPARE_B                = (0x088), // Compare match B
    ELC_EVENT_AGT1_INT                      = (0x089), // AGT interrupt
    ELC_EVENT_AGT1_COMPARE_A                = (0x08A), // Compare match A
    ELC_EVENT_AGT1_COMPARE_B                = (0x08B), // Compare match B
    ELC_EVENT_IWDT_UNDERFLOW                = (0x092), // IWDT underflow
    ELC_EVENT_WDT0_UNDERFLOW                = (0x093), // WDT0 underflow
    ELC_EVENT_WDT1_UNDERFLOW                = (0x094), // WDT1 underflow
    ELC_EVENT_RTC_ALARM                     = (0x095), // Alarm interrupt
    ELC_EVENT_RTC_PERIOD                    = (0x096), // Periodic interrupt
    ELC_EVENT_RTC_CARRY                     = (0x097), // Carry interrupt
    ELC_EVENT_USBFS_FIFO_0                  = (0x098), // DMA/DTC transfer request 0
    ELC_EVENT_USBFS_FIFO_1                  = (0x099), // DMA/DTC transfer request 1
    ELC_EVENT_USBFS_INT                     = (0x09A), // USBFS interrupt
    ELC_EVENT_USBFS_RESUME                  = (0x09B), // USBFS resume interrupt
    ELC_EVENT_IIC0_RXI                      = (0x09C), // Receive data full
    ELC_EVENT_IIC0_TXI                      = (0x09D), // Transmit data empty
    ELC_EVENT_IIC0_TEI                      = (0x09E), // Transmit end
    ELC_EVENT_IIC0_ERI                      = (0x09F), // Transfer error
    ELC_EVENT_IIC0_WUI                      = (0x0A0), // Wakeup interrupt
    ELC_EVENT_IIC1_RXI                      = (0x0A1), // Receive data full
    ELC_EVENT_IIC1_TXI                      = (0x0A2), // Transmit data empty
    ELC_EVENT_IIC1_TEI                      = (0x0A3), // Transmit end
    ELC_EVENT_IIC1_ERI                      = (0x0A4), // Transfer error
    ELC_EVENT_IIC2_RXI                      = (0x0A6), // Receive data full
    ELC_EVENT_IIC2_TXI                      = (0x0A7), // Transmit data empty
    ELC_EVENT_IIC2_TEI                      = (0x0A8), // Transmit end
    ELC_EVENT_IIC2_ERI                      = (0x0A9), // Transfer error
    ELC_EVENT_SDHIMMC0_ACCS                 = (0x0AB), // Card access
    ELC_EVENT_SDHIMMC0_SDIO                 = (0x0AC), // SDIO access
    ELC_EVENT_SDHIMMC0_CARD                 = (0x0AD), // Card detect
    ELC_EVENT_SDHIMMC0_DMA_REQ              = (0x0AE), // DMA transfer request
    ELC_EVENT_SDHIMMC1_ACCS                 = (0x0AF), // Card access
    ELC_EVENT_SDHIMMC1_SDIO                 = (0x0B0), // SDIO access
    ELC_EVENT_SDHIMMC1_CARD                 = (0x0B1), // Card detect
    ELC_EVENT_SDHIMMC1_DMA_REQ              = (0x0B2), // DMA transfer request
    ELC_EVENT_SSI0_TXI                      = (0x0B3), // Transmit data empty
    ELC_EVENT_SSI0_RXI                      = (0x0B4), // Receive data full
    ELC_EVENT_SSI0_INT                      = (0x0B6), // Error interrupt
    ELC_EVENT_SSI1_TXI                      = (0x0B9), // Receive data full/Transmit data empty
    ELC_EVENT_SSI1_RXI                      = (0x0B9), // Receive data full/Transmit data empty
    ELC_EVENT_SSI1_INT                      = (0x0BA), // Error interrupt
    ELC_EVENT_XSPI_ERR                      = (0x0BB), // xSPI Error
    ELC_EVENT_XSPI_CMP                      = (0x0BC), // xSPI Complete
    ELC_EVENT_XSPI1_ERR                     = (0x0BD), // xSPI1 Error
    ELC_EVENT_XSPI1_CMP                     = (0x0BE), // xSPI1 Complete
    ELC_EVENT_PDM_DAT0                      = (0x0BF), // Data reception interrupt channel 0
    ELC_EVENT_PDM_DAT1                      = (0x0C0), // Data reception interrupt channel 1
    ELC_EVENT_PDM_DAT2                      = (0x0C1), // Data reception interrupt channel 2
    ELC_EVENT_PDM_SDET                      = (0x0C2), // Sound detection interrupt
    ELC_EVENT_PDM_ERR0                      = (0x0C3), // Error detection interrupt channel 0
    ELC_EVENT_PDM_ERR1                      = (0x0C4), // Error detection interrupt channel 1
    ELC_EVENT_PDM_ERR2                      = (0x0C5), // Error detection interrupt channel 2
    ELC_EVENT_ACMPHS0_INT                   = (0x0C6), // High Speed Comparator channel 0 interrupt
    ELC_EVENT_ACMPHS1_INT                   = (0x0C7), // High Speed Comparator channel 1 interrupt
    ELC_EVENT_ACMPHS2_INT                   = (0x0C8), // High Speed Comparator channel 2 interrupt
    ELC_EVENT_ACMPHS3_INT                   = (0x0C9), // High Speed Comparator channel 3 interrupt
    ELC_EVENT_ELC_SOFTWARE_EVENT_0          = (0x0CC), // Software event 0
    ELC_EVENT_ELC_SOFTWARE_EVENT_1          = (0x0CD), // Software event 1
    ELC_EVENT_ELC_SOFTWARE_EVENT_2          = (0x0CE), // Software event 2
    ELC_EVENT_ELC_SOFTWARE_EVENT_3          = (0x0CF), // Software event 3
    ELC_EVENT_IOPORT_EVENT_1                = (0x0D0), // Port 1 event
    ELC_EVENT_IOPORT_EVENT_2                = (0x0D1), // Port 2 event
    ELC_EVENT_IOPORT_EVENT_3                = (0x0D2), // Port 3 event
    ELC_EVENT_IOPORT_EVENT_4                = (0x0D3), // Port 4 event
    ELC_EVENT_CAC_FREQUENCY_ERROR           = (0x0D4), // Frequency error interrupt
    ELC_EVENT_CAC_MEASUREMENT_END           = (0x0D5), // Measurement end interrupt
    ELC_EVENT_CAC_OVERFLOW                  = (0x0D6), // Overflow interrupt
    ELC_EVENT_POEG0_EVENT                   = (0x0D7), // Port Output disable 0 interrupt
    ELC_EVENT_POEG1_EVENT                   = (0x0D8), // Port Output disable 1 interrupt
    ELC_EVENT_POEG2_EVENT                   = (0x0D9), // Port Output disable 2 interrupt
    ELC_EVENT_POEG3_EVENT                   = (0x0DA), // Port Output disable 3 interrupt
    ELC_EVENT_OPS_UVW_EDGE                  = (0x180), // UVW edge event
    ELC_EVENT_GPT0_CAPTURE_COMPARE_A        = (0x181), // Capture/Compare match A
    ELC_EVENT_GPT0_CAPTURE_COMPARE_B        = (0x182), // Capture/Compare match B
    ELC_EVENT_GPT0_COMPARE_C                = (0x183), // Compare match C
    ELC_EVENT_GPT0_COMPARE_D                = (0x184), // Compare match D
    ELC_EVENT_GPT0_COMPARE_E                = (0x185), // Compare match E
    ELC_EVENT_GPT0_COMPARE_F                = (0x186), // Compare match F
    ELC_EVENT_GPT0_COUNTER_OVERFLOW         = (0x187), // Overflow
    ELC_EVENT_GPT0_COUNTER_UNDERFLOW        = (0x188), // Underflow
    ELC_EVENT_GPT0_PC                       = (0x189), // Period count function finish
    ELC_EVENT_GPT1_CAPTURE_COMPARE_A        = (0x18A), // Capture/Compare match A
    ELC_EVENT_GPT1_CAPTURE_COMPARE_B        = (0x18B), // Capture/Compare match B
    ELC_EVENT_GPT1_COMPARE_C                = (0x18C), // Compare match C
    ELC_EVENT_GPT1_COMPARE_D                = (0x18D), // Compare match D
    ELC_EVENT_GPT1_COMPARE_E                = (0x18E), // Compare match E
    ELC_EVENT_GPT1_COMPARE_F                = (0x18F), // Compare match F
    ELC_EVENT_GPT1_COUNTER_OVERFLOW         = (0x190), // Overflow
    ELC_EVENT_GPT1_COUNTER_UNDERFLOW        = (0x191), // Underflow
    ELC_EVENT_GPT1_PC                       = (0x192), // Period count function finish
    ELC_EVENT_GPT2_CAPTURE_COMPARE_A        = (0x193), // Capture/Compare match A
    ELC_EVENT_GPT2_CAPTURE_COMPARE_B        = (0x194), // Capture/Compare match B
    ELC_EVENT_GPT2_COMPARE_C                = (0x195), // Compare match C
    ELC_EVENT_GPT2_COMPARE_D                = (0x196), // Compare match D
    ELC_EVENT_GPT2_COMPARE_E                = (0x197), // Compare match E
    ELC_EVENT_GPT2_COMPARE_F                = (0x198), // Compare match F
    ELC_EVENT_GPT2_COUNTER_OVERFLOW         = (0x199), // Overflow
    ELC_EVENT_GPT2_COUNTER_UNDERFLOW        = (0x19A), // Underflow
    ELC_EVENT_GPT2_PC                       = (0x19B), // Period count function finish
    ELC_EVENT_GPT3_CAPTURE_COMPARE_A        = (0x19C), // Capture/Compare match A
    ELC_EVENT_GPT3_CAPTURE_COMPARE_B        = (0x19D), // Capture/Compare match B
    ELC_EVENT_GPT3_COMPARE_C                = (0x19E), // Compare match C
    ELC_EVENT_GPT3_COMPARE_D                = (0x19F), // Compare match D
    ELC_EVENT_GPT3_COMPARE_E                = (0x1A0), // Compare match E
    ELC_EVENT_GPT3_COMPARE_F                = (0x1A1), // Compare match F
    ELC_EVENT_GPT3_COUNTER_OVERFLOW         = (0x1A2), // Overflow
    ELC_EVENT_GPT3_COUNTER_UNDERFLOW        = (0x1A3), // Underflow
    ELC_EVENT_GPT3_PC                       = (0x1A4), // Period count function finish
    ELC_EVENT_GPT4_CAPTURE_COMPARE_A        = (0x1A5), // Capture/Compare match A
    ELC_EVENT_GPT4_CAPTURE_COMPARE_B        = (0x1A6), // Capture/Compare match B
    ELC_EVENT_GPT4_COMPARE_C                = (0x1A7), // Compare match C
    ELC_EVENT_GPT4_COMPARE_D                = (0x1A8), // Compare match D
    ELC_EVENT_GPT4_COMPARE_E                = (0x1A9), // Compare match E
    ELC_EVENT_GPT4_COMPARE_F                = (0x1AA), // Compare match F
    ELC_EVENT_GPT4_COUNTER_OVERFLOW         = (0x1AB), // Overflow
    ELC_EVENT_GPT4_COUNTER_UNDERFLOW        = (0x1AC), // Underflow
    ELC_EVENT_GPT5_CAPTURE_COMPARE_A        = (0x1AE), // Capture/Compare match A
    ELC_EVENT_GPT5_CAPTURE_COMPARE_B        = (0x1AF), // Capture/Compare match B
    ELC_EVENT_GPT5_COMPARE_C                = (0x1B0), // Compare match C
    ELC_EVENT_GPT5_COMPARE_D                = (0x1B1), // Compare match D
    ELC_EVENT_GPT5_COMPARE_E                = (0x1B2), // Compare match E
    ELC_EVENT_GPT5_COMPARE_F                = (0x1B3), // Compare match F
    ELC_EVENT_GPT5_COUNTER_OVERFLOW         = (0x1B4), // Overflow
    ELC_EVENT_GPT5_COUNTER_UNDERFLOW        = (0x1B5), // Underflow
    ELC_EVENT_GPT6_CAPTURE_COMPARE_A        = (0x1B7), // Capture/Compare match A
    ELC_EVENT_GPT6_CAPTURE_COMPARE_B        = (0x1B8), // Capture/Compare match B
    ELC_EVENT_GPT6_COMPARE_C                = (0x1B9), // Compare match C
    ELC_EVENT_GPT6_COMPARE_D                = (0x1BA), // Compare match D
    ELC_EVENT_GPT6_COMPARE_E                = (0x1BB), // Compare match E
    ELC_EVENT_GPT6_COMPARE_F                = (0x1BC), // Compare match F
    ELC_EVENT_GPT6_COUNTER_OVERFLOW         = (0x1BD), // Overflow
    ELC_EVENT_GPT6_COUNTER_UNDERFLOW        = (0x1BE), // Underflow
    ELC_EVENT_GPT7_CAPTURE_COMPARE_A        = (0x1C0), // Capture/Compare match A
    ELC_EVENT_GPT7_CAPTURE_COMPARE_B        = (0x1C1), // Capture/Compare match B
    ELC_EVENT_GPT7_COMPARE_C                = (0x1C2), // Compare match C
    ELC_EVENT_GPT7_COMPARE_D                = (0x1C3), // Compare match D
    ELC_EVENT_GPT7_COMPARE_E                = (0x1C4), // Compare match E
    ELC_EVENT_GPT7_COMPARE_F                = (0x1C5), // Compare match F
    ELC_EVENT_GPT7_COUNTER_OVERFLOW         = (0x1C6), // Overflow
    ELC_EVENT_GPT7_COUNTER_UNDERFLOW        = (0x1C7), // Underflow
    ELC_EVENT_GPT8_CAPTURE_COMPARE_A        = (0x1C9), // Capture/Compare match A
    ELC_EVENT_GPT8_CAPTURE_COMPARE_B        = (0x1CA), // Capture/Compare match B
    ELC_EVENT_GPT8_COMPARE_C                = (0x1CB), // Compare match C
    ELC_EVENT_GPT8_COMPARE_D                = (0x1CC), // Compare match D
    ELC_EVENT_GPT8_COMPARE_E                = (0x1CD), // Compare match E
    ELC_EVENT_GPT8_COMPARE_F                = (0x1CE), // Compare match F
    ELC_EVENT_GPT8_COUNTER_OVERFLOW         = (0x1CF), // Overflow
    ELC_EVENT_GPT8_COUNTER_UNDERFLOW        = (0x1D0), // Underflow
    ELC_EVENT_GPT9_CAPTURE_COMPARE_A        = (0x1D2), // Capture/Compare match A
    ELC_EVENT_GPT9_CAPTURE_COMPARE_B        = (0x1D3), // Capture/Compare match B
    ELC_EVENT_GPT9_COMPARE_C                = (0x1D4), // Compare match C
    ELC_EVENT_GPT9_COMPARE_D                = (0x1D5), // Compare match D
    ELC_EVENT_GPT9_COMPARE_E                = (0x1D6), // Compare match E
    ELC_EVENT_GPT9_COMPARE_F                = (0x1D7), // Compare match F
    ELC_EVENT_GPT9_COUNTER_OVERFLOW         = (0x1D8), // Overflow
    ELC_EVENT_GPT9_COUNTER_UNDERFLOW        = (0x1D9), // Underflow
    ELC_EVENT_GPT10_CAPTURE_COMPARE_A       = (0x1DB), // Capture/Compare match A
    ELC_EVENT_GPT10_CAPTURE_COMPARE_B       = (0x1DC), // Capture/Compare match B
    ELC_EVENT_GPT10_COMPARE_C               = (0x1DD), // Compare match C
    ELC_EVENT_GPT10_COMPARE_D               = (0x1DE), // Compare match D
    ELC_EVENT_GPT10_COMPARE_E               = (0x1DF), // Compare match E
    ELC_EVENT_GPT10_COMPARE_F               = (0x1E0), // Compare match F
    ELC_EVENT_GPT10_COUNTER_OVERFLOW        = (0x1E1), // Overflow
    ELC_EVENT_GPT10_COUNTER_UNDERFLOW       = (0x1E2), // Underflow
    ELC_EVENT_GPT10_PC                      = (0x1E3), // Period count function finish
    ELC_EVENT_GPT11_CAPTURE_COMPARE_A       = (0x1E4), // Capture/Compare match A
    ELC_EVENT_GPT11_CAPTURE_COMPARE_B       = (0x1E5), // Capture/Compare match B
    ELC_EVENT_GPT11_COMPARE_C               = (0x1E6), // Compare match C
    ELC_EVENT_GPT11_COMPARE_D               = (0x1E7), // Compare match D
    ELC_EVENT_GPT11_COMPARE_E               = (0x1E8), // Compare match E
    ELC_EVENT_GPT11_COMPARE_F               = (0x1E9), // Compare match F
    ELC_EVENT_GPT11_COUNTER_OVERFLOW        = (0x1EA), // Overflow
    ELC_EVENT_GPT11_COUNTER_UNDERFLOW       = (0x1EB), // Underflow
    ELC_EVENT_GPT11_PC                      = (0x1EC), // Period count function finish
    ELC_EVENT_GPT12_CAPTURE_COMPARE_A       = (0x1ED), // Capture/Compare match A
    ELC_EVENT_GPT12_CAPTURE_COMPARE_B       = (0x1EE), // Capture/Compare match B
    ELC_EVENT_GPT12_COMPARE_C               = (0x1EF), // Compare match C
    ELC_EVENT_GPT12_COMPARE_D               = (0x1F0), // Compare match D
    ELC_EVENT_GPT12_COMPARE_E               = (0x1F1), // Compare match E
    ELC_EVENT_GPT12_COMPARE_F               = (0x1F2), // Compare match F
    ELC_EVENT_GPT12_COUNTER_OVERFLOW        = (0x1F3), // Overflow
    ELC_EVENT_GPT12_COUNTER_UNDERFLOW       = (0x1F4), // Underflow
    ELC_EVENT_GPT12_PC                      = (0x1F5), // Period count function finish
    ELC_EVENT_GPT13_CAPTURE_COMPARE_A       = (0x1F6), // Capture/Compare match A
    ELC_EVENT_GPT13_CAPTURE_COMPARE_B       = (0x1F7), // Capture/Compare match B
    ELC_EVENT_GPT13_COMPARE_C               = (0x1F8), // Compare match C
    ELC_EVENT_GPT13_COMPARE_D               = (0x1F9), // Compare match D
    ELC_EVENT_GPT13_COMPARE_E               = (0x1FA), // Compare match E
    ELC_EVENT_GPT13_COMPARE_F               = (0x1FB), // Compare match F
    ELC_EVENT_GPT13_COUNTER_OVERFLOW        = (0x1FC), // Overflow
    ELC_EVENT_GPT13_COUNTER_UNDERFLOW       = (0x1FD), // Underflow
    ELC_EVENT_GPT13_PC                      = (0x1FE), // Period count function finish
    ELC_EVENT_ETHER_FWEI                    = (0x29A), // Forwarding Error Interrupt
    ELC_EVENT_ETHER_CAEI                    = (0x29B), // Common Error Interrupt
    ELC_EVENT_ETHER_GWEI                    = (0x29C), // GWCA0 Error Interrupt
    ELC_EVENT_ETHER_EAEI0                   = (0x29D), // ETHA0 Error Interrupt
    ELC_EVENT_ETHER_EAEI1                   = (0x29E), // ETHA1 Error Interrupt
    ELC_EVENT_ETHER_PTPSI0                  = (0x29F), // gPTP Status Interrupt 0
    ELC_EVENT_ETHER_PTPSI1                  = (0x2A0), // gPTP Status Interrupt 1
    ELC_EVENT_ETHER_FWSI                    = (0x2A1), // Forwarding Status Interrupt
    ELC_EVENT_ETHER_SWSI                    = (0x2A2), // Switch Status Interrupt
    ELC_EVENT_ETHER_CAMI                    = (0x2A3), // Common Status Interrupt
    ELC_EVENT_ETHER_EASI0                   = (0x2A4), // ETHA0 Status Interrupt
    ELC_EVENT_ETHER_EASI1                   = (0x2A5), // ETHA1 Status Interrupt
    ELC_EVENT_ETHER_GWDI0                   = (0x2A6), // GWCA Data Interrupt 0
    ELC_EVENT_ETHER_GWDI1                   = (0x2A7), // GWCA Data Interrupt 1
    ELC_EVENT_ETHER_GWDI2                   = (0x2A8), // GWCA Data Interrupt 2
    ELC_EVENT_ETHER_GWDI3                   = (0x2A9), // GWCA Data Interrupt 3
    ELC_EVENT_ETHER_GWDI4                   = (0x2AA), // GWCA Data Interrupt 4
    ELC_EVENT_ETHER_GWDI5                   = (0x2AB), // GWCA Data Interrupt 5
    ELC_EVENT_ETHER_GWDI6                   = (0x2AC), // GWCA Data Interrupt 6
    ELC_EVENT_ETHER_GWDI7                   = (0x2AD), // GWCA Data Interrupt 7
    ELC_EVENT_ETHER_TSDI0                   = (0x2AE), // Time Stamp Data Interrupt 0
    ELC_EVENT_ETHER_TSDI1                   = (0x2AF), // Time Stamp Data Interrupt 1
    ELC_EVENT_ETHER_MDIO0                   = (0x2B0), // MDIO Interrupt 0
    ELC_EVENT_ETHER_MDIO1                   = (0x2B1), // MDIO Interrupt 1
    ELC_EVENT_ETHER_RMPI0                   = (0x2B2), // RMAC0 PHY Interrupt
    ELC_EVENT_ETHER_RMPI1                   = (0x2B3), // RMAC1 PHY Interrupt
    ELC_EVENT_GPTP_PTPOUT0                  = (0x2B4), // PTP Pulse Out 0
    ELC_EVENT_GPTP_PTPOUT1                  = (0x2B5), // PTP Pulse Out 1
    ELC_EVENT_GPTP_PTPOUT2                  = (0x2B6), // PTP Pulse Out 2
    ELC_EVENT_GPTP_PTPOUT3                  = (0x2B7), // PTP Pulse Out 3
    ELC_EVENT_GPTP0_MATCH                   = (0x2B8), // Media Clock Recovery Match
    ELC_EVENT_GPTP1_MATCH                   = (0x2B9), // Media Clock Recovery Match
    ELC_EVENT_USBHS_FIFO_0                  = (0x2C1), // DMA transfer request 0
    ELC_EVENT_USBHS_FIFO_1                  = (0x2C2), // DMA transfer request 1
    ELC_EVENT_USBHS_USB_INT_RESUME          = (0x2C3), // USBHS interrupt
    ELC_EVENT_SCI0_RXI                      = (0x2C4), // Receive data full
    ELC_EVENT_SCI0_TXI                      = (0x2C5), // Transmit data empty
    ELC_EVENT_SCI0_TEI                      = (0x2C6), // Transmit end
    ELC_EVENT_SCI0_ERI                      = (0x2C7), // Receive error
    ELC_EVENT_SCI0_AED                      = (0x2C8), // Active edge detection
    ELC_EVENT_SCI0_BFD                      = (0x2C9), // Break field detection
    ELC_EVENT_SCI0_AM                       = (0x2CA), // Address match event
    ELC_EVENT_SCI1_RXI                      = (0x2CB), // Receive data full
    ELC_EVENT_SCI1_TXI                      = (0x2CC), // Transmit data empty
    ELC_EVENT_SCI1_TEI                      = (0x2CD), // Transmit end
    ELC_EVENT_SCI1_ERI                      = (0x2CE), // Receive error
    ELC_EVENT_SCI1_AED                      = (0x2CF), // Active edge detection
    ELC_EVENT_SCI1_BFD                      = (0x2D0), // Break field detection
    ELC_EVENT_SCI1_AM                       = (0x2D1), // Address match event
    ELC_EVENT_SCI2_RXI                      = (0x2D2), // Receive data full
    ELC_EVENT_SCI2_TXI                      = (0x2D3), // Transmit data empty
    ELC_EVENT_SCI2_TEI                      = (0x2D4), // Transmit end
    ELC_EVENT_SCI2_ERI                      = (0x2D5), // Receive error
    ELC_EVENT_SCI2_AED                      = (0x2D6), // Active edge detection
    ELC_EVENT_SCI2_BFD                      = (0x2D7), // Break field detection
    ELC_EVENT_SCI2_AM                       = (0x2D8), // Address match event
    ELC_EVENT_SCI3_RXI                      = (0x2D9), // Receive data full
    ELC_EVENT_SCI3_TXI                      = (0x2DA), // Transmit data empty
    ELC_EVENT_SCI3_TEI                      = (0x2DB), // Transmit end
    ELC_EVENT_SCI3_ERI                      = (0x2DC), // Receive error
    ELC_EVENT_SCI3_AED                      = (0x2DD), // Active edge detection
    ELC_EVENT_SCI3_BFD                      = (0x2DE), // Break field detection
    ELC_EVENT_SCI3_AM                       = (0x2DF), // Address match event
    ELC_EVENT_SCI4_RXI                      = (0x2E0), // Receive data full
    ELC_EVENT_SCI4_TXI                      = (0x2E1), // Transmit data empty
    ELC_EVENT_SCI4_TEI                      = (0x2E2), // Transmit end
    ELC_EVENT_SCI4_ERI                      = (0x2E3), // Receive error
    ELC_EVENT_SCI4_AED                      = (0x2E4), // Active edge detection
    ELC_EVENT_SCI4_BFD                      = (0x2E5), // Break field detection
    ELC_EVENT_SCI4_AM                       = (0x2E6), // Address match event
    ELC_EVENT_SCI5_RXI                      = (0x2E7), // Receive data full
    ELC_EVENT_SCI5_TXI                      = (0x2E8), // Transmit data empty
    ELC_EVENT_SCI5_TEI                      = (0x2E9), // Transmit end
    ELC_EVENT_SCI5_ERI                      = (0x2EA), // Receive error
    ELC_EVENT_SCI5_AED                      = (0x2EB), // Active edge detection
    ELC_EVENT_SCI5_BFD                      = (0x2EC), // Break field detection
    ELC_EVENT_SCI5_AM                       = (0x2ED), // Address match event
    ELC_EVENT_SCI6_RXI                      = (0x2EE), // Receive data full
    ELC_EVENT_SCI6_TXI                      = (0x2EF), // Transmit data empty
    ELC_EVENT_SCI6_TEI                      = (0x2F0), // Transmit end
    ELC_EVENT_SCI6_ERI                      = (0x2F1), // Receive error
    ELC_EVENT_SCI6_AED                      = (0x2F2), // Active edge detection
    ELC_EVENT_SCI6_BFD                      = (0x2F3), // Break field detection
    ELC_EVENT_SCI6_AM                       = (0x2F4), // Address match event
    ELC_EVENT_SCI7_RXI                      = (0x2F5), // Receive data full
    ELC_EVENT_SCI7_TXI                      = (0x2F6), // Transmit data empty
    ELC_EVENT_SCI7_TEI                      = (0x2F7), // Transmit end
    ELC_EVENT_SCI7_ERI                      = (0x2F8), // Receive error
    ELC_EVENT_SCI7_AED                      = (0x2F9), // Active edge detection
    ELC_EVENT_SCI7_BFD                      = (0x2FA), // Break field detection
    ELC_EVENT_SCI7_AM                       = (0x2FB), // Address match event
    ELC_EVENT_SCI8_RXI                      = (0x2FC), // Receive data full
    ELC_EVENT_SCI8_TXI                      = (0x2FD), // Transmit data empty
    ELC_EVENT_SCI8_TEI                      = (0x2FE), // Transmit end
    ELC_EVENT_SCI8_ERI                      = (0x2FF), // Receive error
    ELC_EVENT_SCI8_AED                      = (0x300), // Active edge detection
    ELC_EVENT_SCI8_BFD                      = (0x301), // Break field detection
    ELC_EVENT_SCI8_AM                       = (0x302), // Address match event
    ELC_EVENT_SCI9_RXI                      = (0x303), // Receive data full
    ELC_EVENT_SCI9_TXI                      = (0x304), // Transmit data empty
    ELC_EVENT_SCI9_TEI                      = (0x305), // Transmit end
    ELC_EVENT_SCI9_ERI                      = (0x306), // Receive error
    ELC_EVENT_SCI9_AED                      = (0x307), // Active edge detection
    ELC_EVENT_SCI9_BFD                      = (0x308), // Break field detection
    ELC_EVENT_SCI9_AM                       = (0x309), // Address match event
    ELC_EVENT_SCI10_RXI                     = (0x30A), // Receive data full
    ELC_EVENT_SCI10_TXI                     = (0x30B), // Transmit data empty
    ELC_EVENT_SCI10_TEI                     = (0x30C), // Transmit end
    ELC_EVENT_SCI10_ERI                     = (0x30D), // Receive error
    ELC_EVENT_SCI10_AED                     = (0x30E), // Active edge detection
    ELC_EVENT_SCI10_BFD                     = (0x30F), // Break field detection
    ELC_EVENT_SCI10_AM                      = (0x310), // Address match event
    ELC_EVENT_SCI11_RXI                     = (0x311), // Receive data full
    ELC_EVENT_SCI11_TXI                     = (0x312), // Transmit data empty
    ELC_EVENT_SCI11_TEI                     = (0x313), // Transmit end
    ELC_EVENT_SCI11_ERI                     = (0x314), // Receive error
    ELC_EVENT_SCI11_AED                     = (0x315), // Active edge detection
    ELC_EVENT_SCI11_BFD                     = (0x316), // Break field detection
    ELC_EVENT_SCI11_AM                      = (0x317), // Address match event
    ELC_EVENT_SPI0_RXI                      = (0x318), // Receive buffer full
    ELC_EVENT_SPI0_TXI                      = (0x319), // Transmit buffer empty
    ELC_EVENT_SPI0_IDLE                     = (0x31A), // Idle
    ELC_EVENT_SPI0_ERI                      = (0x31B), // Error
    ELC_EVENT_SPI0_TEI                      = (0x31C), // Transmission complete event
    ELC_EVENT_SPI1_RXI                      = (0x31D), // Receive buffer full
    ELC_EVENT_SPI1_TXI                      = (0x31E), // Transmit buffer empty
    ELC_EVENT_SPI1_IDLE                     = (0x31F), // Idle
    ELC_EVENT_SPI1_ERI                      = (0x320), // Error
    ELC_EVENT_SPI1_TEI                      = (0x321), // Transmission complete event
    ELC_EVENT_CAN_RXF                       = (0x322), // Global receive FIFO interrupt
    ELC_EVENT_CAN_GLERR                     = (0x323), // Global error
    ELC_EVENT_CAN0_DMAREQ0                  = (0x324), // RX fifo DMA request 0
    ELC_EVENT_CAN0_DMAREQ1                  = (0x325), // RX fifo DMA request 1
    ELC_EVENT_CAN1_DMAREQ0                  = (0x328), // RX fifo DMA request 0
    ELC_EVENT_CAN1_DMAREQ1                  = (0x329), // RX fifo DMA request 1
    ELC_EVENT_CAN0_TX                       = (0x32C), // Transmit interrupt
    ELC_EVENT_CAN0_CHERR                    = (0x32D), // Channel  error
    ELC_EVENT_CAN0_COMFRX                   = (0x32E), // Common FIFO receive interrupt
    ELC_EVENT_CAN0_CF_DMAREQ                = (0x32F), // Channel  DMA request
    ELC_EVENT_CAN0_RXMB                     = (0x330), // Receive message buffer interrupt
    ELC_EVENT_CAN1_TX                       = (0x331), // Transmit interrupt
    ELC_EVENT_CAN1_CHERR                    = (0x332), // Channel  error
    ELC_EVENT_CAN1_COMFRX                   = (0x333), // Common FIFO receive interrupt
    ELC_EVENT_CAN1_CF_DMAREQ                = (0x334), // Channel  DMA request
    ELC_EVENT_CAN1_RXMB                     = (0x335), // Receive message buffer interrupt
    ELC_EVENT_CAN0_MRAM_ERI                 = (0x338), // CANFD0 ECC error
    ELC_EVENT_CAN1_MRAM_ERI                 = (0x339), // CANFD1 ECC error
    ELC_EVENT_I3C0_RESPONSE                 = (0x33A), // Response status buffer full
    ELC_EVENT_I3C0_COMMAND                  = (0x33B), // Command buffer empty
    ELC_EVENT_I3C0_IBI                      = (0x33C), // IBI status buffer full
    ELC_EVENT_I3C0_RX                       = (0x33D), // Receive
    ELC_EVENT_IICB0_RXI                     = (0x33D), // Receive
    ELC_EVENT_I3C0_TX                       = (0x33E), // Transmit
    ELC_EVENT_IICB0_TXI                     = (0x33E), // Transmit
    ELC_EVENT_I3C0_RCV_STATUS               = (0x33F), // Receive status buffer full
    ELC_EVENT_I3C0_HRESP                    = (0x340), // High priority response queue full
    ELC_EVENT_I3C0_HCMD                     = (0x341), // High priority command queue empty
    ELC_EVENT_I3C0_HRX                      = (0x342), // High priority rx data buffer full
    ELC_EVENT_I3C0_HTX                      = (0x343), // High priority tx data buffer empty
    ELC_EVENT_I3C0_TEND                     = (0x344), // Transmit end
    ELC_EVENT_IICB0_TEI                     = (0x344), // Transmit end
    ELC_EVENT_I3C0_EEI                      = (0x345), // Error
    ELC_EVENT_IICB0_ERI                     = (0x345), // Error
    ELC_EVENT_I3C0_STEV                     = (0x346), // Synchronous timing
    ELC_EVENT_I3C0_MREFOVF                  = (0x347), // MREF counter overflow
    ELC_EVENT_I3C0_MREFCPT                  = (0x348), // MREF capture
    ELC_EVENT_I3C0_AMEV                     = (0x349), // Additional master-initiated bus event
    ELC_EVENT_I3C0_WU                       = (0x34A), // Wake-up Condition Detection interrupt
    ELC_EVENT_ADC_LIMCLPI                   = (0x34B), // Limiter clip interrupt with the limit table 0 to 7
    ELC_EVENT_ADC_FIFOOVF                   = (0x34C), // FIFO data overflow
    ELC_EVENT_ADC_ADI0                      = (0x34D), // End of A/D scanning operation(Gr.0)
    ELC_EVENT_ADC_ADI1                      = (0x34E), // End of A/D scanning operation(Gr.1)
    ELC_EVENT_ADC_ADI2                      = (0x34F), // End of A/D scanning operation(Gr.2)
    ELC_EVENT_ADC_ADI3                      = (0x350), // End of A/D scanning operation(Gr.3)
    ELC_EVENT_ADC_ADI4                      = (0x351), // End of A/D scanning operation(Gr.4)
    ELC_EVENT_ADC_ADI5                      = (0x352), // End of A/D scanning operation(Gr.5)
    ELC_EVENT_ADC_ADI6                      = (0x353), // End of A/D scanning operation(Gr.6)
    ELC_EVENT_ADC_ADI7                      = (0x354), // End of A/D scanning operation(Gr.7)
    ELC_EVENT_ADC_ADI8                      = (0x355), // End of A/D scanning operation(Gr.8)
    ELC_EVENT_ADC_FIFOREQ0                  = (0x356), // FIFO data read request interrupt(Gr.0)
    ELC_EVENT_ADC_FIFOREQ1                  = (0x357), // FIFO data read request interrupt(Gr.1)
    ELC_EVENT_ADC_FIFOREQ2                  = (0x358), // FIFO data read request interrupt(Gr.2)
    ELC_EVENT_ADC_FIFOREQ3                  = (0x359), // FIFO data read request interrupt(Gr.3)
    ELC_EVENT_ADC_FIFOREQ4                  = (0x35A), // FIFO data read request interrupt(Gr.4)
    ELC_EVENT_ADC_FIFOREQ5                  = (0x35B), // FIFO data read request interrupt(Gr.5)
    ELC_EVENT_ADC_FIFOREQ6                  = (0x35C), // FIFO data read request interrupt(Gr.6)
    ELC_EVENT_ADC_FIFOREQ7                  = (0x35D), // FIFO data read request interrupt(Gr.7)
    ELC_EVENT_ADC_FIFOREQ8                  = (0x35E), // FIFO data read request interrupt(Gr.8)
    ELC_EVENT_ADC_CMPI0                     = (0x35F), // Compare match interrupt with compare table 0
    ELC_EVENT_ADC_CMPI1                     = (0x360), // Compare match interrupt with compare table 1
    ELC_EVENT_ADC_CCMPM0                    = (0x361), // Composite compare match 0
    ELC_EVENT_ADC_CCMPUM0                   = (0x362), // Composite condition compare mismatch 0
    ELC_EVENT_ADC_ERR0                      = (0x363), // A/D converter unit 0 Error
    ELC_EVENT_ADC_RESOVF0                   = (0x364), // A/D conversion overflow on A/D converter unit 0
    ELC_EVENT_ADC_CALREQ0                   = (0x365), // Calibration request unit 0
    ELC_EVENT_ADC_CALEND0                   = (0x366), // End of calibration of A/D converter unit 0
    ELC_EVENT_ADC_CMPI2                     = (0x367), // Compare match interrupt with compare table 2
    ELC_EVENT_ADC_CMPI3                     = (0x368), // Compare match interrupt with compare table 3
    ELC_EVENT_ADC_CCMPM1                    = (0x369), // Composite compare match 1
    ELC_EVENT_ADC_CCMPUM1                   = (0x36A), // Composite condition compare mismatch 1
    ELC_EVENT_ADC_ERR1                      = (0x36B), // A/D converter unit 1 Error
    ELC_EVENT_ADC_RESOVF1                   = (0x36C), // A/D conversion overflow on A/D converter unit 1
    ELC_EVENT_ADC_CALREQ1                   = (0x36D), // Calibration request unit 1
    ELC_EVENT_ADC_CALEND1                   = (0x36E), // End of calibration of A/D converter unit 1
    ELC_EVENT_DOC_INT                       = (0x36F), // Data operation circuit interrupt
    ELC_EVENT_RSIP_TADI                     = (0x371), // RSIP Tamper Detection
    ELC_EVENT_CEU_CEUI                      = (0x397)  // CEU interrupt
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
    // Adjust SPICLK based on the SPICKDIVCR value.
    SYSTEM_Clocks->SPICLK_Frequency /= SCI_SPI_CLK_PrescTable[ VALUE_SYSTEM_SPICKDIVCR & R_SYSTEM_SPICKDIVCR_CKDIV_Msk ];

    // Get the source clock of SCI module.
    SYSTEM_Clocks->SCICLK_Frequency = \
        SYSTEM_GetSPISCIClocksFrequency( VALUE_SYSTEM_SCICKCR & R_SYSTEM_SCICKCR_SCICKSEL_Msk );
    // Adjust SCICLK based on the SPICKDIVCR value.
    SYSTEM_Clocks->SCICLK_Frequency /= SCI_SPI_CLK_PrescTable[ VALUE_SYSTEM_SCICKDIVCR & R_SYSTEM_SCICKDIVCR_CKDIV_Msk ];
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

    // Set SPICLK parameters
    R_SYSTEM->SPICKCR_b.CKSREQ = 1;
    while ( !( R_SYSTEM->SPICKCR_b.CKSRDY ));
    R_SYSTEM->SPICKDIVCR = VALUE_SYSTEM_SPICKDIVCR;
    R_SYSTEM->SPICKCR = VALUE_SYSTEM_SPICKCR;
    R_SYSTEM->SPICKCR_b.CKSREQ = 0;
    while ( R_SYSTEM->SPICKCR_b.CKSRDY );

    // Set SCICLK parameters
    R_SYSTEM->SCICKCR_b.CKSREQ = 1;
    while ( !( R_SYSTEM->SCICKCR_b.CKSRDY ));
    R_SYSTEM->SCICKDIVCR = VALUE_SYSTEM_SCICKDIVCR;
    R_SYSTEM->SCICKCR = VALUE_SYSTEM_SCICKCR;
    R_SYSTEM->SCICKCR_b.CKSREQ = 0;
    while ( R_SYSTEM->SCICKCR_b.CKSRDY );

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
