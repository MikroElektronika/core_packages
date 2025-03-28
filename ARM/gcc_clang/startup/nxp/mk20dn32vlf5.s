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
    .word  ARMcore_NonmaskableInterruptNMI_Handler
    .word  ARMcore_HardFault_Handler
    .word  ARMcore_MemManageFault_Handler
    .word  ARMcore_BusFault_Handler
    .word  ARMcore_UsageFault_Handler
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  ARMcore_SupervisorcallSVCall_Handler
    .word  ARMcore_DebugMonitor_Handler
    .word  0                                    /* Reserved */
    .word  ARMcore_PendablerequestforsystemservicePendableSrvReq_Handler
    .word  ARMcore_SystemticktimerSysTick_Handler
    .word  DMA_DMAchannel0transfercomplete_Handler
    .word  DMA_DMAchannel1transfercomplete_Handler
    .word  DMA_DMAchannel2transfercomplete_Handler
    .word  DMA_DMAchannel3transfercomplete_Handler
    .word  DMA_DMAerrorinterruptchannel_Handler
    .word  DMA__Handler
    .word  Flashmemory_Commandcomplete_Handler
    .word  Flashmemory_Readcollision_Handler
    .word  ModeController_Handler
    .word  LLWU_Handler
    .word  WDOG_Handler
    .word  I2C0_Handler
    .word  SPI0_Handler
    .word  I2S0_Handler
    .word  I2S1_Handler
    .word  UART0_SingleinterruptvectorforCEA7091BLONstatussources_Handler
    .word  UART0_SingleinterruptvectorforUARTstatussources_Handler
    .word  UART0_SingleinterruptvectorforUARTerrorsources_Handler
    .word  UART1_SingleinterruptvectorforUARTstatussources_Handler
    .word  UART1_SingleinterruptvectorforUARTerrorsources_Handler
    .word  UART2_SingleinterruptvectorforUARTstatussources_Handler
    .word  UART2_SingleinterruptvectorforUARTerrorsources_Handler
    .word  ADC0_Handler
    .word  CMP0_Handler
    .word  CMP1_Handler
    .word  FTM0_Handler
    .word  FTM1_Handler
    .word  CMT_Handler
    .word  RTC_Alarminterrupt_Handler
    .word  RTC_Secondsinterrupt_Handler
    .word  PIT_Handler
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
    .weak      ARMcore_NonmaskableInterruptNMI_Handler
    .thumb_set ARMcore_NonmaskableInterruptNMI_Handler,Default_Handler

    .weak      ARMcore_HardFault_Handler
    .thumb_set ARMcore_HardFault_Handler,Default_Handler

    .weak      ARMcore_MemManageFault_Handler
    .thumb_set ARMcore_MemManageFault_Handler,Default_Handler

    .weak      ARMcore_BusFault_Handler
    .thumb_set ARMcore_BusFault_Handler,Default_Handler

    .weak      ARMcore_UsageFault_Handler
    .thumb_set ARMcore_UsageFault_Handler,Default_Handler

    .weak      ARMcore_SupervisorcallSVCall_Handler
    .thumb_set ARMcore_SupervisorcallSVCall_Handler,Default_Handler

    .weak      ARMcore_DebugMonitor_Handler
    .thumb_set ARMcore_DebugMonitor_Handler,Default_Handler

    .weak      ARMcore_PendablerequestforsystemservicePendableSrvReq_Handler
    .thumb_set ARMcore_PendablerequestforsystemservicePendableSrvReq_Handler,Default_Handler

    .weak      ARMcore_SystemticktimerSysTick_Handler
    .thumb_set ARMcore_SystemticktimerSysTick_Handler,Default_Handler

    .weak      DMA_DMAchannel0transfercomplete_Handler
    .thumb_set DMA_DMAchannel0transfercomplete_Handler,Default_Handler

    .weak      DMA_DMAchannel1transfercomplete_Handler
    .thumb_set DMA_DMAchannel1transfercomplete_Handler,Default_Handler

    .weak      DMA_DMAchannel2transfercomplete_Handler
    .thumb_set DMA_DMAchannel2transfercomplete_Handler,Default_Handler

    .weak      DMA_DMAchannel3transfercomplete_Handler
    .thumb_set DMA_DMAchannel3transfercomplete_Handler,Default_Handler

    .weak      DMA_DMAerrorinterruptchannel_Handler
    .thumb_set DMA_DMAerrorinterruptchannel_Handler,Default_Handler

    .weak      DMA__Handler
    .thumb_set DMA__Handler,Default_Handler

    .weak      Flashmemory_Commandcomplete_Handler
    .thumb_set Flashmemory_Commandcomplete_Handler,Default_Handler

    .weak      Flashmemory_Readcollision_Handler
    .thumb_set Flashmemory_Readcollision_Handler,Default_Handler

    .weak      ModeController_Handler
    .thumb_set ModeController_Handler,Default_Handler

    .weak      LLWU_Handler
    .thumb_set LLWU_Handler,Default_Handler

    .weak      WDOG_Handler
    .thumb_set WDOG_Handler,Default_Handler

    .weak      I2C0_Handler
    .thumb_set I2C0_Handler,Default_Handler

    .weak      SPI0_Handler
    .thumb_set SPI0_Handler,Default_Handler

    .weak      I2S0_Handler
    .thumb_set I2S0_Handler,Default_Handler

    .weak      I2S1_Handler
    .thumb_set I2S1_Handler,Default_Handler

    .weak      UART0_SingleinterruptvectorforCEA7091BLONstatussources_Handler
    .thumb_set UART0_SingleinterruptvectorforCEA7091BLONstatussources_Handler,Default_Handler

    .weak      UART0_SingleinterruptvectorforUARTstatussources_Handler
    .thumb_set UART0_SingleinterruptvectorforUARTstatussources_Handler,Default_Handler

    .weak      UART0_SingleinterruptvectorforUARTerrorsources_Handler
    .thumb_set UART0_SingleinterruptvectorforUARTerrorsources_Handler,Default_Handler

    .weak      UART1_SingleinterruptvectorforUARTstatussources_Handler
    .thumb_set UART1_SingleinterruptvectorforUARTstatussources_Handler,Default_Handler

    .weak      UART1_SingleinterruptvectorforUARTerrorsources_Handler
    .thumb_set UART1_SingleinterruptvectorforUARTerrorsources_Handler,Default_Handler

    .weak      UART2_SingleinterruptvectorforUARTstatussources_Handler
    .thumb_set UART2_SingleinterruptvectorforUARTstatussources_Handler,Default_Handler

    .weak      UART2_SingleinterruptvectorforUARTerrorsources_Handler
    .thumb_set UART2_SingleinterruptvectorforUARTerrorsources_Handler,Default_Handler

    .weak      ADC0_Handler
    .thumb_set ADC0_Handler,Default_Handler

    .weak      CMP0_Handler
    .thumb_set CMP0_Handler,Default_Handler

    .weak      CMP1_Handler
    .thumb_set CMP1_Handler,Default_Handler

    .weak      FTM0_Handler
    .thumb_set FTM0_Handler,Default_Handler

    .weak      FTM1_Handler
    .thumb_set FTM1_Handler,Default_Handler

    .weak      CMT_Handler
    .thumb_set CMT_Handler,Default_Handler

    .weak      RTC_Alarminterrupt_Handler
    .thumb_set RTC_Alarminterrupt_Handler,Default_Handler

    .weak      RTC_Secondsinterrupt_Handler
    .thumb_set RTC_Secondsinterrupt_Handler,Default_Handler

    .weak      PIT_Handler
    .thumb_set PIT_Handler,Default_Handler


