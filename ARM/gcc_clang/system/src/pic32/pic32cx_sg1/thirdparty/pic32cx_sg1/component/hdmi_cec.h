/*
 * Component description for HDMI_CEC
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
#ifndef _0525SG12_HDMI_CEC_COMPONENT_H_
#define _0525SG12_HDMI_CEC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR HDMI_CEC                                     */
/* ************************************************************************** */

/* -------- HDMI_CEC_CTRL : (HDMI_CEC Offset: 0x00) (R/W 8) HDMI CEC Control Register.     Only bits [3:0] are used. Bits [31:4] are Reserved. -------- */
#define HDMI_CEC_CTRL_RESETVALUE              _UINT8_(0x00)                                        /*  (HDMI_CEC_CTRL) HDMI CEC Control Register.     Only bits [3:0] are used. Bits [31:4] are Reserved.  Reset Value */

#define HDMI_CEC_CTRL_ACT_Pos                 _UINT8_(0)                                           /* (HDMI_CEC_CTRL) Enable the blocks operation. (R/W)\n                1=The block is enabled for normal operation.\n                0=The block is disabled and placed in its lowest power state. Position */
#define HDMI_CEC_CTRL_ACT_Msk                 (_UINT8_(0x1) << HDMI_CEC_CTRL_ACT_Pos)              /* (HDMI_CEC_CTRL) Enable the blocks operation. (R/W)\n                1=The block is enabled for normal operation.\n                0=The block is disabled and placed in its lowest power state. Mask */
#define HDMI_CEC_CTRL_ACT(value)              (HDMI_CEC_CTRL_ACT_Msk & (_UINT8_(value) << HDMI_CEC_CTRL_ACT_Pos)) /* Assigment of value for ACT in the HDMI_CEC_CTRL register */
#define HDMI_CEC_CTRL_RST_Pos                 _UINT8_(1)                                           /* (HDMI_CEC_CTRL) Soft reset the entire module. This bit is self-clearing. Position */
#define HDMI_CEC_CTRL_RST_Msk                 (_UINT8_(0x1) << HDMI_CEC_CTRL_RST_Pos)              /* (HDMI_CEC_CTRL) Soft reset the entire module. This bit is self-clearing. Mask */
#define HDMI_CEC_CTRL_RST(value)              (HDMI_CEC_CTRL_RST_Msk & (_UINT8_(value) << HDMI_CEC_CTRL_RST_Pos)) /* Assigment of value for RST in the HDMI_CEC_CTRL register */
#define HDMI_CEC_CTRL_FLTEN_Pos               _UINT8_(2)                                           /* (HDMI_CEC_CTRL) 1=Filtering on the CEC bus is enabled.\n       0=Filtering is disabled Position */
#define HDMI_CEC_CTRL_FLTEN_Msk               (_UINT8_(0x1) << HDMI_CEC_CTRL_FLTEN_Pos)            /* (HDMI_CEC_CTRL) 1=Filtering on the CEC bus is enabled.\n       0=Filtering is disabled Mask */
#define HDMI_CEC_CTRL_FLTEN(value)            (HDMI_CEC_CTRL_FLTEN_Msk & (_UINT8_(value) << HDMI_CEC_CTRL_FLTEN_Pos)) /* Assigment of value for FLTEN in the HDMI_CEC_CTRL register */
#define HDMI_CEC_CTRL_SFT5_Pos                _UINT8_(3)                                           /* (HDMI_CEC_CTRL) When this bit is written to '1', the Signal Free Time (SFT) is changed                    to '5' once only.\n This bit is cleared and normal SFT behavior resumes when the Bus                    Idle condition is asserted. Position */
#define HDMI_CEC_CTRL_SFT5_Msk                (_UINT8_(0x1) << HDMI_CEC_CTRL_SFT5_Pos)             /* (HDMI_CEC_CTRL) When this bit is written to '1', the Signal Free Time (SFT) is changed                    to '5' once only.\n This bit is cleared and normal SFT behavior resumes when the Bus                    Idle condition is asserted. Mask */
#define HDMI_CEC_CTRL_SFT5(value)             (HDMI_CEC_CTRL_SFT5_Msk & (_UINT8_(value) << HDMI_CEC_CTRL_SFT5_Pos)) /* Assigment of value for SFT5 in the HDMI_CEC_CTRL register */
#define HDMI_CEC_CTRL_Msk                     _UINT8_(0x0F)                                        /* (HDMI_CEC_CTRL) Register Mask  */

#define HDMI_CEC_CTRL_SFT_Pos                 _UINT8_(3)                                           /* (HDMI_CEC_CTRL Position) When this bit is written to 'x', the Signal Free Time (SFT) is changed                    to '5' once only.\n This bit is cleared and normal SFT behavior resumes when the Bus                    Idle condition is asserted. */
#define HDMI_CEC_CTRL_SFT_Msk                 (_UINT8_(0x1) << HDMI_CEC_CTRL_SFT_Pos)              /* (HDMI_CEC_CTRL Mask) SFT */
#define HDMI_CEC_CTRL_SFT(value)              (HDMI_CEC_CTRL_SFT_Msk & (_UINT8_(value) << HDMI_CEC_CTRL_SFT_Pos)) 

/* -------- HDMI_CEC_CLOG_ADDR : (HDMI_CEC Offset: 0x04) ( R/ 16) HDMI CEC Claimed Logical Address Register.     Only bits [15:0] are used. Bits [31:16] are Reserved. -------- */
#define HDMI_CEC_CLOG_ADDR_RESETVALUE         _UINT16_(0x00)                                       /*  (HDMI_CEC_CLOG_ADDR) HDMI CEC Claimed Logical Address Register.     Only bits [15:0] are used. Bits [31:16] are Reserved.  Reset Value */

