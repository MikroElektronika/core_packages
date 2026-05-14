/*!
 * @file       startup_apm32f446.S
 *
 * @brief      APM32F446 Devices vector table for GCC based toolchains.
 *
 * @version     V1.0.0
 *
 * @date        2026-01-31
 *
 * @attention
 *
 *  Copyright (C) 2026 Geehy Semiconductor
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
  .cpu cortex-m4
  .fpu softvfp
  .thumb

.global  g_apm32_Vectors
.global  Default_Handler
.global  Reset_Handler

    .section  .text.Reset_Handler
  .weak  Reset_Handler
  .type  Reset_Handler, %function
// Reset handler routine
Reset_Handler:
    /* Mask interrupts */
    cpsid   i

    ldr     r1,=0
    ldr     r2,=0
    ldr     r3,=0
    ldr     r4,=0
    ldr     r5,=0
    ldr     r6,=0
    ldr     r7,=0
    mov     r8,r7
    mov     r9,r7
    mov     r10,r7
    mov     r11,r7
    mov     r12,r7
#ifdef START_FROM_FLASH
    /* Init ECC RAM */
    ldr r1, =__RAM_START
    ldr r2, =__RAM_END

    subs    r2, r1
    subs    r2, #1
    ble .LC1

    movs    r0, 0
    movs    r3, #4
.LC1:
    str r0, [r1]
    add r1, r1, r3
    subs r2, 4
    bge .LC2
.LC2:
#endif

  ldr   sp, =__StackTop

  ldr     r1, =0xE000ED08
  ldr     r2, =__ROM_VECTOR_START
  str     r2, [r1]

  bl  SystemInit
  bl  bss_data_init

  /* Unmask interrupts */
  cpsie   i

  bl  main
  bx  lr
.size  Reset_Handler, .-Reset_Handler

// This is the code that gets called when the processor receives an unexpected interrupt.
    .section  .text.Default_Handler,"ax",%progbits
    .weak Default_Handler
    .type Default_Handler, %function
Default_Handler:
Infinite_Loop:
  b  Infinite_Loop
  .size  Default_Handler, .-Default_Handler


// The minimal vector table for a Cortex M4.
   .section  .apm32_isr_vector,"a",%progbits
  .type  g_apm32_Vectors, %object
  .size  g_apm32_Vectors, .-g_apm32_Vectors

