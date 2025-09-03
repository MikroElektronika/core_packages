/*
 * Component description for SGPIO
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
#ifndef _0525SG12_SGPIO_COMPONENT_H_
#define _0525SG12_SGPIO_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR SGPIO                                        */
/* ************************************************************************** */

/* -------- SGPIO_CFG : (SGPIO Offset: 0x00) ( R/ 8) SGPIO Configuration Register. -------- */
#define SGPIO_CFG_RESETVALUE                  _UINT8_(0x04)                                        /*  (SGPIO_CFG) SGPIO Configuration Register.  Reset Value */

#define SGPIO_CFG_DRIVCNT_Pos                 _UINT8_(0)                                           /* (SGPIO_CFG) This field indicates the number of drives supported in each packet by the         SGPIO_TARGET_SPB block. The number of bits shifted in and out is three times         the value of this field, since there are three LEDs per drive.           This field is hard-coded to 04h. Position */
#define SGPIO_CFG_DRIVCNT_Msk                 (_UINT8_(0xF) << SGPIO_CFG_DRIVCNT_Pos)              /* (SGPIO_CFG) This field indicates the number of drives supported in each packet by the         SGPIO_TARGET_SPB block. The number of bits shifted in and out is three times         the value of this field, since there are three LEDs per drive.           This field is hard-coded to 04h. Mask */
#define SGPIO_CFG_DRIVCNT(value)              (SGPIO_CFG_DRIVCNT_Msk & (_UINT8_(value) << SGPIO_CFG_DRIVCNT_Pos)) /* Assigment of value for DRIVCNT in the SGPIO_CFG register */
#define SGPIO_CFG_Msk                         _UINT8_(0x0F)                                        /* (SGPIO_CFG) Register Mask  */


/* -------- SGPIO_RXOTLD : (SGPIO Offset: 0x04) ( R/ 32) This register contains the values received during the last SGPIO transaction. -------- */
#define SGPIO_RXOTLD_RESETVALUE               _UINT32_(0x00)                                       /*  (SGPIO_RXOTLD) This register contains the values received during the last SGPIO transaction.  Reset Value */

#define SGPIO_RXOTLD_OUT_Pos                  _UINT32_(0)                                          /* (SGPIO_RXOTLD) This field contains the values shifted in from the SGPIO_OUT pin. This field         clears to zero when a link-reset is detected. Position */
#define SGPIO_RXOTLD_OUT_Msk                  (_UINT32_(0xFFF) << SGPIO_RXOTLD_OUT_Pos)            /* (SGPIO_RXOTLD) This field contains the values shifted in from the SGPIO_OUT pin. This field         clears to zero when a link-reset is detected. Mask */
#define SGPIO_RXOTLD_OUT(value)               (SGPIO_RXOTLD_OUT_Msk & (_UINT32_(value) << SGPIO_RXOTLD_OUT_Pos)) /* Assigment of value for OUT in the SGPIO_RXOTLD register */
#define SGPIO_RXOTLD_LOAD_Pos                 _UINT32_(16)                                         /* (SGPIO_RXOTLD) This field contains the values shifted in from the SGPIO_LD pin. This field         clears to zero when a link-reset is detected. Position */
#define SGPIO_RXOTLD_LOAD_Msk                 (_UINT32_(0xF) << SGPIO_RXOTLD_LOAD_Pos)             /* (SGPIO_RXOTLD) This field contains the values shifted in from the SGPIO_LD pin. This field         clears to zero when a link-reset is detected. Mask */
#define SGPIO_RXOTLD_LOAD(value)              (SGPIO_RXOTLD_LOAD_Msk & (_UINT32_(value) << SGPIO_RXOTLD_LOAD_Pos)) /* Assigment of value for LOAD in the SGPIO_RXOTLD register */
#define SGPIO_RXOTLD_Msk                      _UINT32_(0x000F0FFF)                                 /* (SGPIO_RXOTLD) Register Mask  */


/* -------- SGPIO_TXIN : (SGPIO Offset: 0x08) (R/W 32) This register contains the values to be transmitted during the next SGPIO transaction. -------- */
#define SGPIO_TXIN_RESETVALUE                 _UINT32_(0x00)                                       /*  (SGPIO_TXIN) This register contains the values to be transmitted during the next SGPIO transaction.  Reset Value */

#define SGPIO_TXIN_IN_Pos                     _UINT32_(0)                                          /* (SGPIO_TXIN) This register contains the values to be transmitted during the next SGPIO transaction. Position */
#define SGPIO_TXIN_IN_Msk                     (_UINT32_(0xFFF) << SGPIO_TXIN_IN_Pos)               /* (SGPIO_TXIN) This register contains the values to be transmitted during the next SGPIO transaction. Mask */
#define SGPIO_TXIN_IN(value)                  (SGPIO_TXIN_IN_Msk & (_UINT32_(value) << SGPIO_TXIN_IN_Pos)) /* Assigment of value for IN in the SGPIO_TXIN register */
#define SGPIO_TXIN_Msk                        _UINT32_(0x00000FFF)                                 /* (SGPIO_TXIN) Register Mask  */


