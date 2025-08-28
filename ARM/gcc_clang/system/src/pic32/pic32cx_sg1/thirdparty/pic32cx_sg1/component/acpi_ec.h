/*
 * Component description for ACPI_EC
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
#ifndef _0525SG12_ACPI_EC_COMPONENT_H_
#define _0525SG12_ACPI_EC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR ACPI_EC                                      */
/* ************************************************************************** */

/* -------- ACPI_EC_OS_DATA : (ACPI_EC Offset: 0x00) (R/W 32) This is byte n of the 32-bit ACPI-OS DATA BYTES[3:0]. Writes by the ACPI_OS to the ACPI-OS DATA BYTES[n] are aliased\n    to the OS2EC DATA BYTES[n]. Reads by the ACPI_OS from the ACPI-OS DATA BYTES[n] are aliased to the EC2OS DATA BYTES[n]. -------- */
#define ACPI_EC_OS_DATA_RESETVALUE            _UINT32_(0x00)                                       /*  (ACPI_EC_OS_DATA) This is byte n of the 32-bit ACPI-OS DATA BYTES[3:0]. Writes by the ACPI_OS to the ACPI-OS DATA BYTES[n] are aliased\n    to the OS2EC DATA BYTES[n]. Reads by the ACPI_OS from the ACPI-OS DATA BYTES[n] are aliased to the EC2OS DATA BYTES[n].  Reset Value */

#define ACPI_EC_OS_DATA_Msk                   _UINT32_(0x00000000)                                 /* (ACPI_EC_OS_DATA) Register Mask  */


/* -------- ACPI_EC_OS_CMD : (ACPI_EC Offset: 0x04) ( /W 8) Writes to the this register are aliased in the OS2EC Data EC Byte 0 Register.\n              Writes to this register also set the CMD and IBF bits in the OS STATUS OS Register -------- */
#define ACPI_EC_OS_CMD_RESETVALUE             _UINT8_(0x00)                                        /*  (ACPI_EC_OS_CMD) Writes to the this register are aliased in the OS2EC Data EC Byte 0 Register.\n              Writes to this register also set the CMD and IBF bits in the OS STATUS OS Register  Reset Value */

#define ACPI_EC_OS_CMD_Msk                    _UINT8_(0x00)                                        /* (ACPI_EC_OS_CMD) Register Mask  */


/* -------- ACPI_EC_OS_STS : (ACPI_EC Offset: 0x04) ( R/ 8) OS STATUS -------- */
#define ACPI_EC_OS_STS_RESETVALUE             _UINT8_(0x00)                                        /*  (ACPI_EC_OS_STS) OS STATUS  Reset Value */

