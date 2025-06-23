/**************************************************************************//**
 * @file     cir_reg.h
 * @version  V1.00
 * @brief    CIR register definition header file
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2020 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/
#ifndef __CIR_REG_H__
#define __CIR_REG_H__

#if defined ( __CC_ARM   )
#pragma anon_unions
#endif

/**
   @addtogroup REGISTER Control Register
   @{
*/

/**
    @addtogroup CIR Customize IR Receiver(CIR)
    Memory Mapped Structure for Customize IR Receiver
@{ */

typedef struct
{


    /**
     * @var CIR_T::CTL
     * Offset: 0x00  CIR Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |CNTEN     |CIR Counter Enable
     * |        |          |0 = CIR counter Disabled.
     * |        |          |1 = CIR counter Enabled.
     * |        |          |Note: When user changes CNTEN (CIR_CTL[0]) from 0 to 1, system will generate a signal to initialize all interrupt flags, RBITCNT (CIR_RDBC[5:0])and ITVR (CIR_ITVR[31:0]).
     * |[1]     |POLINV    |CIR Input Polarity Inverse
     * |        |          |0 = CIR input polarity is normal.
     * |        |          |1 = CIR input polarity is inversed.
     * |[4]     |ERRBYP    |Error Pattern Bypass
     * |        |          |0 = Data will be dropped if RERRF(CIR_STATUS[6]) is 1.
     * |        |          |1 = Data will keep to save in DATAx if RERRF(CIR_STATUS[6]) flag is 1.
     * |        |          |Note:
     * |        |          |1. If user clears RERRF(CIR_STATUS[6]), then CIR will keep to convert data and store in CIR_DATAx.
     * |        |          |2. User must set ERRBYP (CIR_CTL[4]) to 1 before entering Power-down mode.
     * |[6:5]   |PATTYP    |CIR Pattern Format Selection
     * |        |          |00 = Standardized positive edge mode
     * |        |          |01 = Standardized negative edge mode.
     * |        |          |10 = Flexible positive edge mode.
     * |        |          |11 = Reserved.
     * |[10:9]  |DBSEL     |Debounce Sampling Selection
     * |        |          |00 = CIR noise filter Disabled.
     * |        |          |01 = CIR input debounce count Enabled with two sample matched.
     * |        |          |10 = CIR input debounce count Enabled with three sample matched.
     * |        |          |11 = CIR input debounce count Enabled with four sample matched.
     * |[11]    |FOSTRS    |Filter Output Signal Stored in Register Selection
     * |        |          |0 = Filter output signal stored in CIR_STATUS[16] Disabled.
     * |        |          |1 = Filter output signal stored in CIR_STATUS[16] Enabled.
     * |[18:16] |PSCALER   |Sampling Clock Prescaler
     * |        |          |000 = No prescaler.
     * |        |          |001 = Prescaler is 2 clocks
     * |        |          |010 = Prescaler is 4 clocks.
     * |        |          |011 = Prescaler is 8 clocks.
     * |        |          |100 = Prescaler is 16 clocks.
     * |        |          |101 = Prescaler is 32 clocks.
     * |        |          |110 = Prescaler is 64 clocks.
     * |        |          |111 = Prescaler is 128 clocks.
     * |        |          |Note: The sampling clock should be less than PCLK1.
     * @var CIR_T::CMPCTL
     * Offset: 0x04  CIR Data Compare Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:0]   |CMPDAT    |Compared Match Data
     * |        |          |This bit field should be filled with the expected data. It will be compared with CIR_DATA0[N:0].
     * |        |          |Note: N is determined by CMPVALID(CIR_CMPCTL[26:24]).
     * |[8]     |DCMPEN    |Data Compared Match Function Selection
     * |        |          |0 = Data compared match function Disabled.
     * |        |          |1 = Data compared match function Enabled.
     * |[16]    |CMPMSK    |Data Compared Mask Initialization
     * |        |          |0 = No effect.
     * |        |          |1 = Re-initialize the data compared match function to monitor DATA0[N:0] (CIR_DATA0[N:0).
     * |        |          |Note: This bit is auto cleared by hardware.
     * |[26:24] |CMPVALID  |Data Compared Valid Bit Selection
     * |        |          |000 = Compare bit 0.
     * |        |          |001 = Compare bit 0 to bit 1.
     * |        |          |010 = Compare bit 0 to bit 2.
     * |        |          |011 = Compare bit 0 to bit 3.
     * |        |          |100 = Compare bit 0 to bit 4.
     * |        |          |101 = Compare bit 0 to bit 5.
     * |        |          |110 = Compare bit 0 to bit 6.
     * |        |          |111 = Compare bit 0 to bit 7.
     * |        |          |Note: The sampling clock should be less than PCLK1.
     * @var CIR_T::STATUS
     * Offset: 0x08  CIR Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |SPMF      |Special Pattern Match Flag
     * |        |          |1 = Special pattern happened.
     * |        |          |0 = Special pattern never happened.
     * |        |          |Note: This bit is only cleared by writing 1 to it.
     * |[1]     |D1PMF     |Data1 Pattern Match Flag
     * |        |          |1 = Data1 pattern happened.
     * |        |          |0 = Data1 pattern never happened.
     * |        |          |Note: This bit is only cleared by writing 1 to it.
     * |[2]     |D0PMF     |Data0 Pattern Match Flag
     * |        |          |1 = Data0 pattern happened.
     * |        |          |0 = Data0 pattern never happened.
     * |        |          |Note: This bit is only cleared by writing 1 to it.
     * |[3]     |HPMF      |Header Pattern Match Flag
     * |        |          |1 = Header pattern happened.
     * |        |          |0 = Header pattern never happened.
     * |        |          |Note: This bit is only cleared by writing 1 to it.
     * |[4]     |RBUFF     |Receiving Buffer Full Flag
     * |        |          |1 = Receiving buffer full happened.
     * |        |          |0 = Receiving buffer full never happened.
     * |        |          |Note: This bit is only cleared by writing 1 to it.
     * |[5]     |DRECF     |Data Receive Flag
     * |        |          |1 = CIR has started to convert data.
     * |        |          |0 = CIR has not started to convert data.
     * |        |          |Note: This bit is only cleared by writing 1 to it.
     * |[6]     |RERRF     |Receive Error Flag
     * |        |          |1 = Receive error happened.
     * |        |          |0 = Receive error never happened.
     * |        |          |Note: This bit is only cleared by writing 1 to it.
     * |[7]     |COMPMF    |Compare Match Flag
     * |        |          |1 = Compare match happened.
     * |        |          |0 = Compare match never happened.
     * |        |          |Note: This bit is only cleared by writing 1 to it.
     * |[8]     |EPMF      |End Pattern Match Flag
     * |        |          |1 = End pattern match happened.
     * |        |          |0 = End pattern match never happened.
     * |        |          |Note: This bit is only cleared by writing 1 to it.
     * |[9]     |RBMF      |Receive Bit Match Flag
     * |        |          |1 = Receive bit match happened.
     * |        |          |0 = Receive bit match never happened.
     * |        |          |Note: This bit is only cleared by writing 1 to it.
     * |[10]    |PDWKF     |Power Down Wake Up Flag
     * |        |          |1 = Power down wake up happened.
     * |        |          |0 = Power down wake up never happened.
     * |        |          |Note: This bit is only cleared by writing 1 to it.
     * |[16]    |NFOS      |Noise Filter Output Signal Status
     * |        |          |0 = Noise filter output value is 0.
     * |        |          |1 = Noise filter output value is 1.
     * |[17]    |RBITCBS   |RBITCNT Busy Clearing Status
     * |        |          |0 = RBITCNT has completed the clearing process when user writes 1 to RBITCNT(CIR_RDBC[5:0]) or user changes CNTEN (CIR_CTL[0]) from 0 to 1, system will generate a signal to initialize RBITCNT (CIR_RDBC[5:0]).
     * |        |          |1 = RBITCNT is undergoing clearing process when user writes 1 to RBITCNT(CIR_RDBC[5:0]) or user changes CNTEN (CIR_CTL[0]) from 0 to 1, system will generate a signal to initialize RBITCNT (CIR_RDBC[5:0]).
     * @var CIR_T::INTCTL
     * Offset: 0x10  CIR Interrupt Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |SPMIEN    |Special Pattern Match Interrupt Enable Bit
     * |        |          |0 = Special pattern match interrupt Disabled.
     * |        |          |1 = Special pattern match interrupt Enabled.
     * |[1]     |D1PMIEN   |Data1 Pattern Match Interrupt Enable Bit
     * |        |          |0 = Data1 pattern match interrupt Disabled.
     * |        |          |1 = Data1 pattern match interrupt Enabled.
     * |[2]     |D0PMIEN   |Data0 Pattern Match Interrupt Enable Bit
     * |        |          |0 = Data0 pattern match interrupt Disabled.
     * |        |          |1 = Data0 pattern match interrupt Enabled.
     * |[3]     |HPMIEN    |Header Pattern Match Interrupt Enable Bit
     * |        |          |0 = Header pattern match interrupt Disabled.
     * |        |          |1 = Header pattern match interrupt Enabled.
     * |[4]     |RBUFIEN   |Receive Buffer Full Interrupt Enable Bit
     * |        |          |0 = Receive buffer full interrupt Disabled.
     * |        |          |1 = Receive buffer full interrupt Enabled.
     * |[5]     |DRECIEN   |Data Receive Interrupt Enable Bit
     * |        |          |0 = Data receive interrupt Disabled.
     * |        |          |1 = Data receive interrupt Enabled.
     * |[6]     |PERRIEN   |Pattern Error Interrupt Enable Bit
     * |        |          |0 = Pattern error interrupt Disabled.
     * |        |          |1 = Pattern error interrupt Enabled.
     * |[7]     |CMPMIEN   |Compare Match Interrupt Enable Bit
     * |        |          |0 = Compare match interrupt Disabled.
     * |        |          |1 = Compare match interrupt Enabled.
     * |[8]     |EPMIEN    |End Pattern Match Interrupt Enable Bit
     * |        |          |0 = End pattern match interrupt Disabled.
     * |        |          |1 = End pattern match interrupt Enabled.
     * |[9]     |RBMIEN    |Receive Bit Match Interrupt Enable Bit
     * |        |          |0 = Receive bit match interrupt Disabled.
     * |        |          |1 = Receive bit match interrupt Enabled.
     * |[10]    |PDWKIEN   |Power Down Wake Up Interrupt Enable Bit
     * |        |          |0 = Power down wake up interrupt Disabled.
     * |        |          |1 = Power down wake up interrupt Enabled.
     * @var CIR_T::HDBOUND
     * Offset: 0x18  CIR Header Pattern Boundry Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[10:0]  |LBOUND    |Low Boundary Header Pattern
     * |        |          |Lower limit of Header pattern input range.
     * |        |          |Note: If HBOUND and LBOUND are equal to 0, the CIR controller will not monitor the Header pattern boundary.
     * |[26:16] |HBOUND    |High Boundary Header Pattern
     * |        |          |Upper limit of Header pattern input range.
     * |        |          |Note: If HBOUND and LBOUND are equal to 0, the CIR controller will not monitor the Header pattern boundary.
     * @var CIR_T::D0BOUND
     * Offset: 0x1C  CIR Data 0 Pattern Boundry Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[10:0]  |LBOUND    |Low Boundary Data0 Pattern
     * |        |          |Lower limit of Data 0 pattern input range.
     * |        |          |Note: If HBOUND and LBOUND are equal to 0, the CIR controller will not monitor the Data0 pattern boundary.
     * |[26:16] |HBOUND    |High Boundary Data0 Pattern
     * |        |          |Upper limit of Data 0 pattern input range.
     * |        |          |Note: If HBOUND and LBOUND are equal to 0, the CIR controller will not monitor the Data0 pattern boundary.
     * @var CIR_T::D1BOUND
     * Offset: 0x20  CIR Data 1 Pattern Boundry Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[10:0]  |LBOUND    |Low Boundary Data 1 Pattern
     * |        |          |Upper limit of Data 1 pattern input range.
     * |        |          |Note: If HBOUND and LBOUND are equal to 0, the CIR controller will not monitor the Data1 pattern boundary.
     * |[26:16] |HBOUND    |High Boundary Data 1 Pattern
     * |        |          |Upper limit of Data 1 pattern input range.
     * |        |          |Note: If HBOUND and LBOUND are equal to 0, the CIR controller will not monitor the Data1 pattern boundary.
     * @var CIR_T::SPBOUND
     * Offset: 0x24  CIR Special Pattern Boundry Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[10:0]  |LBOUND    |Low Boundary Special Pattern
     * |        |          |Lower limit of Special pattern input range.
     * |        |          |Note: If HBOUND and LBOUND are equal to 0, the CIR controller will not monitor the Special pattern boundary.
     * |[26:16] |HBOUND    |High Boundary Special Pattern
     * |        |          |Upper limit of Special pattern input range.
     * |        |          |Note: If HBOUND and LBOUND are equal to 0, the CIR controller will not monitor the Special pattern boundary.
     * @var CIR_T::ENDBOUND
     * Offset: 0x28  CIR End Pattern Boundry Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[10:0]  |LBOUND    |Low Boundary End Pattern
     * |        |          |Lower limit of End pattern input range.
     * @var CIR_T::LTVR
     * Offset: 0x38  CIR Latch Timer Value Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[10:0]  |LTV       |Latch Timer Value
     * |        |          |The register is used to record CIR latch timer value.
     * |        |          |Note: User can only read this register when HPMF (CIR_STATUS[3]), D0PMF (CIR_STATUS[2]), D1PMF (CIR_STATUS[1]), SPMF (CIR_STATUS[0]) or RERRF (CIR_STATUS[6]) occurred.
     * @var CIR_T::RDBC
     * Offset: 0x3C  CIR Receive Data Bit Count Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[6:0]   |RBITCNT   |Receive Data Bit Counts
     * |        |          |RBITCNT (CIR_RDBC[5:0]) correspond to CIR_DATA0 and CIR_DATA1 when CIR starts to convert data.
     * |        |          |Note:
     * |        |          |1. User can write 1 to CIR_RDBC[5:0] to clean RBITCNT (CIR_RDBC[5:0]) value.
     * |        |          |2. RBITCNT (CIR_RDBC[5:0]) value indicates the amount of data DATA0 (CIR_DATA0) that has already been confirmed.
     * |        |          |3. The maximum value of RBITCNT (CIR_RDBC[5:0]) is 7u2019h40.
     * |[8]     |BCCMEN    |Bit Count Compared Match Selection
     * |        |          |0 = Bit count compared match function Disabled.
     * |        |          |1 = Bit count compared match function Enabled.
     * |[22:16] |RBITCMP   |Receive Data Bit Compare Data
     * |        |          |User can limit the converted data length by RBITCMP register
     * |        |          |When CIR starts to convert data and RBITCNT(CIR_RDBC[5:0]) is equal to RBITCMP (CIR_RDBC[21:16]), the flag RBMF(CIR_STATUS[9]) will be asserted
     * |        |          |Note: The maximum value of RBITCMP (CIR_RDBC[22:16]) is 7u2019h40.
     * @var CIR_T::DATA0
     * Offset: 0x40  CIR Receive Data0 Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |DATA0     |CIR DATA0 Register
     * |        |          |CIR converts data and stores the data in Data0 when RBITCNT(CIR_RDBC[5:0]) value is between 0 to 31.
     * |        |          |Note: User can write 1 to CIR_DATA0[31:0] to clean DATA0 value only when the register CNTEN(CIR_CTL[0]) is set to 0.
     * @var CIR_T::DATA1
     * Offset: 0x44  CIR Receive Data1 Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |DATA1     |CIR DATA1 Register
     * |        |          |CIR converts data and stores the data in Data1 when RBITCNT(CIR_RDBC[5:0]) value is between 32 to 63.
     * |        |          |Note: User can write 1 to CIR_DATA1[31:0] to clean DATA1 value only when the register CNTEN(CIR_CTL[0]) is set to 0.
     */
    __IO uint32_t CTL;                   /*!< [0x0000] CIR Control Register                                             */
    __IO uint32_t CMPCTL;                /*!< [0x0004] CIR Data Compare Control Register                                */
    __IO uint32_t STATUS;                /*!< [0x0008] CIR Status Register                                              */
    __I  uint32_t RESERVE0[1];
    __IO uint32_t INTCTL;                /*!< [0x0010] CIR Interrupt Control Register                                   */
    __I  uint32_t RESERVE1[1];
    __IO uint32_t HDBOUND;               /*!< [0x0018] CIR Header Pattern Boundry Register                              */
    __IO uint32_t D0BOUND;               /*!< [0x001c] CIR Data 0 Pattern Boundry Register                              */
    __IO uint32_t D1BOUND;               /*!< [0x0020] CIR Data 1 Pattern Boundry Register                              */
    __IO uint32_t SPBOUND;               /*!< [0x0024] CIR Special Pattern Boundry Register                             */
    __IO uint32_t ENDBOUND;              /*!< [0x0028] CIR End Pattern Boundry Register                                 */
    __I  uint32_t RESERVE2[3];
    __I  uint32_t LTVR;                  /*!< [0x0038] CIR Latch Timer Value Register                                   */
    __IO uint32_t RDBC;                  /*!< [0x003c] CIR Receive Data Bit Count Register                              */
    __IO uint32_t DATA0;                 /*!< [0x0040] CIR Receive Data0 Register                                       */
    __IO uint32_t DATA1;                 /*!< [0x0044] CIR Receive Data1 Register                                       */

} CIR_T;

