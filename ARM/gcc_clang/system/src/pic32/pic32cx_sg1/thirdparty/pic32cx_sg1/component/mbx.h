/*
 * Component description for MBX
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
#ifndef _0525SG12_MBX_COMPONENT_H_
#define _0525SG12_MBX_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR MBX                                          */
/* ************************************************************************** */

/* -------- MBX_u32 : (MBX Offset: 0x00) (R/W 32) SOURCE -------- */
#define MBX_u32_RESETVALUE                    _UINT32_(0x00)                                       /*  (MBX_u32) SOURCE  Reset Value */

#define MBX_u32_Msk                           _UINT32_(0x00000000)                                 /* (MBX_u32) Register Mask  */


/* -------- MBX_u16 : (MBX Offset: 0x00) (R/W 16) ENABLE SET -------- */
#define MBX_u16_RESETVALUE                    _UINT16_(0x00)                                       /*  (MBX_u16) ENABLE SET  Reset Value */

#define MBX_u16_Msk                           _UINT16_(0x0000)                                     /* (MBX_u16) Register Mask  */


/* -------- MBX_u08 : (MBX Offset: 0x00) (R/W 8) RESULT -------- */
#define MBX_u08_RESETVALUE                    _UINT8_(0x00)                                        /*  (MBX_u08) RESULT  Reset Value */

#define MBX_u08_Msk                           _UINT8_(0x00)                                        /* (MBX_u08) Register Mask  */


/* -------- MBX_RT_IDX : (MBX Offset: 0x00) (R/W 8) MBX_Index Register -------- */
#define MBX_RT_IDX_RESETVALUE                 _UINT8_(0x00)                                        /*  (MBX_RT_IDX) MBX_Index Register  Reset Value */

#define MBX_RT_IDX_Msk                        _UINT8_(0x00)                                        /* (MBX_RT_IDX) Register Mask  */


/* -------- MBX_RT_DATA : (MBX Offset: 0x01) (R/W 8) MBX_Data_Register -------- */
#define MBX_RT_DATA_RESETVALUE                _UINT8_(0x00)                                        /*  (MBX_RT_DATA) MBX_Data_Register  Reset Value */

#define MBX_RT_DATA_Msk                       _UINT8_(0x00)                                        /* (MBX_RT_DATA) Register Mask  */


/* -------- MBX_H2EC : (MBX Offset: 0x100) (R/W 32) If enabled, an interrupt to the EC marked by the MBX_DATA bit in the Interrupt Aggregator will be generated whenever the Host writes this register. This register is cleared when written with FFh. -------- */
#define MBX_H2EC_RESETVALUE                   _UINT32_(0x00)                                       /*  (MBX_H2EC) If enabled, an interrupt to the EC marked by the MBX_DATA bit in the Interrupt Aggregator will be generated whenever the Host writes this register. This register is cleared when written with FFh.  Reset Value */

#define MBX_H2EC_Msk                          _UINT32_(0x00000000)                                 /* (MBX_H2EC) Register Mask  */


/* -------- MBX_EC2H : (MBX Offset: 0x104) (R/W 8) An EC write to this register will set bit EC_WR in the SMI Interrupt Source Register to '1b'. If enabled, this will generate a Host SMI. This register is cleared when written with FFh. -------- */
#define MBX_EC2H_RESETVALUE                   _UINT8_(0x00)                                        /*  (MBX_EC2H) An EC write to this register will set bit EC_WR in the SMI Interrupt Source Register to '1b'. If enabled, this will generate a Host SMI. This register is cleared when written with FFh.  Reset Value */

#define MBX_EC2H_Msk                          _UINT8_(0x00)                                        /* (MBX_EC2H) Register Mask  */


/* -------- MBX_SMI_SRC : (MBX Offset: 0x108) (R/W 32) SMI Interrupt Source Register -------- */
#define MBX_SMI_SRC_RESETVALUE                _UINT32_(0x00)                                       /*  (MBX_SMI_SRC) SMI Interrupt Source Register  Reset Value */

