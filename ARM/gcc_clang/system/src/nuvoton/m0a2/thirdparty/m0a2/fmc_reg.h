/**************************************************************************//**
 * @file     fmc_reg.h
 * @version  V1.00
 * @brief    FMC register definition header file
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2020 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/
#ifndef __FMC_REG_H__
#define __FMC_REG_H__

#if defined ( __CC_ARM   )
#pragma anon_unions
#endif

/**
   @addtogroup REGISTER Control Register
   @{
*/

/**
    @addtogroup FMC Flash Memory Controller(FMC)
    Memory Mapped Structure for FMC Controller
@{ */

typedef struct
{


    /**
     * @var FMC_T::ISPCTL
     * Offset: 0x00  ISP Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |ISPEN     |ISP Enable Bit (Write Protect)
     * |        |          |0 = ISP function Disabled.
     * |        |          |1 = ISP function Enabled.
     * |        |          |Note: This bit is write-protected. Refer to the SYS_REGLCTL register.
     * |[1]     |BS        |Boot Selection (Write Protect)
     * |        |          |Set/clear this bit to select next booting from LDROM/APROM, respectively
     * |        |          |This bit also functions as chip booting status flag, which can be used to check where chip booted from
     * |        |          |This bit is initiated with the inversed value of CBS[1] (CONFIG0[7]) after any reset is happened except CPU reset (RSTS_CPU is 1) or system reset (RSTS_SYS) is happened
     * |        |          |0 = Booting from APROM.
     * |        |          |1 = Booting from LDROM.
     * |        |          |Note: This bit is write-protected. Refer to the SYS_REGLCTL register.
     * |[3]     |APUEN     |APROM Update Enable Bit (Write Protect)
     * |        |          |0 = APROM cannot be updated when the chip runs in APROM.
     * |        |          |1 = APROM can be updated when the chip runs in APROM.
     * |        |          |Note: This bit is write-protected. Refer to the SYS_REGLCTL register.
     * |[4]     |CFGUEN    |CONFIG Update Enable Bit (Write Protect)
     * |        |          |0 = CONFIG cannot be updated.
     * |        |          |1 = CONFIG can be updated.
     * |        |          |Note: This bit is write-protected. Refer to the SYS_REGLCTL register.
     * |[5]     |LDUEN     |LDROM Update Enable Bit (Write Protect)
     * |        |          |LDROM update enable bit.
     * |        |          |0 = LDROM cannot be updated.
     * |        |          |1 = LDROM can be updated.
     * |        |          |Note: This bit is write-protected. Refer to the SYS_REGLCTL register.
     * |[6]     |ISPFF     |ISP Fail Flag (Write Protect)
     * |        |          |This bit is set by hardware when a triggered ISP meets any of the following conditions:
     * |        |          |This bit needs to be cleared by writing 1 to it.
     * |        |          |APROM writes to itself if APUEN is set to 0.
     * |        |          |LDROM writes to itself if LDUEN is set to 0.
     * |        |          |CONFIG is erased/programmed if CFGUEN is set to 0.
     * |        |          |Page Erase command at LOCK mode with ICE connection
     * |        |          |Erase or Program command at brown-out detected
     * |        |          |Destination address is illegal, such as over an available range.
     * |        |          |Invalid ISP commands
     * |        |          |Note: This bit is write-protected. Refer to the SYS_REGLCTL register.
     * |[24]    |INTEN     |ISP Interrupt Enabled Bit (Write Protect)
     * |        |          |0 = ISP INT Disabled.
     * |        |          |1 = ISP INT Enabled.
     * |        |          |Note: This bit is write protected
     * |        |          |Refer to the SYS_REGLCTL register.Before use INT,user needs to clear the INTFLAG(FMC_ISPSTS[8]) make sure INT happen at correct time.
     * @var FMC_T::ISPADDR
     * Offset: 0x04  ISP Address Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |ISPADDR   |ISP Address
     * |        |          |The M0A21/M0A23 is equipped with embedded Flash
     * |        |          |ISPADDR[1:0] must be kept 00 for ISP 32-bit operation
     * |        |          |For CRC32 Checksum Calculation command, this field is the Flash starting address for checksum calculation, 512 bytes alignment is necessary for checksum calculation.
     * |        |          |16/32 Kbytes Flash:
     * |        |          |ISPADR[8:0] must be kept all 0 for Vector Page Re-map Command.
     * @var FMC_T::ISPDAT
     * Offset: 0x08  ISP Data Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |ISPDAT    |ISP Data
     * |        |          |Write data to this register before ISP program operation.
     * |        |          |Read data from this register after ISP read operation.
     * |        |          |For run CRC32 Checksum Calculation command, ISPDAT is the memory size (byte) and 512 bytes alignment
     * |        |          |For ISP Read Checksum command, ISPDAT is the checksum result
     * |        |          |If ISPDAT = 0x0000_0000, it means that (1) the checksum calculation is in progress, or (2) the memory range for checksum calculation is incorrect.
     * @var FMC_T::ISPCMD
     * Offset: 0x0C  ISP Command Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[6:0]   |CMD       |ISP CMD
     * |        |          |ISP command table is shown below:
     * |        |          |0x00= Flash Read.
     * |        |          |0x04= Read Unique ID.
     * |        |          |0x09= FLASH Read (Program Verify).
     * |        |          |0x0A= FLASH Read (Erase Verify).
     * |        |          |0x0B= Read Company ID.
     * |        |          |0x0C= Read Device ID.
     * |        |          |0x0D= Read CRC32 Checksum.
     * |        |          |0x21= Flash 32-bit Program.
     * |        |          |0x22= Flash Page Erase.
     * |        |          |0x26= FLASH Mass Erase.
     * |        |          |0x27= Flash Multi-Word Program.
     * |        |          |0x2D= Run CRC32 Checksum Calculation.
     * |        |          |0x2E= Vector Remap.
     * |        |          |0x61= Flash 64-bit Program.
     * |        |          |The other commands are invalid.
     * @var FMC_T::ISPTRG
     * Offset: 0x10  ISP Trigger Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |ISPGO     |ISP Start Trigger (Write Protect)
     * |        |          |Write 1 to start ISP operation and this bit will be cleared to 0 by hardware automatically when ISP operation is finished.
     * |        |          |0 = ISP operation is finished.
     * |        |          |1 = ISP is progressed. Note: This bit is write-protected. Refer to the SYS_REGLCTL register.
     * @var FMC_T::DFBA
     * Offset: 0x14  Data Flash Base Address
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |DFBA      |Data Flash Base Address
     * |        |          |This register indicates Data Flash start address. It is a read only register.
     * |        |          |The Data Flash is shared with APROM. the content of this register is loaded from CONFIG1
     * |        |          |This register is valid when DFEN (CONFIG0[0]) =0 .
     * @var FMC_T::FTCTL
     * Offset: 0x18  Flash Access Time Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |FPSEN     |Flash Power Save Enable Bit (Write Protect)
     * |        |          |If CPU clock is slower than 24 MHz, software can enable Flash power saving function.
     * |        |          |0 = Flash power saving Disabled.
     * |        |          |1 = Flash power saving Enabled.
     * |        |          |Note 1: This bit is write-protected. Refer to the SYS_REGLCTL register.
     * |        |          |Note 2: MFPSOFF (FMC_FTCTL[8]) or FPSEN (FMC_FTCTL[0]) enable can enable Flash power saving.
     * |        |          |Note 3: This function only works when BBOFF (FMC_FTCTL[7]) disabled, because high hit rate branch buffer may cause additional power consumption.
     * |[3:1]   |FATS      |Flash Access Time Window Selection (Write Protect)
     * |        |          |These bits are used to decide Flash sense amplifier active duration.
     * |        |          |000 = 40ns.
     * |        |          |001 = 50ns.
     * |        |          |010 = 60ns.
     * |        |          |011 = 70ns.
     * |        |          |100 = 80ns.
     * |        |          |101 = 90ns.
     * |        |          |110 = 100ns.
     * |        |          |111 = Reserved.
     * |        |          |Note: This bit is write-protected. Refer to the SYS_REGLCTL register.
     * |[6:4]   |FOM       |Frequency Optimization Mode (Write Protect)
     * |        |          |The M0A21/M0A23 support adjustable Flash access timing to optimize the Flash access cycles in different system working frequency.
     * |        |          |For 16/32 Kbytes Flash:
     * |        |          |000 = Frequency is less than or equal to 48 MHz.
     * |        |          |001 = Frequency is less than or equal to 24 MHz.
     * |        |          |011 = Frequency is less than or equal to 24 MHz.
     * |        |          |101 = Frequency is less than or equal to 72 MHz.
     * |        |          |111 = Frequency is less than or equal to 72 MHz.
     * |        |          |Others = Reserved.
     * |        |          |Others = Frequency is less than or equal to 48 MHz.
     * |        |          |Note: This bit is write-protected. Refer to the SYS_REGLCTL register.
     * |[7]     |BBOFF     |Flash Branch Buffer Disable Control (Write Protect)
     * |        |          |0 = Flash Branch Buffer function Enabled (default).
     * |        |          |1 = Flash Branch Buffer function Disabled.
     * |        |          |Note 1: This bit is write-protected. Refer to the SYS_REGLCTL register.
     * |        |          |Note 2: Only suppoted in 16/32 Kbytes Flash.
     * |[8]     |MFPSOFF   |ROMMAP Flash Power Save Disable Bit (Write Protect)
     * |        |          |Software can disable ROMMAP Flash power saving function (ROMMAP0[29] set to 0).
     * |        |          |0 = ROMMAP Flash power saving Enabled.
     * |        |          |1 = ROMMAP Flash power saving Disabled.
     * |        |          |Note 1: This bit is write-protected. Refer to the SYS_REGLCTL register.
     * |        |          |Note 2: MFPSOFF (FMC_FTCTL[8]) or FPSEN (FMC_FTCTL[0]) enable can enable Flash power saving.
     * |        |          |Note 3: This function only works when BBOFF (FMC_FTCTL[7]) disabled, because high hit rate branch buffer may cause additional power consumption.
     * |[9]     |CACHEINV  |Flash Cache Invalidation (Write Protect)
     * |        |          |0 = Flash Cache Invalidation finished (default).
     * |        |          |1 = Flash Cache Invalidation.
     * |        |          |Note 1: Write 1 to start cache invalidation
     * |        |          |The value will be changed to 0 once the process is finished.
     * |        |          |Note 2: This bit is write-protected. Refer to the SYS_REGLCTL register.
     * |        |          |Note 3: Only supported in 256/512 Kbytes Flash.
     * @var FMC_T::ICPCTL
     * Offset: 0x1C  ICP Enabled Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |ICPEN     |Flash ICP Enabled Control (Write Protect)
     * |        |          |0 = Flash ICP mode is Disabled(default).
     * |        |          |1 = Flash ICP mode is Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[1]     |UNLOAD    |Flash Reload Control (Write Protect)
     * |        |          |0 = Flash Reload is Enabled while ICP exit (default).
     * |        |          |1 = Flash Reload is Disabled while ICP exit.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * @var FMC_T::ISPSTS
     * Offset: 0x40  ISP Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |ISPBUSY   |ISP BUSY (Read Only)
     * |        |          |0 = ISP operation is finished.
     * |        |          |1 = ISP operation is busy.
     * |[2:1]   |CBS       |Boot Selection of CONFIG (Read Only)
     * |        |          |This bit is initiated with the CBS (CONFIG0[7:6]) after any reset is happened except CPU reset (RSTS_CPU is 1) or system reset (RSTS_SYS) is happened.
     * |        |          |00 = LDROM with IAP mode.
     * |        |          |01 = LDROM without IAP mode.
     * |        |          |10 = APROM with IAP mode.
     * |        |          |11 = APROM without IAP mode.
     * |[6]     |ISPFF     |ISP Fail Flag (Write Protect)
     * |        |          |This bit is the mirror of ISPFF (FMC_ISPCTL[6]), it needs to be cleared by writing 1 to FMC_ISPCTL[6] or FMC_ISPSTS[6]
     * |        |          |This bit is set by hardware when a triggered ISP meets any of the following conditions:
     * |        |          |APROM writes to itself if APUEN is set to 0.
     * |        |          |LDROM writes to itself if LDUEN is set to 0.
     * |        |          |CONFIG is erased/programmed if CFGUEN is set to 0.
     * |        |          |SPROM is erased/programmed if SPUEN is set to 0
     * |        |          |SPROM is programmed at SPROM secured mode.
     * |        |          |Page Erase command at LOCK mode with ICE connection
     * |        |          |Erase or Program command at brown-out detected
     * |        |          |Destination address is illegal, such as over an available range.
     * |        |          |Invalid ISP commands
     * |[8]     |INTFLAG   |ISP Command Finish Interrupt Flag
     * |        |          |0 = ISP Not Finished.
     * |        |          |1 = ISP done or ISPFF set.
     * |        |          |Note: Only supported in 256/512 Kbytes Flash.
     * |[29:9]  |VECMAP    |Vector Page Mapping Address (Read Only)
     * |        |          |All access to 0x0000_0000~0x0000_01FF is remapped to the Flash memory or SRAM address {VECMAP[20:0], 9u2019h000} ~ {VECMAP[20:0], 9u2019h1FF}, except SPROM.
     * |        |          |VECMAP [20:19] = 00 system vector address is mapped to Flash memory.
     * |        |          |VECMAP [20:19] = 10 system vector address is mapped to SRAM memory.
     * |        |          |VECMAP [18:12] should be 0.
     * |[30]    |FBS       |Flash Bank Select Indicator
     * |        |          |This bit indicates which APROM address model is selected to boot.
     * |        |          |0 = Address model OP0 is selected to boot.
     * |        |          |1 = Address model OP1 is selected to boot.
     * |        |          |Note: Only supported in 256/512 Kbytes Flash.
     * |[31]    |SCODE     |Security Code Active Flag
     * |        |          |This bit is set to 1 by hardware when detecting SPROM secured code is active at Flash initialization, or software writes 1 to this bit to make secured code active; this bit is only cleared by SPROM page erase operation.
     * |        |          |0 = SPROM secured code is inactive.
     * |        |          |1 = SPROM secured code is active.
     * @var FMC_T::MPDAT0
     * Offset: 0x80  ISP Data0 Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |ISPDAT0   |ISP Data 0
     * |        |          |This register is the first 32-bit data for 32-bit programming, and it is also the mirror of FMC_ISPDAT, both registers keep the same data
     * @var FMC_T::MPDAT1
     * Offset: 0x84  ISP Data1 Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |ISPDAT1   |ISP Data 1
     * |        |          |This register is the second 32-bit data for 64-bit/multi-word programming.
     * @var FMC_T::MPDAT2
     * Offset: 0x88  ISP Data2 Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |ISPDAT2   |ISP Data 2
     * |        |          |This register is the third 32-bit data for multi-word programming.
     * @var FMC_T::MPDAT3
     * Offset: 0x8C  ISP Data3 Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |ISPDAT3   |ISP Data 3
     * |        |          |This register is the fourth 32-bit data for multi-word programming.
     * @var FMC_T::MPSTS
     * Offset: 0xC0  ISP Multi-program Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |MPBUSY    |ISP Multi-word Program Busy Flag (Read Only)
     * |        |          |Write 1 to start ISP Multi-Word program operation and this bit will be cleared to 0 by hardware automatically when ISP Multi-Word program operation is finished.
     * |        |          |This bit is the mirror of ISPGO(FMC_ISPTRG[0]).
     * |        |          |0 = ISP Multi-Word program operation is finished.
     * |        |          |1 = ISP Multi-Word program operation is progressed.
     * |[1]     |PPGO      |ISP Multi-program Status (Read Only)
     * |        |          |0 = ISP multi-word program operation is not active.
     * |        |          |1 = ISP multi-word program operation is in progress.
     * |[2]     |ISPFF     |ISP Fail Flag (Read Only)
     * |        |          |This bit is the mirror of ISPFF (FMC_ISPCTL[6]), it needs to be cleared by writing 1 to FMC_ISPCTL[6] or FMC_ISPSTS[6]
     * |        |          |This bit is set by hardware when a triggered ISP meets any of the following conditions:
     * |        |          |APROM writes to itself if APUEN is set to 0.
     * |        |          |LDROM writes to itself if LDUEN is set to 0.
     * |        |          |CONFIG is erased/programmed if CFGUEN is set to 0.
     * |        |          |Page Erase command at LOCK mode with ICE connection
     * |        |          |Erase or Program command at brown-out detected
     * |        |          |Destination address is illegal, such as over an available range.
     * |        |          |Invalid ISP commands
     * |        |          |(8) SPROM is erased/programmed if SPUEN is set to 0
     * |        |          |(9) SPROM is programmed at SPROM secured mode.
     * |[4]     |D0        |ISP DATA 0 Flag (Read Only)
     * |        |          |This bit is set when FMC_MPDAT0 is written and auto cleared to 0 when the FMC_MPDAT0 data is programmed to Flash complete.
     * |        |          |0 = FMC_MPDAT0 register is empty, or program to Flash complete.
     * |        |          |1 = FMC_MPDAT0 register has been written, and not program to Flash complete.
     * |[5]     |D1        |ISP DATA 1 Flag (Read Only)
     * |        |          |This bit is set when FMC_MPDAT1 is written and auto cleared to 0 when the FMC_MPDAT1 data is programmed to Flash complete.
     * |        |          |0 = FMC_MPDAT1 register is empty, or program to Flash complete.
     * |        |          |1 = FMC_MPDAT1 register has been written, and not program to Flash complete.
     * |[6]     |D2        |ISP DATA 2 Flag (Read Only)
     * |        |          |This bit is set when FMC_MPDAT2 is written and auto cleared to 0 when the FMC_MPDAT2 data is programmed to Flash complete.
     * |        |          |0 = FMC_MPDAT2 register is empty, or program to Flash complete.
     * |        |          |1 = FMC_MPDAT2 register has been written, and not program to Flash complete.
     * |[7]     |D3        |ISP DATA 3 Flag (Read Only)
     * |        |          |This bit is set when FMC_MPDAT3 is written and auto cleared to 0 when the FMC_MPDAT3 data is programmed to Flash complete.
     * |        |          |0 = FMC_MPDAT3 register is empty, or program to Flash complete.
     * |        |          |1 = FMC_MPDAT3 register has been written, and not program to Flash complete.
     * @var FMC_T::MPADDR
     * Offset: 0xC4  ISP Multi-program Address Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |MPADDR    |ISP Multi-word Program Address
     * |        |          |MPADDR is the address of ISP multi-word program operation when ISPGO flag is 1.
     * |        |          |MPADDR will keep the final ISP address when ISP multi-word program is complete.
     */
    __IO uint32_t ISPCTL;                /*!< [0x0000] ISP Control Register                                             */
    __IO uint32_t ISPADDR;               /*!< [0x0004] ISP Address Register                                             */
    __IO uint32_t ISPDAT;                /*!< [0x0008] ISP Data Register                                                */
    __IO uint32_t ISPCMD;                /*!< [0x000C] ISP Command Register                                             */
    __IO uint32_t ISPTRG;                /*!< [0x0010] ISP Trigger Control Register                                     */
    __I  uint32_t DFBA;                  /*!< [0x0014] Data Flash Base Address                                          */
    __IO uint32_t FTCTL;                 /*!< [0x0018] Flash Access Time Control Register                               */
    __IO uint32_t ICPCTL;                /*!< [0x001C] ICP Enabled Control Register                                     */
    __I  uint32_t RESERVE0[8];
    __IO uint32_t ISPSTS;                /*!< [0x0040] ISP Status Register                                              */
    __I  uint32_t RESERVE1[15];
    __IO uint32_t MPDAT0;                /*!< [0x0080] ISP Data0 Register                                               */
    __IO uint32_t MPDAT1;                /*!< [0x0084] ISP Data1 Register                                               */
    __IO uint32_t MPDAT2;                /*!< [0x0088] ISP Data2 Register                                               */
    __IO uint32_t MPDAT3;                /*!< [0x008C] ISP Data3 Register                                               */
    __I  uint32_t RESERVE2[12];
    __I  uint32_t MPSTS;                 /*!< [0x00C0] ISP Multi-program Status Register                                */
    __I  uint32_t MPADDR;                /*!< [0x00C4] ISP Multi-program Address Register                               */

} FMC_T;

