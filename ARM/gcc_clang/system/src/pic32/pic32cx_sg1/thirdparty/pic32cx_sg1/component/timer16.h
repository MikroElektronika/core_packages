/*
 * Component description for TIMER16
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
#ifndef _0525SG12_TIMER16_COMPONENT_H_
#define _0525SG12_TIMER16_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR TIMER16                                      */
/* ************************************************************************** */

/* -------- TIMER16_CNT : (TIMER16 Offset: 0x00) (R/W 32) This is the value of the Timer counter. This is updated by Hardware but may be set by Firmware. -------- */
#define TIMER16_CNT_RESETVALUE                _UINT32_(0x00)                                       /*  (TIMER16_CNT) This is the value of the Timer counter. This is updated by Hardware but may be set by Firmware.  Reset Value */

#define TIMER16_CNT_Msk                       _UINT32_(0x00000000)                                 /* (TIMER16_CNT) Register Mask  */


/* -------- TIMER16_PRLD : (TIMER16 Offset: 0x04) (R/W 32) This is the value of the Timer pre-load for the counter. This is used by H/W when the counter is to be restarted\n    automatically; this will become the new value of the counter upon restart. -------- */
#define TIMER16_PRLD_RESETVALUE               _UINT32_(0x00)                                       /*  (TIMER16_PRLD) This is the value of the Timer pre-load for the counter. This is used by H/W when the counter is to be restarted\n    automatically; this will become the new value of the counter upon restart.  Reset Value */

#define TIMER16_PRLD_Msk                      _UINT32_(0x00000000)                                 /* (TIMER16_PRLD) Register Mask  */


/* -------- TIMER16_STS : (TIMER16 Offset: 0x08) (R/W 32) This is the interrupt status that fires when the timer reaches its limit -------- */
#define TIMER16_STS_RESETVALUE                _UINT32_(0x00)                                       /*  (TIMER16_STS) This is the interrupt status that fires when the timer reaches its limit  Reset Value */

#define TIMER16_STS_EVT_INT_Pos               _UINT32_(0)                                          /* (TIMER16_STS) This is the interrupt status that fires when the timer reaches its limit. This is the interrupt status that fires when\n        the timer reaches its limit. This may be level or a self clearing signal cycle pulse, based on the AUTO_RESTART bit in the Timer\n        Control Register. If the timer is set to automatically restart, it will provide a pulse, otherwise a level is provided.(R/WC) Position */
#define TIMER16_STS_EVT_INT_Msk               (_UINT32_(0x1) << TIMER16_STS_EVT_INT_Pos)           /* (TIMER16_STS) This is the interrupt status that fires when the timer reaches its limit. This is the interrupt status that fires when\n        the timer reaches its limit. This may be level or a self clearing signal cycle pulse, based on the AUTO_RESTART bit in the Timer\n        Control Register. If the timer is set to automatically restart, it will provide a pulse, otherwise a level is provided.(R/WC) Mask */
#define TIMER16_STS_EVT_INT(value)            (TIMER16_STS_EVT_INT_Msk & (_UINT32_(value) << TIMER16_STS_EVT_INT_Pos)) /* Assigment of value for EVT_INT in the TIMER16_STS register */
#define TIMER16_STS_Msk                       _UINT32_(0x00000001)                                 /* (TIMER16_STS) Register Mask  */


/* -------- TIMER16_IEN : (TIMER16 Offset: 0x0C) (R/W 32) This is the interrupt enable for the status EVENT_INTERRUPT bit in the Timer Status Register -------- */
#define TIMER16_IEN_RESETVALUE                _UINT32_(0x00)                                       /*  (TIMER16_IEN) This is the interrupt enable for the status EVENT_INTERRUPT bit in the Timer Status Register  Reset Value */

