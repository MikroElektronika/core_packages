/*
 * Component description for EC_REG_BANK
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
#ifndef _0525SG12_EC_REG_BANK_COMPONENT_H_
#define _0525SG12_EC_REG_BANK_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR EC_REG_BANK                                  */
/* ************************************************************************** */

/* -------- EC_REG_BANK_AHB_ERR_ADDR : (EC_REG_BANK Offset: 0x04) (R/W 32) AHB Error Address [0:0] AHB_ERR_ADDR, In priority order:\n     1. AHB address is registered when an AHB error occurs on the processor's AHB master port and the register value was\n     already 0. This way only the first address to generate an exception is captured.\n     2. The processor can clear this register by writing any 32-bit value to this register. -------- */
#define EC_REG_BANK_AHB_ERR_ADDR_RESETVALUE   _UINT32_(0x00)                                       /*  (EC_REG_BANK_AHB_ERR_ADDR) AHB Error Address [0:0] AHB_ERR_ADDR, In priority order:\n     1. AHB address is registered when an AHB error occurs on the processor's AHB master port and the register value was\n     already 0. This way only the first address to generate an exception is captured.\n     2. The processor can clear this register by writing any 32-bit value to this register.  Reset Value */

#define EC_REG_BANK_AHB_ERR_ADDR_Msk          _UINT32_(0x00000000)                                 /* (EC_REG_BANK_AHB_ERR_ADDR) Register Mask  */


/* -------- EC_REG_BANK_AHB_ERR_CTRL : (EC_REG_BANK Offset: 0x14) (R/W 8) AHB Error Control [0:0] AHB_ERROR_DISABLE, 0: EC memory exceptions are enabled. 1: EC memory exceptions are disabled. -------- */
#define EC_REG_BANK_AHB_ERR_CTRL_RESETVALUE   _UINT8_(0x00)                                        /*  (EC_REG_BANK_AHB_ERR_CTRL) AHB Error Control [0:0] AHB_ERROR_DISABLE, 0: EC memory exceptions are enabled. 1: EC memory exceptions are disabled.  Reset Value */

#define EC_REG_BANK_AHB_ERR_CTRL_Msk          _UINT8_(0x00)                                        /* (EC_REG_BANK_AHB_ERR_CTRL) Register Mask  */


/* -------- EC_REG_BANK_INTR_CTRL : (EC_REG_BANK Offset: 0x18) (R/W 32) Interrupt Control [0:0] NVIC_EN (NVIC_EN) This bit enables Alternate NVIC IRQ's Vectors. The Alternate NVIC Vectors provides each interrupt event with a dedicated (direct) NVIC vector.\n            0 = Alternate NVIC vectors disabled, 1= Alternate NVIC vectors enabled -------- */
#define EC_REG_BANK_INTR_CTRL_RESETVALUE      _UINT32_(0x01)                                       /*  (EC_REG_BANK_INTR_CTRL) Interrupt Control [0:0] NVIC_EN (NVIC_EN) This bit enables Alternate NVIC IRQ's Vectors. The Alternate NVIC Vectors provides each interrupt event with a dedicated (direct) NVIC vector.\n            0 = Alternate NVIC vectors disabled, 1= Alternate NVIC vectors enabled  Reset Value */

#define EC_REG_BANK_INTR_CTRL_Msk             _UINT32_(0x00000000)                                 /* (EC_REG_BANK_INTR_CTRL) Register Mask  */


/* -------- EC_REG_BANK_ETM_CTRL : (EC_REG_BANK Offset: 0x1C) (R/W 32) ETM TRACE Enable [0:0] TRACE_EN (TRACE_EN) This bit enables the ARM TRACE debug port (ETM/ITM). The Trace Debug Interface pins are forced to the TRACE functions.            0 = ARM TRACE port disabled, 1= ARM TRACE port enabled -------- */
#define EC_REG_BANK_ETM_CTRL_RESETVALUE       _UINT32_(0x00)                                       /*  (EC_REG_BANK_ETM_CTRL) ETM TRACE Enable [0:0] TRACE_EN (TRACE_EN) This bit enables the ARM TRACE debug port (ETM/ITM). The Trace Debug Interface pins are forced to the TRACE functions.            0 = ARM TRACE port disabled, 1= ARM TRACE port enabled  Reset Value */

#define EC_REG_BANK_ETM_CTRL_Msk              _UINT32_(0x00000000)                                 /* (EC_REG_BANK_ETM_CTRL) Register Mask  */


/* -------- EC_REG_BANK_DEBUG_CTRL : (EC_REG_BANK Offset: 0x20) (R/W 32) Debug Enable Register -------- */
#define EC_REG_BANK_DEBUG_CTRL_RESETVALUE     _UINT32_(0x00)                                       /*  (EC_REG_BANK_DEBUG_CTRL) Debug Enable Register  Reset Value */

#define EC_REG_BANK_DEBUG_CTRL_EN_Pos         _UINT32_(0)                                          /* (EC_REG_BANK_DEBUG_CTRL) DEBUG_EN (JTAG_EN) This bit enables the JTAG/SWD debug port.\n               0= JTAG/SWD port disabled. JTAG/SWD cannot be enabled (i.e., the TRST# pin is ignored and the JTAG signals remain in their non-JTAG state)\n               1= JTAG/SWD port enabled. A high on TRST# enables JTAG or SWD, as determined by SWD_EN. Position */
#define EC_REG_BANK_DEBUG_CTRL_EN_Msk         (_UINT32_(0x1) << EC_REG_BANK_DEBUG_CTRL_EN_Pos)     /* (EC_REG_BANK_DEBUG_CTRL) DEBUG_EN (JTAG_EN) This bit enables the JTAG/SWD debug port.\n               0= JTAG/SWD port disabled. JTAG/SWD cannot be enabled (i.e., the TRST# pin is ignored and the JTAG signals remain in their non-JTAG state)\n               1= JTAG/SWD port enabled. A high on TRST# enables JTAG or SWD, as determined by SWD_EN. Mask */
#define EC_REG_BANK_DEBUG_CTRL_EN(value)      (EC_REG_BANK_DEBUG_CTRL_EN_Msk & (_UINT32_(value) << EC_REG_BANK_DEBUG_CTRL_EN_Pos)) /* Assigment of value for EN in the EC_REG_BANK_DEBUG_CTRL register */
#define EC_REG_BANK_DEBUG_CTRL_PIN_CFG_Pos    _UINT32_(1)                                          /* (EC_REG_BANK_DEBUG_CTRL) This field determines which pins are affected by the TRST# debug enable pin.      3=Reserved      2=The pins associated with the JTAG TCK and TMS switch to the debug interface when TRST# is de-asserted high. The pins      associated with TDI and TDO remain controlled by the associated GPIO. This setting should be used when the ARM Serial      Wire Debug (SWD) is required for debugging and the Serial Wire Viewer is not required      1=The pins associated with the JTAG TCK, TMS and TDO switch to the debug interface when TRST# is de-asserted high. The pin      associated with TDI remains controlled by the associated GPIO. This setting should be used when the ARM Serial Wire Debug      (SWD) and Serial Wire Viewer (SWV) are both required for debugging      0=All four pins associated with JTAG (TCK, TMS, TDI and TDO) switch to the debug interface when TRST# is de-asserted high.      This setting should be used when the JTAG TAP controller is required for debugging. Position */
#define EC_REG_BANK_DEBUG_CTRL_PIN_CFG_Msk    (_UINT32_(0x3) << EC_REG_BANK_DEBUG_CTRL_PIN_CFG_Pos) /* (EC_REG_BANK_DEBUG_CTRL) This field determines which pins are affected by the TRST# debug enable pin.      3=Reserved      2=The pins associated with the JTAG TCK and TMS switch to the debug interface when TRST# is de-asserted high. The pins      associated with TDI and TDO remain controlled by the associated GPIO. This setting should be used when the ARM Serial      Wire Debug (SWD) is required for debugging and the Serial Wire Viewer is not required      1=The pins associated with the JTAG TCK, TMS and TDO switch to the debug interface when TRST# is de-asserted high. The pin      associated with TDI remains controlled by the associated GPIO. This setting should be used when the ARM Serial Wire Debug      (SWD) and Serial Wire Viewer (SWV) are both required for debugging      0=All four pins associated with JTAG (TCK, TMS, TDI and TDO) switch to the debug interface when TRST# is de-asserted high.      This setting should be used when the JTAG TAP controller is required for debugging. Mask */
#define EC_REG_BANK_DEBUG_CTRL_PIN_CFG(value) (EC_REG_BANK_DEBUG_CTRL_PIN_CFG_Msk & (_UINT32_(value) << EC_REG_BANK_DEBUG_CTRL_PIN_CFG_Pos)) /* Assigment of value for PIN_CFG in the EC_REG_BANK_DEBUG_CTRL register */
#define   EC_REG_BANK_DEBUG_CTRL_PIN_CFG_JTAG_TCK_TMS_Val _UINT32_(0x2)                                        /* (EC_REG_BANK_DEBUG_CTRL) 2=The pins associated with the JTAG TCK and TMS switch to the debug interface when TRST# is de-asserted high. The pins\n           associated with TDI and TDO remain controlled by the associated GPIO. This setting should be used when the ARM Serial\n          Wire Debug (SWD) is required for debugging and the Serial Wire Viewer is not required   */
#define   EC_REG_BANK_DEBUG_CTRL_PIN_CFG_JTAG_TCK_TMS_TDO_Val _UINT32_(0x1)                                        /* (EC_REG_BANK_DEBUG_CTRL) 1=The pins associated with the JTAG TCK, TMS and TDO switch to the debug interface when TRST# is de-asserted high. The pin\n           associated with TDI remains controlled by the associated GPIO. This setting should be used when the ARM Serial Wire Debug\n             (SWD) and Serial Wire Viewer (SWV) are both required for debugging  */
#define   EC_REG_BANK_DEBUG_CTRL_PIN_CFG_JTAG_TCK_TMS_TDO_TDI_Val _UINT32_(0x0)                                        /* (EC_REG_BANK_DEBUG_CTRL) 0=All four pins associated with JTAG (TCK, TMS, TDI and TDO) switch to the debug interface when TRST# is de-asserted high.\n         This setting should be used when the JTAG TAP controller is required for debugging.  */
#define EC_REG_BANK_DEBUG_CTRL_PIN_CFG_JTAG_TCK_TMS (EC_REG_BANK_DEBUG_CTRL_PIN_CFG_JTAG_TCK_TMS_Val << EC_REG_BANK_DEBUG_CTRL_PIN_CFG_Pos) /* (EC_REG_BANK_DEBUG_CTRL) 2=The pins associated with the JTAG TCK and TMS switch to the debug interface when TRST# is de-asserted high. The pins\n           associated with TDI and TDO remain controlled by the associated GPIO. This setting should be used when the ARM Serial\n          Wire Debug (SWD) is required for debugging and the Serial Wire Viewer is not required  Position  */
#define EC_REG_BANK_DEBUG_CTRL_PIN_CFG_JTAG_TCK_TMS_TDO (EC_REG_BANK_DEBUG_CTRL_PIN_CFG_JTAG_TCK_TMS_TDO_Val << EC_REG_BANK_DEBUG_CTRL_PIN_CFG_Pos) /* (EC_REG_BANK_DEBUG_CTRL) 1=The pins associated with the JTAG TCK, TMS and TDO switch to the debug interface when TRST# is de-asserted high. The pin\n           associated with TDI remains controlled by the associated GPIO. This setting should be used when the ARM Serial Wire Debug\n             (SWD) and Serial Wire Viewer (SWV) are both required for debugging Position  */
#define EC_REG_BANK_DEBUG_CTRL_PIN_CFG_JTAG_TCK_TMS_TDO_TDI (EC_REG_BANK_DEBUG_CTRL_PIN_CFG_JTAG_TCK_TMS_TDO_TDI_Val << EC_REG_BANK_DEBUG_CTRL_PIN_CFG_Pos) /* (EC_REG_BANK_DEBUG_CTRL) 0=All four pins associated with JTAG (TCK, TMS, TDI and TDO) switch to the debug interface when TRST# is de-asserted high.\n         This setting should be used when the JTAG TAP controller is required for debugging. Position  */
#define EC_REG_BANK_DEBUG_CTRL_PU_EN_Pos      _UINT32_(3)                                          /* (EC_REG_BANK_DEBUG_CTRL) If this bit is set to '1b' internal pull-up resistors are automatically enabled on the appropriate debugging port\n      wires whenever the debug port is enabled (the DEBUG_EN bit in this register is '1b' and the JTAG_RST# pin is high). The setting\n      of DEBUG_PIN_CFG determines which pins have pull-ups enabled when the debug port is enabled. Position */
#define EC_REG_BANK_DEBUG_CTRL_PU_EN_Msk      (_UINT32_(0x1) << EC_REG_BANK_DEBUG_CTRL_PU_EN_Pos)  /* (EC_REG_BANK_DEBUG_CTRL) If this bit is set to '1b' internal pull-up resistors are automatically enabled on the appropriate debugging port\n      wires whenever the debug port is enabled (the DEBUG_EN bit in this register is '1b' and the JTAG_RST# pin is high). The setting\n      of DEBUG_PIN_CFG determines which pins have pull-ups enabled when the debug port is enabled. Mask */
#define EC_REG_BANK_DEBUG_CTRL_PU_EN(value)   (EC_REG_BANK_DEBUG_CTRL_PU_EN_Msk & (_UINT32_(value) << EC_REG_BANK_DEBUG_CTRL_PU_EN_Pos)) /* Assigment of value for PU_EN in the EC_REG_BANK_DEBUG_CTRL register */
#define EC_REG_BANK_DEBUG_CTRL_BSP_EN_Pos     _UINT32_(4)                                          /* (EC_REG_BANK_DEBUG_CTRL) This bit sets the boundary scan tap controller accessibility from JTAG port.\n         1= Boundary scan tap controller accessibile through JTAG Port.\n         0= Boundary scan tap controller not accessibile through JTAG Port.\n Position */
#define EC_REG_BANK_DEBUG_CTRL_BSP_EN_Msk     (_UINT32_(0x1) << EC_REG_BANK_DEBUG_CTRL_BSP_EN_Pos) /* (EC_REG_BANK_DEBUG_CTRL) This bit sets the boundary scan tap controller accessibility from JTAG port.\n         1= Boundary scan tap controller accessibile through JTAG Port.\n         0= Boundary scan tap controller not accessibile through JTAG Port.\n Mask */
#define EC_REG_BANK_DEBUG_CTRL_BSP_EN(value)  (EC_REG_BANK_DEBUG_CTRL_BSP_EN_Msk & (_UINT32_(value) << EC_REG_BANK_DEBUG_CTRL_BSP_EN_Pos)) /* Assigment of value for BSP_EN in the EC_REG_BANK_DEBUG_CTRL register */
#define EC_REG_BANK_DEBUG_CTRL_Msk            _UINT32_(0x0000001F)                                 /* (EC_REG_BANK_DEBUG_CTRL) Register Mask  */


