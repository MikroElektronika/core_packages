/*
 * Component description for DMA_MAIN
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
#ifndef _0525SG12_DMA_MAIN_COMPONENT_H_
#define _0525SG12_DMA_MAIN_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR DMA_MAIN                                     */
/* ************************************************************************** */

/* -------- DMA_MAIN_ACTRST : (DMA_MAIN Offset: 0x00) (R/W 8) Soft reset the entire module. Enable the blocks operation. -------- */
#define DMA_MAIN_ACTRST_RESETVALUE            _UINT8_(0x00)                                        /*  (DMA_MAIN_ACTRST) Soft reset the entire module. Enable the blocks operation.  Reset Value */

#define DMA_MAIN_ACTRST_ACT_Pos               _UINT8_(0)                                           /* (DMA_MAIN_ACTRST) Enable the blocks operation. (R/WS)\n                1=Enable block. Each individual channel must be enabled separately.\n                0=Disable all channels. Position */
#define DMA_MAIN_ACTRST_ACT_Msk               (_UINT8_(0x1) << DMA_MAIN_ACTRST_ACT_Pos)            /* (DMA_MAIN_ACTRST) Enable the blocks operation. (R/WS)\n                1=Enable block. Each individual channel must be enabled separately.\n                0=Disable all channels. Mask */
#define DMA_MAIN_ACTRST_ACT(value)            (DMA_MAIN_ACTRST_ACT_Msk & (_UINT8_(value) << DMA_MAIN_ACTRST_ACT_Pos)) /* Assigment of value for ACT in the DMA_MAIN_ACTRST register */
#define DMA_MAIN_ACTRST_SOFT_RST_Pos          _UINT8_(1)                                           /* (DMA_MAIN_ACTRST) Soft reset the entire module. This bit is self-clearing. Position */
#define DMA_MAIN_ACTRST_SOFT_RST_Msk          (_UINT8_(0x1) << DMA_MAIN_ACTRST_SOFT_RST_Pos)       /* (DMA_MAIN_ACTRST) Soft reset the entire module. This bit is self-clearing. Mask */
#define DMA_MAIN_ACTRST_SOFT_RST(value)       (DMA_MAIN_ACTRST_SOFT_RST_Msk & (_UINT8_(value) << DMA_MAIN_ACTRST_SOFT_RST_Pos)) /* Assigment of value for SOFT_RST in the DMA_MAIN_ACTRST register */
#define DMA_MAIN_ACTRST_Msk                   _UINT8_(0x03)                                        /* (DMA_MAIN_ACTRST) Register Mask  */


/* -------- DMA_MAIN_DATA_PKT : (DMA_MAIN Offset: 0x04) ( R/ 32) Debug register that has the data that is stored in the Data Packet. This data is read data from the currently active transfer source. -------- */
#define DMA_MAIN_DATA_PKT_RESETVALUE          _UINT32_(0x00)                                       /*  (DMA_MAIN_DATA_PKT) Debug register that has the data that is stored in the Data Packet. This data is read data from the currently active transfer source.  Reset Value */

#define DMA_MAIN_DATA_PKT_Msk                 _UINT32_(0x00000000)                                 /* (DMA_MAIN_DATA_PKT) Register Mask  */


/** \brief DMA_MAIN register offsets definitions */
#define DMA_MAIN_ACTRST_REG_OFST       _UINT32_(0x00)      /* (DMA_MAIN_ACTRST) Soft reset the entire module. Enable the blocks operation. Offset */
#define DMA_MAIN_DATA_PKT_REG_OFST     _UINT32_(0x04)      /* (DMA_MAIN_DATA_PKT) Debug register that has the data that is stored in the Data Packet. This data is read data from the currently active transfer source. Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief DMA_MAIN register API structure */
typedef struct
{  /* DMA Main Registers */
  __IO  uint8_t                        DMA_MAIN_ACTRST;    /**< Offset: 0x00 (R/W  8) Soft reset the entire module. Enable the blocks operation. */
  __I   uint8_t                        Reserved1[0x03];
  __I   uint32_t                       DMA_MAIN_DATA_PKT;  /**< Offset: 0x04 (R/   32) Debug register that has the data that is stored in the Data Packet. This data is read data from the currently active transfer source. */
} dma_main_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _0525SG12_DMA_MAIN_COMPONENT_H_ */