#define HDMI_CEC_CLOG_ADDR_ADDR_Pos           _UINT16_(0)                                          /* (HDMI_CEC_CLOG_ADDR) When any bit in this register is asserted ('1'), Follower Directed Messages                  and Follower Broadcast Messages addressed to that logical                  address are claimed by the Follower Interface. The Claimed Logical                  Address Register default effectively disables the Follower Interface. Position */
#define HDMI_CEC_CLOG_ADDR_ADDR_Msk           (_UINT16_(0xFFFF) << HDMI_CEC_CLOG_ADDR_ADDR_Pos)    /* (HDMI_CEC_CLOG_ADDR) When any bit in this register is asserted ('1'), Follower Directed Messages                  and Follower Broadcast Messages addressed to that logical                  address are claimed by the Follower Interface. The Claimed Logical                  Address Register default effectively disables the Follower Interface. Mask */
#define HDMI_CEC_CLOG_ADDR_ADDR(value)        (HDMI_CEC_CLOG_ADDR_ADDR_Msk & (_UINT16_(value) << HDMI_CEC_CLOG_ADDR_ADDR_Pos)) /* Assigment of value for ADDR in the HDMI_CEC_CLOG_ADDR register */
#define HDMI_CEC_CLOG_ADDR_Msk                _UINT16_(0xFFFF)                                     /* (HDMI_CEC_CLOG_ADDR) Register Mask  */


/* -------- HDMI_CEC_INITIATOR_DAT : (HDMI_CEC Offset: 0x08) ( /W 16) HDMI CEC Initiator Data Register.     Only bits [8:0] are used. Bits [31:9] are Reserved. -------- */
#define HDMI_CEC_INITIATOR_DAT_RESETVALUE     _UINT16_(0x00)                                       /*  (HDMI_CEC_INITIATOR_DAT) HDMI CEC Initiator Data Register.     Only bits [8:0] are used. Bits [31:9] are Reserved.  Reset Value */

#define HDMI_CEC_INITIATOR_DAT_INI_DAT_Pos    _UINT16_(0)                                          /* (HDMI_CEC_INITIATOR_DAT) When any bit in this register is asserted ('1'), Follower Directed Messages                     and Follower Broadcast Messages addressed to that logical                     address are claimed by the Follower Interface. The Claimed Logical                     Address Register default effectively disables the Follower Interface.                     Reads of this field return 0. Position */
#define HDMI_CEC_INITIATOR_DAT_INI_DAT_Msk    (_UINT16_(0xFF) << HDMI_CEC_INITIATOR_DAT_INI_DAT_Pos) /* (HDMI_CEC_INITIATOR_DAT) When any bit in this register is asserted ('1'), Follower Directed Messages                     and Follower Broadcast Messages addressed to that logical                     address are claimed by the Follower Interface. The Claimed Logical                     Address Register default effectively disables the Follower Interface.                     Reads of this field return 0. Mask */
#define HDMI_CEC_INITIATOR_DAT_INI_DAT(value) (HDMI_CEC_INITIATOR_DAT_INI_DAT_Msk & (_UINT16_(value) << HDMI_CEC_INITIATOR_DAT_INI_DAT_Pos)) /* Assigment of value for INI_DAT in the HDMI_CEC_INITIATOR_DAT register */
#define HDMI_CEC_INITIATOR_DAT_EOM_Pos        _UINT16_(8)                                          /* (HDMI_CEC_INITIATOR_DAT) This bit is used for the End of Message bit in header/data blocks in                    CEC message frames. When the bit is '0' more data blocks follow;                    a '1' specifies that the message is complete.                    Reads of this field return 0. Position */
#define HDMI_CEC_INITIATOR_DAT_EOM_Msk        (_UINT16_(0x1) << HDMI_CEC_INITIATOR_DAT_EOM_Pos)    /* (HDMI_CEC_INITIATOR_DAT) This bit is used for the End of Message bit in header/data blocks in                    CEC message frames. When the bit is '0' more data blocks follow;                    a '1' specifies that the message is complete.                    Reads of this field return 0. Mask */
#define HDMI_CEC_INITIATOR_DAT_EOM(value)     (HDMI_CEC_INITIATOR_DAT_EOM_Msk & (_UINT16_(value) << HDMI_CEC_INITIATOR_DAT_EOM_Pos)) /* Assigment of value for EOM in the HDMI_CEC_INITIATOR_DAT register */
#define HDMI_CEC_INITIATOR_DAT_Msk            _UINT16_(0x01FF)                                     /* (HDMI_CEC_INITIATOR_DAT) Register Mask  */


/* -------- HDMI_CEC_FOLLOW_DAT : (HDMI_CEC Offset: 0x0C) ( R/ 16) HDMI CEC Follower Data Register.     Only bits [8:0] are used. Bits [31:9] are Reserved. -------- */
#define HDMI_CEC_FOLLOW_DAT_RESETVALUE        _UINT16_(0x00)                                       /*  (HDMI_CEC_FOLLOW_DAT) HDMI CEC Follower Data Register.     Only bits [8:0] are used. Bits [31:9] are Reserved.  Reset Value */

