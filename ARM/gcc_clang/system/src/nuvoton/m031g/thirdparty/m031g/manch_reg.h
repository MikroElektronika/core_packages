/**************************************************************************//**
 * @file     manch_reg.h
 * @version  V1.00
 * @brief    MANCH register definition header file
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2020 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/

#ifndef __MANCH_REG_H__
#define __MANCH_REG_H__

#if defined ( __CC_ARM   )
#pragma anon_unions
#endif

/**
   @addtogroup REGISTER Control Register
   @{
*/

/**
    @addtogroup MANCH Manchester Codec Controller (MANCH)
    Memory Mapped Structure for MANCH Controller
@{ */

typedef struct
{

    /**
     * @var MANCH_T::CTL
     * Offset: 0x00  Manchester Function Control Register
    * ---------------------------------------------------------------------------------------------------
    * |Bits    |Field     |Descriptions
    * | :----: | :----:   | :---- |
    * |[1:0]   |MODESEL   |Manchester Mode Selection
    * |        |          |00 = Manchester function is disabled.
    * |        |          |01 = Mode 1 modulation signal format is selected.
    * |        |          |10 = Mode 2 modulation signal format is selected.
    * |        |          |11 = The other modulation signal format is selected
    * |        |          |(The register of MANCH_PREAM shall be set according to its frame information.)
    * |        |          |Note: All the change of function setting shall be during Manchester Controller disabled.
    * |[4:2]   |DEGSEL    |Received Deglitch Selection
    * |        |          |The bits field is used to define how much width of glitch would be filtered.
    * |        |          |000 = disable to the Manchester deglitch selection.
    * |        |          |001 = Filter the glitches that the width is 0.25us or less.
    * |        |          |010 = Filter the glitches that the width is 0.50us or less.
    * |        |          |011 = Filter the glitches that the width is 0.75us or less.
    * |        |          |100 = Filter the glitches that the width is 1.00us or less.
    * |        |          |101 = Filter the glitches that the width is 1.25us or less.
    * |        |          |Others = reserved.
    * |        |          |Note: The value is based on PCLK0 is 72 MHz and DEGDIV = 0x6.
    * |[5]     |MECT      |Manchester Encoding Type
    * |        |          |0 = G.E Thomas format.
    * |        |          |Level 0: the signal is half cycle low and transfer to half cycle high.
    * |        |          |Level 1: the signal is half cycle high and transfer to half cycle low
    * |        |          |1 = IEEE 802.3 format.
    * |        |          |Level 0: the signal is half cycle high and transfer to half cycle low
    * |        |          |Level 1: the signal is half cycle low and transfer to half cycle high.
    * |        |          |Note: Please refer to Figure 6.16-5.
    * |[6]     |LSB       |Manchester Code LSB First
    * |        |          |0 = Manchester code is MSB first.
    * |        |          |1 = Manchester code is LSB first.
    * |        |          |Note: This bit should be configured before MODSEL
    * |[8]     |TXINV     |Transmit Signal Invert
    * |        |          |0 = The transmitting data is not inverted.
    * |        |          |1 = The transmitting data is inverted.
    * |[9]     |RXINV     |Receive Signal Invert
    * |        |          |0 = The received data is not inverted.
    * |        |          |1 = The received data is inverted.
    * |[10]    |RBNULEN   |Received Bit Clock Number Auto Upload Enable Bit
    * |        |          |0 = RBITNUM is not updated by CRBITNUM at each data frame beginning.
    * |        |          |1 = RBITNUM is updated by CRBITNUM at each data frame beginning.
    * |[11]    |CRBNULEN  |Current Received Bit Clock Number Auto Upload Enable Bit
    * |        |          |0 = CRBITNUM is not updated in each received byte during message receiving period.
    * |        |          |1 = CRBITNUM is updated in each received byte during message receiving period.
    * |[14:12] |DEGDIV    |Manchester Deglitch Clock Divider
    * |        |          |The bits field indicates the deglitched clock frequency. The detail is described in section 6.16.5.3.
    * |[17]    |MTXE2TEN  |Manchester Coded Edge Output Enable Bit
    * |        |          |0 = Manchester coded edge signal outputs to Timer Controller Disabled.
    * |        |          |1 = Manchester coded edge signal outputs to Timer Controller Enabled.
    * |[19]    |MANCHTEN  |Manchester Transmit Enable
    * |        |          |0 = Manchester Transmit Disabled.
    * |        |          |1 = Manchester Transmit Enabled. It will be cleared to 0 after the data frame transmission done.
    * |[31:20] |BITREFDIV |Manchester Bit Reference Clock Divider
    * |        |          |The bits field indicates the reference clock frequency for Manchester bit sample.
    * |        |          |For example, if the system is 72 MHz, the BITREFDIV can be set as 0x23 (BITREFDIV+1)
    * |        |          |It will generate 2 MHz reference clock frequency and the Manchester transmitting or receiving data is sampled with the reference divided clock.
    * |        |          |Note 1: The BITREFDIV minimum value is 0x03.
    * |        |          |Note 2: It is suggested that minimize the BITREFDIV value to make the TBITNUM or RTIBNUM value be greater than 0x64.
    * @var MANCH_T::PREAM
    * Offset: 0x04  Manchester Preamble Register
    * ---------------------------------------------------------------------------------------------------
    * |Bits    |Field     |Descriptions
    * | :----: | :----:   | :---- |
    * |[7:0]   |PREAMBLE  |Preamble Format
    * |        |          |The bits field defines the preamble pattern in the modulation signal format.
    * |        |          |In MODESEL (MANCH_CTL[1:0]) = 0x11 the content of first data must be the same with PREAMBLE.
    * |        |          |If MODESEL is 2’b10, the PREAMBLE will be set as 0x7E.
    * |[12:8]  |PRENUM    |Preamble Number
    * |        |          |The bits field defines the number of preamble in the modulation signal format.
    * |        |          |00000: means there are 32 preamble patterns.
    * |        |          |00001: means there is 1 preamble pattern.
    * |        |          |00010: means there are 2 preamble patterns.
    * |        |          |00011: means there are 3 preamble patterns.
    * |        |          |and so on
    * |        |          |If MODESEL is 2’b01, the PRENUM will be set as 0x5.
    * |        |          |If MODESEL is 2’b10, the PRENUM will be set as 0x4.
    * |[23:16] |IDLEPAT   |Idle Pattern
    * |        |          |The bits field indicates the bus idle pattern.
    * |        |          |If it is 0x00, it indicates that the bus idle default is low.
    * |        |          |If it is 0xFF, it indicates that the bus idle default is high.
    * |        |          |Except the bus idle state is LOW, the bits field must be set before the Controller is Enabled.
    * |[31:24] |FMTNUM    |Modulation Format Transmit Number
    * |        |          |The bits field defines the number of transmitted byte number in current selected mode.
    * |        |          |If MODESEL is 0x1, the FMTNUM will be forced as 0x1E.
    * |        |          |If MODESEL is 0x2, the FMTNUM will be forced as 0x40.
    * |        |          |If MODESEL is 0x3, the modulation transmit number will be FMTNUM.
    * |        |          |Note 1: If FMTNUM is 0x00, which indicates the transmit number is 256 Bytes.
    * |        |          |Note 2: The value of FMTNUM must be greater than PRENUM
    * |        |          |Note 3: The minimum value of FMTNUM must be greater than 1.
    * @var MANCH_T::FIFOCTL
    * Offset: 0x0C  Manchester FIFO Control Register
    * ---------------------------------------------------------------------------------------------------
    * |Bits    |Field     |Descriptions
    * | :----: | :----:   | :---- |
    * |[0]     |TXCLR     |Transmit FIFO Clear
    * |        |          |0 = Both of Transmit FIFO and Manchester Transmit encoded FIFO are not cleared.
    * |        |          |1 = Both of Transmit FIFO and Manchester Transmit encoded FIFO are cleared.
    * |[1]     |RXCLR     |Received FIFO Clear
    * |        |          |0 = Received control is not cleared.
    * |        |          |1 = Received control is cleared.
    * |        |          |Note: The received control includes the FIFO and receive state machine
    * |        |          |For example, if there is noise in the bus, the Manchester Controller will report BITERR flag when it detects the bit width greater than the setting
    * |        |          |If the number of bit error event is greater than the software threshold, then set RXCLR to reset the receive state machine
    * |        |          |The Manchester Controller will re-detect the IDLEPAT again.
    * |[10:8]  |TXFCNT    |Transmitted FIFO Count (Read Only)
    * |        |          |The bits field indicates the current counter number of transmitted FIFO for transmitting data.
    * |[14:12] |RXFCNT    |Received FIFO Count (Read Only)
    * |        |          |The bits field indicates the current counter number of received FIFO for decoded data.
    * |[18:16] |MTXFCNT   |Manchester Transmit Encoded FIFO Count (Read Only)
    * |        |          |The bits field indicates the current counter number of transmitted encoded FIFO for encoded data.
    * @var MANCH_T::DMAC
    * Offset: 0x10  Manchester DMA Control Register
    * ---------------------------------------------------------------------------------------------------
    * |Bits    |Field     |Descriptions
    * | :----: | :----:   | :---- |
    * |[0]     |MTXDMAEN  |Manchester Code Transmit DMA Enable Bit
    * |        |          |0 = Manchester Code Transmit DMA Disabled.
    * |        |          |1 = Manchester Code Transmit DMA Enabled.
    * |[1]     |TXDMAEN   |Transmit DMA Enable Bit
    * |        |          |0 = Transmit DMA Disabled.
    * |        |          |1 = Transmit DMA Enabled.
    * |[2]     |RXDMAEN   |Received DMA Enable Bit
    * |        |          |0 = Received DMA Disabled.
    * |        |          |1 = Received DMA Enabled.
    * @var MANCH_T::INTEN
    * Offset: 0x14  Manchester Interrupt Enable Register
    * ---------------------------------------------------------------------------------------------------
    * |Bits    |Field     |Descriptions
    * | :----: | :----:   | :---- |
    * |[0]     |TXDONEIE  |Transmit Done Interrupt Enable Bit
    * |        |          |0 = Transmit frame done interrupt Disabled.
    * |        |          |1 = Transmit frame done interrupt Enabled.
    * |[2]     |RXDONEIE  |Receive Frame Done Interrupt Enable Bit
    * |        |          |0 = Receive frame done interrupt Disabled.
    * |        |          |1 = Receive frame done interrupt Enabled.
    * |[3]     |RXOVERIE  |Receive FIFO Overflow Interrupt Enable Bit
    * |        |          |0 = Receive FIFO overflow interrupt Disabled.
    * |        |          |1 = Receive FIFO overflow interrupt Enabled.
    * |[4]     |BITERRIE  |Bit Detect Error Interrupt Enable Bit
    * |        |          |0 = The Manchester bit error detected interrupt Disabled.
    * |        |          |1 = The Manchester bit error detected interrupt Enabled.
    * |[7]     |IDLERRIE  |IDLE Pattern Error Interrupt Enable Bit
    * |        |          |0 = The Idle pattern error detected interrupt Disabled.
    * |        |          |1 = The Idle pattern error detected interrupt Enabled.
    * @var MANCH_T::STS
    * Offset: 0x18  Manchester Status Register
    * ---------------------------------------------------------------------------------------------------
    * |Bits    |Field     |Descriptions
    * | :----: | :----:   | :---- |
    * |[0]     |TXDONE    |Transmit Frame Done
    * |        |          |0 = Transmit frame is not done.
    * |        |          |1 = Transmit frame is done.
    * |        |          |Note: When the MANCHTEN is set, this bit will keep 0 until the data frame transmission is done.
    * |[2]     |RXDONE    |Receive Frame Done
    * |        |          |0 = Receive frame is not done.
    * |        |          |1 = Receive frame is done.
    * |        |          |Note: This bit can be cleared by writing 1 to it.
    * |[3]     |RXOVER    |Receive FIFO Overflow
    * |        |          |0 = The receive FIFO is not overflow.
    * |        |          |1 = The receive FIFO is overflow.
    * |        |          |Note: This bit can be cleared by writing 1 to it.
    * |[4]     |BITERR    |Manchester Bit Error
    * |        |          |0 = The Manchester bit error is not detected.
    * |        |          |1 = The Manchester bit error is detected
    * |        |          |If the counter between two receive edge is greater than (RBITNUM + bit error tolerance) or less than (RBITNUM - bit error tolerance).
    * |        |          |Note: This bit can be cleared by writing 1 to it.
    * |[5]     |PRENERR   |Preamble Number Error
    * |        |          |0 = The receive preamble number error is not detected.
    * |        |          |1 = The receive preamble number error is detected.
    * |        |          |Note: This bit can be cleared by writing 1 to it.
    * |[6]     |TXUNDER   |Transmit FIFO Underrun
    * |        |          |0 = The transmit FIFO is not underrun.
    * |        |          |1 = The transmit FIFO is underrun.
    * |        |          |Note: This bit can be cleared by writing 1 to it.
    * |[7]     |IDLERR    |IDLE Error
    * |        |          |0 = The receive Idle pattern error is not detected.
    * |        |          |1 = The receive Idle pattern error is detected.
    * |        |          |Note: This bit can be cleared by writing 1 to it.
    * |[8]     |TXEMPTY   |Transmit FIFO Empty
    * |        |          |0 = The transmit FIFO is not empty.
    * |        |          |1 = The transmit FIFO is empty.
    * |[9]     |TXFULL    |Transmit FIFO Full
    * |        |          |0 = The transmit FIFO is not full.
    * |        |          |1 = The transmit FIFO is full.
    * |[10]    |RXEMPTY   |Received FIFO Empty
    * |        |          |0 = The received FIFO is not empty.
    * |        |          |1 = The received FIFO is empty.
    * |[11]    |RXFULL    |Received FIFO Full
    * |        |          |0 = The received FIFO is not full.
    * |        |          |1 = The received FIFO is full.
    * |[14]    |MTXEMPTY  |Manchester Transmit Encoded FIFO Empty
    * |        |          |0 = The Manchester transmit encoded FIFO is not empty.
    * |        |          |1 = The Manchester transmit encoded FIFO is empty.
    * |[15]    |MTXFULL   |Manchester Transmit Encoded FIFO Full
    * |        |          |0 = The Manchester transmit encoded FIFO is not full.
    * |        |          |1 = The Manchester transmit encoded FIFO is full.
    * |[23:16] |RXCNT     |Receive Frame Data Current Count
    * |        |          |The bits field indicates the current received data count
    * |        |          |If the Manchester Controller receives a data frame done (RXCNT = FMTNUM), the RXDONE is set to 1
    * |        |          |The bits field will be cleared to 0 at the next frame beginning.
    * |[31]    |RXBUSY    |Receive Busy Flag
    * |        |          |0 = The received bus is not busy.
    * |        |          |1 = The received bus is busy.
    * @var MANCH_T::BITCNT
    * Offset: 0x1C  Manchester Bit Count Register
    * ---------------------------------------------------------------------------------------------------
    * |Bits    |Field     |Descriptions
    * | :----: | :----:   | :---- |
    * |[7:0]   |TBITNUM   |Manchester Transmit Reference Frequency Number per Bit
    * |        |          |The bits field indicates the number of reference frequency (Bit_Ref_Clock) for transmit bit.
    * |        |          |Note 1: The value of this bits field cannot be 0x00.
    * |        |          |Note 2: It is suggested the TBITNUM value is not less than 0x64.
    * |[15:8]  |RBITNUM   |Manchester Receive Reference Frequency Number per Bit
    * |        |          |The bits field indicates the number of reference frequency (Bit_Ref_Clock) for received bit.
    * |        |          |If there is not BITERR event, user can refer the CRBITNUM to revise the RBITNUM.
    * |        |          |Note 1: The value of this bits field cannot be 0x00 and the tolerance value must be not 3% than the received input bit rate
    * |        |          |Otherwise, it cannot receive the correct input data on time.
    * |        |          |Note 2: The bits can be updated at the start of next data frame if the RBNULEN is set to 1.
    * |        |          |Note 3: It is suggested that the RBITNUM value is not less than 0x64.
    * |[23:16] |CRBITNUM  |Manchester Current Receive Reference Frequency Number per Bit (Read Only)
    * |        |          |The bits field indicates the current number of reference frequency (Bit_Ref_Clock) for each received bit.
    * |[26:24] |RBERRTN   |Manchester Receive Bit Error Tolerance Number
    * |        |          |The bits field indicates the tolerance range of RBITNUM for received bit to detect the bit error event.
    * |        |          |000 = 1/4 RBITNUM as the bit error tolerance.
    * |        |          |001 = 1/8 RBITNUM as the bit error tolerance.
    * |        |          |010 = 1/16 RBITNUM as the bit error tolerance.
    * |        |          |011 = 1/32 RBITNUM as the bit error tolerance.
    * |        |          |100 = 1/64 RBITNUM as the bit error tolerance.
    * |        |          |101 = 1/128 RBITNUM as the bit error tolerance.
    * |        |          |110 and 111 = bit error tolerance is equal 0.
    * |        |          |Other, reserved
    * |        |          |Note 1: The sum value of RBITNUM and bit error tolerance value should not be greater than 0xFF
    * |        |          |For example, if RBITNUM = 210, the RBERRTN value should be 001 ~ 101.
    * |        |          |Note 2: The RBITNUM must greater than the divisor
    * |        |          |For example, if RBITNUM = 127, RBERRTN should be 000 ~ 100.
    * @var MANCH_T::TXDAT
    * Offset: 0x20  Manchester Transmit Data Register
    * ---------------------------------------------------------------------------------------------------
    * |Bits    |Field     |Descriptions
    * | :----: | :----:   | :---- |
    * |[7:0]   |TXDAT     |Manchester Transmit Data
    * |        |          |The bits field indicates the transmit data.
    * @var MANCH_T::RXDAT
    * Offset: 0x24  Manchester Receive Data Register
    * ---------------------------------------------------------------------------------------------------
    * |Bits    |Field     |Descriptions
    * | :----: | :----:   | :---- |
    * |[7:0]   |RXDAT     |Manchester Receive Data
    * |        |          |The bits field indicates the received data.
    * @var MANCH_T::MTXDAT
    * Offset: 0x28  Manchester Transmit Encoded Data Register
    * ---------------------------------------------------------------------------------------------------
    * |Bits    |Field     |Descriptions
    * | :----: | :----:   | :---- |
    * |[15:0]  |MTXDAT    |Manchester Encoded Data
    * |        |          |The bits field indicates the current Manchester encoded data in FIFO.
    */
    __IO uint32_t CTL;                   /*!< [0x0000] MANCH Function Control Register                             */
    __IO uint32_t PREAM;                 /*!< [0x0004] MANCH Preamble Register                                     */
    __I  uint32_t RESERVE0[1];           /*!< [0x0008]  */
    __IO uint32_t FIFOCTL;               /*!< [0x000c] MANCH FIFO Control Register                                 */
    __IO uint32_t DMAC;                  /*!< [0x0010] MANCH DMA Control Register                                  */
    __IO uint32_t INTEN;                 /*!< [0x0014] MANCH Interrupt Enable Register                             */
    __IO uint32_t STS;                   /*!< [0x0018] MANCH Status Register                                       */
    __IO uint32_t BITCNT;                /*!< [0x001c] MANCH Bit Count Register                                    */
    __O  uint32_t TXDAT;                 /*!< [0x0020] MANCH Transmit Data Register                                */
    __I  uint32_t RXDAT;                 /*!< [0x0024] MANCH Receive Data Register                                 */
    __I  uint32_t MTXDAT;                /*!< [0x0028] MANCH Transmit Encoded Data Register                        */

} MANCH_T;

