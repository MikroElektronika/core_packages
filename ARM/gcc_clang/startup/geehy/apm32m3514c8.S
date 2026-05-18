/*!
 * @file       startup_apm32m35xx.S
 *
 * @brief      CMSIS Cortex-M0 PLUS based Core Device Startup File for Device startup_apm32m35xx
 *
 * @version    V1.0.0
 *
 * @date       2024-05-30
 *
 * @attention
 *
 *  Copyright (C) 2024 Geehy Semiconductor
 *
 *  You may not use this file except in compliance with the
 *  GEEHY COPYRIGHT NOTICE (GEEHY SOFTWARE PACKAGE LICENSE).
 *
 *  The program is only for reference, which is distributed in the hope
 *  that it will be useful and instructional for customers to develop
 *  their software. Unless required by applicable law or agreed to in
 *  writing, the program is distributed on an "AS IS" BASIS, WITHOUT
 *  ANY WARRANTY OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the GEEHY SOFTWARE PACKAGE LICENSE for the governing permissions
 *  and limitations under the License.
 */

  .syntax unified
  .cpu cortex-m0plus
  .fpu softvfp
  .thumb

.global g_apm32_Vectors
.global Default_Handler

.word _start_address_init_data
.word _start_address_data
.word _end_address_data
.word _start_address_bss
.word _end_address_bss

  .section .text.Reset_Handler
  .weak Reset_Handler
  .type Reset_Handler, %function

// Reset handler routine
Reset_Handler:
// User Stack and Heap initialization
  ldr   r0, =_end_stack
  mov   sp, r0

  ldr r0, =_start_address_data
  ldr r1, =_end_address_data
  ldr r2, =_start_address_init_data
  movs r3, #0
  b L_loop0_0

L_loop0:
  ldr r4, [r2, r3]
  str r4, [r0, r3]
  adds r3, r3, #4

L_loop0_0:
  adds r4, r0, r3
  cmp r4, r1
  bcc L_loop0

  ldr r2, =_start_address_bss
  ldr r4, =_end_address_bss
  movs r3, #0
  b L_loop1

L_loop2:
  str  r3, [r2]
  adds r2, r2, #4

L_loop1:
  cmp r2, r4
  bcc L_loop2

  bl  SystemInit
  bl __libc_init_array
  bl main

L_loop3:
    b L_loop3

.size Reset_Handler, .-Reset_Handler

// This is the code that gets called when the processor receives an unexpected interrupt.
    .section .text.Default_Handler,"ax",%progbits
Default_Handler:
L_Loop_infinite:
  b L_Loop_infinite
  .size Default_Handler, .-Default_Handler

// The minimal vector table for a Cortex M0 Plus.
   .section .apm32_isr_vector,"a",%progbits
  .type g_apm32_Vectors, %object
  .size g_apm32_Vectors, .-g_apm32_Vectors

