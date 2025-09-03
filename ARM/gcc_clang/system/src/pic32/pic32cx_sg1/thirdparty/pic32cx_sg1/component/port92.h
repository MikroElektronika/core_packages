/*
 * Component description for PORT92
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
#ifndef _0525SG12_PORT92_COMPONENT_H_
#define _0525SG12_PORT92_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR PORT92                                       */
/* ************************************************************************** */

/* -------- PORT92_RT_PORT92 : (PORT92 Offset: 0x00) (R/W 8) PORT92 Register: The registers listed in the Runtime Register Summary table are for a single instance of the Legacy Port92/GATEA20 logic. -------- */
#define PORT92_RT_PORT92_RESETVALUE           _UINT8_(0x00)                                        /*  (PORT92_RT_PORT92) PORT92 Register: The registers listed in the Runtime Register Summary table are for a single instance of the Legacy Port92/GATEA20 logic.  Reset Value */

#define PORT92_RT_PORT92_ALT_CPU_RST_Pos      _UINT8_(0)                                           /* (PORT92_RT_PORT92) This bit provides an alternate means to generate a CPU_RESET pulse. Position */
#define PORT92_RT_PORT92_ALT_CPU_RST_Msk      (_UINT8_(0x1) << PORT92_RT_PORT92_ALT_CPU_RST_Pos)   /* (PORT92_RT_PORT92) This bit provides an alternate means to generate a CPU_RESET pulse. Mask */
#define PORT92_RT_PORT92_ALT_CPU_RST(value)   (PORT92_RT_PORT92_ALT_CPU_RST_Msk & (_UINT8_(value) << PORT92_RT_PORT92_ALT_CPU_RST_Pos)) /* Assigment of value for ALT_CPU_RST in the PORT92_RT_PORT92 register */
#define PORT92_RT_PORT92_ALT_GATE_A20_Pos     _UINT8_(1)                                           /* (PORT92_RT_PORT92) This bit provides an alternate means for system control of the GATEA20 pin. ALT_A20 low drives GATEA20 low, if A20 from the\n      keyboard controller is also low. When Port 92 is enabled, writing a 1 to this bit forces ALT_A20 high. ALT_A20 high drives GATEA20\n      high regardless of the state of A20 from the keyboard controller. 0=ALT_A20 is driven low; 1=ALT_A20 is driven high Position */
#define PORT92_RT_PORT92_ALT_GATE_A20_Msk     (_UINT8_(0x1) << PORT92_RT_PORT92_ALT_GATE_A20_Pos)  /* (PORT92_RT_PORT92) This bit provides an alternate means for system control of the GATEA20 pin. ALT_A20 low drives GATEA20 low, if A20 from the\n      keyboard controller is also low. When Port 92 is enabled, writing a 1 to this bit forces ALT_A20 high. ALT_A20 high drives GATEA20\n      high regardless of the state of A20 from the keyboard controller. 0=ALT_A20 is driven low; 1=ALT_A20 is driven high Mask */
#define PORT92_RT_PORT92_ALT_GATE_A20(value)  (PORT92_RT_PORT92_ALT_GATE_A20_Msk & (_UINT8_(value) << PORT92_RT_PORT92_ALT_GATE_A20_Pos)) /* Assigment of value for ALT_GATE_A20 in the PORT92_RT_PORT92 register */
#define PORT92_RT_PORT92_Msk                  _UINT8_(0x03)                                        /* (PORT92_RT_PORT92) Register Mask  */

#define PORT92_RT_PORT92_ALT_GATE_A_Pos       _UINT8_(1)                                           /* (PORT92_RT_PORT92 Position) This bit provides an alternate means for system control of the GATEA2x pin. ALT_A2x low drives GATEA2x low, if A2x from the\n      keyboard controller is also low. When Port 92 is enabled, writing a x to this bit forces ALT_A2x high. ALT_A2x high drives GATEA2x\n      high regardless of the state of A2x from the keyboard controller. x=ALT_A2x is driven low; x=ALT_A2x is driven high */
#define PORT92_RT_PORT92_ALT_GATE_A_Msk       (_UINT8_(0x1) << PORT92_RT_PORT92_ALT_GATE_A_Pos)    /* (PORT92_RT_PORT92 Mask) ALT_GATE_A */
#define PORT92_RT_PORT92_ALT_GATE_A(value)    (PORT92_RT_PORT92_ALT_GATE_A_Msk & (_UINT8_(value) << PORT92_RT_PORT92_ALT_GATE_A_Pos)) 

/* -------- PORT92_GATEA20 : (PORT92 Offset: 0x100) (R/W 8) GATEA20 Control Register -------- */
#define PORT92_GATEA20_RESETVALUE             _UINT8_(0x00)                                        /*  (PORT92_GATEA20) GATEA20 Control Register  Reset Value */

#define PORT92_GATEA20_GATEA20_Pos            _UINT8_(0)                                           /* (PORT92_GATEA20) 0=The GATEA20 output is driven low, 1=The GATEA20 output is driven high. Position */
#define PORT92_GATEA20_GATEA20_Msk            (_UINT8_(0x1) << PORT92_GATEA20_GATEA20_Pos)         /* (PORT92_GATEA20) 0=The GATEA20 output is driven low, 1=The GATEA20 output is driven high. Mask */
#define PORT92_GATEA20_GATEA20(value)         (PORT92_GATEA20_GATEA20_Msk & (_UINT8_(value) << PORT92_GATEA20_GATEA20_Pos)) /* Assigment of value for GATEA20 in the PORT92_GATEA20 register */
#define PORT92_GATEA20_Msk                    _UINT8_(0x01)                                        /* (PORT92_GATEA20) Register Mask  */