/* -------- EC_REG_BANK_OTP_LOCK : (EC_REG_BANK Offset: 0x24) (R/W 32) Lock Register -------- */
#define EC_REG_BANK_OTP_LOCK_RESETVALUE       _UINT32_(0x00)                                       /*  (EC_REG_BANK_OTP_LOCK) Lock Register  Reset Value */

#define EC_REG_BANK_OTP_LOCK_TEST_Pos         _UINT32_(0)                                          /* (EC_REG_BANK_OTP_LOCK) Test Position */
#define EC_REG_BANK_OTP_LOCK_TEST_Msk         (_UINT32_(0x1) << EC_REG_BANK_OTP_LOCK_TEST_Pos)     /* (EC_REG_BANK_OTP_LOCK) Test Mask */
#define EC_REG_BANK_OTP_LOCK_TEST(value)      (EC_REG_BANK_OTP_LOCK_TEST_Msk & (_UINT32_(value) << EC_REG_BANK_OTP_LOCK_TEST_Pos)) /* Assigment of value for TEST in the EC_REG_BANK_OTP_LOCK register */
#define EC_REG_BANK_OTP_LOCK_VBAT_RAM_LOCK_Pos _UINT32_(1)                                          /* (EC_REG_BANK_OTP_LOCK) VBAT RAM LOCK bit.\n         0 = Not Locked.\n         1 = Locked.\n Position */
#define EC_REG_BANK_OTP_LOCK_VBAT_RAM_LOCK_Msk (_UINT32_(0x1) << EC_REG_BANK_OTP_LOCK_VBAT_RAM_LOCK_Pos) /* (EC_REG_BANK_OTP_LOCK) VBAT RAM LOCK bit.\n         0 = Not Locked.\n         1 = Locked.\n Mask */
#define EC_REG_BANK_OTP_LOCK_VBAT_RAM_LOCK(value) (EC_REG_BANK_OTP_LOCK_VBAT_RAM_LOCK_Msk & (_UINT32_(value) << EC_REG_BANK_OTP_LOCK_VBAT_RAM_LOCK_Pos)) /* Assigment of value for VBAT_RAM_LOCK in the EC_REG_BANK_OTP_LOCK register */
#define EC_REG_BANK_OTP_LOCK_VBAT_REG_LOCK_Pos _UINT32_(2)                                          /* (EC_REG_BANK_OTP_LOCK) VBAT REG LOCK.\n         0 = Not Locked.\n         1 = Locked.\n Position */
#define EC_REG_BANK_OTP_LOCK_VBAT_REG_LOCK_Msk (_UINT32_(0x1) << EC_REG_BANK_OTP_LOCK_VBAT_REG_LOCK_Pos) /* (EC_REG_BANK_OTP_LOCK) VBAT REG LOCK.\n         0 = Not Locked.\n         1 = Locked.\n Mask */
#define EC_REG_BANK_OTP_LOCK_VBAT_REG_LOCK(value) (EC_REG_BANK_OTP_LOCK_VBAT_REG_LOCK_Msk & (_UINT32_(value) << EC_REG_BANK_OTP_LOCK_VBAT_REG_LOCK_Pos)) /* Assigment of value for VBAT_REG_LOCK in the EC_REG_BANK_OTP_LOCK register */
#define EC_REG_BANK_OTP_LOCK_Msk              _UINT32_(0x00000007)                                 /* (EC_REG_BANK_OTP_LOCK) Register Mask  */


/* -------- EC_REG_BANK_WDT_CNT : (EC_REG_BANK Offset: 0x28) (R/W 32) WDT Event Count [3:0] WDT_COUNT (WDT_COUNT) These EC R/W bits are cleared to 0 on VCC1 POR, but not on a WDT.\n            Note: This field is written by Boot ROM firmware to indicate the number of times a WDT fired before loading a good EC code image. -------- */
#define EC_REG_BANK_WDT_CNT_RESETVALUE        _UINT32_(0x00)                                       /*  (EC_REG_BANK_WDT_CNT) WDT Event Count [3:0] WDT_COUNT (WDT_COUNT) These EC R/W bits are cleared to 0 on VCC1 POR, but not on a WDT.\n            Note: This field is written by Boot ROM firmware to indicate the number of times a WDT fired before loading a good EC code image.  Reset Value */

#define EC_REG_BANK_WDT_CNT_Msk               _UINT32_(0x00000000)                                 /* (EC_REG_BANK_WDT_CNT) Register Mask  */


/* -------- EC_REG_BANK_AESH_BSWAP_CTRL : (EC_REG_BANK Offset: 0x2C) (R/W 32) AES HASH Byte Swap Control Register. -------- */
#define EC_REG_BANK_AESH_BSWAP_CTRL_RESETVALUE _UINT32_(0x00)                                       /*  (EC_REG_BANK_AESH_BSWAP_CTRL) AES HASH Byte Swap Control Register.  Reset Value */