/**
    @addtogroup MANCH_CONST Manchester Bit Field Definition
    Constant Definitions for Manchester Controller
@{ */

#define MANCH_CTL_MODESEL_Pos       (0)                                        /*!< MANCH_T::CTL: MODESEL Position   */
#define MANCH_CTL_MODESEL_Msk       (0x3ul << MANCH_CTL_MODESEL_Pos)           /*!< MANCH_T::CTL: MODESEL Mask       */

#define MANCH_CTL_DEGSEL_Pos        (2)                                        /*!< MANCH_T::CTL: DEGSEL Position    */
#define MANCH_CTL_DEGSEL_Msk        (0x7ul << MANCH_CTL_DEGSEL_Pos)            /*!< MANCH_T::CTL: DEGSEL Mask        */

#define MANCH_CTL_MECT_Pos          (5)                                        /*!< MANCH_T::CTL: MECT Position      */
#define MANCH_CTL_MECT_Msk          (0x1ul << MANCH_CTL_MECT_Pos)              /*!< MANCH_T::CTL: MECT Mask          */

#define MANCH_CTL_LSB_Pos           (6)                                        /*!< MANCH_T::CTL: LSB Position       */
#define MANCH_CTL_LSB_Msk           (0x1ul << MANCH_CTL_LSB_Pos)               /*!< MANCH_T::CTL: LSB Mask           */

