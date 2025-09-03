/*
 * Component description for KBC
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
#ifndef _0525SG12_KBC_COMPONENT_H_
#define _0525SG12_KBC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR KBC                                          */
/* ************************************************************************** */

/* -------- KBC_HOST_DATA : (KBC Offset: 0x00) ( R/ 8) READ_DATA. This 8-bit register is read-only. When read by the Host, the PCOBF and/or AUXOBF interrupts are cleared and the\n     OBF flag in the status register is cleared. -------- */
#define KBC_HOST_DATA_RESETVALUE              _UINT8_(0x00)                                        /*  (KBC_HOST_DATA) READ_DATA. This 8-bit register is read-only. When read by the Host, the PCOBF and/or AUXOBF interrupts are cleared and the\n     OBF flag in the status register is cleared.  Reset Value */

#define KBC_HOST_DATA_Msk                     _UINT8_(0x00)                                        /* (KBC_HOST_DATA) Register Mask  */


/* -------- KBC_HOST_EC_DATA : (KBC Offset: 0x00) ( /W 8) WRITE_DATA. This 8-bit register is write-only. When written, the C/D bit in the Keyboard Status Read Register is cleared\n     to '0', signifying data, and the IBF in the same register is set to '1'. When the Runtime Register at offset 0h is read by the Host,\n     it functions as the EC_HOST Data / AUX Data Register. -------- */
#define KBC_HOST_EC_DATA_RESETVALUE           _UINT8_(0x00)                                        /*  (KBC_HOST_EC_DATA) WRITE_DATA. This 8-bit register is write-only. When written, the C/D bit in the Keyboard Status Read Register is cleared\n     to '0', signifying data, and the IBF in the same register is set to '1'. When the Runtime Register at offset 0h is read by the Host,\n     it functions as the EC_HOST Data / AUX Data Register.  Reset Value */

#define KBC_HOST_EC_DATA_Msk                  _UINT8_(0x00)                                        /* (KBC_HOST_EC_DATA) Register Mask  */


/* -------- KBC_HOST_WC : (KBC Offset: 0x04) ( /W 8) WRITE_CMD. This 8-bit register is write-only and is an alias of the register at offset 0h. When written, the C/D bit in the\n     Keyboard Status Read Register is set to '1', signifying a command, and the IBF in the same register is set to '1'. When the Runtime\n     Register at offset 4h is read by the Host, it functions as the Keyboard Status Read Register. -------- */
#define KBC_HOST_WC_RESETVALUE                _UINT8_(0x00)                                        /*  (KBC_HOST_WC) WRITE_CMD. This 8-bit register is write-only and is an alias of the register at offset 0h. When written, the C/D bit in the\n     Keyboard Status Read Register is set to '1', signifying a command, and the IBF in the same register is set to '1'. When the Runtime\n     Register at offset 4h is read by the Host, it functions as the Keyboard Status Read Register.  Reset Value */

#define KBC_HOST_WC_Msk                       _UINT8_(0x00)                                        /* (KBC_HOST_WC) Register Mask  */


/* -------- KBC_HOST_RS : (KBC Offset: 0x04) ( R/ 8) Keyboard Status Read Register. This register is a read-only alias of the EC Keyboard Status Register. -------- */
#define KBC_HOST_RS_RESETVALUE                _UINT8_(0x00)                                        /*  (KBC_HOST_RS) Keyboard Status Read Register. This register is a read-only alias of the EC Keyboard Status Register.  Reset Value */

