/*
 * Component description for ESPI_MEMORY
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
#ifndef _0525SG12_ESPI_MEMORY_COMPONENT_H_
#define _0525SG12_ESPI_MEMORY_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR ESPI_MEMORY                                  */
/* ************************************************************************** */

/* -------- ESPI_MEMORY_BAR_LDI_MBX_H0 : (ESPI_MEMORY Offset: 0x130) (R/W 32) Mailbox Memory Base Address -------- */
#define ESPI_MEMORY_BAR_LDI_MBX_H0_RESETVALUE _UINT32_(0x01)                                       /*  (ESPI_MEMORY_BAR_LDI_MBX_H0) Mailbox Memory Base Address  Reset Value */

#define ESPI_MEMORY_BAR_LDI_MBX_H0_MASK_Pos   _UINT32_(0)                                          /* (ESPI_MEMORY_BAR_LDI_MBX_H0) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_MEMORY_BAR_LDI_MBX_H0_MASK_Msk   (_UINT32_(0xFF) << ESPI_MEMORY_BAR_LDI_MBX_H0_MASK_Pos) /* (ESPI_MEMORY_BAR_LDI_MBX_H0) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_MEMORY_BAR_LDI_MBX_H0_MASK(value) (ESPI_MEMORY_BAR_LDI_MBX_H0_MASK_Msk & (_UINT32_(value) << ESPI_MEMORY_BAR_LDI_MBX_H0_MASK_Pos)) /* Assigment of value for MASK in the ESPI_MEMORY_BAR_LDI_MBX_H0 register */
#define ESPI_MEMORY_BAR_LDI_MBX_H0_LDN_Pos    _UINT32_(8)                                          /* (ESPI_MEMORY_BAR_LDI_MBX_H0) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_MEMORY_BAR_LDI_MBX_H0_LDN_Msk    (_UINT32_(0x3F) << ESPI_MEMORY_BAR_LDI_MBX_H0_LDN_Pos) /* (ESPI_MEMORY_BAR_LDI_MBX_H0) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_MEMORY_BAR_LDI_MBX_H0_LDN(value) (ESPI_MEMORY_BAR_LDI_MBX_H0_LDN_Msk & (_UINT32_(value) << ESPI_MEMORY_BAR_LDI_MBX_H0_LDN_Pos)) /* Assigment of value for LDN in the ESPI_MEMORY_BAR_LDI_MBX_H0 register */
#define ESPI_MEMORY_BAR_LDI_MBX_H0_VIR_Pos    _UINT32_(16)                                         /* (ESPI_MEMORY_BAR_LDI_MBX_H0) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_MEMORY_BAR_LDI_MBX_H0_VIR_Msk    (_UINT32_(0x1) << ESPI_MEMORY_BAR_LDI_MBX_H0_VIR_Pos) /* (ESPI_MEMORY_BAR_LDI_MBX_H0) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_MEMORY_BAR_LDI_MBX_H0_VIR(value) (ESPI_MEMORY_BAR_LDI_MBX_H0_VIR_Msk & (_UINT32_(value) << ESPI_MEMORY_BAR_LDI_MBX_H0_VIR_Pos)) /* Assigment of value for VIR in the ESPI_MEMORY_BAR_LDI_MBX_H0 register */
#define ESPI_MEMORY_BAR_LDI_MBX_H0_Msk        _UINT32_(0x00013FFF)                                 /* (ESPI_MEMORY_BAR_LDI_MBX_H0) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDI_ACPI_EC0_H0 : (ESPI_MEMORY Offset: 0x13A) (R/W 16) ACPI EC Channel 0 Memory BAR (LSB) -------- */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC0_H0_RESETVALUE _UINT16_(0x204)                                      /*  (ESPI_MEMORY_BAR_LDI_ACPI_EC0_H0) ACPI EC Channel 0 Memory BAR (LSB)  Reset Value */

#define ESPI_MEMORY_BAR_LDI_ACPI_EC0_H0_MASK_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDI_ACPI_EC0_H0) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC0_H0_MASK_Msk (_UINT16_(0xFF) << ESPI_MEMORY_BAR_LDI_ACPI_EC0_H0_MASK_Pos) /* (ESPI_MEMORY_BAR_LDI_ACPI_EC0_H0) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC0_H0_MASK(value) (ESPI_MEMORY_BAR_LDI_ACPI_EC0_H0_MASK_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDI_ACPI_EC0_H0_MASK_Pos)) /* Assigment of value for MASK in the ESPI_MEMORY_BAR_LDI_ACPI_EC0_H0 register */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC0_H0_LDN_Pos _UINT16_(8)                                          /* (ESPI_MEMORY_BAR_LDI_ACPI_EC0_H0) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC0_H0_LDN_Msk (_UINT16_(0x3F) << ESPI_MEMORY_BAR_LDI_ACPI_EC0_H0_LDN_Pos) /* (ESPI_MEMORY_BAR_LDI_ACPI_EC0_H0) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC0_H0_LDN(value) (ESPI_MEMORY_BAR_LDI_ACPI_EC0_H0_LDN_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDI_ACPI_EC0_H0_LDN_Pos)) /* Assigment of value for LDN in the ESPI_MEMORY_BAR_LDI_ACPI_EC0_H0 register */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC0_H0_Msk   _UINT16_(0x3FFF)                                     /* (ESPI_MEMORY_BAR_LDI_ACPI_EC0_H0) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDI_ACPI_EC0_H1 : (ESPI_MEMORY Offset: 0x13C) (R/W 16) ACPI EC Channel 0 Memory BAR (MSB) -------- */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC0_H1_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_LDI_ACPI_EC0_H1) ACPI EC Channel 0 Memory BAR (MSB)  Reset Value */

#define ESPI_MEMORY_BAR_LDI_ACPI_EC0_H1_VIR_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDI_ACPI_EC0_H1) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC0_H1_VIR_Msk (_UINT16_(0x1) << ESPI_MEMORY_BAR_LDI_ACPI_EC0_H1_VIR_Pos) /* (ESPI_MEMORY_BAR_LDI_ACPI_EC0_H1) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC0_H1_VIR(value) (ESPI_MEMORY_BAR_LDI_ACPI_EC0_H1_VIR_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDI_ACPI_EC0_H1_VIR_Pos)) /* Assigment of value for VIR in the ESPI_MEMORY_BAR_LDI_ACPI_EC0_H1 register */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC0_H1_Msk   _UINT16_(0x0001)                                     /* (ESPI_MEMORY_BAR_LDI_ACPI_EC0_H1) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDI_ACPI_EC1_H0 : (ESPI_MEMORY Offset: 0x144) (R/W 32) ACPI EC Channel 1 Memory BAR -------- */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC1_H0_RESETVALUE _UINT32_(0x307)                                      /*  (ESPI_MEMORY_BAR_LDI_ACPI_EC1_H0) ACPI EC Channel 1 Memory BAR  Reset Value */

#define ESPI_MEMORY_BAR_LDI_ACPI_EC1_H0_MASK_Pos _UINT32_(0)                                          /* (ESPI_MEMORY_BAR_LDI_ACPI_EC1_H0) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC1_H0_MASK_Msk (_UINT32_(0xFF) << ESPI_MEMORY_BAR_LDI_ACPI_EC1_H0_MASK_Pos) /* (ESPI_MEMORY_BAR_LDI_ACPI_EC1_H0) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC1_H0_MASK(value) (ESPI_MEMORY_BAR_LDI_ACPI_EC1_H0_MASK_Msk & (_UINT32_(value) << ESPI_MEMORY_BAR_LDI_ACPI_EC1_H0_MASK_Pos)) /* Assigment of value for MASK in the ESPI_MEMORY_BAR_LDI_ACPI_EC1_H0 register */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC1_H0_LDN_Pos _UINT32_(8)                                          /* (ESPI_MEMORY_BAR_LDI_ACPI_EC1_H0) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC1_H0_LDN_Msk (_UINT32_(0x3F) << ESPI_MEMORY_BAR_LDI_ACPI_EC1_H0_LDN_Pos) /* (ESPI_MEMORY_BAR_LDI_ACPI_EC1_H0) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC1_H0_LDN(value) (ESPI_MEMORY_BAR_LDI_ACPI_EC1_H0_LDN_Msk & (_UINT32_(value) << ESPI_MEMORY_BAR_LDI_ACPI_EC1_H0_LDN_Pos)) /* Assigment of value for LDN in the ESPI_MEMORY_BAR_LDI_ACPI_EC1_H0 register */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC1_H0_VIR_Pos _UINT32_(16)                                         /* (ESPI_MEMORY_BAR_LDI_ACPI_EC1_H0) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC1_H0_VIR_Msk (_UINT32_(0x1) << ESPI_MEMORY_BAR_LDI_ACPI_EC1_H0_VIR_Pos) /* (ESPI_MEMORY_BAR_LDI_ACPI_EC1_H0) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC1_H0_VIR(value) (ESPI_MEMORY_BAR_LDI_ACPI_EC1_H0_VIR_Msk & (_UINT32_(value) << ESPI_MEMORY_BAR_LDI_ACPI_EC1_H0_VIR_Pos)) /* Assigment of value for VIR in the ESPI_MEMORY_BAR_LDI_ACPI_EC1_H0 register */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC1_H0_Msk   _UINT32_(0x00013FFF)                                 /* (ESPI_MEMORY_BAR_LDI_ACPI_EC1_H0) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDI_ACPI_EC2_H0 : (ESPI_MEMORY Offset: 0x14E) (R/W 16) ACPI EC Channel 2 Memory BAR (LSB) -------- */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC2_H0_RESETVALUE _UINT16_(0x407)                                      /*  (ESPI_MEMORY_BAR_LDI_ACPI_EC2_H0) ACPI EC Channel 2 Memory BAR (LSB)  Reset Value */

#define ESPI_MEMORY_BAR_LDI_ACPI_EC2_H0_MASK_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDI_ACPI_EC2_H0) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC2_H0_MASK_Msk (_UINT16_(0xFF) << ESPI_MEMORY_BAR_LDI_ACPI_EC2_H0_MASK_Pos) /* (ESPI_MEMORY_BAR_LDI_ACPI_EC2_H0) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC2_H0_MASK(value) (ESPI_MEMORY_BAR_LDI_ACPI_EC2_H0_MASK_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDI_ACPI_EC2_H0_MASK_Pos)) /* Assigment of value for MASK in the ESPI_MEMORY_BAR_LDI_ACPI_EC2_H0 register */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC2_H0_LDN_Pos _UINT16_(8)                                          /* (ESPI_MEMORY_BAR_LDI_ACPI_EC2_H0) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC2_H0_LDN_Msk (_UINT16_(0x3F) << ESPI_MEMORY_BAR_LDI_ACPI_EC2_H0_LDN_Pos) /* (ESPI_MEMORY_BAR_LDI_ACPI_EC2_H0) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC2_H0_LDN(value) (ESPI_MEMORY_BAR_LDI_ACPI_EC2_H0_LDN_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDI_ACPI_EC2_H0_LDN_Pos)) /* Assigment of value for LDN in the ESPI_MEMORY_BAR_LDI_ACPI_EC2_H0 register */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC2_H0_Msk   _UINT16_(0x3FFF)                                     /* (ESPI_MEMORY_BAR_LDI_ACPI_EC2_H0) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDI_ACPI_EC2_H1 : (ESPI_MEMORY Offset: 0x150) (R/W 16) ACPI EC Channel 2 Memory BAR (MSB) -------- */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC2_H1_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_LDI_ACPI_EC2_H1) ACPI EC Channel 2 Memory BAR (MSB)  Reset Value */

#define ESPI_MEMORY_BAR_LDI_ACPI_EC2_H1_VIR_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDI_ACPI_EC2_H1) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC2_H1_VIR_Msk (_UINT16_(0x1) << ESPI_MEMORY_BAR_LDI_ACPI_EC2_H1_VIR_Pos) /* (ESPI_MEMORY_BAR_LDI_ACPI_EC2_H1) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC2_H1_VIR(value) (ESPI_MEMORY_BAR_LDI_ACPI_EC2_H1_VIR_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDI_ACPI_EC2_H1_VIR_Pos)) /* Assigment of value for VIR in the ESPI_MEMORY_BAR_LDI_ACPI_EC2_H1 register */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC2_H1_Msk   _UINT16_(0x0001)                                     /* (ESPI_MEMORY_BAR_LDI_ACPI_EC2_H1) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDI_ACPI_EC3_H0 : (ESPI_MEMORY Offset: 0x158) (R/W 32) ACPI EC Channel 3 Memory BAR -------- */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC3_H0_RESETVALUE _UINT32_(0x507)                                      /*  (ESPI_MEMORY_BAR_LDI_ACPI_EC3_H0) ACPI EC Channel 3 Memory BAR  Reset Value */

#define ESPI_MEMORY_BAR_LDI_ACPI_EC3_H0_MASK_Pos _UINT32_(0)                                          /* (ESPI_MEMORY_BAR_LDI_ACPI_EC3_H0) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC3_H0_MASK_Msk (_UINT32_(0xFF) << ESPI_MEMORY_BAR_LDI_ACPI_EC3_H0_MASK_Pos) /* (ESPI_MEMORY_BAR_LDI_ACPI_EC3_H0) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC3_H0_MASK(value) (ESPI_MEMORY_BAR_LDI_ACPI_EC3_H0_MASK_Msk & (_UINT32_(value) << ESPI_MEMORY_BAR_LDI_ACPI_EC3_H0_MASK_Pos)) /* Assigment of value for MASK in the ESPI_MEMORY_BAR_LDI_ACPI_EC3_H0 register */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC3_H0_LDN_Pos _UINT32_(8)                                          /* (ESPI_MEMORY_BAR_LDI_ACPI_EC3_H0) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC3_H0_LDN_Msk (_UINT32_(0x3F) << ESPI_MEMORY_BAR_LDI_ACPI_EC3_H0_LDN_Pos) /* (ESPI_MEMORY_BAR_LDI_ACPI_EC3_H0) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC3_H0_LDN(value) (ESPI_MEMORY_BAR_LDI_ACPI_EC3_H0_LDN_Msk & (_UINT32_(value) << ESPI_MEMORY_BAR_LDI_ACPI_EC3_H0_LDN_Pos)) /* Assigment of value for LDN in the ESPI_MEMORY_BAR_LDI_ACPI_EC3_H0 register */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC3_H0_VIR_Pos _UINT32_(16)                                         /* (ESPI_MEMORY_BAR_LDI_ACPI_EC3_H0) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC3_H0_VIR_Msk (_UINT32_(0x1) << ESPI_MEMORY_BAR_LDI_ACPI_EC3_H0_VIR_Pos) /* (ESPI_MEMORY_BAR_LDI_ACPI_EC3_H0) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC3_H0_VIR(value) (ESPI_MEMORY_BAR_LDI_ACPI_EC3_H0_VIR_Msk & (_UINT32_(value) << ESPI_MEMORY_BAR_LDI_ACPI_EC3_H0_VIR_Pos)) /* Assigment of value for VIR in the ESPI_MEMORY_BAR_LDI_ACPI_EC3_H0 register */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC3_H0_Msk   _UINT32_(0x00013FFF)                                 /* (ESPI_MEMORY_BAR_LDI_ACPI_EC3_H0) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDI_EM0_H0 : (ESPI_MEMORY Offset: 0x16C) (R/W 32) Embedded Memory Interface (EMI) 0 Memory Base Address -------- */
#define ESPI_MEMORY_BAR_LDI_EM0_H0_RESETVALUE _UINT32_(0x100F)                                     /*  (ESPI_MEMORY_BAR_LDI_EM0_H0) Embedded Memory Interface (EMI) 0 Memory Base Address  Reset Value */

#define ESPI_MEMORY_BAR_LDI_EM0_H0_MASK_Pos   _UINT32_(0)                                          /* (ESPI_MEMORY_BAR_LDI_EM0_H0) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_MEMORY_BAR_LDI_EM0_H0_MASK_Msk   (_UINT32_(0xFF) << ESPI_MEMORY_BAR_LDI_EM0_H0_MASK_Pos) /* (ESPI_MEMORY_BAR_LDI_EM0_H0) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_MEMORY_BAR_LDI_EM0_H0_MASK(value) (ESPI_MEMORY_BAR_LDI_EM0_H0_MASK_Msk & (_UINT32_(value) << ESPI_MEMORY_BAR_LDI_EM0_H0_MASK_Pos)) /* Assigment of value for MASK in the ESPI_MEMORY_BAR_LDI_EM0_H0 register */
#define ESPI_MEMORY_BAR_LDI_EM0_H0_LDN_Pos    _UINT32_(8)                                          /* (ESPI_MEMORY_BAR_LDI_EM0_H0) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_MEMORY_BAR_LDI_EM0_H0_LDN_Msk    (_UINT32_(0x3F) << ESPI_MEMORY_BAR_LDI_EM0_H0_LDN_Pos) /* (ESPI_MEMORY_BAR_LDI_EM0_H0) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_MEMORY_BAR_LDI_EM0_H0_LDN(value) (ESPI_MEMORY_BAR_LDI_EM0_H0_LDN_Msk & (_UINT32_(value) << ESPI_MEMORY_BAR_LDI_EM0_H0_LDN_Pos)) /* Assigment of value for LDN in the ESPI_MEMORY_BAR_LDI_EM0_H0 register */
#define ESPI_MEMORY_BAR_LDI_EM0_H0_VIR_Pos    _UINT32_(16)                                         /* (ESPI_MEMORY_BAR_LDI_EM0_H0) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_MEMORY_BAR_LDI_EM0_H0_VIR_Msk    (_UINT32_(0x1) << ESPI_MEMORY_BAR_LDI_EM0_H0_VIR_Pos) /* (ESPI_MEMORY_BAR_LDI_EM0_H0) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_MEMORY_BAR_LDI_EM0_H0_VIR(value) (ESPI_MEMORY_BAR_LDI_EM0_H0_VIR_Msk & (_UINT32_(value) << ESPI_MEMORY_BAR_LDI_EM0_H0_VIR_Pos)) /* Assigment of value for VIR in the ESPI_MEMORY_BAR_LDI_EM0_H0 register */
#define ESPI_MEMORY_BAR_LDI_EM0_H0_Msk        _UINT32_(0x00013FFF)                                 /* (ESPI_MEMORY_BAR_LDI_EM0_H0) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDI_EM1_H0 : (ESPI_MEMORY Offset: 0x176) (R/W 16) Embedded Memory Interface (EMI) 1 Memory Base Address (LSB) -------- */
#define ESPI_MEMORY_BAR_LDI_EM1_H0_RESETVALUE _UINT16_(0x110F)                                     /*  (ESPI_MEMORY_BAR_LDI_EM1_H0) Embedded Memory Interface (EMI) 1 Memory Base Address (LSB)  Reset Value */

#define ESPI_MEMORY_BAR_LDI_EM1_H0_MASK_Pos   _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDI_EM1_H0) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_MEMORY_BAR_LDI_EM1_H0_MASK_Msk   (_UINT16_(0xFF) << ESPI_MEMORY_BAR_LDI_EM1_H0_MASK_Pos) /* (ESPI_MEMORY_BAR_LDI_EM1_H0) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_MEMORY_BAR_LDI_EM1_H0_MASK(value) (ESPI_MEMORY_BAR_LDI_EM1_H0_MASK_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDI_EM1_H0_MASK_Pos)) /* Assigment of value for MASK in the ESPI_MEMORY_BAR_LDI_EM1_H0 register */
#define ESPI_MEMORY_BAR_LDI_EM1_H0_LDN_Pos    _UINT16_(8)                                          /* (ESPI_MEMORY_BAR_LDI_EM1_H0) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_MEMORY_BAR_LDI_EM1_H0_LDN_Msk    (_UINT16_(0x3F) << ESPI_MEMORY_BAR_LDI_EM1_H0_LDN_Pos) /* (ESPI_MEMORY_BAR_LDI_EM1_H0) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_MEMORY_BAR_LDI_EM1_H0_LDN(value) (ESPI_MEMORY_BAR_LDI_EM1_H0_LDN_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDI_EM1_H0_LDN_Pos)) /* Assigment of value for LDN in the ESPI_MEMORY_BAR_LDI_EM1_H0 register */
#define ESPI_MEMORY_BAR_LDI_EM1_H0_Msk        _UINT16_(0x3FFF)                                     /* (ESPI_MEMORY_BAR_LDI_EM1_H0) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDI_EM1_H1 : (ESPI_MEMORY Offset: 0x178) (R/W 16) Embedded Memory Interface (EMI) 1 Memory Base Address (MSB) -------- */
#define ESPI_MEMORY_BAR_LDI_EM1_H1_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_LDI_EM1_H1) Embedded Memory Interface (EMI) 1 Memory Base Address (MSB)  Reset Value */

#define ESPI_MEMORY_BAR_LDI_EM1_H1_VIR_Pos    _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDI_EM1_H1) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_MEMORY_BAR_LDI_EM1_H1_VIR_Msk    (_UINT16_(0x1) << ESPI_MEMORY_BAR_LDI_EM1_H1_VIR_Pos) /* (ESPI_MEMORY_BAR_LDI_EM1_H1) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_MEMORY_BAR_LDI_EM1_H1_VIR(value) (ESPI_MEMORY_BAR_LDI_EM1_H1_VIR_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDI_EM1_H1_VIR_Pos)) /* Assigment of value for VIR in the ESPI_MEMORY_BAR_LDI_EM1_H1 register */
#define ESPI_MEMORY_BAR_LDI_EM1_H1_Msk        _UINT16_(0x0001)                                     /* (ESPI_MEMORY_BAR_LDI_EM1_H1) Register Mask  */


/* -------- ESPI_MEMORY_BAR_SRAM0_H0 : (ESPI_MEMORY Offset: 0x1AC) (R/W 16) SRAM 0 Memory Base Address Config -------- */
#define ESPI_MEMORY_BAR_SRAM0_H0_RESETVALUE   _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_SRAM0_H0) SRAM 0 Memory Base Address Config  Reset Value */

#define ESPI_MEMORY_BAR_SRAM0_H0_VALID_Pos    _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_SRAM0_H0) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_MEMORY_BAR_SRAM0_H0_VALID_Msk    (_UINT16_(0x1) << ESPI_MEMORY_BAR_SRAM0_H0_VALID_Pos) /* (ESPI_MEMORY_BAR_SRAM0_H0) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_MEMORY_BAR_SRAM0_H0_VALID(value) (ESPI_MEMORY_BAR_SRAM0_H0_VALID_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_SRAM0_H0_VALID_Pos)) /* Assigment of value for VALID in the ESPI_MEMORY_BAR_SRAM0_H0 register */
#define ESPI_MEMORY_BAR_SRAM0_H0_ACCESS_Pos   _UINT16_(1)                                          /* (ESPI_MEMORY_BAR_SRAM0_H0) These 2 bits define the access type of access to this SRAM region.\n      3=Host has Read/write access to the region\n      2=Host has Write-only access to the region\n      1=Host has Read-only access to the region\n      0=Host has no access to this region Position */
#define ESPI_MEMORY_BAR_SRAM0_H0_ACCESS_Msk   (_UINT16_(0x3) << ESPI_MEMORY_BAR_SRAM0_H0_ACCESS_Pos) /* (ESPI_MEMORY_BAR_SRAM0_H0) These 2 bits define the access type of access to this SRAM region.\n      3=Host has Read/write access to the region\n      2=Host has Write-only access to the region\n      1=Host has Read-only access to the region\n      0=Host has no access to this region Mask */
#define ESPI_MEMORY_BAR_SRAM0_H0_ACCESS(value) (ESPI_MEMORY_BAR_SRAM0_H0_ACCESS_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_SRAM0_H0_ACCESS_Pos)) /* Assigment of value for ACCESS in the ESPI_MEMORY_BAR_SRAM0_H0 register */
#define ESPI_MEMORY_BAR_SRAM0_H0_SIZE_Pos     _UINT16_(4)                                          /* (ESPI_MEMORY_BAR_SRAM0_H0) This field defines the size of the region mapped from Host Memory address space into the internal address space, in powers of 2.\n      15=The region is 64KB in extent\n      14=The region is 32KB in extent\n      ...\n      1=The region is 2B in extent\n      0=The region is 1B in extent. Position */
#define ESPI_MEMORY_BAR_SRAM0_H0_SIZE_Msk     (_UINT16_(0xF) << ESPI_MEMORY_BAR_SRAM0_H0_SIZE_Pos) /* (ESPI_MEMORY_BAR_SRAM0_H0) This field defines the size of the region mapped from Host Memory address space into the internal address space, in powers of 2.\n      15=The region is 64KB in extent\n      14=The region is 32KB in extent\n      ...\n      1=The region is 2B in extent\n      0=The region is 1B in extent. Mask */
#define ESPI_MEMORY_BAR_SRAM0_H0_SIZE(value)  (ESPI_MEMORY_BAR_SRAM0_H0_SIZE_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_SRAM0_H0_SIZE_Pos)) /* Assigment of value for SIZE in the ESPI_MEMORY_BAR_SRAM0_H0 register */
#define ESPI_MEMORY_BAR_SRAM0_H0_Msk          _UINT16_(0x00F7)                                     /* (ESPI_MEMORY_BAR_SRAM0_H0) Register Mask  */


