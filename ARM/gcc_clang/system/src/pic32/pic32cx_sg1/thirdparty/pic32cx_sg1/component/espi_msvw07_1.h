/*
 * Component description for ESPI_MSVW07_1
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
#ifndef _0525SG12_ESPI_MSVW07_1_COMPONENT_H_
#define _0525SG12_ESPI_MSVW07_1_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR ESPI_MSVW07_1                                */
/* ************************************************************************** */

/* -------- ESPI_MSVW07_1_MSVW07_DW0 : (ESPI_MSVW07_1 Offset: 0x00) (R/W 32) Master-to-Slave Virtual Wire 7 Register (DW 0) -------- */
#define ESPI_MSVW07_1_MSVW07_DW0_RESETVALUE   _UINT32_(0x347)                                      /*  (ESPI_MSVW07_1_MSVW07_DW0) Master-to-Slave Virtual Wire 7 Register (DW 0)  Reset Value */

#define ESPI_MSVW07_1_MSVW07_DW0_IND_Pos      _UINT32_(0)                                          /* (ESPI_MSVW07_1_MSVW07_DW0) The Index for SRC0, SRC1, SRC2 and SRC3. When the Index field of an incoming Master-to-Slave Virtual Wire transaction\n      matches this value, the fields SRC0, SRC1, SRC2 and SRC3 are updated by the data contained in the respective bit positions in the\n      transaction. Setting the INDEX field to 0 disables the register from accepting any Virtual Wire traffic from the Master. Setting the\n      INDEX field to 1 is illegal, since INDEX=1 is reserved for Serial IRQ. Position */
#define ESPI_MSVW07_1_MSVW07_DW0_IND_Msk      (_UINT32_(0xFF) << ESPI_MSVW07_1_MSVW07_DW0_IND_Pos) /* (ESPI_MSVW07_1_MSVW07_DW0) The Index for SRC0, SRC1, SRC2 and SRC3. When the Index field of an incoming Master-to-Slave Virtual Wire transaction\n      matches this value, the fields SRC0, SRC1, SRC2 and SRC3 are updated by the data contained in the respective bit positions in the\n      transaction. Setting the INDEX field to 0 disables the register from accepting any Virtual Wire traffic from the Master. Setting the\n      INDEX field to 1 is illegal, since INDEX=1 is reserved for Serial IRQ. Mask */
#define ESPI_MSVW07_1_MSVW07_DW0_IND(value)   (ESPI_MSVW07_1_MSVW07_DW0_IND_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW07_DW0_IND_Pos)) /* Assigment of value for IND in the ESPI_MSVW07_1_MSVW07_DW0 register */
#define ESPI_MSVW07_1_MSVW07_DW0_MTOS_SRC_Pos _UINT32_(8)                                          /* (ESPI_MSVW07_1_MSVW07_DW0) This field determines which reset signal in addition to RESET_SYS resets SRC[3:0] in this register:\n      3=PLTRST\n      2=RESET_SIO\n      1=RESET_SYS. This is the only reset signal that will reset the SRC fields.\n      0=RESET_ESPI. Position */
#define ESPI_MSVW07_1_MSVW07_DW0_MTOS_SRC_Msk (_UINT32_(0x3) << ESPI_MSVW07_1_MSVW07_DW0_MTOS_SRC_Pos) /* (ESPI_MSVW07_1_MSVW07_DW0) This field determines which reset signal in addition to RESET_SYS resets SRC[3:0] in this register:\n      3=PLTRST\n      2=RESET_SIO\n      1=RESET_SYS. This is the only reset signal that will reset the SRC fields.\n      0=RESET_ESPI. Mask */
#define ESPI_MSVW07_1_MSVW07_DW0_MTOS_SRC(value) (ESPI_MSVW07_1_MSVW07_DW0_MTOS_SRC_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW07_DW0_MTOS_SRC_Pos)) /* Assigment of value for MTOS_SRC in the ESPI_MSVW07_1_MSVW07_DW0 register */
#define ESPI_MSVW07_1_MSVW07_DW0_MTOS_R_STATE_Pos _UINT32_(12)                                         /* (ESPI_MSVW07_1_MSVW07_DW0) The four bits in this field are loaded into SRC0, SRC1, SRC2 and SRC3 when the reset signal selected by M2S RESET SRC is\n      asserted. If MTOS_SRC is set for RESET_SYS, the SRC bits are set to the default value of this field, rather than its programmed value,\n      since this field is also reset on RESET_SYS. Position */
#define ESPI_MSVW07_1_MSVW07_DW0_MTOS_R_STATE_Msk (_UINT32_(0xF) << ESPI_MSVW07_1_MSVW07_DW0_MTOS_R_STATE_Pos) /* (ESPI_MSVW07_1_MSVW07_DW0) The four bits in this field are loaded into SRC0, SRC1, SRC2 and SRC3 when the reset signal selected by M2S RESET SRC is\n      asserted. If MTOS_SRC is set for RESET_SYS, the SRC bits are set to the default value of this field, rather than its programmed value,\n      since this field is also reset on RESET_SYS. Mask */
#define ESPI_MSVW07_1_MSVW07_DW0_MTOS_R_STATE(value) (ESPI_MSVW07_1_MSVW07_DW0_MTOS_R_STATE_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW07_DW0_MTOS_R_STATE_Pos)) /* Assigment of value for MTOS_R_STATE in the ESPI_MSVW07_1_MSVW07_DW0 register */
#define ESPI_MSVW07_1_MSVW07_DW0_Msk          _UINT32_(0x0000F3FF)                                 /* (ESPI_MSVW07_1_MSVW07_DW0) Register Mask  */


/* -------- ESPI_MSVW07_1_MSVW07_DW1 : (ESPI_MSVW07_1 Offset: 0x04) (R/W 32) Master-to-Slave Virtual Wire 7 Register (DW 1) -------- */
#define ESPI_MSVW07_1_MSVW07_DW1_RESETVALUE   _UINT32_(0x4040404)                                  /*  (ESPI_MSVW07_1_MSVW07_DW1) Master-to-Slave Virtual Wire 7 Register (DW 1)  Reset Value */

#define ESPI_MSVW07_1_MSVW07_DW1_SRC0IRQ_SEL_Pos _UINT32_(0)                                          /* (ESPI_MSVW07_1_MSVW07_DW1) A change in the value of SRC0 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Position */
#define ESPI_MSVW07_1_MSVW07_DW1_SRC0IRQ_SEL_Msk (_UINT32_(0xF) << ESPI_MSVW07_1_MSVW07_DW1_SRC0IRQ_SEL_Pos) /* (ESPI_MSVW07_1_MSVW07_DW1) A change in the value of SRC0 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Mask */
#define ESPI_MSVW07_1_MSVW07_DW1_SRC0IRQ_SEL(value) (ESPI_MSVW07_1_MSVW07_DW1_SRC0IRQ_SEL_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW07_DW1_SRC0IRQ_SEL_Pos)) /* Assigment of value for SRC0IRQ_SEL in the ESPI_MSVW07_1_MSVW07_DW1 register */
#define ESPI_MSVW07_1_MSVW07_DW1_SRC1IRQ_SEL_Pos _UINT32_(8)                                          /* (ESPI_MSVW07_1_MSVW07_DW1) A change in the value of SRC1 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Position */
#define ESPI_MSVW07_1_MSVW07_DW1_SRC1IRQ_SEL_Msk (_UINT32_(0xF) << ESPI_MSVW07_1_MSVW07_DW1_SRC1IRQ_SEL_Pos) /* (ESPI_MSVW07_1_MSVW07_DW1) A change in the value of SRC1 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Mask */
#define ESPI_MSVW07_1_MSVW07_DW1_SRC1IRQ_SEL(value) (ESPI_MSVW07_1_MSVW07_DW1_SRC1IRQ_SEL_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW07_DW1_SRC1IRQ_SEL_Pos)) /* Assigment of value for SRC1IRQ_SEL in the ESPI_MSVW07_1_MSVW07_DW1 register */
#define ESPI_MSVW07_1_MSVW07_DW1_SRC2IRQ_SEL_Pos _UINT32_(16)                                         /* (ESPI_MSVW07_1_MSVW07_DW1) A change in the value of SRC2 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Position */
#define ESPI_MSVW07_1_MSVW07_DW1_SRC2IRQ_SEL_Msk (_UINT32_(0xF) << ESPI_MSVW07_1_MSVW07_DW1_SRC2IRQ_SEL_Pos) /* (ESPI_MSVW07_1_MSVW07_DW1) A change in the value of SRC2 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Mask */
#define ESPI_MSVW07_1_MSVW07_DW1_SRC2IRQ_SEL(value) (ESPI_MSVW07_1_MSVW07_DW1_SRC2IRQ_SEL_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW07_DW1_SRC2IRQ_SEL_Pos)) /* Assigment of value for SRC2IRQ_SEL in the ESPI_MSVW07_1_MSVW07_DW1 register */
#define ESPI_MSVW07_1_MSVW07_DW1_SRC3IRQ_SEL_Pos _UINT32_(24)                                         /* (ESPI_MSVW07_1_MSVW07_DW1) A change in the value of SRC3 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Position */
#define ESPI_MSVW07_1_MSVW07_DW1_SRC3IRQ_SEL_Msk (_UINT32_(0xF) << ESPI_MSVW07_1_MSVW07_DW1_SRC3IRQ_SEL_Pos) /* (ESPI_MSVW07_1_MSVW07_DW1) A change in the value of SRC3 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Mask */
#define ESPI_MSVW07_1_MSVW07_DW1_SRC3IRQ_SEL(value) (ESPI_MSVW07_1_MSVW07_DW1_SRC3IRQ_SEL_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW07_DW1_SRC3IRQ_SEL_Pos)) /* Assigment of value for SRC3IRQ_SEL in the ESPI_MSVW07_1_MSVW07_DW1 register */
#define ESPI_MSVW07_1_MSVW07_DW1_Msk          _UINT32_(0x0F0F0F0F)                                 /* (ESPI_MSVW07_1_MSVW07_DW1) Register Mask  */