#define EC_REG_BANK_AESH_BSWAP_CTRL_IP_BYTE_SWAP_EN_Pos _UINT32_(0)                                          /* (EC_REG_BANK_AESH_BSWAP_CTRL) Used to enable byte swap on a DWORD during AHB read from AES / HASH block: 1=Enable; 0=Disable. Position */
#define EC_REG_BANK_AESH_BSWAP_CTRL_IP_BYTE_SWAP_EN_Msk (_UINT32_(0x1) << EC_REG_BANK_AESH_BSWAP_CTRL_IP_BYTE_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) Used to enable byte swap on a DWORD during AHB read from AES / HASH block: 1=Enable; 0=Disable. Mask */
#define EC_REG_BANK_AESH_BSWAP_CTRL_IP_BYTE_SWAP_EN(value) (EC_REG_BANK_AESH_BSWAP_CTRL_IP_BYTE_SWAP_EN_Msk & (_UINT32_(value) << EC_REG_BANK_AESH_BSWAP_CTRL_IP_BYTE_SWAP_EN_Pos)) /* Assigment of value for IP_BYTE_SWAP_EN in the EC_REG_BANK_AESH_BSWAP_CTRL register */
#define EC_REG_BANK_AESH_BSWAP_CTRL_OP_BYTE_SWAP_EN_Pos _UINT32_(1)                                          /* (EC_REG_BANK_AESH_BSWAP_CTRL) Used to enable byte swap on a DWORD during AHB write from AES / HASH block: 1=Enable; 0=Disable. Position */
#define EC_REG_BANK_AESH_BSWAP_CTRL_OP_BYTE_SWAP_EN_Msk (_UINT32_(0x1) << EC_REG_BANK_AESH_BSWAP_CTRL_OP_BYTE_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) Used to enable byte swap on a DWORD during AHB write from AES / HASH block: 1=Enable; 0=Disable. Mask */
#define EC_REG_BANK_AESH_BSWAP_CTRL_OP_BYTE_SWAP_EN(value) (EC_REG_BANK_AESH_BSWAP_CTRL_OP_BYTE_SWAP_EN_Msk & (_UINT32_(value) << EC_REG_BANK_AESH_BSWAP_CTRL_OP_BYTE_SWAP_EN_Pos)) /* Assigment of value for OP_BYTE_SWAP_EN in the EC_REG_BANK_AESH_BSWAP_CTRL register */
#define EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_Pos _UINT32_(2)                                          /* (EC_REG_BANK_AESH_BSWAP_CTRL) Used to enable word swap on a DWORD during AHB read from AES / HASH block      4=Swap 32-bit doublewords in 128-byte blocks      3=Swap doublewords in 64-byte blocks. Useful for SHA-256. Bus references issued in the order 0x3C, 0x38, 0x34, 0x30, 0x2C,      0x28, 0x24, 0x20, 0x1C, 0x18, 0x14, 0x10, 0xC, 0x8, 0x4, 0x0,...      2=Swap doublewords in 16-byte blocks. Useful for AES. Bus references issued in the order 0xC, 0x8, 0x4, 0x0, 0x1C, 0x18,...      1=Swap doublewords in 8-byte blocks. Useful for SHA-512, which works on 64-bit words. Bus references issued in the order 0x4,      0x0, 0xC, 0x8, ...      0=Disable. Position */
#define EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_Msk (_UINT32_(0x7) << EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) Used to enable word swap on a DWORD during AHB read from AES / HASH block      4=Swap 32-bit doublewords in 128-byte blocks      3=Swap doublewords in 64-byte blocks. Useful for SHA-256. Bus references issued in the order 0x3C, 0x38, 0x34, 0x30, 0x2C,      0x28, 0x24, 0x20, 0x1C, 0x18, 0x14, 0x10, 0xC, 0x8, 0x4, 0x0,...      2=Swap doublewords in 16-byte blocks. Useful for AES. Bus references issued in the order 0xC, 0x8, 0x4, 0x0, 0x1C, 0x18,...      1=Swap doublewords in 8-byte blocks. Useful for SHA-512, which works on 64-bit words. Bus references issued in the order 0x4,      0x0, 0xC, 0x8, ...      0=Disable. Mask */
#define EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN(value) (EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_Msk & (_UINT32_(value) << EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_Pos)) /* Assigment of value for IP_BLK_SWAP_EN in the EC_REG_BANK_AESH_BSWAP_CTRL register */
#define   EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_SWAP_128_BYTE_BLOCK_Val _UINT32_(0x4)                                        /* (EC_REG_BANK_AESH_BSWAP_CTRL) 4=Swap 32-bit doublewords in 128-byte blocks   */
#define   EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_SWAP_64_BYTE_BLOCK_Val _UINT32_(0x3)                                        /* (EC_REG_BANK_AESH_BSWAP_CTRL) 3=Swap doublewords in 64-byte blocks. Useful for SHA-256. Bus references issued in the order 0x3C, 0x38, 0x34, 0x30, 0x2C,\n          0x28, 0x24, 0x20, 0x1C, 0x18, 0x14, 0x10, 0xC, 0x8, 0x4, 0x0,...  */
#define   EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_SWAP_16_BYTE_BLOCK_Val _UINT32_(0x2)                                        /* (EC_REG_BANK_AESH_BSWAP_CTRL) 2=Swap doublewords in 16-byte blocks. Useful for AES. Bus references issued in the order 0xC, 0x8, 0x4, 0x0, 0x1C, 0x18,...  */
#define   EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_SWAP_8_BYTE_BLOCK_Val _UINT32_(0x1)                                        /* (EC_REG_BANK_AESH_BSWAP_CTRL) 1=Swap doublewords in 8-byte blocks. Useful for SHA-512, which works on 64-bit words. Bus references issued in the order 0x4,\n       0x0, 0xC, 0x8, ...\n  */
#define   EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_DIS_Val _UINT32_(0x0)                                        /* (EC_REG_BANK_AESH_BSWAP_CTRL) 0=Disable.  */
#define EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_SWAP_128_BYTE_BLOCK (EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_SWAP_128_BYTE_BLOCK_Val << EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) 4=Swap 32-bit doublewords in 128-byte blocks  Position  */
#define EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_SWAP_64_BYTE_BLOCK (EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_SWAP_64_BYTE_BLOCK_Val << EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) 3=Swap doublewords in 64-byte blocks. Useful for SHA-256. Bus references issued in the order 0x3C, 0x38, 0x34, 0x30, 0x2C,\n          0x28, 0x24, 0x20, 0x1C, 0x18, 0x14, 0x10, 0xC, 0x8, 0x4, 0x0,... Position  */
#define EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_SWAP_16_BYTE_BLOCK (EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_SWAP_16_BYTE_BLOCK_Val << EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) 2=Swap doublewords in 16-byte blocks. Useful for AES. Bus references issued in the order 0xC, 0x8, 0x4, 0x0, 0x1C, 0x18,... Position  */
#define EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_SWAP_8_BYTE_BLOCK (EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_SWAP_8_BYTE_BLOCK_Val << EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) 1=Swap doublewords in 8-byte blocks. Useful for SHA-512, which works on 64-bit words. Bus references issued in the order 0x4,\n       0x0, 0xC, 0x8, ...\n Position  */
#define EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_DIS (EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_DIS_Val << EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) 0=Disable. Position  */
#define EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_Pos _UINT32_(5)                                          /* (EC_REG_BANK_AESH_BSWAP_CTRL) Used to enable word swap on a DWORD during AHB write from AES / HASH block      4=Swap 32-bit doublewords in 128-byte blocks      3=Swap doublewords in 64-byte blocks. Useful for SHA-256. Bus references issued in the order 0x3C, 0x38, 0x34, 0x30, 0x2C,      0x28, 0x24, 0x20, 0x1C, 0x18, 0x14, 0x10, 0xC, 0x8, 0x4, 0x0,...      2=Swap doublewords in 16-byte blocks. Useful for AES. Bus references issued in the order 0xC, 0x8, 0x4, 0x0, 0x1C, 0x18,...      1=Swap doublewords in 8-byte blocks. Useful for SHA-512, which works on 64-bit words. Bus references issued in the order 0x4,      0x0, 0xC, 0x8, ...      0=Disable. Position */
#define EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_Msk (_UINT32_(0x7) << EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) Used to enable word swap on a DWORD during AHB write from AES / HASH block      4=Swap 32-bit doublewords in 128-byte blocks      3=Swap doublewords in 64-byte blocks. Useful for SHA-256. Bus references issued in the order 0x3C, 0x38, 0x34, 0x30, 0x2C,      0x28, 0x24, 0x20, 0x1C, 0x18, 0x14, 0x10, 0xC, 0x8, 0x4, 0x0,...      2=Swap doublewords in 16-byte blocks. Useful for AES. Bus references issued in the order 0xC, 0x8, 0x4, 0x0, 0x1C, 0x18,...      1=Swap doublewords in 8-byte blocks. Useful for SHA-512, which works on 64-bit words. Bus references issued in the order 0x4,      0x0, 0xC, 0x8, ...      0=Disable. Mask */
#define EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN(value) (EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_Msk & (_UINT32_(value) << EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_Pos)) /* Assigment of value for OP_BLK_SWAP_EN in the EC_REG_BANK_AESH_BSWAP_CTRL register */
#define   EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_SWAP_128_BYTE_BLOCK_Val _UINT32_(0x4)                                        /* (EC_REG_BANK_AESH_BSWAP_CTRL) 4=Swap 32-bit doublewords in 128-byte blocks   */
#define   EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_SWAP_64_BYTE_BLOCK_Val _UINT32_(0x3)                                        /* (EC_REG_BANK_AESH_BSWAP_CTRL) 3=Swap doublewords in 64-byte blocks. Useful for SHA-256. Bus references issued in the order 0x3C, 0x38, 0x34, 0x30, 0x2C,\n          0x28, 0x24, 0x20, 0x1C, 0x18, 0x14, 0x10, 0xC, 0x8, 0x4, 0x0,...  */
#define   EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_SWAP_16_BYTE_BLOCK_Val _UINT32_(0x2)                                        /* (EC_REG_BANK_AESH_BSWAP_CTRL) 2=Swap doublewords in 16-byte blocks. Useful for AES. Bus references issued in the order 0xC, 0x8, 0x4, 0x0, 0x1C, 0x18,...  */
#define   EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_SWAP_8_BYTE_BLOCK_Val _UINT32_(0x1)                                        /* (EC_REG_BANK_AESH_BSWAP_CTRL) 1=Swap doublewords in 8-byte blocks. Useful for SHA-512, which works on 64-bit words. Bus references issued in the order 0x4,\n       0x0, 0xC, 0x8, ...\n  */
#define   EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_DIS_Val _UINT32_(0x0)                                        /* (EC_REG_BANK_AESH_BSWAP_CTRL) 0=Disable.  */
#define EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_SWAP_128_BYTE_BLOCK (EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_SWAP_128_BYTE_BLOCK_Val << EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) 4=Swap 32-bit doublewords in 128-byte blocks  Position  */
#define EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_SWAP_64_BYTE_BLOCK (EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_SWAP_64_BYTE_BLOCK_Val << EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) 3=Swap doublewords in 64-byte blocks. Useful for SHA-256. Bus references issued in the order 0x3C, 0x38, 0x34, 0x30, 0x2C,\n          0x28, 0x24, 0x20, 0x1C, 0x18, 0x14, 0x10, 0xC, 0x8, 0x4, 0x0,... Position  */
#define EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_SWAP_16_BYTE_BLOCK (EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_SWAP_16_BYTE_BLOCK_Val << EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) 2=Swap doublewords in 16-byte blocks. Useful for AES. Bus references issued in the order 0xC, 0x8, 0x4, 0x0, 0x1C, 0x18,... Position  */
#define EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_SWAP_8_BYTE_BLOCK (EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_SWAP_8_BYTE_BLOCK_Val << EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) 1=Swap doublewords in 8-byte blocks. Useful for SHA-512, which works on 64-bit words. Bus references issued in the order 0x4,\n       0x0, 0xC, 0x8, ...\n Position  */
#define EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_DIS (EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_DIS_Val << EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) 0=Disable. Position  */
#define EC_REG_BANK_AESH_BSWAP_CTRL_Msk       _UINT32_(0x000000FF)                                 /* (EC_REG_BANK_AESH_BSWAP_CTRL) Register Mask  */


/* -------- EC_REG_BANK_PECI_DIS : (EC_REG_BANK Offset: 0x40) (R/W 32) PECI Disable -------- */
#define EC_REG_BANK_PECI_DIS_RESETVALUE       _UINT32_(0x00)                                       /*  (EC_REG_BANK_PECI_DIS) PECI Disable  Reset Value */

#define EC_REG_BANK_PECI_DIS_P_DIS_Pos        _UINT32_(0)                                          /* (EC_REG_BANK_PECI_DIS) When this bit is asserted ('1'), it disables the PECI pads to reduce leakage. Position */
#define EC_REG_BANK_PECI_DIS_P_DIS_Msk        (_UINT32_(0x1) << EC_REG_BANK_PECI_DIS_P_DIS_Pos)    /* (EC_REG_BANK_PECI_DIS) When this bit is asserted ('1'), it disables the PECI pads to reduce leakage. Mask */
#define EC_REG_BANK_PECI_DIS_P_DIS(value)     (EC_REG_BANK_PECI_DIS_P_DIS_Msk & (_UINT32_(value) << EC_REG_BANK_PECI_DIS_P_DIS_Pos)) /* Assigment of value for P_DIS in the EC_REG_BANK_PECI_DIS register */
#define EC_REG_BANK_PECI_DIS_Msk              _UINT32_(0x00000001)                                 /* (EC_REG_BANK_PECI_DIS) Register Mask  */


/* -------- EC_REG_BANK_STAP_TMIR : (EC_REG_BANK Offset: 0x4C) ( R/ 32) This register is a mirror of the Boot Control Register.\n -------- */
#define EC_REG_BANK_STAP_TMIR_RESETVALUE      _UINT32_(0x00)                                       /*  (EC_REG_BANK_STAP_TMIR) This register is a mirror of the Boot Control Register.\n  Reset Value */