/* -------- ESPI_MEMORY_BAR_SRAM0_H1 : (ESPI_MEMORY Offset: 0x1AE) (R/W 16) SRAM 0 Memory Base Address LSB -------- */
#define ESPI_MEMORY_BAR_SRAM0_H1_RESETVALUE   _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_SRAM0_H1) SRAM 0 Memory Base Address LSB  Reset Value */

#define ESPI_MEMORY_BAR_SRAM0_H1_ADDR_Pos     _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_SRAM0_H1) This is the LSB of the 32-bit field that defines the base address of the internal memory region to which Host accesses\n      to the region starting at RAM eSPI Host Address are mapped. The least significant 2**RAM SIZE bits are ignored. Position */
#define ESPI_MEMORY_BAR_SRAM0_H1_ADDR_Msk     (_UINT16_(0xFFFF) << ESPI_MEMORY_BAR_SRAM0_H1_ADDR_Pos) /* (ESPI_MEMORY_BAR_SRAM0_H1) This is the LSB of the 32-bit field that defines the base address of the internal memory region to which Host accesses\n      to the region starting at RAM eSPI Host Address are mapped. The least significant 2**RAM SIZE bits are ignored. Mask */
#define ESPI_MEMORY_BAR_SRAM0_H1_ADDR(value)  (ESPI_MEMORY_BAR_SRAM0_H1_ADDR_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_SRAM0_H1_ADDR_Pos)) /* Assigment of value for ADDR in the ESPI_MEMORY_BAR_SRAM0_H1 register */
#define ESPI_MEMORY_BAR_SRAM0_H1_Msk          _UINT16_(0xFFFF)                                     /* (ESPI_MEMORY_BAR_SRAM0_H1) Register Mask  */


/* -------- ESPI_MEMORY_BAR_SRAM0_H2 : (ESPI_MEMORY Offset: 0x1B0) (R/W 32) SRAM 0 Memory Base Address MSB -------- */
#define ESPI_MEMORY_BAR_SRAM0_H2_RESETVALUE   _UINT32_(0x00)                                       /*  (ESPI_MEMORY_BAR_SRAM0_H2) SRAM 0 Memory Base Address MSB  Reset Value */

#define ESPI_MEMORY_BAR_SRAM0_H2_ADDR_Pos     _UINT32_(0)                                          /* (ESPI_MEMORY_BAR_SRAM0_H2) This is the MSB of the 32-bit field that defines the base address of the internal memory region to which Host accesses\n      to the region starting at RAM eSPI Host Address are mapped. The least significant 2**RAM SIZE bits are ignored. Position */
#define ESPI_MEMORY_BAR_SRAM0_H2_ADDR_Msk     (_UINT32_(0xFFFF) << ESPI_MEMORY_BAR_SRAM0_H2_ADDR_Pos) /* (ESPI_MEMORY_BAR_SRAM0_H2) This is the MSB of the 32-bit field that defines the base address of the internal memory region to which Host accesses\n      to the region starting at RAM eSPI Host Address are mapped. The least significant 2**RAM SIZE bits are ignored. Mask */
#define ESPI_MEMORY_BAR_SRAM0_H2_ADDR(value)  (ESPI_MEMORY_BAR_SRAM0_H2_ADDR_Msk & (_UINT32_(value) << ESPI_MEMORY_BAR_SRAM0_H2_ADDR_Pos)) /* Assigment of value for ADDR in the ESPI_MEMORY_BAR_SRAM0_H2 register */
#define ESPI_MEMORY_BAR_SRAM0_H2_Msk          _UINT32_(0x0000FFFF)                                 /* (ESPI_MEMORY_BAR_SRAM0_H2) Register Mask  */


/* -------- ESPI_MEMORY_BAR_SRAM1_H0 : (ESPI_MEMORY Offset: 0x1B6) (R/W 16) SRAM 1 Memory Base Address Config -------- */
#define ESPI_MEMORY_BAR_SRAM1_H0_RESETVALUE   _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_SRAM1_H0) SRAM 1 Memory Base Address Config  Reset Value */

#define ESPI_MEMORY_BAR_SRAM1_H0_VALID_Pos    _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_SRAM1_H0) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_MEMORY_BAR_SRAM1_H0_VALID_Msk    (_UINT16_(0x1) << ESPI_MEMORY_BAR_SRAM1_H0_VALID_Pos) /* (ESPI_MEMORY_BAR_SRAM1_H0) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_MEMORY_BAR_SRAM1_H0_VALID(value) (ESPI_MEMORY_BAR_SRAM1_H0_VALID_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_SRAM1_H0_VALID_Pos)) /* Assigment of value for VALID in the ESPI_MEMORY_BAR_SRAM1_H0 register */
#define ESPI_MEMORY_BAR_SRAM1_H0_ACCESS_Pos   _UINT16_(1)                                          /* (ESPI_MEMORY_BAR_SRAM1_H0) These 2 bits define the access type of access to this SRAM region.\n      3=Host has Read/write access to the region\n      2=Host has Write-only access to the region\n      1=Host has Read-only access to the region\n      0=Host has no access to this region Position */
#define ESPI_MEMORY_BAR_SRAM1_H0_ACCESS_Msk   (_UINT16_(0x3) << ESPI_MEMORY_BAR_SRAM1_H0_ACCESS_Pos) /* (ESPI_MEMORY_BAR_SRAM1_H0) These 2 bits define the access type of access to this SRAM region.\n      3=Host has Read/write access to the region\n      2=Host has Write-only access to the region\n      1=Host has Read-only access to the region\n      0=Host has no access to this region Mask */
#define ESPI_MEMORY_BAR_SRAM1_H0_ACCESS(value) (ESPI_MEMORY_BAR_SRAM1_H0_ACCESS_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_SRAM1_H0_ACCESS_Pos)) /* Assigment of value for ACCESS in the ESPI_MEMORY_BAR_SRAM1_H0 register */
#define ESPI_MEMORY_BAR_SRAM1_H0_SIZE_Pos     _UINT16_(4)                                          /* (ESPI_MEMORY_BAR_SRAM1_H0) This field defines the size of the region mapped from Host Memory address space into the internal address space, in powers of 2.\n      15=The region is 64KB in extent\n      14=The region is 32KB in extent\n      ...\n      1=The region is 2B in extent\n      0=The region is 1B in extent. Position */
#define ESPI_MEMORY_BAR_SRAM1_H0_SIZE_Msk     (_UINT16_(0xF) << ESPI_MEMORY_BAR_SRAM1_H0_SIZE_Pos) /* (ESPI_MEMORY_BAR_SRAM1_H0) This field defines the size of the region mapped from Host Memory address space into the internal address space, in powers of 2.\n      15=The region is 64KB in extent\n      14=The region is 32KB in extent\n      ...\n      1=The region is 2B in extent\n      0=The region is 1B in extent. Mask */
#define ESPI_MEMORY_BAR_SRAM1_H0_SIZE(value)  (ESPI_MEMORY_BAR_SRAM1_H0_SIZE_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_SRAM1_H0_SIZE_Pos)) /* Assigment of value for SIZE in the ESPI_MEMORY_BAR_SRAM1_H0 register */
#define ESPI_MEMORY_BAR_SRAM1_H0_Msk          _UINT16_(0x00F7)                                     /* (ESPI_MEMORY_BAR_SRAM1_H0) Register Mask  */


/* -------- ESPI_MEMORY_BAR_SRAM1_H1 : (ESPI_MEMORY Offset: 0x1B8) (R/W 16) SRAM 1 Memory Base Address LSB -------- */
#define ESPI_MEMORY_BAR_SRAM1_H1_RESETVALUE   _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_SRAM1_H1) SRAM 1 Memory Base Address LSB  Reset Value */

#define ESPI_MEMORY_BAR_SRAM1_H1_ADDR_Pos     _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_SRAM1_H1) This is the LSB of the 32-bit field that defines the base address of the internal memory region to which Host accesses\n      to the region starting at RAM eSPI Host Address are mapped. The least significant 2**RAM SIZE bits are ignored. Position */
#define ESPI_MEMORY_BAR_SRAM1_H1_ADDR_Msk     (_UINT16_(0xFFFF) << ESPI_MEMORY_BAR_SRAM1_H1_ADDR_Pos) /* (ESPI_MEMORY_BAR_SRAM1_H1) This is the LSB of the 32-bit field that defines the base address of the internal memory region to which Host accesses\n      to the region starting at RAM eSPI Host Address are mapped. The least significant 2**RAM SIZE bits are ignored. Mask */
#define ESPI_MEMORY_BAR_SRAM1_H1_ADDR(value)  (ESPI_MEMORY_BAR_SRAM1_H1_ADDR_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_SRAM1_H1_ADDR_Pos)) /* Assigment of value for ADDR in the ESPI_MEMORY_BAR_SRAM1_H1 register */
#define ESPI_MEMORY_BAR_SRAM1_H1_Msk          _UINT16_(0xFFFF)                                     /* (ESPI_MEMORY_BAR_SRAM1_H1) Register Mask  */


/* -------- ESPI_MEMORY_BAR_SRAM1_H2 : (ESPI_MEMORY Offset: 0x1BA) (R/W 16) SRAM 1 Memory Base Address MSB -------- */
#define ESPI_MEMORY_BAR_SRAM1_H2_RESETVALUE   _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_SRAM1_H2) SRAM 1 Memory Base Address MSB  Reset Value */

#define ESPI_MEMORY_BAR_SRAM1_H2_ADDR_Pos     _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_SRAM1_H2) This the MSB of the 32-bit field that defines the base address of the internal memory region to which Host accesses\n      to the region starting at RAM eSPI Host Address are mapped. The least significant 2**RAM SIZE bits are ignored. Position */
#define ESPI_MEMORY_BAR_SRAM1_H2_ADDR_Msk     (_UINT16_(0xFFFF) << ESPI_MEMORY_BAR_SRAM1_H2_ADDR_Pos) /* (ESPI_MEMORY_BAR_SRAM1_H2) This the MSB of the 32-bit field that defines the base address of the internal memory region to which Host accesses\n      to the region starting at RAM eSPI Host Address are mapped. The least significant 2**RAM SIZE bits are ignored. Mask */
#define ESPI_MEMORY_BAR_SRAM1_H2_ADDR(value)  (ESPI_MEMORY_BAR_SRAM1_H2_ADDR_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_SRAM1_H2_ADDR_Pos)) /* Assigment of value for ADDR in the ESPI_MEMORY_BAR_SRAM1_H2 register */
#define ESPI_MEMORY_BAR_SRAM1_H2_Msk          _UINT16_(0xFFFF)                                     /* (ESPI_MEMORY_BAR_SRAM1_H2) Register Mask  */


/* -------- ESPI_MEMORY_BM_STS : (ESPI_MEMORY Offset: 0x200) (R/W 32) Bus Master Status Register -------- */
#define ESPI_MEMORY_BM_STS_RESETVALUE         _UINT32_(0x00)                                       /*  (ESPI_MEMORY_BM_STS) Bus Master Status Register  Reset Value */