// Vector Table Mapped to Address 0 at Reset
g_apm32_Vectors:
  .word  _end_stack
  .word  Reset_Handler                      // Reset Handler
  .word  NMI_Handler                        // NMI Handler
  .word  HardFault_Handler                  // Hard Fault Handler
  .word  0                                  // Reserved
  .word  0                                  // Reserved
  .word  0                                  // Reserved
  .word  0                                  // Reserved
  .word  0                                  // Reserved
  .word  0                                  // Reserved
  .word  0                                  // Reserved
  .word  SVC_Handler                        // SVCall Handler
  .word  0                                  // Reserved
  .word  0                                  // Reserved
  .word  PendSV_Handler                     // PendSV Handler
  .word  SysTick_Handler                    // SysTick Handler

  // External Interrupts
  .word  WWDT_IRQHandler                    // Window Watchdog
  .word  PVD_IRQHandler                     // PVD through EINT Line detect
  .word  RTC_IRQHandler                     // RTC through EINT Line
  .word  FLASH_IRQHandler                   // FLASH
  .word  RCM_IRQHandler                     // RCM
  .word  EINT0_1_IRQHandler                 // EINT Line 0 and 1
  .word  EINT2_3_IRQHandler                 // EINT Line 2 and 3
  .word  EINT4_15_IRQHandler                // EINT Line 4 to 15
  .word  M0CP_IRQHandler                    // M0CP
  .word  DMA_CH1_IRQHandler                 // DMA Channel 1
  .word  DMA_CH2_3_IRQHandler               // DMA Channel 2 and Channel 3
  .word  DMA_CH4_7_IRQHandler               // DMA Channel 4 and Channel 7
  .word  ADC_COMP_IRQHandler                // ADC, COMP1 and COMP2
  .word  TMR1_BRK_UP_TRG_COM_IRQHandler     // TMR1 Break, Update, Trigger and Commutation
  .word  TMR1_CC_IRQHandler                 // TMR1 Capture Compare
  .word  TMR2_IRQHandler                    // TMR2
  .word  TMR3_IRQHandler                    // TMR3
  .word  TMR6_IRQHandler                    // TMR6
  .word  0                                  // Reserved
  .word  TMR4_IRQHandler                    // TMR4
  .word  TMR7_IRQHandler                    // TMR7
  .word  0                                  // Reserved
  .word  0                                  // Reserved
  .word  I2C_IRQHandler                     // I2C
  .word  0                                  // Reserved
  .word  SPI_IRQHandler                     // SPI
  .word  0                                  // Reserved
  .word  USART1_IRQHandler                  // USART1
  .word  USART2_IRQHandler                  // USART2
  .word  0                                  // Reserved
  .word  CAN_IRQHandler                     // CAN

  .word  0x010001b7                         // 000000
  .word  0x00008437                         // 000001
  .word  0xfff40413                         // 000002
  .word  0x00400073                         // 000003
  .word  0x0000185b                         // 000040
  .word  0x0000205b                         // 000041
  .word  0x0000285b                         // 000042
  .word  0x80005c5b                         // 000043
  .word  0x8000645b                         // 000044
  .word  0x80006c5b                         // 000045
  .word  0x0000405b                         // 000046
  .word  0x0000485b                         // 000047
  .word  0x0000505b                         // 000048
  .word  0x00400073                         // 000049
  .word  0x0000105b                         // 000080
  .word  0x9000005b                         // 000081
  .word  0x897200db                         // 000082
  .word  0x84fd815b                         // 000083
  .word  0x828881db                         // 000084
  .word  0x8145825b                         // 000085
  .word  0x80a302db                         // 000086
  .word  0x8051835b                         // 000087
  .word  0x802883db                         // 000088
  .word  0x8014845b                         // 000089
  .word  0x800a04db                         // 00008a
  .word  0x8005055b                         // 00008b
  .word  0x800285db                         // 00008c
  .word  0x8001865b                         // 00008d
  .word  0x800086db                         // 00008e
  .word  0x8000875b                         // 00008f
  .word  0x8000585b                         // 000090
  .word  0x8000605b                         // 000091
  .word  0x0000405b                         // 000092
  .word  0x0000485b                         // 000093
  .word  0x00400073                         // 000094
  .word  0x04050763                         // 0000c0
  .word  0x04060263                         // 0000c1
  .word  0x9000085b                         // 0000c2
  .word  0x897208db                         // 0000c3
  .word  0x84fd895b                         // 0000c4
  .word  0x828889db                         // 0000c5
  .word  0x81458a5b                         // 0000c6
  .word  0x80a30adb                         // 0000c7
  .word  0x80518b5b                         // 0000c8
  .word  0x80288bdb                         // 0000c9
  .word  0x80148c5b                         // 0000ca
  .word  0x800a0cdb                         // 0000cb
  .word  0x80050d5b                         // 0000cc
  .word  0x80028ddb                         // 0000cd
  .word  0x80018e5b                         // 0000ce
  .word  0x80008edb                         // 0000cf
  .word  0x80008f5b                         // 0000d0
  .word  0x00400073                         // 0000d1
  .word  0x00014681                         // 0000d2
  .word  0x0001a801                         // 0000d3
  .word  0x00064463                         // 0000d4
  .word  0xa0196691                         // 0000d5
  .word  0xffffc6b7                         // 0000d6
  .word  0x00010001                         // 0000d7
  .word  0x00010001                         // 0000d8
  .word  0x00010001                         // 0000d9
  .word  0x00010001                         // 0000da
  .word  0x00730001                         // 0000db
  .word  0x00000040                         // 0000dc
  .word  0x0000705b                         // 000100
  .word  0x00010001                         // 000101
  .word  0x00010001                         // 000102
  .word  0x00010001                         // 000103
  .word  0x00010001                         // 000104
  .word  0x00400073                         // 000105
  .word  0x0000305b                         // 000140
  .word  0x00010001                         // 000141
  .word  0x00010001                         // 000142
  .word  0x00010001                         // 000143
  .word  0x00400073                         // 000144
  .word  0x0000385b                         // 000180
  .word  0x00010001                         // 000181
  .word  0x00010001                         // 000182
  .word  0x00010001                         // 000183
  .word  0x00400073                         // 000184
  .word  0x08055d63                         // 0001c0
  .word  0x0001a073                         // 0001c1
  .word  0x04065563                         // 0001c2
  .word  0x9000085b                         // 0001c3
  .word  0x897208db                         // 0001c4
  .word  0x84fd895b                         // 0001c5
  .word  0x828889db                         // 0001c6
  .word  0x81458a5b                         // 0001c7
  .word  0x80a30adb                         // 0001c8
  .word  0x80518b5b                         // 0001c9
  .word  0x80288bdb                         // 0001ca
  .word  0x80148c5b                         // 0001cb
  .word  0x800a0cdb                         // 0001cc
  .word  0x80050d5b                         // 0001cd
  .word  0x80028ddb                         // 0001ce
  .word  0x80018e5b                         // 0001cf
  .word  0x80008edb                         // 0001d0
  .word  0x80008f5b                         // 0001d1
  .word  0x10738e81                         // 0001d2
  .word  0x00730000                         // 0001d3
  .word  0xce510040                         // 0001d4
  .word  0x9000085b                         // 0001d5
  .word  0x897208db                         // 0001d6
  .word  0x84fd895b                         // 0001d7
  .word  0x828889db                         // 0001d8
  .word  0x81458a5b                         // 0001d9
  .word  0x80a30adb                         // 0001da
  .word  0x80518b5b                         // 0001db
  .word  0x80288bdb                         // 0001dc
  .word  0x80148c5b                         // 0001dd
  .word  0x800a0cdb                         // 0001de
  .word  0x80050d5b                         // 0001df
  .word  0x80028ddb                         // 0001e0
  .word  0x80018e5b                         // 0001e1
  .word  0x80008edb                         // 0001e2
  .word  0x80008f5b                         // 0001e3
  .word  0x107396a2                         // 0001e4
  .word  0x00730000                         // 0001e5
  .word  0xce310040                         // 0001e6
  .word  0x085bc129                         // 0001e7
  .word  0x08db9000                         // 0001e8
  .word  0x895b8972                         // 0001e9
  .word  0x89db84fd                         // 0001ea
  .word  0x8a5b8288                         // 0001eb
  .word  0x0adb8145                         // 0001ec
  .word  0x8b5b80a3                         // 0001ed
  .word  0x8bdb8051                         // 0001ee
  .word  0x8c5b8028                         // 0001ef
  .word  0x0cdb8014                         // 0001f0
  .word  0x0d5b800a                         // 0001f1
  .word  0x8ddb8005                         // 0001f2
  .word  0x8e5b8002                         // 0001f3
  .word  0x8edb8001                         // 0001f4
  .word  0x8f5b8000                         // 0001f5
  .word  0x00738000                         // 0001f6
  .word  0x66910040                         // 0001f7
  .word  0x00064463                         // 0001f8
  .word  0x40d006b3                         // 0001f9
  .word  0x40d006b3                         // 0001fa
  .word  0x86a2a031                         // 0001fb
  .word  0x00001073                         // 0001fc
  .word  0x8e95a011                         // 0001fd
  .word  0x00400073                         // 0001fe