#define KBC_HOST_RS_OBF_Pos                   _UINT8_(0)                                           /* (KBC_HOST_RS) Output Buffer Full. Position */
#define KBC_HOST_RS_OBF_Msk                   (_UINT8_(0x1) << KBC_HOST_RS_OBF_Pos)                /* (KBC_HOST_RS) Output Buffer Full. Mask */
#define KBC_HOST_RS_OBF(value)                (KBC_HOST_RS_OBF_Msk & (_UINT8_(value) << KBC_HOST_RS_OBF_Pos)) /* Assigment of value for OBF in the KBC_HOST_RS register */
#define KBC_HOST_RS_IBF_Pos                   _UINT8_(1)                                           /* (KBC_HOST_RS) Input Buffer Full. Position */
#define KBC_HOST_RS_IBF_Msk                   (_UINT8_(0x1) << KBC_HOST_RS_IBF_Pos)                /* (KBC_HOST_RS) Input Buffer Full. Mask */
#define KBC_HOST_RS_IBF(value)                (KBC_HOST_RS_IBF_Msk & (_UINT8_(value) << KBC_HOST_RS_IBF_Pos)) /* Assigment of value for IBF in the KBC_HOST_RS register */
#define KBC_HOST_RS_UD0_Pos                   _UINT8_(2)                                           /* (KBC_HOST_RS) User-defined data. Position */
#define KBC_HOST_RS_UD0_Msk                   (_UINT8_(0x1) << KBC_HOST_RS_UD0_Pos)                /* (KBC_HOST_RS) User-defined data. Mask */
#define KBC_HOST_RS_UD0(value)                (KBC_HOST_RS_UD0_Msk & (_UINT8_(value) << KBC_HOST_RS_UD0_Pos)) /* Assigment of value for UD0 in the KBC_HOST_RS register */
#define KBC_HOST_RS_CMD_DAT_Pos               _UINT8_(3)                                           /* (KBC_HOST_RS) Command Data. This bit specifies whether the input data register contains data or a command ('0' = data, '1' = command). Position */
#define KBC_HOST_RS_CMD_DAT_Msk               (_UINT8_(0x1) << KBC_HOST_RS_CMD_DAT_Pos)            /* (KBC_HOST_RS) Command Data. This bit specifies whether the input data register contains data or a command ('0' = data, '1' = command). Mask */
#define KBC_HOST_RS_CMD_DAT(value)            (KBC_HOST_RS_CMD_DAT_Msk & (_UINT8_(value) << KBC_HOST_RS_CMD_DAT_Pos)) /* Assigment of value for CMD_DAT in the KBC_HOST_RS register */
#define KBC_HOST_RS_UD1_Pos                   _UINT8_(4)                                           /* (KBC_HOST_RS) User-defined data. Position */
#define KBC_HOST_RS_UD1_Msk                   (_UINT8_(0x1) << KBC_HOST_RS_UD1_Pos)                /* (KBC_HOST_RS) User-defined data. Mask */
#define KBC_HOST_RS_UD1(value)                (KBC_HOST_RS_UD1_Msk & (_UINT8_(value) << KBC_HOST_RS_UD1_Pos)) /* Assigment of value for UD1 in the KBC_HOST_RS register */
#define KBC_HOST_RS_AUXOBF_Pos                _UINT8_(5)                                           /* (KBC_HOST_RS) Auxiliary Output Buffer Full. Position */
#define KBC_HOST_RS_AUXOBF_Msk                (_UINT8_(0x1) << KBC_HOST_RS_AUXOBF_Pos)             /* (KBC_HOST_RS) Auxiliary Output Buffer Full. Mask */
#define KBC_HOST_RS_AUXOBF(value)             (KBC_HOST_RS_AUXOBF_Msk & (_UINT8_(value) << KBC_HOST_RS_AUXOBF_Pos)) /* Assigment of value for AUXOBF in the KBC_HOST_RS register */
#define KBC_HOST_RS_UD2_Pos                   _UINT8_(6)                                           /* (KBC_HOST_RS) User-defined data. Position */
#define KBC_HOST_RS_UD2_Msk                   (_UINT8_(0x3) << KBC_HOST_RS_UD2_Pos)                /* (KBC_HOST_RS) User-defined data. Mask */
#define KBC_HOST_RS_UD2(value)                (KBC_HOST_RS_UD2_Msk & (_UINT8_(value) << KBC_HOST_RS_UD2_Pos)) /* Assigment of value for UD2 in the KBC_HOST_RS register */
#define KBC_HOST_RS_Msk                       _UINT8_(0xFF)                                        /* (KBC_HOST_RS) Register Mask  */


