/******************************************************************************
 * @file     dac.h
 * @version  V0.10
 * $Revision: 4 $
 * $Date: 20/06/10 10:53a $
 * @brief    M030G series DAC driver header file
 *
 * @note
 * SPDX-License-Identifier: Apache-2.0
 * Copyright (C) 2019 Nuvoton Technology Corp. All rights reserved.
 *
*****************************************************************************/
#ifndef __DAC_H__
#define __DAC_H__

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

/** @addtogroup DAC_Driver DAC Driver
  @{
*/


/** @addtogroup DAC_EXPORTED_CONSTANTS DAC Exported Constants
  @{
*/


/*---------------------------------------------------------------------------------------------------------*/
/*  DAC_CTL Constant Definitions                                                                            */
/*---------------------------------------------------------------------------------------------------------*/
#define DAC_CTL_LALIGN_RIGHT_ALIGN   (0UL<<DAC_CTL_LALIGN_Pos)   /*!< Right alignment. */
#define DAC_CTL_LALIGN_LEFT_ALIGN    (1UL<<DAC_CTL_LALIGN_Pos)   /*!< Left alignment */

#define DAC_WRITE_DAT_TRIGGER      (0UL)    /*!< Write DAC_DAT trigger */
#define DAC_LOW_LEVEL_TRIGGER      ((0UL<<DAC_CTL_ETRGSEL_Pos)|(1UL<<DAC_CTL_TRGSEL_Pos)|DAC_CTL_TRGEN_Msk)   /*!< STDAC pin low level trigger */
#define DAC_HIGH_LEVEL_TRIGGER     ((1UL<<DAC_CTL_ETRGSEL_Pos)|(1UL<<DAC_CTL_TRGSEL_Pos)|DAC_CTL_TRGEN_Msk)   /*!< STDAC pin high level trigger */
#define DAC_FALLING_EDGE_TRIGGER   ((2UL<<DAC_CTL_ETRGSEL_Pos)|(1UL<<DAC_CTL_TRGSEL_Pos)|DAC_CTL_TRGEN_Msk)   /*!< STDAC pin falling edge trigger */
#define DAC_RISING_EDGE_TRIGGER    ((3UL<<DAC_CTL_ETRGSEL_Pos)|(1UL<<DAC_CTL_TRGSEL_Pos)|DAC_CTL_TRGEN_Msk)   /*!< STDAC pin rising edge trigger */

#define DAC_SOFTWARE_TRIGGER       (0UL|DAC_CTL_TRGEN_Msk)                         /*!< Software trigger \hideinitializer */
#define DAC_TIMER0_TRIGGER         ((2UL<<DAC_CTL_TRGSEL_Pos)|DAC_CTL_TRGEN_Msk)   /*!< Timer 0 trigger \hideinitializer */
#define DAC_TIMER1_TRIGGER         ((3UL<<DAC_CTL_TRGSEL_Pos)|DAC_CTL_TRGEN_Msk)   /*!< Timer 1 trigger \hideinitializer */
#define DAC_TIMER2_TRIGGER         ((1UL<<DAC_CTL_TRGSEL_Pos)|DAC_CTL_TRGEN_Msk)   /*!< Timer 2 trigger \hideinitializer */
#define DAC_TIMER3_TRIGGER         ((4UL<<DAC_CTL_TRGSEL_Pos)|DAC_CTL_TRGEN_Msk)   /*!< Timer 3 trigger \hideinitializer */
#define DAC_TIMER4_TRIGGER         ((5UL<<DAC_CTL_TRGSEL_Pos)|DAC_CTL_TRGEN_Msk)   /*!< Timer 4 trigger \hideinitializer */
#define DAC_TIMER5_TRIGGER         ((7UL<<DAC_CTL_TRGSEL_Pos)|DAC_CTL_TRGEN_Msk)   /*!< Timer 5 trigger \hideinitializer */
#define DAC_BPWM1_TRIGGER          ((6UL<<DAC_CTL_TRGSEL_Pos)|DAC_CTL_TRGEN_Msk)   /*!< BPWM1 trigger \hideinitializer */

#define DAC_TRIGGER_MODE_DISABLE   (0UL<<DAC_CTL_TRGEN_Pos)   /*!< Trigger mode disable */
#define DAC_TRIGGER_MODE_ENABLE    (1UL<<DAC_CTL_TRGEN_Pos)   /*!< Trigger mode enable */