#define HDMI_CEC_FOLLOW_DAT_FLW_DATA_Pos      _UINT16_(0)                                          /* (HDMI_CEC_FOLLOW_DAT) This field is used for the received Information bits from header/data                    blocks in CEC message frames.\n                    Reads of this register when the FFNE bit in the Follower Status Register                    is not asserted ('0') return undefined data. Position */
#define HDMI_CEC_FOLLOW_DAT_FLW_DATA_Msk      (_UINT16_(0xFF) << HDMI_CEC_FOLLOW_DAT_FLW_DATA_Pos) /* (HDMI_CEC_FOLLOW_DAT) This field is used for the received Information bits from header/data                    blocks in CEC message frames.\n                    Reads of this register when the FFNE bit in the Follower Status Register                    is not asserted ('0') return undefined data. Mask */
#define HDMI_CEC_FOLLOW_DAT_FLW_DATA(value)   (HDMI_CEC_FOLLOW_DAT_FLW_DATA_Msk & (_UINT16_(value) << HDMI_CEC_FOLLOW_DAT_FLW_DATA_Pos)) /* Assigment of value for FLW_DATA in the HDMI_CEC_FOLLOW_DAT register */
#define HDMI_CEC_FOLLOW_DAT_EOM_Pos           _UINT16_(8)                                          /* (HDMI_CEC_FOLLOW_DAT) This bit is the received End of Message bit from header/data blocks                    in CEC message frames. When the bit is '0' more data blocks follow;                    a '1' specifies that the message is complete. Position */
#define HDMI_CEC_FOLLOW_DAT_EOM_Msk           (_UINT16_(0x1) << HDMI_CEC_FOLLOW_DAT_EOM_Pos)       /* (HDMI_CEC_FOLLOW_DAT) This bit is the received End of Message bit from header/data blocks                    in CEC message frames. When the bit is '0' more data blocks follow;                    a '1' specifies that the message is complete. Mask */
#define HDMI_CEC_FOLLOW_DAT_EOM(value)        (HDMI_CEC_FOLLOW_DAT_EOM_Msk & (_UINT16_(value) << HDMI_CEC_FOLLOW_DAT_EOM_Pos)) /* Assigment of value for EOM in the HDMI_CEC_FOLLOW_DAT register */
#define HDMI_CEC_FOLLOW_DAT_Msk               _UINT16_(0x01FF)                                     /* (HDMI_CEC_FOLLOW_DAT) Register Mask  */


/* -------- HDMI_CEC_INITIATOR_STS : (HDMI_CEC Offset: 0x10) (R/W 8) HDMI CEC Initiator Status Register.     Only bits [6:0] are used. Bits [31:7] are Reserved. -------- */
#define HDMI_CEC_INITIATOR_STS_RESETVALUE     _UINT8_(0x21)                                        /*  (HDMI_CEC_INITIATOR_STS) HDMI CEC Initiator Status Register.     Only bits [6:0] are used. Bits [31:7] are Reserved.  Reset Value */

#define HDMI_CEC_INITIATOR_STS_IDLE_Pos       _UINT8_(0)                                           /* (HDMI_CEC_INITIATOR_STS) 1=The CEC bus is idle.              0=The CEC bus is busy. Position */
#define HDMI_CEC_INITIATOR_STS_IDLE_Msk       (_UINT8_(0x1) << HDMI_CEC_INITIATOR_STS_IDLE_Pos)    /* (HDMI_CEC_INITIATOR_STS) 1=The CEC bus is idle.              0=The CEC bus is busy. Mask */
#define HDMI_CEC_INITIATOR_STS_IDLE(value)    (HDMI_CEC_INITIATOR_STS_IDLE_Msk & (_UINT8_(value) << HDMI_CEC_INITIATOR_STS_IDLE_Pos)) /* Assigment of value for IDLE in the HDMI_CEC_INITIATOR_STS register */
#define HDMI_CEC_INITIATOR_STS_LAB_Pos        _UINT8_(1)                                           /* (HDMI_CEC_INITIATOR_STS) Lost Arbitration (LAB).                    1=Bus contention is detected by the Initiator Interface during CEC line arbitration.                    0=No bus contention detected.                    R/WC. Position */
#define HDMI_CEC_INITIATOR_STS_LAB_Msk        (_UINT8_(0x1) << HDMI_CEC_INITIATOR_STS_LAB_Pos)     /* (HDMI_CEC_INITIATOR_STS) Lost Arbitration (LAB).                    1=Bus contention is detected by the Initiator Interface during CEC line arbitration.                    0=No bus contention detected.                    R/WC. Mask */
#define HDMI_CEC_INITIATOR_STS_LAB(value)     (HDMI_CEC_INITIATOR_STS_LAB_Msk & (_UINT8_(value) << HDMI_CEC_INITIATOR_STS_LAB_Pos)) /* Assigment of value for LAB in the HDMI_CEC_INITIATOR_STS register */
#define HDMI_CEC_INITIATOR_STS_UNDRN_Pos      _UINT8_(2)                                           /* (HDMI_CEC_INITIATOR_STS) Initiator Underrun (UNDRN)        1=The Initiator shift register requires data from the Initiator Interface                        FIFO and the IFE bit is asserted.          0=No underrun detected.          R/WC. Position */
#define HDMI_CEC_INITIATOR_STS_UNDRN_Msk      (_UINT8_(0x1) << HDMI_CEC_INITIATOR_STS_UNDRN_Pos)   /* (HDMI_CEC_INITIATOR_STS) Initiator Underrun (UNDRN)        1=The Initiator shift register requires data from the Initiator Interface                        FIFO and the IFE bit is asserted.          0=No underrun detected.          R/WC. Mask */
#define HDMI_CEC_INITIATOR_STS_UNDRN(value)   (HDMI_CEC_INITIATOR_STS_UNDRN_Msk & (_UINT8_(value) << HDMI_CEC_INITIATOR_STS_UNDRN_Pos)) /* Assigment of value for UNDRN in the HDMI_CEC_INITIATOR_STS register */
#define HDMI_CEC_INITIATOR_STS_ACKERR_Pos     _UINT8_(3)                                           /* (HDMI_CEC_INITIATOR_STS) The Acknowledge Error bit is asserted ('1') when the follower NACKs                     an acknowledge bit, both for Follower Directed Messages and Follower                     Broadcast Messages.                     For example, in Follower Directed Messages if the follower acknowledge                     bit response is '1' this bit is '1' in Follower Broadcast Messages                     if a follower acknowledge bit response is '0' the bit is '1'. Position */
#define HDMI_CEC_INITIATOR_STS_ACKERR_Msk     (_UINT8_(0x1) << HDMI_CEC_INITIATOR_STS_ACKERR_Pos)  /* (HDMI_CEC_INITIATOR_STS) The Acknowledge Error bit is asserted ('1') when the follower NACKs                     an acknowledge bit, both for Follower Directed Messages and Follower                     Broadcast Messages.                     For example, in Follower Directed Messages if the follower acknowledge                     bit response is '1' this bit is '1' in Follower Broadcast Messages                     if a follower acknowledge bit response is '0' the bit is '1'. Mask */
#define HDMI_CEC_INITIATOR_STS_ACKERR(value)  (HDMI_CEC_INITIATOR_STS_ACKERR_Msk & (_UINT8_(value) << HDMI_CEC_INITIATOR_STS_ACKERR_Pos)) /* Assigment of value for ACKERR in the HDMI_CEC_INITIATOR_STS register */
#define HDMI_CEC_INITIATOR_STS_CE_Pos         _UINT8_(4)                                           /* (HDMI_CEC_INITIATOR_STS) The Contention Error bit is asserted ('1') when bus contention is                     detected by the Initiator Interface at any point following CEC line                     arbitration. This is likely to be a consequence of CEC Line Error                     Handling (see CEC 7.4, CEC Line Error Handling in References [1]).       R/WC. Position */
#define HDMI_CEC_INITIATOR_STS_CE_Msk         (_UINT8_(0x1) << HDMI_CEC_INITIATOR_STS_CE_Pos)      /* (HDMI_CEC_INITIATOR_STS) The Contention Error bit is asserted ('1') when bus contention is                     detected by the Initiator Interface at any point following CEC line                     arbitration. This is likely to be a consequence of CEC Line Error                     Handling (see CEC 7.4, CEC Line Error Handling in References [1]).       R/WC. Mask */
#define HDMI_CEC_INITIATOR_STS_CE(value)      (HDMI_CEC_INITIATOR_STS_CE_Msk & (_UINT8_(value) << HDMI_CEC_INITIATOR_STS_CE_Pos)) /* Assigment of value for CE in the HDMI_CEC_INITIATOR_STS register */
#define HDMI_CEC_INITIATOR_STS_IFE_Pos        _UINT8_(5)                                           /* (HDMI_CEC_INITIATOR_STS) The Initiator FIFO Empty bit is asserted ('1') when the Initiator Interface                     retrieves the last data entry from the FIFO. Position */
#define HDMI_CEC_INITIATOR_STS_IFE_Msk        (_UINT8_(0x1) << HDMI_CEC_INITIATOR_STS_IFE_Pos)     /* (HDMI_CEC_INITIATOR_STS) The Initiator FIFO Empty bit is asserted ('1') when the Initiator Interface                     retrieves the last data entry from the FIFO. Mask */
#define HDMI_CEC_INITIATOR_STS_IFE(value)     (HDMI_CEC_INITIATOR_STS_IFE_Msk & (_UINT8_(value) << HDMI_CEC_INITIATOR_STS_IFE_Pos)) /* Assigment of value for IFE in the HDMI_CEC_INITIATOR_STS register */
#define HDMI_CEC_INITIATOR_STS_IFDONE_Pos     _UINT8_(6)                                           /* (HDMI_CEC_INITIATOR_STS) The Initiator Frame Done bit is asserted ('1') when a message block                     with the EOM bit asserted ('1') has been transferred by the Initiator                     Interface, or the message frame has been terminated because an                     error occurred as defined by the LAB, UNDRN, ACKERR, and CE bits.        R/WC. Position */
#define HDMI_CEC_INITIATOR_STS_IFDONE_Msk     (_UINT8_(0x1) << HDMI_CEC_INITIATOR_STS_IFDONE_Pos)  /* (HDMI_CEC_INITIATOR_STS) The Initiator Frame Done bit is asserted ('1') when a message block                     with the EOM bit asserted ('1') has been transferred by the Initiator                     Interface, or the message frame has been terminated because an                     error occurred as defined by the LAB, UNDRN, ACKERR, and CE bits.        R/WC. Mask */
#define HDMI_CEC_INITIATOR_STS_IFDONE(value)  (HDMI_CEC_INITIATOR_STS_IFDONE_Msk & (_UINT8_(value) << HDMI_CEC_INITIATOR_STS_IFDONE_Pos)) /* Assigment of value for IFDONE in the HDMI_CEC_INITIATOR_STS register */
#define HDMI_CEC_INITIATOR_STS_Msk            _UINT8_(0x7F)                                        /* (HDMI_CEC_INITIATOR_STS) Register Mask  */