#define EC_REG_BANK_STAP_TMIR_QA_MODE_Pos     _UINT32_(0)                                          /* (EC_REG_BANK_STAP_TMIR) This is the mirror of the QA_MODE (bit 0) of Boot Control Register.\n         This register bit tells BOOT ROM to enter the QA mode.\n Position */
#define EC_REG_BANK_STAP_TMIR_QA_MODE_Msk     (_UINT32_(0x1) << EC_REG_BANK_STAP_TMIR_QA_MODE_Pos) /* (EC_REG_BANK_STAP_TMIR) This is the mirror of the QA_MODE (bit 0) of Boot Control Register.\n         This register bit tells BOOT ROM to enter the QA mode.\n Mask */
#define EC_REG_BANK_STAP_TMIR_QA_MODE(value)  (EC_REG_BANK_STAP_TMIR_QA_MODE_Msk & (_UINT32_(value) << EC_REG_BANK_STAP_TMIR_QA_MODE_Pos)) /* Assigment of value for QA_MODE in the EC_REG_BANK_STAP_TMIR register */
#define EC_REG_BANK_STAP_TMIR_VLD_MODE_Pos    _UINT32_(1)                                          /* (EC_REG_BANK_STAP_TMIR) This is the mirror of the Validation MODE (bit 1) of Boot Control Register.\n         This register bit tells BOOT ROM to enter the Validation mode.\n Position */
#define EC_REG_BANK_STAP_TMIR_VLD_MODE_Msk    (_UINT32_(0x1) << EC_REG_BANK_STAP_TMIR_VLD_MODE_Pos) /* (EC_REG_BANK_STAP_TMIR) This is the mirror of the Validation MODE (bit 1) of Boot Control Register.\n         This register bit tells BOOT ROM to enter the Validation mode.\n Mask */
#define EC_REG_BANK_STAP_TMIR_VLD_MODE(value) (EC_REG_BANK_STAP_TMIR_VLD_MODE_Msk & (_UINT32_(value) << EC_REG_BANK_STAP_TMIR_VLD_MODE_Pos)) /* Assigment of value for VLD_MODE in the EC_REG_BANK_STAP_TMIR register */
#define EC_REG_BANK_STAP_TMIR_BS_STATUS_Pos   _UINT32_(2)                                          /* (EC_REG_BANK_STAP_TMIR) This register bit tells BOOT ROM about the Boundary Scan Status.\n Position */
#define EC_REG_BANK_STAP_TMIR_BS_STATUS_Msk   (_UINT32_(0x1) << EC_REG_BANK_STAP_TMIR_BS_STATUS_Pos) /* (EC_REG_BANK_STAP_TMIR) This register bit tells BOOT ROM about the Boundary Scan Status.\n Mask */
#define EC_REG_BANK_STAP_TMIR_BS_STATUS(value) (EC_REG_BANK_STAP_TMIR_BS_STATUS_Msk & (_UINT32_(value) << EC_REG_BANK_STAP_TMIR_BS_STATUS_Pos)) /* Assigment of value for BS_STATUS in the EC_REG_BANK_STAP_TMIR register */
#define EC_REG_BANK_STAP_TMIR_INT_SPI_RECOV_Pos _UINT32_(3)                                          /* (EC_REG_BANK_STAP_TMIR) This register bit tells BOOT ROM that SPI FLASH Recovery Mode is entered.\n Position */
#define EC_REG_BANK_STAP_TMIR_INT_SPI_RECOV_Msk (_UINT32_(0x1) << EC_REG_BANK_STAP_TMIR_INT_SPI_RECOV_Pos) /* (EC_REG_BANK_STAP_TMIR) This register bit tells BOOT ROM that SPI FLASH Recovery Mode is entered.\n Mask */
#define EC_REG_BANK_STAP_TMIR_INT_SPI_RECOV(value) (EC_REG_BANK_STAP_TMIR_INT_SPI_RECOV_Msk & (_UINT32_(value) << EC_REG_BANK_STAP_TMIR_INT_SPI_RECOV_Pos)) /* Assigment of value for INT_SPI_RECOV in the EC_REG_BANK_STAP_TMIR register */
#define EC_REG_BANK_STAP_TMIR_Msk             _UINT32_(0x0000000F)                                 /* (EC_REG_BANK_STAP_TMIR) Register Mask  */


/* -------- EC_REG_BANK_VCI_FW_OVR : (EC_REG_BANK Offset: 0x50) (R/W 32) This register contains the system shutdown bit programmable by Firmware.\n -------- */
#define EC_REG_BANK_VCI_FW_OVR_RESETVALUE     _UINT32_(0x01)                                       /*  (EC_REG_BANK_VCI_FW_OVR) This register contains the system shutdown bit programmable by Firmware.\n  Reset Value */

#define EC_REG_BANK_VCI_FW_OVR_SYS_SHDN_Pos   _UINT32_(0)                                          /* (EC_REG_BANK_VCI_FW_OVR) This register contains the active low system shutdown bit programmable by Firmware.\n Position */
#define EC_REG_BANK_VCI_FW_OVR_SYS_SHDN_Msk   (_UINT32_(0x1) << EC_REG_BANK_VCI_FW_OVR_SYS_SHDN_Pos) /* (EC_REG_BANK_VCI_FW_OVR) This register contains the active low system shutdown bit programmable by Firmware.\n Mask */
#define EC_REG_BANK_VCI_FW_OVR_SYS_SHDN(value) (EC_REG_BANK_VCI_FW_OVR_SYS_SHDN_Msk & (_UINT32_(value) << EC_REG_BANK_VCI_FW_OVR_SYS_SHDN_Pos)) /* Assigment of value for SYS_SHDN in the EC_REG_BANK_VCI_FW_OVR register */
#define EC_REG_BANK_VCI_FW_OVR_Msk            _UINT32_(0x00000001)                                 /* (EC_REG_BANK_VCI_FW_OVR) Register Mask  */


/* -------- EC_REG_BANK_BROM_STS : (EC_REG_BANK Offset: 0x54) (R/W 8) This register contains the VTR Reset Status for BOOT ROM.\n -------- */
#define EC_REG_BANK_BROM_STS_RESETVALUE       _UINT8_(0x01)                                        /*  (EC_REG_BANK_BROM_STS) This register contains the VTR Reset Status for BOOT ROM.\n  Reset Value */

#define EC_REG_BANK_BROM_STS_VTR_RST_STS_Pos  _UINT8_(0)                                           /* (EC_REG_BANK_BROM_STS) This bit contains the RESET_SYS Status for BOOT ROM usage.\n         1= RESET_SYS event occured.\n         0= RESET_SYS event did not occured.\n         This registe is R/W1C (read / write 1 to clear). Position */
#define EC_REG_BANK_BROM_STS_VTR_RST_STS_Msk  (_UINT8_(0x1) << EC_REG_BANK_BROM_STS_VTR_RST_STS_Pos) /* (EC_REG_BANK_BROM_STS) This bit contains the RESET_SYS Status for BOOT ROM usage.\n         1= RESET_SYS event occured.\n         0= RESET_SYS event did not occured.\n         This registe is R/W1C (read / write 1 to clear). Mask */
#define EC_REG_BANK_BROM_STS_VTR_RST_STS(value) (EC_REG_BANK_BROM_STS_VTR_RST_STS_Msk & (_UINT8_(value) << EC_REG_BANK_BROM_STS_VTR_RST_STS_Pos)) /* Assigment of value for VTR_RST_STS in the EC_REG_BANK_BROM_STS register */
#define EC_REG_BANK_BROM_STS_WDT_EVT_Pos      _UINT8_(1)                                           /* (EC_REG_BANK_BROM_STS) This bit contains the WDT Event Status for BOOT ROM usage.\n         1= WDT event occured.\n         0= WDT event did not occured.\n         This registe is R/W1C (read / write 1 to clear). Position */
#define EC_REG_BANK_BROM_STS_WDT_EVT_Msk      (_UINT8_(0x1) << EC_REG_BANK_BROM_STS_WDT_EVT_Pos)   /* (EC_REG_BANK_BROM_STS) This bit contains the WDT Event Status for BOOT ROM usage.\n         1= WDT event occured.\n         0= WDT event did not occured.\n         This registe is R/W1C (read / write 1 to clear). Mask */
#define EC_REG_BANK_BROM_STS_WDT_EVT(value)   (EC_REG_BANK_BROM_STS_WDT_EVT_Msk & (_UINT8_(value) << EC_REG_BANK_BROM_STS_WDT_EVT_Pos)) /* Assigment of value for WDT_EVT in the EC_REG_BANK_BROM_STS register */
#define EC_REG_BANK_BROM_STS_Msk              _UINT8_(0x03)                                        /* (EC_REG_BANK_BROM_STS) Register Mask  */


/* -------- EC_REG_BANK_CRYPTO_SRST : (EC_REG_BANK Offset: 0x5C) (R/W 32) System Shutdown Reset -------- */
#define EC_REG_BANK_CRYPTO_SRST_RESETVALUE    _UINT32_(0x00)                                       /*  (EC_REG_BANK_CRYPTO_SRST) System Shutdown Reset  Reset Value */

#define EC_REG_BANK_CRYPTO_SRST_RNG_Pos       _UINT32_(0)                                          /* (EC_REG_BANK_CRYPTO_SRST) When this bit is asserted ('1'), the Random Number Generator block is reset. Position */
#define EC_REG_BANK_CRYPTO_SRST_RNG_Msk       (_UINT32_(0x1) << EC_REG_BANK_CRYPTO_SRST_RNG_Pos)   /* (EC_REG_BANK_CRYPTO_SRST) When this bit is asserted ('1'), the Random Number Generator block is reset. Mask */
#define EC_REG_BANK_CRYPTO_SRST_RNG(value)    (EC_REG_BANK_CRYPTO_SRST_RNG_Msk & (_UINT32_(value) << EC_REG_BANK_CRYPTO_SRST_RNG_Pos)) /* Assigment of value for RNG in the EC_REG_BANK_CRYPTO_SRST register */
#define EC_REG_BANK_CRYPTO_SRST_PUB_KEY_Pos   _UINT32_(1)                                          /* (EC_REG_BANK_CRYPTO_SRST) When this bit is asserted ('1'), the Public Key block is reset. Position */
#define EC_REG_BANK_CRYPTO_SRST_PUB_KEY_Msk   (_UINT32_(0x1) << EC_REG_BANK_CRYPTO_SRST_PUB_KEY_Pos) /* (EC_REG_BANK_CRYPTO_SRST) When this bit is asserted ('1'), the Public Key block is reset. Mask */
#define EC_REG_BANK_CRYPTO_SRST_PUB_KEY(value) (EC_REG_BANK_CRYPTO_SRST_PUB_KEY_Msk & (_UINT32_(value) << EC_REG_BANK_CRYPTO_SRST_PUB_KEY_Pos)) /* Assigment of value for PUB_KEY in the EC_REG_BANK_CRYPTO_SRST register */
#define EC_REG_BANK_CRYPTO_SRST_AES_HASH_Pos  _UINT32_(2)                                          /* (EC_REG_BANK_CRYPTO_SRST) When this bit is asserted ('1'), the AES and Hash blocks are reset. Position */
#define EC_REG_BANK_CRYPTO_SRST_AES_HASH_Msk  (_UINT32_(0x1) << EC_REG_BANK_CRYPTO_SRST_AES_HASH_Pos) /* (EC_REG_BANK_CRYPTO_SRST) When this bit is asserted ('1'), the AES and Hash blocks are reset. Mask */
#define EC_REG_BANK_CRYPTO_SRST_AES_HASH(value) (EC_REG_BANK_CRYPTO_SRST_AES_HASH_Msk & (_UINT32_(value) << EC_REG_BANK_CRYPTO_SRST_AES_HASH_Pos)) /* Assigment of value for AES_HASH in the EC_REG_BANK_CRYPTO_SRST register */
#define EC_REG_BANK_CRYPTO_SRST_Msk           _UINT32_(0x00000007)                                 /* (EC_REG_BANK_CRYPTO_SRST) Register Mask  */


/* -------- EC_REG_BANK_GPIO_BANK_PWR : (EC_REG_BANK Offset: 0x64) (R/W 32) GPIO Bank Power Register -------- */
#define EC_REG_BANK_GPIO_BANK_PWR_RESETVALUE  _UINT32_(0x00)                                       /*  (EC_REG_BANK_GPIO_BANK_PWR) GPIO Bank Power Register  Reset Value */

