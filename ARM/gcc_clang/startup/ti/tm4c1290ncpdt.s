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
    ldr sp, =_estack
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
    .word  _estack
    .word  Reset_Handler                /* The reset handler */
    .word  NMI_Handler                  /* The NMI handler */
    .word  HardFault_Handler            /* The hard fault handler */
    .word  MemManage_Handler            /* The MPU fault handler */
    .word  BusFault_Handler             /* The bus fault handler */
    .word  UsageFault_Handler           /* The usage fault handler */
    .word  0                            /* Reserved */
    .word  0                            /* Reserved */
    .word  0                            /* Reserved */
    .word  0                            /* Reserved */
    .word  SVC_Handler                  /* SVCall handler */
    .word  DebugMon_Handler             /* Debug monitor handler */
    .word  0                            /* Reserved */
    .word  PendSV_Handler               /* The PendSV handler */
    .word  SysTick_Handler              /* The SysTick handler */
    /* External Interrupts */
    .word  GPIOA_IRQHandler             /*   0: GPIO Port A */
    .word  GPIOB_IRQHandler             /*   1: GPIO Port B */
    .word  GPIOC_IRQHandler             /*   2: GPIO Port C */
    .word  GPIOD_IRQHandler             /*   3: GPIO Port D */
    .word  GPIOE_IRQHandler             /*   4: GPIO Port E */
    .word  UART0_IRQHandler             /*   5: UART0 Rx and Tx */
    .word  UART1_IRQHandler             /*   6: UART1 Rx and Tx */
    .word  SSI0_IRQHandler              /*   7: SSI0 Rx and Tx */
    .word  I2C0_IRQHandler              /*   8: I2C0 Master and Slave */
    .word  PMW0_FAULT_IRQHandler        /*   9: PWM Fault */
    .word  PWM0_0_IRQHandler            /*  10: PWM Generator 0 */
    .word  PWM0_1_IRQHandler            /*  11: PWM Generator 1 */
    .word  PWM0_2_IRQHandler            /*  12: PWM Generator 2 */
    .word  QEI0_IRQHandler              /*  13: Quadrature Encoder 0 */
    .word  ADC0SS0_IRQHandler           /*  14: ADC Sequence 0 */
    .word  ADC0SS1_IRQHandler           /*  15: ADC Sequence 1 */
    .word  ADC0SS2_IRQHandler           /*  16: ADC Sequence 2 */
    .word  ADC0SS3_IRQHandler           /*  17: ADC Sequence 3 */
    .word  WDT0_IRQHandler              /*  18: Watchdog timer */
    .word  TIMER0A_IRQHandler           /*  19: Timer 0 subtimer A */
    .word  TIMER0B_IRQHandler           /*  20: Timer 0 subtimer B */
    .word  TIMER1A_IRQHandler           /*  21: Timer 1 subtimer A */
    .word  TIMER1B_IRQHandler           /*  22: Timer 1 subtimer B */
    .word  TIMER2A_IRQHandler           /*  23: Timer 2 subtimer A */
    .word  TIMER2B_IRQHandler           /*  24: Timer 2 subtimer B */
    .word  COMP0_IRQHandler             /*  25: Analog Comparator 0 */
    .word  COMP1_IRQHandler             /*  26: Analog Comparator 1 */
    .word  COMP2_IRQHandler             /*  27: Analog Comparator 2 */
    .word  SYSCTL_IRQHandler            /*  28: System Control (PLL, OSC, BO) */
    .word  FLASH_IRQHandler             /*  29: FLASH Control */
    .word  GPIOF_IRQHandler             /*  30: GPIO Port F */
    .word  GPIOG_IRQHandler             /*  31: GPIO Port G */
    .word  GPIOH_IRQHandler             /*  32: GPIO Port H */
    .word  UART2_IRQHandler             /*  33: UART2 Rx and Tx */
    .word  SSI1_IRQHandler              /*  34: SSI1 Rx and Tx */
    .word  TIMER3A_IRQHandler           /*  35: Timer 3 subtimer A */
    .word  TIMER3B_IRQHandler           /*  36: Timer 3 subtimer B */
    .word  I2C1_IRQHandler              /*  37: I2C1 Master and Slave */
    .word  CAN0_IRQHandler              /*  38: CAN0 */
    .word  CAN1_IRQHandler              /*  39: CAN1 */
    .word  EMAC0_Handler                /*  40: Ethernet */
    .word  HIB_IRQHandler               /*  41: Hibernate */
    .word  USB0_IRQHandler              /*  42: USB0 */
    .word  PWM0_3_IRQHandler            /*  43: PWM Generator 3 */
    .word  UDMA_IRQHandler              /*  44: uDMA Software Transfer */
    .word  UDMAERR_IRQHandler           /*  45: uDMA Error */
    .word  ADC1SS0_IRQHandler           /*  46: ADC1 Sequence 0 */
    .word  ADC1SS1_IRQHandler           /*  47: ADC1 Sequence 1 */
    .word  ADC1SS2_IRQHandler           /*  48: ADC1 Sequence 2 */
    .word  ADC1SS3_IRQHandler           /*  49: ADC1 Sequence 3 */
    .word  EBI0_IRQHandler              /*  50: External Bus Interface 0 */
    .word  GPIOJ_IRQHandler             /*  51: GPIO Port J */
    .word  GPIOK_IRQHandler             /*  52: GPIO Port K */
    .word  GPIOL_IRQHandler             /*  53: GPIO Port L */
    .word  SSI2_IRQHandler              /*  54: SSI2 Rx and Tx */
    .word  SSI3_IRQHandler              /*  55: SSI3 Rx and Tx */
    .word  UART3_IRQHandler             /*  56: UART3 Rx and Tx */
    .word  UART4_IRQHandler             /*  57: UART4 Rx and Tx */
    .word  UART5_IRQHandler             /*  58: UART5 Rx and Tx */
    .word  UART6_IRQHandler             /*  59: UART6 Rx and Tx */
    .word  UART7_IRQHandler             /*  60: UART7 Rx and Tx */
    .word  I2C2_IRQHandler              /*  61: I2C2 Master and Slave */
    .word  I2C3_IRQHandler              /*  62: I2C3 Master and Slave */
    .word  TIMER4A_IRQHandler           /*  63: Timer 4 subtimer A */
    .word  TIMER4B_IRQHandler           /*  64: Timer 4 subtimer B */
    .word  TIMER5A_IRQHandler           /*  65: Timer 5 subtimer A */
    .word  TIMER5B_IRQHandler           /*  66: Timer 5 subtimer B */
    .word  FPU_IRQHandler               /*  67: FPU */
    .word  0                            /*  68: Reserved */
    .word  0                            /*  69: Reserved */
    .word  I2C4_IRQHandler              /*  70: I2C4 Master and Slave */
    .word  I2C5_IRQHandler              /*  71: I2C5 Master and Slave */
    .word  GPIOM_IRQHandler             /*  72: GPIO Port M */
    .word  GPION_IRQHandler             /*  73: GPIO Port N */
    .word  0                            /*  74: Reserved */
    .word  TAMPER_IRQHandler            /*  75: Tamper */
    .word  GPIOP0_IRQHandler            /*  76: GPIO Port P (Summary or P0) */
    .word  GPIOP1_IRQHandler            /*  77: GPIO Port P1 */
    .word  GPIOP2_IRQHandler            /*  78: GPIO Port P2 */
    .word  GPIOP3_IRQHandler            /*  79: GPIO Port P3 */
    .word  GPIOP4_IRQHandler            /*  80: GPIO Port P4 */
    .word  GPIOP5_IRQHandler            /*  81: GPIO Port P5 */
    .word  GPIOP6_IRQHandler            /*  82: GPIO Port P6 */
    .word  GPIOP7_IRQHandler            /*  83: GPIO Port P7 */
    .word  GPIOQ0_IRQHandler            /*  84: GPIO Port Q (Summary or Q0) */
    .word  GPIOQ1_IRQHandler            /*  85: GPIO Port Q1 */
    .word  GPIOQ2_IRQHandler            /*  86: GPIO Port Q2 */
    .word  GPIOQ3_IRQHandler            /*  87: GPIO Port Q3 */
    .word  GPIOQ4_IRQHandler            /*  88: GPIO Port Q4 */
    .word  GPIOQ5_IRQHandler            /*  89: GPIO Port Q5 */
    .word  GPIOQ6_IRQHandler            /*  90: GPIO Port Q6 */
    .word  GPIOQ7_IRQHandler            /*  91: GPIO Port Q7 */
    .word  GPIOR_IRQHandler             /*  92: GPIO Port R */
    .word  GPIOS_IRQHandler             /*  93: GPIO Port S */
    .word  SHAMD5_IRQHandler            /*  94: SHA/MD5 0 */
    .word  AES_IRQHandler               /*  95: AES 0 */
    .word  DES3DES_IRQHandler           /*  96: DES3DES 0 */
    .word  LCDCONTROLLER_IRQHandler     /*  97: LCD Controller 0 */
    .word  TIMER6A_IRQHandler           /*  98: Timer 6 subtimer A */
    .word  TIMER6B_IRQHandler           /*  99: Timer 6 subtimer B */
    .word  TIMER7A_IRQHandler           /* 100: Timer 7 subtimer A */
    .word  TIMER7B_IRQHandler           /* 101: Timer 7 subtimer B */
    .word  I2C6_IRQHandler              /* 102: I2C6 Master and Slave */
    .word  I2C7_IRQHandler              /* 103: I2C7 Master and Slave */
    .word  HIMSCANKEYBOARD_IRQHandler   /* 104: HIM Scan Matrix Keyboard 0 */
    .word  ONEWIRE_IRQHandler           /* 105: One Wire 0 */
    .word  HIMPS2_IRQHandler            /* 106: HIM PS/2 0 */
    .word  HIMLEDSEQUENCER_IRQHandler   /* 107: HIM LED Sequencer 0 */
    .word  HIMCONSUMERIR_IRQHandler     /* 108: HIM Consumer IR 0 */
    .word  I2C8_IRQHandler              /* 109: I2C8 Master and Slave */
    .word  I2C9_IRQHandler              /* 110: I2C9 Master and Slave */
    .word  GPIOT_IRQHandler             /* 111: GPIO Port T */

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

    .weak      GPIOA_IRQHandler
    .thumb_set GPIOA_IRQHandler,Default_Handler

    .weak      GPIOB_IRQHandler
    .thumb_set GPIOB_IRQHandler,Default_Handler

    .weak      GPIOC_IRQHandler
    .thumb_set GPIOC_IRQHandler,Default_Handler

    .weak      GPIOD_IRQHandler
    .thumb_set GPIOD_IRQHandler,Default_Handler

    .weak      GPIOE_IRQHandler
    .thumb_set GPIOE_IRQHandler,Default_Handler

    .weak      UART0_IRQHandler
    .thumb_set UART0_IRQHandler,Default_Handler

    .weak      UART1_IRQHandler
    .thumb_set UART1_IRQHandler,Default_Handler

    .weak      SSI0_IRQHandler
    .thumb_set SSI0_IRQHandler,Default_Handler

    .weak      I2C0_IRQHandler
    .thumb_set I2C0_IRQHandler,Default_Handler

    .weak      PMW0_FAULT_IRQHandler
    .thumb_set PMW0_FAULT_IRQHandler,Default_Handler

    .weak      PWM0_0_IRQHandler
    .thumb_set PWM0_0_IRQHandler,Default_Handler

    .weak      PWM0_1_IRQHandler
    .thumb_set PWM0_1_IRQHandler,Default_Handler

    .weak      PWM0_2_IRQHandler
    .thumb_set PWM0_2_IRQHandler,Default_Handler

    .weak      QEI0_IRQHandler
    .thumb_set QEI0_IRQHandler,Default_Handler

    .weak      ADC0SS0_IRQHandler
    .thumb_set ADC0SS0_IRQHandler,Default_Handler

    .weak      ADC0SS1_IRQHandler
    .thumb_set ADC0SS1_IRQHandler,Default_Handler

    .weak      ADC0SS2_IRQHandler
    .thumb_set ADC0SS2_IRQHandler,Default_Handler

    .weak      ADC0SS3_IRQHandler
    .thumb_set ADC0SS3_IRQHandler,Default_Handler

    .weak      WDT0_IRQHandler
    .thumb_set WDT0_IRQHandler,Default_Handler

    .weak      TIMER0A_IRQHandler
    .thumb_set TIMER0A_IRQHandler,Default_Handler

    .weak      TIMER0B_IRQHandler
    .thumb_set TIMER0B_IRQHandler,Default_Handler

    .weak      TIMER1A_IRQHandler
    .thumb_set TIMER1A_IRQHandler,Default_Handler

    .weak      TIMER1B_IRQHandler
    .thumb_set TIMER1B_IRQHandler,Default_Handler

    .weak      TIMER2A_IRQHandler
    .thumb_set TIMER2A_IRQHandler,Default_Handler

    .weak      TIMER2B_IRQHandler
    .thumb_set TIMER2B_IRQHandler,Default_Handler

    .weak      COMP0_IRQHandler
    .thumb_set COMP0_IRQHandler,Default_Handler

    .weak      COMP1_IRQHandler
    .thumb_set COMP1_IRQHandler,Default_Handler

    .weak      COMP2_IRQHandler
    .thumb_set COMP2_IRQHandler,Default_Handler

    .weak      SYSCTL_IRQHandler
    .thumb_set SYSCTL_IRQHandler,Default_Handler

    .weak      FLASH_IRQHandler
    .thumb_set FLASH_IRQHandler,Default_Handler

    .weak      GPIOF_IRQHandler
    .thumb_set GPIOF_IRQHandler,Default_Handler

    .weak      GPIOG_IRQHandler
    .thumb_set GPIOG_IRQHandler,Default_Handler

    .weak      GPIOH_IRQHandler
    .thumb_set GPIOH_IRQHandler,Default_Handler

    .weak      UART2_IRQHandler
    .thumb_set UART2_IRQHandler,Default_Handler

    .weak      SSI1_IRQHandler
    .thumb_set SSI1_IRQHandler,Default_Handler

    .weak      TIMER3A_IRQHandler
    .thumb_set TIMER3A_IRQHandler,Default_Handler

    .weak      TIMER3B_IRQHandler
    .thumb_set TIMER3B_IRQHandler,Default_Handler

    .weak      I2C1_IRQHandler
    .thumb_set I2C1_IRQHandler,Default_Handler

    .weak      CAN0_IRQHandler
    .thumb_set CAN0_IRQHandler,Default_Handler

    .weak      CAN1_IRQHandler
    .thumb_set CAN1_IRQHandler,Default_Handler

    .weak      EMAC0_Handler
    .thumb_set EMAC0_Handler,Default_Handler

    .weak      HIB_IRQHandler
    .thumb_set HIB_IRQHandler,Default_Handler

    .weak      USB0_IRQHandler
    .thumb_set USB0_IRQHandler,Default_Handler

    .weak      PWM0_3_IRQHandler
    .thumb_set PWM0_3_IRQHandler,Default_Handler

    .weak      UDMA_IRQHandler
    .thumb_set UDMA_IRQHandler,Default_Handler

    .weak      UDMAERR_IRQHandler
    .thumb_set UDMAERR_IRQHandler,Default_Handler

    .weak      ADC1SS0_IRQHandler
    .thumb_set ADC1SS0_IRQHandler,Default_Handler

    .weak      ADC1SS1_IRQHandler
    .thumb_set ADC1SS1_IRQHandler,Default_Handler

    .weak      ADC1SS2_IRQHandler
    .thumb_set ADC1SS2_IRQHandler,Default_Handler

    .weak      ADC1SS3_IRQHandler
    .thumb_set ADC1SS3_IRQHandler,Default_Handler

    .weak      EBI0_IRQHandler
    .thumb_set EBI0_IRQHandler,Default_Handler

    .weak      GPIOJ_IRQHandler
    .thumb_set GPIOJ_IRQHandler,Default_Handler

    .weak      GPIOK_IRQHandler
    .thumb_set GPIOK_IRQHandler,Default_Handler

    .weak      GPIOL_IRQHandler
    .thumb_set GPIOL_IRQHandler,Default_Handler

    .weak      SSI2_IRQHandler
    .thumb_set SSI2_IRQHandler,Default_Handler

    .weak      SSI3_IRQHandler
    .thumb_set SSI3_IRQHandler,Default_Handler

    .weak      UART3_IRQHandler
    .thumb_set UART3_IRQHandler,Default_Handler

    .weak      UART4_IRQHandler
    .thumb_set UART4_IRQHandler,Default_Handler

    .weak      UART5_IRQHandler
    .thumb_set UART5_IRQHandler,Default_Handler

    .weak      UART6_IRQHandler
    .thumb_set UART6_IRQHandler,Default_Handler

    .weak      UART7_IRQHandler
    .thumb_set UART7_IRQHandler,Default_Handler

    .weak      I2C2_IRQHandler
    .thumb_set I2C2_IRQHandler,Default_Handler

    .weak      I2C3_IRQHandler
    .thumb_set I2C3_IRQHandler,Default_Handler

    .weak      TIMER4A_IRQHandler
    .thumb_set TIMER4A_IRQHandler,Default_Handler

    .weak      TIMER4B_IRQHandler
    .thumb_set TIMER4B_IRQHandler,Default_Handler

    .weak      TIMER5A_IRQHandler
    .thumb_set TIMER5A_IRQHandler,Default_Handler

    .weak      TIMER5B_IRQHandler
    .thumb_set TIMER5B_IRQHandler,Default_Handler

    .weak      FPU_IRQHandler
    .thumb_set FPU_IRQHandler,Default_Handler

    .weak      I2C4_IRQHandler
    .thumb_set I2C4_IRQHandler,Default_Handler

    .weak      I2C5_IRQHandler
    .thumb_set I2C5_IRQHandler,Default_Handler

    .weak      GPIOM_IRQHandler
    .thumb_set GPIOM_IRQHandler,Default_Handler

    .weak      GPION_IRQHandler
    .thumb_set GPION_IRQHandler,Default_Handler

    .weak      TAMPER_IRQHandler
    .thumb_set TAMPER_IRQHandler,Default_Handler

    .weak      GPIOP0_IRQHandler
    .thumb_set GPIOP0_IRQHandler,Default_Handler

    .weak      GPIOP1_IRQHandler
    .thumb_set GPIOP1_IRQHandler,Default_Handler

    .weak      GPIOP2_IRQHandler
    .thumb_set GPIOP2_IRQHandler,Default_Handler

    .weak      GPIOP3_IRQHandler
    .thumb_set GPIOP3_IRQHandler,Default_Handler

    .weak      GPIOP4_IRQHandler
    .thumb_set GPIOP4_IRQHandler,Default_Handler

    .weak      GPIOP5_IRQHandler
    .thumb_set GPIOP5_IRQHandler,Default_Handler

    .weak      GPIOP6_IRQHandler
    .thumb_set GPIOP6_IRQHandler,Default_Handler

    .weak      GPIOP7_IRQHandler
    .thumb_set GPIOP7_IRQHandler,Default_Handler

    .weak      GPIOQ0_IRQHandler
    .thumb_set GPIOQ0_IRQHandler,Default_Handler

    .weak      GPIOQ1_IRQHandler
    .thumb_set GPIOQ1_IRQHandler,Default_Handler

    .weak      GPIOQ2_IRQHandler
    .thumb_set GPIOQ2_IRQHandler,Default_Handler

    .weak      GPIOQ3_IRQHandler
    .thumb_set GPIOQ3_IRQHandler,Default_Handler

    .weak      GPIOQ4_IRQHandler
    .thumb_set GPIOQ4_IRQHandler,Default_Handler

    .weak      GPIOQ5_IRQHandler
    .thumb_set GPIOQ5_IRQHandler,Default_Handler

    .weak      GPIOQ6_IRQHandler
    .thumb_set GPIOQ6_IRQHandler,Default_Handler

    .weak      GPIOQ7_IRQHandler
    .thumb_set GPIOQ7_IRQHandler,Default_Handler

    .weak      GPIOR_IRQHandler
    .thumb_set GPIOR_IRQHandler,Default_Handler

    .weak      GPIOS_IRQHandler
    .thumb_set GPIOS_IRQHandler,Default_Handler

    .weak      SHAMD5_IRQHandler
    .thumb_set SHAMD5_IRQHandler,Default_Handler

    .weak      AES_IRQHandler
    .thumb_set AES_IRQHandler,Default_Handler

    .weak      DES3DES_IRQHandler
    .thumb_set DES3DES_IRQHandler,Default_Handler

    .weak      LCDCONTROLLER_IRQHandler
    .thumb_set LCDCONTROLLER_IRQHandler,Default_Handler

    .weak      TIMER6A_IRQHandler
    .thumb_set TIMER6A_IRQHandler,Default_Handler

    .weak      TIMER6B_IRQHandler
    .thumb_set TIMER6B_IRQHandler,Default_Handler

    .weak      TIMER7A_IRQHandler
    .thumb_set TIMER7A_IRQHandler,Default_Handler

    .weak      TIMER7B_IRQHandler
    .thumb_set TIMER7B_IRQHandler,Default_Handler

    .weak      I2C6_IRQHandler
    .thumb_set I2C6_IRQHandler,Default_Handler

    .weak      I2C7_IRQHandler
    .thumb_set I2C7_IRQHandler,Default_Handler

    .weak      HIMSCANKEYBOARD_IRQHandler
    .thumb_set HIMSCANKEYBOARD_IRQHandler,Default_Handler

    .weak      ONEWIRE_IRQHandler
    .thumb_set ONEWIRE_IRQHandler,Default_Handler

    .weak      HIMPS2_IRQHandler
    .thumb_set HIMPS2_IRQHandler,Default_Handler

    .weak      HIMLEDSEQUENCER_IRQHandler
    .thumb_set HIMLEDSEQUENCER_IRQHandler,Default_Handler

    .weak      HIMCONSUMERIR_IRQHandler
    .thumb_set HIMCONSUMERIR_IRQHandler,Default_Handler

    .weak      I2C8_IRQHandler
    .thumb_set I2C8_IRQHandler,Default_Handler

    .weak      I2C9_IRQHandler
    .thumb_set I2C9_IRQHandler,Default_Handler

    .weak      GPIOT_IRQHandler
    .thumb_set GPIOT_IRQHandler,Default_Handler
