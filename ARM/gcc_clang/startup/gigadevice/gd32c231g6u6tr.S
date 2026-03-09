  .syntax unified
  .cpu cortex-m23
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
    LDR     r0, =0x1FFF0BE0
    LDR     r2, [r0]
    LDR     r0, = 0xFFFF0000
    ANDS    r2, r2, r0
    LSRS    r2, r2, #16
    LSLS    r2, r2, #10
    LDR     r1, =0x20000000
    MOVS     r0, #0x0
SRAM_INIT:
    STM     r1!, {r0}
    SUBS    r2, r2, #4
    CMP     r2, #0x00
    BNE     SRAM_INIT

    ldr   r0, =_sp
    mov   sp, r0
/* copy the data segment into ram */
    movs  r1, #0
    b  LoopCopyDataInit

CopyDataInit:
    ldr  r3, =_sidata
    ldr  r3, [r3, r1]
    str  r3, [r0, r1]
    adds  r1, r1, #4

LoopCopyDataInit:
    ldr  r0, =_sdata
    ldr  r3, =_edata
    adds  r2, r0, r1
    cmp  r2, r3
    bcc  CopyDataInit
    ldr  r2, =_sbss
    b  LoopFillZerobss

FillZerobss:
    movs  r3, #0
    str  r3, [r2]
    adds r2, r2, #4

LoopFillZerobss:
    ldr  r3, = _ebss
    cmp  r2, r3
    bcc  FillZerobss

/* Call SystemInit function */
    bl  SystemInit
/* Call static constructors */
    bl __libc_init_array
/*Call the main function */
    bl  main

.size  Reset_Handler, .-Reset_Handler

.section  .text.Default_Handler,"ax",%progbits

Default_Handler:
Infinite_Loop:
    b  Infinite_Loop
    .size  Default_Handler, .-Default_Handler

   .section  .vectors,"a",%progbits
   .global __gVectors