/* -------- ESPI_MSVW07_1_MSVW07_DW2 : (ESPI_MSVW07_1 Offset: 0x08) (R/W 32) Master-to-Slave Virtual Wire 7 Register (DW 2) -------- */
#define ESPI_MSVW07_1_MSVW07_DW2_RESETVALUE   _UINT32_(0x00)                                       /*  (ESPI_MSVW07_1_MSVW07_DW2) Master-to-Slave Virtual Wire 7 Register (DW 2)  Reset Value */

#define ESPI_MSVW07_1_MSVW07_DW2_SRC0_Pos     _UINT32_(0)                                          /* (ESPI_MSVW07_1_MSVW07_DW2) Master-to-Slave data for Bit Position 0 for the virtual wire associated with the index defined by INDEX. Position */
#define ESPI_MSVW07_1_MSVW07_DW2_SRC0_Msk     (_UINT32_(0x1) << ESPI_MSVW07_1_MSVW07_DW2_SRC0_Pos) /* (ESPI_MSVW07_1_MSVW07_DW2) Master-to-Slave data for Bit Position 0 for the virtual wire associated with the index defined by INDEX. Mask */
#define ESPI_MSVW07_1_MSVW07_DW2_SRC0(value)  (ESPI_MSVW07_1_MSVW07_DW2_SRC0_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW07_DW2_SRC0_Pos)) /* Assigment of value for SRC0 in the ESPI_MSVW07_1_MSVW07_DW2 register */
#define ESPI_MSVW07_1_MSVW07_DW2_SRC1_Pos     _UINT32_(8)                                          /* (ESPI_MSVW07_1_MSVW07_DW2) Master-to-Slave data for Bit Position 1 for the virtual wire associated with the index defined by INDEX. Position */
#define ESPI_MSVW07_1_MSVW07_DW2_SRC1_Msk     (_UINT32_(0x1) << ESPI_MSVW07_1_MSVW07_DW2_SRC1_Pos) /* (ESPI_MSVW07_1_MSVW07_DW2) Master-to-Slave data for Bit Position 1 for the virtual wire associated with the index defined by INDEX. Mask */
#define ESPI_MSVW07_1_MSVW07_DW2_SRC1(value)  (ESPI_MSVW07_1_MSVW07_DW2_SRC1_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW07_DW2_SRC1_Pos)) /* Assigment of value for SRC1 in the ESPI_MSVW07_1_MSVW07_DW2 register */
#define ESPI_MSVW07_1_MSVW07_DW2_SRC2_Pos     _UINT32_(16)                                         /* (ESPI_MSVW07_1_MSVW07_DW2) Master-to-Slave data for Bit Position 2 for the virtual wire associated with the index defined by INDEX. Position */
#define ESPI_MSVW07_1_MSVW07_DW2_SRC2_Msk     (_UINT32_(0x1) << ESPI_MSVW07_1_MSVW07_DW2_SRC2_Pos) /* (ESPI_MSVW07_1_MSVW07_DW2) Master-to-Slave data for Bit Position 2 for the virtual wire associated with the index defined by INDEX. Mask */
#define ESPI_MSVW07_1_MSVW07_DW2_SRC2(value)  (ESPI_MSVW07_1_MSVW07_DW2_SRC2_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW07_DW2_SRC2_Pos)) /* Assigment of value for SRC2 in the ESPI_MSVW07_1_MSVW07_DW2 register */
#define ESPI_MSVW07_1_MSVW07_DW2_SRC3_Pos     _UINT32_(24)                                         /* (ESPI_MSVW07_1_MSVW07_DW2) Master-to-Slave data for Bit Position 3 for the virtual wire associated with the index defined by INDEX. Position */
#define ESPI_MSVW07_1_MSVW07_DW2_SRC3_Msk     (_UINT32_(0x1) << ESPI_MSVW07_1_MSVW07_DW2_SRC3_Pos) /* (ESPI_MSVW07_1_MSVW07_DW2) Master-to-Slave data for Bit Position 3 for the virtual wire associated with the index defined by INDEX. Mask */
#define ESPI_MSVW07_1_MSVW07_DW2_SRC3(value)  (ESPI_MSVW07_1_MSVW07_DW2_SRC3_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW07_DW2_SRC3_Pos)) /* Assigment of value for SRC3 in the ESPI_MSVW07_1_MSVW07_DW2 register */
#define ESPI_MSVW07_1_MSVW07_DW2_Msk          _UINT32_(0x01010101)                                 /* (ESPI_MSVW07_1_MSVW07_DW2) Register Mask  */

#define ESPI_MSVW07_1_MSVW07_DW2_SRC_Pos      _UINT32_(0)                                          /* (ESPI_MSVW07_1_MSVW07_DW2 Position) Master-to-Slave data for Bit Position 3 for the virtual wire associated with the index defined by INDEX. */
#define ESPI_MSVW07_1_MSVW07_DW2_SRC_Msk      (_UINT32_(0xF) << ESPI_MSVW07_1_MSVW07_DW2_SRC_Pos)  /* (ESPI_MSVW07_1_MSVW07_DW2 Mask) SRC */
#define ESPI_MSVW07_1_MSVW07_DW2_SRC(value)   (ESPI_MSVW07_1_MSVW07_DW2_SRC_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW07_DW2_SRC_Pos)) 

/* -------- ESPI_MSVW07_1_MSVW08_DW0 : (ESPI_MSVW07_1 Offset: 0x0C) (R/W 32) Master-to-Slave Virtual Wire 8 Register (DW 0) -------- */
#define ESPI_MSVW07_1_MSVW08_DW0_RESETVALUE   _UINT32_(0x4A)                                       /*  (ESPI_MSVW07_1_MSVW08_DW0) Master-to-Slave Virtual Wire 8 Register (DW 0)  Reset Value */

