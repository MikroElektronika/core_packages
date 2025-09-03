/*
 * Component description for PHOT
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
#ifndef _0525SG12_PHOT_COMPONENT_H_
#define _0525SG12_PHOT_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR PHOT                                         */
/* ************************************************************************** */

/* -------- PHOT_CUCNT : (PHOT Offset: 0x00) (R/W 32) PROCHOT Cumulative Count Register -------- */
#define PHOT_CUCNT_RESETVALUE                 _UINT32_(0x00)                                       /*  (PHOT_CUCNT) PROCHOT Cumulative Count Register  Reset Value */

#define PHOT_CUCNT_ACTIVE_Pos                 _UINT32_(0)                                          /* (PHOT_CUCNT) This register contains the current filtered PROCHOT Active Counter value. Position */
#define PHOT_CUCNT_ACTIVE_Msk                 (_UINT32_(0xFFFFFF) << PHOT_CUCNT_ACTIVE_Pos)        /* (PHOT_CUCNT) This register contains the current filtered PROCHOT Active Counter value. Mask */
#define PHOT_CUCNT_ACTIVE(value)              (PHOT_CUCNT_ACTIVE_Msk & (_UINT32_(value) << PHOT_CUCNT_ACTIVE_Pos)) /* Assigment of value for ACTIVE in the PHOT_CUCNT register */
#define PHOT_CUCNT_Msk                        _UINT32_(0x00FFFFFF)                                 /* (PHOT_CUCNT) Register Mask  */


/* -------- PHOT_DC_CNT : (PHOT Offset: 0x04) (R/W 32) PROCHOT Duty Cycle Count Register -------- */
#define PHOT_DC_CNT_RESETVALUE                _UINT32_(0x00)                                       /*  (PHOT_DC_CNT) PROCHOT Duty Cycle Count Register  Reset Value */

#define PHOT_DC_CNT_CNT_Pos                   _UINT32_(0)                                          /* (PHOT_DC_CNT) The contents of the PROCHOT Cumulative Count Register is copied into this register when the PROCHOT Duty Cycle Period Register transitions from 1 to 0. Position */
#define PHOT_DC_CNT_CNT_Msk                   (_UINT32_(0xFFFFFF) << PHOT_DC_CNT_CNT_Pos)          /* (PHOT_DC_CNT) The contents of the PROCHOT Cumulative Count Register is copied into this register when the PROCHOT Duty Cycle Period Register transitions from 1 to 0. Mask */
#define PHOT_DC_CNT_CNT(value)                (PHOT_DC_CNT_CNT_Msk & (_UINT32_(value) << PHOT_DC_CNT_CNT_Pos)) /* Assigment of value for CNT in the PHOT_DC_CNT register */
#define PHOT_DC_CNT_Msk                       _UINT32_(0x00FFFFFF)                                 /* (PHOT_DC_CNT) Register Mask  */


/* -------- PHOT_DC_PER : (PHOT Offset: 0x08) (R/W 32) PROCHOT Duty Cycle Period Register -------- */
#define PHOT_DC_PER_RESETVALUE                _UINT32_(0x00)                                       /*  (PHOT_DC_PER) PROCHOT Duty Cycle Period Register  Reset Value */

#define PHOT_DC_PER_PER_Pos                   _UINT32_(0)                                          /* (PHOT_DC_PER) This register defines the number of 100KHz periods required for a duty cycle measurement. Position */
#define PHOT_DC_PER_PER_Msk                   (_UINT32_(0xFFFFFF) << PHOT_DC_PER_PER_Pos)          /* (PHOT_DC_PER) This register defines the number of 100KHz periods required for a duty cycle measurement. Mask */
#define PHOT_DC_PER_PER(value)                (PHOT_DC_PER_PER_Msk & (_UINT32_(value) << PHOT_DC_PER_PER_Pos)) /* Assigment of value for PER in the PHOT_DC_PER register */
#define PHOT_DC_PER_Msk                       _UINT32_(0x00FFFFFF)                                 /* (PHOT_DC_PER) Register Mask  */