#define MANCH_CTL_TXINV_Pos         (8)                                        /*!< MANCH_T::CTL: TXINV Position    */
#define MANCH_CTL_TXINV_Msk         (0x1ul << MANCH_CTL_TXINV_Pos)             /*!< MANCH_T::CTL: TXINV Mask        */

#define MANCH_CTL_RXINV_Pos         (9)                                        /*!< MANCH_T::CTL: RXINV Position    */
#define MANCH_CTL_RXINV_Msk         (0x1ul << MANCH_CTL_RXINV_Pos)             /*!< MANCH_T::CTL: RXINV Mask        */

#define MANCH_CTL_RBNULEN_Pos       (10)                                       /*!< MANCH_T::CTL: RBNULEN Position   */
#define MANCH_CTL_RBNULEN_Msk       (0x1ul << MANCH_CTL_RBNULEN_Pos)           /*!< MANCH_T::CTL: RBNULEN Mask       */

#define MANCH_CTL_CRBNULEN_Pos      (11)                                       /*!< MANCH_T::CTL: CRBNULEN Position   */
#define MANCH_CTL_CRBNULEN_Msk      (0x1ul << MANCH_CTL_CRBNULEN_Pos)          /*!< MANCH_T::CTL: CRBNULEN Mask       */

#define MANCH_CTL_DEGDIV_Pos        (12)                                       /*!< MANCH_T::CTL: DEGDIV Position */
#define MANCH_CTL_DEGDIV_Msk        (0x7ul << MANCH_CTL_DEGDIV_Pos)            /*!< MANCH_T::CTL: DEGDIV Mask     */