/**
    @addtogroup CIR_CONST CIR Bit Field Definition
    Constant Definitions for CIR Controller
@{ */

#define CIR_CTL_CNTEN_Pos               (0)                                               /*!< CIR_T::CTL: CNTEN Position            */
#define CIR_CTL_CNTEN_Msk               (0x1ul << CIR_CTL_CNTEN_Pos)                      /*!< CIR_T::CTL: CNTEN Mask                */

#define CIR_CTL_POLINV_Pos              (1)                                               /*!< CIR_T::CTL: POLINV Position           */
#define CIR_CTL_POLINV_Msk              (0x1ul << CIR_CTL_POLINV_Pos)                     /*!< CIR_T::CTL: POLINV Mask               */

#define CIR_CTL_ERRBYP_Pos              (4)                                               /*!< CIR_T::CTL: ERRBYP Position           */
#define CIR_CTL_ERRBYP_Msk              (0x1ul << CIR_CTL_ERRBYP_Pos)                     /*!< CIR_T::CTL: ERRBYP Mask               */

#define CIR_CTL_PATTYP_Pos              (5)                                               /*!< CIR_T::CTL: PATTYP Position           */
#define CIR_CTL_PATTYP_Msk              (0x3ul << CIR_CTL_PATTYP_Pos)                     /*!< CIR_T::CTL: PATTYP Mask               */

