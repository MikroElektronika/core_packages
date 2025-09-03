/*
 * Component description for SAFCOMM
 *
 * Copyright (c) 2023 Microchip Technology Inc. and its subsidiaries.
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

/* file generated from device description file (ATDF) version 2020-03-24T11:15:30Z */
#ifndef _0525SG12_SAFCOMM_COMPONENT_H_
#define _0525SG12_SAFCOMM_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR SAFCOMM                                      */
/* ************************************************************************** */

/* -------- SAFCOMM_COMM_MODE : (SAFCOMM Offset: 0x2B8) (R/W 32) This register contains one bit PREFETCH_EN that should be set to '1' during initialization, to enable Prefetch Mode operation in SAFS Mode. -------- */
#define SAFCOMM_COMM_MODE_RESETVALUE          _UINT32_(0x00)                                       /*  (SAFCOMM_COMM_MODE) This register contains one bit PREFETCH_EN that should be set to '1' during initialization, to enable Prefetch Mode operation in SAFS Mode.  Reset Value */

#define SAFCOMM_COMM_MODE_PREFETCH_EN_Pos     _UINT32_(0)                                          /* (SAFCOMM_COMM_MODE) 1= Allow Prefetching from Flash devices, and use the bits CS0_PREFETCH_OPT_EN and         CS1_PREFETCH_OPT_EN to select any additional optimization.         0= Do not perform Prefetches from Flash devices Position */
#define SAFCOMM_COMM_MODE_PREFETCH_EN_Msk     (_UINT32_(0x1) << SAFCOMM_COMM_MODE_PREFETCH_EN_Pos) /* (SAFCOMM_COMM_MODE) 1= Allow Prefetching from Flash devices, and use the bits CS0_PREFETCH_OPT_EN and         CS1_PREFETCH_OPT_EN to select any additional optimization.         0= Do not perform Prefetches from Flash devices Mask */
#define SAFCOMM_COMM_MODE_PREFETCH_EN(value)  (SAFCOMM_COMM_MODE_PREFETCH_EN_Msk & (_UINT32_(value) << SAFCOMM_COMM_MODE_PREFETCH_EN_Pos)) /* Assigment of value for PREFETCH_EN in the SAFCOMM_COMM_MODE register */
#define SAFCOMM_COMM_MODE_Msk                 _UINT32_(0x00000001)                                 /* (SAFCOMM_COMM_MODE) Register Mask  */


/** \brief SAFCOMM register offsets definitions */
#define SAFCOMM_COMM_MODE_REG_OFST     _UINT32_(0x2B8)     /* (SAFCOMM_COMM_MODE) This register contains one bit PREFETCH_EN that should be set to '1' during initialization, to enable Prefetch Mode operation in SAFS Mode. Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SAFCOMM register API structure */
typedef struct
{  /* This register contains one bit PREFETCH_EN that should be set to '1' during initialization, to        enable Prefetch Mode operation in SAFS Mode. Prefetch Mode allows overlapped anticipatory reading of        information from Flash during the eSPI delivery of previously-read data to the Host Chipset. If        enabled, Prefetching is invoked during consecutive Reads that are 64 bytes in length and from        consecutive 64-byte aligned Flash addresses. With roughly equal clock rates on eSPI and SPI, these        features together can approximately double the effective bandwidth of consecutive Flash reads        performed over eSPI.  In SAFS operation (SAF_MODE_ENABLE bit = 1) attempted accesses by EC firmware        to this register are blocked. */
  __I   uint8_t                        Reserved1[0x2B8];
  __IO  uint32_t                       SAFCOMM_COMM_MODE;  /**< Offset: 0x2B8 (R/W  32) This register contains one bit PREFETCH_EN that should be set to '1' during initialization, to enable Prefetch Mode operation in SAFS Mode. */
} safcomm_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _0525SG12_SAFCOMM_COMPONENT_H_ */