#define PORT92_GATEA20_GATEA_Pos              _UINT8_(0)                                           /* (PORT92_GATEA20 Position) x=The GATEA2x output is driven low, x=The GATEA2x output is driven high. */
#define PORT92_GATEA20_GATEA_Msk              (_UINT8_(0x1) << PORT92_GATEA20_GATEA_Pos)           /* (PORT92_GATEA20 Mask) GATEA */
#define PORT92_GATEA20_GATEA(value)           (PORT92_GATEA20_GATEA_Msk & (_UINT8_(value) << PORT92_GATEA20_GATEA_Pos)) 

/* -------- PORT92_SETGA20L : (PORT92 Offset: 0x108) ( /W 8) SETGA20L Register. A write to this register sets GATEA20 in the GATEA20 Control Register. -------- */
#define PORT92_SETGA20L_RESETVALUE            _UINT8_(0x00)                                        /*  (PORT92_SETGA20L) SETGA20L Register. A write to this register sets GATEA20 in the GATEA20 Control Register.  Reset Value */

#define PORT92_SETGA20L_Msk                   _UINT8_(0x00)                                        /* (PORT92_SETGA20L) Register Mask  */


/* -------- PORT92_RSTGA20L : (PORT92 Offset: 0x10C) (R/W 8) RSTGA20L Register. A write to this register sets GATEA20 in the GATEA20 Control Register. -------- */
#define PORT92_RSTGA20L_RESETVALUE            _UINT8_(0x00)                                        /*  (PORT92_RSTGA20L) RSTGA20L Register. A write to this register sets GATEA20 in the GATEA20 Control Register.  Reset Value */

#define PORT92_RSTGA20L_Msk                   _UINT8_(0x00)                                        /* (PORT92_RSTGA20L) Register Mask  */


/* -------- PORT92_EN : (PORT92 Offset: 0x330) (R/W 8) PORT92 Enable Register -------- */
#define PORT92_EN_RESETVALUE                  _UINT8_(0x00)                                        /*  (PORT92_EN) PORT92 Enable Register  Reset Value */

#define PORT92_EN_EN_Pos                      _UINT8_(0)                                           /* (PORT92_EN) When this bit is '1', the Port92h Register is enabled. When this bit is '0', the Port92h Register is disabled, and Host\n      writes to Host address 92h are ignored. Position */
#define PORT92_EN_EN_Msk                      (_UINT8_(0x1) << PORT92_EN_EN_Pos)                   /* (PORT92_EN) When this bit is '1', the Port92h Register is enabled. When this bit is '0', the Port92h Register is disabled, and Host\n      writes to Host address 92h are ignored. Mask */
#define PORT92_EN_EN(value)                   (PORT92_EN_EN_Msk & (_UINT8_(value) << PORT92_EN_EN_Pos)) /* Assigment of value for EN in the PORT92_EN register */
#define PORT92_EN_Msk                         _UINT8_(0x01)                                        /* (PORT92_EN) Register Mask  */


/** \brief PORT92 register offsets definitions */
#define PORT92_RT_PORT92_REG_OFST      _UINT32_(0x00)      /* (PORT92_RT_PORT92) PORT92 Register: The registers listed in the Runtime Register Summary table are for a single instance of the Legacy Port92/GATEA20 logic. Offset */
#define PORT92_GATEA20_REG_OFST        _UINT32_(0x100)     /* (PORT92_GATEA20) GATEA20 Control Register Offset */
#define PORT92_SETGA20L_REG_OFST       _UINT32_(0x108)     /* (PORT92_SETGA20L) SETGA20L Register. A write to this register sets GATEA20 in the GATEA20 Control Register. Offset */
#define PORT92_RSTGA20L_REG_OFST       _UINT32_(0x10C)     /* (PORT92_RSTGA20L) RSTGA20L Register. A write to this register sets GATEA20 in the GATEA20 Control Register. Offset */
#define PORT92_EN_REG_OFST             _UINT32_(0x330)     /* (PORT92_EN) PORT92 Enable Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief PORT92 register API structure */
typedef struct
{  /* The registers listed in the Configuration Register Summary table are for a single instance of the Legacy Port92/GATEA20 logic. */
  __IO  uint8_t                        PORT92_RT_PORT92;   /**< Offset: 0x00 (R/W  8) PORT92 Register: The registers listed in the Runtime Register Summary table are for a single instance of the Legacy Port92/GATEA20 logic. */
  __I   uint8_t                        Reserved1[0xFF];
  __IO  uint8_t                        PORT92_GATEA20;     /**< Offset: 0x100 (R/W  8) GATEA20 Control Register */
  __I   uint8_t                        Reserved2[0x07];
  __O   uint8_t                        PORT92_SETGA20L;    /**< Offset: 0x108 ( /W  8) SETGA20L Register. A write to this register sets GATEA20 in the GATEA20 Control Register. */
  __I   uint8_t                        Reserved3[0x03];
  __IO  uint8_t                        PORT92_RSTGA20L;    /**< Offset: 0x10C (R/W  8) RSTGA20L Register. A write to this register sets GATEA20 in the GATEA20 Control Register. */
  __I   uint8_t                        Reserved4[0x223];
  __IO  uint8_t                        PORT92_EN;          /**< Offset: 0x330 (R/W  8) PORT92 Enable Register */
} port92_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _0525SG12_PORT92_COMPONENT_H_ */