/* -------- HDMI_CEC_FOLLOW_STS : (HDMI_CEC Offset: 0x14) (R/W 8) HDMI CEC Follower Status Register.     Only bits [6:0] are used. Bits [31:7] are Reserved. -------- */
#define HDMI_CEC_FOLLOW_STS_RESETVALUE        _UINT8_(0x00)                                        /*  (HDMI_CEC_FOLLOW_STS) HDMI CEC Follower Status Register.     Only bits [6:0] are used. Bits [31:7] are Reserved.  Reset Value */

#define HDMI_CEC_FOLLOW_STS_OVRN_Pos          _UINT8_(0)                                           /* (HDMI_CEC_FOLLOW_STS) The Follower Overrun bit is asserted ('1') when data from the follower                     shift register is transferred to the Follower Interface FIFO when                     the FFF bit is asserted.                     R/WC. Position */
#define HDMI_CEC_FOLLOW_STS_OVRN_Msk          (_UINT8_(0x1) << HDMI_CEC_FOLLOW_STS_OVRN_Pos)       /* (HDMI_CEC_FOLLOW_STS) The Follower Overrun bit is asserted ('1') when data from the follower                     shift register is transferred to the Follower Interface FIFO when                     the FFF bit is asserted.                     R/WC. Mask */
#define HDMI_CEC_FOLLOW_STS_OVRN(value)       (HDMI_CEC_FOLLOW_STS_OVRN_Msk & (_UINT8_(value) << HDMI_CEC_FOLLOW_STS_OVRN_Pos)) /* Assigment of value for OVRN in the HDMI_CEC_FOLLOW_STS register */
#define HDMI_CEC_FOLLOW_STS_BERR_Pos          _UINT8_(1)                                           /* (HDMI_CEC_FOLLOW_STS) The Bus Error Detected bit is asserted ('1') when the follower detects                    spurious pulses on the CEC Bus.                     R/WC. Position */
#define HDMI_CEC_FOLLOW_STS_BERR_Msk          (_UINT8_(0x1) << HDMI_CEC_FOLLOW_STS_BERR_Pos)       /* (HDMI_CEC_FOLLOW_STS) The Bus Error Detected bit is asserted ('1') when the follower detects                    spurious pulses on the CEC Bus.                     R/WC. Mask */
#define HDMI_CEC_FOLLOW_STS_BERR(value)       (HDMI_CEC_FOLLOW_STS_BERR_Msk & (_UINT8_(value) << HDMI_CEC_FOLLOW_STS_BERR_Pos)) /* Assigment of value for BERR in the HDMI_CEC_FOLLOW_STS register */
#define HDMI_CEC_FOLLOW_STS_BTO_Pos           _UINT8_(2)                                           /* (HDMI_CEC_FOLLOW_STS) The Bus Time Out Detected bit is asserted ('1') when the follower                        detects that the CEC Bus is held high too long          R/WC. Position */
#define HDMI_CEC_FOLLOW_STS_BTO_Msk           (_UINT8_(0x1) << HDMI_CEC_FOLLOW_STS_BTO_Pos)        /* (HDMI_CEC_FOLLOW_STS) The Bus Time Out Detected bit is asserted ('1') when the follower                        detects that the CEC Bus is held high too long          R/WC. Mask */
#define HDMI_CEC_FOLLOW_STS_BTO(value)        (HDMI_CEC_FOLLOW_STS_BTO_Msk & (_UINT8_(value) << HDMI_CEC_FOLLOW_STS_BTO_Pos)) /* Assigment of value for BTO in the HDMI_CEC_FOLLOW_STS register */
#define HDMI_CEC_FOLLOW_STS_FFNE_Pos          _UINT8_(3)                                           /* (HDMI_CEC_FOLLOW_STS) The Follower FIFO Not Empty bit is asserted ('1') when there is data                         in the Follower Interface FIFO. The bit is not asserted ('0') when                         the Follower Interface FIFO is empty. Position */
#define HDMI_CEC_FOLLOW_STS_FFNE_Msk          (_UINT8_(0x1) << HDMI_CEC_FOLLOW_STS_FFNE_Pos)       /* (HDMI_CEC_FOLLOW_STS) The Follower FIFO Not Empty bit is asserted ('1') when there is data                         in the Follower Interface FIFO. The bit is not asserted ('0') when                         the Follower Interface FIFO is empty. Mask */
#define HDMI_CEC_FOLLOW_STS_FFNE(value)       (HDMI_CEC_FOLLOW_STS_FFNE_Msk & (_UINT8_(value) << HDMI_CEC_FOLLOW_STS_FFNE_Pos)) /* Assigment of value for FFNE in the HDMI_CEC_FOLLOW_STS register */
#define HDMI_CEC_FOLLOW_STS_FFF_Pos           _UINT8_(4)                                           /* (HDMI_CEC_FOLLOW_STS) The Follower FIFO Full bit is asserted ('1') when there is no room in                         the Follower Interface FIFO for more data. Position */
#define HDMI_CEC_FOLLOW_STS_FFF_Msk           (_UINT8_(0x1) << HDMI_CEC_FOLLOW_STS_FFF_Pos)        /* (HDMI_CEC_FOLLOW_STS) The Follower FIFO Full bit is asserted ('1') when there is no room in                         the Follower Interface FIFO for more data. Mask */
#define HDMI_CEC_FOLLOW_STS_FFF(value)        (HDMI_CEC_FOLLOW_STS_FFF_Msk & (_UINT8_(value) << HDMI_CEC_FOLLOW_STS_FFF_Pos)) /* Assigment of value for FFF in the HDMI_CEC_FOLLOW_STS register */
#define HDMI_CEC_FOLLOW_STS_FDR_Pos           _UINT8_(5)                                           /* (HDMI_CEC_FOLLOW_STS) The Follower Data Ready bit is asserted ('1') whenever received                        data is written to the Follower Interface FIFO.          R/WC. Position */
#define HDMI_CEC_FOLLOW_STS_FDR_Msk           (_UINT8_(0x1) << HDMI_CEC_FOLLOW_STS_FDR_Pos)        /* (HDMI_CEC_FOLLOW_STS) The Follower Data Ready bit is asserted ('1') whenever received                        data is written to the Follower Interface FIFO.          R/WC. Mask */
#define HDMI_CEC_FOLLOW_STS_FDR(value)        (HDMI_CEC_FOLLOW_STS_FDR_Msk & (_UINT8_(value) << HDMI_CEC_FOLLOW_STS_FDR_Pos)) /* Assigment of value for FDR in the HDMI_CEC_FOLLOW_STS register */
#define HDMI_CEC_FOLLOW_STS_FFDONE_Pos        _UINT8_(6)                                           /* (HDMI_CEC_FOLLOW_STS) The Follower Frame Done bit is asserted ('1') when a message block                     with the EOM bit asserted ('1') has been received by the Follower                     Interface, or the message frame has been terminated because an                     error occurred as defined by the OVRN, BERR, and BTO bits.       R/WC. Position */
#define HDMI_CEC_FOLLOW_STS_FFDONE_Msk        (_UINT8_(0x1) << HDMI_CEC_FOLLOW_STS_FFDONE_Pos)     /* (HDMI_CEC_FOLLOW_STS) The Follower Frame Done bit is asserted ('1') when a message block                     with the EOM bit asserted ('1') has been received by the Follower                     Interface, or the message frame has been terminated because an                     error occurred as defined by the OVRN, BERR, and BTO bits.       R/WC. Mask */
#define HDMI_CEC_FOLLOW_STS_FFDONE(value)     (HDMI_CEC_FOLLOW_STS_FFDONE_Msk & (_UINT8_(value) << HDMI_CEC_FOLLOW_STS_FFDONE_Pos)) /* Assigment of value for FFDONE in the HDMI_CEC_FOLLOW_STS register */
#define HDMI_CEC_FOLLOW_STS_Msk               _UINT8_(0x7F)                                        /* (HDMI_CEC_FOLLOW_STS) Register Mask  */