#define CIR_CTL_DBSEL_Pos               (9)                                               /*!< CIR_T::CTL: DBSEL Position            */
#define CIR_CTL_DBSEL_Msk               (0x3ul << CIR_CTL_DBSEL_Pos)                      /*!< CIR_T::CTL: DBSEL Mask                */

#define CIR_CTL_FOSTRS_Pos              (11)                                              /*!< CIR_T::CTL: FOSTRS Position           */
#define CIR_CTL_FOSTRS_Msk              (0x1ul << CIR_CTL_FOSTRS_Pos)                     /*!< CIR_T::CTL: FOSTRS Mask               */

#define CIR_CTL_PSCALER_Pos             (16)                                              /*!< CIR_T::CTL: PSCALER Position          */
#define CIR_CTL_PSCALER_Msk             (0x7ul << CIR_CTL_PSCALER_Pos)                    /*!< CIR_T::CTL: PSCALER Mask              */

#define CIR_CMPCTL_CMPDAT_Pos           (0)                                               /*!< CIR_T::CMPCTL: CMPDAT Position        */
#define CIR_CMPCTL_CMPDAT_Msk           (0xfful << CIR_CMPCTL_CMPDAT_Pos)                 /*!< CIR_T::CMPCTL: CMPDAT Mask            */

