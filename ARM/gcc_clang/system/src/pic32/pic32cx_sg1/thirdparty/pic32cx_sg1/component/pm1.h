/*
 * Component description for PM1
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
#ifndef _0525SG12_PM1_COMPONENT_H_
#define _0525SG12_PM1_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR PM1                                          */
/* ************************************************************************** */

/* -------- PM1_H_PM1_STS2 : (PM1 Offset: 0x01) (R/W 8) PM1 Status 2 -------- */
#define PM1_H_PM1_STS2_RESETVALUE             _UINT8_(0x00)                                        /*  (PM1_H_PM1_STS2) PM1 Status 2  Reset Value */

#define PM1_H_PM1_STS2_PWRBTN_STS_Pos         _UINT8_(0)                                           /* (PM1_H_PM1_STS2) This bit can be set or cleared by the EC to simulate a Power button status if the power is controlled by the EC.\n      The Host writing a one to this bit can also clear this bit. The EC must generate the associated SCI interrupt under software control. (R/WC) Position */
#define PM1_H_PM1_STS2_PWRBTN_STS_Msk         (_UINT8_(0x1) << PM1_H_PM1_STS2_PWRBTN_STS_Pos)      /* (PM1_H_PM1_STS2) This bit can be set or cleared by the EC to simulate a Power button status if the power is controlled by the EC.\n      The Host writing a one to this bit can also clear this bit. The EC must generate the associated SCI interrupt under software control. (R/WC) Mask */
#define PM1_H_PM1_STS2_PWRBTN_STS(value)      (PM1_H_PM1_STS2_PWRBTN_STS_Msk & (_UINT8_(value) << PM1_H_PM1_STS2_PWRBTN_STS_Pos)) /* Assigment of value for PWRBTN_STS in the PM1_H_PM1_STS2 register */
#define PM1_H_PM1_STS2_SLPBTN_STS_Pos         _UINT8_(1)                                           /* (PM1_H_PM1_STS2) This bit can be set or cleared by the EC to simulate a Sleep button status if the sleep state is controlled by\n      the EC. The Host writing a one to this bit can also clear this bit. The EC must generate the associated SCI interrupt under software\n      control.(R/WC) Position */
#define PM1_H_PM1_STS2_SLPBTN_STS_Msk         (_UINT8_(0x1) << PM1_H_PM1_STS2_SLPBTN_STS_Pos)      /* (PM1_H_PM1_STS2) This bit can be set or cleared by the EC to simulate a Sleep button status if the sleep state is controlled by\n      the EC. The Host writing a one to this bit can also clear this bit. The EC must generate the associated SCI interrupt under software\n      control.(R/WC) Mask */
#define PM1_H_PM1_STS2_SLPBTN_STS(value)      (PM1_H_PM1_STS2_SLPBTN_STS_Msk & (_UINT8_(value) << PM1_H_PM1_STS2_SLPBTN_STS_Pos)) /* Assigment of value for SLPBTN_STS in the PM1_H_PM1_STS2 register */
#define PM1_H_PM1_STS2_RTC_STS_Pos            _UINT8_(2)                                           /* (PM1_H_PM1_STS2) This bit can be set or cleared by the EC to simulate a RTC status. The Host writing a one to this bit can also\n      clear this bit. The EC must generate the associated SCI interrupt under software control. (R/WC) Position */
#define PM1_H_PM1_STS2_RTC_STS_Msk            (_UINT8_(0x1) << PM1_H_PM1_STS2_RTC_STS_Pos)         /* (PM1_H_PM1_STS2) This bit can be set or cleared by the EC to simulate a RTC status. The Host writing a one to this bit can also\n      clear this bit. The EC must generate the associated SCI interrupt under software control. (R/WC) Mask */
#define PM1_H_PM1_STS2_RTC_STS(value)         (PM1_H_PM1_STS2_RTC_STS_Msk & (_UINT8_(value) << PM1_H_PM1_STS2_RTC_STS_Pos)) /* Assigment of value for RTC_STS in the PM1_H_PM1_STS2 register */
#define PM1_H_PM1_STS2_PWRBTNOR_STS_Pos       _UINT8_(3)                                           /* (PM1_H_PM1_STS2) This bit can be set or cleared by the EC to simulate a Power button override event status if the power\n      is controlled by the EC. The Host writing a one to this bit can also clear this bit. The EC must generate the associated hardware\n      event under software control.(R/WC) Position */
#define PM1_H_PM1_STS2_PWRBTNOR_STS_Msk       (_UINT8_(0x1) << PM1_H_PM1_STS2_PWRBTNOR_STS_Pos)    /* (PM1_H_PM1_STS2) This bit can be set or cleared by the EC to simulate a Power button override event status if the power\n      is controlled by the EC. The Host writing a one to this bit can also clear this bit. The EC must generate the associated hardware\n      event under software control.(R/WC) Mask */
#define PM1_H_PM1_STS2_PWRBTNOR_STS(value)    (PM1_H_PM1_STS2_PWRBTNOR_STS_Msk & (_UINT8_(value) << PM1_H_PM1_STS2_PWRBTNOR_STS_Pos)) /* Assigment of value for PWRBTNOR_STS in the PM1_H_PM1_STS2 register */
#define PM1_H_PM1_STS2_WAK_STS_Pos            _UINT8_(7)                                           /* (PM1_H_PM1_STS2) This bit can be set or cleared by the EC. The Host writing a one to this bit can also clear this bit. (R/WC) Position */
#define PM1_H_PM1_STS2_WAK_STS_Msk            (_UINT8_(0x1) << PM1_H_PM1_STS2_WAK_STS_Pos)         /* (PM1_H_PM1_STS2) This bit can be set or cleared by the EC. The Host writing a one to this bit can also clear this bit. (R/WC) Mask */
#define PM1_H_PM1_STS2_WAK_STS(value)         (PM1_H_PM1_STS2_WAK_STS_Msk & (_UINT8_(value) << PM1_H_PM1_STS2_WAK_STS_Pos)) /* Assigment of value for WAK_STS in the PM1_H_PM1_STS2 register */
#define PM1_H_PM1_STS2_Msk                    _UINT8_(0x8F)                                        /* (PM1_H_PM1_STS2) Register Mask  */


