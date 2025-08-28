/*
 * Component description for GCR
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
#ifndef _0525SG12_GCR_COMPONENT_H_
#define _0525SG12_GCR_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR GCR                                          */
/* ************************************************************************** */

/* -------- GCR_LDN : (GCR Offset: 0x07) (R/W 8) A write to this register selects the current logical device. This allows access to the control and configuration\n     registers for each logical device. Note: The Activate command operates only on the selected logical device. -------- */
#define GCR_LDN_RESETVALUE                    _UINT8_(0x00)                                        /*  (GCR_LDN) A write to this register selects the current logical device. This allows access to the control and configuration\n     registers for each logical device. Note: The Activate command operates only on the selected logical device.  Reset Value */

#define GCR_LDN_Msk                           _UINT8_(0x00)                                        /* (GCR_LDN) Register Mask  */


/* -------- GCR_DEV_REV : (GCR Offset: 0x1C) ( R/ 8) A read-only register which provides device revision information. -------- */
#define GCR_DEV_REV_RESETVALUE                _UINT8_(0x00)                                        /*  (GCR_DEV_REV) A read-only register which provides device revision information.  Reset Value */

#define GCR_DEV_REV_Msk                       _UINT8_(0x00)                                        /* (GCR_DEV_REV) Register Mask  */


/* -------- GCR_DEV_SUBID : (GCR Offset: 0x1D) ( R/ 8) A read-only register which provides device sub ID information. -------- */
#define GCR_DEV_SUBID_RESETVALUE              _UINT8_(0x24)                                        /*  (GCR_DEV_SUBID) A read-only register which provides device sub ID information.  Reset Value */

#define GCR_DEV_SUBID_Msk                     _UINT8_(0x00)                                        /* (GCR_DEV_SUBID) Register Mask  */


/* -------- GCR_DEV_ID : (GCR Offset: 0x1E) ( R/ 16) A read-only register which provides device identification. -------- */
#define GCR_DEV_ID_RESETVALUE                 _UINT16_(0x20)                                       /*  (GCR_DEV_ID) A read-only register which provides device identification.  Reset Value */

#define GCR_DEV_ID_Msk                        _UINT16_(0x0000)                                     /* (GCR_DEV_ID) Register Mask  */


/* -------- GCR_LEG_DEV_ID : (GCR Offset: 0x20) ( R/ 8) A read-only register which provides legacy device identification. -------- */
#define GCR_LEG_DEV_ID_RESETVALUE             _UINT8_(0xFE)                                        /*  (GCR_LEG_DEV_ID) A read-only register which provides legacy device identification.  Reset Value */

#define GCR_LEG_DEV_ID_Msk                    _UINT8_(0x00)                                        /* (GCR_LEG_DEV_ID) Register Mask  */


/* -------- GCR_LEG_DEV_REV : (GCR Offset: 0x21) ( R/ 8) A read-only register which provides legacy device revision information. -------- */
#define GCR_LEG_DEV_REV_RESETVALUE            _UINT8_(0xA0)                                        /*  (GCR_LEG_DEV_REV) A read-only register which provides legacy device revision information.  Reset Value */

#define GCR_LEG_DEV_REV_Msk                   _UINT8_(0x00)                                        /* (GCR_LEG_DEV_REV) Register Mask  */


/** \brief GCR register offsets definitions */
#define GCR_LDN_REG_OFST               _UINT32_(0x07)      /* (GCR_LDN) A write to this register selects the current logical device. This allows access to the control and configuration\n     registers for each logical device. Note: The Activate command operates only on the selected logical device. Offset */
#define GCR_DEV_REV_REG_OFST           _UINT32_(0x1C)      /* (GCR_DEV_REV) A read-only register which provides device revision information. Offset */
#define GCR_DEV_SUBID_REG_OFST         _UINT32_(0x1D)      /* (GCR_DEV_SUBID) A read-only register which provides device sub ID information. Offset */
#define GCR_DEV_ID_REG_OFST            _UINT32_(0x1E)      /* (GCR_DEV_ID) A read-only register which provides device identification. Offset */
#define GCR_LEG_DEV_ID_REG_OFST        _UINT32_(0x20)      /* (GCR_LEG_DEV_ID) A read-only register which provides legacy device identification. Offset */
#define GCR_LEG_DEV_REV_REG_OFST       _UINT32_(0x21)      /* (GCR_LEG_DEV_REV) A read-only register which provides legacy device revision information. Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief GCR register API structure */
typedef struct
{  /* The Logical Device Configuration registers support motherboard designs in\n        which the resources required by their components are known and assigned by the BIOS\n        at POST. */
  __I   uint8_t                        Reserved1[0x07];
  __IO  uint8_t                        GCR_LDN;            /**< Offset: 0x07 (R/W  8) A write to this register selects the current logical device. This allows access to the control and configuration\n     registers for each logical device. Note: The Activate command operates only on the selected logical device. */
  __I   uint8_t                        Reserved2[0x14];
  __I   uint8_t                        GCR_DEV_REV;        /**< Offset: 0x1C (R/   8) A read-only register which provides device revision information. */
  __I   uint8_t                        GCR_DEV_SUBID;      /**< Offset: 0x1D (R/   8) A read-only register which provides device sub ID information. */
  __I   uint16_t                       GCR_DEV_ID;         /**< Offset: 0x1E (R/   16) A read-only register which provides device identification. */
  __I   uint8_t                        GCR_LEG_DEV_ID;     /**< Offset: 0x20 (R/   8) A read-only register which provides legacy device identification. */
  __I   uint8_t                        GCR_LEG_DEV_REV;    /**< Offset: 0x21 (R/   8) A read-only register which provides legacy device revision information. */
} gcr_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _0525SG12_GCR_COMPONENT_H_ */