#define CIR_CMPCTL_DCMPEN_Pos           (8)                                               /*!< CIR_T::CMPCTL: DCMPEN Position        */
#define CIR_CMPCTL_DCMPEN_Msk           (0x1ul << CIR_CMPCTL_DCMPEN_Pos)                  /*!< CIR_T::CMPCTL: DCMPEN Mask            */

#define CIR_CMPCTL_CMPMSK_Pos           (16)                                              /*!< CIR_T::CMPCTL: CMPMSK Position        */
#define CIR_CMPCTL_CMPMSK_Msk           (0x1ul << CIR_CMPCTL_CMPMSK_Pos)                  /*!< CIR_T::CMPCTL: CMPMSK Mask            */

#define CIR_CMPCTL_CMPVALID_Pos         (24)                                              /*!< CIR_T::CMPCTL: CMPVALID Position      */
#define CIR_CMPCTL_CMPVALID_Msk         (0x7ul << CIR_CMPCTL_CMPVALID_Pos)                /*!< CIR_T::CMPCTL: CMPVALID Mask          */

#define CIR_STATUS_SPMF_Pos             (0)                                               /*!< CIR_T::STATUS: SPMF Position          */
#define CIR_STATUS_SPMF_Msk             (0x1ul << CIR_STATUS_SPMF_Pos)                    /*!< CIR_T::STATUS: SPMF Mask              */

