/**************************************************************************//**
 * @file     dac_reg.h
 * @version  V1.00
 * @brief    DAC register definition header file
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2018 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/
#ifndef __DAC_REG_H__
#define __DAC_REG_H__

#if defined ( __CC_ARM   )
#pragma anon_unions
#endif

/**
   @addtogroup REGISTER Control Register
   @{
*/

/**
    @addtogroup DAC Digital to Analog Converter(DAC)
    Memory Mapped Structure for DAC Controller
@{ */

typedef struct
{

    /**
     * @var DAC_T::CTL
     * Offset: 0x00  DAC Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |DACEN     |DAC Enable Bit
     * |        |          |0 = DAC Disabled.
     * |        |          |1 = DAC Enabled.
     * |[1]     |DACIEN    |DAC Interrupt Enable Bit
     * |        |          |0 = DAC interrupt Disabled.
     * |        |          |1 = DAC interrupt Enabled.
     * |[2]     |DMAEN     |DMA Mode Enable Bit
     * |        |          |0 = DMA mode Disabled.
     * |        |          |1 = DMA mode Enabled.
     * |[3]     |DMAURIEN  |DMA Under-run Interrupt Enable Bit
     * |        |          |0 = DMA under-run interrupt Disabled.
     * |        |          |1 = DMA under-run interrupt Enabled.
     * |[4]     |TRGEN     |Trigger Mode Enable Bit
     * |        |          |0 = DAC event trigger mode Disabled.
     * |        |          |1 = DAC event trigger mode Enabled.
     * |[7:5]   |TRGSEL    |Trigger Source Selection
     * |        |          |000 = Software trigger.
     * |        |          |001 = Timer 2 trigger.
     * |        |          |010 = Timer 0 trigger.
     * |        |          |011 = Timer 1 trigger.
     * |        |          |100 = Timer 3 trigger.
     * |        |          |101 = Timer 4 trigger.
     * |        |          |110 = BPWM 1 trigger.
     * |        |          |111 = Timer 5 trigger.
     * |[8]     |BYPASS    |Bypass Buffer Mode
     * |        |          |0 = Output voltage buffer Enabled.
     * |        |          |1 = Output voltage buffer Disabled.
     * |[10]    |LALIGN    |DAC Data Left-aligned Enabled Bit
     * |        |          |0 = Right alignment.
     * |        |          |1 = Left alignment.
     * |[13:12] |ETRGSEL   |External Pin Trigger Selection
     * |        |          |00 = Low level trigger.
     * |        |          |01 = High level trigger.
     * |        |          |10 = Falling edge trigger.
     * |        |          |11 = Rising edge trigger.
     * |[15:14] |BWSEL     |DAC Data Bit-width Selection
     * |        |          |00 = Data is 12 bits.
     * |        |          |01 = Data is 8 bits.
     * |        |          |Others = Reserved.
     * |[16]    |GRPEN     |DAC Group Mode Enable Bit
     * |        |          |0 = DAC0 and DAC1 are not grouped.
     * |        |          |1 = DAC0 and DAC1 are grouped.
     * |[24]    |RETEN     |DAC Reset Retention Select (Write Protect)
     * |        |          |0 = DAC controller registers reset by POR, NRESET, WDT, LVR, BOD, Lockup, CHIP and MCU reset sources.
     * |        |          |1 = DAC controller registers reset by POR, LVR, BOD and Lockup reset sources.
     * |        |          |Note 1: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |        |          |Note 2: This bit only exists in DAC0 control register to control 4 DAC retention.
     * @var DAC_T::SWTRG
     * Offset: 0x04  DAC Software Trigger Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |SWTRG     |Software Trigger
     * |        |          |0 = Software trigger Disabled.
     * |        |          |1 = Software trigger Enabled.
     * |        |          |Note: Writing this bit will generate one shot pulse and this bit is cleared to 0 by hardware automatically; reading this bit will always get 0.
     * @var DAC_T::DAT
     * Offset: 0x08  DAC Data Holding Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[15:0]  |DACDAT    |DAC 12-bit Holding Data
     * |        |          |These bits are written by user software which specifies 12-bit conversion data for DAC output
     * |        |          |The unused bits (DAC_DAT[3:0] in left-alignment mode and DAC_DAT[15:12] in right alignment mode) are ignored by DAC controller hardware.
     * |        |          |12 bit left alignment: user has to load data into DAC_DAT[15:4] bits.
     * |        |          |12 bit right alignment: user has to load data into DAC_DAT[11:0] bits.
     * @var DAC_T::DATOUT
     * Offset: 0x0C  DAC Data Output Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[11:0]  |DATOUT    |DAC 12-bit Output Data
     * |        |          |These bits are current digital data for DAC output conversion.
     * |        |          |It is loaded from DAC_DAT register and user cannot write it directly.
     * @var DAC_T::STATUS
     * Offset: 0x10  DAC Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |FINISH    |DAC Conversion Complete Finish Flag
     * |        |          |0 = DAC is in conversion state.
     * |        |          |1 = DAC conversion finish.
     * |        |          |Note: This bit is set to 1 when conversion time counter counts to SETTLET
     * |        |          |It is cleared to 0 when DAC starts a new conversion
     * |        |          |Write 1 to clear this bit to 0.
     * |[1]     |DMAUDR    |DMA Under-run Interrupt Flag
     * |        |          |0 = No DMA under-run error condition occurred.
     * |        |          |1 = DMA under-run error condition occurred.
     * |        |          |Note: Write 1 to clear this bit.
     * |[8]     |BUSY      |DAC Busy Flag (Read Only)
     * |        |          |0 = DAC is ready for next conversion.
     * |        |          |1 = DAC is busy in conversion.
     * @var DAC_T::TCTL
     * Offset: 0x14  DAC Timing Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[9:0]   |SETTLET   |DAC Output Conversion Cycles
     * |        |          |User software needs to write appropriate value to these bits to meet DAC conversion settling time based on PCLK (APB clock) speed.
     * |        |          |For example, DAC controller clock speed is 72 MHz and DAC conversion setting time is 1 us, and SETTLET value must be greater than 0x48.
     * |        |          |SELTTLET = DAC controller clock speed x DAC conversion settling time.
     * |        |          |Note: The DAC output conversion cycles is SETTLET + 1 PCLK cycles
     * @var DAC_T::ADGCTL
     * Offset: 0x1C  DAC0 Auto Data Generator Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |AUTOEN    |DAC Auto Data Generation Mode Enable Bit
     * |        |          |0= DAC auto data generation mode is disabled.
     * |        |          |1= DAC auto data generation mode is enabled.
     * |[1]     |CPOSEL    |Carrier Polarity Selection
     * |        |          |0 = auto data update for DAC when MANCH_TXD data high.
     * |        |          |1 = auto data update for DAC when MANCH_TXD data is low.
     * |[3:2]   |SAMPSEL   |Sample Points Step Selection
     * |        |          |00 = no samples.
     * |        |          |01= 8 sample points per MANCH_TXD carrier cycle.
     * |        |          |10= 16 sample points per MANCH_TXD carrier cycle.
     * |        |          |11= 32 sample points per MANCH_TXD carrier cycle.
     * @var DAC_T::ADCTL[32]
     * Offset: 0x60  DAC0 Auto Data Control Register[32]
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[15:0]  |AUTODATA  |Data Input of Auto Data Generation Function
     * |        |          |Software needs to write appropriate data value to these bits for DAC auto data generation
     */
    __IO uint32_t CTL;                   /*!< [0x0000] DAC Control Register                                            */
    __IO uint32_t SWTRG;                 /*!< [0x0004] DAC Software Trigger Control Register                           */
    __IO uint32_t DAT;                   /*!< [0x0008] DAC Data Holding Register                                       */
    __I  uint32_t DATOUT;                /*!< [0x000c] DAC Data Output Register                                        */
    __IO uint32_t STATUS;                /*!< [0x0010] DAC Status Register                                             */
    __IO uint32_t TCTL;                  /*!< [0x0014] DAC Timing Control Register                                     */
    __I  uint32_t RESERVE0[1];
    __IO uint32_t ADGCTL;                /*!< [0x001c] DAC0 Auto Data Generator Control Register                       */
    __I  uint32_t RESERVE1[16];
    __IO uint32_t ADCTL[32];             /*!< [0x0060] DAC0 Auto Data Control Register                                 */
    
} DAC_T;

