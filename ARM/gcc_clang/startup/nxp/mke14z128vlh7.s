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
    .word  DMA_DMAchannel0transfercomplete_Handler
    .word  DMA_DMAchannel1transfercomplete_Handler
    .word  DMA_DMAchannel2transfercomplete_Handler
    .word  DMA_DMAchannel3transfercomplete_Handler
    .word  DMA_DMAchannel4transfercomplete_Handler
    .word  DMA_DMAchannel5transfercomplete_Handler
    .word  DMA_DMAchannel6transfercomplete_Handler
    .word  DMA_DMAchannel7transfercomplete_Handler
    .word  DMA_DMAerrorinterrupt_Handler
    .word  MCM_MCMsinglefaultinterrupt_Handler
    .word  MCM_MCMdoublefaultinterrupt_Handler
    .word  MCM_MCMstopacknowledgeinterrupt_Handler
    .word  FTFE_Handler
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  CMP0_Handler
    .word  CMP1_Handler
    .word  FTM0_FTM0faultinterrupt_Handler
    .word  FTM0_FTM0combinedinterrupt_Handler
    .word  FTM1_FTM1faultinterrupt_Handler
    .word  FTM1_FTM1combinedinterrupt_Handler
    .word  FTM2_FTM2faultinterrupt_Handler
    .word  FTM2_FTM2combinedinterrupt_Handler
    .word  CAN0ORed_Handler
    .word  CAN0BusOff_Handler
    .word  CAN0Error_Handler
    .word  CAN0Tx_Handler
    .word  CAN0Rx_Handler
    .word  CAN0WakeUp_Handler
    .word  I2S0Tx_Handler
    .word  I2S0Rx_Handler
    .word  0                                    /* Reserved */
    .word  LPUART0Tx_Handler
    .word  LPUART0Rx_Handler
    .word  LPUART1Tx_Handler
    .word  LPUART1Rx_Handler
    .word  LPUART2Tx_Handler
    .word  LPUART2Rx_Handler
    .word  0                                    /* Reserved */
    .word  SPI0Rx_Handler
    .word  SPI0Tx_Handler
    .word  0                                    /* Reserved */
    .word  I2C0_Handler
    .word  I2C1_Handler
    .word  CAN1ORed_Handler
    .word  CAN1BusOff_Handler
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
    .word  0xFFFFFFFF                           /* Reserved for user TRIM value */