#define ESPI_MSVW07_1_MSVW08_DW0_IND_Pos      _UINT32_(0)                                          /* (ESPI_MSVW07_1_MSVW08_DW0) The Index for SRC0, SRC1, SRC2 and SRC3. When the Index field of an incoming Master-to-Slave Virtual Wire transaction\n      matches this value, the fields SRC0, SRC1, SRC2 and SRC3 are updated by the data contained in the respective bit positions in the\n      transaction. Setting the INDEX field to 0 disables the register from accepting any Virtual Wire traffic from the Master. Setting the\n      INDEX field to 1 is illegal, since INDEX=1 is reserved for Serial IRQ. Position */
#define ESPI_MSVW07_1_MSVW08_DW0_IND_Msk      (_UINT32_(0xFF) << ESPI_MSVW07_1_MSVW08_DW0_IND_Pos) /* (ESPI_MSVW07_1_MSVW08_DW0) The Index for SRC0, SRC1, SRC2 and SRC3. When the Index field of an incoming Master-to-Slave Virtual Wire transaction\n      matches this value, the fields SRC0, SRC1, SRC2 and SRC3 are updated by the data contained in the respective bit positions in the\n      transaction. Setting the INDEX field to 0 disables the register from accepting any Virtual Wire traffic from the Master. Setting the\n      INDEX field to 1 is illegal, since INDEX=1 is reserved for Serial IRQ. Mask */
#define ESPI_MSVW07_1_MSVW08_DW0_IND(value)   (ESPI_MSVW07_1_MSVW08_DW0_IND_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW08_DW0_IND_Pos)) /* Assigment of value for IND in the ESPI_MSVW07_1_MSVW08_DW0 register */
#define ESPI_MSVW07_1_MSVW08_DW0_MTOS_SRC_Pos _UINT32_(8)                                          /* (ESPI_MSVW07_1_MSVW08_DW0) This field determines which reset signal in addition to RESET_SYS resets SRC[3:0] in this register:\n      3=PLTRST\n      2=RESET_SIO\n      1=RESET_SYS. This is the only reset signal that will reset the SRC fields.\n      0=RESET_ESPI. Position */
#define ESPI_MSVW07_1_MSVW08_DW0_MTOS_SRC_Msk (_UINT32_(0x3) << ESPI_MSVW07_1_MSVW08_DW0_MTOS_SRC_Pos) /* (ESPI_MSVW07_1_MSVW08_DW0) This field determines which reset signal in addition to RESET_SYS resets SRC[3:0] in this register:\n      3=PLTRST\n      2=RESET_SIO\n      1=RESET_SYS. This is the only reset signal that will reset the SRC fields.\n      0=RESET_ESPI. Mask */
#define ESPI_MSVW07_1_MSVW08_DW0_MTOS_SRC(value) (ESPI_MSVW07_1_MSVW08_DW0_MTOS_SRC_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW08_DW0_MTOS_SRC_Pos)) /* Assigment of value for MTOS_SRC in the ESPI_MSVW07_1_MSVW08_DW0 register */
#define ESPI_MSVW07_1_MSVW08_DW0_MTOS_R_STATE_Pos _UINT32_(12)                                         /* (ESPI_MSVW07_1_MSVW08_DW0) The four bits in this field are loaded into SRC0, SRC1, SRC2 and SRC3 when the reset signal selected by M2S RESET SRC is\n      asserted. If MTOS_SRC is set for RESET_SYS, the SRC bits are set to the default value of this field, rather than its programmed value,\n      since this field is also reset on RESET_SYS. Position */
#define ESPI_MSVW07_1_MSVW08_DW0_MTOS_R_STATE_Msk (_UINT32_(0xF) << ESPI_MSVW07_1_MSVW08_DW0_MTOS_R_STATE_Pos) /* (ESPI_MSVW07_1_MSVW08_DW0) The four bits in this field are loaded into SRC0, SRC1, SRC2 and SRC3 when the reset signal selected by M2S RESET SRC is\n      asserted. If MTOS_SRC is set for RESET_SYS, the SRC bits are set to the default value of this field, rather than its programmed value,\n      since this field is also reset on RESET_SYS. Mask */
#define ESPI_MSVW07_1_MSVW08_DW0_MTOS_R_STATE(value) (ESPI_MSVW07_1_MSVW08_DW0_MTOS_R_STATE_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW08_DW0_MTOS_R_STATE_Pos)) /* Assigment of value for MTOS_R_STATE in the ESPI_MSVW07_1_MSVW08_DW0 register */
#define ESPI_MSVW07_1_MSVW08_DW0_Msk          _UINT32_(0x0000F3FF)                                 /* (ESPI_MSVW07_1_MSVW08_DW0) Register Mask  */


/* -------- ESPI_MSVW07_1_MSVW08_DW1 : (ESPI_MSVW07_1 Offset: 0x10) (R/W 32) Master-to-Slave Virtual Wire 8 Register (DW 1) -------- */
#define ESPI_MSVW07_1_MSVW08_DW1_RESETVALUE   _UINT32_(0x4040404)                                  /*  (ESPI_MSVW07_1_MSVW08_DW1) Master-to-Slave Virtual Wire 8 Register (DW 1)  Reset Value */

#define ESPI_MSVW07_1_MSVW08_DW1_SRC0IRQ_SEL_Pos _UINT32_(0)                                          /* (ESPI_MSVW07_1_MSVW08_DW1) A change in the value of SRC0 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Position */
#define ESPI_MSVW07_1_MSVW08_DW1_SRC0IRQ_SEL_Msk (_UINT32_(0xF) << ESPI_MSVW07_1_MSVW08_DW1_SRC0IRQ_SEL_Pos) /* (ESPI_MSVW07_1_MSVW08_DW1) A change in the value of SRC0 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Mask */
#define ESPI_MSVW07_1_MSVW08_DW1_SRC0IRQ_SEL(value) (ESPI_MSVW07_1_MSVW08_DW1_SRC0IRQ_SEL_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW08_DW1_SRC0IRQ_SEL_Pos)) /* Assigment of value for SRC0IRQ_SEL in the ESPI_MSVW07_1_MSVW08_DW1 register */
#define ESPI_MSVW07_1_MSVW08_DW1_SRC1IRQ_SEL_Pos _UINT32_(8)                                          /* (ESPI_MSVW07_1_MSVW08_DW1) A change in the value of SRC1 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Position */
#define ESPI_MSVW07_1_MSVW08_DW1_SRC1IRQ_SEL_Msk (_UINT32_(0xF) << ESPI_MSVW07_1_MSVW08_DW1_SRC1IRQ_SEL_Pos) /* (ESPI_MSVW07_1_MSVW08_DW1) A change in the value of SRC1 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Mask */
#define ESPI_MSVW07_1_MSVW08_DW1_SRC1IRQ_SEL(value) (ESPI_MSVW07_1_MSVW08_DW1_SRC1IRQ_SEL_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW08_DW1_SRC1IRQ_SEL_Pos)) /* Assigment of value for SRC1IRQ_SEL in the ESPI_MSVW07_1_MSVW08_DW1 register */
#define ESPI_MSVW07_1_MSVW08_DW1_SRC2IRQ_SEL_Pos _UINT32_(16)                                         /* (ESPI_MSVW07_1_MSVW08_DW1) A change in the value of SRC2 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Position */
#define ESPI_MSVW07_1_MSVW08_DW1_SRC2IRQ_SEL_Msk (_UINT32_(0xF) << ESPI_MSVW07_1_MSVW08_DW1_SRC2IRQ_SEL_Pos) /* (ESPI_MSVW07_1_MSVW08_DW1) A change in the value of SRC2 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Mask */
#define ESPI_MSVW07_1_MSVW08_DW1_SRC2IRQ_SEL(value) (ESPI_MSVW07_1_MSVW08_DW1_SRC2IRQ_SEL_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW08_DW1_SRC2IRQ_SEL_Pos)) /* Assigment of value for SRC2IRQ_SEL in the ESPI_MSVW07_1_MSVW08_DW1 register */
#define ESPI_MSVW07_1_MSVW08_DW1_SRC3IRQ_SEL_Pos _UINT32_(24)                                         /* (ESPI_MSVW07_1_MSVW08_DW1) A change in the value of SRC3 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Position */
#define ESPI_MSVW07_1_MSVW08_DW1_SRC3IRQ_SEL_Msk (_UINT32_(0xF) << ESPI_MSVW07_1_MSVW08_DW1_SRC3IRQ_SEL_Pos) /* (ESPI_MSVW07_1_MSVW08_DW1) A change in the value of SRC3 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Mask */
#define ESPI_MSVW07_1_MSVW08_DW1_SRC3IRQ_SEL(value) (ESPI_MSVW07_1_MSVW08_DW1_SRC3IRQ_SEL_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW08_DW1_SRC3IRQ_SEL_Pos)) /* Assigment of value for SRC3IRQ_SEL in the ESPI_MSVW07_1_MSVW08_DW1 register */
#define ESPI_MSVW07_1_MSVW08_DW1_Msk          _UINT32_(0x0F0F0F0F)                                 /* (ESPI_MSVW07_1_MSVW08_DW1) Register Mask  */