/* -------- PM1_H_PM1_EN2 : (PM1 Offset: 0x03) (R/W 8) PM1 Enable 2 -------- */
#define PM1_H_PM1_EN2_RESETVALUE              _UINT8_(0x00)                                        /*  (PM1_H_PM1_EN2) PM1 Enable 2  Reset Value */

#define PM1_H_PM1_EN2_PWRBTN_EN_Pos           _UINT8_(0)                                           /* (PM1_H_PM1_EN2) This bit can be read or written by the Host. It can be read by the EC. Position */
#define PM1_H_PM1_EN2_PWRBTN_EN_Msk           (_UINT8_(0x1) << PM1_H_PM1_EN2_PWRBTN_EN_Pos)        /* (PM1_H_PM1_EN2) This bit can be read or written by the Host. It can be read by the EC. Mask */
#define PM1_H_PM1_EN2_PWRBTN_EN(value)        (PM1_H_PM1_EN2_PWRBTN_EN_Msk & (_UINT8_(value) << PM1_H_PM1_EN2_PWRBTN_EN_Pos)) /* Assigment of value for PWRBTN_EN in the PM1_H_PM1_EN2 register */
#define PM1_H_PM1_EN2_SLPBTN_EN_Pos           _UINT8_(1)                                           /* (PM1_H_PM1_EN2) This bit can be read or written by the Host. It can be read by the EC. Position */
#define PM1_H_PM1_EN2_SLPBTN_EN_Msk           (_UINT8_(0x1) << PM1_H_PM1_EN2_SLPBTN_EN_Pos)        /* (PM1_H_PM1_EN2) This bit can be read or written by the Host. It can be read by the EC. Mask */
#define PM1_H_PM1_EN2_SLPBTN_EN(value)        (PM1_H_PM1_EN2_SLPBTN_EN_Msk & (_UINT8_(value) << PM1_H_PM1_EN2_SLPBTN_EN_Pos)) /* Assigment of value for SLPBTN_EN in the PM1_H_PM1_EN2 register */
#define PM1_H_PM1_EN2_RTC_EN_Pos              _UINT8_(2)                                           /* (PM1_H_PM1_EN2) This bit can be read or written by the Host. It can be read by the EC. Position */
#define PM1_H_PM1_EN2_RTC_EN_Msk              (_UINT8_(0x1) << PM1_H_PM1_EN2_RTC_EN_Pos)           /* (PM1_H_PM1_EN2) This bit can be read or written by the Host. It can be read by the EC. Mask */
#define PM1_H_PM1_EN2_RTC_EN(value)           (PM1_H_PM1_EN2_RTC_EN_Msk & (_UINT8_(value) << PM1_H_PM1_EN2_RTC_EN_Pos)) /* Assigment of value for RTC_EN in the PM1_H_PM1_EN2 register */
#define PM1_H_PM1_EN2_Msk                     _UINT8_(0x07)                                        /* (PM1_H_PM1_EN2) Register Mask  */