#define CIR_STATUS_D1PMF_Pos            (1)                                               /*!< CIR_T::STATUS: D1PMF Position         */
#define CIR_STATUS_D1PMF_Msk            (0x1ul << CIR_STATUS_D1PMF_Pos)                   /*!< CIR_T::STATUS: D1PMF Mask             */

#define CIR_STATUS_D0PMF_Pos            (2)                                               /*!< CIR_T::STATUS: D0PMF Position         */
#define CIR_STATUS_D0PMF_Msk            (0x1ul << CIR_STATUS_D0PMF_Pos)                   /*!< CIR_T::STATUS: D0PMF Mask             */

#define CIR_STATUS_HPMF_Pos             (3)                                               /*!< CIR_T::STATUS: HPMF Position          */
#define CIR_STATUS_HPMF_Msk             (0x1ul << CIR_STATUS_HPMF_Pos)                    /*!< CIR_T::STATUS: HPMF Mask              */

#define CIR_STATUS_RBUFF_Pos            (4)                                               /*!< CIR_T::STATUS: RBUFF Position         */
#define CIR_STATUS_RBUFF_Msk            (0x1ul << CIR_STATUS_RBUFF_Pos)                   /*!< CIR_T:STATUS: RBUFF Mask             */

#define CIR_STATUS_DRECF_Pos            (5)                                               /*!< CIR_T::STATUS: DRECF Position         */
#define CIR_STATUS_DRECF_Msk            (0x1ul << CIR_STATUS_DRECF_Pos)                   /*!< CIR_T::STATUS: DRECF Mask             */

