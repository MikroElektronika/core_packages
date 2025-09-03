/*
 * Component description for SPI_SLAVE
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
#ifndef _0525SG12_SPI_SLAVE_COMPONENT_H_
#define _0525SG12_SPI_SLAVE_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR SPI_SLAVE                                    */
/* ************************************************************************** */

/* -------- SPI_SLAVE_SPI_CFG : (SPI_SLAVE Offset: 0x00) (R/W 32) SPI Slave Communication Configuration Register.\n -------- */
#define SPI_SLAVE_SPI_CFG_RESETVALUE          _UINT32_(0x40000)                                    /*  (SPI_SLAVE_SPI_CFG) SPI Slave Communication Configuration Register.\n  Reset Value */

#define SPI_SLAVE_SPI_CFG_SNG_QUD_SEL_Pos     _UINT32_(0)                                          /* (SPI_SLAVE_SPI_CFG) This field defines the Single / Quad Wire mode of operation for SPI Slave block.         0 = Single Wire Slave SPI block operation.\n         1 = Quad Wire Slave SPI block operation.\n Position */
#define SPI_SLAVE_SPI_CFG_SNG_QUD_SEL_Msk     (_UINT32_(0x1) << SPI_SLAVE_SPI_CFG_SNG_QUD_SEL_Pos) /* (SPI_SLAVE_SPI_CFG) This field defines the Single / Quad Wire mode of operation for SPI Slave block.         0 = Single Wire Slave SPI block operation.\n         1 = Quad Wire Slave SPI block operation.\n Mask */
#define SPI_SLAVE_SPI_CFG_SNG_QUD_SEL(value)  (SPI_SLAVE_SPI_CFG_SNG_QUD_SEL_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_CFG_SNG_QUD_SEL_Pos)) /* Assigment of value for SNG_QUD_SEL in the SPI_SLAVE_SPI_CFG register */
#define SPI_SLAVE_SPI_CFG_TAR_TIM_SEL_Pos     _UINT32_(8)                                          /* (SPI_SLAVE_SPI_CFG) Turn Around Time select for Quad wire mode.\n         0h = 1 cycle.         1h = 2 cycles.         2h = 4 cycles.         3h = 8 cycles.         Other values are reserved. Position */
#define SPI_SLAVE_SPI_CFG_TAR_TIM_SEL_Msk     (_UINT32_(0x7) << SPI_SLAVE_SPI_CFG_TAR_TIM_SEL_Pos) /* (SPI_SLAVE_SPI_CFG) Turn Around Time select for Quad wire mode.\n         0h = 1 cycle.         1h = 2 cycles.         2h = 4 cycles.         3h = 8 cycles.         Other values are reserved. Mask */
#define SPI_SLAVE_SPI_CFG_TAR_TIM_SEL(value)  (SPI_SLAVE_SPI_CFG_TAR_TIM_SEL_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_CFG_TAR_TIM_SEL_Pos)) /* Assigment of value for TAR_TIM_SEL in the SPI_SLAVE_SPI_CFG register */
#define SPI_SLAVE_SPI_CFG_WAIT_TIME_Pos       _UINT32_(16)                                         /* (SPI_SLAVE_SPI_CFG) These bits set the amount of wait time in cycles before transmitting data back to master.\n         During this wait time status bits will be transmitted\n Position */
#define SPI_SLAVE_SPI_CFG_WAIT_TIME_Msk       (_UINT32_(0xFF) << SPI_SLAVE_SPI_CFG_WAIT_TIME_Pos)  /* (SPI_SLAVE_SPI_CFG) These bits set the amount of wait time in cycles before transmitting data back to master.\n         During this wait time status bits will be transmitted\n Mask */
#define SPI_SLAVE_SPI_CFG_WAIT_TIME(value)    (SPI_SLAVE_SPI_CFG_WAIT_TIME_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_CFG_WAIT_TIME_Pos)) /* Assigment of value for WAIT_TIME in the SPI_SLAVE_SPI_CFG register */
#define SPI_SLAVE_SPI_CFG_Msk                 _UINT32_(0x00FF0701)                                 /* (SPI_SLAVE_SPI_CFG) Register Mask  */


/* -------- SPI_SLAVE_SPI_STS : (SPI_SLAVE Offset: 0x04) (R/W 32) SPI Slave Status Register.\n -------- */
#define SPI_SLAVE_SPI_STS_RESETVALUE          _UINT32_(0x500)                                      /*  (SPI_SLAVE_SPI_STS) SPI Slave Status Register.\n  Reset Value */

#define SPI_SLAVE_SPI_STS_MEM_WR_DONE_Pos     _UINT32_(0)                                          /* (SPI_SLAVE_SPI_STS) When the ARM BUS side has fully finished the last transaction from the FIFO to write the data to\n         Memory for Posted Writes . Clear with new Write request.\n Position */
#define SPI_SLAVE_SPI_STS_MEM_WR_DONE_Msk     (_UINT32_(0x1) << SPI_SLAVE_SPI_STS_MEM_WR_DONE_Pos) /* (SPI_SLAVE_SPI_STS) When the ARM BUS side has fully finished the last transaction from the FIFO to write the data to\n         Memory for Posted Writes . Clear with new Write request.\n Mask */
#define SPI_SLAVE_SPI_STS_MEM_WR_DONE(value)  (SPI_SLAVE_SPI_STS_MEM_WR_DONE_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_STS_MEM_WR_DONE_Pos)) /* Assigment of value for MEM_WR_DONE in the SPI_SLAVE_SPI_STS register */
#define SPI_SLAVE_SPI_STS_MEM_RD_DONE_Pos     _UINT32_(1)                                          /* (SPI_SLAVE_SPI_STS) When the ARM BUS side has fully finished writing the last written DWord to the FIFO for a set of data\n         read from Memory for Posted Reads. - cleared with new Read request.\n Position */
#define SPI_SLAVE_SPI_STS_MEM_RD_DONE_Msk     (_UINT32_(0x1) << SPI_SLAVE_SPI_STS_MEM_RD_DONE_Pos) /* (SPI_SLAVE_SPI_STS) When the ARM BUS side has fully finished writing the last written DWord to the FIFO for a set of data\n         read from Memory for Posted Reads. - cleared with new Read request.\n Mask */
#define SPI_SLAVE_SPI_STS_MEM_RD_DONE(value)  (SPI_SLAVE_SPI_STS_MEM_RD_DONE_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_STS_MEM_RD_DONE_Pos)) /* Assigment of value for MEM_RD_DONE in the SPI_SLAVE_SPI_STS register */
#define SPI_SLAVE_SPI_STS_MEM_WR_BUSY_Pos     _UINT32_(3)                                          /* (SPI_SLAVE_SPI_STS) When an Memory Write transaction is currently being processed.\n Position */
#define SPI_SLAVE_SPI_STS_MEM_WR_BUSY_Msk     (_UINT32_(0x1) << SPI_SLAVE_SPI_STS_MEM_WR_BUSY_Pos) /* (SPI_SLAVE_SPI_STS) When an Memory Write transaction is currently being processed.\n Mask */
#define SPI_SLAVE_SPI_STS_MEM_WR_BUSY(value)  (SPI_SLAVE_SPI_STS_MEM_WR_BUSY_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_STS_MEM_WR_BUSY_Pos)) /* Assigment of value for MEM_WR_BUSY in the SPI_SLAVE_SPI_STS register */
#define SPI_SLAVE_SPI_STS_MEM_RD_BUSY_Pos     _UINT32_(4)                                          /* (SPI_SLAVE_SPI_STS) When an Memory Read transaction is currently being processed.\n Position */
#define SPI_SLAVE_SPI_STS_MEM_RD_BUSY_Msk     (_UINT32_(0x1) << SPI_SLAVE_SPI_STS_MEM_RD_BUSY_Pos) /* (SPI_SLAVE_SPI_STS) When an Memory Read transaction is currently being processed.\n Mask */
#define SPI_SLAVE_SPI_STS_MEM_RD_BUSY(value)  (SPI_SLAVE_SPI_STS_MEM_RD_BUSY_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_STS_MEM_RD_BUSY_Pos)) /* Assigment of value for MEM_RD_BUSY in the SPI_SLAVE_SPI_STS register */
#define SPI_SLAVE_SPI_STS_SREG_TRANS_Pos      _UINT32_(5)                                          /* (SPI_SLAVE_SPI_STS) When an SREG transaction is currently being processed.\n Position */
#define SPI_SLAVE_SPI_STS_SREG_TRANS_Msk      (_UINT32_(0x1) << SPI_SLAVE_SPI_STS_SREG_TRANS_Pos)  /* (SPI_SLAVE_SPI_STS) When an SREG transaction is currently being processed.\n Mask */
#define SPI_SLAVE_SPI_STS_SREG_TRANS(value)   (SPI_SLAVE_SPI_STS_SREG_TRANS_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_STS_SREG_TRANS_Pos)) /* Assigment of value for SREG_TRANS in the SPI_SLAVE_SPI_STS register */
#define SPI_SLAVE_SPI_STS_POLL_HIGH_Pos       _UINT32_(6)                                          /* (SPI_SLAVE_SPI_STS) If this bit is set, then something in the high 16-bit of status register is set and needs to be checked.\n         SPI Master should take action to clear this.\n Position */
#define SPI_SLAVE_SPI_STS_POLL_HIGH_Msk       (_UINT32_(0x1) << SPI_SLAVE_SPI_STS_POLL_HIGH_Pos)   /* (SPI_SLAVE_SPI_STS) If this bit is set, then something in the high 16-bit of status register is set and needs to be checked.\n         SPI Master should take action to clear this.\n Mask */
#define SPI_SLAVE_SPI_STS_POLL_HIGH(value)    (SPI_SLAVE_SPI_STS_POLL_HIGH_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_STS_POLL_HIGH_Pos)) /* Assigment of value for POLL_HIGH in the SPI_SLAVE_SPI_STS register */
#define SPI_SLAVE_SPI_STS_RXF_EMP_Pos         _UINT32_(8)                                          /* (SPI_SLAVE_SPI_STS) Signifies all Memory write transactions for the SPI Masters requested size have been performed.\n         New transactions are allowed.\n Position */
#define SPI_SLAVE_SPI_STS_RXF_EMP_Msk         (_UINT32_(0x1) << SPI_SLAVE_SPI_STS_RXF_EMP_Pos)     /* (SPI_SLAVE_SPI_STS) Signifies all Memory write transactions for the SPI Masters requested size have been performed.\n         New transactions are allowed.\n Mask */
#define SPI_SLAVE_SPI_STS_RXF_EMP(value)      (SPI_SLAVE_SPI_STS_RXF_EMP_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_STS_RXF_EMP_Pos)) /* Assigment of value for RXF_EMP in the SPI_SLAVE_SPI_STS register */
#define SPI_SLAVE_SPI_STS_RXF_FUL_Pos         _UINT32_(9)                                          /* (SPI_SLAVE_SPI_STS) The RX FIFO is full of data to be written to Memory.\n Position */
#define SPI_SLAVE_SPI_STS_RXF_FUL_Msk         (_UINT32_(0x1) << SPI_SLAVE_SPI_STS_RXF_FUL_Pos)     /* (SPI_SLAVE_SPI_STS) The RX FIFO is full of data to be written to Memory.\n Mask */
#define SPI_SLAVE_SPI_STS_RXF_FUL(value)      (SPI_SLAVE_SPI_STS_RXF_FUL_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_STS_RXF_FUL_Pos)) /* Assigment of value for RXF_FUL in the SPI_SLAVE_SPI_STS register */
#define SPI_SLAVE_SPI_STS_TXF_EMP_Pos         _UINT32_(10)                                         /* (SPI_SLAVE_SPI_STS) Signifies SPI Master has read the data requested from Memory. Can be used to show there is data\n         the SPI Master has requested and not been read yet. New read transactions will be aligned.\n Position */
#define SPI_SLAVE_SPI_STS_TXF_EMP_Msk         (_UINT32_(0x1) << SPI_SLAVE_SPI_STS_TXF_EMP_Pos)     /* (SPI_SLAVE_SPI_STS) Signifies SPI Master has read the data requested from Memory. Can be used to show there is data\n         the SPI Master has requested and not been read yet. New read transactions will be aligned.\n Mask */
#define SPI_SLAVE_SPI_STS_TXF_EMP(value)      (SPI_SLAVE_SPI_STS_TXF_EMP_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_STS_TXF_EMP_Pos)) /* Assigment of value for TXF_EMP in the SPI_SLAVE_SPI_STS register */
#define SPI_SLAVE_SPI_STS_TXF_FUL_Pos         _UINT32_(11)                                         /* (SPI_SLAVE_SPI_STS) The TX FIFO is full of data that was read from Memory.\n Position */
#define SPI_SLAVE_SPI_STS_TXF_FUL_Msk         (_UINT32_(0x1) << SPI_SLAVE_SPI_STS_TXF_FUL_Pos)     /* (SPI_SLAVE_SPI_STS) The TX FIFO is full of data that was read from Memory.\n Mask */
#define SPI_SLAVE_SPI_STS_TXF_FUL(value)      (SPI_SLAVE_SPI_STS_TXF_FUL_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_STS_TXF_FUL_Pos)) /* Assigment of value for TXF_FUL in the SPI_SLAVE_SPI_STS register */
#define SPI_SLAVE_SPI_STS_TMCLK_CNT_ERR_Pos   _UINT32_(13)                                         /* (SPI_SLAVE_SPI_STS) This bit is set when the SPI Clock Count Test Mode is set and there is an uneven amount of clocks.\n Position */
#define SPI_SLAVE_SPI_STS_TMCLK_CNT_ERR_Msk   (_UINT32_(0x1) << SPI_SLAVE_SPI_STS_TMCLK_CNT_ERR_Pos) /* (SPI_SLAVE_SPI_STS) This bit is set when the SPI Clock Count Test Mode is set and there is an uneven amount of clocks.\n Mask */
#define SPI_SLAVE_SPI_STS_TMCLK_CNT_ERR(value) (SPI_SLAVE_SPI_STS_TMCLK_CNT_ERR_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_STS_TMCLK_CNT_ERR_Pos)) /* Assigment of value for TMCLK_CNT_ERR in the SPI_SLAVE_SPI_STS register */
#define SPI_SLAVE_SPI_STS_IBF_FLG_Pos         _UINT32_(14)                                         /* (SPI_SLAVE_SPI_STS) Set when the Host writes to the Input Buffer signaling there is data for the EC to read.\n Position */
#define SPI_SLAVE_SPI_STS_IBF_FLG_Msk         (_UINT32_(0x1) << SPI_SLAVE_SPI_STS_IBF_FLG_Pos)     /* (SPI_SLAVE_SPI_STS) Set when the Host writes to the Input Buffer signaling there is data for the EC to read.\n Mask */
#define SPI_SLAVE_SPI_STS_IBF_FLG(value)      (SPI_SLAVE_SPI_STS_IBF_FLG_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_STS_IBF_FLG_Pos)) /* Assigment of value for IBF_FLG in the SPI_SLAVE_SPI_STS register */
#define SPI_SLAVE_SPI_STS_OBF_FLG_Pos         _UINT32_(15)                                         /* (SPI_SLAVE_SPI_STS) Set when the EC writes to the Output Buffer signaling there is data for the Host to read.\n Position */
#define SPI_SLAVE_SPI_STS_OBF_FLG_Msk         (_UINT32_(0x1) << SPI_SLAVE_SPI_STS_OBF_FLG_Pos)     /* (SPI_SLAVE_SPI_STS) Set when the EC writes to the Output Buffer signaling there is data for the Host to read.\n Mask */
#define SPI_SLAVE_SPI_STS_OBF_FLG(value)      (SPI_SLAVE_SPI_STS_OBF_FLG_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_STS_OBF_FLG_Pos)) /* Assigment of value for OBF_FLG in the SPI_SLAVE_SPI_STS register */
#define SPI_SLAVE_SPI_STS_SPIM_RST_REQ_Pos    _UINT32_(16)                                         /* (SPI_SLAVE_SPI_STS) Set when the SPI Master Requested a Configuration Reset.\n Position */
#define SPI_SLAVE_SPI_STS_SPIM_RST_REQ_Msk    (_UINT32_(0x1) << SPI_SLAVE_SPI_STS_SPIM_RST_REQ_Pos) /* (SPI_SLAVE_SPI_STS) Set when the SPI Master Requested a Configuration Reset.\n Mask */
#define SPI_SLAVE_SPI_STS_SPIM_RST_REQ(value) (SPI_SLAVE_SPI_STS_SPIM_RST_REQ_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_STS_SPIM_RST_REQ_Pos)) /* Assigment of value for SPIM_RST_REQ in the SPI_SLAVE_SPI_STS register */
#define SPI_SLAVE_SPI_STS_RXF_RST_DN_Pos      _UINT32_(17)                                         /* (SPI_SLAVE_SPI_STS) Set after the SPI Master initiates a RX FIFO reset and the reset has been processed. FIFO is cleared.\n Position */
#define SPI_SLAVE_SPI_STS_RXF_RST_DN_Msk      (_UINT32_(0x1) << SPI_SLAVE_SPI_STS_RXF_RST_DN_Pos)  /* (SPI_SLAVE_SPI_STS) Set after the SPI Master initiates a RX FIFO reset and the reset has been processed. FIFO is cleared.\n Mask */
#define SPI_SLAVE_SPI_STS_RXF_RST_DN(value)   (SPI_SLAVE_SPI_STS_RXF_RST_DN_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_STS_RXF_RST_DN_Pos)) /* Assigment of value for RXF_RST_DN in the SPI_SLAVE_SPI_STS register */
#define SPI_SLAVE_SPI_STS_TXF_RST_DN_Pos      _UINT32_(18)                                         /* (SPI_SLAVE_SPI_STS) Set after the SPI Master initiates a TX FIFO reset and the reset has been processed. FIFO is cleared.\n Position */
#define SPI_SLAVE_SPI_STS_TXF_RST_DN_Msk      (_UINT32_(0x1) << SPI_SLAVE_SPI_STS_TXF_RST_DN_Pos)  /* (SPI_SLAVE_SPI_STS) Set after the SPI Master initiates a TX FIFO reset and the reset has been processed. FIFO is cleared.\n Mask */
#define SPI_SLAVE_SPI_STS_TXF_RST_DN(value)   (SPI_SLAVE_SPI_STS_TXF_RST_DN_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_STS_TXF_RST_DN_Pos)) /* Assigment of value for TXF_RST_DN in the SPI_SLAVE_SPI_STS register */
#define SPI_SLAVE_SPI_STS_OOL0_ERR_Pos        _UINT32_(19)                                         /* (SPI_SLAVE_SPI_STS) This flag is set with the transfer address requested by the master is out of Limit 0 range or when the BAR is disabled.\n Position */
#define SPI_SLAVE_SPI_STS_OOL0_ERR_Msk        (_UINT32_(0x1) << SPI_SLAVE_SPI_STS_OOL0_ERR_Pos)    /* (SPI_SLAVE_SPI_STS) This flag is set with the transfer address requested by the master is out of Limit 0 range or when the BAR is disabled.\n Mask */
#define SPI_SLAVE_SPI_STS_OOL0_ERR(value)     (SPI_SLAVE_SPI_STS_OOL0_ERR_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_STS_OOL0_ERR_Pos)) /* Assigment of value for OOL0_ERR in the SPI_SLAVE_SPI_STS register */
#define SPI_SLAVE_SPI_STS_OOL1_ERR_Pos        _UINT32_(20)                                         /* (SPI_SLAVE_SPI_STS) This flag is set with the transfer address requested by the master is out of Limit 1 range or when the BAR is disabled.\n Position */
#define SPI_SLAVE_SPI_STS_OOL1_ERR_Msk        (_UINT32_(0x1) << SPI_SLAVE_SPI_STS_OOL1_ERR_Pos)    /* (SPI_SLAVE_SPI_STS) This flag is set with the transfer address requested by the master is out of Limit 1 range or when the BAR is disabled.\n Mask */
#define SPI_SLAVE_SPI_STS_OOL1_ERR(value)     (SPI_SLAVE_SPI_STS_OOL1_ERR_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_STS_OOL1_ERR_Pos)) /* Assigment of value for OOL1_ERR in the SPI_SLAVE_SPI_STS register */
#define SPI_SLAVE_SPI_STS_ARMBUS_ERR_Pos      _UINT32_(21)                                         /* (SPI_SLAVE_SPI_STS) ARM Bus Error returned for the curren data transfer.\n Position */
#define SPI_SLAVE_SPI_STS_ARMBUS_ERR_Msk      (_UINT32_(0x1) << SPI_SLAVE_SPI_STS_ARMBUS_ERR_Pos)  /* (SPI_SLAVE_SPI_STS) ARM Bus Error returned for the curren data transfer.\n Mask */
#define SPI_SLAVE_SPI_STS_ARMBUS_ERR(value)   (SPI_SLAVE_SPI_STS_ARMBUS_ERR_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_STS_ARMBUS_ERR_Pos)) /* Assigment of value for ARMBUS_ERR in the SPI_SLAVE_SPI_STS register */
#define SPI_SLAVE_SPI_STS_UNDEF_CMD_ERR_Pos   _UINT32_(22)                                         /* (SPI_SLAVE_SPI_STS) Undefined Command Error: The command received from the master isn't defined.\n Position */
#define SPI_SLAVE_SPI_STS_UNDEF_CMD_ERR_Msk   (_UINT32_(0x1) << SPI_SLAVE_SPI_STS_UNDEF_CMD_ERR_Pos) /* (SPI_SLAVE_SPI_STS) Undefined Command Error: The command received from the master isn't defined.\n Mask */
#define SPI_SLAVE_SPI_STS_UNDEF_CMD_ERR(value) (SPI_SLAVE_SPI_STS_UNDEF_CMD_ERR_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_STS_UNDEF_CMD_ERR_Pos)) /* Assigment of value for UNDEF_CMD_ERR in the SPI_SLAVE_SPI_STS register */
#define SPI_SLAVE_SPI_STS_DV_BUSY_Pos         _UINT32_(23)                                         /* (SPI_SLAVE_SPI_STS) If the Master requested a transaction whose destination is busy the request is ignored.\n         Should use the poll or wait for interrupts.\n Position */
#define SPI_SLAVE_SPI_STS_DV_BUSY_Msk         (_UINT32_(0x1) << SPI_SLAVE_SPI_STS_DV_BUSY_Pos)     /* (SPI_SLAVE_SPI_STS) If the Master requested a transaction whose destination is busy the request is ignored.\n         Should use the poll or wait for interrupts.\n Mask */
#define SPI_SLAVE_SPI_STS_DV_BUSY(value)      (SPI_SLAVE_SPI_STS_DV_BUSY_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_STS_DV_BUSY_Pos)) /* Assigment of value for DV_BUSY in the SPI_SLAVE_SPI_STS register */
#define SPI_SLAVE_SPI_STS_RXF_SIZE_ERR_Pos    _UINT32_(24)                                         /* (SPI_SLAVE_SPI_STS) If size requested is more than what Master provided and the Master terminates early error flag         shut down request signal to ARM Bus. Size requested is less than what Master provided -- ignored and         continue transaction, may be taking in garbage.\n Position */
#define SPI_SLAVE_SPI_STS_RXF_SIZE_ERR_Msk    (_UINT32_(0x1) << SPI_SLAVE_SPI_STS_RXF_SIZE_ERR_Pos) /* (SPI_SLAVE_SPI_STS) If size requested is more than what Master provided and the Master terminates early error flag         shut down request signal to ARM Bus. Size requested is less than what Master provided -- ignored and         continue transaction, may be taking in garbage.\n Mask */
#define SPI_SLAVE_SPI_STS_RXF_SIZE_ERR(value) (SPI_SLAVE_SPI_STS_RXF_SIZE_ERR_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_STS_RXF_SIZE_ERR_Pos)) /* Assigment of value for RXF_SIZE_ERR in the SPI_SLAVE_SPI_STS register */
#define SPI_SLAVE_SPI_STS_TXF_UNFLW_Pos       _UINT32_(25)                                         /* (SPI_SLAVE_SPI_STS) If Master reads more than what is in FIFO, FIFO will flag an underflow error and the data returned         will just be the last valid pointer value.\n Position */
#define SPI_SLAVE_SPI_STS_TXF_UNFLW_Msk       (_UINT32_(0x1) << SPI_SLAVE_SPI_STS_TXF_UNFLW_Pos)   /* (SPI_SLAVE_SPI_STS) If Master reads more than what is in FIFO, FIFO will flag an underflow error and the data returned         will just be the last valid pointer value.\n Mask */
#define SPI_SLAVE_SPI_STS_TXF_UNFLW(value)    (SPI_SLAVE_SPI_STS_TXF_UNFLW_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_STS_TXF_UNFLW_Pos)) /* Assigment of value for TXF_UNFLW in the SPI_SLAVE_SPI_STS register */
#define SPI_SLAVE_SPI_STS_TXF_OVRFLW_Pos      _UINT32_(26)                                         /* (SPI_SLAVE_SPI_STS) If Master doesn't read all of the data it requested from the posted read block cycle, than data         will still be left in the FIFO. This will cause misalignment with the following transactions and a new         read cycle can cause overflow.\n Position */
#define SPI_SLAVE_SPI_STS_TXF_OVRFLW_Msk      (_UINT32_(0x1) << SPI_SLAVE_SPI_STS_TXF_OVRFLW_Pos)  /* (SPI_SLAVE_SPI_STS) If Master doesn't read all of the data it requested from the posted read block cycle, than data         will still be left in the FIFO. This will cause misalignment with the following transactions and a new         read cycle can cause overflow.\n Mask */
#define SPI_SLAVE_SPI_STS_TXF_OVRFLW(value)   (SPI_SLAVE_SPI_STS_TXF_OVRFLW_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_STS_TXF_OVRFLW_Pos)) /* Assigment of value for TXF_OVRFLW in the SPI_SLAVE_SPI_STS register */
#define SPI_SLAVE_SPI_STS_RXF_UNFLW_Pos       _UINT32_(27)                                         /* (SPI_SLAVE_SPI_STS) If the SPI Slave reads RX FIFO when it is empty, RX FIFO Underflow flag will be set. This condition         will never happen under normal situation.\n Position */
#define SPI_SLAVE_SPI_STS_RXF_UNFLW_Msk       (_UINT32_(0x1) << SPI_SLAVE_SPI_STS_RXF_UNFLW_Pos)   /* (SPI_SLAVE_SPI_STS) If the SPI Slave reads RX FIFO when it is empty, RX FIFO Underflow flag will be set. This condition         will never happen under normal situation.\n Mask */
#define SPI_SLAVE_SPI_STS_RXF_UNFLW(value)    (SPI_SLAVE_SPI_STS_RXF_UNFLW_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_STS_RXF_UNFLW_Pos)) /* Assigment of value for RXF_UNFLW in the SPI_SLAVE_SPI_STS register */
#define SPI_SLAVE_SPI_STS_RXF_OVRFLW_Pos      _UINT32_(28)                                         /* (SPI_SLAVE_SPI_STS) If SPI Master writes more than the space in the FIFO, the FIFO will flag an overflow error and data         will not be stored.\n Position */
#define SPI_SLAVE_SPI_STS_RXF_OVRFLW_Msk      (_UINT32_(0x1) << SPI_SLAVE_SPI_STS_RXF_OVRFLW_Pos)  /* (SPI_SLAVE_SPI_STS) If SPI Master writes more than the space in the FIFO, the FIFO will flag an overflow error and data         will not be stored.\n Mask */
#define SPI_SLAVE_SPI_STS_RXF_OVRFLW(value)   (SPI_SLAVE_SPI_STS_RXF_OVRFLW_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_STS_RXF_OVRFLW_Pos)) /* Assigment of value for RXF_OVRFLW in the SPI_SLAVE_SPI_STS register */
#define SPI_SLAVE_SPI_STS_Msk                 _UINT32_(0x1FFFEF7B)                                 /* (SPI_SLAVE_SPI_STS) Register Mask  */


