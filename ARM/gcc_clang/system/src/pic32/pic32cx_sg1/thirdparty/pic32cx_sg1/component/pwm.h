/*
 * Component description for PWM
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
#ifndef _0525SG12_PWM_COMPONENT_H_
#define _0525SG12_PWM_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR PWM                                          */
/* ************************************************************************** */

/* -------- PWM_CNT_ON : (PWM Offset: 0x00) (R/W 32) This field determines both the frequency and duty cycle of the PWM signal. Setting this field to a value of n will\n    cause the On time of the PWM to be n+1 cycles of the PWM Clock Source.\n    When this field is set to zero and the PWMX_COUNTER_OFF_TIME is not set to zero, the PWM_OUTPUT is held low (Full Off). -------- */
#define PWM_CNT_ON_RESETVALUE                 _UINT32_(0x00)                                       /*  (PWM_CNT_ON) This field determines both the frequency and duty cycle of the PWM signal. Setting this field to a value of n will\n    cause the On time of the PWM to be n+1 cycles of the PWM Clock Source.\n    When this field is set to zero and the PWMX_COUNTER_OFF_TIME is not set to zero, the PWM_OUTPUT is held low (Full Off).  Reset Value */

#define PWM_CNT_ON_Msk                        _UINT32_(0x00000000)                                 /* (PWM_CNT_ON) Register Mask  */


/* -------- PWM_CNT_OFF : (PWM Offset: 0x04) (R/W 32) This field determine both the frequency and duty cycle of the PWM signal. Setting this field to a value of n will\n    cause the Off time of the PWM to be n+1 cycles of the PWM Clock Source.\n    When this field is set to zero, the PWM_OUTPUT is held high (Full On). -------- */
#define PWM_CNT_OFF_RESETVALUE                _UINT32_(0xFFFF)                                     /*  (PWM_CNT_OFF) This field determine both the frequency and duty cycle of the PWM signal. Setting this field to a value of n will\n    cause the Off time of the PWM to be n+1 cycles of the PWM Clock Source.\n    When this field is set to zero, the PWM_OUTPUT is held high (Full On).  Reset Value */

#define PWM_CNT_OFF_Msk                       _UINT32_(0x00000000)                                 /* (PWM_CNT_OFF) Register Mask  */


/* -------- PWM_CFG : (PWM Offset: 0x08) (R/W 32) PWMx CONFIGURATION REGISTER -------- */
#define PWM_CFG_RESETVALUE                    _UINT32_(0x00)                                       /*  (PWM_CFG) PWMx CONFIGURATION REGISTER  Reset Value */