/*---------------------------------------------------------------------------------------------------------*/
/*  DAC_ADGCTL Constant Definitions                                                                            */
/*---------------------------------------------------------------------------------------------------------*/
#define DAC_AUTO_SINE_0SAMPLES     (0UL)    /*!< 0 sample per sine waveform in MANCH_TX carrier cycle \hideinitializer */
#define DAC_AUTO_SINE_8SAMPLES     (1UL)    /*!< 8 samples per sine waveform in MANCH_TX carrier cycle \hideinitializer */
#define DAC_AUTO_SINE_16SAMPLES    (2UL)    /*!< 16 samples per sine waveform in MANCH_TX carrier cycle \hideinitializer */
#define DAC_AUTO_SINE_32SAMPLES    (3UL)    /*!< 32 samples per sine waveform in MANCH_TX carrier cycle \hideinitializer */

/*@}*/ /* end of group DAC_EXPORTED_CONSTANTS */


/** @addtogroup DAC_EXPORTED_FUNCTIONS DAC Exported Functions
  @{
*/
/*---------------------------------------------------------------------------------------------------------*/
/*  DAC Macro Definitions                                                                                  */
/*---------------------------------------------------------------------------------------------------------*/

/**
  * @brief Start the D/A conversion.
  * @param[in] dac Base address of DAC module.
  * @return None
  * @details User writes SWTRG bit (DAC_SWTRG[0]) to generate one shot pulse and it is cleared to 0 by hardware automatically.
  */
#define DAC_START_CONV(dac) ((dac)->SWTRG = DAC_SWTRG_SWTRG_Msk)

/**
  * @brief Enable DAC data left-aligned.
  * @param[in] dac Base address of DAC module.
  * @return None
  * @details User has to load data into DAC_DAT[15:4] bits. DAC_DAT[31:16] and DAC_DAT[3:0] are ignored in DAC conversion.
  */
#define DAC_ENABLE_LEFT_ALIGN(dac) ((dac)->CTL |= DAC_CTL_LALIGN_Msk)

/**
  * @brief Enable DAC data right-aligned.
  * @param[in] dac Base address of DAC module.
  * @return None
  * @details User has to load data into DAC_DAT[11:0] bits, DAC_DAT[31:12] are ignored in DAC conversion.
  */
#define DAC_ENABLE_RIGHT_ALIGN(dac) ((dac)->CTL &= ~DAC_CTL_LALIGN_Msk)

/**
  * @brief Enable output voltage buffer.
  * @param[in] dac Base address of DAC module.
  * @return None
  * @details The DAC integrates a voltage output buffer that can be used to reduce output impedance and
  *         drive external loads directly without having to add an external operational amplifier.
  */
#define DAC_ENABLE_BYPASS_BUFFER(dac) ((dac)->CTL |= DAC_CTL_BYPASS_Msk)

/**
  * @brief Disable output voltage buffer.
  * @param[in] dac Base address of DAC module.
  * @return None
  * @details This macro is used to disable output voltage buffer.
  */
#define DAC_DISABLE_BYPASS_BUFFER(dac) ((dac)->CTL &= ~DAC_CTL_BYPASS_Msk)

/**
  * @brief Enable the interrupt.
  * @param[in] dac Base address of DAC module.
  * @param[in] u32Ch Not used in M030G Series DAC.
  * @return None
  * @details This macro is used to enable DAC interrupt.
  */
#define DAC_ENABLE_INT(dac, u32Ch) ((dac)->CTL |= DAC_CTL_DACIEN_Msk)

/**
  * @brief Disable the interrupt.
  * @param[in] dac Base address of DAC module.
  * @param[in] u32Ch Not used in M030G Series DAC.
  * @return None
  * @details This macro is used to disable DAC interrupt.
  */
#define DAC_DISABLE_INT(dac, u32Ch) ((dac)->CTL &= ~DAC_CTL_DACIEN_Msk)

/**
  * @brief Enable DMA under-run interrupt.
  * @param[in] dac Base address of DAC module.
  * @return None
  * @details This macro is used to enable DMA under-run interrupt.
  */
#define DAC_ENABLE_DMAUDR_INT(dac) ((dac)->CTL |= DAC_CTL_DMAURIEN_Msk)

/**
  * @brief Disable DMA under-run interrupt.
  * @param[in] dac Base address of DAC module.
  * @return None
  * @details This macro is used to disable DMA under-run interrupt.
  */
#define DAC_DISABLE_DMAUDR_INT(dac) ((dac)->CTL &= ~DAC_CTL_DMAURIEN_Msk)