/* -------- SPI_SLAVE_SPI_EC_STS : (SPI_SLAVE Offset: 0x08) (R/W 32) SPI Slave EC Status Register.\n -------- */
#define SPI_SLAVE_SPI_EC_STS_RESETVALUE       _UINT32_(0x500)                                      /*  (SPI_SLAVE_SPI_EC_STS) SPI Slave EC Status Register.\n  Reset Value */

#define SPI_SLAVE_SPI_EC_STS_MEM_WR_DONE_Pos  _UINT32_(0)                                          /* (SPI_SLAVE_SPI_EC_STS) When the ARM BUS side has fully finished the last transaction from the FIFO to write the data to\n         Memory for Posted Writes .- clear with new Write request.\n Position */
#define SPI_SLAVE_SPI_EC_STS_MEM_WR_DONE_Msk  (_UINT32_(0x1) << SPI_SLAVE_SPI_EC_STS_MEM_WR_DONE_Pos) /* (SPI_SLAVE_SPI_EC_STS) When the ARM BUS side has fully finished the last transaction from the FIFO to write the data to\n         Memory for Posted Writes .- clear with new Write request.\n Mask */
#define SPI_SLAVE_SPI_EC_STS_MEM_WR_DONE(value) (SPI_SLAVE_SPI_EC_STS_MEM_WR_DONE_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_EC_STS_MEM_WR_DONE_Pos)) /* Assigment of value for MEM_WR_DONE in the SPI_SLAVE_SPI_EC_STS register */
#define SPI_SLAVE_SPI_EC_STS_MEM_RD_DONE_Pos  _UINT32_(1)                                          /* (SPI_SLAVE_SPI_EC_STS) When the ARM BUS side has fully finished writing the last written DWord to the FIFO for a set of data\n         read from Memory for Posted Reads. - cleared with new Read request.\n Position */
#define SPI_SLAVE_SPI_EC_STS_MEM_RD_DONE_Msk  (_UINT32_(0x1) << SPI_SLAVE_SPI_EC_STS_MEM_RD_DONE_Pos) /* (SPI_SLAVE_SPI_EC_STS) When the ARM BUS side has fully finished writing the last written DWord to the FIFO for a set of data\n         read from Memory for Posted Reads. - cleared with new Read request.\n Mask */
#define SPI_SLAVE_SPI_EC_STS_MEM_RD_DONE(value) (SPI_SLAVE_SPI_EC_STS_MEM_RD_DONE_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_EC_STS_MEM_RD_DONE_Pos)) /* Assigment of value for MEM_RD_DONE in the SPI_SLAVE_SPI_EC_STS register */
#define SPI_SLAVE_SPI_EC_STS_MEM_WR_BUSY_Pos  _UINT32_(3)                                          /* (SPI_SLAVE_SPI_EC_STS) When an Memory Write transaction is currently being processed.\n Position */
#define SPI_SLAVE_SPI_EC_STS_MEM_WR_BUSY_Msk  (_UINT32_(0x1) << SPI_SLAVE_SPI_EC_STS_MEM_WR_BUSY_Pos) /* (SPI_SLAVE_SPI_EC_STS) When an Memory Write transaction is currently being processed.\n Mask */
#define SPI_SLAVE_SPI_EC_STS_MEM_WR_BUSY(value) (SPI_SLAVE_SPI_EC_STS_MEM_WR_BUSY_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_EC_STS_MEM_WR_BUSY_Pos)) /* Assigment of value for MEM_WR_BUSY in the SPI_SLAVE_SPI_EC_STS register */
#define SPI_SLAVE_SPI_EC_STS_MEM_RD_BUSY_Pos  _UINT32_(4)                                          /* (SPI_SLAVE_SPI_EC_STS) When an Memory Read transaction is currently being processed.\n Position */
#define SPI_SLAVE_SPI_EC_STS_MEM_RD_BUSY_Msk  (_UINT32_(0x1) << SPI_SLAVE_SPI_EC_STS_MEM_RD_BUSY_Pos) /* (SPI_SLAVE_SPI_EC_STS) When an Memory Read transaction is currently being processed.\n Mask */
#define SPI_SLAVE_SPI_EC_STS_MEM_RD_BUSY(value) (SPI_SLAVE_SPI_EC_STS_MEM_RD_BUSY_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_EC_STS_MEM_RD_BUSY_Pos)) /* Assigment of value for MEM_RD_BUSY in the SPI_SLAVE_SPI_EC_STS register */
#define SPI_SLAVE_SPI_EC_STS_SREG_TRANS_Pos   _UINT32_(5)                                          /* (SPI_SLAVE_SPI_EC_STS) When an SREG transaction is currently being processed.\n Position */
#define SPI_SLAVE_SPI_EC_STS_SREG_TRANS_Msk   (_UINT32_(0x1) << SPI_SLAVE_SPI_EC_STS_SREG_TRANS_Pos) /* (SPI_SLAVE_SPI_EC_STS) When an SREG transaction is currently being processed.\n Mask */
#define SPI_SLAVE_SPI_EC_STS_SREG_TRANS(value) (SPI_SLAVE_SPI_EC_STS_SREG_TRANS_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_EC_STS_SREG_TRANS_Pos)) /* Assigment of value for SREG_TRANS in the SPI_SLAVE_SPI_EC_STS register */
#define SPI_SLAVE_SPI_EC_STS_POLL_HI_Pos      _UINT32_(6)                                          /* (SPI_SLAVE_SPI_EC_STS) If this bit is set, then something in the high 16-bit of status register is set and needs to be checked.\n         SPI Master should take action to clear this.\n Position */
#define SPI_SLAVE_SPI_EC_STS_POLL_HI_Msk      (_UINT32_(0x1) << SPI_SLAVE_SPI_EC_STS_POLL_HI_Pos)  /* (SPI_SLAVE_SPI_EC_STS) If this bit is set, then something in the high 16-bit of status register is set and needs to be checked.\n         SPI Master should take action to clear this.\n Mask */
#define SPI_SLAVE_SPI_EC_STS_POLL_HI(value)   (SPI_SLAVE_SPI_EC_STS_POLL_HI_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_EC_STS_POLL_HI_Pos)) /* Assigment of value for POLL_HI in the SPI_SLAVE_SPI_EC_STS register */
#define SPI_SLAVE_SPI_EC_STS_RXF_EMP_Pos      _UINT32_(8)                                          /* (SPI_SLAVE_SPI_EC_STS) Signifies all Memory write transactions for the SPI Masters requested size have been performed.\n         New transactions are allowed.\n Position */
#define SPI_SLAVE_SPI_EC_STS_RXF_EMP_Msk      (_UINT32_(0x1) << SPI_SLAVE_SPI_EC_STS_RXF_EMP_Pos)  /* (SPI_SLAVE_SPI_EC_STS) Signifies all Memory write transactions for the SPI Masters requested size have been performed.\n         New transactions are allowed.\n Mask */
#define SPI_SLAVE_SPI_EC_STS_RXF_EMP(value)   (SPI_SLAVE_SPI_EC_STS_RXF_EMP_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_EC_STS_RXF_EMP_Pos)) /* Assigment of value for RXF_EMP in the SPI_SLAVE_SPI_EC_STS register */
#define SPI_SLAVE_SPI_EC_STS_RXF_FUL_Pos      _UINT32_(9)                                          /* (SPI_SLAVE_SPI_EC_STS) The RX FIFO is full of data to be written to Memory.\n Position */
#define SPI_SLAVE_SPI_EC_STS_RXF_FUL_Msk      (_UINT32_(0x1) << SPI_SLAVE_SPI_EC_STS_RXF_FUL_Pos)  /* (SPI_SLAVE_SPI_EC_STS) The RX FIFO is full of data to be written to Memory.\n Mask */
#define SPI_SLAVE_SPI_EC_STS_RXF_FUL(value)   (SPI_SLAVE_SPI_EC_STS_RXF_FUL_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_EC_STS_RXF_FUL_Pos)) /* Assigment of value for RXF_FUL in the SPI_SLAVE_SPI_EC_STS register */
#define SPI_SLAVE_SPI_EC_STS_TXF_EMP_Pos      _UINT32_(10)                                         /* (SPI_SLAVE_SPI_EC_STS) Signifies SPI Master has read the data requested from Memory. Can be used to show there is data\n         the SPI Master has requested and not been read yet. New read transactions will be aligned.\n Position */
#define SPI_SLAVE_SPI_EC_STS_TXF_EMP_Msk      (_UINT32_(0x1) << SPI_SLAVE_SPI_EC_STS_TXF_EMP_Pos)  /* (SPI_SLAVE_SPI_EC_STS) Signifies SPI Master has read the data requested from Memory. Can be used to show there is data\n         the SPI Master has requested and not been read yet. New read transactions will be aligned.\n Mask */
#define SPI_SLAVE_SPI_EC_STS_TXF_EMP(value)   (SPI_SLAVE_SPI_EC_STS_TXF_EMP_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_EC_STS_TXF_EMP_Pos)) /* Assigment of value for TXF_EMP in the SPI_SLAVE_SPI_EC_STS register */
#define SPI_SLAVE_SPI_EC_STS_TXF_FUL_Pos      _UINT32_(11)                                         /* (SPI_SLAVE_SPI_EC_STS) The TX FIFO is full of data that was read from Memory.\n Position */
#define SPI_SLAVE_SPI_EC_STS_TXF_FUL_Msk      (_UINT32_(0x1) << SPI_SLAVE_SPI_EC_STS_TXF_FUL_Pos)  /* (SPI_SLAVE_SPI_EC_STS) The TX FIFO is full of data that was read from Memory.\n Mask */
#define SPI_SLAVE_SPI_EC_STS_TXF_FUL(value)   (SPI_SLAVE_SPI_EC_STS_TXF_FUL_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_EC_STS_TXF_FUL_Pos)) /* Assigment of value for TXF_FUL in the SPI_SLAVE_SPI_EC_STS register */
#define SPI_SLAVE_SPI_EC_STS_TMCLK_CNT_ERR_Pos _UINT32_(13)                                         /* (SPI_SLAVE_SPI_EC_STS) This bit is set when the SPI Clock Count Test Mode is set and there is an uneven amount of clocks.\n Position */
#define SPI_SLAVE_SPI_EC_STS_TMCLK_CNT_ERR_Msk (_UINT32_(0x1) << SPI_SLAVE_SPI_EC_STS_TMCLK_CNT_ERR_Pos) /* (SPI_SLAVE_SPI_EC_STS) This bit is set when the SPI Clock Count Test Mode is set and there is an uneven amount of clocks.\n Mask */
#define SPI_SLAVE_SPI_EC_STS_TMCLK_CNT_ERR(value) (SPI_SLAVE_SPI_EC_STS_TMCLK_CNT_ERR_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_EC_STS_TMCLK_CNT_ERR_Pos)) /* Assigment of value for TMCLK_CNT_ERR in the SPI_SLAVE_SPI_EC_STS register */
#define SPI_SLAVE_SPI_EC_STS_IBF_FLG_Pos      _UINT32_(14)                                         /* (SPI_SLAVE_SPI_EC_STS) Set when the Host writes to the Input Buffer signaling there is data for the EC to read.\n Position */
#define SPI_SLAVE_SPI_EC_STS_IBF_FLG_Msk      (_UINT32_(0x1) << SPI_SLAVE_SPI_EC_STS_IBF_FLG_Pos)  /* (SPI_SLAVE_SPI_EC_STS) Set when the Host writes to the Input Buffer signaling there is data for the EC to read.\n Mask */
#define SPI_SLAVE_SPI_EC_STS_IBF_FLG(value)   (SPI_SLAVE_SPI_EC_STS_IBF_FLG_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_EC_STS_IBF_FLG_Pos)) /* Assigment of value for IBF_FLG in the SPI_SLAVE_SPI_EC_STS register */
#define SPI_SLAVE_SPI_EC_STS_OBF_FLG_Pos      _UINT32_(15)                                         /* (SPI_SLAVE_SPI_EC_STS) Set when the EC writes to the Output Buffer signaling there is data for the Host to read.\n Position */
#define SPI_SLAVE_SPI_EC_STS_OBF_FLG_Msk      (_UINT32_(0x1) << SPI_SLAVE_SPI_EC_STS_OBF_FLG_Pos)  /* (SPI_SLAVE_SPI_EC_STS) Set when the EC writes to the Output Buffer signaling there is data for the Host to read.\n Mask */
#define SPI_SLAVE_SPI_EC_STS_OBF_FLG(value)   (SPI_SLAVE_SPI_EC_STS_OBF_FLG_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_EC_STS_OBF_FLG_Pos)) /* Assigment of value for OBF_FLG in the SPI_SLAVE_SPI_EC_STS register */
#define SPI_SLAVE_SPI_EC_STS_SPIM_RST_REQ_Pos _UINT32_(16)                                         /* (SPI_SLAVE_SPI_EC_STS) Set when the SPI Master Requested a Configuration Reset.\n Position */
#define SPI_SLAVE_SPI_EC_STS_SPIM_RST_REQ_Msk (_UINT32_(0x1) << SPI_SLAVE_SPI_EC_STS_SPIM_RST_REQ_Pos) /* (SPI_SLAVE_SPI_EC_STS) Set when the SPI Master Requested a Configuration Reset.\n Mask */
#define SPI_SLAVE_SPI_EC_STS_SPIM_RST_REQ(value) (SPI_SLAVE_SPI_EC_STS_SPIM_RST_REQ_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_EC_STS_SPIM_RST_REQ_Pos)) /* Assigment of value for SPIM_RST_REQ in the SPI_SLAVE_SPI_EC_STS register */
#define SPI_SLAVE_SPI_EC_STS_RXF_RST_DN_Pos   _UINT32_(17)                                         /* (SPI_SLAVE_SPI_EC_STS) Set after the SPI Master initiates a RX FIFO reset and the reset has been processed. FIFO is cleared.\n Position */
#define SPI_SLAVE_SPI_EC_STS_RXF_RST_DN_Msk   (_UINT32_(0x1) << SPI_SLAVE_SPI_EC_STS_RXF_RST_DN_Pos) /* (SPI_SLAVE_SPI_EC_STS) Set after the SPI Master initiates a RX FIFO reset and the reset has been processed. FIFO is cleared.\n Mask */
#define SPI_SLAVE_SPI_EC_STS_RXF_RST_DN(value) (SPI_SLAVE_SPI_EC_STS_RXF_RST_DN_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_EC_STS_RXF_RST_DN_Pos)) /* Assigment of value for RXF_RST_DN in the SPI_SLAVE_SPI_EC_STS register */
#define SPI_SLAVE_SPI_EC_STS_TXF_RST_DN_Pos   _UINT32_(18)                                         /* (SPI_SLAVE_SPI_EC_STS) Set after the SPI Master initiates a TX FIFO reset and the reset has been processed. FIFO is cleared.\n Position */
#define SPI_SLAVE_SPI_EC_STS_TXF_RST_DN_Msk   (_UINT32_(0x1) << SPI_SLAVE_SPI_EC_STS_TXF_RST_DN_Pos) /* (SPI_SLAVE_SPI_EC_STS) Set after the SPI Master initiates a TX FIFO reset and the reset has been processed. FIFO is cleared.\n Mask */
#define SPI_SLAVE_SPI_EC_STS_TXF_RST_DN(value) (SPI_SLAVE_SPI_EC_STS_TXF_RST_DN_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_EC_STS_TXF_RST_DN_Pos)) /* Assigment of value for TXF_RST_DN in the SPI_SLAVE_SPI_EC_STS register */
#define SPI_SLAVE_SPI_EC_STS_OOL0_ERR_Pos     _UINT32_(19)                                         /* (SPI_SLAVE_SPI_EC_STS) This flag is set with the transfer address requested by the master is out of Limit 0 range or when the BAR is disabled.\n Position */
#define SPI_SLAVE_SPI_EC_STS_OOL0_ERR_Msk     (_UINT32_(0x1) << SPI_SLAVE_SPI_EC_STS_OOL0_ERR_Pos) /* (SPI_SLAVE_SPI_EC_STS) This flag is set with the transfer address requested by the master is out of Limit 0 range or when the BAR is disabled.\n Mask */
#define SPI_SLAVE_SPI_EC_STS_OOL0_ERR(value)  (SPI_SLAVE_SPI_EC_STS_OOL0_ERR_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_EC_STS_OOL0_ERR_Pos)) /* Assigment of value for OOL0_ERR in the SPI_SLAVE_SPI_EC_STS register */
#define SPI_SLAVE_SPI_EC_STS_OOL1_ERR_Pos     _UINT32_(20)                                         /* (SPI_SLAVE_SPI_EC_STS) This flag is set with the transfer address requested by the master is out of Limit 1 range or when the BAR is disabled.\n Position */
#define SPI_SLAVE_SPI_EC_STS_OOL1_ERR_Msk     (_UINT32_(0x1) << SPI_SLAVE_SPI_EC_STS_OOL1_ERR_Pos) /* (SPI_SLAVE_SPI_EC_STS) This flag is set with the transfer address requested by the master is out of Limit 1 range or when the BAR is disabled.\n Mask */
#define SPI_SLAVE_SPI_EC_STS_OOL1_ERR(value)  (SPI_SLAVE_SPI_EC_STS_OOL1_ERR_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_EC_STS_OOL1_ERR_Pos)) /* Assigment of value for OOL1_ERR in the SPI_SLAVE_SPI_EC_STS register */
#define SPI_SLAVE_SPI_EC_STS_ARMBUS_ERR_Pos   _UINT32_(21)                                         /* (SPI_SLAVE_SPI_EC_STS) ARM Bus Error returned for the curren data transfer.\n Position */
#define SPI_SLAVE_SPI_EC_STS_ARMBUS_ERR_Msk   (_UINT32_(0x1) << SPI_SLAVE_SPI_EC_STS_ARMBUS_ERR_Pos) /* (SPI_SLAVE_SPI_EC_STS) ARM Bus Error returned for the curren data transfer.\n Mask */
#define SPI_SLAVE_SPI_EC_STS_ARMBUS_ERR(value) (SPI_SLAVE_SPI_EC_STS_ARMBUS_ERR_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_EC_STS_ARMBUS_ERR_Pos)) /* Assigment of value for ARMBUS_ERR in the SPI_SLAVE_SPI_EC_STS register */
#define SPI_SLAVE_SPI_EC_STS_UNDEF_CMD_ERR_Pos _UINT32_(22)                                         /* (SPI_SLAVE_SPI_EC_STS) Undefined Command Error: The command received from the master isn't defined.\n Position */
#define SPI_SLAVE_SPI_EC_STS_UNDEF_CMD_ERR_Msk (_UINT32_(0x1) << SPI_SLAVE_SPI_EC_STS_UNDEF_CMD_ERR_Pos) /* (SPI_SLAVE_SPI_EC_STS) Undefined Command Error: The command received from the master isn't defined.\n Mask */
#define SPI_SLAVE_SPI_EC_STS_UNDEF_CMD_ERR(value) (SPI_SLAVE_SPI_EC_STS_UNDEF_CMD_ERR_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_EC_STS_UNDEF_CMD_ERR_Pos)) /* Assigment of value for UNDEF_CMD_ERR in the SPI_SLAVE_SPI_EC_STS register */
#define SPI_SLAVE_SPI_EC_STS_DV_BUSY_Pos      _UINT32_(23)                                         /* (SPI_SLAVE_SPI_EC_STS) If the Master requested a transaction whose destination is busy the request is ignored.\n         Should use the poll or wait for interrupts.\n Position */
#define SPI_SLAVE_SPI_EC_STS_DV_BUSY_Msk      (_UINT32_(0x1) << SPI_SLAVE_SPI_EC_STS_DV_BUSY_Pos)  /* (SPI_SLAVE_SPI_EC_STS) If the Master requested a transaction whose destination is busy the request is ignored.\n         Should use the poll or wait for interrupts.\n Mask */
#define SPI_SLAVE_SPI_EC_STS_DV_BUSY(value)   (SPI_SLAVE_SPI_EC_STS_DV_BUSY_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_EC_STS_DV_BUSY_Pos)) /* Assigment of value for DV_BUSY in the SPI_SLAVE_SPI_EC_STS register */
#define SPI_SLAVE_SPI_EC_STS_RXF_SIZE_ERR_Pos _UINT32_(24)                                         /* (SPI_SLAVE_SPI_EC_STS) If size requested is more than what Master provided and the Master terminates early error flag         shut down request signal to ARM Bus. Size requested is less than what Master provided -- ignored and         continue transaction, may be taking in garbage.\n Position */
#define SPI_SLAVE_SPI_EC_STS_RXF_SIZE_ERR_Msk (_UINT32_(0x1) << SPI_SLAVE_SPI_EC_STS_RXF_SIZE_ERR_Pos) /* (SPI_SLAVE_SPI_EC_STS) If size requested is more than what Master provided and the Master terminates early error flag         shut down request signal to ARM Bus. Size requested is less than what Master provided -- ignored and         continue transaction, may be taking in garbage.\n Mask */
#define SPI_SLAVE_SPI_EC_STS_RXF_SIZE_ERR(value) (SPI_SLAVE_SPI_EC_STS_RXF_SIZE_ERR_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_EC_STS_RXF_SIZE_ERR_Pos)) /* Assigment of value for RXF_SIZE_ERR in the SPI_SLAVE_SPI_EC_STS register */
#define SPI_SLAVE_SPI_EC_STS_TXF_UNFLW_Pos    _UINT32_(25)                                         /* (SPI_SLAVE_SPI_EC_STS) If Master reads more than what is in FIFO, FIFO will flag an underflow error and the data returned         will just be the last valid pointer value.\n Position */
#define SPI_SLAVE_SPI_EC_STS_TXF_UNFLW_Msk    (_UINT32_(0x1) << SPI_SLAVE_SPI_EC_STS_TXF_UNFLW_Pos) /* (SPI_SLAVE_SPI_EC_STS) If Master reads more than what is in FIFO, FIFO will flag an underflow error and the data returned         will just be the last valid pointer value.\n Mask */
#define SPI_SLAVE_SPI_EC_STS_TXF_UNFLW(value) (SPI_SLAVE_SPI_EC_STS_TXF_UNFLW_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_EC_STS_TXF_UNFLW_Pos)) /* Assigment of value for TXF_UNFLW in the SPI_SLAVE_SPI_EC_STS register */
#define SPI_SLAVE_SPI_EC_STS_TXF_OVRFLW_Pos   _UINT32_(26)                                         /* (SPI_SLAVE_SPI_EC_STS) If Master doesn't read all of the data it requested from the posted read block cycle, than data         will still be left in the FIFO. This will cause misalignment with the following transactions and a new         read cycle can cause overflow.\n Position */
#define SPI_SLAVE_SPI_EC_STS_TXF_OVRFLW_Msk   (_UINT32_(0x1) << SPI_SLAVE_SPI_EC_STS_TXF_OVRFLW_Pos) /* (SPI_SLAVE_SPI_EC_STS) If Master doesn't read all of the data it requested from the posted read block cycle, than data         will still be left in the FIFO. This will cause misalignment with the following transactions and a new         read cycle can cause overflow.\n Mask */
#define SPI_SLAVE_SPI_EC_STS_TXF_OVRFLW(value) (SPI_SLAVE_SPI_EC_STS_TXF_OVRFLW_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_EC_STS_TXF_OVRFLW_Pos)) /* Assigment of value for TXF_OVRFLW in the SPI_SLAVE_SPI_EC_STS register */
#define SPI_SLAVE_SPI_EC_STS_RXF_UNFLW_Pos    _UINT32_(27)                                         /* (SPI_SLAVE_SPI_EC_STS) If the SPI Slave reads RX FIFO when it is empty, RX FIFO Underflow flag will be set. This condition         will never happen under normal situation.\n Position */
#define SPI_SLAVE_SPI_EC_STS_RXF_UNFLW_Msk    (_UINT32_(0x1) << SPI_SLAVE_SPI_EC_STS_RXF_UNFLW_Pos) /* (SPI_SLAVE_SPI_EC_STS) If the SPI Slave reads RX FIFO when it is empty, RX FIFO Underflow flag will be set. This condition         will never happen under normal situation.\n Mask */
#define SPI_SLAVE_SPI_EC_STS_RXF_UNFLW(value) (SPI_SLAVE_SPI_EC_STS_RXF_UNFLW_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_EC_STS_RXF_UNFLW_Pos)) /* Assigment of value for RXF_UNFLW in the SPI_SLAVE_SPI_EC_STS register */
#define SPI_SLAVE_SPI_EC_STS_RXF_OVRFLW_Pos   _UINT32_(28)                                         /* (SPI_SLAVE_SPI_EC_STS) If SPI Master writes more than the space in the FIFO, the FIFO will flag an overflow error and data         will not be stored.\n Position */
#define SPI_SLAVE_SPI_EC_STS_RXF_OVRFLW_Msk   (_UINT32_(0x1) << SPI_SLAVE_SPI_EC_STS_RXF_OVRFLW_Pos) /* (SPI_SLAVE_SPI_EC_STS) If SPI Master writes more than the space in the FIFO, the FIFO will flag an overflow error and data         will not be stored.\n Mask */
#define SPI_SLAVE_SPI_EC_STS_RXF_OVRFLW(value) (SPI_SLAVE_SPI_EC_STS_RXF_OVRFLW_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_EC_STS_RXF_OVRFLW_Pos)) /* Assigment of value for RXF_OVRFLW in the SPI_SLAVE_SPI_EC_STS register */
#define SPI_SLAVE_SPI_EC_STS_Msk              _UINT32_(0x1FFFEF7B)                                 /* (SPI_SLAVE_SPI_EC_STS) Register Mask  */