/* -------- PM1_H_PM1_CTRL2 : (PM1 Offset: 0x05) (R/W 8) PM1 Control 2 -------- */
#define PM1_H_PM1_CTRL2_RESETVALUE            _UINT8_(0x00)                                        /*  (PM1_H_PM1_CTRL2) PM1 Control 2  Reset Value */

#define PM1_H_PM1_CTRL2_PWRBTNOR_EN_Pos       _UINT8_(1)                                           /* (PM1_H_PM1_CTRL2) This bit can be set or cleared by the Host, read by the EC. Position */
#define PM1_H_PM1_CTRL2_PWRBTNOR_EN_Msk       (_UINT8_(0x1) << PM1_H_PM1_CTRL2_PWRBTNOR_EN_Pos)    /* (PM1_H_PM1_CTRL2) This bit can be set or cleared by the Host, read by the EC. Mask */
#define PM1_H_PM1_CTRL2_PWRBTNOR_EN(value)    (PM1_H_PM1_CTRL2_PWRBTNOR_EN_Msk & (_UINT8_(value) << PM1_H_PM1_CTRL2_PWRBTNOR_EN_Pos)) /* Assigment of value for PWRBTNOR_EN in the PM1_H_PM1_CTRL2 register */
#define PM1_H_PM1_CTRL2_SLP_TYP_Pos           _UINT8_(2)                                           /* (PM1_H_PM1_CTRL2) These bits can be set or cleared by the Host, read by the EC. Position */
#define PM1_H_PM1_CTRL2_SLP_TYP_Msk           (_UINT8_(0x7) << PM1_H_PM1_CTRL2_SLP_TYP_Pos)        /* (PM1_H_PM1_CTRL2) These bits can be set or cleared by the Host, read by the EC. Mask */
#define PM1_H_PM1_CTRL2_SLP_TYP(value)        (PM1_H_PM1_CTRL2_SLP_TYP_Msk & (_UINT8_(value) << PM1_H_PM1_CTRL2_SLP_TYP_Pos)) /* Assigment of value for SLP_TYP in the PM1_H_PM1_CTRL2 register */
#define PM1_H_PM1_CTRL2_SLP_EN_Pos            _UINT8_(5)                                           /* (PM1_H_PM1_CTRL2) SLP_EN Position */
#define PM1_H_PM1_CTRL2_SLP_EN_Msk            (_UINT8_(0x1) << PM1_H_PM1_CTRL2_SLP_EN_Pos)         /* (PM1_H_PM1_CTRL2) SLP_EN Mask */
#define PM1_H_PM1_CTRL2_SLP_EN(value)         (PM1_H_PM1_CTRL2_SLP_EN_Msk & (_UINT8_(value) << PM1_H_PM1_CTRL2_SLP_EN_Pos)) /* Assigment of value for SLP_EN in the PM1_H_PM1_CTRL2 register */
#define PM1_H_PM1_CTRL2_Msk                   _UINT8_(0x3E)                                        /* (PM1_H_PM1_CTRL2) Register Mask  */


/* -------- PM1_EC_PM1_STS2 : (PM1 Offset: 0x101) (R/W 8) PM1 Status 2 -------- */
#define PM1_EC_PM1_STS2_RESETVALUE            _UINT8_(0x00)                                        /*  (PM1_EC_PM1_STS2) PM1 Status 2  Reset Value */