/**
    @addtogroup FMC_CONST FMC Bit Field Definition
    Constant Definitions for FMC Controller
@{ */

#define FMC_ISPCTL_ISPEN_Pos             (0)                                               /*!< FMC_T::ISPCTL: ISPEN Position          */
#define FMC_ISPCTL_ISPEN_Msk             (0x1ul << FMC_ISPCTL_ISPEN_Pos)                   /*!< FMC_T::ISPCTL: ISPEN Mask              */

#define FMC_ISPCTL_BS_Pos                (1)                                               /*!< FMC_T::ISPCTL: BS Position             */
#define FMC_ISPCTL_BS_Msk                (0x1ul << FMC_ISPCTL_BS_Pos)                      /*!< FMC_T::ISPCTL: BS Mask                 */

#define FMC_ISPCTL_APUEN_Pos             (3)                                               /*!< FMC_T::ISPCTL: APUEN Position          */
#define FMC_ISPCTL_APUEN_Msk             (0x1ul << FMC_ISPCTL_APUEN_Pos)                   /*!< FMC_T::ISPCTL: APUEN Mask              */

#define FMC_ISPCTL_CFGUEN_Pos            (4)                                               /*!< FMC_T::ISPCTL: CFGUEN Position         */
#define FMC_ISPCTL_CFGUEN_Msk            (0x1ul << FMC_ISPCTL_CFGUEN_Pos)                  /*!< FMC_T::ISPCTL: CFGUEN Mask             */