#define MANCH_CTL_MTXE2TEN_Pos      (17)                                       /*!< MANCH_T::CTL: MTXE2TEN Position */
#define MANCH_CTL_MTXE2TEN_Msk      (0x1ul << MANCH_CTL_MTXE2TEN_Pos)          /*!< MANCH_T::CTL: MTXE2TEN Mask     */

#define MANCH_CTL_MANCHTEN_Pos      (19)                                       /*!< MANCH_T::CTL: MTXFE2TEN Position */
#define MANCH_CTL_MANCHTEN_Msk      (0x1ul << MANCH_CTL_MANCHTEN_Pos)          /*!< MANCH_T::CTL: MTXFE2TEN Mask     */

#define MANCH_CTL_BITDIV_Pos        (20)                                       /*!< MANCH_T::CTL: BITDIV Position */
#define MANCH_CTL_BITDIV_Msk        (0xffful << MANCH_CTL_BITDIV_Pos)          /*!< MANCH_T::CTL: BITDIV Mask     */

#define MANCH_PREAM_PREAMBLE_Pos    (0)                                        /*!< MANCH_T::PREAM: PREAMBLE Position */
#define MANCH_PREAM_PREAMBLE_Msk    (0xfful << MANCH_PREAM_PREAMBLE_Pos)       /*!< MANCH_T::PREAM: PREAMBLE Mask     */

