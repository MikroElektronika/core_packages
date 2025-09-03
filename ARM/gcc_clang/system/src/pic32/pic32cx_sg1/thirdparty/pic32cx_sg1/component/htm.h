/*
 * Component description for HTM
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
#ifndef _0525SG12_HTM_COMPONENT_H_
#define _0525SG12_HTM_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR HTM                                          */
/* ************************************************************************** */

/* -------- HTM_PRLD : (HTM Offset: 0x00) (R/W 16) [15:0] This register is used to set the Hibernation Timer Preload value. -------- */
#define HTM_PRLD_RESETVALUE                   _UINT16_(0x00)                                       /*  (HTM_PRLD) [15:0] This register is used to set the Hibernation Timer Preload value.  Reset Value */

#define HTM_PRLD_Msk                          _UINT16_(0x0000)                                     /* (HTM_PRLD) Register Mask  */


/* -------- HTM_CTRL : (HTM Offset: 0x04) (R/W 16) HTimer Control Register -------- */
#define HTM_CTRL_RESETVALUE                   _UINT16_(0x00)                                       /*  (HTM_CTRL) HTimer Control Register  Reset Value */

#define HTM_CTRL_CTRL_Pos                     _UINT16_(0)                                          /* (HTM_CTRL) 1= The Hibernation Timer has a resolution of 0.125s per LSB, which yields a maximum time in excess of 2 hours.\n     0= The Hibernation Timer has a resolution of 30.5us per LSB, which yields a maximum time of ~2seconds. Position */
#define HTM_CTRL_CTRL_Msk                     (_UINT16_(0x1) << HTM_CTRL_CTRL_Pos)                 /* (HTM_CTRL) 1= The Hibernation Timer has a resolution of 0.125s per LSB, which yields a maximum time in excess of 2 hours.\n     0= The Hibernation Timer has a resolution of 30.5us per LSB, which yields a maximum time of ~2seconds. Mask */
#define HTM_CTRL_CTRL(value)                  (HTM_CTRL_CTRL_Msk & (_UINT16_(value) << HTM_CTRL_CTRL_Pos)) /* Assigment of value for CTRL in the HTM_CTRL register */
#define HTM_CTRL_Msk                          _UINT16_(0x0001)                                     /* (HTM_CTRL) Register Mask  */


/* -------- HTM_CNT : (HTM Offset: 0x08) ( R/ 16) The current state of the Hibernation Timer. -------- */
#define HTM_CNT_RESETVALUE                    _UINT16_(0x00)                                       /*  (HTM_CNT) The current state of the Hibernation Timer.  Reset Value */

#define HTM_CNT_Msk                           _UINT16_(0x0000)                                     /* (HTM_CNT) Register Mask  */


/** \brief HTM register offsets definitions */
#define HTM_PRLD_REG_OFST              _UINT32_(0x00)      /* (HTM_PRLD) [15:0] This register is used to set the Hibernation Timer Preload value. Offset */
#define HTM_CTRL_REG_OFST              _UINT32_(0x04)      /* (HTM_CTRL) HTimer Control Register Offset */
#define HTM_CNT_REG_OFST               _UINT32_(0x08)      /* (HTM_CNT) The current state of the Hibernation Timer. Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief HTM register API structure */
typedef struct
{  /* The Hibernation Timer can generate a wake event to the Embedded Controller (EC) when it is in a hibernation mode */
  __IO  uint16_t                       HTM_PRLD;           /**< Offset: 0x00 (R/W  16) [15:0] This register is used to set the Hibernation Timer Preload value. */
  __I   uint8_t                        Reserved1[0x02];
  __IO  uint16_t                       HTM_CTRL;           /**< Offset: 0x04 (R/W  16) HTimer Control Register */
  __I   uint8_t                        Reserved2[0x02];
  __I   uint16_t                       HTM_CNT;            /**< Offset: 0x08 (R/   16) The current state of the Hibernation Timer. */
} htm_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _0525SG12_HTM_COMPONENT_H_ */