/**
    @addtogroup DAC_CONST DAC Bit Field Definition
    Constant Definitions for DAC Controller
@{ */

#define DAC_CTL_DACEN_Pos                (0)                                               /*!< DAC CTL: DACEN Position                */
#define DAC_CTL_DACEN_Msk                (0x1ul << DAC_CTL_DACEN_Pos)                      /*!< DAC CTL: DACEN Mask                    */

#define DAC_CTL_DACIEN_Pos               (1)                                               /*!< DAC CTL: DACIEN Position               */
#define DAC_CTL_DACIEN_Msk               (0x1ul << DAC_CTL_DACIEN_Pos)                     /*!< DAC CTL: DACIEN Mask                   */

#define DAC_CTL_DMAEN_Pos                (2)                                               /*!< DAC CTL: DMAEN Position                */
#define DAC_CTL_DMAEN_Msk                (0x1ul << DAC_CTL_DMAEN_Pos)                      /*!< DAC CTL: DMAEN Mask                    */

#define DAC_CTL_DMAURIEN_Pos             (3)                                               /*!< DAC CTL: DMAURIEN Position             */
#define DAC_CTL_DMAURIEN_Msk             (0x1ul << DAC_CTL_DMAURIEN_Pos)                   /*!< DAC CTL: DMAURIEN Mask                 */