/* -------- SGPIO_STAT : (SGPIO Offset: 0x0C) (R/W 8) This register contains the SPIO status. -------- */
#define SGPIO_STAT_RESETVALUE                 _UINT8_(0x00)                                        /*  (SGPIO_STAT) This register contains the SPIO status.  Reset Value */

#define SGPIO_STAT_EOF_STS_Pos                _UINT8_(0)                                           /* (SGPIO_STAT) This field is set by the hardware whenever a SGPIO frame has finished shifting on the         bus. This field is cleared by F/W writing a 1. This is R/WC Position */
#define SGPIO_STAT_EOF_STS_Msk                (_UINT8_(0x1) << SGPIO_STAT_EOF_STS_Pos)             /* (SGPIO_STAT) This field is set by the hardware whenever a SGPIO frame has finished shifting on the         bus. This field is cleared by F/W writing a 1. This is R/WC Mask */
#define SGPIO_STAT_EOF_STS(value)             (SGPIO_STAT_EOF_STS_Msk & (_UINT8_(value) << SGPIO_STAT_EOF_STS_Pos)) /* Assigment of value for EOF_STS in the SGPIO_STAT register */
#define SGPIO_STAT_LNKRST_STS_Pos             _UINT8_(1)                                           /* (SGPIO_STAT) This field is set by the hardware whenever the SGPIO pins have been detected high for         atleast 64ms. This field is cleared by F/W writing a 1. This is R/WC Position */
#define SGPIO_STAT_LNKRST_STS_Msk             (_UINT8_(0x1) << SGPIO_STAT_LNKRST_STS_Pos)          /* (SGPIO_STAT) This field is set by the hardware whenever the SGPIO pins have been detected high for         atleast 64ms. This field is cleared by F/W writing a 1. This is R/WC Mask */
#define SGPIO_STAT_LNKRST_STS(value)          (SGPIO_STAT_LNKRST_STS_Msk & (_UINT8_(value) << SGPIO_STAT_LNKRST_STS_Pos)) /* Assigment of value for LNKRST_STS in the SGPIO_STAT register */
#define SGPIO_STAT_Msk                        _UINT8_(0x03)                                        /* (SGPIO_STAT) Register Mask  */


/* -------- SGPIO_EN : (SGPIO Offset: 0x10) (R/W 8) This is register SPIO Enable Register. -------- */
#define SGPIO_EN_RESETVALUE                   _UINT8_(0x00)                                        /*  (SGPIO_EN) This is register SPIO Enable Register.  Reset Value */

#define SGPIO_EN_EOF_Pos                      _UINT8_(0)                                           /* (SGPIO_EN) When this bit is set and sts_eof is asserted by the h/w, an interrupt is thrown to         the processor. Position */
#define SGPIO_EN_EOF_Msk                      (_UINT8_(0x1) << SGPIO_EN_EOF_Pos)                   /* (SGPIO_EN) When this bit is set and sts_eof is asserted by the h/w, an interrupt is thrown to         the processor. Mask */
#define SGPIO_EN_EOF(value)                   (SGPIO_EN_EOF_Msk & (_UINT8_(value) << SGPIO_EN_EOF_Pos)) /* Assigment of value for EOF in the SGPIO_EN register */
#define SGPIO_EN_LNKRST_Pos                   _UINT8_(1)                                           /* (SGPIO_EN) When this bit is set and sts_link_reset is asserted by the h/w, an interrupt is         thrown to the processor. Position */
#define SGPIO_EN_LNKRST_Msk                   (_UINT8_(0x1) << SGPIO_EN_LNKRST_Pos)                /* (SGPIO_EN) When this bit is set and sts_link_reset is asserted by the h/w, an interrupt is         thrown to the processor. Mask */
#define SGPIO_EN_LNKRST(value)                (SGPIO_EN_LNKRST_Msk & (_UINT8_(value) << SGPIO_EN_LNKRST_Pos)) /* Assigment of value for LNKRST in the SGPIO_EN register */
#define SGPIO_EN_Msk                          _UINT8_(0x03)                                        /* (SGPIO_EN) Register Mask  */


/* -------- SGPIO_CTRL : (SGPIO Offset: 0x14) (R/W 8) This is the SPIO Control Register. -------- */
#define SGPIO_CTRL_RESETVALUE                 _UINT8_(0x00)                                        /*  (SGPIO_CTRL) This is the SPIO Control Register.  Reset Value */