#define CIR_STATUS_RERRF_Pos            (6)                                               /*!< CIR_T::STATUS: RERRF Position         */
#define CIR_STATUS_RERRF_Msk            (0x1ul << CIR_STATUS_RERRF_Pos)                   /*!< CIR_T::STATUS: RERRF Mask             */

#define CIR_STATUS_COMPMF_Pos           (7)                                               /*!< CIR_T::STATUS: COMPMF Position        */
#define CIR_STATUS_COMPMF_Msk           (0x1ul << CIR_STATUS_COMPMF_Pos)                  /*!< CIR_T::STATUS: COMPMF Mask            */

#define CIR_STATUS_EPMF_Pos             (8)                                               /*!< CIR_T::STATUS: EPMF Position          */
#define CIR_STATUS_EPMF_Msk             (0x1ul << CIR_STATUS_EPMF_Pos)                    /*!< CIR_T::STATUS: EPMF Mask              */

#define CIR_STATUS_RBMF_Pos             (9)                                               /*!< CIR_T::STATUS: RBMF Position          */
#define CIR_STATUS_RBMF_Msk             (0x1ul << CIR_STATUS_RBMF_Pos)                    /*!< CIR_T::STATUS: RBMF Mask              */

#define CIR_STATUS_PDWKF_Pos            (10)                                              /*!< CIR_T::STATUS: PDWKF Position         */
#define CIR_STATUS_PDWKF_Msk            (0x1ul << CIR_STATUS_PDWKF_Pos)                   /*!< CIR_T::STATUS: PDWKF Mask             */

#define CIR_STATUS_NFOS_Pos             (16)                                              /*!< CIR_T::STATUS: NFOS Position          */
#define CIR_STATUS_NFOS_Msk             (0x1ul << CIR_STATUS_NFOS_Pos)                    /*!< CIR_T::STATUS: NFOS Mask              */

#define CIR_STATUS_RBITCBS_Pos          (17)                                              /*!< CIR_T::STATUS: RBITCBS Position       */
#define CIR_STATUS_RBITCBS_Msk          (0x1ul << CIR_STATUS_RBITCBS_Pos)                 /*!< CIR_T::STATUS: RBITCBS Mask           */

#define CIR_INTCTL_SPMIEN_Pos           (0)                                               /*!< CIR_T::INTCTL: SPMIEN Position        */
#define CIR_INTCTL_SPMIEN_Msk           (0x1ul << CIR_INTCTL_SPMIEN_Pos)                  /*!< CIR_T::INTCTL: SPMIEN Mask            */

