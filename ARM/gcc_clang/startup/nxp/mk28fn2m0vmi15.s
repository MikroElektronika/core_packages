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
    .word  DMA_DMAchannel1127transfercomplete_Handler
    .word  DMA_DMAchannel1228transfercomplete_Handler
    .word  DMA_DMAchannel1329transfercomplete_Handler
    .word  DMA_DMAchannel1430transfercomplete_Handler
    .word  DMA_DMAchannel1531transfercomplete_Handler
    .word  DMA_DMAerrorinterruptchannels031_Handler
    .word  MCMorRDC_Handler
    .word  Flashmemory_Commandcomplete_Handler
    .word  Flashmemory_Readcollision_Handler
    .word  ModeController_Handler
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
    .word  Default_Handler
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

    .weak      DMA_DMAchannel1127transfercomplete_Handler
    .thumb_set DMA_DMAchannel1127transfercomplete_Handler,Default_Handler

    .weak      DMA_DMAchannel1228transfercomplete_Handler
    .thumb_set DMA_DMAchannel1228transfercomplete_Handler,Default_Handler

    .weak      DMA_DMAchannel1329transfercomplete_Handler
    .thumb_set DMA_DMAchannel1329transfercomplete_Handler,Default_Handler

    .weak      DMA_DMAchannel1430transfercomplete_Handler
    .thumb_set DMA_DMAchannel1430transfercomplete_Handler,Default_Handler

    .weak      DMA_DMAchannel1531transfercomplete_Handler
    .thumb_set DMA_DMAchannel1531transfercomplete_Handler,Default_Handler

    .weak      DMA_DMAerrorinterruptchannels031_Handler
    .thumb_set DMA_DMAerrorinterruptchannels031_Handler,Default_Handler

    .weak      MCMorRDC_Handler
    .thumb_set MCMorRDC_Handler,Default_Handler

    .weak      Flashmemory_Commandcomplete_Handler
    .thumb_set Flashmemory_Commandcomplete_Handler,Default_Handler

    .weak      Flashmemory_Readcollision_Handler
    .thumb_set Flashmemory_Readcollision_Handler,Default_Handler

    .weak      ModeController_Handler
    .thumb_set ModeController_Handler,Default_Handler