/* -------- KBC_H2EC_DATA : (KBC Offset: 0x100) ( R/ 8) Host_EC Data/Cmd Register  This register is an alias of the HOST_EC Data / CMD Register. When read at the EC-Only offset\n     of 0h, it returns the data written by the Host to either Runtime Register offset 0h or Runtime Register offset 04h. -------- */
#define KBC_H2EC_DATA_RESETVALUE              _UINT8_(0x00)                                        /*  (KBC_H2EC_DATA) Host_EC Data/Cmd Register  This register is an alias of the HOST_EC Data / CMD Register. When read at the EC-Only offset\n     of 0h, it returns the data written by the Host to either Runtime Register offset 0h or Runtime Register offset 04h.  Reset Value */

#define KBC_H2EC_DATA_Msk                     _UINT8_(0x00)                                        /* (KBC_H2EC_DATA) Register Mask  */


/* -------- KBC_EC_DATA : (KBC Offset: 0x100) ( /W 8) EC_Host Data Register -------- */
#define KBC_EC_DATA_RESETVALUE                _UINT8_(0x00)                                        /*  (KBC_EC_DATA) EC_Host Data Register  Reset Value */

#define KBC_EC_DATA_Msk                       _UINT8_(0x00)                                        /* (KBC_EC_DATA) Register Mask  */


/* -------- KBC_EC_KBD_STS : (KBC Offset: 0x104) (R/W 8) Keyboard Status Register -------- */
#define KBC_EC_KBD_STS_RESETVALUE             _UINT8_(0x00)                                        /*  (KBC_EC_KBD_STS) Keyboard Status Register  Reset Value */