/* -------- PHOT_CTRL_STS : (PHOT Offset: 0x0C) (R/W 32) PROCHOT Status/Control Register -------- */
#define PHOT_CTRL_STS_RESETVALUE              _UINT32_(0x02)                                       /*  (PHOT_CTRL_STS) PROCHOT Status/Control Register  Reset Value */

#define PHOT_CTRL_STS_EN_Pos                  _UINT32_(0)                                          /* (PHOT_CTRL_STS) This bit enables the PROCHOT Monitor logic. Position */
#define PHOT_CTRL_STS_EN_Msk                  (_UINT32_(0x1) << PHOT_CTRL_STS_EN_Pos)              /* (PHOT_CTRL_STS) This bit enables the PROCHOT Monitor logic. Mask */
#define PHOT_CTRL_STS_EN(value)               (PHOT_CTRL_STS_EN_Msk & (_UINT32_(value) << PHOT_CTRL_STS_EN_Pos)) /* Assigment of value for EN in the PHOT_CTRL_STS register */
#define PHOT_CTRL_STS_PIN_Pos                 _UINT32_(1)                                          /* (PHOT_CTRL_STS) When PHOT_ENABLE is 1b, this bit reflects the state of the PROCHOT# Pin input. Position */
#define PHOT_CTRL_STS_PIN_Msk                 (_UINT32_(0x1) << PHOT_CTRL_STS_PIN_Pos)             /* (PHOT_CTRL_STS) When PHOT_ENABLE is 1b, this bit reflects the state of the PROCHOT# Pin input. Mask */
#define PHOT_CTRL_STS_PIN(value)              (PHOT_CTRL_STS_PIN_Msk & (_UINT32_(value) << PHOT_CTRL_STS_PIN_Pos)) /* Assigment of value for PIN in the PHOT_CTRL_STS register */
#define PHOT_CTRL_STS_ASSERT_EN_Pos           _UINT32_(2)                                          /* (PHOT_CTRL_STS) This bit determines whether or not an interrupt will be generated when the PHOT_ASSERT bit is set. Position */
#define PHOT_CTRL_STS_ASSERT_EN_Msk           (_UINT32_(0x1) << PHOT_CTRL_STS_ASSERT_EN_Pos)       /* (PHOT_CTRL_STS) This bit determines whether or not an interrupt will be generated when the PHOT_ASSERT bit is set. Mask */
#define PHOT_CTRL_STS_ASSERT_EN(value)        (PHOT_CTRL_STS_ASSERT_EN_Msk & (_UINT32_(value) << PHOT_CTRL_STS_ASSERT_EN_Pos)) /* Assigment of value for ASSERT_EN in the PHOT_CTRL_STS register */
#define PHOT_CTRL_STS_PER_EN_Pos              _UINT32_(3)                                          /* (PHOT_CTRL_STS) This bit determines whether or not an interrupt will be generated when the PHOT_PERIOD bit is set. Position */
#define PHOT_CTRL_STS_PER_EN_Msk              (_UINT32_(0x1) << PHOT_CTRL_STS_PER_EN_Pos)          /* (PHOT_CTRL_STS) This bit determines whether or not an interrupt will be generated when the PHOT_PERIOD bit is set. Mask */
#define PHOT_CTRL_STS_PER_EN(value)           (PHOT_CTRL_STS_PER_EN_Msk & (_UINT32_(value) << PHOT_CTRL_STS_PER_EN_Pos)) /* Assigment of value for PER_EN in the PHOT_CTRL_STS register */
#define PHOT_CTRL_STS_RST_Pos                 _UINT32_(4)                                          /* (PHOT_CTRL_STS) Writing this self-clearing bit to one resets all the registers and logic in the PROCHOT Monitor block to its defined initial state. Position */
#define PHOT_CTRL_STS_RST_Msk                 (_UINT32_(0x1) << PHOT_CTRL_STS_RST_Pos)             /* (PHOT_CTRL_STS) Writing this self-clearing bit to one resets all the registers and logic in the PROCHOT Monitor block to its defined initial state. Mask */
#define PHOT_CTRL_STS_RST(value)              (PHOT_CTRL_STS_RST_Msk & (_UINT32_(value) << PHOT_CTRL_STS_RST_Pos)) /* Assigment of value for RST in the PHOT_CTRL_STS register */
#define PHOT_CTRL_STS_FILT_EN_Pos             _UINT32_(5)                                          /* (PHOT_CTRL_STS) This bit determines whether a digital filter eliminates pulses on the PROCHOT# signal before PROCHOT# is sampled by the Assertion counter or the Active counter. Position */
#define PHOT_CTRL_STS_FILT_EN_Msk             (_UINT32_(0x1) << PHOT_CTRL_STS_FILT_EN_Pos)         /* (PHOT_CTRL_STS) This bit determines whether a digital filter eliminates pulses on the PROCHOT# signal before PROCHOT# is sampled by the Assertion counter or the Active counter. Mask */
#define PHOT_CTRL_STS_FILT_EN(value)          (PHOT_CTRL_STS_FILT_EN_Msk & (_UINT32_(value) << PHOT_CTRL_STS_FILT_EN_Pos)) /* Assigment of value for FILT_EN in the PHOT_CTRL_STS register */
#define PHOT_CTRL_STS_ASSERT_Pos              _UINT32_(10)                                         /* (PHOT_CTRL_STS) This bit is set when the PROCHOT Assertion Counter Register value is greater than or equal to the PROCHOT Assertion Counter Limit Register value. (R/WC) Position */
#define PHOT_CTRL_STS_ASSERT_Msk              (_UINT32_(0x1) << PHOT_CTRL_STS_ASSERT_Pos)          /* (PHOT_CTRL_STS) This bit is set when the PROCHOT Assertion Counter Register value is greater than or equal to the PROCHOT Assertion Counter Limit Register value. (R/WC) Mask */
#define PHOT_CTRL_STS_ASSERT(value)           (PHOT_CTRL_STS_ASSERT_Msk & (_UINT32_(value) << PHOT_CTRL_STS_ASSERT_Pos)) /* Assigment of value for ASSERT in the PHOT_CTRL_STS register */
#define PHOT_CTRL_STS_PER_Pos                 _UINT32_(11)                                         /* (PHOT_CTRL_STS) This sticky status bit is set to '1b' when the PROCHOT Period Counter transitions from '1b' to '0b.' (R/WC) Position */
#define PHOT_CTRL_STS_PER_Msk                 (_UINT32_(0x1) << PHOT_CTRL_STS_PER_Pos)             /* (PHOT_CTRL_STS) This sticky status bit is set to '1b' when the PROCHOT Period Counter transitions from '1b' to '0b.' (R/WC) Mask */
#define PHOT_CTRL_STS_PER(value)              (PHOT_CTRL_STS_PER_Msk & (_UINT32_(value) << PHOT_CTRL_STS_PER_Pos)) /* Assigment of value for PER in the PHOT_CTRL_STS register */
#define PHOT_CTRL_STS_Msk                     _UINT32_(0x00000C3F)                                 /* (PHOT_CTRL_STS) Register Mask  */