/* -------- SPI_SLAVE_SPI_IEN : (SPI_SLAVE Offset: 0x0C) (R/W 32) SPI Slave Interrupt Enable Register.\n -------- */
#define SPI_SLAVE_SPI_IEN_RESETVALUE          _UINT32_(0x00)                                       /*  (SPI_SLAVE_SPI_IEN) SPI Slave Interrupt Enable Register.\n  Reset Value */

#define SPI_SLAVE_SPI_IEN_MEM_WR_DONE_Pos     _UINT32_(0)                                          /* (SPI_SLAVE_SPI_IEN) Enable Memory Write Done Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SPI_IEN_MEM_WR_DONE_Msk     (_UINT32_(0x1) << SPI_SLAVE_SPI_IEN_MEM_WR_DONE_Pos) /* (SPI_SLAVE_SPI_IEN) Enable Memory Write Done Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SPI_IEN_MEM_WR_DONE(value)  (SPI_SLAVE_SPI_IEN_MEM_WR_DONE_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_IEN_MEM_WR_DONE_Pos)) /* Assigment of value for MEM_WR_DONE in the SPI_SLAVE_SPI_IEN register */
#define SPI_SLAVE_SPI_IEN_MEM_RD_DONE_Pos     _UINT32_(1)                                          /* (SPI_SLAVE_SPI_IEN) Enable Memory Read Done Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SPI_IEN_MEM_RD_DONE_Msk     (_UINT32_(0x1) << SPI_SLAVE_SPI_IEN_MEM_RD_DONE_Pos) /* (SPI_SLAVE_SPI_IEN) Enable Memory Read Done Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SPI_IEN_MEM_RD_DONE(value)  (SPI_SLAVE_SPI_IEN_MEM_RD_DONE_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_IEN_MEM_RD_DONE_Pos)) /* Assigment of value for MEM_RD_DONE in the SPI_SLAVE_SPI_IEN register */
#define SPI_SLAVE_SPI_IEN_MEM_WR_BUSY_Pos     _UINT32_(3)                                          /* (SPI_SLAVE_SPI_IEN) Enable Memory Write Busy Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SPI_IEN_MEM_WR_BUSY_Msk     (_UINT32_(0x1) << SPI_SLAVE_SPI_IEN_MEM_WR_BUSY_Pos) /* (SPI_SLAVE_SPI_IEN) Enable Memory Write Busy Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SPI_IEN_MEM_WR_BUSY(value)  (SPI_SLAVE_SPI_IEN_MEM_WR_BUSY_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_IEN_MEM_WR_BUSY_Pos)) /* Assigment of value for MEM_WR_BUSY in the SPI_SLAVE_SPI_IEN register */
#define SPI_SLAVE_SPI_IEN_MEM_RD_BUSY_Pos     _UINT32_(4)                                          /* (SPI_SLAVE_SPI_IEN) Enable Memory Read Busy Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SPI_IEN_MEM_RD_BUSY_Msk     (_UINT32_(0x1) << SPI_SLAVE_SPI_IEN_MEM_RD_BUSY_Pos) /* (SPI_SLAVE_SPI_IEN) Enable Memory Read Busy Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SPI_IEN_MEM_RD_BUSY(value)  (SPI_SLAVE_SPI_IEN_MEM_RD_BUSY_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_IEN_MEM_RD_BUSY_Pos)) /* Assigment of value for MEM_RD_BUSY in the SPI_SLAVE_SPI_IEN register */
#define SPI_SLAVE_SPI_IEN_SREG_TRANS_Pos      _UINT32_(5)                                          /* (SPI_SLAVE_SPI_IEN) Enable SREG Trans Busy Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SPI_IEN_SREG_TRANS_Msk      (_UINT32_(0x1) << SPI_SLAVE_SPI_IEN_SREG_TRANS_Pos)  /* (SPI_SLAVE_SPI_IEN) Enable SREG Trans Busy Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SPI_IEN_SREG_TRANS(value)   (SPI_SLAVE_SPI_IEN_SREG_TRANS_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_IEN_SREG_TRANS_Pos)) /* Assigment of value for SREG_TRANS in the SPI_SLAVE_SPI_IEN register */
#define SPI_SLAVE_SPI_IEN_POLL_HI_Pos         _UINT32_(6)                                          /* (SPI_SLAVE_SPI_IEN) Enable Poll High Request Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SPI_IEN_POLL_HI_Msk         (_UINT32_(0x1) << SPI_SLAVE_SPI_IEN_POLL_HI_Pos)     /* (SPI_SLAVE_SPI_IEN) Enable Poll High Request Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SPI_IEN_POLL_HI(value)      (SPI_SLAVE_SPI_IEN_POLL_HI_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_IEN_POLL_HI_Pos)) /* Assigment of value for POLL_HI in the SPI_SLAVE_SPI_IEN register */
#define SPI_SLAVE_SPI_IEN_RXF_EMP_Pos         _UINT32_(8)                                          /* (SPI_SLAVE_SPI_IEN) Enable SREG RX FIFO Empty Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SPI_IEN_RXF_EMP_Msk         (_UINT32_(0x1) << SPI_SLAVE_SPI_IEN_RXF_EMP_Pos)     /* (SPI_SLAVE_SPI_IEN) Enable SREG RX FIFO Empty Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SPI_IEN_RXF_EMP(value)      (SPI_SLAVE_SPI_IEN_RXF_EMP_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_IEN_RXF_EMP_Pos)) /* Assigment of value for RXF_EMP in the SPI_SLAVE_SPI_IEN register */
#define SPI_SLAVE_SPI_IEN_RXF_FUL_Pos         _UINT32_(9)                                          /* (SPI_SLAVE_SPI_IEN) Enable RX FIFO Full Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SPI_IEN_RXF_FUL_Msk         (_UINT32_(0x1) << SPI_SLAVE_SPI_IEN_RXF_FUL_Pos)     /* (SPI_SLAVE_SPI_IEN) Enable RX FIFO Full Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SPI_IEN_RXF_FUL(value)      (SPI_SLAVE_SPI_IEN_RXF_FUL_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_IEN_RXF_FUL_Pos)) /* Assigment of value for RXF_FUL in the SPI_SLAVE_SPI_IEN register */
#define SPI_SLAVE_SPI_IEN_TXF_EMP_Pos         _UINT32_(10)                                         /* (SPI_SLAVE_SPI_IEN) Enable TX FIFO Empty Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SPI_IEN_TXF_EMP_Msk         (_UINT32_(0x1) << SPI_SLAVE_SPI_IEN_TXF_EMP_Pos)     /* (SPI_SLAVE_SPI_IEN) Enable TX FIFO Empty Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SPI_IEN_TXF_EMP(value)      (SPI_SLAVE_SPI_IEN_TXF_EMP_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_IEN_TXF_EMP_Pos)) /* Assigment of value for TXF_EMP in the SPI_SLAVE_SPI_IEN register */
#define SPI_SLAVE_SPI_IEN_TXF_FUL_Pos         _UINT32_(11)                                         /* (SPI_SLAVE_SPI_IEN) Enable TX FIFI FULL Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SPI_IEN_TXF_FUL_Msk         (_UINT32_(0x1) << SPI_SLAVE_SPI_IEN_TXF_FUL_Pos)     /* (SPI_SLAVE_SPI_IEN) Enable TX FIFI FULL Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SPI_IEN_TXF_FUL(value)      (SPI_SLAVE_SPI_IEN_TXF_FUL_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_IEN_TXF_FUL_Pos)) /* Assigment of value for TXF_FUL in the SPI_SLAVE_SPI_IEN register */
#define SPI_SLAVE_SPI_IEN_TMCLK_CNT_ERR_Pos   _UINT32_(13)                                         /* (SPI_SLAVE_SPI_IEN) Enable Test Mode SPI Clock Count Error Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SPI_IEN_TMCLK_CNT_ERR_Msk   (_UINT32_(0x1) << SPI_SLAVE_SPI_IEN_TMCLK_CNT_ERR_Pos) /* (SPI_SLAVE_SPI_IEN) Enable Test Mode SPI Clock Count Error Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SPI_IEN_TMCLK_CNT_ERR(value) (SPI_SLAVE_SPI_IEN_TMCLK_CNT_ERR_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_IEN_TMCLK_CNT_ERR_Pos)) /* Assigment of value for TMCLK_CNT_ERR in the SPI_SLAVE_SPI_IEN register */
#define SPI_SLAVE_SPI_IEN_IBF_FLG_Pos         _UINT32_(14)                                         /* (SPI_SLAVE_SPI_IEN) Enable Input Buffer Signaling Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SPI_IEN_IBF_FLG_Msk         (_UINT32_(0x1) << SPI_SLAVE_SPI_IEN_IBF_FLG_Pos)     /* (SPI_SLAVE_SPI_IEN) Enable Input Buffer Signaling Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SPI_IEN_IBF_FLG(value)      (SPI_SLAVE_SPI_IEN_IBF_FLG_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_IEN_IBF_FLG_Pos)) /* Assigment of value for IBF_FLG in the SPI_SLAVE_SPI_IEN register */
#define SPI_SLAVE_SPI_IEN_OBF_FLG_Pos         _UINT32_(15)                                         /* (SPI_SLAVE_SPI_IEN) Enable Output Buffer signaling Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SPI_IEN_OBF_FLG_Msk         (_UINT32_(0x1) << SPI_SLAVE_SPI_IEN_OBF_FLG_Pos)     /* (SPI_SLAVE_SPI_IEN) Enable Output Buffer signaling Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SPI_IEN_OBF_FLG(value)      (SPI_SLAVE_SPI_IEN_OBF_FLG_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_IEN_OBF_FLG_Pos)) /* Assigment of value for OBF_FLG in the SPI_SLAVE_SPI_IEN register */
#define SPI_SLAVE_SPI_IEN_SPIM_RST_REQ_Pos    _UINT32_(16)                                         /* (SPI_SLAVE_SPI_IEN) Enable SPI Master Request Reset Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SPI_IEN_SPIM_RST_REQ_Msk    (_UINT32_(0x1) << SPI_SLAVE_SPI_IEN_SPIM_RST_REQ_Pos) /* (SPI_SLAVE_SPI_IEN) Enable SPI Master Request Reset Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SPI_IEN_SPIM_RST_REQ(value) (SPI_SLAVE_SPI_IEN_SPIM_RST_REQ_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_IEN_SPIM_RST_REQ_Pos)) /* Assigment of value for SPIM_RST_REQ in the SPI_SLAVE_SPI_IEN register */
#define SPI_SLAVE_SPI_IEN_RXF_RST_DN_Pos      _UINT32_(17)                                         /* (SPI_SLAVE_SPI_IEN) Enable RX FIFO Reset Done Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SPI_IEN_RXF_RST_DN_Msk      (_UINT32_(0x1) << SPI_SLAVE_SPI_IEN_RXF_RST_DN_Pos)  /* (SPI_SLAVE_SPI_IEN) Enable RX FIFO Reset Done Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SPI_IEN_RXF_RST_DN(value)   (SPI_SLAVE_SPI_IEN_RXF_RST_DN_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_IEN_RXF_RST_DN_Pos)) /* Assigment of value for RXF_RST_DN in the SPI_SLAVE_SPI_IEN register */
#define SPI_SLAVE_SPI_IEN_TXF_RST_DN_Pos      _UINT32_(18)                                         /* (SPI_SLAVE_SPI_IEN) Enable TX FIFO Reset Done Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SPI_IEN_TXF_RST_DN_Msk      (_UINT32_(0x1) << SPI_SLAVE_SPI_IEN_TXF_RST_DN_Pos)  /* (SPI_SLAVE_SPI_IEN) Enable TX FIFO Reset Done Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SPI_IEN_TXF_RST_DN(value)   (SPI_SLAVE_SPI_IEN_TXF_RST_DN_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_IEN_TXF_RST_DN_Pos)) /* Assigment of value for TXF_RST_DN in the SPI_SLAVE_SPI_IEN register */
#define SPI_SLAVE_SPI_IEN_OOL0_ERR_Pos        _UINT32_(19)                                         /* (SPI_SLAVE_SPI_IEN) Enable Out Of Limit 0 Error Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SPI_IEN_OOL0_ERR_Msk        (_UINT32_(0x1) << SPI_SLAVE_SPI_IEN_OOL0_ERR_Pos)    /* (SPI_SLAVE_SPI_IEN) Enable Out Of Limit 0 Error Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SPI_IEN_OOL0_ERR(value)     (SPI_SLAVE_SPI_IEN_OOL0_ERR_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_IEN_OOL0_ERR_Pos)) /* Assigment of value for OOL0_ERR in the SPI_SLAVE_SPI_IEN register */
#define SPI_SLAVE_SPI_IEN_OOL1_ERR_Pos        _UINT32_(20)                                         /* (SPI_SLAVE_SPI_IEN) Enable Out Of Limit 1 Error Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SPI_IEN_OOL1_ERR_Msk        (_UINT32_(0x1) << SPI_SLAVE_SPI_IEN_OOL1_ERR_Pos)    /* (SPI_SLAVE_SPI_IEN) Enable Out Of Limit 1 Error Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SPI_IEN_OOL1_ERR(value)     (SPI_SLAVE_SPI_IEN_OOL1_ERR_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_IEN_OOL1_ERR_Pos)) /* Assigment of value for OOL1_ERR in the SPI_SLAVE_SPI_IEN register */
#define SPI_SLAVE_SPI_IEN_ARMBUS_ERR_Pos      _UINT32_(21)                                         /* (SPI_SLAVE_SPI_IEN) Enable AHB BUS Error Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SPI_IEN_ARMBUS_ERR_Msk      (_UINT32_(0x1) << SPI_SLAVE_SPI_IEN_ARMBUS_ERR_Pos)  /* (SPI_SLAVE_SPI_IEN) Enable AHB BUS Error Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SPI_IEN_ARMBUS_ERR(value)   (SPI_SLAVE_SPI_IEN_ARMBUS_ERR_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_IEN_ARMBUS_ERR_Pos)) /* Assigment of value for ARMBUS_ERR in the SPI_SLAVE_SPI_IEN register */
#define SPI_SLAVE_SPI_IEN_UNDEF_CMD_ERR_Pos   _UINT32_(22)                                         /* (SPI_SLAVE_SPI_IEN) Enable Undefined Command Error Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SPI_IEN_UNDEF_CMD_ERR_Msk   (_UINT32_(0x1) << SPI_SLAVE_SPI_IEN_UNDEF_CMD_ERR_Pos) /* (SPI_SLAVE_SPI_IEN) Enable Undefined Command Error Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SPI_IEN_UNDEF_CMD_ERR(value) (SPI_SLAVE_SPI_IEN_UNDEF_CMD_ERR_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_IEN_UNDEF_CMD_ERR_Pos)) /* Assigment of value for UNDEF_CMD_ERR in the SPI_SLAVE_SPI_IEN register */
#define SPI_SLAVE_SPI_IEN_DV_BUSY_Pos         _UINT32_(23)                                         /* (SPI_SLAVE_SPI_IEN) Enable Device Busy Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SPI_IEN_DV_BUSY_Msk         (_UINT32_(0x1) << SPI_SLAVE_SPI_IEN_DV_BUSY_Pos)     /* (SPI_SLAVE_SPI_IEN) Enable Device Busy Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SPI_IEN_DV_BUSY(value)      (SPI_SLAVE_SPI_IEN_DV_BUSY_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_IEN_DV_BUSY_Pos)) /* Assigment of value for DV_BUSY in the SPI_SLAVE_SPI_IEN register */
#define SPI_SLAVE_SPI_IEN_RXF_SIZE_ERR_Pos    _UINT32_(24)                                         /* (SPI_SLAVE_SPI_IEN) Enable RX FIFO SIZE Error Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SPI_IEN_RXF_SIZE_ERR_Msk    (_UINT32_(0x1) << SPI_SLAVE_SPI_IEN_RXF_SIZE_ERR_Pos) /* (SPI_SLAVE_SPI_IEN) Enable RX FIFO SIZE Error Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SPI_IEN_RXF_SIZE_ERR(value) (SPI_SLAVE_SPI_IEN_RXF_SIZE_ERR_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_IEN_RXF_SIZE_ERR_Pos)) /* Assigment of value for RXF_SIZE_ERR in the SPI_SLAVE_SPI_IEN register */
#define SPI_SLAVE_SPI_IEN_TXF_UNFLW_Pos       _UINT32_(25)                                         /* (SPI_SLAVE_SPI_IEN) Enable TX FIFO Underflow Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SPI_IEN_TXF_UNFLW_Msk       (_UINT32_(0x1) << SPI_SLAVE_SPI_IEN_TXF_UNFLW_Pos)   /* (SPI_SLAVE_SPI_IEN) Enable TX FIFO Underflow Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SPI_IEN_TXF_UNFLW(value)    (SPI_SLAVE_SPI_IEN_TXF_UNFLW_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_IEN_TXF_UNFLW_Pos)) /* Assigment of value for TXF_UNFLW in the SPI_SLAVE_SPI_IEN register */
#define SPI_SLAVE_SPI_IEN_TXF_OVRFLOW_Pos     _UINT32_(26)                                         /* (SPI_SLAVE_SPI_IEN) Enable TX FIFO Overflow Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SPI_IEN_TXF_OVRFLOW_Msk     (_UINT32_(0x1) << SPI_SLAVE_SPI_IEN_TXF_OVRFLOW_Pos) /* (SPI_SLAVE_SPI_IEN) Enable TX FIFO Overflow Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SPI_IEN_TXF_OVRFLOW(value)  (SPI_SLAVE_SPI_IEN_TXF_OVRFLOW_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_IEN_TXF_OVRFLOW_Pos)) /* Assigment of value for TXF_OVRFLOW in the SPI_SLAVE_SPI_IEN register */
#define SPI_SLAVE_SPI_IEN_RXF_UNFLW_Pos       _UINT32_(27)                                         /* (SPI_SLAVE_SPI_IEN) Enable RX FIFO Underflow Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SPI_IEN_RXF_UNFLW_Msk       (_UINT32_(0x1) << SPI_SLAVE_SPI_IEN_RXF_UNFLW_Pos)   /* (SPI_SLAVE_SPI_IEN) Enable RX FIFO Underflow Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SPI_IEN_RXF_UNFLW(value)    (SPI_SLAVE_SPI_IEN_RXF_UNFLW_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_IEN_RXF_UNFLW_Pos)) /* Assigment of value for RXF_UNFLW in the SPI_SLAVE_SPI_IEN register */
#define SPI_SLAVE_SPI_IEN_RXF_OVRFLW_Pos      _UINT32_(28)                                         /* (SPI_SLAVE_SPI_IEN) Enable RX FIFO Overflow Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SPI_IEN_RXF_OVRFLW_Msk      (_UINT32_(0x1) << SPI_SLAVE_SPI_IEN_RXF_OVRFLW_Pos)  /* (SPI_SLAVE_SPI_IEN) Enable RX FIFO Overflow Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SPI_IEN_RXF_OVRFLW(value)   (SPI_SLAVE_SPI_IEN_RXF_OVRFLW_Msk & (_UINT32_(value) << SPI_SLAVE_SPI_IEN_RXF_OVRFLW_Pos)) /* Assigment of value for RXF_OVRFLW in the SPI_SLAVE_SPI_IEN register */
#define SPI_SLAVE_SPI_IEN_Msk                 _UINT32_(0x1FFFEF7B)                                 /* (SPI_SLAVE_SPI_IEN) Register Mask  */