#define MBX_SMI_SRC_EC_WR_Pos                 _UINT32_(0)                                          /* (MBX_SMI_SRC) EC Mailbox Write. This bit is set automatically when the EC-to-Host Mailbox Register has been written. An SMI or SIRQ\n      to the Host is generated when n this bit is '1b' and the corresponding bit in the SMI Interrupt Mask Register register is '1b'.\n      This bit is automatically cleared by a read of the EC-to-Host Mailbox Register through the Host Access Port. Position */
#define MBX_SMI_SRC_EC_WR_Msk                 (_UINT32_(0x1) << MBX_SMI_SRC_EC_WR_Pos)             /* (MBX_SMI_SRC) EC Mailbox Write. This bit is set automatically when the EC-to-Host Mailbox Register has been written. An SMI or SIRQ\n      to the Host is generated when n this bit is '1b' and the corresponding bit in the SMI Interrupt Mask Register register is '1b'.\n      This bit is automatically cleared by a read of the EC-to-Host Mailbox Register through the Host Access Port. Mask */
#define MBX_SMI_SRC_EC_WR(value)              (MBX_SMI_SRC_EC_WR_Msk & (_UINT32_(value) << MBX_SMI_SRC_EC_WR_Pos)) /* Assigment of value for EC_WR in the MBX_SMI_SRC register */
#define MBX_SMI_SRC_EC_SWI_Pos                _UINT32_(1)                                          /* (MBX_SMI_SRC) EC Software Interrupt. An SIRQ to the Host is generated when any bit in this register when this bit is set to '1b' and\n      the corresponding bit in the SMI Interrupt Mask Register register is '1b'. Position */
#define MBX_SMI_SRC_EC_SWI_Msk                (_UINT32_(0x7F) << MBX_SMI_SRC_EC_SWI_Pos)           /* (MBX_SMI_SRC) EC Software Interrupt. An SIRQ to the Host is generated when any bit in this register when this bit is set to '1b' and\n      the corresponding bit in the SMI Interrupt Mask Register register is '1b'. Mask */
#define MBX_SMI_SRC_EC_SWI(value)             (MBX_SMI_SRC_EC_SWI_Msk & (_UINT32_(value) << MBX_SMI_SRC_EC_SWI_Pos)) /* Assigment of value for EC_SWI in the MBX_SMI_SRC register */
#define MBX_SMI_SRC_Msk                       _UINT32_(0x000000FF)                                 /* (MBX_SMI_SRC) Register Mask  */


/* -------- MBX_SMI_MASK : (MBX Offset: 0x10C) (R/W 32) SMI Interrupt Mask Register -------- */
#define MBX_SMI_MASK_RESETVALUE               _UINT32_(0x00)                                       /*  (MBX_SMI_MASK) SMI Interrupt Mask Register  Reset Value */

#define MBX_SMI_MASK_ECWR_EN_Pos              _UINT32_(0)                                          /* (MBX_SMI_MASK) EC Mailbox Write.Interrupt Enable. Each bit in this field that is '1b' enables the generation of SIRQ interrupts when the\n      corresponding bit in the EC_SWI field in the SMI Interrupt Source Register is '1b'. Position */
#define MBX_SMI_MASK_ECWR_EN_Msk              (_UINT32_(0x1) << MBX_SMI_MASK_ECWR_EN_Pos)          /* (MBX_SMI_MASK) EC Mailbox Write.Interrupt Enable. Each bit in this field that is '1b' enables the generation of SIRQ interrupts when the\n      corresponding bit in the EC_SWI field in the SMI Interrupt Source Register is '1b'. Mask */
#define MBX_SMI_MASK_ECWR_EN(value)           (MBX_SMI_MASK_ECWR_EN_Msk & (_UINT32_(value) << MBX_SMI_MASK_ECWR_EN_Pos)) /* Assigment of value for ECWR_EN in the MBX_SMI_MASK register */
#define MBX_SMI_MASK_ECSWI_EN_Pos             _UINT32_(1)                                          /* (MBX_SMI_MASK) EC Software Interrupt Enable. If this bit is '1b', the bit EC_WR in the SMI Interrupt Source Register is enabled for the\n      generation of SIRQ or nSMI events. Position */
#define MBX_SMI_MASK_ECSWI_EN_Msk             (_UINT32_(0x7F) << MBX_SMI_MASK_ECSWI_EN_Pos)        /* (MBX_SMI_MASK) EC Software Interrupt Enable. If this bit is '1b', the bit EC_WR in the SMI Interrupt Source Register is enabled for the\n      generation of SIRQ or nSMI events. Mask */
#define MBX_SMI_MASK_ECSWI_EN(value)          (MBX_SMI_MASK_ECSWI_EN_Msk & (_UINT32_(value) << MBX_SMI_MASK_ECSWI_EN_Pos)) /* Assigment of value for ECSWI_EN in the MBX_SMI_MASK register */
#define MBX_SMI_MASK_Msk                      _UINT32_(0x000000FF)                                 /* (MBX_SMI_MASK) Register Mask  */