#define KBC_EC_KBD_STS_OBF_Pos                _UINT8_(0)                                           /* (KBC_EC_KBD_STS) Output Buffer Full. Position */
#define KBC_EC_KBD_STS_OBF_Msk                (_UINT8_(0x1) << KBC_EC_KBD_STS_OBF_Pos)             /* (KBC_EC_KBD_STS) Output Buffer Full. Mask */
#define KBC_EC_KBD_STS_OBF(value)             (KBC_EC_KBD_STS_OBF_Msk & (_UINT8_(value) << KBC_EC_KBD_STS_OBF_Pos)) /* Assigment of value for OBF in the KBC_EC_KBD_STS register */
#define KBC_EC_KBD_STS_IBF_Pos                _UINT8_(1)                                           /* (KBC_EC_KBD_STS) Input Buffer Full. Position */
#define KBC_EC_KBD_STS_IBF_Msk                (_UINT8_(0x1) << KBC_EC_KBD_STS_IBF_Pos)             /* (KBC_EC_KBD_STS) Input Buffer Full. Mask */
#define KBC_EC_KBD_STS_IBF(value)             (KBC_EC_KBD_STS_IBF_Msk & (_UINT8_(value) << KBC_EC_KBD_STS_IBF_Pos)) /* Assigment of value for IBF in the KBC_EC_KBD_STS register */
#define KBC_EC_KBD_STS_UD0_Pos                _UINT8_(2)                                           /* (KBC_EC_KBD_STS) User-defined data. Position */
#define KBC_EC_KBD_STS_UD0_Msk                (_UINT8_(0x1) << KBC_EC_KBD_STS_UD0_Pos)             /* (KBC_EC_KBD_STS) User-defined data. Mask */
#define KBC_EC_KBD_STS_UD0(value)             (KBC_EC_KBD_STS_UD0_Msk & (_UINT8_(value) << KBC_EC_KBD_STS_UD0_Pos)) /* Assigment of value for UD0 in the KBC_EC_KBD_STS register */
#define KBC_EC_KBD_STS_CMD_DAT_Pos            _UINT8_(3)                                           /* (KBC_EC_KBD_STS) Command Data. This bit specifies whether the input data register contains data or a command ('0' = data, '1' = command). Position */
#define KBC_EC_KBD_STS_CMD_DAT_Msk            (_UINT8_(0x1) << KBC_EC_KBD_STS_CMD_DAT_Pos)         /* (KBC_EC_KBD_STS) Command Data. This bit specifies whether the input data register contains data or a command ('0' = data, '1' = command). Mask */
#define KBC_EC_KBD_STS_CMD_DAT(value)         (KBC_EC_KBD_STS_CMD_DAT_Msk & (_UINT8_(value) << KBC_EC_KBD_STS_CMD_DAT_Pos)) /* Assigment of value for CMD_DAT in the KBC_EC_KBD_STS register */
#define KBC_EC_KBD_STS_UD1_Pos                _UINT8_(4)                                           /* (KBC_EC_KBD_STS) User-defined data. Position */
#define KBC_EC_KBD_STS_UD1_Msk                (_UINT8_(0x1) << KBC_EC_KBD_STS_UD1_Pos)             /* (KBC_EC_KBD_STS) User-defined data. Mask */
#define KBC_EC_KBD_STS_UD1(value)             (KBC_EC_KBD_STS_UD1_Msk & (_UINT8_(value) << KBC_EC_KBD_STS_UD1_Pos)) /* Assigment of value for UD1 in the KBC_EC_KBD_STS register */
#define KBC_EC_KBD_STS_AUXOBF_Pos             _UINT8_(5)                                           /* (KBC_EC_KBD_STS) Auxiliary Output Buffer Full. Position */
#define KBC_EC_KBD_STS_AUXOBF_Msk             (_UINT8_(0x1) << KBC_EC_KBD_STS_AUXOBF_Pos)          /* (KBC_EC_KBD_STS) Auxiliary Output Buffer Full. Mask */
#define KBC_EC_KBD_STS_AUXOBF(value)          (KBC_EC_KBD_STS_AUXOBF_Msk & (_UINT8_(value) << KBC_EC_KBD_STS_AUXOBF_Pos)) /* Assigment of value for AUXOBF in the KBC_EC_KBD_STS register */
#define KBC_EC_KBD_STS_UD2_Pos                _UINT8_(6)                                           /* (KBC_EC_KBD_STS) User-defined data. Position */
#define KBC_EC_KBD_STS_UD2_Msk                (_UINT8_(0x3) << KBC_EC_KBD_STS_UD2_Pos)             /* (KBC_EC_KBD_STS) User-defined data. Mask */
#define KBC_EC_KBD_STS_UD2(value)             (KBC_EC_KBD_STS_UD2_Msk & (_UINT8_(value) << KBC_EC_KBD_STS_UD2_Pos)) /* Assigment of value for UD2 in the KBC_EC_KBD_STS register */
#define KBC_EC_KBD_STS_Msk                    _UINT8_(0xFF)                                        /* (KBC_EC_KBD_STS) Register Mask  */


/* -------- KBC_KBCTRL : (KBC Offset: 0x108) (R/W 8) Keyboard Control Register -------- */
#define KBC_KBCTRL_RESETVALUE                 _UINT8_(0x00)                                        /*  (KBC_KBCTRL) Keyboard Control Register  Reset Value */