#define ESPI_MEMORY_BM_STS_TX_DONE1_Pos       _UINT32_(0)                                          /* (ESPI_MEMORY_BM_STS) This bit is set to '1' when a START transfer on Bus Master Channel 1 has completed, and occurs simultaneously with\n      the clearing of the BM1_BUSY bit. This may happen normally, but it is also guaranteed to happen if any of the Error bits in this\n      register section (bits[11:2]) is set by an error condition. At the time that this bit is set to '1', the Error bits are guaranteed\n      to be in their final states, and can be examined. Firmware is required to clear this bit, by writing '1' to this bit position, before\n      altering any BM1 registers or making a new START request, otherwise interrupts from this block will be unreliable. (R/WC) Position */
#define ESPI_MEMORY_BM_STS_TX_DONE1_Msk       (_UINT32_(0x1) << ESPI_MEMORY_BM_STS_TX_DONE1_Pos)   /* (ESPI_MEMORY_BM_STS) This bit is set to '1' when a START transfer on Bus Master Channel 1 has completed, and occurs simultaneously with\n      the clearing of the BM1_BUSY bit. This may happen normally, but it is also guaranteed to happen if any of the Error bits in this\n      register section (bits[11:2]) is set by an error condition. At the time that this bit is set to '1', the Error bits are guaranteed\n      to be in their final states, and can be examined. Firmware is required to clear this bit, by writing '1' to this bit position, before\n      altering any BM1 registers or making a new START request, otherwise interrupts from this block will be unreliable. (R/WC) Mask */
#define ESPI_MEMORY_BM_STS_TX_DONE1(value)    (ESPI_MEMORY_BM_STS_TX_DONE1_Msk & (_UINT32_(value) << ESPI_MEMORY_BM_STS_TX_DONE1_Pos)) /* Assigment of value for TX_DONE1 in the ESPI_MEMORY_BM_STS register */
#define ESPI_MEMORY_BM_STS_BUSY1_Pos          _UINT32_(1)                                          /* (ESPI_MEMORY_BM_STS) Hardware sets this bit to 1 when the control bit BM1_START in the Bus Master 1 Control Register is written with a 1.\n      This bit is cleared when the transfer completes. This may happen normally, but it is guaranteed to happen also if any of the Error bits\n      in this register section (bits[11:2]) is set by an error condition. Position */
#define ESPI_MEMORY_BM_STS_BUSY1_Msk          (_UINT32_(0x1) << ESPI_MEMORY_BM_STS_BUSY1_Pos)      /* (ESPI_MEMORY_BM_STS) Hardware sets this bit to 1 when the control bit BM1_START in the Bus Master 1 Control Register is written with a 1.\n      This bit is cleared when the transfer completes. This may happen normally, but it is guaranteed to happen also if any of the Error bits\n      in this register section (bits[11:2]) is set by an error condition. Mask */
#define ESPI_MEMORY_BM_STS_BUSY1(value)       (ESPI_MEMORY_BM_STS_BUSY1_Msk & (_UINT32_(value) << ESPI_MEMORY_BM_STS_BUSY1_Pos)) /* Assigment of value for BUSY1 in the ESPI_MEMORY_BM_STS register */
#define ESPI_MEMORY_BM_STS_ABORT1_EC_Pos      _UINT32_(2)                                          /* (ESPI_MEMORY_BM_STS) This bit is set when the control bit BM1_ABORT in the Bus Master 1 Control Register is written with a 1 during an active\n      transfer. (R/WC) Position */
#define ESPI_MEMORY_BM_STS_ABORT1_EC_Msk      (_UINT32_(0x1) << ESPI_MEMORY_BM_STS_ABORT1_EC_Pos)  /* (ESPI_MEMORY_BM_STS) This bit is set when the control bit BM1_ABORT in the Bus Master 1 Control Register is written with a 1 during an active\n      transfer. (R/WC) Mask */
#define ESPI_MEMORY_BM_STS_ABORT1_EC(value)   (ESPI_MEMORY_BM_STS_ABORT1_EC_Msk & (_UINT32_(value) << ESPI_MEMORY_BM_STS_ABORT1_EC_Pos)) /* Assigment of value for ABORT1_EC in the ESPI_MEMORY_BM_STS register */
#define ESPI_MEMORY_BM_STS_ABORT1_H_Pos       _UINT32_(3)                                          /* (ESPI_MEMORY_BM_STS) A '1' in this bit indicates that the last requested Mastering operation was aborted because Bus Mastering has been\n      disabled by the Host. Bus Mastering is disabled whenever the Peripheral Channel Mastering Enable bit in that register is '0', or the\n      Peripheral Channel Enable bit is '0'. (R/WC) Position */
#define ESPI_MEMORY_BM_STS_ABORT1_H_Msk       (_UINT32_(0x1) << ESPI_MEMORY_BM_STS_ABORT1_H_Pos)   /* (ESPI_MEMORY_BM_STS) A '1' in this bit indicates that the last requested Mastering operation was aborted because Bus Mastering has been\n      disabled by the Host. Bus Mastering is disabled whenever the Peripheral Channel Mastering Enable bit in that register is '0', or the\n      Peripheral Channel Enable bit is '0'. (R/WC) Mask */
#define ESPI_MEMORY_BM_STS_ABORT1_H(value)    (ESPI_MEMORY_BM_STS_ABORT1_H_Msk & (_UINT32_(value) << ESPI_MEMORY_BM_STS_ABORT1_H_Pos)) /* Assigment of value for ABORT1_H in the ESPI_MEMORY_BM_STS register */
#define ESPI_MEMORY_BM_STS_ABORT_CH2_ERR_Pos  _UINT32_(4)                                          /* (ESPI_MEMORY_BM_STS) This bit is set if an error occurs on Bus Master Channel 2 while a Channel 1 transfer is in progress, if the two channels\n      are linked. Linkage occurs when bit BM1_WAIT_BM2_NOT_BUSY in register Bus Master 1 Control Register is set to '1'. No traffic will occur\n      from this channel before the error is posted and the BM1_TRANSFER_DONE bit is set. (R/WC) Position */
#define ESPI_MEMORY_BM_STS_ABORT_CH2_ERR_Msk  (_UINT32_(0x1) << ESPI_MEMORY_BM_STS_ABORT_CH2_ERR_Pos) /* (ESPI_MEMORY_BM_STS) This bit is set if an error occurs on Bus Master Channel 2 while a Channel 1 transfer is in progress, if the two channels\n      are linked. Linkage occurs when bit BM1_WAIT_BM2_NOT_BUSY in register Bus Master 1 Control Register is set to '1'. No traffic will occur\n      from this channel before the error is posted and the BM1_TRANSFER_DONE bit is set. (R/WC) Mask */
#define ESPI_MEMORY_BM_STS_ABORT_CH2_ERR(value) (ESPI_MEMORY_BM_STS_ABORT_CH2_ERR_Msk & (_UINT32_(value) << ESPI_MEMORY_BM_STS_ABORT_CH2_ERR_Pos)) /* Assigment of value for ABORT_CH2_ERR in the ESPI_MEMORY_BM_STS register */
#define ESPI_MEMORY_BM_STS_STRT1_OVRFLW_Pos   _UINT32_(5)                                          /* (ESPI_MEMORY_BM_STS) This bit is set if the bit BM1_START in the Bus Master 1 Control Register is written with a 1 while the bit BM1_BUSY is 1.\n      This condition immediately halts the transfer in progress also (BM1_TRANSFER_DONE=1). (R/WC) Position */
#define ESPI_MEMORY_BM_STS_STRT1_OVRFLW_Msk   (_UINT32_(0x1) << ESPI_MEMORY_BM_STS_STRT1_OVRFLW_Pos) /* (ESPI_MEMORY_BM_STS) This bit is set if the bit BM1_START in the Bus Master 1 Control Register is written with a 1 while the bit BM1_BUSY is 1.\n      This condition immediately halts the transfer in progress also (BM1_TRANSFER_DONE=1). (R/WC) Mask */
#define ESPI_MEMORY_BM_STS_STRT1_OVRFLW(value) (ESPI_MEMORY_BM_STS_STRT1_OVRFLW_Msk & (_UINT32_(value) << ESPI_MEMORY_BM_STS_STRT1_OVRFLW_Pos)) /* Assigment of value for STRT1_OVRFLW in the ESPI_MEMORY_BM_STS register */
#define ESPI_MEMORY_BM_STS_DAT1_OVRUN_Pos     _UINT32_(6)                                          /* (ESPI_MEMORY_BM_STS) This bit is set if the transfer on Bus Master Channel 1 completed but too many bytes were delivered by the eSPI Host.\n      Some of the data will not be delivered on the internal bus. (R/WC) Position */
#define ESPI_MEMORY_BM_STS_DAT1_OVRUN_Msk     (_UINT32_(0x1) << ESPI_MEMORY_BM_STS_DAT1_OVRUN_Pos) /* (ESPI_MEMORY_BM_STS) This bit is set if the transfer on Bus Master Channel 1 completed but too many bytes were delivered by the eSPI Host.\n      Some of the data will not be delivered on the internal bus. (R/WC) Mask */
#define ESPI_MEMORY_BM_STS_DAT1_OVRUN(value)  (ESPI_MEMORY_BM_STS_DAT1_OVRUN_Msk & (_UINT32_(value) << ESPI_MEMORY_BM_STS_DAT1_OVRUN_Pos)) /* Assigment of value for DAT1_OVRUN in the ESPI_MEMORY_BM_STS register */
#define ESPI_MEMORY_BM_STS_INCMPL1_Pos        _UINT32_(7)                                          /* (ESPI_MEMORY_BM_STS) This bit is set if the transfer on Bus Master Channel 1 completed but an insufficient number of bytes were transferred.\n      Some of the data will not be delivered on the internal bus. (R/WC) Position */
#define ESPI_MEMORY_BM_STS_INCMPL1_Msk        (_UINT32_(0x1) << ESPI_MEMORY_BM_STS_INCMPL1_Pos)    /* (ESPI_MEMORY_BM_STS) This bit is set if the transfer on Bus Master Channel 1 completed but an insufficient number of bytes were transferred.\n      Some of the data will not be delivered on the internal bus. (R/WC) Mask */
#define ESPI_MEMORY_BM_STS_INCMPL1(value)     (ESPI_MEMORY_BM_STS_INCMPL1_Msk & (_UINT32_(value) << ESPI_MEMORY_BM_STS_INCMPL1_Pos)) /* Assigment of value for INCMPL1 in the ESPI_MEMORY_BM_STS register */
#define ESPI_MEMORY_BM_STS_FAIL1_Pos          _UINT32_(8)                                          /* (ESPI_MEMORY_BM_STS) This bit is set if a Layer 3 transaction from Bus Master Channel 1 completes with an Unsuccessful Completion packet from\n      the eSPI Host. For example, this will happen if the START request attempts to read from a forbidden or unmapped address in System Memory.\n      Bad Writes, however, cannot be flagged this way, and will be silently dropped by the eSPI Host without setting this bit. (R/WC) Position */
#define ESPI_MEMORY_BM_STS_FAIL1_Msk          (_UINT32_(0x1) << ESPI_MEMORY_BM_STS_FAIL1_Pos)      /* (ESPI_MEMORY_BM_STS) This bit is set if a Layer 3 transaction from Bus Master Channel 1 completes with an Unsuccessful Completion packet from\n      the eSPI Host. For example, this will happen if the START request attempts to read from a forbidden or unmapped address in System Memory.\n      Bad Writes, however, cannot be flagged this way, and will be silently dropped by the eSPI Host without setting this bit. (R/WC) Mask */
#define ESPI_MEMORY_BM_STS_FAIL1(value)       (ESPI_MEMORY_BM_STS_FAIL1_Msk & (_UINT32_(value) << ESPI_MEMORY_BM_STS_FAIL1_Pos)) /* Assigment of value for FAIL1 in the ESPI_MEMORY_BM_STS register */
#define ESPI_MEMORY_BM_STS_INTR1_BUS_ERR_Pos  _UINT32_(9)                                          /* (ESPI_MEMORY_BM_STS) This bit is set if a transfer on Bus Master Channel 1 is terminated due to a bus error internal to the EC. This can happen\n      if an invalid address is provided in the Bus Master 1 internal Address register. (R/WC) Position */
#define ESPI_MEMORY_BM_STS_INTR1_BUS_ERR_Msk  (_UINT32_(0x1) << ESPI_MEMORY_BM_STS_INTR1_BUS_ERR_Pos) /* (ESPI_MEMORY_BM_STS) This bit is set if a transfer on Bus Master Channel 1 is terminated due to a bus error internal to the EC. This can happen\n      if an invalid address is provided in the Bus Master 1 internal Address register. (R/WC) Mask */
#define ESPI_MEMORY_BM_STS_INTR1_BUS_ERR(value) (ESPI_MEMORY_BM_STS_INTR1_BUS_ERR_Msk & (_UINT32_(value) << ESPI_MEMORY_BM_STS_INTR1_BUS_ERR_Pos)) /* Assigment of value for INTR1_BUS_ERR in the ESPI_MEMORY_BM_STS register */
#define ESPI_MEMORY_BM_STS_BAD1_REQ_Pos       _UINT32_(11)                                         /* (ESPI_MEMORY_BM_STS) This bit is set, and the START request is terminated immediately (BM1_TRANSFER_DONE=1) without triggering traffic, if\n      register contents are invalid at the time the BM1_START bit is written to '1' by firmware.  (R/WC)\n      Examples of a Bad Request are:\n      Length of zero\n      Length greater than 4K (1000h)\n      Host Address and Length together specifying a request that crosses a 4KByte boundary. This might violate the Scatter/Gather structure\n      of the Host memory, so is not allowed. Position */
#define ESPI_MEMORY_BM_STS_BAD1_REQ_Msk       (_UINT32_(0x1) << ESPI_MEMORY_BM_STS_BAD1_REQ_Pos)   /* (ESPI_MEMORY_BM_STS) This bit is set, and the START request is terminated immediately (BM1_TRANSFER_DONE=1) without triggering traffic, if\n      register contents are invalid at the time the BM1_START bit is written to '1' by firmware.  (R/WC)\n      Examples of a Bad Request are:\n      Length of zero\n      Length greater than 4K (1000h)\n      Host Address and Length together specifying a request that crosses a 4KByte boundary. This might violate the Scatter/Gather structure\n      of the Host memory, so is not allowed. Mask */
#define ESPI_MEMORY_BM_STS_BAD1_REQ(value)    (ESPI_MEMORY_BM_STS_BAD1_REQ_Msk & (_UINT32_(value) << ESPI_MEMORY_BM_STS_BAD1_REQ_Pos)) /* Assigment of value for BAD1_REQ in the ESPI_MEMORY_BM_STS register */
#define ESPI_MEMORY_BM_STS_TX_DONE2_Pos       _UINT32_(16)                                         /* (ESPI_MEMORY_BM_STS) This bit is set to '1' when a START transfer on Bus Master Channel 2 has completed, and occurs simultaneously with the\n      clearing of the BM2_BUSY bit. This may happen normally, but it is guaranteed to happen also if any of the Error bits in this register\n      section (bits[27:18]) is set by an error condition. At the time that this bit is set to '1', the Error bits are guaranteed to be in their\n      final states, and can be examined. (R/WC) Position */
#define ESPI_MEMORY_BM_STS_TX_DONE2_Msk       (_UINT32_(0x1) << ESPI_MEMORY_BM_STS_TX_DONE2_Pos)   /* (ESPI_MEMORY_BM_STS) This bit is set to '1' when a START transfer on Bus Master Channel 2 has completed, and occurs simultaneously with the\n      clearing of the BM2_BUSY bit. This may happen normally, but it is guaranteed to happen also if any of the Error bits in this register\n      section (bits[27:18]) is set by an error condition. At the time that this bit is set to '1', the Error bits are guaranteed to be in their\n      final states, and can be examined. (R/WC) Mask */
#define ESPI_MEMORY_BM_STS_TX_DONE2(value)    (ESPI_MEMORY_BM_STS_TX_DONE2_Msk & (_UINT32_(value) << ESPI_MEMORY_BM_STS_TX_DONE2_Pos)) /* Assigment of value for TX_DONE2 in the ESPI_MEMORY_BM_STS register */
#define ESPI_MEMORY_BM_STS_BUSY2_Pos          _UINT32_(17)                                         /* (ESPI_MEMORY_BM_STS) Hardware sets this bit to 1 when the control bit BM2_START in the Bus Master 2 Control Register is written with a 1.\n      This bit is cleared when the transfer completes. This may happen normally, but it is guaranteed to happen also if any of the Error bits\n      in this register section (bits[27:18]) is set by an error condition. Position */
#define ESPI_MEMORY_BM_STS_BUSY2_Msk          (_UINT32_(0x1) << ESPI_MEMORY_BM_STS_BUSY2_Pos)      /* (ESPI_MEMORY_BM_STS) Hardware sets this bit to 1 when the control bit BM2_START in the Bus Master 2 Control Register is written with a 1.\n      This bit is cleared when the transfer completes. This may happen normally, but it is guaranteed to happen also if any of the Error bits\n      in this register section (bits[27:18]) is set by an error condition. Mask */
#define ESPI_MEMORY_BM_STS_BUSY2(value)       (ESPI_MEMORY_BM_STS_BUSY2_Msk & (_UINT32_(value) << ESPI_MEMORY_BM_STS_BUSY2_Pos)) /* Assigment of value for BUSY2 in the ESPI_MEMORY_BM_STS register */
#define ESPI_MEMORY_BM_STS_ABORT2_EC_Pos      _UINT32_(18)                                         /* (ESPI_MEMORY_BM_STS) This bit is set when the control bit BM2_ABORT in the Bus Master 2 Control Register is written with a 1 during an active transfer. (R/WC) Position */
#define ESPI_MEMORY_BM_STS_ABORT2_EC_Msk      (_UINT32_(0x1) << ESPI_MEMORY_BM_STS_ABORT2_EC_Pos)  /* (ESPI_MEMORY_BM_STS) This bit is set when the control bit BM2_ABORT in the Bus Master 2 Control Register is written with a 1 during an active transfer. (R/WC) Mask */
#define ESPI_MEMORY_BM_STS_ABORT2_EC(value)   (ESPI_MEMORY_BM_STS_ABORT2_EC_Msk & (_UINT32_(value) << ESPI_MEMORY_BM_STS_ABORT2_EC_Pos)) /* Assigment of value for ABORT2_EC in the ESPI_MEMORY_BM_STS register */
#define ESPI_MEMORY_BM_STS_ABORT2_H_Pos       _UINT32_(19)                                         /* (ESPI_MEMORY_BM_STS) A '1' in this bit indicates that the last requested Mastering operation was aborted because Bus Mastering has been disabled\n      by the Host. Bus Mastering is disabled whenever the Peripheral Channel Mastering Enable bit in that register is '0', or the Peripheral\n      Channel Enable bit is '0'. (R/WC) Position */
#define ESPI_MEMORY_BM_STS_ABORT2_H_Msk       (_UINT32_(0x1) << ESPI_MEMORY_BM_STS_ABORT2_H_Pos)   /* (ESPI_MEMORY_BM_STS) A '1' in this bit indicates that the last requested Mastering operation was aborted because Bus Mastering has been disabled\n      by the Host. Bus Mastering is disabled whenever the Peripheral Channel Mastering Enable bit in that register is '0', or the Peripheral\n      Channel Enable bit is '0'. (R/WC) Mask */
#define ESPI_MEMORY_BM_STS_ABORT2_H(value)    (ESPI_MEMORY_BM_STS_ABORT2_H_Msk & (_UINT32_(value) << ESPI_MEMORY_BM_STS_ABORT2_H_Pos)) /* Assigment of value for ABORT2_H in the ESPI_MEMORY_BM_STS register */
#define ESPI_MEMORY_BM_STS_ABORT_CH1_ERR_Pos  _UINT32_(20)                                         /* (ESPI_MEMORY_BM_STS) This bit is set if an error occurs on Bus Master Channel 1 while a Channel 2 transfer is in progress, if the two channels\n      are linked. Linkage occurs when bit BM2_WAIT_BM1_NOT_BUSY in register Bus Master 2 Control Register is set to '1'. No traffic will occur\n      from this channel before the error is posted and the BM2_TRANSFER_DONE bit is set. (R/WC) Position */
#define ESPI_MEMORY_BM_STS_ABORT_CH1_ERR_Msk  (_UINT32_(0x1) << ESPI_MEMORY_BM_STS_ABORT_CH1_ERR_Pos) /* (ESPI_MEMORY_BM_STS) This bit is set if an error occurs on Bus Master Channel 1 while a Channel 2 transfer is in progress, if the two channels\n      are linked. Linkage occurs when bit BM2_WAIT_BM1_NOT_BUSY in register Bus Master 2 Control Register is set to '1'. No traffic will occur\n      from this channel before the error is posted and the BM2_TRANSFER_DONE bit is set. (R/WC) Mask */
#define ESPI_MEMORY_BM_STS_ABORT_CH1_ERR(value) (ESPI_MEMORY_BM_STS_ABORT_CH1_ERR_Msk & (_UINT32_(value) << ESPI_MEMORY_BM_STS_ABORT_CH1_ERR_Pos)) /* Assigment of value for ABORT_CH1_ERR in the ESPI_MEMORY_BM_STS register */
#define ESPI_MEMORY_BM_STS_STRT2_OVRFLW_Pos   _UINT32_(21)                                         /* (ESPI_MEMORY_BM_STS) This bit is set if the bit BM2_START in the Bus Master 2 Control Register is written with a 1 while the bit BM2_BUSY is 1.\n      This condition immediately halts the transfer in progress also (BM2_TRANSFER_DONE=1). (R/WC) Position */
#define ESPI_MEMORY_BM_STS_STRT2_OVRFLW_Msk   (_UINT32_(0x1) << ESPI_MEMORY_BM_STS_STRT2_OVRFLW_Pos) /* (ESPI_MEMORY_BM_STS) This bit is set if the bit BM2_START in the Bus Master 2 Control Register is written with a 1 while the bit BM2_BUSY is 1.\n      This condition immediately halts the transfer in progress also (BM2_TRANSFER_DONE=1). (R/WC) Mask */
#define ESPI_MEMORY_BM_STS_STRT2_OVRFLW(value) (ESPI_MEMORY_BM_STS_STRT2_OVRFLW_Msk & (_UINT32_(value) << ESPI_MEMORY_BM_STS_STRT2_OVRFLW_Pos)) /* Assigment of value for STRT2_OVRFLW in the ESPI_MEMORY_BM_STS register */
#define ESPI_MEMORY_BM_STS_DAT2_OVRUN_Pos     _UINT32_(22)                                         /* (ESPI_MEMORY_BM_STS) This bit is set if the transfer on Bus Master Channel 2 completed but too many bytes were delivered by the eSPI Host.\n      Some of the data will not be delivered on the internal bus. (R/WC) Position */
#define ESPI_MEMORY_BM_STS_DAT2_OVRUN_Msk     (_UINT32_(0x1) << ESPI_MEMORY_BM_STS_DAT2_OVRUN_Pos) /* (ESPI_MEMORY_BM_STS) This bit is set if the transfer on Bus Master Channel 2 completed but too many bytes were delivered by the eSPI Host.\n      Some of the data will not be delivered on the internal bus. (R/WC) Mask */
#define ESPI_MEMORY_BM_STS_DAT2_OVRUN(value)  (ESPI_MEMORY_BM_STS_DAT2_OVRUN_Msk & (_UINT32_(value) << ESPI_MEMORY_BM_STS_DAT2_OVRUN_Pos)) /* Assigment of value for DAT2_OVRUN in the ESPI_MEMORY_BM_STS register */
#define ESPI_MEMORY_BM_STS_INCMPL2_Pos        _UINT32_(23)                                         /* (ESPI_MEMORY_BM_STS) This bit is set if the transfer on Bus Master Channel 2 completed but an insufficient number of bytes were transferred.\n      Some of the data will not be delivered on the internal bus. (R/WC) Position */
#define ESPI_MEMORY_BM_STS_INCMPL2_Msk        (_UINT32_(0x1) << ESPI_MEMORY_BM_STS_INCMPL2_Pos)    /* (ESPI_MEMORY_BM_STS) This bit is set if the transfer on Bus Master Channel 2 completed but an insufficient number of bytes were transferred.\n      Some of the data will not be delivered on the internal bus. (R/WC) Mask */
#define ESPI_MEMORY_BM_STS_INCMPL2(value)     (ESPI_MEMORY_BM_STS_INCMPL2_Msk & (_UINT32_(value) << ESPI_MEMORY_BM_STS_INCMPL2_Pos)) /* Assigment of value for INCMPL2 in the ESPI_MEMORY_BM_STS register */
#define ESPI_MEMORY_BM_STS_FAIL2_Pos          _UINT32_(24)                                         /* (ESPI_MEMORY_BM_STS) This bit is set if a Layer 3 transaction from Bus Master Channel 2 completes with an Unsuccessful Completion packet from the\n      eSPI Host. For example, this will happen if the START request attempts to read from a forbidden or unmapped address in System Memory.\n      Bad Writes, however, cannot be flagged this way, and will be silently dropped by the eSPI Host without setting this bit. (R/WC) Position */
#define ESPI_MEMORY_BM_STS_FAIL2_Msk          (_UINT32_(0x1) << ESPI_MEMORY_BM_STS_FAIL2_Pos)      /* (ESPI_MEMORY_BM_STS) This bit is set if a Layer 3 transaction from Bus Master Channel 2 completes with an Unsuccessful Completion packet from the\n      eSPI Host. For example, this will happen if the START request attempts to read from a forbidden or unmapped address in System Memory.\n      Bad Writes, however, cannot be flagged this way, and will be silently dropped by the eSPI Host without setting this bit. (R/WC) Mask */
#define ESPI_MEMORY_BM_STS_FAIL2(value)       (ESPI_MEMORY_BM_STS_FAIL2_Msk & (_UINT32_(value) << ESPI_MEMORY_BM_STS_FAIL2_Pos)) /* Assigment of value for FAIL2 in the ESPI_MEMORY_BM_STS register */
#define ESPI_MEMORY_BM_STS_INTR2_BUS_ERR_Pos  _UINT32_(25)                                         /* (ESPI_MEMORY_BM_STS) This bit is set if a transfer on Bus Master Channel 2 is terminated due to a bus error internal to the EC. This can happen\n      if an invalid address is provided in the Bus Master 2 internal Address register. (R/WC) Position */
#define ESPI_MEMORY_BM_STS_INTR2_BUS_ERR_Msk  (_UINT32_(0x1) << ESPI_MEMORY_BM_STS_INTR2_BUS_ERR_Pos) /* (ESPI_MEMORY_BM_STS) This bit is set if a transfer on Bus Master Channel 2 is terminated due to a bus error internal to the EC. This can happen\n      if an invalid address is provided in the Bus Master 2 internal Address register. (R/WC) Mask */
#define ESPI_MEMORY_BM_STS_INTR2_BUS_ERR(value) (ESPI_MEMORY_BM_STS_INTR2_BUS_ERR_Msk & (_UINT32_(value) << ESPI_MEMORY_BM_STS_INTR2_BUS_ERR_Pos)) /* Assigment of value for INTR2_BUS_ERR in the ESPI_MEMORY_BM_STS register */
#define ESPI_MEMORY_BM_STS_BAD2_REQ_Pos       _UINT32_(27)                                         /* (ESPI_MEMORY_BM_STS) This bit is set, and the START request is terminated immediately (BM2_TRANSFER_DONE=1) without triggering traffic, if\n      register contents are invalid at the time the BM2_START bit is written to '1' by firmware. (R/WC)\n      Examples of a Bad Request are:\n      Length of zero, or Length greater than 4K (1000h)\n      Host Address and Length together specifying a request that crosses a 4KByte boundary. This might violate the Scatter/Gather\n      structure of the Host memory, so is not allowed. Position */
#define ESPI_MEMORY_BM_STS_BAD2_REQ_Msk       (_UINT32_(0x1) << ESPI_MEMORY_BM_STS_BAD2_REQ_Pos)   /* (ESPI_MEMORY_BM_STS) This bit is set, and the START request is terminated immediately (BM2_TRANSFER_DONE=1) without triggering traffic, if\n      register contents are invalid at the time the BM2_START bit is written to '1' by firmware. (R/WC)\n      Examples of a Bad Request are:\n      Length of zero, or Length greater than 4K (1000h)\n      Host Address and Length together specifying a request that crosses a 4KByte boundary. This might violate the Scatter/Gather\n      structure of the Host memory, so is not allowed. Mask */
#define ESPI_MEMORY_BM_STS_BAD2_REQ(value)    (ESPI_MEMORY_BM_STS_BAD2_REQ_Msk & (_UINT32_(value) << ESPI_MEMORY_BM_STS_BAD2_REQ_Pos)) /* Assigment of value for BAD2_REQ in the ESPI_MEMORY_BM_STS register */
#define ESPI_MEMORY_BM_STS_Msk                _UINT32_(0x0BFF0BFF)                                 /* (ESPI_MEMORY_BM_STS) Register Mask  */


/* -------- ESPI_MEMORY_BM_IEN : (ESPI_MEMORY Offset: 0x204) (R/W 32) Bus Master Interrupt Enable Register -------- */
#define ESPI_MEMORY_BM_IEN_RESETVALUE         _UINT32_(0x00)                                       /*  (ESPI_MEMORY_BM_IEN) Bus Master Interrupt Enable Register  Reset Value */

#define ESPI_MEMORY_BM_IEN_TX1_DONE_EN_Pos    _UINT32_(0)                                          /* (ESPI_MEMORY_BM_IEN) When this bit is '1' an interrupt is generated when the bit BM1_TRANSFER_DONE in the Bus Master Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Position */
#define ESPI_MEMORY_BM_IEN_TX1_DONE_EN_Msk    (_UINT32_(0x1) << ESPI_MEMORY_BM_IEN_TX1_DONE_EN_Pos) /* (ESPI_MEMORY_BM_IEN) When this bit is '1' an interrupt is generated when the bit BM1_TRANSFER_DONE in the Bus Master Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Mask */
#define ESPI_MEMORY_BM_IEN_TX1_DONE_EN(value) (ESPI_MEMORY_BM_IEN_TX1_DONE_EN_Msk & (_UINT32_(value) << ESPI_MEMORY_BM_IEN_TX1_DONE_EN_Pos)) /* Assigment of value for TX1_DONE_EN in the ESPI_MEMORY_BM_IEN register */
#define ESPI_MEMORY_BM_IEN_TX2_DONE_EN_Pos    _UINT32_(1)                                          /* (ESPI_MEMORY_BM_IEN) When this bit is '1' an interrupt is generated when the bit BM2_TRANSFER_DONE in the Bus Master Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Position */
#define ESPI_MEMORY_BM_IEN_TX2_DONE_EN_Msk    (_UINT32_(0x1) << ESPI_MEMORY_BM_IEN_TX2_DONE_EN_Pos) /* (ESPI_MEMORY_BM_IEN) When this bit is '1' an interrupt is generated when the bit BM2_TRANSFER_DONE in the Bus Master Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Mask */
#define ESPI_MEMORY_BM_IEN_TX2_DONE_EN(value) (ESPI_MEMORY_BM_IEN_TX2_DONE_EN_Msk & (_UINT32_(value) << ESPI_MEMORY_BM_IEN_TX2_DONE_EN_Pos)) /* Assigment of value for TX2_DONE_EN in the ESPI_MEMORY_BM_IEN register */
#define ESPI_MEMORY_BM_IEN_Msk                _UINT32_(0x00000003)                                 /* (ESPI_MEMORY_BM_IEN) Register Mask  */


/* -------- ESPI_MEMORY_BM_CFG : (ESPI_MEMORY Offset: 0x208) (R/W 32) Bus Master Configuration Register -------- */
#define ESPI_MEMORY_BM_CFG_RESETVALUE         _UINT32_(0x10000)                                    /*  (ESPI_MEMORY_BM_CFG) Bus Master Configuration Register  Reset Value */

#define ESPI_MEMORY_BM_CFG_TAG1_Pos           _UINT32_(0)                                          /* (ESPI_MEMORY_BM_CFG) This 4-bit Tag value is included in all eSPI traffic originating from the BM1 Bus Master instance.\n      This bit should not be modified while the bit BM1_BUSY in the Bus Master Status Register is '1'. Position */
#define ESPI_MEMORY_BM_CFG_TAG1_Msk           (_UINT32_(0xF) << ESPI_MEMORY_BM_CFG_TAG1_Pos)       /* (ESPI_MEMORY_BM_CFG) This 4-bit Tag value is included in all eSPI traffic originating from the BM1 Bus Master instance.\n      This bit should not be modified while the bit BM1_BUSY in the Bus Master Status Register is '1'. Mask */
#define ESPI_MEMORY_BM_CFG_TAG1(value)        (ESPI_MEMORY_BM_CFG_TAG1_Msk & (_UINT32_(value) << ESPI_MEMORY_BM_CFG_TAG1_Pos)) /* Assigment of value for TAG1 in the ESPI_MEMORY_BM_CFG register */
#define ESPI_MEMORY_BM_CFG_TAG2_Pos           _UINT32_(16)                                         /* (ESPI_MEMORY_BM_CFG) This 4-bit Tag value is included in all eSPI traffic originating from the BM2 Bus Master instance.\n      This bit should not be modified while the bit BM2_BUSY in the Bus Master Status Register is '1'. Position */
#define ESPI_MEMORY_BM_CFG_TAG2_Msk           (_UINT32_(0xF) << ESPI_MEMORY_BM_CFG_TAG2_Pos)       /* (ESPI_MEMORY_BM_CFG) This 4-bit Tag value is included in all eSPI traffic originating from the BM2 Bus Master instance.\n      This bit should not be modified while the bit BM2_BUSY in the Bus Master Status Register is '1'. Mask */
#define ESPI_MEMORY_BM_CFG_TAG2(value)        (ESPI_MEMORY_BM_CFG_TAG2_Msk & (_UINT32_(value) << ESPI_MEMORY_BM_CFG_TAG2_Pos)) /* Assigment of value for TAG2 in the ESPI_MEMORY_BM_CFG register */
#define ESPI_MEMORY_BM_CFG_Msk                _UINT32_(0x000F000F)                                 /* (ESPI_MEMORY_BM_CFG) Register Mask  */


/* -------- ESPI_MEMORY_BM1_CTRL : (ESPI_MEMORY Offset: 0x210) (R/W 32) Bus Master 1 Control Register -------- */
#define ESPI_MEMORY_BM1_CTRL_RESETVALUE       _UINT32_(0x00)                                       /*  (ESPI_MEMORY_BM1_CTRL) Bus Master 1 Control Register  Reset Value */