/* -------- HDMI_CEC_INITIATOR_CTRL : (HDMI_CEC Offset: 0x18) (R/W 8) HDMI CEC Initiator Control Register.     Only bits [6:0] are used. Bits [31:7] are Reserved. -------- */
#define HDMI_CEC_INITIATOR_CTRL_RESETVALUE    _UINT8_(0x00)                                        /*  (HDMI_CEC_INITIATOR_CTRL) HDMI CEC Initiator Control Register.     Only bits [6:0] are used. Bits [31:7] are Reserved.  Reset Value */

#define HDMI_CEC_INITIATOR_CTRL_IFLUSH_Pos    _UINT8_(0)                                           /* (HDMI_CEC_INITIATOR_CTRL) When this bit is asserted ('1'), data in the Initiator Interface FIFO is       cleared. When set, the bit is automatically cleared by hardware within one        register access cycle.                     This bit can be used to terminate an Initiator Interface message frame transfer.                     R/WC. Position */
#define HDMI_CEC_INITIATOR_CTRL_IFLUSH_Msk    (_UINT8_(0x1) << HDMI_CEC_INITIATOR_CTRL_IFLUSH_Pos) /* (HDMI_CEC_INITIATOR_CTRL) When this bit is asserted ('1'), data in the Initiator Interface FIFO is       cleared. When set, the bit is automatically cleared by hardware within one        register access cycle.                     This bit can be used to terminate an Initiator Interface message frame transfer.                     R/WC. Mask */
#define HDMI_CEC_INITIATOR_CTRL_IFLUSH(value) (HDMI_CEC_INITIATOR_CTRL_IFLUSH_Msk & (_UINT8_(value) << HDMI_CEC_INITIATOR_CTRL_IFLUSH_Pos)) /* Assigment of value for IFLUSH in the HDMI_CEC_INITIATOR_CTRL register */
#define HDMI_CEC_INITIATOR_CTRL_START_Pos     _UINT8_(1)                                           /* (HDMI_CEC_INITIATOR_CTRL) When this bit is asserted ('1'), the Initiator Interface begins a message                    frame transfer if the IFE bit is not asserted. If the Initiator                    Interface FIFO is empty when this bit is asserted, the message                    frame transfer begins as soon as a write to the Initiator Data Register                    occurs. In both cases, the bit is automatically cleared by hardware                    within one register access cycle.                    The START bit only needs to be asserted once per message frame.                    R/WC. Position */
#define HDMI_CEC_INITIATOR_CTRL_START_Msk     (_UINT8_(0x1) << HDMI_CEC_INITIATOR_CTRL_START_Pos)  /* (HDMI_CEC_INITIATOR_CTRL) When this bit is asserted ('1'), the Initiator Interface begins a message                    frame transfer if the IFE bit is not asserted. If the Initiator                    Interface FIFO is empty when this bit is asserted, the message                    frame transfer begins as soon as a write to the Initiator Data Register                    occurs. In both cases, the bit is automatically cleared by hardware                    within one register access cycle.                    The START bit only needs to be asserted once per message frame.                    R/WC. Mask */
#define HDMI_CEC_INITIATOR_CTRL_START(value)  (HDMI_CEC_INITIATOR_CTRL_START_Msk & (_UINT8_(value) << HDMI_CEC_INITIATOR_CTRL_START_Pos)) /* Assigment of value for START in the HDMI_CEC_INITIATOR_CTRL register */
#define HDMI_CEC_INITIATOR_CTRL_IFE_EN_Pos    _UINT8_(5)                                           /* (HDMI_CEC_INITIATOR_CTRL) Enable bit for the IFE interrupt.                        1=Interrupt is enabled with IFE is asserted                        0=Interrupt is disabled          R/WC. Position */
#define HDMI_CEC_INITIATOR_CTRL_IFE_EN_Msk    (_UINT8_(0x1) << HDMI_CEC_INITIATOR_CTRL_IFE_EN_Pos) /* (HDMI_CEC_INITIATOR_CTRL) Enable bit for the IFE interrupt.                        1=Interrupt is enabled with IFE is asserted                        0=Interrupt is disabled          R/WC. Mask */
#define HDMI_CEC_INITIATOR_CTRL_IFE_EN(value) (HDMI_CEC_INITIATOR_CTRL_IFE_EN_Msk & (_UINT8_(value) << HDMI_CEC_INITIATOR_CTRL_IFE_EN_Pos)) /* Assigment of value for IFE_EN in the HDMI_CEC_INITIATOR_CTRL register */
#define HDMI_CEC_INITIATOR_CTRL_IFDONE_EN_Pos _UINT8_(6)                                           /* (HDMI_CEC_INITIATOR_CTRL) Enable bit for the IFDONE interrupt.                        1=Interrupt is enabled with IFDONE is asserted                        0=Interrupt is disabled          R/WC. Position */
#define HDMI_CEC_INITIATOR_CTRL_IFDONE_EN_Msk (_UINT8_(0x1) << HDMI_CEC_INITIATOR_CTRL_IFDONE_EN_Pos) /* (HDMI_CEC_INITIATOR_CTRL) Enable bit for the IFDONE interrupt.                        1=Interrupt is enabled with IFDONE is asserted                        0=Interrupt is disabled          R/WC. Mask */
#define HDMI_CEC_INITIATOR_CTRL_IFDONE_EN(value) (HDMI_CEC_INITIATOR_CTRL_IFDONE_EN_Msk & (_UINT8_(value) << HDMI_CEC_INITIATOR_CTRL_IFDONE_EN_Pos)) /* Assigment of value for IFDONE_EN in the HDMI_CEC_INITIATOR_CTRL register */
#define HDMI_CEC_INITIATOR_CTRL_Msk           _UINT8_(0x63)                                        /* (HDMI_CEC_INITIATOR_CTRL) Register Mask  */


