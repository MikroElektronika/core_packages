/******************************************************************************
 * @file     manch.h
 * @version  V1.00
 * $Revision: 1 $
 * $Date: 20/12/14 3:51p $
 * @brief    M031G series Manchester driver header file
 *
 * @note
 * SPDX-License-Identifier: Apache-2.0
 * Copyright (C) 2020 Nuvoton Technology Corp. All rights reserved.
 *
*****************************************************************************/
#ifndef __MANCH_H__
#define __MANCH_H__

/*---------------------------------------------------------------------------------------------------------*/
/* Include related headers                                                                                 */
/*---------------------------------------------------------------------------------------------------------*/

#ifdef __cplusplus
extern "C"
{
#endif


/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup MANCH_Driver MANCH Driver
  @{
*/


/** @addtogroup MANCH_EXPORTED_CONSTANTS MANCH Exported Constants
  @{
*/

/*---------------------------------------------------------------------------------------------------------*/
/*  MANCH Mode Selection Definitions                                                                       */
/*---------------------------------------------------------------------------------------------------------*/
#define MANCH_NONE             0x00000000UL             /*!<MANCH No Manchester Mode selected \hideinitializer */
#define MANCH_MODE1            0x00000001UL             /*!<MANCH Manchester Mode 1 selected \hideinitializer */
#define MANCH_MODE2            0x00000002UL             /*!<MANCH Manchester Mode 2 selected \hideinitializer */
#define MANCH_MODE_OTHER       0x00000003UL             /*!<MANCH Manchester Other Mode selected \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  MANCH Deglitch Width Definitions                                                                       */
/*---------------------------------------------------------------------------------------------------------*/
#define MANCH_DEGLITCH_DIS      0x00000000UL            /*!<MANCH Deglitch Disabled  \hideinitializer */
#define MANCH_DEGLITCH_025      0x00000001UL            /*!<MANCH Deglitch Width 0.25 uS  \hideinitializer */
#define MANCH_DEGLITCH_050      0x00000002UL            /*!<MANCH Deglitch Width 0.55 uS  \hideinitializer */
#define MANCH_DEGLITCH_075      0x00000003UL            /*!<MANCH Deglitch Width 0.75 uS  \hideinitializer */
#define MANCH_DEGLITCH_100      0x00000004UL            /*!<MANCH Deglitch Width 1.00 uS  \hideinitializer */
#define MANCH_DEGLITCH_125      0x00000005UL            /*!<MANCH Deglitch Width 1.25 uS  \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  MANCH MSB or LSB Sent Firstly Definitions                                                              */
/*---------------------------------------------------------------------------------------------------------*/
#define MANCH_MSB               0x00000000UL            /*!<MANCH MSB Sent Firstly  \hideinitializer */
#define MANCH_LSB               0x00000001UL            /*!<MANCH LSB Sent Firstly  \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  MANCH Bit Error Tolerance Definitions                                                                       */
/*---------------------------------------------------------------------------------------------------------*/
#define MANCH_BERRTN_1_4        0x00000000UL            /*!<MANCH One Quarter Bit Error Tolerance  \hideinitializer */
#define MANCH_BERRTN_1_8        0x00000001UL            /*!<MANCH One eighth Bit Error Tolerance  \hideinitializer */
#define MANCH_BERRTN_1_16       0x00000002UL            /*!<MANCH One sixteenth Bit Error Tolerance  \hideinitializer */
#define MANCH_BERRTN_1_32       0x00000003UL            /*!<MANCH One thirty-second Bit Error Tolerance  \hideinitializer */
#define MANCH_BERRTN_1_64       0x00000004UL            /*!<MANCH One sixty-fourth Bit Error Tolerance  \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  MANCH Bit Error Tolerance Definitions                                                                       */
/*---------------------------------------------------------------------------------------------------------*/
#define MANCH_RBITNUM_DEFAULT   0x00000064UL            /*!<MANCH RBITNUM default value \hideinitializer */
#define MANCH_TBITNUM_DEFAULT   0x00000064UL            /*!<MANCH TBITNUM default value \hideinitializer */

/*@}*/ /* end of group MANCH_EXPORTED_CONSTANTS */

/** @addtogroup MANCH_EXPORTED_FUNCTIONS MANCH Exported Functions
  @{
*/
/*---------------------------------------------------------------------------------------------------------*/
/*  MANCH Macro Definitions                                                                                  */
/*---------------------------------------------------------------------------------------------------------*/

/**
  * @brief      Manchester Thomas encode type
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @return     None
  * @details    Select Thomas standard for Manchester encoding.
  */
#define MANCH_ENCODE_THOMAS(manch) (manch->CTL &= ~MANCH_CTL_MECT_Msk)

/**
  * @brief      Manchester IEEE802.3 encode type
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @return     None
  * @details    Select IEEE802.3 standard for Manchester encoding
  */
#define MANCH_ENCODE_IEEE8023(manch) (manch->CTL |= MANCH_CTL_MECT_Msk)

/**
  * @brief      Manchester LSB first
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @return     None
  * @details    Set Manchester LSB first. In this mode, LSB bit is sent first per frame.
  */
#define MANCH_LSB_FIRST(manch) ((manch)->CTL |= MANCH_CTL_LSB_Msk)

/**
  * @brief      Manchester MSB first
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @return     None
  * @details    Set Manchester MSB first. In this mode, MSB bit is sent first per frame.
  */
#define MANCH_MSB_FIRST(manch) ((manch)->CTL &= ~MANCH_CTL_LSB_Msk)

/**
  * @brief      Manchester TX inverted
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @return     None
  * @details    Set Manchester TX inverted. In this mode, TX transmitted data is inverted.
  */
#define MANCH_TX_INVERTED(manch) ((manch)->CTL |= MANCH_CTL_TXINV_Msk)

/**
  * @brief      Manchester TX not inverted
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @return     None
  * @details    Set Manchester TX not inverted. In this mode, TX transmitted data is not inverted.
  */
#define MANCH_TX_NOT_INVERTED(manch) ((manch)->CTL &= ~MANCH_CTL_TXINV_Msk)

/**
  * @brief      Manchester RX inverted
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @return     None
  * @details    Set Manchester RX inverted. In this mode, RX received data is inverted.
  */
#define MANCH_RX_INVERTED(manch) ((manch)->CTL |= MANCH_CTL_RXINV_Msk)

/**
  * @brief      Manchester RX not inverted
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @return     None
  * @details    Set Manchester RX not inverted. In this mode, RX received data is not inverted.
  */
#define MANCH_RX_NOT_INVERTED(manch) ((manch)->CTL &= ~MANCH_CTL_RXINV_Msk)

/**
  * @brief      Enable RX current bit clock number auto-upload per frame
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @return     None
  * @details    In this mode, based on received data bit rate, RX current bit clock number will be auto updated per frame.
  */
#define MANCH_ENABLE_RX_UPLOAD_BITNUM_EACH_FRAME(manch) ((manch)->CTL |= MANCH_CTL_RBNULEN_Msk)

/**
  * @brief      Disable RX current bit clock number auto-upload per frame
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @return     None
  * @details    In this mode, even if received data bit rate is different from current RX setting,
  *             RX current bit clock number will not be auto updated per frame.
  */
#define MANCH_DISABLE_RX_UPLOAD_BITNUM_EACH_FRAME(manch) ((manch)->CTL &= ~MANCH_CTL_RBNULEN_Msk)

/**
  * @brief      Enable RX current bit clock number auto-upload per byte
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @return     None
  * @details    In this mode, based on received data bit rate, RX current bit clock number will be auto updated per byte.
  */
#define MANCH_ENABLE_RX_UPLOAD_BITNUM_EACH_BYTE(manch) ((manch)->CTL |= MANCH_CTL_CRBNULEN_Msk)

/**
  * @brief      Disable RX current bit clock number auto-upload per byte
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @return     None
  * @details    In this mode, even if received data bit rate is different from current RX setting,
  *             RX current bit clock number will not be auto updated per byte.
  */
#define MANCH_DISABLE_RX_UPLOAD_BITNUM_EACH_BYTE(manch) ((manch)->CTL &= ~MANCH_CTL_CRBNULEN_Msk)

/**
  * @brief      Enable TX to Timer
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @return     None
  * @details    Enable sending TX signal to internal Timer IP. Timer can base on received internal TX level to
  *             to trigger PDMA to generate desired DAC waveform for real application.
  */
#define MANCH_ENABLE_TX2TIMER(manch) ((manch)->CTL |= MANCH_CTL_MTXE2TEN_Msk)

/**
  * @brief      Disable TX to Timer
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @return     None
  * @details    Disable sending TX signal to internal Timer.
  */
#define MANCH_DISABLE_TX2TIMER(manch) ((manch)->CTL &= ~MANCH_CTL_MTXE2TEN_Msk)

/**
  * @brief      Enable TX
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @return     None
  * @details    Based on different Manchester mode settings, TX will begin sending TX FIFO content after enabling this mode.
  */
#define MANCH_ENABLE_TX(manch) ((manch)->CTL |= MANCH_CTL_MANCHTEN_Msk)

/**
  * @brief      Disable TX
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @return     None
  * @details    Disable TX and stop sending data.
  */
#define MANCH_DISABLE_TX(manch) ((manch)->CTL &= ~MANCH_CTL_MANCHTEN_Msk)

/**
  * @brief      Check whether TX is enabled or not
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     0   Disabled state
  * @retval     1   Enabled state
  * @details    Check whether TX is enabled or not.
  */
#define MANCH_IS_TX_ENABLED(manch) ((uint32_t)((manch)->CTL & MANCH_CTL_MANCHTEN_Msk)? 1 : 0)


/**
  * @brief      Clear TX FIFO
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     None
  * @details    Clear TX FIFO content.
  */
#define MANCH_CLR_TX_FIFO(manch) ((manch)->FIFOCTL |= MANCH_FIFOCTL_TXCLR_Msk)

/**
  * @brief      Not Clear TX FIFO
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     None
  * @details    Not Clear TX FIFO contents. Since TX FIFO clear bit will not return to 0 automatically,
  *             this function must be called after executing MANCH_CLR_TX_FIFO(manch) function.
  */
#define MANCH_NOTCLR_TX_FIFO(manch) ((manch)->FIFOCTL &= ~MANCH_FIFOCTL_TXCLR_Msk)

/**
  * @brief      Clear RX FIFO
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     None
  * @details    Clear RX FIFO content.
  */
#define MANCH_CLR_RX_FIFO(manch) ((manch)->FIFOCTL |= MANCH_FIFOCTL_RXCLR_Msk)

/**
  * @brief      Not Clear RX FIFO
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     None
  * @details    Not Clear RX FIFO contents. Since RX FIFO clear bit will not return to 0 automatically,
  *             this function must be called after executing MANCH_CLR_RX_FIFO(manch) function.
  */
#define MANCH_NOTCLR_RX_FIFO(manch) ((manch)->FIFOCTL &= ~MANCH_FIFOCTL_RXCLR_Msk)

/**
  * @brief      Read TX FIFO count
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     Return TX FIFO count
  * @details    Read TX FIFO internal byte number.
  */
#define MANCH_TX_FIFO_CNT(manch) ((uint32_t)(((manch)->FIFOCTL & MANCH_FIFOCTL_TXFCNT_Msk) >> MANCH_FIFOCTL_TXFCNT_Pos))

/**
  * @brief      Read RX FIFO count
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     Return RX FIFO count
  * @details    Read RX FIFO internal byte number.
  */
#define MANCH_RX_FIFO_CNT(manch) ((uint32_t)(((manch)->FIFOCTL & MANCH_FIFOCTL_RXFCNT_Msk) >> MANCH_FIFOCTL_RXFCNT_Pos))

/**
  * @brief      Read MTX FIFO count
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     Return MTX FIFO count
  * @details    Read MTX FIFO internal byte number.
  */
#define MANCH_MTX_FIFO_CNT(manch) ((uint32_t)(((manch)->FIFOCTL & MANCH_FIFOCTL_MTXFCNT_Msk) >> MANCH_FIFOCTL_MTXFCNT_Pos))

/**
  * @brief      Enable MTX DMA
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @return     None
  * @details    Enable MTX DMA bit for moving encoded data from MANCH IP to SRAM. In addition to enable MTX DMA bit,
  *             PDMA related settings must be set at the same time.
  */
#define MANCH_ENABLE_MTX_DMA(manch) ((manch)->DMAC |= MANCH_DMAC_MTXDMAEN_Msk)

/**
  * @brief      Disable MTX DMA
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @return     None
  * @details    Disable MTX DMA bit for moving encoded data from MANCH IP to SRAM.
  */
#define MANCH_DISABLE_MTX_DMA(manch) ((manch)->DMAC &= ~MANCH_DMAC_MTXDMAEN_Msk)

/**
  * @brief      Enable TX DMA
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @return     None
  * @details    Enable TX DMA bit to move raw data from SRAM to MANCH IP. In addition to enable TX DMA bit,
  *             PDMA related settings must be set at the same time.
  */
#define MANCH_ENABLE_TX_DMA(manch) ((manch)->DMAC |= MANCH_DMAC_TXDMAEN_Msk)

/**
  * @brief      Disable TX DMA
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @return     None
  * @details    Disable TX DMA bit for moving raw data from SRAM to MANCH IP (do encoding)
  */
#define MANCH_DISABLE_TX_DMA(manch) ((manch)->DMAC &= ~MANCH_DMAC_TXDMAEN_Msk)

/**
  * @brief      Enable RX DMA
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @return     None
  * @details    Enable RX DMA bit for receiving decoded data from MANCH IP to SRAM. In addition to enable TX DMA bit,
  *             PDMA related settings must be set at the same time.
  */
#define MANCH_ENABLE_RX_DMA(manch) ((manch)->DMAC |= MANCH_DMAC_RXDMAEN_Msk)

/**
  * @brief      Disable RX DMA
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @return     None
  * @details    Disable RX DMA bit for receiving decoded data from MANCH IP to SRAM
  */
#define MANCH_DISABLE_RX_DMA(manch) ((manch)->DMAC &= ~MANCH_DMAC_RXDMAEN_Msk)

/**
  * @brief      Enable TX frame done interrupt
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     None
  * @details    Enable TX frame done interrupt. After TX frame being transmitted, this interrupt will be invoked.
  */
#define MANCH_ENABLE_TXFRAME_DONE_INT(manch) ((manch)->INTEN |= MANCH_INTEN_TXDONEIE_Msk)

/**
  * @brief      Disable TX frame done interrupt
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     None
  * @details    Disable TX frame done interrupt.
  */
#define MANCH_DISABLE_TXFRAME_DONE_INT(manch) ((manch)->INTEN &= ~MANCH_INTEN_TXDONEIE_Msk)

/**
  * @brief      Enable RX frame done interrupt
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     None
  * @details    Enable RX frame done interrupt. After RX frame being received, this interrupt will be invoked.
  */
#define MANCH_ENABLE_RXFRAME_DONE_INT(manch) ((manch)->INTEN |= MANCH_INTEN_RXDONEIE_Msk)

/**
  * @brief      Disable RX frame done interrupt
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     None
  * @details    Disable RX frame done interrupt.
  */
#define MANCH_DISABLE_RXFRAME_DONE_INT(manch) ((manch)->INTEN &= ~MANCH_INTEN_RXDONEIE_Msk)

/**
  * @brief      Enable RX overflow interrupt
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     None
  * @details    Enable RX overflow interrupt. If RX FIFO is overrun during receiving, this interrupt will be invoked.
  */
#define MANCH_ENABLE_RX_OVER_INT(manch) ((manch)->INTEN |= MANCH_INTEN_RXOVERIE_Msk)

/**
  * @brief      Disable RX overflow interrupt
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     None
  * @details    Disable RX overflow interrupt.
  */
#define MANCH_DISABLE_RX_OVER_INT(manch) ((manch)->INTEN &= ~MANCH_INTEN_RXOVERIE_Msk)

/**
  * @brief      Enable RX bit error interrupt
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     None
  * @details    Enable RX bit error interrupt. If RX bit error is encountered during receiving, this interrupt will be invoked.
  */
#define MANCH_ENABLE_BIT_ERR_INT(manch) ((manch)->INTEN |= MANCH_INTEN_BITERRIE_Msk)

/**
  * @brief      Disable RX bit error interrupt
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     None
  * @details    Disable RX bit error interrupt.
  */
#define MANCH_DISABLE_BIT_ERR_INT(manch) ((manch)->INTEN &= ~MANCH_INTEN_BITERRIE_Msk)

/**
  * @brief      Enable Idle error interrupt
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     None
  * @details    Enable Idle error interrupt. If received Idle is wrong, this interrupt will be invoked.
  */
#define MANCH_ENABLE_IDLE_ERR_INT(manch) ((manch)->INTEN |= MANCH_INTEN_IDLERRIE_Msk)

/**
  * @brief      Disable Idle error interrupt
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     None
  * @details    Disable Idle error interrupt.
  */
#define MANCH_DISABLE_IDLE_ERR_INT(manch) ((manch)->INTEN &= ~MANCH_INTEN_IDLERRIE_Msk)

/**
  * @brief      Check TX frame done flag
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     0   Not-Done state
  * @retval     1   Done state
  * @details    Check whether TX frame to finish transmitting or not.
  */
#define MANCH_IS_TXFRAME_DONE(manch) ((uint32_t)((manch)->STS & MANCH_STS_TXDONE_Msk)? 1 : 0)

/**
  * @brief      Clear TX frame done flag
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     None
  * @details    Clear TX frame done flag in status register.
  */
#define MANCH_CLR_TXFRAME_DONE(manch) ((manch)->STS = MANCH_STS_TXDONE_Msk)

/**
  * @brief      Check RX frame done flag
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     0   Not-Done state
  * @retval     1   Done state
  * @details    Check whether RX frame to finish receiving or not.
  */
#define MANCH_IS_RXFRAME_DONE(manch) ((uint32_t)((manch)->STS & MANCH_STS_RXDONE_Msk)? 1 : 0)

/**
  * @brief      Clear RX frame done flag
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     None
  * @details    Clear RX frame done flag in status register.
  */
#define MANCH_CLR_RXFRAME_DONE(manch) ((manch)->STS = MANCH_STS_RXDONE_Msk)

/**
  * @brief      Check RX FIFO overflow flag
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     0   Not-Overflow state
  * @retval     1   Overflow state
  * @details    Check whether RX FIFO is overflow or not.
  */
#define MANCH_IS_RX_OVER(manch) ((uint32_t)((manch)->STS & MANCH_STS_RXOVER_Msk)? 1 : 0)

/**
  * @brief      Clear RX overflow flag
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     None
  * @details    Clear RX overflow flag in status register.
  */
#define MANCH_CLR_RX_OVER(manch) ((manch)->STS = MANCH_STS_RXOVER_Msk)

/**
  * @brief      Check RX bit error flag
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     0   Not-Error state
  * @retval     1   Error state
  * @details    Check whether RX bit error or not.
  */
#define MANCH_IS_BIT_ERR(manch) ((uint32_t)((manch)->STS & MANCH_STS_BITERR_Msk)? 1 : 0)

/**
  * @brief      Clear RX bit error flag
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     None
  * @details    Clear RX bit error flag in status register.
  */
#define MANCH_CLR_BIT_ERR(manch) ((manch)->STS = MANCH_STS_BITERR_Msk)

/**
  * @brief      Check RX Preamble number error flag
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     0   Not-Error state
  * @retval     1   Error state
  * @details    Check whether RX Preamble number error or not
  */
#define MANCH_IS_PRENUM_ERR(manch) ((uint32_t)((manch)->STS & MANCH_STS_PRENERR_Msk)? 1 : 0)

/**
  * @brief      Clear RX Preamble number error flag
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     None
  * @details    Clear RX bit error flag in status register.
  */
#define MANCH_CLR_PRENUM_ERR(manch) ((manch)->STS = MANCH_STS_PRENERR_Msk)

/**
  * @brief      Check TX FIFO underrun flag
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     0   Not-Error state
  * @retval     1   Error state
  * @details    Check whether TX FIFO underrun or not
  */
#define MANCH_IS_TX_UNDER(manch) ((uint32_t)((manch)->STS & MANCH_STS_TXUNDER_Msk)? 1 : 0)

/**
  * @brief      Clear TX FIFO underrun flag
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     None
  * @details    Clear TX FIFO underrun flag in status register.
  */
#define MANCH_CLR_TX_UNDER(manch) ((manch)->STS = MANCH_STS_TXUNDER_Msk)

/**
  * @brief      Check Idle error flag
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     0   Not-Error state
  * @retval     1   Error state
  * @details    Check whether Idle error or not.
  */
#define MANCH_IS_IDLE_ERR(manch) ((uint32_t)((manch)->STS & MANCH_STS_IDLERR_Msk)? 1 : 0)

/**
  * @brief      Clear Idle error flag
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     None
  * @details    Clear Idle error flag in status register.
  */
#define MANCH_CLR_IDLE_ERR(manch) ((manch)->STS = MANCH_STS_IDLERR_Msk)

/**
  * @brief      Check TX FIFO empty flag
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     0   Not-Empty state
  * @retval     1   Empty state
  * @details    Check whether TX FIFO is empty or not.
  */
#define MANCH_IS_TX_EMPTY(manch) ((uint32_t)((manch)->STS & MANCH_STS_TXEMPTY_Msk)? 1 : 0)

/**
  * @brief      Check TX FIFO full flag
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     0   Not-Full state
  * @retval     1   Full state
  * @details    Check whether TX FIFO is full or not.
  */
#define MANCH_IS_TX_FULL(manch) ((uint32_t)((manch)->STS & MANCH_STS_TXFULL_Msk)? 1 : 0)

/**
  * @brief      Check RX FIFO empty flag
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     0   Not-Empty state
  * @retval     1   Empty state
  * @details    Check whether RX FIFO is empty or not.
  */
#define MANCH_IS_RX_EMPTY(manch) ((uint32_t)((manch)->STS & MANCH_STS_RXEMPTY_Msk)? 1 : 0)

/**
  * @brief      Check RX FIFO full flag
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     0   Not-Full state
  * @retval     1   Full state
  * @details    Check whether RX FIFO is full or not.
  */
#define MANCH_IS_RX_FULL(manch) ((uint32_t)((manch)->STS & MANCH_STS_RXFULL_Msk)? 1 : 0)

/**
  * @brief      Check MTX FIFO empty flag
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     0   Not-Empty state
  * @retval     1   Empty state
  * @details    Check whether MTX FIFO is empty or not.
  */
#define MANCH_IS_MTX_EMPTY(manch) ((uint32_t)((manch)->STS & MANCH_STS_MTXEMPTY_Msk)? 1 : 0)

/**
  * @brief      Check MTX FIFO flag
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     0   Not-Full state
  * @retval     1   Full state
  * @details    Check whether MTX FIFO is full or not.
  */
#define MANCH_IS_MTX_FULL(manch) ((uint32_t)((manch)->STS & MANCH_STS_MTXFULL_Msk)? 1 : 0)

/**
  * @brief      Get RX byte count
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     State
  * @details    Get RX byte count in last received frame.
  */
#define MANCH_RX_CNT(manch) ((uint32_t)(((manch)->STS & MANCH_STS_RXCNT_Msk) >> MANCH_STS_RXCNT_Pos))

/**
  * @brief      Check RX busy flag
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     0   Not-Busy state
  * @retval     1   Busy state
  * @details    Check whether RX is busy or not.
  */
#define MANCH_IS_RX_BUSY(manch) ((uint32_t)((manch)->STS & MANCH_STS_RXBUSY_Msk)? 1 : 0)

/**
  * @brief      Get Status register
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     State
  * @details    Get Status register content.
  */
#define MANCH_GET_STATUS(manch) ((uint32_t)(manch)->STS)

/**
  * @brief      Clear Status register
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @retval     None
  * @details    Other than RX_BUSY/RX_EMPTY/TX_FULL/TX_EMPTY/MTX_FULL/MTX_EMPTY flags,
  *             this function will clear all flags in status registers.
  */
#define MANCH_CLR_STATUS(manch) ((manch)->STS |= MANCH->STS)

/**
  * @brief      Write TX data
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @param[in]  u32Data TX data
  * @retval     None
  * @details    Write data to TX FIFO.
  */
#define MANCH_WRITE_TX(manch, u32Data) ((manch)->TXDAT = (u32Data))

/**
  * @brief      Read RX data
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @return     The value read from RX FIFO.
  * @details    This function will return a value read from RX FIFO.
  */
#define MANCH_READ_RX(manch) ((manch)->RXDAT)

/**
  * @brief      Read MTX
  * @param[in]  manch   The pointer of the specified MANCH module.
  * @return     Read TX encoded data from MTX FIFO.
  * @details    This function will return an encoded TX data from MTX FIFO.
  */
#define MANCH_READ_MTX(manch) ((manch)->MTXDAT)

/*---------------------------------------------------------------------------------------------------------*/
/* Define MANCH function prototype                                                                          */
/*----------------------------------------------------------------------------------------------------------*/
uint32_t MANCH_Open(MANCH_T *manch, uint32_t u32BusFreq);
void MANCH_SetBitClockDiv(MANCH_T *manch, uint32_t u32ClkDiv);
uint32_t MANCH_GetBitClockDiv(MANCH_T *manch);
void MANCH_SetDegClockDiv(MANCH_T *manch, uint32_t u32ClkDiv);
uint32_t MANCH_GetDegClockDiv(MANCH_T *manch);
void MANCH_SetDegWidth(MANCH_T *manch, uint32_t u32DegWidth);
uint32_t MANCH_GetDegWidth(MANCH_T *manch);
void MANCH_SetPreamble(MANCH_T *manch, uint32_t u32Preamble);
void MANCH_SetPreambleNum(MANCH_T *manch, uint32_t u32PreambleNum);
void MANCH_SetIdle(MANCH_T *manch, uint32_t u32Idle);
void MANCH_SetFrameNum(MANCH_T *manch, uint32_t u32FrameNum);
void MANCH_SetMode(MANCH_T *manch, uint32_t u32Mode);
void MANCH_SetTXBitNum(MANCH_T *manch, uint32_t u32TXBitNum);
uint32_t MANCH_GetTXBitNum(MANCH_T *manch);
void MANCH_SetRXBitNum(MANCH_T *manch, uint32_t u32RXBitNum);
uint32_t MANCH_GetRXBitNum(MANCH_T *manch);
uint32_t MANCH_GetCurrentRXBitNum(MANCH_T *manch);
void MANCH_SetRXBitTolNum(MANCH_T *manch, uint32_t u32RXBitErrTolNum);
uint32_t MANCH_GetRXBitTolNum(MANCH_T *manch);


/*@}*/ /* end of group MANCH_EXPORTED_FUNCTIONS */

/*@}*/ /* end of group MANCH_Driver */

/*@}*/ /* end of group Standard_Driver */

#ifdef __cplusplus
}
#endif

#endif //__MANCH_H__

/*** (C) COPYRIGHT 2020 Nuvoton Technology Corp. ***/
