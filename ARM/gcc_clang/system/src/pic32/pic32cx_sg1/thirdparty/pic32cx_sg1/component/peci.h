/*
 * Component description for PECI
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
#ifndef _0525SG12_PECI_COMPONENT_H_
#define _0525SG12_PECI_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR PECI                                         */
/* ************************************************************************** */

/* -------- PECI_WDATA : (PECI Offset: 0x00) (R/W 8) The Write Data Register provides access to a 32-byte Transmit FIFO. -------- */
#define PECI_WDATA_RESETVALUE                 _UINT8_(0x00)                                        /*  (PECI_WDATA) The Write Data Register provides access to a 32-byte Transmit FIFO.  Reset Value */

#define PECI_WDATA_Msk                        _UINT8_(0x00)                                        /* (PECI_WDATA) Register Mask  */


/* -------- PECI_RDATA : (PECI Offset: 0x04) (R/W 8) The Read Data Register provides access to a 32-byte Receive FIFO. -------- */
#define PECI_RDATA_RESETVALUE                 _UINT8_(0x00)                                        /*  (PECI_RDATA) The Read Data Register provides access to a 32-byte Receive FIFO.  Reset Value */

#define PECI_RDATA_Msk                        _UINT8_(0x00)                                        /* (PECI_RDATA) Register Mask  */


/* -------- PECI_CTRL : (PECI Offset: 0x08) (R/W 8) Control Register -------- */
#define PECI_CTRL_RESETVALUE                  _UINT8_(0x01)                                        /*  (PECI_CTRL) Control Register  Reset Value */

#define PECI_CTRL_PD_Pos                      _UINT8_(0)                                           /* (PECI_CTRL) PD (Power Down) along with RST controls the Power Management Interface Position */
#define PECI_CTRL_PD_Msk                      (_UINT8_(0x1) << PECI_CTRL_PD_Pos)                   /* (PECI_CTRL) PD (Power Down) along with RST controls the Power Management Interface Mask */
#define PECI_CTRL_PD(value)                   (PECI_CTRL_PD_Msk & (_UINT8_(value) << PECI_CTRL_PD_Pos)) /* Assigment of value for PD in the PECI_CTRL register */
#define PECI_CTRL_RST_Pos                     _UINT8_(3)                                           /* (PECI_CTRL) RST indicates that the PECI Core should be reset. Position */
#define PECI_CTRL_RST_Msk                     (_UINT8_(0x1) << PECI_CTRL_RST_Pos)                  /* (PECI_CTRL) RST indicates that the PECI Core should be reset. Mask */
#define PECI_CTRL_RST(value)                  (PECI_CTRL_RST_Msk & (_UINT8_(value) << PECI_CTRL_RST_Pos)) /* Assigment of value for RST in the PECI_CTRL register */
#define PECI_CTRL_FRST_Pos                    _UINT8_(5)                                           /* (PECI_CTRL) FRST is the FIFO Reset bit. Position */
#define PECI_CTRL_FRST_Msk                    (_UINT8_(0x1) << PECI_CTRL_FRST_Pos)                 /* (PECI_CTRL) FRST is the FIFO Reset bit. Mask */
#define PECI_CTRL_FRST(value)                 (PECI_CTRL_FRST_Msk & (_UINT8_(value) << PECI_CTRL_FRST_Pos)) /* Assigment of value for FRST in the PECI_CTRL register */
#define PECI_CTRL_TXEN_Pos                    _UINT8_(6)                                           /* (PECI_CTRL) TXEN is the Transmit Enable bit. Position */
#define PECI_CTRL_TXEN_Msk                    (_UINT8_(0x1) << PECI_CTRL_TXEN_Pos)                 /* (PECI_CTRL) TXEN is the Transmit Enable bit. Mask */
#define PECI_CTRL_TXEN(value)                 (PECI_CTRL_TXEN_Msk & (_UINT8_(value) << PECI_CTRL_TXEN_Pos)) /* Assigment of value for TXEN in the PECI_CTRL register */
#define PECI_CTRL_MIEN_Pos                    _UINT8_(7)                                           /* (PECI_CTRL) MIEN is the Master Interrupt Enable Position */
#define PECI_CTRL_MIEN_Msk                    (_UINT8_(0x1) << PECI_CTRL_MIEN_Pos)                 /* (PECI_CTRL) MIEN is the Master Interrupt Enable Mask */
#define PECI_CTRL_MIEN(value)                 (PECI_CTRL_MIEN_Msk & (_UINT8_(value) << PECI_CTRL_MIEN_Pos)) /* Assigment of value for MIEN in the PECI_CTRL register */
#define PECI_CTRL_Msk                         _UINT8_(0xE9)                                        /* (PECI_CTRL) Register Mask  */