/* -------- ESPI_MSVW07_1_MSVW08_DW2 : (ESPI_MSVW07_1 Offset: 0x14) (R/W 32) Master-to-Slave Virtual Wire 8 Register (DW 2) -------- */
#define ESPI_MSVW07_1_MSVW08_DW2_RESETVALUE   _UINT32_(0x00)                                       /*  (ESPI_MSVW07_1_MSVW08_DW2) Master-to-Slave Virtual Wire 8 Register (DW 2)  Reset Value */

#define ESPI_MSVW07_1_MSVW08_DW2_SRC0_Pos     _UINT32_(0)                                          /* (ESPI_MSVW07_1_MSVW08_DW2) Master-to-Slave data for Bit Position 0 for the virtual wire associated with the index defined by INDEX. Position */
#define ESPI_MSVW07_1_MSVW08_DW2_SRC0_Msk     (_UINT32_(0x1) << ESPI_MSVW07_1_MSVW08_DW2_SRC0_Pos) /* (ESPI_MSVW07_1_MSVW08_DW2) Master-to-Slave data for Bit Position 0 for the virtual wire associated with the index defined by INDEX. Mask */
#define ESPI_MSVW07_1_MSVW08_DW2_SRC0(value)  (ESPI_MSVW07_1_MSVW08_DW2_SRC0_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW08_DW2_SRC0_Pos)) /* Assigment of value for SRC0 in the ESPI_MSVW07_1_MSVW08_DW2 register */
#define ESPI_MSVW07_1_MSVW08_DW2_SRC1_Pos     _UINT32_(8)                                          /* (ESPI_MSVW07_1_MSVW08_DW2) Master-to-Slave data for Bit Position 1 for the virtual wire associated with the index defined by INDEX. Position */
#define ESPI_MSVW07_1_MSVW08_DW2_SRC1_Msk     (_UINT32_(0x1) << ESPI_MSVW07_1_MSVW08_DW2_SRC1_Pos) /* (ESPI_MSVW07_1_MSVW08_DW2) Master-to-Slave data for Bit Position 1 for the virtual wire associated with the index defined by INDEX. Mask */
#define ESPI_MSVW07_1_MSVW08_DW2_SRC1(value)  (ESPI_MSVW07_1_MSVW08_DW2_SRC1_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW08_DW2_SRC1_Pos)) /* Assigment of value for SRC1 in the ESPI_MSVW07_1_MSVW08_DW2 register */
#define ESPI_MSVW07_1_MSVW08_DW2_SRC2_Pos     _UINT32_(16)                                         /* (ESPI_MSVW07_1_MSVW08_DW2) Master-to-Slave data for Bit Position 2 for the virtual wire associated with the index defined by INDEX. Position */
#define ESPI_MSVW07_1_MSVW08_DW2_SRC2_Msk     (_UINT32_(0x1) << ESPI_MSVW07_1_MSVW08_DW2_SRC2_Pos) /* (ESPI_MSVW07_1_MSVW08_DW2) Master-to-Slave data for Bit Position 2 for the virtual wire associated with the index defined by INDEX. Mask */
#define ESPI_MSVW07_1_MSVW08_DW2_SRC2(value)  (ESPI_MSVW07_1_MSVW08_DW2_SRC2_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW08_DW2_SRC2_Pos)) /* Assigment of value for SRC2 in the ESPI_MSVW07_1_MSVW08_DW2 register */
#define ESPI_MSVW07_1_MSVW08_DW2_SRC3_Pos     _UINT32_(24)                                         /* (ESPI_MSVW07_1_MSVW08_DW2) Master-to-Slave data for Bit Position 3 for the virtual wire associated with the index defined by INDEX. Position */
#define ESPI_MSVW07_1_MSVW08_DW2_SRC3_Msk     (_UINT32_(0x1) << ESPI_MSVW07_1_MSVW08_DW2_SRC3_Pos) /* (ESPI_MSVW07_1_MSVW08_DW2) Master-to-Slave data for Bit Position 3 for the virtual wire associated with the index defined by INDEX. Mask */
#define ESPI_MSVW07_1_MSVW08_DW2_SRC3(value)  (ESPI_MSVW07_1_MSVW08_DW2_SRC3_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW08_DW2_SRC3_Pos)) /* Assigment of value for SRC3 in the ESPI_MSVW07_1_MSVW08_DW2 register */
#define ESPI_MSVW07_1_MSVW08_DW2_Msk          _UINT32_(0x01010101)                                 /* (ESPI_MSVW07_1_MSVW08_DW2) Register Mask  */

#define ESPI_MSVW07_1_MSVW08_DW2_SRC_Pos      _UINT32_(0)                                          /* (ESPI_MSVW07_1_MSVW08_DW2 Position) Master-to-Slave data for Bit Position 3 for the virtual wire associated with the index defined by INDEX. */
#define ESPI_MSVW07_1_MSVW08_DW2_SRC_Msk      (_UINT32_(0xF) << ESPI_MSVW07_1_MSVW08_DW2_SRC_Pos)  /* (ESPI_MSVW07_1_MSVW08_DW2 Mask) SRC */
#define ESPI_MSVW07_1_MSVW08_DW2_SRC(value)   (ESPI_MSVW07_1_MSVW08_DW2_SRC_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW08_DW2_SRC_Pos)) 

/* -------- ESPI_MSVW07_1_MSVW09_DW0 : (ESPI_MSVW07_1 Offset: 0x18) (R/W 32) Master-to-Slave Virtual Wire 9 Register (DW 0) -------- */
#define ESPI_MSVW07_1_MSVW09_DW0_RESETVALUE   _UINT32_(0x00)                                       /*  (ESPI_MSVW07_1_MSVW09_DW0) Master-to-Slave Virtual Wire 9 Register (DW 0)  Reset Value */

