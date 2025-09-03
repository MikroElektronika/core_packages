/*
 * Component description for VBAT
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
#ifndef _0525SG12_VBAT_COMPONENT_H_
#define _0525SG12_VBAT_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR VBAT                                         */
/* ************************************************************************** */

/* -------- VBAT_PFRS : (VBAT Offset: 0x00) (R/W 8) The Power-Fail and Reset Status Register collects and retains the VBAT RST and WDT event status when VCC1 is unpowered. -------- */
#define VBAT_PFRS_RESETVALUE                  _UINT8_(0x80)                                        /*  (VBAT_PFRS) The Power-Fail and Reset Status Register collects and retains the VBAT RST and WDT event status when VCC1 is unpowered.  Reset Value */

#define VBAT_PFRS_SOFT_Pos                    _UINT8_(2)                                           /* (VBAT_PFRS) This bit is set to '1b' if a was triggered by an assertion of the SOFT_SYS_RESET bit in the System Reset Register.\n      This bit is cleared to '0b' when written with a '1b'; writes of a '0b' have no effect. (R/WC) Position */
#define VBAT_PFRS_SOFT_Msk                    (_UINT8_(0x1) << VBAT_PFRS_SOFT_Pos)                 /* (VBAT_PFRS) This bit is set to '1b' if a was triggered by an assertion of the SOFT_SYS_RESET bit in the System Reset Register.\n      This bit is cleared to '0b' when written with a '1b'; writes of a '0b' have no effect. (R/WC) Mask */
#define VBAT_PFRS_SOFT(value)                 (VBAT_PFRS_SOFT_Msk & (_UINT8_(value) << VBAT_PFRS_SOFT_Pos)) /* Assigment of value for SOFT in the VBAT_PFRS register */
#define VBAT_PFRS_TEST_Pos                    _UINT8_(3)                                           /* (VBAT_PFRS) Test Position */
#define VBAT_PFRS_TEST_Msk                    (_UINT8_(0x1) << VBAT_PFRS_TEST_Pos)                 /* (VBAT_PFRS) Test Mask */
#define VBAT_PFRS_TEST(value)                 (VBAT_PFRS_TEST_Msk & (_UINT8_(value) << VBAT_PFRS_TEST_Pos)) /* Assigment of value for TEST in the VBAT_PFRS register */
#define VBAT_PFRS_RSTI_Pos                    _UINT8_(4)                                           /* (VBAT_PFRS) This bit is set to '1b' if a RESET_SYS was triggered by a low signal on the RESETI# input pin. This bit is\n      cleared to '0b' when written with a '1b'; writes of a '0b' have no effect. (R/WC) Position */
#define VBAT_PFRS_RSTI_Msk                    (_UINT8_(0x1) << VBAT_PFRS_RSTI_Pos)                 /* (VBAT_PFRS) This bit is set to '1b' if a RESET_SYS was triggered by a low signal on the RESETI# input pin. This bit is\n      cleared to '0b' when written with a '1b'; writes of a '0b' have no effect. (R/WC) Mask */
#define VBAT_PFRS_RSTI(value)                 (VBAT_PFRS_RSTI_Msk & (_UINT8_(value) << VBAT_PFRS_RSTI_Pos)) /* Assigment of value for RSTI in the VBAT_PFRS register */
#define VBAT_PFRS_WDT_EVT_Pos                 _UINT8_(5)                                           /* (VBAT_PFRS) This bit is set to '1b' if a RESET_SYS was triggered by a Watchdog Timer event. This bit is cleared to '0b' when\n      written with a '1b'; writes of a '0b' have no effect. (R/WC) Position */
#define VBAT_PFRS_WDT_EVT_Msk                 (_UINT8_(0x1) << VBAT_PFRS_WDT_EVT_Pos)              /* (VBAT_PFRS) This bit is set to '1b' if a RESET_SYS was triggered by a Watchdog Timer event. This bit is cleared to '0b' when\n      written with a '1b'; writes of a '0b' have no effect. (R/WC) Mask */
#define VBAT_PFRS_WDT_EVT(value)              (VBAT_PFRS_WDT_EVT_Msk & (_UINT8_(value) << VBAT_PFRS_WDT_EVT_Pos)) /* Assigment of value for WDT_EVT in the VBAT_PFRS register */
#define VBAT_PFRS_SYS_RSTREQ_Pos              _UINT8_(6)                                           /* (VBAT_PFRS) This bit is set to '1b' if a RESET_SYS was triggered by an ARM SYSRESETREQ event. This bit is cleared to '0b' when\n      written with a '1b'; writes of a '0b' have no effect. (R/WC) Position */
#define VBAT_PFRS_SYS_RSTREQ_Msk              (_UINT8_(0x1) << VBAT_PFRS_SYS_RSTREQ_Pos)           /* (VBAT_PFRS) This bit is set to '1b' if a RESET_SYS was triggered by an ARM SYSRESETREQ event. This bit is cleared to '0b' when\n      written with a '1b'; writes of a '0b' have no effect. (R/WC) Mask */
#define VBAT_PFRS_SYS_RSTREQ(value)           (VBAT_PFRS_SYS_RSTREQ_Msk & (_UINT8_(value) << VBAT_PFRS_SYS_RSTREQ_Pos)) /* Assigment of value for SYS_RSTREQ in the VBAT_PFRS register */
#define VBAT_PFRS_VBAT_RST_Pos                _UINT8_(7)                                           /* (VBAT_PFRS) The VBAT RST bit is set to '1' by hardware when a RESET_VBAT is detected. This is the register default value.\n      To clear VBAT RST EC firmware must write a '1' to this bit; writing a '0' to VBAT RST has no affect.(R/WC) Position */
#define VBAT_PFRS_VBAT_RST_Msk                (_UINT8_(0x1) << VBAT_PFRS_VBAT_RST_Pos)             /* (VBAT_PFRS) The VBAT RST bit is set to '1' by hardware when a RESET_VBAT is detected. This is the register default value.\n      To clear VBAT RST EC firmware must write a '1' to this bit; writing a '0' to VBAT RST has no affect.(R/WC) Mask */
#define VBAT_PFRS_VBAT_RST(value)             (VBAT_PFRS_VBAT_RST_Msk & (_UINT8_(value) << VBAT_PFRS_VBAT_RST_Pos)) /* Assigment of value for VBAT_RST in the VBAT_PFRS register */
#define VBAT_PFRS_Msk                         _UINT8_(0xFC)                                        /* (VBAT_PFRS) Register Mask  */