/*******************************************************************************
*
* Provide weak aliases for each Exception handler to the Default_Handler.
* As they are weak aliases, any function with the same name will override
* this definition.
*
*******************************************************************************/
    .weak      DMA_DMAchannel0transfercomplete_Handler
    .thumb_set DMA_DMAchannel0transfercomplete_Handler,Default_Handler

    .weak      DMA_DMAchannel1transfercomplete_Handler
    .thumb_set DMA_DMAchannel1transfercomplete_Handler,Default_Handler

    .weak      DMA_DMAchannel2transfercomplete_Handler
    .thumb_set DMA_DMAchannel2transfercomplete_Handler,Default_Handler

    .weak      DMA_DMAchannel3transfercomplete_Handler
    .thumb_set DMA_DMAchannel3transfercomplete_Handler,Default_Handler

    .weak      DMA_DMAchannel4transfercomplete_Handler
    .thumb_set DMA_DMAchannel4transfercomplete_Handler,Default_Handler

    .weak      DMA_DMAchannel5transfercomplete_Handler
    .thumb_set DMA_DMAchannel5transfercomplete_Handler,Default_Handler

    .weak      DMA_DMAchannel6transfercomplete_Handler
    .thumb_set DMA_DMAchannel6transfercomplete_Handler,Default_Handler

    .weak      DMA_DMAchannel7transfercomplete_Handler
    .thumb_set DMA_DMAchannel7transfercomplete_Handler,Default_Handler

    .weak      DMA_DMAerrorinterrupt_Handler
    .thumb_set DMA_DMAerrorinterrupt_Handler,Default_Handler

    .weak      MCM_MCMsinglefaultinterrupt_Handler
    .thumb_set MCM_MCMsinglefaultinterrupt_Handler,Default_Handler

    .weak      MCM_MCMdoublefaultinterrupt_Handler
    .thumb_set MCM_MCMdoublefaultinterrupt_Handler,Default_Handler

    .weak      MCM_MCMstopacknowledgeinterrupt_Handler
    .thumb_set MCM_MCMstopacknowledgeinterrupt_Handler,Default_Handler

    .weak      FTFE_Handler
    .thumb_set FTFE_Handler,Default_Handler

    .weak      CMP0_Handler
    .thumb_set CMP0_Handler,Default_Handler

    .weak      CMP1_Handler
    .thumb_set CMP1_Handler,Default_Handler

    .weak      FTM0_FTM0faultinterrupt_Handler
    .thumb_set FTM0_FTM0faultinterrupt_Handler,Default_Handler

    .weak      FTM0_FTM0combinedinterrupt_Handler
    .thumb_set FTM0_FTM0combinedinterrupt_Handler,Default_Handler

    .weak      FTM1_FTM1faultinterrupt_Handler
    .thumb_set FTM1_FTM1faultinterrupt_Handler,Default_Handler

    .weak      FTM1_FTM1combinedinterrupt_Handler
    .thumb_set FTM1_FTM1combinedinterrupt_Handler,Default_Handler

    .weak      FTM2_FTM2faultinterrupt_Handler
    .thumb_set FTM2_FTM2faultinterrupt_Handler,Default_Handler

    .weak      FTM2_FTM2combinedinterrupt_Handler
    .thumb_set FTM2_FTM2combinedinterrupt_Handler,Default_Handler

    .weak      CAN0ORed_Handler
    .thumb_set CAN0ORed_Handler,Default_Handler

    .weak      CAN0BusOff_Handler
    .thumb_set CAN0BusOff_Handler,Default_Handler

    .weak      CAN0Error_Handler
    .thumb_set CAN0Error_Handler,Default_Handler

    .weak      CAN0Tx_Handler
    .thumb_set CAN0Tx_Handler,Default_Handler

    .weak      CAN0Rx_Handler
    .thumb_set CAN0Rx_Handler,Default_Handler

    .weak      CAN0WakeUp_Handler
    .thumb_set CAN0WakeUp_Handler,Default_Handler

    .weak      I2S0Tx_Handler
    .thumb_set I2S0Tx_Handler,Default_Handler

    .weak      I2S0Rx_Handler
    .thumb_set I2S0Rx_Handler,Default_Handler

    .weak      LPUART0Tx_Handler
    .thumb_set LPUART0Tx_Handler,Default_Handler

    .weak      LPUART0Rx_Handler
    .thumb_set LPUART0Rx_Handler,Default_Handler

    .weak      LPUART1Tx_Handler
    .thumb_set LPUART1Tx_Handler,Default_Handler

    .weak      LPUART1Rx_Handler
    .thumb_set LPUART1Rx_Handler,Default_Handler

    .weak      LPUART2Tx_Handler
    .thumb_set LPUART2Tx_Handler,Default_Handler

    .weak      LPUART2Rx_Handler
    .thumb_set LPUART2Rx_Handler,Default_Handler

    .weak      SPI0Rx_Handler
    .thumb_set SPI0Rx_Handler,Default_Handler

    .weak      SPI0Tx_Handler
    .thumb_set SPI0Tx_Handler,Default_Handler

    .weak      I2C0_Handler
    .thumb_set I2C0_Handler,Default_Handler

    .weak      I2C1_Handler
    .thumb_set I2C1_Handler,Default_Handler

    .weak      CAN1ORed_Handler
    .thumb_set CAN1ORed_Handler,Default_Handler

    .weak      CAN1BusOff_Handler
    .thumb_set CAN1BusOff_Handler,Default_Handler