#define FMC_ISPCTL_LDUEN_Pos             (5)                                               /*!< FMC_T::ISPCTL: LDUEN Position          */
#define FMC_ISPCTL_LDUEN_Msk             (0x1ul << FMC_ISPCTL_LDUEN_Pos)                   /*!< FMC_T::ISPCTL: LDUEN Mask              */

#define FMC_ISPCTL_ISPFF_Pos             (6)                                               /*!< FMC_T::ISPCTL: ISPFF Position          */
#define FMC_ISPCTL_ISPFF_Msk             (0x1ul << FMC_ISPCTL_ISPFF_Pos)                   /*!< FMC_T::ISPCTL: ISPFF Mask              */

#define FMC_ISPCTL_INTEN_Pos             (24)                                              /*!< FMC_T::ISPCTL: INTEN Position          */
#define FMC_ISPCTL_INTEN_Msk             (0x1ul << FMC_ISPCTL_INTEN_Pos)                   /*!< FMC_T::ISPCTL: INTEN Mask              */

#define FMC_ISPADDR_ISPADDR_Pos          (0)                                               /*!< FMC_T::ISPADDR: ISPADDR Position       */
#define FMC_ISPADDR_ISPADDR_Msk          (0xfffffffful << FMC_ISPADDR_ISPADDR_Pos)         /*!< FMC_T::ISPADDR: ISPADDR Mask           */