/* -------- PECI_STS1 : (PECI Offset: 0x0C) (R/W 8) Status Register 1 -------- */
#define PECI_STS1_RESETVALUE                  _UINT8_(0x00)                                        /*  (PECI_STS1) Status Register 1  Reset Value */

#define PECI_STS1_BOF_Pos                     _UINT8_(0)                                           /* (PECI_STS1) BOF (Beginning of Frame) is asserted when the PECI Core begins Address Timing Negotiation. (R/WC) Position */
#define PECI_STS1_BOF_Msk                     (_UINT8_(0x1) << PECI_STS1_BOF_Pos)                  /* (PECI_STS1) BOF (Beginning of Frame) is asserted when the PECI Core begins Address Timing Negotiation. (R/WC) Mask */
#define PECI_STS1_BOF(value)                  (PECI_STS1_BOF_Msk & (_UINT8_(value) << PECI_STS1_BOF_Pos)) /* Assigment of value for BOF in the PECI_STS1 register */
#define PECI_STS1_EOF_Pos                     _UINT8_(1)                                           /* (PECI_STS1) EOF (End of Frame) is asserted following Message Stop (tSTOP). (R/WC) Position */
#define PECI_STS1_EOF_Msk                     (_UINT8_(0x1) << PECI_STS1_EOF_Pos)                  /* (PECI_STS1) EOF (End of Frame) is asserted following Message Stop (tSTOP). (R/WC) Mask */
#define PECI_STS1_EOF(value)                  (PECI_STS1_EOF_Msk & (_UINT8_(value) << PECI_STS1_EOF_Pos)) /* Assigment of value for EOF in the PECI_STS1 register */
#define PECI_STS1_ERR_Pos                     _UINT8_(2)                                           /* (PECI_STS1) ERR Indicates that an error for the current transaction has been detected. Position */
#define PECI_STS1_ERR_Msk                     (_UINT8_(0x1) << PECI_STS1_ERR_Pos)                  /* (PECI_STS1) ERR Indicates that an error for the current transaction has been detected. Mask */
#define PECI_STS1_ERR(value)                  (PECI_STS1_ERR_Msk & (_UINT8_(value) << PECI_STS1_ERR_Pos)) /* Assigment of value for ERR in the PECI_STS1 register */
#define PECI_STS1_RDY_Pos                     _UINT8_(3)                                           /* (PECI_STS1) RDY represents the state of the READY signal function Position */
#define PECI_STS1_RDY_Msk                     (_UINT8_(0x1) << PECI_STS1_RDY_Pos)                  /* (PECI_STS1) RDY represents the state of the READY signal function Mask */
#define PECI_STS1_RDY(value)                  (PECI_STS1_RDY_Msk & (_UINT8_(value) << PECI_STS1_RDY_Pos)) /* Assigment of value for RDY in the PECI_STS1 register */
#define PECI_STS1_RDYLO_Pos                   _UINT8_(4)                                           /* (PECI_STS1) RDYLO is asserted '1' on the falling edge of the READY signal function (R/WC) Position */
#define PECI_STS1_RDYLO_Msk                   (_UINT8_(0x1) << PECI_STS1_RDYLO_Pos)                /* (PECI_STS1) RDYLO is asserted '1' on the falling edge of the READY signal function (R/WC) Mask */
#define PECI_STS1_RDYLO(value)                (PECI_STS1_RDYLO_Msk & (_UINT8_(value) << PECI_STS1_RDYLO_Pos)) /* Assigment of value for RDYLO in the PECI_STS1 register */
#define PECI_STS1_RDYHI_Pos                   _UINT8_(5)                                           /* (PECI_STS1) RDYHI is asserted '1' on the rising edge of the READY signal function (R/WC) Position */
#define PECI_STS1_RDYHI_Msk                   (_UINT8_(0x1) << PECI_STS1_RDYHI_Pos)                /* (PECI_STS1) RDYHI is asserted '1' on the rising edge of the READY signal function (R/WC) Mask */
#define PECI_STS1_RDYHI(value)                (PECI_STS1_RDYHI_Msk & (_UINT8_(value) << PECI_STS1_RDYHI_Pos)) /* Assigment of value for RDYHI in the PECI_STS1 register */
#define PECI_STS1_MINT_Pos                    _UINT8_(7)                                           /* (PECI_STS1) MINT is the Master Interrupt Status bit and is asserted when any interrupt status bit in the Interrupt Interface is asserted. Position */
#define PECI_STS1_MINT_Msk                    (_UINT8_(0x1) << PECI_STS1_MINT_Pos)                 /* (PECI_STS1) MINT is the Master Interrupt Status bit and is asserted when any interrupt status bit in the Interrupt Interface is asserted. Mask */
#define PECI_STS1_MINT(value)                 (PECI_STS1_MINT_Msk & (_UINT8_(value) << PECI_STS1_MINT_Pos)) /* Assigment of value for MINT in the PECI_STS1 register */
#define PECI_STS1_Msk                         _UINT8_(0xBF)                                        /* (PECI_STS1) Register Mask  */