/**
  * @brief Enable PDMA mode.
  * @param[in] dac Base address of DAC module.
  * @return None
  * @details DAC DMA request is generated when a hardware trigger event occurs while DMAEN (DAC_CTL[2]) is set.
  */
#define DAC_ENABLE_PDMA(dac) ((dac)->CTL |= DAC_CTL_DMAEN_Msk)

/**
  * @brief Disable PDMA mode.
  * @param[in] dac Base address of DAC module.
  * @return None
  * @details This macro is used to disable DMA mode.
  */
#define DAC_DISABLE_PDMA(dac) ((dac)->CTL &= ~DAC_CTL_DMAEN_Msk)

/**
  * @brief Write data for conversion.
  * @param[in] dac Base address of DAC module.
  * @param[in] u32Ch Not used in M030G Series DAC.
  * @param[in] u32Data Decides the data for conversion, valid range are between 0~0xFFF.
  * @return None
  * @details 12 bit left alignment: user has to load data into DAC_DAT[15:4] bits.
  *         12 bit right alignment: user has to load data into DAC_DAT[11:0] bits.
  */
#define DAC_WRITE_DATA(dac, u32Ch, u32Data) ((dac)->DAT = (u32Data))

/**
  * @brief Read DAC 12-bit holding data.
  * @param[in] dac Base address of DAC module.
  * @param[in] u32Ch Not used in M030G Series DAC.
  * @return Return DAC 12-bit holding data.
  * @details This macro is used to read DAC_DAT register.
  */
#define DAC_READ_DATA(dac, u32Ch) ((dac)->DAT)

/**
  * @brief Get the busy state of DAC.
  * @param[in] dac Base address of DAC module.
  * @param[in] u32Ch Not used in M030G Series DAC.
  * @retval 0 Idle state.
  * @retval 1 Busy state.
  * @details This macro is used to read BUSY bit (DAC_STATUS[8]) to get busy state.
  */
#define DAC_IS_BUSY(dac, u32Ch) (((dac)->STATUS & DAC_STATUS_BUSY_Msk) >> DAC_STATUS_BUSY_Pos)

/**
  * @brief Get the interrupt flag.
  * @param[in] dac Base address of DAC module.
  * @param[in] u32Ch Not used in M030G Series DAC.
  * @retval 0 DAC is in conversion state.
  * @retval 1 DAC conversion finish.
  * @details This macro is used to read FINISH bit (DAC_STATUS[0]) to get DAC conversion complete finish flag.
  */
#define DAC_GET_INT_FLAG(dac, u32Ch) ((dac)->STATUS & DAC_STATUS_FINISH_Msk)

/**
  * @brief Get the DMA under-run flag.
  * @param[in] dac Base address of DAC module.
  * @retval 0 No DMA under-run error condition occurred.
  * @retval 1 DMA under-run error condition occurred.
  * @details This macro is used to read DMAUDR bit (DAC_STATUS[1]) to get DMA under-run state.
  */
#define DAC_GET_DMAUDR_FLAG(dac) (((dac)->STATUS & DAC_STATUS_DMAUDR_Msk) >> DAC_STATUS_DMAUDR_Pos)

/**
  * @brief This macro clear the interrupt status bit.
  * @param[in] dac Base address of DAC module.
  * @param[in] u32Ch Not used in M030G Series DAC.
  * @return None
  * @details User writes FINISH bit (DAC_STATUS[0]) to clear DAC conversion complete finish flag.
  */
#define DAC_CLR_INT_FLAG(dac, u32Ch) ((dac)->STATUS = DAC_STATUS_FINISH_Msk)

/**
  * @brief This macro clear the  DMA under-run flag.
  * @param[in] dac Base address of DAC module.
  * @return None
  * @details User writes DMAUDR bit (DAC_STATUS[1]) to clear DMA under-run flag.
  */
#define DAC_CLR_DMAUDR_FLAG(dac) ((dac)->STATUS = DAC_STATUS_DMAUDR_Msk)


/**
  * @brief Enable DAC group mode
  * @param[in] dac The pointer of the specified DAC module.
  * @return None
  * @note Only DAC0 has this control bit.
  * \hideinitializer
  */
#define DAC_ENABLE_GROUP_MODE(dac) ((dac)->CTL |= DAC_CTL_GRPMODE_Msk)

/**
  * @brief Disable DAC group mode
  * @param[in] dac The pointer of the specified DAC module.
  * @return None
  * @note Only DAC0 has this control bit.
  * \hideinitializer
  */