#define FMC_ISPDAT_ISPDAT_Pos            (0)                                               /*!< FMC_T::ISPDAT: ISPDAT Position         */
#define FMC_ISPDAT_ISPDAT_Msk            (0xfffffffful << FMC_ISPDAT_ISPDAT_Pos)           /*!< FMC_T::ISPDAT: ISPDAT Mask             */

#define FMC_ISPCMD_CMD_Pos               (0)                                               /*!< FMC_T::ISPCMD: CMD Position            */
#define FMC_ISPCMD_CMD_Msk               (0x7ful << FMC_ISPCMD_CMD_Pos)                    /*!< FMC_T::ISPCMD: CMD Mask                */

#define FMC_ISPTRG_ISPGO_Pos             (0)                                               /*!< FMC_T::ISPTRG: ISPGO Position          */
#define FMC_ISPTRG_ISPGO_Msk             (0x1ul << FMC_ISPTRG_ISPGO_Pos)                   /*!< FMC_T::ISPTRG: ISPGO Mask              */

#define FMC_DFBA_DFBA_Pos                (0)                                               /*!< FMC_T::DFBA: DFBA Position             */
#define FMC_DFBA_DFBA_Msk                (0xfffffffful << FMC_DFBA_DFBA_Pos)               /*!< FMC_T::DFBA: DFBA Mask                 */