#define EC_REG_BANK_GPIO_BANK_PWR_TEST_Pos    _UINT32_(0)                                          /* (EC_REG_BANK_GPIO_BANK_PWR) This bit must be programmed to 0h for proper operation of the device.\n Position */
#define EC_REG_BANK_GPIO_BANK_PWR_TEST_Msk    (_UINT32_(0x1) << EC_REG_BANK_GPIO_BANK_PWR_TEST_Pos) /* (EC_REG_BANK_GPIO_BANK_PWR) This bit must be programmed to 0h for proper operation of the device.\n Mask */
#define EC_REG_BANK_GPIO_BANK_PWR_TEST(value) (EC_REG_BANK_GPIO_BANK_PWR_TEST_Msk & (_UINT32_(value) << EC_REG_BANK_GPIO_BANK_PWR_TEST_Pos)) /* Assigment of value for TEST in the EC_REG_BANK_GPIO_BANK_PWR register */
#define EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL2_Pos _UINT32_(1)                                          /* (EC_REG_BANK_GPIO_BANK_PWR) Voltage value on VTR2. This bit is set by Firmware after a VTR Power On Reset.\n         It must be set by software if the VTR power rail is not active when RESET_SYS is de-asserted.\n         Write access is determined by bit 7.\n      1=VTR2 is powered by 1.8V\n      0=VTR2 is powered by 3.3V. Position */
#define EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL2_Msk (_UINT32_(0x1) << EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL2_Pos) /* (EC_REG_BANK_GPIO_BANK_PWR) Voltage value on VTR2. This bit is set by Firmware after a VTR Power On Reset.\n         It must be set by software if the VTR power rail is not active when RESET_SYS is de-asserted.\n         Write access is determined by bit 7.\n      1=VTR2 is powered by 1.8V\n      0=VTR2 is powered by 3.3V. Mask */
#define EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL2(value) (EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL2_Msk & (_UINT32_(value) << EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL2_Pos)) /* Assigment of value for VTR_LVL2 in the EC_REG_BANK_GPIO_BANK_PWR register */
#define EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL3_Pos _UINT32_(2)                                          /* (EC_REG_BANK_GPIO_BANK_PWR) Voltage value on VTR3. This bit is set by hardware after a VTR Power On Reset, but may be overridden by software.\n      It must be set by software if the VTR power rail is not active when RESET_SYS is de-asserted. Write access is determined by bit 7.\n      1=VTR3 is powered by 1.8V\n      0=VTR3 is powered by 3.3V. Position */
#define EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL3_Msk (_UINT32_(0x1) << EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL3_Pos) /* (EC_REG_BANK_GPIO_BANK_PWR) Voltage value on VTR3. This bit is set by hardware after a VTR Power On Reset, but may be overridden by software.\n      It must be set by software if the VTR power rail is not active when RESET_SYS is de-asserted. Write access is determined by bit 7.\n      1=VTR3 is powered by 1.8V\n      0=VTR3 is powered by 3.3V. Mask */
#define EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL3(value) (EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL3_Msk & (_UINT32_(value) << EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL3_Pos)) /* Assigment of value for VTR_LVL3 in the EC_REG_BANK_GPIO_BANK_PWR register */
#define EC_REG_BANK_GPIO_BANK_PWR_GPIO_BANK_PWR_LOCK_Pos _UINT32_(7)                                          /* (EC_REG_BANK_GPIO_BANK_PWR) GPIO Bank Power Lock. 0: VTR_LEVEL bits[2:0] and GPIO Bank Power Lock bit are R/W\n      1 = VTR_LEVEL bits[2:0] and GPIO Bank Power Lock bit are Read Only. Position */
#define EC_REG_BANK_GPIO_BANK_PWR_GPIO_BANK_PWR_LOCK_Msk (_UINT32_(0x1) << EC_REG_BANK_GPIO_BANK_PWR_GPIO_BANK_PWR_LOCK_Pos) /* (EC_REG_BANK_GPIO_BANK_PWR) GPIO Bank Power Lock. 0: VTR_LEVEL bits[2:0] and GPIO Bank Power Lock bit are R/W\n      1 = VTR_LEVEL bits[2:0] and GPIO Bank Power Lock bit are Read Only. Mask */
#define EC_REG_BANK_GPIO_BANK_PWR_GPIO_BANK_PWR_LOCK(value) (EC_REG_BANK_GPIO_BANK_PWR_GPIO_BANK_PWR_LOCK_Msk & (_UINT32_(value) << EC_REG_BANK_GPIO_BANK_PWR_GPIO_BANK_PWR_LOCK_Pos)) /* Assigment of value for GPIO_BANK_PWR_LOCK in the EC_REG_BANK_GPIO_BANK_PWR register */
#define EC_REG_BANK_GPIO_BANK_PWR_Msk         _UINT32_(0x00000087)                                 /* (EC_REG_BANK_GPIO_BANK_PWR) Register Mask  */

#define EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL_Pos _UINT32_(1)                                          /* (EC_REG_BANK_GPIO_BANK_PWR Position) Voltage value on VTR2. This bit is set by Firmware after a VTR Power On Reset.\n         It must be set by software if the VTR power rail is not active when RESET_SYS is de-asserted.\n         Write access is determined by bit 7.\n      x=VTR2 is powered by x.8V\n      x=VTR2 is powered by 3.3V. */
#define EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL_Msk (_UINT32_(0x3) << EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL_Pos) /* (EC_REG_BANK_GPIO_BANK_PWR Mask) VTR_LVL */
#define EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL(value) (EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL_Msk & (_UINT32_(value) << EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL_Pos)) 

/* -------- EC_REG_BANK_JTAG_MCFG : (EC_REG_BANK Offset: 0x70) (R/W 32) JTAG Master Configuration Register -------- */
#define EC_REG_BANK_JTAG_MCFG_RESETVALUE      _UINT32_(0x00)                                       /*  (EC_REG_BANK_JTAG_MCFG) JTAG Master Configuration Register  Reset Value */

#define EC_REG_BANK_JTAG_MCFG_JTM_CLK_Pos     _UINT32_(0)                                          /* (EC_REG_BANK_JTAG_MCFG) This field determines the JTAG Master clock rate, derived from the 48MHz master clock.      7=375KHz; 6=750KHz; 5=1.5Mhz; 4=3Mhz; 3=6Mhz; 2=12Mhz; 1=24MHz; 0=Reserved. Position */
#define EC_REG_BANK_JTAG_MCFG_JTM_CLK_Msk     (_UINT32_(0x7) << EC_REG_BANK_JTAG_MCFG_JTM_CLK_Pos) /* (EC_REG_BANK_JTAG_MCFG) This field determines the JTAG Master clock rate, derived from the 48MHz master clock.      7=375KHz; 6=750KHz; 5=1.5Mhz; 4=3Mhz; 3=6Mhz; 2=12Mhz; 1=24MHz; 0=Reserved. Mask */
#define EC_REG_BANK_JTAG_MCFG_JTM_CLK(value)  (EC_REG_BANK_JTAG_MCFG_JTM_CLK_Msk & (_UINT32_(value) << EC_REG_BANK_JTAG_MCFG_JTM_CLK_Pos)) /* Assigment of value for JTM_CLK in the EC_REG_BANK_JTAG_MCFG register */
#define   EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_375KHz_Val _UINT32_(0x7)                                        /* (EC_REG_BANK_JTAG_MCFG) 7=375KHz  */
#define   EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_750KHz_Val _UINT32_(0x6)                                        /* (EC_REG_BANK_JTAG_MCFG) 6=750KHz  */
#define   EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_1MHz_Val _UINT32_(0x5)                                        /* (EC_REG_BANK_JTAG_MCFG) 5=1.5Mhz  */
#define   EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_3Mhz_Val _UINT32_(0x4)                                        /* (EC_REG_BANK_JTAG_MCFG) 4=3Mhz  */
#define   EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_6Mhz_Val _UINT32_(0x3)                                        /* (EC_REG_BANK_JTAG_MCFG) 3=6Mhz  */
#define   EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_12Mhz_Val _UINT32_(0x2)                                        /* (EC_REG_BANK_JTAG_MCFG) 2=12Mhz  */
#define   EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_24MHz_Val _UINT32_(0x1)                                        /* (EC_REG_BANK_JTAG_MCFG) 1=24MHz  */
#define EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_375KHz (EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_375KHz_Val << EC_REG_BANK_JTAG_MCFG_JTM_CLK_Pos) /* (EC_REG_BANK_JTAG_MCFG) 7=375KHz Position  */
#define EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_750KHz (EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_750KHz_Val << EC_REG_BANK_JTAG_MCFG_JTM_CLK_Pos) /* (EC_REG_BANK_JTAG_MCFG) 6=750KHz Position  */
#define EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_1MHz (EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_1MHz_Val << EC_REG_BANK_JTAG_MCFG_JTM_CLK_Pos) /* (EC_REG_BANK_JTAG_MCFG) 5=1.5Mhz Position  */
#define EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_3Mhz (EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_3Mhz_Val << EC_REG_BANK_JTAG_MCFG_JTM_CLK_Pos) /* (EC_REG_BANK_JTAG_MCFG) 4=3Mhz Position  */
#define EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_6Mhz (EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_6Mhz_Val << EC_REG_BANK_JTAG_MCFG_JTM_CLK_Pos) /* (EC_REG_BANK_JTAG_MCFG) 3=6Mhz Position  */
#define EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_12Mhz (EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_12Mhz_Val << EC_REG_BANK_JTAG_MCFG_JTM_CLK_Pos) /* (EC_REG_BANK_JTAG_MCFG) 2=12Mhz Position  */
#define EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_24MHz (EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_24MHz_Val << EC_REG_BANK_JTAG_MCFG_JTM_CLK_Pos) /* (EC_REG_BANK_JTAG_MCFG) 1=24MHz Position  */
#define EC_REG_BANK_JTAG_MCFG_MAS_SLV_Pos     _UINT32_(3)                                          /* (EC_REG_BANK_JTAG_MCFG) This bit controls the direction of the JTAG port. 1=The JTAG Port is configured as a Master\n      0=The JTAG Port is configures as a Slave. Position */
#define EC_REG_BANK_JTAG_MCFG_MAS_SLV_Msk     (_UINT32_(0x1) << EC_REG_BANK_JTAG_MCFG_MAS_SLV_Pos) /* (EC_REG_BANK_JTAG_MCFG) This bit controls the direction of the JTAG port. 1=The JTAG Port is configured as a Master\n      0=The JTAG Port is configures as a Slave. Mask */
#define EC_REG_BANK_JTAG_MCFG_MAS_SLV(value)  (EC_REG_BANK_JTAG_MCFG_MAS_SLV_Msk & (_UINT32_(value) << EC_REG_BANK_JTAG_MCFG_MAS_SLV_Pos)) /* Assigment of value for MAS_SLV in the EC_REG_BANK_JTAG_MCFG register */
#define EC_REG_BANK_JTAG_MCFG_Msk             _UINT32_(0x0000000F)                                 /* (EC_REG_BANK_JTAG_MCFG) Register Mask  */


/* -------- EC_REG_BANK_JTAG_MSTS : (EC_REG_BANK Offset: 0x74) ( R/ 32) JTAG Master Status Register -------- */
#define EC_REG_BANK_JTAG_MSTS_RESETVALUE      _UINT32_(0x00)                                       /*  (EC_REG_BANK_JTAG_MSTS) JTAG Master Status Register  Reset Value */

