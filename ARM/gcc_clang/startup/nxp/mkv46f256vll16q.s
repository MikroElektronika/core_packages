.syntax unified
.cpu cortex-m4
.fpu softvfp
.thumb

.global  g_pfnVectors
.global  Default_Handler

.section  .text.Reset_Handler
    .weak  Reset_Handler
    .type  Reset_Handler, %function

Reset_Handler:
    /* set stack pointer */
    ldr sp, =__stack
    /* Call the clock system intitialization function.*/
    bl  clockConfig /* Added to call MikroE system clock configuration API. */
    /* Call static constructors */
    bl __libc_init_array
    /* Call the application's entry point.*/
    bl  main
    bx  lr

.size  Reset_Handler, .-Reset_Handler

/**
 * @brief  This is the code that gets called when the processor receives an
 *         unexpected interrupt.  This simply enters an infinite loop, preserving
 *         the system state for examination by a debugger.
 * @param  None
 * @retval None
 */
.section  .text.Default_Handler,"ax",%progbits
Default_Handler:
    Infinite_Loop:
        b  Infinite_Loop
        .size  Default_Handler, .-Default_Handler
        .section  .isr_vector,"a",%progbits
        .type  g_pfnVectors, %object
        .size  g_pfnVectors, .-g_pfnVectors

g_pfnVectors:
    .word  __stack
    .word  Reset_Handler                        /* The reset handler */
    .word  Armcore_Handler
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  DMA_DMAchannel016transfercomplete_Handler
    .word  DMA_DMAchannel117transfercomplete_Handler
    .word  DMA_DMAchannel218transfercomplete_Handler
    .word  DMA_DMAchannel319transfercomplete_Handler
    .word  DMA_DMAchannel420transfercomplete_Handler
    .word  DMA_DMAchannel521transfercomplete_Handler
    .word  DMA_DMAchannel622transfercomplete_Handler
    .word  DMA_DMAchannel723transfercomplete_Handler
    .word  DMA_DMAchannel824transfercomplete_Handler
    .word  DMA_DMAchannel925transfercomplete_Handler
    .word  DMA_DMAchannel1026transfercomplete_Handler
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  DMA_DMAerrorinterruptchannels01531_Handler
    .word  MCM_Handler
    .word  Flashmemory_Commandcomplete_Handler
    .word  Flashmemory_Readcollision_Handler
    .word  ModeController_Handler
    .word  LLWU_Handler
    .word  WDOGandEWM_Handler
    .word  0                                    /* Reserved */
    .word  I2C0_Handler
    .word  0                                    /* Reserved */
    .word  SPI0_Handler
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  UART0_UART0statussources_Handler
    .word  UART0_UART0errorsources_Handler
    .word  UART1_UART1statussources_Handler
    .word  UART1_UART1errorsources_Handler
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  ADCA_Handler
    .word  CMP0_Handler
    .word  CMP1_Handler
    .word  FTM0_Handler
    .word  FTM1_Handler
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  0xFFFFFFFF                           /* Reserved for user TRIM value */

/*******************************************************************************
*
* Provide weak aliases for each Exception handler to the Default_Handler.
* As they are weak aliases, any function with the same name will override
* this definition.
*
*******************************************************************************/
    .weak      Armcore_Handler
    .thumb_set Armcore_Handler,Default_Handler

    .weak      DMA_DMAchannel016transfercomplete_Handler
    .thumb_set DMA_DMAchannel016transfercomplete_Handler,Default_Handler

    .weak      DMA_DMAchannel117transfercomplete_Handler
    .thumb_set DMA_DMAchannel117transfercomplete_Handler,Default_Handler

    .weak      DMA_DMAchannel218transfercomplete_Handler
    .thumb_set DMA_DMAchannel218transfercomplete_Handler,Default_Handler

    .weak      DMA_DMAchannel319transfercomplete_Handler
    .thumb_set DMA_DMAchannel319transfercomplete_Handler,Default_Handler

    .weak      DMA_DMAchannel420transfercomplete_Handler
    .thumb_set DMA_DMAchannel420transfercomplete_Handler,Default_Handler

    .weak      DMA_DMAchannel521transfercomplete_Handler
    .thumb_set DMA_DMAchannel521transfercomplete_Handler,Default_Handler

    .weak      DMA_DMAchannel622transfercomplete_Handler
    .thumb_set DMA_DMAchannel622transfercomplete_Handler,Default_Handler

    .weak      DMA_DMAchannel723transfercomplete_Handler
    .thumb_set DMA_DMAchannel723transfercomplete_Handler,Default_Handler

    .weak      DMA_DMAchannel824transfercomplete_Handler
    .thumb_set DMA_DMAchannel824transfercomplete_Handler,Default_Handler

    .weak      DMA_DMAchannel925transfercomplete_Handler
    .thumb_set DMA_DMAchannel925transfercomplete_Handler,Default_Handler

    .weak      DMA_DMAchannel1026transfercomplete_Handler
    .thumb_set DMA_DMAchannel1026transfercomplete_Handler,Default_Handler

    .weak      DMA_DMAerrorinterruptchannels01531_Handler
    .thumb_set DMA_DMAerrorinterruptchannels01531_Handler,Default_Handler

    .weak      MCM_Handler
    .thumb_set MCM_Handler,Default_Handler

    .weak      Flashmemory_Commandcomplete_Handler
    .thumb_set Flashmemory_Commandcomplete_Handler,Default_Handler

    .weak      Flashmemory_Readcollision_Handler
    .thumb_set Flashmemory_Readcollision_Handler,Default_Handler

    .weak      ModeController_Handler
    .thumb_set ModeController_Handler,Default_Handler

    .weak      LLWU_Handler
    .thumb_set LLWU_Handler,Default_Handler

    .weak      WDOGandEWM_Handler
    .thumb_set WDOGandEWM_Handler,Default_Handler

    .weak      I2C0_Handler
    .thumb_set I2C0_Handler,Default_Handler

    .weak      SPI0_Handler
    .thumb_set SPI0_Handler,Default_Handler

    .weak      UART0_UART0statussources_Handler
    .thumb_set UART0_UART0statussources_Handler,Default_Handler

    .weak      UART0_UART0errorsources_Handler
    .thumb_set UART0_UART0errorsources_Handler,Default_Handler

    .weak      UART1_UART1statussources_Handler
    .thumb_set UART1_UART1statussources_Handler,Default_Handler

    .weak      UART1_UART1errorsources_Handler
    .thumb_set UART1_UART1errorsources_Handler,Default_Handler

    .weak      ADCA_Handler
    .thumb_set ADCA_Handler,Default_Handler

    .weak      CMP0_Handler
    .thumb_set CMP0_Handler,Default_Handler

    .weak      CMP1_Handler
    .thumb_set CMP1_Handler,Default_Handler

    .weak      FTM0_Handler
    .thumb_set FTM0_Handler,Default_Handler

    .weak      FTM1_Handler
    .thumb_set FTM1_Handler,Default_Handler