/* -------- SPI_SLAVE_EC_IEN : (SPI_SLAVE Offset: 0x10) (R/W 32) SPI Slave EC Interrupt Enable Register.\n -------- */
#define SPI_SLAVE_EC_IEN_RESETVALUE           _UINT32_(0x00)                                       /*  (SPI_SLAVE_EC_IEN) SPI Slave EC Interrupt Enable Register.\n  Reset Value */

#define SPI_SLAVE_EC_IEN_MEM_WR_DONE_Pos      _UINT32_(0)                                          /* (SPI_SLAVE_EC_IEN) Enable Memory Write Done Interrupt to EC.\n Position */
#define SPI_SLAVE_EC_IEN_MEM_WR_DONE_Msk      (_UINT32_(0x1) << SPI_SLAVE_EC_IEN_MEM_WR_DONE_Pos)  /* (SPI_SLAVE_EC_IEN) Enable Memory Write Done Interrupt to EC.\n Mask */
#define SPI_SLAVE_EC_IEN_MEM_WR_DONE(value)   (SPI_SLAVE_EC_IEN_MEM_WR_DONE_Msk & (_UINT32_(value) << SPI_SLAVE_EC_IEN_MEM_WR_DONE_Pos)) /* Assigment of value for MEM_WR_DONE in the SPI_SLAVE_EC_IEN register */
#define SPI_SLAVE_EC_IEN_MEM_RD_DONE_Pos      _UINT32_(1)                                          /* (SPI_SLAVE_EC_IEN) Enable Memory Read Done Interrupt to EC.\n Position */
#define SPI_SLAVE_EC_IEN_MEM_RD_DONE_Msk      (_UINT32_(0x1) << SPI_SLAVE_EC_IEN_MEM_RD_DONE_Pos)  /* (SPI_SLAVE_EC_IEN) Enable Memory Read Done Interrupt to EC.\n Mask */
#define SPI_SLAVE_EC_IEN_MEM_RD_DONE(value)   (SPI_SLAVE_EC_IEN_MEM_RD_DONE_Msk & (_UINT32_(value) << SPI_SLAVE_EC_IEN_MEM_RD_DONE_Pos)) /* Assigment of value for MEM_RD_DONE in the SPI_SLAVE_EC_IEN register */
#define SPI_SLAVE_EC_IEN_MEM_WR_BUSY_Pos      _UINT32_(3)                                          /* (SPI_SLAVE_EC_IEN) Enable Memory Write Busy Interrupt to EC.\n Position */
#define SPI_SLAVE_EC_IEN_MEM_WR_BUSY_Msk      (_UINT32_(0x1) << SPI_SLAVE_EC_IEN_MEM_WR_BUSY_Pos)  /* (SPI_SLAVE_EC_IEN) Enable Memory Write Busy Interrupt to EC.\n Mask */
#define SPI_SLAVE_EC_IEN_MEM_WR_BUSY(value)   (SPI_SLAVE_EC_IEN_MEM_WR_BUSY_Msk & (_UINT32_(value) << SPI_SLAVE_EC_IEN_MEM_WR_BUSY_Pos)) /* Assigment of value for MEM_WR_BUSY in the SPI_SLAVE_EC_IEN register */
#define SPI_SLAVE_EC_IEN_MEM_RD_BUSY_Pos      _UINT32_(4)                                          /* (SPI_SLAVE_EC_IEN) Enable Memory Read Busy Interrupt to EC.\n Position */
#define SPI_SLAVE_EC_IEN_MEM_RD_BUSY_Msk      (_UINT32_(0x1) << SPI_SLAVE_EC_IEN_MEM_RD_BUSY_Pos)  /* (SPI_SLAVE_EC_IEN) Enable Memory Read Busy Interrupt to EC.\n Mask */
#define SPI_SLAVE_EC_IEN_MEM_RD_BUSY(value)   (SPI_SLAVE_EC_IEN_MEM_RD_BUSY_Msk & (_UINT32_(value) << SPI_SLAVE_EC_IEN_MEM_RD_BUSY_Pos)) /* Assigment of value for MEM_RD_BUSY in the SPI_SLAVE_EC_IEN register */
#define SPI_SLAVE_EC_IEN_SREG_TRANS_Pos       _UINT32_(5)                                          /* (SPI_SLAVE_EC_IEN) Enable SREG Trans Busy Interrupt to EC.\n Position */
#define SPI_SLAVE_EC_IEN_SREG_TRANS_Msk       (_UINT32_(0x1) << SPI_SLAVE_EC_IEN_SREG_TRANS_Pos)   /* (SPI_SLAVE_EC_IEN) Enable SREG Trans Busy Interrupt to EC.\n Mask */
#define SPI_SLAVE_EC_IEN_SREG_TRANS(value)    (SPI_SLAVE_EC_IEN_SREG_TRANS_Msk & (_UINT32_(value) << SPI_SLAVE_EC_IEN_SREG_TRANS_Pos)) /* Assigment of value for SREG_TRANS in the SPI_SLAVE_EC_IEN register */
#define SPI_SLAVE_EC_IEN_POLL_HI_Pos          _UINT32_(6)                                          /* (SPI_SLAVE_EC_IEN) Enable Poll High Request Interrupt to EC.\n Position */
#define SPI_SLAVE_EC_IEN_POLL_HI_Msk          (_UINT32_(0x1) << SPI_SLAVE_EC_IEN_POLL_HI_Pos)      /* (SPI_SLAVE_EC_IEN) Enable Poll High Request Interrupt to EC.\n Mask */
#define SPI_SLAVE_EC_IEN_POLL_HI(value)       (SPI_SLAVE_EC_IEN_POLL_HI_Msk & (_UINT32_(value) << SPI_SLAVE_EC_IEN_POLL_HI_Pos)) /* Assigment of value for POLL_HI in the SPI_SLAVE_EC_IEN register */
#define SPI_SLAVE_EC_IEN_RXF_EMP_Pos          _UINT32_(8)                                          /* (SPI_SLAVE_EC_IEN) Enable SREG RX FIFO Empty Interrupt to EC.\n Position */
#define SPI_SLAVE_EC_IEN_RXF_EMP_Msk          (_UINT32_(0x1) << SPI_SLAVE_EC_IEN_RXF_EMP_Pos)      /* (SPI_SLAVE_EC_IEN) Enable SREG RX FIFO Empty Interrupt to EC.\n Mask */
#define SPI_SLAVE_EC_IEN_RXF_EMP(value)       (SPI_SLAVE_EC_IEN_RXF_EMP_Msk & (_UINT32_(value) << SPI_SLAVE_EC_IEN_RXF_EMP_Pos)) /* Assigment of value for RXF_EMP in the SPI_SLAVE_EC_IEN register */
#define SPI_SLAVE_EC_IEN_RXF_FUL_Pos          _UINT32_(9)                                          /* (SPI_SLAVE_EC_IEN) Enable RX FIFO Full Interrupt to EC.\n Position */
#define SPI_SLAVE_EC_IEN_RXF_FUL_Msk          (_UINT32_(0x1) << SPI_SLAVE_EC_IEN_RXF_FUL_Pos)      /* (SPI_SLAVE_EC_IEN) Enable RX FIFO Full Interrupt to EC.\n Mask */
#define SPI_SLAVE_EC_IEN_RXF_FUL(value)       (SPI_SLAVE_EC_IEN_RXF_FUL_Msk & (_UINT32_(value) << SPI_SLAVE_EC_IEN_RXF_FUL_Pos)) /* Assigment of value for RXF_FUL in the SPI_SLAVE_EC_IEN register */
#define SPI_SLAVE_EC_IEN_TXF_EMP_Pos          _UINT32_(10)                                         /* (SPI_SLAVE_EC_IEN) Enable TX FIFO Empty Interrupt to EC.\n Position */
#define SPI_SLAVE_EC_IEN_TXF_EMP_Msk          (_UINT32_(0x1) << SPI_SLAVE_EC_IEN_TXF_EMP_Pos)      /* (SPI_SLAVE_EC_IEN) Enable TX FIFO Empty Interrupt to EC.\n Mask */
#define SPI_SLAVE_EC_IEN_TXF_EMP(value)       (SPI_SLAVE_EC_IEN_TXF_EMP_Msk & (_UINT32_(value) << SPI_SLAVE_EC_IEN_TXF_EMP_Pos)) /* Assigment of value for TXF_EMP in the SPI_SLAVE_EC_IEN register */
#define SPI_SLAVE_EC_IEN_TXF_FUL_Pos          _UINT32_(11)                                         /* (SPI_SLAVE_EC_IEN) Enable TX FIFI FULL Interrupt to EC.\n Position */
#define SPI_SLAVE_EC_IEN_TXF_FUL_Msk          (_UINT32_(0x1) << SPI_SLAVE_EC_IEN_TXF_FUL_Pos)      /* (SPI_SLAVE_EC_IEN) Enable TX FIFI FULL Interrupt to EC.\n Mask */
#define SPI_SLAVE_EC_IEN_TXF_FUL(value)       (SPI_SLAVE_EC_IEN_TXF_FUL_Msk & (_UINT32_(value) << SPI_SLAVE_EC_IEN_TXF_FUL_Pos)) /* Assigment of value for TXF_FUL in the SPI_SLAVE_EC_IEN register */
#define SPI_SLAVE_EC_IEN_TMCLK_CNT_ERR_Pos    _UINT32_(13)                                         /* (SPI_SLAVE_EC_IEN) Enable Test Mode SPI Clock Count Error Interrupt to EC.\n Position */
#define SPI_SLAVE_EC_IEN_TMCLK_CNT_ERR_Msk    (_UINT32_(0x1) << SPI_SLAVE_EC_IEN_TMCLK_CNT_ERR_Pos) /* (SPI_SLAVE_EC_IEN) Enable Test Mode SPI Clock Count Error Interrupt to EC.\n Mask */
#define SPI_SLAVE_EC_IEN_TMCLK_CNT_ERR(value) (SPI_SLAVE_EC_IEN_TMCLK_CNT_ERR_Msk & (_UINT32_(value) << SPI_SLAVE_EC_IEN_TMCLK_CNT_ERR_Pos)) /* Assigment of value for TMCLK_CNT_ERR in the SPI_SLAVE_EC_IEN register */
#define SPI_SLAVE_EC_IEN_IBF_FLG_Pos          _UINT32_(14)                                         /* (SPI_SLAVE_EC_IEN) Enable Input Buffer Signaling Interrupt to EC.\n Position */
#define SPI_SLAVE_EC_IEN_IBF_FLG_Msk          (_UINT32_(0x1) << SPI_SLAVE_EC_IEN_IBF_FLG_Pos)      /* (SPI_SLAVE_EC_IEN) Enable Input Buffer Signaling Interrupt to EC.\n Mask */
#define SPI_SLAVE_EC_IEN_IBF_FLG(value)       (SPI_SLAVE_EC_IEN_IBF_FLG_Msk & (_UINT32_(value) << SPI_SLAVE_EC_IEN_IBF_FLG_Pos)) /* Assigment of value for IBF_FLG in the SPI_SLAVE_EC_IEN register */
#define SPI_SLAVE_EC_IEN_OBF_FLG_Pos          _UINT32_(15)                                         /* (SPI_SLAVE_EC_IEN) Enable Output Buffer signaling Interrupt to EC.\n Position */
#define SPI_SLAVE_EC_IEN_OBF_FLG_Msk          (_UINT32_(0x1) << SPI_SLAVE_EC_IEN_OBF_FLG_Pos)      /* (SPI_SLAVE_EC_IEN) Enable Output Buffer signaling Interrupt to EC.\n Mask */
#define SPI_SLAVE_EC_IEN_OBF_FLG(value)       (SPI_SLAVE_EC_IEN_OBF_FLG_Msk & (_UINT32_(value) << SPI_SLAVE_EC_IEN_OBF_FLG_Pos)) /* Assigment of value for OBF_FLG in the SPI_SLAVE_EC_IEN register */
#define SPI_SLAVE_EC_IEN_SPIM_RST_REQ_Pos     _UINT32_(16)                                         /* (SPI_SLAVE_EC_IEN) Enable SPI Master Request Reset Interrupt to EC.\n Position */
#define SPI_SLAVE_EC_IEN_SPIM_RST_REQ_Msk     (_UINT32_(0x1) << SPI_SLAVE_EC_IEN_SPIM_RST_REQ_Pos) /* (SPI_SLAVE_EC_IEN) Enable SPI Master Request Reset Interrupt to EC.\n Mask */
#define SPI_SLAVE_EC_IEN_SPIM_RST_REQ(value)  (SPI_SLAVE_EC_IEN_SPIM_RST_REQ_Msk & (_UINT32_(value) << SPI_SLAVE_EC_IEN_SPIM_RST_REQ_Pos)) /* Assigment of value for SPIM_RST_REQ in the SPI_SLAVE_EC_IEN register */
#define SPI_SLAVE_EC_IEN_RXF_RST_DN_Pos       _UINT32_(17)                                         /* (SPI_SLAVE_EC_IEN) Enable RX FIFO Reset Done Interrupt to EC.\n Position */
#define SPI_SLAVE_EC_IEN_RXF_RST_DN_Msk       (_UINT32_(0x1) << SPI_SLAVE_EC_IEN_RXF_RST_DN_Pos)   /* (SPI_SLAVE_EC_IEN) Enable RX FIFO Reset Done Interrupt to EC.\n Mask */
#define SPI_SLAVE_EC_IEN_RXF_RST_DN(value)    (SPI_SLAVE_EC_IEN_RXF_RST_DN_Msk & (_UINT32_(value) << SPI_SLAVE_EC_IEN_RXF_RST_DN_Pos)) /* Assigment of value for RXF_RST_DN in the SPI_SLAVE_EC_IEN register */
#define SPI_SLAVE_EC_IEN_TXF_RST_DN_Pos       _UINT32_(18)                                         /* (SPI_SLAVE_EC_IEN) Enable TX FIFO Reset Done Interrupt to EC.\n Position */
#define SPI_SLAVE_EC_IEN_TXF_RST_DN_Msk       (_UINT32_(0x1) << SPI_SLAVE_EC_IEN_TXF_RST_DN_Pos)   /* (SPI_SLAVE_EC_IEN) Enable TX FIFO Reset Done Interrupt to EC.\n Mask */
#define SPI_SLAVE_EC_IEN_TXF_RST_DN(value)    (SPI_SLAVE_EC_IEN_TXF_RST_DN_Msk & (_UINT32_(value) << SPI_SLAVE_EC_IEN_TXF_RST_DN_Pos)) /* Assigment of value for TXF_RST_DN in the SPI_SLAVE_EC_IEN register */
#define SPI_SLAVE_EC_IEN_OOL0_ERR_Pos         _UINT32_(19)                                         /* (SPI_SLAVE_EC_IEN) Enable Out Of Limit 0 Error Interrupt to EC.\n Position */
#define SPI_SLAVE_EC_IEN_OOL0_ERR_Msk         (_UINT32_(0x1) << SPI_SLAVE_EC_IEN_OOL0_ERR_Pos)     /* (SPI_SLAVE_EC_IEN) Enable Out Of Limit 0 Error Interrupt to EC.\n Mask */
#define SPI_SLAVE_EC_IEN_OOL0_ERR(value)      (SPI_SLAVE_EC_IEN_OOL0_ERR_Msk & (_UINT32_(value) << SPI_SLAVE_EC_IEN_OOL0_ERR_Pos)) /* Assigment of value for OOL0_ERR in the SPI_SLAVE_EC_IEN register */
#define SPI_SLAVE_EC_IEN_OOL1_ERR_Pos         _UINT32_(20)                                         /* (SPI_SLAVE_EC_IEN) Enable Out Of Limit 1 Error Interrupt to EC.\n Position */
#define SPI_SLAVE_EC_IEN_OOL1_ERR_Msk         (_UINT32_(0x1) << SPI_SLAVE_EC_IEN_OOL1_ERR_Pos)     /* (SPI_SLAVE_EC_IEN) Enable Out Of Limit 1 Error Interrupt to EC.\n Mask */
#define SPI_SLAVE_EC_IEN_OOL1_ERR(value)      (SPI_SLAVE_EC_IEN_OOL1_ERR_Msk & (_UINT32_(value) << SPI_SLAVE_EC_IEN_OOL1_ERR_Pos)) /* Assigment of value for OOL1_ERR in the SPI_SLAVE_EC_IEN register */
#define SPI_SLAVE_EC_IEN_ARMBUS_ERR_Pos       _UINT32_(21)                                         /* (SPI_SLAVE_EC_IEN) Enable AHB BUS Error Interrupt to EC.\n Position */
#define SPI_SLAVE_EC_IEN_ARMBUS_ERR_Msk       (_UINT32_(0x1) << SPI_SLAVE_EC_IEN_ARMBUS_ERR_Pos)   /* (SPI_SLAVE_EC_IEN) Enable AHB BUS Error Interrupt to EC.\n Mask */
#define SPI_SLAVE_EC_IEN_ARMBUS_ERR(value)    (SPI_SLAVE_EC_IEN_ARMBUS_ERR_Msk & (_UINT32_(value) << SPI_SLAVE_EC_IEN_ARMBUS_ERR_Pos)) /* Assigment of value for ARMBUS_ERR in the SPI_SLAVE_EC_IEN register */
#define SPI_SLAVE_EC_IEN_UNDEF_CMD_ERR_Pos    _UINT32_(22)                                         /* (SPI_SLAVE_EC_IEN) Enable Undefined Command Error Interrupt to EC.\n Position */
#define SPI_SLAVE_EC_IEN_UNDEF_CMD_ERR_Msk    (_UINT32_(0x1) << SPI_SLAVE_EC_IEN_UNDEF_CMD_ERR_Pos) /* (SPI_SLAVE_EC_IEN) Enable Undefined Command Error Interrupt to EC.\n Mask */
#define SPI_SLAVE_EC_IEN_UNDEF_CMD_ERR(value) (SPI_SLAVE_EC_IEN_UNDEF_CMD_ERR_Msk & (_UINT32_(value) << SPI_SLAVE_EC_IEN_UNDEF_CMD_ERR_Pos)) /* Assigment of value for UNDEF_CMD_ERR in the SPI_SLAVE_EC_IEN register */
#define SPI_SLAVE_EC_IEN_DV_BUSY_Pos          _UINT32_(23)                                         /* (SPI_SLAVE_EC_IEN) Enable Device Busy Interrupt to EC.\n Position */
#define SPI_SLAVE_EC_IEN_DV_BUSY_Msk          (_UINT32_(0x1) << SPI_SLAVE_EC_IEN_DV_BUSY_Pos)      /* (SPI_SLAVE_EC_IEN) Enable Device Busy Interrupt to EC.\n Mask */
#define SPI_SLAVE_EC_IEN_DV_BUSY(value)       (SPI_SLAVE_EC_IEN_DV_BUSY_Msk & (_UINT32_(value) << SPI_SLAVE_EC_IEN_DV_BUSY_Pos)) /* Assigment of value for DV_BUSY in the SPI_SLAVE_EC_IEN register */
#define SPI_SLAVE_EC_IEN_RXF_SIZE_ERR_Pos     _UINT32_(24)                                         /* (SPI_SLAVE_EC_IEN) Enable RX FIFO SIZE Error Interrupt to EC.\n Position */
#define SPI_SLAVE_EC_IEN_RXF_SIZE_ERR_Msk     (_UINT32_(0x1) << SPI_SLAVE_EC_IEN_RXF_SIZE_ERR_Pos) /* (SPI_SLAVE_EC_IEN) Enable RX FIFO SIZE Error Interrupt to EC.\n Mask */
#define SPI_SLAVE_EC_IEN_RXF_SIZE_ERR(value)  (SPI_SLAVE_EC_IEN_RXF_SIZE_ERR_Msk & (_UINT32_(value) << SPI_SLAVE_EC_IEN_RXF_SIZE_ERR_Pos)) /* Assigment of value for RXF_SIZE_ERR in the SPI_SLAVE_EC_IEN register */
#define SPI_SLAVE_EC_IEN_TXF_UNFLW_Pos        _UINT32_(25)                                         /* (SPI_SLAVE_EC_IEN) Enable TX FIFO Underflow Interrupt to EC.\n Position */
#define SPI_SLAVE_EC_IEN_TXF_UNFLW_Msk        (_UINT32_(0x1) << SPI_SLAVE_EC_IEN_TXF_UNFLW_Pos)    /* (SPI_SLAVE_EC_IEN) Enable TX FIFO Underflow Interrupt to EC.\n Mask */
#define SPI_SLAVE_EC_IEN_TXF_UNFLW(value)     (SPI_SLAVE_EC_IEN_TXF_UNFLW_Msk & (_UINT32_(value) << SPI_SLAVE_EC_IEN_TXF_UNFLW_Pos)) /* Assigment of value for TXF_UNFLW in the SPI_SLAVE_EC_IEN register */
#define SPI_SLAVE_EC_IEN_TXF_OVRFLW_Pos       _UINT32_(26)                                         /* (SPI_SLAVE_EC_IEN) Enable TX FIFO Overflow Interrupt to EC.\n Position */
#define SPI_SLAVE_EC_IEN_TXF_OVRFLW_Msk       (_UINT32_(0x1) << SPI_SLAVE_EC_IEN_TXF_OVRFLW_Pos)   /* (SPI_SLAVE_EC_IEN) Enable TX FIFO Overflow Interrupt to EC.\n Mask */
#define SPI_SLAVE_EC_IEN_TXF_OVRFLW(value)    (SPI_SLAVE_EC_IEN_TXF_OVRFLW_Msk & (_UINT32_(value) << SPI_SLAVE_EC_IEN_TXF_OVRFLW_Pos)) /* Assigment of value for TXF_OVRFLW in the SPI_SLAVE_EC_IEN register */
#define SPI_SLAVE_EC_IEN_RXF_UNFLW_Pos        _UINT32_(27)                                         /* (SPI_SLAVE_EC_IEN) Enable RX FIFO Underflow Interrupt to EC.\n Position */
#define SPI_SLAVE_EC_IEN_RXF_UNFLW_Msk        (_UINT32_(0x1) << SPI_SLAVE_EC_IEN_RXF_UNFLW_Pos)    /* (SPI_SLAVE_EC_IEN) Enable RX FIFO Underflow Interrupt to EC.\n Mask */
#define SPI_SLAVE_EC_IEN_RXF_UNFLW(value)     (SPI_SLAVE_EC_IEN_RXF_UNFLW_Msk & (_UINT32_(value) << SPI_SLAVE_EC_IEN_RXF_UNFLW_Pos)) /* Assigment of value for RXF_UNFLW in the SPI_SLAVE_EC_IEN register */
#define SPI_SLAVE_EC_IEN_RXF_OVRFLW_Pos       _UINT32_(28)                                         /* (SPI_SLAVE_EC_IEN) Enable RX FIFO Overflow Interrupt to EC.\n Position */
#define SPI_SLAVE_EC_IEN_RXF_OVRFLW_Msk       (_UINT32_(0x1) << SPI_SLAVE_EC_IEN_RXF_OVRFLW_Pos)   /* (SPI_SLAVE_EC_IEN) Enable RX FIFO Overflow Interrupt to EC.\n Mask */
#define SPI_SLAVE_EC_IEN_RXF_OVRFLW(value)    (SPI_SLAVE_EC_IEN_RXF_OVRFLW_Msk & (_UINT32_(value) << SPI_SLAVE_EC_IEN_RXF_OVRFLW_Pos)) /* Assigment of value for RXF_OVRFLW in the SPI_SLAVE_EC_IEN register */
#define SPI_SLAVE_EC_IEN_Msk                  _UINT32_(0x1FFFEF7B)                                 /* (SPI_SLAVE_EC_IEN) Register Mask  */


