/******************************************************************************
 * @file     ts.h
 * @version  V1.00
 * $Revision: 3 $
 * $Date: 20/06/11 6:54p $
 * @brief    M030G series Temperature Sensor header file
 *
 * @note
 * SPDX-License-Identifier: Apache-2.0 
 * Copyright (C) 2016 Nuvoton Technology Corp. All rights reserved.
 *
*****************************************************************************/
#ifndef __TS_H__
#define __TS_H__

#ifdef __cplusplus
extern "C"
{
#endif


/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup TS_Driver TS Driver
  @{
*/

/** @addtogroup TS_EXPORTED_CONSTANTS TS Exported Constants
  @{
*/
#define TS_DEGREE_PER_LSB       625ul        /*!< 0.0625 degree per LSB \hideinitializer */

/*@}*/ /* end of group TS_EXPORTED_CONSTANTS */


/** @addtogroup TS_EXPORTED_FUNCTIONS TS Exported Functions
  @{
*/

/**
  * @brief      Enable TS function.
  * @param[in]  None
  * @return     None.
  * @details    Enable temperature sensor function.
  */
#define TS_ENABLE()     (SYS->TSCTL |= SYS_TSCTL_TSEN_Msk|SYS_TSCTL_TSBGEN_Msk)

/**
  * @brief      Disable TS function.
  * @param[in]  None
  * @return     None.
  * @details    Disable temperature sensor function.
  */
#define TS_DISABLE()    (SYS->TSCTL &= ~(SYS_TSCTL_TSEN_Msk|SYS_TSCTL_TSBGEN_Msk))

/**
  * @brief      Trigger to measure the current temperature.
  * @param[in]  None
  * @return     None.
  * @details    Begin measuring the temperature
  */
#define TS_TRIGGER()    (SYS->TSCTL |= SYS_TSCTL_TSST_Msk)

/**
  * @brief      Stop measuring the current temperature.
  * @param[in]  None
  * @return     None.
  * @details    Force to stop measuring the current temperature
  */
#define TS_STOP_TRIGGER()   (SYS->TSCTL &= ~SYS_TSCTL_TSST_Msk)

/**
  * @brief      Clear TS complete flag.
  * @param[in]  None
  * @return     None.
  * @details    Write 1 to TSEOC bit of SYS_TSDATA register to clear the complete flag.
  */
#define TS_CLR_COMPLETE_FLAG()  (SYS->TSDATA |= SYS_TSDATA_TSEOC_Msk)

/**
  * @brief      Get TS complete flag.
  * @param[in]  None.
  * @retval     0 TS measure not completely.
  * @retval     1 TS measure completely.
  * @details    Read SYS_TSDATA register to get the TSEOC flag.
  */
#define TS_GET_COMPLETE_FLAG()  ((SYS->TSDATA & SYS_TSDATA_TSEOC_Msk)>>SYS_TSDATA_TSEOC_Pos)

/**
  * @brief      Get TS measured data.
  * @param[in]  None.
  * @retval     TS measured data.
  * @details    Read SYS_TSDATA register to get the measured temperature.
  */
#define TS_GET_DATA()   ((SYS->TSDATA & SYS_TSDATA_TSDATA_Msk)>>SYS_TSDATA_TSDATA_Pos)

/**
  * @brief      Clear TS transfer interrupt flag.
  * @param[in]  None
  * @return     None.
  * @details    Write 1 to TSIF bit of SYS_TSCTL register to clear the interrupt flag.
  */
#define TS_CLR_INT_FLAG()   (SYS->TSCTL |= SYS_TSCTL_TSIF_Msk)

/**
  * @brief      Get TS transfer interrupt flag.
  * @param[in]  None.
  * @retval     0 TS INT not invoked.
  * @retval     1 TS INT invoked.
  * @details    Read SYS_TSCTL register to get the TSIF flag.
  */
#define TS_GET_INT_FLAG()   ((SYS->TSCTL & SYS_TSCTL_TSIF_Msk)>>SYS_TSCTL_TSIF_Pos)

/**
  * @brief      Enable TS interrupt function.
  * @param[in]  None
  * @return     None.
  * @details    Enable temperature sensor interrupt function.
  */
#define TS_ENABLE_INT()     (SYS->TSCTL |= SYS_TSCTL_TSIEN_Msk)

/**
  * @brief      Disable TS interrupt function.
  * @param[in]  None
  * @return     None.
  * @details    Disable temperature sensor interrupt function.
  */
#define TS_DISABLE_INT()    (SYS->TSCTL &= ~SYS_TSCTL_TSIEN_Msk)


/* Function prototype declaration */

/*@}*/ /* end of group TS_EXPORTED_FUNCTIONS */

/*@}*/ /* end of group TS_Driver */

/*@}*/ /* end of group Standard_Driver */

#ifdef __cplusplus
}
#endif

#endif //__TS_H__

/*** (C) COPYRIGHT 2017 Nuvoton Technology Corp. ***/
