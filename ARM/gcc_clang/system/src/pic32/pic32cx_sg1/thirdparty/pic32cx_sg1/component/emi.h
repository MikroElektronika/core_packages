/*
 * Component description for EMI
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
#ifndef _0525SG12_EMI_COMPONENT_H_
#define _0525SG12_EMI_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR EMI                                          */
/* ************************************************************************** */

/* -------- EMI_RT_HOST2EC : (EMI Offset: 0x00) (R/W 8) Host-to-EC Mailbox Register -------- */
#define EMI_RT_HOST2EC_RESETVALUE             _UINT8_(0x00)                                        /*  (EMI_RT_HOST2EC) Host-to-EC Mailbox Register  Reset Value */

#define EMI_RT_HOST2EC_Msk                    _UINT8_(0x00)                                        /* (EMI_RT_HOST2EC) Register Mask  */


/* -------- EMI_RT_EC2HOST : (EMI Offset: 0x01) (R/W 8) EC-to-Host Mailbox Register -------- */
#define EMI_RT_EC2HOST_RESETVALUE             _UINT8_(0x00)                                        /*  (EMI_RT_EC2HOST) EC-to-Host Mailbox Register  Reset Value */

#define EMI_RT_EC2HOST_Msk                    _UINT8_(0x00)                                        /* (EMI_RT_EC2HOST) Register Mask  */


/* -------- EMI_RT_EC_ADDR_LSB : (EMI Offset: 0x02) (R/W 8) EC Address Access Control Register -------- */
#define EMI_RT_EC_ADDR_LSB_RESETVALUE         _UINT8_(0x00)                                        /*  (EMI_RT_EC_ADDR_LSB) EC Address Access Control Register  Reset Value */

#define EMI_RT_EC_ADDR_LSB_ACCESS_TYPE_Pos    _UINT8_(0)                                           /* (EMI_RT_EC_ADDR_LSB) This field defines the type of access that occurs when the EC Data Register is read or written.\n                11b=Auto-increment 32-bit access. 10b=32-bit access. 01b=16-bit access. 00b=8-bit access. Position */
#define EMI_RT_EC_ADDR_LSB_ACCESS_TYPE_Msk    (_UINT8_(0x3) << EMI_RT_EC_ADDR_LSB_ACCESS_TYPE_Pos) /* (EMI_RT_EC_ADDR_LSB) This field defines the type of access that occurs when the EC Data Register is read or written.\n                11b=Auto-increment 32-bit access. 10b=32-bit access. 01b=16-bit access. 00b=8-bit access. Mask */
#define EMI_RT_EC_ADDR_LSB_ACCESS_TYPE(value) (EMI_RT_EC_ADDR_LSB_ACCESS_TYPE_Msk & (_UINT8_(value) << EMI_RT_EC_ADDR_LSB_ACCESS_TYPE_Pos)) /* Assigment of value for ACCESS_TYPE in the EMI_RT_EC_ADDR_LSB register */
#define EMI_RT_EC_ADDR_LSB_ADDR_Pos           _UINT8_(2)                                           /* (EMI_RT_EC_ADDR_LSB) This field defines bits[7:2] of EC_Address [15:0]. Bits[1:0] of the EC_Address are always forced to 00b.\n      The EC_Address is aligned on a DWord boundary. It is the address of the memory being accessed by EC Data Byte 0 Register, which is\n      an offset from the programmed base address of the selected REGION. Position */
#define EMI_RT_EC_ADDR_LSB_ADDR_Msk           (_UINT8_(0x3F) << EMI_RT_EC_ADDR_LSB_ADDR_Pos)       /* (EMI_RT_EC_ADDR_LSB) This field defines bits[7:2] of EC_Address [15:0]. Bits[1:0] of the EC_Address are always forced to 00b.\n      The EC_Address is aligned on a DWord boundary. It is the address of the memory being accessed by EC Data Byte 0 Register, which is\n      an offset from the programmed base address of the selected REGION. Mask */
#define EMI_RT_EC_ADDR_LSB_ADDR(value)        (EMI_RT_EC_ADDR_LSB_ADDR_Msk & (_UINT8_(value) << EMI_RT_EC_ADDR_LSB_ADDR_Pos)) /* Assigment of value for ADDR in the EMI_RT_EC_ADDR_LSB register */
#define EMI_RT_EC_ADDR_LSB_Msk                _UINT8_(0xFF)                                        /* (EMI_RT_EC_ADDR_LSB) Register Mask  */


/* -------- EMI_RT_EC_ADDR_MSB : (EMI Offset: 0x03) (R/W 8) EC Address Access Control Register -------- */
#define EMI_RT_EC_ADDR_MSB_RESETVALUE         _UINT8_(0x00)                                        /*  (EMI_RT_EC_ADDR_MSB) EC Address Access Control Register  Reset Value */