#define ESPI_MEMORY_BM1_CTRL_START_Pos        _UINT32_(0)                                          /* (ESPI_MEMORY_BM1_CTRL) A write of '1' to this bit starts a Bus Master transfer on Bus Master Channel 1. A write of 0 has no effect. Reads of this bit \n      return 0. The transmission will be inhibited if the Peripheral channel is not Ready, as defined in the eSPI Peripheral Channel Ready Register. Position */
#define ESPI_MEMORY_BM1_CTRL_START_Msk        (_UINT32_(0x1) << ESPI_MEMORY_BM1_CTRL_START_Pos)    /* (ESPI_MEMORY_BM1_CTRL) A write of '1' to this bit starts a Bus Master transfer on Bus Master Channel 1. A write of 0 has no effect. Reads of this bit \n      return 0. The transmission will be inhibited if the Peripheral channel is not Ready, as defined in the eSPI Peripheral Channel Ready Register. Mask */
#define ESPI_MEMORY_BM1_CTRL_START(value)     (ESPI_MEMORY_BM1_CTRL_START_Msk & (_UINT32_(value) << ESPI_MEMORY_BM1_CTRL_START_Pos)) /* Assigment of value for START in the ESPI_MEMORY_BM1_CTRL register */
#define ESPI_MEMORY_BM1_CTRL_ABORT_Pos        _UINT32_(1)                                          /* (ESPI_MEMORY_BM1_CTRL) A write of '1' to this bit will cause an active transfer on Bus Master Channel 1 to terminate at the next point allowed by\n      the eSPI protocol. A write of 0 has no effect. Reads of this bit return 0. If this bit is written to 1 by firmware, there is no guarantee\n      that any data will have been transferred. Position */
#define ESPI_MEMORY_BM1_CTRL_ABORT_Msk        (_UINT32_(0x1) << ESPI_MEMORY_BM1_CTRL_ABORT_Pos)    /* (ESPI_MEMORY_BM1_CTRL) A write of '1' to this bit will cause an active transfer on Bus Master Channel 1 to terminate at the next point allowed by\n      the eSPI protocol. A write of 0 has no effect. Reads of this bit return 0. If this bit is written to 1 by firmware, there is no guarantee\n      that any data will have been transferred. Mask */
#define ESPI_MEMORY_BM1_CTRL_ABORT(value)     (ESPI_MEMORY_BM1_CTRL_ABORT_Msk & (_UINT32_(value) << ESPI_MEMORY_BM1_CTRL_ABORT_Pos)) /* Assigment of value for ABORT in the ESPI_MEMORY_BM1_CTRL register */
#define ESPI_MEMORY_BM1_CTRL_EN_INTER_INCR_Pos _UINT32_(2)                                          /* (ESPI_MEMORY_BM1_CTRL) 1=The internal address will be incremented after each transfer to eSPI\n      0=The internal address will remain fixed for the entire Bus Master transfer. This may be used to transfer data to or from an on-chip\n      FIFO instead of a region of memory, or to fill a region of Host memory from a single byte value. Position */
#define ESPI_MEMORY_BM1_CTRL_EN_INTER_INCR_Msk (_UINT32_(0x1) << ESPI_MEMORY_BM1_CTRL_EN_INTER_INCR_Pos) /* (ESPI_MEMORY_BM1_CTRL) 1=The internal address will be incremented after each transfer to eSPI\n      0=The internal address will remain fixed for the entire Bus Master transfer. This may be used to transfer data to or from an on-chip\n      FIFO instead of a region of memory, or to fill a region of Host memory from a single byte value. Mask */
#define ESPI_MEMORY_BM1_CTRL_EN_INTER_INCR(value) (ESPI_MEMORY_BM1_CTRL_EN_INTER_INCR_Msk & (_UINT32_(value) << ESPI_MEMORY_BM1_CTRL_EN_INTER_INCR_Pos)) /* Assigment of value for EN_INTER_INCR in the ESPI_MEMORY_BM1_CTRL register */
#define ESPI_MEMORY_BM1_CTRL_BM1WAIT_BM2NOTBUSY_Pos _UINT32_(3)                                          /* (ESPI_MEMORY_BM1_CTRL) 1=The transfer on Bus Master Channel 1 will be held until a transfer in progress on Bus Master Channel 2 has completed.\n      If that transfer completes unsuccessfully, then this transfer will also terminate, before generating any traffic, with the\n      BM1_ABORTED_BY_CH2_ERROR flag set.\n      0=The transfer on Bus Master Channel 1 will proceed independently of the status of Bus Master Channel 2. Position */
#define ESPI_MEMORY_BM1_CTRL_BM1WAIT_BM2NOTBUSY_Msk (_UINT32_(0x1) << ESPI_MEMORY_BM1_CTRL_BM1WAIT_BM2NOTBUSY_Pos) /* (ESPI_MEMORY_BM1_CTRL) 1=The transfer on Bus Master Channel 1 will be held until a transfer in progress on Bus Master Channel 2 has completed.\n      If that transfer completes unsuccessfully, then this transfer will also terminate, before generating any traffic, with the\n      BM1_ABORTED_BY_CH2_ERROR flag set.\n      0=The transfer on Bus Master Channel 1 will proceed independently of the status of Bus Master Channel 2. Mask */
#define ESPI_MEMORY_BM1_CTRL_BM1WAIT_BM2NOTBUSY(value) (ESPI_MEMORY_BM1_CTRL_BM1WAIT_BM2NOTBUSY_Msk & (_UINT32_(value) << ESPI_MEMORY_BM1_CTRL_BM1WAIT_BM2NOTBUSY_Pos)) /* Assigment of value for BM1WAIT_BM2NOTBUSY in the ESPI_MEMORY_BM1_CTRL register */
#define ESPI_MEMORY_BM1_CTRL_CYC_TYPE_Pos     _UINT32_(8)                                          /* (ESPI_MEMORY_BM1_CTRL) This field provides the cycle type to use inside the eSPI transaction header:\n      11b=Memory Write, 64-bit addressing\n      10b=Memory Read, 64-bit addressing\n      01b=Memory Write, 32-bit addressing\n      00b=Memory Read, 32-bit addressing. Position */
#define ESPI_MEMORY_BM1_CTRL_CYC_TYPE_Msk     (_UINT32_(0x3) << ESPI_MEMORY_BM1_CTRL_CYC_TYPE_Pos) /* (ESPI_MEMORY_BM1_CTRL) This field provides the cycle type to use inside the eSPI transaction header:\n      11b=Memory Write, 64-bit addressing\n      10b=Memory Read, 64-bit addressing\n      01b=Memory Write, 32-bit addressing\n      00b=Memory Read, 32-bit addressing. Mask */
#define ESPI_MEMORY_BM1_CTRL_CYC_TYPE(value)  (ESPI_MEMORY_BM1_CTRL_CYC_TYPE_Msk & (_UINT32_(value) << ESPI_MEMORY_BM1_CTRL_CYC_TYPE_Pos)) /* Assigment of value for CYC_TYPE in the ESPI_MEMORY_BM1_CTRL register */
#define ESPI_MEMORY_BM1_CTRL_LEN_Pos          _UINT32_(16)                                         /* (ESPI_MEMORY_BM1_CTRL) This field sets the length in bytes of a transfer on Bus Master Channel 1. A value of zero, or a value greater than exactly\n      4K (0x1000) is illegal. Any length which, in combination with the Bus Master 1 Host Address register, will cause the transfer to cross\n      a 4K-byte boundary in System Memory is also illegal. These illegal settings will cause a request to terminate immediately, with no\n      traffic, and with Bad Request error status posted. Position */
#define ESPI_MEMORY_BM1_CTRL_LEN_Msk          (_UINT32_(0x1FFF) << ESPI_MEMORY_BM1_CTRL_LEN_Pos)   /* (ESPI_MEMORY_BM1_CTRL) This field sets the length in bytes of a transfer on Bus Master Channel 1. A value of zero, or a value greater than exactly\n      4K (0x1000) is illegal. Any length which, in combination with the Bus Master 1 Host Address register, will cause the transfer to cross\n      a 4K-byte boundary in System Memory is also illegal. These illegal settings will cause a request to terminate immediately, with no\n      traffic, and with Bad Request error status posted. Mask */
#define ESPI_MEMORY_BM1_CTRL_LEN(value)       (ESPI_MEMORY_BM1_CTRL_LEN_Msk & (_UINT32_(value) << ESPI_MEMORY_BM1_CTRL_LEN_Pos)) /* Assigment of value for LEN in the ESPI_MEMORY_BM1_CTRL register */
#define ESPI_MEMORY_BM1_CTRL_Msk              _UINT32_(0x1FFF030F)                                 /* (ESPI_MEMORY_BM1_CTRL) Register Mask  */


/* -------- ESPI_MEMORY_BM1_HOST_ADDR_LSW : (ESPI_MEMORY Offset: 0x214) (R/W 32) Bus Master 1 Host Address Register (DWord 0) -------- */
#define ESPI_MEMORY_BM1_HOST_ADDR_LSW_RESETVALUE _UINT32_(0x00)                                       /*  (ESPI_MEMORY_BM1_HOST_ADDR_LSW) Bus Master 1 Host Address Register (DWord 0)  Reset Value */

#define ESPI_MEMORY_BM1_HOST_ADDR_LSW_LSDW_Pos _UINT32_(0)                                          /* (ESPI_MEMORY_BM1_HOST_ADDR_LSW) This register sets bits [31:0] of the Host address used for a transfer on Bus Master Channel 1. This address, combined with\n      the Length, must not cross a 4K boundary, or else the START request will terminate without traffic, posting the Bad Request error status. Position */
#define ESPI_MEMORY_BM1_HOST_ADDR_LSW_LSDW_Msk (_UINT32_(0xFFFFFFFF) << ESPI_MEMORY_BM1_HOST_ADDR_LSW_LSDW_Pos) /* (ESPI_MEMORY_BM1_HOST_ADDR_LSW) This register sets bits [31:0] of the Host address used for a transfer on Bus Master Channel 1. This address, combined with\n      the Length, must not cross a 4K boundary, or else the START request will terminate without traffic, posting the Bad Request error status. Mask */
#define ESPI_MEMORY_BM1_HOST_ADDR_LSW_LSDW(value) (ESPI_MEMORY_BM1_HOST_ADDR_LSW_LSDW_Msk & (_UINT32_(value) << ESPI_MEMORY_BM1_HOST_ADDR_LSW_LSDW_Pos)) /* Assigment of value for LSDW in the ESPI_MEMORY_BM1_HOST_ADDR_LSW register */
#define ESPI_MEMORY_BM1_HOST_ADDR_LSW_Msk     _UINT32_(0xFFFFFFFF)                                 /* (ESPI_MEMORY_BM1_HOST_ADDR_LSW) Register Mask  */


/* -------- ESPI_MEMORY_BM1_HOST_ADDR_MSW : (ESPI_MEMORY Offset: 0x218) (R/W 32) Bus Master 1 Host Address Register (DWord 1) -------- */
#define ESPI_MEMORY_BM1_HOST_ADDR_MSW_RESETVALUE _UINT32_(0x00)                                       /*  (ESPI_MEMORY_BM1_HOST_ADDR_MSW) Bus Master 1 Host Address Register (DWord 1)  Reset Value */

#define ESPI_MEMORY_BM1_HOST_ADDR_MSW_MSDW_Pos _UINT32_(0)                                          /* (ESPI_MEMORY_BM1_HOST_ADDR_MSW) This register sets bits [63:32] of the Host address used for a transfer on Bus Master Channel 1. This address, combined with\n      the Length, must not cross a 4K boundary, or else the START request will terminate without traffic, posting the Bad Request error status. Position */
#define ESPI_MEMORY_BM1_HOST_ADDR_MSW_MSDW_Msk (_UINT32_(0xFFFFFFFF) << ESPI_MEMORY_BM1_HOST_ADDR_MSW_MSDW_Pos) /* (ESPI_MEMORY_BM1_HOST_ADDR_MSW) This register sets bits [63:32] of the Host address used for a transfer on Bus Master Channel 1. This address, combined with\n      the Length, must not cross a 4K boundary, or else the START request will terminate without traffic, posting the Bad Request error status. Mask */
#define ESPI_MEMORY_BM1_HOST_ADDR_MSW_MSDW(value) (ESPI_MEMORY_BM1_HOST_ADDR_MSW_MSDW_Msk & (_UINT32_(value) << ESPI_MEMORY_BM1_HOST_ADDR_MSW_MSDW_Pos)) /* Assigment of value for MSDW in the ESPI_MEMORY_BM1_HOST_ADDR_MSW register */
#define ESPI_MEMORY_BM1_HOST_ADDR_MSW_Msk     _UINT32_(0xFFFFFFFF)                                 /* (ESPI_MEMORY_BM1_HOST_ADDR_MSW) Register Mask  */


/* -------- ESPI_MEMORY_BM1_EC_ADDR_LSW : (ESPI_MEMORY Offset: 0x21C) (R/W 32) Bus Master 1 Internal Address Register -------- */
#define ESPI_MEMORY_BM1_EC_ADDR_LSW_RESETVALUE _UINT32_(0x00)                                       /*  (ESPI_MEMORY_BM1_EC_ADDR_LSW) Bus Master 1 Internal Address Register  Reset Value */

#define ESPI_MEMORY_BM1_EC_ADDR_LSW_IN_ADDR_Pos _UINT32_(2)                                          /* (ESPI_MEMORY_BM1_EC_ADDR_LSW) This register sets the internal address to be used for a transfer on Bus Master Channel 1. Position */
#define ESPI_MEMORY_BM1_EC_ADDR_LSW_IN_ADDR_Msk (_UINT32_(0x3FFFFFFF) << ESPI_MEMORY_BM1_EC_ADDR_LSW_IN_ADDR_Pos) /* (ESPI_MEMORY_BM1_EC_ADDR_LSW) This register sets the internal address to be used for a transfer on Bus Master Channel 1. Mask */
#define ESPI_MEMORY_BM1_EC_ADDR_LSW_IN_ADDR(value) (ESPI_MEMORY_BM1_EC_ADDR_LSW_IN_ADDR_Msk & (_UINT32_(value) << ESPI_MEMORY_BM1_EC_ADDR_LSW_IN_ADDR_Pos)) /* Assigment of value for IN_ADDR in the ESPI_MEMORY_BM1_EC_ADDR_LSW register */
#define ESPI_MEMORY_BM1_EC_ADDR_LSW_Msk       _UINT32_(0xFFFFFFFC)                                 /* (ESPI_MEMORY_BM1_EC_ADDR_LSW) Register Mask  */


/* -------- ESPI_MEMORY_BM2_CTRL : (ESPI_MEMORY Offset: 0x224) (R/W 32) Bus Master 2 Control Register -------- */
#define ESPI_MEMORY_BM2_CTRL_RESETVALUE       _UINT32_(0x00)                                       /*  (ESPI_MEMORY_BM2_CTRL) Bus Master 2 Control Register  Reset Value */

#define ESPI_MEMORY_BM2_CTRL_START_Pos        _UINT32_(0)                                          /* (ESPI_MEMORY_BM2_CTRL) A write of '1' to this bit starts a Bus Master transfer on Bus Master Channel 2. A write of 0 has no effect. Reads of this bit \n      return 0. The transmission will be inhibited if the Peripheral channel is not Ready, as defined in the eSPI Peripheral Channel Ready Register. Position */
#define ESPI_MEMORY_BM2_CTRL_START_Msk        (_UINT32_(0x1) << ESPI_MEMORY_BM2_CTRL_START_Pos)    /* (ESPI_MEMORY_BM2_CTRL) A write of '1' to this bit starts a Bus Master transfer on Bus Master Channel 2. A write of 0 has no effect. Reads of this bit \n      return 0. The transmission will be inhibited if the Peripheral channel is not Ready, as defined in the eSPI Peripheral Channel Ready Register. Mask */
#define ESPI_MEMORY_BM2_CTRL_START(value)     (ESPI_MEMORY_BM2_CTRL_START_Msk & (_UINT32_(value) << ESPI_MEMORY_BM2_CTRL_START_Pos)) /* Assigment of value for START in the ESPI_MEMORY_BM2_CTRL register */
#define ESPI_MEMORY_BM2_CTRL_ABORT_Pos        _UINT32_(1)                                          /* (ESPI_MEMORY_BM2_CTRL) A write of '1' to this bit will cause an active transfer on Bus Master Channel 2 to terminate at the next point allowed by\n      the eSPI protocol. A write of 0 has no effect. Reads of this bit return 0. If this bit is written to 1 by firmware, there is no guarantee\n      that any data will have been transferred. Position */
#define ESPI_MEMORY_BM2_CTRL_ABORT_Msk        (_UINT32_(0x1) << ESPI_MEMORY_BM2_CTRL_ABORT_Pos)    /* (ESPI_MEMORY_BM2_CTRL) A write of '1' to this bit will cause an active transfer on Bus Master Channel 2 to terminate at the next point allowed by\n      the eSPI protocol. A write of 0 has no effect. Reads of this bit return 0. If this bit is written to 1 by firmware, there is no guarantee\n      that any data will have been transferred. Mask */
#define ESPI_MEMORY_BM2_CTRL_ABORT(value)     (ESPI_MEMORY_BM2_CTRL_ABORT_Msk & (_UINT32_(value) << ESPI_MEMORY_BM2_CTRL_ABORT_Pos)) /* Assigment of value for ABORT in the ESPI_MEMORY_BM2_CTRL register */
#define ESPI_MEMORY_BM2_CTRL_EN_INTER_INCR_Pos _UINT32_(2)                                          /* (ESPI_MEMORY_BM2_CTRL) 1=The internal address will be incremented after each transfer to eSPI\n      0=The internal address will remain fixed for the entire Bus Master transfer. This may be used to transfer data to or from an on-chip\n      FIFO instead of a region of memory, or to fill a region of Host memory from a single byte value. Position */
#define ESPI_MEMORY_BM2_CTRL_EN_INTER_INCR_Msk (_UINT32_(0x1) << ESPI_MEMORY_BM2_CTRL_EN_INTER_INCR_Pos) /* (ESPI_MEMORY_BM2_CTRL) 1=The internal address will be incremented after each transfer to eSPI\n      0=The internal address will remain fixed for the entire Bus Master transfer. This may be used to transfer data to or from an on-chip\n      FIFO instead of a region of memory, or to fill a region of Host memory from a single byte value. Mask */
#define ESPI_MEMORY_BM2_CTRL_EN_INTER_INCR(value) (ESPI_MEMORY_BM2_CTRL_EN_INTER_INCR_Msk & (_UINT32_(value) << ESPI_MEMORY_BM2_CTRL_EN_INTER_INCR_Pos)) /* Assigment of value for EN_INTER_INCR in the ESPI_MEMORY_BM2_CTRL register */
#define ESPI_MEMORY_BM2_CTRL_BM2WAIT_BM1NOTBUSY_Pos _UINT32_(3)                                          /* (ESPI_MEMORY_BM2_CTRL) 1=The transfer on Bus Master Channel 2 will be held until a transfer in progress on Bus Master Channel 1 has completed.\n      If that transfer completes unsuccessfully, then this transfer will also terminate, before generating any traffic, with the\n      BM2_ABORTED_BY_CH1_ERROR flag set.\n      0=The transfer on Bus Master Channel 2 will proceed independently of the status of Bus Master Channel 1. Position */
#define ESPI_MEMORY_BM2_CTRL_BM2WAIT_BM1NOTBUSY_Msk (_UINT32_(0x1) << ESPI_MEMORY_BM2_CTRL_BM2WAIT_BM1NOTBUSY_Pos) /* (ESPI_MEMORY_BM2_CTRL) 1=The transfer on Bus Master Channel 2 will be held until a transfer in progress on Bus Master Channel 1 has completed.\n      If that transfer completes unsuccessfully, then this transfer will also terminate, before generating any traffic, with the\n      BM2_ABORTED_BY_CH1_ERROR flag set.\n      0=The transfer on Bus Master Channel 2 will proceed independently of the status of Bus Master Channel 1. Mask */
#define ESPI_MEMORY_BM2_CTRL_BM2WAIT_BM1NOTBUSY(value) (ESPI_MEMORY_BM2_CTRL_BM2WAIT_BM1NOTBUSY_Msk & (_UINT32_(value) << ESPI_MEMORY_BM2_CTRL_BM2WAIT_BM1NOTBUSY_Pos)) /* Assigment of value for BM2WAIT_BM1NOTBUSY in the ESPI_MEMORY_BM2_CTRL register */
#define ESPI_MEMORY_BM2_CTRL_CYC_TYPE_Pos     _UINT32_(8)                                          /* (ESPI_MEMORY_BM2_CTRL) This field provides the cycle type to use inside the eSPI transaction header:\n      11b=Memory Write, 64-bit addressing\n      10b=Memory Read, 64-bit addressing\n      01b=Memory Write, 32-bit addressing\n      00b=Memory Read, 32-bit addressing. Position */
#define ESPI_MEMORY_BM2_CTRL_CYC_TYPE_Msk     (_UINT32_(0x3) << ESPI_MEMORY_BM2_CTRL_CYC_TYPE_Pos) /* (ESPI_MEMORY_BM2_CTRL) This field provides the cycle type to use inside the eSPI transaction header:\n      11b=Memory Write, 64-bit addressing\n      10b=Memory Read, 64-bit addressing\n      01b=Memory Write, 32-bit addressing\n      00b=Memory Read, 32-bit addressing. Mask */
#define ESPI_MEMORY_BM2_CTRL_CYC_TYPE(value)  (ESPI_MEMORY_BM2_CTRL_CYC_TYPE_Msk & (_UINT32_(value) << ESPI_MEMORY_BM2_CTRL_CYC_TYPE_Pos)) /* Assigment of value for CYC_TYPE in the ESPI_MEMORY_BM2_CTRL register */
#define ESPI_MEMORY_BM2_CTRL_LEN_Pos          _UINT32_(16)                                         /* (ESPI_MEMORY_BM2_CTRL) This field sets the length in bytes of a transfer on Bus Master Channel 2. A value of zero, or a value greater than exactly\n      4K (0x1000) is illegal. Any length which, in combination with the Bus Master 2 Host Address register, will cause the transfer to cross\n      a 4K-byte boundary in System Memory is also illegal. These illegal settings will cause a request to terminate immediately, with no\n      traffic, and with Bad Request error status posted. Position */
#define ESPI_MEMORY_BM2_CTRL_LEN_Msk          (_UINT32_(0x1FFF) << ESPI_MEMORY_BM2_CTRL_LEN_Pos)   /* (ESPI_MEMORY_BM2_CTRL) This field sets the length in bytes of a transfer on Bus Master Channel 2. A value of zero, or a value greater than exactly\n      4K (0x1000) is illegal. Any length which, in combination with the Bus Master 2 Host Address register, will cause the transfer to cross\n      a 4K-byte boundary in System Memory is also illegal. These illegal settings will cause a request to terminate immediately, with no\n      traffic, and with Bad Request error status posted. Mask */
#define ESPI_MEMORY_BM2_CTRL_LEN(value)       (ESPI_MEMORY_BM2_CTRL_LEN_Msk & (_UINT32_(value) << ESPI_MEMORY_BM2_CTRL_LEN_Pos)) /* Assigment of value for LEN in the ESPI_MEMORY_BM2_CTRL register */
#define ESPI_MEMORY_BM2_CTRL_Msk              _UINT32_(0x1FFF030F)                                 /* (ESPI_MEMORY_BM2_CTRL) Register Mask  */