/* -------- SPI_SLAVE_MEM_CFG : (SPI_SLAVE Offset: 0x14) (R/W 32) SPI Slave Memory Configuration Register.\n -------- */
#define SPI_SLAVE_MEM_CFG_RESETVALUE          _UINT32_(0x00)                                       /*  (SPI_SLAVE_MEM_CFG) SPI Slave Memory Configuration Register.\n  Reset Value */

#define SPI_SLAVE_MEM_CFG_BAR_EN0_SEL_Pos     _UINT32_(0)                                          /* (SPI_SLAVE_MEM_CFG) Enables Region 0 operation.         0 = Disable Region 0.\n         1 = Enable Region 0.\n Position */
#define SPI_SLAVE_MEM_CFG_BAR_EN0_SEL_Msk     (_UINT32_(0x1) << SPI_SLAVE_MEM_CFG_BAR_EN0_SEL_Pos) /* (SPI_SLAVE_MEM_CFG) Enables Region 0 operation.         0 = Disable Region 0.\n         1 = Enable Region 0.\n Mask */
#define SPI_SLAVE_MEM_CFG_BAR_EN0_SEL(value)  (SPI_SLAVE_MEM_CFG_BAR_EN0_SEL_Msk & (_UINT32_(value) << SPI_SLAVE_MEM_CFG_BAR_EN0_SEL_Pos)) /* Assigment of value for BAR_EN0_SEL in the SPI_SLAVE_MEM_CFG register */
#define SPI_SLAVE_MEM_CFG_BAR_EN1_SEL_Pos     _UINT32_(1)                                          /* (SPI_SLAVE_MEM_CFG) Enables Region 1 operation.         0 = Disable Region 1.\n         1 = Enable Region 1.\n Position */
#define SPI_SLAVE_MEM_CFG_BAR_EN1_SEL_Msk     (_UINT32_(0x1) << SPI_SLAVE_MEM_CFG_BAR_EN1_SEL_Pos) /* (SPI_SLAVE_MEM_CFG) Enables Region 1 operation.         0 = Disable Region 1.\n         1 = Enable Region 1.\n Mask */
#define SPI_SLAVE_MEM_CFG_BAR_EN1_SEL(value)  (SPI_SLAVE_MEM_CFG_BAR_EN1_SEL_Msk & (_UINT32_(value) << SPI_SLAVE_MEM_CFG_BAR_EN1_SEL_Pos)) /* Assigment of value for BAR_EN1_SEL in the SPI_SLAVE_MEM_CFG register */
#define SPI_SLAVE_MEM_CFG_Msk                 _UINT32_(0x00000003)                                 /* (SPI_SLAVE_MEM_CFG) Register Mask  */