#define MANCH_PREAM_PRENUM_Pos      (8)                                        /*!< MANCH_T::PREAM: PRENUM Position   */
#define MANCH_PREAM_PRENUM_Msk      (0x1ful << MANCH_PREAM_PRENUM_Pos)         /*!< MANCH_T::PREAM: PRENUM Mask       */

#define MANCH_PREAM_IDLEPAT_Pos     (16)                                       /*!< MANCH_T::PREAM: IDLEPAT Position   */
#define MANCH_PREAM_IDLEPAT_Msk     (0xfful << MANCH_PREAM_IDLEPAT_Pos)        /*!< MANCH_T::PREAM: IDLEPAT Mask       */

#define MANCH_PREAM_FMTNUM_Pos      (24)                                       /*!< MANCH_T::PREAM: FMTNUM Position   */
#define MANCH_PREAM_FMTNUM_Msk      (0xfful << MANCH_PREAM_FMTNUM_Pos)         /*!< MANCH_T::PREAM: FMTNUM Mask       */

#define MANCH_FIFOCTL_TXCLR_Pos     (0)                                        /*!< MANCH_T::FIFOCTL: TXCLR Position  */
#define MANCH_FIFOCTL_TXCLR_Msk     (0x1ul << MANCH_FIFOCTL_TXCLR_Pos)         /*!< MANCH_T::FIFOCTL: TXCLR Mask      */