#define ACPI_EC_OS_STS_OBF_Pos                _UINT8_(0)                                           /* (ACPI_EC_OS_STS) The Output Buffer Full bit is set to indicate that a the ACPI_EC has written a data to the ACPI_OS and that data is ready.\n     This bit is automatically cleared when all the data has been read by the ACPI_OS.     Note: The setting and clearing of this OBF varies depending on the setting FOUR_BYTE_ACCESS bit in the OS Byte Control Register. Position */
#define ACPI_EC_OS_STS_OBF_Msk                (_UINT8_(0x1) << ACPI_EC_OS_STS_OBF_Pos)             /* (ACPI_EC_OS_STS) The Output Buffer Full bit is set to indicate that a the ACPI_EC has written a data to the ACPI_OS and that data is ready.\n     This bit is automatically cleared when all the data has been read by the ACPI_OS.     Note: The setting and clearing of this OBF varies depending on the setting FOUR_BYTE_ACCESS bit in the OS Byte Control Register. Mask */
#define ACPI_EC_OS_STS_OBF(value)             (ACPI_EC_OS_STS_OBF_Msk & (_UINT8_(value) << ACPI_EC_OS_STS_OBF_Pos)) /* Assigment of value for OBF in the ACPI_EC_OS_STS register */
#define ACPI_EC_OS_STS_IBF_Pos                _UINT8_(1)                                           /* (ACPI_EC_OS_STS) The Input Buffer Full bit is set to indicate that a the ACPI_OS has written a command or data to the ACPI_EC and that\n     data is ready. This bit is automatically cleared when data has been read by the ACPI_EC.\n     Note: The setting and clearing of this IBF varies depending on the setting of the following bits: CMD bit in this register\n     and FOUR_BYTE_ACCESS bit in the OS Byte Control Register. Position */
#define ACPI_EC_OS_STS_IBF_Msk                (_UINT8_(0x1) << ACPI_EC_OS_STS_IBF_Pos)             /* (ACPI_EC_OS_STS) The Input Buffer Full bit is set to indicate that a the ACPI_OS has written a command or data to the ACPI_EC and that\n     data is ready. This bit is automatically cleared when data has been read by the ACPI_EC.\n     Note: The setting and clearing of this IBF varies depending on the setting of the following bits: CMD bit in this register\n     and FOUR_BYTE_ACCESS bit in the OS Byte Control Register. Mask */
#define ACPI_EC_OS_STS_IBF(value)             (ACPI_EC_OS_STS_IBF_Msk & (_UINT8_(value) << ACPI_EC_OS_STS_IBF_Pos)) /* Assigment of value for IBF in the ACPI_EC_OS_STS register */
#define ACPI_EC_OS_STS_UD1B_Pos               _UINT8_(2)                                           /* (ACPI_EC_OS_STS) User Defined Position */
#define ACPI_EC_OS_STS_UD1B_Msk               (_UINT8_(0x1) << ACPI_EC_OS_STS_UD1B_Pos)            /* (ACPI_EC_OS_STS) User Defined Mask */
#define ACPI_EC_OS_STS_UD1B(value)            (ACPI_EC_OS_STS_UD1B_Msk & (_UINT8_(value) << ACPI_EC_OS_STS_UD1B_Pos)) /* Assigment of value for UD1B in the ACPI_EC_OS_STS register */
#define ACPI_EC_OS_STS_CMD_Pos                _UINT8_(3)                                           /* (ACPI_EC_OS_STS) This bit is set when the OS2EC Data EC Byte 0 Register contains a command byte written into ACPI OS COMMAND Register;\n     this bit is cleared when the OS2EC DATA BYTES[3:0] contains a data byte written into the ACPI-OS DATA BYTES[3:0].\n     This bit is hardware controlled:\n     ACPI_OS writes to any of the four ACPI-OS DATA BYTES[3:0] bytes clears this bit\n     ACPI_OS writes to the ACPI OS COMMAND Register sets this bit.\n     Note: This bit allows the embedded controller to differentiate the start of a command sequence from a data byte write operation. Position */
#define ACPI_EC_OS_STS_CMD_Msk                (_UINT8_(0x1) << ACPI_EC_OS_STS_CMD_Pos)             /* (ACPI_EC_OS_STS) This bit is set when the OS2EC Data EC Byte 0 Register contains a command byte written into ACPI OS COMMAND Register;\n     this bit is cleared when the OS2EC DATA BYTES[3:0] contains a data byte written into the ACPI-OS DATA BYTES[3:0].\n     This bit is hardware controlled:\n     ACPI_OS writes to any of the four ACPI-OS DATA BYTES[3:0] bytes clears this bit\n     ACPI_OS writes to the ACPI OS COMMAND Register sets this bit.\n     Note: This bit allows the embedded controller to differentiate the start of a command sequence from a data byte write operation. Mask */
#define ACPI_EC_OS_STS_CMD(value)             (ACPI_EC_OS_STS_CMD_Msk & (_UINT8_(value) << ACPI_EC_OS_STS_CMD_Pos)) /* Assigment of value for CMD in the ACPI_EC_OS_STS register */
#define ACPI_EC_OS_STS_BURST_Pos              _UINT8_(4)                                           /* (ACPI_EC_OS_STS) The BURST bit is set when the ACPI_EC is in Burst Mode for polled command processing; the BURST bit is cleared when the\n     ACPI_EC is in Normal mode for interrupt-driven command processing. The BURST bit is is an ACPI_EC-maintained software flag that\n     indicates the embedded controller has received the Burst Enable command from the host, has halted normal processing, and is\n     waiting for a series of commands to be sent from the host. Position */
#define ACPI_EC_OS_STS_BURST_Msk              (_UINT8_(0x1) << ACPI_EC_OS_STS_BURST_Pos)           /* (ACPI_EC_OS_STS) The BURST bit is set when the ACPI_EC is in Burst Mode for polled command processing; the BURST bit is cleared when the\n     ACPI_EC is in Normal mode for interrupt-driven command processing. The BURST bit is is an ACPI_EC-maintained software flag that\n     indicates the embedded controller has received the Burst Enable command from the host, has halted normal processing, and is\n     waiting for a series of commands to be sent from the host. Mask */
#define ACPI_EC_OS_STS_BURST(value)           (ACPI_EC_OS_STS_BURST_Msk & (_UINT8_(value) << ACPI_EC_OS_STS_BURST_Pos)) /* Assigment of value for BURST in the ACPI_EC_OS_STS register */
#define ACPI_EC_OS_STS_SCI_EVT_Pos            _UINT8_(5)                                           /* (ACPI_EC_OS_STS) This bit is set by software when an SCI event is pending; i.e., the ACPI_EC is requesting an SCI query; SCI Event flag\n     is clear when no SCI events are pending. This bit is an ACPI_EC-maintained software flag that is set when the embedded controller\n     has detected an internal event that requires operating system attention. The ACPI_EC sets this bit before generating an SCI to the OS. Position */
#define ACPI_EC_OS_STS_SCI_EVT_Msk            (_UINT8_(0x1) << ACPI_EC_OS_STS_SCI_EVT_Pos)         /* (ACPI_EC_OS_STS) This bit is set by software when an SCI event is pending; i.e., the ACPI_EC is requesting an SCI query; SCI Event flag\n     is clear when no SCI events are pending. This bit is an ACPI_EC-maintained software flag that is set when the embedded controller\n     has detected an internal event that requires operating system attention. The ACPI_EC sets this bit before generating an SCI to the OS. Mask */
#define ACPI_EC_OS_STS_SCI_EVT(value)         (ACPI_EC_OS_STS_SCI_EVT_Msk & (_UINT8_(value) << ACPI_EC_OS_STS_SCI_EVT_Pos)) /* Assigment of value for SCI_EVT in the ACPI_EC_OS_STS register */
#define ACPI_EC_OS_STS_SMI_EVT_Pos            _UINT8_(6)                                           /* (ACPI_EC_OS_STS) This bit is set when an SMI event is pending; i.e., the ACPI_EC is requesting an SMI query; This bit is cleared when\n     no SMI events are pending. This bit is an ACPI_EC-maintained software flag that is set when the ACPI_EC has detected an internal\n     event that requires system management interrupt handler attention. The ACPI_EC sets this bit before generating an SMI. Position */
#define ACPI_EC_OS_STS_SMI_EVT_Msk            (_UINT8_(0x1) << ACPI_EC_OS_STS_SMI_EVT_Pos)         /* (ACPI_EC_OS_STS) This bit is set when an SMI event is pending; i.e., the ACPI_EC is requesting an SMI query; This bit is cleared when\n     no SMI events are pending. This bit is an ACPI_EC-maintained software flag that is set when the ACPI_EC has detected an internal\n     event that requires system management interrupt handler attention. The ACPI_EC sets this bit before generating an SMI. Mask */
#define ACPI_EC_OS_STS_SMI_EVT(value)         (ACPI_EC_OS_STS_SMI_EVT_Msk & (_UINT8_(value) << ACPI_EC_OS_STS_SMI_EVT_Pos)) /* Assigment of value for SMI_EVT in the ACPI_EC_OS_STS register */
#define ACPI_EC_OS_STS_UD0B_Pos               _UINT8_(7)                                           /* (ACPI_EC_OS_STS) User Defined Position */
#define ACPI_EC_OS_STS_UD0B_Msk               (_UINT8_(0x1) << ACPI_EC_OS_STS_UD0B_Pos)            /* (ACPI_EC_OS_STS) User Defined Mask */
#define ACPI_EC_OS_STS_UD0B(value)            (ACPI_EC_OS_STS_UD0B_Msk & (_UINT8_(value) << ACPI_EC_OS_STS_UD0B_Pos)) /* Assigment of value for UD0B in the ACPI_EC_OS_STS register */
#define ACPI_EC_OS_STS_Msk                    _UINT8_(0xFF)                                        /* (ACPI_EC_OS_STS) Register Mask  */


