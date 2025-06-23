/**************************************************************************//**
 * @file     CIR.h
 * @version  V1.0
 * @brief    M471 Series CIR Driver Header File
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2020 Nuvoton Technology Corp. All rights reserved.
 ******************************************************************************/
#ifndef __CIR_H__
#define __CIR_H__

#ifdef __cplusplus
extern "C"
{
#endif


/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup CIR_Driver CIR Driver
  @{
*/

/** @addtogroup CIR_EXPORTED_CONSTANTS CIR Exported Constants
  @{
*/

/* CIR Patterns */
#define CIR_HEADER_PAT                  (0)                                           /*!< Header Patern                                                          \hideinitializer */ 
#define CIR_DATA0_PAT                   (1)                                           /*!< Data0 Patern                                                           \hideinitializer */
#define CIR_DATA1_PAT                   (2)                                           /*!< Data1 Patern                                                           \hideinitializer */
#define CIR_SPECIAL_PAT                 (3)                                           /*!< Special Patern                                                         \hideinitializer */
#define CIR_END_PAT                     (4)                                           /*!< End Patern                                                             \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  CTL constant definitions.                                                                              */
/*---------------------------------------------------------------------------------------------------------*/
/* CIR Input Pattern Type */
#define CIR_POSITIVE_EDGE               (0x00UL << CIR_CTL_PATTYP_Pos)                /*!< Setting Patern Format as Standardized Positive Edge Mode               \hideinitializer */
#define CIR_NEGATIVE_EDGE               (0x01UL << CIR_CTL_PATTYP_Pos)                /*!< Setting Patern Format as Standardized Negative Edge Mode               \hideinitializer */
#define CIR_FLEXIBLE_POSITIVE_EDGE      (0x02UL << CIR_CTL_PATTYP_Pos)                /*!< Setting Patern Format as Flexible Positive Edge Mode                   \hideinitializer */

#define CIR_NORMAL                      (0x00UL << CIR_CTL_POLINV_Pos)                /*!< Signal is normal polarity                                              \hideinitializer */
#define CIR_INVERSE                     (0x01UL << CIR_CTL_POLINV_Pos)                /*!< Signal is inversed                                                     \hideinitializer */

/* CIR Prescaler */
#define CIR_PRESCALER_1                 (0x00UL << CIR_CTL_PSCALER_Pos)               /*!< Setting Sampling Clock Prescaler as 1 Clock                            \hideinitializer */
#define CIR_PRESCALER_2                 (0x01UL << CIR_CTL_PSCALER_Pos)               /*!< Setting Sampling Clock Prescaler as 2 Clocks                           \hideinitializer */
#define CIR_PRESCALER_4                 (0x02UL << CIR_CTL_PSCALER_Pos)               /*!< Setting Sampling Clock Prescaler as 4 Clocks                           \hideinitializer */
#define CIR_PRESCALER_8                 (0x03UL << CIR_CTL_PSCALER_Pos)               /*!< Setting Sampling Clock Prescaler as 8 Clocks                           \hideinitializer */
#define CIR_PRESCALER_16                (0x04UL << CIR_CTL_PSCALER_Pos)               /*!< Setting Sampling Clock Prescaler as 16 Clocks                          \hideinitializer */
#define CIR_PRESCALER_32                (0x05UL << CIR_CTL_PSCALER_Pos)               /*!< Setting Sampling Clock Prescaler as 32 Clocks                          \hideinitializer */
#define CIR_PRESCALER_64                (0x06UL << CIR_CTL_PSCALER_Pos)               /*!< Setting Sampling Clock Prescaler as 64 Clocks                          \hideinitializer */
#define CIR_PRESCALER_128               (0x07UL << CIR_CTL_PSCALER_Pos)               /*!< Setting Sampling Clock Prescaler as 128 Clocks                         \hideinitializer */

/* CIR Debounce Sampling Clocks */
#define CIR_DEBOUNCE_DISABLE            (0x00UL << CIR_CTL_DBSEL_Pos)                 /*!< Setting Debounce Disable                                               \hideinitializer */
#define CIR_DEBOUNCE_TWO_SMPL           (0x01UL << CIR_CTL_DBSEL_Pos)                 /*!< Setting Debounce By Two Sampling Clocks                                \hideinitializer */
#define CIR_DEBOUNCE_THREE_SMPL         (0x02UL << CIR_CTL_DBSEL_Pos)                 /*!< Setting Debounce By Three Sampling Clocks                              \hideinitializer */
#define CIR_DEBOUNCE_FOUR_SMPL          (0x03UL << CIR_CTL_DBSEL_Pos)                 /*!< Setting Debounce By Four Sampling Clocks                               \hideinitializer */ 

/*---------------------------------------------------------------------------------------------------------*/
/* static inline functions                                                                                 */
/*---------------------------------------------------------------------------------------------------------*/
/* Declare these inline functions here to avoid MISRA C 2004 rule 8.1 error */
/**
  * @brief      Disable Error Bypass
  *
  * @param[in]  cir         The pointer of the specified CIR module. 
  *
  * @return     None
  *
  * @details    This receiving bits will be dropped as error occurrence.
  *
  * \hideinitializer
  */
static __INLINE void CIR_DisableErrorBypass(CIR_T *cir)  
{	
    cir->CTL &= ~CIR_CTL_ERRBYP_Msk;    
}

/**
  * @brief      Enable Error Bypass
  *
  * @param[in]  cir         The pointer of the specified CIR module. 
  *
  * @return     None
  *
  * @details    This receiving bits will keep into DATAx buffer as error occurrence.
  *
  * \hideinitializer
  */
static __INLINE void CIR_EnableErrorBypass(CIR_T *cir)  
{	
    cir->CTL |= CIR_CTL_ERRBYP_Msk;    
}

/**
  * @brief      Get the enabled interrupt mask
  *
  * @param[in]  cir         The pointer of the specified CIR module. 
  *
  * @return     The enabled interrupt mask
  *
  * \hideinitializer
  */
static __INLINE uint32_t CIR_GetEnabledIntMask(CIR_T* cir)  
{	
    return (cir->INTCTL);    
}

/**
  * @brief      Get current latched timer value
  *
  * @param[in]  timer       The pointer of the specified CIR module. 
  *
  * @return     The latched timer value between two rising edges or two falling edges continuous
  *
  * \hideinitializer
  */
static __INLINE uint32_t CIR_GetLatchedTimerValue(CIR_T *cir)  
{
    return (cir->LTVR & CIR_LTVR_LTV_Msk);
}

/**
  * @brief      Get data in CIR buffer
  *
  * @param[in]  timer       The pointer of the specified CIR module. 
  *
  * @return     None
  *
  * \hideinitializer
  */
static __INLINE void CIR_GetData(CIR_T *cir, uint32_t* u32Data0, uint32_t* u32Data1)  
{	
    *u32Data0 = cir->DATA0;
    *u32Data1 = cir->DATA1;
}
/*@}*/ /* end of group CIR_EXPORTED_CONSTANTS */

/** @addtogroup CIR_EXPORTED_FUNCTIONS CIR Exported Functions
  @{
*/
void CIR_Close(CIR_T *cir);
void CIR_Open(CIR_T *cir);
int32_t CIR_SetClockPrescaler(CIR_T *cir, uint32_t u32Prescaler);
void CIR_DisableInt(CIR_T *cir, uint32_t u32Mask);
void CIR_EnableInt(CIR_T *cir, uint32_t u32Mask);
uint32_t CIR_GetIntFlag(CIR_T *cir);
void CIR_ClearIntFlag(CIR_T *cir, uint32_t u32Mask);
void CIR_SetInputType(CIR_T *cir, uint32_t u32InputType, uint32_t u32Inverse);
void CIR_SetDebounce(CIR_T *cir, uint32_t u32DebounceSmplSel);
void CIR_EnableRecvBitCountMatch(CIR_T *cir, uint32_t u32RecvBitCount);
void CIR_DisableRecvBitCountMatch(CIR_T *cir);
void CIR_EnableDataCmpWakeup(CIR_T *cir, uint8_t u8ExpectedData, uint8_t u8CmpBitCount);
void CIR_DisableDataCmpWakeup(CIR_T *cir);
void CIR_SetPatternBoundary(CIR_T *cir, uint32_t u32Pattern, uint32_t u32HBound, uint32_t u32LBound);
void CIR_GetPatternBoundary(CIR_T *cir, uint32_t u32Pattern, uint32_t* pu32HBound, uint32_t* pu32LBound);
void CIR_ClearDataFieldBitCount(CIR_T *cir);

/*@}*/ /* end of group CIR_EXPORTED_FUNCTIONS */

/*@}*/ /* end of group CIR_Driver */

/*@}*/ /* end of group Standard_Driver */

#ifdef __cplusplus
}
#endif

#endif  /* __CIR_H__ */

/*** (C) COPYRIGHT 2020 Nuvoton Technology Corp. ***/