#define CIR_INTCTL_D1PMIEN_Pos          (1)                                               /*!< CIR_T::INTCTL: D1PMIEN Position       */
#define CIR_INTCTL_D1PMIEN_Msk          (0x1ul << CIR_INTCTL_D1PMIEN_Pos)                 /*!< CIR_T::INTCTL: D1PMIEN Mask           */

#define CIR_INTCTL_D0PMIEN_Pos          (2)                                               /*!< CIR_T::INTCTL: D0PMIEN Position       */
#define CIR_INTCTL_D0PMIEN_Msk          (0x1ul << CIR_INTCTL_D0PMIEN_Pos)                 /*!< CIR_T::INTCTL: D0PMIEN Mask           */

#define CIR_INTCTL_HPMIEN_Pos           (3)                                               /*!< CIR_T::INTCTL: HPMIEN Position        */
#define CIR_INTCTL_HPMIEN_Msk           (0x1ul << CIR_INTCTL_HPMIEN_Pos)                  /*!< CIR_T::INTCTL: HPMIEN Mask            */

#define CIR_INTCTL_RBUFIEN_Pos          (4)                                               /*!< CIR_T::INTCTL: RBUFIEN Position       */
#define CIR_INTCTL_RBUFIEN_Msk          (0x1ul << CIR_INTCTL_RBUFIEN_Pos)                 /*!< CIR_T::INTCTL: RBUFIEN Mask           */

#define CIR_INTCTL_DRECIEN_Pos          (5)                                               /*!< CIR_T::INTCTL: DRECIEN Position       */
#define CIR_INTCTL_DRECIEN_Msk          (0x1ul << CIR_INTCTL_DRECIEN_Pos)                 /*!< CIR_T::INTCTL: DRECIEN Mask           */

#define CIR_INTCTL_PERRIEN_Pos          (6)                                               /*!< CIR_T::INTCTL: PERRIEN Position       */
#define CIR_INTCTL_PERRIEN_Msk          (0x1ul << CIR_INTCTL_PERRIEN_Pos)                 /*!< CIR_T::INTCTL: PERRIEN Mask           */

#define CIR_INTCTL_CMPMIEN_Pos          (7)                                               /*!< CIR_T::INTCTL: CMPMIEN Position       */
#define CIR_INTCTL_CMPMIEN_Msk          (0x1ul << CIR_INTCTL_CMPMIEN_Pos)                 /*!< CIR_T::INTCTL: CMPMIEN Mask           */

#define CIR_INTCTL_EPMIEN_Pos           (8)                                               /*!< CIR_T::INTCTL: EPMIEN Position        */
#define CIR_INTCTL_EPMIEN_Msk           (0x1ul << CIR_INTCTL_EPMIEN_Pos)                  /*!< CIR_T::INTCTL: EPMIEN Mask            */

#define CIR_INTCTL_RBMIEN_Pos           (9)                                               /*!< CIR_T::INTCTL: RBMIEN Position        */
#define CIR_INTCTL_RBMIEN_Msk           (0x1ul << CIR_INTCTL_RBMIEN_Pos)                  /*!< CIR_T::INTCTL: RBMIEN Mask            */

#define CIR_INTCTL_PDWKIEN_Pos          (10)                                              /*!< CIR_T::INTCTL: PDWKIEN Position       */
#define CIR_INTCTL_PDWKIEN_Msk          (0x1ul << CIR_INTCTL_PDWKIEN_Pos)                 /*!< CIR_T::INTCTL: PDWKIEN Mask           */

#define CIR_HDBOUND_LBOUND_Pos          (0)                                               /*!< CIR_T::HDBOUND: LBOUND Position       */
#define CIR_HDBOUND_LBOUND_Msk          (0x7fful << CIR_HDBOUND_LBOUND_Pos)               /*!< CIR_T::HDBOUND: LBOUND Mask           */

#define CIR_HDBOUND_HBOUND_Pos          (16)                                              /*!< CIR_T::HDBOUND: HBOUND Position       */
#define CIR_HDBOUND_HBOUND_Msk          (0x7fful << CIR_HDBOUND_HBOUND_Pos)               /*!< CIR_T::HDBOUND: HBOUND Mask           */

#define CIR_D0BOUND_LBOUND_Pos          (0)                                               /*!< CIR_T::D0BOUND: LBOUND Position       */
#define CIR_D0BOUND_LBOUND_Msk          (0x7fful << CIR_D0BOUND_LBOUND_Pos)               /*!< CIR_T::D0BOUND: LBOUND Mask           */