#define ESPI_MSVW07_1_MSVW09_DW0_IND_Pos      _UINT32_(0)                                          /* (ESPI_MSVW07_1_MSVW09_DW0) The Index for SRC0, SRC1, SRC2 and SRC3. When the Index field of an incoming Master-to-Slave Virtual Wire transaction\n      matches this value, the fields SRC0, SRC1, SRC2 and SRC3 are updated by the data contained in the respective bit positions in the\n      transaction. Setting the INDEX field to 0 disables the register from accepting any Virtual Wire traffic from the Master. Setting the\n      INDEX field to 1 is illegal, since INDEX=1 is reserved for Serial IRQ. Position */
#define ESPI_MSVW07_1_MSVW09_DW0_IND_Msk      (_UINT32_(0xFF) << ESPI_MSVW07_1_MSVW09_DW0_IND_Pos) /* (ESPI_MSVW07_1_MSVW09_DW0) The Index for SRC0, SRC1, SRC2 and SRC3. When the Index field of an incoming Master-to-Slave Virtual Wire transaction\n      matches this value, the fields SRC0, SRC1, SRC2 and SRC3 are updated by the data contained in the respective bit positions in the\n      transaction. Setting the INDEX field to 0 disables the register from accepting any Virtual Wire traffic from the Master. Setting the\n      INDEX field to 1 is illegal, since INDEX=1 is reserved for Serial IRQ. Mask */
#define ESPI_MSVW07_1_MSVW09_DW0_IND(value)   (ESPI_MSVW07_1_MSVW09_DW0_IND_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW09_DW0_IND_Pos)) /* Assigment of value for IND in the ESPI_MSVW07_1_MSVW09_DW0 register */
#define ESPI_MSVW07_1_MSVW09_DW0_MTOS_SRC_Pos _UINT32_(8)                                          /* (ESPI_MSVW07_1_MSVW09_DW0) This field determines which reset signal in addition to RESET_SYS resets SRC[3:0] in this register:\n      3=PLTRST\n      2=RESET_SIO\n      1=RESET_SYS. This is the only reset signal that will reset the SRC fields.\n      0=RESET_ESPI. Position */
#define ESPI_MSVW07_1_MSVW09_DW0_MTOS_SRC_Msk (_UINT32_(0x3) << ESPI_MSVW07_1_MSVW09_DW0_MTOS_SRC_Pos) /* (ESPI_MSVW07_1_MSVW09_DW0) This field determines which reset signal in addition to RESET_SYS resets SRC[3:0] in this register:\n      3=PLTRST\n      2=RESET_SIO\n      1=RESET_SYS. This is the only reset signal that will reset the SRC fields.\n      0=RESET_ESPI. Mask */
#define ESPI_MSVW07_1_MSVW09_DW0_MTOS_SRC(value) (ESPI_MSVW07_1_MSVW09_DW0_MTOS_SRC_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW09_DW0_MTOS_SRC_Pos)) /* Assigment of value for MTOS_SRC in the ESPI_MSVW07_1_MSVW09_DW0 register */
#define ESPI_MSVW07_1_MSVW09_DW0_MTOS_R_STATE_Pos _UINT32_(12)                                         /* (ESPI_MSVW07_1_MSVW09_DW0) The four bits in this field are loaded into SRC0, SRC1, SRC2 and SRC3 when the reset signal selected by M2S RESET SRC is\n      asserted. If MTOS_SRC is set for RESET_SYS, the SRC bits are set to the default value of this field, rather than its programmed value,\n      since this field is also reset on RESET_SYS. Position */
#define ESPI_MSVW07_1_MSVW09_DW0_MTOS_R_STATE_Msk (_UINT32_(0xF) << ESPI_MSVW07_1_MSVW09_DW0_MTOS_R_STATE_Pos) /* (ESPI_MSVW07_1_MSVW09_DW0) The four bits in this field are loaded into SRC0, SRC1, SRC2 and SRC3 when the reset signal selected by M2S RESET SRC is\n      asserted. If MTOS_SRC is set for RESET_SYS, the SRC bits are set to the default value of this field, rather than its programmed value,\n      since this field is also reset on RESET_SYS. Mask */
#define ESPI_MSVW07_1_MSVW09_DW0_MTOS_R_STATE(value) (ESPI_MSVW07_1_MSVW09_DW0_MTOS_R_STATE_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW09_DW0_MTOS_R_STATE_Pos)) /* Assigment of value for MTOS_R_STATE in the ESPI_MSVW07_1_MSVW09_DW0 register */
#define ESPI_MSVW07_1_MSVW09_DW0_Msk          _UINT32_(0x0000F3FF)                                 /* (ESPI_MSVW07_1_MSVW09_DW0) Register Mask  */


/* -------- ESPI_MSVW07_1_MSVW09_DW1 : (ESPI_MSVW07_1 Offset: 0x1C) (R/W 32) Master-to-Slave Virtual Wire 9 Register (DW 1) -------- */
#define ESPI_MSVW07_1_MSVW09_DW1_RESETVALUE   _UINT32_(0x4040404)                                  /*  (ESPI_MSVW07_1_MSVW09_DW1) Master-to-Slave Virtual Wire 9 Register (DW 1)  Reset Value */

#define ESPI_MSVW07_1_MSVW09_DW1_SRC0IRQ_SEL_Pos _UINT32_(0)                                          /* (ESPI_MSVW07_1_MSVW09_DW1) A change in the value of SRC0 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Position */
#define ESPI_MSVW07_1_MSVW09_DW1_SRC0IRQ_SEL_Msk (_UINT32_(0xF) << ESPI_MSVW07_1_MSVW09_DW1_SRC0IRQ_SEL_Pos) /* (ESPI_MSVW07_1_MSVW09_DW1) A change in the value of SRC0 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Mask */
#define ESPI_MSVW07_1_MSVW09_DW1_SRC0IRQ_SEL(value) (ESPI_MSVW07_1_MSVW09_DW1_SRC0IRQ_SEL_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW09_DW1_SRC0IRQ_SEL_Pos)) /* Assigment of value for SRC0IRQ_SEL in the ESPI_MSVW07_1_MSVW09_DW1 register */
#define ESPI_MSVW07_1_MSVW09_DW1_SRC1IRQ_SEL_Pos _UINT32_(8)                                          /* (ESPI_MSVW07_1_MSVW09_DW1) A change in the value of SRC1 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Position */
#define ESPI_MSVW07_1_MSVW09_DW1_SRC1IRQ_SEL_Msk (_UINT32_(0xF) << ESPI_MSVW07_1_MSVW09_DW1_SRC1IRQ_SEL_Pos) /* (ESPI_MSVW07_1_MSVW09_DW1) A change in the value of SRC1 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Mask */
#define ESPI_MSVW07_1_MSVW09_DW1_SRC1IRQ_SEL(value) (ESPI_MSVW07_1_MSVW09_DW1_SRC1IRQ_SEL_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW09_DW1_SRC1IRQ_SEL_Pos)) /* Assigment of value for SRC1IRQ_SEL in the ESPI_MSVW07_1_MSVW09_DW1 register */
#define ESPI_MSVW07_1_MSVW09_DW1_SRC2IRQ_SEL_Pos _UINT32_(16)                                         /* (ESPI_MSVW07_1_MSVW09_DW1) A change in the value of SRC2 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Position */
#define ESPI_MSVW07_1_MSVW09_DW1_SRC2IRQ_SEL_Msk (_UINT32_(0xF) << ESPI_MSVW07_1_MSVW09_DW1_SRC2IRQ_SEL_Pos) /* (ESPI_MSVW07_1_MSVW09_DW1) A change in the value of SRC2 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Mask */
#define ESPI_MSVW07_1_MSVW09_DW1_SRC2IRQ_SEL(value) (ESPI_MSVW07_1_MSVW09_DW1_SRC2IRQ_SEL_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW09_DW1_SRC2IRQ_SEL_Pos)) /* Assigment of value for SRC2IRQ_SEL in the ESPI_MSVW07_1_MSVW09_DW1 register */
#define ESPI_MSVW07_1_MSVW09_DW1_SRC3IRQ_SEL_Pos _UINT32_(24)                                         /* (ESPI_MSVW07_1_MSVW09_DW1) A change in the value of SRC3 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Position */
#define ESPI_MSVW07_1_MSVW09_DW1_SRC3IRQ_SEL_Msk (_UINT32_(0xF) << ESPI_MSVW07_1_MSVW09_DW1_SRC3IRQ_SEL_Pos) /* (ESPI_MSVW07_1_MSVW09_DW1) A change in the value of SRC3 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Mask */
#define ESPI_MSVW07_1_MSVW09_DW1_SRC3IRQ_SEL(value) (ESPI_MSVW07_1_MSVW09_DW1_SRC3IRQ_SEL_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW09_DW1_SRC3IRQ_SEL_Pos)) /* Assigment of value for SRC3IRQ_SEL in the ESPI_MSVW07_1_MSVW09_DW1 register */
#define ESPI_MSVW07_1_MSVW09_DW1_Msk          _UINT32_(0x0F0F0F0F)                                 /* (ESPI_MSVW07_1_MSVW09_DW1) Register Mask  */


/* -------- ESPI_MSVW07_1_MSVW09_DW2 : (ESPI_MSVW07_1 Offset: 0x20) (R/W 32) Master-to-Slave Virtual Wire 9 Register (DW 2) -------- */
#define ESPI_MSVW07_1_MSVW09_DW2_RESETVALUE   _UINT32_(0x00)                                       /*  (ESPI_MSVW07_1_MSVW09_DW2) Master-to-Slave Virtual Wire 9 Register (DW 2)  Reset Value */