#define EMI_RT_EC_ADDR_MSB_ADDR_Pos           _UINT8_(2)                                           /* (EMI_RT_EC_ADDR_MSB) This field defines bits[14:8] of EC_Address. Bits[1:0] of the EC_Address are always forced to 00b.\n      The EC_Address is aligned on a DWord boundary. It is the address of the memory being accessed by EC Data Byte 0 Register, which is\n      an offset from the programmed base address of the selected REGION. Position */
#define EMI_RT_EC_ADDR_MSB_ADDR_Msk           (_UINT8_(0x1F) << EMI_RT_EC_ADDR_MSB_ADDR_Pos)       /* (EMI_RT_EC_ADDR_MSB) This field defines bits[14:8] of EC_Address. Bits[1:0] of the EC_Address are always forced to 00b.\n      The EC_Address is aligned on a DWord boundary. It is the address of the memory being accessed by EC Data Byte 0 Register, which is\n      an offset from the programmed base address of the selected REGION. Mask */
#define EMI_RT_EC_ADDR_MSB_ADDR(value)        (EMI_RT_EC_ADDR_MSB_ADDR_Msk & (_UINT8_(value) << EMI_RT_EC_ADDR_MSB_ADDR_Pos)) /* Assigment of value for ADDR in the EMI_RT_EC_ADDR_MSB register */
#define EMI_RT_EC_ADDR_MSB_REGION_Pos         _UINT8_(7)                                           /* (EMI_RT_EC_ADDR_MSB) The field specifies which of two segments in the 32-bit internal address space is to be accessed by the EC_Address[14:2]\n      to generate accesses to the memory.\n      1=The address defined by EC_Address[14:2] is relative to the base address specified by the Memory Base Address 1 Register.\n      0=The address defined by EC_Address[14:2] is relative to the base address specified by the Memory Base Address 0 Register. Position */
#define EMI_RT_EC_ADDR_MSB_REGION_Msk         (_UINT8_(0x1) << EMI_RT_EC_ADDR_MSB_REGION_Pos)      /* (EMI_RT_EC_ADDR_MSB) The field specifies which of two segments in the 32-bit internal address space is to be accessed by the EC_Address[14:2]\n      to generate accesses to the memory.\n      1=The address defined by EC_Address[14:2] is relative to the base address specified by the Memory Base Address 1 Register.\n      0=The address defined by EC_Address[14:2] is relative to the base address specified by the Memory Base Address 0 Register. Mask */
#define EMI_RT_EC_ADDR_MSB_REGION(value)      (EMI_RT_EC_ADDR_MSB_REGION_Msk & (_UINT8_(value) << EMI_RT_EC_ADDR_MSB_REGION_Pos)) /* Assigment of value for REGION in the EMI_RT_EC_ADDR_MSB register */
#define EMI_RT_EC_ADDR_MSB_Msk                _UINT8_(0xFC)                                        /* (EMI_RT_EC_ADDR_MSB) Register Mask  */


/* -------- EMI_RT_DATA : (EMI Offset: 0x04) (R/W 32) EC Data Byte Register -------- */
#define EMI_RT_DATA_RESETVALUE                _UINT32_(0x00)                                       /*  (EMI_RT_DATA) EC Data Byte Register  Reset Value */

#define EMI_RT_DATA_Msk                       _UINT32_(0x00000000)                                 /* (EMI_RT_DATA) Register Mask  */


/* -------- EMI_RT_INTR_SRC_LSB : (EMI Offset: 0x08) (R/W 8) Interrupt Source LSB Register -------- */
#define EMI_RT_INTR_SRC_LSB_RESETVALUE        _UINT8_(0x00)                                        /*  (EMI_RT_INTR_SRC_LSB) Interrupt Source LSB Register  Reset Value */

#define EMI_RT_INTR_SRC_LSB_EC_WR_Pos         _UINT8_(0)                                           /* (EMI_RT_INTR_SRC_LSB) EC Mailbox Write. This bit is set when the EC-to-HOST Mailbox Register has been written by the EC at offset 01h\n      of the EC-Only registers. Note: there is no corresponding mask bit in the Interrupt Mask LSB Register. Position */
#define EMI_RT_INTR_SRC_LSB_EC_WR_Msk         (_UINT8_(0x1) << EMI_RT_INTR_SRC_LSB_EC_WR_Pos)      /* (EMI_RT_INTR_SRC_LSB) EC Mailbox Write. This bit is set when the EC-to-HOST Mailbox Register has been written by the EC at offset 01h\n      of the EC-Only registers. Note: there is no corresponding mask bit in the Interrupt Mask LSB Register. Mask */
#define EMI_RT_INTR_SRC_LSB_EC_WR(value)      (EMI_RT_INTR_SRC_LSB_EC_WR_Msk & (_UINT8_(value) << EMI_RT_INTR_SRC_LSB_EC_WR_Pos)) /* Assigment of value for EC_WR in the EMI_RT_INTR_SRC_LSB register */
#define EMI_RT_INTR_SRC_LSB_EC_SWI_LSB_Pos    _UINT8_(1)                                           /* (EMI_RT_INTR_SRC_LSB) EC Software Interrupt Least Significant Bits. These bits are software interrupt bits that may be set by the EC to\n      notify the host of an event. The meaning of these bits is dependent on the firmware implementation. Each bit in this field is cleared\n      when written with a '1b'. The ability to clear the bit can be disabled by the EC if the corresponding bit in the Host Clear Enable\n      Register is set to '0b'. This may be used by firmware for events that cannot be cleared while the event is still active. Position */
#define EMI_RT_INTR_SRC_LSB_EC_SWI_LSB_Msk    (_UINT8_(0x7F) << EMI_RT_INTR_SRC_LSB_EC_SWI_LSB_Pos) /* (EMI_RT_INTR_SRC_LSB) EC Software Interrupt Least Significant Bits. These bits are software interrupt bits that may be set by the EC to\n      notify the host of an event. The meaning of these bits is dependent on the firmware implementation. Each bit in this field is cleared\n      when written with a '1b'. The ability to clear the bit can be disabled by the EC if the corresponding bit in the Host Clear Enable\n      Register is set to '0b'. This may be used by firmware for events that cannot be cleared while the event is still active. Mask */
#define EMI_RT_INTR_SRC_LSB_EC_SWI_LSB(value) (EMI_RT_INTR_SRC_LSB_EC_SWI_LSB_Msk & (_UINT8_(value) << EMI_RT_INTR_SRC_LSB_EC_SWI_LSB_Pos)) /* Assigment of value for EC_SWI_LSB in the EMI_RT_INTR_SRC_LSB register */
#define EMI_RT_INTR_SRC_LSB_Msk               _UINT8_(0xFF)                                        /* (EMI_RT_INTR_SRC_LSB) Register Mask  */


