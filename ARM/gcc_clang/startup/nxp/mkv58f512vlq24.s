.syntax unified
.cpu cortex-m7
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
    .word  DMA0_DMA16_IRQHandler                /* DMA channel 0/16 transfer complete */
    .word  DMA1_DMA17_IRQHandler                /* DMA channel 1/17 transfer complete */
    .word  DMA2_DMA18_IRQHandler                /* DMA channel 2/18 transfer complete */
    .word  DMA3_DMA19_IRQHandler                /* DMA channel 3/19 transfer complete */
    .word  DMA4_DMA20_IRQHandler                /* DMA channel 4/20 transfer complete */
    .word  DMA5_DMA21_IRQHandler                /* DMA channel 5/21 transfer complete */
    .word  DMA6_DMA22_IRQHandler                /* DMA channel 6/22 transfer complete */
    .word  DMA7_DMA23_IRQHandler                /* DMA channel 7/23 transfer complete */
    .word  DMA8_DMA24_IRQHandler                /* DMA channel 8/24 transfer complete */
    .word  DMA9_DMA25_IRQHandler                /* DMA channel 9/25 transfer complete */
    .word  DMA10_DMA26_IRQHandler               /* DMA channel 10/26 transfer complete */
    .word  DMA11_DMA27_IRQHandler               /* DMA channel 11/27 transfer complete */
    .word  DMA12_DMA28_IRQHandler               /* DMA channel 12/28 transfer complete */
    .word  DMA13_DMA29_IRQHandler               /* DMA channel 13/29 transfer complete */
    .word  DMA14_DMA30_IRQHandler               /* DMA channel 14/30 transfer complete */
    .word  DMA15_DMA31_IRQHandler               /* DMA channel 15/31 transfer complete */
    .word  DMA_Error_IRQHandler                 /* DMA error interrupt channels 0-31 */
    .word  MCM_IRQHandler                       /* MCM normal interrupt */
    .word  FTFE_IRQHandler                      /* FTFL command complete */
    .word  Read_Collision_IRQHandler            /* FTFL read collision */
    .word  PMC_IRQHandler                       /* PMC controller low-voltage detect, low-voltage warning */
    .word  LLWU_IRQHandler                      /* Low leakage wakeup */
    .word  WDOG_EWM_IRQHandler                  /* Single interrupt vector for  WDOG and EWM */
    .word  TRNG0_IRQHandler                     /* True randon number generator */
    .word  I2C0_IRQHandler                      /* Inter-integrated circuit 0 */
    .word  I2C1_IRQHandler                      /* Inter-integrated circuit 1 */
    .word  SPI0_IRQHandler                      /* Serial peripheral Interface 0 */
    .word  SPI1_IRQHandler                      /* Serial peripheral Interface 1 */
    .word  UART5_IRQHandler                     /* UART5 receive/transmit interrupt */
    .word  UART5_ERR_IRQHandler                 /* UART5 error interrupt */
    .word  Reserved46_IRQHandler                /* Reserved interrupt */
    .word  UART0_IRQHandler                     /* UART0 receive/transmit interrupt */
    .word  UART0_ERR_IRQHandler                 /* UART0 error interrupt */
    .word  UART1_IRQHandler                     /* UART1 receive/transmit interrupt */
    .word  UART1_ERR_IRQHandler                 /* UART1 error interrupt */
    .word  UART2_IRQHandler                     /* UART2 receive/transmit interrupt */
    .word  UART2_ERR_IRQHandler                 /* UART2 error interrupt */
    .word  ADC0_IRQHandler                      /* Analog-to-digital converter 0 */
    .word  HSADC_ERR_IRQHandler                 /* High speed analog-to-digital converter zero cross */
    .word  HSADC0_CCA_IRQHandler                /* High speed analog-to-digital converter 0 submodule A scan complete */
    .word  CMP0_IRQHandler                      /* Comparator 0 */
    .word  CMP1_IRQHandler                      /* Comparator 1 */
    .word  FTM0_IRQHandler                      /* FlexTimer module 0 fault, overflow and channels interrupt */
    .word  FTM1_IRQHandler                      /* FlexTimer module 1 fault, overflow and channels interrupt */
    .word  UART3_IRQHandler                     /* UART3 receive/transmit interrupt */
    .word  UART3_ERR_IRQHandler                 /* UART3 error interrupt */
    .word  UART4_IRQHandler                     /* UART4 receive/transmit interrupt */
    .word  UART4_ERR_IRQHandler                 /* UART4 error interrupt */
    .word  PIT0_IRQHandler                      /* Periodic interrupt timer channel 0 */
    .word  PIT1_IRQHandler                      /* Periodic interrupt timer channel 1 */
    .word  PIT2_IRQHandler                      /* Periodic interrupt timer channel 2 */
    .word  PIT3_IRQHandler                      /* Periodic interrupt timer channel 3 */
    .word  PDB0_IRQHandler                      /* Programmable delay block 0 */
    .word  FTM2_IRQHandler                      /* FlexTimer module 2 fault, overflow and channels interrupt */
    .word  XBARA_IRQHandler                     /* Inter-peripheral crossbar switch A */
    .word  PDB1_IRQHandler                      /* Programmable delay block 1 */
    .word  DAC0_IRQHandler                      /* Digital-to-analog converter 0 */
    .word  MCG_IRQHandler                       /* Multipurpose clock generator */
    .word  LPTMR0_IRQHandler                    /* Low power timer interrupt */
    .word  PORTA_IRQHandler                     /* Port A interrupt */
    .word  PORTB_IRQHandler                     /* Port B interrupt */
    .word  PORTC_IRQHandler                     /* Port C interrupt */
    .word  PORTD_IRQHandler                     /* Port D interrupt */
    .word  PORTE_IRQHandler                     /* Port E interrupt */
    .word  SWI_IRQHandler                       /* Software interrupt */
    .word  SPI2_IRQHandler                      /* Serial peripheral Interface 2 */
    .word  ENC_COMPARE_IRQHandler               /* ENC Compare */
    .word  ENC_HOME_IRQHandler                  /* ENC Home */
    .word  ENC_WDOG_SAB_IRQHandler              /* ENC Wdog/SAB */
    .word  ENC_INDEX_IRQHandler                 /* ENC Index/Roll over/Roll Under */
    .word  CMP2_IRQHandler                      /* Comparator 2 */
    .word  FTM3_IRQHandler                      /* FlexTimer module 3 fault, overflow and channels */
    .word  Reserved88_IRQHandler                /* Reserved interrupt */
    .word  HSADC0_CCB_IRQHandler                /* High speed analog-to-digital converter 0 submodule B scan complete */
    .word  HSADC1_CCA_IRQHandler                /* High speed analog-to-digital converter 1 submodule A scan complete */
    .word  CAN0_ORed_Message_buffer_IRQHandler  /* Flex controller area network 0 message buffer */
    .word  CAN0_Bus_Off_IRQHandler              /* Flex controller area network 0 bus off */
    .word  CAN0_Error_IRQHandler                /* Flex controller area network 0 error */
    .word  CAN0_Tx_Warning_IRQHandler           /* Flex controller area network 0 transmit */
    .word  CAN0_Rx_Warning_IRQHandler           /* Flex controller area network 0 receive */
    .word  CAN0_Wake_Up_IRQHandler              /* Flex controller area network 0 wake up */
    .word  PWM0_CMP0_IRQHandler                 /* Pulse width modulator 0 channel 0 compare */
    .word  PWM0_RELOAD0_IRQHandler              /* Pulse width modulator 0 channel 0 reload */
    .word  PWM0_CMP1_IRQHandler                 /* Pulse width modulator 0 channel 1 compare */
    .word  PWM0_RELOAD1_IRQHandler              /* Pulse width modulator 0 channel 1 reload */
    .word  PWM0_CMP2_IRQHandler                 /* Pulse width modulator 0 channel 2 compare */
    .word  PWM0_RELOAD2_IRQHandler              /* Pulse width modulator 0 channel 2 reload */
    .word  PWM0_CMP3_IRQHandler                 /* Pulse width modulator 0 channel 3 compare */
    .word  PWM0_RELOAD3_IRQHandler              /* Pulse width modulator 0 channel 3 reload */
    .word  PWM0_CAP_IRQHandler                  /* Pulse width modulator 0 capture */
    .word  PWM0_RERR_IRQHandler                 /* Pulse width modulator 0 reload error */
    .word  PWM0_FAULT_IRQHandler                /* Pulse width modulator 0 fault */
    .word  CMP3_IRQHandler                      /* Comparator 3 */
    .word  HSADC1_CCB_IRQHandler                /* High speed analog-to-digital converter 1 submodule B scan complete */
    .word  CAN1_ORed_Message_buffer_IRQHandler  /* Flex controller area network 1 message buffer */
    .word  CAN1_Bus_Off_IRQHandler              /* Flex controller area network 1 bus off */
    .word  CAN1_Error_IRQHandler                /* Flex controller area network 1 error */
    .word  CAN1_Tx_Warning_IRQHandler           /* Flex controller area network 1 transmit */
    .word  CAN1_Rx_Warning_IRQHandler           /* Flex controller area network 1 receive */
    .word  CAN1_Wake_Up_IRQHandler              /* Flex controller area network 1 wake up */
    .word  ENET_1588_Timer_IRQHandler           /* Ethernet MAC IEEE 1588 timer */
    .word  ENET_Transmit_IRQHandler             /* Ethernet MAC transmit */
    .word  ENET_Receive_IRQHandler              /* Ethernet MAC receive */
    .word  ENET_Error_IRQHandler                /* Ethernet MAC error and miscelaneous */
    .word  PWM1_CMP0_IRQHandler                 /* Pulse width modulator 1 channel 0 compare */
    .word  PWM1_RELOAD0_IRQHandler              /* Pulse width modulator 1 channel 0 reload */
    .word  PWM1_CMP1_IRQHandler                 /* Pulse width modulator 1 channel 1 compare */
    .word  PWM1_RELOAD1_IRQHandler              /* Pulse width modulator 1 channel 1 reload */
    .word  PWM1_CMP2_IRQHandler                 /* Pulse width modulator 1 channel 2 compare */
    .word  PWM1_RELOAD2_IRQHandler              /* Pulse width modulator 1 channel 2 reload */
    .word  PWM1_CMP3_IRQHandler                 /* Pulse width modulator 1 channel 3 compare */
    .word  PWM1_RELOAD3_IRQHandler              /* Pulse width modulator 1 channel 3 reload */
    .word  PWM1_CAP_IRQHandler                  /* Pulse width modulator 1 capture */
    .word  PWM1_RERR_IRQHandler                 /* Pulse width modulator 1 reload error */
    .word  PWM1_FAULT_IRQHandler                /* Pulse width modulator 1 fault */
    .word  CAN2_ORed_Message_buffer_IRQHandler  /* Flex controller area network 2 message buffer */
    .word  CAN2_Bus_Off_IRQHandler              /* Flex controller area network 2 bus off */
    .word  CAN2_Error_IRQHandler                /* Flex controller area network 2 error */
    .word  CAN2_Tx_Warning_IRQHandler           /* Flex controller area network 2 transmit */
    .word  CAN2_Rx_Warning_IRQHandler           /* Flex controller area network 2 receive */
    .word  CAN2_Wake_Up_IRQHandler              /* Flex controller area network 2 wake up */
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

    .weak      FTFE_IRQHandler
    .thumb_set FTFE_IRQHandler,Default_Handler

    .weak      Read_Collision_IRQHandler
    .thumb_set Read_Collision_IRQHandler,Default_Handler

    .weak      PMC_IRQHandler
    .thumb_set PMC_IRQHandler,Default_Handler

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

    .weak      UART5_IRQHandler
    .thumb_set UART5_IRQHandler,Default_Handler

    .weak      UART5_ERR_IRQHandler
    .thumb_set UART5_ERR_IRQHandler,Default_Handler

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

    .weak      ADC0_IRQHandler
    .thumb_set ADC0_IRQHandler,Default_Handler

    .weak      HSADC_ERR_IRQHandler
    .thumb_set HSADC_ERR_IRQHandler,Default_Handler

    .weak      HSADC0_CCA_IRQHandler
    .thumb_set HSADC0_CCA_IRQHandler,Default_Handler

    .weak      CMP0_IRQHandler
    .thumb_set CMP0_IRQHandler,Default_Handler

    .weak      CMP1_IRQHandler
    .thumb_set CMP1_IRQHandler,Default_Handler

    .weak      FTM0_IRQHandler
    .thumb_set FTM0_IRQHandler,Default_Handler

    .weak      FTM1_IRQHandler
    .thumb_set FTM1_IRQHandler,Default_Handler

    .weak      UART3_IRQHandler
    .thumb_set UART3_IRQHandler,Default_Handler

    .weak      UART3_ERR_IRQHandler
    .thumb_set UART3_ERR_IRQHandler,Default_Handler

    .weak      UART4_IRQHandler
    .thumb_set UART4_IRQHandler,Default_Handler

    .weak      UART4_ERR_IRQHandler
    .thumb_set UART4_ERR_IRQHandler,Default_Handler

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

    .weak      FTM2_IRQHandler
    .thumb_set FTM2_IRQHandler,Default_Handler

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

    .weak      SPI2_IRQHandler
    .thumb_set SPI2_IRQHandler,Default_Handler

    .weak      ENC_COMPARE_IRQHandler
    .thumb_set ENC_COMPARE_IRQHandler,Default_Handler

    .weak      ENC_HOME_IRQHandler
    .thumb_set ENC_HOME_IRQHandler,Default_Handler

    .weak      ENC_WDOG_SAB_IRQHandler
    .thumb_set ENC_WDOG_SAB_IRQHandler,Default_Handler

    .weak      ENC_INDEX_IRQHandler
    .thumb_set ENC_INDEX_IRQHandler,Default_Handler

    .weak      CMP2_IRQHandler
    .thumb_set CMP2_IRQHandler,Default_Handler

    .weak      FTM3_IRQHandler
    .thumb_set FTM3_IRQHandler,Default_Handler

    .weak      Reserved88_IRQHandler
    .thumb_set Reserved88_IRQHandler,Default_Handler

    .weak      HSADC0_CCB_IRQHandler
    .thumb_set HSADC0_CCB_IRQHandler,Default_Handler

    .weak      HSADC1_CCA_IRQHandler
    .thumb_set HSADC1_CCA_IRQHandler,Default_Handler

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

    .weak      PWM0_CMP0_IRQHandler
    .thumb_set PWM0_CMP0_IRQHandler,Default_Handler

    .weak      PWM0_RELOAD0_IRQHandler
    .thumb_set PWM0_RELOAD0_IRQHandler,Default_Handler

    .weak      PWM0_CMP1_IRQHandler
    .thumb_set PWM0_CMP1_IRQHandler,Default_Handler

    .weak      PWM0_RELOAD1_IRQHandler
    .thumb_set PWM0_RELOAD1_IRQHandler,Default_Handler

    .weak      PWM0_CMP2_IRQHandler
    .thumb_set PWM0_CMP2_IRQHandler,Default_Handler

    .weak      PWM0_RELOAD2_IRQHandler
    .thumb_set PWM0_RELOAD2_IRQHandler,Default_Handler

    .weak      PWM0_CMP3_IRQHandler
    .thumb_set PWM0_CMP3_IRQHandler,Default_Handler

    .weak      PWM0_RELOAD3_IRQHandler
    .thumb_set PWM0_RELOAD3_IRQHandler,Default_Handler

    .weak      PWM0_CAP_IRQHandler
    .thumb_set PWM0_CAP_IRQHandler,Default_Handler

    .weak      PWM0_RERR_IRQHandler
    .thumb_set PWM0_RERR_IRQHandler,Default_Handler

    .weak      PWM0_FAULT_IRQHandler
    .thumb_set PWM0_FAULT_IRQHandler,Default_Handler

    .weak      CMP3_IRQHandler
    .thumb_set CMP3_IRQHandler,Default_Handler

    .weak      HSADC1_CCB_IRQHandler
    .thumb_set HSADC1_CCB_IRQHandler,Default_Handler

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

    .weak      ENET_1588_Timer_IRQHandler
    .thumb_set ENET_1588_Timer_IRQHandler,Default_Handler

    .weak      ENET_Transmit_IRQHandler
    .thumb_set ENET_Transmit_IRQHandler,Default_Handler

    .weak      ENET_Receive_IRQHandler
    .thumb_set ENET_Receive_IRQHandler,Default_Handler

    .weak      ENET_Error_IRQHandler
    .thumb_set ENET_Error_IRQHandler,Default_Handler

    .weak      PWM1_CMP0_IRQHandler
    .thumb_set PWM1_CMP0_IRQHandler,Default_Handler

    .weak      PWM1_RELOAD0_IRQHandler
    .thumb_set PWM1_RELOAD0_IRQHandler,Default_Handler

    .weak      PWM1_CMP1_IRQHandler
    .thumb_set PWM1_CMP1_IRQHandler,Default_Handler

    .weak      PWM1_RELOAD1_IRQHandler
    .thumb_set PWM1_RELOAD1_IRQHandler,Default_Handler

    .weak      PWM1_CMP2_IRQHandler
    .thumb_set PWM1_CMP2_IRQHandler,Default_Handler

    .weak      PWM1_RELOAD2_IRQHandler
    .thumb_set PWM1_RELOAD2_IRQHandler,Default_Handler

    .weak      PWM1_CMP3_IRQHandler
    .thumb_set PWM1_CMP3_IRQHandler,Default_Handler

    .weak      PWM1_RELOAD3_IRQHandler
    .thumb_set PWM1_RELOAD3_IRQHandler,Default_Handler

    .weak      PWM1_CAP_IRQHandler
    .thumb_set PWM1_CAP_IRQHandler,Default_Handler

    .weak      PWM1_RERR_IRQHandler
    .thumb_set PWM1_RERR_IRQHandler,Default_Handler

    .weak      PWM1_FAULT_IRQHandler
    .thumb_set PWM1_FAULT_IRQHandler,Default_Handler

    .weak      CAN2_ORed_Message_buffer_IRQHandler
    .thumb_set CAN2_ORed_Message_buffer_IRQHandler,Default_Handler

    .weak      CAN2_Bus_Off_IRQHandler
    .thumb_set CAN2_Bus_Off_IRQHandler,Default_Handler

    .weak      CAN2_Error_IRQHandler
    .thumb_set CAN2_Error_IRQHandler,Default_Handler

    .weak      CAN2_Tx_Warning_IRQHandler
    .thumb_set CAN2_Tx_Warning_IRQHandler,Default_Handler

    .weak      CAN2_Rx_Warning_IRQHandler
    .thumb_set CAN2_Rx_Warning_IRQHandler,Default_Handler

    .weak      CAN2_Wake_Up_IRQHandler
    .thumb_set CAN2_Wake_Up_IRQHandler,Default_Handler
