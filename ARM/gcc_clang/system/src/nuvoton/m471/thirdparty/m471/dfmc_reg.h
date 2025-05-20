/**************************************************************************//**
 * @file     dfmc_reg.h
 * @version  V1.00
 * @brief    DFMC register definition header file
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2020 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/
#ifndef __DFMC_REG_H__
#define __DFMC_REG_H__

#if defined ( __CC_ARM   )
#pragma anon_unions
#endif

/**
   @addtogroup REGISTER Control Register
   @{
*/

/**
    @addtogroup DFMC Data Flash Memory Controller(DFMC)
    Memory Mapped Structure for DFMC Controller
@{ */

typedef struct
{


    /**
     * @var DFMC_T::ISPCTL
     * Offset: 0x00  ISP Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |ISPEN     |ISP Enable Bit (Write Protect)
     * |        |          |ISP function enable bit. Set this bit to enable ISP function.
     * |        |          |0 = ISP function Disabled.
     * |        |          |1 = ISP function Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[3]     |DATAEN    |Data Flash Update Enable Bit (Write Protect)
     * |        |          |0 = Data Flash cannot be updated.
     * |        |          |1 = Data Flash can be updated.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[6]     |ISPFF     |ISP Fail Flag (Write Protect)
     * |        |          |This bit is set by hardware when a triggered ISP meets any of the following conditions:
     * |        |          |This bit needs to be cleared by writing 1 to it.
     * |        |          |(l) Data Flash writes to itself if DATAEN is set to 0.
     * |        |          |(2) Erase or Program command at brown-out detected
     * |        |          |(3) Destination address is illegal, such as over an available range.
     * |        |          |(4) Invalid ISP commands
     * |        |          |(5) Violate the load code read protection
     * |        |          |(6) Checksum or Flash All One Verification is not executed in their valid range
     * |        |          |(7) Mass erase is not executed in Data Flash
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[24]    |ISPIFEN   |ISP Interrupt Enable bit (Write Protect)
     * |        |          |0 = ISP Interrupt Disabled.
     * |        |          |1 = ISP Interrupt Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * @var DFMC_T::ISPADDR
     * Offset: 0x04  ISP Address Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |ISPADDR   |ISP Address
     * |        |          |The M471 series is equipped with embedded Data Flash
     * |        |          |ISPADDR[1:0] must be kept 00 for ISP 32-bit operation.
     * |        |          |For CRC32 Checksum Calculation command, this field is the Data Flash starting address for checksum calculation, 256 bytes alignment is necessary for CRC32 checksum calculation.
     * |        |          |For Data Flash32-bit Program, ISP address needs word alignment (4-byte).
     * @var DFMC_T::ISPDAT
     * Offset: 0x08  ISP Data Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |ISPDAT    |ISP Data
     * |        |          |Write data to this register before ISP program operation.
     * |        |          |Read data from this register after ISP read operation.
     * |        |          |When ISPFF (DFMC_ISPCTL[6]) is 1, ISPDAT = 0xffff_ffff
     * |        |          |For Run CRC32 Checksum Calculation command, ISPDAT is the memory size (byte) and 256 bytes alignment
     * |        |          |For ISP Read CRC32 Checksum command, ISPDAT is the checksum result
     * |        |          |If ISPDAT = 0x0000_0000, it means that (1) the checksum calculation is in progress, or (2) the memory range for checksum calculation is incorrect
     * @var DFMC_T::ISPCMD
     * Offset: 0x0C  ISP Command Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[6:0]   |CMD       |ISP Command
     * |        |          |ISP command table is shown below:
     * |        |          |0x00= Data FLASH Read.
     * |        |          |0x08= Read Data Flash All-One Result.
     * |        |          |0x09= Data FLASH Read (Program Verify).
     * |        |          |0x0A= Data FLASH Read (Erase Verify).
     * |        |          |0x0B= Read Company ID.
     * |        |          |0x0C= Read Device ID.
     * |        |          |0x0D= Read Checksum.
     * |        |          |0x21= Data FLASH 32-bit Program.
     * |        |          |0x22= Data FLASH Page Erase. Erase any page in Data Flash.
     * |        |          |0x26= Data FLASH Mass Erase. Erase all pages in Data Flash.
     * |        |          |0x28= Run Data Flash All-One Verification.
     * |        |          |0x2D= Run Checksum Calculation.
     * |        |          |The other commands are invalid.
     * @var DFMC_T::ISPTRG
     * Offset: 0x10  ISP Trigger Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |ISPGO     |ISP Start Trigger (Write Protect)
     * |        |          |Write 1 to start ISP operation and this bit will be cleared to 0 by hardware automatically when ISP operation is finished.
     * |        |          |0 = ISP operation is finished.
     * |        |          |1 = ISP is progressed.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * @var DFMC_T::ISPSTS
     * Offset: 0x40  ISP Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |ISPBUSY   |ISP Busy Flag (Read Only)
     * |        |          |Write 1 to start ISP operation and this bit will be cleared to 0 by hardware automatically when ISP operation is finished.
     * |        |          |This bit is the mirror of ISPGO(DFMC_ISPTRG[0]).
     * |        |          |0 = ISP operation is finished.
     * |        |          |1 = ISP is progressed.
     * |[6]     |ISPFF     |ISP Fail Flag (Write Protect)
     * |        |          |This bit is the mirror of ISPFF (DFMC_ISPCTL[6]), it needs to be cleared by writing 1 to DFMC_ISPCTL[6] or DFMC_ISPSTS[6]
     * |        |          |This bit is set by hardware when a triggered ISP meets any of the following conditions:
     * |        |          |(l) Data Flash writes to itself if DATAEN is set to 0.
     * |        |          |(2) Erase or Program command at brown-out detected
     * |        |          |(3) Destination address is illegal, such as over an available range.
     * |        |          |(4) Invalid ISP commands
     * |        |          |(5) Violate the load code read protection
     * |        |          |(6) Checksum or Flash All One Verification is not executed in their valid range
     * |        |          |(7) Mass erase is not executed in Data Flash
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[7]     |ALLONE    |Data Flash All-one Verification Flag
     * |        |          |This bit is set by hardware if all of Flash bits are 1, and clear if Flash bits are not all 1 after "Run Data Flash All-One Verification" complete; this bit also can be clear by writing 1
     * |        |          |0 = Data Flash bits are not all 1 after "Run Data Flash All-One Verification" complete.
     * |        |          |1 = All of Data Flash bits are 1 after "Run Data Flash All-One Verification" complete.
     * |[24]    |ISPIF     |ISP Interrupt Flag
     * |        |          |0 = ISP command not finish or ISP fail flag is 0.
     * |        |          |1 = ISP command finish or ISP fail is 1.
     * |        |          |Note: Write 1 can clear this bit.
     * @var DFMC_T::CYCCTL
     * Offset: 0x4C  Data Flash Access Cycle Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |CYCLE     |Data Flash Access Cycle Control (Write Protect)
     * |        |          |This register is updated by software.
     * |        |          |0000 = CPU access with zero wait cycle ; Flash access cycle is 1;.
     * |        |          |The HCLK working frequency range is <27 MHz; Cache is disabled by hardware.
     * |        |          |0001 = CPU access with one wait cycle if cache miss; Flash access cycle is 1;.
     * |        |          |The HCLK working frequency range range is<27 MHz
     * |        |          |0010 = CPU access with two wait cycles if cache miss; Flash access cycle is 2;.
     * |        |          |The optimized HCLK working frequency range is 27~54 MHz
     * |        |          |0011 = CPU access with three wait cycles if cache miss; Flash access cycle is 3;.
     * |        |          |The optimized HCLK working frequency range is 54~81 MHz
     * |        |          |0100 = CPU access with four wait cycles if cache miss; Flash access cycle is 4;.
     * |        |          |The optimized HCLK working frequency range is81~108 MHz
     * |        |          |0101 = CPU access with five wait cycles if cache miss; Flash access cycle is 5;.
     * |        |          |The optimized HCLK working frequency range is 108~135 MHz
     * |        |          |0110 = CPU access with six wait cycles if cache miss; Flash access cycle is 6;.
     * |        |          |The optimized HCLK working frequency range is 135~162 MHz
     * |        |          |0111 = CPU access with seven wait cycles if cache miss; Flash access cycle is 7;.
     * |        |          |The optimized HCLK working frequency range is 162~192 MHz
     * |        |          |1000 = CPU access with eight wait cycles if cache miss; Flash access cycle is 8;.
     * |        |          |The optimized HCLK working frequency range is >192 MHz
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     */
    __IO uint32_t ISPCTL;                /*!< [0x0000] ISP Control Register                                             */
    __IO uint32_t ISPADDR;               /*!< [0x0004] ISP Address Register                                             */
    __IO uint32_t ISPDAT;                /*!< [0x0008] ISP Data Register                                                */
    __IO uint32_t ISPCMD;                /*!< [0x000c] ISP Command Register                                             */
    __IO uint32_t ISPTRG;                /*!< [0x0010] ISP Trigger Control Register                                     */
    __I  uint32_t RESERVE0[11];
    __IO uint32_t ISPSTS;                /*!< [0x0040] ISP Status Register                                              */
    __I  uint32_t RESERVE1[2];
    __IO uint32_t CYCCTL;                /*!< [0x004c] Data Flash Access Cycle Control Register                         */

} DFMC_T;