/* -------- VBAT_CLK32_EN : (VBAT Offset: 0x08) (R/W 32) CLOCK ENABLE -------- */
#define VBAT_CLK32_EN_RESETVALUE              _UINT32_(0x00)                                       /*  (VBAT_CLK32_EN) CLOCK ENABLE  Reset Value */

#define VBAT_CLK32_EN_TEST_Pos                _UINT32_(0)                                          /* (VBAT_CLK32_EN) This is a test bit and must not be modified. Position */
#define VBAT_CLK32_EN_TEST_Msk                (_UINT32_(0x1) << VBAT_CLK32_EN_TEST_Pos)            /* (VBAT_CLK32_EN) This is a test bit and must not be modified. Mask */
#define VBAT_CLK32_EN_TEST(value)             (VBAT_CLK32_EN_TEST_Msk & (_UINT32_(value) << VBAT_CLK32_EN_TEST_Pos)) /* Assigment of value for TEST in the VBAT_CLK32_EN register */
#define VBAT_CLK32_EN_EXT_32K_Pos             _UINT32_(1)                                          /* (VBAT_CLK32_EN) This bit selects the source for the 32KHz clock domain.\n      1=The 32KHZ_IN VTR-powered pin is used as a source for the 32KHz clock domain. If an activity detector does not detect a\n      clock on the selected source, the always-on 32KHz internal clock source is automatically selected\n      0=The always-on32Khz clock source is used as the source for the 32KHz clock domain. Position */
#define VBAT_CLK32_EN_EXT_32K_Msk             (_UINT32_(0x1) << VBAT_CLK32_EN_EXT_32K_Pos)         /* (VBAT_CLK32_EN) This bit selects the source for the 32KHz clock domain.\n      1=The 32KHZ_IN VTR-powered pin is used as a source for the 32KHz clock domain. If an activity detector does not detect a\n      clock on the selected source, the always-on 32KHz internal clock source is automatically selected\n      0=The always-on32Khz clock source is used as the source for the 32KHz clock domain. Mask */
#define VBAT_CLK32_EN_EXT_32K(value)          (VBAT_CLK32_EN_EXT_32K_Msk & (_UINT32_(value) << VBAT_CLK32_EN_EXT_32K_Pos)) /* Assigment of value for EXT_32K in the VBAT_CLK32_EN register */
#define VBAT_CLK32_EN_C32KHZ_SRC_Pos          _UINT32_(2)                                          /* (VBAT_CLK32_EN) This field determines the source for the always-on 32KHz internal clock source. If set to '1b', this bit\n      will only take effect if an active clock has been detected on the crystal pins. Once the 32KHz source has been switched,\n      activity detection on the crystal no longer functions. Therefore, if the crystal oscillator uses a single-ended\n      input, once started that input must not stop while this bit is '1b'.\n      1=Crystal Oscillator. The selection between a singled-ended input or a resonant crystal is determined by XOSEL in this register\n      0=Silicon Oscillator. Position */
#define VBAT_CLK32_EN_C32KHZ_SRC_Msk          (_UINT32_(0x1) << VBAT_CLK32_EN_C32KHZ_SRC_Pos)      /* (VBAT_CLK32_EN) This field determines the source for the always-on 32KHz internal clock source. If set to '1b', this bit\n      will only take effect if an active clock has been detected on the crystal pins. Once the 32KHz source has been switched,\n      activity detection on the crystal no longer functions. Therefore, if the crystal oscillator uses a single-ended\n      input, once started that input must not stop while this bit is '1b'.\n      1=Crystal Oscillator. The selection between a singled-ended input or a resonant crystal is determined by XOSEL in this register\n      0=Silicon Oscillator. Mask */
#define VBAT_CLK32_EN_C32KHZ_SRC(value)       (VBAT_CLK32_EN_C32KHZ_SRC_Msk & (_UINT32_(value) << VBAT_CLK32_EN_C32KHZ_SRC_Pos)) /* Assigment of value for C32KHZ_SRC in the VBAT_CLK32_EN register */
#define VBAT_CLK32_EN_XOSEL_Pos               _UINT32_(3)                                          /* (VBAT_CLK32_EN) This bit selects between a single-ended clock source for the crystal oscillator or an external parallel crystal.\n                1= the Crystal Oscillator is driven by a single-ended 32KHz clock source connected to the XTAL2 pin. \n                0= the Crystal Oscillator requires a 32KHz parallel resonant crystal connected between the XTAL1 and XTAL2 pins (default). Position */
#define VBAT_CLK32_EN_XOSEL_Msk               (_UINT32_(0x1) << VBAT_CLK32_EN_XOSEL_Pos)           /* (VBAT_CLK32_EN) This bit selects between a single-ended clock source for the crystal oscillator or an external parallel crystal.\n                1= the Crystal Oscillator is driven by a single-ended 32KHz clock source connected to the XTAL2 pin. \n                0= the Crystal Oscillator requires a 32KHz parallel resonant crystal connected between the XTAL1 and XTAL2 pins (default). Mask */
#define VBAT_CLK32_EN_XOSEL(value)            (VBAT_CLK32_EN_XOSEL_Msk & (_UINT32_(value) << VBAT_CLK32_EN_XOSEL_Pos)) /* Assigment of value for XOSEL in the VBAT_CLK32_EN register */
#define VBAT_CLK32_EN_Msk                     _UINT32_(0x0000000F)                                 /* (VBAT_CLK32_EN) Register Mask  */