#define PM1_EC_PM1_STS2_PWRBTN_STS_Pos        _UINT8_(0)                                           /* (PM1_EC_PM1_STS2) This bit can be set or cleared by the EC to simulate a Power button status if the power is controlled by the EC.\n      The Host writing a one to this bit can also clear this bit. The EC must generate the associated SCI interrupt under software control. (R/WC) Position */
#define PM1_EC_PM1_STS2_PWRBTN_STS_Msk        (_UINT8_(0x1) << PM1_EC_PM1_STS2_PWRBTN_STS_Pos)     /* (PM1_EC_PM1_STS2) This bit can be set or cleared by the EC to simulate a Power button status if the power is controlled by the EC.\n      The Host writing a one to this bit can also clear this bit. The EC must generate the associated SCI interrupt under software control. (R/WC) Mask */
#define PM1_EC_PM1_STS2_PWRBTN_STS(value)     (PM1_EC_PM1_STS2_PWRBTN_STS_Msk & (_UINT8_(value) << PM1_EC_PM1_STS2_PWRBTN_STS_Pos)) /* Assigment of value for PWRBTN_STS in the PM1_EC_PM1_STS2 register */
#define PM1_EC_PM1_STS2_SLPBTN_STS_Pos        _UINT8_(1)                                           /* (PM1_EC_PM1_STS2) This bit can be set or cleared by the EC to simulate a Sleep button status if the sleep state is controlled by\n      the EC. The Host writing a one to this bit can also clear this bit. The EC must generate the associated SCI interrupt under software\n      control.(R/WC) Position */
#define PM1_EC_PM1_STS2_SLPBTN_STS_Msk        (_UINT8_(0x1) << PM1_EC_PM1_STS2_SLPBTN_STS_Pos)     /* (PM1_EC_PM1_STS2) This bit can be set or cleared by the EC to simulate a Sleep button status if the sleep state is controlled by\n      the EC. The Host writing a one to this bit can also clear this bit. The EC must generate the associated SCI interrupt under software\n      control.(R/WC) Mask */
#define PM1_EC_PM1_STS2_SLPBTN_STS(value)     (PM1_EC_PM1_STS2_SLPBTN_STS_Msk & (_UINT8_(value) << PM1_EC_PM1_STS2_SLPBTN_STS_Pos)) /* Assigment of value for SLPBTN_STS in the PM1_EC_PM1_STS2 register */
#define PM1_EC_PM1_STS2_RTC_STS_Pos           _UINT8_(2)                                           /* (PM1_EC_PM1_STS2) This bit can be set or cleared by the EC to simulate a RTC status. The Host writing a one to this bit can also\n      clear this bit. The EC must generate the associated SCI interrupt under software control. (R/WC) Position */
#define PM1_EC_PM1_STS2_RTC_STS_Msk           (_UINT8_(0x1) << PM1_EC_PM1_STS2_RTC_STS_Pos)        /* (PM1_EC_PM1_STS2) This bit can be set or cleared by the EC to simulate a RTC status. The Host writing a one to this bit can also\n      clear this bit. The EC must generate the associated SCI interrupt under software control. (R/WC) Mask */
#define PM1_EC_PM1_STS2_RTC_STS(value)        (PM1_EC_PM1_STS2_RTC_STS_Msk & (_UINT8_(value) << PM1_EC_PM1_STS2_RTC_STS_Pos)) /* Assigment of value for RTC_STS in the PM1_EC_PM1_STS2 register */
#define PM1_EC_PM1_STS2_PWRBTNOR_STS_Pos      _UINT8_(3)                                           /* (PM1_EC_PM1_STS2) This bit can be set or cleared by the EC to simulate a Power button override event status if the power\n      is controlled by the EC. The Host writing a one to this bit can also clear this bit. The EC must generate the associated hardware\n      event under software control.(R/WC) Position */
#define PM1_EC_PM1_STS2_PWRBTNOR_STS_Msk      (_UINT8_(0x1) << PM1_EC_PM1_STS2_PWRBTNOR_STS_Pos)   /* (PM1_EC_PM1_STS2) This bit can be set or cleared by the EC to simulate a Power button override event status if the power\n      is controlled by the EC. The Host writing a one to this bit can also clear this bit. The EC must generate the associated hardware\n      event under software control.(R/WC) Mask */
#define PM1_EC_PM1_STS2_PWRBTNOR_STS(value)   (PM1_EC_PM1_STS2_PWRBTNOR_STS_Msk & (_UINT8_(value) << PM1_EC_PM1_STS2_PWRBTNOR_STS_Pos)) /* Assigment of value for PWRBTNOR_STS in the PM1_EC_PM1_STS2 register */
#define PM1_EC_PM1_STS2_WAK_STS_Pos           _UINT8_(7)                                           /* (PM1_EC_PM1_STS2) This bit can be set or cleared by the EC. The Host writing a one to this bit can also clear this bit. (R/WC) Position */
#define PM1_EC_PM1_STS2_WAK_STS_Msk           (_UINT8_(0x1) << PM1_EC_PM1_STS2_WAK_STS_Pos)        /* (PM1_EC_PM1_STS2) This bit can be set or cleared by the EC. The Host writing a one to this bit can also clear this bit. (R/WC) Mask */
#define PM1_EC_PM1_STS2_WAK_STS(value)        (PM1_EC_PM1_STS2_WAK_STS_Msk & (_UINT8_(value) << PM1_EC_PM1_STS2_WAK_STS_Pos)) /* Assigment of value for WAK_STS in the PM1_EC_PM1_STS2 register */
#define PM1_EC_PM1_STS2_Msk                   _UINT8_(0x8F)                                        /* (PM1_EC_PM1_STS2) Register Mask  */