#define ESPI_MSVW07_1_MSVW09_DW2_SRC0_Pos     _UINT32_(0)                                          /* (ESPI_MSVW07_1_MSVW09_DW2) Master-to-Slave data for Bit Position 0 for the virtual wire associated with the index defined by INDEX. Position */
#define ESPI_MSVW07_1_MSVW09_DW2_SRC0_Msk     (_UINT32_(0x1) << ESPI_MSVW07_1_MSVW09_DW2_SRC0_Pos) /* (ESPI_MSVW07_1_MSVW09_DW2) Master-to-Slave data for Bit Position 0 for the virtual wire associated with the index defined by INDEX. Mask */
#define ESPI_MSVW07_1_MSVW09_DW2_SRC0(value)  (ESPI_MSVW07_1_MSVW09_DW2_SRC0_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW09_DW2_SRC0_Pos)) /* Assigment of value for SRC0 in the ESPI_MSVW07_1_MSVW09_DW2 register */
#define ESPI_MSVW07_1_MSVW09_DW2_SRC1_Pos     _UINT32_(8)                                          /* (ESPI_MSVW07_1_MSVW09_DW2) Master-to-Slave data for Bit Position 1 for the virtual wire associated with the index defined by INDEX. Position */
#define ESPI_MSVW07_1_MSVW09_DW2_SRC1_Msk     (_UINT32_(0x1) << ESPI_MSVW07_1_MSVW09_DW2_SRC1_Pos) /* (ESPI_MSVW07_1_MSVW09_DW2) Master-to-Slave data for Bit Position 1 for the virtual wire associated with the index defined by INDEX. Mask */
#define ESPI_MSVW07_1_MSVW09_DW2_SRC1(value)  (ESPI_MSVW07_1_MSVW09_DW2_SRC1_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW09_DW2_SRC1_Pos)) /* Assigment of value for SRC1 in the ESPI_MSVW07_1_MSVW09_DW2 register */
#define ESPI_MSVW07_1_MSVW09_DW2_SRC2_Pos     _UINT32_(16)                                         /* (ESPI_MSVW07_1_MSVW09_DW2) Master-to-Slave data for Bit Position 2 for the virtual wire associated with the index defined by INDEX. Position */
#define ESPI_MSVW07_1_MSVW09_DW2_SRC2_Msk     (_UINT32_(0x1) << ESPI_MSVW07_1_MSVW09_DW2_SRC2_Pos) /* (ESPI_MSVW07_1_MSVW09_DW2) Master-to-Slave data for Bit Position 2 for the virtual wire associated with the index defined by INDEX. Mask */
#define ESPI_MSVW07_1_MSVW09_DW2_SRC2(value)  (ESPI_MSVW07_1_MSVW09_DW2_SRC2_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW09_DW2_SRC2_Pos)) /* Assigment of value for SRC2 in the ESPI_MSVW07_1_MSVW09_DW2 register */
#define ESPI_MSVW07_1_MSVW09_DW2_SRC3_Pos     _UINT32_(24)                                         /* (ESPI_MSVW07_1_MSVW09_DW2) Master-to-Slave data for Bit Position 3 for the virtual wire associated with the index defined by INDEX. Position */
#define ESPI_MSVW07_1_MSVW09_DW2_SRC3_Msk     (_UINT32_(0x1) << ESPI_MSVW07_1_MSVW09_DW2_SRC3_Pos) /* (ESPI_MSVW07_1_MSVW09_DW2) Master-to-Slave data for Bit Position 3 for the virtual wire associated with the index defined by INDEX. Mask */
#define ESPI_MSVW07_1_MSVW09_DW2_SRC3(value)  (ESPI_MSVW07_1_MSVW09_DW2_SRC3_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW09_DW2_SRC3_Pos)) /* Assigment of value for SRC3 in the ESPI_MSVW07_1_MSVW09_DW2 register */
#define ESPI_MSVW07_1_MSVW09_DW2_Msk          _UINT32_(0x01010101)                                 /* (ESPI_MSVW07_1_MSVW09_DW2) Register Mask  */

#define ESPI_MSVW07_1_MSVW09_DW2_SRC_Pos      _UINT32_(0)                                          /* (ESPI_MSVW07_1_MSVW09_DW2 Position) Master-to-Slave data for Bit Position 3 for the virtual wire associated with the index defined by INDEX. */
#define ESPI_MSVW07_1_MSVW09_DW2_SRC_Msk      (_UINT32_(0xF) << ESPI_MSVW07_1_MSVW09_DW2_SRC_Pos)  /* (ESPI_MSVW07_1_MSVW09_DW2 Mask) SRC */
#define ESPI_MSVW07_1_MSVW09_DW2_SRC(value)   (ESPI_MSVW07_1_MSVW09_DW2_SRC_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW09_DW2_SRC_Pos)) 

/* -------- ESPI_MSVW07_1_MSVW10_DW0 : (ESPI_MSVW07_1 Offset: 0x24) (R/W 32) Master-to-Slave Virtual Wire 10 Register (DW 0) -------- */
#define ESPI_MSVW07_1_MSVW10_DW0_RESETVALUE   _UINT32_(0x00)                                       /*  (ESPI_MSVW07_1_MSVW10_DW0) Master-to-Slave Virtual Wire 10 Register (DW 0)  Reset Value */

#define ESPI_MSVW07_1_MSVW10_DW0_IND_Pos      _UINT32_(0)                                          /* (ESPI_MSVW07_1_MSVW10_DW0) The Index for SRC0, SRC1, SRC2 and SRC3. When the Index field of an incoming Master-to-Slave Virtual Wire transaction\n      matches this value, the fields SRC0, SRC1, SRC2 and SRC3 are updated by the data contained in the respective bit positions in the\n      transaction. Setting the INDEX field to 0 disables the register from accepting any Virtual Wire traffic from the Master. Setting the\n      INDEX field to 1 is illegal, since INDEX=1 is reserved for Serial IRQ. Position */
#define ESPI_MSVW07_1_MSVW10_DW0_IND_Msk      (_UINT32_(0xFF) << ESPI_MSVW07_1_MSVW10_DW0_IND_Pos) /* (ESPI_MSVW07_1_MSVW10_DW0) The Index for SRC0, SRC1, SRC2 and SRC3. When the Index field of an incoming Master-to-Slave Virtual Wire transaction\n      matches this value, the fields SRC0, SRC1, SRC2 and SRC3 are updated by the data contained in the respective bit positions in the\n      transaction. Setting the INDEX field to 0 disables the register from accepting any Virtual Wire traffic from the Master. Setting the\n      INDEX field to 1 is illegal, since INDEX=1 is reserved for Serial IRQ. Mask */
#define ESPI_MSVW07_1_MSVW10_DW0_IND(value)   (ESPI_MSVW07_1_MSVW10_DW0_IND_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW10_DW0_IND_Pos)) /* Assigment of value for IND in the ESPI_MSVW07_1_MSVW10_DW0 register */
#define ESPI_MSVW07_1_MSVW10_DW0_MTOS_SRC_Pos _UINT32_(8)                                          /* (ESPI_MSVW07_1_MSVW10_DW0) This field determines which reset signal in addition to RESET_SYS resets SRC[3:0] in this register:\n      3=PLTRST\n      2=RESET_SIO\n      1=RESET_SYS. This is the only reset signal that will reset the SRC fields.\n      0=RESET_ESPI. Position */
#define ESPI_MSVW07_1_MSVW10_DW0_MTOS_SRC_Msk (_UINT32_(0x3) << ESPI_MSVW07_1_MSVW10_DW0_MTOS_SRC_Pos) /* (ESPI_MSVW07_1_MSVW10_DW0) This field determines which reset signal in addition to RESET_SYS resets SRC[3:0] in this register:\n      3=PLTRST\n      2=RESET_SIO\n      1=RESET_SYS. This is the only reset signal that will reset the SRC fields.\n      0=RESET_ESPI. Mask */
#define ESPI_MSVW07_1_MSVW10_DW0_MTOS_SRC(value) (ESPI_MSVW07_1_MSVW10_DW0_MTOS_SRC_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW10_DW0_MTOS_SRC_Pos)) /* Assigment of value for MTOS_SRC in the ESPI_MSVW07_1_MSVW10_DW0 register */
#define ESPI_MSVW07_1_MSVW10_DW0_MTOS_R_STATE_Pos _UINT32_(12)                                         /* (ESPI_MSVW07_1_MSVW10_DW0) The four bits in this field are loaded into SRC0, SRC1, SRC2 and SRC3 when the reset signal selected by M2S RESET SRC is\n      asserted. If MTOS_SRC is set for RESET_SYS, the SRC bits are set to the default value of this field, rather than its programmed value,\n      since this field is also reset on RESET_SYS. Position */
#define ESPI_MSVW07_1_MSVW10_DW0_MTOS_R_STATE_Msk (_UINT32_(0xF) << ESPI_MSVW07_1_MSVW10_DW0_MTOS_R_STATE_Pos) /* (ESPI_MSVW07_1_MSVW10_DW0) The four bits in this field are loaded into SRC0, SRC1, SRC2 and SRC3 when the reset signal selected by M2S RESET SRC is\n      asserted. If MTOS_SRC is set for RESET_SYS, the SRC bits are set to the default value of this field, rather than its programmed value,\n      since this field is also reset on RESET_SYS. Mask */
#define ESPI_MSVW07_1_MSVW10_DW0_MTOS_R_STATE(value) (ESPI_MSVW07_1_MSVW10_DW0_MTOS_R_STATE_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW10_DW0_MTOS_R_STATE_Pos)) /* Assigment of value for MTOS_R_STATE in the ESPI_MSVW07_1_MSVW10_DW0 register */
#define ESPI_MSVW07_1_MSVW10_DW0_Msk          _UINT32_(0x0000F3FF)                                 /* (ESPI_MSVW07_1_MSVW10_DW0) Register Mask  */