/* -------- SPI_SLAVE_MEM_BAR0 : (SPI_SLAVE Offset: 0x18) (R/W 32) SPI Slave Memory Base Address0 Register.\n -------- */
#define SPI_SLAVE_MEM_BAR0_RESETVALUE         _UINT32_(0x00)                                       /*  (SPI_SLAVE_MEM_BAR0) SPI Slave Memory Base Address0 Register.\n  Reset Value */

#define SPI_SLAVE_MEM_BAR0_BAS_ADD0_Pos       _UINT32_(0)                                          /* (SPI_SLAVE_MEM_BAR0) Base Address for Region 0.\n Position */
#define SPI_SLAVE_MEM_BAR0_BAS_ADD0_Msk       (_UINT32_(0xFFFFFFFF) << SPI_SLAVE_MEM_BAR0_BAS_ADD0_Pos) /* (SPI_SLAVE_MEM_BAR0) Base Address for Region 0.\n Mask */
#define SPI_SLAVE_MEM_BAR0_BAS_ADD0(value)    (SPI_SLAVE_MEM_BAR0_BAS_ADD0_Msk & (_UINT32_(value) << SPI_SLAVE_MEM_BAR0_BAS_ADD0_Pos)) /* Assigment of value for BAS_ADD0 in the SPI_SLAVE_MEM_BAR0 register */
#define SPI_SLAVE_MEM_BAR0_Msk                _UINT32_(0xFFFFFFFF)                                 /* (SPI_SLAVE_MEM_BAR0) Register Mask  */


/* -------- SPI_SLAVE_MEM_WR_LIM0 : (SPI_SLAVE Offset: 0x1C) (R/W 32) SPI Slave Memory Write LIMIT 0 Register.\n -------- */
#define SPI_SLAVE_MEM_WR_LIM0_RESETVALUE      _UINT32_(0x00)                                       /*  (SPI_SLAVE_MEM_WR_LIM0) SPI Slave Memory Write LIMIT 0 Register.\n  Reset Value */

#define SPI_SLAVE_MEM_WR_LIM0_LMT0_Pos        _UINT32_(0)                                          /* (SPI_SLAVE_MEM_WR_LIM0) Write Limit for Region 0.\n Position */
#define SPI_SLAVE_MEM_WR_LIM0_LMT0_Msk        (_UINT32_(0x7FFF) << SPI_SLAVE_MEM_WR_LIM0_LMT0_Pos) /* (SPI_SLAVE_MEM_WR_LIM0) Write Limit for Region 0.\n Mask */
#define SPI_SLAVE_MEM_WR_LIM0_LMT0(value)     (SPI_SLAVE_MEM_WR_LIM0_LMT0_Msk & (_UINT32_(value) << SPI_SLAVE_MEM_WR_LIM0_LMT0_Pos)) /* Assigment of value for LMT0 in the SPI_SLAVE_MEM_WR_LIM0 register */
#define SPI_SLAVE_MEM_WR_LIM0_Msk             _UINT32_(0x00007FFF)                                 /* (SPI_SLAVE_MEM_WR_LIM0) Register Mask  */


/* -------- SPI_SLAVE_MEM_RD_LIM0 : (SPI_SLAVE Offset: 0x20) (R/W 32) SPI Slave Memory Read LIMIT 0 Register.\n -------- */
#define SPI_SLAVE_MEM_RD_LIM0_RESETVALUE      _UINT32_(0x00)                                       /*  (SPI_SLAVE_MEM_RD_LIM0) SPI Slave Memory Read LIMIT 0 Register.\n  Reset Value */

#define SPI_SLAVE_MEM_RD_LIM0_LMT0_Pos        _UINT32_(0)                                          /* (SPI_SLAVE_MEM_RD_LIM0) Read Limit for Region 0.\n Position */
#define SPI_SLAVE_MEM_RD_LIM0_LMT0_Msk        (_UINT32_(0x7FFF) << SPI_SLAVE_MEM_RD_LIM0_LMT0_Pos) /* (SPI_SLAVE_MEM_RD_LIM0) Read Limit for Region 0.\n Mask */
#define SPI_SLAVE_MEM_RD_LIM0_LMT0(value)     (SPI_SLAVE_MEM_RD_LIM0_LMT0_Msk & (_UINT32_(value) << SPI_SLAVE_MEM_RD_LIM0_LMT0_Pos)) /* Assigment of value for LMT0 in the SPI_SLAVE_MEM_RD_LIM0 register */
#define SPI_SLAVE_MEM_RD_LIM0_Msk             _UINT32_(0x00007FFF)                                 /* (SPI_SLAVE_MEM_RD_LIM0) Register Mask  */


/* -------- SPI_SLAVE_MEM_BAR1 : (SPI_SLAVE Offset: 0x24) (R/W 32) SPI Slave Memory Base Address1 Register.\n -------- */
#define SPI_SLAVE_MEM_BAR1_RESETVALUE         _UINT32_(0x00)                                       /*  (SPI_SLAVE_MEM_BAR1) SPI Slave Memory Base Address1 Register.\n  Reset Value */

#define SPI_SLAVE_MEM_BAR1_ADD1_Pos           _UINT32_(0)                                          /* (SPI_SLAVE_MEM_BAR1) Base Address for Region 1.\n Position */
#define SPI_SLAVE_MEM_BAR1_ADD1_Msk           (_UINT32_(0xFFFFFFFF) << SPI_SLAVE_MEM_BAR1_ADD1_Pos) /* (SPI_SLAVE_MEM_BAR1) Base Address for Region 1.\n Mask */
#define SPI_SLAVE_MEM_BAR1_ADD1(value)        (SPI_SLAVE_MEM_BAR1_ADD1_Msk & (_UINT32_(value) << SPI_SLAVE_MEM_BAR1_ADD1_Pos)) /* Assigment of value for ADD1 in the SPI_SLAVE_MEM_BAR1 register */
#define SPI_SLAVE_MEM_BAR1_Msk                _UINT32_(0xFFFFFFFF)                                 /* (SPI_SLAVE_MEM_BAR1) Register Mask  */