#define MANCH_FIFOCTL_RXCLR_Pos     (1)                                        /*!< MANCH_T::FIFOCTL: RXCLR Position  */
#define MANCH_FIFOCTL_RXCLR_Msk     (0x1ul << MANCH_FIFOCTL_RXCLR_Pos)         /*!< MANCH_T::FIFOCTL: RXCLR Mask      */

#define MANCH_FIFOCTL_TXFCNT_Pos    (8)                                        /*!< MANCH_T::FIFOCTL: TXFCNT Position */
#define MANCH_FIFOCTL_TXFCNT_Msk    (0x7ul << MANCH_FIFOCTL_TXFCNT_Pos)        /*!< MANCH_T::FIFOCTL: TXFCNT Mask     */

#define MANCH_FIFOCTL_RXFCNT_Pos    (12)                                       /*!< MANCH_T::FIFOCTL: RXFCNT Position */
#define MANCH_FIFOCTL_RXFCNT_Msk    (0x7ul << MANCH_FIFOCTL_RXFCNT_Pos)        /*!< MANCH_T::FIFOCTL: RXFCNT Mask     */

#define MANCH_FIFOCTL_MTXFCNT_Pos   (16)                                       /*!< MANCH_T::FIFOCTL: MTXFCNT Position */
#define MANCH_FIFOCTL_MTXFCNT_Msk   (0x7ul << MANCH_FIFOCTL_MTXFCNT_Pos)       /*!< MANCH_T::FIFOCTL: MTXFCNT Mask     */

#define MANCH_DMAC_MTXDMAEN_Pos     (0)                                        /*!< MANCH_T::DMAC: MTXDMAEN Position  */
#define MANCH_DMAC_MTXDMAEN_Msk     (0x1ul << MANCH_DMAC_MTXDMAEN_Pos)         /*!< MANCH_T::DMAC: MTXDMAEN Mask      */

#define MANCH_DMAC_TXDMAEN_Pos      (1)                                        /*!< MANCH_T::DMAC: TXDMAEN Position   */
#define MANCH_DMAC_TXDMAEN_Msk      (0x1ul << MANCH_DMAC_TXDMAEN_Pos)          /*!< MANCH_T::DMAC: TXDMAEN Mask       */

