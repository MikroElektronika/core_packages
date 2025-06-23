/**************************************************************************//**
 * @file     prng.h
 * @version  V1.00
 * @brief    M471 series PRNG driver header file
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2020 Nuvoton Technology Corp. All rights reserved.
 ******************************************************************************/
#ifndef __PRNG_H__
#define __PRNG_H__

#ifdef __cplusplus
extern "C"
{
#endif

/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup PRNG_Driver PRNG Driver
  @{
*/


/** @addtogroup PRNG_EXPORTED_CONSTANTS PRNG Exported Constants
  @{
*/

#define PRNG_KEY_SIZE_64        0UL     /*!< Select to generate 64-bit random key    \hideinitializer */
#define PRNG_KEY_SIZE_128       1UL     /*!< Select to generate 128-bit random key   \hideinitializer */
#define PRNG_KEY_SIZE_192       2UL     /*!< Select to generate 192-bit random key   \hideinitializer */
#define PRNG_KEY_SIZE_256       3UL     /*!< Select to generate 256-bit random key   \hideinitializer */

#define PRNG_SEED_CONT          0UL     /*!< PRNG using current seed                 \hideinitializer */
#define PRNG_SEED_RELOAD        1UL     /*!< PRNG reload new seed                    \hideinitializer */

/*@}*/ /* end of group PRNG_EXPORTED_CONSTANTS */


/** @addtogroup PRNG_EXPORTED_FUNCTIONS PRNG Exported Functions
  @{
*/

/**
  * @brief This macro enables PRNG interrupt.
  * @param prng     Specified PRNG module
  * @return None
  * \hideinitializer
  */
#define PRNG_ENABLE_INT(prng)       ((prng)->INTEN |= PRNG_INTEN_PRNGIEN_Msk)

/**
  * @brief This macro disables PRNG interrupt.
  * @param prng     Specified PRNG module
  * @return None
  * \hideinitializer
  */
#define PRNG_DISABLE_INT(prng)      ((prng)->INTEN &= ~PRNG_INTEN_PRNGIEN_Msk)

/**
  * @brief This macro gets PRNG interrupt flag.
  * @param prng     Specified PRNG module
  * @return PRNG interrupt flag.
  * \hideinitializer
  */
#define PRNG_GET_INT_FLAG(prng)     ((prng)->INTSTS & PRNG_INTSTS_PRNGIF_Msk)

/**
  * @brief This macro clears PRNG interrupt flag.
  * @param prng     Specified PRNG module
  * @return None
  * \hideinitializer
  */
#define PRNG_CLR_INT_FLAG(prng)     ((prng)->INTSTS = PRNG_INTSTS_PRNGIF_Msk)


void PRNG_Open(PRNG_T *prng, uint32_t u32KeySize, uint32_t u32SeedReload, uint32_t u32Seed);
void PRNG_Start(PRNG_T *prng);
void PRNG_Read(PRNG_T *prng, uint32_t u32RandKey[]);


/*@}*/ /* end of group PRNG_EXPORTED_FUNCTIONS */

/*@}*/ /* end of group PRNG_Driver */

/*@}*/ /* end of group Standard_Driver */

#ifdef __cplusplus
}
#endif

#endif  /* __PRNG_H__ */

/*** (C) COPYRIGHT 2020 Nuvoton Technology Corp. ***/