/* -------- HDMI_CEC_FOLLOW_CTRL : (HDMI_CEC Offset: 0x1C) (R/W 8) HDMI CEC Follower Control Register.     Only bits [6:0] are used. Bits [31:7] are Reserved. -------- */
#define HDMI_CEC_FOLLOW_CTRL_RESETVALUE       _UINT8_(0x00)                                        /*  (HDMI_CEC_FOLLOW_CTRL) HDMI CEC Follower Control Register.     Only bits [6:0] are used. Bits [31:7] are Reserved.  Reset Value */

#define HDMI_CEC_FOLLOW_CTRL_FFLUSH_Pos       _UINT8_(0)                                           /* (HDMI_CEC_FOLLOW_CTRL) When this bit is asserted ('1'), data in the Follower Interface FIFO is                     cleared. When set, the bit is automatically cleared by hardware                     within one register access cycle.                      R/WC. Position */
#define HDMI_CEC_FOLLOW_CTRL_FFLUSH_Msk       (_UINT8_(0x1) << HDMI_CEC_FOLLOW_CTRL_FFLUSH_Pos)    /* (HDMI_CEC_FOLLOW_CTRL) When this bit is asserted ('1'), data in the Follower Interface FIFO is                     cleared. When set, the bit is automatically cleared by hardware                     within one register access cycle.                      R/WC. Mask */
#define HDMI_CEC_FOLLOW_CTRL_FFLUSH(value)    (HDMI_CEC_FOLLOW_CTRL_FFLUSH_Msk & (_UINT8_(value) << HDMI_CEC_FOLLOW_CTRL_FFLUSH_Pos)) /* Assigment of value for FFLUSH in the HDMI_CEC_FOLLOW_CTRL register */
#define HDMI_CEC_FOLLOW_CTRL_FFF_EN_Pos       _UINT8_(4)                                           /* (HDMI_CEC_FOLLOW_CTRL) Enable bit for the FFF interrupt.                    1=Interrupt is enabled with FFF is asserted                    0=Interrupt is disabled                    R/WC. Position */
#define HDMI_CEC_FOLLOW_CTRL_FFF_EN_Msk       (_UINT8_(0x1) << HDMI_CEC_FOLLOW_CTRL_FFF_EN_Pos)    /* (HDMI_CEC_FOLLOW_CTRL) Enable bit for the FFF interrupt.                    1=Interrupt is enabled with FFF is asserted                    0=Interrupt is disabled                    R/WC. Mask */
#define HDMI_CEC_FOLLOW_CTRL_FFF_EN(value)    (HDMI_CEC_FOLLOW_CTRL_FFF_EN_Msk & (_UINT8_(value) << HDMI_CEC_FOLLOW_CTRL_FFF_EN_Pos)) /* Assigment of value for FFF_EN in the HDMI_CEC_FOLLOW_CTRL register */
#define HDMI_CEC_FOLLOW_CTRL_FDR_EN_Pos       _UINT8_(5)                                           /* (HDMI_CEC_FOLLOW_CTRL) Enable bit for the FDR interrupt.                        1=Interrupt is enabled with FDR is asserted                        0=Interrupt is disabled          R/WC. Position */
#define HDMI_CEC_FOLLOW_CTRL_FDR_EN_Msk       (_UINT8_(0x1) << HDMI_CEC_FOLLOW_CTRL_FDR_EN_Pos)    /* (HDMI_CEC_FOLLOW_CTRL) Enable bit for the FDR interrupt.                        1=Interrupt is enabled with FDR is asserted                        0=Interrupt is disabled          R/WC. Mask */
#define HDMI_CEC_FOLLOW_CTRL_FDR_EN(value)    (HDMI_CEC_FOLLOW_CTRL_FDR_EN_Msk & (_UINT8_(value) << HDMI_CEC_FOLLOW_CTRL_FDR_EN_Pos)) /* Assigment of value for FDR_EN in the HDMI_CEC_FOLLOW_CTRL register */
#define HDMI_CEC_FOLLOW_CTRL_FFDONE_EN_Pos    _UINT8_(6)                                           /* (HDMI_CEC_FOLLOW_CTRL) Enable bit for the FFDONE interrupt.                        1=Interrupt is enabled with FFDONE is asserted                        0=Interrupt is disabled          R/WC. Position */
#define HDMI_CEC_FOLLOW_CTRL_FFDONE_EN_Msk    (_UINT8_(0x1) << HDMI_CEC_FOLLOW_CTRL_FFDONE_EN_Pos) /* (HDMI_CEC_FOLLOW_CTRL) Enable bit for the FFDONE interrupt.                        1=Interrupt is enabled with FFDONE is asserted                        0=Interrupt is disabled          R/WC. Mask */
#define HDMI_CEC_FOLLOW_CTRL_FFDONE_EN(value) (HDMI_CEC_FOLLOW_CTRL_FFDONE_EN_Msk & (_UINT8_(value) << HDMI_CEC_FOLLOW_CTRL_FFDONE_EN_Pos)) /* Assigment of value for FFDONE_EN in the HDMI_CEC_FOLLOW_CTRL register */
#define HDMI_CEC_FOLLOW_CTRL_Msk              _UINT8_(0x71)                                        /* (HDMI_CEC_FOLLOW_CTRL) Register Mask  */