/* -------- PM1_EC_PM1_EN2 : (PM1 Offset: 0x103) (R/W 8) PM1 Enable 2 -------- */
#define PM1_EC_PM1_EN2_RESETVALUE             _UINT8_(0x00)                                        /*  (PM1_EC_PM1_EN2) PM1 Enable 2  Reset Value */

#define PM1_EC_PM1_EN2_PWRBTN_EN_Pos          _UINT8_(0)                                           /* (PM1_EC_PM1_EN2) This bit can be read or written by the Host. It can be read by the EC. Position */
#define PM1_EC_PM1_EN2_PWRBTN_EN_Msk          (_UINT8_(0x1) << PM1_EC_PM1_EN2_PWRBTN_EN_Pos)       /* (PM1_EC_PM1_EN2) This bit can be read or written by the Host. It can be read by the EC. Mask */
#define PM1_EC_PM1_EN2_PWRBTN_EN(value)       (PM1_EC_PM1_EN2_PWRBTN_EN_Msk & (_UINT8_(value) << PM1_EC_PM1_EN2_PWRBTN_EN_Pos)) /* Assigment of value for PWRBTN_EN in the PM1_EC_PM1_EN2 register */
#define PM1_EC_PM1_EN2_SLPBTN_EN_Pos          _UINT8_(1)                                           /* (PM1_EC_PM1_EN2) This bit can be read or written by the Host. It can be read by the EC. Position */
#define PM1_EC_PM1_EN2_SLPBTN_EN_Msk          (_UINT8_(0x1) << PM1_EC_PM1_EN2_SLPBTN_EN_Pos)       /* (PM1_EC_PM1_EN2) This bit can be read or written by the Host. It can be read by the EC. Mask */
#define PM1_EC_PM1_EN2_SLPBTN_EN(value)       (PM1_EC_PM1_EN2_SLPBTN_EN_Msk & (_UINT8_(value) << PM1_EC_PM1_EN2_SLPBTN_EN_Pos)) /* Assigment of value for SLPBTN_EN in the PM1_EC_PM1_EN2 register */
#define PM1_EC_PM1_EN2_RTC_EN_Pos             _UINT8_(2)                                           /* (PM1_EC_PM1_EN2) This bit can be read or written by the Host. It can be read by the EC. Position */
#define PM1_EC_PM1_EN2_RTC_EN_Msk             (_UINT8_(0x1) << PM1_EC_PM1_EN2_RTC_EN_Pos)          /* (PM1_EC_PM1_EN2) This bit can be read or written by the Host. It can be read by the EC. Mask */
#define PM1_EC_PM1_EN2_RTC_EN(value)          (PM1_EC_PM1_EN2_RTC_EN_Msk & (_UINT8_(value) << PM1_EC_PM1_EN2_RTC_EN_Pos)) /* Assigment of value for RTC_EN in the PM1_EC_PM1_EN2 register */
#define PM1_EC_PM1_EN2_Msk                    _UINT8_(0x07)                                        /* (PM1_EC_PM1_EN2) Register Mask  */


