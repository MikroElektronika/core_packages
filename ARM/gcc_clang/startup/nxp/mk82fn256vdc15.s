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
    bl  systemPreInit
    /* Call the clock system intitialization function.*/
    bl  systemInit
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
    .word  NMI_Handler                          /* The NMI handler */
    .word  HardFault_Handler                    /* The hard fault handler */
    .word  MemManage_Handler                    /* The MPU fault handler */
    .word  BusFault_Handler                     /* The bus fault handler */
    .word  UsageFault_Handler                   /* The usage fault handler */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  0                                    /* Reserved */
    .word  SVC_Handler                          /* SVCall handler */
    .word  DebugMon_Handler                     /* Debug monitor handler */
    .word  0                                    /* Reserved */
    .word  PendSV_Handler                       /* The PendSV handler */
    .word  SysTick_Handler                      /* The SysTick handler */
                                                /* External Interrupts */
    .word  DMA0_DMA16_IRQHandler                /* DMA channel 0,16 transfer complete */
    .word  DMA1_DMA17_IRQHandler                /* DMA channel 1,17 transfer complete */
    .word  DMA2_DMA18_IRQHandler                /* DMA channel 2,18 transfer complete */
    .word  DMA3_DMA19_IRQHandler                /* DMA channel 3,19 transfer complete */
    .word  DMA4_DMA20_IRQHandler                /* DMA channel 4,20 transfer complete */
    .word  DMA5_DMA21_IRQHandler                /* DMA channel 5,21 transfer complete */
    .word  DMA6_DMA22_IRQHandler                /* DMA channel 6,22 transfer complete */
    .word  DMA7_DMA23_IRQHandler                /* DMA channel 7,23 transfer complete */
    .word  DMA8_DMA24_IRQHandler                /* DMA channel 8,24 transfer complete */
    .word  DMA9_DMA25_IRQHandler                /* DMA channel 9,25 transfer complete */
    .word  DMA10_DMA26_IRQHandler               /* DMA channel 10,26 transfer complete */
    .word  DMA11_DMA27_IRQHandler               /* DMA channel 11,27 transfer complete */
    .word  DMA12_DMA28_IRQHandler               /* DMA channel 12,28 transfer complete */
    .word  DMA13_DMA29_IRQHandler               /* DMA channel 13,29 transfer complete */
    .word  DMA14_DMA30_IRQHandler               /* DMA channel 14,30 transfer complete */
    .word  DMA15_DMA31_IRQHandler               /* DMA channel 15,31 transfer complete */
    .word  DMA_Error_IRQHandler                 /* DMA channel 0 - 31 error */
    .word  MCM_IRQHandler                       /* MCM normal interrupt */
    .word  FTFA_IRQHandler                      /* FTFA command complete */
    .word  Read_Collision_IRQHandler            /* FTFA read collision */
    .word  LVD_LVW_IRQHandler                   /* PMC controller low-voltage detect, low-voltage warning */
    .word  LLWU_IRQHandler                      /* Low leakage wakeup unit */
    .word  WDOG_EWM_IRQHandler                  /* Single interrupt vector for  WDOG and EWM */
    .word  TRNG0_IRQHandler                     /* True randon number generator */
    .word  I2C0_IRQHandler                      /* Inter-integrated circuit 0 */
    .word  I2C1_IRQHandler                      /* Inter-integrated circuit 1 */
    .word  SPI0_IRQHandler                      /* Serial peripheral Interface 0 */
    .word  SPI1_IRQHandler                      /* Serial peripheral Interface 1 */
    .word  I2S0_Tx_IRQHandler                   /* Integrated interchip sound 0 transmit interrupt */
    .word  I2S0_Rx_IRQHandler                   /* Integrated interchip sound 0 receive interrupt */
    .word  LPUART0_IRQHandler                   /* LPUART0 receive/transmit/error interrupt */
    .word  LPUART1_IRQHandler                   /* LPUART1 receive/transmit/error interrupt */
    .word  LPUART2_IRQHandler                   /* LPUART2 receive/transmit/error interrupt */
    .word  LPUART3_IRQHandler                   /* LPUART3 receive/transmit/error interrupt */
    .word  LPUART4_IRQHandler                   /* LPUART4 receive/transmit/error interrupt */
    .word  Reserved51_IRQHandler                /* Reserved interrupt */
    .word  Reserved52_IRQHandler                /* Reserved interrupt */
    .word  EMVSIM0_IRQHandler                   /* EMVSIM0 common interrupt */
    .word  EMVSIM1_IRQHandler                   /* EMVSIM1 common interrupt */
    .word  ADC0_IRQHandler                      /* Analog-to-digital converter 0 */
    .word  CMP0_IRQHandler                      /* Comparator 0 */
    .word  CMP1_IRQHandler                      /* Comparator 1 */
    .word  FTM0_IRQHandler                      /* FlexTimer module 0 fault, overflow and channels interrupt */
    .word  FTM1_IRQHandler                      /* FlexTimer module 1 fault, overflow and channels interrupt */
    .word  FTM2_IRQHandler                      /* FlexTimer module 2 fault, overflow and channels interrupt */
    .word  CMT_IRQHandler                       /* Carrier modulator transmitter */
    .word  RTC_IRQHandler                       /* Real time clock */
    .word  RTC_Seconds_IRQHandler               /* Real time clock seconds */
    .word  PIT0CH0_IRQHandler                   /* Periodic interrupt timer 0 channel 0 */
    .word  PIT0CH1_IRQHandler                   /* Periodic interrupt timer 0 channel 1 */
    .word  PIT0CH2_IRQHandler                   /* Periodic interrupt timer 0 channel 2 */
    .word  PIT0CH3_IRQHandler                   /* Periodic interrupt timer 0 channel 3 */
    .word  PDB0_IRQHandler                      /* Programmable delay block */
    .word  USB0_IRQHandler                      /* USB OTG interrupt */
    .word  USBDCD_IRQHandler                    /* USB charger detect */
    .word  Reserved71_IRQHandler                /* Reserved interrupt */
    .word  DAC0_IRQHandler                      /* Digital-to-analog converter 0 */
    .word  MCG_IRQHandler                       /* Multipurpose clock generator */
    .word  LPTMR0_LPTMR1_IRQHandler             /* Single interrupt vector for  Low Power Timer 0 and 1 */
    .word  PORTA_IRQHandler                     /* Port A pin detect interrupt */
    .word  PORTB_IRQHandler                     /* Port B pin detect interrupt */
    .word  PORTC_IRQHandler                     /* Port C pin detect interrupt */
    .word  PORTD_IRQHandler                     /* Port D pin detect interrupt */
    .word  PORTE_IRQHandler                     /* Port E pin detect interrupt */
    .word  SWI_IRQHandler                       /* Software interrupt */
    .word  SPI2_IRQHandler                      /* Serial peripheral Interface 2 */
    .word  Reserved82_IRQHandler                /* Reserved interrupt */
    .word  Reserved83_IRQHandler                /* Reserved interrupt */
    .word  Reserved84_IRQHandler                /* Reserved interrupt */
    .word  Reserved85_IRQHandler                /* Reserved interrupt */
    .word  FLEXIO0_IRQHandler                   /* FLEXIO0 */
    .word  FTM3_IRQHandler                      /* FlexTimer module 3 fault, overflow and channels interrupt */
    .word  Reserved88_IRQHandler                /* Reserved interrupt */
    .word  Reserved89_IRQHandler                /* Reserved interrupt */
    .word  I2C2_IRQHandler                      /* Inter-integrated circuit 2 */
    .word  Reserved91_IRQHandler                /* Reserved interrupt */
    .word  Reserved92_IRQHandler                /* Reserved interrupt */
    .word  Reserved93_IRQHandler                /* Reserved interrupt */
    .word  Reserved94_IRQHandler                /* Reserved interrupt */
    .word  Reserved95_IRQHandler                /* Reserved interrupt */
    .word  Reserved96_IRQHandler                /* Reserved interrupt */
    .word  SDHC_IRQHandler                      /* Secured digital host controller */
    .word  Reserved98_IRQHandler                /* Reserved interrupt */
    .word  Reserved99_IRQHandler                /* Reserved interrupt */
    .word  Reserved100_IRQHandler               /* Reserved interrupt */
    .word  Reserved101_IRQHandler               /* Reserved interrupt */
    .word  Reserved102_IRQHandler               /* Reserved interrupt */
    .word  TSI0_IRQHandler                      /* Touch Sensing Input */
    .word  TPM1_IRQHandler                      /* TPM1 single interrupt vector for all sources */
    .word  TPM2_IRQHandler                      /* TPM2 single interrupt vector for all sources */
    .word  Reserved106_IRQHandler               /* Reserved interrupt */
    .word  I2C3_IRQHandler                      /* Inter-integrated circuit 3 */
    .word  Reserved108_IRQHandler               /* Reserved interrupt */
    .word  Reserved109_IRQHandler               /* Reserved interrupt */
    .word  Reserved110_IRQHandler               /* Reserved interrupt */
    .word  Reserved111_IRQHandler               /* Reserved interrupt */
    .word  Reserved112_IRQHandler               /* Reserved interrupt */
    .word  Reserved113_IRQHandler               /* Reserved interrupt */
    .word  Reserved114_IRQHandler               /* Reserved interrupt */
    .word  Reserved115_IRQHandler               /* Reserved interrupt */
    .word  QuadSPI0_IRQHandler                  /* qspi */
    .word  Reserved117_IRQHandler               /* Reserved interrupt */
    .word  Reserved118_IRQHandler               /* Reserved interrupt */
    .word  Reserved119_IRQHandler               /* Reserved interrupt */
    .word  LTC0_IRQHandler                      /* LP Trusted Cryptography */
    .word  Reserved121_IRQHandler               /* Reserved interrupt */
    .word  Reserved122_IRQHandler               /* Reserved interrupt */
    .word  Default_Handler                      /* 123 */
    .word  Default_Handler                      /* 124 */
    .word  Default_Handler                      /* 125 */
    .word  Default_Handler                      /* 126 */
    .word  Default_Handler                      /* 127 */
    .word  Default_Handler                      /* 128 */
    .word  Default_Handler                      /* 129 */
    .word  Default_Handler                      /* 130 */
    .word  Default_Handler                      /* 131 */
    .word  Default_Handler                      /* 132 */
    .word  Default_Handler                      /* 133 */
    .word  Default_Handler                      /* 134 */
    .word  Default_Handler                      /* 135 */
    .word  Default_Handler                      /* 136 */
    .word  Default_Handler                      /* 137 */
    .word  Default_Handler                      /* 138 */
    .word  Default_Handler                      /* 139 */
    .word  Default_Handler                      /* 140 */
    .word  Default_Handler                      /* 141 */
    .word  Default_Handler                      /* 142 */
    .word  Default_Handler                      /* 143 */
    .word  Default_Handler                      /* 144 */
    .word  Default_Handler                      /* 145 */
    .word  Default_Handler                      /* 146 */
    .word  Default_Handler                      /* 147 */
    .word  Default_Handler                      /* 148 */
    .word  Default_Handler                      /* 149 */
    .word  Default_Handler                      /* 150 */
    .word  Default_Handler                      /* 151 */
    .word  Default_Handler                      /* 152 */
    .word  Default_Handler                      /* 153 */
    .word  Default_Handler                      /* 154 */
    .word  Default_Handler                      /* 155 */
    .word  Default_Handler                      /* 156 */
    .word  Default_Handler                      /* 157 */
    .word  Default_Handler                      /* 158 */
    .word  Default_Handler                      /* 159 */
    .word  Default_Handler                      /* 160 */
    .word  Default_Handler                      /* 161 */
    .word  Default_Handler                      /* 162 */
    .word  Default_Handler                      /* 163 */
    .word  Default_Handler                      /* 164 */
    .word  Default_Handler                      /* 165 */
    .word  Default_Handler                      /* 166 */
    .word  Default_Handler                      /* 167 */
    .word  Default_Handler                      /* 168 */
    .word  Default_Handler                      /* 169 */
    .word  Default_Handler                      /* 170 */
    .word  Default_Handler                      /* 171 */
    .word  Default_Handler                      /* 172 */
    .word  Default_Handler                      /* 173 */
    .word  Default_Handler                      /* 174 */
    .word  Default_Handler                      /* 175 */
    .word  Default_Handler                      /* 176 */
    .word  Default_Handler                      /* 177 */
    .word  Default_Handler                      /* 178 */
    .word  Default_Handler                      /* 179 */
    .word  Default_Handler                      /* 180 */
    .word  Default_Handler                      /* 181 */
    .word  Default_Handler                      /* 182 */
    .word  Default_Handler                      /* 183 */
    .word  Default_Handler                      /* 184 */
    .word  Default_Handler                      /* 185 */
    .word  Default_Handler                      /* 186 */
    .word  Default_Handler                      /* 187 */
    .word  Default_Handler                      /* 188 */
    .word  Default_Handler                      /* 189 */
    .word  Default_Handler                      /* 190 */
    .word  Default_Handler                      /* 191 */
    .word  Default_Handler                      /* 192 */
    .word  Default_Handler                      /* 193 */
    .word  Default_Handler                      /* 194 */
    .word  Default_Handler                      /* 195 */
    .word  Default_Handler                      /* 196 */
    .word  Default_Handler                      /* 197 */
    .word  Default_Handler                      /* 198 */
    .word  Default_Handler                      /* 199 */
    .word  Default_Handler                      /* 200 */
    .word  Default_Handler                      /* 201 */
    .word  Default_Handler                      /* 202 */
    .word  Default_Handler                      /* 203 */
    .word  Default_Handler                      /* 204 */
    .word  Default_Handler                      /* 205 */
    .word  Default_Handler                      /* 206 */
    .word  Default_Handler                      /* 207 */
    .word  Default_Handler                      /* 208 */
    .word  Default_Handler                      /* 209 */
    .word  Default_Handler                      /* 210 */
    .word  Default_Handler                      /* 211 */
    .word  Default_Handler                      /* 212 */
    .word  Default_Handler                      /* 213 */
    .word  Default_Handler                      /* 214 */
    .word  Default_Handler                      /* 215 */
    .word  Default_Handler                      /* 216 */
    .word  Default_Handler                      /* 217 */
    .word  Default_Handler                      /* 218 */
    .word  Default_Handler                      /* 219 */
    .word  Default_Handler                      /* 220 */
    .word  Default_Handler                      /* 221 */
    .word  Default_Handler                      /* 222 */
    .word  Default_Handler                      /* 223 */
    .word  Default_Handler                      /* 224 */
    .word  Default_Handler                      /* 225 */
    .word  Default_Handler                      /* 226 */
    .word  Default_Handler                      /* 227 */
    .word  Default_Handler                      /* 228 */
    .word  Default_Handler                      /* 229 */
    .word  Default_Handler                      /* 230 */
    .word  Default_Handler                      /* 231 */
    .word  Default_Handler                      /* 232 */
    .word  Default_Handler                      /* 233 */
    .word  Default_Handler                      /* 234 */
    .word  Default_Handler                      /* 235 */
    .word  Default_Handler                      /* 236 */
    .word  Default_Handler                      /* 237 */
    .word  Default_Handler                      /* 238 */
    .word  Default_Handler                      /* 239 */