/* -------- EMI_RT_INTR_SRC_MSB : (EMI Offset: 0x09) (R/W 8) Interrupt Source MSB Register -------- */
#define EMI_RT_INTR_SRC_MSB_RESETVALUE        _UINT8_(0x00)                                        /*  (EMI_RT_INTR_SRC_MSB) Interrupt Source MSB Register  Reset Value */

#define EMI_RT_INTR_SRC_MSB_EC_SWI_MSB_Pos    _UINT8_(0)                                           /* (EMI_RT_INTR_SRC_MSB) EC Software Interrupt Most Significant Bits. These bits are software interrupt bits that may be set by the EC to\n      notify the host of an event. The meaning of these bits is dependent on the firmware implementation. Each bit in this field is cleared\n      when written with a '1b'. The ability to clear the bit can be disabled by the EC if the corresponding bit in the Host Clear Enable\n      Register is set to '0b'. This may be used by firmware for events that cannot be cleared while the event is still active. Position */
#define EMI_RT_INTR_SRC_MSB_EC_SWI_MSB_Msk    (_UINT8_(0xFF) << EMI_RT_INTR_SRC_MSB_EC_SWI_MSB_Pos) /* (EMI_RT_INTR_SRC_MSB) EC Software Interrupt Most Significant Bits. These bits are software interrupt bits that may be set by the EC to\n      notify the host of an event. The meaning of these bits is dependent on the firmware implementation. Each bit in this field is cleared\n      when written with a '1b'. The ability to clear the bit can be disabled by the EC if the corresponding bit in the Host Clear Enable\n      Register is set to '0b'. This may be used by firmware for events that cannot be cleared while the event is still active. Mask */
#define EMI_RT_INTR_SRC_MSB_EC_SWI_MSB(value) (EMI_RT_INTR_SRC_MSB_EC_SWI_MSB_Msk & (_UINT8_(value) << EMI_RT_INTR_SRC_MSB_EC_SWI_MSB_Pos)) /* Assigment of value for EC_SWI_MSB in the EMI_RT_INTR_SRC_MSB register */
#define EMI_RT_INTR_SRC_MSB_Msk               _UINT8_(0xFF)                                        /* (EMI_RT_INTR_SRC_MSB) Register Mask  */


/* -------- EMI_RT_INTR_MASK_LSB : (EMI Offset: 0x0A) (R/W 8) Interrupt Mask LSB Register -------- */
#define EMI_RT_INTR_MASK_LSB_RESETVALUE       _UINT8_(0x00)                                        /*  (EMI_RT_INTR_MASK_LSB) Interrupt Mask LSB Register  Reset Value */

#define EMI_RT_INTR_MASK_LSB_TEST_Pos         _UINT8_(0)                                           /* (EMI_RT_INTR_MASK_LSB) Test Bit. Position */
#define EMI_RT_INTR_MASK_LSB_TEST_Msk         (_UINT8_(0x1) << EMI_RT_INTR_MASK_LSB_TEST_Pos)      /* (EMI_RT_INTR_MASK_LSB) Test Bit. Mask */
#define EMI_RT_INTR_MASK_LSB_TEST(value)      (EMI_RT_INTR_MASK_LSB_TEST_Msk & (_UINT8_(value) << EMI_RT_INTR_MASK_LSB_TEST_Pos)) /* Assigment of value for TEST in the EMI_RT_INTR_MASK_LSB register */
#define EMI_RT_INTR_MASK_LSB_EC_SWI_EN_LSB_Pos _UINT8_(1)                                           /* (EMI_RT_INTR_MASK_LSB) EC Software Interrupt Enable Least Significant Bits. Each bit that is set to '1b' in this field enables the generation\n      of a Host Event interrupt by the corresponding bit in the EC_SWI field in the Interrupt Source LSB Register. Position */
#define EMI_RT_INTR_MASK_LSB_EC_SWI_EN_LSB_Msk (_UINT8_(0x7F) << EMI_RT_INTR_MASK_LSB_EC_SWI_EN_LSB_Pos) /* (EMI_RT_INTR_MASK_LSB) EC Software Interrupt Enable Least Significant Bits. Each bit that is set to '1b' in this field enables the generation\n      of a Host Event interrupt by the corresponding bit in the EC_SWI field in the Interrupt Source LSB Register. Mask */
#define EMI_RT_INTR_MASK_LSB_EC_SWI_EN_LSB(value) (EMI_RT_INTR_MASK_LSB_EC_SWI_EN_LSB_Msk & (_UINT8_(value) << EMI_RT_INTR_MASK_LSB_EC_SWI_EN_LSB_Pos)) /* Assigment of value for EC_SWI_EN_LSB in the EMI_RT_INTR_MASK_LSB register */
#define EMI_RT_INTR_MASK_LSB_Msk              _UINT8_(0xFF)                                        /* (EMI_RT_INTR_MASK_LSB) Register Mask  */