/**
    @addtogroup DFMC_CONST DFMC Bit Field Definition
    Constant Definitions for DFMC Controller
@{ */

#define DFMC_ISPCTL_ISPEN_Pos            (0)                                               /*!< DFMC_T::ISPCTL: ISPEN Position         */
#define DFMC_ISPCTL_ISPEN_Msk            (0x1ul << DFMC_ISPCTL_ISPEN_Pos)                  /*!< DFMC_T::ISPCTL: ISPEN Mask             */

#define DFMC_ISPCTL_DATAEN_Pos           (3)                                               /*!< DFMC_T::ISPCTL: DATAEN Position        */
#define DFMC_ISPCTL_DATAEN_Msk           (0x1ul << DFMC_ISPCTL_DATAEN_Pos)                 /*!< DFMC_T::ISPCTL: DATAEN Mask            */

#define DFMC_ISPCTL_ISPFF_Pos            (6)                                               /*!< DFMC_T::ISPCTL: ISPFF Position         */
#define DFMC_ISPCTL_ISPFF_Msk            (0x1ul << DFMC_ISPCTL_ISPFF_Pos)                  /*!< DFMC_T::ISPCTL: ISPFF Mask             */

#define DFMC_ISPCTL_ISPIFEN_Pos          (24)                                              /*!< DFMC_T::ISPCTL: ISPIFEN Position       */
#define DFMC_ISPCTL_ISPIFEN_Msk          (0x1ul << DFMC_ISPCTL_ISPIFEN_Pos)                /*!< DFMC_T::ISPCTL: ISPIFEN Mask           */