__gVectors:
                    .word _sp                                     /* Top of Stack */
                    .word Reset_Handler                           /* Reset Handler */
                    .word NMI_Handler                             /* NMI Handler */
                    .word HardFault_Handler                       /* Hard Fault Handler */
                    .word 0                                       /* Reserved */
                    .word 0                                       /* Reserved */
                    .word 0                                       /* Reserved */
                    .word 0                                       /* Reserved */
                    .word 0                                       /* Reserved */
                    .word 0                                       /* Reserved */
                    .word 0                                       /* Reserved */
                    .word SVC_Handler                             /* SVCall Handler */
                    .word 0                                       /* Reserved */
                    .word 0                                       /* Reserved */
                    .word PendSV_Handler                          /* PendSV Handler */
                    .word SysTick_Handler                         /* SysTick Handler */

                    /* External interrupts handler */
                    .word WWDGT_IRQHandler                        /* Vector Number 16,Window Watchdog Timer */
                    .word 0                                       /* Vector Number 17,Reserved */
                    .word RTC_IRQHandler                          /* Vector Number 18,RTC global interrupt */
                    .word FMC_IRQHandler                          /* Vector Number 19,FMC global interrupt */
                    .word RCU_IRQHandler                          /* Vector Number 20,RCU global interrupt */
                    .word EXTI0_IRQHandler                        /* Vector Number 21,EXTI Line 0 */
                    .word EXTI1_IRQHandler                        /* Vector Number 22,EXTI Line 1 */
                    .word EXTI2_IRQHandler                        /* Vector Number 23,EXTI Line 2 */
                    .word EXTI3_IRQHandler                        /* Vector Number 24,EXTI Line 3 */
                    .word EXTI4_IRQHandler                        /* Vector Number 25,EXTI Line 4 */
                    .word DMA_Channel0_IRQHandler                 /* Vector Number 26,DMA Channel 0 */
                    .word DMA_Channel1_IRQHandler                 /* Vector Number 27,DMA Channel 1 */
                    .word DMA_Channel2_IRQHandler                 /* Vector Number 28,DMA Channel 2 */
                    .word ADC_IRQHandler                          /* Vector Number 29,ADC interrupt */
                    .word USART0_IRQHandler                       /* Vector Number 30,USART0 */
                    .word USART1_IRQHandler                       /* Vector Number 31,USART1 */
                    .word USART2_IRQHandler                       /* Vector Number 32,USART1 */
                    .word I2C0_EV_IRQHandler                      /* Vector Number 33,I2C0 Event */
                    .word I2C0_ER_IRQHandler                      /* Vector Number 34,I2C0 Error */
                    .word 0                                       /* Vector Number 35,Reserved */
                    .word 0                                       /* Vector Number 36,Reserved */
                    .word SPI0_IRQHandler                         /* Vector Number 37,SPI0 */
                    .word 0                                       /* Vector Number 38,Reserved */
                    .word RTC_Alarm_IRQHandler                    /* Vector Number 39,RTC Alarm through EXTI Line detect */
                    .word EXTI5_9_IRQHandler                      /* Vector Number 40,EXTI5 to EXTI9 */
                    .word TIMER0_TRG_CMT_UP_BRK_IRQHandler        /* Vector Number 41,TIMER0 Trigger, Communication, Up2026-03-02 and Break */
                    .word TIMER0_Channel_IRQHandler               /* Vector Number 42,TIMER0 Channel Capture Compare */
                    .word TIMER2_IRQHandler                       /* Vector Number 43,TIMER2 */
                    .word TIMER13_IRQHandler                      /* Vector Number 44,TIMER13 */
                    .word TIMER15_IRQHandler                      /* Vector Number 45,TIMER15 */
                    .word TIMER16_IRQHandler                      /* Vector Number 46,TIMER16 */
                    .word EXTI10_15_IRQHandler                    /* Vector Number 47,EXTI10 to EXTI15 */
                    .word 0                                       /* Vector Number 48,Reserved */
                    .word DMAMUX_IRQHandler                       /* Vector Number 49,DMAMUX */
                    .word 0                                       /* Vector Number 50,Reserved */
                    .word 0                                       /* Vector Number 51,Reserved */
                    .word I2C0_WKUP_IRQHandler                    /* Vector Number 52,I2C0 Wakeup interrupt through EXTI Line detect */
                    .word 0                                       /* Vector Number 53,Reserved */
                    .word USART0_WKUP_IRQHandler                  /* Vector Number 54,USART0 Wakeup interrupt through EXTI Line detect */

  .size   __gVectors, . - __gVectors

  .weak NMI_Handler
  .thumb_set NMI_Handler,Default_Handler

  .weak HardFault_Handler
  .thumb_set HardFault_Handler,Default_Handler

  .weak SVC_Handler
  .thumb_set SVC_Handler,Default_Handler

  .weak PendSV_Handler
  .thumb_set PendSV_Handler,Default_Handler

  .weak SysTick_Handler
  .thumb_set SysTick_Handler,Default_Handler

  .weak WWDGT_IRQHandler
  .thumb_set WWDGT_IRQHandler,Default_Handler

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

  .weak DMA_Channel0_IRQHandler
  .thumb_set DMA_Channel0_IRQHandler,Default_Handler

  .weak DMA_Channel1_IRQHandler
  .thumb_set DMA_Channel1_IRQHandler,Default_Handler

  .weak DMA_Channel2_IRQHandler
  .thumb_set DMA_Channel2_IRQHandler,Default_Handler

  .weak ADC_IRQHandler
  .thumb_set ADC_IRQHandler,Default_Handler

  .weak USART0_IRQHandler
  .thumb_set USART0_IRQHandler,Default_Handler

  .weak USART1_IRQHandler
  .thumb_set USART1_IRQHandler,Default_Handler

  .weak USART2_IRQHandler
  .thumb_set USART2_IRQHandler,Default_Handler

  .weak I2C0_EV_IRQHandler
  .thumb_set I2C0_EV_IRQHandler,Default_Handler

  .weak I2C0_ER_IRQHandler
  .thumb_set I2C0_ER_IRQHandler,Default_Handler

  .weak SPI0_IRQHandler
  .thumb_set SPI0_IRQHandler,Default_Handler

  .weak RTC_Alarm_IRQHandler
  .thumb_set RTC_Alarm_IRQHandler,Default_Handler

  .weak EXTI5_9_IRQHandler
  .thumb_set EXTI5_9_IRQHandler,Default_Handler

  .weak TIMER0_TRG_CMT_UP_BRK_IRQHandler
  .thumb_set TIMER0_TRG_CMT_UP_BRK_IRQHandler,Default_Handler

  .weak TIMER0_Channel_IRQHandler
  .thumb_set TIMER0_Channel_IRQHandler,Default_Handler

  .weak TIMER2_IRQHandler
  .thumb_set TIMER2_IRQHandler,Default_Handler

  .weak TIMER13_IRQHandler
  .thumb_set TIMER13_IRQHandler,Default_Handler

  .weak TIMER15_IRQHandler
  .thumb_set TIMER15_IRQHandler,Default_Handler

  .weak TIMER16_IRQHandler
  .thumb_set TIMER16_IRQHandler,Default_Handler

  .weak EXTI10_15_IRQHandler
  .thumb_set EXTI10_15_IRQHandler,Default_Handler

  .weak DMAMUX_IRQHandler
  .thumb_set DMAMUX_IRQHandler,Default_Handler

  .weak I2C0_WKUP_IRQHandler
  .thumb_set I2C0_WKUP_IRQHandler,Default_Handler

  .weak USART0_WKUP_IRQHandler
  .thumb_set USART0_WKUP_IRQHandler,Default_Handler