/* -------- PM1_EC_PM1_CTRL2 : (PM1 Offset: 0x105) (R/W 8) PM1 Control 2 -------- */
#define PM1_EC_PM1_CTRL2_RESETVALUE           _UINT8_(0x00)                                        /*  (PM1_EC_PM1_CTRL2) PM1 Control 2  Reset Value */

#define PM1_EC_PM1_CTRL2_PWRBTNOR_EN_Pos      _UINT8_(1)                                           /* (PM1_EC_PM1_CTRL2) This bit can be set or cleared by the Host, read by the EC. Position */
#define PM1_EC_PM1_CTRL2_PWRBTNOR_EN_Msk      (_UINT8_(0x1) << PM1_EC_PM1_CTRL2_PWRBTNOR_EN_Pos)   /* (PM1_EC_PM1_CTRL2) This bit can be set or cleared by the Host, read by the EC. Mask */
#define PM1_EC_PM1_CTRL2_PWRBTNOR_EN(value)   (PM1_EC_PM1_CTRL2_PWRBTNOR_EN_Msk & (_UINT8_(value) << PM1_EC_PM1_CTRL2_PWRBTNOR_EN_Pos)) /* Assigment of value for PWRBTNOR_EN in the PM1_EC_PM1_CTRL2 register */
#define PM1_EC_PM1_CTRL2_SLP_TYP_Pos          _UINT8_(2)                                           /* (PM1_EC_PM1_CTRL2) These bits can be set or cleared by the Host, read by the EC. Position */
#define PM1_EC_PM1_CTRL2_SLP_TYP_Msk          (_UINT8_(0x7) << PM1_EC_PM1_CTRL2_SLP_TYP_Pos)       /* (PM1_EC_PM1_CTRL2) These bits can be set or cleared by the Host, read by the EC. Mask */
#define PM1_EC_PM1_CTRL2_SLP_TYP(value)       (PM1_EC_PM1_CTRL2_SLP_TYP_Msk & (_UINT8_(value) << PM1_EC_PM1_CTRL2_SLP_TYP_Pos)) /* Assigment of value for SLP_TYP in the PM1_EC_PM1_CTRL2 register */
#define PM1_EC_PM1_CTRL2_SLP_EN_Pos           _UINT8_(5)                                           /* (PM1_EC_PM1_CTRL2) SLP_EN Position */
#define PM1_EC_PM1_CTRL2_SLP_EN_Msk           (_UINT8_(0x1) << PM1_EC_PM1_CTRL2_SLP_EN_Pos)        /* (PM1_EC_PM1_CTRL2) SLP_EN Mask */
#define PM1_EC_PM1_CTRL2_SLP_EN(value)        (PM1_EC_PM1_CTRL2_SLP_EN_Msk & (_UINT8_(value) << PM1_EC_PM1_CTRL2_SLP_EN_Pos)) /* Assigment of value for SLP_EN in the PM1_EC_PM1_CTRL2 register */
#define PM1_EC_PM1_CTRL2_Msk                  _UINT8_(0x3E)                                        /* (PM1_EC_PM1_CTRL2) Register Mask  */


/* -------- PM1_EC_PM_STS : (PM1 Offset: 0x110) (R/W 8) PM1 EC PM Status -------- */
#define PM1_EC_PM_STS_RESETVALUE              _UINT8_(0x00)                                        /*  (PM1_EC_PM_STS) PM1 EC PM Status  Reset Value */