/* -------- PECI_STS2 : (PECI Offset: 0x10) ( R/ 8) Status Register 2 -------- */
#define PECI_STS2_RESETVALUE                  _UINT8_(0x8A)                                        /*  (PECI_STS2) Status Register 2  Reset Value */

#define PECI_STS2_WFF_Pos                     _UINT8_(0)                                           /* (PECI_STS2) WFF indicates that the Write Data Register FIFO is full. WFF does not generate an interrupt. Position */
#define PECI_STS2_WFF_Msk                     (_UINT8_(0x1) << PECI_STS2_WFF_Pos)                  /* (PECI_STS2) WFF indicates that the Write Data Register FIFO is full. WFF does not generate an interrupt. Mask */
#define PECI_STS2_WFF(value)                  (PECI_STS2_WFF_Msk & (_UINT8_(value) << PECI_STS2_WFF_Pos)) /* Assigment of value for WFF in the PECI_STS2 register */
#define PECI_STS2_WFE_Pos                     _UINT8_(1)                                           /* (PECI_STS2) WFE indicates that the Write Data Register FIFO is empty. Position */
#define PECI_STS2_WFE_Msk                     (_UINT8_(0x1) << PECI_STS2_WFE_Pos)                  /* (PECI_STS2) WFE indicates that the Write Data Register FIFO is empty. Mask */
#define PECI_STS2_WFE(value)                  (PECI_STS2_WFE_Msk & (_UINT8_(value) << PECI_STS2_WFE_Pos)) /* Assigment of value for WFE in the PECI_STS2 register */
#define PECI_STS2_RFF_Pos                     _UINT8_(2)                                           /* (PECI_STS2) RFF indicates that the Read Data Register FIFO is full. Position */
#define PECI_STS2_RFF_Msk                     (_UINT8_(0x1) << PECI_STS2_RFF_Pos)                  /* (PECI_STS2) RFF indicates that the Read Data Register FIFO is full. Mask */
#define PECI_STS2_RFF(value)                  (PECI_STS2_RFF_Msk & (_UINT8_(value) << PECI_STS2_RFF_Pos)) /* Assigment of value for RFF in the PECI_STS2 register */
#define PECI_STS2_RFE_Pos                     _UINT8_(3)                                           /* (PECI_STS2) RFE indicates that the Read Data Register FIFO is empty. RFE does not generate an interrupt. Position */
#define PECI_STS2_RFE_Msk                     (_UINT8_(0x1) << PECI_STS2_RFE_Pos)                  /* (PECI_STS2) RFE indicates that the Read Data Register FIFO is empty. RFE does not generate an interrupt. Mask */
#define PECI_STS2_RFE(value)                  (PECI_STS2_RFE_Msk & (_UINT8_(value) << PECI_STS2_RFE_Pos)) /* Assigment of value for RFE in the PECI_STS2 register */
#define PECI_STS2_IDLE_Pos                    _UINT8_(7)                                           /* (PECI_STS2) The IDLE status bit indicates when the SST/PECI bus is idle and a new transaction may begin. Position */
#define PECI_STS2_IDLE_Msk                    (_UINT8_(0x1) << PECI_STS2_IDLE_Pos)                 /* (PECI_STS2) The IDLE status bit indicates when the SST/PECI bus is idle and a new transaction may begin. Mask */
#define PECI_STS2_IDLE(value)                 (PECI_STS2_IDLE_Msk & (_UINT8_(value) << PECI_STS2_IDLE_Pos)) /* Assigment of value for IDLE in the PECI_STS2 register */
#define PECI_STS2_Msk                         _UINT8_(0x8F)                                        /* (PECI_STS2) Register Mask  */


