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
    .word  PIT_Channel0_Handler
    .word  PIT_Channel1_Handler
    .word  PIT_Channel2_Handler
    .word  PIT_Channel3_Handler
    .word  PDB_Handler
    .word  Reserved1_Handler
    .word  Reserved2_Handler
    .word  TSI_Handler
    .word  MCG_Handler
    .word  LowPowerTimer_Handler
    .word  Portcontrol_PindetectPortA_Handler
    .word  Portcontrol_PindetectPortB_Handler
    .word  Portcontrol_PindetectPortC_Handler
    .word  Portcontrol_PindetectPortD_Handler
    .word  Portcontrol_PindetectPortE_Handler
    .word  Softwareinitiated_Handler
    .word  Reserved3_Handler
    .word  Reserved4_Handler
    .word  Reserved5_Handler
    .word  Reserved6_Handler
    .word  Reserved7_Handler
    .word  Reserved8_Handler
    .word  Reserved9_Handler
    .word  Reserved10_Handler
    .word  Reserved11_Handler
    .word  Reserved12_Handler
    .word  Reserved13_Handler
    .word  Reserved14_Handler
    .word  Reserved15_Handler
    .word  Reserved16_Handler
    .word  Reserved17_Handler
    .word  Reserved18_Handler
    .word  Reserved19_Handler
    .word  Reserved20_Handler
    .word  Reserved21_Handler
    .word  Reserved22_Handler
    .word  Reserved23_Handler
    .word  Reserved24_Handler
    .word  Reserved25_Handler
    .word  Reserved26_Handler
    .word  Reserved27_Handler
    .word  Reserved28_Handler
    .word  Reserved29_Handler
    .word  Reserved30_Handler
    .word  Reserved31_Handler
    .word  Reserved32_Handler
    .word  Reserved33_Handler
    .word  Reserved34_Handler
    .word  Reserved35_Handler
    .word  Reserved36_Handler
    .word  Reserved37_Handler
    .word  Reserved38_Handler
    .word  Reserved39_Handler
    .word  Reserved40_Handler
    .word  Reserved41_Handler
    .word  Reserved42_Handler
    .word  Reserved43_Handler
    .word  Reserved44_Handler
    .word  Reserved45_Handler
    .word  Reserved46_Handler
    .word  Reserved47_Handler
    .word  Reserved48_Handler
    .word  Reserved49_Handler
    .word  Reserved50_Handler
    .word  Reserved51_Handler
    .word  Reserved52_Handler
    .word  Reserved53_Handler
    .word  Reserved54_Handler
    .word  Reserved55_Handler
    .word  Reserved56_Handler
    .word  Reserved57_Handler
    .word  Reserved58_Handler
    .word  Reserved59_Handler
    .word  Reserved60_Handler
    .word  Reserved61_Handler
    .word  Reserved62_Handler
    .word  Reserved63_Handler
    .word  Reserved64_Handler
    .word  Reserved65_Handler
    .word  Reserved66_Handler
    .word  Reserved67_Handler
    .word  Reserved68_Handler
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

    .weak      Reserved1_Handler
    .thumb_set Reserved1_Handler,Default_Handler

    .weak      Reserved2_Handler
    .thumb_set Reserved2_Handler,Default_Handler

    .weak      TSI_Handler
    .thumb_set TSI_Handler,Default_Handler

    .weak      MCG_Handler
    .thumb_set MCG_Handler,Default_Handler

    .weak      LowPowerTimer_Handler
    .thumb_set LowPowerTimer_Handler,Default_Handler

    .weak      Portcontrol_PindetectPortA_Handler
    .thumb_set Portcontrol_PindetectPortA_Handler,Default_Handler

    .weak      Portcontrol_PindetectPortB_Handler
    .thumb_set Portcontrol_PindetectPortB_Handler,Default_Handler

    .weak      Portcontrol_PindetectPortC_Handler
    .thumb_set Portcontrol_PindetectPortC_Handler,Default_Handler

    .weak      Portcontrol_PindetectPortD_Handler
    .thumb_set Portcontrol_PindetectPortD_Handler,Default_Handler

    .weak      Portcontrol_PindetectPortE_Handler
    .thumb_set Portcontrol_PindetectPortE_Handler,Default_Handler

    .weak      Softwareinitiated_Handler
    .thumb_set Softwareinitiated_Handler,Default_Handler

    .weak      Reserved3_Handler
    .thumb_set Reserved3_Handler,Default_Handler

    .weak      Reserved4_Handler
    .thumb_set Reserved4_Handler,Default_Handler

    .weak      Reserved5_Handler
    .thumb_set Reserved5_Handler,Default_Handler

    .weak      Reserved6_Handler
    .thumb_set Reserved6_Handler,Default_Handler

    .weak      Reserved7_Handler
    .thumb_set Reserved7_Handler,Default_Handler

    .weak      Reserved8_Handler
    .thumb_set Reserved8_Handler,Default_Handler

    .weak      Reserved9_Handler
    .thumb_set Reserved9_Handler,Default_Handler

    .weak      Reserved10_Handler
    .thumb_set Reserved10_Handler,Default_Handler

    .weak      Reserved11_Handler
    .thumb_set Reserved11_Handler,Default_Handler

    .weak      Reserved12_Handler
    .thumb_set Reserved12_Handler,Default_Handler

    .weak      Reserved13_Handler
    .thumb_set Reserved13_Handler,Default_Handler

    .weak      Reserved14_Handler
    .thumb_set Reserved14_Handler,Default_Handler

    .weak      Reserved15_Handler
    .thumb_set Reserved15_Handler,Default_Handler

    .weak      Reserved16_Handler
    .thumb_set Reserved16_Handler,Default_Handler

    .weak      Reserved17_Handler
    .thumb_set Reserved17_Handler,Default_Handler

    .weak      Reserved18_Handler
    .thumb_set Reserved18_Handler,Default_Handler

    .weak      Reserved19_Handler
    .thumb_set Reserved19_Handler,Default_Handler

    .weak      Reserved20_Handler
    .thumb_set Reserved20_Handler,Default_Handler

    .weak      Reserved21_Handler
    .thumb_set Reserved21_Handler,Default_Handler

    .weak      Reserved22_Handler
    .thumb_set Reserved22_Handler,Default_Handler

    .weak      Reserved23_Handler
    .thumb_set Reserved23_Handler,Default_Handler

    .weak      Reserved24_Handler
    .thumb_set Reserved24_Handler,Default_Handler

    .weak      Reserved25_Handler
    .thumb_set Reserved25_Handler,Default_Handler

    .weak      Reserved26_Handler
    .thumb_set Reserved26_Handler,Default_Handler

    .weak      Reserved27_Handler
    .thumb_set Reserved27_Handler,Default_Handler

    .weak      Reserved28_Handler
    .thumb_set Reserved28_Handler,Default_Handler

    .weak      Reserved29_Handler
    .thumb_set Reserved29_Handler,Default_Handler

    .weak      Reserved30_Handler
    .thumb_set Reserved30_Handler,Default_Handler

    .weak      Reserved31_Handler
    .thumb_set Reserved31_Handler,Default_Handler

    .weak      Reserved32_Handler
    .thumb_set Reserved32_Handler,Default_Handler

    .weak      Reserved33_Handler
    .thumb_set Reserved33_Handler,Default_Handler

    .weak      Reserved34_Handler
    .thumb_set Reserved34_Handler,Default_Handler

    .weak      Reserved35_Handler
    .thumb_set Reserved35_Handler,Default_Handler

    .weak      Reserved36_Handler
    .thumb_set Reserved36_Handler,Default_Handler

    .weak      Reserved37_Handler
    .thumb_set Reserved37_Handler,Default_Handler

    .weak      Reserved38_Handler
    .thumb_set Reserved38_Handler,Default_Handler

    .weak      Reserved39_Handler
    .thumb_set Reserved39_Handler,Default_Handler

    .weak      Reserved40_Handler
    .thumb_set Reserved40_Handler,Default_Handler

    .weak      Reserved41_Handler
    .thumb_set Reserved41_Handler,Default_Handler

    .weak      Reserved42_Handler
    .thumb_set Reserved42_Handler,Default_Handler

    .weak      Reserved43_Handler
    .thumb_set Reserved43_Handler,Default_Handler

    .weak      Reserved44_Handler
    .thumb_set Reserved44_Handler,Default_Handler

    .weak      Reserved45_Handler
    .thumb_set Reserved45_Handler,Default_Handler

    .weak      Reserved46_Handler
    .thumb_set Reserved46_Handler,Default_Handler

    .weak      Reserved47_Handler
    .thumb_set Reserved47_Handler,Default_Handler

    .weak      Reserved48_Handler
    .thumb_set Reserved48_Handler,Default_Handler

    .weak      Reserved49_Handler
    .thumb_set Reserved49_Handler,Default_Handler

    .weak      Reserved50_Handler
    .thumb_set Reserved50_Handler,Default_Handler

    .weak      Reserved51_Handler
    .thumb_set Reserved51_Handler,Default_Handler

    .weak      Reserved52_Handler
    .thumb_set Reserved52_Handler,Default_Handler

    .weak      Reserved53_Handler
    .thumb_set Reserved53_Handler,Default_Handler

    .weak      Reserved54_Handler
    .thumb_set Reserved54_Handler,Default_Handler

    .weak      Reserved55_Handler
    .thumb_set Reserved55_Handler,Default_Handler

    .weak      Reserved56_Handler
    .thumb_set Reserved56_Handler,Default_Handler

    .weak      Reserved57_Handler
    .thumb_set Reserved57_Handler,Default_Handler

    .weak      Reserved58_Handler
    .thumb_set Reserved58_Handler,Default_Handler

    .weak      Reserved59_Handler
    .thumb_set Reserved59_Handler,Default_Handler

    .weak      Reserved60_Handler
    .thumb_set Reserved60_Handler,Default_Handler

    .weak      Reserved61_Handler
    .thumb_set Reserved61_Handler,Default_Handler

    .weak      Reserved62_Handler
    .thumb_set Reserved62_Handler,Default_Handler

    .weak      Reserved63_Handler
    .thumb_set Reserved63_Handler,Default_Handler

    .weak      Reserved64_Handler
    .thumb_set Reserved64_Handler,Default_Handler

    .weak      Reserved65_Handler
    .thumb_set Reserved65_Handler,Default_Handler

    .weak      Reserved66_Handler
    .thumb_set Reserved66_Handler,Default_Handler

    .weak      Reserved67_Handler
    .thumb_set Reserved67_Handler,Default_Handler

    .weak      Reserved68_Handler
    .thumb_set Reserved68_Handler,Default_Handler