/* -------- ACPI_EC_OS_BYTE_CTRL : (ACPI_EC Offset: 0x05) ( R/ 8) OS Byte Control Register -------- */
#define ACPI_EC_OS_BYTE_CTRL_RESETVALUE       _UINT8_(0x00)                                        /*  (ACPI_EC_OS_BYTE_CTRL) OS Byte Control Register  Reset Value */

#define ACPI_EC_OS_BYTE_CTRL_FOUR_BYTE_ACCESS_Pos _UINT8_(0)                                           /* (ACPI_EC_OS_BYTE_CTRL) When this bit is set to '1', the ACPI Embedded Controller Interface (ACPI-ECI) accesses four bytes through the\n     ACPI-OS DATA BYTES[3:0]. When this bit is cleared to '0', the ACPI Embedded Controller Interface (ACPI-ECI) accesses one byte\n     through the ACPI OS Data Register Byte 0 Register. This corresponds to Legacy Mode. This bit effects the behaviour of the IBF\n     and OBF bits in the OS STATUS OS Register. Position */
#define ACPI_EC_OS_BYTE_CTRL_FOUR_BYTE_ACCESS_Msk (_UINT8_(0x1) << ACPI_EC_OS_BYTE_CTRL_FOUR_BYTE_ACCESS_Pos) /* (ACPI_EC_OS_BYTE_CTRL) When this bit is set to '1', the ACPI Embedded Controller Interface (ACPI-ECI) accesses four bytes through the\n     ACPI-OS DATA BYTES[3:0]. When this bit is cleared to '0', the ACPI Embedded Controller Interface (ACPI-ECI) accesses one byte\n     through the ACPI OS Data Register Byte 0 Register. This corresponds to Legacy Mode. This bit effects the behaviour of the IBF\n     and OBF bits in the OS STATUS OS Register. Mask */
#define ACPI_EC_OS_BYTE_CTRL_FOUR_BYTE_ACCESS(value) (ACPI_EC_OS_BYTE_CTRL_FOUR_BYTE_ACCESS_Msk & (_UINT8_(value) << ACPI_EC_OS_BYTE_CTRL_FOUR_BYTE_ACCESS_Pos)) /* Assigment of value for FOUR_BYTE_ACCESS in the ACPI_EC_OS_BYTE_CTRL register */
#define ACPI_EC_OS_BYTE_CTRL_Msk              _UINT8_(0x01)                                        /* (ACPI_EC_OS_BYTE_CTRL) Register Mask  */