/* -------- EMI_RT_INTR_MASK_MSB : (EMI Offset: 0x0B) (R/W 8) Interrupt Mask MSB Register -------- */
#define EMI_RT_INTR_MASK_MSB_RESETVALUE       _UINT8_(0x00)                                        /*  (EMI_RT_INTR_MASK_MSB) Interrupt Mask MSB Register  Reset Value */

#define EMI_RT_INTR_MASK_MSB_EC_SWI_EN_MSB_Pos _UINT8_(1)                                           /* (EMI_RT_INTR_MASK_MSB) EC Software Interrupt Enable Most Significant Bits. Each bit that is set to '1b' in this field enables the generation\n      of a Host Event interrupt by the corresponding bit in the EC_SWI field in the Interrupt Source MSB Register. Position */
#define EMI_RT_INTR_MASK_MSB_EC_SWI_EN_MSB_Msk (_UINT8_(0x7F) << EMI_RT_INTR_MASK_MSB_EC_SWI_EN_MSB_Pos) /* (EMI_RT_INTR_MASK_MSB) EC Software Interrupt Enable Most Significant Bits. Each bit that is set to '1b' in this field enables the generation\n      of a Host Event interrupt by the corresponding bit in the EC_SWI field in the Interrupt Source MSB Register. Mask */
#define EMI_RT_INTR_MASK_MSB_EC_SWI_EN_MSB(value) (EMI_RT_INTR_MASK_MSB_EC_SWI_EN_MSB_Msk & (_UINT8_(value) << EMI_RT_INTR_MASK_MSB_EC_SWI_EN_MSB_Pos)) /* Assigment of value for EC_SWI_EN_MSB in the EMI_RT_INTR_MASK_MSB register */
#define EMI_RT_INTR_MASK_MSB_Msk              _UINT8_(0xFE)                                        /* (EMI_RT_INTR_MASK_MSB) Register Mask  */


/* -------- EMI_RT_APP_ID : (EMI Offset: 0x0C) (R/W 8) Application ID Register, APPLICATION_ID When this field is 00h it can be written with any value. When set to a non-zero value, writing that value will clear this register to 00h. When set to a non-zero value, writing any value other than the current contents will have no effect. -------- */
#define EMI_RT_APP_ID_RESETVALUE              _UINT8_(0x00)                                        /*  (EMI_RT_APP_ID) Application ID Register, APPLICATION_ID When this field is 00h it can be written with any value. When set to a non-zero value, writing that value will clear this register to 00h. When set to a non-zero value, writing any value other than the current contents will have no effect.  Reset Value */

#define EMI_RT_APP_ID_Msk                     _UINT8_(0x00)                                        /* (EMI_RT_APP_ID) Register Mask  */


/* -------- EMI_HOST2EC : (EMI Offset: 0x100) (R/W 8) Host-to-EC Mailbox Register, 8-bit mailbox used communicate information from the system host to the embedded controller. Writing this register generates an event to notify the embedded controller. (R/WC) -------- */
#define EMI_HOST2EC_RESETVALUE                _UINT8_(0x00)                                        /*  (EMI_HOST2EC) Host-to-EC Mailbox Register, 8-bit mailbox used communicate information from the system host to the embedded controller. Writing this register generates an event to notify the embedded controller. (R/WC)  Reset Value */

#define EMI_HOST2EC_Msk                       _UINT8_(0x00)                                        /* (EMI_HOST2EC) Register Mask  */


/* -------- EMI_EC2HOST : (EMI Offset: 0x101) (R/W 8) EC-to-Host Mailbox Register, 8-bit mailbox used communicate information from the embedded controller to the system host. Writing this register generates an event to notify the system host. -------- */
#define EMI_EC2HOST_RESETVALUE                _UINT8_(0x00)                                        /*  (EMI_EC2HOST) EC-to-Host Mailbox Register, 8-bit mailbox used communicate information from the embedded controller to the system host. Writing this register generates an event to notify the system host.  Reset Value */

#define EMI_EC2HOST_Msk                       _UINT8_(0x00)                                        /* (EMI_EC2HOST) Register Mask  */


/* -------- EMI_MEM0_BASE : (EMI Offset: 0x104) (R/W 32) Memory Base Address 0 Register [31:2] This memory base address defines the beginning of region 0 in the Embedded Controller's 32-bit internal address space. Memory allocated to region 0 is intended to be shared between the Host and the EC. The region defined by this base register is used when bit 15 of the EC Address Register is 0. The access will be to a memory location at an offset defined by the EC_Address relative to the beginning of the region defined by this register. Therefore, a read or write to the memory that is triggered by the EC Data Register will occur at Memory_Base_Address_0 + EC_Address. -------- */
#define EMI_MEM0_BASE_RESETVALUE              _UINT32_(0x00)                                       /*  (EMI_MEM0_BASE) Memory Base Address 0 Register [31:2] This memory base address defines the beginning of region 0 in the Embedded Controller's 32-bit internal address space. Memory allocated to region 0 is intended to be shared between the Host and the EC. The region defined by this base register is used when bit 15 of the EC Address Register is 0. The access will be to a memory location at an offset defined by the EC_Address relative to the beginning of the region defined by this register. Therefore, a read or write to the memory that is triggered by the EC Data Register will occur at Memory_Base_Address_0 + EC_Address.  Reset Value */

#define EMI_MEM0_BASE_Msk                     _UINT32_(0x00000000)                                 /* (EMI_MEM0_BASE) Register Mask  */