/* -------- ESPI_MSVW07_1_MSVW10_DW1 : (ESPI_MSVW07_1 Offset: 0x28) (R/W 32) Master-to-Slave Virtual Wire 10 Register (DW 1) -------- */
#define ESPI_MSVW07_1_MSVW10_DW1_RESETVALUE   _UINT32_(0x4040404)                                  /*  (ESPI_MSVW07_1_MSVW10_DW1) Master-to-Slave Virtual Wire 10 Register (DW 1)  Reset Value */

#define ESPI_MSVW07_1_MSVW10_DW1_SRC0IRQ_SEL_Pos _UINT32_(0)                                          /* (ESPI_MSVW07_1_MSVW10_DW1) A change in the value of SRC0 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Position */
#define ESPI_MSVW07_1_MSVW10_DW1_SRC0IRQ_SEL_Msk (_UINT32_(0xF) << ESPI_MSVW07_1_MSVW10_DW1_SRC0IRQ_SEL_Pos) /* (ESPI_MSVW07_1_MSVW10_DW1) A change in the value of SRC0 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Mask */
#define ESPI_MSVW07_1_MSVW10_DW1_SRC0IRQ_SEL(value) (ESPI_MSVW07_1_MSVW10_DW1_SRC0IRQ_SEL_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW10_DW1_SRC0IRQ_SEL_Pos)) /* Assigment of value for SRC0IRQ_SEL in the ESPI_MSVW07_1_MSVW10_DW1 register */
#define ESPI_MSVW07_1_MSVW10_DW1_SRC1IRQ_SEL_Pos _UINT32_(8)                                          /* (ESPI_MSVW07_1_MSVW10_DW1) A change in the value of SRC1 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Position */
#define ESPI_MSVW07_1_MSVW10_DW1_SRC1IRQ_SEL_Msk (_UINT32_(0xF) << ESPI_MSVW07_1_MSVW10_DW1_SRC1IRQ_SEL_Pos) /* (ESPI_MSVW07_1_MSVW10_DW1) A change in the value of SRC1 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Mask */
#define ESPI_MSVW07_1_MSVW10_DW1_SRC1IRQ_SEL(value) (ESPI_MSVW07_1_MSVW10_DW1_SRC1IRQ_SEL_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW10_DW1_SRC1IRQ_SEL_Pos)) /* Assigment of value for SRC1IRQ_SEL in the ESPI_MSVW07_1_MSVW10_DW1 register */
#define ESPI_MSVW07_1_MSVW10_DW1_SRC2IRQ_SEL_Pos _UINT32_(16)                                         /* (ESPI_MSVW07_1_MSVW10_DW1) A change in the value of SRC2 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Position */
#define ESPI_MSVW07_1_MSVW10_DW1_SRC2IRQ_SEL_Msk (_UINT32_(0xF) << ESPI_MSVW07_1_MSVW10_DW1_SRC2IRQ_SEL_Pos) /* (ESPI_MSVW07_1_MSVW10_DW1) A change in the value of SRC2 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Mask */
#define ESPI_MSVW07_1_MSVW10_DW1_SRC2IRQ_SEL(value) (ESPI_MSVW07_1_MSVW10_DW1_SRC2IRQ_SEL_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW10_DW1_SRC2IRQ_SEL_Pos)) /* Assigment of value for SRC2IRQ_SEL in the ESPI_MSVW07_1_MSVW10_DW1 register */
#define ESPI_MSVW07_1_MSVW10_DW1_SRC3IRQ_SEL_Pos _UINT32_(24)                                         /* (ESPI_MSVW07_1_MSVW10_DW1) A change in the value of SRC3 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Position */
#define ESPI_MSVW07_1_MSVW10_DW1_SRC3IRQ_SEL_Msk (_UINT32_(0xF) << ESPI_MSVW07_1_MSVW10_DW1_SRC3IRQ_SEL_Pos) /* (ESPI_MSVW07_1_MSVW10_DW1) A change in the value of SRC3 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Mask */
#define ESPI_MSVW07_1_MSVW10_DW1_SRC3IRQ_SEL(value) (ESPI_MSVW07_1_MSVW10_DW1_SRC3IRQ_SEL_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW10_DW1_SRC3IRQ_SEL_Pos)) /* Assigment of value for SRC3IRQ_SEL in the ESPI_MSVW07_1_MSVW10_DW1 register */
#define ESPI_MSVW07_1_MSVW10_DW1_Msk          _UINT32_(0x0F0F0F0F)                                 /* (ESPI_MSVW07_1_MSVW10_DW1) Register Mask  */


/* -------- ESPI_MSVW07_1_MSVW10_DW2 : (ESPI_MSVW07_1 Offset: 0x2C) (R/W 32) Master-to-Slave Virtual Wire 10 Register (DW 2) -------- */
#define ESPI_MSVW07_1_MSVW10_DW2_RESETVALUE   _UINT32_(0x00)                                       /*  (ESPI_MSVW07_1_MSVW10_DW2) Master-to-Slave Virtual Wire 10 Register (DW 2)  Reset Value */

#define ESPI_MSVW07_1_MSVW10_DW2_SRC0_Pos     _UINT32_(0)                                          /* (ESPI_MSVW07_1_MSVW10_DW2) Master-to-Slave data for Bit Position 0 for the virtual wire associated with the index defined by INDEX. Position */
#define ESPI_MSVW07_1_MSVW10_DW2_SRC0_Msk     (_UINT32_(0x1) << ESPI_MSVW07_1_MSVW10_DW2_SRC0_Pos) /* (ESPI_MSVW07_1_MSVW10_DW2) Master-to-Slave data for Bit Position 0 for the virtual wire associated with the index defined by INDEX. Mask */
#define ESPI_MSVW07_1_MSVW10_DW2_SRC0(value)  (ESPI_MSVW07_1_MSVW10_DW2_SRC0_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW10_DW2_SRC0_Pos)) /* Assigment of value for SRC0 in the ESPI_MSVW07_1_MSVW10_DW2 register */
#define ESPI_MSVW07_1_MSVW10_DW2_SRC1_Pos     _UINT32_(8)                                          /* (ESPI_MSVW07_1_MSVW10_DW2) Master-to-Slave data for Bit Position 1 for the virtual wire associated with the index defined by INDEX. Position */
#define ESPI_MSVW07_1_MSVW10_DW2_SRC1_Msk     (_UINT32_(0x1) << ESPI_MSVW07_1_MSVW10_DW2_SRC1_Pos) /* (ESPI_MSVW07_1_MSVW10_DW2) Master-to-Slave data for Bit Position 1 for the virtual wire associated with the index defined by INDEX. Mask */
#define ESPI_MSVW07_1_MSVW10_DW2_SRC1(value)  (ESPI_MSVW07_1_MSVW10_DW2_SRC1_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW10_DW2_SRC1_Pos)) /* Assigment of value for SRC1 in the ESPI_MSVW07_1_MSVW10_DW2 register */
#define ESPI_MSVW07_1_MSVW10_DW2_SRC2_Pos     _UINT32_(16)                                         /* (ESPI_MSVW07_1_MSVW10_DW2) Master-to-Slave data for Bit Position 2 for the virtual wire associated with the index defined by INDEX. Position */
#define ESPI_MSVW07_1_MSVW10_DW2_SRC2_Msk     (_UINT32_(0x1) << ESPI_MSVW07_1_MSVW10_DW2_SRC2_Pos) /* (ESPI_MSVW07_1_MSVW10_DW2) Master-to-Slave data for Bit Position 2 for the virtual wire associated with the index defined by INDEX. Mask */
#define ESPI_MSVW07_1_MSVW10_DW2_SRC2(value)  (ESPI_MSVW07_1_MSVW10_DW2_SRC2_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW10_DW2_SRC2_Pos)) /* Assigment of value for SRC2 in the ESPI_MSVW07_1_MSVW10_DW2 register */
#define ESPI_MSVW07_1_MSVW10_DW2_SRC3_Pos     _UINT32_(24)                                         /* (ESPI_MSVW07_1_MSVW10_DW2) Master-to-Slave data for Bit Position 3 for the virtual wire associated with the index defined by INDEX. Position */
#define ESPI_MSVW07_1_MSVW10_DW2_SRC3_Msk     (_UINT32_(0x1) << ESPI_MSVW07_1_MSVW10_DW2_SRC3_Pos) /* (ESPI_MSVW07_1_MSVW10_DW2) Master-to-Slave data for Bit Position 3 for the virtual wire associated with the index defined by INDEX. Mask */
#define ESPI_MSVW07_1_MSVW10_DW2_SRC3(value)  (ESPI_MSVW07_1_MSVW10_DW2_SRC3_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW10_DW2_SRC3_Pos)) /* Assigment of value for SRC3 in the ESPI_MSVW07_1_MSVW10_DW2 register */
#define ESPI_MSVW07_1_MSVW10_DW2_Msk          _UINT32_(0x01010101)                                 /* (ESPI_MSVW07_1_MSVW10_DW2) Register Mask  */