#define FMC_FTCTL_FPSEN_Pos              (0)                                               /*!< FMC_T::FTCTL: FPSEN Position           */
#define FMC_FTCTL_FPSEN_Msk              (0x1ul << FMC_FTCTL_FPSEN_Pos)                    /*!< FMC_T::FTCTL: FPSEN Mask               */

#define FMC_FTCTL_FATS_Pos               (1)                                               /*!< FMC_T::FTCTL: FATS Position            */
#define FMC_FTCTL_FATS_Msk               (0x7ul << FMC_FTCTL_FATS_Pos)                     /*!< FMC_T::FTCTL: FATS Mask                */

#define FMC_FTCTL_FOM_Pos                (4)                                               /*!< FMC_T::FTCTL: FOM Position             */
#define FMC_FTCTL_FOM_Msk                (0x7ul << FMC_FTCTL_FOM_Pos)                      /*!< FMC_T::FTCTL: FOM Mask                 */

#define FMC_FTCTL_BBOFF_Pos              (7)                                               /*!< FMC_T::FTCTL: BBOFF Position           */
#define FMC_FTCTL_BBOFF_Msk              (0x1ul << FMC_FTCTL_BBOFF_Pos)                    /*!< FMC_T::FTCTL: BBOFF Mask               */

#define FMC_FTCTL_MFPSOFF_Pos            (8)                                               /*!< FMC_T::FTCTL: MFPSOFF Position         */
#define FMC_FTCTL_MFPSOFF_Msk            (0x1ul << FMC_FTCTL_MFPSOFF_Pos)                  /*!< FMC_T::FTCTL: MFPSOFF Mask             */

