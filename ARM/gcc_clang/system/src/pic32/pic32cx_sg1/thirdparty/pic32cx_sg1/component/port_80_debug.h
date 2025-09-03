/*
 * Component description for PORT_80_DEBUG
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
#ifndef _0525SG12_PORT_80_DEBUG_COMPONENT_H_
#define _0525SG12_PORT_80_DEBUG_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR PORT_80_DEBUG                                */
/* ************************************************************************** */

/* -------- PORT_80_DEBUG_HOST_DATA : (PORT_80_DEBUG Offset: 0x00) ( /W 32) Host Data Register -------- */
#define PORT_80_DEBUG_HOST_DATA_RESETVALUE    _UINT32_(0x00)                                       /*  (PORT_80_DEBUG_HOST_DATA) Host Data Register  Reset Value */

#define PORT_80_DEBUG_HOST_DATA_H_DAT_Pos     _UINT32_(0)                                          /* (PORT_80_DEBUG_HOST_DATA) This is the host data. Position */
#define PORT_80_DEBUG_HOST_DATA_H_DAT_Msk     (_UINT32_(0xFF) << PORT_80_DEBUG_HOST_DATA_H_DAT_Pos) /* (PORT_80_DEBUG_HOST_DATA) This is the host data. Mask */
#define PORT_80_DEBUG_HOST_DATA_H_DAT(value)  (PORT_80_DEBUG_HOST_DATA_H_DAT_Msk & (_UINT32_(value) << PORT_80_DEBUG_HOST_DATA_H_DAT_Pos)) /* Assigment of value for H_DAT in the PORT_80_DEBUG_HOST_DATA register */
#define PORT_80_DEBUG_HOST_DATA_Msk           _UINT32_(0x000000FF)                                 /* (PORT_80_DEBUG_HOST_DATA) Register Mask  */


/* -------- PORT_80_DEBUG_EC_DATA : (PORT_80_DEBUG Offset: 0x100) (R/W 32) EC Data Register. -------- */
#define PORT_80_DEBUG_EC_DATA_RESETVALUE      _UINT32_(0x00)                                       /*  (PORT_80_DEBUG_EC_DATA) EC Data Register.  Reset Value */

#define PORT_80_DEBUG_EC_DATA_EC_DAT_Pos      _UINT32_(0)                                          /* (PORT_80_DEBUG_EC_DATA) This is the EC data. Position */
#define PORT_80_DEBUG_EC_DATA_EC_DAT_Msk      (_UINT32_(0xFF) << PORT_80_DEBUG_EC_DATA_EC_DAT_Pos) /* (PORT_80_DEBUG_EC_DATA) This is the EC data. Mask */
#define PORT_80_DEBUG_EC_DATA_EC_DAT(value)   (PORT_80_DEBUG_EC_DATA_EC_DAT_Msk & (_UINT32_(value) << PORT_80_DEBUG_EC_DATA_EC_DAT_Pos)) /* Assigment of value for EC_DAT in the PORT_80_DEBUG_EC_DATA register */
#define PORT_80_DEBUG_EC_DATA_TIME_STAMP_Pos  _UINT32_(8)                                          /* (PORT_80_DEBUG_EC_DATA) This is the time stamp. Position */
#define PORT_80_DEBUG_EC_DATA_TIME_STAMP_Msk  (_UINT32_(0xFFFFFF) << PORT_80_DEBUG_EC_DATA_TIME_STAMP_Pos) /* (PORT_80_DEBUG_EC_DATA) This is the time stamp. Mask */
#define PORT_80_DEBUG_EC_DATA_TIME_STAMP(value) (PORT_80_DEBUG_EC_DATA_TIME_STAMP_Msk & (_UINT32_(value) << PORT_80_DEBUG_EC_DATA_TIME_STAMP_Pos)) /* Assigment of value for TIME_STAMP in the PORT_80_DEBUG_EC_DATA register */
#define PORT_80_DEBUG_EC_DATA_Msk             _UINT32_(0xFFFFFFFF)                                 /* (PORT_80_DEBUG_EC_DATA) Register Mask  */


/* -------- PORT_80_DEBUG_CFG : (PORT_80_DEBUG Offset: 0x104) (R/W 32) Configuration Register. -------- */
#define PORT_80_DEBUG_CFG_RESETVALUE          _UINT32_(0x00)                                       /*  (PORT_80_DEBUG_CFG) Configuration Register.  Reset Value */