/* -------- PECI_ERROR : (PECI Offset: 0x14) (R/W 8) Error Register -------- */
#define PECI_ERROR_RESETVALUE                 _UINT8_(0x00)                                        /*  (PECI_ERROR) Error Register  Reset Value */

#define PECI_ERROR_FERR_Pos                   _UINT8_(0)                                           /* (PECI_ERROR) FERR (Frame Check Sequence Error). (R/WC) Position */
#define PECI_ERROR_FERR_Msk                   (_UINT8_(0x1) << PECI_ERROR_FERR_Pos)                /* (PECI_ERROR) FERR (Frame Check Sequence Error). (R/WC) Mask */
#define PECI_ERROR_FERR(value)                (PECI_ERROR_FERR_Msk & (_UINT8_(value) << PECI_ERROR_FERR_Pos)) /* Assigment of value for FERR in the PECI_ERROR register */
#define PECI_ERROR_BERR_Pos                   _UINT8_(1)                                           /* (PECI_ERROR) BERR (Bus Error). Bus contention has been detected. BERR is asserted when the PECI Module reads a value that is different from what it has driven (R/WC) Position */
#define PECI_ERROR_BERR_Msk                   (_UINT8_(0x1) << PECI_ERROR_BERR_Pos)                /* (PECI_ERROR) BERR (Bus Error). Bus contention has been detected. BERR is asserted when the PECI Module reads a value that is different from what it has driven (R/WC) Mask */
#define PECI_ERROR_BERR(value)                (PECI_ERROR_BERR_Msk & (_UINT8_(value) << PECI_ERROR_BERR_Pos)) /* Assigment of value for BERR in the PECI_ERROR register */
#define PECI_ERROR_REQERR_Pos                 _UINT8_(3)                                           /* (PECI_ERROR) REQERR is asserted if PEC_AVAILABLE (READY) input is not asserted when the counts down to zero as shown in. When asserted, REQERR can generate interrupt. (R/WC) Position */
#define PECI_ERROR_REQERR_Msk                 (_UINT8_(0x1) << PECI_ERROR_REQERR_Pos)              /* (PECI_ERROR) REQERR is asserted if PEC_AVAILABLE (READY) input is not asserted when the counts down to zero as shown in. When asserted, REQERR can generate interrupt. (R/WC) Mask */
#define PECI_ERROR_REQERR(value)              (PECI_ERROR_REQERR_Msk & (_UINT8_(value) << PECI_ERROR_REQERR_Pos)) /* Assigment of value for REQERR in the PECI_ERROR register */
#define PECI_ERROR_WROV_Pos                   _UINT8_(4)                                           /* (PECI_ERROR) WROV (Write Overrun). (R/WC) Position */
#define PECI_ERROR_WROV_Msk                   (_UINT8_(0x1) << PECI_ERROR_WROV_Pos)                /* (PECI_ERROR) WROV (Write Overrun). (R/WC) Mask */
#define PECI_ERROR_WROV(value)                (PECI_ERROR_WROV_Msk & (_UINT8_(value) << PECI_ERROR_WROV_Pos)) /* Assigment of value for WROV in the PECI_ERROR register */
#define PECI_ERROR_WRUN_Pos                   _UINT8_(5)                                           /* (PECI_ERROR) WRUN (Write Underrun). (R/WC) Position */
#define PECI_ERROR_WRUN_Msk                   (_UINT8_(0x1) << PECI_ERROR_WRUN_Pos)                /* (PECI_ERROR) WRUN (Write Underrun). (R/WC) Mask */
#define PECI_ERROR_WRUN(value)                (PECI_ERROR_WRUN_Msk & (_UINT8_(value) << PECI_ERROR_WRUN_Pos)) /* Assigment of value for WRUN in the PECI_ERROR register */
#define PECI_ERROR_RDOV_Pos                   _UINT8_(6)                                           /* (PECI_ERROR) RDOV (Read Overrun). RDOV indicates that the internal read buffer has overflowed (R/WC) Position */
#define PECI_ERROR_RDOV_Msk                   (_UINT8_(0x1) << PECI_ERROR_RDOV_Pos)                /* (PECI_ERROR) RDOV (Read Overrun). RDOV indicates that the internal read buffer has overflowed (R/WC) Mask */
#define PECI_ERROR_RDOV(value)                (PECI_ERROR_RDOV_Msk & (_UINT8_(value) << PECI_ERROR_RDOV_Pos)) /* Assigment of value for RDOV in the PECI_ERROR register */
#define PECI_ERROR_CLKERR_Pos                 _UINT8_(7)                                           /* (PECI_ERROR) CLKERR indicates that the READY signal function in the Hardware Interface was de-asserted in the middle of a transaction (R/WC) Position */
#define PECI_ERROR_CLKERR_Msk                 (_UINT8_(0x1) << PECI_ERROR_CLKERR_Pos)              /* (PECI_ERROR) CLKERR indicates that the READY signal function in the Hardware Interface was de-asserted in the middle of a transaction (R/WC) Mask */
#define PECI_ERROR_CLKERR(value)              (PECI_ERROR_CLKERR_Msk & (_UINT8_(value) << PECI_ERROR_CLKERR_Pos)) /* Assigment of value for CLKERR in the PECI_ERROR register */
#define PECI_ERROR_Msk                        _UINT8_(0xFB)                                        /* (PECI_ERROR) Register Mask  */