#define FMC_FTCTL_CACHEINV_Pos           (9)                                               /*!< FMC_T::FTCTL: CACHEINV Position        */
#define FMC_FTCTL_CACHEINV_Msk           (0x1ul << FMC_FTCTL_CACHEINV_Pos)                 /*!< FMC_T::FTCTL: CACHEINV Mask            */

#define FMC_ICPCTL_ICPEN_Pos             (0)                                               /*!< FMC_T::ICPCTL: ICPEN Position          */
#define FMC_ICPCTL_ICPEN_Msk             (0x1ul << FMC_ICPCTL_ICPEN_Pos)                   /*!< FMC_T::ICPCTL: ICPEN Mask              */

#define FMC_ICPCTL_UNLOAD_Pos            (1)                                               /*!< FMC_T::ICPCTL: UNLOAD Position         */
#define FMC_ICPCTL_UNLOAD_Msk            (0x1ul << FMC_ICPCTL_UNLOAD_Pos)                  /*!< FMC_T::ICPCTL: UNLOAD Mask             */

#define FMC_ISPSTS_ISPBUSY_Pos           (0)                                               /*!< FMC_T::ISPSTS: ISPBUSY Position        */
#define FMC_ISPSTS_ISPBUSY_Msk           (0x1ul << FMC_ISPSTS_ISPBUSY_Pos)                 /*!< FMC_T::ISPSTS: ISPBUSY Mask            */