#define MANCH_DMAC_RXDMAEN_Pos      (2)                                        /*!< MANCH_T::DMAC: RXDMAEN Position   */
#define MANCH_DMAC_RXDMAEN_Msk      (0x1ul << MANCH_DMAC_RXDMAEN_Pos)          /*!< MANCH_T::DMAC: RXDMAEN Mask       */

#define MANCH_INTEN_TXDONEIE_Pos    (0)                                        /*!< MANCH_T::INTEN: TXDONEIE Position */
#define MANCH_INTEN_TXDONEIE_Msk    (0x1ul << MANCH_INTEN_TXDONEIE_Pos)        /*!< MANCH_T::INTEN: TXDONEIE Mask     */

#define MANCH_INTEN_RXDONEIE_Pos    (2)                                        /*!< MANCH_T::INTEN: RXDONEIE Position */
#define MANCH_INTEN_RXDONEIE_Msk    (0x1ul << MANCH_INTEN_RXDONEIE_Pos)        /*!< MANCH_T::INTEN: RXDONEIE Mask     */

#define MANCH_INTEN_RXOVERIE_Pos    (3)                                        /*!< MANCH_T::INTEN: RXOVERIE Position */
#define MANCH_INTEN_RXOVERIE_Msk    (0x1ul << MANCH_INTEN_RXOVERIE_Pos)        /*!< MANCH_T::INTEN: RXOVERIE Mask     */

#define MANCH_INTEN_BITERRIE_Pos    (4)                                        /*!< MANCH_T::INTEN: BITERRIE Position */
#define MANCH_INTEN_BITERRIE_Msk    (0x1ul << MANCH_INTEN_BITERRIE_Pos)        /*!< MANCH_T::INTEN: BITERRIE Mask     */

#define MANCH_INTEN_IDLERRIE_Pos    (7)                                        /*!< MANCH_T::INTEN: IDLEERRIE Position */
#define MANCH_INTEN_IDLERRIE_Msk    (0x1ul << MANCH_INTEN_IDLERRIE_Pos)        /*!< MANCH_T::INTEN: IDLEERRIE Mask     */

#define MANCH_STS_TXDONE_Pos        (0)                                        /*!< MANCH_T::STS: TXDONE Position     */
#define MANCH_STS_TXDONE_Msk        (0x1ul << MANCH_STS_TXDONE_Pos)            /*!< MANCH_T::STS: TXDONE Mask         */

#define MANCH_STS_RXDONE_Pos        (2)                                        /*!< MANCH_T::STS: RXDONE Position     */
#define MANCH_STS_RXDONE_Msk        (0x1ul << MANCH_STS_RXDONE_Pos)            /*!< MANCH_T::STS: RXDONE Mask         */

#define MANCH_STS_RXOVER_Pos        (3)                                        /*!< MANCH_T::STS: RXOVER Position     */
#define MANCH_STS_RXOVER_Msk        (0x1ul << MANCH_STS_RXOVER_Pos)            /*!< MANCH_T::STS: RXOVER Mask         */

#define MANCH_STS_BITERR_Pos        (4)                                        /*!< MANCH_T::STS: BITERR Position     */
#define MANCH_STS_BITERR_Msk        (0x1ul << MANCH_STS_BITERR_Pos)            /*!< MANCH_T::STS: BITERR Mask         */

#define MANCH_STS_PRENERR_Pos       (5)                                        /*!< MANCH_T::STS: PRENERR Position     */
#define MANCH_STS_PRENERR_Msk       (0x1ul << MANCH_STS_PRENERR_Pos)           /*!< MANCH_T::STS: PRENERR Mask         */

#define MANCH_STS_TXUNDER_Pos       (6)                                        /*!< MANCH_T::STS: TXUNDER Position     */
#define MANCH_STS_TXUNDER_Msk       (0x1ul << MANCH_STS_TXUNDER_Pos)           /*!< MANCH_T::STS: TXUNDER Mask         */

#define MANCH_STS_IDLERR_Pos        (7)                                        /*!< MANCH_T::STS: IDLEERR Position     */
#define MANCH_STS_IDLERR_Msk        (0x1ul << MANCH_STS_IDLERR_Pos)            /*!< MANCH_T::STS: IDLEERR Mask         */

#define MANCH_STS_TXEMPTY_Pos       (8)                                        /*!< MANCH_T::STS: TXEMPTY Position    */
#define MANCH_STS_TXEMPTY_Msk       (0x1ul << MANCH_STS_TXEMPTY_Pos)           /*!< MANCH_T::STS: TXEMPTY Mask        */

#define MANCH_STS_TXFULL_Pos        (9)                                        /*!< MANCH_T::STS: TXFULL Position     */
#define MANCH_STS_TXFULL_Msk        (0x1ul << MANCH_STS_TXFULL_Pos)            /*!< MANCH_T::STS: TXFULL Mask         */

