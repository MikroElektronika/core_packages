/*
 * Component description for RFCTRL
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
#ifndef _SAMR21_RFCTRL_COMPONENT_H_
#define _SAMR21_RFCTRL_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR RFCTRL                                       */
/* ************************************************************************** */

/* -------- RFCTRL_FECFG : (RFCTRL Offset: 0x00) (R/W 16) Front-end control bus configuration -------- */
#define RFCTRL_FECFG_RESETVALUE               _UINT16_(0x00)                                       /*  (RFCTRL_FECFG) Front-end control bus configuration  Reset Value */

#define RFCTRL_FECFG_F0CFG_Pos                _UINT16_(0)                                          /* (RFCTRL_FECFG) Front-end control signal 0 configuration Position */
#define RFCTRL_FECFG_F0CFG_Msk                (_UINT16_(0x3) << RFCTRL_FECFG_F0CFG_Pos)            /* (RFCTRL_FECFG) Front-end control signal 0 configuration Mask */
#define RFCTRL_FECFG_F0CFG(value)             (RFCTRL_FECFG_F0CFG_Msk & (_UINT16_(value) << RFCTRL_FECFG_F0CFG_Pos)) /* Assigment of value for F0CFG in the RFCTRL_FECFG register */
#define RFCTRL_FECFG_F1CFG_Pos                _UINT16_(2)                                          /* (RFCTRL_FECFG) Front-end control signal 1 configuration Position */
#define RFCTRL_FECFG_F1CFG_Msk                (_UINT16_(0x3) << RFCTRL_FECFG_F1CFG_Pos)            /* (RFCTRL_FECFG) Front-end control signal 1 configuration Mask */
#define RFCTRL_FECFG_F1CFG(value)             (RFCTRL_FECFG_F1CFG_Msk & (_UINT16_(value) << RFCTRL_FECFG_F1CFG_Pos)) /* Assigment of value for F1CFG in the RFCTRL_FECFG register */
#define RFCTRL_FECFG_F2CFG_Pos                _UINT16_(4)                                          /* (RFCTRL_FECFG) Front-end control signal 2 configuration Position */
#define RFCTRL_FECFG_F2CFG_Msk                (_UINT16_(0x3) << RFCTRL_FECFG_F2CFG_Pos)            /* (RFCTRL_FECFG) Front-end control signal 2 configuration Mask */
#define RFCTRL_FECFG_F2CFG(value)             (RFCTRL_FECFG_F2CFG_Msk & (_UINT16_(value) << RFCTRL_FECFG_F2CFG_Pos)) /* Assigment of value for F2CFG in the RFCTRL_FECFG register */
#define RFCTRL_FECFG_F3CFG_Pos                _UINT16_(6)                                          /* (RFCTRL_FECFG) Front-end control signal 3 configuration Position */
#define RFCTRL_FECFG_F3CFG_Msk                (_UINT16_(0x3) << RFCTRL_FECFG_F3CFG_Pos)            /* (RFCTRL_FECFG) Front-end control signal 3 configuration Mask */
#define RFCTRL_FECFG_F3CFG(value)             (RFCTRL_FECFG_F3CFG_Msk & (_UINT16_(value) << RFCTRL_FECFG_F3CFG_Pos)) /* Assigment of value for F3CFG in the RFCTRL_FECFG register */
#define RFCTRL_FECFG_F4CFG_Pos                _UINT16_(8)                                          /* (RFCTRL_FECFG) Front-end control signal 4 configuration Position */
#define RFCTRL_FECFG_F4CFG_Msk                (_UINT16_(0x3) << RFCTRL_FECFG_F4CFG_Pos)            /* (RFCTRL_FECFG) Front-end control signal 4 configuration Mask */
#define RFCTRL_FECFG_F4CFG(value)             (RFCTRL_FECFG_F4CFG_Msk & (_UINT16_(value) << RFCTRL_FECFG_F4CFG_Pos)) /* Assigment of value for F4CFG in the RFCTRL_FECFG register */
#define RFCTRL_FECFG_F5CFG_Pos                _UINT16_(10)                                         /* (RFCTRL_FECFG) Front-end control signal 5 configuration Position */
#define RFCTRL_FECFG_F5CFG_Msk                (_UINT16_(0x3) << RFCTRL_FECFG_F5CFG_Pos)            /* (RFCTRL_FECFG) Front-end control signal 5 configuration Mask */
#define RFCTRL_FECFG_F5CFG(value)             (RFCTRL_FECFG_F5CFG_Msk & (_UINT16_(value) << RFCTRL_FECFG_F5CFG_Pos)) /* Assigment of value for F5CFG in the RFCTRL_FECFG register */
#define RFCTRL_FECFG_Msk                      _UINT16_(0x0FFF)                                     /* (RFCTRL_FECFG) Register Mask  */


/** \brief RFCTRL register offsets definitions */
#define RFCTRL_FECFG_REG_OFST          _UINT32_(0x00)      /* (RFCTRL_FECFG) Front-end control bus configuration Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief RFCTRL register API structure */
typedef struct
{  /* RF233 control module */
  __IO  uint16_t                       RFCTRL_FECFG;       /**< Offset: 0x00 (R/W  16) Front-end control bus configuration */
} rfctrl_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMR21_RFCTRL_COMPONENT_H_ */