#define FMC_ISPSTS_CBS_Pos               (1)                                               /*!< FMC_T::ISPSTS: CBS Position            */
#define FMC_ISPSTS_CBS_Msk               (0x3ul << FMC_ISPSTS_CBS_Pos)                     /*!< FMC_T::ISPSTS: CBS Mask                */

#define FMC_ISPSTS_ISPFF_Pos             (6)                                               /*!< FMC_T::ISPSTS: ISPFF Position          */
#define FMC_ISPSTS_ISPFF_Msk             (0x1ul << FMC_ISPSTS_ISPFF_Pos)                   /*!< FMC_T::ISPSTS: ISPFF Mask              */

#define FMC_ISPSTS_INTFLAG_Pos           (8)                                               /*!< FMC_T::ISPSTS: INTFLAG Position        */
#define FMC_ISPSTS_INTFLAG_Msk           (0x1ul << FMC_ISPSTS_INTFLAG_Pos)                 /*!< FMC_T::ISPSTS: INTFLAG Mask            */

#define FMC_ISPSTS_VECMAP_Pos            (9)                                               /*!< FMC_T::ISPSTS: VECMAP Position         */
#define FMC_ISPSTS_VECMAP_Msk            (0x1ffffful << FMC_ISPSTS_VECMAP_Pos)             /*!< FMC_T::ISPSTS: VECMAP Mask             */

#define FMC_ISPSTS_FBS_Pos               (30)                                              /*!< FMC_T::ISPSTS: FBS Position            */
#define FMC_ISPSTS_FBS_Msk               (0x1ul << FMC_ISPSTS_FBS_Pos)                     /*!< FMC_T::ISPSTS: FBS Mask                */

#define FMC_ISPSTS_SCODE_Pos             (31)                                              /*!< FMC_T::ISPSTS: SCODE Position          */
#define FMC_ISPSTS_SCODE_Msk             (0x1ul << FMC_ISPSTS_SCODE_Pos)                   /*!< FMC_T::ISPSTS: SCODE Mask              */