#define PORT_80_DEBUG_CFG_FLUSH_Pos           _UINT32_(1)                                          /* (PORT_80_DEBUG_CFG) When this field is written with a 1, the FIFO is flushed. Writes of a 0 to this field have no effect. Reads always return 0. Position */
#define PORT_80_DEBUG_CFG_FLUSH_Msk           (_UINT32_(0x1) << PORT_80_DEBUG_CFG_FLUSH_Pos)       /* (PORT_80_DEBUG_CFG) When this field is written with a 1, the FIFO is flushed. Writes of a 0 to this field have no effect. Reads always return 0. Mask */
#define PORT_80_DEBUG_CFG_FLUSH(value)        (PORT_80_DEBUG_CFG_FLUSH_Msk & (_UINT32_(value) << PORT_80_DEBUG_CFG_FLUSH_Pos)) /* Assigment of value for FLUSH in the PORT_80_DEBUG_CFG register */
#define PORT_80_DEBUG_CFG_RST_TIME_STAMP_Pos  _UINT32_(2)                                          /* (PORT_80_DEBUG_CFG) When this field is written with a 1, the 24-bit Timer is reset to 0. Writing zero to the Count Register has the same effect.\n      Writes of a 0 to this field have no effect. Reads always return 0. Position */
#define PORT_80_DEBUG_CFG_RST_TIME_STAMP_Msk  (_UINT32_(0x1) << PORT_80_DEBUG_CFG_RST_TIME_STAMP_Pos) /* (PORT_80_DEBUG_CFG) When this field is written with a 1, the 24-bit Timer is reset to 0. Writing zero to the Count Register has the same effect.\n      Writes of a 0 to this field have no effect. Reads always return 0. Mask */
#define PORT_80_DEBUG_CFG_RST_TIME_STAMP(value) (PORT_80_DEBUG_CFG_RST_TIME_STAMP_Msk & (_UINT32_(value) << PORT_80_DEBUG_CFG_RST_TIME_STAMP_Pos)) /* Assigment of value for RST_TIME_STAMP in the PORT_80_DEBUG_CFG register */
#define PORT_80_DEBUG_CFG_TMEBASE_SEL_Pos     _UINT32_(3)                                          /* (PORT_80_DEBUG_CFG) These bits determine the clock for the 24-bit Timer: 3=48MHz/64; 2=48MHz/32; 1=48MHz/16; 0=48MHz/8. Position */
#define PORT_80_DEBUG_CFG_TMEBASE_SEL_Msk     (_UINT32_(0x3) << PORT_80_DEBUG_CFG_TMEBASE_SEL_Pos) /* (PORT_80_DEBUG_CFG) These bits determine the clock for the 24-bit Timer: 3=48MHz/64; 2=48MHz/32; 1=48MHz/16; 0=48MHz/8. Mask */
#define PORT_80_DEBUG_CFG_TMEBASE_SEL(value)  (PORT_80_DEBUG_CFG_TMEBASE_SEL_Msk & (_UINT32_(value) << PORT_80_DEBUG_CFG_TMEBASE_SEL_Pos)) /* Assigment of value for TMEBASE_SEL in the PORT_80_DEBUG_CFG register */
#define PORT_80_DEBUG_CFG_TMR_EN_Pos          _UINT32_(5)                                          /* (PORT_80_DEBUG_CFG) When the TIMER_ENABLE bit is 1, the 24-bit Timer is actively counting at a rate determined by the TIMEBASE_SELECT bits.\n      When the TIMER ENABLE bit is 0, counting is stopped. Position */
#define PORT_80_DEBUG_CFG_TMR_EN_Msk          (_UINT32_(0x1) << PORT_80_DEBUG_CFG_TMR_EN_Pos)      /* (PORT_80_DEBUG_CFG) When the TIMER_ENABLE bit is 1, the 24-bit Timer is actively counting at a rate determined by the TIMEBASE_SELECT bits.\n      When the TIMER ENABLE bit is 0, counting is stopped. Mask */
#define PORT_80_DEBUG_CFG_TMR_EN(value)       (PORT_80_DEBUG_CFG_TMR_EN_Msk & (_UINT32_(value) << PORT_80_DEBUG_CFG_TMR_EN_Pos)) /* Assigment of value for TMR_EN in the PORT_80_DEBUG_CFG register */
#define PORT_80_DEBUG_CFG_FIFO_THRES_Pos      _UINT32_(6)                                          /* (PORT_80_DEBUG_CFG) This field determines the threshold for the Port 80 BIOS Debug Port Interrupts:\n      3=14 entry threshold; 2=8 entry threshold; 1=4 entry threshold; 0=1 entry threshold. Position */
#define PORT_80_DEBUG_CFG_FIFO_THRES_Msk      (_UINT32_(0x3) << PORT_80_DEBUG_CFG_FIFO_THRES_Pos)  /* (PORT_80_DEBUG_CFG) This field determines the threshold for the Port 80 BIOS Debug Port Interrupts:\n      3=14 entry threshold; 2=8 entry threshold; 1=4 entry threshold; 0=1 entry threshold. Mask */
#define PORT_80_DEBUG_CFG_FIFO_THRES(value)   (PORT_80_DEBUG_CFG_FIFO_THRES_Msk & (_UINT32_(value) << PORT_80_DEBUG_CFG_FIFO_THRES_Pos)) /* Assigment of value for FIFO_THRES in the PORT_80_DEBUG_CFG register */
#define PORT_80_DEBUG_CFG_Msk                 _UINT32_(0x000000FE)                                 /* (PORT_80_DEBUG_CFG) Register Mask  */


