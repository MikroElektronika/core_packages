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
    .word  DMA_DMAerrorinterruptchannels03_Handler
    .word  MCM_Handler
    .word  Flashmemory_Commandcomplete_Handler
    .word  Flashmemory_Readcollision_Handler
    .word  ModeController_Handler
    .word  LLWU_Handler
    .word  WDOGorEWM_Handler
    .word  0                                    /* Reserved */
    .word  I2C0_Handler
    .word  0                                    /* Reserved */
    .word  SPI0_Handler
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  UART0_SingleinterruptvectorforUARTstatussources_Handler
    .word  UART0_SingleinterruptvectorforUARTerrorsources_Handler
    .word  UART1_SingleinterruptvectorforUARTstatussources_Handler
    .word  UART1_SingleinterruptvectorforUARTerrorsources_Handler
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  ADC0_Handler
    .word  CMP0_Handler
    .word  CMP1_Handler
    .word  FTM0_Handler
    .word  FTM1_Handler
    .word  FTM2_Handler
    .word  0                                    /* Reserved */
    .word  Reserved1_Handler
    .word  Reserved2_Handler
    .word  PIT_Channel0_Handler
    .word  PIT_Channel1_Handler
    .word  PIT_Channel2_Handler
    .word  PIT_Channel3_Handler
    .word  PDB_Handler
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  DAC0_Handler
    .word  MCG_Handler
    .word  LowPowerTimer_Handler
    .word  Portcontrolmodule_PindetectPortA_Handler
    .word  Portcontrolmodule_PindetectPortB_Handler
    .word  Portcontrolmodule_PindetectPortC_Handler
    .word  Portcontrolmodule_PindetectPortD_Handler
    .word  Portcontrolmodule_PindetectPortE_Handler
    .word  Software_Handler
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
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
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

    .weak      DMA_DMAerrorinterruptchannels03_Handler
    .thumb_set DMA_DMAerrorinterruptchannels03_Handler,Default_Handler

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

    .weak      WDOGorEWM_Handler
    .thumb_set WDOGorEWM_Handler,Default_Handler

    .weak      I2C0_Handler
    .thumb_set I2C0_Handler,Default_Handler

    .weak      SPI0_Handler
    .thumb_set SPI0_Handler,Default_Handler

    .weak      UART0_SingleinterruptvectorforUARTstatussources_Handler
    .thumb_set UART0_SingleinterruptvectorforUARTstatussources_Handler,Default_Handler

    .weak      UART0_SingleinterruptvectorforUARTerrorsources_Handler
    .thumb_set UART0_SingleinterruptvectorforUARTerrorsources_Handler,Default_Handler

    .weak      UART1_SingleinterruptvectorforUARTstatussources_Handler
    .thumb_set UART1_SingleinterruptvectorforUARTstatussources_Handler,Default_Handler

    .weak      UART1_SingleinterruptvectorforUARTerrorsources_Handler
    .thumb_set UART1_SingleinterruptvectorforUARTerrorsources_Handler,Default_Handler

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

    .weak      FTM2_Handler
    .thumb_set FTM2_Handler,Default_Handler

    .weak      Reserved1_Handler
    .thumb_set Reserved1_Handler,Default_Handler

    .weak      Reserved2_Handler
    .thumb_set Reserved2_Handler,Default_Handler

    .weak      PIT_Channel0_Handler
    .thumb_set PIT_Channel0_Handler,Default_Handler

    .weak      PIT_Channel1_Handler
    .thumb_set PIT_Channel1_Handler,Default_Handler

    .weak      PIT_Channel2_Handler
    .thumb_set PIT_Channel2_Handler,Default_Handler

    .weak      PIT_Channel3_Handler
    .thumb_set PIT_Channel3_Handler,Default_Handler

    .weak      PDB_Handler
    .thumb_set PDB_Handler,Default_Handler

    .weak      DAC0_Handler
    .thumb_set DAC0_Handler,Default_Handler

    .weak      MCG_Handler
    .thumb_set MCG_Handler,Default_Handler

    .weak      LowPowerTimer_Handler
    .thumb_set LowPowerTimer_Handler,Default_Handler

    .weak      Portcontrolmodule_PindetectPortA_Handler
    .thumb_set Portcontrolmodule_PindetectPortA_Handler,Default_Handler

    .weak      Portcontrolmodule_PindetectPortB_Handler
    .thumb_set Portcontrolmodule_PindetectPortB_Handler,Default_Handler

    .weak      Portcontrolmodule_PindetectPortC_Handler
    .thumb_set Portcontrolmodule_PindetectPortC_Handler,Default_Handler

    .weak      Portcontrolmodule_PindetectPortD_Handler
    .thumb_set Portcontrolmodule_PindetectPortD_Handler,Default_Handler

    .weak      Portcontrolmodule_PindetectPortE_Handler
    .thumb_set Portcontrolmodule_PindetectPortE_Handler,Default_Handler

    .weak      Software_Handler
    .thumb_set Software_Handler,Default_Handler