/* -------- VBAT_SYS_SHDN : (VBAT Offset: 0x0C) (R/W 32) System Shutdown Enable register.\n -------- */
#define VBAT_SYS_SHDN_RESETVALUE              _UINT32_(0x00)                                       /*  (VBAT_SYS_SHDN) System Shutdown Enable register.\n  Reset Value */

#define VBAT_SYS_SHDN_DIS_Pos                 _UINT32_(0)                                          /* (VBAT_SYS_SHDN) This bit controls the System Shutdown.\n         0 = Enable System Shutdown (SYS_SHDN#).\n         1 = Disable System Shutdown (SYS_SHDN#).\n Position */
#define VBAT_SYS_SHDN_DIS_Msk                 (_UINT32_(0x1) << VBAT_SYS_SHDN_DIS_Pos)             /* (VBAT_SYS_SHDN) This bit controls the System Shutdown.\n         0 = Enable System Shutdown (SYS_SHDN#).\n         1 = Disable System Shutdown (SYS_SHDN#).\n Mask */
#define VBAT_SYS_SHDN_DIS(value)              (VBAT_SYS_SHDN_DIS_Msk & (_UINT32_(value) << VBAT_SYS_SHDN_DIS_Pos)) /* Assigment of value for DIS in the VBAT_SYS_SHDN register */
#define VBAT_SYS_SHDN_Msk                     _UINT32_(0x00000001)                                 /* (VBAT_SYS_SHDN) Register Mask  */