#define PM1_EC_PM_STS_EC_SCI_STS_Pos          _UINT8_(0)                                           /* (PM1_EC_PM_STS) If the EC_SCI_STS bit is '1', an interrupt is generated on the EC_SCI# pin. Position */
#define PM1_EC_PM_STS_EC_SCI_STS_Msk          (_UINT8_(0x1) << PM1_EC_PM_STS_EC_SCI_STS_Pos)       /* (PM1_EC_PM_STS) If the EC_SCI_STS bit is '1', an interrupt is generated on the EC_SCI# pin. Mask */
#define PM1_EC_PM_STS_EC_SCI_STS(value)       (PM1_EC_PM_STS_EC_SCI_STS_Msk & (_UINT8_(value) << PM1_EC_PM_STS_EC_SCI_STS_Pos)) /* Assigment of value for EC_SCI_STS in the PM1_EC_PM_STS register */
#define PM1_EC_PM_STS_UD_Pos                  _UINT8_(1)                                           /* (PM1_EC_PM_STS) User Defined Position */
#define PM1_EC_PM_STS_UD_Msk                  (_UINT8_(0x7F) << PM1_EC_PM_STS_UD_Pos)              /* (PM1_EC_PM_STS) User Defined Mask */
#define PM1_EC_PM_STS_UD(value)               (PM1_EC_PM_STS_UD_Msk & (_UINT8_(value) << PM1_EC_PM_STS_UD_Pos)) /* Assigment of value for UD in the PM1_EC_PM_STS register */
#define PM1_EC_PM_STS_Msk                     _UINT8_(0xFF)                                        /* (PM1_EC_PM_STS) Register Mask  */


/** \brief PM1 register offsets definitions */
#define PM1_H_PM1_STS2_REG_OFST        _UINT32_(0x01)      /* (PM1_H_PM1_STS2) PM1 Status 2 Offset */
#define PM1_H_PM1_EN2_REG_OFST         _UINT32_(0x03)      /* (PM1_H_PM1_EN2) PM1 Enable 2 Offset */
#define PM1_H_PM1_CTRL2_REG_OFST       _UINT32_(0x05)      /* (PM1_H_PM1_CTRL2) PM1 Control 2 Offset */
#define PM1_EC_PM1_STS2_REG_OFST       _UINT32_(0x101)     /* (PM1_EC_PM1_STS2) PM1 Status 2 Offset */
#define PM1_EC_PM1_EN2_REG_OFST        _UINT32_(0x103)     /* (PM1_EC_PM1_EN2) PM1 Enable 2 Offset */
#define PM1_EC_PM1_CTRL2_REG_OFST      _UINT32_(0x105)     /* (PM1_EC_PM1_CTRL2) PM1 Control 2 Offset */
#define PM1_EC_PM_STS_REG_OFST         _UINT32_(0x110)     /* (PM1_EC_PM_STS) PM1 EC PM Status Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief PM1 register API structure */
typedef struct
{  /* These features comply with the ACPI Specification through a combination of hardware and EC software */
  __I   uint8_t                        Reserved1[0x01];
  __IO  uint8_t                        PM1_H_PM1_STS2;     /**< Offset: 0x01 (R/W  8) PM1 Status 2 */
  __I   uint8_t                        Reserved2[0x01];
  __IO  uint8_t                        PM1_H_PM1_EN2;      /**< Offset: 0x03 (R/W  8) PM1 Enable 2 */
  __I   uint8_t                        Reserved3[0x01];
  __IO  uint8_t                        PM1_H_PM1_CTRL2;    /**< Offset: 0x05 (R/W  8) PM1 Control 2 */
  __I   uint8_t                        Reserved4[0xFB];
  __IO  uint8_t                        PM1_EC_PM1_STS2;    /**< Offset: 0x101 (R/W  8) PM1 Status 2 */
  __I   uint8_t                        Reserved5[0x01];
  __IO  uint8_t                        PM1_EC_PM1_EN2;     /**< Offset: 0x103 (R/W  8) PM1 Enable 2 */
  __I   uint8_t                        Reserved6[0x01];
  __IO  uint8_t                        PM1_EC_PM1_CTRL2;   /**< Offset: 0x105 (R/W  8) PM1 Control 2 */
  __I   uint8_t                        Reserved7[0x0A];
  __IO  uint8_t                        PM1_EC_PM_STS;      /**< Offset: 0x110 (R/W  8) PM1 EC PM Status */
} pm1_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _0525SG12_PM1_COMPONENT_H_ */
