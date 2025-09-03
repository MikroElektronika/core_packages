/*
 * Component description for PS2
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
#ifndef _0525SG12_PS2_COMPONENT_H_
#define _0525SG12_PS2_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR PS2                                          */
/* ************************************************************************** */

/* -------- PS2_TX_DATA : (PS2 Offset: 0x00) ( /W 32) Writes to bits 7:0 of this register start a transmission of the data in this register to the peripheral -------- */
#define PS2_TX_DATA_RESETVALUE                _UINT32_(0x00)                                       /*  (PS2_TX_DATA) Writes to bits 7:0 of this register start a transmission of the data in this register to the peripheral  Reset Value */

#define PS2_TX_DATA_Msk                       _UINT32_(0x00000000)                                 /* (PS2_TX_DATA) Register Mask  */


/* -------- PS2_RX_DATA : (PS2 Offset: 0x00) ( R/ 32) Data received from a peripheral are recorded in this register in bits 7:0. -------- */
#define PS2_RX_DATA_RESETVALUE                _UINT32_(0xFF)                                       /*  (PS2_RX_DATA) Data received from a peripheral are recorded in this register in bits 7:0.  Reset Value */

#define PS2_RX_DATA_Msk                       _UINT32_(0x00000000)                                 /* (PS2_RX_DATA) Register Mask  */


/* -------- PS2_CONTROL : (PS2 Offset: 0x04) (R/W 32) PS2 Control Register -------- */
#define PS2_CONTROL_RESETVALUE                _UINT32_(0x00)                                       /*  (PS2_CONTROL) PS2 Control Register  Reset Value */

#define PS2_CONTROL_TR_Pos                    _UINT32_(0)                                          /* (PS2_CONTROL) PS/2 Transmit/Receive \n                  0=The P2/2 channel is enabled to receive data.\n                  1=The PS2 channel is enabled to transmit data. Position */
#define PS2_CONTROL_TR_Msk                    (_UINT32_(0x1) << PS2_CONTROL_TR_Pos)                /* (PS2_CONTROL) PS/2 Transmit/Receive \n                  0=The P2/2 channel is enabled to receive data.\n                  1=The PS2 channel is enabled to transmit data. Mask */
#define PS2_CONTROL_TR(value)                 (PS2_CONTROL_TR_Msk & (_UINT32_(value) << PS2_CONTROL_TR_Pos)) /* Assigment of value for TR in the PS2_CONTROL register */
#define PS2_CONTROL_EN_Pos                    _UINT32_(1)                                          /* (PS2_CONTROL) PS/2 Enable. 0=The PS/2 state machine is disabled. 1=The PS/2 state machine is enabled. Position */
#define PS2_CONTROL_EN_Msk                    (_UINT32_(0x1) << PS2_CONTROL_EN_Pos)                /* (PS2_CONTROL) PS/2 Enable. 0=The PS/2 state machine is disabled. 1=The PS/2 state machine is enabled. Mask */
#define PS2_CONTROL_EN(value)                 (PS2_CONTROL_EN_Msk & (_UINT32_(value) << PS2_CONTROL_EN_Pos)) /* Assigment of value for EN in the PS2_CONTROL register */
#define PS2_CONTROL_PARITY_Pos                _UINT32_(2)                                          /* (PS2_CONTROL) 00b=Receiver expects Odd Parity (default). \n                  01b=Receiver expects Even Parity.\n                  10b=Receiver ignores level of the parity bit (10th bit is not interpreted as a parity bit).\n                  11b=Reserved Position */
#define PS2_CONTROL_PARITY_Msk                (_UINT32_(0x3) << PS2_CONTROL_PARITY_Pos)            /* (PS2_CONTROL) 00b=Receiver expects Odd Parity (default). \n                  01b=Receiver expects Even Parity.\n                  10b=Receiver ignores level of the parity bit (10th bit is not interpreted as a parity bit).\n                  11b=Reserved Mask */
#define PS2_CONTROL_PARITY(value)             (PS2_CONTROL_PARITY_Msk & (_UINT32_(value) << PS2_CONTROL_PARITY_Pos)) /* Assigment of value for PARITY in the PS2_CONTROL register */
#define PS2_CONTROL_STOP_Pos                  _UINT32_(4)                                          /* (PS2_CONTROL) 00b=Receiver expects an active high stop bit. \n                  01b=Receiver expects an active low stop bit.\n                  10b=Receiver ignores the level of the Stop bit (11th bit is not interpreted as a stop bit). \n                  11b=Reserved. Position */
#define PS2_CONTROL_STOP_Msk                  (_UINT32_(0x3) << PS2_CONTROL_STOP_Pos)              /* (PS2_CONTROL) 00b=Receiver expects an active high stop bit. \n                  01b=Receiver expects an active low stop bit.\n                  10b=Receiver ignores the level of the Stop bit (11th bit is not interpreted as a stop bit). \n                  11b=Reserved. Mask */
#define PS2_CONTROL_STOP(value)               (PS2_CONTROL_STOP_Msk & (_UINT32_(value) << PS2_CONTROL_STOP_Pos)) /* Assigment of value for STOP in the PS2_CONTROL register */
#define PS2_CONTROL_Msk                       _UINT32_(0x0000003F)                                 /* (PS2_CONTROL) Register Mask  */