/* -------- ACPI_EC_EC2OS_DATA : (ACPI_EC Offset: 0x100) (R/W 32) This is byte n of the 32-bit EC2OS DATA BYTES[3:0]. Writes by the ACPI_EC to the EC2OS DATA BYTES[3:0] are aliased to the\n    ACPI-OS DATA BYTES[3:0]. -------- */
#define ACPI_EC_EC2OS_DATA_RESETVALUE         _UINT32_(0x00)                                       /*  (ACPI_EC_EC2OS_DATA) This is byte n of the 32-bit EC2OS DATA BYTES[3:0]. Writes by the ACPI_EC to the EC2OS DATA BYTES[3:0] are aliased to the\n    ACPI-OS DATA BYTES[3:0].  Reset Value */

#define ACPI_EC_EC2OS_DATA_Msk                _UINT32_(0x00000000)                                 /* (ACPI_EC_EC2OS_DATA) Register Mask  */


/* -------- ACPI_EC_EC_STATUS : (ACPI_EC Offset: 0x104) (R/W 8) EC STATUS -------- */
#define ACPI_EC_EC_STATUS_RESETVALUE          _UINT8_(0x00)                                        /*  (ACPI_EC_EC_STATUS) EC STATUS  Reset Value */

#define ACPI_EC_EC_STATUS_OBF_Pos             _UINT8_(0)                                           /* (ACPI_EC_EC_STATUS) The Output Buffer Full bit is set to indicate that a the ACPI_EC has written a data to the ACPI_OS and that data is ready. Position */
#define ACPI_EC_EC_STATUS_OBF_Msk             (_UINT8_(0x1) << ACPI_EC_EC_STATUS_OBF_Pos)          /* (ACPI_EC_EC_STATUS) The Output Buffer Full bit is set to indicate that a the ACPI_EC has written a data to the ACPI_OS and that data is ready. Mask */
#define ACPI_EC_EC_STATUS_OBF(value)          (ACPI_EC_EC_STATUS_OBF_Msk & (_UINT8_(value) << ACPI_EC_EC_STATUS_OBF_Pos)) /* Assigment of value for OBF in the ACPI_EC_EC_STATUS register */
#define ACPI_EC_EC_STATUS_IBF_Pos             _UINT8_(1)                                           /* (ACPI_EC_EC_STATUS) The Input Buffer Full bit is set to indicate that a the ACPI_OS has written a command or data to the ACPI_EC and that data is ready. Position */
#define ACPI_EC_EC_STATUS_IBF_Msk             (_UINT8_(0x1) << ACPI_EC_EC_STATUS_IBF_Pos)          /* (ACPI_EC_EC_STATUS) The Input Buffer Full bit is set to indicate that a the ACPI_OS has written a command or data to the ACPI_EC and that data is ready. Mask */
#define ACPI_EC_EC_STATUS_IBF(value)          (ACPI_EC_EC_STATUS_IBF_Msk & (_UINT8_(value) << ACPI_EC_EC_STATUS_IBF_Pos)) /* Assigment of value for IBF in the ACPI_EC_EC_STATUS register */
#define ACPI_EC_EC_STATUS_UD1A_Pos            _UINT8_(2)                                           /* (ACPI_EC_EC_STATUS) UD1A User Defined Position */
#define ACPI_EC_EC_STATUS_UD1A_Msk            (_UINT8_(0x1) << ACPI_EC_EC_STATUS_UD1A_Pos)         /* (ACPI_EC_EC_STATUS) UD1A User Defined Mask */
#define ACPI_EC_EC_STATUS_UD1A(value)         (ACPI_EC_EC_STATUS_UD1A_Msk & (_UINT8_(value) << ACPI_EC_EC_STATUS_UD1A_Pos)) /* Assigment of value for UD1A in the ACPI_EC_EC_STATUS register */
#define ACPI_EC_EC_STATUS_CMD_Pos             _UINT8_(3)                                           /* (ACPI_EC_EC_STATUS) This bit is set when the OS2EC Data EC Byte 0 Register contains a command byte written into ACPI OS COMMAND Register Position */
#define ACPI_EC_EC_STATUS_CMD_Msk             (_UINT8_(0x1) << ACPI_EC_EC_STATUS_CMD_Pos)          /* (ACPI_EC_EC_STATUS) This bit is set when the OS2EC Data EC Byte 0 Register contains a command byte written into ACPI OS COMMAND Register Mask */
#define ACPI_EC_EC_STATUS_CMD(value)          (ACPI_EC_EC_STATUS_CMD_Msk & (_UINT8_(value) << ACPI_EC_EC_STATUS_CMD_Pos)) /* Assigment of value for CMD in the ACPI_EC_EC_STATUS register */
#define ACPI_EC_EC_STATUS_BURST_Pos           _UINT8_(4)                                           /* (ACPI_EC_EC_STATUS) The BURST bit is set when the ACPI_EC is in Burst Mode Position */
#define ACPI_EC_EC_STATUS_BURST_Msk           (_UINT8_(0x1) << ACPI_EC_EC_STATUS_BURST_Pos)        /* (ACPI_EC_EC_STATUS) The BURST bit is set when the ACPI_EC is in Burst Mode Mask */
#define ACPI_EC_EC_STATUS_BURST(value)        (ACPI_EC_EC_STATUS_BURST_Msk & (_UINT8_(value) << ACPI_EC_EC_STATUS_BURST_Pos)) /* Assigment of value for BURST in the ACPI_EC_EC_STATUS register */
#define ACPI_EC_EC_STATUS_SCI_EVT_Pos         _UINT8_(5)                                           /* (ACPI_EC_EC_STATUS) This bit is set by software when an SCI event is pending Position */
#define ACPI_EC_EC_STATUS_SCI_EVT_Msk         (_UINT8_(0x1) << ACPI_EC_EC_STATUS_SCI_EVT_Pos)      /* (ACPI_EC_EC_STATUS) This bit is set by software when an SCI event is pending Mask */
#define ACPI_EC_EC_STATUS_SCI_EVT(value)      (ACPI_EC_EC_STATUS_SCI_EVT_Msk & (_UINT8_(value) << ACPI_EC_EC_STATUS_SCI_EVT_Pos)) /* Assigment of value for SCI_EVT in the ACPI_EC_EC_STATUS register */
#define ACPI_EC_EC_STATUS_SMI_EVT_Pos         _UINT8_(6)                                           /* (ACPI_EC_EC_STATUS) This bit is set when an SMI event is pending Position */
#define ACPI_EC_EC_STATUS_SMI_EVT_Msk         (_UINT8_(0x1) << ACPI_EC_EC_STATUS_SMI_EVT_Pos)      /* (ACPI_EC_EC_STATUS) This bit is set when an SMI event is pending Mask */
#define ACPI_EC_EC_STATUS_SMI_EVT(value)      (ACPI_EC_EC_STATUS_SMI_EVT_Msk & (_UINT8_(value) << ACPI_EC_EC_STATUS_SMI_EVT_Pos)) /* Assigment of value for SMI_EVT in the ACPI_EC_EC_STATUS register */
#define ACPI_EC_EC_STATUS_UD0A_Pos            _UINT8_(7)                                           /* (ACPI_EC_EC_STATUS) User Defined Position */
#define ACPI_EC_EC_STATUS_UD0A_Msk            (_UINT8_(0x1) << ACPI_EC_EC_STATUS_UD0A_Pos)         /* (ACPI_EC_EC_STATUS) User Defined Mask */
#define ACPI_EC_EC_STATUS_UD0A(value)         (ACPI_EC_EC_STATUS_UD0A_Msk & (_UINT8_(value) << ACPI_EC_EC_STATUS_UD0A_Pos)) /* Assigment of value for UD0A in the ACPI_EC_EC_STATUS register */
#define ACPI_EC_EC_STATUS_Msk                 _UINT8_(0xFF)                                        /* (ACPI_EC_EC_STATUS) Register Mask  */


