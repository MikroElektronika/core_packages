/*
 * Component description for OTP
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
#ifndef _0525SG12_OTP_COMPONENT_H_
#define _0525SG12_OTP_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR OTP                                          */
/* ************************************************************************** */

/* -------- OTP_WRLOCK : (OTP Offset: 0x44) (R/W 32) This is the Write Lock Register.\n -------- */
#define OTP_WRLOCK_RESETVALUE                 _UINT32_(0x00)                                       /*  (OTP_WRLOCK) This is the Write Lock Register.\n  Reset Value */

#define OTP_WRLOCK_WL_Pos                     _UINT32_(0)                                          /* (OTP_WRLOCK) When any of the bits are set, the corresponding 32byte range in the OTP is not writable.\n Position */
#define OTP_WRLOCK_WL_Msk                     (_UINT32_(0xFFFFFFFF) << OTP_WRLOCK_WL_Pos)          /* (OTP_WRLOCK) When any of the bits are set, the corresponding 32byte range in the OTP is not writable.\n Mask */
#define OTP_WRLOCK_WL(value)                  (OTP_WRLOCK_WL_Msk & (_UINT32_(value) << OTP_WRLOCK_WL_Pos)) /* Assigment of value for WL in the OTP_WRLOCK register */
#define OTP_WRLOCK_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (OTP_WRLOCK) Register Mask  */


/* -------- OTP_RDLOCK : (OTP Offset: 0x48) (R/W 32) This is the Read Lock Register.\n -------- */
#define OTP_RDLOCK_RESETVALUE                 _UINT32_(0x00)                                       /*  (OTP_RDLOCK) This is the Read Lock Register.\n  Reset Value */

#define OTP_RDLOCK_RDLOCK_Pos                 _UINT32_(0)                                          /* (OTP_RDLOCK) When any of the bits are set, the corresponding 32byte range in the OTP is not readable.\n Position */
#define OTP_RDLOCK_RDLOCK_Msk                 (_UINT32_(0xFFFFFFFF) << OTP_RDLOCK_RDLOCK_Pos)      /* (OTP_RDLOCK) When any of the bits are set, the corresponding 32byte range in the OTP is not readable.\n Mask */
#define OTP_RDLOCK_RDLOCK(value)              (OTP_RDLOCK_RDLOCK_Msk & (_UINT32_(value) << OTP_RDLOCK_RDLOCK_Pos)) /* Assigment of value for RDLOCK in the OTP_RDLOCK register */
#define OTP_RDLOCK_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (OTP_RDLOCK) Register Mask  */


/** \brief OTP register offsets definitions */
#define OTP_WRLOCK_REG_OFST            _UINT32_(0x44)      /* (OTP_WRLOCK) This is the Write Lock Register.\n Offset */
#define OTP_RDLOCK_REG_OFST            _UINT32_(0x48)      /* (OTP_RDLOCK) This is the Read Lock Register.\n Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief OTP register API structure */
typedef struct
{  /* OTP Programming registers.\n */
  __I   uint8_t                        Reserved1[0x44];
  __IO  uint32_t                       OTP_WRLOCK;         /**< Offset: 0x44 (R/W  32) This is the Write Lock Register.\n */
  __IO  uint32_t                       OTP_RDLOCK;         /**< Offset: 0x48 (R/W  32) This is the Read Lock Register.\n */
} otp_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _0525SG12_OTP_COMPONENT_H_ */
