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
    .word  DMA0_IRQHandler                      /* DMA channel 0, 16 transfer complete */
    .word  DMA1_IRQHandler                      /* DMA channel 1, 17 transfer complete */
    .word  DMA2_IRQHandler                      /* DMA channel 2, 18 transfer complete */
    .word  DMA3_IRQHandler                      /* DMA channel 3, 19 transfer complete */
    .word  DMA4_IRQHandler                      /* DMA channel 4, 20 transfer complete */
    .word  DMA5_IRQHandler                      /* DMA channel 5, 21 transfer complete */
    .word  DMA6_IRQHandler                      /* DMA channel 6, 22 transfer complete */
    .word  DMA7_IRQHandler                      /* DMA channel 7, 23 transfer complete */
    .word  DMA8_IRQHandler                      /* DMA channel 8, 24 transfer complete */
    .word  DMA9_IRQHandler                      /* DMA channel 9, 25 transfer complete */
    .word  DMA10_IRQHandler                     /* DMA channel 10, 26 transfer complete */
    .word  DMA11_IRQHandler                     /* DMA channel 11, 27 transfer complete */
    .word  DMA12_IRQHandler                     /* DMA channel 12, 28 transfer complete */
    .word  DMA13_IRQHandler                     /* DMA channel 13, 29 transfer complete */
    .word  DMA14_IRQHandler                     /* DMA channel 14, 30 transfer complete */
    .word  DMA15_IRQHandler                     /* DMA channel 15, 31 transfer complete */
    .word  DMA_Error_IRQHandler                 /* DMA error interrupt channels 0-1531 */
    .word  MCM_IRQHandler                       /* MCM interrupt */
    .word  FTFA_IRQHandler                      /* Command complete */
    .word  FTFA_Collision_IRQHandler            /* Read collision */
    .word  PMC_IRQHandler                       /* Low-voltage detect, low-voltage warning */
    .word  LLWU_IRQHandler                      /* Low Leakage Wakeup */
    .word  WDOG_EWM_IRQHandler                  /* Both watchdog modules share this interrupt */
    .word  Reserved39_IRQHandler                /* Reserved interrupt */
    .word  I2C0_IRQHandler                      /* I2C0 */
    .word  Reserved41_IRQHandler                /* Reserved interrupt */
    .word  SPI0_IRQHandler                      /* SPI0 */
    .word  Reserved43_IRQHandler                /* Reserved interrupt */
    .word  Reserved44_IRQHandler                /* Reserved interrupt */
    .word  Reserved45_IRQHandler                /* Reserved interrupt */
    .word  Reserved46_IRQHandler                /* Reserved interrupt */
    .word  UART0_IRQHandler                     /* UART0 status sources */
    .word  UART0_ERR_IRQHandler                 /* UART0 error sources */
    .word  UART1_IRQHandler                     /* UART1 status sources */
    .word  UART1_ERR_IRQHandler                 /* UART1 error sources */
    .word  Reserved51_IRQHandler                /* Reserved interrupt */
    .word  Reserved52_IRQHandler                /* Reserved interrupt */
    .word  Reserved53_IRQHandler                /* Reserved interrupt */
    .word  ADC_ERR_IRQHandler                   /* ADC_ERR A and B ( zero cross, high/low limit) */
    .word  ADCA_IRQHandler                      /* ADCA Scan complete */
    .word  CMP0_IRQHandler                      /* CMP0 */
    .word  CMP1_IRQHandler                      /* CMP1 */
    .word  Reserved58_IRQHandler                /* Reserved interrupt */
    .word  Reserved59_IRQHandler                /* Reserved interrupt */
    .word  Reserved60_IRQHandler                /* Reserved interrupt */
    .word  Reserved61_IRQHandler                /* Reserved interrupt */
    .word  Reserved62_IRQHandler                /* Reserved interrupt */
    .word  Reserved63_IRQHandler                /* Reserved interrupt */
    .word  PIT0_IRQHandler                      /* PIT Channel 0 */
    .word  PIT1_IRQHandler                      /* PIT Channel 1 */
    .word  PIT2_IRQHandler                      /* PIT Channel 2 */
    .word  PIT3_IRQHandler                      /* PIT Channel 3 */
    .word  PDB0_IRQHandler                      /* PDB0 */
    .word  Reserved69_IRQHandler                /* Reserved interrupt */
    .word  XBARA_IRQHandler                     /* XBARA */
    .word  PDB1_IRQHandler                      /* PDB1 */
    .word  DAC0_IRQHandler                      /* DAC0 */
    .word  MCG_IRQHandler                       /* MCG */
    .word  LPTMR0_IRQHandler                    /* LPTMR0 */
    .word  PORTA_IRQHandler                     /* Pin detect (Port A) */
    .word  PORTB_IRQHandler                     /* Pin detect (Port B) */
    .word  PORTC_IRQHandler                     /* Pin detect (Port C) */
    .word  PORTD_IRQHandler                     /* Pin detect (Port D) */
    .word  PORTE_IRQHandler                     /* Pin detect (Port E) */
    .word  SWI_IRQHandler                       /* Software */
    .word  Reserved81_IRQHandler                /* Reserved interrupt */
    .word  ENC0_COMPARE_IRQHandler              /* ENC0 Compare */
    .word  ENC0_HOME_IRQHandler                 /* ENC0 Home */
    .word  ENC0_WDOG_SAB_IRQHandler             /* ENC0 Watchdog/Simultaneous A and B change */
    .word  ENC0_INDEX_IRQHandler                /* ENC0 Index/Roll over/Roll Under */
    .word  CMP2_IRQHandler                      /* CMP2 */
    .word  Reserved87_IRQHandler                /* Reserved interrupt */
    .word  Reserved88_IRQHandler                /* Reserved interrupt */
    .word  ADCB_IRQHandler                      /* ADCB Scan complete */
    .word  Reserved90_IRQHandler                /* Reserved interrupt */
    .word  CAN0_ORed_Message_buffer_IRQHandler  /* FLexCAN0 OR'ed Message buffer (0-15) */
    .word  CAN0_Bus_Off_IRQHandler              /* FLexCAN0 Bus Off */
    .word  CAN0_Error_IRQHandler                /* FLexCAN0 Error */
    .word  CAN0_Tx_Warning_IRQHandler           /* FLexCAN0 Transmit Warning */
    .word  CAN0_Rx_Warning_IRQHandler           /* FLexCAN0 Receive Warning */
    .word  CAN0_Wake_Up_IRQHandler              /* FLexCAN0 Wake Up */
    .word  PWMA_CMP0_IRQHandler                 /* eFlexPWM submodule 0 Compare */
    .word  PWMA_RELOAD0_IRQHandler              /* eFlexPWM submodule 0 Reload */
    .word  PWMA_CMP1_IRQHandler                 /* eFlexPWM submodule 1 Compare */
    .word  PWMA_RELOAD1_IRQHandler              /* eFlexPWM submodule 1 Reload */
    .word  PWMA_CMP2_IRQHandler                 /* eFlexPWM submodule 2 Compare */
    .word  PWMA_RELOAD2_IRQHandler              /* eFlexPWM submodule 2 Reload */
    .word  PWMA_CMP3_IRQHandler                 /* eFlexPWM submodule 3 Compare */
    .word  PWMA_RELOAD3_IRQHandler              /* eFlexPWM submodule 3 Reload */
    .word  PWMA_CAP_IRQHandler                  /* eFlexPWM all input captures */
    .word  PWMA_RERR_IRQHandler                 /* eFlexPWM reload error */
    .word  PWMA_FAULT_IRQHandler                /* eFlexPWM Fault */
    .word  CMP3_IRQHandler                      /* CMP3 */
    .word  Reserved109_IRQHandler               /* Reserved interrupt */
    .word  CAN1_ORed_Message_buffer_IRQHandler  /* FLexCAN1 OR'ed Message buffer (0-15) */
    .word  CAN1_Bus_Off_IRQHandler              /* FLexCAN1 Bus Off */
    .word  CAN1_Error_IRQHandler                /* FLexCAN1 Error */
    .word  CAN1_Tx_Warning_IRQHandler           /* FLexCAN1 Transmit Warning */
    .word  CAN1_Rx_Warning_IRQHandler           /* FLexCAN1 Receive Warning */
    .word  CAN1_Wake_Up_IRQHandler              /* FLexCAN1 Wake Up */
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

    .weak      FTFA_IRQHandler
    .thumb_set FTFA_IRQHandler,Default_Handler

    .weak      FTFA_Collision_IRQHandler
    .thumb_set FTFA_Collision_IRQHandler,Default_Handler

    .weak      PMC_IRQHandler
    .thumb_set PMC_IRQHandler,Default_Handler

    .weak      LLWU_IRQHandler
    .thumb_set LLWU_IRQHandler,Default_Handler

    .weak      WDOG_EWM_IRQHandler
    .thumb_set WDOG_EWM_IRQHandler,Default_Handler

    .weak      Reserved39_IRQHandler
    .thumb_set Reserved39_IRQHandler,Default_Handler

    .weak      I2C0_IRQHandler
    .thumb_set I2C0_IRQHandler,Default_Handler

    .weak      Reserved41_IRQHandler
    .thumb_set Reserved41_IRQHandler,Default_Handler

    .weak      SPI0_IRQHandler
    .thumb_set SPI0_IRQHandler,Default_Handler

    .weak      Reserved43_IRQHandler
    .thumb_set Reserved43_IRQHandler,Default_Handler

    .weak      Reserved44_IRQHandler
    .thumb_set Reserved44_IRQHandler,Default_Handler

    .weak      Reserved45_IRQHandler
    .thumb_set Reserved45_IRQHandler,Default_Handler

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

    .weak      Reserved51_IRQHandler
    .thumb_set Reserved51_IRQHandler,Default_Handler

    .weak      Reserved52_IRQHandler
    .thumb_set Reserved52_IRQHandler,Default_Handler

    .weak      Reserved53_IRQHandler
    .thumb_set Reserved53_IRQHandler,Default_Handler

    .weak      ADC_ERR_IRQHandler
    .thumb_set ADC_ERR_IRQHandler,Default_Handler

    .weak      ADCA_IRQHandler
    .thumb_set ADCA_IRQHandler,Default_Handler

    .weak      CMP0_IRQHandler
    .thumb_set CMP0_IRQHandler,Default_Handler

    .weak      CMP1_IRQHandler
    .thumb_set CMP1_IRQHandler,Default_Handler

    .weak      Reserved58_IRQHandler
    .thumb_set Reserved58_IRQHandler,Default_Handler

    .weak      Reserved59_IRQHandler
    .thumb_set Reserved59_IRQHandler,Default_Handler

    .weak      Reserved60_IRQHandler
    .thumb_set Reserved60_IRQHandler,Default_Handler

    .weak      Reserved61_IRQHandler
    .thumb_set Reserved61_IRQHandler,Default_Handler

    .weak      Reserved62_IRQHandler
    .thumb_set Reserved62_IRQHandler,Default_Handler

    .weak      Reserved63_IRQHandler
    .thumb_set Reserved63_IRQHandler,Default_Handler

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

    .weak      Reserved69_IRQHandler
    .thumb_set Reserved69_IRQHandler,Default_Handler

    .weak      XBARA_IRQHandler
    .thumb_set XBARA_IRQHandler,Default_Handler

    .weak      PDB1_IRQHandler
    .thumb_set PDB1_IRQHandler,Default_Handler

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

    .weak      Reserved81_IRQHandler
    .thumb_set Reserved81_IRQHandler,Default_Handler

    .weak      ENC0_COMPARE_IRQHandler
    .thumb_set ENC0_COMPARE_IRQHandler,Default_Handler

    .weak      ENC0_HOME_IRQHandler
    .thumb_set ENC0_HOME_IRQHandler,Default_Handler

    .weak      ENC0_WDOG_SAB_IRQHandler
    .thumb_set ENC0_WDOG_SAB_IRQHandler,Default_Handler

    .weak      ENC0_INDEX_IRQHandler
    .thumb_set ENC0_INDEX_IRQHandler,Default_Handler

    .weak      CMP2_IRQHandler
    .thumb_set CMP2_IRQHandler,Default_Handler

    .weak      Reserved87_IRQHandler
    .thumb_set Reserved87_IRQHandler,Default_Handler

    .weak      Reserved88_IRQHandler
    .thumb_set Reserved88_IRQHandler,Default_Handler

    .weak      ADCB_IRQHandler
    .thumb_set ADCB_IRQHandler,Default_Handler

    .weak      Reserved90_IRQHandler
    .thumb_set Reserved90_IRQHandler,Default_Handler

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

    .weak      PWMA_CMP0_IRQHandler
    .thumb_set PWMA_CMP0_IRQHandler,Default_Handler

    .weak      PWMA_RELOAD0_IRQHandler
    .thumb_set PWMA_RELOAD0_IRQHandler,Default_Handler

    .weak      PWMA_CMP1_IRQHandler
    .thumb_set PWMA_CMP1_IRQHandler,Default_Handler

    .weak      PWMA_RELOAD1_IRQHandler
    .thumb_set PWMA_RELOAD1_IRQHandler,Default_Handler

    .weak      PWMA_CMP2_IRQHandler
    .thumb_set PWMA_CMP2_IRQHandler,Default_Handler

    .weak      PWMA_RELOAD2_IRQHandler
    .thumb_set PWMA_RELOAD2_IRQHandler,Default_Handler

    .weak      PWMA_CMP3_IRQHandler
    .thumb_set PWMA_CMP3_IRQHandler,Default_Handler

    .weak      PWMA_RELOAD3_IRQHandler
    .thumb_set PWMA_RELOAD3_IRQHandler,Default_Handler

    .weak      PWMA_CAP_IRQHandler
    .thumb_set PWMA_CAP_IRQHandler,Default_Handler

    .weak      PWMA_RERR_IRQHandler
    .thumb_set PWMA_RERR_IRQHandler,Default_Handler

    .weak      PWMA_FAULT_IRQHandler
    .thumb_set PWMA_FAULT_IRQHandler,Default_Handler

    .weak      CMP3_IRQHandler
    .thumb_set CMP3_IRQHandler,Default_Handler

    .weak      Reserved109_IRQHandler
    .thumb_set Reserved109_IRQHandler,Default_Handler

    .weak      CAN1_ORed_Message_buffer_IRQHandler
    .thumb_set CAN1_ORed_Message_buffer_IRQHandler,Default_Handler

    .weak      CAN1_Bus_Off_IRQHandler
    .thumb_set CAN1_Bus_Off_IRQHandler,Default_Handler

    .weak      CAN1_Error_IRQHandler
    .thumb_set CAN1_Error_IRQHandler,Default_Handler

    .weak      CAN1_Tx_Warning_IRQHandler
    .thumb_set CAN1_Tx_Warning_IRQHandler,Default_Handler

    .weak      CAN1_Rx_Warning_IRQHandler
    .thumb_set CAN1_Rx_Warning_IRQHandler,Default_Handler

    .weak      CAN1_Wake_Up_IRQHandler
    .thumb_set CAN1_Wake_Up_IRQHandler,Default_Handler