/* -------- HDMI_CEC_CLK_DIV : (HDMI_CEC Offset: 0x20) (R/W 32) HDMI CEC Clock Divier Register.\n    Reset value of this reister is 0x01E0.\n -------- */
#define HDMI_CEC_CLK_DIV_RESETVALUE           _UINT32_(0x1E0)                                      /*  (HDMI_CEC_CLK_DIV) HDMI CEC Clock Divier Register.\n    Reset value of this reister is 0x01E0.\n  Reset Value */

#define HDMI_CEC_CLK_DIV_CLK_DIV_Pos          _UINT32_(0)                                          /* (HDMI_CEC_CLK_DIV) HDMI CEC Clock Divier Register.\n Position */
#define HDMI_CEC_CLK_DIV_CLK_DIV_Msk          (_UINT32_(0xFFFFFFFF) << HDMI_CEC_CLK_DIV_CLK_DIV_Pos) /* (HDMI_CEC_CLK_DIV) HDMI CEC Clock Divier Register.\n Mask */
#define HDMI_CEC_CLK_DIV_CLK_DIV(value)       (HDMI_CEC_CLK_DIV_CLK_DIV_Msk & (_UINT32_(value) << HDMI_CEC_CLK_DIV_CLK_DIV_Pos)) /* Assigment of value for CLK_DIV in the HDMI_CEC_CLK_DIV register */
#define HDMI_CEC_CLK_DIV_Msk                  _UINT32_(0xFFFFFFFF)                                 /* (HDMI_CEC_CLK_DIV) Register Mask  */


