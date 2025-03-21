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
    .word  LLWU_Handler
    .word  WDOGorEWM_Handler
    .word  TRNG_Handler
    .word  I2C0_Handler
    .word  I2C1_Handler
    .word  SPI0_Handler
    .word  SPI1_Handler
    .word  I2S0_Transmit_Handler
    .word  I2S0_Receive_Handler
    .word  LPUART0_Handler
    .word  LPUART1_Handler
    .word  LPUART2_Handler
    .word  LPUART3_Handler
    .word  LPUART4_Handler
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
    .word  CMT_Handler
    .word  RTC_Alarminterrupt_Handler
    .word  RTC_Secondsinterrupt_Handler
    .word  PIT_Channel0_Handler
    .word  PIT_Channel1_Handler
    .word  PIT_Channel2_Handler
    .word  PIT_Channel3_Handler
    .word  PDB_Handler
    .word  USBFSOTG_Handler
    .word  USBFSCharger_Handler
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
    .word  SPI2_Handler
    .word  SPI3_Handler
    .word  0                                    /* Reserved */
    .word  I2S1_Transmit_Handler
    .word  I2S1_Receive_Handler
    .word  FlexIO_Handler
    .word  FTM3_Handler
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  I2C2_Handler
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  SDHC_Handler
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  TPM1_Handler
    .word  TPM2_Handler
    .word  USB1PHYorUSB1DCD_Handler
    .word  I2C3_Handler
    .word  0                                    /* Reserved */
    .word  USB1OTG_Handler
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

    .weak      LLWU_Handler
    .thumb_set LLWU_Handler,Default_Handler

    .weak      WDOGorEWM_Handler
    .thumb_set WDOGorEWM_Handler,Default_Handler

    .weak      TRNG_Handler
    .thumb_set TRNG_Handler,Default_Handler

    .weak      I2C0_Handler
    .thumb_set I2C0_Handler,Default_Handler

    .weak      I2C1_Handler
    .thumb_set I2C1_Handler,Default_Handler

    .weak      SPI0_Handler
    .thumb_set SPI0_Handler,Default_Handler

    .weak      SPI1_Handler
    .thumb_set SPI1_Handler,Default_Handler

    .weak      I2S0_Transmit_Handler
    .thumb_set I2S0_Transmit_Handler,Default_Handler

    .weak      I2S0_Receive_Handler
    .thumb_set I2S0_Receive_Handler,Default_Handler

    .weak      LPUART0_Handler
    .thumb_set LPUART0_Handler,Default_Handler

    .weak      LPUART1_Handler
    .thumb_set LPUART1_Handler,Default_Handler

    .weak      LPUART2_Handler
    .thumb_set LPUART2_Handler,Default_Handler

    .weak      LPUART3_Handler
    .thumb_set LPUART3_Handler,Default_Handler

    .weak      LPUART4_Handler
    .thumb_set LPUART4_Handler,Default_Handler

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

    .weak      CMT_Handler
    .thumb_set CMT_Handler,Default_Handler

    .weak      RTC_Alarminterrupt_Handler
    .thumb_set RTC_Alarminterrupt_Handler,Default_Handler

    .weak      RTC_Secondsinterrupt_Handler
    .thumb_set RTC_Secondsinterrupt_Handler,Default_Handler

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

    .weak      USBFSOTG_Handler
    .thumb_set USBFSOTG_Handler,Default_Handler

    .weak      USBFSCharger_Handler
    .thumb_set USBFSCharger_Handler,Default_Handler

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

    .weak      SPI2_Handler
    .thumb_set SPI2_Handler,Default_Handler

    .weak      SPI3_Handler
    .thumb_set SPI3_Handler,Default_Handler

    .weak      I2S1_Transmit_Handler
    .thumb_set I2S1_Transmit_Handler,Default_Handler

    .weak      I2S1_Receive_Handler
    .thumb_set I2S1_Receive_Handler,Default_Handler

    .weak      FlexIO_Handler
    .thumb_set FlexIO_Handler,Default_Handler

    .weak      FTM3_Handler
    .thumb_set FTM3_Handler,Default_Handler

    .weak      I2C2_Handler
    .thumb_set I2C2_Handler,Default_Handler

    .weak      SDHC_Handler
    .thumb_set SDHC_Handler,Default_Handler

    .weak      TPM1_Handler
    .thumb_set TPM1_Handler,Default_Handler

    .weak      TPM2_Handler
    .thumb_set TPM2_Handler,Default_Handler

    .weak      USB1PHYorUSB1DCD_Handler
    .thumb_set USB1PHYorUSB1DCD_Handler,Default_Handler

    .weak      I2C3_Handler
    .thumb_set I2C3_Handler,Default_Handler

    .weak      USB1OTG_Handler
    .thumb_set USB1OTG_Handler,Default_Handler