#define TIMER16_IEN_EN_Pos                    _UINT32_(0)                                          /* (TIMER16_IEN) This is the interrupt enable for the status EVENT_INTERRUPT bit in the Timer Status Register. Position */
#define TIMER16_IEN_EN_Msk                    (_UINT32_(0x1) << TIMER16_IEN_EN_Pos)                /* (TIMER16_IEN) This is the interrupt enable for the status EVENT_INTERRUPT bit in the Timer Status Register. Mask */
#define TIMER16_IEN_EN(value)                 (TIMER16_IEN_EN_Msk & (_UINT32_(value) << TIMER16_IEN_EN_Pos)) /* Assigment of value for EN in the TIMER16_IEN register */
#define TIMER16_IEN_Msk                       _UINT32_(0x00000001)                                 /* (TIMER16_IEN) Register Mask  */


/* -------- TIMER16_CTRL : (TIMER16 Offset: 0x10) (R/W 32) Timer Control Register -------- */
#define TIMER16_CTRL_RESETVALUE               _UINT32_(0x00)                                       /*  (TIMER16_CTRL) Timer Control Register  Reset Value */

#define TIMER16_CTRL_EN_Pos                   _UINT32_(0)                                          /* (TIMER16_CTRL) This enables the block for operation. 1=This block will function normally;\n     0=This block will gate its clock and go into its lowest power state Position */
#define TIMER16_CTRL_EN_Msk                   (_UINT32_(0x1) << TIMER16_CTRL_EN_Pos)               /* (TIMER16_CTRL) This enables the block for operation. 1=This block will function normally;\n     0=This block will gate its clock and go into its lowest power state Mask */
#define TIMER16_CTRL_EN(value)                (TIMER16_CTRL_EN_Msk & (_UINT32_(value) << TIMER16_CTRL_EN_Pos)) /* Assigment of value for EN in the TIMER16_CTRL register */
#define TIMER16_CTRL_CNT_UP_Pos               _UINT32_(2)                                          /* (TIMER16_CTRL) This selects the counter direction. When the counter in incrementing the counter will saturate and trigger the event\n     when it reaches all F's. When the counter is decrementing the counter will saturate when it reaches 0h. 1=The counter will increment;\n     0=The counter will decrement Position */
#define TIMER16_CTRL_CNT_UP_Msk               (_UINT32_(0x1) << TIMER16_CTRL_CNT_UP_Pos)           /* (TIMER16_CTRL) This selects the counter direction. When the counter in incrementing the counter will saturate and trigger the event\n     when it reaches all F's. When the counter is decrementing the counter will saturate when it reaches 0h. 1=The counter will increment;\n     0=The counter will decrement Mask */
#define TIMER16_CTRL_CNT_UP(value)            (TIMER16_CTRL_CNT_UP_Msk & (_UINT32_(value) << TIMER16_CTRL_CNT_UP_Pos)) /* Assigment of value for CNT_UP in the TIMER16_CTRL register */
#define TIMER16_CTRL_AU_RESTRT_Pos            _UINT32_(3)                                          /* (TIMER16_CTRL) This will select the action taken upon completing a count.\n     1=The counter will automatically restart the count, using the contents of the Timer Preload Register to load the Timer Count Register.\n     The interrupt will be set in edge mode\n     0=The counter will simply enter a done state and wait for further control inputs. The interrupt will be set in level mode. Position */
#define TIMER16_CTRL_AU_RESTRT_Msk            (_UINT32_(0x1) << TIMER16_CTRL_AU_RESTRT_Pos)        /* (TIMER16_CTRL) This will select the action taken upon completing a count.\n     1=The counter will automatically restart the count, using the contents of the Timer Preload Register to load the Timer Count Register.\n     The interrupt will be set in edge mode\n     0=The counter will simply enter a done state and wait for further control inputs. The interrupt will be set in level mode. Mask */
#define TIMER16_CTRL_AU_RESTRT(value)         (TIMER16_CTRL_AU_RESTRT_Msk & (_UINT32_(value) << TIMER16_CTRL_AU_RESTRT_Pos)) /* Assigment of value for AU_RESTRT in the TIMER16_CTRL register */
#define TIMER16_CTRL_SFT_RST_Pos              _UINT32_(4)                                          /* (TIMER16_CTRL) This is a soft reset. This is self clearing 1 cycle after it is written. Firmware does not need\n     to wait before reconfiguring the Basic Timer following soft reset. Position */
#define TIMER16_CTRL_SFT_RST_Msk              (_UINT32_(0x1) << TIMER16_CTRL_SFT_RST_Pos)          /* (TIMER16_CTRL) This is a soft reset. This is self clearing 1 cycle after it is written. Firmware does not need\n     to wait before reconfiguring the Basic Timer following soft reset. Mask */
#define TIMER16_CTRL_SFT_RST(value)           (TIMER16_CTRL_SFT_RST_Msk & (_UINT32_(value) << TIMER16_CTRL_SFT_RST_Pos)) /* Assigment of value for SFT_RST in the TIMER16_CTRL register */
#define TIMER16_CTRL_STRT_Pos                 _UINT32_(5)                                          /* (TIMER16_CTRL) This bit triggers the timer counter. The counter will operate until it hits its terminating condition. This will\n     clear this bit. It should be noted that when operating in restart mode, there is no terminating condition for the counter, so\n     this bit will never clear. Clearing this bit will halt the timer counter. Position */
#define TIMER16_CTRL_STRT_Msk                 (_UINT32_(0x1) << TIMER16_CTRL_STRT_Pos)             /* (TIMER16_CTRL) This bit triggers the timer counter. The counter will operate until it hits its terminating condition. This will\n     clear this bit. It should be noted that when operating in restart mode, there is no terminating condition for the counter, so\n     this bit will never clear. Clearing this bit will halt the timer counter. Mask */
#define TIMER16_CTRL_STRT(value)              (TIMER16_CTRL_STRT_Msk & (_UINT32_(value) << TIMER16_CTRL_STRT_Pos)) /* Assigment of value for STRT in the TIMER16_CTRL register */
#define TIMER16_CTRL_RLD_Pos                  _UINT32_(6)                                          /* (TIMER16_CTRL) This bit reloads the counter without interrupting it operation. This will not function if the timer has already\n     completed (when the START bit in this register is '0'). This is used to periodically prevent the timer from firing when an\n     event occurs. Usage while the timer is off may result in erroneous behaviour. Position */
#define TIMER16_CTRL_RLD_Msk                  (_UINT32_(0x1) << TIMER16_CTRL_RLD_Pos)              /* (TIMER16_CTRL) This bit reloads the counter without interrupting it operation. This will not function if the timer has already\n     completed (when the START bit in this register is '0'). This is used to periodically prevent the timer from firing when an\n     event occurs. Usage while the timer is off may result in erroneous behaviour. Mask */
#define TIMER16_CTRL_RLD(value)               (TIMER16_CTRL_RLD_Msk & (_UINT32_(value) << TIMER16_CTRL_RLD_Pos)) /* Assigment of value for RLD in the TIMER16_CTRL register */
#define TIMER16_CTRL_HLT_Pos                  _UINT32_(7)                                          /* (TIMER16_CTRL) This is a halt bit. This will halt the timer as long as it is active. Once the halt is inactive, the timer will\n     start from where it left off. 1=Timer is halted. It stops counting. The clock divider will also be reset. 0=Timer runs normally. Position */
#define TIMER16_CTRL_HLT_Msk                  (_UINT32_(0x1) << TIMER16_CTRL_HLT_Pos)              /* (TIMER16_CTRL) This is a halt bit. This will halt the timer as long as it is active. Once the halt is inactive, the timer will\n     start from where it left off. 1=Timer is halted. It stops counting. The clock divider will also be reset. 0=Timer runs normally. Mask */
#define TIMER16_CTRL_HLT(value)               (TIMER16_CTRL_HLT_Msk & (_UINT32_(value) << TIMER16_CTRL_HLT_Pos)) /* Assigment of value for HLT in the TIMER16_CTRL register */
#define TIMER16_CTRL_PRESCALE_Pos             _UINT32_(16)                                         /* (TIMER16_CTRL) This is used to divide down the system clock through clock enables to lower the power consumption of the block and allow\n     slow timers. Updating this value during operation may result in erroneous clock enable pulses until the clock divider restarts.\n     The number of clocks per clock enable pulse is (Value + 1); a setting of 0 runs at the full clock speed, while a setting of 1\n     runs at half speed. Position */
#define TIMER16_CTRL_PRESCALE_Msk             (_UINT32_(0xFFFF) << TIMER16_CTRL_PRESCALE_Pos)      /* (TIMER16_CTRL) This is used to divide down the system clock through clock enables to lower the power consumption of the block and allow\n     slow timers. Updating this value during operation may result in erroneous clock enable pulses until the clock divider restarts.\n     The number of clocks per clock enable pulse is (Value + 1); a setting of 0 runs at the full clock speed, while a setting of 1\n     runs at half speed. Mask */
#define TIMER16_CTRL_PRESCALE(value)          (TIMER16_CTRL_PRESCALE_Msk & (_UINT32_(value) << TIMER16_CTRL_PRESCALE_Pos)) /* Assigment of value for PRESCALE in the TIMER16_CTRL register */
#define TIMER16_CTRL_Msk                      _UINT32_(0xFFFF00FD)                                 /* (TIMER16_CTRL) Register Mask  */