/* -------- SPI_SLAVE_MEM_WR_LIM1 : (SPI_SLAVE Offset: 0x28) (R/W 32) SPI Slave Memory Write LIMIT 1 Register.\n -------- */
#define SPI_SLAVE_MEM_WR_LIM1_RESETVALUE      _UINT32_(0x00)                                       /*  (SPI_SLAVE_MEM_WR_LIM1) SPI Slave Memory Write LIMIT 1 Register.\n  Reset Value */

#define SPI_SLAVE_MEM_WR_LIM1_LMT1_Pos        _UINT32_(0)                                          /* (SPI_SLAVE_MEM_WR_LIM1) Write Limit for Region 1.\n Position */
#define SPI_SLAVE_MEM_WR_LIM1_LMT1_Msk        (_UINT32_(0x7FFF) << SPI_SLAVE_MEM_WR_LIM1_LMT1_Pos) /* (SPI_SLAVE_MEM_WR_LIM1) Write Limit for Region 1.\n Mask */
#define SPI_SLAVE_MEM_WR_LIM1_LMT1(value)     (SPI_SLAVE_MEM_WR_LIM1_LMT1_Msk & (_UINT32_(value) << SPI_SLAVE_MEM_WR_LIM1_LMT1_Pos)) /* Assigment of value for LMT1 in the SPI_SLAVE_MEM_WR_LIM1 register */
#define SPI_SLAVE_MEM_WR_LIM1_Msk             _UINT32_(0x00007FFF)                                 /* (SPI_SLAVE_MEM_WR_LIM1) Register Mask  */


/* -------- SPI_SLAVE_MEM_RD_LIM1 : (SPI_SLAVE Offset: 0x2C) (R/W 32) SPI Slave Memory Read LIMIT 1 Register.\n -------- */
#define SPI_SLAVE_MEM_RD_LIM1_RESETVALUE      _UINT32_(0x00)                                       /*  (SPI_SLAVE_MEM_RD_LIM1) SPI Slave Memory Read LIMIT 1 Register.\n  Reset Value */

#define SPI_SLAVE_MEM_RD_LIM1_LMT1_Pos        _UINT32_(0)                                          /* (SPI_SLAVE_MEM_RD_LIM1) Read Limit for Region 1.\n Position */
#define SPI_SLAVE_MEM_RD_LIM1_LMT1_Msk        (_UINT32_(0x7FFF) << SPI_SLAVE_MEM_RD_LIM1_LMT1_Pos) /* (SPI_SLAVE_MEM_RD_LIM1) Read Limit for Region 1.\n Mask */
#define SPI_SLAVE_MEM_RD_LIM1_LMT1(value)     (SPI_SLAVE_MEM_RD_LIM1_LMT1_Msk & (_UINT32_(value) << SPI_SLAVE_MEM_RD_LIM1_LMT1_Pos)) /* Assigment of value for LMT1 in the SPI_SLAVE_MEM_RD_LIM1 register */
#define SPI_SLAVE_MEM_RD_LIM1_Msk             _UINT32_(0x00007FFF)                                 /* (SPI_SLAVE_MEM_RD_LIM1) Register Mask  */


/* -------- SPI_SLAVE_RXF_HOST_BAR : (SPI_SLAVE Offset: 0x30) ( R/ 32) SPI Slave RX FIFO Host Bar Register.\n -------- */
#define SPI_SLAVE_RXF_HOST_BAR_RESETVALUE     _UINT32_(0x00)                                       /*  (SPI_SLAVE_RXF_HOST_BAR) SPI Slave RX FIFO Host Bar Register.\n  Reset Value */

#define SPI_SLAVE_RXF_HOST_BAR_BAR_Pos        _UINT32_(0)                                          /* (SPI_SLAVE_RXF_HOST_BAR) RX FIFO Host Bar Register.\n Position */
#define SPI_SLAVE_RXF_HOST_BAR_BAR_Msk        (_UINT32_(0xFFFF) << SPI_SLAVE_RXF_HOST_BAR_BAR_Pos) /* (SPI_SLAVE_RXF_HOST_BAR) RX FIFO Host Bar Register.\n Mask */
#define SPI_SLAVE_RXF_HOST_BAR_BAR(value)     (SPI_SLAVE_RXF_HOST_BAR_BAR_Msk & (_UINT32_(value) << SPI_SLAVE_RXF_HOST_BAR_BAR_Pos)) /* Assigment of value for BAR in the SPI_SLAVE_RXF_HOST_BAR register */
#define SPI_SLAVE_RXF_HOST_BAR_Msk            _UINT32_(0x0000FFFF)                                 /* (SPI_SLAVE_RXF_HOST_BAR) Register Mask  */


/* -------- SPI_SLAVE_RXF_BYTE_CNT : (SPI_SLAVE Offset: 0x34) ( R/ 32) SPI Slave RX FIFO Byte Counter Register.\n -------- */
#define SPI_SLAVE_RXF_BYTE_CNT_RESETVALUE     _UINT32_(0x00)                                       /*  (SPI_SLAVE_RXF_BYTE_CNT) SPI Slave RX FIFO Byte Counter Register.\n  Reset Value */

#define SPI_SLAVE_RXF_BYTE_CNT_BCNT_Pos       _UINT32_(0)                                          /* (SPI_SLAVE_RXF_BYTE_CNT) RX FIFO Byte Count Register.\n Position */
#define SPI_SLAVE_RXF_BYTE_CNT_BCNT_Msk       (_UINT32_(0x7FFF) << SPI_SLAVE_RXF_BYTE_CNT_BCNT_Pos) /* (SPI_SLAVE_RXF_BYTE_CNT) RX FIFO Byte Count Register.\n Mask */
#define SPI_SLAVE_RXF_BYTE_CNT_BCNT(value)    (SPI_SLAVE_RXF_BYTE_CNT_BCNT_Msk & (_UINT32_(value) << SPI_SLAVE_RXF_BYTE_CNT_BCNT_Pos)) /* Assigment of value for BCNT in the SPI_SLAVE_RXF_BYTE_CNT register */
#define SPI_SLAVE_RXF_BYTE_CNT_Msk            _UINT32_(0x00007FFF)                                 /* (SPI_SLAVE_RXF_BYTE_CNT) Register Mask  */


/* -------- SPI_SLAVE_TXF_HOST_BAR : (SPI_SLAVE Offset: 0x38) ( R/ 32) SPI Slave TX FIFO Host Bar Register.\n -------- */
#define SPI_SLAVE_TXF_HOST_BAR_RESETVALUE     _UINT32_(0x00)                                       /*  (SPI_SLAVE_TXF_HOST_BAR) SPI Slave TX FIFO Host Bar Register.\n  Reset Value */

#define SPI_SLAVE_TXF_HOST_BAR_BAR_Pos        _UINT32_(0)                                          /* (SPI_SLAVE_TXF_HOST_BAR) TX FIFO Host Bar Register.\n Position */
#define SPI_SLAVE_TXF_HOST_BAR_BAR_Msk        (_UINT32_(0xFFFF) << SPI_SLAVE_TXF_HOST_BAR_BAR_Pos) /* (SPI_SLAVE_TXF_HOST_BAR) TX FIFO Host Bar Register.\n Mask */
#define SPI_SLAVE_TXF_HOST_BAR_BAR(value)     (SPI_SLAVE_TXF_HOST_BAR_BAR_Msk & (_UINT32_(value) << SPI_SLAVE_TXF_HOST_BAR_BAR_Pos)) /* Assigment of value for BAR in the SPI_SLAVE_TXF_HOST_BAR register */
#define SPI_SLAVE_TXF_HOST_BAR_Msk            _UINT32_(0x0000FFFF)                                 /* (SPI_SLAVE_TXF_HOST_BAR) Register Mask  */


/* -------- SPI_SLAVE_TXF_BYTE_CNT : (SPI_SLAVE Offset: 0x3C) ( R/ 32) SPI Slave TX FIFO Byte Counter Register.\n -------- */
#define SPI_SLAVE_TXF_BYTE_CNT_RESETVALUE     _UINT32_(0x00)                                       /*  (SPI_SLAVE_TXF_BYTE_CNT) SPI Slave TX FIFO Byte Counter Register.\n  Reset Value */

#define SPI_SLAVE_TXF_BYTE_CNT_BCNT_Pos       _UINT32_(0)                                          /* (SPI_SLAVE_TXF_BYTE_CNT) TX FIFO Byte Count Register.\n Position */
#define SPI_SLAVE_TXF_BYTE_CNT_BCNT_Msk       (_UINT32_(0x7FFF) << SPI_SLAVE_TXF_BYTE_CNT_BCNT_Pos) /* (SPI_SLAVE_TXF_BYTE_CNT) TX FIFO Byte Count Register.\n Mask */
#define SPI_SLAVE_TXF_BYTE_CNT_BCNT(value)    (SPI_SLAVE_TXF_BYTE_CNT_BCNT_Msk & (_UINT32_(value) << SPI_SLAVE_TXF_BYTE_CNT_BCNT_Pos)) /* Assigment of value for BCNT in the SPI_SLAVE_TXF_BYTE_CNT register */
#define SPI_SLAVE_TXF_BYTE_CNT_Msk            _UINT32_(0x00007FFF)                                 /* (SPI_SLAVE_TXF_BYTE_CNT) Register Mask  */


/* -------- SPI_SLAVE_SYS_CFG : (SPI_SLAVE Offset: 0x40) (R/W 32) SPI Slave System Configuration Register.\n -------- */
#define SPI_SLAVE_SYS_CFG_RESETVALUE          _UINT32_(0x4C0)                                      /*  (SPI_SLAVE_SYS_CFG) SPI Slave System Configuration Register.\n  Reset Value */

#define SPI_SLAVE_SYS_CFG_SOFT_RST_Pos        _UINT32_(0)                                          /* (SPI_SLAVE_SYS_CFG) Soft reset for entire SPI Slave Block. This bit is self clearing.\n Position */
#define SPI_SLAVE_SYS_CFG_SOFT_RST_Msk        (_UINT32_(0x1) << SPI_SLAVE_SYS_CFG_SOFT_RST_Pos)    /* (SPI_SLAVE_SYS_CFG) Soft reset for entire SPI Slave Block. This bit is self clearing.\n Mask */
#define SPI_SLAVE_SYS_CFG_SOFT_RST(value)     (SPI_SLAVE_SYS_CFG_SOFT_RST_Msk & (_UINT32_(value) << SPI_SLAVE_SYS_CFG_SOFT_RST_Pos)) /* Assigment of value for SOFT_RST in the SPI_SLAVE_SYS_CFG register */
#define SPI_SLAVE_SYS_CFG_LOCK_QUAD_SNGL_WRMOD_Pos _UINT32_(1)                                          /* (SPI_SLAVE_SYS_CFG) Lock Quad / Single Write Mode bit, write access from SPI Master.\n Position */
#define SPI_SLAVE_SYS_CFG_LOCK_QUAD_SNGL_WRMOD_Msk (_UINT32_(0x1) << SPI_SLAVE_SYS_CFG_LOCK_QUAD_SNGL_WRMOD_Pos) /* (SPI_SLAVE_SYS_CFG) Lock Quad / Single Write Mode bit, write access from SPI Master.\n Mask */
#define SPI_SLAVE_SYS_CFG_LOCK_QUAD_SNGL_WRMOD(value) (SPI_SLAVE_SYS_CFG_LOCK_QUAD_SNGL_WRMOD_Msk & (_UINT32_(value) << SPI_SLAVE_SYS_CFG_LOCK_QUAD_SNGL_WRMOD_Pos)) /* Assigment of value for LOCK_QUAD_SNGL_WRMOD in the SPI_SLAVE_SYS_CFG register */
#define SPI_SLAVE_SYS_CFG_LOCK_TAR_TIME_Pos   _UINT32_(2)                                          /* (SPI_SLAVE_SYS_CFG) Lock Tar Time bit, write access from SPI Master.\n Position */
#define SPI_SLAVE_SYS_CFG_LOCK_TAR_TIME_Msk   (_UINT32_(0x1) << SPI_SLAVE_SYS_CFG_LOCK_TAR_TIME_Pos) /* (SPI_SLAVE_SYS_CFG) Lock Tar Time bit, write access from SPI Master.\n Mask */
#define SPI_SLAVE_SYS_CFG_LOCK_TAR_TIME(value) (SPI_SLAVE_SYS_CFG_LOCK_TAR_TIME_Msk & (_UINT32_(value) << SPI_SLAVE_SYS_CFG_LOCK_TAR_TIME_Pos)) /* Assigment of value for LOCK_TAR_TIME in the SPI_SLAVE_SYS_CFG register */
#define SPI_SLAVE_SYS_CFG_LOCK_WAIT_CYCL_Pos  _UINT32_(3)                                          /* (SPI_SLAVE_SYS_CFG) Lock Wait Cycle bits, write access from SPI Master.\n Position */
#define SPI_SLAVE_SYS_CFG_LOCK_WAIT_CYCL_Msk  (_UINT32_(0x1) << SPI_SLAVE_SYS_CFG_LOCK_WAIT_CYCL_Pos) /* (SPI_SLAVE_SYS_CFG) Lock Wait Cycle bits, write access from SPI Master.\n Mask */
#define SPI_SLAVE_SYS_CFG_LOCK_WAIT_CYCL(value) (SPI_SLAVE_SYS_CFG_LOCK_WAIT_CYCL_Msk & (_UINT32_(value) << SPI_SLAVE_SYS_CFG_LOCK_WAIT_CYCL_Pos)) /* Assigment of value for LOCK_WAIT_CYCL in the SPI_SLAVE_SYS_CFG register */
#define SPI_SLAVE_SYS_CFG_LOCK_MEM_CFG_Pos    _UINT32_(4)                                          /* (SPI_SLAVE_SYS_CFG) Lock Memory Configuration register, write access from SPI Master.\n Position */
#define SPI_SLAVE_SYS_CFG_LOCK_MEM_CFG_Msk    (_UINT32_(0x1) << SPI_SLAVE_SYS_CFG_LOCK_MEM_CFG_Pos) /* (SPI_SLAVE_SYS_CFG) Lock Memory Configuration register, write access from SPI Master.\n Mask */
#define SPI_SLAVE_SYS_CFG_LOCK_MEM_CFG(value) (SPI_SLAVE_SYS_CFG_LOCK_MEM_CFG_Msk & (_UINT32_(value) << SPI_SLAVE_SYS_CFG_LOCK_MEM_CFG_Pos)) /* Assigment of value for LOCK_MEM_CFG in the SPI_SLAVE_SYS_CFG register */
#define SPI_SLAVE_SYS_CFG_LOCK_SPIINT_EN_Pos  _UINT32_(5)                                          /* (SPI_SLAVE_SYS_CFG) Lock SPI Interrupt Enable register, write access from SPI Master.\n Position */
#define SPI_SLAVE_SYS_CFG_LOCK_SPIINT_EN_Msk  (_UINT32_(0x1) << SPI_SLAVE_SYS_CFG_LOCK_SPIINT_EN_Pos) /* (SPI_SLAVE_SYS_CFG) Lock SPI Interrupt Enable register, write access from SPI Master.\n Mask */
#define SPI_SLAVE_SYS_CFG_LOCK_SPIINT_EN(value) (SPI_SLAVE_SYS_CFG_LOCK_SPIINT_EN_Msk & (_UINT32_(value) << SPI_SLAVE_SYS_CFG_LOCK_SPIINT_EN_Pos)) /* Assigment of value for LOCK_SPIINT_EN in the SPI_SLAVE_SYS_CFG register */
#define SPI_SLAVE_SYS_CFG_LOCK_MEM_BAR0_Pos   _UINT32_(6)                                          /* (SPI_SLAVE_SYS_CFG) Lock Memory Bar 0 register, write access from SPI Master.\n Position */
#define SPI_SLAVE_SYS_CFG_LOCK_MEM_BAR0_Msk   (_UINT32_(0x1) << SPI_SLAVE_SYS_CFG_LOCK_MEM_BAR0_Pos) /* (SPI_SLAVE_SYS_CFG) Lock Memory Bar 0 register, write access from SPI Master.\n Mask */
#define SPI_SLAVE_SYS_CFG_LOCK_MEM_BAR0(value) (SPI_SLAVE_SYS_CFG_LOCK_MEM_BAR0_Msk & (_UINT32_(value) << SPI_SLAVE_SYS_CFG_LOCK_MEM_BAR0_Pos)) /* Assigment of value for LOCK_MEM_BAR0 in the SPI_SLAVE_SYS_CFG register */
#define SPI_SLAVE_SYS_CFG_LOCK_MEM_BAR1_Pos   _UINT32_(7)                                          /* (SPI_SLAVE_SYS_CFG) Lock Memory Bar 1 register, write access from SPI Master.\n Position */
#define SPI_SLAVE_SYS_CFG_LOCK_MEM_BAR1_Msk   (_UINT32_(0x1) << SPI_SLAVE_SYS_CFG_LOCK_MEM_BAR1_Pos) /* (SPI_SLAVE_SYS_CFG) Lock Memory Bar 1 register, write access from SPI Master.\n Mask */
#define SPI_SLAVE_SYS_CFG_LOCK_MEM_BAR1(value) (SPI_SLAVE_SYS_CFG_LOCK_MEM_BAR1_Msk & (_UINT32_(value) << SPI_SLAVE_SYS_CFG_LOCK_MEM_BAR1_Pos)) /* Assigment of value for LOCK_MEM_BAR1 in the SPI_SLAVE_SYS_CFG register */
#define SPI_SLAVE_SYS_CFG_LOCK_TEST_MODE_Pos  _UINT32_(10)                                         /* (SPI_SLAVE_SYS_CFG) Lock TEST Mode register, write access from SPI Master.\n Position */
#define SPI_SLAVE_SYS_CFG_LOCK_TEST_MODE_Msk  (_UINT32_(0x1) << SPI_SLAVE_SYS_CFG_LOCK_TEST_MODE_Pos) /* (SPI_SLAVE_SYS_CFG) Lock TEST Mode register, write access from SPI Master.\n Mask */
#define SPI_SLAVE_SYS_CFG_LOCK_TEST_MODE(value) (SPI_SLAVE_SYS_CFG_LOCK_TEST_MODE_Msk & (_UINT32_(value) << SPI_SLAVE_SYS_CFG_LOCK_TEST_MODE_Pos)) /* Assigment of value for LOCK_TEST_MODE in the SPI_SLAVE_SYS_CFG register */
#define SPI_SLAVE_SYS_CFG_SPI_SLV_EN_Pos      _UINT32_(16)                                         /* (SPI_SLAVE_SYS_CFG) Enable / Disable SPI Slave Block.\n         0 = Disable SPI Slave module.\n         1 = Enable SPI Slave module.\n Position */
#define SPI_SLAVE_SYS_CFG_SPI_SLV_EN_Msk      (_UINT32_(0x1) << SPI_SLAVE_SYS_CFG_SPI_SLV_EN_Pos)  /* (SPI_SLAVE_SYS_CFG) Enable / Disable SPI Slave Block.\n         0 = Disable SPI Slave module.\n         1 = Enable SPI Slave module.\n Mask */
#define SPI_SLAVE_SYS_CFG_SPI_SLV_EN(value)   (SPI_SLAVE_SYS_CFG_SPI_SLV_EN_Msk & (_UINT32_(value) << SPI_SLAVE_SYS_CFG_SPI_SLV_EN_Pos)) /* Assigment of value for SPI_SLV_EN in the SPI_SLAVE_SYS_CFG register */
#define SPI_SLAVE_SYS_CFG_MAS_ECREG_Pos       _UINT32_(17)                                         /* (SPI_SLAVE_SYS_CFG) Mask EC register 'fld_mask_ec_register' from SPI Master. All the register are         neither readable now writable from SPI Master.\n Position */
#define SPI_SLAVE_SYS_CFG_MAS_ECREG_Msk       (_UINT32_(0x1) << SPI_SLAVE_SYS_CFG_MAS_ECREG_Pos)   /* (SPI_SLAVE_SYS_CFG) Mask EC register 'fld_mask_ec_register' from SPI Master. All the register are         neither readable now writable from SPI Master.\n Mask */
#define SPI_SLAVE_SYS_CFG_MAS_ECREG(value)    (SPI_SLAVE_SYS_CFG_MAS_ECREG_Msk & (_UINT32_(value) << SPI_SLAVE_SYS_CFG_MAS_ECREG_Pos)) /* Assigment of value for MAS_ECREG in the SPI_SLAVE_SYS_CFG register */
#define SPI_SLAVE_SYS_CFG_SIM_EN_Pos          _UINT32_(18)                                         /* (SPI_SLAVE_SYS_CFG) Enable SPI Slave Simple Mode operation.\n Position */
#define SPI_SLAVE_SYS_CFG_SIM_EN_Msk          (_UINT32_(0x1) << SPI_SLAVE_SYS_CFG_SIM_EN_Pos)      /* (SPI_SLAVE_SYS_CFG) Enable SPI Slave Simple Mode operation.\n Mask */
#define SPI_SLAVE_SYS_CFG_SIM_EN(value)       (SPI_SLAVE_SYS_CFG_SIM_EN_Msk & (_UINT32_(value) << SPI_SLAVE_SYS_CFG_SIM_EN_Pos)) /* Assigment of value for SIM_EN in the SPI_SLAVE_SYS_CFG register */
#define SPI_SLAVE_SYS_CFG_ECDAT_AVL_Pos       _UINT32_(19)                                         /* (SPI_SLAVE_SYS_CFG) Notification to TX FIFO Engine that data is available for AHB Transfer. This register         but is cleared by Hardware at the end of the transaction, with SPI_CS_N de-assertion.         (R/WC).\n Position */
#define SPI_SLAVE_SYS_CFG_ECDAT_AVL_Msk       (_UINT32_(0x1) << SPI_SLAVE_SYS_CFG_ECDAT_AVL_Pos)   /* (SPI_SLAVE_SYS_CFG) Notification to TX FIFO Engine that data is available for AHB Transfer. This register         but is cleared by Hardware at the end of the transaction, with SPI_CS_N de-assertion.         (R/WC).\n Mask */
#define SPI_SLAVE_SYS_CFG_ECDAT_AVL(value)    (SPI_SLAVE_SYS_CFG_ECDAT_AVL_Msk & (_UINT32_(value) << SPI_SLAVE_SYS_CFG_ECDAT_AVL_Pos)) /* Assigment of value for ECDAT_AVL in the SPI_SLAVE_SYS_CFG register */
#define SPI_SLAVE_SYS_CFG_Msk                 _UINT32_(0x000F04FF)                                 /* (SPI_SLAVE_SYS_CFG) Register Mask  */