/* -------- ACPI_EC_EC_BYTE_CTRL : (ACPI_EC Offset: 0x105) (R/W 8) Byte Control EC-Register -------- */
#define ACPI_EC_EC_BYTE_CTRL_RESETVALUE       _UINT8_(0x00)                                        /*  (ACPI_EC_EC_BYTE_CTRL) Byte Control EC-Register  Reset Value */

#define ACPI_EC_EC_BYTE_CTRL_FOUR_BYTE_ACCESS_Pos _UINT8_(0)                                           /* (ACPI_EC_EC_BYTE_CTRL) When this bit is set to '1', the ACPI Embedded Controller Interface (ACPI-ECI) accesses four bytes through the\n     ACPI-OS DATA BYTES[3:0]. When this bit is cleared to '0', the ACPI Embedded Controller Interface (ACPI-ECI) accesses one byte\n     through the ACPI OS Data Register Byte 0 Register. This corresponds to Legacy Mode. This bit effects the behaviour of the IBF\n     and OBF bits in the OS STATUS OS Register. Position */
#define ACPI_EC_EC_BYTE_CTRL_FOUR_BYTE_ACCESS_Msk (_UINT8_(0x1) << ACPI_EC_EC_BYTE_CTRL_FOUR_BYTE_ACCESS_Pos) /* (ACPI_EC_EC_BYTE_CTRL) When this bit is set to '1', the ACPI Embedded Controller Interface (ACPI-ECI) accesses four bytes through the\n     ACPI-OS DATA BYTES[3:0]. When this bit is cleared to '0', the ACPI Embedded Controller Interface (ACPI-ECI) accesses one byte\n     through the ACPI OS Data Register Byte 0 Register. This corresponds to Legacy Mode. This bit effects the behaviour of the IBF\n     and OBF bits in the OS STATUS OS Register. Mask */
#define ACPI_EC_EC_BYTE_CTRL_FOUR_BYTE_ACCESS(value) (ACPI_EC_EC_BYTE_CTRL_FOUR_BYTE_ACCESS_Msk & (_UINT8_(value) << ACPI_EC_EC_BYTE_CTRL_FOUR_BYTE_ACCESS_Pos)) /* Assigment of value for FOUR_BYTE_ACCESS in the ACPI_EC_EC_BYTE_CTRL register */
#define ACPI_EC_EC_BYTE_CTRL_Msk              _UINT8_(0x01)                                        /* (ACPI_EC_EC_BYTE_CTRL) Register Mask  */


