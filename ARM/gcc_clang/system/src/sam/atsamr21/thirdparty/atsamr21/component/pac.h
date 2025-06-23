/*
 * Component description for PAC
 *
 * Copyright (c) 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

/* file generated from device description file (ATDF) version 2020-11-26T16:56:39Z */
#ifndef _SAMR21_PAC_COMPONENT_H_
#define _SAMR21_PAC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR PAC                                          */
/* ************************************************************************** */

/* -------- PAC_WPCLR : (PAC Offset: 0x00) (R/W 32) Write Protection Clear -------- */
#define PAC_WPCLR_RESETVALUE                  _UINT32_(0x00)                                       /*  (PAC_WPCLR) Write Protection Clear  Reset Value */

#define PAC_WPCLR_WP_Pos                      _UINT32_(1)                                          /* (PAC_WPCLR) Write Protection Clear Position */
#define PAC_WPCLR_WP_Msk                      (_UINT32_(0x7FFFFFFF) << PAC_WPCLR_WP_Pos)           /* (PAC_WPCLR) Write Protection Clear Mask */
#define PAC_WPCLR_WP(value)                   (PAC_WPCLR_WP_Msk & (_UINT32_(value) << PAC_WPCLR_WP_Pos)) /* Assigment of value for WP in the PAC_WPCLR register */
#define PAC_WPCLR_Msk                         _UINT32_(0xFFFFFFFE)                                 /* (PAC_WPCLR) Register Mask  */


/* -------- PAC_WPSET : (PAC Offset: 0x04) (R/W 32) Write Protection Set -------- */
#define PAC_WPSET_RESETVALUE                  _UINT32_(0x00)                                       /*  (PAC_WPSET) Write Protection Set  Reset Value */

#define PAC_WPSET_WP_Pos                      _UINT32_(1)                                          /* (PAC_WPSET) Write Protection Set Position */
#define PAC_WPSET_WP_Msk                      (_UINT32_(0x7FFFFFFF) << PAC_WPSET_WP_Pos)           /* (PAC_WPSET) Write Protection Set Mask */
#define PAC_WPSET_WP(value)                   (PAC_WPSET_WP_Msk & (_UINT32_(value) << PAC_WPSET_WP_Pos)) /* Assigment of value for WP in the PAC_WPSET register */
#define PAC_WPSET_Msk                         _UINT32_(0xFFFFFFFE)                                 /* (PAC_WPSET) Register Mask  */


/** \brief PAC register offsets definitions */
#define PAC_WPCLR_REG_OFST             _UINT32_(0x00)      /* (PAC_WPCLR) Write Protection Clear Offset */
#define PAC_WPSET_REG_OFST             _UINT32_(0x04)      /* (PAC_WPSET) Write Protection Set Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief PAC register API structure */
typedef struct
{  /* Peripheral Access Controller */
  __IO  uint32_t                       PAC_WPCLR;          /**< Offset: 0x00 (R/W  32) Write Protection Clear */
  __IO  uint32_t                       PAC_WPSET;          /**< Offset: 0x04 (R/W  32) Write Protection Set */
} pac_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMR21_PAC_COMPONENT_H_ */