#define EC_REG_BANK_JTAG_MSTS_JTM_DONE_Pos    _UINT32_(0)                                          /* (EC_REG_BANK_JTAG_MSTS) This bit is set to '1b' when the JTAG Master Command Register is written. It becomes '0b' when shifting has completed.\n      Software can poll this bit to determine when a command has completed and it is therefore safe to remove the data in the JTAG Master TDO\n      Register and load new data into the JTAG Master TMS Register and the JTAG Master TDI Register. Position */
#define EC_REG_BANK_JTAG_MSTS_JTM_DONE_Msk    (_UINT32_(0x1) << EC_REG_BANK_JTAG_MSTS_JTM_DONE_Pos) /* (EC_REG_BANK_JTAG_MSTS) This bit is set to '1b' when the JTAG Master Command Register is written. It becomes '0b' when shifting has completed.\n      Software can poll this bit to determine when a command has completed and it is therefore safe to remove the data in the JTAG Master TDO\n      Register and load new data into the JTAG Master TMS Register and the JTAG Master TDI Register. Mask */
#define EC_REG_BANK_JTAG_MSTS_JTM_DONE(value) (EC_REG_BANK_JTAG_MSTS_JTM_DONE_Msk & (_UINT32_(value) << EC_REG_BANK_JTAG_MSTS_JTM_DONE_Pos)) /* Assigment of value for JTM_DONE in the EC_REG_BANK_JTAG_MSTS register */
#define EC_REG_BANK_JTAG_MSTS_Msk             _UINT32_(0x00000001)                                 /* (EC_REG_BANK_JTAG_MSTS) Register Mask  */


/* -------- EC_REG_BANK_JTAG_MTDO : (EC_REG_BANK Offset: 0x78) (R/W 32) JTAG Master TDO Register -------- */
#define EC_REG_BANK_JTAG_MTDO_RESETVALUE      _UINT32_(0x00)                                       /*  (EC_REG_BANK_JTAG_MTDO) JTAG Master TDO Register  Reset Value */

#define EC_REG_BANK_JTAG_MTDO_JTM_TDO_Pos     _UINT32_(0)                                          /* (EC_REG_BANK_JTAG_MTDO) When the JTAG Master Command Register is written, from 1 to 32 bits are shifted into this register, starting with bit 0,\n      from the JTAG_TDO pin. Shifting is at the rate determined by the JTM_CLK field in the JTAG Master Configuration Register. Position */
#define EC_REG_BANK_JTAG_MTDO_JTM_TDO_Msk     (_UINT32_(0xFFFFFFFF) << EC_REG_BANK_JTAG_MTDO_JTM_TDO_Pos) /* (EC_REG_BANK_JTAG_MTDO) When the JTAG Master Command Register is written, from 1 to 32 bits are shifted into this register, starting with bit 0,\n      from the JTAG_TDO pin. Shifting is at the rate determined by the JTM_CLK field in the JTAG Master Configuration Register. Mask */
#define EC_REG_BANK_JTAG_MTDO_JTM_TDO(value)  (EC_REG_BANK_JTAG_MTDO_JTM_TDO_Msk & (_UINT32_(value) << EC_REG_BANK_JTAG_MTDO_JTM_TDO_Pos)) /* Assigment of value for JTM_TDO in the EC_REG_BANK_JTAG_MTDO register */
#define EC_REG_BANK_JTAG_MTDO_Msk             _UINT32_(0xFFFFFFFF)                                 /* (EC_REG_BANK_JTAG_MTDO) Register Mask  */


/* -------- EC_REG_BANK_JTAG_MTDI : (EC_REG_BANK Offset: 0x7C) (R/W 32) JTAG Master TDI Register -------- */
#define EC_REG_BANK_JTAG_MTDI_RESETVALUE      _UINT32_(0x00)                                       /*  (EC_REG_BANK_JTAG_MTDI) JTAG Master TDI Register  Reset Value */

#define EC_REG_BANK_JTAG_MTDI_JTM_TDI_Pos     _UINT32_(0)                                          /* (EC_REG_BANK_JTAG_MTDI) When the JTAG Master Command Register is written, from 1 to 32 bits are shifted out of this register, starting with bit 0,\n      onto the JTAG_TDI pin. Shifting is at the rate determined by the JTM_CLK field in the JTAG Master Configuration Register. Position */
#define EC_REG_BANK_JTAG_MTDI_JTM_TDI_Msk     (_UINT32_(0xFFFFFFFF) << EC_REG_BANK_JTAG_MTDI_JTM_TDI_Pos) /* (EC_REG_BANK_JTAG_MTDI) When the JTAG Master Command Register is written, from 1 to 32 bits are shifted out of this register, starting with bit 0,\n      onto the JTAG_TDI pin. Shifting is at the rate determined by the JTM_CLK field in the JTAG Master Configuration Register. Mask */
#define EC_REG_BANK_JTAG_MTDI_JTM_TDI(value)  (EC_REG_BANK_JTAG_MTDI_JTM_TDI_Msk & (_UINT32_(value) << EC_REG_BANK_JTAG_MTDI_JTM_TDI_Pos)) /* Assigment of value for JTM_TDI in the EC_REG_BANK_JTAG_MTDI register */
#define EC_REG_BANK_JTAG_MTDI_Msk             _UINT32_(0xFFFFFFFF)                                 /* (EC_REG_BANK_JTAG_MTDI) Register Mask  */


/* -------- EC_REG_BANK_JTAG_MTMS : (EC_REG_BANK Offset: 0x80) (R/W 32) JTAG Master TMS Register -------- */
#define EC_REG_BANK_JTAG_MTMS_RESETVALUE      _UINT32_(0x00)                                       /*  (EC_REG_BANK_JTAG_MTMS) JTAG Master TMS Register  Reset Value */

#define EC_REG_BANK_JTAG_MTMS_JTM_TMS_Pos     _UINT32_(0)                                          /* (EC_REG_BANK_JTAG_MTMS) When the JTAG Master Command Register is written, from 1 to 32 bits are shifted out of this register, starting with bit 0,\n      onto the JTAG_TMS pin. Shifting is at the rate determined by the JTM_CLK field in the JTAG Master Configuration Register. Position */
#define EC_REG_BANK_JTAG_MTMS_JTM_TMS_Msk     (_UINT32_(0xFFFFFFFF) << EC_REG_BANK_JTAG_MTMS_JTM_TMS_Pos) /* (EC_REG_BANK_JTAG_MTMS) When the JTAG Master Command Register is written, from 1 to 32 bits are shifted out of this register, starting with bit 0,\n      onto the JTAG_TMS pin. Shifting is at the rate determined by the JTM_CLK field in the JTAG Master Configuration Register. Mask */
#define EC_REG_BANK_JTAG_MTMS_JTM_TMS(value)  (EC_REG_BANK_JTAG_MTMS_JTM_TMS_Msk & (_UINT32_(value) << EC_REG_BANK_JTAG_MTMS_JTM_TMS_Pos)) /* Assigment of value for JTM_TMS in the EC_REG_BANK_JTAG_MTMS register */
#define EC_REG_BANK_JTAG_MTMS_Msk             _UINT32_(0xFFFFFFFF)                                 /* (EC_REG_BANK_JTAG_MTMS) Register Mask  */


/* -------- EC_REG_BANK_JTAG_MCMD : (EC_REG_BANK Offset: 0x84) (R/W 32) JTAG Master Command Register -------- */
#define EC_REG_BANK_JTAG_MCMD_RESETVALUE      _UINT32_(0x00)                                       /*  (EC_REG_BANK_JTAG_MCMD) JTAG Master Command Register  Reset Value */

#define EC_REG_BANK_JTAG_MCMD_JTM_COUNT_Pos   _UINT32_(0)                                          /* (EC_REG_BANK_JTAG_MCMD) If the JTAG Port is configured as a Master, writing this register starts clocking and shifting on the JTAG port. The JTAG\n      Master port will shift JTM_COUNT+1 times, so writing a '0h' will shift 1 bit, and writing '31h' will shift 32 bits. The signal JTAG_CLK\n      will cycle JTM_COUNT+1 times. The contents of the JTAG Master TMS Register and the JTAG Master TDI Register will be shifted out on\n      the falling edge of JTAG_CLK and the.JTAG Master TDO Register will get shifted in on the rising edge of JTAG_CLK.\n      If the JTAG Port is configured as a Slave, writing this register has no effect. Position */
#define EC_REG_BANK_JTAG_MCMD_JTM_COUNT_Msk   (_UINT32_(0x1F) << EC_REG_BANK_JTAG_MCMD_JTM_COUNT_Pos) /* (EC_REG_BANK_JTAG_MCMD) If the JTAG Port is configured as a Master, writing this register starts clocking and shifting on the JTAG port. The JTAG\n      Master port will shift JTM_COUNT+1 times, so writing a '0h' will shift 1 bit, and writing '31h' will shift 32 bits. The signal JTAG_CLK\n      will cycle JTM_COUNT+1 times. The contents of the JTAG Master TMS Register and the JTAG Master TDI Register will be shifted out on\n      the falling edge of JTAG_CLK and the.JTAG Master TDO Register will get shifted in on the rising edge of JTAG_CLK.\n      If the JTAG Port is configured as a Slave, writing this register has no effect. Mask */
#define EC_REG_BANK_JTAG_MCMD_JTM_COUNT(value) (EC_REG_BANK_JTAG_MCMD_JTM_COUNT_Msk & (_UINT32_(value) << EC_REG_BANK_JTAG_MCMD_JTM_COUNT_Pos)) /* Assigment of value for JTM_COUNT in the EC_REG_BANK_JTAG_MCMD register */
#define EC_REG_BANK_JTAG_MCMD_Msk             _UINT32_(0x0000001F)                                 /* (EC_REG_BANK_JTAG_MCMD) Register Mask  */


/* -------- EC_REG_BANK_ACOMP_CTRL : (EC_REG_BANK Offset: 0x94) (R/W 8) Comparator Enable -------- */
#define EC_REG_BANK_ACOMP_CTRL_RESETVALUE     _UINT8_(0x00)                                        /*  (EC_REG_BANK_ACOMP_CTRL) Comparator Enable  Reset Value */