/* -------- PS2_STATUS : (PS2 Offset: 0x08) (R/W 32) PS2 Status Register -------- */
#define PS2_STATUS_RESETVALUE                 _UINT32_(0x10)                                       /*  (PS2_STATUS) PS2 Status Register  Reset Value */

#define PS2_STATUS_RDATA_RDY_Pos              _UINT32_(0)                                          /* (PS2_STATUS) Receive Data Ready. Reading the Receive Register clears this bit. A low to high transition on this bit generates a PS2 Activity interrupt. Position */
#define PS2_STATUS_RDATA_RDY_Msk              (_UINT32_(0x1) << PS2_STATUS_RDATA_RDY_Pos)          /* (PS2_STATUS) Receive Data Ready. Reading the Receive Register clears this bit. A low to high transition on this bit generates a PS2 Activity interrupt. Mask */
#define PS2_STATUS_RDATA_RDY(value)           (PS2_STATUS_RDATA_RDY_Msk & (_UINT32_(value) << PS2_STATUS_RDATA_RDY_Pos)) /* Assigment of value for RDATA_RDY in the PS2_STATUS register */
#define PS2_STATUS_REC_TIMEOUT_Pos            _UINT32_(1)                                          /* (PS2_STATUS) Receive Timeout. The REC_TIMEOUT bit is cleared when the Status Register is read. A low to high transition on this bit generates a PS2 Activity interrupt. (R/WC) Position */
#define PS2_STATUS_REC_TIMEOUT_Msk            (_UINT32_(0x1) << PS2_STATUS_REC_TIMEOUT_Pos)        /* (PS2_STATUS) Receive Timeout. The REC_TIMEOUT bit is cleared when the Status Register is read. A low to high transition on this bit generates a PS2 Activity interrupt. (R/WC) Mask */
#define PS2_STATUS_REC_TIMEOUT(value)         (PS2_STATUS_REC_TIMEOUT_Msk & (_UINT32_(value) << PS2_STATUS_REC_TIMEOUT_Pos)) /* Assigment of value for REC_TIMEOUT in the PS2_STATUS register */
#define PS2_STATUS_PE_Pos                     _UINT32_(2)                                          /* (PS2_STATUS) Parity Error Position */
#define PS2_STATUS_PE_Msk                     (_UINT32_(0x1) << PS2_STATUS_PE_Pos)                 /* (PS2_STATUS) Parity Error Mask */
#define PS2_STATUS_PE(value)                  (PS2_STATUS_PE_Msk & (_UINT32_(value) << PS2_STATUS_PE_Pos)) /* Assigment of value for PE in the PS2_STATUS register */
#define PS2_STATUS_FE_Pos                     _UINT32_(3)                                          /* (PS2_STATUS) Framing Error Position */
#define PS2_STATUS_FE_Msk                     (_UINT32_(0x1) << PS2_STATUS_FE_Pos)                 /* (PS2_STATUS) Framing Error Mask */
#define PS2_STATUS_FE(value)                  (PS2_STATUS_FE_Msk & (_UINT32_(value) << PS2_STATUS_FE_Pos)) /* Assigment of value for FE in the PS2_STATUS register */
#define PS2_STATUS_XMIT_IDLE_Pos              _UINT32_(4)                                          /* (PS2_STATUS) Transmitter Idle. 0=The channel is actively transmitting PS/2 data. 1=The channel is not transmitting. A low to high transition on this bit generates a PS2 Activity interrupt. Position */
#define PS2_STATUS_XMIT_IDLE_Msk              (_UINT32_(0x1) << PS2_STATUS_XMIT_IDLE_Pos)          /* (PS2_STATUS) Transmitter Idle. 0=The channel is actively transmitting PS/2 data. 1=The channel is not transmitting. A low to high transition on this bit generates a PS2 Activity interrupt. Mask */
#define PS2_STATUS_XMIT_IDLE(value)           (PS2_STATUS_XMIT_IDLE_Msk & (_UINT32_(value) << PS2_STATUS_XMIT_IDLE_Pos)) /* Assigment of value for XMIT_IDLE in the PS2_STATUS register */
#define PS2_STATUS_XMIT_TIME_OUT_Pos          _UINT32_(5)                                          /* (PS2_STATUS) Transmitter Time-out. When the XMIT_TIMEOUT bit is set, the PS2_T/R bit is held clear, the PS/2 channel's CLK line is pulled low for a minimum of 300us until the PS/2 Status register is read. Position */
#define PS2_STATUS_XMIT_TIME_OUT_Msk          (_UINT32_(0x1) << PS2_STATUS_XMIT_TIME_OUT_Pos)      /* (PS2_STATUS) Transmitter Time-out. When the XMIT_TIMEOUT bit is set, the PS2_T/R bit is held clear, the PS/2 channel's CLK line is pulled low for a minimum of 300us until the PS/2 Status register is read. Mask */
#define PS2_STATUS_XMIT_TIME_OUT(value)       (PS2_STATUS_XMIT_TIME_OUT_Msk & (_UINT32_(value) << PS2_STATUS_XMIT_TIME_OUT_Pos)) /* Assigment of value for XMIT_TIME_OUT in the PS2_STATUS register */
#define PS2_STATUS_RX_BUSY_Pos                _UINT32_(6)                                          /* (PS2_STATUS) Receive Channel Busy.\n                  0=The channel is idle\n                  1=The channel is actively receiving PS/2 data Position */
#define PS2_STATUS_RX_BUSY_Msk                (_UINT32_(0x1) << PS2_STATUS_RX_BUSY_Pos)            /* (PS2_STATUS) Receive Channel Busy.\n                  0=The channel is idle\n                  1=The channel is actively receiving PS/2 data Mask */
#define PS2_STATUS_RX_BUSY(value)             (PS2_STATUS_RX_BUSY_Msk & (_UINT32_(value) << PS2_STATUS_RX_BUSY_Pos)) /* Assigment of value for RX_BUSY in the PS2_STATUS register */
#define PS2_STATUS_XMIT_START_TIMEOUT_Pos     _UINT32_(7)                                          /* (PS2_STATUS) Transmit Start Timeout.\n                  0=No transmit start timeout detected\n                  1=A start bit was not received within 25 ms following the transmit start event. The transmit start bit time-out condition is also indicated by the XMIT_TIMEOUT bit. Position */
#define PS2_STATUS_XMIT_START_TIMEOUT_Msk     (_UINT32_(0x1) << PS2_STATUS_XMIT_START_TIMEOUT_Pos) /* (PS2_STATUS) Transmit Start Timeout.\n                  0=No transmit start timeout detected\n                  1=A start bit was not received within 25 ms following the transmit start event. The transmit start bit time-out condition is also indicated by the XMIT_TIMEOUT bit. Mask */
#define PS2_STATUS_XMIT_START_TIMEOUT(value)  (PS2_STATUS_XMIT_START_TIMEOUT_Msk & (_UINT32_(value) << PS2_STATUS_XMIT_START_TIMEOUT_Pos)) /* Assigment of value for XMIT_START_TIMEOUT in the PS2_STATUS register */
#define PS2_STATUS_Msk                        _UINT32_(0x000000FF)                                 /* (PS2_STATUS) Register Mask  */