/* -------- PHOT_ASCNT : (PHOT Offset: 0x10) (R/W 32) PROCHOT Assertion Counter Register -------- */
#define PHOT_ASCNT_RESETVALUE                 _UINT32_(0x00)                                       /*  (PHOT_ASCNT) PROCHOT Assertion Counter Register  Reset Value */

#define PHOT_ASCNT_CNT_Pos                    _UINT32_(0)                                          /* (PHOT_ASCNT) The PROCHOT Assertion Counter is a 16-bit up-counter that is clocked by the 100KHz and is gated and reset by the PROCHOT# input signal. This counter is used to measure a single PROCHOT assertion. Position */
#define PHOT_ASCNT_CNT_Msk                    (_UINT32_(0xFFFF) << PHOT_ASCNT_CNT_Pos)             /* (PHOT_ASCNT) The PROCHOT Assertion Counter is a 16-bit up-counter that is clocked by the 100KHz and is gated and reset by the PROCHOT# input signal. This counter is used to measure a single PROCHOT assertion. Mask */
#define PHOT_ASCNT_CNT(value)                 (PHOT_ASCNT_CNT_Msk & (_UINT32_(value) << PHOT_ASCNT_CNT_Pos)) /* Assigment of value for CNT in the PHOT_ASCNT register */
#define PHOT_ASCNT_Msk                        _UINT32_(0x0000FFFF)                                 /* (PHOT_ASCNT) Register Mask  */