#define EC_REG_BANK_ACOMP_CTRL_CMP0EN_Pos     _UINT8_(0)                                           /* (EC_REG_BANK_ACOMP_CTRL) Comparator 0 Enable         0: Disable Comparator for operation         1: Enable Comparator operation. Position */
#define EC_REG_BANK_ACOMP_CTRL_CMP0EN_Msk     (_UINT8_(0x1) << EC_REG_BANK_ACOMP_CTRL_CMP0EN_Pos)  /* (EC_REG_BANK_ACOMP_CTRL) Comparator 0 Enable         0: Disable Comparator for operation         1: Enable Comparator operation. Mask */
#define EC_REG_BANK_ACOMP_CTRL_CMP0EN(value)  (EC_REG_BANK_ACOMP_CTRL_CMP0EN_Msk & (_UINT8_(value) << EC_REG_BANK_ACOMP_CTRL_CMP0EN_Pos)) /* Assigment of value for CMP0EN in the EC_REG_BANK_ACOMP_CTRL register */
#define EC_REG_BANK_ACOMP_CTRL_CONF0LCK_Pos   _UINT8_(2)                                           /* (EC_REG_BANK_ACOMP_CTRL) Comparator 0 Configuration Locked         0: Configuration Not Locked. Bits[2,0] are Read-Write         1: Configuration Locked. Bits[2,0] are Read-Only                  Note: If the CMP_STRAP0 Pin = 1 the Boot ROM writes this bit. Once it is written         this bit becomes a read-only bit. Position */
#define EC_REG_BANK_ACOMP_CTRL_CONF0LCK_Msk   (_UINT8_(0x1) << EC_REG_BANK_ACOMP_CTRL_CONF0LCK_Pos) /* (EC_REG_BANK_ACOMP_CTRL) Comparator 0 Configuration Locked         0: Configuration Not Locked. Bits[2,0] are Read-Write         1: Configuration Locked. Bits[2,0] are Read-Only                  Note: If the CMP_STRAP0 Pin = 1 the Boot ROM writes this bit. Once it is written         this bit becomes a read-only bit. Mask */
#define EC_REG_BANK_ACOMP_CTRL_CONF0LCK(value) (EC_REG_BANK_ACOMP_CTRL_CONF0LCK_Msk & (_UINT8_(value) << EC_REG_BANK_ACOMP_CTRL_CONF0LCK_Pos)) /* Assigment of value for CONF0LCK in the EC_REG_BANK_ACOMP_CTRL register */
#define EC_REG_BANK_ACOMP_CTRL_CMP1EN_Pos     _UINT8_(4)                                           /* (EC_REG_BANK_ACOMP_CTRL) Comparator 1 Enable         0: Disable Comparator for operation         1: Enable Comparator operation. Position */
#define EC_REG_BANK_ACOMP_CTRL_CMP1EN_Msk     (_UINT8_(0x1) << EC_REG_BANK_ACOMP_CTRL_CMP1EN_Pos)  /* (EC_REG_BANK_ACOMP_CTRL) Comparator 1 Enable         0: Disable Comparator for operation         1: Enable Comparator operation. Mask */
#define EC_REG_BANK_ACOMP_CTRL_CMP1EN(value)  (EC_REG_BANK_ACOMP_CTRL_CMP1EN_Msk & (_UINT8_(value) << EC_REG_BANK_ACOMP_CTRL_CMP1EN_Pos)) /* Assigment of value for CMP1EN in the EC_REG_BANK_ACOMP_CTRL register */
#define EC_REG_BANK_ACOMP_CTRL_Msk            _UINT8_(0x15)                                        /* (EC_REG_BANK_ACOMP_CTRL) Register Mask  */


/* -------- EC_REG_BANK_ACOMP_SLP_CTRL : (EC_REG_BANK Offset: 0x98) (R/W 8) Analog Comparator Sleep Control Register -------- */
#define EC_REG_BANK_ACOMP_SLP_CTRL_RESETVALUE _UINT8_(0x00)                                        /*  (EC_REG_BANK_ACOMP_SLP_CTRL) Analog Comparator Sleep Control Register  Reset Value */

#define EC_REG_BANK_ACOMP_SLP_CTRL_CMP0SLP_EN_Pos _UINT8_(0)                                           /* (EC_REG_BANK_ACOMP_SLP_CTRL) Comparator 0 Deep Sleep Enable.\n         0 = Comparator Deep Sleep Disable.\n         1 = Comparator Deep Sleep Enable.\n         Note: If the CMP_STRAP0 Pin = 1 the Boot ROM writes this bit. Once it is written \n         this bit becomes a read-only bit.\n Position */
#define EC_REG_BANK_ACOMP_SLP_CTRL_CMP0SLP_EN_Msk (_UINT8_(0x1) << EC_REG_BANK_ACOMP_SLP_CTRL_CMP0SLP_EN_Pos) /* (EC_REG_BANK_ACOMP_SLP_CTRL) Comparator 0 Deep Sleep Enable.\n         0 = Comparator Deep Sleep Disable.\n         1 = Comparator Deep Sleep Enable.\n         Note: If the CMP_STRAP0 Pin = 1 the Boot ROM writes this bit. Once it is written \n         this bit becomes a read-only bit.\n Mask */
#define EC_REG_BANK_ACOMP_SLP_CTRL_CMP0SLP_EN(value) (EC_REG_BANK_ACOMP_SLP_CTRL_CMP0SLP_EN_Msk & (_UINT8_(value) << EC_REG_BANK_ACOMP_SLP_CTRL_CMP0SLP_EN_Pos)) /* Assigment of value for CMP0SLP_EN in the EC_REG_BANK_ACOMP_SLP_CTRL register */
#define EC_REG_BANK_ACOMP_SLP_CTRL_CMP1SLP_EN_Pos _UINT8_(1)                                           /* (EC_REG_BANK_ACOMP_SLP_CTRL) Comparator 1 Deep Sleep Enable.\n         0 = Comparator Deep Sleep Disable.\n         1 = Comparator Deep Sleep Enable.\n Position */
#define EC_REG_BANK_ACOMP_SLP_CTRL_CMP1SLP_EN_Msk (_UINT8_(0x1) << EC_REG_BANK_ACOMP_SLP_CTRL_CMP1SLP_EN_Pos) /* (EC_REG_BANK_ACOMP_SLP_CTRL) Comparator 1 Deep Sleep Enable.\n         0 = Comparator Deep Sleep Disable.\n         1 = Comparator Deep Sleep Enable.\n Mask */
#define EC_REG_BANK_ACOMP_SLP_CTRL_CMP1SLP_EN(value) (EC_REG_BANK_ACOMP_SLP_CTRL_CMP1SLP_EN_Msk & (_UINT8_(value) << EC_REG_BANK_ACOMP_SLP_CTRL_CMP1SLP_EN_Pos)) /* Assigment of value for CMP1SLP_EN in the EC_REG_BANK_ACOMP_SLP_CTRL register */
#define EC_REG_BANK_ACOMP_SLP_CTRL_Msk        _UINT8_(0x03)                                        /* (EC_REG_BANK_ACOMP_SLP_CTRL) Register Mask  */


/* -------- EC_REG_BANK_FW_SCR0 : (EC_REG_BANK Offset: 0x180) (R/W 32) BOOT ROM Scratch 0 Register -------- */
#define EC_REG_BANK_FW_SCR0_RESETVALUE        _UINT32_(0x00)                                       /*  (EC_REG_BANK_FW_SCR0) BOOT ROM Scratch 0 Register  Reset Value */

#define EC_REG_BANK_FW_SCR0_SCR0_Pos          _UINT32_(0)                                          /* (EC_REG_BANK_FW_SCR0) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Position */
#define EC_REG_BANK_FW_SCR0_SCR0_Msk          (_UINT32_(0xFFFFFFFF) << EC_REG_BANK_FW_SCR0_SCR0_Pos) /* (EC_REG_BANK_FW_SCR0) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Mask */
#define EC_REG_BANK_FW_SCR0_SCR0(value)       (EC_REG_BANK_FW_SCR0_SCR0_Msk & (_UINT32_(value) << EC_REG_BANK_FW_SCR0_SCR0_Pos)) /* Assigment of value for SCR0 in the EC_REG_BANK_FW_SCR0 register */
#define EC_REG_BANK_FW_SCR0_Msk               _UINT32_(0xFFFFFFFF)                                 /* (EC_REG_BANK_FW_SCR0) Register Mask  */


/* -------- EC_REG_BANK_FW_SCR1 : (EC_REG_BANK Offset: 0x184) (R/W 32) BOOT ROM Scratch 1 Register -------- */
#define EC_REG_BANK_FW_SCR1_RESETVALUE        _UINT32_(0x00)                                       /*  (EC_REG_BANK_FW_SCR1) BOOT ROM Scratch 1 Register  Reset Value */

#define EC_REG_BANK_FW_SCR1_SCR1_Pos          _UINT32_(0)                                          /* (EC_REG_BANK_FW_SCR1) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Position */
#define EC_REG_BANK_FW_SCR1_SCR1_Msk          (_UINT32_(0xFFFFFFFF) << EC_REG_BANK_FW_SCR1_SCR1_Pos) /* (EC_REG_BANK_FW_SCR1) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Mask */
#define EC_REG_BANK_FW_SCR1_SCR1(value)       (EC_REG_BANK_FW_SCR1_SCR1_Msk & (_UINT32_(value) << EC_REG_BANK_FW_SCR1_SCR1_Pos)) /* Assigment of value for SCR1 in the EC_REG_BANK_FW_SCR1 register */
#define EC_REG_BANK_FW_SCR1_Msk               _UINT32_(0xFFFFFFFF)                                 /* (EC_REG_BANK_FW_SCR1) Register Mask  */


/* -------- EC_REG_BANK_FW_SCR2 : (EC_REG_BANK Offset: 0x188) (R/W 32) BOOT ROM Scratch 2 Register -------- */
#define EC_REG_BANK_FW_SCR2_RESETVALUE        _UINT32_(0x00)                                       /*  (EC_REG_BANK_FW_SCR2) BOOT ROM Scratch 2 Register  Reset Value */

#define EC_REG_BANK_FW_SCR2_SCR2_Pos          _UINT32_(0)                                          /* (EC_REG_BANK_FW_SCR2) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Position */
#define EC_REG_BANK_FW_SCR2_SCR2_Msk          (_UINT32_(0xFFFFFFFF) << EC_REG_BANK_FW_SCR2_SCR2_Pos) /* (EC_REG_BANK_FW_SCR2) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Mask */
#define EC_REG_BANK_FW_SCR2_SCR2(value)       (EC_REG_BANK_FW_SCR2_SCR2_Msk & (_UINT32_(value) << EC_REG_BANK_FW_SCR2_SCR2_Pos)) /* Assigment of value for SCR2 in the EC_REG_BANK_FW_SCR2 register */
#define EC_REG_BANK_FW_SCR2_Msk               _UINT32_(0xFFFFFFFF)                                 /* (EC_REG_BANK_FW_SCR2) Register Mask  */


/* -------- EC_REG_BANK_FW_SCR3 : (EC_REG_BANK Offset: 0x18C) (R/W 32) BOOT ROM Scratch 3 Register -------- */
#define EC_REG_BANK_FW_SCR3_RESETVALUE        _UINT32_(0x00)                                       /*  (EC_REG_BANK_FW_SCR3) BOOT ROM Scratch 3 Register  Reset Value */

#define EC_REG_BANK_FW_SCR3_SCR3_Pos          _UINT32_(0)                                          /* (EC_REG_BANK_FW_SCR3) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Position */
#define EC_REG_BANK_FW_SCR3_SCR3_Msk          (_UINT32_(0xFFFFFFFF) << EC_REG_BANK_FW_SCR3_SCR3_Pos) /* (EC_REG_BANK_FW_SCR3) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Mask */
#define EC_REG_BANK_FW_SCR3_SCR3(value)       (EC_REG_BANK_FW_SCR3_SCR3_Msk & (_UINT32_(value) << EC_REG_BANK_FW_SCR3_SCR3_Pos)) /* Assigment of value for SCR3 in the EC_REG_BANK_FW_SCR3 register */
#define EC_REG_BANK_FW_SCR3_Msk               _UINT32_(0xFFFFFFFF)                                 /* (EC_REG_BANK_FW_SCR3) Register Mask  */