/** \brief TIMER16 register offsets definitions */
#define TIMER16_CNT_REG_OFST           _UINT32_(0x00)      /* (TIMER16_CNT) This is the value of the Timer counter. This is updated by Hardware but may be set by Firmware. Offset */
#define TIMER16_PRLD_REG_OFST          _UINT32_(0x04)      /* (TIMER16_PRLD) This is the value of the Timer pre-load for the counter. This is used by H/W when the counter is to be restarted\n    automatically; this will become the new value of the counter upon restart. Offset */
#define TIMER16_STS_REG_OFST           _UINT32_(0x08)      /* (TIMER16_STS) This is the interrupt status that fires when the timer reaches its limit Offset */
#define TIMER16_IEN_REG_OFST           _UINT32_(0x0C)      /* (TIMER16_IEN) This is the interrupt enable for the status EVENT_INTERRUPT bit in the Timer Status Register Offset */
#define TIMER16_CTRL_REG_OFST          _UINT32_(0x10)      /* (TIMER16_CTRL) Timer Control Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief TIMER16 register API structure */
typedef struct
{  /* This 16-bit timer block offers a simple mechanism for firmware to maintain a time base */
  __IO  uint32_t                       TIMER16_CNT;        /**< Offset: 0x00 (R/W  32) This is the value of the Timer counter. This is updated by Hardware but may be set by Firmware. */
  __IO  uint32_t                       TIMER16_PRLD;       /**< Offset: 0x04 (R/W  32) This is the value of the Timer pre-load for the counter. This is used by H/W when the counter is to be restarted\n    automatically; this will become the new value of the counter upon restart. */
  __IO  uint32_t                       TIMER16_STS;        /**< Offset: 0x08 (R/W  32) This is the interrupt status that fires when the timer reaches its limit */
  __IO  uint32_t                       TIMER16_IEN;        /**< Offset: 0x0C (R/W  32) This is the interrupt enable for the status EVENT_INTERRUPT bit in the Timer Status Register */
  __IO  uint32_t                       TIMER16_CTRL;       /**< Offset: 0x10 (R/W  32) Timer Control Register */
} timer16_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _0525SG12_TIMER16_COMPONENT_H_ */