/* -------- ESPI_MEMORY_BM2_HOST_ADDR_LSW : (ESPI_MEMORY Offset: 0x228) (R/W 32) Bus Master 2 Host Address Register (DWord 0) -------- */
#define ESPI_MEMORY_BM2_HOST_ADDR_LSW_RESETVALUE _UINT32_(0x00)                                       /*  (ESPI_MEMORY_BM2_HOST_ADDR_LSW) Bus Master 2 Host Address Register (DWord 0)  Reset Value */

#define ESPI_MEMORY_BM2_HOST_ADDR_LSW_LSDW_Pos _UINT32_(0)                                          /* (ESPI_MEMORY_BM2_HOST_ADDR_LSW) This register sets bits [31:0] of the Host address used for a transfer on Bus Master Channel 2. This address, combined with\n      the Length, must not cross a 4K boundary, or else the START request will terminate without traffic, posting the Bad Request error status. Position */
#define ESPI_MEMORY_BM2_HOST_ADDR_LSW_LSDW_Msk (_UINT32_(0xFFFFFFFF) << ESPI_MEMORY_BM2_HOST_ADDR_LSW_LSDW_Pos) /* (ESPI_MEMORY_BM2_HOST_ADDR_LSW) This register sets bits [31:0] of the Host address used for a transfer on Bus Master Channel 2. This address, combined with\n      the Length, must not cross a 4K boundary, or else the START request will terminate without traffic, posting the Bad Request error status. Mask */
#define ESPI_MEMORY_BM2_HOST_ADDR_LSW_LSDW(value) (ESPI_MEMORY_BM2_HOST_ADDR_LSW_LSDW_Msk & (_UINT32_(value) << ESPI_MEMORY_BM2_HOST_ADDR_LSW_LSDW_Pos)) /* Assigment of value for LSDW in the ESPI_MEMORY_BM2_HOST_ADDR_LSW register */
#define ESPI_MEMORY_BM2_HOST_ADDR_LSW_Msk     _UINT32_(0xFFFFFFFF)                                 /* (ESPI_MEMORY_BM2_HOST_ADDR_LSW) Register Mask  */


/* -------- ESPI_MEMORY_BM2_HOST_ADDR_MSW : (ESPI_MEMORY Offset: 0x22C) (R/W 32) Bus Master 2 Host Address Register (DWord 1) -------- */
#define ESPI_MEMORY_BM2_HOST_ADDR_MSW_RESETVALUE _UINT32_(0x00)                                       /*  (ESPI_MEMORY_BM2_HOST_ADDR_MSW) Bus Master 2 Host Address Register (DWord 1)  Reset Value */

#define ESPI_MEMORY_BM2_HOST_ADDR_MSW_MSDW_Pos _UINT32_(0)                                          /* (ESPI_MEMORY_BM2_HOST_ADDR_MSW) This register sets bits [63:32] of the Host address used for a transfer on Bus Master Channel 2. This address, combined with\n      the Length, must not cross a 4K boundary, or else the START request will terminate without traffic, posting the Bad Request error status. Position */
#define ESPI_MEMORY_BM2_HOST_ADDR_MSW_MSDW_Msk (_UINT32_(0xFFFFFFFF) << ESPI_MEMORY_BM2_HOST_ADDR_MSW_MSDW_Pos) /* (ESPI_MEMORY_BM2_HOST_ADDR_MSW) This register sets bits [63:32] of the Host address used for a transfer on Bus Master Channel 2. This address, combined with\n      the Length, must not cross a 4K boundary, or else the START request will terminate without traffic, posting the Bad Request error status. Mask */
#define ESPI_MEMORY_BM2_HOST_ADDR_MSW_MSDW(value) (ESPI_MEMORY_BM2_HOST_ADDR_MSW_MSDW_Msk & (_UINT32_(value) << ESPI_MEMORY_BM2_HOST_ADDR_MSW_MSDW_Pos)) /* Assigment of value for MSDW in the ESPI_MEMORY_BM2_HOST_ADDR_MSW register */
#define ESPI_MEMORY_BM2_HOST_ADDR_MSW_Msk     _UINT32_(0xFFFFFFFF)                                 /* (ESPI_MEMORY_BM2_HOST_ADDR_MSW) Register Mask  */


/* -------- ESPI_MEMORY_BM2_EC_ADDR_LSW : (ESPI_MEMORY Offset: 0x230) (R/W 32) Bus Master 2 Internal Address Register -------- */
#define ESPI_MEMORY_BM2_EC_ADDR_LSW_RESETVALUE _UINT32_(0x00)                                       /*  (ESPI_MEMORY_BM2_EC_ADDR_LSW) Bus Master 2 Internal Address Register  Reset Value */

#define ESPI_MEMORY_BM2_EC_ADDR_LSW_IN_ADDR_Pos _UINT32_(2)                                          /* (ESPI_MEMORY_BM2_EC_ADDR_LSW) This register sets the internal address to be used for a transfer on Bus Master Channel 2. Position */
#define ESPI_MEMORY_BM2_EC_ADDR_LSW_IN_ADDR_Msk (_UINT32_(0x3FFFFFFF) << ESPI_MEMORY_BM2_EC_ADDR_LSW_IN_ADDR_Pos) /* (ESPI_MEMORY_BM2_EC_ADDR_LSW) This register sets the internal address to be used for a transfer on Bus Master Channel 2. Mask */
#define ESPI_MEMORY_BM2_EC_ADDR_LSW_IN_ADDR(value) (ESPI_MEMORY_BM2_EC_ADDR_LSW_IN_ADDR_Msk & (_UINT32_(value) << ESPI_MEMORY_BM2_EC_ADDR_LSW_IN_ADDR_Pos)) /* Assigment of value for IN_ADDR in the ESPI_MEMORY_BM2_EC_ADDR_LSW register */
#define ESPI_MEMORY_BM2_EC_ADDR_LSW_Msk       _UINT32_(0xFFFFFFFC)                                 /* (ESPI_MEMORY_BM2_EC_ADDR_LSW) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDH_MBX_H0 : (ESPI_MEMORY Offset: 0x330) (R/W 16) Mailbox Memory BAR Configuration Register (Word 0) -------- */
#define ESPI_MEMORY_BAR_LDH_MBX_H0_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_LDH_MBX_H0) Mailbox Memory BAR Configuration Register (Word 0)  Reset Value */

#define ESPI_MEMORY_BAR_LDH_MBX_H0_VALID_Pos  _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDH_MBX_H0) 1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. Position */
#define ESPI_MEMORY_BAR_LDH_MBX_H0_VALID_Msk  (_UINT16_(0x1) << ESPI_MEMORY_BAR_LDH_MBX_H0_VALID_Pos) /* (ESPI_MEMORY_BAR_LDH_MBX_H0) 1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. Mask */
#define ESPI_MEMORY_BAR_LDH_MBX_H0_VALID(value) (ESPI_MEMORY_BAR_LDH_MBX_H0_VALID_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDH_MBX_H0_VALID_Pos)) /* Assigment of value for VALID in the ESPI_MEMORY_BAR_LDH_MBX_H0 register */
#define ESPI_MEMORY_BAR_LDH_MBX_H0_Msk        _UINT16_(0x0001)                                     /* (ESPI_MEMORY_BAR_LDH_MBX_H0) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDH_MBX_H1 : (ESPI_MEMORY Offset: 0x332) (R/W 16) Mailbox Memory BAR Configuration Register (Word 1) -------- */
#define ESPI_MEMORY_BAR_LDH_MBX_H1_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_LDH_MBX_H1) Mailbox Memory BAR Configuration Register (Word 1)  Reset Value */

#define ESPI_MEMORY_BAR_LDH_MBX_H1_ESP_H_ADDR_W0_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDH_MBX_H1) Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_BAR_LDH_MBX_H1_ESP_H_ADDR_W0_Msk (_UINT16_(0xFFFF) << ESPI_MEMORY_BAR_LDH_MBX_H1_ESP_H_ADDR_W0_Pos) /* (ESPI_MEMORY_BAR_LDH_MBX_H1) Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_BAR_LDH_MBX_H1_ESP_H_ADDR_W0(value) (ESPI_MEMORY_BAR_LDH_MBX_H1_ESP_H_ADDR_W0_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDH_MBX_H1_ESP_H_ADDR_W0_Pos)) /* Assigment of value for ESP_H_ADDR_W0 in the ESPI_MEMORY_BAR_LDH_MBX_H1 register */
#define ESPI_MEMORY_BAR_LDH_MBX_H1_Msk        _UINT16_(0xFFFF)                                     /* (ESPI_MEMORY_BAR_LDH_MBX_H1) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDH_MBX_H2 : (ESPI_MEMORY Offset: 0x334) (R/W 16) Mailbox Memory BAR Configuration Register (Word 2) -------- */
#define ESPI_MEMORY_BAR_LDH_MBX_H2_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_LDH_MBX_H2) Mailbox Memory BAR Configuration Register (Word 2)  Reset Value */

#define ESPI_MEMORY_BAR_LDH_MBX_H2_ESP_H_ADDR_W1_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDH_MBX_H2) Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_BAR_LDH_MBX_H2_ESP_H_ADDR_W1_Msk (_UINT16_(0xFFFF) << ESPI_MEMORY_BAR_LDH_MBX_H2_ESP_H_ADDR_W1_Pos) /* (ESPI_MEMORY_BAR_LDH_MBX_H2) Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_BAR_LDH_MBX_H2_ESP_H_ADDR_W1(value) (ESPI_MEMORY_BAR_LDH_MBX_H2_ESP_H_ADDR_W1_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDH_MBX_H2_ESP_H_ADDR_W1_Pos)) /* Assigment of value for ESP_H_ADDR_W1 in the ESPI_MEMORY_BAR_LDH_MBX_H2 register */
#define ESPI_MEMORY_BAR_LDH_MBX_H2_Msk        _UINT16_(0xFFFF)                                     /* (ESPI_MEMORY_BAR_LDH_MBX_H2) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDH_MBX_H3 : (ESPI_MEMORY Offset: 0x336) (R/W 16) Mailbox Memory BAR Configuration Register (Word 3) -------- */
#define ESPI_MEMORY_BAR_LDH_MBX_H3_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_LDH_MBX_H3) Mailbox Memory BAR Configuration Register (Word 3)  Reset Value */

#define ESPI_MEMORY_BAR_LDH_MBX_H3_ESP_H_ADDR_W2_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDH_MBX_H3) Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_BAR_LDH_MBX_H3_ESP_H_ADDR_W2_Msk (_UINT16_(0xFFFF) << ESPI_MEMORY_BAR_LDH_MBX_H3_ESP_H_ADDR_W2_Pos) /* (ESPI_MEMORY_BAR_LDH_MBX_H3) Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_BAR_LDH_MBX_H3_ESP_H_ADDR_W2(value) (ESPI_MEMORY_BAR_LDH_MBX_H3_ESP_H_ADDR_W2_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDH_MBX_H3_ESP_H_ADDR_W2_Pos)) /* Assigment of value for ESP_H_ADDR_W2 in the ESPI_MEMORY_BAR_LDH_MBX_H3 register */
#define ESPI_MEMORY_BAR_LDH_MBX_H3_Msk        _UINT16_(0xFFFF)                                     /* (ESPI_MEMORY_BAR_LDH_MBX_H3) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDH_MBX_H4 : (ESPI_MEMORY Offset: 0x338) (R/W 16) Mailbox Memory BAR Configuration Register (Word 4) -------- */
#define ESPI_MEMORY_BAR_LDH_MBX_H4_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_LDH_MBX_H4) Mailbox Memory BAR Configuration Register (Word 4)  Reset Value */

#define ESPI_MEMORY_BAR_LDH_MBX_H4_ESP_H_ADDR_W3_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDH_MBX_H4) Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_BAR_LDH_MBX_H4_ESP_H_ADDR_W3_Msk (_UINT16_(0xFFFF) << ESPI_MEMORY_BAR_LDH_MBX_H4_ESP_H_ADDR_W3_Pos) /* (ESPI_MEMORY_BAR_LDH_MBX_H4) Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_BAR_LDH_MBX_H4_ESP_H_ADDR_W3(value) (ESPI_MEMORY_BAR_LDH_MBX_H4_ESP_H_ADDR_W3_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDH_MBX_H4_ESP_H_ADDR_W3_Pos)) /* Assigment of value for ESP_H_ADDR_W3 in the ESPI_MEMORY_BAR_LDH_MBX_H4 register */
#define ESPI_MEMORY_BAR_LDH_MBX_H4_Msk        _UINT16_(0xFFFF)                                     /* (ESPI_MEMORY_BAR_LDH_MBX_H4) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDH_ACPI_EC0_H0 : (ESPI_MEMORY Offset: 0x33A) (R/W 16) ACPI EC Channel 0 Memory BAR Configuration Register (Word 0) -------- */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC0_H0_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_LDH_ACPI_EC0_H0) ACPI EC Channel 0 Memory BAR Configuration Register (Word 0)  Reset Value */

#define ESPI_MEMORY_BAR_LDH_ACPI_EC0_H0_VALID_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDH_ACPI_EC0_H0) 1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. Position */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC0_H0_VALID_Msk (_UINT16_(0x1) << ESPI_MEMORY_BAR_LDH_ACPI_EC0_H0_VALID_Pos) /* (ESPI_MEMORY_BAR_LDH_ACPI_EC0_H0) 1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. Mask */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC0_H0_VALID(value) (ESPI_MEMORY_BAR_LDH_ACPI_EC0_H0_VALID_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDH_ACPI_EC0_H0_VALID_Pos)) /* Assigment of value for VALID in the ESPI_MEMORY_BAR_LDH_ACPI_EC0_H0 register */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC0_H0_Msk   _UINT16_(0x0001)                                     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC0_H0) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDH_ACPI_EC0_H1 : (ESPI_MEMORY Offset: 0x33C) (R/W 16) ACPI EC Channel 0 Memory BAR Configuration Register (Word 1) -------- */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC0_H1_RESETVALUE _UINT16_(0x62)                                       /*  (ESPI_MEMORY_BAR_LDH_ACPI_EC0_H1) ACPI EC Channel 0 Memory BAR Configuration Register (Word 1)  Reset Value */

#define ESPI_MEMORY_BAR_LDH_ACPI_EC0_H1_ESP_H_ADDR_W0_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDH_ACPI_EC0_H1) Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC0_H1_ESP_H_ADDR_W0_Msk (_UINT16_(0xFFFF) << ESPI_MEMORY_BAR_LDH_ACPI_EC0_H1_ESP_H_ADDR_W0_Pos) /* (ESPI_MEMORY_BAR_LDH_ACPI_EC0_H1) Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC0_H1_ESP_H_ADDR_W0(value) (ESPI_MEMORY_BAR_LDH_ACPI_EC0_H1_ESP_H_ADDR_W0_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDH_ACPI_EC0_H1_ESP_H_ADDR_W0_Pos)) /* Assigment of value for ESP_H_ADDR_W0 in the ESPI_MEMORY_BAR_LDH_ACPI_EC0_H1 register */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC0_H1_Msk   _UINT16_(0xFFFF)                                     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC0_H1) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDH_ACPI_EC0_H2 : (ESPI_MEMORY Offset: 0x33E) (R/W 16) ACPI EC Channel 0 Memory BAR Configuration Register (Word 2) -------- */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC0_H2_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_LDH_ACPI_EC0_H2) ACPI EC Channel 0 Memory BAR Configuration Register (Word 2)  Reset Value */

#define ESPI_MEMORY_BAR_LDH_ACPI_EC0_H2_ESP_H_ADDR_W1_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDH_ACPI_EC0_H2) Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC0_H2_ESP_H_ADDR_W1_Msk (_UINT16_(0xFFFF) << ESPI_MEMORY_BAR_LDH_ACPI_EC0_H2_ESP_H_ADDR_W1_Pos) /* (ESPI_MEMORY_BAR_LDH_ACPI_EC0_H2) Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC0_H2_ESP_H_ADDR_W1(value) (ESPI_MEMORY_BAR_LDH_ACPI_EC0_H2_ESP_H_ADDR_W1_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDH_ACPI_EC0_H2_ESP_H_ADDR_W1_Pos)) /* Assigment of value for ESP_H_ADDR_W1 in the ESPI_MEMORY_BAR_LDH_ACPI_EC0_H2 register */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC0_H2_Msk   _UINT16_(0xFFFF)                                     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC0_H2) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDH_ACPI_EC0_H3 : (ESPI_MEMORY Offset: 0x340) (R/W 16) ACPI EC Channel 0 Memory BAR Configuration Register (Word 3) -------- */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC0_H3_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_LDH_ACPI_EC0_H3) ACPI EC Channel 0 Memory BAR Configuration Register (Word 3)  Reset Value */

#define ESPI_MEMORY_BAR_LDH_ACPI_EC0_H3_ESP_H_ADDR_W2_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDH_ACPI_EC0_H3) Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC0_H3_ESP_H_ADDR_W2_Msk (_UINT16_(0xFFFF) << ESPI_MEMORY_BAR_LDH_ACPI_EC0_H3_ESP_H_ADDR_W2_Pos) /* (ESPI_MEMORY_BAR_LDH_ACPI_EC0_H3) Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC0_H3_ESP_H_ADDR_W2(value) (ESPI_MEMORY_BAR_LDH_ACPI_EC0_H3_ESP_H_ADDR_W2_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDH_ACPI_EC0_H3_ESP_H_ADDR_W2_Pos)) /* Assigment of value for ESP_H_ADDR_W2 in the ESPI_MEMORY_BAR_LDH_ACPI_EC0_H3 register */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC0_H3_Msk   _UINT16_(0xFFFF)                                     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC0_H3) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDH_ACPI_EC0_H4 : (ESPI_MEMORY Offset: 0x342) (R/W 16) ACPI EC Channel 0 Memory BAR Configuration Register (Word 4) -------- */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC0_H4_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_LDH_ACPI_EC0_H4) ACPI EC Channel 0 Memory BAR Configuration Register (Word 4)  Reset Value */

#define ESPI_MEMORY_BAR_LDH_ACPI_EC0_H4_ESP_H_ADDR_W3_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDH_ACPI_EC0_H4) Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC0_H4_ESP_H_ADDR_W3_Msk (_UINT16_(0xFFFF) << ESPI_MEMORY_BAR_LDH_ACPI_EC0_H4_ESP_H_ADDR_W3_Pos) /* (ESPI_MEMORY_BAR_LDH_ACPI_EC0_H4) Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC0_H4_ESP_H_ADDR_W3(value) (ESPI_MEMORY_BAR_LDH_ACPI_EC0_H4_ESP_H_ADDR_W3_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDH_ACPI_EC0_H4_ESP_H_ADDR_W3_Pos)) /* Assigment of value for ESP_H_ADDR_W3 in the ESPI_MEMORY_BAR_LDH_ACPI_EC0_H4 register */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC0_H4_Msk   _UINT16_(0xFFFF)                                     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC0_H4) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDH_ACPI_EC1_H0 : (ESPI_MEMORY Offset: 0x344) (R/W 16) ACPI EC Channel 1 Memory BAR Configuration Register (Word 0) -------- */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC1_H0_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_LDH_ACPI_EC1_H0) ACPI EC Channel 1 Memory BAR Configuration Register (Word 0)  Reset Value */

#define ESPI_MEMORY_BAR_LDH_ACPI_EC1_H0_VALID_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDH_ACPI_EC1_H0) 1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. Position */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC1_H0_VALID_Msk (_UINT16_(0x1) << ESPI_MEMORY_BAR_LDH_ACPI_EC1_H0_VALID_Pos) /* (ESPI_MEMORY_BAR_LDH_ACPI_EC1_H0) 1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. Mask */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC1_H0_VALID(value) (ESPI_MEMORY_BAR_LDH_ACPI_EC1_H0_VALID_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDH_ACPI_EC1_H0_VALID_Pos)) /* Assigment of value for VALID in the ESPI_MEMORY_BAR_LDH_ACPI_EC1_H0 register */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC1_H0_Msk   _UINT16_(0x0001)                                     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC1_H0) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDH_ACPI_EC1_H1 : (ESPI_MEMORY Offset: 0x346) (R/W 16) ACPI EC Channel 1 Memory BAR Configuration Register (Word 1) -------- */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC1_H1_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_LDH_ACPI_EC1_H1) ACPI EC Channel 1 Memory BAR Configuration Register (Word 1)  Reset Value */

#define ESPI_MEMORY_BAR_LDH_ACPI_EC1_H1_ESP_H_ADDR_W0_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDH_ACPI_EC1_H1) Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC1_H1_ESP_H_ADDR_W0_Msk (_UINT16_(0xFFFF) << ESPI_MEMORY_BAR_LDH_ACPI_EC1_H1_ESP_H_ADDR_W0_Pos) /* (ESPI_MEMORY_BAR_LDH_ACPI_EC1_H1) Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC1_H1_ESP_H_ADDR_W0(value) (ESPI_MEMORY_BAR_LDH_ACPI_EC1_H1_ESP_H_ADDR_W0_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDH_ACPI_EC1_H1_ESP_H_ADDR_W0_Pos)) /* Assigment of value for ESP_H_ADDR_W0 in the ESPI_MEMORY_BAR_LDH_ACPI_EC1_H1 register */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC1_H1_Msk   _UINT16_(0xFFFF)                                     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC1_H1) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDH_ACPI_EC1_H2 : (ESPI_MEMORY Offset: 0x348) (R/W 16) ACPI EC Channel 1 Memory BAR Configuration Register (Word 2) -------- */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC1_H2_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_LDH_ACPI_EC1_H2) ACPI EC Channel 1 Memory BAR Configuration Register (Word 2)  Reset Value */

#define ESPI_MEMORY_BAR_LDH_ACPI_EC1_H2_ESP_H_ADDR_W1_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDH_ACPI_EC1_H2) Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC1_H2_ESP_H_ADDR_W1_Msk (_UINT16_(0xFFFF) << ESPI_MEMORY_BAR_LDH_ACPI_EC1_H2_ESP_H_ADDR_W1_Pos) /* (ESPI_MEMORY_BAR_LDH_ACPI_EC1_H2) Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC1_H2_ESP_H_ADDR_W1(value) (ESPI_MEMORY_BAR_LDH_ACPI_EC1_H2_ESP_H_ADDR_W1_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDH_ACPI_EC1_H2_ESP_H_ADDR_W1_Pos)) /* Assigment of value for ESP_H_ADDR_W1 in the ESPI_MEMORY_BAR_LDH_ACPI_EC1_H2 register */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC1_H2_Msk   _UINT16_(0xFFFF)                                     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC1_H2) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDH_ACPI_EC1_H3 : (ESPI_MEMORY Offset: 0x34A) (R/W 16) ACPI EC Channel 1 Memory BAR Configuration Register (Word 3) -------- */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC1_H3_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_LDH_ACPI_EC1_H3) ACPI EC Channel 1 Memory BAR Configuration Register (Word 3)  Reset Value */

#define ESPI_MEMORY_BAR_LDH_ACPI_EC1_H3_ESP_H_ADDR_W2_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDH_ACPI_EC1_H3) Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC1_H3_ESP_H_ADDR_W2_Msk (_UINT16_(0xFFFF) << ESPI_MEMORY_BAR_LDH_ACPI_EC1_H3_ESP_H_ADDR_W2_Pos) /* (ESPI_MEMORY_BAR_LDH_ACPI_EC1_H3) Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC1_H3_ESP_H_ADDR_W2(value) (ESPI_MEMORY_BAR_LDH_ACPI_EC1_H3_ESP_H_ADDR_W2_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDH_ACPI_EC1_H3_ESP_H_ADDR_W2_Pos)) /* Assigment of value for ESP_H_ADDR_W2 in the ESPI_MEMORY_BAR_LDH_ACPI_EC1_H3 register */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC1_H3_Msk   _UINT16_(0xFFFF)                                     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC1_H3) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDH_ACPI_EC1_H4 : (ESPI_MEMORY Offset: 0x34C) (R/W 16) ACPI EC Channel 1 Memory BAR Configuration Register (Word 4) -------- */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC1_H4_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_LDH_ACPI_EC1_H4) ACPI EC Channel 1 Memory BAR Configuration Register (Word 4)  Reset Value */