#define KBC_KBCTRL_UD3_Pos                    _UINT8_(0)                                           /* (KBC_KBCTRL) User-defined data. Position */
#define KBC_KBCTRL_UD3_Msk                    (_UINT8_(0x1) << KBC_KBCTRL_UD3_Pos)                 /* (KBC_KBCTRL) User-defined data. Mask */
#define KBC_KBCTRL_UD3(value)                 (KBC_KBCTRL_UD3_Msk & (_UINT8_(value) << KBC_KBCTRL_UD3_Pos)) /* Assigment of value for UD3 in the KBC_KBCTRL register */
#define KBC_KBCTRL_SAEN_Pos                   _UINT8_(1)                                           /* (KBC_KBCTRL) Software-assist enable. 1=This bit allows control of the GATEA20 signal via firmware\n      0=GATEA20 corresponds to either the last Host-initiated control of GATEA20 or the firmware write to the Keyboard Control Register or the EC AUX Data Register. Position */
#define KBC_KBCTRL_SAEN_Msk                   (_UINT8_(0x1) << KBC_KBCTRL_SAEN_Pos)                /* (KBC_KBCTRL) Software-assist enable. 1=This bit allows control of the GATEA20 signal via firmware\n      0=GATEA20 corresponds to either the last Host-initiated control of GATEA20 or the firmware write to the Keyboard Control Register or the EC AUX Data Register. Mask */
#define KBC_KBCTRL_SAEN(value)                (KBC_KBCTRL_SAEN_Msk & (_UINT8_(value) << KBC_KBCTRL_SAEN_Pos)) /* Assigment of value for SAEN in the KBC_KBCTRL register */
#define KBC_KBCTRL_PCOBFEN_Pos                _UINT8_(2)                                           /* (KBC_KBCTRL) 1= reflects the value written to the PCOBF Register, 0=PCOBF reflects the status of writes to the EC Data Register Position */
#define KBC_KBCTRL_PCOBFEN_Msk                (_UINT8_(0x1) << KBC_KBCTRL_PCOBFEN_Pos)             /* (KBC_KBCTRL) 1= reflects the value written to the PCOBF Register, 0=PCOBF reflects the status of writes to the EC Data Register Mask */
#define KBC_KBCTRL_PCOBFEN(value)             (KBC_KBCTRL_PCOBFEN_Msk & (_UINT8_(value) << KBC_KBCTRL_PCOBFEN_Pos)) /* Assigment of value for PCOBFEN in the KBC_KBCTRL register */
#define KBC_KBCTRL_UD4_Pos                    _UINT8_(3)                                           /* (KBC_KBCTRL) User-defined data. Position */
#define KBC_KBCTRL_UD4_Msk                    (_UINT8_(0x3) << KBC_KBCTRL_UD4_Pos)                 /* (KBC_KBCTRL) User-defined data. Mask */
#define KBC_KBCTRL_UD4(value)                 (KBC_KBCTRL_UD4_Msk & (_UINT8_(value) << KBC_KBCTRL_UD4_Pos)) /* Assigment of value for UD4 in the KBC_KBCTRL register */
#define KBC_KBCTRL_OBFEN_Pos                  _UINT8_(5)                                           /* (KBC_KBCTRL) When this bit is '1', the system interrupt signal KIRQ is driven by the bit PCOBF and MIRQ is driven by AUXOBF. When this\n      bit is '0', KIRQ and MIRQ are driven low. This bit must not be changed when OBF of the status register is equal to '1'. Position */
#define KBC_KBCTRL_OBFEN_Msk                  (_UINT8_(0x1) << KBC_KBCTRL_OBFEN_Pos)               /* (KBC_KBCTRL) When this bit is '1', the system interrupt signal KIRQ is driven by the bit PCOBF and MIRQ is driven by AUXOBF. When this\n      bit is '0', KIRQ and MIRQ are driven low. This bit must not be changed when OBF of the status register is equal to '1'. Mask */
#define KBC_KBCTRL_OBFEN(value)               (KBC_KBCTRL_OBFEN_Msk & (_UINT8_(value) << KBC_KBCTRL_OBFEN_Pos)) /* Assigment of value for OBFEN in the KBC_KBCTRL register */
#define KBC_KBCTRL_UD5_Pos                    _UINT8_(6)                                           /* (KBC_KBCTRL) User-defined data. Position */
#define KBC_KBCTRL_UD5_Msk                    (_UINT8_(0x1) << KBC_KBCTRL_UD5_Pos)                 /* (KBC_KBCTRL) User-defined data. Mask */
#define KBC_KBCTRL_UD5(value)                 (KBC_KBCTRL_UD5_Msk & (_UINT8_(value) << KBC_KBCTRL_UD5_Pos)) /* Assigment of value for UD5 in the KBC_KBCTRL register */
#define KBC_KBCTRL_AUXH_Pos                   _UINT8_(7)                                           /* (KBC_KBCTRL) AUX in Hardware. 1=AUXOBF of the Keyboard Status Read Register is set in hardware by a write to the EC AUX Data Register\n                0=AUXOBF is not modified in hardware, but can be read and written by the EC using the EC-Only alias of the EC Keyboard Status Register Position */
#define KBC_KBCTRL_AUXH_Msk                   (_UINT8_(0x1) << KBC_KBCTRL_AUXH_Pos)                /* (KBC_KBCTRL) AUX in Hardware. 1=AUXOBF of the Keyboard Status Read Register is set in hardware by a write to the EC AUX Data Register\n                0=AUXOBF is not modified in hardware, but can be read and written by the EC using the EC-Only alias of the EC Keyboard Status Register Mask */
#define KBC_KBCTRL_AUXH(value)                (KBC_KBCTRL_AUXH_Msk & (_UINT8_(value) << KBC_KBCTRL_AUXH_Pos)) /* Assigment of value for AUXH in the KBC_KBCTRL register */
#define KBC_KBCTRL_Msk                        _UINT8_(0xFF)                                        /* (KBC_KBCTRL) Register Mask  */


