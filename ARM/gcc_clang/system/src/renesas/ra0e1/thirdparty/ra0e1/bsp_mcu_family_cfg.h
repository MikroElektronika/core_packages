/* generated configuration header file - do not edit */
#ifndef BSP_MCU_FAMILY_CFG_H_
#define BSP_MCU_FAMILY_CFG_H_
#ifdef __cplusplus
            extern "C" {
            #endif

            #include "bsp_mcu_device_pn_cfg.h"
            #include "bsp_mcu_device_cfg.h"
            #include "../../../ra/fsp/src/bsp/mcu/ra0e1/bsp_mcu_info.h"
            #include "../../../ra/fsp/src/bsp/mcu/ra0e1/bsp_override.h"
            #include "bsp_clock_cfg.h"
            #define BSP_MCU_GROUP_RA0E1 (1)
            #define BSP_LOCO_HZ                 (32768)
            #define BSP_MOCO_HZ                 (4000000)
            #define BSP_SUB_CLOCK_HZ            (32768)
            #if   BSP_CFG_HOCO_FREQUENCY == 0
                #define BSP_HOCO_HZ             (24000000)
            #elif BSP_CFG_HOCO_FREQUENCY == 2
                #define BSP_HOCO_HZ             (32000000)
            #else
                #error "Invalid HOCO frequency chosen (BSP_CFG_HOCO_FREQUENCY) in bsp_clock_cfg.h"
            #endif

            #define BSP_CORTEX_VECTOR_TABLE_ENTRIES    (16U)
            #define BSP_VECTOR_TABLE_MAX_ENTRIES       (58U)
            #define BSP_CFG_INLINE_IRQ_FUNCTIONS       (1)

            #define OFS_SEQ1 0xFFFFA001 | (1 << 1) | (3 << 2)
            #define OFS_SEQ2 (15 << 4) | (3 << 8) | (3 << 10)
            #define OFS_SEQ3 (1 << 12) | (1 << 14)
            #define BSP_CFG_USE_LOW_VOLTAGE_MODE (0)
            #define BSP_CFG_ROM_REG_OFS0 (OFS_SEQ1 | OFS_SEQ2 | OFS_SEQ3)
            #define BSP_CFG_ROM_OFS1_FLASH_PROTECT_START (0x01)
            #define BSP_CFG_ROM_OFS1_FLASH_PROTECT_END (0x3F)
            #define BSP_CFG_ROM_REG_OFS1 (0xE0000FC3 | (1 << 2) | (6 << 3)  \
                                 | (1 << 15) | (BSP_CFG_ROM_OFS1_FLASH_PROTECT_END << 22) | (BSP_CFG_ROM_OFS1_FLASH_PROTECT_START << 16)  \
                                 | (1 << 28))
            #ifndef BSP_CLOCK_CFG_MAIN_OSC_WAIT
            #define BSP_CLOCK_CFG_MAIN_OSC_WAIT ((0x7U))
            #endif
            /* Used to create IELS values for the interrupt initialization table g_interrupt_event_link_select. */
            #define BSP_PRV_IELS_ENUM(vector)    (ICU_ ## vector)
            /*
            ID Code
            Note: To permanently lock and disable the debug interface define the BSP_ID_CODE_PERMANENTLY_LOCKED in the compiler settings.
            WARNING: This will disable debug access to the part and cannot be reversed by a debug probe.
            */
            #if defined(BSP_ID_CODE_PERMANENTLY_LOCKED)
            #define BSP_CFG_ID_CODE_LONG_1 (0x00000000)
            #define BSP_CFG_ID_CODE_LONG_2 (0x00000000)
            #define BSP_CFG_ID_CODE_LONG_3 (0x00000000)
            #define BSP_CFG_ID_CODE_LONG_4 (0x00000000)
            #else
            /* ID CODE: FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF */
            #define BSP_CFG_ID_CODE_LONG_1 (0xFFFFFFFF)
            #define BSP_CFG_ID_CODE_LONG_2 (0xFFFFFFFF)
            #define BSP_CFG_ID_CODE_LONG_3 (0xFFFFFFFF)
            #define BSP_CFG_ID_CODE_LONG_4 (0xffFFFFFF)
            #endif

            #if (0 == BSP_CFG_CLOCK_SOURCE)
             #define BSP_CFG_ICLK_DIV                        (BSP_CFG_HOCO_DIV)
            #elif (1 == BSP_CFG_CLOCK_SOURCE)
             #define BSP_CFG_ICLK_DIV                        (BSP_CFG_MOCO_DIV)
            #elif (3 == BSP_CFG_CLOCK_SOURCE)
             #define BSP_CFG_ICLK_DIV                        (BSP_CFG_XTAL_DIV)
            #else
             #define BSP_CFG_ICLK_DIV                        (0)
            #endif

            #if (1)
            #define BSP_SECTION_FLASH_GAP BSP_PLACE_IN_SECTION(".flash_gap")
            #endif
            #ifdef __cplusplus
            }
            #endif
#endif /* BSP_MCU_FAMILY_CFG_H_ */