// Vector Table Mapped to Address 0 at Reset
g_apm32_Vectors:
    .long   _end_stack                                      /* Top of Stack */
    .long   Reset_Handler                                   /* Reset Handler */
    .long   NMI_Handler                                     /* NMI Handler*/
    .long   HardFault_Handler                               /* Hard Fault Handler*/
    .long   MemManage_Handler                               /* MPU Fault Handler*/
    .long   BusFault_Handler                                /* Bus Fault Handler*/
    .long   UsageFault_Handler                              /* Usage Fault Handler*/
    .long   0                                               /* Reserved*/
    .long   0                                               /* Reserved*/
    .long   0                                               /* Reserved*/
    .long   0                                               /* Reserved*/
    .long   SVC_Handler                                     /* SVCall Handler*/
    .long   DebugMon_Handler                                /* Debug Monitor Handler*/
    .long   0                                               /* Reserved*/
    .long   PendSV_Handler                                  /* PendSV Handler*/
    .long   SysTick_Handler                                 /* SysTick Handler*/

     /* External Interrupts*/
    .long   DMA0_IRQHandler                       /* DMA channel 0 transfer complete                 */
    .long   DMA1_IRQHandler                       /* DMA channel 1 transfer complete                 */
    .long   DMA2_IRQHandler                       /* DMA channel 2 transfer complete                 */
    .long   DMA3_IRQHandler                       /* DMA channel 3 transfer complete                 */
    .long   DMA4_IRQHandler                       /* DMA channel 4 transfer complete                 */
    .long   DMA5_IRQHandler                       /* DMA channel 5 transfer complete                 */
    .long   DMA6_IRQHandler                       /* DMA channel 6 transfer complete                 */
    .long   DMA7_IRQHandler                       /* DMA channel 7 transfer complete                 */
    .long   DMA8_IRQHandler                       /* DMA channel 8 transfer complete                 */
    .long   DMA9_IRQHandler                       /* DMA channel 9 transfer complete                 */
    .long   DMA10_IRQHandler                      /* DMA channel 10 transfer complete                */
    .long   DMA11_IRQHandler                      /* DMA channel 11 transfer complete                */
    .long   DMA12_IRQHandler                      /* DMA channel 12 transfer complete                */
    .long   DMA13_IRQHandler                      /* DMA channel 13 transfer complete                */
    .long   DMA14_IRQHandler                      /* DMA channel 14 transfer complete                */
    .long   DMA15_IRQHandler                      /* DMA channel 15 transfer complete                */
    .long   DMA_Error_IRQHandler                  /* DMA error interrupt channels 0-15               */
    .long   MC_IRQHandler                         /* FPU sources                                     */
    .long   FLASH_IRQHandler                      /* FLASH Command complete                          */
    .long   Read_Collision_IRQHandler             /* FLASH Read collision                            */
    .long   LVD_LVW_IRQHandler                    /* PMU Low voltage detect interrupt                */
    .long   FLASH_Fault_IRQHandler                /* FLASH Double bit fault detect                   */
    .long   WDT_EWDT_IRQHandler                   /* Single interrupt vector for WDT and EWDT        */
    .long   RMU_IRQHandler                        /* RMU Asynchronous Interrupt                      */
    .long   LPI2C_Master_IRQHandler               /* LPI2C Master Interrupt                          */
    .long   LPI2C_Slave_IRQHandler                /* LPI2C Slave Interrupt                           */
    .long   LPSPI0_IRQHandler                     /* LPSPI0 Interrupt                                */
    .long   LPSPI1_IRQHandler                     /* LPSPI1 Interrupt                                */
    .long   LPSPI2_IRQHandler                     /* LPSPI2 Interrupt                                */
    .long   Reserved45_IRQHandler                 /* Reserved Interrupt 45                           */
    .long   Reserved46_IRQHandler                 /* Reserved Interrupt 46                           */
    .long   LPUART0_RxTx_IRQHandler               /* LPUART0 Transmit / Receive Interrupt            */
    .long   Reserved48_IRQHandler                 /* Reserved Interrupt 48                           */
    .long   LPUART1_RxTx_IRQHandler               /* LPUART1 Transmit / Receive  Interrupt           */
    .long   Reserved50_IRQHandler                 /* Reserved Interrupt 50                           */
    .long   LPUART2_RxTx_IRQHandler               /* LPUART2 Transmit / Receive  Interrupt           */
    .long   Reserved52_IRQHandler                 /* Reserved Interrupt 52                           */
    .long   Reserved53_IRQHandler                 /* Reserved Interrupt 53                           */
    .long   Reserved54_IRQHandler                 /* Reserved Interrupt 54                           */
    .long   ADC0_IRQHandler                       /* ADC0 interrupt request.                         */
    .long   ADC1_IRQHandler                       /* ADC1 interrupt request.                         */
    .long   COMP_IRQHandler                       /* COMP interrupt request                          */
    .long   Reserved58_IRQHandler                 /* Reserved Interrupt 58                           */
    .long   Reserved59_IRQHandler                 /* Reserved Interrupt 59                           */
    .long   EREP_single_fault_IRQHandler          /* EREP single bit error correction                */
    .long   EREP_double_fault_IRQHandler          /* EREP double bit error non-correctable           */
    .long   RTC_IRQHandler                        /* RTC alarm interrupt                             */
    .long   RTC_Seconds_IRQHandler                /* RTC seconds interrupt                           */
    .long   LPITMR_Ch0_IRQHandler                 /* LPITMR channel 0 overflow interrupt             */
    .long   LPITMR_Ch1_IRQHandler                 /* LPITMR channel 1 overflow interrupt             */
    .long   LPITMR_Ch2_IRQHandler                 /* LPITMR channel 2 overflow interrupt             */
    .long   LPITMR_Ch3_IRQHandler                 /* LPITMR channel 3 overflow interrupt             */
    .long   PDU0_IRQHandler                       /* PDU0 interrupt                                  */
    .long   Reserved69_IRQHandler                 /* Reserved Interrupt 69                           */
    .long   Reserved70_IRQHandler                 /* Reserved Interrupt 70                           */
    .long   Reserved71_IRQHandler                 /* Reserved Interrupt 71                           */
    .long   Reserved72_IRQHandler                 /* Reserved Interrupt 72                           */
    .long   SCG_IRQHandler                        /* SCG bus interrupt request                       */
    .long   LPTMR_IRQHandler                      /* LPTMR interrupt request                         */
    .long   PMA_IRQHandler                        /* PM A pin detect interrupt                       */
    .long   PMB_IRQHandler                        /* PM B pin detect interrupt                       */
    .long   PMC_IRQHandler                        /* PM C pin detect interrupt                       */
    .long   PMD_IRQHandler                        /* PM D pin detect interrupt                       */
    .long   PME_IRQHandler                        /* PM E pin detect interrupt                       */
    .long   SWI_IRQHandler                        /* Software interrupt                              */
    .long   Reserved81_IRQHandler                 /* Reserved Interrupt 81                           */
    .long   Reserved82_IRQHandler                 /* Reserved Interrupt 82                           */
    .long   Reserved83_IRQHandler                 /* Reserved Interrupt 83                           */
    .long   PDU1_IRQHandler                       /* PDU1 interrupt                                  */
    .long   CFGIO_IRQHandler                      /* CFGIO Interrupt                                 */
    .long   Reserved86_IRQHandler                 /* Reserved Interrupt 86                           */
    .long   Reserved87_IRQHandler                 /* Reserved Interrupt 87                           */
    .long   Reserved88_IRQHandler                 /* Reserved Interrupt 88                           */
    .long   Reserved89_IRQHandler                 /* Reserved Interrupt 89                           */
    .long   Reserved90_IRQHandler                 /* Reserved Interrupt 90                           */
    .long   Reserved91_IRQHandler                 /* Reserved Interrupt 91                           */
    .long   Reserved92_IRQHandler                 /* Reserved Interrupt 92                           */
    .long   Reserved93_IRQHandler                 /* Reserved Interrupt 93                           */
    .long   CAN0_ORed_IRQHandler                  /* CAN0 ORedarning]                                */
    .long   CAN0_Error_IRQHandler                 /* CAN0 Interrupt indicating that errors were detected oon the CAN bus*/
    .long   CAN0_Wake_Up_IRQHandler               /* CAN0 Interrupt asserted when Pretended Networking opeeration is enabled, and a valid message matches the selected filter criteria during Low Power mode*/
    .long   CAN0_ORed_0_15_MB_IRQHandler          /* CAN0 ORed Message buffer (0-15)                 */
    .long   CAN0_ORed_16_31_MB_IRQHandler         /* CAN0 ORed Message buffer (16-31)                */
    .long   Reserved99_IRQHandler                 /* Reserved Interrupt 99                           */
    .long   Reserved100_IRQHandler                /* Reserved Interrupt 100                          */
    .long   CAN1_ORed_IRQHandler                  /* CAN1 ORedarning]                                */
    .long   CAN1_Error_IRQHandler                 /* CAN1 Interrupt indicating that errors were detected oon the CAN bus*/
    .long   Reserved103_IRQHandler                /* Reserved Interrupt 103                          */
    .long   CAN1_ORed_0_15_MB_IRQHandler          /* CAN1 ORed Interrupt for Message buffer (0-15)   */
    .long   CAN1_ORed_16_31_MB_IRQHandler         /* CAN1 ORed Interrupt for Message buffer (16-31)  */
    .long   Reserved106_IRQHandler                /* Reserved Interrupt 106                          */
    .long   Reserved107_IRQHandler                /* Reserved Interrupt 107                          */
    .long   CAN2_ORed_IRQHandler                  /* CAN2 ORedarning]                                */
    .long   CAN2_Error_IRQHandler                 /* CAN2 Interrupt indicating that errors were detected oon the CAN bus*/
    .long   Reserved110_IRQHandler                /* Reserved Interrupt 110                          */
    .long   CAN2_ORed_0_15_MB_IRQHandler          /* CAN2 ORed Message buffer (0-15)                 */
    .long   Reserved112_IRQHandler                /* Reserved Interrupt 112                          */
    .long   Reserved113_IRQHandler                /* Reserved Interrupt 113                          */
    .long   Reserved114_IRQHandler                /* Reserved Interrupt 114                          */
    .long   CFGTMR0_Ch0_Ch1_IRQHandler              /* CFGTMR0 Channel 0 and 1 interrupt             */
    .long   CFGTMR0_Ch2_Ch3_IRQHandler              /* CFGTMR0 Channel 2 and 3 interrupt             */
    .long   CFGTMR0_Ch4_Ch5_IRQHandler              /* CFGTMR0 Channel 4 and 5 interrupt             */
    .long   CFGTMR0_Ch6_Ch7_IRQHandler              /* CFGTMR0 Channel 6 and 7 interrupt             */
    .long   CFGTMR0_Fault_IRQHandler                /* CFGTMR0 Fault interrupt                       */
    .long   CFGTMR0_Ovf_Reload_IRQHandler           /* CFGTMR0 Counter overflow and Reload interrupt */
    .long   CFGTMR1_Ch0_Ch1_IRQHandler              /* CFGTMR1 Channel 0 and 1 interrupt             */
    .long   CFGTMR1_Ch2_Ch3_IRQHandler              /* CFGTMR1 Channel 2 and 3 interrupt             */
    .long   CFGTMR1_Ch4_Ch5_IRQHandler              /* CFGTMR1 Channel 4 and 5 interrupt             */
    .long   CFGTMR1_Ch6_Ch7_IRQHandler              /* CFGTMR1 Channel 6 and 7 interrupt             */
    .long   CFGTMR1_Fault_IRQHandler                /* CFGTMR1 Fault interrupt                       */
    .long   CFGTMR1_Ovf_Reload_IRQHandler           /* CFGTMR1 Counter overflow and Reload interrupt */
    .long   CFGTMR2_Ch0_Ch1_IRQHandler              /* CFGTMR2 Channel 0 and 1 interrupt             */
    .long   CFGTMR2_Ch2_Ch3_IRQHandler              /* CFGTMR2 Channel 2 and 3 interrupt             */
    .long   CFGTMR2_Ch4_Ch5_IRQHandler              /* CFGTMR2 Channel 4 and 5 interrupt             */
    .long   CFGTMR2_Ch6_Ch7_IRQHandler              /* CFGTMR2 Channel 6 and 7 interrupt             */
    .long   CFGTMR2_Fault_IRQHandler                /* CFGTMR2 Fault interrupt                       */
    .long   CFGTMR2_Ovf_Reload_IRQHandler           /* CFGTMR2 Counter overflow and Reload interrupt */
    .long   CFGTMR3_Ch0_Ch1_IRQHandler              /* CFGTMR3 Channel 0 and 1 interrupt             */
    .long   CFGTMR3_Ch2_Ch3_IRQHandler              /* CFGTMR3 Channel 2 and 3 interrupt             */
    .long   CFGTMR3_Ch4_Ch5_IRQHandler              /* CFGTMR3 Channel 4 and 5 interrupt             */
    .long   CFGTMR3_Ch6_Ch7_IRQHandler              /* CFGTMR3 Channel 6 and 7 interrupt             */
    .long   CFGTMR3_Fault_IRQHandler                /* CFGTMR3 Fault interrupt                       */
    .long   CFGTMR3_Ovf_Reload_IRQHandler           /* CFGTMR3 Counter overflow and Reload interrupt */
    .long   CFGTMR4_Ch0_Ch1_IRQHandler              /* CFGTMR4 Channel 0 and 1 interrupt             */
    .long   CFGTMR4_Ch2_Ch3_IRQHandler              /* CFGTMR4 Channel 2 and 3 interrupt             */
    .long   CFGTMR4_Ch4_Ch5_IRQHandler              /* CFGTMR4 Channel 4 and 5 interrupt             */
    .long   CFGTMR4_Ch6_Ch7_IRQHandler              /* CFGTMR4 Channel 6 and 7 interrupt             */
    .long   CFGTMR4_Fault_IRQHandler                /* CFGTMR4 Fault interrupt                       */
    .long   CFGTMR4_Ovf_Reload_IRQHandler           /* CFGTMR4 Counter overflow and Reload interrupt */
    .long   CFGTMR5_Ch0_Ch1_IRQHandler              /* CFGTMR5 Channel 0 and 1 interrupt             */
    .long   CFGTMR5_Ch2_Ch3_IRQHandler              /* CFGTMR5 Channel 2 and 3 interrupt             */
    .long   CFGTMR5_Ch4_Ch5_IRQHandler              /* CFGTMR5 Channel 4 and 5 interrupt             */
    .long   CFGTMR5_Ch6_Ch7_IRQHandler              /* CFGTMR5 Channel 6 and 7 interrupt             */
    .long   CFGTMR5_Fault_IRQHandler                /* CFGTMR5 Fault interrupt                       */
    .long   CFGTMR5_Ovf_Reload_IRQHandler           /* CFGTMR5 Counter overflow and Reload interrupt */
    .long   Default_Handler                                      /* 151*/
    .long   Default_Handler                                      /* 152*/
    .long   Default_Handler                                      /* 153*/
    .long   Default_Handler                                      /* 154*/
    .long   Default_Handler                                      /* 155*/
    .long   Default_Handler                                      /* 156*/
    .long   Default_Handler                                      /* 157*/
    .long   Default_Handler                                      /* 158*/
    .long   Default_Handler                                      /* 159*/
    .long   Default_Handler                                      /* 160*/
    .long   Default_Handler                                      /* 161*/
    .long   Default_Handler                                      /* 162*/
    .long   Default_Handler                                      /* 163*/
    .long   Default_Handler                                      /* 164*/
    .long   Default_Handler                                      /* 165*/
    .long   Default_Handler                                      /* 166*/
    .long   Default_Handler                                      /* 167*/
    .long   Default_Handler                                      /* 168*/
    .long   Default_Handler                                      /* 169*/
    .long   Default_Handler                                      /* 170*/
    .long   Default_Handler                                      /* 171*/
    .long   Default_Handler                                      /* 172*/
    .long   Default_Handler                                      /* 173*/
    .long   Default_Handler                                      /* 174*/
    .long   Default_Handler                                      /* 175*/
    .long   Default_Handler                                      /* 176*/
    .long   Default_Handler                                      /* 177*/
    .long   Default_Handler                                      /* 178*/
    .long   Default_Handler                                      /* 179*/
    .long   Default_Handler                                      /* 180*/
    .long   Default_Handler                                      /* 181*/
    .long   Default_Handler                                      /* 182*/
    .long   Default_Handler                                      /* 183*/
    .long   Default_Handler                                      /* 184*/
    .long   Default_Handler                                      /* 185*/
    .long   Default_Handler                                      /* 186*/
    .long   Default_Handler                                      /* 187*/
    .long   Default_Handler                                      /* 188*/
    .long   Default_Handler                                      /* 189*/
    .long   Default_Handler                                      /* 190*/
    .long   Default_Handler                                      /* 191*/
    .long   Default_Handler                                      /* 192*/
    .long   Default_Handler                                      /* 193*/
    .long   Default_Handler                                      /* 194*/
    .long   Default_Handler                                      /* 195*/
    .long   Default_Handler                                      /* 196*/
    .long   Default_Handler                                      /* 197*/
    .long   Default_Handler                                      /* 198*/
    .long   Default_Handler                                      /* 199*/
    .long   Default_Handler                                      /* 200*/
    .long   Default_Handler                                      /* 201*/
    .long   Default_Handler                                      /* 202*/
    .long   Default_Handler                                      /* 203*/
    .long   Default_Handler                                      /* 204*/
    .long   Default_Handler                                      /* 205*/
    .long   Default_Handler                                      /* 206*/
    .long   Default_Handler                                      /* 207*/
    .long   Default_Handler                                      /* 208*/
    .long   Default_Handler                                      /* 209*/
    .long   Default_Handler                                      /* 210*/
    .long   Default_Handler                                      /* 211*/
    .long   Default_Handler                                      /* 212*/
    .long   Default_Handler                                      /* 213*/
    .long   Default_Handler                                      /* 214*/
    .long   Default_Handler                                      /* 215*/
    .long   Default_Handler                                      /* 216*/
    .long   Default_Handler                                      /* 217*/
    .long   Default_Handler                                      /* 218*/
    .long   Default_Handler                                      /* 219*/
    .long   Default_Handler                                      /* 220*/
    .long   Default_Handler                                      /* 221*/
    .long   Default_Handler                                      /* 222*/
    .long   Default_Handler                                      /* 223*/
    .long   Default_Handler                                      /* 224*/
    .long   Default_Handler                                      /* 225*/
    .long   Default_Handler                                      /* 226*/
    .long   Default_Handler                                      /* 227*/
    .long   Default_Handler                                      /* 228*/
    .long   Default_Handler                                      /* 229*/
    .long   Default_Handler                                      /* 230*/
    .long   Default_Handler                                      /* 231*/
    .long   Default_Handler                                      /* 232*/
    .long   Default_Handler                                      /* 233*/
    .long   Default_Handler                                      /* 234*/
    .long   Default_Handler                                      /* 235*/
    .long   Default_Handler                                      /* 236*/
    .long   Default_Handler                                      /* 237*/
    .long   Default_Handler                                      /* 238*/
    .long   Default_Handler                                      /* 239*/
    .long   Default_Handler                                      /* 240*/
    .long   Default_Handler                                      /* 241*/
    .long   Default_Handler                                      /* 242*/
    .long   Default_Handler                                      /* 243*/
    .long   Default_Handler                                      /* 244*/
    .long   Default_Handler                                      /* 245*/
    .long   Default_Handler                                      /* 246*/
    .long   Default_Handler                                      /* 247*/
    .long   Default_Handler                                      /* 248*/
    .long   Default_Handler                                      /* 249*/
    .long   Default_Handler                                      /* 250*/
    .long   Default_Handler                                      /* 251*/
    .long   Default_Handler                                      /* 252*/
    .long   Default_Handler                                      /* 253*/
    .long   Default_Handler                                      /* 254*/
    .long   0xFFFFFFFF                                      /*  Reserved for user TRIM value*/