/** \brief EC_REG_BANK register offsets definitions */
#define EC_REG_BANK_AHB_ERR_ADDR_REG_OFST _UINT32_(0x04)      /* (EC_REG_BANK_AHB_ERR_ADDR) AHB Error Address [0:0] AHB_ERR_ADDR, In priority order:\n     1. AHB address is registered when an AHB error occurs on the processor's AHB master port and the register value was\n     already 0. This way only the first address to generate an exception is captured.\n     2. The processor can clear this register by writing any 32-bit value to this register. Offset */
#define EC_REG_BANK_AHB_ERR_CTRL_REG_OFST _UINT32_(0x14)      /* (EC_REG_BANK_AHB_ERR_CTRL) AHB Error Control [0:0] AHB_ERROR_DISABLE, 0: EC memory exceptions are enabled. 1: EC memory exceptions are disabled. Offset */
#define EC_REG_BANK_INTR_CTRL_REG_OFST _UINT32_(0x18)      /* (EC_REG_BANK_INTR_CTRL) Interrupt Control [0:0] NVIC_EN (NVIC_EN) This bit enables Alternate NVIC IRQ's Vectors. The Alternate NVIC Vectors provides each interrupt event with a dedicated (direct) NVIC vector.\n            0 = Alternate NVIC vectors disabled, 1= Alternate NVIC vectors enabled Offset */
#define EC_REG_BANK_ETM_CTRL_REG_OFST  _UINT32_(0x1C)      /* (EC_REG_BANK_ETM_CTRL) ETM TRACE Enable [0:0] TRACE_EN (TRACE_EN) This bit enables the ARM TRACE debug port (ETM/ITM). The Trace Debug Interface pins are forced to the TRACE functions.            0 = ARM TRACE port disabled, 1= ARM TRACE port enabled Offset */
#define EC_REG_BANK_DEBUG_CTRL_REG_OFST _UINT32_(0x20)      /* (EC_REG_BANK_DEBUG_CTRL) Debug Enable Register Offset */
#define EC_REG_BANK_OTP_LOCK_REG_OFST  _UINT32_(0x24)      /* (EC_REG_BANK_OTP_LOCK) Lock Register Offset */
#define EC_REG_BANK_WDT_CNT_REG_OFST   _UINT32_(0x28)      /* (EC_REG_BANK_WDT_CNT) WDT Event Count [3:0] WDT_COUNT (WDT_COUNT) These EC R/W bits are cleared to 0 on VCC1 POR, but not on a WDT.\n            Note: This field is written by Boot ROM firmware to indicate the number of times a WDT fired before loading a good EC code image. Offset */
#define EC_REG_BANK_AESH_BSWAP_CTRL_REG_OFST _UINT32_(0x2C)      /* (EC_REG_BANK_AESH_BSWAP_CTRL) AES HASH Byte Swap Control Register. Offset */
#define EC_REG_BANK_PECI_DIS_REG_OFST  _UINT32_(0x40)      /* (EC_REG_BANK_PECI_DIS) PECI Disable Offset */
#define EC_REG_BANK_STAP_TMIR_REG_OFST _UINT32_(0x4C)      /* (EC_REG_BANK_STAP_TMIR) This register is a mirror of the Boot Control Register.\n Offset */
#define EC_REG_BANK_VCI_FW_OVR_REG_OFST _UINT32_(0x50)      /* (EC_REG_BANK_VCI_FW_OVR) This register contains the system shutdown bit programmable by Firmware.\n Offset */
#define EC_REG_BANK_BROM_STS_REG_OFST  _UINT32_(0x54)      /* (EC_REG_BANK_BROM_STS) This register contains the VTR Reset Status for BOOT ROM.\n Offset */
#define EC_REG_BANK_CRYPTO_SRST_REG_OFST _UINT32_(0x5C)      /* (EC_REG_BANK_CRYPTO_SRST) System Shutdown Reset Offset */
#define EC_REG_BANK_GPIO_BANK_PWR_REG_OFST _UINT32_(0x64)      /* (EC_REG_BANK_GPIO_BANK_PWR) GPIO Bank Power Register Offset */
#define EC_REG_BANK_JTAG_MCFG_REG_OFST _UINT32_(0x70)      /* (EC_REG_BANK_JTAG_MCFG) JTAG Master Configuration Register Offset */
#define EC_REG_BANK_JTAG_MSTS_REG_OFST _UINT32_(0x74)      /* (EC_REG_BANK_JTAG_MSTS) JTAG Master Status Register Offset */
#define EC_REG_BANK_JTAG_MTDO_REG_OFST _UINT32_(0x78)      /* (EC_REG_BANK_JTAG_MTDO) JTAG Master TDO Register Offset */
#define EC_REG_BANK_JTAG_MTDI_REG_OFST _UINT32_(0x7C)      /* (EC_REG_BANK_JTAG_MTDI) JTAG Master TDI Register Offset */
#define EC_REG_BANK_JTAG_MTMS_REG_OFST _UINT32_(0x80)      /* (EC_REG_BANK_JTAG_MTMS) JTAG Master TMS Register Offset */
#define EC_REG_BANK_JTAG_MCMD_REG_OFST _UINT32_(0x84)      /* (EC_REG_BANK_JTAG_MCMD) JTAG Master Command Register Offset */
#define EC_REG_BANK_ACOMP_CTRL_REG_OFST _UINT32_(0x94)      /* (EC_REG_BANK_ACOMP_CTRL) Comparator Enable Offset */
#define EC_REG_BANK_ACOMP_SLP_CTRL_REG_OFST _UINT32_(0x98)      /* (EC_REG_BANK_ACOMP_SLP_CTRL) Analog Comparator Sleep Control Register Offset */
#define EC_REG_BANK_FW_SCR0_REG_OFST   _UINT32_(0x180)     /* (EC_REG_BANK_FW_SCR0) BOOT ROM Scratch 0 Register Offset */
#define EC_REG_BANK_FW_SCR1_REG_OFST   _UINT32_(0x184)     /* (EC_REG_BANK_FW_SCR1) BOOT ROM Scratch 1 Register Offset */
#define EC_REG_BANK_FW_SCR2_REG_OFST   _UINT32_(0x188)     /* (EC_REG_BANK_FW_SCR2) BOOT ROM Scratch 2 Register Offset */
#define EC_REG_BANK_FW_SCR3_REG_OFST   _UINT32_(0x18C)     /* (EC_REG_BANK_FW_SCR3) BOOT ROM Scratch 3 Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief EC_REG_BANK register API structure */
typedef struct
{  /* This block is designed to be accessed internally by the EC via the register interface. */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       EC_REG_BANK_AHB_ERR_ADDR; /**< Offset: 0x04 (R/W  32) AHB Error Address [0:0] AHB_ERR_ADDR, In priority order:\n     1. AHB address is registered when an AHB error occurs on the processor's AHB master port and the register value was\n     already 0. This way only the first address to generate an exception is captured.\n     2. The processor can clear this register by writing any 32-bit value to this register. */
  __I   uint8_t                        Reserved2[0x0C];
  __IO  uint8_t                        EC_REG_BANK_AHB_ERR_CTRL; /**< Offset: 0x14 (R/W  8) AHB Error Control [0:0] AHB_ERROR_DISABLE, 0: EC memory exceptions are enabled. 1: EC memory exceptions are disabled. */
  __I   uint8_t                        Reserved3[0x03];
  __IO  uint32_t                       EC_REG_BANK_INTR_CTRL; /**< Offset: 0x18 (R/W  32) Interrupt Control [0:0] NVIC_EN (NVIC_EN) This bit enables Alternate NVIC IRQ's Vectors. The Alternate NVIC Vectors provides each interrupt event with a dedicated (direct) NVIC vector.\n            0 = Alternate NVIC vectors disabled, 1= Alternate NVIC vectors enabled */
  __IO  uint32_t                       EC_REG_BANK_ETM_CTRL; /**< Offset: 0x1C (R/W  32) ETM TRACE Enable [0:0] TRACE_EN (TRACE_EN) This bit enables the ARM TRACE debug port (ETM/ITM). The Trace Debug Interface pins are forced to the TRACE functions.            0 = ARM TRACE port disabled, 1= ARM TRACE port enabled */
  __IO  uint32_t                       EC_REG_BANK_DEBUG_CTRL; /**< Offset: 0x20 (R/W  32) Debug Enable Register */
  __IO  uint32_t                       EC_REG_BANK_OTP_LOCK; /**< Offset: 0x24 (R/W  32) Lock Register */
  __IO  uint32_t                       EC_REG_BANK_WDT_CNT; /**< Offset: 0x28 (R/W  32) WDT Event Count [3:0] WDT_COUNT (WDT_COUNT) These EC R/W bits are cleared to 0 on VCC1 POR, but not on a WDT.\n            Note: This field is written by Boot ROM firmware to indicate the number of times a WDT fired before loading a good EC code image. */
  __IO  uint32_t                       EC_REG_BANK_AESH_BSWAP_CTRL; /**< Offset: 0x2C (R/W  32) AES HASH Byte Swap Control Register. */
  __I   uint8_t                        Reserved4[0x10];
  __IO  uint32_t                       EC_REG_BANK_PECI_DIS; /**< Offset: 0x40 (R/W  32) PECI Disable */
  __I   uint8_t                        Reserved5[0x08];
  __I   uint32_t                       EC_REG_BANK_STAP_TMIR; /**< Offset: 0x4C (R/   32) This register is a mirror of the Boot Control Register.\n */
  __IO  uint32_t                       EC_REG_BANK_VCI_FW_OVR; /**< Offset: 0x50 (R/W  32) This register contains the system shutdown bit programmable by Firmware.\n */
  __IO  uint8_t                        EC_REG_BANK_BROM_STS; /**< Offset: 0x54 (R/W  8) This register contains the VTR Reset Status for BOOT ROM.\n */
  __I   uint8_t                        Reserved6[0x07];
  __IO  uint32_t                       EC_REG_BANK_CRYPTO_SRST; /**< Offset: 0x5C (R/W  32) System Shutdown Reset */
  __I   uint8_t                        Reserved7[0x04];
  __IO  uint32_t                       EC_REG_BANK_GPIO_BANK_PWR; /**< Offset: 0x64 (R/W  32) GPIO Bank Power Register */
  __I   uint8_t                        Reserved8[0x08];
  __IO  uint32_t                       EC_REG_BANK_JTAG_MCFG; /**< Offset: 0x70 (R/W  32) JTAG Master Configuration Register */
  __I   uint32_t                       EC_REG_BANK_JTAG_MSTS; /**< Offset: 0x74 (R/   32) JTAG Master Status Register */
  __IO  uint32_t                       EC_REG_BANK_JTAG_MTDO; /**< Offset: 0x78 (R/W  32) JTAG Master TDO Register */
  __IO  uint32_t                       EC_REG_BANK_JTAG_MTDI; /**< Offset: 0x7C (R/W  32) JTAG Master TDI Register */
  __IO  uint32_t                       EC_REG_BANK_JTAG_MTMS; /**< Offset: 0x80 (R/W  32) JTAG Master TMS Register */
  __IO  uint32_t                       EC_REG_BANK_JTAG_MCMD; /**< Offset: 0x84 (R/W  32) JTAG Master Command Register */
  __I   uint8_t                        Reserved9[0x0C];
  __IO  uint8_t                        EC_REG_BANK_ACOMP_CTRL; /**< Offset: 0x94 (R/W  8) Comparator Enable */
  __I   uint8_t                        Reserved10[0x03];
  __IO  uint8_t                        EC_REG_BANK_ACOMP_SLP_CTRL; /**< Offset: 0x98 (R/W  8) Analog Comparator Sleep Control Register */
  __I   uint8_t                        Reserved11[0xE7];
  __IO  uint32_t                       EC_REG_BANK_FW_SCR0; /**< Offset: 0x180 (R/W  32) BOOT ROM Scratch 0 Register */
  __IO  uint32_t                       EC_REG_BANK_FW_SCR1; /**< Offset: 0x184 (R/W  32) BOOT ROM Scratch 1 Register */
  __IO  uint32_t                       EC_REG_BANK_FW_SCR2; /**< Offset: 0x188 (R/W  32) BOOT ROM Scratch 2 Register */
  __IO  uint32_t                       EC_REG_BANK_FW_SCR3; /**< Offset: 0x18C (R/W  32) BOOT ROM Scratch 3 Register */
} ec_reg_bank_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _0525SG12_EC_REG_BANK_COMPONENT_H_ */