#define ESPI_MSVW07_1_MSVW10_DW2_SRC_Pos      _UINT32_(0)                                          /* (ESPI_MSVW07_1_MSVW10_DW2 Position) Master-to-Slave data for Bit Position 3 for the virtual wire associated with the index defined by INDEX. */
#define ESPI_MSVW07_1_MSVW10_DW2_SRC_Msk      (_UINT32_(0xF) << ESPI_MSVW07_1_MSVW10_DW2_SRC_Pos)  /* (ESPI_MSVW07_1_MSVW10_DW2 Mask) SRC */
#define ESPI_MSVW07_1_MSVW10_DW2_SRC(value)   (ESPI_MSVW07_1_MSVW10_DW2_SRC_Msk & (_UINT32_(value) << ESPI_MSVW07_1_MSVW10_DW2_SRC_Pos)) 

/** \brief ESPI_MSVW07_1 register offsets definitions */
#define ESPI_MSVW07_1_MSVW07_DW0_REG_OFST _UINT32_(0x00)      /* (ESPI_MSVW07_1_MSVW07_DW0) Master-to-Slave Virtual Wire 7 Register (DW 0) Offset */
#define ESPI_MSVW07_1_MSVW07_DW1_REG_OFST _UINT32_(0x04)      /* (ESPI_MSVW07_1_MSVW07_DW1) Master-to-Slave Virtual Wire 7 Register (DW 1) Offset */
#define ESPI_MSVW07_1_MSVW07_DW2_REG_OFST _UINT32_(0x08)      /* (ESPI_MSVW07_1_MSVW07_DW2) Master-to-Slave Virtual Wire 7 Register (DW 2) Offset */
#define ESPI_MSVW07_1_MSVW08_DW0_REG_OFST _UINT32_(0x0C)      /* (ESPI_MSVW07_1_MSVW08_DW0) Master-to-Slave Virtual Wire 8 Register (DW 0) Offset */
#define ESPI_MSVW07_1_MSVW08_DW1_REG_OFST _UINT32_(0x10)      /* (ESPI_MSVW07_1_MSVW08_DW1) Master-to-Slave Virtual Wire 8 Register (DW 1) Offset */
#define ESPI_MSVW07_1_MSVW08_DW2_REG_OFST _UINT32_(0x14)      /* (ESPI_MSVW07_1_MSVW08_DW2) Master-to-Slave Virtual Wire 8 Register (DW 2) Offset */
#define ESPI_MSVW07_1_MSVW09_DW0_REG_OFST _UINT32_(0x18)      /* (ESPI_MSVW07_1_MSVW09_DW0) Master-to-Slave Virtual Wire 9 Register (DW 0) Offset */
#define ESPI_MSVW07_1_MSVW09_DW1_REG_OFST _UINT32_(0x1C)      /* (ESPI_MSVW07_1_MSVW09_DW1) Master-to-Slave Virtual Wire 9 Register (DW 1) Offset */
#define ESPI_MSVW07_1_MSVW09_DW2_REG_OFST _UINT32_(0x20)      /* (ESPI_MSVW07_1_MSVW09_DW2) Master-to-Slave Virtual Wire 9 Register (DW 2) Offset */
#define ESPI_MSVW07_1_MSVW10_DW0_REG_OFST _UINT32_(0x24)      /* (ESPI_MSVW07_1_MSVW10_DW0) Master-to-Slave Virtual Wire 10 Register (DW 0) Offset */
#define ESPI_MSVW07_1_MSVW10_DW1_REG_OFST _UINT32_(0x28)      /* (ESPI_MSVW07_1_MSVW10_DW1) Master-to-Slave Virtual Wire 10 Register (DW 1) Offset */
#define ESPI_MSVW07_1_MSVW10_DW2_REG_OFST _UINT32_(0x2C)      /* (ESPI_MSVW07_1_MSVW10_DW2) Master-to-Slave Virtual Wire 10 Register (DW 2) Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief ESPI_MSVW07_1 register API structure */
typedef struct
{  /* The ESPI VW Channel permits the System to emulate a set of wires that interconnect the system Core Logic with the EC */
  __IO  uint32_t                       ESPI_MSVW07_1_MSVW07_DW0; /**< Offset: 0x00 (R/W  32) Master-to-Slave Virtual Wire 7 Register (DW 0) */
  __IO  uint32_t                       ESPI_MSVW07_1_MSVW07_DW1; /**< Offset: 0x04 (R/W  32) Master-to-Slave Virtual Wire 7 Register (DW 1) */
  __IO  uint32_t                       ESPI_MSVW07_1_MSVW07_DW2; /**< Offset: 0x08 (R/W  32) Master-to-Slave Virtual Wire 7 Register (DW 2) */
  __IO  uint32_t                       ESPI_MSVW07_1_MSVW08_DW0; /**< Offset: 0x0C (R/W  32) Master-to-Slave Virtual Wire 8 Register (DW 0) */
  __IO  uint32_t                       ESPI_MSVW07_1_MSVW08_DW1; /**< Offset: 0x10 (R/W  32) Master-to-Slave Virtual Wire 8 Register (DW 1) */
  __IO  uint32_t                       ESPI_MSVW07_1_MSVW08_DW2; /**< Offset: 0x14 (R/W  32) Master-to-Slave Virtual Wire 8 Register (DW 2) */
  __IO  uint32_t                       ESPI_MSVW07_1_MSVW09_DW0; /**< Offset: 0x18 (R/W  32) Master-to-Slave Virtual Wire 9 Register (DW 0) */
  __IO  uint32_t                       ESPI_MSVW07_1_MSVW09_DW1; /**< Offset: 0x1C (R/W  32) Master-to-Slave Virtual Wire 9 Register (DW 1) */
  __IO  uint32_t                       ESPI_MSVW07_1_MSVW09_DW2; /**< Offset: 0x20 (R/W  32) Master-to-Slave Virtual Wire 9 Register (DW 2) */
  __IO  uint32_t                       ESPI_MSVW07_1_MSVW10_DW0; /**< Offset: 0x24 (R/W  32) Master-to-Slave Virtual Wire 10 Register (DW 0) */
  __IO  uint32_t                       ESPI_MSVW07_1_MSVW10_DW1; /**< Offset: 0x28 (R/W  32) Master-to-Slave Virtual Wire 10 Register (DW 1) */
  __IO  uint32_t                       ESPI_MSVW07_1_MSVW10_DW2; /**< Offset: 0x2C (R/W  32) Master-to-Slave Virtual Wire 10 Register (DW 2) */
} espi_msvw07_1_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _0525SG12_ESPI_MSVW07_1_COMPONENT_H_ */