/** \brief HDMI_CEC register offsets definitions */
#define HDMI_CEC_CTRL_REG_OFST         _UINT32_(0x00)      /* (HDMI_CEC_CTRL) HDMI CEC Control Register.     Only bits [3:0] are used. Bits [31:4] are Reserved. Offset */
#define HDMI_CEC_CLOG_ADDR_REG_OFST    _UINT32_(0x04)      /* (HDMI_CEC_CLOG_ADDR) HDMI CEC Claimed Logical Address Register.     Only bits [15:0] are used. Bits [31:16] are Reserved. Offset */
#define HDMI_CEC_INITIATOR_DAT_REG_OFST _UINT32_(0x08)      /* (HDMI_CEC_INITIATOR_DAT) HDMI CEC Initiator Data Register.     Only bits [8:0] are used. Bits [31:9] are Reserved. Offset */
#define HDMI_CEC_FOLLOW_DAT_REG_OFST   _UINT32_(0x0C)      /* (HDMI_CEC_FOLLOW_DAT) HDMI CEC Follower Data Register.     Only bits [8:0] are used. Bits [31:9] are Reserved. Offset */
#define HDMI_CEC_INITIATOR_STS_REG_OFST _UINT32_(0x10)      /* (HDMI_CEC_INITIATOR_STS) HDMI CEC Initiator Status Register.     Only bits [6:0] are used. Bits [31:7] are Reserved. Offset */
#define HDMI_CEC_FOLLOW_STS_REG_OFST   _UINT32_(0x14)      /* (HDMI_CEC_FOLLOW_STS) HDMI CEC Follower Status Register.     Only bits [6:0] are used. Bits [31:7] are Reserved. Offset */
#define HDMI_CEC_INITIATOR_CTRL_REG_OFST _UINT32_(0x18)      /* (HDMI_CEC_INITIATOR_CTRL) HDMI CEC Initiator Control Register.     Only bits [6:0] are used. Bits [31:7] are Reserved. Offset */
#define HDMI_CEC_FOLLOW_CTRL_REG_OFST  _UINT32_(0x1C)      /* (HDMI_CEC_FOLLOW_CTRL) HDMI CEC Follower Control Register.     Only bits [6:0] are used. Bits [31:7] are Reserved. Offset */
#define HDMI_CEC_CLK_DIV_REG_OFST      _UINT32_(0x20)      /* (HDMI_CEC_CLK_DIV) HDMI CEC Clock Divier Register.\n    Reset value of this reister is 0x01E0.\n Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief HDMI_CEC register API structure */
typedef struct
{  /* The HDMI-CEC provides high-level control functions between all the various audiovisual products in a users environment. */
  __IO  uint8_t                        HDMI_CEC_CTRL;      /**< Offset: 0x00 (R/W  8) HDMI CEC Control Register.     Only bits [3:0] are used. Bits [31:4] are Reserved. */
  __I   uint8_t                        Reserved1[0x03];
  __I   uint16_t                       HDMI_CEC_CLOG_ADDR; /**< Offset: 0x04 (R/   16) HDMI CEC Claimed Logical Address Register.     Only bits [15:0] are used. Bits [31:16] are Reserved. */
  __I   uint8_t                        Reserved2[0x02];
  __O   uint16_t                       HDMI_CEC_INITIATOR_DAT; /**< Offset: 0x08 ( /W  16) HDMI CEC Initiator Data Register.     Only bits [8:0] are used. Bits [31:9] are Reserved. */
  __I   uint8_t                        Reserved3[0x02];
  __I   uint16_t                       HDMI_CEC_FOLLOW_DAT; /**< Offset: 0x0C (R/   16) HDMI CEC Follower Data Register.     Only bits [8:0] are used. Bits [31:9] are Reserved. */
  __I   uint8_t                        Reserved4[0x02];
  __IO  uint8_t                        HDMI_CEC_INITIATOR_STS; /**< Offset: 0x10 (R/W  8) HDMI CEC Initiator Status Register.     Only bits [6:0] are used. Bits [31:7] are Reserved. */
  __I   uint8_t                        Reserved5[0x03];
  __IO  uint8_t                        HDMI_CEC_FOLLOW_STS; /**< Offset: 0x14 (R/W  8) HDMI CEC Follower Status Register.     Only bits [6:0] are used. Bits [31:7] are Reserved. */
  __I   uint8_t                        Reserved6[0x03];
  __IO  uint8_t                        HDMI_CEC_INITIATOR_CTRL; /**< Offset: 0x18 (R/W  8) HDMI CEC Initiator Control Register.     Only bits [6:0] are used. Bits [31:7] are Reserved. */
  __I   uint8_t                        Reserved7[0x03];
  __IO  uint8_t                        HDMI_CEC_FOLLOW_CTRL; /**< Offset: 0x1C (R/W  8) HDMI CEC Follower Control Register.     Only bits [6:0] are used. Bits [31:7] are Reserved. */
  __I   uint8_t                        Reserved8[0x03];
  __IO  uint32_t                       HDMI_CEC_CLK_DIV;   /**< Offset: 0x20 (R/W  32) HDMI CEC Clock Divier Register.\n    Reset value of this reister is 0x01E0.\n */
} hdmi_cec_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _0525SG12_HDMI_CEC_COMPONENT_H_ */