/* -------- PECI_IEN1 : (PECI Offset: 0x18) (R/W 8) Interrupt Enable 1 Register -------- */
#define PECI_IEN1_RESETVALUE                  _UINT8_(0x00)                                        /*  (PECI_IEN1) Interrupt Enable 1 Register  Reset Value */

#define PECI_IEN1_BIEN_Pos                    _UINT8_(0)                                           /* (PECI_IEN1) When the BIEN bit is asserted '1' the BOF interrupt is enabled. Position */
#define PECI_IEN1_BIEN_Msk                    (_UINT8_(0x1) << PECI_IEN1_BIEN_Pos)                 /* (PECI_IEN1) When the BIEN bit is asserted '1' the BOF interrupt is enabled. Mask */
#define PECI_IEN1_BIEN(value)                 (PECI_IEN1_BIEN_Msk & (_UINT8_(value) << PECI_IEN1_BIEN_Pos)) /* Assigment of value for BIEN in the PECI_IEN1 register */
#define PECI_IEN1_EIEN_Pos                    _UINT8_(1)                                           /* (PECI_IEN1) When the EIEN bit is asserted '1' the EOF interrupt is enabled. Position */
#define PECI_IEN1_EIEN_Msk                    (_UINT8_(0x1) << PECI_IEN1_EIEN_Pos)                 /* (PECI_IEN1) When the EIEN bit is asserted '1' the EOF interrupt is enabled. Mask */
#define PECI_IEN1_EIEN(value)                 (PECI_IEN1_EIEN_Msk & (_UINT8_(value) << PECI_IEN1_EIEN_Pos)) /* Assigment of value for EIEN in the PECI_IEN1 register */
#define PECI_IEN1_EREN_Pos                    _UINT8_(2)                                           /* (PECI_IEN1) When the EREN bit is asserted '1' the ERR interrupt is enabled. Position */
#define PECI_IEN1_EREN_Msk                    (_UINT8_(0x1) << PECI_IEN1_EREN_Pos)                 /* (PECI_IEN1) When the EREN bit is asserted '1' the ERR interrupt is enabled. Mask */
#define PECI_IEN1_EREN(value)                 (PECI_IEN1_EREN_Msk & (_UINT8_(value) << PECI_IEN1_EREN_Pos)) /* Assigment of value for EREN in the PECI_IEN1 register */
#define PECI_IEN1_RLEN_Pos                    _UINT8_(4)                                           /* (PECI_IEN1) When the RLEN bit is asserted '1' the RDYLO interrupt is enabled. Position */
#define PECI_IEN1_RLEN_Msk                    (_UINT8_(0x1) << PECI_IEN1_RLEN_Pos)                 /* (PECI_IEN1) When the RLEN bit is asserted '1' the RDYLO interrupt is enabled. Mask */
#define PECI_IEN1_RLEN(value)                 (PECI_IEN1_RLEN_Msk & (_UINT8_(value) << PECI_IEN1_RLEN_Pos)) /* Assigment of value for RLEN in the PECI_IEN1 register */
#define PECI_IEN1_RHEN_Pos                    _UINT8_(5)                                           /* (PECI_IEN1) When the RHEN bit is asserted '1' the RDYHI interrupt is enabled. Position */
#define PECI_IEN1_RHEN_Msk                    (_UINT8_(0x1) << PECI_IEN1_RHEN_Pos)                 /* (PECI_IEN1) When the RHEN bit is asserted '1' the RDYHI interrupt is enabled. Mask */
#define PECI_IEN1_RHEN(value)                 (PECI_IEN1_RHEN_Msk & (_UINT8_(value) << PECI_IEN1_RHEN_Pos)) /* Assigment of value for RHEN in the PECI_IEN1 register */
#define PECI_IEN1_Msk                         _UINT8_(0x37)                                        /* (PECI_IEN1) Register Mask  */