/*******************************************************************************
*
* Provide weak aliases for each Exception handler to the Default_Handler.
* As they are weak aliases, any function with the same name will override
* this definition.
*
*******************************************************************************/

    .weak      NMI_Handler
    .thumb_set NMI_Handler,Default_Handler

    .weak      HardFault_Handler
    .thumb_set HardFault_Handler,Default_Handler

    .weak      MemManage_Handler
    .thumb_set MemManage_Handler,Default_Handler

    .weak      BusFault_Handler
    .thumb_set BusFault_Handler,Default_Handler

    .weak      UsageFault_Handler
    .thumb_set UsageFault_Handler,Default_Handler

    .weak      SVC_Handler
    .thumb_set SVC_Handler,Default_Handler

    .weak      DebugMon_Handler
    .thumb_set DebugMon_Handler,Default_Handler

    .weak      PendSV_Handler
    .thumb_set PendSV_Handler,Default_Handler

    .weak      SysTick_Handler
    .thumb_set SysTick_Handler,Default_Handler

    .weak      DMA0_DMA16_IRQHandler
    .thumb_set DMA0_DMA16_IRQHandler,Default_Handler

    .weak      DMA1_DMA17_IRQHandler
    .thumb_set DMA1_DMA17_IRQHandler,Default_Handler

    .weak      DMA2_DMA18_IRQHandler
    .thumb_set DMA2_DMA18_IRQHandler,Default_Handler

    .weak      DMA3_DMA19_IRQHandler
    .thumb_set DMA3_DMA19_IRQHandler,Default_Handler

    .weak      DMA4_DMA20_IRQHandler
    .thumb_set DMA4_DMA20_IRQHandler,Default_Handler

    .weak      DMA5_DMA21_IRQHandler
    .thumb_set DMA5_DMA21_IRQHandler,Default_Handler

    .weak      DMA6_DMA22_IRQHandler
    .thumb_set DMA6_DMA22_IRQHandler,Default_Handler

    .weak      DMA7_DMA23_IRQHandler
    .thumb_set DMA7_DMA23_IRQHandler,Default_Handler

    .weak      DMA8_DMA24_IRQHandler
    .thumb_set DMA8_DMA24_IRQHandler,Default_Handler

    .weak      DMA9_DMA25_IRQHandler
    .thumb_set DMA9_DMA25_IRQHandler,Default_Handler

    .weak      DMA10_DMA26_IRQHandler
    .thumb_set DMA10_DMA26_IRQHandler,Default_Handler

    .weak      DMA11_DMA27_IRQHandler
    .thumb_set DMA11_DMA27_IRQHandler,Default_Handler

    .weak      DMA12_DMA28_IRQHandler
    .thumb_set DMA12_DMA28_IRQHandler,Default_Handler

    .weak      DMA13_DMA29_IRQHandler
    .thumb_set DMA13_DMA29_IRQHandler,Default_Handler

    .weak      DMA14_DMA30_IRQHandler
    .thumb_set DMA14_DMA30_IRQHandler,Default_Handler

    .weak      DMA15_DMA31_IRQHandler
    .thumb_set DMA15_DMA31_IRQHandler,Default_Handler

    .weak      DMA_Error_IRQHandler
    .thumb_set DMA_Error_IRQHandler,Default_Handler

    .weak      MCM_IRQHandler
    .thumb_set MCM_IRQHandler,Default_Handler

    .weak      FTFA_IRQHandler
    .thumb_set FTFA_IRQHandler,Default_Handler

    .weak      Read_Collision_IRQHandler
    .thumb_set Read_Collision_IRQHandler,Default_Handler

    .weak      LVD_LVW_IRQHandler
    .thumb_set LVD_LVW_IRQHandler,Default_Handler

    .weak      LLWU_IRQHandler
    .thumb_set LLWU_IRQHandler,Default_Handler

    .weak      WDOG_EWM_IRQHandler
    .thumb_set WDOG_EWM_IRQHandler,Default_Handler

    .weak      TRNG0_IRQHandler
    .thumb_set TRNG0_IRQHandler,Default_Handler

    .weak      I2C0_IRQHandler
    .thumb_set I2C0_IRQHandler,Default_Handler

    .weak      I2C1_IRQHandler
    .thumb_set I2C1_IRQHandler,Default_Handler

    .weak      SPI0_IRQHandler
    .thumb_set SPI0_IRQHandler,Default_Handler

    .weak      SPI1_IRQHandler
    .thumb_set SPI1_IRQHandler,Default_Handler

    .weak      I2S0_Tx_IRQHandler
    .thumb_set I2S0_Tx_IRQHandler,Default_Handler

    .weak      I2S0_Rx_IRQHandler
    .thumb_set I2S0_Rx_IRQHandler,Default_Handler

    .weak      LPUART0_IRQHandler
    .thumb_set LPUART0_IRQHandler,Default_Handler

    .weak      LPUART1_IRQHandler
    .thumb_set LPUART1_IRQHandler,Default_Handler

    .weak      LPUART2_IRQHandler
    .thumb_set LPUART2_IRQHandler,Default_Handler

    .weak      LPUART3_IRQHandler
    .thumb_set LPUART3_IRQHandler,Default_Handler

    .weak      LPUART4_IRQHandler
    .thumb_set LPUART4_IRQHandler,Default_Handler

    .weak      Reserved51_IRQHandler
    .thumb_set Reserved51_IRQHandler,Default_Handler

    .weak      Reserved52_IRQHandler
    .thumb_set Reserved52_IRQHandler,Default_Handler

    .weak      EMVSIM0_IRQHandler
    .thumb_set EMVSIM0_IRQHandler,Default_Handler

    .weak      EMVSIM1_IRQHandler
    .thumb_set EMVSIM1_IRQHandler,Default_Handler

    .weak      ADC0_IRQHandler
    .thumb_set ADC0_IRQHandler,Default_Handler

    .weak      CMP0_IRQHandler
    .thumb_set CMP0_IRQHandler,Default_Handler

    .weak      CMP1_IRQHandler
    .thumb_set CMP1_IRQHandler,Default_Handler

    .weak      FTM0_IRQHandler
    .thumb_set FTM0_IRQHandler,Default_Handler

    .weak      FTM1_IRQHandler
    .thumb_set FTM1_IRQHandler,Default_Handler

    .weak      FTM2_IRQHandler
    .thumb_set FTM2_IRQHandler,Default_Handler

    .weak      CMT_IRQHandler
    .thumb_set CMT_IRQHandler,Default_Handler

    .weak      RTC_IRQHandler
    .thumb_set RTC_IRQHandler,Default_Handler

    .weak      RTC_Seconds_IRQHandler
    .thumb_set RTC_Seconds_IRQHandler,Default_Handler

    .weak      PIT0CH0_IRQHandler
    .thumb_set PIT0CH0_IRQHandler,Default_Handler

    .weak      PIT0CH1_IRQHandler
    .thumb_set PIT0CH1_IRQHandler,Default_Handler

    .weak      PIT0CH2_IRQHandler
    .thumb_set PIT0CH2_IRQHandler,Default_Handler

    .weak      PIT0CH3_IRQHandler
    .thumb_set PIT0CH3_IRQHandler,Default_Handler

    .weak      PDB0_IRQHandler
    .thumb_set PDB0_IRQHandler,Default_Handler

    .weak      USB0_IRQHandler
    .thumb_set USB0_IRQHandler,Default_Handler

    .weak      USBDCD_IRQHandler
    .thumb_set USBDCD_IRQHandler,Default_Handler

    .weak      Reserved71_IRQHandler
    .thumb_set Reserved71_IRQHandler,Default_Handler

    .weak      DAC0_IRQHandler
    .thumb_set DAC0_IRQHandler,Default_Handler

    .weak      MCG_IRQHandler
    .thumb_set MCG_IRQHandler,Default_Handler

    .weak      LPTMR0_LPTMR1_IRQHandler
    .thumb_set LPTMR0_LPTMR1_IRQHandler,Default_Handler

    .weak      PORTA_IRQHandler
    .thumb_set PORTA_IRQHandler,Default_Handler

    .weak      PORTB_IRQHandler
    .thumb_set PORTB_IRQHandler,Default_Handler

    .weak      PORTC_IRQHandler
    .thumb_set PORTC_IRQHandler,Default_Handler

    .weak      PORTD_IRQHandler
    .thumb_set PORTD_IRQHandler,Default_Handler

    .weak      PORTE_IRQHandler
    .thumb_set PORTE_IRQHandler,Default_Handler

    .weak      SWI_IRQHandler
    .thumb_set SWI_IRQHandler,Default_Handler

    .weak      SPI2_IRQHandler
    .thumb_set SPI2_IRQHandler,Default_Handler

    .weak      Reserved82_IRQHandler
    .thumb_set Reserved82_IRQHandler,Default_Handler

    .weak      Reserved83_IRQHandler
    .thumb_set Reserved83_IRQHandler,Default_Handler

    .weak      Reserved84_IRQHandler
    .thumb_set Reserved84_IRQHandler,Default_Handler

    .weak      Reserved85_IRQHandler
    .thumb_set Reserved85_IRQHandler,Default_Handler

    .weak      FLEXIO0_IRQHandler
    .thumb_set FLEXIO0_IRQHandler,Default_Handler

    .weak      FTM3_IRQHandler
    .thumb_set FTM3_IRQHandler,Default_Handler

    .weak      Reserved88_IRQHandler
    .thumb_set Reserved88_IRQHandler,Default_Handler

    .weak      Reserved89_IRQHandler
    .thumb_set Reserved89_IRQHandler,Default_Handler

    .weak      I2C2_IRQHandler
    .thumb_set I2C2_IRQHandler,Default_Handler

    .weak      Reserved91_IRQHandler
    .thumb_set Reserved91_IRQHandler,Default_Handler

    .weak      Reserved92_IRQHandler
    .thumb_set Reserved92_IRQHandler,Default_Handler

    .weak      Reserved93_IRQHandler
    .thumb_set Reserved93_IRQHandler,Default_Handler

    .weak      Reserved94_IRQHandler
    .thumb_set Reserved94_IRQHandler,Default_Handler

    .weak      Reserved95_IRQHandler
    .thumb_set Reserved95_IRQHandler,Default_Handler

    .weak      Reserved96_IRQHandler
    .thumb_set Reserved96_IRQHandler,Default_Handler

    .weak      SDHC_IRQHandler
    .thumb_set SDHC_IRQHandler,Default_Handler

    .weak      Reserved98_IRQHandler
    .thumb_set Reserved98_IRQHandler,Default_Handler

    .weak      Reserved99_IRQHandler
    .thumb_set Reserved99_IRQHandler,Default_Handler

    .weak      Reserved100_IRQHandler
    .thumb_set Reserved100_IRQHandler,Default_Handler

    .weak      Reserved101_IRQHandler
    .thumb_set Reserved101_IRQHandler,Default_Handler

    .weak      Reserved102_IRQHandler
    .thumb_set Reserved102_IRQHandler,Default_Handler

    .weak      TSI0_IRQHandler
    .thumb_set TSI0_IRQHandler,Default_Handler

    .weak      TPM1_IRQHandler
    .thumb_set TPM1_IRQHandler,Default_Handler

    .weak      TPM2_IRQHandler
    .thumb_set TPM2_IRQHandler,Default_Handler

    .weak      Reserved106_IRQHandler
    .thumb_set Reserved106_IRQHandler,Default_Handler

    .weak      I2C3_IRQHandler
    .thumb_set I2C3_IRQHandler,Default_Handler

    .weak      Reserved108_IRQHandler
    .thumb_set Reserved108_IRQHandler,Default_Handler

    .weak      Reserved109_IRQHandler
    .thumb_set Reserved109_IRQHandler,Default_Handler

    .weak      Reserved110_IRQHandler
    .thumb_set Reserved110_IRQHandler,Default_Handler

    .weak      Reserved111_IRQHandler
    .thumb_set Reserved111_IRQHandler,Default_Handler

    .weak      Reserved112_IRQHandler
    .thumb_set Reserved112_IRQHandler,Default_Handler

    .weak      Reserved113_IRQHandler
    .thumb_set Reserved113_IRQHandler,Default_Handler

    .weak      Reserved114_IRQHandler
    .thumb_set Reserved114_IRQHandler,Default_Handler

    .weak      Reserved115_IRQHandler
    .thumb_set Reserved115_IRQHandler,Default_Handler

    .weak      QuadSPI0_IRQHandler
    .thumb_set QuadSPI0_IRQHandler,Default_Handler

    .weak      Reserved117_IRQHandler
    .thumb_set Reserved117_IRQHandler,Default_Handler

    .weak      Reserved118_IRQHandler
    .thumb_set Reserved118_IRQHandler,Default_Handler

    .weak      Reserved119_IRQHandler
    .thumb_set Reserved119_IRQHandler,Default_Handler

    .weak      LTC0_IRQHandler
    .thumb_set LTC0_IRQHandler,Default_Handler

    .weak      Reserved121_IRQHandler
    .thumb_set Reserved121_IRQHandler,Default_Handler

    .weak      Reserved122_IRQHandler
    .thumb_set Reserved122_IRQHandler,Default_Handler