/* -------- EMI_MEM0_RD_LIMITS : (EMI Offset: 0x108) (R/W 16) Memory Read Limit 0 Register [14:2] Whenever a read of any byte in the EC Data Register is attempted, and bit 15 of EC_Address is 0, the field EC_Address[14:2] in the EC_Address_Register is compared to this field. As long as EC_Address[14:2] is less than this field the EC_Data_Register will be loaded from the 24-bit internal address space. -------- */
#define EMI_MEM0_RD_LIMITS_RESETVALUE         _UINT16_(0x00)                                       /*  (EMI_MEM0_RD_LIMITS) Memory Read Limit 0 Register [14:2] Whenever a read of any byte in the EC Data Register is attempted, and bit 15 of EC_Address is 0, the field EC_Address[14:2] in the EC_Address_Register is compared to this field. As long as EC_Address[14:2] is less than this field the EC_Data_Register will be loaded from the 24-bit internal address space.  Reset Value */

#define EMI_MEM0_RD_LIMITS_Msk                _UINT16_(0x0000)                                     /* (EMI_MEM0_RD_LIMITS) Register Mask  */


/* -------- EMI_MEM0_WR_LIMITS : (EMI Offset: 0x10A) (R/W 16) Memory Write Limit 0 Register [14:2] Whenever a write of any byte in EC DATA Register is attempted and bit 15 of EC_Address is 0, the field EC_ADDRESS_MSB in the EC_Address Register is compared to this field. As long as EC_Address[14:2] is less than Memory_Write_Limit_0[14:2] the addressed bytes in the EC DATA Register will be written into the internal 24-bit address space. If EC_Address[14:2] is greater than or equal to the Memory_Write_Limit_0[14:2] no writes will take place. -------- */
#define EMI_MEM0_WR_LIMITS_RESETVALUE         _UINT16_(0x00)                                       /*  (EMI_MEM0_WR_LIMITS) Memory Write Limit 0 Register [14:2] Whenever a write of any byte in EC DATA Register is attempted and bit 15 of EC_Address is 0, the field EC_ADDRESS_MSB in the EC_Address Register is compared to this field. As long as EC_Address[14:2] is less than Memory_Write_Limit_0[14:2] the addressed bytes in the EC DATA Register will be written into the internal 24-bit address space. If EC_Address[14:2] is greater than or equal to the Memory_Write_Limit_0[14:2] no writes will take place.  Reset Value */

#define EMI_MEM0_WR_LIMITS_Msk                _UINT16_(0x0000)                                     /* (EMI_MEM0_WR_LIMITS) Register Mask  */


/* -------- EMI_MEM1_BASE : (EMI Offset: 0x10C) (R/W 32) Memory Base Address 1 Register. [31:2] This memory base address defines the beginning of region 1 in the Embedded Controller's 32-bit internal address space. Memory allocated to region 1 is intended to be shared between the Host and the EC. The region defined by this base register is used when bit 15 of the EC Address Register is 1. The access will be to a memory location at an offset defined by the EC_Address relative to the beginning of the region defined by this register. Therefore, a read or write to the memory that is triggered by the EC Data Register will occur at Memory_Base_Address_1 + EC_Address. -------- */
#define EMI_MEM1_BASE_RESETVALUE              _UINT32_(0x00)                                       /*  (EMI_MEM1_BASE) Memory Base Address 1 Register. [31:2] This memory base address defines the beginning of region 1 in the Embedded Controller's 32-bit internal address space. Memory allocated to region 1 is intended to be shared between the Host and the EC. The region defined by this base register is used when bit 15 of the EC Address Register is 1. The access will be to a memory location at an offset defined by the EC_Address relative to the beginning of the region defined by this register. Therefore, a read or write to the memory that is triggered by the EC Data Register will occur at Memory_Base_Address_1 + EC_Address.  Reset Value */

#define EMI_MEM1_BASE_Msk                     _UINT32_(0x00000000)                                 /* (EMI_MEM1_BASE) Register Mask  */


/* -------- EMI_MEM1_RD_LIMITS : (EMI Offset: 0x110) (R/W 16) Memory Read Limit 1 Register, [14:2]: Whenever a read of any byte in the EC Data Register is attempted, and bit 15 of EC_ADDRESS is 1, the field EC_ADDRESS in the EC_Address_Register is compared to this field. As long as EC_ADDRESS is less than this value, the EC_Data_Register will be loaded from the 24-bit internal address space. -------- */
#define EMI_MEM1_RD_LIMITS_RESETVALUE         _UINT16_(0x00)                                       /*  (EMI_MEM1_RD_LIMITS) Memory Read Limit 1 Register, [14:2]: Whenever a read of any byte in the EC Data Register is attempted, and bit 15 of EC_ADDRESS is 1, the field EC_ADDRESS in the EC_Address_Register is compared to this field. As long as EC_ADDRESS is less than this value, the EC_Data_Register will be loaded from the 24-bit internal address space.  Reset Value */

#define EMI_MEM1_RD_LIMITS_Msk                _UINT16_(0x0000)                                     /* (EMI_MEM1_RD_LIMITS) Register Mask  */