#define DAC_DISABLE_GROUP_MODE(dac) ((dac)->CTL &= ~DAC_CTL_GRPMODE_Msk)

/**
  * @brief      Enable DAC reset retention
  * @param[in]  dac     The pointer of the specified DAC module.
  * @return     None
  * @details    DAC controller registers only reset by POR, LVR, BOD and Lockup reset sources, but not
  *             NRESET, WDT, CHIP and MCU reset sources.
  * @note       This mode is write protected. Refer to the SYS_REGLCTL register.
  * @note       Only DAC0 has this control bit.
  * \hideinitializer
  */
#define DAC_ENABLE_RESET_RETENTION(dac) ((dac)->CTL |= DAC_CTL_RETEN_Msk)

/**
  * @brief      Disable DAC reset retention
  * @param[in]  dac     The pointer of the specified DAC module.
  * @return     None
  * @details    DAC controller registers reset by POR, NRESET, WDT, LVR, BOD, Lockup, CHIP and MCU
  *             reset sources..
  * @note       This mode is write protected. Refer to the SYS_REGLCTL register.
  * @note       Only DAC0 has this control bit.
  * \hideinitializer
  */
#define DAC_DISABLE_RESET_RETENTION(dac) ((dac)->CTL &= ~DAC_CTL_RETEN_Msk)

/**
  * @brief      Enable DAC auto generate sine waveform
  * @param[in]  dac     The pointer of the specified DAC module.
  * @return     None
  * @details    DAC0 will generate sine waveform per MANCH_TXD carrier cycle.
  * @note       Only DAC0 has this control bit.
  * \hideinitializer
  */
#define DAC_ENABLE_AUTO_SINE(dac) ((dac)->ADGCTL |= DAC_ADGCTL_AUTOEN_Msk)

/**
  * @brief      Disable DAC auto generate sine waveform
  * @param[in]  dac     The pointer of the specified DAC module.
  * @return     None
  * @details    DAC0 will not generate sine waveform per MANCH_TXD carrier cycle.
  * @note       Only DAC0 has this control bit.
  * \hideinitializer
  */
#define DAC_DISABLE_AUTO_SINE(dac) ((dac)->ADGCTL &= ~DAC_ADGCTL_AUTOEN_Msk)

/**
  * @brief      Select MANCH_TX high to generate sine waveform
  * @param[in]  dac     The pointer of the specified DAC module.
  * @return     None
  * @details    DAC will generate sine waveform while MANCH_TXD is in high level.
  * @note       Only DAC0 has this control bit.
  * \hideinitializer
  */
#define DAC_AUTO_SINE_MANCH_TX_HIGH(dac) ((dac)->ADGCTL &= ~DAC_ADGCTL_CPOSEL_Msk)

/**
  * @brief      Select MANCH_TX low to generate sine waveform
  * @param[in]  dac     The pointer of the specified DAC module.
  * @return     None
  * @details    DAC will generate sine waveform while MANCH_TXD is in low level.
  * @note       Only DAC0 has this control bit.
  * \hideinitializer
  */
#define DAC_AUTO_SINE_MANCH_TX_LOW(dac) ((dac)->ADGCTL |= DAC_ADGCTL_CPOSEL_Msk)

/**
  * @brief      Set settle time directly
  * @param[in]  dac     The pointer of the specified DAC module.
  * @param[in]  u32SettleTime Settle time
  * @return     None
  * @note       Don't more than 10-bit width
  * \hideinitializer
  */
#define DAC_SET_SETTLE_TIME(dac, u32SettleTime) ((dac)->TCTL = (u32SettleTime-1))


void DAC_Open(DAC_T *dac, uint32_t u32Ch, uint32_t u32TrgSrc);
void DAC_Close(DAC_T *dac, uint32_t u32Ch);
float DAC_SetDelayTime(DAC_T *dac, uint32_t u16Delay);
void DAC_SetAutoSineSampleNum(DAC_T *dac, uint32_t u32SampleNum);
void DAC_SetAutoSineSampleContent(DAC_T *dac, uint16_t *pu32SampleBase, uint32_t u32SampleNum);
void DAC_SetAutoSineFreq(DAC_T *dac, uint32_t u32SineFreq);


/*@}*/ /* end of group DAC_EXPORTED_FUNCTIONS */

/*@}*/ /* end of group DAC_Driver */

/*@}*/ /* end of group Standard_Driver */

#ifdef __cplusplus
}
#endif

#endif //__DAC_H__

/*** (C) COPYRIGHT 2019 Nuvoton Technology Corp. ***/