/* -------- VBAT_MCNT_LO : (VBAT Offset: 0x20) (R/W 32) MONOTONIC COUNTER -------- */
#define VBAT_MCNT_LO_RESETVALUE               _UINT32_(0x00)                                       /*  (VBAT_MCNT_LO) MONOTONIC COUNTER  Reset Value */

#define VBAT_MCNT_LO_CNTR_Pos                 _UINT32_(0)                                          /* (VBAT_MCNT_LO) Read-only register that increments by 1 every time it is read. It is reset to 0 on a VBAT Power On Reset. Position */
#define VBAT_MCNT_LO_CNTR_Msk                 (_UINT32_(0xFFFFFFFF) << VBAT_MCNT_LO_CNTR_Pos)      /* (VBAT_MCNT_LO) Read-only register that increments by 1 every time it is read. It is reset to 0 on a VBAT Power On Reset. Mask */
#define VBAT_MCNT_LO_CNTR(value)              (VBAT_MCNT_LO_CNTR_Msk & (_UINT32_(value) << VBAT_MCNT_LO_CNTR_Pos)) /* Assigment of value for CNTR in the VBAT_MCNT_LO register */
#define VBAT_MCNT_LO_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (VBAT_MCNT_LO) Register Mask  */


/* -------- VBAT_MCNT_HI : (VBAT Offset: 0x24) (R/W 32) COUNTER HIWORD -------- */
#define VBAT_MCNT_HI_RESETVALUE               _UINT32_(0x00)                                       /*  (VBAT_MCNT_HI) COUNTER HIWORD  Reset Value */

#define VBAT_MCNT_HI_CNTR_Pos                 _UINT32_(0)                                          /* (VBAT_MCNT_HI) Thirty-two bit read/write register. If software sets this register to an incrementing value, based on an external\n      non-volatile store, this register may be combined with the Monotonic Counter Register to form a 64-bit monotonic counter. Position */
#define VBAT_MCNT_HI_CNTR_Msk                 (_UINT32_(0xFFFFFFFF) << VBAT_MCNT_HI_CNTR_Pos)      /* (VBAT_MCNT_HI) Thirty-two bit read/write register. If software sets this register to an incrementing value, based on an external\n      non-volatile store, this register may be combined with the Monotonic Counter Register to form a 64-bit monotonic counter. Mask */
#define VBAT_MCNT_HI_CNTR(value)              (VBAT_MCNT_HI_CNTR_Msk & (_UINT32_(value) << VBAT_MCNT_HI_CNTR_Pos)) /* Assigment of value for CNTR in the VBAT_MCNT_HI register */
#define VBAT_MCNT_HI_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (VBAT_MCNT_HI) Register Mask  */


/* -------- VBAT_VWR_BCKP : (VBAT Offset: 0x28) (R/W 32) VWIRE_BACKUP -------- */
#define VBAT_VWR_BCKP_RESETVALUE              _UINT32_(0x00)                                       /*  (VBAT_VWR_BCKP) VWIRE_BACKUP  Reset Value */