// Default exception/interrupt handler

  .weak      NMI_Handler
  .thumb_set NMI_Handler,Default_Handler

  .weak      HardFault_Handler
  .thumb_set HardFault_Handler,Default_Handler

  .weak      SVC_Handler
  .thumb_set SVC_Handler,Default_Handler

  .weak      PendSV_Handler
  .thumb_set PendSV_Handler,Default_Handler

  .weak      SysTick_Handler
  .thumb_set SysTick_Handler,Default_Handler

  .weak      WWDT_IRQHandler
  .thumb_set WWDT_IRQHandler,Default_Handler

  .weak      PVD_IRQHandler
  .thumb_set PVD_IRQHandler,Default_Handler

  .weak      RTC_IRQHandler
  .thumb_set RTC_IRQHandler,Default_Handler

  .weak      FLASH_IRQHandler
  .thumb_set FLASH_IRQHandler,Default_Handler

  .weak      RCM_IRQHandler
  .thumb_set RCM_IRQHandler,Default_Handler

  .weak      EINT0_1_IRQHandler
  .thumb_set EINT0_1_IRQHandler,Default_Handler

  .weak      EINT2_3_IRQHandler
  .thumb_set EINT2_3_IRQHandler,Default_Handler

  .weak      EINT4_15_IRQHandler
  .thumb_set EINT4_15_IRQHandler,Default_Handler

  .weak      M0CP_IRQHandler
  .thumb_set M0CP_IRQHandler,Default_Handler

  .weak      DMA_CH1_IRQHandler
  .thumb_set DMA_CH1_IRQHandler,Default_Handler

  .weak      DMA_CH2_3_IRQHandler
  .thumb_set DMA_CH2_3_IRQHandler,Default_Handler

  .weak      DMA_CH4_7_IRQHandler
  .thumb_set DMA_CH4_7_IRQHandler,Default_Handler

  .weak      ADC_COMP_IRQHandler
  .thumb_set ADC_COMP_IRQHandler,Default_Handler

  .weak      TMR1_BRK_UP_TRG_COM_IRQHandler
  .thumb_set TMR1_BRK_UP_TRG_COM_IRQHandler,Default_Handler

  .weak      TMR1_CC_IRQHandler
  .thumb_set TMR1_CC_IRQHandler,Default_Handler

  .weak      TMR2_IRQHandler
  .thumb_set TMR2_IRQHandler,Default_Handler

  .weak      TMR3_IRQHandler
  .thumb_set TMR3_IRQHandler,Default_Handler

  .weak      TMR6_IRQHandler
  .thumb_set TMR6_IRQHandler,Default_Handler

  .weak      TMR4_IRQHandler
  .thumb_set TMR4_IRQHandler,Default_Handler

  .weak      TMR7_IRQHandler
  .thumb_set TMR7_IRQHandler,Default_Handler

  .weak      I2C_IRQHandler
  .thumb_set I2C_IRQHandler,Default_Handler

  .weak      SPI_IRQHandler
  .thumb_set SPI_IRQHandler,Default_Handler

  .weak      USART1_IRQHandler
  .thumb_set USART1_IRQHandler,Default_Handler

  .weak      USART2_IRQHandler
  .thumb_set USART2_IRQHandler,Default_Handler

  .weak      CAN_IRQHandler
  .thumb_set CAN_IRQHandler,Default_Handler