/* -------- KBC_EC_AUX_DATA : (KBC Offset: 0x10C) ( /W 8) EC_Host Aux Register. This 8-bit register is write-only. When written, the C/D in the Keyboard Status Read Register is cleared\n     to '0', signifying data, and the IBF in the same register is set to '1'. When the Runtime Register at offset 0h is read by the Host, it\n     functions as the EC_HOST Data / AUX Data Register. -------- */
#define KBC_EC_AUX_DATA_RESETVALUE            _UINT8_(0x00)                                        /*  (KBC_EC_AUX_DATA) EC_Host Aux Register. This 8-bit register is write-only. When written, the C/D in the Keyboard Status Read Register is cleared\n     to '0', signifying data, and the IBF in the same register is set to '1'. When the Runtime Register at offset 0h is read by the Host, it\n     functions as the EC_HOST Data / AUX Data Register.  Reset Value */

#define KBC_EC_AUX_DATA_Msk                   _UINT8_(0x00)                                        /* (KBC_EC_AUX_DATA) Register Mask  */


/* -------- KBC_PCOBF : (KBC Offset: 0x114) (R/W 8) 8042 Emulated Keyboard Controller PCOBF Register -------- */
#define KBC_PCOBF_RESETVALUE                  _UINT8_(0x00)                                        /*  (KBC_PCOBF) 8042 Emulated Keyboard Controller PCOBF Register  Reset Value */

#define KBC_PCOBF_PCOBF_Pos                   _UINT8_(0)                                           /* (KBC_PCOBF) PCOBF Register: If enabled by the bit OBFEN, the bit PCOBF is gated onto KIRQ. The KIRQ signal is a system interrupt\n      which signifies that the EC has written to the HOST2EC Data Register (EC-Only offset 0h). Position */
#define KBC_PCOBF_PCOBF_Msk                   (_UINT8_(0x1) << KBC_PCOBF_PCOBF_Pos)                /* (KBC_PCOBF) PCOBF Register: If enabled by the bit OBFEN, the bit PCOBF is gated onto KIRQ. The KIRQ signal is a system interrupt\n      which signifies that the EC has written to the HOST2EC Data Register (EC-Only offset 0h). Mask */
#define KBC_PCOBF_PCOBF(value)                (KBC_PCOBF_PCOBF_Msk & (_UINT8_(value) << KBC_PCOBF_PCOBF_Pos)) /* Assigment of value for PCOBF in the KBC_PCOBF register */
#define KBC_PCOBF_Msk                         _UINT8_(0x01)                                        /* (KBC_PCOBF) Register Mask  */