#define SPI_SLAVE_SYS_CFG_LOCK_MEM_BAR_Pos    _UINT32_(6)                                          /* (SPI_SLAVE_SYS_CFG Position) Lock Memory Bar x register, write access from SPI Master.\n */
#define SPI_SLAVE_SYS_CFG_LOCK_MEM_BAR_Msk    (_UINT32_(0x3) << SPI_SLAVE_SYS_CFG_LOCK_MEM_BAR_Pos) /* (SPI_SLAVE_SYS_CFG Mask) LOCK_MEM_BAR */
#define SPI_SLAVE_SYS_CFG_LOCK_MEM_BAR(value) (SPI_SLAVE_SYS_CFG_LOCK_MEM_BAR_Msk & (_UINT32_(value) << SPI_SLAVE_SYS_CFG_LOCK_MEM_BAR_Pos)) 

/* -------- SPI_SLAVE_SPIM2EC_MBX : (SPI_SLAVE Offset: 0x44) (R/W 32) SPI Slave Master to EC Mailbox Register.\n -------- */
#define SPI_SLAVE_SPIM2EC_MBX_RESETVALUE      _UINT32_(0x00)                                       /*  (SPI_SLAVE_SPIM2EC_MBX) SPI Slave Master to EC Mailbox Register.\n  Reset Value */

#define SPI_SLAVE_SPIM2EC_MBX_M2EC_Pos        _UINT32_(0)                                          /* (SPI_SLAVE_SPIM2EC_MBX) Write only register for the Host. When data is written to this register the IBF Flag         is set. EC can read the data and writes of 0xFFFF will clear this register. Any form of         read will clear the flag for this register.\n Position */
#define SPI_SLAVE_SPIM2EC_MBX_M2EC_Msk        (_UINT32_(0xFFFFFFFF) << SPI_SLAVE_SPIM2EC_MBX_M2EC_Pos) /* (SPI_SLAVE_SPIM2EC_MBX) Write only register for the Host. When data is written to this register the IBF Flag         is set. EC can read the data and writes of 0xFFFF will clear this register. Any form of         read will clear the flag for this register.\n Mask */
#define SPI_SLAVE_SPIM2EC_MBX_M2EC(value)     (SPI_SLAVE_SPIM2EC_MBX_M2EC_Msk & (_UINT32_(value) << SPI_SLAVE_SPIM2EC_MBX_M2EC_Pos)) /* Assigment of value for M2EC in the SPI_SLAVE_SPIM2EC_MBX register */
#define SPI_SLAVE_SPIM2EC_MBX_Msk             _UINT32_(0xFFFFFFFF)                                 /* (SPI_SLAVE_SPIM2EC_MBX) Register Mask  */


/* -------- SPI_SLAVE_EC2SPIM_MBX : (SPI_SLAVE Offset: 0x48) (R/W 32) SPI Slave Master to EC Mailbox Register.\n -------- */
#define SPI_SLAVE_EC2SPIM_MBX_RESETVALUE      _UINT32_(0x00)                                       /*  (SPI_SLAVE_EC2SPIM_MBX) SPI Slave Master to EC Mailbox Register.\n  Reset Value */

#define SPI_SLAVE_EC2SPIM_MBX_EC2M_Pos        _UINT32_(0)                                          /* (SPI_SLAVE_EC2SPIM_MBX) Read only register for the Host. When data is written to this register the OBF Flag         is set. Host can read the data and writes of 0xFFFF_FFFF will clear this register, also         clearing the flag. Any form of read will clear the flag for this register\n Position */
#define SPI_SLAVE_EC2SPIM_MBX_EC2M_Msk        (_UINT32_(0xFFFFFFFF) << SPI_SLAVE_EC2SPIM_MBX_EC2M_Pos) /* (SPI_SLAVE_EC2SPIM_MBX) Read only register for the Host. When data is written to this register the OBF Flag         is set. Host can read the data and writes of 0xFFFF_FFFF will clear this register, also         clearing the flag. Any form of read will clear the flag for this register\n Mask */
#define SPI_SLAVE_EC2SPIM_MBX_EC2M(value)     (SPI_SLAVE_EC2SPIM_MBX_EC2M_Msk & (_UINT32_(value) << SPI_SLAVE_EC2SPIM_MBX_EC2M_Pos)) /* Assigment of value for EC2M in the SPI_SLAVE_EC2SPIM_MBX register */
#define SPI_SLAVE_EC2SPIM_MBX_Msk             _UINT32_(0xFFFFFFFF)                                 /* (SPI_SLAVE_EC2SPIM_MBX) Register Mask  */


/** \brief SPI_SLAVE register offsets definitions */
#define SPI_SLAVE_SPI_CFG_REG_OFST     _UINT32_(0x00)      /* (SPI_SLAVE_SPI_CFG) SPI Slave Communication Configuration Register.\n Offset */
#define SPI_SLAVE_SPI_STS_REG_OFST     _UINT32_(0x04)      /* (SPI_SLAVE_SPI_STS) SPI Slave Status Register.\n Offset */
#define SPI_SLAVE_SPI_EC_STS_REG_OFST  _UINT32_(0x08)      /* (SPI_SLAVE_SPI_EC_STS) SPI Slave EC Status Register.\n Offset */
#define SPI_SLAVE_SPI_IEN_REG_OFST     _UINT32_(0x0C)      /* (SPI_SLAVE_SPI_IEN) SPI Slave Interrupt Enable Register.\n Offset */
#define SPI_SLAVE_EC_IEN_REG_OFST      _UINT32_(0x10)      /* (SPI_SLAVE_EC_IEN) SPI Slave EC Interrupt Enable Register.\n Offset */
#define SPI_SLAVE_MEM_CFG_REG_OFST     _UINT32_(0x14)      /* (SPI_SLAVE_MEM_CFG) SPI Slave Memory Configuration Register.\n Offset */
#define SPI_SLAVE_MEM_BAR0_REG_OFST    _UINT32_(0x18)      /* (SPI_SLAVE_MEM_BAR0) SPI Slave Memory Base Address0 Register.\n Offset */
#define SPI_SLAVE_MEM_WR_LIM0_REG_OFST _UINT32_(0x1C)      /* (SPI_SLAVE_MEM_WR_LIM0) SPI Slave Memory Write LIMIT 0 Register.\n Offset */
#define SPI_SLAVE_MEM_RD_LIM0_REG_OFST _UINT32_(0x20)      /* (SPI_SLAVE_MEM_RD_LIM0) SPI Slave Memory Read LIMIT 0 Register.\n Offset */
#define SPI_SLAVE_MEM_BAR1_REG_OFST    _UINT32_(0x24)      /* (SPI_SLAVE_MEM_BAR1) SPI Slave Memory Base Address1 Register.\n Offset */
#define SPI_SLAVE_MEM_WR_LIM1_REG_OFST _UINT32_(0x28)      /* (SPI_SLAVE_MEM_WR_LIM1) SPI Slave Memory Write LIMIT 1 Register.\n Offset */
#define SPI_SLAVE_MEM_RD_LIM1_REG_OFST _UINT32_(0x2C)      /* (SPI_SLAVE_MEM_RD_LIM1) SPI Slave Memory Read LIMIT 1 Register.\n Offset */
#define SPI_SLAVE_RXF_HOST_BAR_REG_OFST _UINT32_(0x30)      /* (SPI_SLAVE_RXF_HOST_BAR) SPI Slave RX FIFO Host Bar Register.\n Offset */
#define SPI_SLAVE_RXF_BYTE_CNT_REG_OFST _UINT32_(0x34)      /* (SPI_SLAVE_RXF_BYTE_CNT) SPI Slave RX FIFO Byte Counter Register.\n Offset */
#define SPI_SLAVE_TXF_HOST_BAR_REG_OFST _UINT32_(0x38)      /* (SPI_SLAVE_TXF_HOST_BAR) SPI Slave TX FIFO Host Bar Register.\n Offset */
#define SPI_SLAVE_TXF_BYTE_CNT_REG_OFST _UINT32_(0x3C)      /* (SPI_SLAVE_TXF_BYTE_CNT) SPI Slave TX FIFO Byte Counter Register.\n Offset */
#define SPI_SLAVE_SYS_CFG_REG_OFST     _UINT32_(0x40)      /* (SPI_SLAVE_SYS_CFG) SPI Slave System Configuration Register.\n Offset */
#define SPI_SLAVE_SPIM2EC_MBX_REG_OFST _UINT32_(0x44)      /* (SPI_SLAVE_SPIM2EC_MBX) SPI Slave Master to EC Mailbox Register.\n Offset */
#define SPI_SLAVE_EC2SPIM_MBX_REG_OFST _UINT32_(0x48)      /* (SPI_SLAVE_EC2SPIM_MBX) SPI Slave Master to EC Mailbox Register.\n Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SPI_SLAVE register API structure */
typedef struct
{  /* SPI Slave Register. */
  __IO  uint32_t                       SPI_SLAVE_SPI_CFG;  /**< Offset: 0x00 (R/W  32) SPI Slave Communication Configuration Register.\n */
  __IO  uint32_t                       SPI_SLAVE_SPI_STS;  /**< Offset: 0x04 (R/W  32) SPI Slave Status Register.\n */
  __IO  uint32_t                       SPI_SLAVE_SPI_EC_STS; /**< Offset: 0x08 (R/W  32) SPI Slave EC Status Register.\n */
  __IO  uint32_t                       SPI_SLAVE_SPI_IEN;  /**< Offset: 0x0C (R/W  32) SPI Slave Interrupt Enable Register.\n */
  __IO  uint32_t                       SPI_SLAVE_EC_IEN;   /**< Offset: 0x10 (R/W  32) SPI Slave EC Interrupt Enable Register.\n */
  __IO  uint32_t                       SPI_SLAVE_MEM_CFG;  /**< Offset: 0x14 (R/W  32) SPI Slave Memory Configuration Register.\n */
  __IO  uint32_t                       SPI_SLAVE_MEM_BAR0; /**< Offset: 0x18 (R/W  32) SPI Slave Memory Base Address0 Register.\n */
  __IO  uint32_t                       SPI_SLAVE_MEM_WR_LIM0; /**< Offset: 0x1C (R/W  32) SPI Slave Memory Write LIMIT 0 Register.\n */
  __IO  uint32_t                       SPI_SLAVE_MEM_RD_LIM0; /**< Offset: 0x20 (R/W  32) SPI Slave Memory Read LIMIT 0 Register.\n */
  __IO  uint32_t                       SPI_SLAVE_MEM_BAR1; /**< Offset: 0x24 (R/W  32) SPI Slave Memory Base Address1 Register.\n */
  __IO  uint32_t                       SPI_SLAVE_MEM_WR_LIM1; /**< Offset: 0x28 (R/W  32) SPI Slave Memory Write LIMIT 1 Register.\n */
  __IO  uint32_t                       SPI_SLAVE_MEM_RD_LIM1; /**< Offset: 0x2C (R/W  32) SPI Slave Memory Read LIMIT 1 Register.\n */
  __I   uint32_t                       SPI_SLAVE_RXF_HOST_BAR; /**< Offset: 0x30 (R/   32) SPI Slave RX FIFO Host Bar Register.\n */
  __I   uint32_t                       SPI_SLAVE_RXF_BYTE_CNT; /**< Offset: 0x34 (R/   32) SPI Slave RX FIFO Byte Counter Register.\n */
  __I   uint32_t                       SPI_SLAVE_TXF_HOST_BAR; /**< Offset: 0x38 (R/   32) SPI Slave TX FIFO Host Bar Register.\n */
  __I   uint32_t                       SPI_SLAVE_TXF_BYTE_CNT; /**< Offset: 0x3C (R/   32) SPI Slave TX FIFO Byte Counter Register.\n */
  __IO  uint32_t                       SPI_SLAVE_SYS_CFG;  /**< Offset: 0x40 (R/W  32) SPI Slave System Configuration Register.\n */
  __IO  uint32_t                       SPI_SLAVE_SPIM2EC_MBX; /**< Offset: 0x44 (R/W  32) SPI Slave Master to EC Mailbox Register.\n */
  __IO  uint32_t                       SPI_SLAVE_EC2SPIM_MBX; /**< Offset: 0x48 (R/W  32) SPI Slave Master to EC Mailbox Register.\n */
} spi_slave_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _0525SG12_SPI_SLAVE_COMPONENT_H_ */