/* -------- PECI_IEN2 : (PECI Offset: 0x1C) (R/W 8) Interrupt Enable 2 Register -------- */
#define PECI_IEN2_RESETVALUE                  _UINT8_(0x00)                                        /*  (PECI_IEN2) Interrupt Enable 2 Register  Reset Value */

#define PECI_IEN2_ENWFE_Pos                   _UINT8_(1)                                           /* (PECI_IEN2) When the ENWFE bit is asserted '1' the WFE interrupt is enabled. Position */
#define PECI_IEN2_ENWFE_Msk                   (_UINT8_(0x1) << PECI_IEN2_ENWFE_Pos)                /* (PECI_IEN2) When the ENWFE bit is asserted '1' the WFE interrupt is enabled. Mask */
#define PECI_IEN2_ENWFE(value)                (PECI_IEN2_ENWFE_Msk & (_UINT8_(value) << PECI_IEN2_ENWFE_Pos)) /* Assigment of value for ENWFE in the PECI_IEN2 register */
#define PECI_IEN2_ENRFF_Pos                   _UINT8_(2)                                           /* (PECI_IEN2) When the ENRFF bit is asserted '1' the RFF interrupt is enabled. Position */
#define PECI_IEN2_ENRFF_Msk                   (_UINT8_(0x1) << PECI_IEN2_ENRFF_Pos)                /* (PECI_IEN2) When the ENRFF bit is asserted '1' the RFF interrupt is enabled. Mask */
#define PECI_IEN2_ENRFF(value)                (PECI_IEN2_ENRFF_Msk & (_UINT8_(value) << PECI_IEN2_ENRFF_Pos)) /* Assigment of value for ENRFF in the PECI_IEN2 register */
#define PECI_IEN2_Msk                         _UINT8_(0x06)                                        /* (PECI_IEN2) Register Mask  */


