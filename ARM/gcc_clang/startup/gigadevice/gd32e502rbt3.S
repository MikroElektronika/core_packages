  .syntax unified
  .cpu cortex-m33
  .fpu softvfp
  .thumb

.global  Default_Handler

/* necessary symbols defined in linker script to initialize data */
.word  _sidata
.word  _sdata
.word  _edata
.word  _sbss
.word  _ebss

  .section  .text.Reset_Handler
  .weak  Reset_Handler
  .type  Reset_Handler, %function

/* reset Handler */
Reset_Handler:
                LDR     r0, =0x1FFFF7E0
                LDR     r2, [r0]
                LDR     r0, = 0xFFFF0000
                AND     r2, r2, r0
                LSR     r2, r2, #16
                LSL     r2, r2, #10
                LDR     r1, =0x20000000
                MOV     r0, #0x00
SRAM_INIT:
                STM     r1!, {r0}
                SUBS    r2, r2, #4
                CMP     r2, #0x00
                BNE     SRAM_INIT
  movs r1, #0
  b DataInit

CopyData:
  ldr r3, =_sidata
  ldr r3, [r3, r1]
  str r3, [r0, r1]
  adds r1, r1, #4

DataInit:
  ldr r0, =_sdata
  ldr r3, =_edata
  adds r2, r0, r1
  cmp r2, r3
  bcc CopyData
  ldr r2, =_sbss
  b Zerobss

FillZerobss:
  movs r3, #0
  str r3, [r2], #4

Zerobss:
  ldr r3, = _ebss
  cmp r2, r3
  bcc FillZerobss
/* Call SystemInit function */
  bl  SystemInit
/* Call static constructors */
  bl __libc_init_array
/*Call the main function */
  bl  main
  bx lr
.size  Reset_Handler, .-Reset_Handler

    .section .text.Default_Handler,"ax",%progbits
Default_Handler:
Infinite_Loop:
    b Infinite_Loop
    .size Default_Handler, .-Default_Handler

   .section  .vectors,"a",%progbits
   .global __gVectors