#define VBAT_VWR_BCKP_M2S_2H_BCKUP_Pos        _UINT32_(0)                                          /* (VBAT_VWR_BCKP) The Boot ROM firmware will copy this field into the SRC3 to SRC0 bits of the Master-to-Slave Virtual Wire Register\n      that corresponds to Virtual Wire Index 2h on a RESET_SYS. If software always saves the state of the Index 2h SRC bits on the falling\n      edge of the SUSWARN# virtual wire, the state of the four SRC bits will be synchronized to the state of the four bits in the core logic. Position */
#define VBAT_VWR_BCKP_M2S_2H_BCKUP_Msk        (_UINT32_(0xF) << VBAT_VWR_BCKP_M2S_2H_BCKUP_Pos)    /* (VBAT_VWR_BCKP) The Boot ROM firmware will copy this field into the SRC3 to SRC0 bits of the Master-to-Slave Virtual Wire Register\n      that corresponds to Virtual Wire Index 2h on a RESET_SYS. If software always saves the state of the Index 2h SRC bits on the falling\n      edge of the SUSWARN# virtual wire, the state of the four SRC bits will be synchronized to the state of the four bits in the core logic. Mask */
#define VBAT_VWR_BCKP_M2S_2H_BCKUP(value)     (VBAT_VWR_BCKP_M2S_2H_BCKUP_Msk & (_UINT32_(value) << VBAT_VWR_BCKP_M2S_2H_BCKUP_Pos)) /* Assigment of value for M2S_2H_BCKUP in the VBAT_VWR_BCKP register */
#define VBAT_VWR_BCKP_M2S_42H_BCKUP_Pos       _UINT32_(4)                                          /* (VBAT_VWR_BCKP) The Boot ROM firmware will copy this field into the SRC3 to SRC0 bits of the Master-to-Slave Virtual Wire Register\n      that corresponds to Virtual Wire Index 42h on a RESET_SYS. If software always saves the state of the Index 2h SRC bits on the falling\n      edge of the SUSWARN# virtual wire, the state of the four SRC bits will be synchronized to the state of the four bits in the core logic. Position */
#define VBAT_VWR_BCKP_M2S_42H_BCKUP_Msk       (_UINT32_(0xF) << VBAT_VWR_BCKP_M2S_42H_BCKUP_Pos)   /* (VBAT_VWR_BCKP) The Boot ROM firmware will copy this field into the SRC3 to SRC0 bits of the Master-to-Slave Virtual Wire Register\n      that corresponds to Virtual Wire Index 42h on a RESET_SYS. If software always saves the state of the Index 2h SRC bits on the falling\n      edge of the SUSWARN# virtual wire, the state of the four SRC bits will be synchronized to the state of the four bits in the core logic. Mask */
#define VBAT_VWR_BCKP_M2S_42H_BCKUP(value)    (VBAT_VWR_BCKP_M2S_42H_BCKUP_Msk & (_UINT32_(value) << VBAT_VWR_BCKP_M2S_42H_BCKUP_Pos)) /* Assigment of value for M2S_42H_BCKUP in the VBAT_VWR_BCKP register */
#define VBAT_VWR_BCKP_Msk                     _UINT32_(0x000000FF)                                 /* (VBAT_VWR_BCKP) Register Mask  */


/** \brief VBAT register offsets definitions */
#define VBAT_PFRS_REG_OFST             _UINT32_(0x00)      /* (VBAT_PFRS) The Power-Fail and Reset Status Register collects and retains the VBAT RST and WDT event status when VCC1 is unpowered. Offset */
#define VBAT_CLK32_EN_REG_OFST         _UINT32_(0x08)      /* (VBAT_CLK32_EN) CLOCK ENABLE Offset */
#define VBAT_SYS_SHDN_REG_OFST         _UINT32_(0x0C)      /* (VBAT_SYS_SHDN) System Shutdown Enable register.\n Offset */
#define VBAT_MCNT_LO_REG_OFST          _UINT32_(0x20)      /* (VBAT_MCNT_LO) MONOTONIC COUNTER Offset */
#define VBAT_MCNT_HI_REG_OFST          _UINT32_(0x24)      /* (VBAT_MCNT_HI) COUNTER HIWORD Offset */
#define VBAT_VWR_BCKP_REG_OFST         _UINT32_(0x28)      /* (VBAT_VWR_BCKP) VWIRE_BACKUP Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief VBAT register API structure */
typedef struct
{  /* The VBAT Register Bank block is a block implemented for miscellaneous battery-backed registers */
  __IO  uint8_t                        VBAT_PFRS;          /**< Offset: 0x00 (R/W  8) The Power-Fail and Reset Status Register collects and retains the VBAT RST and WDT event status when VCC1 is unpowered. */
  __I   uint8_t                        Reserved1[0x07];
  __IO  uint32_t                       VBAT_CLK32_EN;      /**< Offset: 0x08 (R/W  32) CLOCK ENABLE */
  __IO  uint32_t                       VBAT_SYS_SHDN;      /**< Offset: 0x0C (R/W  32) System Shutdown Enable register.\n */
  __I   uint8_t                        Reserved2[0x10];
  __IO  uint32_t                       VBAT_MCNT_LO;       /**< Offset: 0x20 (R/W  32) MONOTONIC COUNTER */
  __IO  uint32_t                       VBAT_MCNT_HI;       /**< Offset: 0x24 (R/W  32) COUNTER HIWORD */
  __IO  uint32_t                       VBAT_VWR_BCKP;      /**< Offset: 0x28 (R/W  32) VWIRE_BACKUP */
} vbat_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _0525SG12_VBAT_COMPONENT_H_ */