#define SGPIO_CTRL_EN_Pos                     _UINT8_(0)                                           /* (SGPIO_CTRL) When this bit is set to one, the SGPIO_TARGET_SPB block will be enabled. Position */
#define SGPIO_CTRL_EN_Msk                     (_UINT8_(0x1) << SGPIO_CTRL_EN_Pos)                  /* (SGPIO_CTRL) When this bit is set to one, the SGPIO_TARGET_SPB block will be enabled. Mask */
#define SGPIO_CTRL_EN(value)                  (SGPIO_CTRL_EN_Msk & (_UINT8_(value) << SGPIO_CTRL_EN_Pos)) /* Assigment of value for EN in the SGPIO_CTRL register */
#define SGPIO_CTRL_SFTRST_Pos                 _UINT8_(1)                                           /* (SGPIO_CTRL) When this bit is set to one, the SGPIO_TARGET_SPB block will reset. This         bit is self clearing. This field is auto cleared by hardware. Position */
#define SGPIO_CTRL_SFTRST_Msk                 (_UINT8_(0x1) << SGPIO_CTRL_SFTRST_Pos)              /* (SGPIO_CTRL) When this bit is set to one, the SGPIO_TARGET_SPB block will reset. This         bit is self clearing. This field is auto cleared by hardware. Mask */
#define SGPIO_CTRL_SFTRST(value)              (SGPIO_CTRL_SFTRST_Msk & (_UINT8_(value) << SGPIO_CTRL_SFTRST_Pos)) /* Assigment of value for SFTRST in the SGPIO_CTRL register */
#define SGPIO_CTRL_FLTREN_Pos                 _UINT8_(2)                                           /* (SGPIO_CTRL) When this bit is set to one, analog filters will be used to remove up to         50ns glitches on SGPIO_CLK, SGPIO_DOUT, and SGPIO_LD. Position */
#define SGPIO_CTRL_FLTREN_Msk                 (_UINT8_(0x1) << SGPIO_CTRL_FLTREN_Pos)              /* (SGPIO_CTRL) When this bit is set to one, analog filters will be used to remove up to         50ns glitches on SGPIO_CLK, SGPIO_DOUT, and SGPIO_LD. Mask */
#define SGPIO_CTRL_FLTREN(value)              (SGPIO_CTRL_FLTREN_Msk & (_UINT8_(value) << SGPIO_CTRL_FLTREN_Pos)) /* Assigment of value for FLTREN in the SGPIO_CTRL register */
#define SGPIO_CTRL_Msk                        _UINT8_(0x07)                                        /* (SGPIO_CTRL) Register Mask  */


/** \brief SGPIO register offsets definitions */
#define SGPIO_CFG_REG_OFST             _UINT32_(0x00)      /* (SGPIO_CFG) SGPIO Configuration Register. Offset */
#define SGPIO_RXOTLD_REG_OFST          _UINT32_(0x04)      /* (SGPIO_RXOTLD) This register contains the values received during the last SGPIO transaction. Offset */
#define SGPIO_TXIN_REG_OFST            _UINT32_(0x08)      /* (SGPIO_TXIN) This register contains the values to be transmitted during the next SGPIO transaction. Offset */
#define SGPIO_STAT_REG_OFST            _UINT32_(0x0C)      /* (SGPIO_STAT) This register contains the SPIO status. Offset */
#define SGPIO_EN_REG_OFST              _UINT32_(0x10)      /* (SGPIO_EN) This is register SPIO Enable Register. Offset */
#define SGPIO_CTRL_REG_OFST            _UINT32_(0x14)      /* (SGPIO_CTRL) This is the SPIO Control Register. Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SGPIO register API structure */
typedef struct
{  /* This is Serial General Purpous Input Output block */
  __I   uint8_t                        SGPIO_CFG;          /**< Offset: 0x00 (R/   8) SGPIO Configuration Register. */
  __I   uint8_t                        Reserved1[0x03];
  __I   uint32_t                       SGPIO_RXOTLD;       /**< Offset: 0x04 (R/   32) This register contains the values received during the last SGPIO transaction. */
  __IO  uint32_t                       SGPIO_TXIN;         /**< Offset: 0x08 (R/W  32) This register contains the values to be transmitted during the next SGPIO transaction. */
  __IO  uint8_t                        SGPIO_STAT;         /**< Offset: 0x0C (R/W  8) This register contains the SPIO status. */
  __I   uint8_t                        Reserved2[0x03];
  __IO  uint8_t                        SGPIO_EN;           /**< Offset: 0x10 (R/W  8) This is register SPIO Enable Register. */
  __I   uint8_t                        Reserved3[0x03];
  __IO  uint8_t                        SGPIO_CTRL;         /**< Offset: 0x14 (R/W  8) This is the SPIO Control Register. */
} sgpio_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _0525SG12_SGPIO_COMPONENT_H_ */