/** \brief PS2 register offsets definitions */
#define PS2_TX_DATA_REG_OFST           _UINT32_(0x00)      /* (PS2_TX_DATA) Writes to bits 7:0 of this register start a transmission of the data in this register to the peripheral Offset */
#define PS2_RX_DATA_REG_OFST           _UINT32_(0x00)      /* (PS2_RX_DATA) Data received from a peripheral are recorded in this register in bits 7:0. Offset */
#define PS2_CONTROL_REG_OFST           _UINT32_(0x04)      /* (PS2_CONTROL) PS2 Control Register Offset */
#define PS2_STATUS_REG_OFST            _UINT32_(0x08)      /* (PS2_STATUS) PS2 Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief PS2 register API structure */
typedef struct
{  /* The four PS/2 Ports implementation eliminates the need to bit bang I/O ports to generate PS/2 traffic */
  union
  {
      __I   uint32_t                       PS2_RX_DATA;        /**< Offset: 0x00 (R/   32) Data received from a peripheral are recorded in this register in bits 7:0. */
      __O   uint32_t                       PS2_TX_DATA;        /**< Offset: 0x00 ( /W  32) Writes to bits 7:0 of this register start a transmission of the data in this register to the peripheral */
  };
  __IO  uint32_t                       PS2_CONTROL;        /**< Offset: 0x04 (R/W  32) PS2 Control Register */
  __IO  uint32_t                       PS2_STATUS;         /**< Offset: 0x08 (R/W  32) PS2 Status Register */
} ps2_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _0525SG12_PS2_COMPONENT_H_ */