/* -------- KBC_ACTIVATE : (KBC Offset: 0x330) (R/W 8) Activate Register -------- */
#define KBC_ACTIVATE_RESETVALUE               _UINT8_(0x00)                                        /*  (KBC_ACTIVATE) Activate Register  Reset Value */

#define KBC_ACTIVATE_ACT_Pos                  _UINT8_(0)                                           /* (KBC_ACTIVATE) 1=The 8042 Interface is powered and functional. 0=The 8042 Interface is powered down and inactive. Position */
#define KBC_ACTIVATE_ACT_Msk                  (_UINT8_(0x1) << KBC_ACTIVATE_ACT_Pos)               /* (KBC_ACTIVATE) 1=The 8042 Interface is powered and functional. 0=The 8042 Interface is powered down and inactive. Mask */
#define KBC_ACTIVATE_ACT(value)               (KBC_ACTIVATE_ACT_Msk & (_UINT8_(value) << KBC_ACTIVATE_ACT_Pos)) /* Assigment of value for ACT in the KBC_ACTIVATE register */
#define KBC_ACTIVATE_Msk                      _UINT8_(0x01)                                        /* (KBC_ACTIVATE) Register Mask  */


/** \brief KBC register offsets definitions */
#define KBC_HOST_DATA_REG_OFST         _UINT32_(0x00)      /* (KBC_HOST_DATA) READ_DATA. This 8-bit register is read-only. When read by the Host, the PCOBF and/or AUXOBF interrupts are cleared and the\n     OBF flag in the status register is cleared. Offset */
#define KBC_HOST_EC_DATA_REG_OFST      _UINT32_(0x00)      /* (KBC_HOST_EC_DATA) WRITE_DATA. This 8-bit register is write-only. When written, the C/D bit in the Keyboard Status Read Register is cleared\n     to '0', signifying data, and the IBF in the same register is set to '1'. When the Runtime Register at offset 0h is read by the Host,\n     it functions as the EC_HOST Data / AUX Data Register. Offset */
#define KBC_HOST_WC_REG_OFST           _UINT32_(0x04)      /* (KBC_HOST_WC) WRITE_CMD. This 8-bit register is write-only and is an alias of the register at offset 0h. When written, the C/D bit in the\n     Keyboard Status Read Register is set to '1', signifying a command, and the IBF in the same register is set to '1'. When the Runtime\n     Register at offset 4h is read by the Host, it functions as the Keyboard Status Read Register. Offset */
#define KBC_HOST_RS_REG_OFST           _UINT32_(0x04)      /* (KBC_HOST_RS) Keyboard Status Read Register. This register is a read-only alias of the EC Keyboard Status Register. Offset */
#define KBC_H2EC_DATA_REG_OFST         _UINT32_(0x100)     /* (KBC_H2EC_DATA) Host_EC Data/Cmd Register  This register is an alias of the HOST_EC Data / CMD Register. When read at the EC-Only offset\n     of 0h, it returns the data written by the Host to either Runtime Register offset 0h or Runtime Register offset 04h. Offset */
#define KBC_EC_DATA_REG_OFST           _UINT32_(0x100)     /* (KBC_EC_DATA) EC_Host Data Register Offset */
#define KBC_EC_KBD_STS_REG_OFST        _UINT32_(0x104)     /* (KBC_EC_KBD_STS) Keyboard Status Register Offset */
#define KBC_KBCTRL_REG_OFST            _UINT32_(0x108)     /* (KBC_KBCTRL) Keyboard Control Register Offset */
#define KBC_EC_AUX_DATA_REG_OFST       _UINT32_(0x10C)     /* (KBC_EC_AUX_DATA) EC_Host Aux Register. This 8-bit register is write-only. When written, the C/D in the Keyboard Status Read Register is cleared\n     to '0', signifying data, and the IBF in the same register is set to '1'. When the Runtime Register at offset 0h is read by the Host, it\n     functions as the EC_HOST Data / AUX Data Register. Offset */
#define KBC_PCOBF_REG_OFST             _UINT32_(0x114)     /* (KBC_PCOBF) 8042 Emulated Keyboard Controller PCOBF Register Offset */
#define KBC_ACTIVATE_REG_OFST          _UINT32_(0x330)     /* (KBC_ACTIVATE) Activate Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief KBC register API structure */
typedef struct
{  /* The Keyboard Controller is a Host/EC Message Interface with hardware assists to emulate 8042 behavior */
  union
  {
      __O   uint8_t                        KBC_HOST_EC_DATA;   /**< Offset: 0x00 ( /W  8) WRITE_DATA. This 8-bit register is write-only. When written, the C/D bit in the Keyboard Status Read Register is cleared\n     to '0', signifying data, and the IBF in the same register is set to '1'. When the Runtime Register at offset 0h is read by the Host,\n     it functions as the EC_HOST Data / AUX Data Register. */
      __I   uint8_t                        KBC_HOST_DATA;      /**< Offset: 0x00 (R/   8) READ_DATA. This 8-bit register is read-only. When read by the Host, the PCOBF and/or AUXOBF interrupts are cleared and the\n     OBF flag in the status register is cleared. */
  };
  union
  {
      __I   uint8_t                        KBC_HOST_RS;        /**< Offset: 0x04 (R/   8) Keyboard Status Read Register. This register is a read-only alias of the EC Keyboard Status Register. */
      __O   uint8_t                        KBC_HOST_WC;        /**< Offset: 0x04 ( /W  8) WRITE_CMD. This 8-bit register is write-only and is an alias of the register at offset 0h. When written, the C/D bit in the\n     Keyboard Status Read Register is set to '1', signifying a command, and the IBF in the same register is set to '1'. When the Runtime\n     Register at offset 4h is read by the Host, it functions as the Keyboard Status Read Register. */
  };
  union
  {
      __O   uint8_t                        KBC_EC_DATA;        /**< Offset: 0x100 ( /W  8) EC_Host Data Register */
      __I   uint8_t                        KBC_H2EC_DATA;      /**< Offset: 0x100 (R/   8) Host_EC Data/Cmd Register  This register is an alias of the HOST_EC Data / CMD Register. When read at the EC-Only offset\n     of 0h, it returns the data written by the Host to either Runtime Register offset 0h or Runtime Register offset 04h. */
  };
  __I   uint8_t                        Reserved1[0x03];
  __IO  uint8_t                        KBC_EC_KBD_STS;     /**< Offset: 0x104 (R/W  8) Keyboard Status Register */
  __I   uint8_t                        Reserved2[0x03];
  __IO  uint8_t                        KBC_KBCTRL;         /**< Offset: 0x108 (R/W  8) Keyboard Control Register */
  __I   uint8_t                        Reserved3[0x03];
  __O   uint8_t                        KBC_EC_AUX_DATA;    /**< Offset: 0x10C ( /W  8) EC_Host Aux Register. This 8-bit register is write-only. When written, the C/D in the Keyboard Status Read Register is cleared\n     to '0', signifying data, and the IBF in the same register is set to '1'. When the Runtime Register at offset 0h is read by the Host, it\n     functions as the EC_HOST Data / AUX Data Register. */
  __I   uint8_t                        Reserved4[0x07];
  __IO  uint8_t                        KBC_PCOBF;          /**< Offset: 0x114 (R/W  8) 8042 Emulated Keyboard Controller PCOBF Register */
  __I   uint8_t                        Reserved5[0x21B];
  __IO  uint8_t                        KBC_ACTIVATE;       /**< Offset: 0x330 (R/W  8) Activate Register */
} kbc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _0525SG12_KBC_COMPONENT_H_ */