/* -------- PECI_OPTBTLO : (PECI Offset: 0x20) (R/W 8) Optimal Bit Time Register (Low Byte) -------- */
#define PECI_OPTBTLO_RESETVALUE               _UINT8_(0x16)                                        /*  (PECI_OPTBTLO) Optimal Bit Time Register (Low Byte)  Reset Value */

#define PECI_OPTBTLO_Msk                      _UINT8_(0x00)                                        /* (PECI_OPTBTLO) Register Mask  */


/* -------- PECI_OPTBTHI : (PECI Offset: 0x24) (R/W 8) Optimal Bit Time Register (High Byte) -------- */
#define PECI_OPTBTHI_RESETVALUE               _UINT8_(0x00)                                        /*  (PECI_OPTBTHI) Optimal Bit Time Register (High Byte)  Reset Value */

#define PECI_OPTBTHI_Msk                      _UINT8_(0x00)                                        /* (PECI_OPTBTHI) Register Mask  */


/* -------- PECI_BDCTRL : (PECI Offset: 0x30) (R/W 32) Baud Control Register.\n     The baud div value divides down the sytem clock frequency to create the peci CORE_CLK frequency.\n -------- */
#define PECI_BDCTRL_RESETVALUE                _UINT32_(0x06)                                       /*  (PECI_BDCTRL) Baud Control Register.\n     The baud div value divides down the sytem clock frequency to create the peci CORE_CLK frequency.\n  Reset Value */

#define PECI_BDCTRL_Msk                       _UINT32_(0x00000000)                                 /* (PECI_BDCTRL) Register Mask  */


/* -------- PECI_BLKID : (PECI Offset: 0x40) (R/W 32) Block ID Register -------- */
#define PECI_BLKID_RESETVALUE                 _UINT32_(0xC0)                                       /*  (PECI_BLKID) Block ID Register  Reset Value */

#define PECI_BLKID_Msk                        _UINT32_(0x00000000)                                 /* (PECI_BLKID) Register Mask  */


/* -------- PECI_BLKREV : (PECI Offset: 0x44) (R/W 32) Revision Register -------- */
#define PECI_BLKREV_RESETVALUE                _UINT32_(0x00)                                       /*  (PECI_BLKREV) Revision Register  Reset Value */

#define PECI_BLKREV_Msk                       _UINT32_(0x00000000)                                 /* (PECI_BLKREV) Register Mask  */