__gVectors:
                    .word _sp                                     /* Top of Stack */
                    .word Reset_Handler                           /* Reset Handler */
                    .word NMI_Handler                             /* NMI Handler */
                    .word HardFault_Handler                       /* Hard Fault Handler */
                    .word MemManage_Handler                       /* MPU Fault Handler */
                    .word BusFault_Handler                        /* Bus Fault Handler */
                    .word UsageFault_Handler                      /* Usage Fault Handler */
                    .word 0                                       /* Reserved */
                    .word 0                                       /* Reserved */
                    .word 0                                       /* Reserved */
                    .word 0                                       /* Reserved */
                    .word SVC_Handler                             /* SVCall Handler */
                    .word DebugMon_Handler                        /* Debug Monitor Handler */
                    .word 0                                       /* Reserved */
                    .word PendSV_Handler                          /* PendSV Handler */
                    .word SysTick_Handler                         /* SysTick Handler */

                    /* External interrupts handler */
                    .word WWDGT_IRQHandler                        /* Vector Number 16,Window Watchdog Timer */
                    .word LVD_IRQHandler                          /* Vector Number 17,LVD through EXTI Line detect */
                    .word 0                                       /* Vector Number 18,Reserved */
                    .word RTC_IRQHandler                          /* Vector Number 19,RTC */
                    .word FMC_IRQHandler                          /* Vector Number 20,FMC */
                    .word RCU_IRQHandler                          /* Vector Number 21,RCU */
                    .word EXTI0_IRQHandler                        /* Vector Number 22,EXTI Line 0 */
                    .word EXTI1_IRQHandler                        /* Vector Number 23,EXTI Line 1 */
                    .word EXTI2_IRQHandler                        /* Vector Number 24,EXTI Line 2 */
                    .word EXTI3_IRQHandler                        /* Vector Number 25,EXTI Line 3 */
                    .word EXTI4_IRQHandler                        /* Vector Number 26,EXTI Line 4 */
                    .word DMA0_Channel0_IRQHandler                /* Vector Number 27,DMA0 Channel0 */
                    .word DMA0_Channel1_IRQHandler                /* Vector Number 28,DMA0 Channel1 */
                    .word DMA0_Channel2_IRQHandler                /* Vector Number 29,DMA0 Channel2 */
                    .word DMA0_Channel3_IRQHandler                /* Vector Number 30,DMA0 Channel3 */
                    .word DMA0_Channel4_IRQHandler                /* Vector Number 31,DMA0 Channel4 */
                    .word DMA0_Channel5_IRQHandler                /* Vector Number 32,DMA0 Channel5 */
                    .word DMA0_Channel6_IRQHandler                /* Vector Number 33,DMA0 Channel6 */
                    .word ADC0_1_IRQHandler                       /* Vector Number 34,ADC0 and ADC1 */
                    .word CAN0_Message_IRQHandler                 /* Vector Number 35,CAN0 Interrupt for message buffer */
                    .word CAN0_Busoff_IRQHandler                  /* Vector Number 36,CAN0 Interrupt for bus off/bus off done */
                    .word CAN0_Error_IRQHandler                   /* Vector Number 37,CAN0 Interrupt for error */
                    .word CAN0_FastError_IRQHandler               /* Vector Number 38,CAN0 Interrupt for error in fast transmission */
                    .word CAN0_TEC_IRQHandler                     /* Vector Number 39,CAN0 Interrupt for transmit warning */
                    .word CAN0_REC_IRQHandler                     /* Vector Number 40,CAN0 Interrupt for receive warning */
                    .word CAN0_WKUP_IRQHandler                    /* Vector Number 41,CAN0 wakeup through EXTI Line detection interrupt */
                    .word TIMER0_BRK_UP_TRG_CMT_IRQHandler        /* Vector Number 42,TIMER0 Break Update Trigger and Commutation */
                    .word TIMER0_Channel_IRQHandler               /* Vector Number 43,TIMER0 Channel Capture Compare */
                    .word TIMER1_IRQHandler                       /* Vector Number 44,TIMER1 */
                    .word TIMER19_BRK_UP_TRG_CMT_IRQHandler       /* Vector Number 45,TIMER19 Break Update Trigger and Commutation */
                    .word TIMER19_Channel_IRQHandler              /* Vector Number 46,TIMER19 Channel Capture Compare */
                    .word I2C0_EV_IRQHandler                      /* Vector Number 47,I2C0 Event */
                    .word I2C0_ER_IRQHandler                      /* Vector Number 48,I2C0 Error */
                    .word I2C1_EV_IRQHandler                      /* Vector Number 49,I2C1 Event */
                    .word I2C1_ER_IRQHandler                      /* Vector Number 50,I2C1 Error */
                    .word SPI0_IRQHandler                         /* Vector Number 51,SPI0 */
                    .word SPI1_IRQHandler                         /* Vector Number 52,SPI1 */
                    .word USART0_IRQHandler                       /* Vector Number 53,USART0 */
                    .word USART1_IRQHandler                       /* Vector Number 54,USART1 */
                    .word USART2_IRQHandler                       /* Vector Number 55,USART2 */
                    .word EXTI10_15_IRQHandler                    /* Vector Number 56,EXTI Line10-15 */
                    .word EXTI5_9_IRQHandler                      /* Vector Number 57,EXTI Line5-9 */
                    .word TAMPER_IRQHandler                       /* Vector Number 58,BKP Tamper */
                    .word TIMER20_BRK_UP_TRG_CMT_IRQHandler       /* Vector Number 59,TIMER20 Break Update Trigger and Commutation */
                    .word TIMER20_Channel_IRQHandler              /* Vector Number 60,TIMER20 Channel Capture Compare */
                    .word TIMER7_BRK_UP_TRG_CMT_IRQHandler        /* Vector Number 61,TIMER7 Break Update Trigger and Commutation */
                    .word TIMER7_Channel_IRQHandler               /* Vector Number 62,TIMER7 Channel Capture Compare */
                    .word DMAMUX_IRQHandler                       /* Vector Number 63,DMANUX */
                    .word SRAMC_ECCSE_IRQHandler                  /* Vector Number 64,Syscfg interrupt(sramc eccse) */
                    .word CMP_IRQHandler                          /* Vector Number 65,CMP through EXTI Line */
                    .word 0                                       /* Vector Number 66,Reserved */
                    .word OVD_IRQHandler                          /* Vector Number 67,OVD */
                    .word 0                                       /* Vector Number 68,Reserved */
                    .word 0                                       /* Vector Number 69,Reserved */
                    .word TIMER5_DAC_IRQHandler                   /* Vector Number 70,TIMER5 and DAC */
                    .word TIMER6_IRQHandler                       /* Vector Number 71,TIMER6 */
                    .word DMA1_Channel0_IRQHandler                /* Vector Number 72,DMA1 Channel0 */
                    .word DMA1_Channel1_IRQHandler                /* Vector Number 73,DMA1 Channel1 */
                    .word DMA1_Channel2_IRQHandler                /* Vector Number 74,DMA1 Channel2 */
                    .word DMA1_Channel3_IRQHandler                /* Vector Number 75,DMA1 Channel3 */
                    .word DMA1_Channel4_IRQHandler                /* Vector Number 76,DMA1 Channel4 */
                    .word 0                                       /* Vector Number 77,Reserved */
                    .word CAN1_WKUP_IRQHandler                    /* Vector Number 78,CAN1 wakeup through EXTI Line detection interrupt */
                    .word CAN1_Message_IRQHandler                 /* Vector Number 79,CAN1 Interrupt for message buffer */
                    .word CAN1_Busoff_IRQHandler                  /* Vector Number 80,CAN1 Interrupt for bus off/bus off done */
                    .word CAN1_Error_IRQHandler                   /* Vector Number 81,CAN1 Interrupt for error */
                    .word CAN1_FastError_IRQHandler               /* Vector Number 82,CAN1 Interrupt for error in fast transmission */
                    .word CAN1_TEC_IRQHandler                     /* Vector Number 83,CAN1 Interrupt for transmit warning */
                    .word CAN1_REC_IRQHandler                     /* Vector Number 84,CAN1 Interrupt for receive warning */
                    .word FPU_IRQHandler                          /* Vector Number 85,FPU */
                    .word MFCOM_IRQHandler                        /* Vector Number 86,MFCOM */

  .size   __gVectors, . - __gVectors

  .weak NMI_Handler
  .thumb_set NMI_Handler,Default_Handler

  .weak HardFault_Handler
  .thumb_set HardFault_Handler,Default_Handler

  .weak MemManage_Handler
  .thumb_set MemManage_Handler,Default_Handler

  .weak BusFault_Handler
  .thumb_set BusFault_Handler,Default_Handler

  .weak UsageFault_Handler
  .thumb_set UsageFault_Handler,Default_Handler

  .weak SVC_Handler
  .thumb_set SVC_Handler,Default_Handler

  .weak DebugMon_Handler
  .thumb_set DebugMon_Handler,Default_Handler

  .weak PendSV_Handler
  .thumb_set PendSV_Handler,Default_Handler

  .weak SysTick_Handler
  .thumb_set SysTick_Handler,Default_Handler

  .weak WWDGT_IRQHandler
  .thumb_set WWDGT_IRQHandler,Default_Handler

  .weak LVD_IRQHandler
  .thumb_set LVD_IRQHandler,Default_Handler

  .weak RTC_IRQHandler
  .thumb_set RTC_IRQHandler,Default_Handler

  .weak FMC_IRQHandler
  .thumb_set FMC_IRQHandler,Default_Handler

  .weak RCU_IRQHandler
  .thumb_set RCU_IRQHandler,Default_Handler

  .weak EXTI0_IRQHandler
  .thumb_set EXTI0_IRQHandler,Default_Handler

  .weak EXTI1_IRQHandler
  .thumb_set EXTI1_IRQHandler,Default_Handler

  .weak EXTI2_IRQHandler
  .thumb_set EXTI2_IRQHandler,Default_Handler

  .weak EXTI3_IRQHandler
  .thumb_set EXTI3_IRQHandler,Default_Handler

  .weak EXTI4_IRQHandler
  .thumb_set EXTI4_IRQHandler,Default_Handler

  .weak DMA0_Channel0_IRQHandler
  .thumb_set DMA0_Channel0_IRQHandler,Default_Handler

  .weak DMA0_Channel1_IRQHandler
  .thumb_set DMA0_Channel1_IRQHandler,Default_Handler

  .weak DMA0_Channel2_IRQHandler
  .thumb_set DMA0_Channel2_IRQHandler,Default_Handler

  .weak DMA0_Channel3_IRQHandler
  .thumb_set DMA0_Channel3_IRQHandler,Default_Handler

  .weak DMA0_Channel4_IRQHandler
  .thumb_set DMA0_Channel4_IRQHandler,Default_Handler

  .weak DMA0_Channel5_IRQHandler
  .thumb_set DMA0_Channel5_IRQHandler,Default_Handler

  .weak DMA0_Channel6_IRQHandler
  .thumb_set DMA0_Channel6_IRQHandler,Default_Handler

  .weak ADC0_1_IRQHandler
  .thumb_set ADC0_1_IRQHandler,Default_Handler

  .weak CAN0_Message_IRQHandler
  .thumb_set CAN0_Message_IRQHandler,Default_Handler

  .weak CAN0_Busoff_IRQHandler
  .thumb_set CAN0_Busoff_IRQHandler,Default_Handler

  .weak CAN0_Error_IRQHandler
  .thumb_set CAN0_Error_IRQHandler,Default_Handler

  .weak CAN0_FastError_IRQHandler
  .thumb_set CAN0_FastError_IRQHandler,Default_Handler

  .weak CAN0_TEC_IRQHandler
  .thumb_set CAN0_TEC_IRQHandler,Default_Handler

  .weak CAN0_REC_IRQHandler
  .thumb_set CAN0_REC_IRQHandler,Default_Handler

  .weak CAN0_WKUP_IRQHandler
  .thumb_set CAN0_WKUP_IRQHandler,Default_Handler

  .weak TIMER0_BRK_UP_TRG_CMT_IRQHandler
  .thumb_set TIMER0_BRK_UP_TRG_CMT_IRQHandler,Default_Handler

  .weak TIMER0_Channel_IRQHandler
  .thumb_set TIMER0_Channel_IRQHandler,Default_Handler

  .weak TIMER1_IRQHandler
  .thumb_set TIMER1_IRQHandler,Default_Handler

  .weak TIMER19_BRK_UP_TRG_CMT_IRQHandler
  .thumb_set TIMER19_BRK_UP_TRG_CMT_IRQHandler,Default_Handler

  .weak TIMER19_Channel_IRQHandler
  .thumb_set TIMER19_Channel_IRQHandler,Default_Handler

  .weak I2C0_EV_IRQHandler
  .thumb_set I2C0_EV_IRQHandler,Default_Handler

  .weak I2C0_ER_IRQHandler
  .thumb_set I2C0_ER_IRQHandler,Default_Handler

  .weak I2C1_EV_IRQHandler
  .thumb_set I2C1_EV_IRQHandler,Default_Handler

  .weak I2C1_ER_IRQHandler
  .thumb_set I2C1_ER_IRQHandler,Default_Handler

  .weak SPI0_IRQHandler
  .thumb_set SPI0_IRQHandler,Default_Handler

  .weak SPI1_IRQHandler
  .thumb_set SPI1_IRQHandler,Default_Handler

  .weak USART0_IRQHandler
  .thumb_set USART0_IRQHandler,Default_Handler

  .weak USART1_IRQHandler
  .thumb_set USART1_IRQHandler,Default_Handler

  .weak USART2_IRQHandler
  .thumb_set USART2_IRQHandler,Default_Handler

  .weak EXTI10_15_IRQHandler
  .thumb_set EXTI10_15_IRQHandler,Default_Handler

  .weak EXTI5_9_IRQHandler
  .thumb_set EXTI5_9_IRQHandler,Default_Handler

  .weak TAMPER_IRQHandler
  .thumb_set TAMPER_IRQHandler,Default_Handler

  .weak TIMER20_BRK_UP_TRG_CMT_IRQHandler
  .thumb_set TIMER20_BRK_UP_TRG_CMT_IRQHandler,Default_Handler

  .weak TIMER20_Channel_IRQHandler
  .thumb_set TIMER20_Channel_IRQHandler,Default_Handler

  .weak TIMER7_BRK_UP_TRG_CMT_IRQHandler
  .thumb_set TIMER7_BRK_UP_TRG_CMT_IRQHandler,Default_Handler

  .weak TIMER7_Channel_IRQHandler
  .thumb_set TIMER7_Channel_IRQHandler,Default_Handler

  .weak DMAMUX_IRQHandler
  .thumb_set DMAMUX_IRQHandler,Default_Handler

  .weak SRAMC_ECCSE_IRQHandler
  .thumb_set SRAMC_ECCSE_IRQHandler,Default_Handler

  .weak CMP_IRQHandler
  .thumb_set CMP_IRQHandler,Default_Handler

  .weak OVD_IRQHandler
  .thumb_set OVD_IRQHandler,Default_Handler

  .weak TIMER5_DAC_IRQHandler
  .thumb_set TIMER5_DAC_IRQHandler,Default_Handler

  .weak TIMER6_IRQHandler
  .thumb_set TIMER6_IRQHandler,Default_Handler

  .weak DMA1_Channel0_IRQHandler
  .thumb_set DMA1_Channel0_IRQHandler,Default_Handler

  .weak DMA1_Channel1_IRQHandler
  .thumb_set DMA1_Channel1_IRQHandler,Default_Handler

  .weak DMA1_Channel2_IRQHandler
  .thumb_set DMA1_Channel2_IRQHandler,Default_Handler

  .weak DMA1_Channel3_IRQHandler
  .thumb_set DMA1_Channel3_IRQHandler,Default_Handler

  .weak DMA1_Channel4_IRQHandler
  .thumb_set DMA1_Channel4_IRQHandler,Default_Handler

  .weak CAN1_WKUP_IRQHandler
  .thumb_set CAN1_WKUP_IRQHandler,Default_Handler

  .weak CAN1_Message_IRQHandler
  .thumb_set CAN1_Message_IRQHandler,Default_Handler

  .weak CAN1_Busoff_IRQHandler
  .thumb_set CAN1_Busoff_IRQHandler,Default_Handler

  .weak CAN1_Error_IRQHandler
  .thumb_set CAN1_Error_IRQHandler,Default_Handler

  .weak CAN1_FastError_IRQHandler
  .thumb_set CAN1_FastError_IRQHandler,Default_Handler

  .weak CAN1_TEC_IRQHandler
  .thumb_set CAN1_TEC_IRQHandler,Default_Handler

  .weak CAN1_REC_IRQHandler
  .thumb_set CAN1_REC_IRQHandler,Default_Handler

  .weak FPU_IRQHandler
  .thumb_set FPU_IRQHandler,Default_Handler

  .weak MFCOM_IRQHandler
  .thumb_set MFCOM_IRQHandler,Default_Handler
