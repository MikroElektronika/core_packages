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
    .word  QEI1_IRQHandler              /*  38: Quadrature Encoder 1 */
    .word  CAN0_IRQHandler              /*  39: CAN0 */
    .word  CAN1_IRQHandler              /*  40: CAN1 */
    .word  CAN2_IRQHandler              /*  41: CAN2 */
    .word  0                            /*  42: Reserved */
    .word  HIB_IRQHandler               /*  43: Hibernate */
    .word  USB0_IRQHandler              /*  44: USB0 */
    .word  PWM0_3_IRQHandler            /*  45: PWM Generator 3 */
    .word  UDMA_IRQHandler              /*  46: uDMA Software Transfer */
    .word  UDMAERR_IRQHandler           /*  47: uDMA Error */
    .word  ADC1SS0_IRQHandler           /*  48: ADC1 Sequence 0 */
    .word  ADC1SS1_IRQHandler           /*  49: ADC1 Sequence 1 */
    .word  ADC1SS2_IRQHandler           /*  50: ADC1 Sequence 2 */
    .word  ADC1SS3_IRQHandler           /*  51: ADC1 Sequence 3 */
    .word  0                            /*  52: Reserved */
    .word  0                            /*  53: Reserved */
    .word  GPIOJ_IRQHandler             /*  54: GPIO Port J */
    .word  GPIOK_IRQHandler             /*  55: GPIO Port K */
    .word  GPIOL_IRQHandler             /*  56: GPIO Port L */
    .word  SSI2_IRQHandler              /*  57: SSI2 Rx and Tx */
    .word  SSI3_IRQHandler              /*  58: SSI3 Rx and Tx */
    .word  UART3_IRQHandler             /*  59: UART3 Rx and Tx */
    .word  UART4_IRQHandler             /*  60: UART4 Rx and Tx */
    .word  UART5_IRQHandler             /*  61: UART5 Rx and Tx */
    .word  UART6_IRQHandler             /*  62: UART6 Rx and Tx */
    .word  UART7_IRQHandler             /*  63: UART7 Rx and Tx */
    .word  0                            /*  64: Reserved */
    .word  0                            /*  65: Reserved */
    .word  0                            /*  66: Reserved */
    .word  0                            /*  67: Reserved */
    .word  I2C2_IRQHandler              /*  68: I2C2 Master and Slave */
    .word  I2C3_IRQHandler              /*  69: I2C3 Master and Slave */
    .word  TIMER4A_IRQHandler           /*  70: Timer 4 subtimer A */
    .word  TIMER4B_IRQHandler           /*  71: Timer 4 subtimer B */
    .word  0                            /*  72: Reserved */
    .word  0                            /*  73: Reserved */
    .word  0                            /*  74: Reserved */
    .word  0                            /*  75: Reserved */
    .word  0                            /*  76: Reserved */
    .word  0                            /*  77: Reserved */
    .word  0                            /*  78: Reserved */
    .word  0                            /*  79: Reserved */
    .word  0                            /*  80: Reserved */
    .word  0                            /*  81: Reserved */
    .word  0                            /*  82: Reserved */
    .word  0                            /*  83: Reserved */
    .word  0                            /*  84: Reserved */
    .word  0                            /*  85: Reserved */
    .word  0                            /*  86: Reserved */
    .word  0                            /*  87: Reserved */
    .word  0                            /*  88: Reserved */
    .word  0                            /*  89: Reserved */
    .word  0                            /*  90: Reserved */
    .word  0                            /*  91: Reserved */
    .word  TIMER5A_IRQHandler           /*  92: Timer 5 subtimer A */
    .word  TIMER5B_IRQHandler           /*  93: Timer 5 subtimer B */
    .word  WTIMER0A_IRQHandler          /*  94: Wide Timer 0 subtimer A */
    .word  WTIMER0B_IRQHandler          /*  95: Wide Timer 0 subtimer B */
    .word  WTIMER1A_IRQHandler          /*  96: Wide Timer 1 subtimer A */
    .word  WTIMER1B_IRQHandler          /*  97: Wide Timer 1 subtimer B */
    .word  WTIMER2A_IRQHandler          /*  98: Wide Timer 2 subtimer A */
    .word  WTIMER2B_IRQHandler          /*  99: Wide Timer 2 subtimer B */
    .word  WTIMER3A_IRQHandler          /* 100: Wide Timer 3 subtimer A */
    .word  WTIMER3B_IRQHandler          /* 101: Wide Timer 3 subtimer B */
    .word  WTIMER4A_IRQHandler          /* 102: Wide Timer 4 subtimer A */
    .word  WTIMER4B_IRQHandler          /* 103: Wide Timer 4 subtimer B */
    .word  WTIMER5A_IRQHandler          /* 104: Wide Timer 5 subtimer A */
    .word  WTIMER5B_IRQHandler          /* 105: Wide Timer 5 subtimer B */
    .word  FPU_IRQHandler               /* 106: FPU */
    .word  0                            /* 107: Reserved */
    .word  0                            /* 108: Reserved */
    .word  I2C4_IRQHandler              /* 109: I2C4 Master and Slave */
    .word  I2C5_IRQHandler              /* 110: I2C5 Master and Slave */
    .word  GPIOM_IRQHandler             /* 111: GPIO Port M */
    .word  GPION_IRQHandler             /* 112: GPIO Port N */
    .word  QEI2_IRQHandler              /* 113: Quadrature Encoder 2 */
    .word  0                            /* 114: Reserved */
    .word  0                            /* 115: Reserved */
    .word  GPIOP0_IRQHandler            /* 116: GPIO Port P (Summary or P0) */
    .word  GPIOP1_IRQHandler            /* 117: GPIO Port P1 */
    .word  GPIOP2_IRQHandler            /* 118: GPIO Port P2 */
    .word  GPIOP3_IRQHandler            /* 119: GPIO Port P3 */
    .word  GPIOP4_IRQHandler            /* 120: GPIO Port P4 */
    .word  GPIOP5_IRQHandler            /* 121: GPIO Port P5 */
    .word  GPIOP6_IRQHandler            /* 122: GPIO Port P6 */
    .word  GPIOP7_IRQHandler            /* 123: GPIO Port P7 */
    .word  GPIOQ0_IRQHandler            /* 124: GPIO Port Q (Summary or Q0) */
    .word  GPIOQ1_IRQHandler            /* 125: GPIO Port Q1 */
    .word  GPIOQ2_IRQHandler            /* 126: GPIO Port Q2 */
    .word  GPIOQ3_IRQHandler            /* 127: GPIO Port Q3 */
    .word  GPIOQ4_IRQHandler            /* 128: GPIO Port Q4 */
    .word  GPIOQ5_IRQHandler            /* 129: GPIO Port Q5 */
    .word  GPIOQ6_IRQHandler            /* 130: GPIO Port Q6 */
    .word  GPIOQ7_IRQHandler            /* 131: GPIO Port Q7 */
    .word  GPIOR_IRQHandler             /* 132: GPIO Port R */
    .word  GPIOS_IRQHandler             /* 133: GPIO Port S */
    .word  PMW1_0_IRQHandler            /* 134: PWM 1 Generator 0 */
    .word  PWM1_1_IRQHandler            /* 135: PWM 1 Generator 1 */
    .word  PWM1_2_IRQHandler            /* 136: PWM 1 Generator 2 */
    .word  PWM1_3_IRQHandler            /* 137: PWM 1 Generator 3 */
    .word  PWM1_FAULT_IRQHandler        /* 138: PWM 1 Fault */

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

    .weak      QEI1_IRQHandler
    .thumb_set QEI1_IRQHandler,Default_Handler

    .weak      CAN0_IRQHandler
    .thumb_set CAN0_IRQHandler,Default_Handler

    .weak      CAN1_IRQHandler
    .thumb_set CAN1_IRQHandler,Default_Handler

    .weak      CAN2_IRQHandler
    .thumb_set CAN2_IRQHandler,Default_Handler

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

    .weak      WTIMER0A_IRQHandler
    .thumb_set WTIMER0A_IRQHandler,Default_Handler

    .weak      WTIMER0B_IRQHandler
    .thumb_set WTIMER0B_IRQHandler,Default_Handler

    .weak      WTIMER1A_IRQHandler
    .thumb_set WTIMER1A_IRQHandler,Default_Handler

    .weak      WTIMER1B_IRQHandler
    .thumb_set WTIMER1B_IRQHandler,Default_Handler

    .weak      WTIMER2A_IRQHandler
    .thumb_set WTIMER2A_IRQHandler,Default_Handler

    .weak      WTIMER2B_IRQHandler
    .thumb_set WTIMER2B_IRQHandler,Default_Handler

    .weak      WTIMER3A_IRQHandler
    .thumb_set WTIMER3A_IRQHandler,Default_Handler

    .weak      WTIMER3B_IRQHandler
    .thumb_set WTIMER3B_IRQHandler,Default_Handler

    .weak      WTIMER4A_IRQHandler
    .thumb_set WTIMER4A_IRQHandler,Default_Handler

    .weak      WTIMER4B_IRQHandler
    .thumb_set WTIMER4B_IRQHandler,Default_Handler

    .weak      WTIMER5A_IRQHandler
    .thumb_set WTIMER5A_IRQHandler,Default_Handler

    .weak      WTIMER5B_IRQHandler
    .thumb_set WTIMER5B_IRQHandler,Default_Handler

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

    .weak      QEI2_IRQHandler
    .thumb_set QEI2_IRQHandler,Default_Handler

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

    .weak      PMW1_0_IRQHandler
    .thumb_set PMW1_0_IRQHandler,Default_Handler

    .weak      PWM1_1_IRQHandler
    .thumb_set PWM1_1_IRQHandler,Default_Handler

    .weak      PWM1_2_IRQHandler
    .thumb_set PWM1_2_IRQHandler,Default_Handler

    .weak      PWM1_3_IRQHandler
    .thumb_set PWM1_3_IRQHandler,Default_Handler

    .weak      PWM1_FAULT_IRQHandler
    .thumb_set PWM1_FAULT_IRQHandler,Default_Handler