#define ESPI_MEMORY_BAR_LDH_ACPI_EC1_H4_ESP_H_ADDR_W3_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDH_ACPI_EC1_H4) Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC1_H4_ESP_H_ADDR_W3_Msk (_UINT16_(0xFFFF) << ESPI_MEMORY_BAR_LDH_ACPI_EC1_H4_ESP_H_ADDR_W3_Pos) /* (ESPI_MEMORY_BAR_LDH_ACPI_EC1_H4) Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC1_H4_ESP_H_ADDR_W3(value) (ESPI_MEMORY_BAR_LDH_ACPI_EC1_H4_ESP_H_ADDR_W3_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDH_ACPI_EC1_H4_ESP_H_ADDR_W3_Pos)) /* Assigment of value for ESP_H_ADDR_W3 in the ESPI_MEMORY_BAR_LDH_ACPI_EC1_H4 register */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC1_H4_Msk   _UINT16_(0xFFFF)                                     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC1_H4) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDH_ACPI_EC2_H0 : (ESPI_MEMORY Offset: 0x34E) (R/W 16) ACPI EC Channel 2 Memory BAR Configuration Register (Word 0) -------- */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC2_H0_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_LDH_ACPI_EC2_H0) ACPI EC Channel 2 Memory BAR Configuration Register (Word 0)  Reset Value */

#define ESPI_MEMORY_BAR_LDH_ACPI_EC2_H0_VALID_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDH_ACPI_EC2_H0) 1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. Position */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC2_H0_VALID_Msk (_UINT16_(0x1) << ESPI_MEMORY_BAR_LDH_ACPI_EC2_H0_VALID_Pos) /* (ESPI_MEMORY_BAR_LDH_ACPI_EC2_H0) 1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. Mask */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC2_H0_VALID(value) (ESPI_MEMORY_BAR_LDH_ACPI_EC2_H0_VALID_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDH_ACPI_EC2_H0_VALID_Pos)) /* Assigment of value for VALID in the ESPI_MEMORY_BAR_LDH_ACPI_EC2_H0 register */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC2_H0_Msk   _UINT16_(0x0001)                                     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC2_H0) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDH_ACPI_EC2_H1 : (ESPI_MEMORY Offset: 0x350) (R/W 16) ACPI EC Channel 2 Memory BAR Configuration Register (Word 1) -------- */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC2_H1_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_LDH_ACPI_EC2_H1) ACPI EC Channel 2 Memory BAR Configuration Register (Word 1)  Reset Value */

#define ESPI_MEMORY_BAR_LDH_ACPI_EC2_H1_ESP_H_ADDR_W0_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDH_ACPI_EC2_H1) Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC2_H1_ESP_H_ADDR_W0_Msk (_UINT16_(0xFFFF) << ESPI_MEMORY_BAR_LDH_ACPI_EC2_H1_ESP_H_ADDR_W0_Pos) /* (ESPI_MEMORY_BAR_LDH_ACPI_EC2_H1) Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC2_H1_ESP_H_ADDR_W0(value) (ESPI_MEMORY_BAR_LDH_ACPI_EC2_H1_ESP_H_ADDR_W0_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDH_ACPI_EC2_H1_ESP_H_ADDR_W0_Pos)) /* Assigment of value for ESP_H_ADDR_W0 in the ESPI_MEMORY_BAR_LDH_ACPI_EC2_H1 register */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC2_H1_Msk   _UINT16_(0xFFFF)                                     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC2_H1) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDH_ACPI_EC2_H2 : (ESPI_MEMORY Offset: 0x352) (R/W 16) ACPI EC Channel 2 Memory BAR Configuration Register (Word 2) -------- */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC2_H2_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_LDH_ACPI_EC2_H2) ACPI EC Channel 2 Memory BAR Configuration Register (Word 2)  Reset Value */

#define ESPI_MEMORY_BAR_LDH_ACPI_EC2_H2_ESP_H_ADDR_W1_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDH_ACPI_EC2_H2) Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC2_H2_ESP_H_ADDR_W1_Msk (_UINT16_(0xFFFF) << ESPI_MEMORY_BAR_LDH_ACPI_EC2_H2_ESP_H_ADDR_W1_Pos) /* (ESPI_MEMORY_BAR_LDH_ACPI_EC2_H2) Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC2_H2_ESP_H_ADDR_W1(value) (ESPI_MEMORY_BAR_LDH_ACPI_EC2_H2_ESP_H_ADDR_W1_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDH_ACPI_EC2_H2_ESP_H_ADDR_W1_Pos)) /* Assigment of value for ESP_H_ADDR_W1 in the ESPI_MEMORY_BAR_LDH_ACPI_EC2_H2 register */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC2_H2_Msk   _UINT16_(0xFFFF)                                     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC2_H2) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDH_ACPI_EC2_H3 : (ESPI_MEMORY Offset: 0x354) (R/W 16) ACPI EC Channel 2 Memory BAR Configuration Register (Word 3) -------- */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC2_H3_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_LDH_ACPI_EC2_H3) ACPI EC Channel 2 Memory BAR Configuration Register (Word 3)  Reset Value */

#define ESPI_MEMORY_BAR_LDH_ACPI_EC2_H3_ESP_H_ADDR_W2_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDH_ACPI_EC2_H3) Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC2_H3_ESP_H_ADDR_W2_Msk (_UINT16_(0xFFFF) << ESPI_MEMORY_BAR_LDH_ACPI_EC2_H3_ESP_H_ADDR_W2_Pos) /* (ESPI_MEMORY_BAR_LDH_ACPI_EC2_H3) Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC2_H3_ESP_H_ADDR_W2(value) (ESPI_MEMORY_BAR_LDH_ACPI_EC2_H3_ESP_H_ADDR_W2_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDH_ACPI_EC2_H3_ESP_H_ADDR_W2_Pos)) /* Assigment of value for ESP_H_ADDR_W2 in the ESPI_MEMORY_BAR_LDH_ACPI_EC2_H3 register */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC2_H3_Msk   _UINT16_(0xFFFF)                                     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC2_H3) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDH_ACPI_EC2_H4 : (ESPI_MEMORY Offset: 0x356) (R/W 16) ACPI EC Channel 2 Memory BAR Configuration Register (Word 4) -------- */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC2_H4_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_LDH_ACPI_EC2_H4) ACPI EC Channel 2 Memory BAR Configuration Register (Word 4)  Reset Value */

#define ESPI_MEMORY_BAR_LDH_ACPI_EC2_H4_ESP_H_ADDR_W3_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDH_ACPI_EC2_H4) Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC2_H4_ESP_H_ADDR_W3_Msk (_UINT16_(0xFFFF) << ESPI_MEMORY_BAR_LDH_ACPI_EC2_H4_ESP_H_ADDR_W3_Pos) /* (ESPI_MEMORY_BAR_LDH_ACPI_EC2_H4) Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC2_H4_ESP_H_ADDR_W3(value) (ESPI_MEMORY_BAR_LDH_ACPI_EC2_H4_ESP_H_ADDR_W3_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDH_ACPI_EC2_H4_ESP_H_ADDR_W3_Pos)) /* Assigment of value for ESP_H_ADDR_W3 in the ESPI_MEMORY_BAR_LDH_ACPI_EC2_H4 register */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC2_H4_Msk   _UINT16_(0xFFFF)                                     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC2_H4) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDH_ACPI_EC3_H0 : (ESPI_MEMORY Offset: 0x358) (R/W 16) ACPI EC Channel 3 Memory BAR Configuration Register (Word 0) -------- */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC3_H0_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_LDH_ACPI_EC3_H0) ACPI EC Channel 3 Memory BAR Configuration Register (Word 0)  Reset Value */

#define ESPI_MEMORY_BAR_LDH_ACPI_EC3_H0_VALID_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDH_ACPI_EC3_H0) 1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. Position */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC3_H0_VALID_Msk (_UINT16_(0x1) << ESPI_MEMORY_BAR_LDH_ACPI_EC3_H0_VALID_Pos) /* (ESPI_MEMORY_BAR_LDH_ACPI_EC3_H0) 1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. Mask */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC3_H0_VALID(value) (ESPI_MEMORY_BAR_LDH_ACPI_EC3_H0_VALID_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDH_ACPI_EC3_H0_VALID_Pos)) /* Assigment of value for VALID in the ESPI_MEMORY_BAR_LDH_ACPI_EC3_H0 register */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC3_H0_Msk   _UINT16_(0x0001)                                     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC3_H0) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDH_ACPI_EC3_H1 : (ESPI_MEMORY Offset: 0x35A) (R/W 16) ACPI EC Channel 3 Memory BAR Configuration Register (Word 1) -------- */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC3_H1_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_LDH_ACPI_EC3_H1) ACPI EC Channel 3 Memory BAR Configuration Register (Word 1)  Reset Value */

#define ESPI_MEMORY_BAR_LDH_ACPI_EC3_H1_ESP_H_ADDR_W0_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDH_ACPI_EC3_H1) Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC3_H1_ESP_H_ADDR_W0_Msk (_UINT16_(0xFFFF) << ESPI_MEMORY_BAR_LDH_ACPI_EC3_H1_ESP_H_ADDR_W0_Pos) /* (ESPI_MEMORY_BAR_LDH_ACPI_EC3_H1) Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC3_H1_ESP_H_ADDR_W0(value) (ESPI_MEMORY_BAR_LDH_ACPI_EC3_H1_ESP_H_ADDR_W0_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDH_ACPI_EC3_H1_ESP_H_ADDR_W0_Pos)) /* Assigment of value for ESP_H_ADDR_W0 in the ESPI_MEMORY_BAR_LDH_ACPI_EC3_H1 register */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC3_H1_Msk   _UINT16_(0xFFFF)                                     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC3_H1) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDH_ACPI_EC3_H2 : (ESPI_MEMORY Offset: 0x35C) (R/W 16) ACPI EC Channel 3 Memory BAR Configuration Register (Word 2) -------- */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC3_H2_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_LDH_ACPI_EC3_H2) ACPI EC Channel 3 Memory BAR Configuration Register (Word 2)  Reset Value */

#define ESPI_MEMORY_BAR_LDH_ACPI_EC3_H2_ESP_H_ADDR_W1_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDH_ACPI_EC3_H2) Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC3_H2_ESP_H_ADDR_W1_Msk (_UINT16_(0xFFFF) << ESPI_MEMORY_BAR_LDH_ACPI_EC3_H2_ESP_H_ADDR_W1_Pos) /* (ESPI_MEMORY_BAR_LDH_ACPI_EC3_H2) Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC3_H2_ESP_H_ADDR_W1(value) (ESPI_MEMORY_BAR_LDH_ACPI_EC3_H2_ESP_H_ADDR_W1_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDH_ACPI_EC3_H2_ESP_H_ADDR_W1_Pos)) /* Assigment of value for ESP_H_ADDR_W1 in the ESPI_MEMORY_BAR_LDH_ACPI_EC3_H2 register */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC3_H2_Msk   _UINT16_(0xFFFF)                                     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC3_H2) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDH_ACPI_EC3_H3 : (ESPI_MEMORY Offset: 0x35E) (R/W 16) ACPI EC Channel 3 Memory BAR Configuration Register (Word 3) -------- */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC3_H3_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_LDH_ACPI_EC3_H3) ACPI EC Channel 3 Memory BAR Configuration Register (Word 3)  Reset Value */

#define ESPI_MEMORY_BAR_LDH_ACPI_EC3_H3_ESP_H_ADDR_W2_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDH_ACPI_EC3_H3) Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC3_H3_ESP_H_ADDR_W2_Msk (_UINT16_(0xFFFF) << ESPI_MEMORY_BAR_LDH_ACPI_EC3_H3_ESP_H_ADDR_W2_Pos) /* (ESPI_MEMORY_BAR_LDH_ACPI_EC3_H3) Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC3_H3_ESP_H_ADDR_W2(value) (ESPI_MEMORY_BAR_LDH_ACPI_EC3_H3_ESP_H_ADDR_W2_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDH_ACPI_EC3_H3_ESP_H_ADDR_W2_Pos)) /* Assigment of value for ESP_H_ADDR_W2 in the ESPI_MEMORY_BAR_LDH_ACPI_EC3_H3 register */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC3_H3_Msk   _UINT16_(0xFFFF)                                     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC3_H3) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDH_ACPI_EC3_H4 : (ESPI_MEMORY Offset: 0x360) (R/W 16) ACPI EC Channel 3 Memory BAR Configuration Register (Word 4) -------- */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC3_H4_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_LDH_ACPI_EC3_H4) ACPI EC Channel 3 Memory BAR Configuration Register (Word 4)  Reset Value */

#define ESPI_MEMORY_BAR_LDH_ACPI_EC3_H4_ESP_H_ADDR_W3_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDH_ACPI_EC3_H4) Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC3_H4_ESP_H_ADDR_W3_Msk (_UINT16_(0xFFFF) << ESPI_MEMORY_BAR_LDH_ACPI_EC3_H4_ESP_H_ADDR_W3_Pos) /* (ESPI_MEMORY_BAR_LDH_ACPI_EC3_H4) Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC3_H4_ESP_H_ADDR_W3(value) (ESPI_MEMORY_BAR_LDH_ACPI_EC3_H4_ESP_H_ADDR_W3_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDH_ACPI_EC3_H4_ESP_H_ADDR_W3_Pos)) /* Assigment of value for ESP_H_ADDR_W3 in the ESPI_MEMORY_BAR_LDH_ACPI_EC3_H4 register */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC3_H4_Msk   _UINT16_(0xFFFF)                                     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC3_H4) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDH_EM0_H0 : (ESPI_MEMORY Offset: 0x36C) (R/W 16) EMI 0 Memory BAR Configuration Register (Word 0) -------- */
#define ESPI_MEMORY_BAR_LDH_EM0_H0_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_LDH_EM0_H0) EMI 0 Memory BAR Configuration Register (Word 0)  Reset Value */

#define ESPI_MEMORY_BAR_LDH_EM0_H0_VALID_Pos  _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDH_EM0_H0) 1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. Position */
#define ESPI_MEMORY_BAR_LDH_EM0_H0_VALID_Msk  (_UINT16_(0x1) << ESPI_MEMORY_BAR_LDH_EM0_H0_VALID_Pos) /* (ESPI_MEMORY_BAR_LDH_EM0_H0) 1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. Mask */
#define ESPI_MEMORY_BAR_LDH_EM0_H0_VALID(value) (ESPI_MEMORY_BAR_LDH_EM0_H0_VALID_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDH_EM0_H0_VALID_Pos)) /* Assigment of value for VALID in the ESPI_MEMORY_BAR_LDH_EM0_H0 register */
#define ESPI_MEMORY_BAR_LDH_EM0_H0_Msk        _UINT16_(0x0001)                                     /* (ESPI_MEMORY_BAR_LDH_EM0_H0) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDH_EM0_H1 : (ESPI_MEMORY Offset: 0x36E) (R/W 16) EMI 0 Memory BAR Configuration Address Register  (Word 1) -------- */
#define ESPI_MEMORY_BAR_LDH_EM0_H1_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_LDH_EM0_H1) EMI 0 Memory BAR Configuration Address Register  (Word 1)  Reset Value */

#define ESPI_MEMORY_BAR_LDH_EM0_H1_ESP_H_ADDR_W0_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDH_EM0_H1) Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_BAR_LDH_EM0_H1_ESP_H_ADDR_W0_Msk (_UINT16_(0xFFFF) << ESPI_MEMORY_BAR_LDH_EM0_H1_ESP_H_ADDR_W0_Pos) /* (ESPI_MEMORY_BAR_LDH_EM0_H1) Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_BAR_LDH_EM0_H1_ESP_H_ADDR_W0(value) (ESPI_MEMORY_BAR_LDH_EM0_H1_ESP_H_ADDR_W0_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDH_EM0_H1_ESP_H_ADDR_W0_Pos)) /* Assigment of value for ESP_H_ADDR_W0 in the ESPI_MEMORY_BAR_LDH_EM0_H1 register */
#define ESPI_MEMORY_BAR_LDH_EM0_H1_Msk        _UINT16_(0xFFFF)                                     /* (ESPI_MEMORY_BAR_LDH_EM0_H1) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDH_EM0_H2 : (ESPI_MEMORY Offset: 0x370) (R/W 16) EMI 0 Memory BAR Configuration Address Register  (Word 2) -------- */
#define ESPI_MEMORY_BAR_LDH_EM0_H2_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_LDH_EM0_H2) EMI 0 Memory BAR Configuration Address Register  (Word 2)  Reset Value */

#define ESPI_MEMORY_BAR_LDH_EM0_H2_ESP_H_ADDR_W1_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDH_EM0_H2) Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_BAR_LDH_EM0_H2_ESP_H_ADDR_W1_Msk (_UINT16_(0xFFFF) << ESPI_MEMORY_BAR_LDH_EM0_H2_ESP_H_ADDR_W1_Pos) /* (ESPI_MEMORY_BAR_LDH_EM0_H2) Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_BAR_LDH_EM0_H2_ESP_H_ADDR_W1(value) (ESPI_MEMORY_BAR_LDH_EM0_H2_ESP_H_ADDR_W1_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDH_EM0_H2_ESP_H_ADDR_W1_Pos)) /* Assigment of value for ESP_H_ADDR_W1 in the ESPI_MEMORY_BAR_LDH_EM0_H2 register */
#define ESPI_MEMORY_BAR_LDH_EM0_H2_Msk        _UINT16_(0xFFFF)                                     /* (ESPI_MEMORY_BAR_LDH_EM0_H2) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDH_EM0_H3 : (ESPI_MEMORY Offset: 0x372) (R/W 16) EMI 0 Memory BAR Configuration Address Register  (Word 3) -------- */
#define ESPI_MEMORY_BAR_LDH_EM0_H3_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_LDH_EM0_H3) EMI 0 Memory BAR Configuration Address Register  (Word 3)  Reset Value */

#define ESPI_MEMORY_BAR_LDH_EM0_H3_ESP_H_ADDR_W2_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDH_EM0_H3) Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_BAR_LDH_EM0_H3_ESP_H_ADDR_W2_Msk (_UINT16_(0xFFFF) << ESPI_MEMORY_BAR_LDH_EM0_H3_ESP_H_ADDR_W2_Pos) /* (ESPI_MEMORY_BAR_LDH_EM0_H3) Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_BAR_LDH_EM0_H3_ESP_H_ADDR_W2(value) (ESPI_MEMORY_BAR_LDH_EM0_H3_ESP_H_ADDR_W2_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDH_EM0_H3_ESP_H_ADDR_W2_Pos)) /* Assigment of value for ESP_H_ADDR_W2 in the ESPI_MEMORY_BAR_LDH_EM0_H3 register */
#define ESPI_MEMORY_BAR_LDH_EM0_H3_Msk        _UINT16_(0xFFFF)                                     /* (ESPI_MEMORY_BAR_LDH_EM0_H3) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDH_EM0_H4 : (ESPI_MEMORY Offset: 0x374) (R/W 16) EMI 0 Memory BAR Configuration Address Register  (Word 4) -------- */
#define ESPI_MEMORY_BAR_LDH_EM0_H4_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_LDH_EM0_H4) EMI 0 Memory BAR Configuration Address Register  (Word 4)  Reset Value */

#define ESPI_MEMORY_BAR_LDH_EM0_H4_ESP_H_ADDR_W3_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDH_EM0_H4) Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_BAR_LDH_EM0_H4_ESP_H_ADDR_W3_Msk (_UINT16_(0xFFFF) << ESPI_MEMORY_BAR_LDH_EM0_H4_ESP_H_ADDR_W3_Pos) /* (ESPI_MEMORY_BAR_LDH_EM0_H4) Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_BAR_LDH_EM0_H4_ESP_H_ADDR_W3(value) (ESPI_MEMORY_BAR_LDH_EM0_H4_ESP_H_ADDR_W3_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDH_EM0_H4_ESP_H_ADDR_W3_Pos)) /* Assigment of value for ESP_H_ADDR_W3 in the ESPI_MEMORY_BAR_LDH_EM0_H4 register */
#define ESPI_MEMORY_BAR_LDH_EM0_H4_Msk        _UINT16_(0xFFFF)                                     /* (ESPI_MEMORY_BAR_LDH_EM0_H4) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDH_EM1_H0 : (ESPI_MEMORY Offset: 0x376) (R/W 16) EMI 1 Memory BAR Configuration Register (Word 0) ) -------- */
#define ESPI_MEMORY_BAR_LDH_EM1_H0_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_LDH_EM1_H0) EMI 1 Memory BAR Configuration Register (Word 0) )  Reset Value */

#define ESPI_MEMORY_BAR_LDH_EM1_H0_VALID_Pos  _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDH_EM1_H0) 1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. Position */
#define ESPI_MEMORY_BAR_LDH_EM1_H0_VALID_Msk  (_UINT16_(0x1) << ESPI_MEMORY_BAR_LDH_EM1_H0_VALID_Pos) /* (ESPI_MEMORY_BAR_LDH_EM1_H0) 1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. Mask */
#define ESPI_MEMORY_BAR_LDH_EM1_H0_VALID(value) (ESPI_MEMORY_BAR_LDH_EM1_H0_VALID_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDH_EM1_H0_VALID_Pos)) /* Assigment of value for VALID in the ESPI_MEMORY_BAR_LDH_EM1_H0 register */
#define ESPI_MEMORY_BAR_LDH_EM1_H0_Msk        _UINT16_(0x0001)                                     /* (ESPI_MEMORY_BAR_LDH_EM1_H0) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDH_EM1_H1 : (ESPI_MEMORY Offset: 0x378) (R/W 16) EMI 1 Memory BAR Configuration Register (Word 1) ) -------- */
#define ESPI_MEMORY_BAR_LDH_EM1_H1_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_LDH_EM1_H1) EMI 1 Memory BAR Configuration Register (Word 1) )  Reset Value */

#define ESPI_MEMORY_BAR_LDH_EM1_H1_ESP_H_ADDR_W0_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDH_EM1_H1) Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_BAR_LDH_EM1_H1_ESP_H_ADDR_W0_Msk (_UINT16_(0xFFFF) << ESPI_MEMORY_BAR_LDH_EM1_H1_ESP_H_ADDR_W0_Pos) /* (ESPI_MEMORY_BAR_LDH_EM1_H1) Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_BAR_LDH_EM1_H1_ESP_H_ADDR_W0(value) (ESPI_MEMORY_BAR_LDH_EM1_H1_ESP_H_ADDR_W0_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDH_EM1_H1_ESP_H_ADDR_W0_Pos)) /* Assigment of value for ESP_H_ADDR_W0 in the ESPI_MEMORY_BAR_LDH_EM1_H1 register */
#define ESPI_MEMORY_BAR_LDH_EM1_H1_Msk        _UINT16_(0xFFFF)                                     /* (ESPI_MEMORY_BAR_LDH_EM1_H1) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDH_EM1_H2 : (ESPI_MEMORY Offset: 0x37A) (R/W 16) EMI 1 Memory BAR Configuration Register (Word 2) ) -------- */
#define ESPI_MEMORY_BAR_LDH_EM1_H2_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_LDH_EM1_H2) EMI 1 Memory BAR Configuration Register (Word 2) )  Reset Value */