/* Flash Configuration */
    .section .FlashConfig, "a"
    .long 0xFFFFFFFF     /* 8 bytes backdoor comparison key           */
    .long 0xFFFFFFFF     /*                                           */
    .long 0xFFFFFFFF     /* 4 bytes program flash protection bytes    */
    .long 0xFFFFFFFE     /* DFPRO:EEPRO:NOPT:SEC(0xFE = unsecured) */

    .text
    .thumb


// Default exception/interrupt handler

   .weak      NMI_Handler
   .thumb_set NMI_Handler,Default_Handler

   .weak      HardFault_Handler
   .thumb_set HardFault_Handler,Default_Handler

   .weak      MemManage_Handler
   .thumb_set MemManage_Handler,Default_Handler

   .weak      BusFault_Handler
   .thumb_set BusFault_Handler,Default_Handler

   .weak      UsageFault_Handler
   .thumb_set UsageFault_Handler,Default_Handler

   .weak      SVC_Handler
   .thumb_set SVC_Handler,Default_Handler

   .weak      DebugMon_Handler
   .thumb_set DebugMon_Handler,Default_Handler

   .weak      PendSV_Handler
   .thumb_set PendSV_Handler,Default_Handler

   .weak      SysTick_Handler
   .thumb_set SysTick_Handler,Default_Handler

   .weak      DMA0_IRQHandler
   .thumb_set DMA0_IRQHandler,Default_Handler

   .weak      DMA1_IRQHandler
   .thumb_set DMA1_IRQHandler,Default_Handler

   .weak      DMA2_IRQHandler
   .thumb_set DMA2_IRQHandler,Default_Handler

   .weak      DMA3_IRQHandler
   .thumb_set DMA3_IRQHandler,Default_Handler

   .weak      DMA4_IRQHandler
   .thumb_set DMA4_IRQHandler,Default_Handler

   .weak      DMA5_IRQHandler
   .thumb_set DMA5_IRQHandler,Default_Handler

   .weak      DMA6_IRQHandler
   .thumb_set DMA6_IRQHandler,Default_Handler

   .weak      DMA7_IRQHandler
   .thumb_set DMA7_IRQHandler,Default_Handler

   .weak      DMA8_IRQHandler
   .thumb_set DMA8_IRQHandler,Default_Handler

   .weak      DMA9_IRQHandler
   .thumb_set DMA9_IRQHandler,Default_Handler

   .weak      DMA10_IRQHandler
   .thumb_set DMA10_IRQHandler,Default_Handler

   .weak      DMA11_IRQHandler
   .thumb_set DMA11_IRQHandler,Default_Handler

   .weak      DMA12_IRQHandler
   .thumb_set DMA12_IRQHandler,Default_Handler

   .weak      DMA13_IRQHandler
   .thumb_set DMA13_IRQHandler,Default_Handler

   .weak      DMA14_IRQHandler
   .thumb_set DMA14_IRQHandler,Default_Handler

   .weak      DMA15_IRQHandler
   .thumb_set DMA15_IRQHandler,Default_Handler

   .weak      DMA_Error_IRQHandler
   .thumb_set DMA_Error_IRQHandler,Default_Handler

   .weak      MC_IRQHandler
   .thumb_set MC_IRQHandler,Default_Handler

   .weak      FLASH_IRQHandler
   .thumb_set FLASH_IRQHandler,Default_Handler

   .weak      Read_Collision_IRQHandler
   .thumb_set Read_Collision_IRQHandler,Default_Handler

   .weak      LVD_LVW_IRQHandler
   .thumb_set LVD_LVW_IRQHandler,Default_Handler

   .weak      FLASH_Fault_IRQHandler
   .thumb_set FLASH_Fault_IRQHandler,Default_Handler

   .weak      WDT_EWDT_IRQHandler
   .thumb_set WDT_EWDT_IRQHandler,Default_Handler

   .weak      RMU_IRQHandler
   .thumb_set RMU_IRQHandler,Default_Handler

   .weak      LPI2C_Master_IRQHandler
   .thumb_set LPI2C_Master_IRQHandler,Default_Handler

   .weak      LPI2C_Slave_IRQHandler
   .thumb_set LPI2C_Slave_IRQHandler,Default_Handler

   .weak      LPSPI0_IRQHandler
   .thumb_set LPSPI0_IRQHandler,Default_Handler

   .weak      LPSPI1_IRQHandler
   .thumb_set LPSPI1_IRQHandler,Default_Handler

   .weak      LPSPI2_IRQHandler
   .thumb_set LPSPI2_IRQHandler,Default_Handler

   .weak      LPUART0_RxTx_IRQHandler
   .thumb_set LPUART0_RxTx_IRQHandler,Default_Handler

   .weak      LPUART1_RxTx_IRQHandler
   .thumb_set LPUART1_RxTx_IRQHandler,Default_Handler

   .weak      LPUART2_RxTx_IRQHandler
   .thumb_set LPUART2_RxTx_IRQHandler,Default_Handler

   .weak      ADC0_IRQHandler
   .thumb_set ADC0_IRQHandler,Default_Handler

   .weak      ADC1_IRQHandler
   .thumb_set ADC1_IRQHandler,Default_Handler

   .weak      COMP_IRQHandler
   .thumb_set COMP_IRQHandler,Default_Handler

   .weak      EREP_single_fault_IRQHandler
   .thumb_set EREP_single_fault_IRQHandler,Default_Handler

   .weak      EREP_double_fault_IRQHandler
   .thumb_set EREP_double_fault_IRQHandler,Default_Handler

   .weak      RTC_IRQHandler
   .thumb_set RTC_IRQHandler,Default_Handler

   .weak      RTC_Seconds_IRQHandler
   .thumb_set RTC_Seconds_IRQHandler,Default_Handler

   .weak      LPITMR_Ch0_IRQHandler
   .thumb_set LPITMR_Ch0_IRQHandler,Default_Handler

   .weak      LPITMR_Ch1_IRQHandler
   .thumb_set LPITMR_Ch1_IRQHandler,Default_Handler

   .weak      LPITMR_Ch2_IRQHandler
   .thumb_set LPITMR_Ch2_IRQHandler,Default_Handler

   .weak      LPITMR_Ch3_IRQHandler
   .thumb_set LPITMR_Ch3_IRQHandler,Default_Handler

   .weak      PDU0_IRQHandler
   .thumb_set PDU0_IRQHandler,Default_Handler

   .weak      SCG_IRQHandler
   .thumb_set SCG_IRQHandler,Default_Handler

   .weak      LPTMR_IRQHandler
   .thumb_set LPTMR_IRQHandler,Default_Handler

   .weak      PMA_IRQHandler
   .thumb_set PMA_IRQHandler,Default_Handler

   .weak      PMB_IRQHandler
   .thumb_set PMB_IRQHandler,Default_Handler

   .weak      PMC_IRQHandler
   .thumb_set PMC_IRQHandler,Default_Handler

   .weak      PMD_IRQHandler
   .thumb_set PMD_IRQHandler,Default_Handler

   .weak      PME_IRQHandler
   .thumb_set PME_IRQHandler,Default_Handler

   .weak      SWI_IRQHandler
   .thumb_set SWI_IRQHandler,Default_Handler

   .weak      PDU1_IRQHandler
   .thumb_set PDU1_IRQHandler,Default_Handler

   .weak      CFGIO_IRQHandler
   .thumb_set CFGIO_IRQHandler,Default_Handler

   .weak      CAN0_ORed_IRQHandler
   .thumb_set CAN0_ORed_IRQHandler,Default_Handler

   .weak      CAN0_Error_IRQHandler
   .thumb_set CAN0_Error_IRQHandler,Default_Handler

   .weak      CAN0_Wake_Up_IRQHandler
   .thumb_set CAN0_Wake_Up_IRQHandler,Default_Handler

   .weak      CAN0_ORed_0_15_MB_IRQHandler
   .thumb_set CAN0_ORed_0_15_MB_IRQHandler,Default_Handler

   .weak      CAN0_ORed_16_31_MB_IRQHandler
   .thumb_set CAN0_ORed_16_31_MB_IRQHandler,Default_Handler

   .weak      CAN1_ORed_IRQHandler
   .thumb_set CAN1_ORed_IRQHandler,Default_Handler

   .weak      CAN1_Error_IRQHandler
   .thumb_set CAN1_Error_IRQHandler,Default_Handler

   .weak      CAN1_ORed_0_15_MB_IRQHandler
   .thumb_set CAN1_ORed_0_15_MB_IRQHandler,Default_Handler

   .weak      CAN2_ORed_IRQHandler
   .thumb_set CAN2_ORed_IRQHandler,Default_Handler

   .weak      CAN2_Error_IRQHandler
   .thumb_set CAN2_Error_IRQHandler,Default_Handler

   .weak      CAN2_ORed_0_15_MB_IRQHandler
   .thumb_set CAN2_ORed_0_15_MB_IRQHandler,Default_Handler

   .weak      CFGTMR0_Ch0_Ch1_IRQHandler
   .thumb_set CFGTMR0_Ch0_Ch1_IRQHandler,Default_Handler

   .weak      CFGTMR0_Ch2_Ch3_IRQHandler
   .thumb_set CFGTMR0_Ch2_Ch3_IRQHandler,Default_Handler

   .weak      CFGTMR0_Ch4_Ch5_IRQHandler
   .thumb_set CFGTMR0_Ch4_Ch5_IRQHandler,Default_Handler

   .weak      CFGTMR0_Ch6_Ch7_IRQHandler
   .thumb_set CFGTMR0_Ch6_Ch7_IRQHandler,Default_Handler

   .weak      CFGTMR0_Fault_IRQHandler
   .thumb_set CFGTMR0_Fault_IRQHandler,Default_Handler

   .weak      CFGTMR0_Ovf_Reload_IRQHandler
   .thumb_set CFGTMR0_Ovf_Reload_IRQHandler,Default_Handler

   .weak      USART6_IRQHandler
   .thumb_set USART6_IRQHandler,Default_Handler

   .weak      CFGTMR1_Ch0_Ch1_IRQHandler
   .thumb_set CFGTMR1_Ch0_Ch1_IRQHandler,Default_Handler

   .weak      CFGTMR1_Ch2_Ch3_IRQHandler
   .thumb_set CFGTMR1_Ch2_Ch3_IRQHandler,Default_Handler

   .weak      CFGTMR1_Ch4_Ch5_IRQHandler
   .thumb_set CFGTMR1_Ch4_Ch5_IRQHandler,Default_Handler

   .weak      CFGTMR1_Ch6_Ch7_IRQHandler
   .thumb_set CFGTMR1_Ch6_Ch7_IRQHandler,Default_Handler

   .weak      CFGTMR1_Fault_IRQHandler
   .thumb_set CFGTMR1_Fault_IRQHandler,Default_Handler

   .weak      CFGTMR1_Ovf_Reload_IRQHandler
   .thumb_set CFGTMR1_Ovf_Reload_IRQHandler,Default_Handler

   .weak      CFGTMR2_Ch0_Ch1_IRQHandler
   .thumb_set CFGTMR2_Ch0_Ch1_IRQHandler,Default_Handler

   .weak      CFGTMR2_Ch2_Ch3_IRQHandler
   .thumb_set CFGTMR2_Ch2_Ch3_IRQHandler,Default_Handler

   .weak      CFGTMR2_Ch4_Ch5_IRQHandler
   .thumb_set CFGTMR2_Ch4_Ch5_IRQHandler,Default_Handler

   .weak      CFGTMR2_Ch6_Ch7_IRQHandler
   .thumb_set CFGTMR2_Ch6_Ch7_IRQHandler,Default_Handler

   .weak      CFGTMR2_Fault_IRQHandler
   .thumb_set CFGTMR2_Fault_IRQHandler,Default_Handler

   .weak      CFGTMR2_Ovf_Reload_IRQHandler
   .thumb_set CFGTMR2_Ovf_Reload_IRQHandler,Default_Handler

   .weak      CFGTMR3_Ch0_Ch1_IRQHandler
   .thumb_set CFGTMR3_Ch0_Ch1_IRQHandler,Default_Handler

   .weak      CFGTMR3_Ch2_Ch3_IRQHandler
   .thumb_set CFGTMR3_Ch2_Ch3_IRQHandler,Default_Handler

   .weak      CFGTMR3_Ch4_Ch5_IRQHandler
   .thumb_set CFGTMR3_Ch4_Ch5_IRQHandler,Default_Handler

   .weak      CFGTMR3_Ch6_Ch7_IRQHandler
   .thumb_set CFGTMR3_Ch6_Ch7_IRQHandler,Default_Handler

   .weak      CFGTMR3_Fault_IRQHandler
   .thumb_set CFGTMR3_Fault_IRQHandler,Default_Handler

   .weak      CFGTMR3_Ovf_Reload_IRQHandler
   .thumb_set CFGTMR3_Ovf_Reload_IRQHandler,Default_Handler

   .weak      CFGTMR4_Ch0_Ch1_IRQHandler
   .thumb_set CFGTMR4_Ch0_Ch1_IRQHandler,Default_Handler

   .weak      CFGTMR4_Ch2_Ch3_IRQHandler
   .thumb_set CFGTMR4_Ch2_Ch3_IRQHandler,Default_Handler

   .weak      CFGTMR4_Ch4_Ch5_IRQHandler
   .thumb_set CFGTMR4_Ch4_Ch5_IRQHandler,Default_Handler

   .weak      CFGTMR4_Ch6_Ch7_IRQHandler
   .thumb_set CFGTMR4_Ch6_Ch7_IRQHandler,Default_Handler

   .weak      CFGTMR4_Fault_IRQHandler
   .thumb_set CFGTMR4_Fault_IRQHandler,Default_Handler

   .weak      CFGTMR4_Ovf_Reload_IRQHandler
   .thumb_set CFGTMR4_Ovf_Reload_IRQHandler,Default_Handler

   .weak      CFGTMR5_Ch0_Ch1_IRQHandler
   .thumb_set CFGTMR5_Ch0_Ch1_IRQHandler,Default_Handler

   .weak      CFGTMR5_Ch2_Ch3_IRQHandler
   .thumb_set CFGTMR5_Ch2_Ch3_IRQHandler,Default_Handler

   .weak      CFGTMR5_Ch4_Ch5_IRQHandler
   .thumb_set CFGTMR5_Ch4_Ch5_IRQHandler,Default_Handler

   .weak      CFGTMR5_Ch6_Ch7_IRQHandler
   .thumb_set CFGTMR5_Ch6_Ch7_IRQHandler,Default_Handler

   .weak      CFGTMR5_Fault_IRQHandler
   .thumb_set CFGTMR5_Fault_IRQHandler,Default_Handler

   .weak      CFGTMR5_Ovf_Reload_IRQHandler
   .thumb_set CFGTMR5_Ovf_Reload_IRQHandler,Default_Handler

   .weak      Reserved45_IRQHandler
   .thumb_set Reserved45_IRQHandler,Default_Handler

   .weak      Reserved46_IRQHandler
   .thumb_set Reserved46_IRQHandler,Default_Handler

   .weak      Reserved48_IRQHandler
   .thumb_set Reserved48_IRQHandler,Default_Handler

   .weak      Reserved50_IRQHandler
   .thumb_set Reserved50_IRQHandler,Default_Handler

   .weak      Reserved52_IRQHandler
   .thumb_set Reserved52_IRQHandler,Default_Handler

   .weak      Reserved53_IRQHandler
   .thumb_set Reserved53_IRQHandler,Default_Handler

   .weak      Reserved54_IRQHandler
   .thumb_set Reserved54_IRQHandler,Default_Handler

   .weak      Reserved58_IRQHandler
   .thumb_set Reserved58_IRQHandler,Default_Handler

   .weak      Reserved59_IRQHandler
   .thumb_set Reserved59_IRQHandler,Default_Handler

   .weak      Reserved69_IRQHandler
   .thumb_set Reserved69_IRQHandler,Default_Handler

   .weak      Reserved70_IRQHandler
   .thumb_set Reserved70_IRQHandler,Default_Handler

   .weak      Reserved71_IRQHandler
   .thumb_set Reserved71_IRQHandler,Default_Handler

   .weak      Reserved72_IRQHandler
   .thumb_set Reserved72_IRQHandler,Default_Handler

   .weak      Reserved81_IRQHandler
   .thumb_set Reserved81_IRQHandler,Default_Handler

   .weak      Reserved82_IRQHandler
   .thumb_set Reserved82_IRQHandler,Default_Handler

   .weak      Reserved83_IRQHandler
   .thumb_set Reserved83_IRQHandler,Default_Handler

   .weak      Reserved86_IRQHandler
   .thumb_set Reserved86_IRQHandler,Default_Handler

   .weak      Reserved87_IRQHandler
   .thumb_set Reserved87_IRQHandler,Default_Handler

   .weak      Reserved88_IRQHandler
   .thumb_set Reserved88_IRQHandler,Default_Handler

   .weak      Reserved89_IRQHandler
   .thumb_set Reserved89_IRQHandler,Default_Handler

   .weak      Reserved90_IRQHandler
   .thumb_set Reserved90_IRQHandler,Default_Handler

   .weak      Reserved91_IRQHandler
   .thumb_set Reserved91_IRQHandler,Default_Handler

   .weak      Reserved92_IRQHandler
   .thumb_set Reserved92_IRQHandler,Default_Handler

   .weak      Reserved93_IRQHandler
   .thumb_set Reserved93_IRQHandler,Default_Handler

   .weak      Reserved99_IRQHandler
   .thumb_set Reserved99_IRQHandler,Default_Handler

   .weak      Reserved100_IRQHandler
   .thumb_set Reserved100_IRQHandler,Default_Handler

   .weak      Reserved_IRQHandler
   .thumb_set Reserved_IRQHandler,Default_Handler

   .weak      Reserved103_IRQHandler
   .thumb_set Reserved103_IRQHandler,Default_Handler

   .weak      CAN1_ORed_16_31_MB_IRQHandler
   .thumb_set CAN1_ORed_16_31_MB_IRQHandler,Default_Handler

   .weak      Reserved106_IRQHandler
   .thumb_set Reserved106_IRQHandler,Default_Handler

   .weak      Reserved107_IRQHandler
   .thumb_set Reserved107_IRQHandler,Default_Handler

   .weak      Reserved110_IRQHandler
   .thumb_set Reserved110_IRQHandler,Default_Handler

   .weak      Reserved112_IRQHandler
   .thumb_set Reserved112_IRQHandler,Default_Handler

   .weak      Reserved113_IRQHandler
   .thumb_set Reserved113_IRQHandler,Default_Handler

   .weak      Reserved114_IRQHandler
   .thumb_set Reserved114_IRQHandler,Default_Handler

    .end