#define FMC_MPDAT0_ISPDAT0_Pos           (0)                                               /*!< FMC_T::MPDAT0: ISPDAT0 Position        */
#define FMC_MPDAT0_ISPDAT0_Msk           (0xfffffffful << FMC_MPDAT0_ISPDAT0_Pos)          /*!< FMC_T::MPDAT0: ISPDAT0 Mask            */

#define FMC_MPDAT1_ISPDAT1_Pos           (0)                                               /*!< FMC_T::MPDAT1: ISPDAT1 Position        */
#define FMC_MPDAT1_ISPDAT1_Msk           (0xfffffffful << FMC_MPDAT1_ISPDAT1_Pos)          /*!< FMC_T::MPDAT1: ISPDAT1 Mask            */

#define FMC_MPDAT2_ISPDAT2_Pos           (0)                                               /*!< FMC_T::MPDAT2: ISPDAT2 Position        */
#define FMC_MPDAT2_ISPDAT2_Msk           (0xfffffffful << FMC_MPDAT2_ISPDAT2_Pos)          /*!< FMC_T::MPDAT2: ISPDAT2 Mask            */

#define FMC_MPDAT3_ISPDAT3_Pos           (0)                                               /*!< FMC_T::MPDAT3: ISPDAT3 Position        */
#define FMC_MPDAT3_ISPDAT3_Msk           (0xfffffffful << FMC_MPDAT3_ISPDAT3_Pos)          /*!< FMC_T::MPDAT3: ISPDAT3 Mask            */

#define FMC_MPSTS_MPBUSY_Pos             (0)                                               /*!< FMC_T::MPSTS: MPBUSY Position          */
#define FMC_MPSTS_MPBUSY_Msk             (0x1ul << FMC_MPSTS_MPBUSY_Pos)                   /*!< FMC_T::MPSTS: MPBUSY Mask              */

#define FMC_MPSTS_PPGO_Pos               (1)                                               /*!< FMC_T::MPSTS: PPGO Position            */
#define FMC_MPSTS_PPGO_Msk               (0x1ul << FMC_MPSTS_PPGO_Pos)                     /*!< FMC_T::MPSTS: PPGO Mask                */

#define FMC_MPSTS_ISPFF_Pos              (2)                                               /*!< FMC_T::MPSTS: ISPFF Position           */
#define FMC_MPSTS_ISPFF_Msk              (0x1ul << FMC_MPSTS_ISPFF_Pos)                    /*!< FMC_T::MPSTS: ISPFF Mask               */

#define FMC_MPSTS_D0_Pos                 (4)                                               /*!< FMC_T::MPSTS: D0 Position              */
#define FMC_MPSTS_D0_Msk                 (0x1ul << FMC_MPSTS_D0_Pos)                       /*!< FMC_T::MPSTS: D0 Mask                  */

#define FMC_MPSTS_D1_Pos                 (5)                                               /*!< FMC_T::MPSTS: D1 Position              */
#define FMC_MPSTS_D1_Msk                 (0x1ul << FMC_MPSTS_D1_Pos)                       /*!< FMC_T::MPSTS: D1 Mask                  */

#define FMC_MPSTS_D2_Pos                 (6)                                               /*!< FMC_T::MPSTS: D2 Position              */
#define FMC_MPSTS_D2_Msk                 (0x1ul << FMC_MPSTS_D2_Pos)                       /*!< FMC_T::MPSTS: D2 Mask                  */

#define FMC_MPSTS_D3_Pos                 (7)                                               /*!< FMC_T::MPSTS: D3 Position              */
#define FMC_MPSTS_D3_Msk                 (0x1ul << FMC_MPSTS_D3_Pos)                       /*!< FMC_T::MPSTS: D3 Mask                  */

#define FMC_MPADDR_MPADDR_Pos            (0)                                               /*!< FMC_T::MPADDR: MPADDR Position         */
#define FMC_MPADDR_MPADDR_Msk            (0xfffffffful << FMC_MPADDR_MPADDR_Pos)           /*!< FMC_T::MPADDR: MPADDR Mask             */

/**@}*/ /* FMC_CONST */
/**@}*/ /* end of FMC register group */
/**@}*/ /* end of REGISTER group */

#if defined ( __CC_ARM   )
#pragma no_anon_unions
#endif

#endif /* __FMC_REG_H__ */