#define DAC_CTL_TRGEN_Pos                (4)                                               /*!< DAC CTL: TRGEN Position                */
#define DAC_CTL_TRGEN_Msk                (0x1ul << DAC_CTL_TRGEN_Pos)                      /*!< DAC CTL: TRGEN Mask                    */

#define DAC_CTL_TRGSEL_Pos               (5)                                               /*!< DAC CTL: TRGSEL Position               */
#define DAC_CTL_TRGSEL_Msk               (0x7ul << DAC_CTL_TRGSEL_Pos)                     /*!< DAC CTL: TRGSEL Mask                   */

#define DAC_CTL_BYPASS_Pos               (8)                                               /*!< DAC CTL: BYPASS Position               */
#define DAC_CTL_BYPASS_Msk               (0x1ul << DAC_CTL_BYPASS_Pos)                     /*!< DAC CTL: BYPASS Mask                   */

#define DAC_CTL_LALIGN_Pos               (10)                                              /*!< DAC CTL: LALIGN Position               */
#define DAC_CTL_LALIGN_Msk               (0x1ul << DAC_CTL_LALIGN_Pos)                     /*!< DAC CTL: LALIGN Mask                   */

#define DAC_CTL_ETRGSEL_Pos              (12)                                              /*!< DAC CTL: ETRGSEL Position              */
#define DAC_CTL_ETRGSEL_Msk              (0x3ul << DAC_CTL_ETRGSEL_Pos)                    /*!< DAC CTL: ETRGSEL Mask                  */

#define DAC_CTL_BWSEL_Pos                (14)                                              /*!< DAC CTL: BWSEL Position                */
#define DAC_CTL_BWSEL_Msk                (0x3ul << DAC_CTL_BWSEL_Pos)                       /*!< DAC CTL: BWSEL Mask                    */

#define DAC_CTL_GRPMODE_Pos              (16)                                              /*!< DAC CTL: GRPMODE Position              */
#define DAC_CTL_GRPMODE_Msk              (0x1ul << DAC_CTL_GRPMODE_Pos)                    /*!< DAC CTL: GRPMODE Mask                  */

