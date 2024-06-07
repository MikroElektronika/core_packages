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
    .word  DMA0_IRQHandler                      /* DMA Channel 0 Transfer Complete */
    .word  DMA1_IRQHandler                      /* DMA Channel 1 Transfer Complete */
    .word  DMA2_IRQHandler                      /* DMA Channel 2 Transfer Complete */
    .word  DMA3_IRQHandler                      /* DMA Channel 3 Transfer Complete */
    .word  DMA4_IRQHandler                      /* DMA Channel 4 Transfer Complete */
    .word  DMA5_IRQHandler                      /* DMA Channel 5 Transfer Complete */
    .word  DMA6_IRQHandler                      /* DMA Channel 6 Transfer Complete */
    .word  DMA7_IRQHandler                      /* DMA Channel 7 Transfer Complete */
    .word  DMA8_IRQHandler                      /* DMA Channel 8 Transfer Complete */
    .word  DMA9_IRQHandler                      /* DMA Channel 9 Transfer Complete */
    .word  DMA10_IRQHandler                     /* DMA Channel 10 Transfer Complete */
    .word  DMA11_IRQHandler                     /* DMA Channel 11 Transfer Complete */
    .word  DMA12_IRQHandler                     /* DMA Channel 12 Transfer Complete */
    .word  DMA13_IRQHandler                     /* DMA Channel 13 Transfer Complete */
    .word  DMA14_IRQHandler                     /* DMA Channel 14 Transfer Complete */
    .word  DMA15_IRQHandler                     /* DMA Channel 15 Transfer Complete */
    .word  DMA_Error_IRQHandler                 /* DMA Error Interrupt */
    .word  MCM_IRQHandler                       /* Normal Interrupt */
    .word  FTFE_IRQHandler                      /* FTFE Command complete interrupt */
    .word  Read_Collision_IRQHandler            /* Read Collision Interrupt */
    .word  LVD_LVW_IRQHandler                   /* Low Voltage Detect, Low Voltage Warning */
    .word  LLWU_IRQHandler                      /* Low Leakage Wakeup Unit */
    .word  WDOG_EWM_IRQHandler                  /* WDOG Interrupt */
    .word  Reserved39_IRQHandler                /* Reserved interrupt 39  */
    .word  I2C0_IRQHandler                      /* I2C0 interrupt */
    .word  I2C1_IRQHandler                      /* I2C1 interrupt */
    .word  SPI0_IRQHandler                      /* SPI0 Interrupt */
    .word  SPI1_IRQHandler                      /* SPI1 Interrupt */
    .word  I2S0_Tx_IRQHandler                   /* I2S0 transmit interrupt */
    .word  I2S0_Rx_IRQHandler                   /* I2S0 receive interrupt */
    .word  Reserved46_IRQHandler                /* Reserved interrupt 46  */
    .word  UART0_IRQHandler                     /* UART0 Receive/Transmit interrupt */
    .word  UART0_ERR_IRQHandler                 /* UART0 Error interrupt */
    .word  UART1_IRQHandler                     /* UART1 Receive/Transmit interrupt */
    .word  UART1_ERR_IRQHandler                 /* UART1 Error interrupt */
    .word  UART2_IRQHandler                     /* UART2 Receive/Transmit interrupt */
    .word  UART2_ERR_IRQHandler                 /* UART2 Error interrupt */
    .word  UART3_IRQHandler                     /* UART3 Receive/Transmit interrupt */
    .word  UART3_ERR_IRQHandler                 /* UART3 Error interrupt */
    .word  ADC0_IRQHandler                      /* ADC0 interrupt */
    .word  CMP0_IRQHandler                      /* CMP0 interrupt */
    .word  CMP1_IRQHandler                      /* CMP1 interrupt */
    .word  FTM0_IRQHandler                      /* FTM0 fault, overflow and channels interrupt */
    .word  FTM1_IRQHandler                      /* FTM1 fault, overflow and channels interrupt */
    .word  FTM2_IRQHandler                      /* FTM2 fault, overflow and channels interrupt */
    .word  CMT_IRQHandler                       /* CMT interrupt */
    .word  RTC_IRQHandler                       /* RTC interrupt */
    .word  RTC_Seconds_IRQHandler               /* RTC seconds interrupt */
    .word  PIT0_IRQHandler                      /* PIT timer channel 0 interrupt */
    .word  PIT1_IRQHandler                      /* PIT timer channel 1 interrupt */
    .word  PIT2_IRQHandler                      /* PIT timer channel 2 interrupt */
    .word  PIT3_IRQHandler                      /* PIT timer channel 3 interrupt */
    .word  PDB0_IRQHandler                      /* PDB0 Interrupt */
    .word  USB0_IRQHandler                      /* USB0 interrupt */
    .word  USBDCD_IRQHandler                    /* USBDCD Interrupt */
    .word  Reserved71_IRQHandler                /* Reserved interrupt 71 */
    .word  DAC0_IRQHandler                      /* DAC0 interrupt */
    .word  MCG_IRQHandler                       /* MCG Interrupt */
    .word  LPTMR0_IRQHandler                    /* LPTimer interrupt */
    .word  PORTA_IRQHandler                     /* Port A interrupt */
    .word  PORTB_IRQHandler                     /* Port B interrupt */
    .word  PORTC_IRQHandler                     /* Port C interrupt */
    .word  PORTD_IRQHandler                     /* Port D interrupt */
    .word  PORTE_IRQHandler                     /* Port E interrupt */
    .word  SWI_IRQHandler                       /* Software interrupt */
    .word  SPI2_IRQHandler                      /* SPI2 Interrupt */
    .word  UART4_IRQHandler                     /* UART4 Receive/Transmit interrupt */
    .word  UART4_ERR_IRQHandler                 /* UART4 Error interrupt */
    .word  UART5_IRQHandler                     /* UART5 Receive/Transmit interrupt */
    .word  UART5_ERR_IRQHandler                 /* UART5 Error interrupt */
    .word  CMP2_IRQHandler                      /* CMP2 interrupt */
    .word  FTM3_IRQHandler                      /* FTM3 fault, overflow and channels interrupt */
    .word  DAC1_IRQHandler                      /* DAC1 interrupt */
    .word  ADC1_IRQHandler                      /* ADC1 interrupt */
    .word  I2C2_IRQHandler                      /* I2C2 interrupt */
    .word  CAN0_ORed_Message_buffer_IRQHandler  /* CAN0 OR'd message buffers interrupt */
    .word  CAN0_Bus_Off_IRQHandler              /* CAN0 bus off interrupt */
    .word  CAN0_Error_IRQHandler                /* CAN0 error interrupt */
    .word  CAN0_Tx_Warning_IRQHandler           /* CAN0 Tx warning interrupt */
    .word  CAN0_Rx_Warning_IRQHandler           /* CAN0 Rx warning interrupt */
    .word  CAN0_Wake_Up_IRQHandler              /* CAN0 wake up interrupt */
    .word  SDHC_IRQHandler                      /* SDHC interrupt */
    .word  Default_Handler                      /* 98  */
    .word  Default_Handler                      /* 99  */
    .word  Default_Handler                      /* 100  */
    .word  Default_Handler                      /* 101  */
    .word  Default_Handler                      /* 102 */
    .word  Default_Handler                      /* 103 */
    .word  Default_Handler                      /* 104 */
    .word  Default_Handler                      /* 105 */
    .word  Default_Handler                      /* 106 */
    .word  Default_Handler                      /* 107 */
    .word  Default_Handler                      /* 108 */
    .word  Default_Handler                      /* 109 */
    .word  Default_Handler                      /* 110 */
    .word  Default_Handler                      /* 111 */
    .word  Default_Handler                      /* 112 */
    .word  Default_Handler                      /* 113 */
    .word  Default_Handler                      /* 114 */
    .word  Default_Handler                      /* 115 */
    .word  Default_Handler                      /* 116 */
    .word  Default_Handler                      /* 117 */
    .word  Default_Handler                      /* 118 */
    .word  Default_Handler                      /* 119 */
    .word  Default_Handler                      /* 120 */
    .word  Default_Handler                      /* 121 */
    .word  Default_Handler                      /* 122 */
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
    .word  Default_Handler                      /* 240 */
    .word  Default_Handler                      /* 241 */
    .word  Default_Handler                      /* 242 */
    .word  Default_Handler                      /* 243 */
    .word  Default_Handler                      /* 244 */
    .word  Default_Handler                      /* 245 */
    .word  Default_Handler                      /* 246 */
    .word  Default_Handler                      /* 247 */
    .word  Default_Handler                      /* 248 */
    .word  Default_Handler                      /* 249 */
    .word  Default_Handler                      /* 250 */
    .word  Default_Handler                      /* 251 */
    .word  Default_Handler                      /* 252 */
    .word  Default_Handler                      /* 253 */
    .word  Default_Handler                      /* 254 */
    .word  0xFFFFFFFF                           /* Reserved for user TRIM value */

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

    .weak      DMA0_IRQHandler
    .thumb_set DMA0_IRQHandler,Default_Handler

    .weak      DMA1_IRQHandler
    .thumb_set DMA1_IRQHandler,Default_Handler

    .weak      DMA2_IRQHandler
    .thumb_set DMA2_IRQHandler,Default_Handler

    .weak      DMA3_IRQHandler
    .thumb_set DMA3_IRQHandler,Default_Handler

    .weak      DMA4_IRQHandler
    .thumb_set DMA4_IRQHandler,Default_Handler

    .weak      DMA5_IRQHandler
    .thumb_set DMA5_IRQHandler,Default_Handler

    .weak      DMA6_IRQHandler
    .thumb_set DMA6_IRQHandler,Default_Handler

    .weak      DMA7_IRQHandler
    .thumb_set DMA7_IRQHandler,Default_Handler

    .weak      DMA8_IRQHandler
    .thumb_set DMA8_IRQHandler,Default_Handler

    .weak      DMA9_IRQHandler
    .thumb_set DMA9_IRQHandler,Default_Handler

    .weak      DMA10_IRQHandler
    .thumb_set DMA10_IRQHandler,Default_Handler

    .weak      DMA11_IRQHandler
    .thumb_set DMA11_IRQHandler,Default_Handler

    .weak      DMA12_IRQHandler
    .thumb_set DMA12_IRQHandler,Default_Handler

    .weak      DMA13_IRQHandler
    .thumb_set DMA13_IRQHandler,Default_Handler

    .weak      DMA14_IRQHandler
    .thumb_set DMA14_IRQHandler,Default_Handler

    .weak      DMA15_IRQHandler
    .thumb_set DMA15_IRQHandler,Default_Handler

    .weak      DMA_Error_IRQHandler
    .thumb_set DMA_Error_IRQHandler,Default_Handler

    .weak      MCM_IRQHandler
    .thumb_set MCM_IRQHandler,Default_Handler

    .weak      FTFE_IRQHandler
    .thumb_set FTFE_IRQHandler,Default_Handler

    .weak      Read_Collision_IRQHandler
    .thumb_set Read_Collision_IRQHandler,Default_Handler

    .weak      LVD_LVW_IRQHandler
    .thumb_set LVD_LVW_IRQHandler,Default_Handler

    .weak      LLWU_IRQHandler
    .thumb_set LLWU_IRQHandler,Default_Handler

    .weak      WDOG_EWM_IRQHandler
    .thumb_set WDOG_EWM_IRQHandler,Default_Handler

    .weak      Reserved39_IRQHandler
    .thumb_set Reserved39_IRQHandler,Default_Handler

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

    .weak      Reserved46_IRQHandler
    .thumb_set Reserved46_IRQHandler,Default_Handler

    .weak      UART0_IRQHandler
    .thumb_set UART0_IRQHandler,Default_Handler

    .weak      UART0_ERR_IRQHandler
    .thumb_set UART0_ERR_IRQHandler,Default_Handler

    .weak      UART1_IRQHandler
    .thumb_set UART1_IRQHandler,Default_Handler

    .weak      UART1_ERR_IRQHandler
    .thumb_set UART1_ERR_IRQHandler,Default_Handler

    .weak      UART2_IRQHandler
    .thumb_set UART2_IRQHandler,Default_Handler

    .weak      UART2_ERR_IRQHandler
    .thumb_set UART2_ERR_IRQHandler,Default_Handler

    .weak      UART3_IRQHandler
    .thumb_set UART3_IRQHandler,Default_Handler

    .weak      UART3_ERR_IRQHandler
    .thumb_set UART3_ERR_IRQHandler,Default_Handler

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

    .weak      PIT0_IRQHandler
    .thumb_set PIT0_IRQHandler,Default_Handler

    .weak      PIT1_IRQHandler
    .thumb_set PIT1_IRQHandler,Default_Handler

    .weak      PIT2_IRQHandler
    .thumb_set PIT2_IRQHandler,Default_Handler

    .weak      PIT3_IRQHandler
    .thumb_set PIT3_IRQHandler,Default_Handler

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

    .weak      LPTMR0_IRQHandler
    .thumb_set LPTMR0_IRQHandler,Default_Handler

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

    .weak      UART4_IRQHandler
    .thumb_set UART4_IRQHandler,Default_Handler

    .weak      UART4_ERR_IRQHandler
    .thumb_set UART4_ERR_IRQHandler,Default_Handler

    .weak      UART5_IRQHandler
    .thumb_set UART5_IRQHandler,Default_Handler

    .weak      UART5_ERR_IRQHandler
    .thumb_set UART5_ERR_IRQHandler,Default_Handler

    .weak      CMP2_IRQHandler
    .thumb_set CMP2_IRQHandler,Default_Handler

    .weak      FTM3_IRQHandler
    .thumb_set FTM3_IRQHandler,Default_Handler

    .weak      DAC1_IRQHandler
    .thumb_set DAC1_IRQHandler,Default_Handler

    .weak      ADC1_IRQHandler
    .thumb_set ADC1_IRQHandler,Default_Handler

    .weak      I2C2_IRQHandler
    .thumb_set I2C2_IRQHandler,Default_Handler

    .weak      CAN0_ORed_Message_buffer_IRQHandler
    .thumb_set CAN0_ORed_Message_buffer_IRQHandler,Default_Handler

    .weak      CAN0_Bus_Off_IRQHandler
    .thumb_set CAN0_Bus_Off_IRQHandler,Default_Handler

    .weak      CAN0_Error_IRQHandler
    .thumb_set CAN0_Error_IRQHandler,Default_Handler

    .weak      CAN0_Tx_Warning_IRQHandler
    .thumb_set CAN0_Tx_Warning_IRQHandler,Default_Handler

    .weak      CAN0_Rx_Warning_IRQHandler
    .thumb_set CAN0_Rx_Warning_IRQHandler,Default_Handler

    .weak      CAN0_Wake_Up_IRQHandler
    .thumb_set CAN0_Wake_Up_IRQHandler,Default_Handler

    .weak      SDHC_IRQHandler
    .thumb_set SDHC_IRQHandler,Default_Handler