#define ESPI_MEMORY_BAR_LDH_EM1_H2_ESP_H_ADDR_W1_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDH_EM1_H2) Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_BAR_LDH_EM1_H2_ESP_H_ADDR_W1_Msk (_UINT16_(0xFFFF) << ESPI_MEMORY_BAR_LDH_EM1_H2_ESP_H_ADDR_W1_Pos) /* (ESPI_MEMORY_BAR_LDH_EM1_H2) Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_BAR_LDH_EM1_H2_ESP_H_ADDR_W1(value) (ESPI_MEMORY_BAR_LDH_EM1_H2_ESP_H_ADDR_W1_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDH_EM1_H2_ESP_H_ADDR_W1_Pos)) /* Assigment of value for ESP_H_ADDR_W1 in the ESPI_MEMORY_BAR_LDH_EM1_H2 register */
#define ESPI_MEMORY_BAR_LDH_EM1_H2_Msk        _UINT16_(0xFFFF)                                     /* (ESPI_MEMORY_BAR_LDH_EM1_H2) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDH_EM1_H3 : (ESPI_MEMORY Offset: 0x37C) (R/W 16) EMI 1 Memory BAR Configuration Register (Word 3) ) -------- */
#define ESPI_MEMORY_BAR_LDH_EM1_H3_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_LDH_EM1_H3) EMI 1 Memory BAR Configuration Register (Word 3) )  Reset Value */

#define ESPI_MEMORY_BAR_LDH_EM1_H3_ESP_H_ADDR_W2_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDH_EM1_H3) Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_BAR_LDH_EM1_H3_ESP_H_ADDR_W2_Msk (_UINT16_(0xFFFF) << ESPI_MEMORY_BAR_LDH_EM1_H3_ESP_H_ADDR_W2_Pos) /* (ESPI_MEMORY_BAR_LDH_EM1_H3) Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_BAR_LDH_EM1_H3_ESP_H_ADDR_W2(value) (ESPI_MEMORY_BAR_LDH_EM1_H3_ESP_H_ADDR_W2_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDH_EM1_H3_ESP_H_ADDR_W2_Pos)) /* Assigment of value for ESP_H_ADDR_W2 in the ESPI_MEMORY_BAR_LDH_EM1_H3 register */
#define ESPI_MEMORY_BAR_LDH_EM1_H3_Msk        _UINT16_(0xFFFF)                                     /* (ESPI_MEMORY_BAR_LDH_EM1_H3) Register Mask  */


/* -------- ESPI_MEMORY_BAR_LDH_EM1_H4 : (ESPI_MEMORY Offset: 0x37E) (R/W 16) EMI 1 Memory BAR Configuration Register (Word 4) ) -------- */
#define ESPI_MEMORY_BAR_LDH_EM1_H4_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_LDH_EM1_H4) EMI 1 Memory BAR Configuration Register (Word 4) )  Reset Value */

#define ESPI_MEMORY_BAR_LDH_EM1_H4_ESP_H_ADDR_W3_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_LDH_EM1_H4) Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_BAR_LDH_EM1_H4_ESP_H_ADDR_W3_Msk (_UINT16_(0xFFFF) << ESPI_MEMORY_BAR_LDH_EM1_H4_ESP_H_ADDR_W3_Pos) /* (ESPI_MEMORY_BAR_LDH_EM1_H4) Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_BAR_LDH_EM1_H4_ESP_H_ADDR_W3(value) (ESPI_MEMORY_BAR_LDH_EM1_H4_ESP_H_ADDR_W3_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_LDH_EM1_H4_ESP_H_ADDR_W3_Pos)) /* Assigment of value for ESP_H_ADDR_W3 in the ESPI_MEMORY_BAR_LDH_EM1_H4 register */
#define ESPI_MEMORY_BAR_LDH_EM1_H4_Msk        _UINT16_(0xFFFF)                                     /* (ESPI_MEMORY_BAR_LDH_EM1_H4) Register Mask  */


/* -------- ESPI_MEMORY_BAR_SRAM0_HOST_H0 : (ESPI_MEMORY Offset: 0x3AC) (R/W 16) SRAM BAR 0 Configuration Register (Word 0) ) -------- */
#define ESPI_MEMORY_BAR_SRAM0_HOST_H0_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_SRAM0_HOST_H0) SRAM BAR 0 Configuration Register (Word 0) )  Reset Value */

#define ESPI_MEMORY_BAR_SRAM0_HOST_H0_VALID_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_SRAM0_HOST_H0) 1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. Position */
#define ESPI_MEMORY_BAR_SRAM0_HOST_H0_VALID_Msk (_UINT16_(0x1) << ESPI_MEMORY_BAR_SRAM0_HOST_H0_VALID_Pos) /* (ESPI_MEMORY_BAR_SRAM0_HOST_H0) 1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. Mask */
#define ESPI_MEMORY_BAR_SRAM0_HOST_H0_VALID(value) (ESPI_MEMORY_BAR_SRAM0_HOST_H0_VALID_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_SRAM0_HOST_H0_VALID_Pos)) /* Assigment of value for VALID in the ESPI_MEMORY_BAR_SRAM0_HOST_H0 register */
#define ESPI_MEMORY_BAR_SRAM0_HOST_H0_Msk     _UINT16_(0x0001)                                     /* (ESPI_MEMORY_BAR_SRAM0_HOST_H0) Register Mask  */


/* -------- ESPI_MEMORY_BAR_SRAM0_HOST_H1 : (ESPI_MEMORY Offset: 0x3AE) (R/W 16) SRAM BAR 0 Configuration Register (Word 1) ) -------- */
#define ESPI_MEMORY_BAR_SRAM0_HOST_H1_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_SRAM0_HOST_H1) SRAM BAR 0 Configuration Register (Word 1) )  Reset Value */

#define ESPI_MEMORY_BAR_SRAM0_HOST_H1_ESP_H_ADDR_W0_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_SRAM0_HOST_H1) Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_BAR_SRAM0_HOST_H1_ESP_H_ADDR_W0_Msk (_UINT16_(0xFFFF) << ESPI_MEMORY_BAR_SRAM0_HOST_H1_ESP_H_ADDR_W0_Pos) /* (ESPI_MEMORY_BAR_SRAM0_HOST_H1) Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_BAR_SRAM0_HOST_H1_ESP_H_ADDR_W0(value) (ESPI_MEMORY_BAR_SRAM0_HOST_H1_ESP_H_ADDR_W0_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_SRAM0_HOST_H1_ESP_H_ADDR_W0_Pos)) /* Assigment of value for ESP_H_ADDR_W0 in the ESPI_MEMORY_BAR_SRAM0_HOST_H1 register */
#define ESPI_MEMORY_BAR_SRAM0_HOST_H1_Msk     _UINT16_(0xFFFF)                                     /* (ESPI_MEMORY_BAR_SRAM0_HOST_H1) Register Mask  */


/* -------- ESPI_MEMORY_BAR_SRAM0_HOST_H2 : (ESPI_MEMORY Offset: 0x3B0) (R/W 16) SRAM BAR 0 Configuration Register (Word 2) ) -------- */
#define ESPI_MEMORY_BAR_SRAM0_HOST_H2_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_SRAM0_HOST_H2) SRAM BAR 0 Configuration Register (Word 2) )  Reset Value */

#define ESPI_MEMORY_BAR_SRAM0_HOST_H2_ESP_H_ADDR_W1_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_SRAM0_HOST_H2) Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_BAR_SRAM0_HOST_H2_ESP_H_ADDR_W1_Msk (_UINT16_(0xFFFF) << ESPI_MEMORY_BAR_SRAM0_HOST_H2_ESP_H_ADDR_W1_Pos) /* (ESPI_MEMORY_BAR_SRAM0_HOST_H2) Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_BAR_SRAM0_HOST_H2_ESP_H_ADDR_W1(value) (ESPI_MEMORY_BAR_SRAM0_HOST_H2_ESP_H_ADDR_W1_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_SRAM0_HOST_H2_ESP_H_ADDR_W1_Pos)) /* Assigment of value for ESP_H_ADDR_W1 in the ESPI_MEMORY_BAR_SRAM0_HOST_H2 register */
#define ESPI_MEMORY_BAR_SRAM0_HOST_H2_Msk     _UINT16_(0xFFFF)                                     /* (ESPI_MEMORY_BAR_SRAM0_HOST_H2) Register Mask  */


/* -------- ESPI_MEMORY_BAR_SRAM0_HOST_H3 : (ESPI_MEMORY Offset: 0x3B2) (R/W 16) SRAM BAR 0 Configuration Register (Word 3) ) -------- */
#define ESPI_MEMORY_BAR_SRAM0_HOST_H3_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_SRAM0_HOST_H3) SRAM BAR 0 Configuration Register (Word 3) )  Reset Value */

#define ESPI_MEMORY_BAR_SRAM0_HOST_H3_ESP_H_ADDR_W2_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_SRAM0_HOST_H3) Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_BAR_SRAM0_HOST_H3_ESP_H_ADDR_W2_Msk (_UINT16_(0xFFFF) << ESPI_MEMORY_BAR_SRAM0_HOST_H3_ESP_H_ADDR_W2_Pos) /* (ESPI_MEMORY_BAR_SRAM0_HOST_H3) Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_BAR_SRAM0_HOST_H3_ESP_H_ADDR_W2(value) (ESPI_MEMORY_BAR_SRAM0_HOST_H3_ESP_H_ADDR_W2_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_SRAM0_HOST_H3_ESP_H_ADDR_W2_Pos)) /* Assigment of value for ESP_H_ADDR_W2 in the ESPI_MEMORY_BAR_SRAM0_HOST_H3 register */
#define ESPI_MEMORY_BAR_SRAM0_HOST_H3_Msk     _UINT16_(0xFFFF)                                     /* (ESPI_MEMORY_BAR_SRAM0_HOST_H3) Register Mask  */


/* -------- ESPI_MEMORY_BAR_SRAM0_HOST_H4 : (ESPI_MEMORY Offset: 0x3B4) (R/W 16) SRAM BAR 0 Configuration Register (Word 4) ) -------- */
#define ESPI_MEMORY_BAR_SRAM0_HOST_H4_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_SRAM0_HOST_H4) SRAM BAR 0 Configuration Register (Word 4) )  Reset Value */

#define ESPI_MEMORY_BAR_SRAM0_HOST_H4_ESP_H_ADDR_W3_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_SRAM0_HOST_H4) Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_BAR_SRAM0_HOST_H4_ESP_H_ADDR_W3_Msk (_UINT16_(0xFFFF) << ESPI_MEMORY_BAR_SRAM0_HOST_H4_ESP_H_ADDR_W3_Pos) /* (ESPI_MEMORY_BAR_SRAM0_HOST_H4) Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_BAR_SRAM0_HOST_H4_ESP_H_ADDR_W3(value) (ESPI_MEMORY_BAR_SRAM0_HOST_H4_ESP_H_ADDR_W3_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_SRAM0_HOST_H4_ESP_H_ADDR_W3_Pos)) /* Assigment of value for ESP_H_ADDR_W3 in the ESPI_MEMORY_BAR_SRAM0_HOST_H4 register */
#define ESPI_MEMORY_BAR_SRAM0_HOST_H4_Msk     _UINT16_(0xFFFF)                                     /* (ESPI_MEMORY_BAR_SRAM0_HOST_H4) Register Mask  */


/* -------- ESPI_MEMORY_BAR_SRAM1_HOST_H0 : (ESPI_MEMORY Offset: 0x3B6) (R/W 16) SRAM BAR 1 Configuration Register (Word 0) ) -------- */
#define ESPI_MEMORY_BAR_SRAM1_HOST_H0_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_SRAM1_HOST_H0) SRAM BAR 1 Configuration Register (Word 0) )  Reset Value */

#define ESPI_MEMORY_BAR_SRAM1_HOST_H0_VALID_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_SRAM1_HOST_H0) 1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. Position */
#define ESPI_MEMORY_BAR_SRAM1_HOST_H0_VALID_Msk (_UINT16_(0x1) << ESPI_MEMORY_BAR_SRAM1_HOST_H0_VALID_Pos) /* (ESPI_MEMORY_BAR_SRAM1_HOST_H0) 1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. Mask */
#define ESPI_MEMORY_BAR_SRAM1_HOST_H0_VALID(value) (ESPI_MEMORY_BAR_SRAM1_HOST_H0_VALID_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_SRAM1_HOST_H0_VALID_Pos)) /* Assigment of value for VALID in the ESPI_MEMORY_BAR_SRAM1_HOST_H0 register */
#define ESPI_MEMORY_BAR_SRAM1_HOST_H0_Msk     _UINT16_(0x0001)                                     /* (ESPI_MEMORY_BAR_SRAM1_HOST_H0) Register Mask  */


/* -------- ESPI_MEMORY_BAR_SRAM1_HOST_H1 : (ESPI_MEMORY Offset: 0x3B8) (R/W 16) SRAM BAR 1 Configuration Register (Word 1) ) -------- */
#define ESPI_MEMORY_BAR_SRAM1_HOST_H1_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_SRAM1_HOST_H1) SRAM BAR 1 Configuration Register (Word 1) )  Reset Value */

#define ESPI_MEMORY_BAR_SRAM1_HOST_H1_ESP_H_ADDR_W0_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_SRAM1_HOST_H1) Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_BAR_SRAM1_HOST_H1_ESP_H_ADDR_W0_Msk (_UINT16_(0xFFFF) << ESPI_MEMORY_BAR_SRAM1_HOST_H1_ESP_H_ADDR_W0_Pos) /* (ESPI_MEMORY_BAR_SRAM1_HOST_H1) Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_BAR_SRAM1_HOST_H1_ESP_H_ADDR_W0(value) (ESPI_MEMORY_BAR_SRAM1_HOST_H1_ESP_H_ADDR_W0_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_SRAM1_HOST_H1_ESP_H_ADDR_W0_Pos)) /* Assigment of value for ESP_H_ADDR_W0 in the ESPI_MEMORY_BAR_SRAM1_HOST_H1 register */
#define ESPI_MEMORY_BAR_SRAM1_HOST_H1_Msk     _UINT16_(0xFFFF)                                     /* (ESPI_MEMORY_BAR_SRAM1_HOST_H1) Register Mask  */


/* -------- ESPI_MEMORY_BAR_SRAM1_HOST_H2 : (ESPI_MEMORY Offset: 0x3BA) (R/W 16) SRAM BAR 1 Configuration Register (Word 2) ) -------- */
#define ESPI_MEMORY_BAR_SRAM1_HOST_H2_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_SRAM1_HOST_H2) SRAM BAR 1 Configuration Register (Word 2) )  Reset Value */

#define ESPI_MEMORY_BAR_SRAM1_HOST_H2_ESP_H_ADDR_W1_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_SRAM1_HOST_H2) Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_BAR_SRAM1_HOST_H2_ESP_H_ADDR_W1_Msk (_UINT16_(0xFFFF) << ESPI_MEMORY_BAR_SRAM1_HOST_H2_ESP_H_ADDR_W1_Pos) /* (ESPI_MEMORY_BAR_SRAM1_HOST_H2) Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_BAR_SRAM1_HOST_H2_ESP_H_ADDR_W1(value) (ESPI_MEMORY_BAR_SRAM1_HOST_H2_ESP_H_ADDR_W1_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_SRAM1_HOST_H2_ESP_H_ADDR_W1_Pos)) /* Assigment of value for ESP_H_ADDR_W1 in the ESPI_MEMORY_BAR_SRAM1_HOST_H2 register */
#define ESPI_MEMORY_BAR_SRAM1_HOST_H2_Msk     _UINT16_(0xFFFF)                                     /* (ESPI_MEMORY_BAR_SRAM1_HOST_H2) Register Mask  */


/* -------- ESPI_MEMORY_BAR_SRAM1_HOST_H3 : (ESPI_MEMORY Offset: 0x3BC) (R/W 16) SRAM BAR 1 Configuration Register (Word 3) ) -------- */
#define ESPI_MEMORY_BAR_SRAM1_HOST_H3_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_SRAM1_HOST_H3) SRAM BAR 1 Configuration Register (Word 3) )  Reset Value */

#define ESPI_MEMORY_BAR_SRAM1_HOST_H3_ESP_H_ADDR_W2_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_SRAM1_HOST_H3) Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_BAR_SRAM1_HOST_H3_ESP_H_ADDR_W2_Msk (_UINT16_(0xFFFF) << ESPI_MEMORY_BAR_SRAM1_HOST_H3_ESP_H_ADDR_W2_Pos) /* (ESPI_MEMORY_BAR_SRAM1_HOST_H3) Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_BAR_SRAM1_HOST_H3_ESP_H_ADDR_W2(value) (ESPI_MEMORY_BAR_SRAM1_HOST_H3_ESP_H_ADDR_W2_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_SRAM1_HOST_H3_ESP_H_ADDR_W2_Pos)) /* Assigment of value for ESP_H_ADDR_W2 in the ESPI_MEMORY_BAR_SRAM1_HOST_H3 register */
#define ESPI_MEMORY_BAR_SRAM1_HOST_H3_Msk     _UINT16_(0xFFFF)                                     /* (ESPI_MEMORY_BAR_SRAM1_HOST_H3) Register Mask  */


/* -------- ESPI_MEMORY_BAR_SRAM1_HOST_H4 : (ESPI_MEMORY Offset: 0x3BE) (R/W 16) SRAM BAR 1 Configuration Register (Word 4) ) -------- */
#define ESPI_MEMORY_BAR_SRAM1_HOST_H4_RESETVALUE _UINT16_(0x00)                                       /*  (ESPI_MEMORY_BAR_SRAM1_HOST_H4) SRAM BAR 1 Configuration Register (Word 4) )  Reset Value */

#define ESPI_MEMORY_BAR_SRAM1_HOST_H4_ESP_H_ADDR_W3_Pos _UINT16_(0)                                          /* (ESPI_MEMORY_BAR_SRAM1_HOST_H4) Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_BAR_SRAM1_HOST_H4_ESP_H_ADDR_W3_Msk (_UINT16_(0xFFFF) << ESPI_MEMORY_BAR_SRAM1_HOST_H4_ESP_H_ADDR_W3_Pos) /* (ESPI_MEMORY_BAR_SRAM1_HOST_H4) Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_BAR_SRAM1_HOST_H4_ESP_H_ADDR_W3(value) (ESPI_MEMORY_BAR_SRAM1_HOST_H4_ESP_H_ADDR_W3_Msk & (_UINT16_(value) << ESPI_MEMORY_BAR_SRAM1_HOST_H4_ESP_H_ADDR_W3_Pos)) /* Assigment of value for ESP_H_ADDR_W3 in the ESPI_MEMORY_BAR_SRAM1_HOST_H4 register */
#define ESPI_MEMORY_BAR_SRAM1_HOST_H4_Msk     _UINT16_(0xFFFF)                                     /* (ESPI_MEMORY_BAR_SRAM1_HOST_H4) Register Mask  */