#define PWM_CFG_PWM_EN_Pos                    _UINT32_(0)                                          /* (PWM_CFG) When the PWM_ENABLE is set to 0 the internal counters are reset and the internal state machine is set to the OFF state.\n     In addition, the PWM_OUTPUT signal is set to the inactive state as determined by the Invert bit. The PWMx Counter ON Time Register\n     and PWMx Counter OFF Time Register are not affected by the PWM_ENABLE bit and may be read and written while the PWM enable bit is 0.\n     1=Enabled (default); 0=Disabled (gates clocks to save power). Position */
#define PWM_CFG_PWM_EN_Msk                    (_UINT32_(0x1) << PWM_CFG_PWM_EN_Pos)                /* (PWM_CFG) When the PWM_ENABLE is set to 0 the internal counters are reset and the internal state machine is set to the OFF state.\n     In addition, the PWM_OUTPUT signal is set to the inactive state as determined by the Invert bit. The PWMx Counter ON Time Register\n     and PWMx Counter OFF Time Register are not affected by the PWM_ENABLE bit and may be read and written while the PWM enable bit is 0.\n     1=Enabled (default); 0=Disabled (gates clocks to save power). Mask */
#define PWM_CFG_PWM_EN(value)                 (PWM_CFG_PWM_EN_Msk & (_UINT32_(value) << PWM_CFG_PWM_EN_Pos)) /* Assigment of value for PWM_EN in the PWM_CFG register */
#define PWM_CFG_CLK_SEL_Pos                   _UINT32_(1)                                          /* (PWM_CFG) This bit determines the clock source used by the PWM duty cycle and frequency control logic.\n                  1=CLOCK_LOW\n                  0=CLOCK_HIGH Position */
#define PWM_CFG_CLK_SEL_Msk                   (_UINT32_(0x1) << PWM_CFG_CLK_SEL_Pos)               /* (PWM_CFG) This bit determines the clock source used by the PWM duty cycle and frequency control logic.\n                  1=CLOCK_LOW\n                  0=CLOCK_HIGH Mask */
#define PWM_CFG_CLK_SEL(value)                (PWM_CFG_CLK_SEL_Msk & (_UINT32_(value) << PWM_CFG_CLK_SEL_Pos)) /* Assigment of value for CLK_SEL in the PWM_CFG register */
#define PWM_CFG_INV_Pos                       _UINT32_(2)                                          /* (PWM_CFG) 1= PWM_OUTPUT ON State is active low; 0=PWM_OUTPUT ON State is active high. Position */
#define PWM_CFG_INV_Msk                       (_UINT32_(0x1) << PWM_CFG_INV_Pos)                   /* (PWM_CFG) 1= PWM_OUTPUT ON State is active low; 0=PWM_OUTPUT ON State is active high. Mask */
#define PWM_CFG_INV(value)                    (PWM_CFG_INV_Msk & (_UINT32_(value) << PWM_CFG_INV_Pos)) /* Assigment of value for INV in the PWM_CFG register */
#define PWM_CFG_CLK_PRE_DIV_Pos               _UINT32_(3)                                          /* (PWM_CFG) The Clock source for the 16-bit down counter (see PWMx Counter ON Time Register and PWMx Counter OFF Time Register)\n     is determined by bit D1 of this register. The Clock source is then divided by the value of Pre-Divider+1 and the resulting\n     signal determines the rate at which the down counter will be decremented. For example, a Pre-Divider value of 1 divides\n     the input clock by 2 and a value of 2 divides the input clock by 3. A Pre-Divider of 0 will disable the Pre-Divider option. Position */
#define PWM_CFG_CLK_PRE_DIV_Msk               (_UINT32_(0xF) << PWM_CFG_CLK_PRE_DIV_Pos)           /* (PWM_CFG) The Clock source for the 16-bit down counter (see PWMx Counter ON Time Register and PWMx Counter OFF Time Register)\n     is determined by bit D1 of this register. The Clock source is then divided by the value of Pre-Divider+1 and the resulting\n     signal determines the rate at which the down counter will be decremented. For example, a Pre-Divider value of 1 divides\n     the input clock by 2 and a value of 2 divides the input clock by 3. A Pre-Divider of 0 will disable the Pre-Divider option. Mask */
#define PWM_CFG_CLK_PRE_DIV(value)            (PWM_CFG_CLK_PRE_DIV_Msk & (_UINT32_(value) << PWM_CFG_CLK_PRE_DIV_Pos)) /* Assigment of value for CLK_PRE_DIV in the PWM_CFG register */
#define PWM_CFG_Msk                           _UINT32_(0x0000007F)                                 /* (PWM_CFG) Register Mask  */


/** \brief PWM register offsets definitions */
#define PWM_CNT_ON_REG_OFST            _UINT32_(0x00)      /* (PWM_CNT_ON) This field determines both the frequency and duty cycle of the PWM signal. Setting this field to a value of n will\n    cause the On time of the PWM to be n+1 cycles of the PWM Clock Source.\n    When this field is set to zero and the PWMX_COUNTER_OFF_TIME is not set to zero, the PWM_OUTPUT is held low (Full Off). Offset */
#define PWM_CNT_OFF_REG_OFST           _UINT32_(0x04)      /* (PWM_CNT_OFF) This field determine both the frequency and duty cycle of the PWM signal. Setting this field to a value of n will\n    cause the Off time of the PWM to be n+1 cycles of the PWM Clock Source.\n    When this field is set to zero, the PWM_OUTPUT is held high (Full On). Offset */
#define PWM_CFG_REG_OFST               _UINT32_(0x08)      /* (PWM_CFG) PWMx CONFIGURATION REGISTER Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief PWM register API structure */
typedef struct
{  /* The PWM block generates an arbitrary duty cycle output at frequencies from less than 0.1 Hz to 24 MHz */
  __IO  uint32_t                       PWM_CNT_ON;         /**< Offset: 0x00 (R/W  32) This field determines both the frequency and duty cycle of the PWM signal. Setting this field to a value of n will\n    cause the On time of the PWM to be n+1 cycles of the PWM Clock Source.\n    When this field is set to zero and the PWMX_COUNTER_OFF_TIME is not set to zero, the PWM_OUTPUT is held low (Full Off). */
  __IO  uint32_t                       PWM_CNT_OFF;        /**< Offset: 0x04 (R/W  32) This field determine both the frequency and duty cycle of the PWM signal. Setting this field to a value of n will\n    cause the Off time of the PWM to be n+1 cycles of the PWM Clock Source.\n    When this field is set to zero, the PWM_OUTPUT is held high (Full On). */
  __IO  uint32_t                       PWM_CFG;            /**< Offset: 0x08 (R/W  32) PWMx CONFIGURATION REGISTER */
} pwm_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _0525SG12_PWM_COMPONENT_H_ */