/* -------- PORT_80_DEBUG_STS : (PORT_80_DEBUG Offset: 0x108) ( R/ 32) Status Register -------- */
#define PORT_80_DEBUG_STS_RESETVALUE          _UINT32_(0x00)                                       /*  (PORT_80_DEBUG_STS) Status Register  Reset Value */

#define PORT_80_DEBUG_STS_NOT_EMPTY_Pos       _UINT32_(0)                                          /* (PORT_80_DEBUG_STS) The NOT EMPTY bit is 1 when there is data in the FIFO. The NOT EMPTY bit is 0 when the FIFO is empty. Position */
#define PORT_80_DEBUG_STS_NOT_EMPTY_Msk       (_UINT32_(0x1) << PORT_80_DEBUG_STS_NOT_EMPTY_Pos)   /* (PORT_80_DEBUG_STS) The NOT EMPTY bit is 1 when there is data in the FIFO. The NOT EMPTY bit is 0 when the FIFO is empty. Mask */
#define PORT_80_DEBUG_STS_NOT_EMPTY(value)    (PORT_80_DEBUG_STS_NOT_EMPTY_Msk & (_UINT32_(value) << PORT_80_DEBUG_STS_NOT_EMPTY_Pos)) /* Assigment of value for NOT_EMPTY in the PORT_80_DEBUG_STS register */
#define PORT_80_DEBUG_STS_OVERRUN_Pos         _UINT32_(1)                                          /* (PORT_80_DEBUG_STS) The OVERRUN bit is 1 when the host writes the Host Data Register when the FIFO is full. Position */
#define PORT_80_DEBUG_STS_OVERRUN_Msk         (_UINT32_(0x1) << PORT_80_DEBUG_STS_OVERRUN_Pos)     /* (PORT_80_DEBUG_STS) The OVERRUN bit is 1 when the host writes the Host Data Register when the FIFO is full. Mask */
#define PORT_80_DEBUG_STS_OVERRUN(value)      (PORT_80_DEBUG_STS_OVERRUN_Msk & (_UINT32_(value) << PORT_80_DEBUG_STS_OVERRUN_Pos)) /* Assigment of value for OVERRUN in the PORT_80_DEBUG_STS register */
#define PORT_80_DEBUG_STS_Msk                 _UINT32_(0x00000003)                                 /* (PORT_80_DEBUG_STS) Register Mask  */


/* -------- PORT_80_DEBUG_CNT : (PORT_80_DEBUG Offset: 0x10C) (R/W 32) Count Register -------- */
#define PORT_80_DEBUG_CNT_RESETVALUE          _UINT32_(0x00)                                       /*  (PORT_80_DEBUG_CNT) Count Register  Reset Value */

#define PORT_80_DEBUG_CNT_CNT_Pos             _UINT32_(8)                                          /* (PORT_80_DEBUG_CNT) Writes load data into the 24-bit Timer. Reads return the 24-bit Timer current value. Position */
#define PORT_80_DEBUG_CNT_CNT_Msk             (_UINT32_(0xFFFFFF) << PORT_80_DEBUG_CNT_CNT_Pos)    /* (PORT_80_DEBUG_CNT) Writes load data into the 24-bit Timer. Reads return the 24-bit Timer current value. Mask */
#define PORT_80_DEBUG_CNT_CNT(value)          (PORT_80_DEBUG_CNT_CNT_Msk & (_UINT32_(value) << PORT_80_DEBUG_CNT_CNT_Pos)) /* Assigment of value for CNT in the PORT_80_DEBUG_CNT register */
#define PORT_80_DEBUG_CNT_Msk                 _UINT32_(0xFFFFFF00)                                 /* (PORT_80_DEBUG_CNT) Register Mask  */