#define DAC_CTL_RETEN_Pos                (24)                                              /*!< DAC_T::CTL: RETEN Position             */
#define DAC_CTL_RETEN_Msk                (0x1ul << DAC_CTL_RETEN_Pos)                      /*!< DAC_T::CTL: RETEN Mask                 */

#define DAC_SWTRG_SWTRG_Pos              (0)                                               /*!< DAC SWTRG: SWTRG Position              */
#define DAC_SWTRG_SWTRG_Msk              (0x1ul << DAC_SWTRG_SWTRG_Pos)                    /*!< DAC SWTRG: SWTRG Mask                  */

#define DAC_DAT_DAC_DAT_Pos              (0)                                               /*!< DAC DAT: DAC_DAT Position              */
#define DAC_DAT_DAC_DAT_Msk              (0xfffful << DAC_DAT_DAC_DAT_Pos)                 /*!< DAC DAT: DAC_DAT Mask                  */

#define DAC_DATOUT_DATOUT_Pos            (0)                                               /*!< DAC DATOUT: DATOUT Position            */
#define DAC_DATOUT_DATOUT_Msk            (0xffful << DAC_DATOUT_DATOUT_Pos)                /*!< DAC DATOUT: DATOUT Mask                */

#define DAC_STATUS_FINISH_Pos            (0)                                               /*!< DAC STATUS: FINISH Position            */
#define DAC_STATUS_FINISH_Msk            (0x1ul << DAC_STATUS_FINISH_Pos)                  /*!< DAC STATUS: FINISH Mask                */

#define DAC_STATUS_DMAUDR_Pos            (1)                                               /*!< DAC STATUS: DMAUDR Position            */
#define DAC_STATUS_DMAUDR_Msk            (0x1ul << DAC_STATUS_DMAUDR_Pos)                  /*!< DAC STATUS: DMAUDR Mask                */

#define DAC_STATUS_BUSY_Pos              (8)                                               /*!< DAC STATUS: BUSY Position              */
#define DAC_STATUS_BUSY_Msk              (0x1ul << DAC_STATUS_BUSY_Pos)                    /*!< DAC STATUS: BUSY Mask                  */

#define DAC_TCTL_SETTLET_Pos             (0)                                               /*!< DAC TCTL: SETTLET Position             */
#define DAC_TCTL_SETTLET_Msk             (0x3fful << DAC_TCTL_SETTLET_Pos)                 /*!< DAC TCTL: SETTLET Mask                 */

#define DAC_ADGCTL_AUTOEN_Pos             (0)                                               /*!< DAC ADGCTL: AUTOEN Position             */
#define DAC_ADGCTL_AUTOEN_Msk             (0x1ul << DAC_ADGCTL_AUTOEN_Pos)                   /*!< DAC ADGCTL: AUTOEN Mask                 */

#define DAC_ADGCTL_CPOSEL_Pos             (1)                                               /*!< DAC ADGCTL: CPOSEL Position             */
#define DAC_ADGCTL_CPOSEL_Msk             (0x1ul << DAC_ADGCTL_CPOSEL_Pos)                   /*!< DAC ADGCTL: CPOSEL Mask                 */

#define DAC_ADGCTL_SAMPSEL_Pos            (2)                                               /*!< DAC ADGCTL: SAMPSEL Position             */
#define DAC_ADGCTL_SAMPSEL_Msk            (0x3ul << DAC_ADGCTL_SAMPSEL_Pos)                  /*!< DAC ADGCTL: SAMPSEL Mask                 */

/**@}*/ /* end of DAC_CONST */
/**@}*/ /* end of DAC register group */
/**@}*/ /* end of REGISTER group */

#if defined ( __CC_ARM   )
#pragma no_anon_unions
#endif

#endif /* __DAC_REG_H__ */