/* -------- EMI_MEM1_WR_LIMITS : (EMI Offset: 0x112) (R/W 16) Memory Write Limit 1 Register, [14:2]: Whenever a write of any byte in EC DATA Register is attempted and bit 15 of EC_Address is 1, the field EC_Address[14:2] in the EC_Address Register is compared to this field. As long as EC_Address[14:2] is less than Memory_Write_Limit_1[14:2] the addressed bytes in the EC DATA Register will be written into the internal 24-bit address space. If EC_Address[14:2] is greater than or equal to the Memory_Write_Limit_1[14:2] no writes will take place. -------- */
#define EMI_MEM1_WR_LIMITS_RESETVALUE         _UINT16_(0x00)                                       /*  (EMI_MEM1_WR_LIMITS) Memory Write Limit 1 Register, [14:2]: Whenever a write of any byte in EC DATA Register is attempted and bit 15 of EC_Address is 1, the field EC_Address[14:2] in the EC_Address Register is compared to this field. As long as EC_Address[14:2] is less than Memory_Write_Limit_1[14:2] the addressed bytes in the EC DATA Register will be written into the internal 24-bit address space. If EC_Address[14:2] is greater than or equal to the Memory_Write_Limit_1[14:2] no writes will take place.  Reset Value */

#define EMI_MEM1_WR_LIMITS_Msk                _UINT16_(0x0000)                                     /* (EMI_MEM1_WR_LIMITS) Register Mask  */


/* -------- EMI_INTR_SET : (EMI Offset: 0x114) (R/W 16) [15:1] Interrupt Set Register, Writing a bit in this field with a '1b' sets the corresponding bit in the Interrupt Source Register to '1b'. Writing a bit in this field with a '0b' has no effect. Reading this field returns the current contents of the Interrupt Source Register. -------- */
#define EMI_INTR_SET_RESETVALUE               _UINT16_(0x00)                                       /*  (EMI_INTR_SET) [15:1] Interrupt Set Register, Writing a bit in this field with a '1b' sets the corresponding bit in the Interrupt Source Register to '1b'. Writing a bit in this field with a '0b' has no effect. Reading this field returns the current contents of the Interrupt Source Register.  Reset Value */

#define EMI_INTR_SET_Msk                      _UINT16_(0x0000)                                     /* (EMI_INTR_SET) Register Mask  */


/* -------- EMI_HOST_CLR_EN : (EMI Offset: 0x116) (R/W 16) [15:1] Host Clear Enable Register, When a bit in this field is '0b', the corresponding bit in the Interrupt Source Register cannot be cleared by writes to the Interrupt Source Register. When a bit in this field is '1b', the corresponding bit in the Interrupt Source Register can be cleared when that register bit is written with a '1b'. -------- */
#define EMI_HOST_CLR_EN_RESETVALUE            _UINT16_(0x00)                                       /*  (EMI_HOST_CLR_EN) [15:1] Host Clear Enable Register, When a bit in this field is '0b', the corresponding bit in the Interrupt Source Register cannot be cleared by writes to the Interrupt Source Register. When a bit in this field is '1b', the corresponding bit in the Interrupt Source Register can be cleared when that register bit is written with a '1b'.  Reset Value */

#define EMI_HOST_CLR_EN_Msk                   _UINT16_(0x0000)                                     /* (EMI_HOST_CLR_EN) Register Mask  */