/** \brief PECI register offsets definitions */
#define PECI_WDATA_REG_OFST            _UINT32_(0x00)      /* (PECI_WDATA) The Write Data Register provides access to a 32-byte Transmit FIFO. Offset */
#define PECI_RDATA_REG_OFST            _UINT32_(0x04)      /* (PECI_RDATA) The Read Data Register provides access to a 32-byte Receive FIFO. Offset */
#define PECI_CTRL_REG_OFST             _UINT32_(0x08)      /* (PECI_CTRL) Control Register Offset */
#define PECI_STS1_REG_OFST             _UINT32_(0x0C)      /* (PECI_STS1) Status Register 1 Offset */
#define PECI_STS2_REG_OFST             _UINT32_(0x10)      /* (PECI_STS2) Status Register 2 Offset */
#define PECI_ERROR_REG_OFST            _UINT32_(0x14)      /* (PECI_ERROR) Error Register Offset */
#define PECI_IEN1_REG_OFST             _UINT32_(0x18)      /* (PECI_IEN1) Interrupt Enable 1 Register Offset */
#define PECI_IEN2_REG_OFST             _UINT32_(0x1C)      /* (PECI_IEN2) Interrupt Enable 2 Register Offset */
#define PECI_OPTBTLO_REG_OFST          _UINT32_(0x20)      /* (PECI_OPTBTLO) Optimal Bit Time Register (Low Byte) Offset */
#define PECI_OPTBTHI_REG_OFST          _UINT32_(0x24)      /* (PECI_OPTBTHI) Optimal Bit Time Register (High Byte) Offset */
#define PECI_BDCTRL_REG_OFST           _UINT32_(0x30)      /* (PECI_BDCTRL) Baud Control Register.\n     The baud div value divides down the sytem clock frequency to create the peci CORE_CLK frequency.\n Offset */
#define PECI_BLKID_REG_OFST            _UINT32_(0x40)      /* (PECI_BLKID) Block ID Register Offset */
#define PECI_BLKREV_REG_OFST           _UINT32_(0x44)      /* (PECI_BLKREV) Revision Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief PECI register API structure */
typedef struct
{  /* The PECI Interface allows the EC to retrieve temperature readings from PECI-compliant devices. */
  __IO  uint8_t                        PECI_WDATA;         /**< Offset: 0x00 (R/W  8) The Write Data Register provides access to a 32-byte Transmit FIFO. */
  __I   uint8_t                        Reserved1[0x03];
  __IO  uint8_t                        PECI_RDATA;         /**< Offset: 0x04 (R/W  8) The Read Data Register provides access to a 32-byte Receive FIFO. */
  __I   uint8_t                        Reserved2[0x03];
  __IO  uint8_t                        PECI_CTRL;          /**< Offset: 0x08 (R/W  8) Control Register */
  __I   uint8_t                        Reserved3[0x03];
  __IO  uint8_t                        PECI_STS1;          /**< Offset: 0x0C (R/W  8) Status Register 1 */
  __I   uint8_t                        Reserved4[0x03];
  __I   uint8_t                        PECI_STS2;          /**< Offset: 0x10 (R/   8) Status Register 2 */
  __I   uint8_t                        Reserved5[0x03];
  __IO  uint8_t                        PECI_ERROR;         /**< Offset: 0x14 (R/W  8) Error Register */
  __I   uint8_t                        Reserved6[0x03];
  __IO  uint8_t                        PECI_IEN1;          /**< Offset: 0x18 (R/W  8) Interrupt Enable 1 Register */
  __I   uint8_t                        Reserved7[0x03];
  __IO  uint8_t                        PECI_IEN2;          /**< Offset: 0x1C (R/W  8) Interrupt Enable 2 Register */
  __I   uint8_t                        Reserved8[0x03];
  __IO  uint8_t                        PECI_OPTBTLO;       /**< Offset: 0x20 (R/W  8) Optimal Bit Time Register (Low Byte) */
  __I   uint8_t                        Reserved9[0x03];
  __IO  uint8_t                        PECI_OPTBTHI;       /**< Offset: 0x24 (R/W  8) Optimal Bit Time Register (High Byte) */
  __I   uint8_t                        Reserved10[0x0B];
  __IO  uint32_t                       PECI_BDCTRL;        /**< Offset: 0x30 (R/W  32) Baud Control Register.\n     The baud div value divides down the sytem clock frequency to create the peci CORE_CLK frequency.\n */
  __I   uint8_t                        Reserved11[0x0C];
  __IO  uint32_t                       PECI_BLKID;         /**< Offset: 0x40 (R/W  32) Block ID Register */
  __IO  uint32_t                       PECI_BLKREV;        /**< Offset: 0x44 (R/W  32) Revision Register */
} peci_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _0525SG12_PECI_COMPONENT_H_ */