/* -------- PORT_80_DEBUG_ACTIVATE : (PORT_80_DEBUG Offset: 0x330) (R/W 32) Activate Register -------- */
#define PORT_80_DEBUG_ACTIVATE_RESETVALUE     _UINT32_(0x00)                                       /*  (PORT_80_DEBUG_ACTIVATE) Activate Register  Reset Value */

#define PORT_80_DEBUG_ACTIVATE_ACT_Pos        _UINT32_(0)                                          /* (PORT_80_DEBUG_ACTIVATE) When this bit is asserted 1, the block is enabled. When this bit is 0, writes by the Host interface to the Host Data Register\n      are not claimed, the FIFO is flushed, the 24-bit Timer is reset, and the timer clock is stopped. Control bits in the Configuration Register are\n      not affected by the state of ACTIVATE. Position */
#define PORT_80_DEBUG_ACTIVATE_ACT_Msk        (_UINT32_(0x1) << PORT_80_DEBUG_ACTIVATE_ACT_Pos)    /* (PORT_80_DEBUG_ACTIVATE) When this bit is asserted 1, the block is enabled. When this bit is 0, writes by the Host interface to the Host Data Register\n      are not claimed, the FIFO is flushed, the 24-bit Timer is reset, and the timer clock is stopped. Control bits in the Configuration Register are\n      not affected by the state of ACTIVATE. Mask */
#define PORT_80_DEBUG_ACTIVATE_ACT(value)     (PORT_80_DEBUG_ACTIVATE_ACT_Msk & (_UINT32_(value) << PORT_80_DEBUG_ACTIVATE_ACT_Pos)) /* Assigment of value for ACT in the PORT_80_DEBUG_ACTIVATE register */
#define PORT_80_DEBUG_ACTIVATE_Msk            _UINT32_(0x00000001)                                 /* (PORT_80_DEBUG_ACTIVATE) Register Mask  */


/** \brief PORT_80_DEBUG register offsets definitions */
#define PORT_80_DEBUG_HOST_DATA_REG_OFST _UINT32_(0x00)      /* (PORT_80_DEBUG_HOST_DATA) Host Data Register Offset */
#define PORT_80_DEBUG_EC_DATA_REG_OFST _UINT32_(0x100)     /* (PORT_80_DEBUG_EC_DATA) EC Data Register. Offset */
#define PORT_80_DEBUG_CFG_REG_OFST     _UINT32_(0x104)     /* (PORT_80_DEBUG_CFG) Configuration Register. Offset */
#define PORT_80_DEBUG_STS_REG_OFST     _UINT32_(0x108)     /* (PORT_80_DEBUG_STS) Status Register Offset */
#define PORT_80_DEBUG_CNT_REG_OFST     _UINT32_(0x10C)     /* (PORT_80_DEBUG_CNT) Count Register Offset */
#define PORT_80_DEBUG_ACTIVATE_REG_OFST _UINT32_(0x330)     /* (PORT_80_DEBUG_ACTIVATE) Activate Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief PORT_80_DEBUG register API structure */
typedef struct
{  /* Diagnostic data is written by the Host Interface to the Port 80 BIOS Debug Port */
  __O   uint32_t                       PORT_80_DEBUG_HOST_DATA; /**< Offset: 0x00 ( /W  32) Host Data Register */
  __I   uint8_t                        Reserved1[0xFC];
  __IO  uint32_t                       PORT_80_DEBUG_EC_DATA; /**< Offset: 0x100 (R/W  32) EC Data Register. */
  __IO  uint32_t                       PORT_80_DEBUG_CFG;  /**< Offset: 0x104 (R/W  32) Configuration Register. */
  __I   uint32_t                       PORT_80_DEBUG_STS;  /**< Offset: 0x108 (R/   32) Status Register */
  __IO  uint32_t                       PORT_80_DEBUG_CNT;  /**< Offset: 0x10C (R/W  32) Count Register */
  __I   uint8_t                        Reserved2[0x220];
  __IO  uint32_t                       PORT_80_DEBUG_ACTIVATE; /**< Offset: 0x330 (R/W  32) Activate Register */
} port_80_debug_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _0525SG12_PORT_80_DEBUG_COMPONENT_H_ */