/* -------- ACPI_EC_OS2EC_DATA : (ACPI_EC Offset: 0x108) (R/W 32) OS_TO_EC_DATA_BYTE_n. This is byte n of the 32-bit OS2EC DATA BYTES[3:0]. When the CMD bit in the OS STATUS OS Register\n    is cleared to '0', reads by the ACPI_EC from the OS2EC DATA BYTES[3:0] are aliased to the ACPI-OS DATA BYTES[3:0]. -------- */
#define ACPI_EC_OS2EC_DATA_RESETVALUE         _UINT32_(0x00)                                       /*  (ACPI_EC_OS2EC_DATA) OS_TO_EC_DATA_BYTE_n. This is byte n of the 32-bit OS2EC DATA BYTES[3:0]. When the CMD bit in the OS STATUS OS Register\n    is cleared to '0', reads by the ACPI_EC from the OS2EC DATA BYTES[3:0] are aliased to the ACPI-OS DATA BYTES[3:0].  Reset Value */

#define ACPI_EC_OS2EC_DATA_Msk                _UINT32_(0x00000000)                                 /* (ACPI_EC_OS2EC_DATA) Register Mask  */


/** \brief ACPI_EC register offsets definitions */
#define ACPI_EC_OS_DATA_REG_OFST       _UINT32_(0x00)      /* (ACPI_EC_OS_DATA) This is byte n of the 32-bit ACPI-OS DATA BYTES[3:0]. Writes by the ACPI_OS to the ACPI-OS DATA BYTES[n] are aliased\n    to the OS2EC DATA BYTES[n]. Reads by the ACPI_OS from the ACPI-OS DATA BYTES[n] are aliased to the EC2OS DATA BYTES[n]. Offset */
#define ACPI_EC_OS_CMD_REG_OFST        _UINT32_(0x04)      /* (ACPI_EC_OS_CMD) Writes to the this register are aliased in the OS2EC Data EC Byte 0 Register.\n              Writes to this register also set the CMD and IBF bits in the OS STATUS OS Register Offset */
#define ACPI_EC_OS_STS_REG_OFST        _UINT32_(0x04)      /* (ACPI_EC_OS_STS) OS STATUS Offset */
#define ACPI_EC_OS_BYTE_CTRL_REG_OFST  _UINT32_(0x05)      /* (ACPI_EC_OS_BYTE_CTRL) OS Byte Control Register Offset */
#define ACPI_EC_EC2OS_DATA_REG_OFST    _UINT32_(0x100)     /* (ACPI_EC_EC2OS_DATA) This is byte n of the 32-bit EC2OS DATA BYTES[3:0]. Writes by the ACPI_EC to the EC2OS DATA BYTES[3:0] are aliased to the\n    ACPI-OS DATA BYTES[3:0]. Offset */
#define ACPI_EC_EC_STATUS_REG_OFST     _UINT32_(0x104)     /* (ACPI_EC_EC_STATUS) EC STATUS Offset */
#define ACPI_EC_EC_BYTE_CTRL_REG_OFST  _UINT32_(0x105)     /* (ACPI_EC_EC_BYTE_CTRL) Byte Control EC-Register Offset */
#define ACPI_EC_OS2EC_DATA_REG_OFST    _UINT32_(0x108)     /* (ACPI_EC_OS2EC_DATA) OS_TO_EC_DATA_BYTE_n. This is byte n of the 32-bit OS2EC DATA BYTES[3:0]. When the CMD bit in the OS STATUS OS Register\n    is cleared to '0', reads by the ACPI_EC from the OS2EC DATA BYTES[3:0] are aliased to the ACPI-OS DATA BYTES[3:0]. Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief ACPI_EC register API structure */
typedef struct
{  /* The ACPI-ECI provides a four byte full duplex data interface. */
  __IO  uint32_t                       ACPI_EC_OS_DATA;    /**< Offset: 0x00 (R/W  32) This is byte n of the 32-bit ACPI-OS DATA BYTES[3:0]. Writes by the ACPI_OS to the ACPI-OS DATA BYTES[n] are aliased\n    to the OS2EC DATA BYTES[n]. Reads by the ACPI_OS from the ACPI-OS DATA BYTES[n] are aliased to the EC2OS DATA BYTES[n]. */
  union
  {
      __I   uint8_t                        ACPI_EC_OS_STS;     /**< Offset: 0x04 (R/   8) OS STATUS */
      __O   uint8_t                        ACPI_EC_OS_CMD;     /**< Offset: 0x04 ( /W  8) Writes to the this register are aliased in the OS2EC Data EC Byte 0 Register.\n              Writes to this register also set the CMD and IBF bits in the OS STATUS OS Register */
  };
  __I   uint8_t                        ACPI_EC_OS_BYTE_CTRL; /**< Offset: 0x05 (R/   8) OS Byte Control Register */
  __I   uint8_t                        Reserved1[0xFA];
  __IO  uint32_t                       ACPI_EC_EC2OS_DATA; /**< Offset: 0x100 (R/W  32) This is byte n of the 32-bit EC2OS DATA BYTES[3:0]. Writes by the ACPI_EC to the EC2OS DATA BYTES[3:0] are aliased to the\n    ACPI-OS DATA BYTES[3:0]. */
  __IO  uint8_t                        ACPI_EC_EC_STATUS;  /**< Offset: 0x104 (R/W  8) EC STATUS */
  __IO  uint8_t                        ACPI_EC_EC_BYTE_CTRL; /**< Offset: 0x105 (R/W  8) Byte Control EC-Register */
  __I   uint8_t                        Reserved2[0x02];
  __IO  uint32_t                       ACPI_EC_OS2EC_DATA; /**< Offset: 0x108 (R/W  32) OS_TO_EC_DATA_BYTE_n. This is byte n of the 32-bit OS2EC DATA BYTES[3:0]. When the CMD bit in the OS STATUS OS Register\n    is cleared to '0', reads by the ACPI_EC from the OS2EC DATA BYTES[3:0] are aliased to the ACPI-OS DATA BYTES[3:0]. */
} acpi_ec_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _0525SG12_ACPI_EC_COMPONENT_H_ */
