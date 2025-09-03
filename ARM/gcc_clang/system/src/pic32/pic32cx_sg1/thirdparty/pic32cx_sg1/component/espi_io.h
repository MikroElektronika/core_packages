/*
 * Component description for ESPI_IO
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
#ifndef _0525SG12_ESPI_IO_COMPONENT_H_
#define _0525SG12_ESPI_IO_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR ESPI_IO                                      */
/* ************************************************************************** */

/* -------- ESPI_IO_IND : (ESPI_IO Offset: 0x00) (R/W 8) The INDEX register, which is part of the Configuration Port, is used as a pointer to a Configuration Register Address. -------- */
#define ESPI_IO_IND_RESETVALUE                _UINT8_(0x00)                                        /*  (ESPI_IO_IND) The INDEX register, which is part of the Configuration Port, is used as a pointer to a Configuration Register Address.  Reset Value */

#define ESPI_IO_IND_Msk                       _UINT8_(0x00)                                        /* (ESPI_IO_IND) Register Mask  */


/* -------- ESPI_IO_DAT_REG : (ESPI_IO Offset: 0x01) (R/W 8) The DATA register, which is part of the Configuration Port, is used to read or write data to the register currently being selected by the INDEX Register. -------- */
#define ESPI_IO_DAT_REG_RESETVALUE            _UINT8_(0x00)                                        /*  (ESPI_IO_DAT_REG) The DATA register, which is part of the Configuration Port, is used to read or write data to the register currently being selected by the INDEX Register.  Reset Value */

#define ESPI_IO_DAT_REG_Msk                   _UINT8_(0x00)                                        /* (ESPI_IO_DAT_REG) Register Mask  */


/* -------- ESPI_IO_PC_LC_ADDR_LSW : (ESPI_IO Offset: 0x100) ( R/ 32) Peripheral Channel Last Cycle Register (DWord 0) -------- */
#define ESPI_IO_PC_LC_ADDR_LSW_RESETVALUE     _UINT32_(0x00)                                       /*  (ESPI_IO_PC_LC_ADDR_LSW) Peripheral Channel Last Cycle Register (DWord 0)  Reset Value */

#define ESPI_IO_PC_LC_ADDR_LSW_LADR_Pos       _UINT32_(0)                                          /* (ESPI_IO_PC_LC_ADDR_LSW) This field records bits[31:0] of the 64 bit address of the most recent eSPI transaction. Position */
#define ESPI_IO_PC_LC_ADDR_LSW_LADR_Msk       (_UINT32_(0xFFFFFFFF) << ESPI_IO_PC_LC_ADDR_LSW_LADR_Pos) /* (ESPI_IO_PC_LC_ADDR_LSW) This field records bits[31:0] of the 64 bit address of the most recent eSPI transaction. Mask */
#define ESPI_IO_PC_LC_ADDR_LSW_LADR(value)    (ESPI_IO_PC_LC_ADDR_LSW_LADR_Msk & (_UINT32_(value) << ESPI_IO_PC_LC_ADDR_LSW_LADR_Pos)) /* Assigment of value for LADR in the ESPI_IO_PC_LC_ADDR_LSW register */
#define ESPI_IO_PC_LC_ADDR_LSW_Msk            _UINT32_(0xFFFFFFFF)                                 /* (ESPI_IO_PC_LC_ADDR_LSW) Register Mask  */


/* -------- ESPI_IO_PC_LC_ADDR_MSW : (ESPI_IO Offset: 0x104) ( R/ 32) Peripheral Channel Last Cycle Register (DWord 1) -------- */
#define ESPI_IO_PC_LC_ADDR_MSW_RESETVALUE     _UINT32_(0x00)                                       /*  (ESPI_IO_PC_LC_ADDR_MSW) Peripheral Channel Last Cycle Register (DWord 1)  Reset Value */

#define ESPI_IO_PC_LC_ADDR_MSW_MADR_Pos       _UINT32_(0)                                          /* (ESPI_IO_PC_LC_ADDR_MSW) This field records bits[63:32] of the 64 bit address of the most recent eSPI transaction. Position */
#define ESPI_IO_PC_LC_ADDR_MSW_MADR_Msk       (_UINT32_(0xFFFFFFFF) << ESPI_IO_PC_LC_ADDR_MSW_MADR_Pos) /* (ESPI_IO_PC_LC_ADDR_MSW) This field records bits[63:32] of the 64 bit address of the most recent eSPI transaction. Mask */
#define ESPI_IO_PC_LC_ADDR_MSW_MADR(value)    (ESPI_IO_PC_LC_ADDR_MSW_MADR_Msk & (_UINT32_(value) << ESPI_IO_PC_LC_ADDR_MSW_MADR_Pos)) /* Assigment of value for MADR in the ESPI_IO_PC_LC_ADDR_MSW register */
#define ESPI_IO_PC_LC_ADDR_MSW_Msk            _UINT32_(0xFFFFFFFF)                                 /* (ESPI_IO_PC_LC_ADDR_MSW) Register Mask  */


/* -------- ESPI_IO_PC_LC_LEN_TYPE_TAG : (ESPI_IO Offset: 0x108) ( R/ 32) Peripheral Channel Last Cycle Register (DWord 2) -------- */
#define ESPI_IO_PC_LC_LEN_TYPE_TAG_RESETVALUE _UINT32_(0x00)                                       /*  (ESPI_IO_PC_LC_LEN_TYPE_TAG) Peripheral Channel Last Cycle Register (DWord 2)  Reset Value */

#define ESPI_IO_PC_LC_LEN_TYPE_TAG_PC_LEN_Pos _UINT32_(0)                                          /* (ESPI_IO_PC_LC_LEN_TYPE_TAG) This field records the length of the most recent eSPI transaction. Position */
#define ESPI_IO_PC_LC_LEN_TYPE_TAG_PC_LEN_Msk (_UINT32_(0xFFF) << ESPI_IO_PC_LC_LEN_TYPE_TAG_PC_LEN_Pos) /* (ESPI_IO_PC_LC_LEN_TYPE_TAG) This field records the length of the most recent eSPI transaction. Mask */
#define ESPI_IO_PC_LC_LEN_TYPE_TAG_PC_LEN(value) (ESPI_IO_PC_LC_LEN_TYPE_TAG_PC_LEN_Msk & (_UINT32_(value) << ESPI_IO_PC_LC_LEN_TYPE_TAG_PC_LEN_Pos)) /* Assigment of value for PC_LEN in the ESPI_IO_PC_LC_LEN_TYPE_TAG register */
#define ESPI_IO_PC_LC_LEN_TYPE_TAG_PC_CY_TYPE_Pos _UINT32_(12)                                         /* (ESPI_IO_PC_LC_LEN_TYPE_TAG) This field records the cycle type of the most recent eSPI transaction. Position */
#define ESPI_IO_PC_LC_LEN_TYPE_TAG_PC_CY_TYPE_Msk (_UINT32_(0xFF) << ESPI_IO_PC_LC_LEN_TYPE_TAG_PC_CY_TYPE_Pos) /* (ESPI_IO_PC_LC_LEN_TYPE_TAG) This field records the cycle type of the most recent eSPI transaction. Mask */
#define ESPI_IO_PC_LC_LEN_TYPE_TAG_PC_CY_TYPE(value) (ESPI_IO_PC_LC_LEN_TYPE_TAG_PC_CY_TYPE_Msk & (_UINT32_(value) << ESPI_IO_PC_LC_LEN_TYPE_TAG_PC_CY_TYPE_Pos)) /* Assigment of value for PC_CY_TYPE in the ESPI_IO_PC_LC_LEN_TYPE_TAG register */
#define ESPI_IO_PC_LC_LEN_TYPE_TAG_PC_TAG_Pos _UINT32_(20)                                         /* (ESPI_IO_PC_LC_LEN_TYPE_TAG) This field records the tag of the most recent eSPI transaction. Position */
#define ESPI_IO_PC_LC_LEN_TYPE_TAG_PC_TAG_Msk (_UINT32_(0xF) << ESPI_IO_PC_LC_LEN_TYPE_TAG_PC_TAG_Pos) /* (ESPI_IO_PC_LC_LEN_TYPE_TAG) This field records the tag of the most recent eSPI transaction. Mask */
#define ESPI_IO_PC_LC_LEN_TYPE_TAG_PC_TAG(value) (ESPI_IO_PC_LC_LEN_TYPE_TAG_PC_TAG_Msk & (_UINT32_(value) << ESPI_IO_PC_LC_LEN_TYPE_TAG_PC_TAG_Pos)) /* Assigment of value for PC_TAG in the ESPI_IO_PC_LC_LEN_TYPE_TAG register */
#define ESPI_IO_PC_LC_LEN_TYPE_TAG_Msk        _UINT32_(0x00FFFFFF)                                 /* (ESPI_IO_PC_LC_LEN_TYPE_TAG) Register Mask  */


/* -------- ESPI_IO_PC_ERR_ADDR_LSW : (ESPI_IO Offset: 0x10C) ( R/ 32) Peripheral Channel Error Address Register (DWord 0) -------- */
#define ESPI_IO_PC_ERR_ADDR_LSW_RESETVALUE    _UINT32_(0x00)                                       /*  (ESPI_IO_PC_ERR_ADDR_LSW) Peripheral Channel Error Address Register (DWord 0)  Reset Value */

#define ESPI_IO_PC_ERR_ADDR_LSW_LSDW_Pos      _UINT32_(0)                                          /* (ESPI_IO_PC_ERR_ADDR_LSW) This field records bits[31:0] of the 64 bit address of the most recent eSPI transaction that incurred an error. Position */
#define ESPI_IO_PC_ERR_ADDR_LSW_LSDW_Msk      (_UINT32_(0xFFFFFFFF) << ESPI_IO_PC_ERR_ADDR_LSW_LSDW_Pos) /* (ESPI_IO_PC_ERR_ADDR_LSW) This field records bits[31:0] of the 64 bit address of the most recent eSPI transaction that incurred an error. Mask */
#define ESPI_IO_PC_ERR_ADDR_LSW_LSDW(value)   (ESPI_IO_PC_ERR_ADDR_LSW_LSDW_Msk & (_UINT32_(value) << ESPI_IO_PC_ERR_ADDR_LSW_LSDW_Pos)) /* Assigment of value for LSDW in the ESPI_IO_PC_ERR_ADDR_LSW register */
#define ESPI_IO_PC_ERR_ADDR_LSW_Msk           _UINT32_(0xFFFFFFFF)                                 /* (ESPI_IO_PC_ERR_ADDR_LSW) Register Mask  */


/* -------- ESPI_IO_PC_ERR_ADDR_MSW : (ESPI_IO Offset: 0x110) ( R/ 32) Peripheral Channel Error Address Register (DWord 1) -------- */
#define ESPI_IO_PC_ERR_ADDR_MSW_RESETVALUE    _UINT32_(0x00)                                       /*  (ESPI_IO_PC_ERR_ADDR_MSW) Peripheral Channel Error Address Register (DWord 1)  Reset Value */

#define ESPI_IO_PC_ERR_ADDR_MSW_MSDW_Pos      _UINT32_(0)                                          /* (ESPI_IO_PC_ERR_ADDR_MSW) This field records bits[63:32] of the 64 bit  address of the most recent eSPI transaction that incurred an error. Position */
#define ESPI_IO_PC_ERR_ADDR_MSW_MSDW_Msk      (_UINT32_(0xFFFFFFFF) << ESPI_IO_PC_ERR_ADDR_MSW_MSDW_Pos) /* (ESPI_IO_PC_ERR_ADDR_MSW) This field records bits[63:32] of the 64 bit  address of the most recent eSPI transaction that incurred an error. Mask */
#define ESPI_IO_PC_ERR_ADDR_MSW_MSDW(value)   (ESPI_IO_PC_ERR_ADDR_MSW_MSDW_Msk & (_UINT32_(value) << ESPI_IO_PC_ERR_ADDR_MSW_MSDW_Pos)) /* Assigment of value for MSDW in the ESPI_IO_PC_ERR_ADDR_MSW register */
#define ESPI_IO_PC_ERR_ADDR_MSW_Msk           _UINT32_(0xFFFFFFFF)                                 /* (ESPI_IO_PC_ERR_ADDR_MSW) Register Mask  */


/* -------- ESPI_IO_PC_STATUS : (ESPI_IO Offset: 0x114) (R/W 32) Peripheral Channel Status Register -------- */
#define ESPI_IO_PC_STATUS_RESETVALUE          _UINT32_(0x00)                                       /*  (ESPI_IO_PC_STATUS) Peripheral Channel Status Register  Reset Value */

#define ESPI_IO_PC_STATUS_VIR_RD_Pos          _UINT32_(0)                                          /* (ESPI_IO_PC_STATUS) This bit is set whenever a eSPI read transaction targeting a Logical Device with an I/O BAR or a Memory BAR in which the VIRTUALIZED bit\n      is set. (R/WC) Position */
#define ESPI_IO_PC_STATUS_VIR_RD_Msk          (_UINT32_(0x1) << ESPI_IO_PC_STATUS_VIR_RD_Pos)      /* (ESPI_IO_PC_STATUS) This bit is set whenever a eSPI read transaction targeting a Logical Device with an I/O BAR or a Memory BAR in which the VIRTUALIZED bit\n      is set. (R/WC) Mask */
#define ESPI_IO_PC_STATUS_VIR_RD(value)       (ESPI_IO_PC_STATUS_VIR_RD_Msk & (_UINT32_(value) << ESPI_IO_PC_STATUS_VIR_RD_Pos)) /* Assigment of value for VIR_RD in the ESPI_IO_PC_STATUS register */
#define ESPI_IO_PC_STATUS_VIR_WR_Pos          _UINT32_(1)                                          /* (ESPI_IO_PC_STATUS) This bit is set whenever a eSPI write transaction targeting a Logical Device with an I/O BAR or a Memory BAR in which the VIRTUALIZED bit\n      is set. (R/WC) Position */
#define ESPI_IO_PC_STATUS_VIR_WR_Msk          (_UINT32_(0x1) << ESPI_IO_PC_STATUS_VIR_WR_Pos)      /* (ESPI_IO_PC_STATUS) This bit is set whenever a eSPI write transaction targeting a Logical Device with an I/O BAR or a Memory BAR in which the VIRTUALIZED bit\n      is set. (R/WC) Mask */
#define ESPI_IO_PC_STATUS_VIR_WR(value)       (ESPI_IO_PC_STATUS_VIR_WR_Msk & (_UINT32_(value) << ESPI_IO_PC_STATUS_VIR_WR_Pos)) /* Assigment of value for VIR_WR in the ESPI_IO_PC_STATUS register */
#define ESPI_IO_PC_STATUS_VIR_TYP_Pos         _UINT32_(2)                                          /* (ESPI_IO_PC_STATUS) This bit returns the type of Virtualized eSPI transaction that is\n      1=Peripheral Channel Memory Address access\n      0=Peripheral Channel I/O Address access. Position */
#define ESPI_IO_PC_STATUS_VIR_TYP_Msk         (_UINT32_(0x1) << ESPI_IO_PC_STATUS_VIR_TYP_Pos)     /* (ESPI_IO_PC_STATUS) This bit returns the type of Virtualized eSPI transaction that is\n      1=Peripheral Channel Memory Address access\n      0=Peripheral Channel I/O Address access. Mask */
#define ESPI_IO_PC_STATUS_VIR_TYP(value)      (ESPI_IO_PC_STATUS_VIR_TYP_Msk & (_UINT32_(value) << ESPI_IO_PC_STATUS_VIR_TYP_Pos)) /* Assigment of value for VIR_TYP in the ESPI_IO_PC_STATUS register */
#define ESPI_IO_PC_STATUS_VIR_BAR_LDN_Pos     _UINT32_(8)                                          /* (ESPI_IO_PC_STATUS) This field returns the Logical Device Number of the device targeted by the most recent virtual transaction. Position */
#define ESPI_IO_PC_STATUS_VIR_BAR_LDN_Msk     (_UINT32_(0x3F) << ESPI_IO_PC_STATUS_VIR_BAR_LDN_Pos) /* (ESPI_IO_PC_STATUS) This field returns the Logical Device Number of the device targeted by the most recent virtual transaction. Mask */
#define ESPI_IO_PC_STATUS_VIR_BAR_LDN(value)  (ESPI_IO_PC_STATUS_VIR_BAR_LDN_Msk & (_UINT32_(value) << ESPI_IO_PC_STATUS_VIR_BAR_LDN_Pos)) /* Assigment of value for VIR_BAR_LDN in the ESPI_IO_PC_STATUS register */
#define ESPI_IO_PC_STATUS_PC_BUS_ERROR_Pos    _UINT32_(16)                                         /* (ESPI_IO_PC_STATUS) This bit is set to '1' whenever an eSPI access causes an internal bus error. Once set, it remains set until cleared by being written\n      with a 1. (R/WC) Position */
#define ESPI_IO_PC_STATUS_PC_BUS_ERROR_Msk    (_UINT32_(0x1) << ESPI_IO_PC_STATUS_PC_BUS_ERROR_Pos) /* (ESPI_IO_PC_STATUS) This bit is set to '1' whenever an eSPI access causes an internal bus error. Once set, it remains set until cleared by being written\n      with a 1. (R/WC) Mask */
#define ESPI_IO_PC_STATUS_PC_BUS_ERROR(value) (ESPI_IO_PC_STATUS_PC_BUS_ERROR_Msk & (_UINT32_(value) << ESPI_IO_PC_STATUS_PC_BUS_ERROR_Pos)) /* Assigment of value for PC_BUS_ERROR in the ESPI_IO_PC_STATUS register */
#define ESPI_IO_PC_STATUS_BAR_CONFL_Pos       _UINT32_(17)                                         /* (ESPI_IO_PC_STATUS) This bit is set to '1' whenever a BAR conflict occurs on an eSPI address. A BAR conflict occurs when more than one BAR matches\n      the address of an eSPI transaction. Once set, it remains set until cleared by being written with a 1. (R/WC) Position */
#define ESPI_IO_PC_STATUS_BAR_CONFL_Msk       (_UINT32_(0x1) << ESPI_IO_PC_STATUS_BAR_CONFL_Pos)   /* (ESPI_IO_PC_STATUS) This bit is set to '1' whenever a BAR conflict occurs on an eSPI address. A BAR conflict occurs when more than one BAR matches\n      the address of an eSPI transaction. Once set, it remains set until cleared by being written with a 1. (R/WC) Mask */
#define ESPI_IO_PC_STATUS_BAR_CONFL(value)    (ESPI_IO_PC_STATUS_BAR_CONFL_Msk & (_UINT32_(value) << ESPI_IO_PC_STATUS_BAR_CONFL_Pos)) /* Assigment of value for BAR_CONFL in the ESPI_IO_PC_STATUS register */
#define ESPI_IO_PC_STATUS_CHN_EN_STS_Pos      _UINT32_(24)                                         /* (ESPI_IO_PC_STATUS) This bit reflects the Host writable configuration field. Position */
#define ESPI_IO_PC_STATUS_CHN_EN_STS_Msk      (_UINT32_(0x1) << ESPI_IO_PC_STATUS_CHN_EN_STS_Pos)  /* (ESPI_IO_PC_STATUS) This bit reflects the Host writable configuration field. Mask */
#define ESPI_IO_PC_STATUS_CHN_EN_STS(value)   (ESPI_IO_PC_STATUS_CHN_EN_STS_Msk & (_UINT32_(value) << ESPI_IO_PC_STATUS_CHN_EN_STS_Pos)) /* Assigment of value for CHN_EN_STS in the ESPI_IO_PC_STATUS register */
#define ESPI_IO_PC_STATUS_EN_CHNG_Pos         _UINT32_(25)                                         /* (ESPI_IO_PC_STATUS) This bit is set to '1' whenever the field PC_CHANNEL_ENABLE_STATUS in this register changes. Once set, it remains set until cleared by being written with a 1. (R/WC) Position */
#define ESPI_IO_PC_STATUS_EN_CHNG_Msk         (_UINT32_(0x1) << ESPI_IO_PC_STATUS_EN_CHNG_Pos)     /* (ESPI_IO_PC_STATUS) This bit is set to '1' whenever the field PC_CHANNEL_ENABLE_STATUS in this register changes. Once set, it remains set until cleared by being written with a 1. (R/WC) Mask */
#define ESPI_IO_PC_STATUS_EN_CHNG(value)      (ESPI_IO_PC_STATUS_EN_CHNG_Msk & (_UINT32_(value) << ESPI_IO_PC_STATUS_EN_CHNG_Pos)) /* Assigment of value for EN_CHNG in the ESPI_IO_PC_STATUS register */
#define ESPI_IO_PC_STATUS_M_EN_STS_Pos        _UINT32_(27)                                         /* (ESPI_IO_PC_STATUS) This bit is 1 if three bits in the Peripheral Channel Capabilities and Configurations register, Peripheral Channel Mastering Enable,\n      Peripheral Channel Ready and Peripheral Channel Enable, are all 1, and 0 otherwise. Position */
#define ESPI_IO_PC_STATUS_M_EN_STS_Msk        (_UINT32_(0x1) << ESPI_IO_PC_STATUS_M_EN_STS_Pos)    /* (ESPI_IO_PC_STATUS) This bit is 1 if three bits in the Peripheral Channel Capabilities and Configurations register, Peripheral Channel Mastering Enable,\n      Peripheral Channel Ready and Peripheral Channel Enable, are all 1, and 0 otherwise. Mask */
#define ESPI_IO_PC_STATUS_M_EN_STS(value)     (ESPI_IO_PC_STATUS_M_EN_STS_Msk & (_UINT32_(value) << ESPI_IO_PC_STATUS_M_EN_STS_Pos)) /* Assigment of value for M_EN_STS in the ESPI_IO_PC_STATUS register */
#define ESPI_IO_PC_STATUS_M_EN_CHNG_Pos       _UINT32_(28)                                         /* (ESPI_IO_PC_STATUS) This bit is set to '1' whenever the field PC_MASTERING_ENABLE_STATUS in this register changes. Once set, it remains set until cleared by being written with a 1 (R/WC) Position */
#define ESPI_IO_PC_STATUS_M_EN_CHNG_Msk       (_UINT32_(0x1) << ESPI_IO_PC_STATUS_M_EN_CHNG_Pos)   /* (ESPI_IO_PC_STATUS) This bit is set to '1' whenever the field PC_MASTERING_ENABLE_STATUS in this register changes. Once set, it remains set until cleared by being written with a 1 (R/WC) Mask */
#define ESPI_IO_PC_STATUS_M_EN_CHNG(value)    (ESPI_IO_PC_STATUS_M_EN_CHNG_Msk & (_UINT32_(value) << ESPI_IO_PC_STATUS_M_EN_CHNG_Pos)) /* Assigment of value for M_EN_CHNG in the ESPI_IO_PC_STATUS register */
#define ESPI_IO_PC_STATUS_Msk                 _UINT32_(0x1B033F07)                                 /* (ESPI_IO_PC_STATUS) Register Mask  */


/* -------- ESPI_IO_PC_IEN : (ESPI_IO Offset: 0x118) (R/W 32) Peripheral Channel Interrupt Enable Register -------- */
#define ESPI_IO_PC_IEN_RESETVALUE             _UINT32_(0x00)                                       /*  (ESPI_IO_PC_IEN) Peripheral Channel Interrupt Enable Register  Reset Value */

#define ESPI_IO_PC_IEN_VIR_RD_EN_Pos          _UINT32_(0)                                          /* (ESPI_IO_PC_IEN) When this bit is '1' an interrupt is generated when the bit PC_VIRTUAL_READ in the Peripheral Channel Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Position */
#define ESPI_IO_PC_IEN_VIR_RD_EN_Msk          (_UINT32_(0x1) << ESPI_IO_PC_IEN_VIR_RD_EN_Pos)      /* (ESPI_IO_PC_IEN) When this bit is '1' an interrupt is generated when the bit PC_VIRTUAL_READ in the Peripheral Channel Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Mask */
#define ESPI_IO_PC_IEN_VIR_RD_EN(value)       (ESPI_IO_PC_IEN_VIR_RD_EN_Msk & (_UINT32_(value) << ESPI_IO_PC_IEN_VIR_RD_EN_Pos)) /* Assigment of value for VIR_RD_EN in the ESPI_IO_PC_IEN register */
#define ESPI_IO_PC_IEN_VIR_WR_EN_Pos          _UINT32_(1)                                          /* (ESPI_IO_PC_IEN) When this bit is '1' an interrupt is generated when the bit PC_VIRTUAL_WRITE in the Peripheral Channel Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Position */
#define ESPI_IO_PC_IEN_VIR_WR_EN_Msk          (_UINT32_(0x1) << ESPI_IO_PC_IEN_VIR_WR_EN_Pos)      /* (ESPI_IO_PC_IEN) When this bit is '1' an interrupt is generated when the bit PC_VIRTUAL_WRITE in the Peripheral Channel Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Mask */
#define ESPI_IO_PC_IEN_VIR_WR_EN(value)       (ESPI_IO_PC_IEN_VIR_WR_EN_Msk & (_UINT32_(value) << ESPI_IO_PC_IEN_VIR_WR_EN_Pos)) /* Assigment of value for VIR_WR_EN in the ESPI_IO_PC_IEN register */
#define ESPI_IO_PC_IEN_BUS_ERR_EN_Pos         _UINT32_(16)                                         /* (ESPI_IO_PC_IEN) When this bit is '1' an interrupt is generated when the bit PC_BUS_ERROR in the Peripheral Channel Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Position */
#define ESPI_IO_PC_IEN_BUS_ERR_EN_Msk         (_UINT32_(0x1) << ESPI_IO_PC_IEN_BUS_ERR_EN_Pos)     /* (ESPI_IO_PC_IEN) When this bit is '1' an interrupt is generated when the bit PC_BUS_ERROR in the Peripheral Channel Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Mask */
#define ESPI_IO_PC_IEN_BUS_ERR_EN(value)      (ESPI_IO_PC_IEN_BUS_ERR_EN_Msk & (_UINT32_(value) << ESPI_IO_PC_IEN_BUS_ERR_EN_Pos)) /* Assigment of value for BUS_ERR_EN in the ESPI_IO_PC_IEN register */
#define ESPI_IO_PC_IEN_BAR_CONFL_EN_Pos       _UINT32_(17)                                         /* (ESPI_IO_PC_IEN) When this bit is '1' an interrupt is generated when the bit BAR_CONFLICT in the Peripheral Channel Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Position */
#define ESPI_IO_PC_IEN_BAR_CONFL_EN_Msk       (_UINT32_(0x1) << ESPI_IO_PC_IEN_BAR_CONFL_EN_Pos)   /* (ESPI_IO_PC_IEN) When this bit is '1' an interrupt is generated when the bit BAR_CONFLICT in the Peripheral Channel Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Mask */
#define ESPI_IO_PC_IEN_BAR_CONFL_EN(value)    (ESPI_IO_PC_IEN_BAR_CONFL_EN_Msk & (_UINT32_(value) << ESPI_IO_PC_IEN_BAR_CONFL_EN_Pos)) /* Assigment of value for BAR_CONFL_EN in the ESPI_IO_PC_IEN register */
#define ESPI_IO_PC_IEN_EN_CHNG_EN_Pos         _UINT32_(25)                                         /* (ESPI_IO_PC_IEN) When this bit is '1' an interrupt is generated when the bit PC_ENABLE_CHANGE in the Peripheral Channel Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Position */
#define ESPI_IO_PC_IEN_EN_CHNG_EN_Msk         (_UINT32_(0x1) << ESPI_IO_PC_IEN_EN_CHNG_EN_Pos)     /* (ESPI_IO_PC_IEN) When this bit is '1' an interrupt is generated when the bit PC_ENABLE_CHANGE in the Peripheral Channel Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Mask */
#define ESPI_IO_PC_IEN_EN_CHNG_EN(value)      (ESPI_IO_PC_IEN_EN_CHNG_EN_Msk & (_UINT32_(value) << ESPI_IO_PC_IEN_EN_CHNG_EN_Pos)) /* Assigment of value for EN_CHNG_EN in the ESPI_IO_PC_IEN register */
#define ESPI_IO_PC_IEN_M_EN_CHNG_EN_Pos       _UINT32_(28)                                         /* (ESPI_IO_PC_IEN) When this bit is '1' an interrupt is generated when the bit PC_MASTERING_ENABLE_CHANGE in the Peripheral Channel Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Position */
#define ESPI_IO_PC_IEN_M_EN_CHNG_EN_Msk       (_UINT32_(0x1) << ESPI_IO_PC_IEN_M_EN_CHNG_EN_Pos)   /* (ESPI_IO_PC_IEN) When this bit is '1' an interrupt is generated when the bit PC_MASTERING_ENABLE_CHANGE in the Peripheral Channel Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Mask */
#define ESPI_IO_PC_IEN_M_EN_CHNG_EN(value)    (ESPI_IO_PC_IEN_M_EN_CHNG_EN_Msk & (_UINT32_(value) << ESPI_IO_PC_IEN_M_EN_CHNG_EN_Pos)) /* Assigment of value for M_EN_CHNG_EN in the ESPI_IO_PC_IEN register */
#define ESPI_IO_PC_IEN_Msk                    _UINT32_(0x12030003)                                 /* (ESPI_IO_PC_IEN) Register Mask  */


/* -------- ESPI_IO_IOBAR_INH_LSW : (ESPI_IO Offset: 0x120) (R/W 32) BAR Inhibit Register (DWord 0) -------- */
#define ESPI_IO_IOBAR_INH_LSW_RESETVALUE      _UINT32_(0x00)                                       /*  (ESPI_IO_IOBAR_INH_LSW) BAR Inhibit Register (DWord 0)  Reset Value */

#define ESPI_IO_IOBAR_INH_LSW_LSDW_Pos        _UINT32_(0)                                          /* (ESPI_IO_IOBAR_INH_LSW) When bit Di of BAR_Inhibit is 1, the BAR for Logical Device i is disabled and its addresses will not be claimed on the eSPI\n      bus, independent of the value of the Valid bit in the BAR. The BAR Inhibit function applies to both I/O transactions and Memory transactions. Position */
#define ESPI_IO_IOBAR_INH_LSW_LSDW_Msk        (_UINT32_(0xFFFFFFFF) << ESPI_IO_IOBAR_INH_LSW_LSDW_Pos) /* (ESPI_IO_IOBAR_INH_LSW) When bit Di of BAR_Inhibit is 1, the BAR for Logical Device i is disabled and its addresses will not be claimed on the eSPI\n      bus, independent of the value of the Valid bit in the BAR. The BAR Inhibit function applies to both I/O transactions and Memory transactions. Mask */
#define ESPI_IO_IOBAR_INH_LSW_LSDW(value)     (ESPI_IO_IOBAR_INH_LSW_LSDW_Msk & (_UINT32_(value) << ESPI_IO_IOBAR_INH_LSW_LSDW_Pos)) /* Assigment of value for LSDW in the ESPI_IO_IOBAR_INH_LSW register */
#define ESPI_IO_IOBAR_INH_LSW_Msk             _UINT32_(0xFFFFFFFF)                                 /* (ESPI_IO_IOBAR_INH_LSW) Register Mask  */


/* -------- ESPI_IO_IOBAR_INH_MSW : (ESPI_IO Offset: 0x124) (R/W 32) BAR Inhibit Register (DWord 1) -------- */
#define ESPI_IO_IOBAR_INH_MSW_RESETVALUE      _UINT32_(0x00)                                       /*  (ESPI_IO_IOBAR_INH_MSW) BAR Inhibit Register (DWord 1)  Reset Value */

#define ESPI_IO_IOBAR_INH_MSW_MSDW_Pos        _UINT32_(0)                                          /* (ESPI_IO_IOBAR_INH_MSW) When bit Di of BAR_Inhibit is 1, the BAR for Logical Device i is disabled and its addresses will not be claimed on the eSPI\n      bus, independent of the value of the Valid bit in the BAR. The BAR Inhibit function applies to both I/O transactions and Memory transactions. Position */
#define ESPI_IO_IOBAR_INH_MSW_MSDW_Msk        (_UINT32_(0xFFFFFFFF) << ESPI_IO_IOBAR_INH_MSW_MSDW_Pos) /* (ESPI_IO_IOBAR_INH_MSW) When bit Di of BAR_Inhibit is 1, the BAR for Logical Device i is disabled and its addresses will not be claimed on the eSPI\n      bus, independent of the value of the Valid bit in the BAR. The BAR Inhibit function applies to both I/O transactions and Memory transactions. Mask */
#define ESPI_IO_IOBAR_INH_MSW_MSDW(value)     (ESPI_IO_IOBAR_INH_MSW_MSDW_Msk & (_UINT32_(value) << ESPI_IO_IOBAR_INH_MSW_MSDW_Pos)) /* Assigment of value for MSDW in the ESPI_IO_IOBAR_INH_MSW register */
#define ESPI_IO_IOBAR_INH_MSW_Msk             _UINT32_(0xFFFFFFFF)                                 /* (ESPI_IO_IOBAR_INH_MSW) Register Mask  */


/* -------- ESPI_IO_IOBAR_INIT : (ESPI_IO Offset: 0x128) (R/W 32) eSPI BAR Init Register -------- */
#define ESPI_IO_IOBAR_INIT_RESETVALUE         _UINT32_(0x2E)                                       /*  (ESPI_IO_IOBAR_INIT) eSPI BAR Init Register  Reset Value */

#define ESPI_IO_IOBAR_INIT_INIT_Pos           _UINT32_(0)                                          /* (ESPI_IO_IOBAR_INIT) This field is loaded into the Base Address Register register for Logical Device Ch (eSPI, I/O Configuration Port) on RESET_SIO. Position */
#define ESPI_IO_IOBAR_INIT_INIT_Msk           (_UINT32_(0xFFFF) << ESPI_IO_IOBAR_INIT_INIT_Pos)    /* (ESPI_IO_IOBAR_INIT) This field is loaded into the Base Address Register register for Logical Device Ch (eSPI, I/O Configuration Port) on RESET_SIO. Mask */
#define ESPI_IO_IOBAR_INIT_INIT(value)        (ESPI_IO_IOBAR_INIT_INIT_Msk & (_UINT32_(value) << ESPI_IO_IOBAR_INIT_INIT_Pos)) /* Assigment of value for INIT in the ESPI_IO_IOBAR_INIT register */
#define ESPI_IO_IOBAR_INIT_Msk                _UINT32_(0x0000FFFF)                                 /* (ESPI_IO_IOBAR_INIT) Register Mask  */


/* -------- ESPI_IO_EC_CTRL_IRQ : (ESPI_IO Offset: 0x12C) (R/W 32) EC IRQ Register -------- */
#define ESPI_IO_EC_CTRL_IRQ_RESETVALUE        _UINT32_(0x00)                                       /*  (ESPI_IO_EC_CTRL_IRQ) EC IRQ Register  Reset Value */

#define ESPI_IO_EC_CTRL_IRQ_IRQ_Pos           _UINT32_(0)                                          /* (ESPI_IO_EC_CTRL_IRQ) This bit can be used as a firmware-controlled interrupt source for the EC. When the EC entry in the IRQ Assignment Table is set to a\n      valid IRQ number, changes in this bit will be transmitted to the Host over a Virtual Wire IRQ channel. Position */
#define ESPI_IO_EC_CTRL_IRQ_IRQ_Msk           (_UINT32_(0x1) << ESPI_IO_EC_CTRL_IRQ_IRQ_Pos)       /* (ESPI_IO_EC_CTRL_IRQ) This bit can be used as a firmware-controlled interrupt source for the EC. When the EC entry in the IRQ Assignment Table is set to a\n      valid IRQ number, changes in this bit will be transmitted to the Host over a Virtual Wire IRQ channel. Mask */
#define ESPI_IO_EC_CTRL_IRQ_IRQ(value)        (ESPI_IO_EC_CTRL_IRQ_IRQ_Msk & (_UINT32_(value) << ESPI_IO_EC_CTRL_IRQ_IRQ_Pos)) /* Assigment of value for IRQ in the ESPI_IO_EC_CTRL_IRQ register */
#define ESPI_IO_EC_CTRL_IRQ_Msk               _UINT32_(0x00000001)                                 /* (ESPI_IO_EC_CTRL_IRQ) Register Mask  */


/* -------- ESPI_IO_BASE_ADDR : (ESPI_IO Offset: 0x134) (R/W 32) eSPI I/O Base Address Register -------- */
#define ESPI_IO_BASE_ADDR_RESETVALUE          _UINT32_(0xD01)                                      /*  (ESPI_IO_BASE_ADDR) eSPI I/O Base Address Register  Reset Value */

#define ESPI_IO_BASE_ADDR_MASK_Pos            _UINT32_(0)                                          /* (ESPI_IO_BASE_ADDR) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_IO_BASE_ADDR_MASK_Msk            (_UINT32_(0xFF) << ESPI_IO_BASE_ADDR_MASK_Pos)       /* (ESPI_IO_BASE_ADDR) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_IO_BASE_ADDR_MASK(value)         (ESPI_IO_BASE_ADDR_MASK_Msk & (_UINT32_(value) << ESPI_IO_BASE_ADDR_MASK_Pos)) /* Assigment of value for MASK in the ESPI_IO_BASE_ADDR register */
#define ESPI_IO_BASE_ADDR_LDN_Pos             _UINT32_(8)                                          /* (ESPI_IO_BASE_ADDR) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_IO_BASE_ADDR_LDN_Msk             (_UINT32_(0x3F) << ESPI_IO_BASE_ADDR_LDN_Pos)        /* (ESPI_IO_BASE_ADDR) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_IO_BASE_ADDR_LDN(value)          (ESPI_IO_BASE_ADDR_LDN_Msk & (_UINT32_(value) << ESPI_IO_BASE_ADDR_LDN_Pos)) /* Assigment of value for LDN in the ESPI_IO_BASE_ADDR register */
#define ESPI_IO_BASE_ADDR_VIR_Pos             _UINT32_(16)                                         /* (ESPI_IO_BASE_ADDR) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_IO_BASE_ADDR_VIR_Msk             (_UINT32_(0x1) << ESPI_IO_BASE_ADDR_VIR_Pos)         /* (ESPI_IO_BASE_ADDR) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_IO_BASE_ADDR_VIR(value)          (ESPI_IO_BASE_ADDR_VIR_Msk & (_UINT32_(value) << ESPI_IO_BASE_ADDR_VIR_Pos)) /* Assigment of value for VIR in the ESPI_IO_BASE_ADDR register */
#define ESPI_IO_BASE_ADDR_Msk                 _UINT32_(0x00013FFF)                                 /* (ESPI_IO_BASE_ADDR) Register Mask  */


/* -------- ESPI_IO_ESPI_MEM_BASE_ADDR : (ESPI_IO Offset: 0x138) (R/W 32) eSPI Memory Base Address Register -------- */
#define ESPI_IO_ESPI_MEM_BASE_ADDR_RESETVALUE _UINT32_(0xE00)                                      /*  (ESPI_IO_ESPI_MEM_BASE_ADDR) eSPI Memory Base Address Register  Reset Value */

#define ESPI_IO_ESPI_MEM_BASE_ADDR_MASK_Pos   _UINT32_(0)                                          /* (ESPI_IO_ESPI_MEM_BASE_ADDR) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_IO_ESPI_MEM_BASE_ADDR_MASK_Msk   (_UINT32_(0xFF) << ESPI_IO_ESPI_MEM_BASE_ADDR_MASK_Pos) /* (ESPI_IO_ESPI_MEM_BASE_ADDR) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_IO_ESPI_MEM_BASE_ADDR_MASK(value) (ESPI_IO_ESPI_MEM_BASE_ADDR_MASK_Msk & (_UINT32_(value) << ESPI_IO_ESPI_MEM_BASE_ADDR_MASK_Pos)) /* Assigment of value for MASK in the ESPI_IO_ESPI_MEM_BASE_ADDR register */
#define ESPI_IO_ESPI_MEM_BASE_ADDR_LDN_Pos    _UINT32_(8)                                          /* (ESPI_IO_ESPI_MEM_BASE_ADDR) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_IO_ESPI_MEM_BASE_ADDR_LDN_Msk    (_UINT32_(0x3F) << ESPI_IO_ESPI_MEM_BASE_ADDR_LDN_Pos) /* (ESPI_IO_ESPI_MEM_BASE_ADDR) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_IO_ESPI_MEM_BASE_ADDR_LDN(value) (ESPI_IO_ESPI_MEM_BASE_ADDR_LDN_Msk & (_UINT32_(value) << ESPI_IO_ESPI_MEM_BASE_ADDR_LDN_Pos)) /* Assigment of value for LDN in the ESPI_IO_ESPI_MEM_BASE_ADDR register */
#define ESPI_IO_ESPI_MEM_BASE_ADDR_VIR_Pos    _UINT32_(16)                                         /* (ESPI_IO_ESPI_MEM_BASE_ADDR) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_IO_ESPI_MEM_BASE_ADDR_VIR_Msk    (_UINT32_(0x1) << ESPI_IO_ESPI_MEM_BASE_ADDR_VIR_Pos) /* (ESPI_IO_ESPI_MEM_BASE_ADDR) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_IO_ESPI_MEM_BASE_ADDR_VIR(value) (ESPI_IO_ESPI_MEM_BASE_ADDR_VIR_Msk & (_UINT32_(value) << ESPI_IO_ESPI_MEM_BASE_ADDR_VIR_Pos)) /* Assigment of value for VIR in the ESPI_IO_ESPI_MEM_BASE_ADDR register */
#define ESPI_IO_ESPI_MEM_BASE_ADDR_Msk        _UINT32_(0x00013FFF)                                 /* (ESPI_IO_ESPI_MEM_BASE_ADDR) Register Mask  */


/* -------- ESPI_IO_MBX_BASE_ADDR : (ESPI_IO Offset: 0x13C) (R/W 32) Mailbox BAR  Register -------- */
#define ESPI_IO_MBX_BASE_ADDR_RESETVALUE      _UINT32_(0x01)                                       /*  (ESPI_IO_MBX_BASE_ADDR) Mailbox BAR  Register  Reset Value */

#define ESPI_IO_MBX_BASE_ADDR_MASK_Pos        _UINT32_(0)                                          /* (ESPI_IO_MBX_BASE_ADDR) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_IO_MBX_BASE_ADDR_MASK_Msk        (_UINT32_(0xFF) << ESPI_IO_MBX_BASE_ADDR_MASK_Pos)   /* (ESPI_IO_MBX_BASE_ADDR) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_IO_MBX_BASE_ADDR_MASK(value)     (ESPI_IO_MBX_BASE_ADDR_MASK_Msk & (_UINT32_(value) << ESPI_IO_MBX_BASE_ADDR_MASK_Pos)) /* Assigment of value for MASK in the ESPI_IO_MBX_BASE_ADDR register */
#define ESPI_IO_MBX_BASE_ADDR_LDN_Pos         _UINT32_(8)                                          /* (ESPI_IO_MBX_BASE_ADDR) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_IO_MBX_BASE_ADDR_LDN_Msk         (_UINT32_(0x3F) << ESPI_IO_MBX_BASE_ADDR_LDN_Pos)    /* (ESPI_IO_MBX_BASE_ADDR) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_IO_MBX_BASE_ADDR_LDN(value)      (ESPI_IO_MBX_BASE_ADDR_LDN_Msk & (_UINT32_(value) << ESPI_IO_MBX_BASE_ADDR_LDN_Pos)) /* Assigment of value for LDN in the ESPI_IO_MBX_BASE_ADDR register */
#define ESPI_IO_MBX_BASE_ADDR_VIR_Pos         _UINT32_(16)                                         /* (ESPI_IO_MBX_BASE_ADDR) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_IO_MBX_BASE_ADDR_VIR_Msk         (_UINT32_(0x1) << ESPI_IO_MBX_BASE_ADDR_VIR_Pos)     /* (ESPI_IO_MBX_BASE_ADDR) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_IO_MBX_BASE_ADDR_VIR(value)      (ESPI_IO_MBX_BASE_ADDR_VIR_Msk & (_UINT32_(value) << ESPI_IO_MBX_BASE_ADDR_VIR_Pos)) /* Assigment of value for VIR in the ESPI_IO_MBX_BASE_ADDR register */
#define ESPI_IO_MBX_BASE_ADDR_Msk             _UINT32_(0x00013FFF)                                 /* (ESPI_IO_MBX_BASE_ADDR) Register Mask  */


/* -------- ESPI_IO_EM8042_BASE_ADDR : (ESPI_IO Offset: 0x140) (R/W 32) 8042 Emulated Keyboard Controller BAR Register -------- */
#define ESPI_IO_EM8042_BASE_ADDR_RESETVALUE   _UINT32_(0x104)                                      /*  (ESPI_IO_EM8042_BASE_ADDR) 8042 Emulated Keyboard Controller BAR Register  Reset Value */

#define ESPI_IO_EM8042_BASE_ADDR_MASK_Pos     _UINT32_(0)                                          /* (ESPI_IO_EM8042_BASE_ADDR) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_IO_EM8042_BASE_ADDR_MASK_Msk     (_UINT32_(0xFF) << ESPI_IO_EM8042_BASE_ADDR_MASK_Pos) /* (ESPI_IO_EM8042_BASE_ADDR) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_IO_EM8042_BASE_ADDR_MASK(value)  (ESPI_IO_EM8042_BASE_ADDR_MASK_Msk & (_UINT32_(value) << ESPI_IO_EM8042_BASE_ADDR_MASK_Pos)) /* Assigment of value for MASK in the ESPI_IO_EM8042_BASE_ADDR register */
#define ESPI_IO_EM8042_BASE_ADDR_LDN_Pos      _UINT32_(8)                                          /* (ESPI_IO_EM8042_BASE_ADDR) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_IO_EM8042_BASE_ADDR_LDN_Msk      (_UINT32_(0x3F) << ESPI_IO_EM8042_BASE_ADDR_LDN_Pos) /* (ESPI_IO_EM8042_BASE_ADDR) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_IO_EM8042_BASE_ADDR_LDN(value)   (ESPI_IO_EM8042_BASE_ADDR_LDN_Msk & (_UINT32_(value) << ESPI_IO_EM8042_BASE_ADDR_LDN_Pos)) /* Assigment of value for LDN in the ESPI_IO_EM8042_BASE_ADDR register */
#define ESPI_IO_EM8042_BASE_ADDR_VIR_Pos      _UINT32_(16)                                         /* (ESPI_IO_EM8042_BASE_ADDR) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_IO_EM8042_BASE_ADDR_VIR_Msk      (_UINT32_(0x1) << ESPI_IO_EM8042_BASE_ADDR_VIR_Pos)  /* (ESPI_IO_EM8042_BASE_ADDR) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_IO_EM8042_BASE_ADDR_VIR(value)   (ESPI_IO_EM8042_BASE_ADDR_VIR_Msk & (_UINT32_(value) << ESPI_IO_EM8042_BASE_ADDR_VIR_Pos)) /* Assigment of value for VIR in the ESPI_IO_EM8042_BASE_ADDR register */
#define ESPI_IO_EM8042_BASE_ADDR_Msk          _UINT32_(0x00013FFF)                                 /* (ESPI_IO_EM8042_BASE_ADDR) Register Mask  */


/* -------- ESPI_IO_ACPI_EC_0_BASE_ADDR : (ESPI_IO Offset: 0x144) (R/W 32) ACPI EC Channel 0 Register -------- */
#define ESPI_IO_ACPI_EC_0_BASE_ADDR_RESETVALUE _UINT32_(0x204)                                      /*  (ESPI_IO_ACPI_EC_0_BASE_ADDR) ACPI EC Channel 0 Register  Reset Value */

#define ESPI_IO_ACPI_EC_0_BASE_ADDR_MASK_Pos  _UINT32_(0)                                          /* (ESPI_IO_ACPI_EC_0_BASE_ADDR) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_IO_ACPI_EC_0_BASE_ADDR_MASK_Msk  (_UINT32_(0xFF) << ESPI_IO_ACPI_EC_0_BASE_ADDR_MASK_Pos) /* (ESPI_IO_ACPI_EC_0_BASE_ADDR) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_IO_ACPI_EC_0_BASE_ADDR_MASK(value) (ESPI_IO_ACPI_EC_0_BASE_ADDR_MASK_Msk & (_UINT32_(value) << ESPI_IO_ACPI_EC_0_BASE_ADDR_MASK_Pos)) /* Assigment of value for MASK in the ESPI_IO_ACPI_EC_0_BASE_ADDR register */
#define ESPI_IO_ACPI_EC_0_BASE_ADDR_LDN_Pos   _UINT32_(8)                                          /* (ESPI_IO_ACPI_EC_0_BASE_ADDR) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_IO_ACPI_EC_0_BASE_ADDR_LDN_Msk   (_UINT32_(0x3F) << ESPI_IO_ACPI_EC_0_BASE_ADDR_LDN_Pos) /* (ESPI_IO_ACPI_EC_0_BASE_ADDR) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_IO_ACPI_EC_0_BASE_ADDR_LDN(value) (ESPI_IO_ACPI_EC_0_BASE_ADDR_LDN_Msk & (_UINT32_(value) << ESPI_IO_ACPI_EC_0_BASE_ADDR_LDN_Pos)) /* Assigment of value for LDN in the ESPI_IO_ACPI_EC_0_BASE_ADDR register */
#define ESPI_IO_ACPI_EC_0_BASE_ADDR_VIR_Pos   _UINT32_(16)                                         /* (ESPI_IO_ACPI_EC_0_BASE_ADDR) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_IO_ACPI_EC_0_BASE_ADDR_VIR_Msk   (_UINT32_(0x1) << ESPI_IO_ACPI_EC_0_BASE_ADDR_VIR_Pos) /* (ESPI_IO_ACPI_EC_0_BASE_ADDR) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_IO_ACPI_EC_0_BASE_ADDR_VIR(value) (ESPI_IO_ACPI_EC_0_BASE_ADDR_VIR_Msk & (_UINT32_(value) << ESPI_IO_ACPI_EC_0_BASE_ADDR_VIR_Pos)) /* Assigment of value for VIR in the ESPI_IO_ACPI_EC_0_BASE_ADDR register */
#define ESPI_IO_ACPI_EC_0_BASE_ADDR_Msk       _UINT32_(0x00013FFF)                                 /* (ESPI_IO_ACPI_EC_0_BASE_ADDR) Register Mask  */


/* -------- ESPI_IO_ACPI_EC_1_BASE_ADDR : (ESPI_IO Offset: 0x148) (R/W 32) ACPI EC Channel 1 BAR Register -------- */
#define ESPI_IO_ACPI_EC_1_BASE_ADDR_RESETVALUE _UINT32_(0x307)                                      /*  (ESPI_IO_ACPI_EC_1_BASE_ADDR) ACPI EC Channel 1 BAR Register  Reset Value */

#define ESPI_IO_ACPI_EC_1_BASE_ADDR_MASK_Pos  _UINT32_(0)                                          /* (ESPI_IO_ACPI_EC_1_BASE_ADDR) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_IO_ACPI_EC_1_BASE_ADDR_MASK_Msk  (_UINT32_(0xFF) << ESPI_IO_ACPI_EC_1_BASE_ADDR_MASK_Pos) /* (ESPI_IO_ACPI_EC_1_BASE_ADDR) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_IO_ACPI_EC_1_BASE_ADDR_MASK(value) (ESPI_IO_ACPI_EC_1_BASE_ADDR_MASK_Msk & (_UINT32_(value) << ESPI_IO_ACPI_EC_1_BASE_ADDR_MASK_Pos)) /* Assigment of value for MASK in the ESPI_IO_ACPI_EC_1_BASE_ADDR register */
#define ESPI_IO_ACPI_EC_1_BASE_ADDR_LDN_Pos   _UINT32_(8)                                          /* (ESPI_IO_ACPI_EC_1_BASE_ADDR) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_IO_ACPI_EC_1_BASE_ADDR_LDN_Msk   (_UINT32_(0x3F) << ESPI_IO_ACPI_EC_1_BASE_ADDR_LDN_Pos) /* (ESPI_IO_ACPI_EC_1_BASE_ADDR) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_IO_ACPI_EC_1_BASE_ADDR_LDN(value) (ESPI_IO_ACPI_EC_1_BASE_ADDR_LDN_Msk & (_UINT32_(value) << ESPI_IO_ACPI_EC_1_BASE_ADDR_LDN_Pos)) /* Assigment of value for LDN in the ESPI_IO_ACPI_EC_1_BASE_ADDR register */
#define ESPI_IO_ACPI_EC_1_BASE_ADDR_VIR_Pos   _UINT32_(16)                                         /* (ESPI_IO_ACPI_EC_1_BASE_ADDR) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_IO_ACPI_EC_1_BASE_ADDR_VIR_Msk   (_UINT32_(0x1) << ESPI_IO_ACPI_EC_1_BASE_ADDR_VIR_Pos) /* (ESPI_IO_ACPI_EC_1_BASE_ADDR) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_IO_ACPI_EC_1_BASE_ADDR_VIR(value) (ESPI_IO_ACPI_EC_1_BASE_ADDR_VIR_Msk & (_UINT32_(value) << ESPI_IO_ACPI_EC_1_BASE_ADDR_VIR_Pos)) /* Assigment of value for VIR in the ESPI_IO_ACPI_EC_1_BASE_ADDR register */
#define ESPI_IO_ACPI_EC_1_BASE_ADDR_Msk       _UINT32_(0x00013FFF)                                 /* (ESPI_IO_ACPI_EC_1_BASE_ADDR) Register Mask  */


/* -------- ESPI_IO_ACPI_EC_2_BASE_ADDR : (ESPI_IO Offset: 0x14C) (R/W 32) I/O Base Address Register -------- */
#define ESPI_IO_ACPI_EC_2_BASE_ADDR_RESETVALUE _UINT32_(0x407)                                      /*  (ESPI_IO_ACPI_EC_2_BASE_ADDR) I/O Base Address Register  Reset Value */

#define ESPI_IO_ACPI_EC_2_BASE_ADDR_MASK_Pos  _UINT32_(0)                                          /* (ESPI_IO_ACPI_EC_2_BASE_ADDR) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_IO_ACPI_EC_2_BASE_ADDR_MASK_Msk  (_UINT32_(0xFF) << ESPI_IO_ACPI_EC_2_BASE_ADDR_MASK_Pos) /* (ESPI_IO_ACPI_EC_2_BASE_ADDR) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_IO_ACPI_EC_2_BASE_ADDR_MASK(value) (ESPI_IO_ACPI_EC_2_BASE_ADDR_MASK_Msk & (_UINT32_(value) << ESPI_IO_ACPI_EC_2_BASE_ADDR_MASK_Pos)) /* Assigment of value for MASK in the ESPI_IO_ACPI_EC_2_BASE_ADDR register */
#define ESPI_IO_ACPI_EC_2_BASE_ADDR_LDN_Pos   _UINT32_(8)                                          /* (ESPI_IO_ACPI_EC_2_BASE_ADDR) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_IO_ACPI_EC_2_BASE_ADDR_LDN_Msk   (_UINT32_(0x3F) << ESPI_IO_ACPI_EC_2_BASE_ADDR_LDN_Pos) /* (ESPI_IO_ACPI_EC_2_BASE_ADDR) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_IO_ACPI_EC_2_BASE_ADDR_LDN(value) (ESPI_IO_ACPI_EC_2_BASE_ADDR_LDN_Msk & (_UINT32_(value) << ESPI_IO_ACPI_EC_2_BASE_ADDR_LDN_Pos)) /* Assigment of value for LDN in the ESPI_IO_ACPI_EC_2_BASE_ADDR register */
#define ESPI_IO_ACPI_EC_2_BASE_ADDR_VIR_Pos   _UINT32_(16)                                         /* (ESPI_IO_ACPI_EC_2_BASE_ADDR) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_IO_ACPI_EC_2_BASE_ADDR_VIR_Msk   (_UINT32_(0x1) << ESPI_IO_ACPI_EC_2_BASE_ADDR_VIR_Pos) /* (ESPI_IO_ACPI_EC_2_BASE_ADDR) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_IO_ACPI_EC_2_BASE_ADDR_VIR(value) (ESPI_IO_ACPI_EC_2_BASE_ADDR_VIR_Msk & (_UINT32_(value) << ESPI_IO_ACPI_EC_2_BASE_ADDR_VIR_Pos)) /* Assigment of value for VIR in the ESPI_IO_ACPI_EC_2_BASE_ADDR register */
#define ESPI_IO_ACPI_EC_2_BASE_ADDR_Msk       _UINT32_(0x00013FFF)                                 /* (ESPI_IO_ACPI_EC_2_BASE_ADDR) Register Mask  */


/* -------- ESPI_IO_ACPI_EC_3_BASE_ADDR : (ESPI_IO Offset: 0x150) (R/W 32) I/O Base Address Register -------- */
#define ESPI_IO_ACPI_EC_3_BASE_ADDR_RESETVALUE _UINT32_(0x507)                                      /*  (ESPI_IO_ACPI_EC_3_BASE_ADDR) I/O Base Address Register  Reset Value */

#define ESPI_IO_ACPI_EC_3_BASE_ADDR_MASK_Pos  _UINT32_(0)                                          /* (ESPI_IO_ACPI_EC_3_BASE_ADDR) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_IO_ACPI_EC_3_BASE_ADDR_MASK_Msk  (_UINT32_(0xFF) << ESPI_IO_ACPI_EC_3_BASE_ADDR_MASK_Pos) /* (ESPI_IO_ACPI_EC_3_BASE_ADDR) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_IO_ACPI_EC_3_BASE_ADDR_MASK(value) (ESPI_IO_ACPI_EC_3_BASE_ADDR_MASK_Msk & (_UINT32_(value) << ESPI_IO_ACPI_EC_3_BASE_ADDR_MASK_Pos)) /* Assigment of value for MASK in the ESPI_IO_ACPI_EC_3_BASE_ADDR register */
#define ESPI_IO_ACPI_EC_3_BASE_ADDR_LDN_Pos   _UINT32_(8)                                          /* (ESPI_IO_ACPI_EC_3_BASE_ADDR) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_IO_ACPI_EC_3_BASE_ADDR_LDN_Msk   (_UINT32_(0x3F) << ESPI_IO_ACPI_EC_3_BASE_ADDR_LDN_Pos) /* (ESPI_IO_ACPI_EC_3_BASE_ADDR) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_IO_ACPI_EC_3_BASE_ADDR_LDN(value) (ESPI_IO_ACPI_EC_3_BASE_ADDR_LDN_Msk & (_UINT32_(value) << ESPI_IO_ACPI_EC_3_BASE_ADDR_LDN_Pos)) /* Assigment of value for LDN in the ESPI_IO_ACPI_EC_3_BASE_ADDR register */
#define ESPI_IO_ACPI_EC_3_BASE_ADDR_VIR_Pos   _UINT32_(16)                                         /* (ESPI_IO_ACPI_EC_3_BASE_ADDR) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_IO_ACPI_EC_3_BASE_ADDR_VIR_Msk   (_UINT32_(0x1) << ESPI_IO_ACPI_EC_3_BASE_ADDR_VIR_Pos) /* (ESPI_IO_ACPI_EC_3_BASE_ADDR) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_IO_ACPI_EC_3_BASE_ADDR_VIR(value) (ESPI_IO_ACPI_EC_3_BASE_ADDR_VIR_Msk & (_UINT32_(value) << ESPI_IO_ACPI_EC_3_BASE_ADDR_VIR_Pos)) /* Assigment of value for VIR in the ESPI_IO_ACPI_EC_3_BASE_ADDR register */
#define ESPI_IO_ACPI_EC_3_BASE_ADDR_Msk       _UINT32_(0x00013FFF)                                 /* (ESPI_IO_ACPI_EC_3_BASE_ADDR) Register Mask  */


/* -------- ESPI_IO_ACPI_PM1_BASE_ADDR : (ESPI_IO Offset: 0x158) (R/W 32) I/O Base Address Register -------- */
#define ESPI_IO_ACPI_PM1_BASE_ADDR_RESETVALUE _UINT32_(0x707)                                      /*  (ESPI_IO_ACPI_PM1_BASE_ADDR) I/O Base Address Register  Reset Value */

#define ESPI_IO_ACPI_PM1_BASE_ADDR_MASK_Pos   _UINT32_(0)                                          /* (ESPI_IO_ACPI_PM1_BASE_ADDR) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_IO_ACPI_PM1_BASE_ADDR_MASK_Msk   (_UINT32_(0xFF) << ESPI_IO_ACPI_PM1_BASE_ADDR_MASK_Pos) /* (ESPI_IO_ACPI_PM1_BASE_ADDR) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_IO_ACPI_PM1_BASE_ADDR_MASK(value) (ESPI_IO_ACPI_PM1_BASE_ADDR_MASK_Msk & (_UINT32_(value) << ESPI_IO_ACPI_PM1_BASE_ADDR_MASK_Pos)) /* Assigment of value for MASK in the ESPI_IO_ACPI_PM1_BASE_ADDR register */
#define ESPI_IO_ACPI_PM1_BASE_ADDR_LDN_Pos    _UINT32_(8)                                          /* (ESPI_IO_ACPI_PM1_BASE_ADDR) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_IO_ACPI_PM1_BASE_ADDR_LDN_Msk    (_UINT32_(0x3F) << ESPI_IO_ACPI_PM1_BASE_ADDR_LDN_Pos) /* (ESPI_IO_ACPI_PM1_BASE_ADDR) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_IO_ACPI_PM1_BASE_ADDR_LDN(value) (ESPI_IO_ACPI_PM1_BASE_ADDR_LDN_Msk & (_UINT32_(value) << ESPI_IO_ACPI_PM1_BASE_ADDR_LDN_Pos)) /* Assigment of value for LDN in the ESPI_IO_ACPI_PM1_BASE_ADDR register */
#define ESPI_IO_ACPI_PM1_BASE_ADDR_VIR_Pos    _UINT32_(16)                                         /* (ESPI_IO_ACPI_PM1_BASE_ADDR) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_IO_ACPI_PM1_BASE_ADDR_VIR_Msk    (_UINT32_(0x1) << ESPI_IO_ACPI_PM1_BASE_ADDR_VIR_Pos) /* (ESPI_IO_ACPI_PM1_BASE_ADDR) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_IO_ACPI_PM1_BASE_ADDR_VIR(value) (ESPI_IO_ACPI_PM1_BASE_ADDR_VIR_Msk & (_UINT32_(value) << ESPI_IO_ACPI_PM1_BASE_ADDR_VIR_Pos)) /* Assigment of value for VIR in the ESPI_IO_ACPI_PM1_BASE_ADDR register */
#define ESPI_IO_ACPI_PM1_BASE_ADDR_Msk        _UINT32_(0x00013FFF)                                 /* (ESPI_IO_ACPI_PM1_BASE_ADDR) Register Mask  */


/* -------- ESPI_IO_FAST_KDB_BASE_ADDR : (ESPI_IO Offset: 0x15C) (R/W 32) I/O Base Address Register -------- */
#define ESPI_IO_FAST_KDB_BASE_ADDR_RESETVALUE _UINT32_(0x800)                                      /*  (ESPI_IO_FAST_KDB_BASE_ADDR) I/O Base Address Register  Reset Value */

#define ESPI_IO_FAST_KDB_BASE_ADDR_MASK_Pos   _UINT32_(0)                                          /* (ESPI_IO_FAST_KDB_BASE_ADDR) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_IO_FAST_KDB_BASE_ADDR_MASK_Msk   (_UINT32_(0xFF) << ESPI_IO_FAST_KDB_BASE_ADDR_MASK_Pos) /* (ESPI_IO_FAST_KDB_BASE_ADDR) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_IO_FAST_KDB_BASE_ADDR_MASK(value) (ESPI_IO_FAST_KDB_BASE_ADDR_MASK_Msk & (_UINT32_(value) << ESPI_IO_FAST_KDB_BASE_ADDR_MASK_Pos)) /* Assigment of value for MASK in the ESPI_IO_FAST_KDB_BASE_ADDR register */
#define ESPI_IO_FAST_KDB_BASE_ADDR_LDN_Pos    _UINT32_(8)                                          /* (ESPI_IO_FAST_KDB_BASE_ADDR) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_IO_FAST_KDB_BASE_ADDR_LDN_Msk    (_UINT32_(0x3F) << ESPI_IO_FAST_KDB_BASE_ADDR_LDN_Pos) /* (ESPI_IO_FAST_KDB_BASE_ADDR) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_IO_FAST_KDB_BASE_ADDR_LDN(value) (ESPI_IO_FAST_KDB_BASE_ADDR_LDN_Msk & (_UINT32_(value) << ESPI_IO_FAST_KDB_BASE_ADDR_LDN_Pos)) /* Assigment of value for LDN in the ESPI_IO_FAST_KDB_BASE_ADDR register */
#define ESPI_IO_FAST_KDB_BASE_ADDR_VIR_Pos    _UINT32_(16)                                         /* (ESPI_IO_FAST_KDB_BASE_ADDR) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_IO_FAST_KDB_BASE_ADDR_VIR_Msk    (_UINT32_(0x1) << ESPI_IO_FAST_KDB_BASE_ADDR_VIR_Pos) /* (ESPI_IO_FAST_KDB_BASE_ADDR) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_IO_FAST_KDB_BASE_ADDR_VIR(value) (ESPI_IO_FAST_KDB_BASE_ADDR_VIR_Msk & (_UINT32_(value) << ESPI_IO_FAST_KDB_BASE_ADDR_VIR_Pos)) /* Assigment of value for VIR in the ESPI_IO_FAST_KDB_BASE_ADDR register */
#define ESPI_IO_FAST_KDB_BASE_ADDR_Msk        _UINT32_(0x00013FFF)                                 /* (ESPI_IO_FAST_KDB_BASE_ADDR) Register Mask  */


/* -------- ESPI_IO_UART_0_BASE_ADDR : (ESPI_IO Offset: 0x160) (R/W 32) I/O Base Address Register -------- */
#define ESPI_IO_UART_0_BASE_ADDR_RESETVALUE   _UINT32_(0x907)                                      /*  (ESPI_IO_UART_0_BASE_ADDR) I/O Base Address Register  Reset Value */

#define ESPI_IO_UART_0_BASE_ADDR_MASK_Pos     _UINT32_(0)                                          /* (ESPI_IO_UART_0_BASE_ADDR) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_IO_UART_0_BASE_ADDR_MASK_Msk     (_UINT32_(0xFF) << ESPI_IO_UART_0_BASE_ADDR_MASK_Pos) /* (ESPI_IO_UART_0_BASE_ADDR) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_IO_UART_0_BASE_ADDR_MASK(value)  (ESPI_IO_UART_0_BASE_ADDR_MASK_Msk & (_UINT32_(value) << ESPI_IO_UART_0_BASE_ADDR_MASK_Pos)) /* Assigment of value for MASK in the ESPI_IO_UART_0_BASE_ADDR register */
#define ESPI_IO_UART_0_BASE_ADDR_LDN_Pos      _UINT32_(8)                                          /* (ESPI_IO_UART_0_BASE_ADDR) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_IO_UART_0_BASE_ADDR_LDN_Msk      (_UINT32_(0x3F) << ESPI_IO_UART_0_BASE_ADDR_LDN_Pos) /* (ESPI_IO_UART_0_BASE_ADDR) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_IO_UART_0_BASE_ADDR_LDN(value)   (ESPI_IO_UART_0_BASE_ADDR_LDN_Msk & (_UINT32_(value) << ESPI_IO_UART_0_BASE_ADDR_LDN_Pos)) /* Assigment of value for LDN in the ESPI_IO_UART_0_BASE_ADDR register */
#define ESPI_IO_UART_0_BASE_ADDR_VIR_Pos      _UINT32_(16)                                         /* (ESPI_IO_UART_0_BASE_ADDR) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_IO_UART_0_BASE_ADDR_VIR_Msk      (_UINT32_(0x1) << ESPI_IO_UART_0_BASE_ADDR_VIR_Pos)  /* (ESPI_IO_UART_0_BASE_ADDR) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_IO_UART_0_BASE_ADDR_VIR(value)   (ESPI_IO_UART_0_BASE_ADDR_VIR_Msk & (_UINT32_(value) << ESPI_IO_UART_0_BASE_ADDR_VIR_Pos)) /* Assigment of value for VIR in the ESPI_IO_UART_0_BASE_ADDR register */
#define ESPI_IO_UART_0_BASE_ADDR_Msk          _UINT32_(0x00013FFF)                                 /* (ESPI_IO_UART_0_BASE_ADDR) Register Mask  */


/* -------- ESPI_IO_UART_1_BASE_ADDR : (ESPI_IO Offset: 0x164) (R/W 32) I/O Base Address Register -------- */
#define ESPI_IO_UART_1_BASE_ADDR_RESETVALUE   _UINT32_(0xA07)                                      /*  (ESPI_IO_UART_1_BASE_ADDR) I/O Base Address Register  Reset Value */

#define ESPI_IO_UART_1_BASE_ADDR_MASK_Pos     _UINT32_(0)                                          /* (ESPI_IO_UART_1_BASE_ADDR) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_IO_UART_1_BASE_ADDR_MASK_Msk     (_UINT32_(0xFF) << ESPI_IO_UART_1_BASE_ADDR_MASK_Pos) /* (ESPI_IO_UART_1_BASE_ADDR) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_IO_UART_1_BASE_ADDR_MASK(value)  (ESPI_IO_UART_1_BASE_ADDR_MASK_Msk & (_UINT32_(value) << ESPI_IO_UART_1_BASE_ADDR_MASK_Pos)) /* Assigment of value for MASK in the ESPI_IO_UART_1_BASE_ADDR register */
#define ESPI_IO_UART_1_BASE_ADDR_LDN_Pos      _UINT32_(8)                                          /* (ESPI_IO_UART_1_BASE_ADDR) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_IO_UART_1_BASE_ADDR_LDN_Msk      (_UINT32_(0x3F) << ESPI_IO_UART_1_BASE_ADDR_LDN_Pos) /* (ESPI_IO_UART_1_BASE_ADDR) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_IO_UART_1_BASE_ADDR_LDN(value)   (ESPI_IO_UART_1_BASE_ADDR_LDN_Msk & (_UINT32_(value) << ESPI_IO_UART_1_BASE_ADDR_LDN_Pos)) /* Assigment of value for LDN in the ESPI_IO_UART_1_BASE_ADDR register */
#define ESPI_IO_UART_1_BASE_ADDR_VIR_Pos      _UINT32_(16)                                         /* (ESPI_IO_UART_1_BASE_ADDR) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_IO_UART_1_BASE_ADDR_VIR_Msk      (_UINT32_(0x1) << ESPI_IO_UART_1_BASE_ADDR_VIR_Pos)  /* (ESPI_IO_UART_1_BASE_ADDR) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_IO_UART_1_BASE_ADDR_VIR(value)   (ESPI_IO_UART_1_BASE_ADDR_VIR_Msk & (_UINT32_(value) << ESPI_IO_UART_1_BASE_ADDR_VIR_Pos)) /* Assigment of value for VIR in the ESPI_IO_UART_1_BASE_ADDR register */
#define ESPI_IO_UART_1_BASE_ADDR_Msk          _UINT32_(0x00013FFF)                                 /* (ESPI_IO_UART_1_BASE_ADDR) Register Mask  */


/* -------- ESPI_IO_EMI_0_BASE_ADDR : (ESPI_IO Offset: 0x168) (R/W 32) I/O Base Address Register -------- */
#define ESPI_IO_EMI_0_BASE_ADDR_RESETVALUE    _UINT32_(0x100F)                                     /*  (ESPI_IO_EMI_0_BASE_ADDR) I/O Base Address Register  Reset Value */

#define ESPI_IO_EMI_0_BASE_ADDR_MASK_Pos      _UINT32_(0)                                          /* (ESPI_IO_EMI_0_BASE_ADDR) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_IO_EMI_0_BASE_ADDR_MASK_Msk      (_UINT32_(0xFF) << ESPI_IO_EMI_0_BASE_ADDR_MASK_Pos) /* (ESPI_IO_EMI_0_BASE_ADDR) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_IO_EMI_0_BASE_ADDR_MASK(value)   (ESPI_IO_EMI_0_BASE_ADDR_MASK_Msk & (_UINT32_(value) << ESPI_IO_EMI_0_BASE_ADDR_MASK_Pos)) /* Assigment of value for MASK in the ESPI_IO_EMI_0_BASE_ADDR register */
#define ESPI_IO_EMI_0_BASE_ADDR_LDN_Pos       _UINT32_(8)                                          /* (ESPI_IO_EMI_0_BASE_ADDR) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_IO_EMI_0_BASE_ADDR_LDN_Msk       (_UINT32_(0x3F) << ESPI_IO_EMI_0_BASE_ADDR_LDN_Pos)  /* (ESPI_IO_EMI_0_BASE_ADDR) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_IO_EMI_0_BASE_ADDR_LDN(value)    (ESPI_IO_EMI_0_BASE_ADDR_LDN_Msk & (_UINT32_(value) << ESPI_IO_EMI_0_BASE_ADDR_LDN_Pos)) /* Assigment of value for LDN in the ESPI_IO_EMI_0_BASE_ADDR register */
#define ESPI_IO_EMI_0_BASE_ADDR_VIR_Pos       _UINT32_(16)                                         /* (ESPI_IO_EMI_0_BASE_ADDR) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_IO_EMI_0_BASE_ADDR_VIR_Msk       (_UINT32_(0x1) << ESPI_IO_EMI_0_BASE_ADDR_VIR_Pos)   /* (ESPI_IO_EMI_0_BASE_ADDR) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_IO_EMI_0_BASE_ADDR_VIR(value)    (ESPI_IO_EMI_0_BASE_ADDR_VIR_Msk & (_UINT32_(value) << ESPI_IO_EMI_0_BASE_ADDR_VIR_Pos)) /* Assigment of value for VIR in the ESPI_IO_EMI_0_BASE_ADDR register */
#define ESPI_IO_EMI_0_BASE_ADDR_Msk           _UINT32_(0x00013FFF)                                 /* (ESPI_IO_EMI_0_BASE_ADDR) Register Mask  */


/* -------- ESPI_IO_EMI_1_BASE_ADDR : (ESPI_IO Offset: 0x16C) (R/W 32) I/O Base Address Register -------- */
#define ESPI_IO_EMI_1_BASE_ADDR_RESETVALUE    _UINT32_(0x110F)                                     /*  (ESPI_IO_EMI_1_BASE_ADDR) I/O Base Address Register  Reset Value */

#define ESPI_IO_EMI_1_BASE_ADDR_MASK_Pos      _UINT32_(0)                                          /* (ESPI_IO_EMI_1_BASE_ADDR) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_IO_EMI_1_BASE_ADDR_MASK_Msk      (_UINT32_(0xFF) << ESPI_IO_EMI_1_BASE_ADDR_MASK_Pos) /* (ESPI_IO_EMI_1_BASE_ADDR) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_IO_EMI_1_BASE_ADDR_MASK(value)   (ESPI_IO_EMI_1_BASE_ADDR_MASK_Msk & (_UINT32_(value) << ESPI_IO_EMI_1_BASE_ADDR_MASK_Pos)) /* Assigment of value for MASK in the ESPI_IO_EMI_1_BASE_ADDR register */
#define ESPI_IO_EMI_1_BASE_ADDR_LDN_Pos       _UINT32_(8)                                          /* (ESPI_IO_EMI_1_BASE_ADDR) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_IO_EMI_1_BASE_ADDR_LDN_Msk       (_UINT32_(0x3F) << ESPI_IO_EMI_1_BASE_ADDR_LDN_Pos)  /* (ESPI_IO_EMI_1_BASE_ADDR) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_IO_EMI_1_BASE_ADDR_LDN(value)    (ESPI_IO_EMI_1_BASE_ADDR_LDN_Msk & (_UINT32_(value) << ESPI_IO_EMI_1_BASE_ADDR_LDN_Pos)) /* Assigment of value for LDN in the ESPI_IO_EMI_1_BASE_ADDR register */
#define ESPI_IO_EMI_1_BASE_ADDR_VIR_Pos       _UINT32_(16)                                         /* (ESPI_IO_EMI_1_BASE_ADDR) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_IO_EMI_1_BASE_ADDR_VIR_Msk       (_UINT32_(0x1) << ESPI_IO_EMI_1_BASE_ADDR_VIR_Pos)   /* (ESPI_IO_EMI_1_BASE_ADDR) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_IO_EMI_1_BASE_ADDR_VIR(value)    (ESPI_IO_EMI_1_BASE_ADDR_VIR_Msk & (_UINT32_(value) << ESPI_IO_EMI_1_BASE_ADDR_VIR_Pos)) /* Assigment of value for VIR in the ESPI_IO_EMI_1_BASE_ADDR register */
#define ESPI_IO_EMI_1_BASE_ADDR_Msk           _UINT32_(0x00013FFF)                                 /* (ESPI_IO_EMI_1_BASE_ADDR) Register Mask  */


/* -------- ESPI_IO_PORT80_0_BASE_ADDR : (ESPI_IO Offset: 0x174) (R/W 32) I/O Base Address Register -------- */
#define ESPI_IO_PORT80_0_BASE_ADDR_RESETVALUE _UINT32_(0x2000)                                     /*  (ESPI_IO_PORT80_0_BASE_ADDR) I/O Base Address Register  Reset Value */

#define ESPI_IO_PORT80_0_BASE_ADDR_MASK_Pos   _UINT32_(0)                                          /* (ESPI_IO_PORT80_0_BASE_ADDR) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_IO_PORT80_0_BASE_ADDR_MASK_Msk   (_UINT32_(0xFF) << ESPI_IO_PORT80_0_BASE_ADDR_MASK_Pos) /* (ESPI_IO_PORT80_0_BASE_ADDR) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_IO_PORT80_0_BASE_ADDR_MASK(value) (ESPI_IO_PORT80_0_BASE_ADDR_MASK_Msk & (_UINT32_(value) << ESPI_IO_PORT80_0_BASE_ADDR_MASK_Pos)) /* Assigment of value for MASK in the ESPI_IO_PORT80_0_BASE_ADDR register */
#define ESPI_IO_PORT80_0_BASE_ADDR_LDN_Pos    _UINT32_(8)                                          /* (ESPI_IO_PORT80_0_BASE_ADDR) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_IO_PORT80_0_BASE_ADDR_LDN_Msk    (_UINT32_(0x3F) << ESPI_IO_PORT80_0_BASE_ADDR_LDN_Pos) /* (ESPI_IO_PORT80_0_BASE_ADDR) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_IO_PORT80_0_BASE_ADDR_LDN(value) (ESPI_IO_PORT80_0_BASE_ADDR_LDN_Msk & (_UINT32_(value) << ESPI_IO_PORT80_0_BASE_ADDR_LDN_Pos)) /* Assigment of value for LDN in the ESPI_IO_PORT80_0_BASE_ADDR register */
#define ESPI_IO_PORT80_0_BASE_ADDR_VIR_Pos    _UINT32_(16)                                         /* (ESPI_IO_PORT80_0_BASE_ADDR) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_IO_PORT80_0_BASE_ADDR_VIR_Msk    (_UINT32_(0x1) << ESPI_IO_PORT80_0_BASE_ADDR_VIR_Pos) /* (ESPI_IO_PORT80_0_BASE_ADDR) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_IO_PORT80_0_BASE_ADDR_VIR(value) (ESPI_IO_PORT80_0_BASE_ADDR_VIR_Msk & (_UINT32_(value) << ESPI_IO_PORT80_0_BASE_ADDR_VIR_Pos)) /* Assigment of value for VIR in the ESPI_IO_PORT80_0_BASE_ADDR register */
#define ESPI_IO_PORT80_0_BASE_ADDR_Msk        _UINT32_(0x00013FFF)                                 /* (ESPI_IO_PORT80_0_BASE_ADDR) Register Mask  */


/* -------- ESPI_IO_PORT80_1_BASE_ADDR : (ESPI_IO Offset: 0x178) (R/W 32) I/O Base Address Register -------- */
#define ESPI_IO_PORT80_1_BASE_ADDR_RESETVALUE _UINT32_(0x2100)                                     /*  (ESPI_IO_PORT80_1_BASE_ADDR) I/O Base Address Register  Reset Value */

#define ESPI_IO_PORT80_1_BASE_ADDR_MASK_Pos   _UINT32_(0)                                          /* (ESPI_IO_PORT80_1_BASE_ADDR) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_IO_PORT80_1_BASE_ADDR_MASK_Msk   (_UINT32_(0xFF) << ESPI_IO_PORT80_1_BASE_ADDR_MASK_Pos) /* (ESPI_IO_PORT80_1_BASE_ADDR) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_IO_PORT80_1_BASE_ADDR_MASK(value) (ESPI_IO_PORT80_1_BASE_ADDR_MASK_Msk & (_UINT32_(value) << ESPI_IO_PORT80_1_BASE_ADDR_MASK_Pos)) /* Assigment of value for MASK in the ESPI_IO_PORT80_1_BASE_ADDR register */
#define ESPI_IO_PORT80_1_BASE_ADDR_LDN_Pos    _UINT32_(8)                                          /* (ESPI_IO_PORT80_1_BASE_ADDR) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_IO_PORT80_1_BASE_ADDR_LDN_Msk    (_UINT32_(0x3F) << ESPI_IO_PORT80_1_BASE_ADDR_LDN_Pos) /* (ESPI_IO_PORT80_1_BASE_ADDR) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_IO_PORT80_1_BASE_ADDR_LDN(value) (ESPI_IO_PORT80_1_BASE_ADDR_LDN_Msk & (_UINT32_(value) << ESPI_IO_PORT80_1_BASE_ADDR_LDN_Pos)) /* Assigment of value for LDN in the ESPI_IO_PORT80_1_BASE_ADDR register */
#define ESPI_IO_PORT80_1_BASE_ADDR_VIR_Pos    _UINT32_(16)                                         /* (ESPI_IO_PORT80_1_BASE_ADDR) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_IO_PORT80_1_BASE_ADDR_VIR_Msk    (_UINT32_(0x1) << ESPI_IO_PORT80_1_BASE_ADDR_VIR_Pos) /* (ESPI_IO_PORT80_1_BASE_ADDR) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_IO_PORT80_1_BASE_ADDR_VIR(value) (ESPI_IO_PORT80_1_BASE_ADDR_VIR_Msk & (_UINT32_(value) << ESPI_IO_PORT80_1_BASE_ADDR_VIR_Pos)) /* Assigment of value for VIR in the ESPI_IO_PORT80_1_BASE_ADDR register */
#define ESPI_IO_PORT80_1_BASE_ADDR_Msk        _UINT32_(0x00013FFF)                                 /* (ESPI_IO_PORT80_1_BASE_ADDR) Register Mask  */


/* -------- ESPI_IO_RTC_BASE_ADDR : (ESPI_IO Offset: 0x17C) (R/W 32) I/O Base Address Register -------- */
#define ESPI_IO_RTC_BASE_ADDR_RESETVALUE      _UINT32_(0x141F)                                     /*  (ESPI_IO_RTC_BASE_ADDR) I/O Base Address Register  Reset Value */

#define ESPI_IO_RTC_BASE_ADDR_MASK_Pos        _UINT32_(0)                                          /* (ESPI_IO_RTC_BASE_ADDR) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_IO_RTC_BASE_ADDR_MASK_Msk        (_UINT32_(0xFF) << ESPI_IO_RTC_BASE_ADDR_MASK_Pos)   /* (ESPI_IO_RTC_BASE_ADDR) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_IO_RTC_BASE_ADDR_MASK(value)     (ESPI_IO_RTC_BASE_ADDR_MASK_Msk & (_UINT32_(value) << ESPI_IO_RTC_BASE_ADDR_MASK_Pos)) /* Assigment of value for MASK in the ESPI_IO_RTC_BASE_ADDR register */
#define ESPI_IO_RTC_BASE_ADDR_LDN_Pos         _UINT32_(8)                                          /* (ESPI_IO_RTC_BASE_ADDR) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_IO_RTC_BASE_ADDR_LDN_Msk         (_UINT32_(0x3F) << ESPI_IO_RTC_BASE_ADDR_LDN_Pos)    /* (ESPI_IO_RTC_BASE_ADDR) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_IO_RTC_BASE_ADDR_LDN(value)      (ESPI_IO_RTC_BASE_ADDR_LDN_Msk & (_UINT32_(value) << ESPI_IO_RTC_BASE_ADDR_LDN_Pos)) /* Assigment of value for LDN in the ESPI_IO_RTC_BASE_ADDR register */
#define ESPI_IO_RTC_BASE_ADDR_VIR_Pos         _UINT32_(16)                                         /* (ESPI_IO_RTC_BASE_ADDR) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_IO_RTC_BASE_ADDR_VIR_Msk         (_UINT32_(0x1) << ESPI_IO_RTC_BASE_ADDR_VIR_Pos)     /* (ESPI_IO_RTC_BASE_ADDR) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_IO_RTC_BASE_ADDR_VIR(value)      (ESPI_IO_RTC_BASE_ADDR_VIR_Msk & (_UINT32_(value) << ESPI_IO_RTC_BASE_ADDR_VIR_Pos)) /* Assigment of value for VIR in the ESPI_IO_RTC_BASE_ADDR register */
#define ESPI_IO_RTC_BASE_ADDR_Msk             _UINT32_(0x00013FFF)                                 /* (ESPI_IO_RTC_BASE_ADDR) Register Mask  */


/* -------- ESPI_IO_UART_2_BASE_ADDR : (ESPI_IO Offset: 0x188) (R/W 32) I/O Base Address Register -------- */
#define ESPI_IO_UART_2_BASE_ADDR_RESETVALUE   _UINT32_(0xB07)                                      /*  (ESPI_IO_UART_2_BASE_ADDR) I/O Base Address Register  Reset Value */

#define ESPI_IO_UART_2_BASE_ADDR_MASK_Pos     _UINT32_(0)                                          /* (ESPI_IO_UART_2_BASE_ADDR) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_IO_UART_2_BASE_ADDR_MASK_Msk     (_UINT32_(0xFF) << ESPI_IO_UART_2_BASE_ADDR_MASK_Pos) /* (ESPI_IO_UART_2_BASE_ADDR) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_IO_UART_2_BASE_ADDR_MASK(value)  (ESPI_IO_UART_2_BASE_ADDR_MASK_Msk & (_UINT32_(value) << ESPI_IO_UART_2_BASE_ADDR_MASK_Pos)) /* Assigment of value for MASK in the ESPI_IO_UART_2_BASE_ADDR register */
#define ESPI_IO_UART_2_BASE_ADDR_LDN_Pos      _UINT32_(8)                                          /* (ESPI_IO_UART_2_BASE_ADDR) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_IO_UART_2_BASE_ADDR_LDN_Msk      (_UINT32_(0x3F) << ESPI_IO_UART_2_BASE_ADDR_LDN_Pos) /* (ESPI_IO_UART_2_BASE_ADDR) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_IO_UART_2_BASE_ADDR_LDN(value)   (ESPI_IO_UART_2_BASE_ADDR_LDN_Msk & (_UINT32_(value) << ESPI_IO_UART_2_BASE_ADDR_LDN_Pos)) /* Assigment of value for LDN in the ESPI_IO_UART_2_BASE_ADDR register */
#define ESPI_IO_UART_2_BASE_ADDR_VIR_Pos      _UINT32_(16)                                         /* (ESPI_IO_UART_2_BASE_ADDR) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_IO_UART_2_BASE_ADDR_VIR_Msk      (_UINT32_(0x1) << ESPI_IO_UART_2_BASE_ADDR_VIR_Pos)  /* (ESPI_IO_UART_2_BASE_ADDR) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_IO_UART_2_BASE_ADDR_VIR(value)   (ESPI_IO_UART_2_BASE_ADDR_VIR_Msk & (_UINT32_(value) << ESPI_IO_UART_2_BASE_ADDR_VIR_Pos)) /* Assigment of value for VIR in the ESPI_IO_UART_2_BASE_ADDR register */
#define ESPI_IO_UART_2_BASE_ADDR_Msk          _UINT32_(0x00013FFF)                                 /* (ESPI_IO_UART_2_BASE_ADDR) Register Mask  */


/* -------- ESPI_IO_GLUE_BASE_ADDR : (ESPI_IO Offset: 0x18C) (R/W 32) I/O Base Address Register -------- */
#define ESPI_IO_GLUE_BASE_ADDR_RESETVALUE     _UINT32_(0xF1F)                                      /*  (ESPI_IO_GLUE_BASE_ADDR) I/O Base Address Register  Reset Value */

#define ESPI_IO_GLUE_BASE_ADDR_MASK_Pos       _UINT32_(0)                                          /* (ESPI_IO_GLUE_BASE_ADDR) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_IO_GLUE_BASE_ADDR_MASK_Msk       (_UINT32_(0xFF) << ESPI_IO_GLUE_BASE_ADDR_MASK_Pos)  /* (ESPI_IO_GLUE_BASE_ADDR) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_IO_GLUE_BASE_ADDR_MASK(value)    (ESPI_IO_GLUE_BASE_ADDR_MASK_Msk & (_UINT32_(value) << ESPI_IO_GLUE_BASE_ADDR_MASK_Pos)) /* Assigment of value for MASK in the ESPI_IO_GLUE_BASE_ADDR register */
#define ESPI_IO_GLUE_BASE_ADDR_LDN_Pos        _UINT32_(8)                                          /* (ESPI_IO_GLUE_BASE_ADDR) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_IO_GLUE_BASE_ADDR_LDN_Msk        (_UINT32_(0x3F) << ESPI_IO_GLUE_BASE_ADDR_LDN_Pos)   /* (ESPI_IO_GLUE_BASE_ADDR) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_IO_GLUE_BASE_ADDR_LDN(value)     (ESPI_IO_GLUE_BASE_ADDR_LDN_Msk & (_UINT32_(value) << ESPI_IO_GLUE_BASE_ADDR_LDN_Pos)) /* Assigment of value for LDN in the ESPI_IO_GLUE_BASE_ADDR register */
#define ESPI_IO_GLUE_BASE_ADDR_VIR_Pos        _UINT32_(16)                                         /* (ESPI_IO_GLUE_BASE_ADDR) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_IO_GLUE_BASE_ADDR_VIR_Msk        (_UINT32_(0x1) << ESPI_IO_GLUE_BASE_ADDR_VIR_Pos)    /* (ESPI_IO_GLUE_BASE_ADDR) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_IO_GLUE_BASE_ADDR_VIR(value)     (ESPI_IO_GLUE_BASE_ADDR_VIR_Msk & (_UINT32_(value) << ESPI_IO_GLUE_BASE_ADDR_VIR_Pos)) /* Assigment of value for VIR in the ESPI_IO_GLUE_BASE_ADDR register */
#define ESPI_IO_GLUE_BASE_ADDR_Msk            _UINT32_(0x00013FFF)                                 /* (ESPI_IO_GLUE_BASE_ADDR) Register Mask  */


/* -------- ESPI_IO_LTR_STS : (ESPI_IO Offset: 0x220) (R/W 32) LTR Peripheral Status Register -------- */
#define ESPI_IO_LTR_STS_RESETVALUE            _UINT32_(0x00)                                       /*  (ESPI_IO_LTR_STS) LTR Peripheral Status Register  Reset Value */

#define ESPI_IO_LTR_STS_TX_DON_STS_Pos        _UINT32_(0)                                          /* (ESPI_IO_LTR_STS) This bit is set to '1' whenever a Transmit operation terminates (the TRANSMIT_DONE bit in this register goes from 1 to 0). (R/WC) Position */
#define ESPI_IO_LTR_STS_TX_DON_STS_Msk        (_UINT32_(0x1) << ESPI_IO_LTR_STS_TX_DON_STS_Pos)    /* (ESPI_IO_LTR_STS) This bit is set to '1' whenever a Transmit operation terminates (the TRANSMIT_DONE bit in this register goes from 1 to 0). (R/WC) Mask */
#define ESPI_IO_LTR_STS_TX_DON_STS(value)     (ESPI_IO_LTR_STS_TX_DON_STS_Msk & (_UINT32_(value) << ESPI_IO_LTR_STS_TX_DON_STS_Pos)) /* Assigment of value for TX_DON_STS in the ESPI_IO_LTR_STS register */
#define ESPI_IO_LTR_STS_STRT_OVRUN_STS_Pos    _UINT32_(3)                                          /* (ESPI_IO_LTR_STS) A Start was attempted while the TRANSMIT_BUSY bit in this register was '1'. Any Transmit in progress is immediately terminated. (R/WC) Position */
#define ESPI_IO_LTR_STS_STRT_OVRUN_STS_Msk    (_UINT32_(0x1) << ESPI_IO_LTR_STS_STRT_OVRUN_STS_Pos) /* (ESPI_IO_LTR_STS) A Start was attempted while the TRANSMIT_BUSY bit in this register was '1'. Any Transmit in progress is immediately terminated. (R/WC) Mask */
#define ESPI_IO_LTR_STS_STRT_OVRUN_STS(value) (ESPI_IO_LTR_STS_STRT_OVRUN_STS_Msk & (_UINT32_(value) << ESPI_IO_LTR_STS_STRT_OVRUN_STS_Pos)) /* Assigment of value for STRT_OVRUN_STS in the ESPI_IO_LTR_STS register */
#define ESPI_IO_LTR_STS_DIS_H_STS_Pos         _UINT32_(4)                                          /* (ESPI_IO_LTR_STS) A '1' in this bit indicates that the last requested Transmit operation was aborted because Bus Mastering has been disabled by the Host.\n      Bus Mastering is disabled whenever the Peripheral Channel Mastering Enable bit in that register is '0', or the Peripheral Channel Enable bit is '0'. Position */
#define ESPI_IO_LTR_STS_DIS_H_STS_Msk         (_UINT32_(0x1) << ESPI_IO_LTR_STS_DIS_H_STS_Pos)     /* (ESPI_IO_LTR_STS) A '1' in this bit indicates that the last requested Transmit operation was aborted because Bus Mastering has been disabled by the Host.\n      Bus Mastering is disabled whenever the Peripheral Channel Mastering Enable bit in that register is '0', or the Peripheral Channel Enable bit is '0'. Mask */
#define ESPI_IO_LTR_STS_DIS_H_STS(value)      (ESPI_IO_LTR_STS_DIS_H_STS_Msk & (_UINT32_(value) << ESPI_IO_LTR_STS_DIS_H_STS_Pos)) /* Assigment of value for DIS_H_STS in the ESPI_IO_LTR_STS register */
#define ESPI_IO_LTR_STS_TX_BUSY_Pos           _UINT32_(8)                                          /* (ESPI_IO_LTR_STS) This bit is set to '1' when firmware writes '1' to the LTR_START (ltr_initiate) bit in the LTR Peripheral Control Register. It is cleared\n      by hardware when the transfer is sufficiently complete so that another packet can be transmitted. If the LTR_START bit is written to '1' while this bit\n      is also '1', then START_OVERRUN_STATUS in this register will be set to '1' and the transfer will terminate immediately. Position */
#define ESPI_IO_LTR_STS_TX_BUSY_Msk           (_UINT32_(0x1) << ESPI_IO_LTR_STS_TX_BUSY_Pos)       /* (ESPI_IO_LTR_STS) This bit is set to '1' when firmware writes '1' to the LTR_START (ltr_initiate) bit in the LTR Peripheral Control Register. It is cleared\n      by hardware when the transfer is sufficiently complete so that another packet can be transmitted. If the LTR_START bit is written to '1' while this bit\n      is also '1', then START_OVERRUN_STATUS in this register will be set to '1' and the transfer will terminate immediately. Mask */
#define ESPI_IO_LTR_STS_TX_BUSY(value)        (ESPI_IO_LTR_STS_TX_BUSY_Msk & (_UINT32_(value) << ESPI_IO_LTR_STS_TX_BUSY_Pos)) /* Assigment of value for TX_BUSY in the ESPI_IO_LTR_STS register */
#define ESPI_IO_LTR_STS_Msk                   _UINT32_(0x00000119)                                 /* (ESPI_IO_LTR_STS) Register Mask  */


/* -------- ESPI_IO_LTR_EN : (ESPI_IO Offset: 0x224) (R/W 32) LTR Peripheral Enable Register -------- */
#define ESPI_IO_LTR_EN_RESETVALUE             _UINT32_(0x00)                                       /*  (ESPI_IO_LTR_EN) LTR Peripheral Enable Register  Reset Value */

#define ESPI_IO_LTR_EN_TX_DONE_IEN_Pos        _UINT32_(0)                                          /* (ESPI_IO_LTR_EN) When this bit is '1' an interrupt is generated when the bit TRANSMIT_DONE_STATUS in the LTR Peripheral Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Position */
#define ESPI_IO_LTR_EN_TX_DONE_IEN_Msk        (_UINT32_(0x1) << ESPI_IO_LTR_EN_TX_DONE_IEN_Pos)    /* (ESPI_IO_LTR_EN) When this bit is '1' an interrupt is generated when the bit TRANSMIT_DONE_STATUS in the LTR Peripheral Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Mask */
#define ESPI_IO_LTR_EN_TX_DONE_IEN(value)     (ESPI_IO_LTR_EN_TX_DONE_IEN_Msk & (_UINT32_(value) << ESPI_IO_LTR_EN_TX_DONE_IEN_Pos)) /* Assigment of value for TX_DONE_IEN in the ESPI_IO_LTR_EN register */
#define ESPI_IO_LTR_EN_Msk                    _UINT32_(0x00000001)                                 /* (ESPI_IO_LTR_EN) Register Mask  */


/* -------- ESPI_IO_LTR_CTRL : (ESPI_IO Offset: 0x228) (R/W 32) LTR Peripheral Control Register -------- */
#define ESPI_IO_LTR_CTRL_RESETVALUE           _UINT32_(0x00)                                       /*  (ESPI_IO_LTR_CTRL) LTR Peripheral Control Register  Reset Value */

#define ESPI_IO_LTR_CTRL_STRT_Pos             _UINT32_(0)                                          /* (ESPI_IO_LTR_CTRL) Writing '1' to this bit triggers the transmission of an LTR packet defined by the LTR Peripheral Message register. Writing '0' to this bit has no effect.\n      The transmission will be inhibited if the Peripheral channel is not Ready, as defined in the eSPI Peripheral Channel Ready Register. Position */
#define ESPI_IO_LTR_CTRL_STRT_Msk             (_UINT32_(0x1) << ESPI_IO_LTR_CTRL_STRT_Pos)         /* (ESPI_IO_LTR_CTRL) Writing '1' to this bit triggers the transmission of an LTR packet defined by the LTR Peripheral Message register. Writing '0' to this bit has no effect.\n      The transmission will be inhibited if the Peripheral channel is not Ready, as defined in the eSPI Peripheral Channel Ready Register. Mask */
#define ESPI_IO_LTR_CTRL_STRT(value)          (ESPI_IO_LTR_CTRL_STRT_Msk & (_UINT32_(value) << ESPI_IO_LTR_CTRL_STRT_Pos)) /* Assigment of value for STRT in the ESPI_IO_LTR_CTRL register */
#define ESPI_IO_LTR_CTRL_OUTG_TAG_Pos         _UINT32_(8)                                          /* (ESPI_IO_LTR_CTRL) This 4-bit value will be inserted as the TAG number in the next transmitted LTR packet. According to current understanding of Intel\n      specs, this field should be kept zero by firmware. Position */
#define ESPI_IO_LTR_CTRL_OUTG_TAG_Msk         (_UINT32_(0xF) << ESPI_IO_LTR_CTRL_OUTG_TAG_Pos)     /* (ESPI_IO_LTR_CTRL) This 4-bit value will be inserted as the TAG number in the next transmitted LTR packet. According to current understanding of Intel\n      specs, this field should be kept zero by firmware. Mask */
#define ESPI_IO_LTR_CTRL_OUTG_TAG(value)      (ESPI_IO_LTR_CTRL_OUTG_TAG_Msk & (_UINT32_(value) << ESPI_IO_LTR_CTRL_OUTG_TAG_Pos)) /* Assigment of value for OUTG_TAG in the ESPI_IO_LTR_CTRL register */
#define ESPI_IO_LTR_CTRL_Msk                  _UINT32_(0x00000F01)                                 /* (ESPI_IO_LTR_CTRL) Register Mask  */


/* -------- ESPI_IO_LTR_MESG : (ESPI_IO Offset: 0x22C) (R/W 32) LTR Peripheral Message Register -------- */
#define ESPI_IO_LTR_MESG_RESETVALUE           _UINT32_(0x00)                                       /*  (ESPI_IO_LTR_MESG) LTR Peripheral Message Register  Reset Value */

#define ESPI_IO_LTR_MESG_VAL_Pos              _UINT32_(0)                                          /* (ESPI_IO_LTR_MESG) This field declares a time, in units expressed by the Scale field. Zero in both this field and the Scale field (zero time) demands best\n      possible effort (minimal latency) by the chipset. Position */
#define ESPI_IO_LTR_MESG_VAL_Msk              (_UINT32_(0x3FF) << ESPI_IO_LTR_MESG_VAL_Pos)        /* (ESPI_IO_LTR_MESG) This field declares a time, in units expressed by the Scale field. Zero in both this field and the Scale field (zero time) demands best\n      possible effort (minimal latency) by the chipset. Mask */
#define ESPI_IO_LTR_MESG_VAL(value)           (ESPI_IO_LTR_MESG_VAL_Msk & (_UINT32_(value) << ESPI_IO_LTR_MESG_VAL_Pos)) /* Assigment of value for VAL in the ESPI_IO_LTR_MESG register */
#define ESPI_IO_LTR_MESG_SCAL_Pos             _UINT32_(10)                                         /* (ESPI_IO_LTR_MESG) This field declares the time unit expressed by each count of the Value field of this register. Position */
#define ESPI_IO_LTR_MESG_SCAL_Msk             (_UINT32_(0x7) << ESPI_IO_LTR_MESG_SCAL_Pos)         /* (ESPI_IO_LTR_MESG) This field declares the time unit expressed by each count of the Value field of this register. Mask */
#define ESPI_IO_LTR_MESG_SCAL(value)          (ESPI_IO_LTR_MESG_SCAL_Msk & (_UINT32_(value) << ESPI_IO_LTR_MESG_SCAL_Pos)) /* Assigment of value for SCAL in the ESPI_IO_LTR_MESG register */
#define ESPI_IO_LTR_MESG_RES_TX_BITS_Pos      _UINT32_(13)                                         /* (ESPI_IO_LTR_MESG) These bits are Read/Write, but are undefined in the 16-bit LTR message format. These bits are transmitted, but according to current\n      specs they must always be kept as zeros when writing this register. Position */
#define ESPI_IO_LTR_MESG_RES_TX_BITS_Msk      (_UINT32_(0x3) << ESPI_IO_LTR_MESG_RES_TX_BITS_Pos)  /* (ESPI_IO_LTR_MESG) These bits are Read/Write, but are undefined in the 16-bit LTR message format. These bits are transmitted, but according to current\n      specs they must always be kept as zeros when writing this register. Mask */
#define ESPI_IO_LTR_MESG_RES_TX_BITS(value)   (ESPI_IO_LTR_MESG_RES_TX_BITS_Msk & (_UINT32_(value) << ESPI_IO_LTR_MESG_RES_TX_BITS_Pos)) /* Assigment of value for RES_TX_BITS in the ESPI_IO_LTR_MESG register */
#define ESPI_IO_LTR_MESG_REQ_BIT_Pos          _UINT32_(15)                                         /* (ESPI_IO_LTR_MESG) 1 = Maximum latency tolerated is defined by the Scale and Length fields of this register. 0 = No Requirement. Infinite latency tolerated. (Default). Position */
#define ESPI_IO_LTR_MESG_REQ_BIT_Msk          (_UINT32_(0x1) << ESPI_IO_LTR_MESG_REQ_BIT_Pos)      /* (ESPI_IO_LTR_MESG) 1 = Maximum latency tolerated is defined by the Scale and Length fields of this register. 0 = No Requirement. Infinite latency tolerated. (Default). Mask */
#define ESPI_IO_LTR_MESG_REQ_BIT(value)       (ESPI_IO_LTR_MESG_REQ_BIT_Msk & (_UINT32_(value) << ESPI_IO_LTR_MESG_REQ_BIT_Pos)) /* Assigment of value for REQ_BIT in the ESPI_IO_LTR_MESG register */
#define ESPI_IO_LTR_MESG_Msk                  _UINT32_(0x0000FFFF)                                 /* (ESPI_IO_LTR_MESG) Register Mask  */


/* -------- ESPI_IO_OOB_RX_ADDR_LSW : (ESPI_IO Offset: 0x240) (R/W 32) OOB Channel Receive Address Register -------- */
#define ESPI_IO_OOB_RX_ADDR_LSW_RESETVALUE    _UINT32_(0x00)                                       /*  (ESPI_IO_OOB_RX_ADDR_LSW) OOB Channel Receive Address Register  Reset Value */

#define ESPI_IO_OOB_RX_ADDR_LSW_RX_BUF_Pos    _UINT32_(2)                                          /* (ESPI_IO_OOB_RX_ADDR_LSW) This field must be initialized to contain the Base Address for accepting the next OOB packet. Position */
#define ESPI_IO_OOB_RX_ADDR_LSW_RX_BUF_Msk    (_UINT32_(0x3FFFFFFF) << ESPI_IO_OOB_RX_ADDR_LSW_RX_BUF_Pos) /* (ESPI_IO_OOB_RX_ADDR_LSW) This field must be initialized to contain the Base Address for accepting the next OOB packet. Mask */
#define ESPI_IO_OOB_RX_ADDR_LSW_RX_BUF(value) (ESPI_IO_OOB_RX_ADDR_LSW_RX_BUF_Msk & (_UINT32_(value) << ESPI_IO_OOB_RX_ADDR_LSW_RX_BUF_Pos)) /* Assigment of value for RX_BUF in the ESPI_IO_OOB_RX_ADDR_LSW register */
#define ESPI_IO_OOB_RX_ADDR_LSW_Msk           _UINT32_(0xFFFFFFFC)                                 /* (ESPI_IO_OOB_RX_ADDR_LSW) Register Mask  */


/* -------- ESPI_IO_OOB_TX_ADDR_LSW : (ESPI_IO Offset: 0x248) (R/W 32) OOB Channel Transmit Address Register -------- */
#define ESPI_IO_OOB_TX_ADDR_LSW_RESETVALUE    _UINT32_(0x00)                                       /*  (ESPI_IO_OOB_TX_ADDR_LSW) OOB Channel Transmit Address Register  Reset Value */

#define ESPI_IO_OOB_TX_ADDR_LSW_TX_BUF_Pos    _UINT32_(2)                                          /* (ESPI_IO_OOB_TX_ADDR_LSW) Before starting an OOB Transmit, this field must be initialized to contain the Base Address of the buffer in SRAM.\n      The contents of the transmit buffer should not be modified while TRANSMIT_BUSY is asserted. Position */
#define ESPI_IO_OOB_TX_ADDR_LSW_TX_BUF_Msk    (_UINT32_(0x3FFFFFFF) << ESPI_IO_OOB_TX_ADDR_LSW_TX_BUF_Pos) /* (ESPI_IO_OOB_TX_ADDR_LSW) Before starting an OOB Transmit, this field must be initialized to contain the Base Address of the buffer in SRAM.\n      The contents of the transmit buffer should not be modified while TRANSMIT_BUSY is asserted. Mask */
#define ESPI_IO_OOB_TX_ADDR_LSW_TX_BUF(value) (ESPI_IO_OOB_TX_ADDR_LSW_TX_BUF_Msk & (_UINT32_(value) << ESPI_IO_OOB_TX_ADDR_LSW_TX_BUF_Pos)) /* Assigment of value for TX_BUF in the ESPI_IO_OOB_TX_ADDR_LSW register */
#define ESPI_IO_OOB_TX_ADDR_LSW_Msk           _UINT32_(0xFFFFFFFC)                                 /* (ESPI_IO_OOB_TX_ADDR_LSW) Register Mask  */


/* -------- ESPI_IO_OOB_RX_LEN : (ESPI_IO Offset: 0x250) (R/W 32) OOB Channel Receive Length Register -------- */
#define ESPI_IO_OOB_RX_LEN_RESETVALUE         _UINT32_(0x00)                                       /*  (ESPI_IO_OOB_RX_LEN) OOB Channel Receive Length Register  Reset Value */

#define ESPI_IO_OOB_RX_LEN_MSG_Pos            _UINT32_(0)                                          /* (ESPI_IO_OOB_RX_LEN) This 13-bit read-only field reports how many bytes were received into SRAM in the last packet. This is necessary, independent of\n      any 'byte count' in the packet itself to distinguish between an SMBus packet with or without a PEC byte. Position */
#define ESPI_IO_OOB_RX_LEN_MSG_Msk            (_UINT32_(0x1FFF) << ESPI_IO_OOB_RX_LEN_MSG_Pos)     /* (ESPI_IO_OOB_RX_LEN) This 13-bit read-only field reports how many bytes were received into SRAM in the last packet. This is necessary, independent of\n      any 'byte count' in the packet itself to distinguish between an SMBus packet with or without a PEC byte. Mask */
#define ESPI_IO_OOB_RX_LEN_MSG(value)         (ESPI_IO_OOB_RX_LEN_MSG_Msk & (_UINT32_(value) << ESPI_IO_OOB_RX_LEN_MSG_Pos)) /* Assigment of value for MSG in the ESPI_IO_OOB_RX_LEN register */
#define ESPI_IO_OOB_RX_LEN_BUF_Pos            _UINT32_(16)                                         /* (ESPI_IO_OOB_RX_LEN) Before setting the Receive Enable bit to allow incoming traffic to the Receive Buffer area, this 13-bit field must be initialized to\n      contain the length in bytes of the receiving buffer in SRAM. This limits the number of bytes that can be received into SRAM. Any additional incoming\n      bytes must be discarded by hardware, posting the Data Overrun error flag. Practically, the maximum value that can be placed in this field is the\n      configured Max Packet Length. This limit, or anything higher, is legal, but will effectively disable the limit check. Position */
#define ESPI_IO_OOB_RX_LEN_BUF_Msk            (_UINT32_(0x1FFF) << ESPI_IO_OOB_RX_LEN_BUF_Pos)     /* (ESPI_IO_OOB_RX_LEN) Before setting the Receive Enable bit to allow incoming traffic to the Receive Buffer area, this 13-bit field must be initialized to\n      contain the length in bytes of the receiving buffer in SRAM. This limits the number of bytes that can be received into SRAM. Any additional incoming\n      bytes must be discarded by hardware, posting the Data Overrun error flag. Practically, the maximum value that can be placed in this field is the\n      configured Max Packet Length. This limit, or anything higher, is legal, but will effectively disable the limit check. Mask */
#define ESPI_IO_OOB_RX_LEN_BUF(value)         (ESPI_IO_OOB_RX_LEN_BUF_Msk & (_UINT32_(value) << ESPI_IO_OOB_RX_LEN_BUF_Pos)) /* Assigment of value for BUF in the ESPI_IO_OOB_RX_LEN register */
#define ESPI_IO_OOB_RX_LEN_Msk                _UINT32_(0x1FFF1FFF)                                 /* (ESPI_IO_OOB_RX_LEN) Register Mask  */


/* -------- ESPI_IO_OOB_TX_LEN : (ESPI_IO Offset: 0x254) (R/W 32) OOB Channel Transmit Length Register -------- */
#define ESPI_IO_OOB_TX_LEN_RESETVALUE         _UINT32_(0x00)                                       /*  (ESPI_IO_OOB_TX_LEN) OOB Channel Transmit Length Register  Reset Value */

#define ESPI_IO_OOB_TX_LEN_MSG_Pos            _UINT32_(0)                                          /* (ESPI_IO_OOB_TX_LEN) This 13-bit field declares how many bytes are to be transmitted from the Tramsit Buffer memory. A value of zero,\n      or a value greater than the defined Max Packet Size (73 decimal, or 4Dh, by default) is illegal, and will trigger Bad Request handling. Position */
#define ESPI_IO_OOB_TX_LEN_MSG_Msk            (_UINT32_(0x1FFF) << ESPI_IO_OOB_TX_LEN_MSG_Pos)     /* (ESPI_IO_OOB_TX_LEN) This 13-bit field declares how many bytes are to be transmitted from the Tramsit Buffer memory. A value of zero,\n      or a value greater than the defined Max Packet Size (73 decimal, or 4Dh, by default) is illegal, and will trigger Bad Request handling. Mask */
#define ESPI_IO_OOB_TX_LEN_MSG(value)         (ESPI_IO_OOB_TX_LEN_MSG_Msk & (_UINT32_(value) << ESPI_IO_OOB_TX_LEN_MSG_Pos)) /* Assigment of value for MSG in the ESPI_IO_OOB_TX_LEN register */
#define ESPI_IO_OOB_TX_LEN_Msk                _UINT32_(0x00001FFF)                                 /* (ESPI_IO_OOB_TX_LEN) Register Mask  */


/* -------- ESPI_IO_OOB_RX_CTRL : (ESPI_IO Offset: 0x258) (R/W 32) OOB Channel Receive Control Register -------- */
#define ESPI_IO_OOB_RX_CTRL_RESETVALUE        _UINT32_(0x10000)                                    /*  (ESPI_IO_OOB_RX_CTRL) OOB Channel Receive Control Register  Reset Value */

#define ESPI_IO_OOB_RX_CTRL_SET_RX_AVAIL_Pos  _UINT32_(0)                                          /* (ESPI_IO_OOB_RX_CTRL) Firmware sets this bit to '1' to indicate that an SRAM buffer is available to receive the next Down OOB packet. This\n      forces the bit RECEIVE_ENABLE bit in the OOB Channel Receive Status Register register to be set to '1'. The OOB Channel Receive\n      Address Register and OOB Channel Receive Length Register must have already been initialized before setting this bit. Position */
#define ESPI_IO_OOB_RX_CTRL_SET_RX_AVAIL_Msk  (_UINT32_(0x1) << ESPI_IO_OOB_RX_CTRL_SET_RX_AVAIL_Pos) /* (ESPI_IO_OOB_RX_CTRL) Firmware sets this bit to '1' to indicate that an SRAM buffer is available to receive the next Down OOB packet. This\n      forces the bit RECEIVE_ENABLE bit in the OOB Channel Receive Status Register register to be set to '1'. The OOB Channel Receive\n      Address Register and OOB Channel Receive Length Register must have already been initialized before setting this bit. Mask */
#define ESPI_IO_OOB_RX_CTRL_SET_RX_AVAIL(value) (ESPI_IO_OOB_RX_CTRL_SET_RX_AVAIL_Msk & (_UINT32_(value) << ESPI_IO_OOB_RX_CTRL_SET_RX_AVAIL_Pos)) /* Assigment of value for SET_RX_AVAIL in the ESPI_IO_OOB_RX_CTRL register */
#define ESPI_IO_OOB_RX_CTRL_CHN_EN_Pos        _UINT32_(9)                                          /* (ESPI_IO_OOB_RX_CTRL) This allows firmware to read the OOB Message Channel Enabled field in the eSPI Configuration register. The Master\n      sets the bit to '1' to enable the OOB channel. Position */
#define ESPI_IO_OOB_RX_CTRL_CHN_EN_Msk        (_UINT32_(0x1) << ESPI_IO_OOB_RX_CTRL_CHN_EN_Pos)    /* (ESPI_IO_OOB_RX_CTRL) This allows firmware to read the OOB Message Channel Enabled field in the eSPI Configuration register. The Master\n      sets the bit to '1' to enable the OOB channel. Mask */
#define ESPI_IO_OOB_RX_CTRL_CHN_EN(value)     (ESPI_IO_OOB_RX_CTRL_CHN_EN_Msk & (_UINT32_(value) << ESPI_IO_OOB_RX_CTRL_CHN_EN_Pos)) /* Assigment of value for CHN_EN in the ESPI_IO_OOB_RX_CTRL register */
#define ESPI_IO_OOB_RX_CTRL_MAX_PAYLD_SIZE_SEL_Pos _UINT32_(16)                                         /* (ESPI_IO_OOB_RX_CTRL) This allows firmware to read the correspondingly-named field in the eSPI Configuration register. The 001b default\n      code selects 64-byte mode, which is actually a 73-byte max payload size for eSPI (64 bytes plus MCTP wrapper bytes). Position */
#define ESPI_IO_OOB_RX_CTRL_MAX_PAYLD_SIZE_SEL_Msk (_UINT32_(0x7) << ESPI_IO_OOB_RX_CTRL_MAX_PAYLD_SIZE_SEL_Pos) /* (ESPI_IO_OOB_RX_CTRL) This allows firmware to read the correspondingly-named field in the eSPI Configuration register. The 001b default\n      code selects 64-byte mode, which is actually a 73-byte max payload size for eSPI (64 bytes plus MCTP wrapper bytes). Mask */
#define ESPI_IO_OOB_RX_CTRL_MAX_PAYLD_SIZE_SEL(value) (ESPI_IO_OOB_RX_CTRL_MAX_PAYLD_SIZE_SEL_Msk & (_UINT32_(value) << ESPI_IO_OOB_RX_CTRL_MAX_PAYLD_SIZE_SEL_Pos)) /* Assigment of value for MAX_PAYLD_SIZE_SEL in the ESPI_IO_OOB_RX_CTRL register */
#define ESPI_IO_OOB_RX_CTRL_Msk               _UINT32_(0x00070201)                                 /* (ESPI_IO_OOB_RX_CTRL) Register Mask  */


/* -------- ESPI_IO_OOB_RX_IEN : (ESPI_IO Offset: 0x25C) (R/W 32) OOB Channel Receive Interrupt Enable Register -------- */
#define ESPI_IO_OOB_RX_IEN_RESETVALUE         _UINT32_(0x00)                                       /*  (ESPI_IO_OOB_RX_IEN) OOB Channel Receive Interrupt Enable Register  Reset Value */

#define ESPI_IO_OOB_RX_IEN_RX_IEN_Pos         _UINT32_(0)                                          /* (ESPI_IO_OOB_RX_IEN) When this bit is '1' an interrupt is generated when the bit RECEIVE_DONE_STATUS in the OOB Channel Receive Status\n      Register is 1. When this bit is '0', the status bit will not generate an interrupt. Position */
#define ESPI_IO_OOB_RX_IEN_RX_IEN_Msk         (_UINT32_(0x1) << ESPI_IO_OOB_RX_IEN_RX_IEN_Pos)     /* (ESPI_IO_OOB_RX_IEN) When this bit is '1' an interrupt is generated when the bit RECEIVE_DONE_STATUS in the OOB Channel Receive Status\n      Register is 1. When this bit is '0', the status bit will not generate an interrupt. Mask */
#define ESPI_IO_OOB_RX_IEN_RX_IEN(value)      (ESPI_IO_OOB_RX_IEN_RX_IEN_Msk & (_UINT32_(value) << ESPI_IO_OOB_RX_IEN_RX_IEN_Pos)) /* Assigment of value for RX_IEN in the ESPI_IO_OOB_RX_IEN register */
#define ESPI_IO_OOB_RX_IEN_Msk                _UINT32_(0x00000001)                                 /* (ESPI_IO_OOB_RX_IEN) Register Mask  */


/* -------- ESPI_IO_OOB_RX_STS : (ESPI_IO Offset: 0x260) (R/W 32) OOB Channel Receive Status Register -------- */
#define ESPI_IO_OOB_RX_STS_RESETVALUE         _UINT32_(0x00)                                       /*  (ESPI_IO_OOB_RX_STS) OOB Channel Receive Status Register  Reset Value */

#define ESPI_IO_OOB_RX_STS_DONE_Pos           _UINT32_(0)                                          /* (ESPI_IO_OOB_RX_STS) This bit is set to '1' whenever the RECEIVE_ENABLE bit in this register is cleared to '0' by hardware when an incoming\n      packet is completely transferred to SRAM. This bit is also set whenever either OVERRUN_STATUS or INTERNAL_BUS_ERROR_STATUS in\n      this register are set to '1'. (R/WC). Position */
#define ESPI_IO_OOB_RX_STS_DONE_Msk           (_UINT32_(0x1) << ESPI_IO_OOB_RX_STS_DONE_Pos)       /* (ESPI_IO_OOB_RX_STS) This bit is set to '1' whenever the RECEIVE_ENABLE bit in this register is cleared to '0' by hardware when an incoming\n      packet is completely transferred to SRAM. This bit is also set whenever either OVERRUN_STATUS or INTERNAL_BUS_ERROR_STATUS in\n      this register are set to '1'. (R/WC). Mask */
#define ESPI_IO_OOB_RX_STS_DONE(value)        (ESPI_IO_OOB_RX_STS_DONE_Msk & (_UINT32_(value) << ESPI_IO_OOB_RX_STS_DONE_Pos)) /* Assigment of value for DONE in the ESPI_IO_OOB_RX_STS register */
#define ESPI_IO_OOB_RX_STS_INT_BUS_ERR_STS_Pos _UINT32_(1)                                          /* (ESPI_IO_OOB_RX_STS) This bit is set to '1' whenever the channel tries to write an incoming byte into an invalid area of the internal\n      addressing space. This could happen if the OOB Channel Receive Address Register was set to something invalid by firmware. If\n      this error occurs mid-packet(crossing a boundary into an invalid space), then the remaining data is discarded. (R/WC). Position */
#define ESPI_IO_OOB_RX_STS_INT_BUS_ERR_STS_Msk (_UINT32_(0x1) << ESPI_IO_OOB_RX_STS_INT_BUS_ERR_STS_Pos) /* (ESPI_IO_OOB_RX_STS) This bit is set to '1' whenever the channel tries to write an incoming byte into an invalid area of the internal\n      addressing space. This could happen if the OOB Channel Receive Address Register was set to something invalid by firmware. If\n      this error occurs mid-packet(crossing a boundary into an invalid space), then the remaining data is discarded. (R/WC). Mask */
#define ESPI_IO_OOB_RX_STS_INT_BUS_ERR_STS(value) (ESPI_IO_OOB_RX_STS_INT_BUS_ERR_STS_Msk & (_UINT32_(value) << ESPI_IO_OOB_RX_STS_INT_BUS_ERR_STS_Pos)) /* Assigment of value for INT_BUS_ERR_STS in the ESPI_IO_OOB_RX_STS register */
#define ESPI_IO_OOB_RX_STS_OVRUN_STS_Pos      _UINT32_(2)                                          /* (ESPI_IO_OOB_RX_STS) This bit is set to '1' whenever an incoming packet is truncated because it was longer than the RECEIVE_BUFFER_LENGTH\n      field. Incoming extra bytes are discarded when this error is triggered, but the buffer receives the data up to its limit, for\n      debugging purposes. (R/WC) Position */
#define ESPI_IO_OOB_RX_STS_OVRUN_STS_Msk      (_UINT32_(0x1) << ESPI_IO_OOB_RX_STS_OVRUN_STS_Pos)  /* (ESPI_IO_OOB_RX_STS) This bit is set to '1' whenever an incoming packet is truncated because it was longer than the RECEIVE_BUFFER_LENGTH\n      field. Incoming extra bytes are discarded when this error is triggered, but the buffer receives the data up to its limit, for\n      debugging purposes. (R/WC) Mask */
#define ESPI_IO_OOB_RX_STS_OVRUN_STS(value)   (ESPI_IO_OOB_RX_STS_OVRUN_STS_Msk & (_UINT32_(value) << ESPI_IO_OOB_RX_STS_OVRUN_STS_Pos)) /* Assigment of value for OVRUN_STS in the ESPI_IO_OOB_RX_STS register */
#define ESPI_IO_OOB_RX_STS_RX_EN_Pos          _UINT32_(3)                                          /* (ESPI_IO_OOB_RX_STS) This bit is set to '1' when firmware sets the bit SET_RECEIVE_AVAILABLE in the OOB Channel Receive Control Register\n      to '1', to indicate that an SRAM buffer is available to receive the next Down OOB packet. The OOB Channel Receive Address\n      Register and OOB Channel Receive Length Register must have already been initialized before setting this bit.\n      This bit is cleared by hardware when the next packet is received. The RECEIVE_DONE_STATUS bit is set to '1' after this bit is\n      cleared. A '0' in this bit does not necessarily present 'Not Free' status to the eSPI Master. As long as FIFO space is available\n      for a complete OOB packet, the packet can be input and held in the FIFO until this bit is again set by firmware. Position */
#define ESPI_IO_OOB_RX_STS_RX_EN_Msk          (_UINT32_(0x1) << ESPI_IO_OOB_RX_STS_RX_EN_Pos)      /* (ESPI_IO_OOB_RX_STS) This bit is set to '1' when firmware sets the bit SET_RECEIVE_AVAILABLE in the OOB Channel Receive Control Register\n      to '1', to indicate that an SRAM buffer is available to receive the next Down OOB packet. The OOB Channel Receive Address\n      Register and OOB Channel Receive Length Register must have already been initialized before setting this bit.\n      This bit is cleared by hardware when the next packet is received. The RECEIVE_DONE_STATUS bit is set to '1' after this bit is\n      cleared. A '0' in this bit does not necessarily present 'Not Free' status to the eSPI Master. As long as FIFO space is available\n      for a complete OOB packet, the packet can be input and held in the FIFO until this bit is again set by firmware. Mask */
#define ESPI_IO_OOB_RX_STS_RX_EN(value)       (ESPI_IO_OOB_RX_STS_RX_EN_Msk & (_UINT32_(value) << ESPI_IO_OOB_RX_STS_RX_EN_Pos)) /* Assigment of value for RX_EN in the ESPI_IO_OOB_RX_STS register */
#define ESPI_IO_OOB_RX_STS_IN_TAG_Pos         _UINT32_(8)                                          /* (ESPI_IO_OOB_RX_STS) This field holds the 4-bit TAG in the last message received from the Master. Position */
#define ESPI_IO_OOB_RX_STS_IN_TAG_Msk         (_UINT32_(0xF) << ESPI_IO_OOB_RX_STS_IN_TAG_Pos)     /* (ESPI_IO_OOB_RX_STS) This field holds the 4-bit TAG in the last message received from the Master. Mask */
#define ESPI_IO_OOB_RX_STS_IN_TAG(value)      (ESPI_IO_OOB_RX_STS_IN_TAG_Msk & (_UINT32_(value) << ESPI_IO_OOB_RX_STS_IN_TAG_Pos)) /* Assigment of value for IN_TAG in the ESPI_IO_OOB_RX_STS register */
#define ESPI_IO_OOB_RX_STS_Msk                _UINT32_(0x00000F0F)                                 /* (ESPI_IO_OOB_RX_STS) Register Mask  */


/* -------- ESPI_IO_OOB_TX_CTRL : (ESPI_IO Offset: 0x264) (R/W 32) OOB Channel Transmit Control Register -------- */
#define ESPI_IO_OOB_TX_CTRL_RESETVALUE        _UINT32_(0x00)                                       /*  (ESPI_IO_OOB_TX_CTRL) OOB Channel Transmit Control Register  Reset Value */

#define ESPI_IO_OOB_TX_CTRL_TX_STRT_Pos       _UINT32_(0)                                          /* (ESPI_IO_OOB_TX_CTRL) A write of '1' to this bit starts the transmission of an OOB packet defined by the OOB Channel Transmit Address Register and OOB\n      Channel Transmit Length Register registers. A write of '0' has no effect.\n      The transmission will be inhibited if the OOB channel is not Ready, as defined in the eSPI OOB Channel Ready Register. Position */
#define ESPI_IO_OOB_TX_CTRL_TX_STRT_Msk       (_UINT32_(0x1) << ESPI_IO_OOB_TX_CTRL_TX_STRT_Pos)   /* (ESPI_IO_OOB_TX_CTRL) A write of '1' to this bit starts the transmission of an OOB packet defined by the OOB Channel Transmit Address Register and OOB\n      Channel Transmit Length Register registers. A write of '0' has no effect.\n      The transmission will be inhibited if the OOB channel is not Ready, as defined in the eSPI OOB Channel Ready Register. Mask */
#define ESPI_IO_OOB_TX_CTRL_TX_STRT(value)    (ESPI_IO_OOB_TX_CTRL_TX_STRT_Msk & (_UINT32_(value) << ESPI_IO_OOB_TX_CTRL_TX_STRT_Pos)) /* Assigment of value for TX_STRT in the ESPI_IO_OOB_TX_CTRL register */
#define ESPI_IO_OOB_TX_CTRL_OUTG_TAG_Pos      _UINT32_(8)                                          /* (ESPI_IO_OOB_TX_CTRL) This 4-bit value will be inserted as the TAG number in the next transmitted OOB packet. This field must be 0. Position */
#define ESPI_IO_OOB_TX_CTRL_OUTG_TAG_Msk      (_UINT32_(0xF) << ESPI_IO_OOB_TX_CTRL_OUTG_TAG_Pos)  /* (ESPI_IO_OOB_TX_CTRL) This 4-bit value will be inserted as the TAG number in the next transmitted OOB packet. This field must be 0. Mask */
#define ESPI_IO_OOB_TX_CTRL_OUTG_TAG(value)   (ESPI_IO_OOB_TX_CTRL_OUTG_TAG_Msk & (_UINT32_(value) << ESPI_IO_OOB_TX_CTRL_OUTG_TAG_Pos)) /* Assigment of value for OUTG_TAG in the ESPI_IO_OOB_TX_CTRL register */
#define ESPI_IO_OOB_TX_CTRL_Msk               _UINT32_(0x00000F01)                                 /* (ESPI_IO_OOB_TX_CTRL) Register Mask  */


/* -------- ESPI_IO_OOB_TX_IEN : (ESPI_IO Offset: 0x268) (R/W 32) OOB Channel Transmit Interrupt Enable Register -------- */
#define ESPI_IO_OOB_TX_IEN_RESETVALUE         _UINT32_(0x00)                                       /*  (ESPI_IO_OOB_TX_IEN) OOB Channel Transmit Interrupt Enable Register  Reset Value */

#define ESPI_IO_OOB_TX_IEN_DONE_Pos           _UINT32_(0)                                          /* (ESPI_IO_OOB_TX_IEN) When this bit is '1' an interrupt is generated when the bit TRANSMIT_DONE_STATUS in the OOB Channel Transmit Status\n      Register is 1. When this bit is '0', the status bit will not generate an interrupt. Position */
#define ESPI_IO_OOB_TX_IEN_DONE_Msk           (_UINT32_(0x1) << ESPI_IO_OOB_TX_IEN_DONE_Pos)       /* (ESPI_IO_OOB_TX_IEN) When this bit is '1' an interrupt is generated when the bit TRANSMIT_DONE_STATUS in the OOB Channel Transmit Status\n      Register is 1. When this bit is '0', the status bit will not generate an interrupt. Mask */
#define ESPI_IO_OOB_TX_IEN_DONE(value)        (ESPI_IO_OOB_TX_IEN_DONE_Msk & (_UINT32_(value) << ESPI_IO_OOB_TX_IEN_DONE_Pos)) /* Assigment of value for DONE in the ESPI_IO_OOB_TX_IEN register */
#define ESPI_IO_OOB_TX_IEN_CHN_EN_CHNG_Pos    _UINT32_(1)                                          /* (ESPI_IO_OOB_TX_IEN) When this bit is '1' an interrupt is generated when the bit CHANNEL_ENABLE_CHANGE_STATUS in the OOB Channel Transmit\n      Status Register is 1. When this bit is '0', the status bit will not generate an interrupt. Position */
#define ESPI_IO_OOB_TX_IEN_CHN_EN_CHNG_Msk    (_UINT32_(0x1) << ESPI_IO_OOB_TX_IEN_CHN_EN_CHNG_Pos) /* (ESPI_IO_OOB_TX_IEN) When this bit is '1' an interrupt is generated when the bit CHANNEL_ENABLE_CHANGE_STATUS in the OOB Channel Transmit\n      Status Register is 1. When this bit is '0', the status bit will not generate an interrupt. Mask */
#define ESPI_IO_OOB_TX_IEN_CHN_EN_CHNG(value) (ESPI_IO_OOB_TX_IEN_CHN_EN_CHNG_Msk & (_UINT32_(value) << ESPI_IO_OOB_TX_IEN_CHN_EN_CHNG_Pos)) /* Assigment of value for CHN_EN_CHNG in the ESPI_IO_OOB_TX_IEN register */
#define ESPI_IO_OOB_TX_IEN_Msk                _UINT32_(0x00000003)                                 /* (ESPI_IO_OOB_TX_IEN) Register Mask  */


/* -------- ESPI_IO_OOB_TX_STS : (ESPI_IO Offset: 0x26C) (R/W 32) OOB Channel Transmit Status Register -------- */
#define ESPI_IO_OOB_TX_STS_RESETVALUE         _UINT32_(0x00)                                       /*  (ESPI_IO_OOB_TX_STS) OOB Channel Transmit Status Register  Reset Value */

#define ESPI_IO_OOB_TX_STS_DONE_Pos           _UINT32_(0)                                          /* (ESPI_IO_OOB_TX_STS) This bit is set to '1' whenever a Transmit operation terminates (TRANSMIT_BUSY in this register goes from '1' to '0'). (R/WC) Position */
#define ESPI_IO_OOB_TX_STS_DONE_Msk           (_UINT32_(0x1) << ESPI_IO_OOB_TX_STS_DONE_Pos)       /* (ESPI_IO_OOB_TX_STS) This bit is set to '1' whenever a Transmit operation terminates (TRANSMIT_BUSY in this register goes from '1' to '0'). (R/WC) Mask */
#define ESPI_IO_OOB_TX_STS_DONE(value)        (ESPI_IO_OOB_TX_STS_DONE_Msk & (_UINT32_(value) << ESPI_IO_OOB_TX_STS_DONE_Pos)) /* Assigment of value for DONE in the ESPI_IO_OOB_TX_STS register */
#define ESPI_IO_OOB_TX_STS_CHN_EN_CHNG_STS_Pos _UINT32_(1)                                          /* (ESPI_IO_OOB_TX_STS) This bit is set to '1' whenever the eSPI Master changes the state of the OOB Message Channel Enable bit in the OOB\n      Channel Capabilities and Configurations Master register. (R/WC). Position */
#define ESPI_IO_OOB_TX_STS_CHN_EN_CHNG_STS_Msk (_UINT32_(0x1) << ESPI_IO_OOB_TX_STS_CHN_EN_CHNG_STS_Pos) /* (ESPI_IO_OOB_TX_STS) This bit is set to '1' whenever the eSPI Master changes the state of the OOB Message Channel Enable bit in the OOB\n      Channel Capabilities and Configurations Master register. (R/WC). Mask */
#define ESPI_IO_OOB_TX_STS_CHN_EN_CHNG_STS(value) (ESPI_IO_OOB_TX_STS_CHN_EN_CHNG_STS_Msk & (_UINT32_(value) << ESPI_IO_OOB_TX_STS_CHN_EN_CHNG_STS_Pos)) /* Assigment of value for CHN_EN_CHNG_STS in the ESPI_IO_OOB_TX_STS register */
#define ESPI_IO_OOB_TX_STS_INT_BUS_ERR_STS_Pos _UINT32_(2)                                          /* (ESPI_IO_OOB_TX_STS) This error flag indicates an internal bus violation occurred in trying to transmit. (R/WC) Position */
#define ESPI_IO_OOB_TX_STS_INT_BUS_ERR_STS_Msk (_UINT32_(0x1) << ESPI_IO_OOB_TX_STS_INT_BUS_ERR_STS_Pos) /* (ESPI_IO_OOB_TX_STS) This error flag indicates an internal bus violation occurred in trying to transmit. (R/WC) Mask */
#define ESPI_IO_OOB_TX_STS_INT_BUS_ERR_STS(value) (ESPI_IO_OOB_TX_STS_INT_BUS_ERR_STS_Msk & (_UINT32_(value) << ESPI_IO_OOB_TX_STS_INT_BUS_ERR_STS_Pos)) /* Assigment of value for INT_BUS_ERR_STS in the ESPI_IO_OOB_TX_STS register */
#define ESPI_IO_OOB_TX_STS_STRT_OVRUN_STS_Pos _UINT32_(3)                                          /* (ESPI_IO_OOB_TX_STS) This error flag indicates a Start was attempted while the channel was Busy. Any Transmit in progress is\n      immediately halted. (R/WC) Position */
#define ESPI_IO_OOB_TX_STS_STRT_OVRUN_STS_Msk (_UINT32_(0x1) << ESPI_IO_OOB_TX_STS_STRT_OVRUN_STS_Pos) /* (ESPI_IO_OOB_TX_STS) This error flag indicates a Start was attempted while the channel was Busy. Any Transmit in progress is\n      immediately halted. (R/WC) Mask */
#define ESPI_IO_OOB_TX_STS_STRT_OVRUN_STS(value) (ESPI_IO_OOB_TX_STS_STRT_OVRUN_STS_Msk & (_UINT32_(value) << ESPI_IO_OOB_TX_STS_STRT_OVRUN_STS_Pos)) /* Assigment of value for STRT_OVRUN_STS in the ESPI_IO_OOB_TX_STS register */
#define ESPI_IO_OOB_TX_STS_BAD_REQ_Pos        _UINT32_(5)                                          /* (ESPI_IO_OOB_TX_STS) This bit is intended for any situation where a firmware request cannot be started because it expresses\n      something impossible. This bit will be set for a request to Transmit 0 bytes or if a Transmit length is more than the\n      selected Max Payload Length. This condition brings the state machine to the Done state, as if something had actually\n      finished, with everything including the Done interrupt triggered. (R/WC) Position */
#define ESPI_IO_OOB_TX_STS_BAD_REQ_Msk        (_UINT32_(0x1) << ESPI_IO_OOB_TX_STS_BAD_REQ_Pos)    /* (ESPI_IO_OOB_TX_STS) This bit is intended for any situation where a firmware request cannot be started because it expresses\n      something impossible. This bit will be set for a request to Transmit 0 bytes or if a Transmit length is more than the\n      selected Max Payload Length. This condition brings the state machine to the Done state, as if something had actually\n      finished, with everything including the Done interrupt triggered. (R/WC) Mask */
#define ESPI_IO_OOB_TX_STS_BAD_REQ(value)     (ESPI_IO_OOB_TX_STS_BAD_REQ_Msk & (_UINT32_(value) << ESPI_IO_OOB_TX_STS_BAD_REQ_Pos)) /* Assigment of value for BAD_REQ in the ESPI_IO_OOB_TX_STS register */
#define ESPI_IO_OOB_TX_STS_TX_BUSY_Pos        _UINT32_(8)                                          /* (ESPI_IO_OOB_TX_STS) This bit is set to '1' when firmware writes '1' to the TRANSMIT_START bit. It is cleared by hardware when\n      the transfer is complete. If the TRANSMIT_START bit is written '1' while this bit is also '1', then this will set the\n      START_OVERRUN_STATUS bit to '1' and terminate the transfer attempt immediately (Transmit Done). Position */
#define ESPI_IO_OOB_TX_STS_TX_BUSY_Msk        (_UINT32_(0x1) << ESPI_IO_OOB_TX_STS_TX_BUSY_Pos)    /* (ESPI_IO_OOB_TX_STS) This bit is set to '1' when firmware writes '1' to the TRANSMIT_START bit. It is cleared by hardware when\n      the transfer is complete. If the TRANSMIT_START bit is written '1' while this bit is also '1', then this will set the\n      START_OVERRUN_STATUS bit to '1' and terminate the transfer attempt immediately (Transmit Done). Mask */
#define ESPI_IO_OOB_TX_STS_TX_BUSY(value)     (ESPI_IO_OOB_TX_STS_TX_BUSY_Msk & (_UINT32_(value) << ESPI_IO_OOB_TX_STS_TX_BUSY_Pos)) /* Assigment of value for TX_BUSY in the ESPI_IO_OOB_TX_STS register */
#define ESPI_IO_OOB_TX_STS_CHN_EN_IMG_Pos     _UINT32_(9)                                          /* (ESPI_IO_OOB_TX_STS) This bit is an image of the OOB Channel Enabled bit in the OOB Channel Receive Control Register register.\n      It is provided here so that it can be seen with the CHANNEL_ENABLE_CHANGE_STATUS Interrupt Status bit for efficiency. Position */
#define ESPI_IO_OOB_TX_STS_CHN_EN_IMG_Msk     (_UINT32_(0x1) << ESPI_IO_OOB_TX_STS_CHN_EN_IMG_Pos) /* (ESPI_IO_OOB_TX_STS) This bit is an image of the OOB Channel Enabled bit in the OOB Channel Receive Control Register register.\n      It is provided here so that it can be seen with the CHANNEL_ENABLE_CHANGE_STATUS Interrupt Status bit for efficiency. Mask */
#define ESPI_IO_OOB_TX_STS_CHN_EN_IMG(value)  (ESPI_IO_OOB_TX_STS_CHN_EN_IMG_Msk & (_UINT32_(value) << ESPI_IO_OOB_TX_STS_CHN_EN_IMG_Pos)) /* Assigment of value for CHN_EN_IMG in the ESPI_IO_OOB_TX_STS register */
#define ESPI_IO_OOB_TX_STS_Msk                _UINT32_(0x0000032F)                                 /* (ESPI_IO_OOB_TX_STS) Register Mask  */


/* -------- ESPI_IO_FC_FLASH_ADDR_LSW : (ESPI_IO Offset: 0x280) (R/W 32) Flash Access Channel Flash Address Register -------- */
#define ESPI_IO_FC_FLASH_ADDR_LSW_RESETVALUE  _UINT32_(0x00)                                       /*  (ESPI_IO_FC_FLASH_ADDR_LSW) Flash Access Channel Flash Address Register  Reset Value */

#define ESPI_IO_FC_FLASH_ADDR_LSW_FLSW_Pos    _UINT32_(0)                                          /* (ESPI_IO_FC_FLASH_ADDR_LSW) Before starting a Flash access, this field must be initialized to contain the value used by eSPI for addressing the Flash contents. Position */
#define ESPI_IO_FC_FLASH_ADDR_LSW_FLSW_Msk    (_UINT32_(0xFFFFFFFF) << ESPI_IO_FC_FLASH_ADDR_LSW_FLSW_Pos) /* (ESPI_IO_FC_FLASH_ADDR_LSW) Before starting a Flash access, this field must be initialized to contain the value used by eSPI for addressing the Flash contents. Mask */
#define ESPI_IO_FC_FLASH_ADDR_LSW_FLSW(value) (ESPI_IO_FC_FLASH_ADDR_LSW_FLSW_Msk & (_UINT32_(value) << ESPI_IO_FC_FLASH_ADDR_LSW_FLSW_Pos)) /* Assigment of value for FLSW in the ESPI_IO_FC_FLASH_ADDR_LSW register */
#define ESPI_IO_FC_FLASH_ADDR_LSW_Msk         _UINT32_(0xFFFFFFFF)                                 /* (ESPI_IO_FC_FLASH_ADDR_LSW) Register Mask  */


/* -------- ESPI_IO_FC_BUF_ADDR_LSW : (ESPI_IO Offset: 0x288) (R/W 32) Flash Access Channel Buffer Address Register -------- */
#define ESPI_IO_FC_BUF_ADDR_LSW_RESETVALUE    _UINT32_(0x00)                                       /*  (ESPI_IO_FC_BUF_ADDR_LSW) Flash Access Channel Buffer Address Register  Reset Value */

#define ESPI_IO_FC_BUF_ADDR_LSW_BLSW_Pos      _UINT32_(0)                                          /* (ESPI_IO_FC_BUF_ADDR_LSW) Before starting a Flash access, this field must be initialized with the address of the data buffer in the EC's memory space. Position */
#define ESPI_IO_FC_BUF_ADDR_LSW_BLSW_Msk      (_UINT32_(0xFFFFFFFF) << ESPI_IO_FC_BUF_ADDR_LSW_BLSW_Pos) /* (ESPI_IO_FC_BUF_ADDR_LSW) Before starting a Flash access, this field must be initialized with the address of the data buffer in the EC's memory space. Mask */
#define ESPI_IO_FC_BUF_ADDR_LSW_BLSW(value)   (ESPI_IO_FC_BUF_ADDR_LSW_BLSW_Msk & (_UINT32_(value) << ESPI_IO_FC_BUF_ADDR_LSW_BLSW_Pos)) /* Assigment of value for BLSW in the ESPI_IO_FC_BUF_ADDR_LSW register */
#define ESPI_IO_FC_BUF_ADDR_LSW_Msk           _UINT32_(0xFFFFFFFF)                                 /* (ESPI_IO_FC_BUF_ADDR_LSW) Register Mask  */


/* -------- ESPI_IO_FC_XFR_LEN : (ESPI_IO Offset: 0x290) (R/W 32) Flash Access Channel Transfer Length Register -------- */
#define ESPI_IO_FC_XFR_LEN_RESETVALUE         _UINT32_(0x00)                                       /*  (ESPI_IO_FC_XFR_LEN) Flash Access Channel Transfer Length Register  Reset Value */

#define ESPI_IO_FC_XFR_LEN_TLEN_Pos           _UINT32_(0)                                          /* (ESPI_IO_FC_XFR_LEN) Before starting a Flash access, this field must be initialized with the total number of bytes to be transferred in the\n      requested transaction sequence. If the Master attempts to transfer more bytes than this in Read Completions, the transfer is faulted\n      and the DATA_OVERRUN bit in the Flash Access Channel Status Register register is asserted. Position */
#define ESPI_IO_FC_XFR_LEN_TLEN_Msk           (_UINT32_(0xFFFFFFFF) << ESPI_IO_FC_XFR_LEN_TLEN_Pos) /* (ESPI_IO_FC_XFR_LEN) Before starting a Flash access, this field must be initialized with the total number of bytes to be transferred in the\n      requested transaction sequence. If the Master attempts to transfer more bytes than this in Read Completions, the transfer is faulted\n      and the DATA_OVERRUN bit in the Flash Access Channel Status Register register is asserted. Mask */
#define ESPI_IO_FC_XFR_LEN_TLEN(value)        (ESPI_IO_FC_XFR_LEN_TLEN_Msk & (_UINT32_(value) << ESPI_IO_FC_XFR_LEN_TLEN_Pos)) /* Assigment of value for TLEN in the ESPI_IO_FC_XFR_LEN register */
#define ESPI_IO_FC_XFR_LEN_Msk                _UINT32_(0xFFFFFFFF)                                 /* (ESPI_IO_FC_XFR_LEN) Register Mask  */


/* -------- ESPI_IO_FC_CTRL : (ESPI_IO Offset: 0x294) (R/W 32) Flash Access Channel Control Register -------- */
#define ESPI_IO_FC_CTRL_RESETVALUE            _UINT32_(0x00)                                       /*  (ESPI_IO_FC_CTRL) Flash Access Channel Control Register  Reset Value */

#define ESPI_IO_FC_CTRL_FSTRT_Pos             _UINT32_(0)                                          /* (ESPI_IO_FC_CTRL) A write of '1' to this bit starts the transmission and sets the Busy status bit. A write of '0' has no effect.\n      The transmission will be inhibited if the OOB channel is not Ready, as defined in the eSPI Flash Channel Ready Register. Position */
#define ESPI_IO_FC_CTRL_FSTRT_Msk             (_UINT32_(0x1) << ESPI_IO_FC_CTRL_FSTRT_Pos)         /* (ESPI_IO_FC_CTRL) A write of '1' to this bit starts the transmission and sets the Busy status bit. A write of '0' has no effect.\n      The transmission will be inhibited if the OOB channel is not Ready, as defined in the eSPI Flash Channel Ready Register. Mask */
#define ESPI_IO_FC_CTRL_FSTRT(value)          (ESPI_IO_FC_CTRL_FSTRT_Msk & (_UINT32_(value) << ESPI_IO_FC_CTRL_FSTRT_Pos)) /* Assigment of value for FSTRT in the ESPI_IO_FC_CTRL register */
#define ESPI_IO_FC_CTRL_FUNC_Pos              _UINT32_(2)                                          /* (ESPI_IO_FC_CTRL) This bit selects the requested Flash function as follows:\n      11=Erase Flash Range=Larger of two ranges, if a choice exists\n      10=Erase Flash Range=Smaller of two ranges, if a choice exists\n      01=Write to Flash\n      00=Read from Flash. Position */
#define ESPI_IO_FC_CTRL_FUNC_Msk              (_UINT32_(0x3) << ESPI_IO_FC_CTRL_FUNC_Pos)          /* (ESPI_IO_FC_CTRL) This bit selects the requested Flash function as follows:\n      11=Erase Flash Range=Larger of two ranges, if a choice exists\n      10=Erase Flash Range=Smaller of two ranges, if a choice exists\n      01=Write to Flash\n      00=Read from Flash. Mask */
#define ESPI_IO_FC_CTRL_FUNC(value)           (ESPI_IO_FC_CTRL_FUNC_Msk & (_UINT32_(value) << ESPI_IO_FC_CTRL_FUNC_Pos)) /* Assigment of value for FUNC in the ESPI_IO_FC_CTRL register */
#define ESPI_IO_FC_CTRL_TAG_Pos               _UINT32_(4)                                          /* (ESPI_IO_FC_CTRL) This field should always be written to zero, which is the only expected Tag value for Flash Access traffic. It provides\n      the 4-bit TAG value in the eSPI Transaction Header sent by the EC. Completion traffic from the Master is required to match this field also. Position */
#define ESPI_IO_FC_CTRL_TAG_Msk               (_UINT32_(0xF) << ESPI_IO_FC_CTRL_TAG_Pos)           /* (ESPI_IO_FC_CTRL) This field should always be written to zero, which is the only expected Tag value for Flash Access traffic. It provides\n      the 4-bit TAG value in the eSPI Transaction Header sent by the EC. Completion traffic from the Master is required to match this field also. Mask */
#define ESPI_IO_FC_CTRL_TAG(value)            (ESPI_IO_FC_CTRL_TAG_Msk & (_UINT32_(value) << ESPI_IO_FC_CTRL_TAG_Pos)) /* Assigment of value for TAG in the ESPI_IO_FC_CTRL register */
#define ESPI_IO_FC_CTRL_ABRT_Pos              _UINT32_(16)                                         /* (ESPI_IO_FC_CTRL) By writing '1' to this bit while Busy==1, the transaction sequence last triggered by the Start bit is terminated, and the\n      Busy bit is cleared, at the next protocol-compliant opportunity. The clearing of the Busy bit will set the DONE status bit and the\n      ABORTED_BY_SLAVE status bit is set to '1' to acknowledge this specific action as the cause. The action of writing '1' to this bit is\n      ignored while Busy==0. This bit reads as '0' always. Position */
#define ESPI_IO_FC_CTRL_ABRT_Msk              (_UINT32_(0x1) << ESPI_IO_FC_CTRL_ABRT_Pos)          /* (ESPI_IO_FC_CTRL) By writing '1' to this bit while Busy==1, the transaction sequence last triggered by the Start bit is terminated, and the\n      Busy bit is cleared, at the next protocol-compliant opportunity. The clearing of the Busy bit will set the DONE status bit and the\n      ABORTED_BY_SLAVE status bit is set to '1' to acknowledge this specific action as the cause. The action of writing '1' to this bit is\n      ignored while Busy==0. This bit reads as '0' always. Mask */
#define ESPI_IO_FC_CTRL_ABRT(value)           (ESPI_IO_FC_CTRL_ABRT_Msk & (_UINT32_(value) << ESPI_IO_FC_CTRL_ABRT_Pos)) /* Assigment of value for ABRT in the ESPI_IO_FC_CTRL register */
#define ESPI_IO_FC_CTRL_Msk                   _UINT32_(0x000100FD)                                 /* (ESPI_IO_FC_CTRL) Register Mask  */


/* -------- ESPI_IO_FC_IEN : (ESPI_IO Offset: 0x298) (R/W 32) Flash Access Channel Interrupt Enable Register -------- */
#define ESPI_IO_FC_IEN_RESETVALUE             _UINT32_(0x00)                                       /*  (ESPI_IO_FC_IEN) Flash Access Channel Interrupt Enable Register  Reset Value */

#define ESPI_IO_FC_IEN_DONE_Pos               _UINT32_(0)                                          /* (ESPI_IO_FC_IEN) When this bit is '1' an interrupt is generated when the bit DONE in the Flash Access Channel Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Position */
#define ESPI_IO_FC_IEN_DONE_Msk               (_UINT32_(0x1) << ESPI_IO_FC_IEN_DONE_Pos)           /* (ESPI_IO_FC_IEN) When this bit is '1' an interrupt is generated when the bit DONE in the Flash Access Channel Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Mask */
#define ESPI_IO_FC_IEN_DONE(value)            (ESPI_IO_FC_IEN_DONE_Msk & (_UINT32_(value) << ESPI_IO_FC_IEN_DONE_Pos)) /* Assigment of value for DONE in the ESPI_IO_FC_IEN register */
#define ESPI_IO_FC_IEN_EN_STS_CHNG_Pos        _UINT32_(1)                                          /* (ESPI_IO_FC_IEN) When this bit is '1' an interrupt is generated when the bit CHANNEL_ENABLE_CHANGE_STATUS in the Flash Access Channel\n      Status Register is 1. When this bit is '0', the status bit will not generate an interrupt. Position */
#define ESPI_IO_FC_IEN_EN_STS_CHNG_Msk        (_UINT32_(0x1) << ESPI_IO_FC_IEN_EN_STS_CHNG_Pos)    /* (ESPI_IO_FC_IEN) When this bit is '1' an interrupt is generated when the bit CHANNEL_ENABLE_CHANGE_STATUS in the Flash Access Channel\n      Status Register is 1. When this bit is '0', the status bit will not generate an interrupt. Mask */
#define ESPI_IO_FC_IEN_EN_STS_CHNG(value)     (ESPI_IO_FC_IEN_EN_STS_CHNG_Msk & (_UINT32_(value) << ESPI_IO_FC_IEN_EN_STS_CHNG_Pos)) /* Assigment of value for EN_STS_CHNG in the ESPI_IO_FC_IEN register */
#define ESPI_IO_FC_IEN_Msk                    _UINT32_(0x00000003)                                 /* (ESPI_IO_FC_IEN) Register Mask  */


/* -------- ESPI_IO_FC_CFG : (ESPI_IO Offset: 0x29C) ( R/ 32) Flash Access Channel Configuration Register -------- */
#define ESPI_IO_FC_CFG_RESETVALUE             _UINT32_(0x1100)                                     /*  (ESPI_IO_FC_CFG) Flash Access Channel Configuration Register  Reset Value */

#define ESPI_IO_FC_CFG_BUSY_Pos               _UINT32_(0)                                          /* (ESPI_IO_FC_CFG) This bit is set to '1' when a '1' is written to the FLASH_START bit, and cleared either by hardware completion of the\n      requested operation or by firmware writing '1' to the ABORT_ACCESS bit. 1=The Channel is busy. 0=The Channel is not busy. Position */
#define ESPI_IO_FC_CFG_BUSY_Msk               (_UINT32_(0x1) << ESPI_IO_FC_CFG_BUSY_Pos)           /* (ESPI_IO_FC_CFG) This bit is set to '1' when a '1' is written to the FLASH_START bit, and cleared either by hardware completion of the\n      requested operation or by firmware writing '1' to the ABORT_ACCESS bit. 1=The Channel is busy. 0=The Channel is not busy. Mask */
#define ESPI_IO_FC_CFG_BUSY(value)            (ESPI_IO_FC_CFG_BUSY_Msk & (_UINT32_(value) << ESPI_IO_FC_CFG_BUSY_Pos)) /* Assigment of value for BUSY in the ESPI_IO_FC_CFG register */
#define ESPI_IO_FC_CFG_ERAS_BLK_SIZE_Pos      _UINT32_(2)                                          /* (ESPI_IO_FC_CFG) This is a read-only image of the equivalent field of the eSPI Configuration register. This field is set by the Master to\n      define what the Erase block size is for the Flash being used, and whether there is a choice available to firmware.\n      111b = Reserved\n      110b = Reserved\n      101b = 256K\n      100b = 128K\n      010b = 64K\n      011b = Both 4K and 64K allowed (see FUNCTION field)\n      001b = 4K\n      000b = Reserved. Position */
#define ESPI_IO_FC_CFG_ERAS_BLK_SIZE_Msk      (_UINT32_(0x7) << ESPI_IO_FC_CFG_ERAS_BLK_SIZE_Pos)  /* (ESPI_IO_FC_CFG) This is a read-only image of the equivalent field of the eSPI Configuration register. This field is set by the Master to\n      define what the Erase block size is for the Flash being used, and whether there is a choice available to firmware.\n      111b = Reserved\n      110b = Reserved\n      101b = 256K\n      100b = 128K\n      010b = 64K\n      011b = Both 4K and 64K allowed (see FUNCTION field)\n      001b = 4K\n      000b = Reserved. Mask */
#define ESPI_IO_FC_CFG_ERAS_BLK_SIZE(value)   (ESPI_IO_FC_CFG_ERAS_BLK_SIZE_Msk & (_UINT32_(value) << ESPI_IO_FC_CFG_ERAS_BLK_SIZE_Pos)) /* Assigment of value for ERAS_BLK_SIZE in the ESPI_IO_FC_CFG register */
#define ESPI_IO_FC_CFG_MAX_PAYLD_SEL_Pos      _UINT32_(8)                                          /* (ESPI_IO_FC_CFG) This is a read-only image of the equivalent field of the eSPI Configuration register, set by the Master to declare the\n      maximum number of bytes that can be used in a single Flash payload, in either direction. It will never be set greater than the value\n      provided by the EC in the FLASH_MAXIMUM_PAYLOAD_SIZE_SUPPORTED field in the eSPI Flash Channel Capabilities Register.\n      100b -- 111b = Reserved\n      011b = 256 bytes\n      010b = 128 bytes\n      001b = 64 bytes\n      000b = Reserved. Position */
#define ESPI_IO_FC_CFG_MAX_PAYLD_SEL_Msk      (_UINT32_(0x7) << ESPI_IO_FC_CFG_MAX_PAYLD_SEL_Pos)  /* (ESPI_IO_FC_CFG) This is a read-only image of the equivalent field of the eSPI Configuration register, set by the Master to declare the\n      maximum number of bytes that can be used in a single Flash payload, in either direction. It will never be set greater than the value\n      provided by the EC in the FLASH_MAXIMUM_PAYLOAD_SIZE_SUPPORTED field in the eSPI Flash Channel Capabilities Register.\n      100b -- 111b = Reserved\n      011b = 256 bytes\n      010b = 128 bytes\n      001b = 64 bytes\n      000b = Reserved. Mask */
#define ESPI_IO_FC_CFG_MAX_PAYLD_SEL(value)   (ESPI_IO_FC_CFG_MAX_PAYLD_SEL_Msk & (_UINT32_(value) << ESPI_IO_FC_CFG_MAX_PAYLD_SEL_Pos)) /* Assigment of value for MAX_PAYLD_SEL in the ESPI_IO_FC_CFG register */
#define ESPI_IO_FC_CFG_MAX_RD_REQ_Pos         _UINT32_(12)                                         /* (ESPI_IO_FC_CFG) This comes read-only from the eSPI Configuration register, set by the Master to declare the maximum number of bytes\n      that can be requested by the EC in a single Flash Read request packet.\n      111b = 4K bytes\n      110b = 2K bytes\n      101b = 1K bytes\n      100b = 512 bytes\n      011b = 256 bytes\n      010b = 128 bytes\n      001b = 64 bytes\n      000b = Reserved. Position */
#define ESPI_IO_FC_CFG_MAX_RD_REQ_Msk         (_UINT32_(0x7) << ESPI_IO_FC_CFG_MAX_RD_REQ_Pos)     /* (ESPI_IO_FC_CFG) This comes read-only from the eSPI Configuration register, set by the Master to declare the maximum number of bytes\n      that can be requested by the EC in a single Flash Read request packet.\n      111b = 4K bytes\n      110b = 2K bytes\n      101b = 1K bytes\n      100b = 512 bytes\n      011b = 256 bytes\n      010b = 128 bytes\n      001b = 64 bytes\n      000b = Reserved. Mask */
#define ESPI_IO_FC_CFG_MAX_RD_REQ(value)      (ESPI_IO_FC_CFG_MAX_RD_REQ_Msk & (_UINT32_(value) << ESPI_IO_FC_CFG_MAX_RD_REQ_Pos)) /* Assigment of value for MAX_RD_REQ in the ESPI_IO_FC_CFG register */
#define ESPI_IO_FC_CFG_Msk                    _UINT32_(0x0000771D)                                 /* (ESPI_IO_FC_CFG) Register Mask  */


/* -------- ESPI_IO_FC_STS : (ESPI_IO Offset: 0x2A0) (R/W 32) Flash Access Channel Status Register -------- */
#define ESPI_IO_FC_STS_RESETVALUE             _UINT32_(0x00)                                       /*  (ESPI_IO_FC_STS) Flash Access Channel Status Register  Reset Value */

#define ESPI_IO_FC_STS_CHN_EN_Pos             _UINT32_(0)                                          /* (ESPI_IO_FC_STS) This bit is a Read-only image of the bit Flash Access Channel Enable in the eSPI Configuration space. Rising or\n      falling edges of this bit will set the CHANNEL_ENABLE_CHANGE_STATUS bit to 1, and may be used to trigger interrupts. A falling edge\n      on this bit, while Busy==1, will also clear the Busy bit and set the DONE bit, with DISABLED_BY_MASTER status.\n      1=Flash Access Channel Enable bit = 1. 0=Flash Access Channel Enable bit = 0. Position */
#define ESPI_IO_FC_STS_CHN_EN_Msk             (_UINT32_(0x1) << ESPI_IO_FC_STS_CHN_EN_Pos)         /* (ESPI_IO_FC_STS) This bit is a Read-only image of the bit Flash Access Channel Enable in the eSPI Configuration space. Rising or\n      falling edges of this bit will set the CHANNEL_ENABLE_CHANGE_STATUS bit to 1, and may be used to trigger interrupts. A falling edge\n      on this bit, while Busy==1, will also clear the Busy bit and set the DONE bit, with DISABLED_BY_MASTER status.\n      1=Flash Access Channel Enable bit = 1. 0=Flash Access Channel Enable bit = 0. Mask */
#define ESPI_IO_FC_STS_CHN_EN(value)          (ESPI_IO_FC_STS_CHN_EN_Msk & (_UINT32_(value) << ESPI_IO_FC_STS_CHN_EN_Pos)) /* Assigment of value for CHN_EN in the ESPI_IO_FC_STS register */
#define ESPI_IO_FC_STS_CHN_EN_CHNG_Pos        _UINT32_(1)                                          /* (ESPI_IO_FC_STS) 0=Flash Access Enable bit in eSPI Configuration space has not been changed since this bit was last cleared.\n      1=Flash Access Enable bit in eSPI Configuration space has been changed since this bit was last cleared.\n      The current state of the Flash Access Enable bit can be seen as the read-only bit CHANNEL_ENABLE_STATUS in this register.\n      This bit is cleared by writing '1'. (R/WC) Position */
#define ESPI_IO_FC_STS_CHN_EN_CHNG_Msk        (_UINT32_(0x1) << ESPI_IO_FC_STS_CHN_EN_CHNG_Pos)    /* (ESPI_IO_FC_STS) 0=Flash Access Enable bit in eSPI Configuration space has not been changed since this bit was last cleared.\n      1=Flash Access Enable bit in eSPI Configuration space has been changed since this bit was last cleared.\n      The current state of the Flash Access Enable bit can be seen as the read-only bit CHANNEL_ENABLE_STATUS in this register.\n      This bit is cleared by writing '1'. (R/WC) Mask */
#define ESPI_IO_FC_STS_CHN_EN_CHNG(value)     (ESPI_IO_FC_STS_CHN_EN_CHNG_Msk & (_UINT32_(value) << ESPI_IO_FC_STS_CHN_EN_CHNG_Pos)) /* Assigment of value for CHN_EN_CHNG in the ESPI_IO_FC_STS register */
#define ESPI_IO_FC_STS_DONE_Pos               _UINT32_(2)                                          /* (ESPI_IO_FC_STS) 1=Channel is done=Busy bit has been cleared since this bit was last cleared. It is cleared by writing '1'. (R/WC)\n      0=Channel is not done=Busy bit has not been cleared since this bit was last cleared. Position */
#define ESPI_IO_FC_STS_DONE_Msk               (_UINT32_(0x1) << ESPI_IO_FC_STS_DONE_Pos)           /* (ESPI_IO_FC_STS) 1=Channel is done=Busy bit has been cleared since this bit was last cleared. It is cleared by writing '1'. (R/WC)\n      0=Channel is not done=Busy bit has not been cleared since this bit was last cleared. Mask */
#define ESPI_IO_FC_STS_DONE(value)            (ESPI_IO_FC_STS_DONE_Msk & (_UINT32_(value) << ESPI_IO_FC_STS_DONE_Pos)) /* Assigment of value for DONE in the ESPI_IO_FC_STS register */
#define ESPI_IO_FC_STS_DIS_MAST_Pos           _UINT32_(3)                                          /* (ESPI_IO_FC_STS) This bit is set to '1' if the Flash Channel is disabled by the Master while the Busy bit is '1'. It is cleared by writing '1'. (R/WC)      1=The command finished because the Enable bit became 0. 0=The command finished without a change in the Enable bit. Position */
#define ESPI_IO_FC_STS_DIS_MAST_Msk           (_UINT32_(0x1) << ESPI_IO_FC_STS_DIS_MAST_Pos)       /* (ESPI_IO_FC_STS) This bit is set to '1' if the Flash Channel is disabled by the Master while the Busy bit is '1'. It is cleared by writing '1'. (R/WC)      1=The command finished because the Enable bit became 0. 0=The command finished without a change in the Enable bit. Mask */
#define ESPI_IO_FC_STS_DIS_MAST(value)        (ESPI_IO_FC_STS_DIS_MAST_Msk & (_UINT32_(value) << ESPI_IO_FC_STS_DIS_MAST_Pos)) /* Assigment of value for DIS_MAST in the ESPI_IO_FC_STS register */
#define ESPI_IO_FC_STS_INT_BUS_ERR_Pos        _UINT32_(4)                                          /* (ESPI_IO_FC_STS) This bit is set to '1' if the internal bus master associated with the Flash Access Channel encounters a Bus Fault condition.\n      It is cleared by writing '1'. (R/WC)\n      1=Bus Error detected. 0=The command finished without a Bus Error. Position */
#define ESPI_IO_FC_STS_INT_BUS_ERR_Msk        (_UINT32_(0x1) << ESPI_IO_FC_STS_INT_BUS_ERR_Pos)    /* (ESPI_IO_FC_STS) This bit is set to '1' if the internal bus master associated with the Flash Access Channel encounters a Bus Fault condition.\n      It is cleared by writing '1'. (R/WC)\n      1=Bus Error detected. 0=The command finished without a Bus Error. Mask */
#define ESPI_IO_FC_STS_INT_BUS_ERR(value)     (ESPI_IO_FC_STS_INT_BUS_ERR_Msk & (_UINT32_(value) << ESPI_IO_FC_STS_INT_BUS_ERR_Pos)) /* Assigment of value for INT_BUS_ERR in the ESPI_IO_FC_STS register */
#define ESPI_IO_FC_STS_ABORT_SLAVE_Pos        _UINT32_(5)                                          /* (ESPI_IO_FC_STS) This bit is set to '1' if the Abort bit is set to '1' by firmware while the Busy bit is '1', thereby clearing Busy status.\n      It is cleared by writing '1'. (R/WC)\n      1=The command finished because of the Abort bit. 0=The command finished without an Abort bit activation. Position */
#define ESPI_IO_FC_STS_ABORT_SLAVE_Msk        (_UINT32_(0x1) << ESPI_IO_FC_STS_ABORT_SLAVE_Pos)    /* (ESPI_IO_FC_STS) This bit is set to '1' if the Abort bit is set to '1' by firmware while the Busy bit is '1', thereby clearing Busy status.\n      It is cleared by writing '1'. (R/WC)\n      1=The command finished because of the Abort bit. 0=The command finished without an Abort bit activation. Mask */
#define ESPI_IO_FC_STS_ABORT_SLAVE(value)     (ESPI_IO_FC_STS_ABORT_SLAVE_Msk & (_UINT32_(value) << ESPI_IO_FC_STS_ABORT_SLAVE_Pos)) /* Assigment of value for ABORT_SLAVE in the ESPI_IO_FC_STS register */
#define ESPI_IO_FC_STS_DAT_OVRUN_Pos          _UINT32_(6)                                          /* (ESPI_IO_FC_STS) This bit is set to '1' by a SUCCESSFUL COMPLETION response by the eSPI Master to a Read sequence, but either without\n      indicating Final Completion when the requested byte count is reached or with too many bytes provided while indicating Final Completion.\n      It is cleared by writing '1'. (R/WC)\n      1=The eSPI Master finished with too much data. 0=The eSPI Master finished without too much data. Position */
#define ESPI_IO_FC_STS_DAT_OVRUN_Msk          (_UINT32_(0x1) << ESPI_IO_FC_STS_DAT_OVRUN_Pos)      /* (ESPI_IO_FC_STS) This bit is set to '1' by a SUCCESSFUL COMPLETION response by the eSPI Master to a Read sequence, but either without\n      indicating Final Completion when the requested byte count is reached or with too many bytes provided while indicating Final Completion.\n      It is cleared by writing '1'. (R/WC)\n      1=The eSPI Master finished with too much data. 0=The eSPI Master finished without too much data. Mask */
#define ESPI_IO_FC_STS_DAT_OVRUN(value)       (ESPI_IO_FC_STS_DAT_OVRUN_Msk & (_UINT32_(value) << ESPI_IO_FC_STS_DAT_OVRUN_Pos)) /* Assigment of value for DAT_OVRUN in the ESPI_IO_FC_STS register */
#define ESPI_IO_FC_STS_INCMPL_Pos             _UINT32_(7)                                          /* (ESPI_IO_FC_STS) This bit is set to '1' by a SUCCESSFUL COMPLETION Read response from the eSPI Master, indicating a Final Completion, but\n      with too few bytes provided for the Transaction step that was issued by the eSPI Slave. It is cleared by writing '1'.\n      This bit is cleared by writing '1'. (R/WC)\n      1=The eSPI Master finished with too little data. 0=The eSPI Master finished with at least enough data. Position */
#define ESPI_IO_FC_STS_INCMPL_Msk             (_UINT32_(0x1) << ESPI_IO_FC_STS_INCMPL_Pos)         /* (ESPI_IO_FC_STS) This bit is set to '1' by a SUCCESSFUL COMPLETION Read response from the eSPI Master, indicating a Final Completion, but\n      with too few bytes provided for the Transaction step that was issued by the eSPI Slave. It is cleared by writing '1'.\n      This bit is cleared by writing '1'. (R/WC)\n      1=The eSPI Master finished with too little data. 0=The eSPI Master finished with at least enough data. Mask */
#define ESPI_IO_FC_STS_INCMPL(value)          (ESPI_IO_FC_STS_INCMPL_Msk & (_UINT32_(value) << ESPI_IO_FC_STS_INCMPL_Pos)) /* Assigment of value for INCMPL in the ESPI_IO_FC_STS register */
#define ESPI_IO_FC_STS_FAIL_Pos               _UINT32_(8)                                          /* (ESPI_IO_FC_STS) This bit is set to '1' by an explicit UNSUCCESSFUL COMPLETION response from the eSPI Master, which also terminates\n      the transaction sequence. This may occur if an invalid or illegal section of Flash memory is accessed, and only at Runtime (post-boot).\n      This bit is cleared by writing '1'. (R/WC)\n      1=The eSPI Master indicated unsuccessful completion.\n      0=The eSPI Master indicated successful completion. Position */
#define ESPI_IO_FC_STS_FAIL_Msk               (_UINT32_(0x1) << ESPI_IO_FC_STS_FAIL_Pos)           /* (ESPI_IO_FC_STS) This bit is set to '1' by an explicit UNSUCCESSFUL COMPLETION response from the eSPI Master, which also terminates\n      the transaction sequence. This may occur if an invalid or illegal section of Flash memory is accessed, and only at Runtime (post-boot).\n      This bit is cleared by writing '1'. (R/WC)\n      1=The eSPI Master indicated unsuccessful completion.\n      0=The eSPI Master indicated successful completion. Mask */
#define ESPI_IO_FC_STS_FAIL(value)            (ESPI_IO_FC_STS_FAIL_Msk & (_UINT32_(value) << ESPI_IO_FC_STS_FAIL_Pos)) /* Assigment of value for FAIL in the ESPI_IO_FC_STS register */
#define ESPI_IO_FC_STS_STRT_OVRFLW_Pos        _UINT32_(9)                                          /* (ESPI_IO_FC_STS) This bit is set if a command (initiated by setting the Start bit) has been ignored because the Busy bit was already on.\n      The transfer in progress is also brought to the Done state at the next opportunity allowed by the eSPI protocol, as if the Abort bit\n      had been set by the firmware, so that this bit will be present at a Done interrupt. This bit is cleared by writing '1'. (R/WC)\n      This flag represents a serious mis-communication between the firmware and hardware, and should be handled cautiously as a\n      special case by firmware.\n      1=Start Overflow. Firmware has attempted to trigger a transaction sequence before allowing the previous sequence to finish and\n      without using the Abort bit to terminate it first\n      0=No Start Overflow detected. Position */
#define ESPI_IO_FC_STS_STRT_OVRFLW_Msk        (_UINT32_(0x1) << ESPI_IO_FC_STS_STRT_OVRFLW_Pos)    /* (ESPI_IO_FC_STS) This bit is set if a command (initiated by setting the Start bit) has been ignored because the Busy bit was already on.\n      The transfer in progress is also brought to the Done state at the next opportunity allowed by the eSPI protocol, as if the Abort bit\n      had been set by the firmware, so that this bit will be present at a Done interrupt. This bit is cleared by writing '1'. (R/WC)\n      This flag represents a serious mis-communication between the firmware and hardware, and should be handled cautiously as a\n      special case by firmware.\n      1=Start Overflow. Firmware has attempted to trigger a transaction sequence before allowing the previous sequence to finish and\n      without using the Abort bit to terminate it first\n      0=No Start Overflow detected. Mask */
#define ESPI_IO_FC_STS_STRT_OVRFLW(value)     (ESPI_IO_FC_STS_STRT_OVRFLW_Msk & (_UINT32_(value) << ESPI_IO_FC_STS_STRT_OVRFLW_Pos)) /* Assigment of value for STRT_OVRFLW in the ESPI_IO_FC_STS register */
#define ESPI_IO_FC_STS_BAD_REQ_Pos            _UINT32_(11)                                         /* (ESPI_IO_FC_STS) This bit is set to '1' when a firmware Flash Access request is invalid. For example, this bit is set for a request\n      to Read or Write 0 bytes. This bit is cleared by writing '1'. (R/WC) Position */
#define ESPI_IO_FC_STS_BAD_REQ_Msk            (_UINT32_(0x1) << ESPI_IO_FC_STS_BAD_REQ_Pos)        /* (ESPI_IO_FC_STS) This bit is set to '1' when a firmware Flash Access request is invalid. For example, this bit is set for a request\n      to Read or Write 0 bytes. This bit is cleared by writing '1'. (R/WC) Mask */
#define ESPI_IO_FC_STS_BAD_REQ(value)         (ESPI_IO_FC_STS_BAD_REQ_Msk & (_UINT32_(value) << ESPI_IO_FC_STS_BAD_REQ_Pos)) /* Assigment of value for BAD_REQ in the ESPI_IO_FC_STS register */
#define ESPI_IO_FC_STS_Msk                    _UINT32_(0x00000BFF)                                 /* (ESPI_IO_FC_STS) Register Mask  */


/* -------- ESPI_IO_VW_EN_STS : (ESPI_IO Offset: 0x2B0) ( R/ 8) Virtual Wire Status Register -------- */
#define ESPI_IO_VW_EN_STS_RESETVALUE          _UINT8_(0x00)                                        /*  (ESPI_IO_VW_EN_STS) Virtual Wire Status Register  Reset Value */

#define ESPI_IO_VW_EN_STS_CHN_EN_STS_Pos      _UINT8_(0)                                           /* (ESPI_IO_VW_EN_STS) This bit is a Read-only image of the bit Virtual Wire Channel Enable in the eSPI Configuration space.\n      1=Virtual Wire Channel Enable bit = 1; 0=Virtual Wire Channel Enable bit = 0. Position */
#define ESPI_IO_VW_EN_STS_CHN_EN_STS_Msk      (_UINT8_(0x1) << ESPI_IO_VW_EN_STS_CHN_EN_STS_Pos)   /* (ESPI_IO_VW_EN_STS) This bit is a Read-only image of the bit Virtual Wire Channel Enable in the eSPI Configuration space.\n      1=Virtual Wire Channel Enable bit = 1; 0=Virtual Wire Channel Enable bit = 0. Mask */
#define ESPI_IO_VW_EN_STS_CHN_EN_STS(value)   (ESPI_IO_VW_EN_STS_CHN_EN_STS_Msk & (_UINT8_(value) << ESPI_IO_VW_EN_STS_CHN_EN_STS_Pos)) /* Assigment of value for CHN_EN_STS in the ESPI_IO_VW_EN_STS register */
#define ESPI_IO_VW_EN_STS_Msk                 _UINT8_(0x01)                                        /* (ESPI_IO_VW_EN_STS) Register Mask  */


/* -------- ESPI_IO_CAP_ID : (ESPI_IO Offset: 0x2E0) (R/W 8) eSPI Capabilities ID Register -------- */
#define ESPI_IO_CAP_ID_RESETVALUE             _UINT8_(0x01)                                        /*  (ESPI_IO_CAP_ID) eSPI Capabilities ID Register  Reset Value */

#define ESPI_IO_CAP_ID_ESP_DEVID_Pos          _UINT8_(0)                                           /* (ESPI_IO_CAP_ID) The default value should not be changed. Position */
#define ESPI_IO_CAP_ID_ESP_DEVID_Msk          (_UINT8_(0xFF) << ESPI_IO_CAP_ID_ESP_DEVID_Pos)      /* (ESPI_IO_CAP_ID) The default value should not be changed. Mask */
#define ESPI_IO_CAP_ID_ESP_DEVID(value)       (ESPI_IO_CAP_ID_ESP_DEVID_Msk & (_UINT8_(value) << ESPI_IO_CAP_ID_ESP_DEVID_Pos)) /* Assigment of value for ESP_DEVID in the ESPI_IO_CAP_ID register */
#define ESPI_IO_CAP_ID_Msk                    _UINT8_(0xFF)                                        /* (ESPI_IO_CAP_ID) Register Mask  */


/* -------- ESPI_IO_GLB_CAP0 : (ESPI_IO Offset: 0x2E1) (R/W 8) eSPI Capabilities Global Capabilities 0 Register -------- */
#define ESPI_IO_GLB_CAP0_RESETVALUE           _UINT8_(0x0F)                                        /*  (ESPI_IO_GLB_CAP0) eSPI Capabilities Global Capabilities 0 Register  Reset Value */

#define ESPI_IO_GLB_CAP0_PHL_CHN_Pos          _UINT8_(0)                                           /* (ESPI_IO_GLB_CAP0) 1=Peripheral Channel is supported by the slave; 0=Peripheral Channel not supported by the slave. Position */
#define ESPI_IO_GLB_CAP0_PHL_CHN_Msk          (_UINT8_(0x1) << ESPI_IO_GLB_CAP0_PHL_CHN_Pos)       /* (ESPI_IO_GLB_CAP0) 1=Peripheral Channel is supported by the slave; 0=Peripheral Channel not supported by the slave. Mask */
#define ESPI_IO_GLB_CAP0_PHL_CHN(value)       (ESPI_IO_GLB_CAP0_PHL_CHN_Msk & (_UINT8_(value) << ESPI_IO_GLB_CAP0_PHL_CHN_Pos)) /* Assigment of value for PHL_CHN in the ESPI_IO_GLB_CAP0 register */
#define ESPI_IO_GLB_CAP0_VW_CHN_Pos           _UINT8_(1)                                           /* (ESPI_IO_GLB_CAP0) 1=Virtual Wire Channel is supported by the slave; 0=Virtual Wire Channel Channel not supported by the slave. Position */
#define ESPI_IO_GLB_CAP0_VW_CHN_Msk           (_UINT8_(0x1) << ESPI_IO_GLB_CAP0_VW_CHN_Pos)        /* (ESPI_IO_GLB_CAP0) 1=Virtual Wire Channel is supported by the slave; 0=Virtual Wire Channel Channel not supported by the slave. Mask */
#define ESPI_IO_GLB_CAP0_VW_CHN(value)        (ESPI_IO_GLB_CAP0_VW_CHN_Msk & (_UINT8_(value) << ESPI_IO_GLB_CAP0_VW_CHN_Pos)) /* Assigment of value for VW_CHN in the ESPI_IO_GLB_CAP0 register */
#define ESPI_IO_GLB_CAP0_OOB_MSG_CHN_Pos      _UINT8_(2)                                           /* (ESPI_IO_GLB_CAP0) 1=OOB Message Channel is supported by the slave; 0=OOB Message Channel not supported by the slave. Position */
#define ESPI_IO_GLB_CAP0_OOB_MSG_CHN_Msk      (_UINT8_(0x1) << ESPI_IO_GLB_CAP0_OOB_MSG_CHN_Pos)   /* (ESPI_IO_GLB_CAP0) 1=OOB Message Channel is supported by the slave; 0=OOB Message Channel not supported by the slave. Mask */
#define ESPI_IO_GLB_CAP0_OOB_MSG_CHN(value)   (ESPI_IO_GLB_CAP0_OOB_MSG_CHN_Msk & (_UINT8_(value) << ESPI_IO_GLB_CAP0_OOB_MSG_CHN_Pos)) /* Assigment of value for OOB_MSG_CHN in the ESPI_IO_GLB_CAP0 register */
#define ESPI_IO_GLB_CAP0_FC_CHN_Pos           _UINT8_(3)                                           /* (ESPI_IO_GLB_CAP0) 1=Flash Access Channel is supported by the slave; 0=Flash Access Channel not supported by the slave. Position */
#define ESPI_IO_GLB_CAP0_FC_CHN_Msk           (_UINT8_(0x1) << ESPI_IO_GLB_CAP0_FC_CHN_Pos)        /* (ESPI_IO_GLB_CAP0) 1=Flash Access Channel is supported by the slave; 0=Flash Access Channel not supported by the slave. Mask */
#define ESPI_IO_GLB_CAP0_FC_CHN(value)        (ESPI_IO_GLB_CAP0_FC_CHN_Msk & (_UINT8_(value) << ESPI_IO_GLB_CAP0_FC_CHN_Pos)) /* Assigment of value for FC_CHN in the ESPI_IO_GLB_CAP0 register */
#define ESPI_IO_GLB_CAP0_Msk                  _UINT8_(0x0F)                                        /* (ESPI_IO_GLB_CAP0) Register Mask  */


/* -------- ESPI_IO_GLB_CAP1 : (ESPI_IO Offset: 0x2E2) (R/W 8) eSPI Capabilities Global Capabilities 1 Register -------- */
#define ESPI_IO_GLB_CAP1_RESETVALUE           _UINT8_(0x00)                                        /*  (ESPI_IO_GLB_CAP1) eSPI Capabilities Global Capabilities 1 Register  Reset Value */

#define ESPI_IO_GLB_CAP1_MAX_FREQ_Pos         _UINT8_(0)                                           /* (ESPI_IO_GLB_CAP1) This field identifies the maximum frequency of operation supported by the slave. It corresponds to the field\n      Maximum Frequency Supported, bits [18:16] of the eSPI General Capabilities and Configurations register.\n      111b - 101b=Reserved\n      100b=66 MHz\n      011b=50 MHz\n      010b=33 MHz\n      001b=25 MHz\n      000b=20 MHz (default). Position */
#define ESPI_IO_GLB_CAP1_MAX_FREQ_Msk         (_UINT8_(0x7) << ESPI_IO_GLB_CAP1_MAX_FREQ_Pos)      /* (ESPI_IO_GLB_CAP1) This field identifies the maximum frequency of operation supported by the slave. It corresponds to the field\n      Maximum Frequency Supported, bits [18:16] of the eSPI General Capabilities and Configurations register.\n      111b - 101b=Reserved\n      100b=66 MHz\n      011b=50 MHz\n      010b=33 MHz\n      001b=25 MHz\n      000b=20 MHz (default). Mask */
#define ESPI_IO_GLB_CAP1_MAX_FREQ(value)      (ESPI_IO_GLB_CAP1_MAX_FREQ_Msk & (_UINT8_(value) << ESPI_IO_GLB_CAP1_MAX_FREQ_Pos)) /* Assigment of value for MAX_FREQ in the ESPI_IO_GLB_CAP1 register */
#define ESPI_IO_GLB_CAP1_ALERT_Pos            _UINT8_(3)                                           /* (ESPI_IO_GLB_CAP1) This field is a read-only copy of the ALERT Mode field, bit 28 of the Config Offset 8h=General Capabilities\n      and Configurations Register. Position */
#define ESPI_IO_GLB_CAP1_ALERT_Msk            (_UINT8_(0x1) << ESPI_IO_GLB_CAP1_ALERT_Pos)         /* (ESPI_IO_GLB_CAP1) This field is a read-only copy of the ALERT Mode field, bit 28 of the Config Offset 8h=General Capabilities\n      and Configurations Register. Mask */
#define ESPI_IO_GLB_CAP1_ALERT(value)         (ESPI_IO_GLB_CAP1_ALERT_Msk & (_UINT8_(value) << ESPI_IO_GLB_CAP1_ALERT_Pos)) /* Assigment of value for ALERT in the ESPI_IO_GLB_CAP1 register */
#define ESPI_IO_GLB_CAP1_IO_MODE_Pos          _UINT8_(4)                                           /* (ESPI_IO_GLB_CAP1) This field identifies the I/O modes supported by the slave. It corresponds to the field I/O Mode Support,\n      bits [25:24] of the eSPI General Capabilities and Configurations register.\n      11b=Single, Dual and Quad I/O\n      10b=Single and Quad I/O\n      01b=Single and Dual I/O\n      00b=Single I/O (default). Position */
#define ESPI_IO_GLB_CAP1_IO_MODE_Msk          (_UINT8_(0x3) << ESPI_IO_GLB_CAP1_IO_MODE_Pos)       /* (ESPI_IO_GLB_CAP1) This field identifies the I/O modes supported by the slave. It corresponds to the field I/O Mode Support,\n      bits [25:24] of the eSPI General Capabilities and Configurations register.\n      11b=Single, Dual and Quad I/O\n      10b=Single and Quad I/O\n      01b=Single and Dual I/O\n      00b=Single I/O (default). Mask */
#define ESPI_IO_GLB_CAP1_IO_MODE(value)       (ESPI_IO_GLB_CAP1_IO_MODE_Msk & (_UINT8_(value) << ESPI_IO_GLB_CAP1_IO_MODE_Pos)) /* Assigment of value for IO_MODE in the ESPI_IO_GLB_CAP1 register */
#define ESPI_IO_GLB_CAP1_Msk                  _UINT8_(0x3F)                                        /* (ESPI_IO_GLB_CAP1) Register Mask  */


/* -------- ESPI_IO_PC_CAP : (ESPI_IO Offset: 0x2E3) (R/W 8) eSPI Peripheral Channel Capabilities Register -------- */
#define ESPI_IO_PC_CAP_RESETVALUE             _UINT8_(0x01)                                        /*  (ESPI_IO_PC_CAP) eSPI Peripheral Channel Capabilities Register  Reset Value */

#define ESPI_IO_PC_CAP_MAX_PAYLD_SIZE_Pos     _UINT8_(0)                                           /* (ESPI_IO_PC_CAP) This field identifies the maximum payload size supported by the slave. It corresponds to the field\n      Peripheral Channel Maximum Payload Size Supported, bits [6:4] of the Peripheral Channel Capabilities and Configurations Register.\n      111b - 100b=Reserved\n      011b=256 bytes address aligned max payload size\n      010b=128 bytes address aligned max payload size\n      001b=64 bytes address aligned max payload size\n      000b=Reserved. Position */
#define ESPI_IO_PC_CAP_MAX_PAYLD_SIZE_Msk     (_UINT8_(0x7) << ESPI_IO_PC_CAP_MAX_PAYLD_SIZE_Pos)  /* (ESPI_IO_PC_CAP) This field identifies the maximum payload size supported by the slave. It corresponds to the field\n      Peripheral Channel Maximum Payload Size Supported, bits [6:4] of the Peripheral Channel Capabilities and Configurations Register.\n      111b - 100b=Reserved\n      011b=256 bytes address aligned max payload size\n      010b=128 bytes address aligned max payload size\n      001b=64 bytes address aligned max payload size\n      000b=Reserved. Mask */
#define ESPI_IO_PC_CAP_MAX_PAYLD_SIZE(value)  (ESPI_IO_PC_CAP_MAX_PAYLD_SIZE_Msk & (_UINT8_(value) << ESPI_IO_PC_CAP_MAX_PAYLD_SIZE_Pos)) /* Assigment of value for MAX_PAYLD_SIZE in the ESPI_IO_PC_CAP register */
#define ESPI_IO_PC_CAP_Msk                    _UINT8_(0x07)                                        /* (ESPI_IO_PC_CAP) Register Mask  */


/* -------- ESPI_IO_VW_CAP : (ESPI_IO Offset: 0x2E4) (R/W 8) eSPI Virtual Wire Channel Capabilities Register -------- */
#define ESPI_IO_VW_CAP_RESETVALUE             _UINT8_(0x3F)                                        /*  (ESPI_IO_VW_CAP) eSPI Virtual Wire Channel Capabilities Register  Reset Value */

#define ESPI_IO_VW_CAP_MAX_CNT_Pos            _UINT8_(0)                                           /* (ESPI_IO_VW_CAP) This field identifies the maximum Virtual Wire Count supported by the slave. It corresponds to the field\n      Maximum Virtual Wire Count Supported, bits [13:8] of the Virtual Wire Channel Capabilities and Configurations Register.\n      This field must be set to a number greater than or equal to 7h. Position */
#define ESPI_IO_VW_CAP_MAX_CNT_Msk            (_UINT8_(0x3F) << ESPI_IO_VW_CAP_MAX_CNT_Pos)        /* (ESPI_IO_VW_CAP) This field identifies the maximum Virtual Wire Count supported by the slave. It corresponds to the field\n      Maximum Virtual Wire Count Supported, bits [13:8] of the Virtual Wire Channel Capabilities and Configurations Register.\n      This field must be set to a number greater than or equal to 7h. Mask */
#define ESPI_IO_VW_CAP_MAX_CNT(value)         (ESPI_IO_VW_CAP_MAX_CNT_Msk & (_UINT8_(value) << ESPI_IO_VW_CAP_MAX_CNT_Pos)) /* Assigment of value for MAX_CNT in the ESPI_IO_VW_CAP register */
#define ESPI_IO_VW_CAP_Msk                    _UINT8_(0x3F)                                        /* (ESPI_IO_VW_CAP) Register Mask  */


/* -------- ESPI_IO_OOB_CAP : (ESPI_IO Offset: 0x2E5) (R/W 8) eSPI OOB Channel Capabilities Register -------- */
#define ESPI_IO_OOB_CAP_RESETVALUE            _UINT8_(0x01)                                        /*  (ESPI_IO_OOB_CAP) eSPI OOB Channel Capabilities Register  Reset Value */

#define ESPI_IO_OOB_CAP_MAX_PAYLD_SIZ_Pos     _UINT8_(0)                                           /* (ESPI_IO_OOB_CAP) This field identifies the maximum payload size supported by the slave. It corresponds to the field OOB Message\n      Channel Maximum Payload Size Supported, bits [6:4] of the OOB Channel Capabilities and Configurations Register.\n      111b - 100b=Reserved\n      011b=265 bytes address max payload size\n      010b=137 bytes address max payload size\n      001b=73 bytes address max payload size\n      000b=Reserved. Position */
#define ESPI_IO_OOB_CAP_MAX_PAYLD_SIZ_Msk     (_UINT8_(0x7) << ESPI_IO_OOB_CAP_MAX_PAYLD_SIZ_Pos)  /* (ESPI_IO_OOB_CAP) This field identifies the maximum payload size supported by the slave. It corresponds to the field OOB Message\n      Channel Maximum Payload Size Supported, bits [6:4] of the OOB Channel Capabilities and Configurations Register.\n      111b - 100b=Reserved\n      011b=265 bytes address max payload size\n      010b=137 bytes address max payload size\n      001b=73 bytes address max payload size\n      000b=Reserved. Mask */
#define ESPI_IO_OOB_CAP_MAX_PAYLD_SIZ(value)  (ESPI_IO_OOB_CAP_MAX_PAYLD_SIZ_Msk & (_UINT8_(value) << ESPI_IO_OOB_CAP_MAX_PAYLD_SIZ_Pos)) /* Assigment of value for MAX_PAYLD_SIZ in the ESPI_IO_OOB_CAP register */
#define ESPI_IO_OOB_CAP_Msk                   _UINT8_(0x07)                                        /* (ESPI_IO_OOB_CAP) Register Mask  */


/* -------- ESPI_IO_FC_CAP : (ESPI_IO Offset: 0x2E6) (R/W 8) eSPI Flash Channel Capabilities Register -------- */
#define ESPI_IO_FC_CAP_RESETVALUE             _UINT8_(0x21)                                        /*  (ESPI_IO_FC_CAP) eSPI Flash Channel Capabilities Register  Reset Value */

#define ESPI_IO_FC_CAP_MAX_PAY_LD_Pos         _UINT8_(0)                                           /* (ESPI_IO_FC_CAP) This field identifies the maximum payload size supported by the slave. It corresponds to the field Flash Access\n      Channel Maximum Payload Size Supported, bits [7:0] of the Flash Channel Capabilities and Configurations Register.\n      111b - 100b=Reserved\n      011b=256 bytes address aligned max payload size\n      010b=128 bytes address aligned max payload size\n      001b=64 bytes address aligned max payload size\n      000b=Reserved. Position */
#define ESPI_IO_FC_CAP_MAX_PAY_LD_Msk         (_UINT8_(0x7) << ESPI_IO_FC_CAP_MAX_PAY_LD_Pos)      /* (ESPI_IO_FC_CAP) This field identifies the maximum payload size supported by the slave. It corresponds to the field Flash Access\n      Channel Maximum Payload Size Supported, bits [7:0] of the Flash Channel Capabilities and Configurations Register.\n      111b - 100b=Reserved\n      011b=256 bytes address aligned max payload size\n      010b=128 bytes address aligned max payload size\n      001b=64 bytes address aligned max payload size\n      000b=Reserved. Mask */
#define ESPI_IO_FC_CAP_MAX_PAY_LD(value)      (ESPI_IO_FC_CAP_MAX_PAY_LD_Msk & (_UINT8_(value) << ESPI_IO_FC_CAP_MAX_PAY_LD_Pos)) /* Assigment of value for MAX_PAY_LD in the ESPI_IO_FC_CAP register */
#define ESPI_IO_FC_CAP_SHAR_MODE_Pos          _UINT8_(4)                                           /* (ESPI_IO_FC_CAP) This field identifies the flash sharing scheme supported by the slave. It corresponds to the field Flash Sharing Mode,\n      bit [11] of the Flash Channel Capabilities and Configurations Register.\n      1=Slave attached flash sharing\n      0=Master attached flash sharing Position */
#define ESPI_IO_FC_CAP_SHAR_MODE_Msk          (_UINT8_(0x1) << ESPI_IO_FC_CAP_SHAR_MODE_Pos)       /* (ESPI_IO_FC_CAP) This field identifies the flash sharing scheme supported by the slave. It corresponds to the field Flash Sharing Mode,\n      bit [11] of the Flash Channel Capabilities and Configurations Register.\n      1=Slave attached flash sharing\n      0=Master attached flash sharing Mask */
#define ESPI_IO_FC_CAP_SHAR_MODE(value)       (ESPI_IO_FC_CAP_SHAR_MODE_Msk & (_UINT8_(value) << ESPI_IO_FC_CAP_SHAR_MODE_Pos)) /* Assigment of value for SHAR_MODE in the ESPI_IO_FC_CAP register */
#define ESPI_IO_FC_CAP_Msk                    _UINT8_(0x17)                                        /* (ESPI_IO_FC_CAP) Register Mask  */


/* -------- ESPI_IO_PC_READY : (ESPI_IO Offset: 0x2E7) (R/W 8) eSPI Peripheral Channel Ready Register -------- */
#define ESPI_IO_PC_READY_RESETVALUE           _UINT8_(0x00)                                        /*  (ESPI_IO_PC_READY) eSPI Peripheral Channel Ready Register  Reset Value */

#define ESPI_IO_PC_READY_PHL_CHN_RDY_Pos      _UINT8_(0)                                           /* (ESPI_IO_PC_READY) Firmware sets this bit to '1' to inform the Master than the Peripheral channel is ready for transactions. It corresponds to\n      the field Peripheral Channel Ready, bit 1 of the Config Offset 10h=Peripheral Channel Capabilities and Configurations Register. It is\n      forced to '0' while the Peripheral Channel Enabled bit in the Capabilities and Configurations register is 0. Once set to '1' it cannot\n      be set to '0' by firmware. It is only set to '0' by a reset, or when the Master changes the Enabled bit to '0'.\n      While this bit is '0' all Bus Master and LTR transactions initiated by the Slave are inhibited. Position */
#define ESPI_IO_PC_READY_PHL_CHN_RDY_Msk      (_UINT8_(0x1) << ESPI_IO_PC_READY_PHL_CHN_RDY_Pos)   /* (ESPI_IO_PC_READY) Firmware sets this bit to '1' to inform the Master than the Peripheral channel is ready for transactions. It corresponds to\n      the field Peripheral Channel Ready, bit 1 of the Config Offset 10h=Peripheral Channel Capabilities and Configurations Register. It is\n      forced to '0' while the Peripheral Channel Enabled bit in the Capabilities and Configurations register is 0. Once set to '1' it cannot\n      be set to '0' by firmware. It is only set to '0' by a reset, or when the Master changes the Enabled bit to '0'.\n      While this bit is '0' all Bus Master and LTR transactions initiated by the Slave are inhibited. Mask */
#define ESPI_IO_PC_READY_PHL_CHN_RDY(value)   (ESPI_IO_PC_READY_PHL_CHN_RDY_Msk & (_UINT8_(value) << ESPI_IO_PC_READY_PHL_CHN_RDY_Pos)) /* Assigment of value for PHL_CHN_RDY in the ESPI_IO_PC_READY register */
#define ESPI_IO_PC_READY_Msk                  _UINT8_(0x01)                                        /* (ESPI_IO_PC_READY) Register Mask  */


/* -------- ESPI_IO_OOB_READY : (ESPI_IO Offset: 0x2E8) (R/W 8) eSPI OOB Channel Ready Register -------- */
#define ESPI_IO_OOB_READY_RESETVALUE          _UINT8_(0x00)                                        /*  (ESPI_IO_OOB_READY) eSPI OOB Channel Ready Register  Reset Value */

#define ESPI_IO_OOB_READY_CHN_Pos             _UINT8_(0)                                           /* (ESPI_IO_OOB_READY) Firmware sets this bit to '1' to inform the Master that the OOB channel is ready for transactions. It corresponds to\n      the field OOB Message Channel Ready, bit 1 of Config Offset 30h=OOB ChannelCapabilities and Configurations Register. It is\n      forced to '0' while the OOB Message Channel Enabled bit in the Capabilities and Configurations register is 0. Once set to '1'\n      it cannot be set to '0' by firmware. It is only set to '0' by a reset, or when the Master changes the Enabled bit to '0'.\n      While this bit is '0' all OOB up transactions initiated by the Slave are inhibited. Position */
#define ESPI_IO_OOB_READY_CHN_Msk             (_UINT8_(0x1) << ESPI_IO_OOB_READY_CHN_Pos)          /* (ESPI_IO_OOB_READY) Firmware sets this bit to '1' to inform the Master that the OOB channel is ready for transactions. It corresponds to\n      the field OOB Message Channel Ready, bit 1 of Config Offset 30h=OOB ChannelCapabilities and Configurations Register. It is\n      forced to '0' while the OOB Message Channel Enabled bit in the Capabilities and Configurations register is 0. Once set to '1'\n      it cannot be set to '0' by firmware. It is only set to '0' by a reset, or when the Master changes the Enabled bit to '0'.\n      While this bit is '0' all OOB up transactions initiated by the Slave are inhibited. Mask */
#define ESPI_IO_OOB_READY_CHN(value)          (ESPI_IO_OOB_READY_CHN_Msk & (_UINT8_(value) << ESPI_IO_OOB_READY_CHN_Pos)) /* Assigment of value for CHN in the ESPI_IO_OOB_READY register */
#define ESPI_IO_OOB_READY_Msk                 _UINT8_(0x01)                                        /* (ESPI_IO_OOB_READY) Register Mask  */


/* -------- ESPI_IO_FC_READY : (ESPI_IO Offset: 0x2E9) (R/W 8) eSPI Flash Channel Ready Register -------- */
#define ESPI_IO_FC_READY_RESETVALUE           _UINT8_(0x00)                                        /*  (ESPI_IO_FC_READY) eSPI Flash Channel Ready Register  Reset Value */

#define ESPI_IO_FC_READY_CHN_Pos              _UINT8_(0)                                           /* (ESPI_IO_FC_READY) Firmware sets this bit to '1' to inform the Master that the Flash channel is ready for transactions. It corresponds to\n      the field Flash Channel Ready, bit 1 of Config Offset 40h=Flash Channel Capabilities and Configurations Register. It is\n      forced to '0' while the Flash Channel Enabled bit in the Capabilities and Configurations register is 0. Once set to '1'\n      it cannot be set to '0' by firmware. It is only set to '0'by a reset, or when the Master changes the Enabled bit to '0'.\n      While this bit is '0' all Flash transactions initiated by the Slave are inhibited. Position */
#define ESPI_IO_FC_READY_CHN_Msk              (_UINT8_(0x1) << ESPI_IO_FC_READY_CHN_Pos)           /* (ESPI_IO_FC_READY) Firmware sets this bit to '1' to inform the Master that the Flash channel is ready for transactions. It corresponds to\n      the field Flash Channel Ready, bit 1 of Config Offset 40h=Flash Channel Capabilities and Configurations Register. It is\n      forced to '0' while the Flash Channel Enabled bit in the Capabilities and Configurations register is 0. Once set to '1'\n      it cannot be set to '0' by firmware. It is only set to '0'by a reset, or when the Master changes the Enabled bit to '0'.\n      While this bit is '0' all Flash transactions initiated by the Slave are inhibited. Mask */
#define ESPI_IO_FC_READY_CHN(value)           (ESPI_IO_FC_READY_CHN_Msk & (_UINT8_(value) << ESPI_IO_FC_READY_CHN_Pos)) /* Assigment of value for CHN in the ESPI_IO_FC_READY register */
#define ESPI_IO_FC_READY_Msk                  _UINT8_(0x01)                                        /* (ESPI_IO_FC_READY) Register Mask  */


/* -------- ESPI_IO_RESET_STS : (ESPI_IO Offset: 0x2EA) (R/W 8) eSPI Reset Interrupt Status Register -------- */
#define ESPI_IO_RESET_STS_RESETVALUE          _UINT8_(0x00)                                        /*  (ESPI_IO_RESET_STS) eSPI Reset Interrupt Status Register  Reset Value */

#define ESPI_IO_RESET_STS_ESP_INTR_Pos        _UINT8_(0)                                           /* (ESPI_IO_RESET_STS) This bit is set to '1' whenever the ESPI_RESET_PIN_STATE bit in this register changes state. It is cleared to\n      '0' whenever it is written with a '1'. Writes of a '0' have no effect. (R/WC) This bit is the source for the eSPI_RESET Interrupt.\n      The interrupt is asserted when both this bit and the ESPI_RESET_INTERRUPT_ENABLE bit in the eSPI Reset Interrupt Enable Register are '1'. Position */
#define ESPI_IO_RESET_STS_ESP_INTR_Msk        (_UINT8_(0x1) << ESPI_IO_RESET_STS_ESP_INTR_Pos)     /* (ESPI_IO_RESET_STS) This bit is set to '1' whenever the ESPI_RESET_PIN_STATE bit in this register changes state. It is cleared to\n      '0' whenever it is written with a '1'. Writes of a '0' have no effect. (R/WC) This bit is the source for the eSPI_RESET Interrupt.\n      The interrupt is asserted when both this bit and the ESPI_RESET_INTERRUPT_ENABLE bit in the eSPI Reset Interrupt Enable Register are '1'. Mask */
#define ESPI_IO_RESET_STS_ESP_INTR(value)     (ESPI_IO_RESET_STS_ESP_INTR_Msk & (_UINT8_(value) << ESPI_IO_RESET_STS_ESP_INTR_Pos)) /* Assigment of value for ESP_INTR in the ESPI_IO_RESET_STS register */
#define ESPI_IO_RESET_STS_ESPI_RST_PIN_STATE_Pos _UINT8_(1)                                           /* (ESPI_IO_RESET_STS) This field reflects the current state of the eSPI_RESET# pin. Position */
#define ESPI_IO_RESET_STS_ESPI_RST_PIN_STATE_Msk (_UINT8_(0x1) << ESPI_IO_RESET_STS_ESPI_RST_PIN_STATE_Pos) /* (ESPI_IO_RESET_STS) This field reflects the current state of the eSPI_RESET# pin. Mask */
#define ESPI_IO_RESET_STS_ESPI_RST_PIN_STATE(value) (ESPI_IO_RESET_STS_ESPI_RST_PIN_STATE_Msk & (_UINT8_(value) << ESPI_IO_RESET_STS_ESPI_RST_PIN_STATE_Pos)) /* Assigment of value for ESPI_RST_PIN_STATE in the ESPI_IO_RESET_STS register */
#define ESPI_IO_RESET_STS_Msk                 _UINT8_(0x03)                                        /* (ESPI_IO_RESET_STS) Register Mask  */


/* -------- ESPI_IO_RESET_IEN : (ESPI_IO Offset: 0x2EB) (R/W 8) eSPI Reset Interrupt Enable Register -------- */
#define ESPI_IO_RESET_IEN_RESETVALUE          _UINT8_(0x00)                                        /*  (ESPI_IO_RESET_IEN) eSPI Reset Interrupt Enable Register  Reset Value */

#define ESPI_IO_RESET_IEN_ESP_RIEN_Pos        _UINT8_(0)                                           /* (ESPI_IO_RESET_IEN) 1=The RESET_ESPI Interrupt will be asserted when the ESPI_RESET_INTERRUPT_STATUS bit in the eSPI Reset Interrupt\n      Status Register register is '1'\n      0=The RESET_ESPI Interrupt will not be asserted. Position */
#define ESPI_IO_RESET_IEN_ESP_RIEN_Msk        (_UINT8_(0x1) << ESPI_IO_RESET_IEN_ESP_RIEN_Pos)     /* (ESPI_IO_RESET_IEN) 1=The RESET_ESPI Interrupt will be asserted when the ESPI_RESET_INTERRUPT_STATUS bit in the eSPI Reset Interrupt\n      Status Register register is '1'\n      0=The RESET_ESPI Interrupt will not be asserted. Mask */
#define ESPI_IO_RESET_IEN_ESP_RIEN(value)     (ESPI_IO_RESET_IEN_ESP_RIEN_Msk & (_UINT8_(value) << ESPI_IO_RESET_IEN_ESP_RIEN_Pos)) /* Assigment of value for ESP_RIEN in the ESPI_IO_RESET_IEN register */
#define ESPI_IO_RESET_IEN_Msk                 _UINT8_(0x01)                                        /* (ESPI_IO_RESET_IEN) Register Mask  */


/* -------- ESPI_IO_PLTRST_SRC : (ESPI_IO Offset: 0x2EC) (R/W 8) PLTRST Source Register -------- */
#define ESPI_IO_PLTRST_SRC_RESETVALUE         _UINT8_(0x00)                                        /*  (ESPI_IO_PLTRST_SRC) PLTRST Source Register  Reset Value */

#define ESPI_IO_PLTRST_SRC_SRC_Pos            _UINT8_(0)                                           /* (ESPI_IO_PLTRST_SRC) 1=The PLTRST reset signal is determined a signal external to the eSPI block. The PLTRST# virtual wire is ignored\n      0=The PLTRST reset signal is determined by the PLTRST# virtual wire. Position */
#define ESPI_IO_PLTRST_SRC_SRC_Msk            (_UINT8_(0x1) << ESPI_IO_PLTRST_SRC_SRC_Pos)         /* (ESPI_IO_PLTRST_SRC) 1=The PLTRST reset signal is determined a signal external to the eSPI block. The PLTRST# virtual wire is ignored\n      0=The PLTRST reset signal is determined by the PLTRST# virtual wire. Mask */
#define ESPI_IO_PLTRST_SRC_SRC(value)         (ESPI_IO_PLTRST_SRC_SRC_Msk & (_UINT8_(value) << ESPI_IO_PLTRST_SRC_SRC_Pos)) /* Assigment of value for SRC in the ESPI_IO_PLTRST_SRC register */
#define ESPI_IO_PLTRST_SRC_Msk                _UINT8_(0x01)                                        /* (ESPI_IO_PLTRST_SRC) Register Mask  */


/* -------- ESPI_IO_VW_READY : (ESPI_IO Offset: 0x2ED) (R/W 8) eSPI Virtual Wire Channel Ready Register -------- */
#define ESPI_IO_VW_READY_RESETVALUE           _UINT8_(0x00)                                        /*  (ESPI_IO_VW_READY) eSPI Virtual Wire Channel Ready Register  Reset Value */

#define ESPI_IO_VW_READY_CHN_Pos              _UINT8_(0)                                           /* (ESPI_IO_VW_READY) Firmware sets this bit to '1' to inform the Master than the Virtual Wire channel is ready for transactions. It corresponds to\n      the field Virtual Wire Channel Ready, bit 1 of the Config Offset 20h=Channel 1 Capabilities and Configurations Register. It is\n      forced to '0' while the Virtual Wire Channel Enable bit in the Capabilities and Configurations register is 0. Once set to '1' it cannot\n      be set to '0' by firmware. It is only set to '0' by a reset, or when the Master changes the Enabled bit to '0'.\n      While this bit is '0' all Virtual Wire transactions initiated by the Slave are inhibited. Position */
#define ESPI_IO_VW_READY_CHN_Msk              (_UINT8_(0x1) << ESPI_IO_VW_READY_CHN_Pos)           /* (ESPI_IO_VW_READY) Firmware sets this bit to '1' to inform the Master than the Virtual Wire channel is ready for transactions. It corresponds to\n      the field Virtual Wire Channel Ready, bit 1 of the Config Offset 20h=Channel 1 Capabilities and Configurations Register. It is\n      forced to '0' while the Virtual Wire Channel Enable bit in the Capabilities and Configurations register is 0. Once set to '1' it cannot\n      be set to '0' by firmware. It is only set to '0' by a reset, or when the Master changes the Enabled bit to '0'.\n      While this bit is '0' all Virtual Wire transactions initiated by the Slave are inhibited. Mask */
#define ESPI_IO_VW_READY_CHN(value)           (ESPI_IO_VW_READY_CHN_Msk & (_UINT8_(value) << ESPI_IO_VW_READY_CHN_Pos)) /* Assigment of value for CHN in the ESPI_IO_VW_READY register */
#define ESPI_IO_VW_READY_Msk                  _UINT8_(0x01)                                        /* (ESPI_IO_VW_READY) Register Mask  */


/* -------- ESPI_IO_ACTIVATE : (ESPI_IO Offset: 0x330) (R/W 8) eSPI Activate Register -------- */
#define ESPI_IO_ACTIVATE_RESETVALUE           _UINT8_(0x00)                                        /*  (ESPI_IO_ACTIVATE) eSPI Activate Register  Reset Value */

#define ESPI_IO_ACTIVATE_ACT_Pos              _UINT8_(0)                                           /* (ESPI_IO_ACTIVATE) 1=Activate. When this bit is '1', the eSPI Logical Device is powered and functional.\n      0=Deactivate. When this bit is 0, the logical device is powered down and inactive.\n      Except for the eSPI Activate Register itself, clocks to the block are gated and the eSPI Logical Device will permit the\n      main oscillator to be shut down. Position */
#define ESPI_IO_ACTIVATE_ACT_Msk              (_UINT8_(0x1) << ESPI_IO_ACTIVATE_ACT_Pos)           /* (ESPI_IO_ACTIVATE) 1=Activate. When this bit is '1', the eSPI Logical Device is powered and functional.\n      0=Deactivate. When this bit is 0, the logical device is powered down and inactive.\n      Except for the eSPI Activate Register itself, clocks to the block are gated and the eSPI Logical Device will permit the\n      main oscillator to be shut down. Mask */
#define ESPI_IO_ACTIVATE_ACT(value)           (ESPI_IO_ACTIVATE_ACT_Msk & (_UINT8_(value) << ESPI_IO_ACTIVATE_ACT_Pos)) /* Assigment of value for ACT in the ESPI_IO_ACTIVATE register */
#define ESPI_IO_ACTIVATE_Msk                  _UINT8_(0x01)                                        /* (ESPI_IO_ACTIVATE) Register Mask  */


/* -------- ESPI_IO_ADDR : (ESPI_IO Offset: 0x334) (R/W 32) eSPI I/O Base Address Configuration Register -------- */
#define ESPI_IO_ADDR_RESETVALUE               _UINT32_(0x2E0000)                                   /*  (ESPI_IO_ADDR) eSPI I/O Base Address Configuration Register  Reset Value */

#define ESPI_IO_ADDR_VALID_Pos                _UINT32_(0)                                          /* (ESPI_IO_ADDR) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_IO_ADDR_VALID_Msk                (_UINT32_(0x1) << ESPI_IO_ADDR_VALID_Pos)            /* (ESPI_IO_ADDR) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_IO_ADDR_VALID(value)             (ESPI_IO_ADDR_VALID_Msk & (_UINT32_(value) << ESPI_IO_ADDR_VALID_Pos)) /* Assigment of value for VALID in the ESPI_IO_ADDR register */
#define ESPI_IO_ADDR_ESP_H_ADDR_Pos           _UINT32_(16)                                         /* (ESPI_IO_ADDR) These 16 bits are used to match eSPI I/O addresses. Position */
#define ESPI_IO_ADDR_ESP_H_ADDR_Msk           (_UINT32_(0xFFFF) << ESPI_IO_ADDR_ESP_H_ADDR_Pos)    /* (ESPI_IO_ADDR) These 16 bits are used to match eSPI I/O addresses. Mask */
#define ESPI_IO_ADDR_ESP_H_ADDR(value)        (ESPI_IO_ADDR_ESP_H_ADDR_Msk & (_UINT32_(value) << ESPI_IO_ADDR_ESP_H_ADDR_Pos)) /* Assigment of value for ESP_H_ADDR in the ESPI_IO_ADDR register */
#define ESPI_IO_ADDR_Msk                      _UINT32_(0xFFFF0001)                                 /* (ESPI_IO_ADDR) Register Mask  */


/* -------- ESPI_IO_ESPI_MEM_ADDR : (ESPI_IO Offset: 0x338) (R/W 32) eSPI Memory Base Address Configuration Register -------- */
#define ESPI_IO_ESPI_MEM_ADDR_RESETVALUE      _UINT32_(0x00)                                       /*  (ESPI_IO_ESPI_MEM_ADDR) eSPI Memory Base Address Configuration Register  Reset Value */

#define ESPI_IO_ESPI_MEM_ADDR_VALID_Pos       _UINT32_(0)                                          /* (ESPI_IO_ESPI_MEM_ADDR) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_IO_ESPI_MEM_ADDR_VALID_Msk       (_UINT32_(0x1) << ESPI_IO_ESPI_MEM_ADDR_VALID_Pos)   /* (ESPI_IO_ESPI_MEM_ADDR) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_IO_ESPI_MEM_ADDR_VALID(value)    (ESPI_IO_ESPI_MEM_ADDR_VALID_Msk & (_UINT32_(value) << ESPI_IO_ESPI_MEM_ADDR_VALID_Pos)) /* Assigment of value for VALID in the ESPI_IO_ESPI_MEM_ADDR register */
#define ESPI_IO_ESPI_MEM_ADDR_ESP_H_ADDR_Pos  _UINT32_(16)                                         /* (ESPI_IO_ESPI_MEM_ADDR) These 16 bits are used to match eSPI I/O addresses. Position */
#define ESPI_IO_ESPI_MEM_ADDR_ESP_H_ADDR_Msk  (_UINT32_(0xFFFF) << ESPI_IO_ESPI_MEM_ADDR_ESP_H_ADDR_Pos) /* (ESPI_IO_ESPI_MEM_ADDR) These 16 bits are used to match eSPI I/O addresses. Mask */
#define ESPI_IO_ESPI_MEM_ADDR_ESP_H_ADDR(value) (ESPI_IO_ESPI_MEM_ADDR_ESP_H_ADDR_Msk & (_UINT32_(value) << ESPI_IO_ESPI_MEM_ADDR_ESP_H_ADDR_Pos)) /* Assigment of value for ESP_H_ADDR in the ESPI_IO_ESPI_MEM_ADDR register */
#define ESPI_IO_ESPI_MEM_ADDR_Msk             _UINT32_(0xFFFF0001)                                 /* (ESPI_IO_ESPI_MEM_ADDR) Register Mask  */


/* -------- ESPI_IO_MBX_ADDR : (ESPI_IO Offset: 0x33C) (R/W 32) Mailbox Base Address Configuration Register -------- */
#define ESPI_IO_MBX_ADDR_RESETVALUE           _UINT32_(0x00)                                       /*  (ESPI_IO_MBX_ADDR) Mailbox Base Address Configuration Register  Reset Value */

#define ESPI_IO_MBX_ADDR_VALID_Pos            _UINT32_(0)                                          /* (ESPI_IO_MBX_ADDR) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_IO_MBX_ADDR_VALID_Msk            (_UINT32_(0x1) << ESPI_IO_MBX_ADDR_VALID_Pos)        /* (ESPI_IO_MBX_ADDR) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_IO_MBX_ADDR_VALID(value)         (ESPI_IO_MBX_ADDR_VALID_Msk & (_UINT32_(value) << ESPI_IO_MBX_ADDR_VALID_Pos)) /* Assigment of value for VALID in the ESPI_IO_MBX_ADDR register */
#define ESPI_IO_MBX_ADDR_ESP_H_ADDR_Pos       _UINT32_(16)                                         /* (ESPI_IO_MBX_ADDR) These 16 bits are used to match eSPI I/O addresses. Position */
#define ESPI_IO_MBX_ADDR_ESP_H_ADDR_Msk       (_UINT32_(0xFFFF) << ESPI_IO_MBX_ADDR_ESP_H_ADDR_Pos) /* (ESPI_IO_MBX_ADDR) These 16 bits are used to match eSPI I/O addresses. Mask */
#define ESPI_IO_MBX_ADDR_ESP_H_ADDR(value)    (ESPI_IO_MBX_ADDR_ESP_H_ADDR_Msk & (_UINT32_(value) << ESPI_IO_MBX_ADDR_ESP_H_ADDR_Pos)) /* Assigment of value for ESP_H_ADDR in the ESPI_IO_MBX_ADDR register */
#define ESPI_IO_MBX_ADDR_Msk                  _UINT32_(0xFFFF0001)                                 /* (ESPI_IO_MBX_ADDR) Register Mask  */


/* -------- ESPI_IO_EM8042_ADDR : (ESPI_IO Offset: 0x340) (R/W 32) 8042 Emulated Keyboard Controller Base Address Configuration Register -------- */
#define ESPI_IO_EM8042_ADDR_RESETVALUE        _UINT32_(0x600000)                                   /*  (ESPI_IO_EM8042_ADDR) 8042 Emulated Keyboard Controller Base Address Configuration Register  Reset Value */

#define ESPI_IO_EM8042_ADDR_VALID_Pos         _UINT32_(0)                                          /* (ESPI_IO_EM8042_ADDR) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_IO_EM8042_ADDR_VALID_Msk         (_UINT32_(0x1) << ESPI_IO_EM8042_ADDR_VALID_Pos)     /* (ESPI_IO_EM8042_ADDR) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_IO_EM8042_ADDR_VALID(value)      (ESPI_IO_EM8042_ADDR_VALID_Msk & (_UINT32_(value) << ESPI_IO_EM8042_ADDR_VALID_Pos)) /* Assigment of value for VALID in the ESPI_IO_EM8042_ADDR register */
#define ESPI_IO_EM8042_ADDR_ESP_H_ADDR_Pos    _UINT32_(16)                                         /* (ESPI_IO_EM8042_ADDR) These 16 bits are used to match eSPI I/O addresses. Position */
#define ESPI_IO_EM8042_ADDR_ESP_H_ADDR_Msk    (_UINT32_(0xFFFF) << ESPI_IO_EM8042_ADDR_ESP_H_ADDR_Pos) /* (ESPI_IO_EM8042_ADDR) These 16 bits are used to match eSPI I/O addresses. Mask */
#define ESPI_IO_EM8042_ADDR_ESP_H_ADDR(value) (ESPI_IO_EM8042_ADDR_ESP_H_ADDR_Msk & (_UINT32_(value) << ESPI_IO_EM8042_ADDR_ESP_H_ADDR_Pos)) /* Assigment of value for ESP_H_ADDR in the ESPI_IO_EM8042_ADDR register */
#define ESPI_IO_EM8042_ADDR_Msk               _UINT32_(0xFFFF0001)                                 /* (ESPI_IO_EM8042_ADDR) Register Mask  */


/* -------- ESPI_IO_ACPI_EC0_ADDR : (ESPI_IO Offset: 0x344) (R/W 32) ACPI EC 0 Base Address Configuration Register -------- */
#define ESPI_IO_ACPI_EC0_ADDR_RESETVALUE      _UINT32_(0x620000)                                   /*  (ESPI_IO_ACPI_EC0_ADDR) ACPI EC 0 Base Address Configuration Register  Reset Value */

#define ESPI_IO_ACPI_EC0_ADDR_VALID_Pos       _UINT32_(0)                                          /* (ESPI_IO_ACPI_EC0_ADDR) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_IO_ACPI_EC0_ADDR_VALID_Msk       (_UINT32_(0x1) << ESPI_IO_ACPI_EC0_ADDR_VALID_Pos)   /* (ESPI_IO_ACPI_EC0_ADDR) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_IO_ACPI_EC0_ADDR_VALID(value)    (ESPI_IO_ACPI_EC0_ADDR_VALID_Msk & (_UINT32_(value) << ESPI_IO_ACPI_EC0_ADDR_VALID_Pos)) /* Assigment of value for VALID in the ESPI_IO_ACPI_EC0_ADDR register */
#define ESPI_IO_ACPI_EC0_ADDR_ESP_H_ADDR_Pos  _UINT32_(16)                                         /* (ESPI_IO_ACPI_EC0_ADDR) These 16 bits are used to match eSPI I/O addresses. Position */
#define ESPI_IO_ACPI_EC0_ADDR_ESP_H_ADDR_Msk  (_UINT32_(0xFFFF) << ESPI_IO_ACPI_EC0_ADDR_ESP_H_ADDR_Pos) /* (ESPI_IO_ACPI_EC0_ADDR) These 16 bits are used to match eSPI I/O addresses. Mask */
#define ESPI_IO_ACPI_EC0_ADDR_ESP_H_ADDR(value) (ESPI_IO_ACPI_EC0_ADDR_ESP_H_ADDR_Msk & (_UINT32_(value) << ESPI_IO_ACPI_EC0_ADDR_ESP_H_ADDR_Pos)) /* Assigment of value for ESP_H_ADDR in the ESPI_IO_ACPI_EC0_ADDR register */
#define ESPI_IO_ACPI_EC0_ADDR_Msk             _UINT32_(0xFFFF0001)                                 /* (ESPI_IO_ACPI_EC0_ADDR) Register Mask  */


/* -------- ESPI_IO_ACPI_EC1_ADDR : (ESPI_IO Offset: 0x348) (R/W 32) ACPI EC 1 Base Address Configuration Register -------- */
#define ESPI_IO_ACPI_EC1_ADDR_RESETVALUE      _UINT32_(0x00)                                       /*  (ESPI_IO_ACPI_EC1_ADDR) ACPI EC 1 Base Address Configuration Register  Reset Value */

#define ESPI_IO_ACPI_EC1_ADDR_VALID_Pos       _UINT32_(0)                                          /* (ESPI_IO_ACPI_EC1_ADDR) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_IO_ACPI_EC1_ADDR_VALID_Msk       (_UINT32_(0x1) << ESPI_IO_ACPI_EC1_ADDR_VALID_Pos)   /* (ESPI_IO_ACPI_EC1_ADDR) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_IO_ACPI_EC1_ADDR_VALID(value)    (ESPI_IO_ACPI_EC1_ADDR_VALID_Msk & (_UINT32_(value) << ESPI_IO_ACPI_EC1_ADDR_VALID_Pos)) /* Assigment of value for VALID in the ESPI_IO_ACPI_EC1_ADDR register */
#define ESPI_IO_ACPI_EC1_ADDR_ESP_H_ADDR_Pos  _UINT32_(16)                                         /* (ESPI_IO_ACPI_EC1_ADDR) These 16 bits are used to match eSPI I/O addresses. Position */
#define ESPI_IO_ACPI_EC1_ADDR_ESP_H_ADDR_Msk  (_UINT32_(0xFFFF) << ESPI_IO_ACPI_EC1_ADDR_ESP_H_ADDR_Pos) /* (ESPI_IO_ACPI_EC1_ADDR) These 16 bits are used to match eSPI I/O addresses. Mask */
#define ESPI_IO_ACPI_EC1_ADDR_ESP_H_ADDR(value) (ESPI_IO_ACPI_EC1_ADDR_ESP_H_ADDR_Msk & (_UINT32_(value) << ESPI_IO_ACPI_EC1_ADDR_ESP_H_ADDR_Pos)) /* Assigment of value for ESP_H_ADDR in the ESPI_IO_ACPI_EC1_ADDR register */
#define ESPI_IO_ACPI_EC1_ADDR_Msk             _UINT32_(0xFFFF0001)                                 /* (ESPI_IO_ACPI_EC1_ADDR) Register Mask  */


/* -------- ESPI_IO_ACPI_EC2_ADDR : (ESPI_IO Offset: 0x34C) (R/W 32) ACPI EC 2 Base Address Configuration Register -------- */
#define ESPI_IO_ACPI_EC2_ADDR_RESETVALUE      _UINT32_(0x00)                                       /*  (ESPI_IO_ACPI_EC2_ADDR) ACPI EC 2 Base Address Configuration Register  Reset Value */

#define ESPI_IO_ACPI_EC2_ADDR_VALID_Pos       _UINT32_(0)                                          /* (ESPI_IO_ACPI_EC2_ADDR) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_IO_ACPI_EC2_ADDR_VALID_Msk       (_UINT32_(0x1) << ESPI_IO_ACPI_EC2_ADDR_VALID_Pos)   /* (ESPI_IO_ACPI_EC2_ADDR) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_IO_ACPI_EC2_ADDR_VALID(value)    (ESPI_IO_ACPI_EC2_ADDR_VALID_Msk & (_UINT32_(value) << ESPI_IO_ACPI_EC2_ADDR_VALID_Pos)) /* Assigment of value for VALID in the ESPI_IO_ACPI_EC2_ADDR register */
#define ESPI_IO_ACPI_EC2_ADDR_ESP_H_ADDR_Pos  _UINT32_(16)                                         /* (ESPI_IO_ACPI_EC2_ADDR) These 16 bits are used to match eSPI I/O addresses. Position */
#define ESPI_IO_ACPI_EC2_ADDR_ESP_H_ADDR_Msk  (_UINT32_(0xFFFF) << ESPI_IO_ACPI_EC2_ADDR_ESP_H_ADDR_Pos) /* (ESPI_IO_ACPI_EC2_ADDR) These 16 bits are used to match eSPI I/O addresses. Mask */
#define ESPI_IO_ACPI_EC2_ADDR_ESP_H_ADDR(value) (ESPI_IO_ACPI_EC2_ADDR_ESP_H_ADDR_Msk & (_UINT32_(value) << ESPI_IO_ACPI_EC2_ADDR_ESP_H_ADDR_Pos)) /* Assigment of value for ESP_H_ADDR in the ESPI_IO_ACPI_EC2_ADDR register */
#define ESPI_IO_ACPI_EC2_ADDR_Msk             _UINT32_(0xFFFF0001)                                 /* (ESPI_IO_ACPI_EC2_ADDR) Register Mask  */


/* -------- ESPI_IO_ACPI_EC3_ADDR : (ESPI_IO Offset: 0x350) (R/W 32) ACPI EC 3 Base Address Configuration Register -------- */
#define ESPI_IO_ACPI_EC3_ADDR_RESETVALUE      _UINT32_(0x00)                                       /*  (ESPI_IO_ACPI_EC3_ADDR) ACPI EC 3 Base Address Configuration Register  Reset Value */

#define ESPI_IO_ACPI_EC3_ADDR_VALID_Pos       _UINT32_(0)                                          /* (ESPI_IO_ACPI_EC3_ADDR) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_IO_ACPI_EC3_ADDR_VALID_Msk       (_UINT32_(0x1) << ESPI_IO_ACPI_EC3_ADDR_VALID_Pos)   /* (ESPI_IO_ACPI_EC3_ADDR) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_IO_ACPI_EC3_ADDR_VALID(value)    (ESPI_IO_ACPI_EC3_ADDR_VALID_Msk & (_UINT32_(value) << ESPI_IO_ACPI_EC3_ADDR_VALID_Pos)) /* Assigment of value for VALID in the ESPI_IO_ACPI_EC3_ADDR register */
#define ESPI_IO_ACPI_EC3_ADDR_ESP_H_ADDR_Pos  _UINT32_(16)                                         /* (ESPI_IO_ACPI_EC3_ADDR) These 16 bits are used to match eSPI I/O addresses. Position */
#define ESPI_IO_ACPI_EC3_ADDR_ESP_H_ADDR_Msk  (_UINT32_(0xFFFF) << ESPI_IO_ACPI_EC3_ADDR_ESP_H_ADDR_Pos) /* (ESPI_IO_ACPI_EC3_ADDR) These 16 bits are used to match eSPI I/O addresses. Mask */
#define ESPI_IO_ACPI_EC3_ADDR_ESP_H_ADDR(value) (ESPI_IO_ACPI_EC3_ADDR_ESP_H_ADDR_Msk & (_UINT32_(value) << ESPI_IO_ACPI_EC3_ADDR_ESP_H_ADDR_Pos)) /* Assigment of value for ESP_H_ADDR in the ESPI_IO_ACPI_EC3_ADDR register */
#define ESPI_IO_ACPI_EC3_ADDR_Msk             _UINT32_(0xFFFF0001)                                 /* (ESPI_IO_ACPI_EC3_ADDR) Register Mask  */


/* -------- ESPI_IO_ACPI_PM1_ADDR : (ESPI_IO Offset: 0x358) (R/W 32) ACPI PM1 Base Address Configuration Register -------- */
#define ESPI_IO_ACPI_PM1_ADDR_RESETVALUE      _UINT32_(0x00)                                       /*  (ESPI_IO_ACPI_PM1_ADDR) ACPI PM1 Base Address Configuration Register  Reset Value */

#define ESPI_IO_ACPI_PM1_ADDR_VALID_Pos       _UINT32_(0)                                          /* (ESPI_IO_ACPI_PM1_ADDR) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_IO_ACPI_PM1_ADDR_VALID_Msk       (_UINT32_(0x1) << ESPI_IO_ACPI_PM1_ADDR_VALID_Pos)   /* (ESPI_IO_ACPI_PM1_ADDR) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_IO_ACPI_PM1_ADDR_VALID(value)    (ESPI_IO_ACPI_PM1_ADDR_VALID_Msk & (_UINT32_(value) << ESPI_IO_ACPI_PM1_ADDR_VALID_Pos)) /* Assigment of value for VALID in the ESPI_IO_ACPI_PM1_ADDR register */
#define ESPI_IO_ACPI_PM1_ADDR_ESP_H_ADDR_Pos  _UINT32_(16)                                         /* (ESPI_IO_ACPI_PM1_ADDR) These 16 bits are used to match eSPI I/O addresses. Position */
#define ESPI_IO_ACPI_PM1_ADDR_ESP_H_ADDR_Msk  (_UINT32_(0xFFFF) << ESPI_IO_ACPI_PM1_ADDR_ESP_H_ADDR_Pos) /* (ESPI_IO_ACPI_PM1_ADDR) These 16 bits are used to match eSPI I/O addresses. Mask */
#define ESPI_IO_ACPI_PM1_ADDR_ESP_H_ADDR(value) (ESPI_IO_ACPI_PM1_ADDR_ESP_H_ADDR_Msk & (_UINT32_(value) << ESPI_IO_ACPI_PM1_ADDR_ESP_H_ADDR_Pos)) /* Assigment of value for ESP_H_ADDR in the ESPI_IO_ACPI_PM1_ADDR register */
#define ESPI_IO_ACPI_PM1_ADDR_Msk             _UINT32_(0xFFFF0001)                                 /* (ESPI_IO_ACPI_PM1_ADDR) Register Mask  */


/* -------- ESPI_IO_FAST_KBD_ADDR : (ESPI_IO Offset: 0x35C) (R/W 32) I/O Base Address Configuration Register -------- */
#define ESPI_IO_FAST_KBD_ADDR_RESETVALUE      _UINT32_(0x920000)                                   /*  (ESPI_IO_FAST_KBD_ADDR) I/O Base Address Configuration Register  Reset Value */

#define ESPI_IO_FAST_KBD_ADDR_VALID_Pos       _UINT32_(0)                                          /* (ESPI_IO_FAST_KBD_ADDR) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_IO_FAST_KBD_ADDR_VALID_Msk       (_UINT32_(0x1) << ESPI_IO_FAST_KBD_ADDR_VALID_Pos)   /* (ESPI_IO_FAST_KBD_ADDR) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_IO_FAST_KBD_ADDR_VALID(value)    (ESPI_IO_FAST_KBD_ADDR_VALID_Msk & (_UINT32_(value) << ESPI_IO_FAST_KBD_ADDR_VALID_Pos)) /* Assigment of value for VALID in the ESPI_IO_FAST_KBD_ADDR register */
#define ESPI_IO_FAST_KBD_ADDR_ESP_H_ADDR_Pos  _UINT32_(16)                                         /* (ESPI_IO_FAST_KBD_ADDR) These 16 bits are used to match eSPI I/O addresses. Position */
#define ESPI_IO_FAST_KBD_ADDR_ESP_H_ADDR_Msk  (_UINT32_(0xFFFF) << ESPI_IO_FAST_KBD_ADDR_ESP_H_ADDR_Pos) /* (ESPI_IO_FAST_KBD_ADDR) These 16 bits are used to match eSPI I/O addresses. Mask */
#define ESPI_IO_FAST_KBD_ADDR_ESP_H_ADDR(value) (ESPI_IO_FAST_KBD_ADDR_ESP_H_ADDR_Msk & (_UINT32_(value) << ESPI_IO_FAST_KBD_ADDR_ESP_H_ADDR_Pos)) /* Assigment of value for ESP_H_ADDR in the ESPI_IO_FAST_KBD_ADDR register */
#define ESPI_IO_FAST_KBD_ADDR_Msk             _UINT32_(0xFFFF0001)                                 /* (ESPI_IO_FAST_KBD_ADDR) Register Mask  */


/* -------- ESPI_IO_UART0_ADDR : (ESPI_IO Offset: 0x360) (R/W 32) UART 0 Base Address Configuration Register -------- */
#define ESPI_IO_UART0_ADDR_RESETVALUE         _UINT32_(0x00)                                       /*  (ESPI_IO_UART0_ADDR) UART 0 Base Address Configuration Register  Reset Value */

#define ESPI_IO_UART0_ADDR_VALID_Pos          _UINT32_(0)                                          /* (ESPI_IO_UART0_ADDR) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_IO_UART0_ADDR_VALID_Msk          (_UINT32_(0x1) << ESPI_IO_UART0_ADDR_VALID_Pos)      /* (ESPI_IO_UART0_ADDR) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_IO_UART0_ADDR_VALID(value)       (ESPI_IO_UART0_ADDR_VALID_Msk & (_UINT32_(value) << ESPI_IO_UART0_ADDR_VALID_Pos)) /* Assigment of value for VALID in the ESPI_IO_UART0_ADDR register */
#define ESPI_IO_UART0_ADDR_ESP_H_ADDR_Pos     _UINT32_(16)                                         /* (ESPI_IO_UART0_ADDR) These 16 bits are used to match eSPI I/O addresses. Position */
#define ESPI_IO_UART0_ADDR_ESP_H_ADDR_Msk     (_UINT32_(0xFFFF) << ESPI_IO_UART0_ADDR_ESP_H_ADDR_Pos) /* (ESPI_IO_UART0_ADDR) These 16 bits are used to match eSPI I/O addresses. Mask */
#define ESPI_IO_UART0_ADDR_ESP_H_ADDR(value)  (ESPI_IO_UART0_ADDR_ESP_H_ADDR_Msk & (_UINT32_(value) << ESPI_IO_UART0_ADDR_ESP_H_ADDR_Pos)) /* Assigment of value for ESP_H_ADDR in the ESPI_IO_UART0_ADDR register */
#define ESPI_IO_UART0_ADDR_Msk                _UINT32_(0xFFFF0001)                                 /* (ESPI_IO_UART0_ADDR) Register Mask  */


/* -------- ESPI_IO_UART1_ADDR : (ESPI_IO Offset: 0x364) (R/W 32) UART 1 Base Address Configuration Register -------- */
#define ESPI_IO_UART1_ADDR_RESETVALUE         _UINT32_(0x00)                                       /*  (ESPI_IO_UART1_ADDR) UART 1 Base Address Configuration Register  Reset Value */

#define ESPI_IO_UART1_ADDR_VALID_Pos          _UINT32_(0)                                          /* (ESPI_IO_UART1_ADDR) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_IO_UART1_ADDR_VALID_Msk          (_UINT32_(0x1) << ESPI_IO_UART1_ADDR_VALID_Pos)      /* (ESPI_IO_UART1_ADDR) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_IO_UART1_ADDR_VALID(value)       (ESPI_IO_UART1_ADDR_VALID_Msk & (_UINT32_(value) << ESPI_IO_UART1_ADDR_VALID_Pos)) /* Assigment of value for VALID in the ESPI_IO_UART1_ADDR register */
#define ESPI_IO_UART1_ADDR_ESP_H_ADDR_Pos     _UINT32_(16)                                         /* (ESPI_IO_UART1_ADDR) These 16 bits are used to match eSPI I/O addresses. Position */
#define ESPI_IO_UART1_ADDR_ESP_H_ADDR_Msk     (_UINT32_(0xFFFF) << ESPI_IO_UART1_ADDR_ESP_H_ADDR_Pos) /* (ESPI_IO_UART1_ADDR) These 16 bits are used to match eSPI I/O addresses. Mask */
#define ESPI_IO_UART1_ADDR_ESP_H_ADDR(value)  (ESPI_IO_UART1_ADDR_ESP_H_ADDR_Msk & (_UINT32_(value) << ESPI_IO_UART1_ADDR_ESP_H_ADDR_Pos)) /* Assigment of value for ESP_H_ADDR in the ESPI_IO_UART1_ADDR register */
#define ESPI_IO_UART1_ADDR_Msk                _UINT32_(0xFFFF0001)                                 /* (ESPI_IO_UART1_ADDR) Register Mask  */


/* -------- ESPI_IO_EMI0_ADDR : (ESPI_IO Offset: 0x368) (R/W 32) Embedded Memory Interface (EMI) 2 BAR Config Register -------- */
#define ESPI_IO_EMI0_ADDR_RESETVALUE          _UINT32_(0x00)                                       /*  (ESPI_IO_EMI0_ADDR) Embedded Memory Interface (EMI) 2 BAR Config Register  Reset Value */

#define ESPI_IO_EMI0_ADDR_VALID_Pos           _UINT32_(0)                                          /* (ESPI_IO_EMI0_ADDR) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_IO_EMI0_ADDR_VALID_Msk           (_UINT32_(0x1) << ESPI_IO_EMI0_ADDR_VALID_Pos)       /* (ESPI_IO_EMI0_ADDR) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_IO_EMI0_ADDR_VALID(value)        (ESPI_IO_EMI0_ADDR_VALID_Msk & (_UINT32_(value) << ESPI_IO_EMI0_ADDR_VALID_Pos)) /* Assigment of value for VALID in the ESPI_IO_EMI0_ADDR register */
#define ESPI_IO_EMI0_ADDR_ESP_H_ADDR_Pos      _UINT32_(16)                                         /* (ESPI_IO_EMI0_ADDR) These 16 bits are used to match eSPI I/O addresses. Position */
#define ESPI_IO_EMI0_ADDR_ESP_H_ADDR_Msk      (_UINT32_(0xFFFF) << ESPI_IO_EMI0_ADDR_ESP_H_ADDR_Pos) /* (ESPI_IO_EMI0_ADDR) These 16 bits are used to match eSPI I/O addresses. Mask */
#define ESPI_IO_EMI0_ADDR_ESP_H_ADDR(value)   (ESPI_IO_EMI0_ADDR_ESP_H_ADDR_Msk & (_UINT32_(value) << ESPI_IO_EMI0_ADDR_ESP_H_ADDR_Pos)) /* Assigment of value for ESP_H_ADDR in the ESPI_IO_EMI0_ADDR register */
#define ESPI_IO_EMI0_ADDR_Msk                 _UINT32_(0xFFFF0001)                                 /* (ESPI_IO_EMI0_ADDR) Register Mask  */


/* -------- ESPI_IO_EMI1_ADDR : (ESPI_IO Offset: 0x36C) (R/W 32) Embedded Memory Interface (EMI) 1 BAR Config Register -------- */
#define ESPI_IO_EMI1_ADDR_RESETVALUE          _UINT32_(0x00)                                       /*  (ESPI_IO_EMI1_ADDR) Embedded Memory Interface (EMI) 1 BAR Config Register  Reset Value */

#define ESPI_IO_EMI1_ADDR_VALID_Pos           _UINT32_(0)                                          /* (ESPI_IO_EMI1_ADDR) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_IO_EMI1_ADDR_VALID_Msk           (_UINT32_(0x1) << ESPI_IO_EMI1_ADDR_VALID_Pos)       /* (ESPI_IO_EMI1_ADDR) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_IO_EMI1_ADDR_VALID(value)        (ESPI_IO_EMI1_ADDR_VALID_Msk & (_UINT32_(value) << ESPI_IO_EMI1_ADDR_VALID_Pos)) /* Assigment of value for VALID in the ESPI_IO_EMI1_ADDR register */
#define ESPI_IO_EMI1_ADDR_ESP_H_ADDR_Pos      _UINT32_(16)                                         /* (ESPI_IO_EMI1_ADDR) These 16 bits are used to match eSPI I/O addresses. Position */
#define ESPI_IO_EMI1_ADDR_ESP_H_ADDR_Msk      (_UINT32_(0xFFFF) << ESPI_IO_EMI1_ADDR_ESP_H_ADDR_Pos) /* (ESPI_IO_EMI1_ADDR) These 16 bits are used to match eSPI I/O addresses. Mask */
#define ESPI_IO_EMI1_ADDR_ESP_H_ADDR(value)   (ESPI_IO_EMI1_ADDR_ESP_H_ADDR_Msk & (_UINT32_(value) << ESPI_IO_EMI1_ADDR_ESP_H_ADDR_Pos)) /* Assigment of value for ESP_H_ADDR in the ESPI_IO_EMI1_ADDR register */
#define ESPI_IO_EMI1_ADDR_Msk                 _UINT32_(0xFFFF0001)                                 /* (ESPI_IO_EMI1_ADDR) Register Mask  */


/* -------- ESPI_IO_PORT80_0_ADDR : (ESPI_IO Offset: 0x374) (R/W 32) BIOS Debug Port (Port 80) 0 BAR Config Register -------- */
#define ESPI_IO_PORT80_0_ADDR_RESETVALUE      _UINT32_(0x00)                                       /*  (ESPI_IO_PORT80_0_ADDR) BIOS Debug Port (Port 80) 0 BAR Config Register  Reset Value */

#define ESPI_IO_PORT80_0_ADDR_VALID_Pos       _UINT32_(0)                                          /* (ESPI_IO_PORT80_0_ADDR) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_IO_PORT80_0_ADDR_VALID_Msk       (_UINT32_(0x1) << ESPI_IO_PORT80_0_ADDR_VALID_Pos)   /* (ESPI_IO_PORT80_0_ADDR) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_IO_PORT80_0_ADDR_VALID(value)    (ESPI_IO_PORT80_0_ADDR_VALID_Msk & (_UINT32_(value) << ESPI_IO_PORT80_0_ADDR_VALID_Pos)) /* Assigment of value for VALID in the ESPI_IO_PORT80_0_ADDR register */
#define ESPI_IO_PORT80_0_ADDR_ESP_H_ADDR_Pos  _UINT32_(16)                                         /* (ESPI_IO_PORT80_0_ADDR) These 16 bits are used to match eSPI I/O addresses. Position */
#define ESPI_IO_PORT80_0_ADDR_ESP_H_ADDR_Msk  (_UINT32_(0xFFFF) << ESPI_IO_PORT80_0_ADDR_ESP_H_ADDR_Pos) /* (ESPI_IO_PORT80_0_ADDR) These 16 bits are used to match eSPI I/O addresses. Mask */
#define ESPI_IO_PORT80_0_ADDR_ESP_H_ADDR(value) (ESPI_IO_PORT80_0_ADDR_ESP_H_ADDR_Msk & (_UINT32_(value) << ESPI_IO_PORT80_0_ADDR_ESP_H_ADDR_Pos)) /* Assigment of value for ESP_H_ADDR in the ESPI_IO_PORT80_0_ADDR register */
#define ESPI_IO_PORT80_0_ADDR_Msk             _UINT32_(0xFFFF0001)                                 /* (ESPI_IO_PORT80_0_ADDR) Register Mask  */


/* -------- ESPI_IO_PORT80_1_ADDR : (ESPI_IO Offset: 0x378) (R/W 32) BIOS Debug Port (Port 80) 1 BAR Config Register -------- */
#define ESPI_IO_PORT80_1_ADDR_RESETVALUE      _UINT32_(0x00)                                       /*  (ESPI_IO_PORT80_1_ADDR) BIOS Debug Port (Port 80) 1 BAR Config Register  Reset Value */

#define ESPI_IO_PORT80_1_ADDR_VALID_Pos       _UINT32_(0)                                          /* (ESPI_IO_PORT80_1_ADDR) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_IO_PORT80_1_ADDR_VALID_Msk       (_UINT32_(0x1) << ESPI_IO_PORT80_1_ADDR_VALID_Pos)   /* (ESPI_IO_PORT80_1_ADDR) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_IO_PORT80_1_ADDR_VALID(value)    (ESPI_IO_PORT80_1_ADDR_VALID_Msk & (_UINT32_(value) << ESPI_IO_PORT80_1_ADDR_VALID_Pos)) /* Assigment of value for VALID in the ESPI_IO_PORT80_1_ADDR register */
#define ESPI_IO_PORT80_1_ADDR_ESP_H_ADDR_Pos  _UINT32_(16)                                         /* (ESPI_IO_PORT80_1_ADDR) These 16 bits are used to match eSPI I/O addresses. Position */
#define ESPI_IO_PORT80_1_ADDR_ESP_H_ADDR_Msk  (_UINT32_(0xFFFF) << ESPI_IO_PORT80_1_ADDR_ESP_H_ADDR_Pos) /* (ESPI_IO_PORT80_1_ADDR) These 16 bits are used to match eSPI I/O addresses. Mask */
#define ESPI_IO_PORT80_1_ADDR_ESP_H_ADDR(value) (ESPI_IO_PORT80_1_ADDR_ESP_H_ADDR_Msk & (_UINT32_(value) << ESPI_IO_PORT80_1_ADDR_ESP_H_ADDR_Pos)) /* Assigment of value for ESP_H_ADDR in the ESPI_IO_PORT80_1_ADDR register */
#define ESPI_IO_PORT80_1_ADDR_Msk             _UINT32_(0xFFFF0001)                                 /* (ESPI_IO_PORT80_1_ADDR) Register Mask  */


/* -------- ESPI_IO_RTC_ADDR : (ESPI_IO Offset: 0x37C) (R/W 32) RTC BAR Config Register -------- */
#define ESPI_IO_RTC_ADDR_RESETVALUE           _UINT32_(0x00)                                       /*  (ESPI_IO_RTC_ADDR) RTC BAR Config Register  Reset Value */

#define ESPI_IO_RTC_ADDR_VALID_Pos            _UINT32_(0)                                          /* (ESPI_IO_RTC_ADDR) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_IO_RTC_ADDR_VALID_Msk            (_UINT32_(0x1) << ESPI_IO_RTC_ADDR_VALID_Pos)        /* (ESPI_IO_RTC_ADDR) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_IO_RTC_ADDR_VALID(value)         (ESPI_IO_RTC_ADDR_VALID_Msk & (_UINT32_(value) << ESPI_IO_RTC_ADDR_VALID_Pos)) /* Assigment of value for VALID in the ESPI_IO_RTC_ADDR register */
#define ESPI_IO_RTC_ADDR_ESP_H_ADDR_Pos       _UINT32_(16)                                         /* (ESPI_IO_RTC_ADDR) These 16 bits are used to match eSPI I/O addresses. Position */
#define ESPI_IO_RTC_ADDR_ESP_H_ADDR_Msk       (_UINT32_(0xFFFF) << ESPI_IO_RTC_ADDR_ESP_H_ADDR_Pos) /* (ESPI_IO_RTC_ADDR) These 16 bits are used to match eSPI I/O addresses. Mask */
#define ESPI_IO_RTC_ADDR_ESP_H_ADDR(value)    (ESPI_IO_RTC_ADDR_ESP_H_ADDR_Msk & (_UINT32_(value) << ESPI_IO_RTC_ADDR_ESP_H_ADDR_Pos)) /* Assigment of value for ESP_H_ADDR in the ESPI_IO_RTC_ADDR register */
#define ESPI_IO_RTC_ADDR_Msk                  _UINT32_(0xFFFF0001)                                 /* (ESPI_IO_RTC_ADDR) Register Mask  */


/* -------- ESPI_IO_UART2_ADDR : (ESPI_IO Offset: 0x384) (R/W 32) UART 2 Base Address Configuration Register -------- */
#define ESPI_IO_UART2_ADDR_RESETVALUE         _UINT32_(0x00)                                       /*  (ESPI_IO_UART2_ADDR) UART 2 Base Address Configuration Register  Reset Value */

#define ESPI_IO_UART2_ADDR_VALID_Pos          _UINT32_(0)                                          /* (ESPI_IO_UART2_ADDR) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_IO_UART2_ADDR_VALID_Msk          (_UINT32_(0x1) << ESPI_IO_UART2_ADDR_VALID_Pos)      /* (ESPI_IO_UART2_ADDR) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_IO_UART2_ADDR_VALID(value)       (ESPI_IO_UART2_ADDR_VALID_Msk & (_UINT32_(value) << ESPI_IO_UART2_ADDR_VALID_Pos)) /* Assigment of value for VALID in the ESPI_IO_UART2_ADDR register */
#define ESPI_IO_UART2_ADDR_ESP_H_ADDR_Pos     _UINT32_(16)                                         /* (ESPI_IO_UART2_ADDR) These 16 bits are used to match eSPI I/O addresses. Position */
#define ESPI_IO_UART2_ADDR_ESP_H_ADDR_Msk     (_UINT32_(0xFFFF) << ESPI_IO_UART2_ADDR_ESP_H_ADDR_Pos) /* (ESPI_IO_UART2_ADDR) These 16 bits are used to match eSPI I/O addresses. Mask */
#define ESPI_IO_UART2_ADDR_ESP_H_ADDR(value)  (ESPI_IO_UART2_ADDR_ESP_H_ADDR_Msk & (_UINT32_(value) << ESPI_IO_UART2_ADDR_ESP_H_ADDR_Pos)) /* Assigment of value for ESP_H_ADDR in the ESPI_IO_UART2_ADDR register */
#define ESPI_IO_UART2_ADDR_Msk                _UINT32_(0xFFFF0001)                                 /* (ESPI_IO_UART2_ADDR) Register Mask  */


/* -------- ESPI_IO_GLUE_ADDR : (ESPI_IO Offset: 0x38C) (R/W 32) GLUE Base Address Configuration Register -------- */
#define ESPI_IO_GLUE_ADDR_RESETVALUE          _UINT32_(0x00)                                       /*  (ESPI_IO_GLUE_ADDR) GLUE Base Address Configuration Register  Reset Value */

#define ESPI_IO_GLUE_ADDR_VALID_Pos           _UINT32_(0)                                          /* (ESPI_IO_GLUE_ADDR) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_IO_GLUE_ADDR_VALID_Msk           (_UINT32_(0x1) << ESPI_IO_GLUE_ADDR_VALID_Pos)       /* (ESPI_IO_GLUE_ADDR) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_IO_GLUE_ADDR_VALID(value)        (ESPI_IO_GLUE_ADDR_VALID_Msk & (_UINT32_(value) << ESPI_IO_GLUE_ADDR_VALID_Pos)) /* Assigment of value for VALID in the ESPI_IO_GLUE_ADDR register */
#define ESPI_IO_GLUE_ADDR_ESP_H_ADDR_Pos      _UINT32_(16)                                         /* (ESPI_IO_GLUE_ADDR) These 16 bits are used to match eSPI I/O addresses. Position */
#define ESPI_IO_GLUE_ADDR_ESP_H_ADDR_Msk      (_UINT32_(0xFFFF) << ESPI_IO_GLUE_ADDR_ESP_H_ADDR_Pos) /* (ESPI_IO_GLUE_ADDR) These 16 bits are used to match eSPI I/O addresses. Mask */
#define ESPI_IO_GLUE_ADDR_ESP_H_ADDR(value)   (ESPI_IO_GLUE_ADDR_ESP_H_ADDR_Msk & (_UINT32_(value) << ESPI_IO_GLUE_ADDR_ESP_H_ADDR_Pos)) /* Assigment of value for ESP_H_ADDR in the ESPI_IO_GLUE_ADDR register */
#define ESPI_IO_GLUE_ADDR_Msk                 _UINT32_(0xFFFF0001)                                 /* (ESPI_IO_GLUE_ADDR) Register Mask  */


/* -------- ESPI_IO_MBX_HOST_SIRQ_IRQ : (ESPI_IO Offset: 0x3AC) (R/W 8) Mailbox (MBX_Host_SIRQ Interrupt) Selection Register -------- */
#define ESPI_IO_MBX_HOST_SIRQ_IRQ_RESETVALUE  _UINT8_(0xFF)                                        /*  (ESPI_IO_MBX_HOST_SIRQ_IRQ) Mailbox (MBX_Host_SIRQ Interrupt) Selection Register  Reset Value */

#define ESPI_IO_MBX_HOST_SIRQ_IRQ_IRQ_Pos     _UINT8_(0)                                           /* (ESPI_IO_MBX_HOST_SIRQ_IRQ) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Position */
#define ESPI_IO_MBX_HOST_SIRQ_IRQ_IRQ_Msk     (_UINT8_(0xFF) << ESPI_IO_MBX_HOST_SIRQ_IRQ_IRQ_Pos) /* (ESPI_IO_MBX_HOST_SIRQ_IRQ) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Mask */
#define ESPI_IO_MBX_HOST_SIRQ_IRQ_IRQ(value)  (ESPI_IO_MBX_HOST_SIRQ_IRQ_IRQ_Msk & (_UINT8_(value) << ESPI_IO_MBX_HOST_SIRQ_IRQ_IRQ_Pos)) /* Assigment of value for IRQ in the ESPI_IO_MBX_HOST_SIRQ_IRQ register */
#define ESPI_IO_MBX_HOST_SIRQ_IRQ_Msk         _UINT8_(0xFF)                                        /* (ESPI_IO_MBX_HOST_SIRQ_IRQ) Register Mask  */


/* -------- ESPI_IO_MBX_HOST_SMI_IRQ : (ESPI_IO Offset: 0x3AD) (R/W 8) Mailbox (MBX_Host_SMI Interrupt) Selection Register -------- */
#define ESPI_IO_MBX_HOST_SMI_IRQ_RESETVALUE   _UINT8_(0xFF)                                        /*  (ESPI_IO_MBX_HOST_SMI_IRQ) Mailbox (MBX_Host_SMI Interrupt) Selection Register  Reset Value */

#define ESPI_IO_MBX_HOST_SMI_IRQ_IRQ_Pos      _UINT8_(0)                                           /* (ESPI_IO_MBX_HOST_SMI_IRQ) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Position */
#define ESPI_IO_MBX_HOST_SMI_IRQ_IRQ_Msk      (_UINT8_(0xFF) << ESPI_IO_MBX_HOST_SMI_IRQ_IRQ_Pos)  /* (ESPI_IO_MBX_HOST_SMI_IRQ) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Mask */
#define ESPI_IO_MBX_HOST_SMI_IRQ_IRQ(value)   (ESPI_IO_MBX_HOST_SMI_IRQ_IRQ_Msk & (_UINT8_(value) << ESPI_IO_MBX_HOST_SMI_IRQ_IRQ_Pos)) /* Assigment of value for IRQ in the ESPI_IO_MBX_HOST_SMI_IRQ register */
#define ESPI_IO_MBX_HOST_SMI_IRQ_Msk          _UINT8_(0xFF)                                        /* (ESPI_IO_MBX_HOST_SMI_IRQ) Register Mask  */


/* -------- ESPI_IO_KIRQ_8042_IRQ : (ESPI_IO Offset: 0x3AE) (R/W 8) 8042 (KIRQ Interrupt) Selection Register -------- */
#define ESPI_IO_KIRQ_8042_IRQ_RESETVALUE      _UINT8_(0xFF)                                        /*  (ESPI_IO_KIRQ_8042_IRQ) 8042 (KIRQ Interrupt) Selection Register  Reset Value */

#define ESPI_IO_KIRQ_8042_IRQ_IRQ_Pos         _UINT8_(0)                                           /* (ESPI_IO_KIRQ_8042_IRQ) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Position */
#define ESPI_IO_KIRQ_8042_IRQ_IRQ_Msk         (_UINT8_(0xFF) << ESPI_IO_KIRQ_8042_IRQ_IRQ_Pos)     /* (ESPI_IO_KIRQ_8042_IRQ) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Mask */
#define ESPI_IO_KIRQ_8042_IRQ_IRQ(value)      (ESPI_IO_KIRQ_8042_IRQ_IRQ_Msk & (_UINT8_(value) << ESPI_IO_KIRQ_8042_IRQ_IRQ_Pos)) /* Assigment of value for IRQ in the ESPI_IO_KIRQ_8042_IRQ register */
#define ESPI_IO_KIRQ_8042_IRQ_Msk             _UINT8_(0xFF)                                        /* (ESPI_IO_KIRQ_8042_IRQ) Register Mask  */


/* -------- ESPI_IO_MIRQ_8042_IRQ : (ESPI_IO Offset: 0x3AF) (R/W 8) 8042 (MIRQ Interrupt) Selection Register -------- */
#define ESPI_IO_MIRQ_8042_IRQ_RESETVALUE      _UINT8_(0xFF)                                        /*  (ESPI_IO_MIRQ_8042_IRQ) 8042 (MIRQ Interrupt) Selection Register  Reset Value */

#define ESPI_IO_MIRQ_8042_IRQ_IRQ_Pos         _UINT8_(0)                                           /* (ESPI_IO_MIRQ_8042_IRQ) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Position */
#define ESPI_IO_MIRQ_8042_IRQ_IRQ_Msk         (_UINT8_(0xFF) << ESPI_IO_MIRQ_8042_IRQ_IRQ_Pos)     /* (ESPI_IO_MIRQ_8042_IRQ) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Mask */
#define ESPI_IO_MIRQ_8042_IRQ_IRQ(value)      (ESPI_IO_MIRQ_8042_IRQ_IRQ_Msk & (_UINT8_(value) << ESPI_IO_MIRQ_8042_IRQ_IRQ_Pos)) /* Assigment of value for IRQ in the ESPI_IO_MIRQ_8042_IRQ register */
#define ESPI_IO_MIRQ_8042_IRQ_Msk             _UINT8_(0xFF)                                        /* (ESPI_IO_MIRQ_8042_IRQ) Register Mask  */


/* -------- ESPI_IO_ACPI_EC0_OBF_IRQ : (ESPI_IO Offset: 0x3B0) (R/W 8) ACPI EC 0 (EC_OBF Interrupt) Selection Register -------- */
#define ESPI_IO_ACPI_EC0_OBF_IRQ_RESETVALUE   _UINT8_(0xFF)                                        /*  (ESPI_IO_ACPI_EC0_OBF_IRQ) ACPI EC 0 (EC_OBF Interrupt) Selection Register  Reset Value */

#define ESPI_IO_ACPI_EC0_OBF_IRQ_IRQ_Pos      _UINT8_(0)                                           /* (ESPI_IO_ACPI_EC0_OBF_IRQ) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Position */
#define ESPI_IO_ACPI_EC0_OBF_IRQ_IRQ_Msk      (_UINT8_(0xFF) << ESPI_IO_ACPI_EC0_OBF_IRQ_IRQ_Pos)  /* (ESPI_IO_ACPI_EC0_OBF_IRQ) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Mask */
#define ESPI_IO_ACPI_EC0_OBF_IRQ_IRQ(value)   (ESPI_IO_ACPI_EC0_OBF_IRQ_IRQ_Msk & (_UINT8_(value) << ESPI_IO_ACPI_EC0_OBF_IRQ_IRQ_Pos)) /* Assigment of value for IRQ in the ESPI_IO_ACPI_EC0_OBF_IRQ register */
#define ESPI_IO_ACPI_EC0_OBF_IRQ_Msk          _UINT8_(0xFF)                                        /* (ESPI_IO_ACPI_EC0_OBF_IRQ) Register Mask  */


/* -------- ESPI_IO_ACPI_EC1_OBF_IRQ : (ESPI_IO Offset: 0x3B1) (R/W 8) ACPI EC 1 (EC_OBF Interrupt) Selection Register -------- */
#define ESPI_IO_ACPI_EC1_OBF_IRQ_RESETVALUE   _UINT8_(0xFF)                                        /*  (ESPI_IO_ACPI_EC1_OBF_IRQ) ACPI EC 1 (EC_OBF Interrupt) Selection Register  Reset Value */

#define ESPI_IO_ACPI_EC1_OBF_IRQ_IRQ_Pos      _UINT8_(0)                                           /* (ESPI_IO_ACPI_EC1_OBF_IRQ) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Position */
#define ESPI_IO_ACPI_EC1_OBF_IRQ_IRQ_Msk      (_UINT8_(0xFF) << ESPI_IO_ACPI_EC1_OBF_IRQ_IRQ_Pos)  /* (ESPI_IO_ACPI_EC1_OBF_IRQ) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Mask */
#define ESPI_IO_ACPI_EC1_OBF_IRQ_IRQ(value)   (ESPI_IO_ACPI_EC1_OBF_IRQ_IRQ_Msk & (_UINT8_(value) << ESPI_IO_ACPI_EC1_OBF_IRQ_IRQ_Pos)) /* Assigment of value for IRQ in the ESPI_IO_ACPI_EC1_OBF_IRQ register */
#define ESPI_IO_ACPI_EC1_OBF_IRQ_Msk          _UINT8_(0xFF)                                        /* (ESPI_IO_ACPI_EC1_OBF_IRQ) Register Mask  */


/* -------- ESPI_IO_ACPI_EC2_OBF_IRQ : (ESPI_IO Offset: 0x3B2) (R/W 8) ACPI EC 2 (EC_OBF Interrupt) Selection Register -------- */
#define ESPI_IO_ACPI_EC2_OBF_IRQ_RESETVALUE   _UINT8_(0xFF)                                        /*  (ESPI_IO_ACPI_EC2_OBF_IRQ) ACPI EC 2 (EC_OBF Interrupt) Selection Register  Reset Value */

#define ESPI_IO_ACPI_EC2_OBF_IRQ_IRQ_Pos      _UINT8_(0)                                           /* (ESPI_IO_ACPI_EC2_OBF_IRQ) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Position */
#define ESPI_IO_ACPI_EC2_OBF_IRQ_IRQ_Msk      (_UINT8_(0xFF) << ESPI_IO_ACPI_EC2_OBF_IRQ_IRQ_Pos)  /* (ESPI_IO_ACPI_EC2_OBF_IRQ) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Mask */
#define ESPI_IO_ACPI_EC2_OBF_IRQ_IRQ(value)   (ESPI_IO_ACPI_EC2_OBF_IRQ_IRQ_Msk & (_UINT8_(value) << ESPI_IO_ACPI_EC2_OBF_IRQ_IRQ_Pos)) /* Assigment of value for IRQ in the ESPI_IO_ACPI_EC2_OBF_IRQ register */
#define ESPI_IO_ACPI_EC2_OBF_IRQ_Msk          _UINT8_(0xFF)                                        /* (ESPI_IO_ACPI_EC2_OBF_IRQ) Register Mask  */


/* -------- ESPI_IO_ACPI_EC3_OBF_IRQ : (ESPI_IO Offset: 0x3B3) (R/W 8) ACPI EC 3 (EC_OBF Interrupt) Selection Register -------- */
#define ESPI_IO_ACPI_EC3_OBF_IRQ_RESETVALUE   _UINT8_(0xFF)                                        /*  (ESPI_IO_ACPI_EC3_OBF_IRQ) ACPI EC 3 (EC_OBF Interrupt) Selection Register  Reset Value */

#define ESPI_IO_ACPI_EC3_OBF_IRQ_IRQ_Pos      _UINT8_(0)                                           /* (ESPI_IO_ACPI_EC3_OBF_IRQ) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Position */
#define ESPI_IO_ACPI_EC3_OBF_IRQ_IRQ_Msk      (_UINT8_(0xFF) << ESPI_IO_ACPI_EC3_OBF_IRQ_IRQ_Pos)  /* (ESPI_IO_ACPI_EC3_OBF_IRQ) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Mask */
#define ESPI_IO_ACPI_EC3_OBF_IRQ_IRQ(value)   (ESPI_IO_ACPI_EC3_OBF_IRQ_IRQ_Msk & (_UINT8_(value) << ESPI_IO_ACPI_EC3_OBF_IRQ_IRQ_Pos)) /* Assigment of value for IRQ in the ESPI_IO_ACPI_EC3_OBF_IRQ register */
#define ESPI_IO_ACPI_EC3_OBF_IRQ_Msk          _UINT8_(0xFF)                                        /* (ESPI_IO_ACPI_EC3_OBF_IRQ) Register Mask  */


/* -------- ESPI_IO_UART0_IRQ : (ESPI_IO Offset: 0x3B5) (R/W 8) UART 0 (UART Interrupt) Selection Register -------- */
#define ESPI_IO_UART0_IRQ_RESETVALUE          _UINT8_(0xFF)                                        /*  (ESPI_IO_UART0_IRQ) UART 0 (UART Interrupt) Selection Register  Reset Value */

#define ESPI_IO_UART0_IRQ_IRQ_Pos             _UINT8_(0)                                           /* (ESPI_IO_UART0_IRQ) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Position */
#define ESPI_IO_UART0_IRQ_IRQ_Msk             (_UINT8_(0xFF) << ESPI_IO_UART0_IRQ_IRQ_Pos)         /* (ESPI_IO_UART0_IRQ) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Mask */
#define ESPI_IO_UART0_IRQ_IRQ(value)          (ESPI_IO_UART0_IRQ_IRQ_Msk & (_UINT8_(value) << ESPI_IO_UART0_IRQ_IRQ_Pos)) /* Assigment of value for IRQ in the ESPI_IO_UART0_IRQ register */
#define ESPI_IO_UART0_IRQ_Msk                 _UINT8_(0xFF)                                        /* (ESPI_IO_UART0_IRQ) Register Mask  */


/* -------- ESPI_IO_UART1_IRQ : (ESPI_IO Offset: 0x3B6) (R/W 8) UART 1 (UART Interrupt) Selection Register -------- */
#define ESPI_IO_UART1_IRQ_RESETVALUE          _UINT8_(0xFF)                                        /*  (ESPI_IO_UART1_IRQ) UART 1 (UART Interrupt) Selection Register  Reset Value */

#define ESPI_IO_UART1_IRQ_IRQ_Pos             _UINT8_(0)                                           /* (ESPI_IO_UART1_IRQ) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Position */
#define ESPI_IO_UART1_IRQ_IRQ_Msk             (_UINT8_(0xFF) << ESPI_IO_UART1_IRQ_IRQ_Pos)         /* (ESPI_IO_UART1_IRQ) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Mask */
#define ESPI_IO_UART1_IRQ_IRQ(value)          (ESPI_IO_UART1_IRQ_IRQ_Msk & (_UINT8_(value) << ESPI_IO_UART1_IRQ_IRQ_Pos)) /* Assigment of value for IRQ in the ESPI_IO_UART1_IRQ register */
#define ESPI_IO_UART1_IRQ_Msk                 _UINT8_(0xFF)                                        /* (ESPI_IO_UART1_IRQ) Register Mask  */


/* -------- ESPI_IO_EMI0_HOST_IRQ : (ESPI_IO Offset: 0x3B7) (R/W 8) EMI 0 (Host Event Interrupt) Selection Register -------- */
#define ESPI_IO_EMI0_HOST_IRQ_RESETVALUE      _UINT8_(0xFF)                                        /*  (ESPI_IO_EMI0_HOST_IRQ) EMI 0 (Host Event Interrupt) Selection Register  Reset Value */

#define ESPI_IO_EMI0_HOST_IRQ_IRQ_Pos         _UINT8_(0)                                           /* (ESPI_IO_EMI0_HOST_IRQ) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Position */
#define ESPI_IO_EMI0_HOST_IRQ_IRQ_Msk         (_UINT8_(0xFF) << ESPI_IO_EMI0_HOST_IRQ_IRQ_Pos)     /* (ESPI_IO_EMI0_HOST_IRQ) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Mask */
#define ESPI_IO_EMI0_HOST_IRQ_IRQ(value)      (ESPI_IO_EMI0_HOST_IRQ_IRQ_Msk & (_UINT8_(value) << ESPI_IO_EMI0_HOST_IRQ_IRQ_Pos)) /* Assigment of value for IRQ in the ESPI_IO_EMI0_HOST_IRQ register */
#define ESPI_IO_EMI0_HOST_IRQ_Msk             _UINT8_(0xFF)                                        /* (ESPI_IO_EMI0_HOST_IRQ) Register Mask  */


/* -------- ESPI_IO_EMI0_EC_HOST_IRQ : (ESPI_IO Offset: 0x3B8) (R/W 8) EMI 0 (EC-to-Host Interrupt) Selection Register -------- */
#define ESPI_IO_EMI0_EC_HOST_IRQ_RESETVALUE   _UINT8_(0xFF)                                        /*  (ESPI_IO_EMI0_EC_HOST_IRQ) EMI 0 (EC-to-Host Interrupt) Selection Register  Reset Value */

#define ESPI_IO_EMI0_EC_HOST_IRQ_IRQ_Pos      _UINT8_(0)                                           /* (ESPI_IO_EMI0_EC_HOST_IRQ) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Position */
#define ESPI_IO_EMI0_EC_HOST_IRQ_IRQ_Msk      (_UINT8_(0xFF) << ESPI_IO_EMI0_EC_HOST_IRQ_IRQ_Pos)  /* (ESPI_IO_EMI0_EC_HOST_IRQ) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Mask */
#define ESPI_IO_EMI0_EC_HOST_IRQ_IRQ(value)   (ESPI_IO_EMI0_EC_HOST_IRQ_IRQ_Msk & (_UINT8_(value) << ESPI_IO_EMI0_EC_HOST_IRQ_IRQ_Pos)) /* Assigment of value for IRQ in the ESPI_IO_EMI0_EC_HOST_IRQ register */
#define ESPI_IO_EMI0_EC_HOST_IRQ_Msk          _UINT8_(0xFF)                                        /* (ESPI_IO_EMI0_EC_HOST_IRQ) Register Mask  */


/* -------- ESPI_IO_EMI1_HOST_IRQ : (ESPI_IO Offset: 0x3B9) (R/W 8) EMI 1 (Host Event Interrupt) Selection Register -------- */
#define ESPI_IO_EMI1_HOST_IRQ_RESETVALUE      _UINT8_(0xFF)                                        /*  (ESPI_IO_EMI1_HOST_IRQ) EMI 1 (Host Event Interrupt) Selection Register  Reset Value */

#define ESPI_IO_EMI1_HOST_IRQ_IRQ_Pos         _UINT8_(0)                                           /* (ESPI_IO_EMI1_HOST_IRQ) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Position */
#define ESPI_IO_EMI1_HOST_IRQ_IRQ_Msk         (_UINT8_(0xFF) << ESPI_IO_EMI1_HOST_IRQ_IRQ_Pos)     /* (ESPI_IO_EMI1_HOST_IRQ) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Mask */
#define ESPI_IO_EMI1_HOST_IRQ_IRQ(value)      (ESPI_IO_EMI1_HOST_IRQ_IRQ_Msk & (_UINT8_(value) << ESPI_IO_EMI1_HOST_IRQ_IRQ_Pos)) /* Assigment of value for IRQ in the ESPI_IO_EMI1_HOST_IRQ register */
#define ESPI_IO_EMI1_HOST_IRQ_Msk             _UINT8_(0xFF)                                        /* (ESPI_IO_EMI1_HOST_IRQ) Register Mask  */


/* -------- ESPI_IO_EMI1_EC_HOST_IRQ : (ESPI_IO Offset: 0x3BA) (R/W 8) EMI 1 (EC-to-Host Interrupt) Selection Register -------- */
#define ESPI_IO_EMI1_EC_HOST_IRQ_RESETVALUE   _UINT8_(0xFF)                                        /*  (ESPI_IO_EMI1_EC_HOST_IRQ) EMI 1 (EC-to-Host Interrupt) Selection Register  Reset Value */

#define ESPI_IO_EMI1_EC_HOST_IRQ_IRQ_Pos      _UINT8_(0)                                           /* (ESPI_IO_EMI1_EC_HOST_IRQ) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Position */
#define ESPI_IO_EMI1_EC_HOST_IRQ_IRQ_Msk      (_UINT8_(0xFF) << ESPI_IO_EMI1_EC_HOST_IRQ_IRQ_Pos)  /* (ESPI_IO_EMI1_EC_HOST_IRQ) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Mask */
#define ESPI_IO_EMI1_EC_HOST_IRQ_IRQ(value)   (ESPI_IO_EMI1_EC_HOST_IRQ_IRQ_Msk & (_UINT8_(value) << ESPI_IO_EMI1_EC_HOST_IRQ_IRQ_Pos)) /* Assigment of value for IRQ in the ESPI_IO_EMI1_EC_HOST_IRQ register */
#define ESPI_IO_EMI1_EC_HOST_IRQ_Msk          _UINT8_(0xFF)                                        /* (ESPI_IO_EMI1_EC_HOST_IRQ) Register Mask  */


/* -------- ESPI_IO_RTC_IRQ : (ESPI_IO Offset: 0x3BD) (R/W 8) RTC (RTC Interrupt) Selection Register -------- */
#define ESPI_IO_RTC_IRQ_RESETVALUE            _UINT8_(0xFF)                                        /*  (ESPI_IO_RTC_IRQ) RTC (RTC Interrupt) Selection Register  Reset Value */

#define ESPI_IO_RTC_IRQ_IRQ_Pos               _UINT8_(0)                                           /* (ESPI_IO_RTC_IRQ) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Position */
#define ESPI_IO_RTC_IRQ_IRQ_Msk               (_UINT8_(0xFF) << ESPI_IO_RTC_IRQ_IRQ_Pos)           /* (ESPI_IO_RTC_IRQ) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Mask */
#define ESPI_IO_RTC_IRQ_IRQ(value)            (ESPI_IO_RTC_IRQ_IRQ_Msk & (_UINT8_(value) << ESPI_IO_RTC_IRQ_IRQ_Pos)) /* Assigment of value for IRQ in the ESPI_IO_RTC_IRQ register */
#define ESPI_IO_RTC_IRQ_Msk                   _UINT8_(0xFF)                                        /* (ESPI_IO_RTC_IRQ) Register Mask  */


/* -------- ESPI_IO_EC_IRQ : (ESPI_IO Offset: 0x3BE) (R/W 8) EC (EC_IRQ Interrupt) Selection Register -------- */
#define ESPI_IO_EC_IRQ_RESETVALUE             _UINT8_(0xFF)                                        /*  (ESPI_IO_EC_IRQ) EC (EC_IRQ Interrupt) Selection Register  Reset Value */

#define ESPI_IO_EC_IRQ_IRQ_Pos                _UINT8_(0)                                           /* (ESPI_IO_EC_IRQ) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Position */
#define ESPI_IO_EC_IRQ_IRQ_Msk                (_UINT8_(0xFF) << ESPI_IO_EC_IRQ_IRQ_Pos)            /* (ESPI_IO_EC_IRQ) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Mask */
#define ESPI_IO_EC_IRQ_IRQ(value)             (ESPI_IO_EC_IRQ_IRQ_Msk & (_UINT8_(value) << ESPI_IO_EC_IRQ_IRQ_Pos)) /* Assigment of value for IRQ in the ESPI_IO_EC_IRQ register */
#define ESPI_IO_EC_IRQ_Msk                    _UINT8_(0xFF)                                        /* (ESPI_IO_EC_IRQ) Register Mask  */


/* -------- ESPI_IO_UART2_IRQ : (ESPI_IO Offset: 0x3BF) (R/W 8) UART 2 (UART Interrupt) Selection Register -------- */
#define ESPI_IO_UART2_IRQ_RESETVALUE          _UINT8_(0xFF)                                        /*  (ESPI_IO_UART2_IRQ) UART 2 (UART Interrupt) Selection Register  Reset Value */

#define ESPI_IO_UART2_IRQ_IRQ_Pos             _UINT8_(0)                                           /* (ESPI_IO_UART2_IRQ) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Position */
#define ESPI_IO_UART2_IRQ_IRQ_Msk             (_UINT8_(0xFF) << ESPI_IO_UART2_IRQ_IRQ_Pos)         /* (ESPI_IO_UART2_IRQ) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Mask */
#define ESPI_IO_UART2_IRQ_IRQ(value)          (ESPI_IO_UART2_IRQ_IRQ_Msk & (_UINT8_(value) << ESPI_IO_UART2_IRQ_IRQ_Pos)) /* Assigment of value for IRQ in the ESPI_IO_UART2_IRQ register */
#define ESPI_IO_UART2_IRQ_Msk                 _UINT8_(0xFF)                                        /* (ESPI_IO_UART2_IRQ) Register Mask  */


/* -------- ESPI_IO_ESPI_VW_ERR : (ESPI_IO Offset: 0x3F0) (R/W 8) eSPI Virtual Wire Errors Register -------- */
#define ESPI_IO_ESPI_VW_ERR_RESETVALUE        _UINT8_(0x00)                                        /*  (ESPI_IO_ESPI_VW_ERR) eSPI Virtual Wire Errors Register  Reset Value */

#define ESPI_IO_ESPI_VW_ERR_FTL_STS_Pos       _UINT8_(0)                                           /* (ESPI_IO_ESPI_VW_ERR) This bit is a Master-readable copy of the Virtual Wire ERROR_FATAL (bit 1 in Slave-to-Master Virtual Wire Index 5h). Position */
#define ESPI_IO_ESPI_VW_ERR_FTL_STS_Msk       (_UINT8_(0x1) << ESPI_IO_ESPI_VW_ERR_FTL_STS_Pos)    /* (ESPI_IO_ESPI_VW_ERR) This bit is a Master-readable copy of the Virtual Wire ERROR_FATAL (bit 1 in Slave-to-Master Virtual Wire Index 5h). Mask */
#define ESPI_IO_ESPI_VW_ERR_FTL_STS(value)    (ESPI_IO_ESPI_VW_ERR_FTL_STS_Msk & (_UINT8_(value) << ESPI_IO_ESPI_VW_ERR_FTL_STS_Pos)) /* Assigment of value for FTL_STS in the ESPI_IO_ESPI_VW_ERR register */
#define ESPI_IO_ESPI_VW_ERR_CLR_FTL_STATUS_Pos _UINT8_(1)                                           /* (ESPI_IO_ESPI_VW_ERR) When this field is written with a 1 the Virtual Wire ERROR_FATAL (bit 1 in Slave-to-Master Virtual Wire Index 5h)\n      is cleared to 0. Because clearing the status bit changes its state, a Virtual Wire packet reporting the new state will be sent\n      to the Master. Writes of 0 to this bit have no effect. Reads of this bit always return '0'. Position */
#define ESPI_IO_ESPI_VW_ERR_CLR_FTL_STATUS_Msk (_UINT8_(0x1) << ESPI_IO_ESPI_VW_ERR_CLR_FTL_STATUS_Pos) /* (ESPI_IO_ESPI_VW_ERR) When this field is written with a 1 the Virtual Wire ERROR_FATAL (bit 1 in Slave-to-Master Virtual Wire Index 5h)\n      is cleared to 0. Because clearing the status bit changes its state, a Virtual Wire packet reporting the new state will be sent\n      to the Master. Writes of 0 to this bit have no effect. Reads of this bit always return '0'. Mask */
#define ESPI_IO_ESPI_VW_ERR_CLR_FTL_STATUS(value) (ESPI_IO_ESPI_VW_ERR_CLR_FTL_STATUS_Msk & (_UINT8_(value) << ESPI_IO_ESPI_VW_ERR_CLR_FTL_STATUS_Pos)) /* Assigment of value for CLR_FTL_STATUS in the ESPI_IO_ESPI_VW_ERR register */
#define ESPI_IO_ESPI_VW_ERR_NFTL_STS_Pos      _UINT8_(4)                                           /* (ESPI_IO_ESPI_VW_ERR) This bit is a Master-readable copy of the Virtual Wire ERROR_NON_FATAL (bit 2 in Slave-to-Master Virtual Wire Index 5h). Position */
#define ESPI_IO_ESPI_VW_ERR_NFTL_STS_Msk      (_UINT8_(0x1) << ESPI_IO_ESPI_VW_ERR_NFTL_STS_Pos)   /* (ESPI_IO_ESPI_VW_ERR) This bit is a Master-readable copy of the Virtual Wire ERROR_NON_FATAL (bit 2 in Slave-to-Master Virtual Wire Index 5h). Mask */
#define ESPI_IO_ESPI_VW_ERR_NFTL_STS(value)   (ESPI_IO_ESPI_VW_ERR_NFTL_STS_Msk & (_UINT8_(value) << ESPI_IO_ESPI_VW_ERR_NFTL_STS_Pos)) /* Assigment of value for NFTL_STS in the ESPI_IO_ESPI_VW_ERR register */
#define ESPI_IO_ESPI_VW_ERR_CLR_NFTL_STS_Pos  _UINT8_(5)                                           /* (ESPI_IO_ESPI_VW_ERR) When this field is written with a 1 the Virtual Wire ERROR_NON_- FATAL (bit 2 in Slave-to-Master Virtual Wire Index 5h)\n      is cleared to 0. Because clearing the status bit changes its state, a Virtual Wire packet reporting the new state will be sent to\n      the Master. Writes of 0 to this bit have no effect. Reads of this bit always return '0'. Position */
#define ESPI_IO_ESPI_VW_ERR_CLR_NFTL_STS_Msk  (_UINT8_(0x1) << ESPI_IO_ESPI_VW_ERR_CLR_NFTL_STS_Pos) /* (ESPI_IO_ESPI_VW_ERR) When this field is written with a 1 the Virtual Wire ERROR_NON_- FATAL (bit 2 in Slave-to-Master Virtual Wire Index 5h)\n      is cleared to 0. Because clearing the status bit changes its state, a Virtual Wire packet reporting the new state will be sent to\n      the Master. Writes of 0 to this bit have no effect. Reads of this bit always return '0'. Mask */
#define ESPI_IO_ESPI_VW_ERR_CLR_NFTL_STS(value) (ESPI_IO_ESPI_VW_ERR_CLR_NFTL_STS_Msk & (_UINT8_(value) << ESPI_IO_ESPI_VW_ERR_CLR_NFTL_STS_Pos)) /* Assigment of value for CLR_NFTL_STS in the ESPI_IO_ESPI_VW_ERR register */
#define ESPI_IO_ESPI_VW_ERR_Msk               _UINT8_(0x33)                                        /* (ESPI_IO_ESPI_VW_ERR) Register Mask  */


/** \brief ESPI_IO register offsets definitions */
#define ESPI_IO_IND_REG_OFST           _UINT32_(0x00)      /* (ESPI_IO_IND) The INDEX register, which is part of the Configuration Port, is used as a pointer to a Configuration Register Address. Offset */
#define ESPI_IO_DAT_REG_REG_OFST       _UINT32_(0x01)      /* (ESPI_IO_DAT_REG) The DATA register, which is part of the Configuration Port, is used to read or write data to the register currently being selected by the INDEX Register. Offset */
#define ESPI_IO_PC_LC_ADDR_LSW_REG_OFST _UINT32_(0x100)     /* (ESPI_IO_PC_LC_ADDR_LSW) Peripheral Channel Last Cycle Register (DWord 0) Offset */
#define ESPI_IO_PC_LC_ADDR_MSW_REG_OFST _UINT32_(0x104)     /* (ESPI_IO_PC_LC_ADDR_MSW) Peripheral Channel Last Cycle Register (DWord 1) Offset */
#define ESPI_IO_PC_LC_LEN_TYPE_TAG_REG_OFST _UINT32_(0x108)     /* (ESPI_IO_PC_LC_LEN_TYPE_TAG) Peripheral Channel Last Cycle Register (DWord 2) Offset */
#define ESPI_IO_PC_ERR_ADDR_LSW_REG_OFST _UINT32_(0x10C)     /* (ESPI_IO_PC_ERR_ADDR_LSW) Peripheral Channel Error Address Register (DWord 0) Offset */
#define ESPI_IO_PC_ERR_ADDR_MSW_REG_OFST _UINT32_(0x110)     /* (ESPI_IO_PC_ERR_ADDR_MSW) Peripheral Channel Error Address Register (DWord 1) Offset */
#define ESPI_IO_PC_STATUS_REG_OFST     _UINT32_(0x114)     /* (ESPI_IO_PC_STATUS) Peripheral Channel Status Register Offset */
#define ESPI_IO_PC_IEN_REG_OFST        _UINT32_(0x118)     /* (ESPI_IO_PC_IEN) Peripheral Channel Interrupt Enable Register Offset */
#define ESPI_IO_IOBAR_INH_LSW_REG_OFST _UINT32_(0x120)     /* (ESPI_IO_IOBAR_INH_LSW) BAR Inhibit Register (DWord 0) Offset */
#define ESPI_IO_IOBAR_INH_MSW_REG_OFST _UINT32_(0x124)     /* (ESPI_IO_IOBAR_INH_MSW) BAR Inhibit Register (DWord 1) Offset */
#define ESPI_IO_IOBAR_INIT_REG_OFST    _UINT32_(0x128)     /* (ESPI_IO_IOBAR_INIT) eSPI BAR Init Register Offset */
#define ESPI_IO_EC_CTRL_IRQ_REG_OFST   _UINT32_(0x12C)     /* (ESPI_IO_EC_CTRL_IRQ) EC IRQ Register Offset */
#define ESPI_IO_BASE_ADDR_REG_OFST     _UINT32_(0x134)     /* (ESPI_IO_BASE_ADDR) eSPI I/O Base Address Register Offset */
#define ESPI_IO_ESPI_MEM_BASE_ADDR_REG_OFST _UINT32_(0x138)     /* (ESPI_IO_ESPI_MEM_BASE_ADDR) eSPI Memory Base Address Register Offset */
#define ESPI_IO_MBX_BASE_ADDR_REG_OFST _UINT32_(0x13C)     /* (ESPI_IO_MBX_BASE_ADDR) Mailbox BAR  Register Offset */
#define ESPI_IO_EM8042_BASE_ADDR_REG_OFST _UINT32_(0x140)     /* (ESPI_IO_EM8042_BASE_ADDR) 8042 Emulated Keyboard Controller BAR Register Offset */
#define ESPI_IO_ACPI_EC_0_BASE_ADDR_REG_OFST _UINT32_(0x144)     /* (ESPI_IO_ACPI_EC_0_BASE_ADDR) ACPI EC Channel 0 Register Offset */
#define ESPI_IO_ACPI_EC_1_BASE_ADDR_REG_OFST _UINT32_(0x148)     /* (ESPI_IO_ACPI_EC_1_BASE_ADDR) ACPI EC Channel 1 BAR Register Offset */
#define ESPI_IO_ACPI_EC_2_BASE_ADDR_REG_OFST _UINT32_(0x14C)     /* (ESPI_IO_ACPI_EC_2_BASE_ADDR) I/O Base Address Register Offset */
#define ESPI_IO_ACPI_EC_3_BASE_ADDR_REG_OFST _UINT32_(0x150)     /* (ESPI_IO_ACPI_EC_3_BASE_ADDR) I/O Base Address Register Offset */
#define ESPI_IO_ACPI_PM1_BASE_ADDR_REG_OFST _UINT32_(0x158)     /* (ESPI_IO_ACPI_PM1_BASE_ADDR) I/O Base Address Register Offset */
#define ESPI_IO_FAST_KDB_BASE_ADDR_REG_OFST _UINT32_(0x15C)     /* (ESPI_IO_FAST_KDB_BASE_ADDR) I/O Base Address Register Offset */
#define ESPI_IO_UART_0_BASE_ADDR_REG_OFST _UINT32_(0x160)     /* (ESPI_IO_UART_0_BASE_ADDR) I/O Base Address Register Offset */
#define ESPI_IO_UART_1_BASE_ADDR_REG_OFST _UINT32_(0x164)     /* (ESPI_IO_UART_1_BASE_ADDR) I/O Base Address Register Offset */
#define ESPI_IO_EMI_0_BASE_ADDR_REG_OFST _UINT32_(0x168)     /* (ESPI_IO_EMI_0_BASE_ADDR) I/O Base Address Register Offset */
#define ESPI_IO_EMI_1_BASE_ADDR_REG_OFST _UINT32_(0x16C)     /* (ESPI_IO_EMI_1_BASE_ADDR) I/O Base Address Register Offset */
#define ESPI_IO_PORT80_0_BASE_ADDR_REG_OFST _UINT32_(0x174)     /* (ESPI_IO_PORT80_0_BASE_ADDR) I/O Base Address Register Offset */
#define ESPI_IO_PORT80_1_BASE_ADDR_REG_OFST _UINT32_(0x178)     /* (ESPI_IO_PORT80_1_BASE_ADDR) I/O Base Address Register Offset */
#define ESPI_IO_RTC_BASE_ADDR_REG_OFST _UINT32_(0x17C)     /* (ESPI_IO_RTC_BASE_ADDR) I/O Base Address Register Offset */
#define ESPI_IO_UART_2_BASE_ADDR_REG_OFST _UINT32_(0x188)     /* (ESPI_IO_UART_2_BASE_ADDR) I/O Base Address Register Offset */
#define ESPI_IO_GLUE_BASE_ADDR_REG_OFST _UINT32_(0x18C)     /* (ESPI_IO_GLUE_BASE_ADDR) I/O Base Address Register Offset */
#define ESPI_IO_LTR_STS_REG_OFST       _UINT32_(0x220)     /* (ESPI_IO_LTR_STS) LTR Peripheral Status Register Offset */
#define ESPI_IO_LTR_EN_REG_OFST        _UINT32_(0x224)     /* (ESPI_IO_LTR_EN) LTR Peripheral Enable Register Offset */
#define ESPI_IO_LTR_CTRL_REG_OFST      _UINT32_(0x228)     /* (ESPI_IO_LTR_CTRL) LTR Peripheral Control Register Offset */
#define ESPI_IO_LTR_MESG_REG_OFST      _UINT32_(0x22C)     /* (ESPI_IO_LTR_MESG) LTR Peripheral Message Register Offset */
#define ESPI_IO_OOB_RX_ADDR_LSW_REG_OFST _UINT32_(0x240)     /* (ESPI_IO_OOB_RX_ADDR_LSW) OOB Channel Receive Address Register Offset */
#define ESPI_IO_OOB_TX_ADDR_LSW_REG_OFST _UINT32_(0x248)     /* (ESPI_IO_OOB_TX_ADDR_LSW) OOB Channel Transmit Address Register Offset */
#define ESPI_IO_OOB_RX_LEN_REG_OFST    _UINT32_(0x250)     /* (ESPI_IO_OOB_RX_LEN) OOB Channel Receive Length Register Offset */
#define ESPI_IO_OOB_TX_LEN_REG_OFST    _UINT32_(0x254)     /* (ESPI_IO_OOB_TX_LEN) OOB Channel Transmit Length Register Offset */
#define ESPI_IO_OOB_RX_CTRL_REG_OFST   _UINT32_(0x258)     /* (ESPI_IO_OOB_RX_CTRL) OOB Channel Receive Control Register Offset */
#define ESPI_IO_OOB_RX_IEN_REG_OFST    _UINT32_(0x25C)     /* (ESPI_IO_OOB_RX_IEN) OOB Channel Receive Interrupt Enable Register Offset */
#define ESPI_IO_OOB_RX_STS_REG_OFST    _UINT32_(0x260)     /* (ESPI_IO_OOB_RX_STS) OOB Channel Receive Status Register Offset */
#define ESPI_IO_OOB_TX_CTRL_REG_OFST   _UINT32_(0x264)     /* (ESPI_IO_OOB_TX_CTRL) OOB Channel Transmit Control Register Offset */
#define ESPI_IO_OOB_TX_IEN_REG_OFST    _UINT32_(0x268)     /* (ESPI_IO_OOB_TX_IEN) OOB Channel Transmit Interrupt Enable Register Offset */
#define ESPI_IO_OOB_TX_STS_REG_OFST    _UINT32_(0x26C)     /* (ESPI_IO_OOB_TX_STS) OOB Channel Transmit Status Register Offset */
#define ESPI_IO_FC_FLASH_ADDR_LSW_REG_OFST _UINT32_(0x280)     /* (ESPI_IO_FC_FLASH_ADDR_LSW) Flash Access Channel Flash Address Register Offset */
#define ESPI_IO_FC_BUF_ADDR_LSW_REG_OFST _UINT32_(0x288)     /* (ESPI_IO_FC_BUF_ADDR_LSW) Flash Access Channel Buffer Address Register Offset */
#define ESPI_IO_FC_XFR_LEN_REG_OFST    _UINT32_(0x290)     /* (ESPI_IO_FC_XFR_LEN) Flash Access Channel Transfer Length Register Offset */
#define ESPI_IO_FC_CTRL_REG_OFST       _UINT32_(0x294)     /* (ESPI_IO_FC_CTRL) Flash Access Channel Control Register Offset */
#define ESPI_IO_FC_IEN_REG_OFST        _UINT32_(0x298)     /* (ESPI_IO_FC_IEN) Flash Access Channel Interrupt Enable Register Offset */
#define ESPI_IO_FC_CFG_REG_OFST        _UINT32_(0x29C)     /* (ESPI_IO_FC_CFG) Flash Access Channel Configuration Register Offset */
#define ESPI_IO_FC_STS_REG_OFST        _UINT32_(0x2A0)     /* (ESPI_IO_FC_STS) Flash Access Channel Status Register Offset */
#define ESPI_IO_VW_EN_STS_REG_OFST     _UINT32_(0x2B0)     /* (ESPI_IO_VW_EN_STS) Virtual Wire Status Register Offset */
#define ESPI_IO_CAP_ID_REG_OFST        _UINT32_(0x2E0)     /* (ESPI_IO_CAP_ID) eSPI Capabilities ID Register Offset */
#define ESPI_IO_GLB_CAP0_REG_OFST      _UINT32_(0x2E1)     /* (ESPI_IO_GLB_CAP0) eSPI Capabilities Global Capabilities 0 Register Offset */
#define ESPI_IO_GLB_CAP1_REG_OFST      _UINT32_(0x2E2)     /* (ESPI_IO_GLB_CAP1) eSPI Capabilities Global Capabilities 1 Register Offset */
#define ESPI_IO_PC_CAP_REG_OFST        _UINT32_(0x2E3)     /* (ESPI_IO_PC_CAP) eSPI Peripheral Channel Capabilities Register Offset */
#define ESPI_IO_VW_CAP_REG_OFST        _UINT32_(0x2E4)     /* (ESPI_IO_VW_CAP) eSPI Virtual Wire Channel Capabilities Register Offset */
#define ESPI_IO_OOB_CAP_REG_OFST       _UINT32_(0x2E5)     /* (ESPI_IO_OOB_CAP) eSPI OOB Channel Capabilities Register Offset */
#define ESPI_IO_FC_CAP_REG_OFST        _UINT32_(0x2E6)     /* (ESPI_IO_FC_CAP) eSPI Flash Channel Capabilities Register Offset */
#define ESPI_IO_PC_READY_REG_OFST      _UINT32_(0x2E7)     /* (ESPI_IO_PC_READY) eSPI Peripheral Channel Ready Register Offset */
#define ESPI_IO_OOB_READY_REG_OFST     _UINT32_(0x2E8)     /* (ESPI_IO_OOB_READY) eSPI OOB Channel Ready Register Offset */
#define ESPI_IO_FC_READY_REG_OFST      _UINT32_(0x2E9)     /* (ESPI_IO_FC_READY) eSPI Flash Channel Ready Register Offset */
#define ESPI_IO_RESET_STS_REG_OFST     _UINT32_(0x2EA)     /* (ESPI_IO_RESET_STS) eSPI Reset Interrupt Status Register Offset */
#define ESPI_IO_RESET_IEN_REG_OFST     _UINT32_(0x2EB)     /* (ESPI_IO_RESET_IEN) eSPI Reset Interrupt Enable Register Offset */
#define ESPI_IO_PLTRST_SRC_REG_OFST    _UINT32_(0x2EC)     /* (ESPI_IO_PLTRST_SRC) PLTRST Source Register Offset */
#define ESPI_IO_VW_READY_REG_OFST      _UINT32_(0x2ED)     /* (ESPI_IO_VW_READY) eSPI Virtual Wire Channel Ready Register Offset */
#define ESPI_IO_ACTIVATE_REG_OFST      _UINT32_(0x330)     /* (ESPI_IO_ACTIVATE) eSPI Activate Register Offset */
#define ESPI_IO_ADDR_REG_OFST          _UINT32_(0x334)     /* (ESPI_IO_ADDR) eSPI I/O Base Address Configuration Register Offset */
#define ESPI_IO_ESPI_MEM_ADDR_REG_OFST _UINT32_(0x338)     /* (ESPI_IO_ESPI_MEM_ADDR) eSPI Memory Base Address Configuration Register Offset */
#define ESPI_IO_MBX_ADDR_REG_OFST      _UINT32_(0x33C)     /* (ESPI_IO_MBX_ADDR) Mailbox Base Address Configuration Register Offset */
#define ESPI_IO_EM8042_ADDR_REG_OFST   _UINT32_(0x340)     /* (ESPI_IO_EM8042_ADDR) 8042 Emulated Keyboard Controller Base Address Configuration Register Offset */
#define ESPI_IO_ACPI_EC0_ADDR_REG_OFST _UINT32_(0x344)     /* (ESPI_IO_ACPI_EC0_ADDR) ACPI EC 0 Base Address Configuration Register Offset */
#define ESPI_IO_ACPI_EC1_ADDR_REG_OFST _UINT32_(0x348)     /* (ESPI_IO_ACPI_EC1_ADDR) ACPI EC 1 Base Address Configuration Register Offset */
#define ESPI_IO_ACPI_EC2_ADDR_REG_OFST _UINT32_(0x34C)     /* (ESPI_IO_ACPI_EC2_ADDR) ACPI EC 2 Base Address Configuration Register Offset */
#define ESPI_IO_ACPI_EC3_ADDR_REG_OFST _UINT32_(0x350)     /* (ESPI_IO_ACPI_EC3_ADDR) ACPI EC 3 Base Address Configuration Register Offset */
#define ESPI_IO_ACPI_PM1_ADDR_REG_OFST _UINT32_(0x358)     /* (ESPI_IO_ACPI_PM1_ADDR) ACPI PM1 Base Address Configuration Register Offset */
#define ESPI_IO_FAST_KBD_ADDR_REG_OFST _UINT32_(0x35C)     /* (ESPI_IO_FAST_KBD_ADDR) I/O Base Address Configuration Register Offset */
#define ESPI_IO_UART0_ADDR_REG_OFST    _UINT32_(0x360)     /* (ESPI_IO_UART0_ADDR) UART 0 Base Address Configuration Register Offset */
#define ESPI_IO_UART1_ADDR_REG_OFST    _UINT32_(0x364)     /* (ESPI_IO_UART1_ADDR) UART 1 Base Address Configuration Register Offset */
#define ESPI_IO_EMI0_ADDR_REG_OFST     _UINT32_(0x368)     /* (ESPI_IO_EMI0_ADDR) Embedded Memory Interface (EMI) 2 BAR Config Register Offset */
#define ESPI_IO_EMI1_ADDR_REG_OFST     _UINT32_(0x36C)     /* (ESPI_IO_EMI1_ADDR) Embedded Memory Interface (EMI) 1 BAR Config Register Offset */
#define ESPI_IO_PORT80_0_ADDR_REG_OFST _UINT32_(0x374)     /* (ESPI_IO_PORT80_0_ADDR) BIOS Debug Port (Port 80) 0 BAR Config Register Offset */
#define ESPI_IO_PORT80_1_ADDR_REG_OFST _UINT32_(0x378)     /* (ESPI_IO_PORT80_1_ADDR) BIOS Debug Port (Port 80) 1 BAR Config Register Offset */
#define ESPI_IO_RTC_ADDR_REG_OFST      _UINT32_(0x37C)     /* (ESPI_IO_RTC_ADDR) RTC BAR Config Register Offset */
#define ESPI_IO_UART2_ADDR_REG_OFST    _UINT32_(0x384)     /* (ESPI_IO_UART2_ADDR) UART 2 Base Address Configuration Register Offset */
#define ESPI_IO_GLUE_ADDR_REG_OFST     _UINT32_(0x38C)     /* (ESPI_IO_GLUE_ADDR) GLUE Base Address Configuration Register Offset */
#define ESPI_IO_MBX_HOST_SIRQ_IRQ_REG_OFST _UINT32_(0x3AC)     /* (ESPI_IO_MBX_HOST_SIRQ_IRQ) Mailbox (MBX_Host_SIRQ Interrupt) Selection Register Offset */
#define ESPI_IO_MBX_HOST_SMI_IRQ_REG_OFST _UINT32_(0x3AD)     /* (ESPI_IO_MBX_HOST_SMI_IRQ) Mailbox (MBX_Host_SMI Interrupt) Selection Register Offset */
#define ESPI_IO_KIRQ_8042_IRQ_REG_OFST _UINT32_(0x3AE)     /* (ESPI_IO_KIRQ_8042_IRQ) 8042 (KIRQ Interrupt) Selection Register Offset */
#define ESPI_IO_MIRQ_8042_IRQ_REG_OFST _UINT32_(0x3AF)     /* (ESPI_IO_MIRQ_8042_IRQ) 8042 (MIRQ Interrupt) Selection Register Offset */
#define ESPI_IO_ACPI_EC0_OBF_IRQ_REG_OFST _UINT32_(0x3B0)     /* (ESPI_IO_ACPI_EC0_OBF_IRQ) ACPI EC 0 (EC_OBF Interrupt) Selection Register Offset */
#define ESPI_IO_ACPI_EC1_OBF_IRQ_REG_OFST _UINT32_(0x3B1)     /* (ESPI_IO_ACPI_EC1_OBF_IRQ) ACPI EC 1 (EC_OBF Interrupt) Selection Register Offset */
#define ESPI_IO_ACPI_EC2_OBF_IRQ_REG_OFST _UINT32_(0x3B2)     /* (ESPI_IO_ACPI_EC2_OBF_IRQ) ACPI EC 2 (EC_OBF Interrupt) Selection Register Offset */
#define ESPI_IO_ACPI_EC3_OBF_IRQ_REG_OFST _UINT32_(0x3B3)     /* (ESPI_IO_ACPI_EC3_OBF_IRQ) ACPI EC 3 (EC_OBF Interrupt) Selection Register Offset */
#define ESPI_IO_UART0_IRQ_REG_OFST     _UINT32_(0x3B5)     /* (ESPI_IO_UART0_IRQ) UART 0 (UART Interrupt) Selection Register Offset */
#define ESPI_IO_UART1_IRQ_REG_OFST     _UINT32_(0x3B6)     /* (ESPI_IO_UART1_IRQ) UART 1 (UART Interrupt) Selection Register Offset */
#define ESPI_IO_EMI0_HOST_IRQ_REG_OFST _UINT32_(0x3B7)     /* (ESPI_IO_EMI0_HOST_IRQ) EMI 0 (Host Event Interrupt) Selection Register Offset */
#define ESPI_IO_EMI0_EC_HOST_IRQ_REG_OFST _UINT32_(0x3B8)     /* (ESPI_IO_EMI0_EC_HOST_IRQ) EMI 0 (EC-to-Host Interrupt) Selection Register Offset */
#define ESPI_IO_EMI1_HOST_IRQ_REG_OFST _UINT32_(0x3B9)     /* (ESPI_IO_EMI1_HOST_IRQ) EMI 1 (Host Event Interrupt) Selection Register Offset */
#define ESPI_IO_EMI1_EC_HOST_IRQ_REG_OFST _UINT32_(0x3BA)     /* (ESPI_IO_EMI1_EC_HOST_IRQ) EMI 1 (EC-to-Host Interrupt) Selection Register Offset */
#define ESPI_IO_RTC_IRQ_REG_OFST       _UINT32_(0x3BD)     /* (ESPI_IO_RTC_IRQ) RTC (RTC Interrupt) Selection Register Offset */
#define ESPI_IO_EC_IRQ_REG_OFST        _UINT32_(0x3BE)     /* (ESPI_IO_EC_IRQ) EC (EC_IRQ Interrupt) Selection Register Offset */
#define ESPI_IO_UART2_IRQ_REG_OFST     _UINT32_(0x3BF)     /* (ESPI_IO_UART2_IRQ) UART 2 (UART Interrupt) Selection Register Offset */
#define ESPI_IO_ESPI_VW_ERR_REG_OFST   _UINT32_(0x3F0)     /* (ESPI_IO_ESPI_VW_ERR) eSPI Virtual Wire Errors Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief ESPI_IO register API structure */
typedef struct
{  /* The ESPI is used by the system host to configure the chip and communicate with the logical devices implemented in the design */
  __IO  uint8_t                        ESPI_IO_IND;        /**< Offset: 0x00 (R/W  8) The INDEX register, which is part of the Configuration Port, is used as a pointer to a Configuration Register Address. */
  __IO  uint8_t                        ESPI_IO_DAT_REG;    /**< Offset: 0x01 (R/W  8) The DATA register, which is part of the Configuration Port, is used to read or write data to the register currently being selected by the INDEX Register. */
  __I   uint8_t                        Reserved1[0xFE];
  __I   uint32_t                       ESPI_IO_PC_LC_ADDR_LSW; /**< Offset: 0x100 (R/   32) Peripheral Channel Last Cycle Register (DWord 0) */
  __I   uint32_t                       ESPI_IO_PC_LC_ADDR_MSW; /**< Offset: 0x104 (R/   32) Peripheral Channel Last Cycle Register (DWord 1) */
  __I   uint32_t                       ESPI_IO_PC_LC_LEN_TYPE_TAG; /**< Offset: 0x108 (R/   32) Peripheral Channel Last Cycle Register (DWord 2) */
  __I   uint32_t                       ESPI_IO_PC_ERR_ADDR_LSW; /**< Offset: 0x10C (R/   32) Peripheral Channel Error Address Register (DWord 0) */
  __I   uint32_t                       ESPI_IO_PC_ERR_ADDR_MSW; /**< Offset: 0x110 (R/   32) Peripheral Channel Error Address Register (DWord 1) */
  __IO  uint32_t                       ESPI_IO_PC_STATUS;  /**< Offset: 0x114 (R/W  32) Peripheral Channel Status Register */
  __IO  uint32_t                       ESPI_IO_PC_IEN;     /**< Offset: 0x118 (R/W  32) Peripheral Channel Interrupt Enable Register */
  __I   uint8_t                        Reserved2[0x04];
  __IO  uint32_t                       ESPI_IO_IOBAR_INH_LSW; /**< Offset: 0x120 (R/W  32) BAR Inhibit Register (DWord 0) */
  __IO  uint32_t                       ESPI_IO_IOBAR_INH_MSW; /**< Offset: 0x124 (R/W  32) BAR Inhibit Register (DWord 1) */
  __IO  uint32_t                       ESPI_IO_IOBAR_INIT; /**< Offset: 0x128 (R/W  32) eSPI BAR Init Register */
  __IO  uint32_t                       ESPI_IO_EC_CTRL_IRQ; /**< Offset: 0x12C (R/W  32) EC IRQ Register */
  __I   uint8_t                        Reserved3[0x04];
  __IO  uint32_t                       ESPI_IO_BASE_ADDR;  /**< Offset: 0x134 (R/W  32) eSPI I/O Base Address Register */
  __IO  uint32_t                       ESPI_IO_ESPI_MEM_BASE_ADDR; /**< Offset: 0x138 (R/W  32) eSPI Memory Base Address Register */
  __IO  uint32_t                       ESPI_IO_MBX_BASE_ADDR; /**< Offset: 0x13C (R/W  32) Mailbox BAR  Register */
  __IO  uint32_t                       ESPI_IO_EM8042_BASE_ADDR; /**< Offset: 0x140 (R/W  32) 8042 Emulated Keyboard Controller BAR Register */
  __IO  uint32_t                       ESPI_IO_ACPI_EC_0_BASE_ADDR; /**< Offset: 0x144 (R/W  32) ACPI EC Channel 0 Register */
  __IO  uint32_t                       ESPI_IO_ACPI_EC_1_BASE_ADDR; /**< Offset: 0x148 (R/W  32) ACPI EC Channel 1 BAR Register */
  __IO  uint32_t                       ESPI_IO_ACPI_EC_2_BASE_ADDR; /**< Offset: 0x14C (R/W  32) I/O Base Address Register */
  __IO  uint32_t                       ESPI_IO_ACPI_EC_3_BASE_ADDR; /**< Offset: 0x150 (R/W  32) I/O Base Address Register */
  __I   uint8_t                        Reserved4[0x04];
  __IO  uint32_t                       ESPI_IO_ACPI_PM1_BASE_ADDR; /**< Offset: 0x158 (R/W  32) I/O Base Address Register */
  __IO  uint32_t                       ESPI_IO_FAST_KDB_BASE_ADDR; /**< Offset: 0x15C (R/W  32) I/O Base Address Register */
  __IO  uint32_t                       ESPI_IO_UART_0_BASE_ADDR; /**< Offset: 0x160 (R/W  32) I/O Base Address Register */
  __IO  uint32_t                       ESPI_IO_UART_1_BASE_ADDR; /**< Offset: 0x164 (R/W  32) I/O Base Address Register */
  __IO  uint32_t                       ESPI_IO_EMI_0_BASE_ADDR; /**< Offset: 0x168 (R/W  32) I/O Base Address Register */
  __IO  uint32_t                       ESPI_IO_EMI_1_BASE_ADDR; /**< Offset: 0x16C (R/W  32) I/O Base Address Register */
  __I   uint8_t                        Reserved5[0x04];
  __IO  uint32_t                       ESPI_IO_PORT80_0_BASE_ADDR; /**< Offset: 0x174 (R/W  32) I/O Base Address Register */
  __IO  uint32_t                       ESPI_IO_PORT80_1_BASE_ADDR; /**< Offset: 0x178 (R/W  32) I/O Base Address Register */
  __IO  uint32_t                       ESPI_IO_RTC_BASE_ADDR; /**< Offset: 0x17C (R/W  32) I/O Base Address Register */
  __I   uint8_t                        Reserved6[0x08];
  __IO  uint32_t                       ESPI_IO_UART_2_BASE_ADDR; /**< Offset: 0x188 (R/W  32) I/O Base Address Register */
  __IO  uint32_t                       ESPI_IO_GLUE_BASE_ADDR; /**< Offset: 0x18C (R/W  32) I/O Base Address Register */
  __I   uint8_t                        Reserved7[0x90];
  __IO  uint32_t                       ESPI_IO_LTR_STS;    /**< Offset: 0x220 (R/W  32) LTR Peripheral Status Register */
  __IO  uint32_t                       ESPI_IO_LTR_EN;     /**< Offset: 0x224 (R/W  32) LTR Peripheral Enable Register */
  __IO  uint32_t                       ESPI_IO_LTR_CTRL;   /**< Offset: 0x228 (R/W  32) LTR Peripheral Control Register */
  __IO  uint32_t                       ESPI_IO_LTR_MESG;   /**< Offset: 0x22C (R/W  32) LTR Peripheral Message Register */
  __I   uint8_t                        Reserved8[0x10];
  __IO  uint32_t                       ESPI_IO_OOB_RX_ADDR_LSW; /**< Offset: 0x240 (R/W  32) OOB Channel Receive Address Register */
  __I   uint8_t                        Reserved9[0x04];
  __IO  uint32_t                       ESPI_IO_OOB_TX_ADDR_LSW; /**< Offset: 0x248 (R/W  32) OOB Channel Transmit Address Register */
  __I   uint8_t                        Reserved10[0x04];
  __IO  uint32_t                       ESPI_IO_OOB_RX_LEN; /**< Offset: 0x250 (R/W  32) OOB Channel Receive Length Register */
  __IO  uint32_t                       ESPI_IO_OOB_TX_LEN; /**< Offset: 0x254 (R/W  32) OOB Channel Transmit Length Register */
  __IO  uint32_t                       ESPI_IO_OOB_RX_CTRL; /**< Offset: 0x258 (R/W  32) OOB Channel Receive Control Register */
  __IO  uint32_t                       ESPI_IO_OOB_RX_IEN; /**< Offset: 0x25C (R/W  32) OOB Channel Receive Interrupt Enable Register */
  __IO  uint32_t                       ESPI_IO_OOB_RX_STS; /**< Offset: 0x260 (R/W  32) OOB Channel Receive Status Register */
  __IO  uint32_t                       ESPI_IO_OOB_TX_CTRL; /**< Offset: 0x264 (R/W  32) OOB Channel Transmit Control Register */
  __IO  uint32_t                       ESPI_IO_OOB_TX_IEN; /**< Offset: 0x268 (R/W  32) OOB Channel Transmit Interrupt Enable Register */
  __IO  uint32_t                       ESPI_IO_OOB_TX_STS; /**< Offset: 0x26C (R/W  32) OOB Channel Transmit Status Register */
  __I   uint8_t                        Reserved11[0x10];
  __IO  uint32_t                       ESPI_IO_FC_FLASH_ADDR_LSW; /**< Offset: 0x280 (R/W  32) Flash Access Channel Flash Address Register */
  __I   uint8_t                        Reserved12[0x04];
  __IO  uint32_t                       ESPI_IO_FC_BUF_ADDR_LSW; /**< Offset: 0x288 (R/W  32) Flash Access Channel Buffer Address Register */
  __I   uint8_t                        Reserved13[0x04];
  __IO  uint32_t                       ESPI_IO_FC_XFR_LEN; /**< Offset: 0x290 (R/W  32) Flash Access Channel Transfer Length Register */
  __IO  uint32_t                       ESPI_IO_FC_CTRL;    /**< Offset: 0x294 (R/W  32) Flash Access Channel Control Register */
  __IO  uint32_t                       ESPI_IO_FC_IEN;     /**< Offset: 0x298 (R/W  32) Flash Access Channel Interrupt Enable Register */
  __I   uint32_t                       ESPI_IO_FC_CFG;     /**< Offset: 0x29C (R/   32) Flash Access Channel Configuration Register */
  __IO  uint32_t                       ESPI_IO_FC_STS;     /**< Offset: 0x2A0 (R/W  32) Flash Access Channel Status Register */
  __I   uint8_t                        Reserved14[0x0C];
  __I   uint8_t                        ESPI_IO_VW_EN_STS;  /**< Offset: 0x2B0 (R/   8) Virtual Wire Status Register */
  __I   uint8_t                        Reserved15[0x2F];
  __IO  uint8_t                        ESPI_IO_CAP_ID;     /**< Offset: 0x2E0 (R/W  8) eSPI Capabilities ID Register */
  __IO  uint8_t                        ESPI_IO_GLB_CAP0;   /**< Offset: 0x2E1 (R/W  8) eSPI Capabilities Global Capabilities 0 Register */
  __IO  uint8_t                        ESPI_IO_GLB_CAP1;   /**< Offset: 0x2E2 (R/W  8) eSPI Capabilities Global Capabilities 1 Register */
  __IO  uint8_t                        ESPI_IO_PC_CAP;     /**< Offset: 0x2E3 (R/W  8) eSPI Peripheral Channel Capabilities Register */
  __IO  uint8_t                        ESPI_IO_VW_CAP;     /**< Offset: 0x2E4 (R/W  8) eSPI Virtual Wire Channel Capabilities Register */
  __IO  uint8_t                        ESPI_IO_OOB_CAP;    /**< Offset: 0x2E5 (R/W  8) eSPI OOB Channel Capabilities Register */
  __IO  uint8_t                        ESPI_IO_FC_CAP;     /**< Offset: 0x2E6 (R/W  8) eSPI Flash Channel Capabilities Register */
  __IO  uint8_t                        ESPI_IO_PC_READY;   /**< Offset: 0x2E7 (R/W  8) eSPI Peripheral Channel Ready Register */
  __IO  uint8_t                        ESPI_IO_OOB_READY;  /**< Offset: 0x2E8 (R/W  8) eSPI OOB Channel Ready Register */
  __IO  uint8_t                        ESPI_IO_FC_READY;   /**< Offset: 0x2E9 (R/W  8) eSPI Flash Channel Ready Register */
  __IO  uint8_t                        ESPI_IO_RESET_STS;  /**< Offset: 0x2EA (R/W  8) eSPI Reset Interrupt Status Register */
  __IO  uint8_t                        ESPI_IO_RESET_IEN;  /**< Offset: 0x2EB (R/W  8) eSPI Reset Interrupt Enable Register */
  __IO  uint8_t                        ESPI_IO_PLTRST_SRC; /**< Offset: 0x2EC (R/W  8) PLTRST Source Register */
  __IO  uint8_t                        ESPI_IO_VW_READY;   /**< Offset: 0x2ED (R/W  8) eSPI Virtual Wire Channel Ready Register */
  __I   uint8_t                        Reserved16[0x42];
  __IO  uint8_t                        ESPI_IO_ACTIVATE;   /**< Offset: 0x330 (R/W  8) eSPI Activate Register */
  __I   uint8_t                        Reserved17[0x03];
  __IO  uint32_t                       ESPI_IO_ADDR;       /**< Offset: 0x334 (R/W  32) eSPI I/O Base Address Configuration Register */
  __IO  uint32_t                       ESPI_IO_ESPI_MEM_ADDR; /**< Offset: 0x338 (R/W  32) eSPI Memory Base Address Configuration Register */
  __IO  uint32_t                       ESPI_IO_MBX_ADDR;   /**< Offset: 0x33C (R/W  32) Mailbox Base Address Configuration Register */
  __IO  uint32_t                       ESPI_IO_EM8042_ADDR; /**< Offset: 0x340 (R/W  32) 8042 Emulated Keyboard Controller Base Address Configuration Register */
  __IO  uint32_t                       ESPI_IO_ACPI_EC0_ADDR; /**< Offset: 0x344 (R/W  32) ACPI EC 0 Base Address Configuration Register */
  __IO  uint32_t                       ESPI_IO_ACPI_EC1_ADDR; /**< Offset: 0x348 (R/W  32) ACPI EC 1 Base Address Configuration Register */
  __IO  uint32_t                       ESPI_IO_ACPI_EC2_ADDR; /**< Offset: 0x34C (R/W  32) ACPI EC 2 Base Address Configuration Register */
  __IO  uint32_t                       ESPI_IO_ACPI_EC3_ADDR; /**< Offset: 0x350 (R/W  32) ACPI EC 3 Base Address Configuration Register */
  __I   uint8_t                        Reserved18[0x04];
  __IO  uint32_t                       ESPI_IO_ACPI_PM1_ADDR; /**< Offset: 0x358 (R/W  32) ACPI PM1 Base Address Configuration Register */
  __IO  uint32_t                       ESPI_IO_FAST_KBD_ADDR; /**< Offset: 0x35C (R/W  32) I/O Base Address Configuration Register */
  __IO  uint32_t                       ESPI_IO_UART0_ADDR; /**< Offset: 0x360 (R/W  32) UART 0 Base Address Configuration Register */
  __IO  uint32_t                       ESPI_IO_UART1_ADDR; /**< Offset: 0x364 (R/W  32) UART 1 Base Address Configuration Register */
  __IO  uint32_t                       ESPI_IO_EMI0_ADDR;  /**< Offset: 0x368 (R/W  32) Embedded Memory Interface (EMI) 2 BAR Config Register */
  __IO  uint32_t                       ESPI_IO_EMI1_ADDR;  /**< Offset: 0x36C (R/W  32) Embedded Memory Interface (EMI) 1 BAR Config Register */
  __I   uint8_t                        Reserved19[0x04];
  __IO  uint32_t                       ESPI_IO_PORT80_0_ADDR; /**< Offset: 0x374 (R/W  32) BIOS Debug Port (Port 80) 0 BAR Config Register */
  __IO  uint32_t                       ESPI_IO_PORT80_1_ADDR; /**< Offset: 0x378 (R/W  32) BIOS Debug Port (Port 80) 1 BAR Config Register */
  __IO  uint32_t                       ESPI_IO_RTC_ADDR;   /**< Offset: 0x37C (R/W  32) RTC BAR Config Register */
  __I   uint8_t                        Reserved20[0x04];
  __IO  uint32_t                       ESPI_IO_UART2_ADDR; /**< Offset: 0x384 (R/W  32) UART 2 Base Address Configuration Register */
  __I   uint8_t                        Reserved21[0x04];
  __IO  uint32_t                       ESPI_IO_GLUE_ADDR;  /**< Offset: 0x38C (R/W  32) GLUE Base Address Configuration Register */
  __I   uint8_t                        Reserved22[0x1C];
  __IO  uint8_t                        ESPI_IO_MBX_HOST_SIRQ_IRQ; /**< Offset: 0x3AC (R/W  8) Mailbox (MBX_Host_SIRQ Interrupt) Selection Register */
  __IO  uint8_t                        ESPI_IO_MBX_HOST_SMI_IRQ; /**< Offset: 0x3AD (R/W  8) Mailbox (MBX_Host_SMI Interrupt) Selection Register */
  __IO  uint8_t                        ESPI_IO_KIRQ_8042_IRQ; /**< Offset: 0x3AE (R/W  8) 8042 (KIRQ Interrupt) Selection Register */
  __IO  uint8_t                        ESPI_IO_MIRQ_8042_IRQ; /**< Offset: 0x3AF (R/W  8) 8042 (MIRQ Interrupt) Selection Register */
  __IO  uint8_t                        ESPI_IO_ACPI_EC0_OBF_IRQ; /**< Offset: 0x3B0 (R/W  8) ACPI EC 0 (EC_OBF Interrupt) Selection Register */
  __IO  uint8_t                        ESPI_IO_ACPI_EC1_OBF_IRQ; /**< Offset: 0x3B1 (R/W  8) ACPI EC 1 (EC_OBF Interrupt) Selection Register */
  __IO  uint8_t                        ESPI_IO_ACPI_EC2_OBF_IRQ; /**< Offset: 0x3B2 (R/W  8) ACPI EC 2 (EC_OBF Interrupt) Selection Register */
  __IO  uint8_t                        ESPI_IO_ACPI_EC3_OBF_IRQ; /**< Offset: 0x3B3 (R/W  8) ACPI EC 3 (EC_OBF Interrupt) Selection Register */
  __I   uint8_t                        Reserved23[0x01];
  __IO  uint8_t                        ESPI_IO_UART0_IRQ;  /**< Offset: 0x3B5 (R/W  8) UART 0 (UART Interrupt) Selection Register */
  __IO  uint8_t                        ESPI_IO_UART1_IRQ;  /**< Offset: 0x3B6 (R/W  8) UART 1 (UART Interrupt) Selection Register */
  __IO  uint8_t                        ESPI_IO_EMI0_HOST_IRQ; /**< Offset: 0x3B7 (R/W  8) EMI 0 (Host Event Interrupt) Selection Register */
  __IO  uint8_t                        ESPI_IO_EMI0_EC_HOST_IRQ; /**< Offset: 0x3B8 (R/W  8) EMI 0 (EC-to-Host Interrupt) Selection Register */
  __IO  uint8_t                        ESPI_IO_EMI1_HOST_IRQ; /**< Offset: 0x3B9 (R/W  8) EMI 1 (Host Event Interrupt) Selection Register */
  __IO  uint8_t                        ESPI_IO_EMI1_EC_HOST_IRQ; /**< Offset: 0x3BA (R/W  8) EMI 1 (EC-to-Host Interrupt) Selection Register */
  __I   uint8_t                        Reserved24[0x02];
  __IO  uint8_t                        ESPI_IO_RTC_IRQ;    /**< Offset: 0x3BD (R/W  8) RTC (RTC Interrupt) Selection Register */
  __IO  uint8_t                        ESPI_IO_EC_IRQ;     /**< Offset: 0x3BE (R/W  8) EC (EC_IRQ Interrupt) Selection Register */
  __IO  uint8_t                        ESPI_IO_UART2_IRQ;  /**< Offset: 0x3BF (R/W  8) UART 2 (UART Interrupt) Selection Register */
  __I   uint8_t                        Reserved25[0x30];
  __IO  uint8_t                        ESPI_IO_ESPI_VW_ERR; /**< Offset: 0x3F0 (R/W  8) eSPI Virtual Wire Errors Register */
} espi_io_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _0525SG12_ESPI_IO_COMPONENT_H_ */