/** \brief MBX register offsets definitions */
#define MBX_u32_REG_OFST               _UINT32_(0x00)      /* (MBX_u32) SOURCE Offset */
#define MBX_u16_REG_OFST               _UINT32_(0x00)      /* (MBX_u16) ENABLE SET Offset */
#define MBX_u16_0_REG_OFST             _UINT32_(0x00)      /* (MBX_u16_0) ENABLE SET Offset */
#define MBX_u16_1_REG_OFST             _UINT32_(0x02)      /* (MBX_u16_1) ENABLE SET Offset */
#define MBX_u08_REG_OFST               _UINT32_(0x00)      /* (MBX_u08) RESULT Offset */
#define MBX_u08_0_REG_OFST             _UINT32_(0x00)      /* (MBX_u08_0) RESULT Offset */
#define MBX_u08_1_REG_OFST             _UINT32_(0x01)      /* (MBX_u08_1) RESULT Offset */
#define MBX_u08_2_REG_OFST             _UINT32_(0x02)      /* (MBX_u08_2) RESULT Offset */
#define MBX_u08_3_REG_OFST             _UINT32_(0x03)      /* (MBX_u08_3) RESULT Offset */
#define MBX_RT_IDX_REG_OFST            _UINT32_(0x00)      /* (MBX_RT_IDX) MBX_Index Register Offset */
#define MBX_RT_DATA_REG_OFST           _UINT32_(0x01)      /* (MBX_RT_DATA) MBX_Data_Register Offset */
#define MBX_H2EC_REG_OFST              _UINT32_(0x100)     /* (MBX_H2EC) If enabled, an interrupt to the EC marked by the MBX_DATA bit in the Interrupt Aggregator will be generated whenever the Host writes this register. This register is cleared when written with FFh. Offset */
#define MBX_EC2H_REG_OFST              _UINT32_(0x104)     /* (MBX_EC2H) An EC write to this register will set bit EC_WR in the SMI Interrupt Source Register to '1b'. If enabled, this will generate a Host SMI. This register is cleared when written with FFh. Offset */
#define MBX_SMI_SRC_REG_OFST           _UINT32_(0x108)     /* (MBX_SMI_SRC) SMI Interrupt Source Register Offset */
#define MBX_SMI_MASK_REG_OFST          _UINT32_(0x10C)     /* (MBX_SMI_MASK) SMI Interrupt Mask Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief UREG32 register API structure */
typedef struct
{
  union
  {
      __IO  uint16_t                       MBX_u16[2];         /**< Offset: 0x00 (R/W  16) ENABLE SET */
      __IO  uint8_t                        MBX_u08[4];         /**< Offset: 0x00 (R/W  8) RESULT */
      __IO  uint32_t                       MBX_u32;            /**< Offset: 0x00 (R/W  32) SOURCE */
  };
} mbx_ureg32_registers_t;

#define MBX_REG_NUMBER 8

/** \brief MBX register API structure */
typedef struct
{  /* The Mailbox provides a standard run-time mechanism for the host to communicate with the Embedded Controller (EC). */
  __IO  uint8_t                        MBX_RT_IDX;         /**< Offset: 0x00 (R/W  8) MBX_Index Register */
  __IO  uint8_t                        MBX_RT_DATA;        /**< Offset: 0x01 (R/W  8) MBX_Data_Register */
  __I   uint8_t                        Reserved1[0xFE];
  __IO  uint32_t                       MBX_H2EC;           /**< Offset: 0x100 (R/W  32) If enabled, an interrupt to the EC marked by the MBX_DATA bit in the Interrupt Aggregator will be generated whenever the Host writes this register. This register is cleared when written with FFh. */
  __IO  uint8_t                        MBX_EC2H;           /**< Offset: 0x104 (R/W  8) An EC write to this register will set bit EC_WR in the SMI Interrupt Source Register to '1b'. If enabled, this will generate a Host SMI. This register is cleared when written with FFh. */
  __I   uint8_t                        Reserved2[0x03];
  __IO  uint32_t                       MBX_SMI_SRC;        /**< Offset: 0x108 (R/W  32) SMI Interrupt Source Register */
  __IO  uint32_t                       MBX_SMI_MASK;       /**< Offset: 0x10C (R/W  32) SMI Interrupt Mask Register */
        mbx_ureg32_registers_t         MBX_REG[MBX_REG_NUMBER]; /**< Offset: 0x110  */
} mbx_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _0525SG12_MBX_COMPONENT_H_ */