#define MANCH_STS_RXEMPTY_Pos       (10)                                       /*!< MANCH_T::STS: RXEMPTY Position    */
#define MANCH_STS_RXEMPTY_Msk       (0x1ul << MANCH_STS_RXEMPTY_Pos)           /*!< MANCH_T::STS: RXEMPTY Mask        */

#define MANCH_STS_RXFULL_Pos        (11)                                       /*!< MANCH_T::STS: RXFULL Position     */
#define MANCH_STS_RXFULL_Msk        (0x1ul << MANCH_STS_RXFULL_Pos)            /*!< MANCH_T::STS: RXFULL Mask         */

#define MANCH_STS_MTXEMPTY_Pos      (14)                                       /*!< MANCH_T::STS: MTXEMPTY Position    */
#define MANCH_STS_MTXEMPTY_Msk      (0x1ul << MANCH_STS_MTXEMPTY_Pos)          /*!< MANCH_T::STS: MTXEMPTY Mask        */

#define MANCH_STS_MTXFULL_Pos       (15)                                       /*!< MANCH_T::STS: MTXFULL Position     */
#define MANCH_STS_MTXFULL_Msk       (0x1ul << MANCH_STS_MTXFULL_Pos)           /*!< MANCH_T::STS: MTXFULL Mask         */

#define MANCH_STS_RXCNT_Pos         (16)                                       /*!< MANCH_T::STS: RXCNT Position     */
#define MANCH_STS_RXCNT_Msk         (0xfful << MANCH_STS_RXCNT_Pos)            /*!< MANCH_T::STS: RXCNT Mask         */

#define MANCH_STS_RXBUSY_Pos        (31)                                       /*!< MANCH_T::STS: RXBUSY Position     */
#define MANCH_STS_RXBUSY_Msk        (0x1ul << MANCH_STS_RXBUSY_Pos)            /*!< MANCH_T::STS: RXBUSY Mask         */

#define MANCH_BITCNT_TBITNUM_Pos    (0)                                        /*!< MANCH_T::BITCNT: TBITNUM Position */
#define MANCH_BITCNT_TBITNUM_Msk    (0xfful << MANCH_BITCNT_TBITNUM_Pos)       /*!< MANCH_T::BITCNT: TBITNUM Mask     */

#define MANCH_BITCNT_RBITNUM_Pos    (8)                                        /*!< MANCH_T::BITCNT: RBITNUM Position */
#define MANCH_BITCNT_RBITNUM_Msk    (0xfful << MANCH_BITCNT_RBITNUM_Pos)       /*!< MANCH_T::BITCNT: RBITNUM Mask     */

#define MANCH_BITCNT_CRBITNUM_Pos   (16)                                       /*!< MANCH_T::BITCNT: CRBITNUM Position */
#define MANCH_BITCNT_CRBITNUM_Msk   (0xfful << MANCH_BITCNT_CRBITNUM_Pos)      /*!< MANCH_T::BITCNT: CRBITNUM Mask     */

#define MANCH_BITCNT_RBERRTN_Pos    (24)                                       /*!< MANCH_T::BITCNT: RBERRTN Position */
#define MANCH_BITCNT_RBERRTN_Msk    (0x7ul << MANCH_BITCNT_RBERRTN_Pos)        /*!< MANCH_T::BITCNT: RBERRTN Mask     */

#define MANCH_TXDAT_TXDAT_Pos       (0)                                        /*!< MANCH_T::TXDAT: TXDAT Position    */
#define MANCH_TXDAT_TXDAT_Msk       (0xfful << MANCH_TXDAT_TXDAT_Pos)          /*!< MANCH_T::TXDAT: TXDAT Mask        */

#define MANCH_RXDAT_RXDAT_Pos       (0)                                        /*!< MANCH_T::RXDAT: RXDAT Position    */
#define MANCH_RXDAT_RXDAT_Msk       (0xfful << MANCH_RXDAT_RXDAT_Pos)          /*!< MANCH_T::RXDAT: RXDAT Mask        */

#define MANCH_MTXDAT_MTXDAT_Pos     (0)                                        /*!< MANCH_T::MTXDAT: MTXDAT Position*/
#define MANCH_MTXDAT_MTXDAT_Msk     (0xfffful << MANCH_MTXDAT_MTXDAT_Pos)      /*!< MANCH_T::MTXDAT: MTXDAT Mask    */

/**@}*/ /* MANCH_CONST */
/**@}*/ /* end of MANCH register group */
/**@}*/ /* end of REGISTER group */

#if defined ( __CC_ARM   )
#pragma no_anon_unions
#endif

#endif /* __MANCH_REG_H__ */