/** \brief ESPI_MEMORY register offsets definitions */
#define ESPI_MEMORY_BAR_LDI_MBX_H0_REG_OFST _UINT32_(0x130)     /* (ESPI_MEMORY_BAR_LDI_MBX_H0) Mailbox Memory Base Address Offset */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC0_H0_REG_OFST _UINT32_(0x13A)     /* (ESPI_MEMORY_BAR_LDI_ACPI_EC0_H0) ACPI EC Channel 0 Memory BAR (LSB) Offset */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC0_H1_REG_OFST _UINT32_(0x13C)     /* (ESPI_MEMORY_BAR_LDI_ACPI_EC0_H1) ACPI EC Channel 0 Memory BAR (MSB) Offset */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC1_H0_REG_OFST _UINT32_(0x144)     /* (ESPI_MEMORY_BAR_LDI_ACPI_EC1_H0) ACPI EC Channel 1 Memory BAR Offset */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC2_H0_REG_OFST _UINT32_(0x14E)     /* (ESPI_MEMORY_BAR_LDI_ACPI_EC2_H0) ACPI EC Channel 2 Memory BAR (LSB) Offset */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC2_H1_REG_OFST _UINT32_(0x150)     /* (ESPI_MEMORY_BAR_LDI_ACPI_EC2_H1) ACPI EC Channel 2 Memory BAR (MSB) Offset */
#define ESPI_MEMORY_BAR_LDI_ACPI_EC3_H0_REG_OFST _UINT32_(0x158)     /* (ESPI_MEMORY_BAR_LDI_ACPI_EC3_H0) ACPI EC Channel 3 Memory BAR Offset */
#define ESPI_MEMORY_BAR_LDI_EM0_H0_REG_OFST _UINT32_(0x16C)     /* (ESPI_MEMORY_BAR_LDI_EM0_H0) Embedded Memory Interface (EMI) 0 Memory Base Address Offset */
#define ESPI_MEMORY_BAR_LDI_EM1_H0_REG_OFST _UINT32_(0x176)     /* (ESPI_MEMORY_BAR_LDI_EM1_H0) Embedded Memory Interface (EMI) 1 Memory Base Address (LSB) Offset */
#define ESPI_MEMORY_BAR_LDI_EM1_H1_REG_OFST _UINT32_(0x178)     /* (ESPI_MEMORY_BAR_LDI_EM1_H1) Embedded Memory Interface (EMI) 1 Memory Base Address (MSB) Offset */
#define ESPI_MEMORY_BAR_SRAM0_H0_REG_OFST _UINT32_(0x1AC)     /* (ESPI_MEMORY_BAR_SRAM0_H0) SRAM 0 Memory Base Address Config Offset */
#define ESPI_MEMORY_BAR_SRAM0_H1_REG_OFST _UINT32_(0x1AE)     /* (ESPI_MEMORY_BAR_SRAM0_H1) SRAM 0 Memory Base Address LSB Offset */
#define ESPI_MEMORY_BAR_SRAM0_H2_REG_OFST _UINT32_(0x1B0)     /* (ESPI_MEMORY_BAR_SRAM0_H2) SRAM 0 Memory Base Address MSB Offset */
#define ESPI_MEMORY_BAR_SRAM1_H0_REG_OFST _UINT32_(0x1B6)     /* (ESPI_MEMORY_BAR_SRAM1_H0) SRAM 1 Memory Base Address Config Offset */
#define ESPI_MEMORY_BAR_SRAM1_H1_REG_OFST _UINT32_(0x1B8)     /* (ESPI_MEMORY_BAR_SRAM1_H1) SRAM 1 Memory Base Address LSB Offset */
#define ESPI_MEMORY_BAR_SRAM1_H2_REG_OFST _UINT32_(0x1BA)     /* (ESPI_MEMORY_BAR_SRAM1_H2) SRAM 1 Memory Base Address MSB Offset */
#define ESPI_MEMORY_BM_STS_REG_OFST    _UINT32_(0x200)     /* (ESPI_MEMORY_BM_STS) Bus Master Status Register Offset */
#define ESPI_MEMORY_BM_IEN_REG_OFST    _UINT32_(0x204)     /* (ESPI_MEMORY_BM_IEN) Bus Master Interrupt Enable Register Offset */
#define ESPI_MEMORY_BM_CFG_REG_OFST    _UINT32_(0x208)     /* (ESPI_MEMORY_BM_CFG) Bus Master Configuration Register Offset */
#define ESPI_MEMORY_BM1_CTRL_REG_OFST  _UINT32_(0x210)     /* (ESPI_MEMORY_BM1_CTRL) Bus Master 1 Control Register Offset */
#define ESPI_MEMORY_BM1_HOST_ADDR_LSW_REG_OFST _UINT32_(0x214)     /* (ESPI_MEMORY_BM1_HOST_ADDR_LSW) Bus Master 1 Host Address Register (DWord 0) Offset */
#define ESPI_MEMORY_BM1_HOST_ADDR_MSW_REG_OFST _UINT32_(0x218)     /* (ESPI_MEMORY_BM1_HOST_ADDR_MSW) Bus Master 1 Host Address Register (DWord 1) Offset */
#define ESPI_MEMORY_BM1_EC_ADDR_LSW_REG_OFST _UINT32_(0x21C)     /* (ESPI_MEMORY_BM1_EC_ADDR_LSW) Bus Master 1 Internal Address Register Offset */
#define ESPI_MEMORY_BM2_CTRL_REG_OFST  _UINT32_(0x224)     /* (ESPI_MEMORY_BM2_CTRL) Bus Master 2 Control Register Offset */
#define ESPI_MEMORY_BM2_HOST_ADDR_LSW_REG_OFST _UINT32_(0x228)     /* (ESPI_MEMORY_BM2_HOST_ADDR_LSW) Bus Master 2 Host Address Register (DWord 0) Offset */
#define ESPI_MEMORY_BM2_HOST_ADDR_MSW_REG_OFST _UINT32_(0x22C)     /* (ESPI_MEMORY_BM2_HOST_ADDR_MSW) Bus Master 2 Host Address Register (DWord 1) Offset */
#define ESPI_MEMORY_BM2_EC_ADDR_LSW_REG_OFST _UINT32_(0x230)     /* (ESPI_MEMORY_BM2_EC_ADDR_LSW) Bus Master 2 Internal Address Register Offset */
#define ESPI_MEMORY_BAR_LDH_MBX_H0_REG_OFST _UINT32_(0x330)     /* (ESPI_MEMORY_BAR_LDH_MBX_H0) Mailbox Memory BAR Configuration Register (Word 0) Offset */
#define ESPI_MEMORY_BAR_LDH_MBX_H1_REG_OFST _UINT32_(0x332)     /* (ESPI_MEMORY_BAR_LDH_MBX_H1) Mailbox Memory BAR Configuration Register (Word 1) Offset */
#define ESPI_MEMORY_BAR_LDH_MBX_H2_REG_OFST _UINT32_(0x334)     /* (ESPI_MEMORY_BAR_LDH_MBX_H2) Mailbox Memory BAR Configuration Register (Word 2) Offset */
#define ESPI_MEMORY_BAR_LDH_MBX_H3_REG_OFST _UINT32_(0x336)     /* (ESPI_MEMORY_BAR_LDH_MBX_H3) Mailbox Memory BAR Configuration Register (Word 3) Offset */
#define ESPI_MEMORY_BAR_LDH_MBX_H4_REG_OFST _UINT32_(0x338)     /* (ESPI_MEMORY_BAR_LDH_MBX_H4) Mailbox Memory BAR Configuration Register (Word 4) Offset */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC0_H0_REG_OFST _UINT32_(0x33A)     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC0_H0) ACPI EC Channel 0 Memory BAR Configuration Register (Word 0) Offset */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC0_H1_REG_OFST _UINT32_(0x33C)     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC0_H1) ACPI EC Channel 0 Memory BAR Configuration Register (Word 1) Offset */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC0_H2_REG_OFST _UINT32_(0x33E)     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC0_H2) ACPI EC Channel 0 Memory BAR Configuration Register (Word 2) Offset */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC0_H3_REG_OFST _UINT32_(0x340)     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC0_H3) ACPI EC Channel 0 Memory BAR Configuration Register (Word 3) Offset */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC0_H4_REG_OFST _UINT32_(0x342)     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC0_H4) ACPI EC Channel 0 Memory BAR Configuration Register (Word 4) Offset */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC1_H0_REG_OFST _UINT32_(0x344)     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC1_H0) ACPI EC Channel 1 Memory BAR Configuration Register (Word 0) Offset */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC1_H1_REG_OFST _UINT32_(0x346)     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC1_H1) ACPI EC Channel 1 Memory BAR Configuration Register (Word 1) Offset */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC1_H2_REG_OFST _UINT32_(0x348)     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC1_H2) ACPI EC Channel 1 Memory BAR Configuration Register (Word 2) Offset */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC1_H3_REG_OFST _UINT32_(0x34A)     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC1_H3) ACPI EC Channel 1 Memory BAR Configuration Register (Word 3) Offset */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC1_H4_REG_OFST _UINT32_(0x34C)     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC1_H4) ACPI EC Channel 1 Memory BAR Configuration Register (Word 4) Offset */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC2_H0_REG_OFST _UINT32_(0x34E)     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC2_H0) ACPI EC Channel 2 Memory BAR Configuration Register (Word 0) Offset */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC2_H1_REG_OFST _UINT32_(0x350)     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC2_H1) ACPI EC Channel 2 Memory BAR Configuration Register (Word 1) Offset */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC2_H2_REG_OFST _UINT32_(0x352)     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC2_H2) ACPI EC Channel 2 Memory BAR Configuration Register (Word 2) Offset */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC2_H3_REG_OFST _UINT32_(0x354)     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC2_H3) ACPI EC Channel 2 Memory BAR Configuration Register (Word 3) Offset */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC2_H4_REG_OFST _UINT32_(0x356)     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC2_H4) ACPI EC Channel 2 Memory BAR Configuration Register (Word 4) Offset */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC3_H0_REG_OFST _UINT32_(0x358)     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC3_H0) ACPI EC Channel 3 Memory BAR Configuration Register (Word 0) Offset */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC3_H1_REG_OFST _UINT32_(0x35A)     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC3_H1) ACPI EC Channel 3 Memory BAR Configuration Register (Word 1) Offset */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC3_H2_REG_OFST _UINT32_(0x35C)     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC3_H2) ACPI EC Channel 3 Memory BAR Configuration Register (Word 2) Offset */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC3_H3_REG_OFST _UINT32_(0x35E)     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC3_H3) ACPI EC Channel 3 Memory BAR Configuration Register (Word 3) Offset */
#define ESPI_MEMORY_BAR_LDH_ACPI_EC3_H4_REG_OFST _UINT32_(0x360)     /* (ESPI_MEMORY_BAR_LDH_ACPI_EC3_H4) ACPI EC Channel 3 Memory BAR Configuration Register (Word 4) Offset */
#define ESPI_MEMORY_BAR_LDH_EM0_H0_REG_OFST _UINT32_(0x36C)     /* (ESPI_MEMORY_BAR_LDH_EM0_H0) EMI 0 Memory BAR Configuration Register (Word 0) Offset */
#define ESPI_MEMORY_BAR_LDH_EM0_H1_REG_OFST _UINT32_(0x36E)     /* (ESPI_MEMORY_BAR_LDH_EM0_H1) EMI 0 Memory BAR Configuration Address Register  (Word 1) Offset */
#define ESPI_MEMORY_BAR_LDH_EM0_H2_REG_OFST _UINT32_(0x370)     /* (ESPI_MEMORY_BAR_LDH_EM0_H2) EMI 0 Memory BAR Configuration Address Register  (Word 2) Offset */
#define ESPI_MEMORY_BAR_LDH_EM0_H3_REG_OFST _UINT32_(0x372)     /* (ESPI_MEMORY_BAR_LDH_EM0_H3) EMI 0 Memory BAR Configuration Address Register  (Word 3) Offset */
#define ESPI_MEMORY_BAR_LDH_EM0_H4_REG_OFST _UINT32_(0x374)     /* (ESPI_MEMORY_BAR_LDH_EM0_H4) EMI 0 Memory BAR Configuration Address Register  (Word 4) Offset */
#define ESPI_MEMORY_BAR_LDH_EM1_H0_REG_OFST _UINT32_(0x376)     /* (ESPI_MEMORY_BAR_LDH_EM1_H0) EMI 1 Memory BAR Configuration Register (Word 0) ) Offset */
#define ESPI_MEMORY_BAR_LDH_EM1_H1_REG_OFST _UINT32_(0x378)     /* (ESPI_MEMORY_BAR_LDH_EM1_H1) EMI 1 Memory BAR Configuration Register (Word 1) ) Offset */
#define ESPI_MEMORY_BAR_LDH_EM1_H2_REG_OFST _UINT32_(0x37A)     /* (ESPI_MEMORY_BAR_LDH_EM1_H2) EMI 1 Memory BAR Configuration Register (Word 2) ) Offset */
#define ESPI_MEMORY_BAR_LDH_EM1_H3_REG_OFST _UINT32_(0x37C)     /* (ESPI_MEMORY_BAR_LDH_EM1_H3) EMI 1 Memory BAR Configuration Register (Word 3) ) Offset */
#define ESPI_MEMORY_BAR_LDH_EM1_H4_REG_OFST _UINT32_(0x37E)     /* (ESPI_MEMORY_BAR_LDH_EM1_H4) EMI 1 Memory BAR Configuration Register (Word 4) ) Offset */
#define ESPI_MEMORY_BAR_SRAM0_HOST_H0_REG_OFST _UINT32_(0x3AC)     /* (ESPI_MEMORY_BAR_SRAM0_HOST_H0) SRAM BAR 0 Configuration Register (Word 0) ) Offset */
#define ESPI_MEMORY_BAR_SRAM0_HOST_H1_REG_OFST _UINT32_(0x3AE)     /* (ESPI_MEMORY_BAR_SRAM0_HOST_H1) SRAM BAR 0 Configuration Register (Word 1) ) Offset */
#define ESPI_MEMORY_BAR_SRAM0_HOST_H2_REG_OFST _UINT32_(0x3B0)     /* (ESPI_MEMORY_BAR_SRAM0_HOST_H2) SRAM BAR 0 Configuration Register (Word 2) ) Offset */
#define ESPI_MEMORY_BAR_SRAM0_HOST_H3_REG_OFST _UINT32_(0x3B2)     /* (ESPI_MEMORY_BAR_SRAM0_HOST_H3) SRAM BAR 0 Configuration Register (Word 3) ) Offset */
#define ESPI_MEMORY_BAR_SRAM0_HOST_H4_REG_OFST _UINT32_(0x3B4)     /* (ESPI_MEMORY_BAR_SRAM0_HOST_H4) SRAM BAR 0 Configuration Register (Word 4) ) Offset */
#define ESPI_MEMORY_BAR_SRAM1_HOST_H0_REG_OFST _UINT32_(0x3B6)     /* (ESPI_MEMORY_BAR_SRAM1_HOST_H0) SRAM BAR 1 Configuration Register (Word 0) ) Offset */
#define ESPI_MEMORY_BAR_SRAM1_HOST_H1_REG_OFST _UINT32_(0x3B8)     /* (ESPI_MEMORY_BAR_SRAM1_HOST_H1) SRAM BAR 1 Configuration Register (Word 1) ) Offset */
#define ESPI_MEMORY_BAR_SRAM1_HOST_H2_REG_OFST _UINT32_(0x3BA)     /* (ESPI_MEMORY_BAR_SRAM1_HOST_H2) SRAM BAR 1 Configuration Register (Word 2) ) Offset */
#define ESPI_MEMORY_BAR_SRAM1_HOST_H3_REG_OFST _UINT32_(0x3BC)     /* (ESPI_MEMORY_BAR_SRAM1_HOST_H3) SRAM BAR 1 Configuration Register (Word 3) ) Offset */
#define ESPI_MEMORY_BAR_SRAM1_HOST_H4_REG_OFST _UINT32_(0x3BE)     /* (ESPI_MEMORY_BAR_SRAM1_HOST_H4) SRAM BAR 1 Configuration Register (Word 4) ) Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief ESPI_MEMORY register API structure */
typedef struct
{  /* The eSPI Memory Component is one of two Logical Devices (along with the I/O Component) that provide access to all the registers in the device. */
  __I   uint8_t                        Reserved1[0x130];
  __IO  uint32_t                       ESPI_MEMORY_BAR_LDI_MBX_H0; /**< Offset: 0x130 (R/W  32) Mailbox Memory Base Address */
  __I   uint8_t                        Reserved2[0x06];
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDI_ACPI_EC0_H0; /**< Offset: 0x13A (R/W  16) ACPI EC Channel 0 Memory BAR (LSB) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDI_ACPI_EC0_H1; /**< Offset: 0x13C (R/W  16) ACPI EC Channel 0 Memory BAR (MSB) */
  __I   uint8_t                        Reserved3[0x06];
  __IO  uint32_t                       ESPI_MEMORY_BAR_LDI_ACPI_EC1_H0; /**< Offset: 0x144 (R/W  32) ACPI EC Channel 1 Memory BAR */
  __I   uint8_t                        Reserved4[0x06];
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDI_ACPI_EC2_H0; /**< Offset: 0x14E (R/W  16) ACPI EC Channel 2 Memory BAR (LSB) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDI_ACPI_EC2_H1; /**< Offset: 0x150 (R/W  16) ACPI EC Channel 2 Memory BAR (MSB) */
  __I   uint8_t                        Reserved5[0x06];
  __IO  uint32_t                       ESPI_MEMORY_BAR_LDI_ACPI_EC3_H0; /**< Offset: 0x158 (R/W  32) ACPI EC Channel 3 Memory BAR */
  __I   uint8_t                        Reserved6[0x10];
  __IO  uint32_t                       ESPI_MEMORY_BAR_LDI_EM0_H0; /**< Offset: 0x16C (R/W  32) Embedded Memory Interface (EMI) 0 Memory Base Address */
  __I   uint8_t                        Reserved7[0x06];
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDI_EM1_H0; /**< Offset: 0x176 (R/W  16) Embedded Memory Interface (EMI) 1 Memory Base Address (LSB) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDI_EM1_H1; /**< Offset: 0x178 (R/W  16) Embedded Memory Interface (EMI) 1 Memory Base Address (MSB) */
  __I   uint8_t                        Reserved8[0x32];
  __IO  uint16_t                       ESPI_MEMORY_BAR_SRAM0_H0; /**< Offset: 0x1AC (R/W  16) SRAM 0 Memory Base Address Config */
  __IO  uint16_t                       ESPI_MEMORY_BAR_SRAM0_H1; /**< Offset: 0x1AE (R/W  16) SRAM 0 Memory Base Address LSB */
  __IO  uint32_t                       ESPI_MEMORY_BAR_SRAM0_H2; /**< Offset: 0x1B0 (R/W  32) SRAM 0 Memory Base Address MSB */
  __I   uint8_t                        Reserved9[0x02];
  __IO  uint16_t                       ESPI_MEMORY_BAR_SRAM1_H0; /**< Offset: 0x1B6 (R/W  16) SRAM 1 Memory Base Address Config */
  __IO  uint16_t                       ESPI_MEMORY_BAR_SRAM1_H1; /**< Offset: 0x1B8 (R/W  16) SRAM 1 Memory Base Address LSB */
  __IO  uint16_t                       ESPI_MEMORY_BAR_SRAM1_H2; /**< Offset: 0x1BA (R/W  16) SRAM 1 Memory Base Address MSB */
  __I   uint8_t                        Reserved10[0x44];
  __IO  uint32_t                       ESPI_MEMORY_BM_STS; /**< Offset: 0x200 (R/W  32) Bus Master Status Register */
  __IO  uint32_t                       ESPI_MEMORY_BM_IEN; /**< Offset: 0x204 (R/W  32) Bus Master Interrupt Enable Register */
  __IO  uint32_t                       ESPI_MEMORY_BM_CFG; /**< Offset: 0x208 (R/W  32) Bus Master Configuration Register */
  __I   uint8_t                        Reserved11[0x04];
  __IO  uint32_t                       ESPI_MEMORY_BM1_CTRL; /**< Offset: 0x210 (R/W  32) Bus Master 1 Control Register */
  __IO  uint32_t                       ESPI_MEMORY_BM1_HOST_ADDR_LSW; /**< Offset: 0x214 (R/W  32) Bus Master 1 Host Address Register (DWord 0) */
  __IO  uint32_t                       ESPI_MEMORY_BM1_HOST_ADDR_MSW; /**< Offset: 0x218 (R/W  32) Bus Master 1 Host Address Register (DWord 1) */
  __IO  uint32_t                       ESPI_MEMORY_BM1_EC_ADDR_LSW; /**< Offset: 0x21C (R/W  32) Bus Master 1 Internal Address Register */
  __I   uint8_t                        Reserved12[0x04];
  __IO  uint32_t                       ESPI_MEMORY_BM2_CTRL; /**< Offset: 0x224 (R/W  32) Bus Master 2 Control Register */
  __IO  uint32_t                       ESPI_MEMORY_BM2_HOST_ADDR_LSW; /**< Offset: 0x228 (R/W  32) Bus Master 2 Host Address Register (DWord 0) */
  __IO  uint32_t                       ESPI_MEMORY_BM2_HOST_ADDR_MSW; /**< Offset: 0x22C (R/W  32) Bus Master 2 Host Address Register (DWord 1) */
  __IO  uint32_t                       ESPI_MEMORY_BM2_EC_ADDR_LSW; /**< Offset: 0x230 (R/W  32) Bus Master 2 Internal Address Register */
  __I   uint8_t                        Reserved13[0xFC];
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDH_MBX_H0; /**< Offset: 0x330 (R/W  16) Mailbox Memory BAR Configuration Register (Word 0) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDH_MBX_H1; /**< Offset: 0x332 (R/W  16) Mailbox Memory BAR Configuration Register (Word 1) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDH_MBX_H2; /**< Offset: 0x334 (R/W  16) Mailbox Memory BAR Configuration Register (Word 2) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDH_MBX_H3; /**< Offset: 0x336 (R/W  16) Mailbox Memory BAR Configuration Register (Word 3) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDH_MBX_H4; /**< Offset: 0x338 (R/W  16) Mailbox Memory BAR Configuration Register (Word 4) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDH_ACPI_EC0_H0; /**< Offset: 0x33A (R/W  16) ACPI EC Channel 0 Memory BAR Configuration Register (Word 0) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDH_ACPI_EC0_H1; /**< Offset: 0x33C (R/W  16) ACPI EC Channel 0 Memory BAR Configuration Register (Word 1) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDH_ACPI_EC0_H2; /**< Offset: 0x33E (R/W  16) ACPI EC Channel 0 Memory BAR Configuration Register (Word 2) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDH_ACPI_EC0_H3; /**< Offset: 0x340 (R/W  16) ACPI EC Channel 0 Memory BAR Configuration Register (Word 3) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDH_ACPI_EC0_H4; /**< Offset: 0x342 (R/W  16) ACPI EC Channel 0 Memory BAR Configuration Register (Word 4) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDH_ACPI_EC1_H0; /**< Offset: 0x344 (R/W  16) ACPI EC Channel 1 Memory BAR Configuration Register (Word 0) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDH_ACPI_EC1_H1; /**< Offset: 0x346 (R/W  16) ACPI EC Channel 1 Memory BAR Configuration Register (Word 1) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDH_ACPI_EC1_H2; /**< Offset: 0x348 (R/W  16) ACPI EC Channel 1 Memory BAR Configuration Register (Word 2) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDH_ACPI_EC1_H3; /**< Offset: 0x34A (R/W  16) ACPI EC Channel 1 Memory BAR Configuration Register (Word 3) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDH_ACPI_EC1_H4; /**< Offset: 0x34C (R/W  16) ACPI EC Channel 1 Memory BAR Configuration Register (Word 4) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDH_ACPI_EC2_H0; /**< Offset: 0x34E (R/W  16) ACPI EC Channel 2 Memory BAR Configuration Register (Word 0) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDH_ACPI_EC2_H1; /**< Offset: 0x350 (R/W  16) ACPI EC Channel 2 Memory BAR Configuration Register (Word 1) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDH_ACPI_EC2_H2; /**< Offset: 0x352 (R/W  16) ACPI EC Channel 2 Memory BAR Configuration Register (Word 2) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDH_ACPI_EC2_H3; /**< Offset: 0x354 (R/W  16) ACPI EC Channel 2 Memory BAR Configuration Register (Word 3) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDH_ACPI_EC2_H4; /**< Offset: 0x356 (R/W  16) ACPI EC Channel 2 Memory BAR Configuration Register (Word 4) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDH_ACPI_EC3_H0; /**< Offset: 0x358 (R/W  16) ACPI EC Channel 3 Memory BAR Configuration Register (Word 0) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDH_ACPI_EC3_H1; /**< Offset: 0x35A (R/W  16) ACPI EC Channel 3 Memory BAR Configuration Register (Word 1) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDH_ACPI_EC3_H2; /**< Offset: 0x35C (R/W  16) ACPI EC Channel 3 Memory BAR Configuration Register (Word 2) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDH_ACPI_EC3_H3; /**< Offset: 0x35E (R/W  16) ACPI EC Channel 3 Memory BAR Configuration Register (Word 3) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDH_ACPI_EC3_H4; /**< Offset: 0x360 (R/W  16) ACPI EC Channel 3 Memory BAR Configuration Register (Word 4) */
  __I   uint8_t                        Reserved14[0x0A];
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDH_EM0_H0; /**< Offset: 0x36C (R/W  16) EMI 0 Memory BAR Configuration Register (Word 0) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDH_EM0_H1; /**< Offset: 0x36E (R/W  16) EMI 0 Memory BAR Configuration Address Register  (Word 1) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDH_EM0_H2; /**< Offset: 0x370 (R/W  16) EMI 0 Memory BAR Configuration Address Register  (Word 2) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDH_EM0_H3; /**< Offset: 0x372 (R/W  16) EMI 0 Memory BAR Configuration Address Register  (Word 3) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDH_EM0_H4; /**< Offset: 0x374 (R/W  16) EMI 0 Memory BAR Configuration Address Register  (Word 4) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDH_EM1_H0; /**< Offset: 0x376 (R/W  16) EMI 1 Memory BAR Configuration Register (Word 0) ) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDH_EM1_H1; /**< Offset: 0x378 (R/W  16) EMI 1 Memory BAR Configuration Register (Word 1) ) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDH_EM1_H2; /**< Offset: 0x37A (R/W  16) EMI 1 Memory BAR Configuration Register (Word 2) ) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDH_EM1_H3; /**< Offset: 0x37C (R/W  16) EMI 1 Memory BAR Configuration Register (Word 3) ) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_LDH_EM1_H4; /**< Offset: 0x37E (R/W  16) EMI 1 Memory BAR Configuration Register (Word 4) ) */
  __I   uint8_t                        Reserved15[0x2C];
  __IO  uint16_t                       ESPI_MEMORY_BAR_SRAM0_HOST_H0; /**< Offset: 0x3AC (R/W  16) SRAM BAR 0 Configuration Register (Word 0) ) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_SRAM0_HOST_H1; /**< Offset: 0x3AE (R/W  16) SRAM BAR 0 Configuration Register (Word 1) ) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_SRAM0_HOST_H2; /**< Offset: 0x3B0 (R/W  16) SRAM BAR 0 Configuration Register (Word 2) ) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_SRAM0_HOST_H3; /**< Offset: 0x3B2 (R/W  16) SRAM BAR 0 Configuration Register (Word 3) ) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_SRAM0_HOST_H4; /**< Offset: 0x3B4 (R/W  16) SRAM BAR 0 Configuration Register (Word 4) ) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_SRAM1_HOST_H0; /**< Offset: 0x3B6 (R/W  16) SRAM BAR 1 Configuration Register (Word 0) ) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_SRAM1_HOST_H1; /**< Offset: 0x3B8 (R/W  16) SRAM BAR 1 Configuration Register (Word 1) ) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_SRAM1_HOST_H2; /**< Offset: 0x3BA (R/W  16) SRAM BAR 1 Configuration Register (Word 2) ) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_SRAM1_HOST_H3; /**< Offset: 0x3BC (R/W  16) SRAM BAR 1 Configuration Register (Word 3) ) */
  __IO  uint16_t                       ESPI_MEMORY_BAR_SRAM1_HOST_H4; /**< Offset: 0x3BE (R/W  16) SRAM BAR 1 Configuration Register (Word 4) ) */
} espi_memory_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _0525SG12_ESPI_MEMORY_COMPONENT_H_ */