/* -------- PHOT_ASCLIM : (PHOT Offset: 0x14) (R/W 32) PROCHOT Assertion Counter Register -------- */
#define PHOT_ASCLIM_RESETVALUE                _UINT32_(0x00)                                       /*  (PHOT_ASCLIM) PROCHOT Assertion Counter Register  Reset Value */

#define PHOT_ASCLIM_CLIM_Pos                  _UINT32_(0)                                          /* (PHOT_ASCLIM) The PROCHOT Assertion Counter Limit register is compared to the 16-bit PROCHOT Assertion Counter. Position */
#define PHOT_ASCLIM_CLIM_Msk                  (_UINT32_(0xFFFF) << PHOT_ASCLIM_CLIM_Pos)           /* (PHOT_ASCLIM) The PROCHOT Assertion Counter Limit register is compared to the 16-bit PROCHOT Assertion Counter. Mask */
#define PHOT_ASCLIM_CLIM(value)               (PHOT_ASCLIM_CLIM_Msk & (_UINT32_(value) << PHOT_ASCLIM_CLIM_Pos)) /* Assigment of value for CLIM in the PHOT_ASCLIM register */
#define PHOT_ASCLIM_Msk                       _UINT32_(0x0000FFFF)                                 /* (PHOT_ASCLIM) Register Mask  */


/** \brief PHOT register offsets definitions */
#define PHOT_CUCNT_REG_OFST            _UINT32_(0x00)      /* (PHOT_CUCNT) PROCHOT Cumulative Count Register Offset */
#define PHOT_DC_CNT_REG_OFST           _UINT32_(0x04)      /* (PHOT_DC_CNT) PROCHOT Duty Cycle Count Register Offset */
#define PHOT_DC_PER_REG_OFST           _UINT32_(0x08)      /* (PHOT_DC_PER) PROCHOT Duty Cycle Period Register Offset */
#define PHOT_CTRL_STS_REG_OFST         _UINT32_(0x0C)      /* (PHOT_CTRL_STS) PROCHOT Status/Control Register Offset */
#define PHOT_ASCNT_REG_OFST            _UINT32_(0x10)      /* (PHOT_ASCNT) PROCHOT Assertion Counter Register Offset */
#define PHOT_ASCLIM_REG_OFST           _UINT32_(0x14)      /* (PHOT_ASCLIM) PROCHOT Assertion Counter Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief PHOT register API structure */
typedef struct
{  /* This block monitors the PROCHOT# signal generated by the host processor. It is designed to detect single assertions and monitor cumulative PROCHOT active time. */
  __IO  uint32_t                       PHOT_CUCNT;         /**< Offset: 0x00 (R/W  32) PROCHOT Cumulative Count Register */
  __IO  uint32_t                       PHOT_DC_CNT;        /**< Offset: 0x04 (R/W  32) PROCHOT Duty Cycle Count Register */
  __IO  uint32_t                       PHOT_DC_PER;        /**< Offset: 0x08 (R/W  32) PROCHOT Duty Cycle Period Register */
  __IO  uint32_t                       PHOT_CTRL_STS;      /**< Offset: 0x0C (R/W  32) PROCHOT Status/Control Register */
  __IO  uint32_t                       PHOT_ASCNT;         /**< Offset: 0x10 (R/W  32) PROCHOT Assertion Counter Register */
  __IO  uint32_t                       PHOT_ASCLIM;        /**< Offset: 0x14 (R/W  32) PROCHOT Assertion Counter Register */
} phot_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _0525SG12_PHOT_COMPONENT_H_ */