#define DFMC_ISPADDR_ISPADDR_Pos         (0)                                               /*!< DFMC_T::ISPADDR: ISPADDR Position      */
#define DFMC_ISPADDR_ISPADDR_Msk         (0xfffffffful << DFMC_ISPADDR_ISPADDR_Pos)        /*!< DFMC_T::ISPADDR: ISPADDR Mask          */

#define DFMC_ISPDAT_ISPDAT_Pos           (0)                                               /*!< DFMC_T::ISPDAT: ISPDAT Position        */
#define DFMC_ISPDAT_ISPDAT_Msk           (0xfffffffful << DFMC_ISPDAT_ISPDAT_Pos)          /*!< DFMC_T::ISPDAT: ISPDAT Mask            */

#define DFMC_ISPCMD_CMD_Pos              (0)                                               /*!< DFMC_T::ISPCMD: CMD Position           */
#define DFMC_ISPCMD_CMD_Msk              (0x7ful << DFMC_ISPCMD_CMD_Pos)                   /*!< DFMC_T::ISPCMD: CMD Mask               */

#define DFMC_ISPTRG_ISPGO_Pos            (0)                                               /*!< DFMC_T::ISPTRG: ISPGO Position         */
#define DFMC_ISPTRG_ISPGO_Msk            (0x1ul << DFMC_ISPTRG_ISPGO_Pos)                  /*!< DFMC_T::ISPTRG: ISPGO Mask             */

#define DFMC_ISPSTS_ISPBUSY_Pos          (0)                                               /*!< DFMC_T::ISPSTS: ISPBUSY Position       */
#define DFMC_ISPSTS_ISPBUSY_Msk          (0x1ul << DFMC_ISPSTS_ISPBUSY_Pos)                /*!< DFMC_T::ISPSTS: ISPBUSY Mask           */

#define DFMC_ISPSTS_ISPFF_Pos            (6)                                               /*!< DFMC_T::ISPSTS: ISPFF Position         */
#define DFMC_ISPSTS_ISPFF_Msk            (0x1ul << DFMC_ISPSTS_ISPFF_Pos)                  /*!< DFMC_T::ISPSTS: ISPFF Mask             */

#define DFMC_ISPSTS_ALLONE_Pos           (7)                                               /*!< DFMC_T::ISPSTS: ALLONE Position        */
#define DFMC_ISPSTS_ALLONE_Msk           (0x1ul << DFMC_ISPSTS_ALLONE_Pos)                 /*!< DFMC_T::ISPSTS: ALLONE Mask            */

#define DFMC_ISPSTS_ISPIF_Pos            (24)                                              /*!< DFMC_T::ISPSTS: ISPIF Position         */
#define DFMC_ISPSTS_ISPIF_Msk            (0x1ul << DFMC_ISPSTS_ISPIF_Pos)                  /*!< DFMC_T::ISPSTS: ISPIF Mask             */

#define DFMC_CYCCTL_CYCLE_Pos            (0)                                               /*!< DFMC_T::CYCCTL: CYCLE Position         */
#define DFMC_CYCCTL_CYCLE_Msk            (0xful << DFMC_CYCCTL_CYCLE_Pos)                  /*!< DFMC_T::CYCCTL: CYCLE Mask             */

/**@}*/ /* DFMC_CONST */
/**@}*/ /* end of DFMC register group */
/**@}*/ /* end of REGISTER group */

#if defined ( __CC_ARM   )
#pragma no_anon_unions
#endif

#endif /* __DFMC_REG_H__ */