/** \brief EMI register offsets definitions */
#define EMI_RT_HOST2EC_REG_OFST        _UINT32_(0x00)      /* (EMI_RT_HOST2EC) Host-to-EC Mailbox Register Offset */
#define EMI_RT_EC2HOST_REG_OFST        _UINT32_(0x01)      /* (EMI_RT_EC2HOST) EC-to-Host Mailbox Register Offset */
#define EMI_RT_EC_ADDR_LSB_REG_OFST    _UINT32_(0x02)      /* (EMI_RT_EC_ADDR_LSB) EC Address Access Control Register Offset */
#define EMI_RT_EC_ADDR_MSB_REG_OFST    _UINT32_(0x03)      /* (EMI_RT_EC_ADDR_MSB) EC Address Access Control Register Offset */
#define EMI_RT_DATA_REG_OFST           _UINT32_(0x04)      /* (EMI_RT_DATA) EC Data Byte Register Offset */
#define EMI_RT_INTR_SRC_LSB_REG_OFST   _UINT32_(0x08)      /* (EMI_RT_INTR_SRC_LSB) Interrupt Source LSB Register Offset */
#define EMI_RT_INTR_SRC_MSB_REG_OFST   _UINT32_(0x09)      /* (EMI_RT_INTR_SRC_MSB) Interrupt Source MSB Register Offset */
#define EMI_RT_INTR_MASK_LSB_REG_OFST  _UINT32_(0x0A)      /* (EMI_RT_INTR_MASK_LSB) Interrupt Mask LSB Register Offset */
#define EMI_RT_INTR_MASK_MSB_REG_OFST  _UINT32_(0x0B)      /* (EMI_RT_INTR_MASK_MSB) Interrupt Mask MSB Register Offset */
#define EMI_RT_APP_ID_REG_OFST         _UINT32_(0x0C)      /* (EMI_RT_APP_ID) Application ID Register, APPLICATION_ID When this field is 00h it can be written with any value. When set to a non-zero value, writing that value will clear this register to 00h. When set to a non-zero value, writing any value other than the current contents will have no effect. Offset */
#define EMI_HOST2EC_REG_OFST           _UINT32_(0x100)     /* (EMI_HOST2EC) Host-to-EC Mailbox Register, 8-bit mailbox used communicate information from the system host to the embedded controller. Writing this register generates an event to notify the embedded controller. (R/WC) Offset */
#define EMI_EC2HOST_REG_OFST           _UINT32_(0x101)     /* (EMI_EC2HOST) EC-to-Host Mailbox Register, 8-bit mailbox used communicate information from the embedded controller to the system host. Writing this register generates an event to notify the system host. Offset */
#define EMI_MEM0_BASE_REG_OFST         _UINT32_(0x104)     /* (EMI_MEM0_BASE) Memory Base Address 0 Register [31:2] This memory base address defines the beginning of region 0 in the Embedded Controller's 32-bit internal address space. Memory allocated to region 0 is intended to be shared between the Host and the EC. The region defined by this base register is used when bit 15 of the EC Address Register is 0. The access will be to a memory location at an offset defined by the EC_Address relative to the beginning of the region defined by this register. Therefore, a read or write to the memory that is triggered by the EC Data Register will occur at Memory_Base_Address_0 + EC_Address. Offset */
#define EMI_MEM0_RD_LIMITS_REG_OFST    _UINT32_(0x108)     /* (EMI_MEM0_RD_LIMITS) Memory Read Limit 0 Register [14:2] Whenever a read of any byte in the EC Data Register is attempted, and bit 15 of EC_Address is 0, the field EC_Address[14:2] in the EC_Address_Register is compared to this field. As long as EC_Address[14:2] is less than this field the EC_Data_Register will be loaded from the 24-bit internal address space. Offset */
#define EMI_MEM0_WR_LIMITS_REG_OFST    _UINT32_(0x10A)     /* (EMI_MEM0_WR_LIMITS) Memory Write Limit 0 Register [14:2] Whenever a write of any byte in EC DATA Register is attempted and bit 15 of EC_Address is 0, the field EC_ADDRESS_MSB in the EC_Address Register is compared to this field. As long as EC_Address[14:2] is less than Memory_Write_Limit_0[14:2] the addressed bytes in the EC DATA Register will be written into the internal 24-bit address space. If EC_Address[14:2] is greater than or equal to the Memory_Write_Limit_0[14:2] no writes will take place. Offset */
#define EMI_MEM1_BASE_REG_OFST         _UINT32_(0x10C)     /* (EMI_MEM1_BASE) Memory Base Address 1 Register. [31:2] This memory base address defines the beginning of region 1 in the Embedded Controller's 32-bit internal address space. Memory allocated to region 1 is intended to be shared between the Host and the EC. The region defined by this base register is used when bit 15 of the EC Address Register is 1. The access will be to a memory location at an offset defined by the EC_Address relative to the beginning of the region defined by this register. Therefore, a read or write to the memory that is triggered by the EC Data Register will occur at Memory_Base_Address_1 + EC_Address. Offset */
#define EMI_MEM1_RD_LIMITS_REG_OFST    _UINT32_(0x110)     /* (EMI_MEM1_RD_LIMITS) Memory Read Limit 1 Register, [14:2]: Whenever a read of any byte in the EC Data Register is attempted, and bit 15 of EC_ADDRESS is 1, the field EC_ADDRESS in the EC_Address_Register is compared to this field. As long as EC_ADDRESS is less than this value, the EC_Data_Register will be loaded from the 24-bit internal address space. Offset */
#define EMI_MEM1_WR_LIMITS_REG_OFST    _UINT32_(0x112)     /* (EMI_MEM1_WR_LIMITS) Memory Write Limit 1 Register, [14:2]: Whenever a write of any byte in EC DATA Register is attempted and bit 15 of EC_Address is 1, the field EC_Address[14:2] in the EC_Address Register is compared to this field. As long as EC_Address[14:2] is less than Memory_Write_Limit_1[14:2] the addressed bytes in the EC DATA Register will be written into the internal 24-bit address space. If EC_Address[14:2] is greater than or equal to the Memory_Write_Limit_1[14:2] no writes will take place. Offset */
#define EMI_INTR_SET_REG_OFST          _UINT32_(0x114)     /* (EMI_INTR_SET) [15:1] Interrupt Set Register, Writing a bit in this field with a '1b' sets the corresponding bit in the Interrupt Source Register to '1b'. Writing a bit in this field with a '0b' has no effect. Reading this field returns the current contents of the Interrupt Source Register. Offset */
#define EMI_HOST_CLR_EN_REG_OFST       _UINT32_(0x116)     /* (EMI_HOST_CLR_EN) [15:1] Host Clear Enable Register, When a bit in this field is '0b', the corresponding bit in the Interrupt Source Register cannot be cleared by writes to the Interrupt Source Register. When a bit in this field is '1b', the corresponding bit in the Interrupt Source Register can be cleared when that register bit is written with a '1b'. Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief EMI register API structure */
typedef struct
{  /* The EMI provides a communication between system host and Embedded Controller */
  __IO  uint8_t                        EMI_RT_HOST2EC;     /**< Offset: 0x00 (R/W  8) Host-to-EC Mailbox Register */
  __IO  uint8_t                        EMI_RT_EC2HOST;     /**< Offset: 0x01 (R/W  8) EC-to-Host Mailbox Register */
  __IO  uint8_t                        EMI_RT_EC_ADDR_LSB; /**< Offset: 0x02 (R/W  8) EC Address Access Control Register */
  __IO  uint8_t                        EMI_RT_EC_ADDR_MSB; /**< Offset: 0x03 (R/W  8) EC Address Access Control Register */
  __IO  uint32_t                       EMI_RT_DATA;        /**< Offset: 0x04 (R/W  32) EC Data Byte Register */
  __IO  uint8_t                        EMI_RT_INTR_SRC_LSB; /**< Offset: 0x08 (R/W  8) Interrupt Source LSB Register */
  __IO  uint8_t                        EMI_RT_INTR_SRC_MSB; /**< Offset: 0x09 (R/W  8) Interrupt Source MSB Register */
  __IO  uint8_t                        EMI_RT_INTR_MASK_LSB; /**< Offset: 0x0A (R/W  8) Interrupt Mask LSB Register */
  __IO  uint8_t                        EMI_RT_INTR_MASK_MSB; /**< Offset: 0x0B (R/W  8) Interrupt Mask MSB Register */
  __IO  uint8_t                        EMI_RT_APP_ID;      /**< Offset: 0x0C (R/W  8) Application ID Register, APPLICATION_ID When this field is 00h it can be written with any value. When set to a non-zero value, writing that value will clear this register to 00h. When set to a non-zero value, writing any value other than the current contents will have no effect. */
  __I   uint8_t                        Reserved1[0xF3];
  __IO  uint8_t                        EMI_HOST2EC;        /**< Offset: 0x100 (R/W  8) Host-to-EC Mailbox Register, 8-bit mailbox used communicate information from the system host to the embedded controller. Writing this register generates an event to notify the embedded controller. (R/WC) */
  __IO  uint8_t                        EMI_EC2HOST;        /**< Offset: 0x101 (R/W  8) EC-to-Host Mailbox Register, 8-bit mailbox used communicate information from the embedded controller to the system host. Writing this register generates an event to notify the system host. */
  __I   uint8_t                        Reserved2[0x02];
  __IO  uint32_t                       EMI_MEM0_BASE;      /**< Offset: 0x104 (R/W  32) Memory Base Address 0 Register [31:2] This memory base address defines the beginning of region 0 in the Embedded Controller's 32-bit internal address space. Memory allocated to region 0 is intended to be shared between the Host and the EC. The region defined by this base register is used when bit 15 of the EC Address Register is 0. The access will be to a memory location at an offset defined by the EC_Address relative to the beginning of the region defined by this register. Therefore, a read or write to the memory that is triggered by the EC Data Register will occur at Memory_Base_Address_0 + EC_Address. */
  __IO  uint16_t                       EMI_MEM0_RD_LIMITS; /**< Offset: 0x108 (R/W  16) Memory Read Limit 0 Register [14:2] Whenever a read of any byte in the EC Data Register is attempted, and bit 15 of EC_Address is 0, the field EC_Address[14:2] in the EC_Address_Register is compared to this field. As long as EC_Address[14:2] is less than this field the EC_Data_Register will be loaded from the 24-bit internal address space. */
  __IO  uint16_t                       EMI_MEM0_WR_LIMITS; /**< Offset: 0x10A (R/W  16) Memory Write Limit 0 Register [14:2] Whenever a write of any byte in EC DATA Register is attempted and bit 15 of EC_Address is 0, the field EC_ADDRESS_MSB in the EC_Address Register is compared to this field. As long as EC_Address[14:2] is less than Memory_Write_Limit_0[14:2] the addressed bytes in the EC DATA Register will be written into the internal 24-bit address space. If EC_Address[14:2] is greater than or equal to the Memory_Write_Limit_0[14:2] no writes will take place. */
  __IO  uint32_t                       EMI_MEM1_BASE;      /**< Offset: 0x10C (R/W  32) Memory Base Address 1 Register. [31:2] This memory base address defines the beginning of region 1 in the Embedded Controller's 32-bit internal address space. Memory allocated to region 1 is intended to be shared between the Host and the EC. The region defined by this base register is used when bit 15 of the EC Address Register is 1. The access will be to a memory location at an offset defined by the EC_Address relative to the beginning of the region defined by this register. Therefore, a read or write to the memory that is triggered by the EC Data Register will occur at Memory_Base_Address_1 + EC_Address. */
  __IO  uint16_t                       EMI_MEM1_RD_LIMITS; /**< Offset: 0x110 (R/W  16) Memory Read Limit 1 Register, [14:2]: Whenever a read of any byte in the EC Data Register is attempted, and bit 15 of EC_ADDRESS is 1, the field EC_ADDRESS in the EC_Address_Register is compared to this field. As long as EC_ADDRESS is less than this value, the EC_Data_Register will be loaded from the 24-bit internal address space. */
  __IO  uint16_t                       EMI_MEM1_WR_LIMITS; /**< Offset: 0x112 (R/W  16) Memory Write Limit 1 Register, [14:2]: Whenever a write of any byte in EC DATA Register is attempted and bit 15 of EC_Address is 1, the field EC_Address[14:2] in the EC_Address Register is compared to this field. As long as EC_Address[14:2] is less than Memory_Write_Limit_1[14:2] the addressed bytes in the EC DATA Register will be written into the internal 24-bit address space. If EC_Address[14:2] is greater than or equal to the Memory_Write_Limit_1[14:2] no writes will take place. */
  __IO  uint16_t                       EMI_INTR_SET;       /**< Offset: 0x114 (R/W  16) [15:1] Interrupt Set Register, Writing a bit in this field with a '1b' sets the corresponding bit in the Interrupt Source Register to '1b'. Writing a bit in this field with a '0b' has no effect. Reading this field returns the current contents of the Interrupt Source Register. */
  __IO  uint16_t                       EMI_HOST_CLR_EN;    /**< Offset: 0x116 (R/W  16) [15:1] Host Clear Enable Register, When a bit in this field is '0b', the corresponding bit in the Interrupt Source Register cannot be cleared by writes to the Interrupt Source Register. When a bit in this field is '1b', the corresponding bit in the Interrupt Source Register can be cleared when that register bit is written with a '1b'. */
} emi_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _0525SG12_EMI_COMPONENT_H_ */