#define CIR_D0BOUND_HBOUND_Pos          (16)                                              /*!< CIR_T::D0BOUND: HBOUND Position       */
#define CIR_D0BOUND_HBOUND_Msk          (0x7fful << CIR_D0BOUND_HBOUND_Pos)               /*!< CIR_T::D0BOUND: HBOUND Mask           */

#define CIR_D1BOUND_LBOUND_Pos          (0)                                               /*!< CIR_T::D1BOUND: LBOUND Position       */
#define CIR_D1BOUND_LBOUND_Msk          (0x7fful << CIR_D1BOUND_LBOUND_Pos)               /*!< CIR_T::D1BOUND: LBOUND Mask           */

#define CIR_D1BOUND_HBOUND_Pos          (16)                                              /*!< CIR_T::D1BOUND: HBOUND Position       */
#define CIR_D1BOUND_HBOUND_Msk          (0x7fful << CIR_D1BOUND_HBOUND_Pos)               /*!< CIR_T::D1BOUND: HBOUND Mask           */

#define CIR_SPBOUND_LBOUND_Pos          (0)                                               /*!< CIR_T::SPBOUND: LBOUND Position       */
#define CIR_SPBOUND_LBOUND_Msk          (0x7fful << CIR_SPBOUND_LBOUND_Pos)               /*!< CIR_T::SPBOUND: LBOUND Mask           */

#define CIR_SPBOUND_HBOUND_Pos          (16)                                              /*!< CIR_T::SPBOUND: HBOUND Position       */
#define CIR_SPBOUND_HBOUND_Msk          (0x7fful << CIR_SPBOUND_HBOUND_Pos)               /*!< CIR_T::SPBOUND: HBOUND Mask           */

#define CIR_ENDBOUND_LBOUND_Pos         (0)                                               /*!< CIR_T::ENDBOUND: LBOUND Position      */
#define CIR_ENDBOUND_LBOUND_Msk         (0x7fful << CIR_ENDBOUND_LBOUND_Pos)              /*!< CIR_T::ENDBOUND: LBOUND Mask          */

#define CIR_LTVR_LTV_Pos                (0)                                               /*!< CIR_T::LTVR: LTV Position             */
#define CIR_LTVR_LTV_Msk                (0x7fful << CIR_LTVR_LTV_Pos)                     /*!< CIR_T::LTVR: LTV Mask                 */

#define CIR_RDBC_RBITCNT_Pos            (0)                                               /*!< CIR_T::RDBC: RBITCNT Position         */
#define CIR_RDBC_RBITCNT_Msk            (0x7ful << CIR_RDBC_RBITCNT_Pos)                  /*!< CIR_T::RDBC: RBITCNT Mask             */

#define CIR_RDBC_BCCMEN_Pos             (8)                                               /*!< CIR_T::RDBC: BCCMEN Position          */
#define CIR_RDBC_BCCMEN_Msk             (0x1ul << CIR_RDBC_BCCMEN_Pos)                    /*!< CIR_T::RDBC: BCCMEN Mask              */

#define CIR_RDBC_RBITCMP_Pos            (16)                                              /*!< CIR_T::RDBC: RBITCMP Position         */
#define CIR_RDBC_RBITCMP_Msk            (0x7ful << CIR_RDBC_RBITCMP_Pos)                  /*!< CIR_T::RDBC: RBITCMP Mask             */

#define CIR_DATA0_DATA0_Pos             (0)                                               /*!< CIR_T::DATA0: DATA0 Position          */
#define CIR_DATA0_DATA0_Msk             (0xfffffffful << CIR_DATA0_DATA0_Pos)             /*!< CIR_T::DATA0: DATA0 Mask              */

#define CIR_DATA1_DATA1_Pos             (0)                                               /*!< CIR_T::DATA1: DATA1 Position          */
#define CIR_DATA1_DATA1_Msk             (0xfffffffful << CIR_DATA1_DATA1_Pos)             /*!< CIR_T::DATA1: DATA1 Mask              */

/**@}*/ /* CIR_CONST */
/**@}*/ /* end of CIR register group */
/**@}*/ /* end of REGISTER group */

#if defined ( __CC_ARM   )
#pragma no_anon_unions
#endif

#endif /* __CIR_REG_H__ */
