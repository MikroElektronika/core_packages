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
    .word  ARMcore_NonmaskableinterruptNMI_Handler
    .word  ARMcore_Hardfault_Handler
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  ARMcore_SupervisorcallSVCall_Handler
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  ARMcore_PendablerequestforsystemservicePendableSrvReq_Handler
    .word  ARMcore_SystemticktimerSysTick_Handler
    .word  DMA_DMAchannel0transfercompleteanderror_Handler
    .word  DMA_DMAchannel1transfercompleteanderror_Handler
    .word  DMA_DMAchannel2transfercompleteanderror_Handler
    .word  DMA_DMAchannel3transfercompleteanderror_Handler
    .word  0                                    /* Reserved */
    .word  FTFA_Handler
    .word  PMC_Handler
    .word  LLWU_Handler
    .word  I2C0_Handler
    .word  I2C1_Handler
    .word  SPI0_Handler
    .word  SPI1_Handler
    .word  LPUART0_Handler
    .word  LPUART1_Handler
    .word  UART2orFlexIO_Handler
    .word  ADC0_Handler
    .word  CMP0_Handler
    .word  TPM0_Handler
    .word  TPM1_Handler
    .word  TPM2_Handler
    .word  RTC_Alarminterrupt_Handler
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
    .weak      ARMcore_NonmaskableinterruptNMI_Handler
    .thumb_set ARMcore_NonmaskableinterruptNMI_Handler,Default_Handler

    .weak      ARMcore_Hardfault_Handler
    .thumb_set ARMcore_Hardfault_Handler,Default_Handler

    .weak      ARMcore_SupervisorcallSVCall_Handler
    .thumb_set ARMcore_SupervisorcallSVCall_Handler,Default_Handler

    .weak      ARMcore_PendablerequestforsystemservicePendableSrvReq_Handler
    .thumb_set ARMcore_PendablerequestforsystemservicePendableSrvReq_Handler,Default_Handler

    .weak      ARMcore_SystemticktimerSysTick_Handler
    .thumb_set ARMcore_SystemticktimerSysTick_Handler,Default_Handler

    .weak      DMA_DMAchannel0transfercompleteanderror_Handler
    .thumb_set DMA_DMAchannel0transfercompleteanderror_Handler,Default_Handler

    .weak      DMA_DMAchannel1transfercompleteanderror_Handler
    .thumb_set DMA_DMAchannel1transfercompleteanderror_Handler,Default_Handler

    .weak      DMA_DMAchannel2transfercompleteanderror_Handler
    .thumb_set DMA_DMAchannel2transfercompleteanderror_Handler,Default_Handler

    .weak      DMA_DMAchannel3transfercompleteanderror_Handler
    .thumb_set DMA_DMAchannel3transfercompleteanderror_Handler,Default_Handler

    .weak      FTFA_Handler
    .thumb_set FTFA_Handler,Default_Handler

    .weak      PMC_Handler
    .thumb_set PMC_Handler,Default_Handler

    .weak      LLWU_Handler
    .thumb_set LLWU_Handler,Default_Handler

    .weak      I2C0_Handler
    .thumb_set I2C0_Handler,Default_Handler

    .weak      I2C1_Handler
    .thumb_set I2C1_Handler,Default_Handler

    .weak      SPI0_Handler
    .thumb_set SPI0_Handler,Default_Handler

    .weak      SPI1_Handler
    .thumb_set SPI1_Handler,Default_Handler

    .weak      LPUART0_Handler
    .thumb_set LPUART0_Handler,Default_Handler

    .weak      LPUART1_Handler
    .thumb_set LPUART1_Handler,Default_Handler

    .weak      UART2orFlexIO_Handler
    .thumb_set UART2orFlexIO_Handler,Default_Handler

    .weak      ADC0_Handler
    .thumb_set ADC0_Handler,Default_Handler

    .weak      CMP0_Handler
    .thumb_set CMP0_Handler,Default_Handler

    .weak      TPM0_Handler
    .thumb_set TPM0_Handler,Default_Handler

    .weak      TPM1_Handler
    .thumb_set TPM1_Handler,Default_Handler

    .weak      TPM2_Handler
    .thumb_set TPM2_Handler,Default_Handler

    .weak      RTC_Alarminterrupt_Handler
    .thumb_set RTC_Alarminterrupt_Handler,Default_Handler


