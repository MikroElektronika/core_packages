const register CPU_APSR        = 0;
const register CPU_IAPSR       = 1;
const register CPU_EAPSR       = 2;
const register CPU_XPSR        = 3;
const register CPU_IPSR        = 5;
const register CPU_EPSR        = 6;
const register CPU_IEPSR       = 7;
const register CPU_MSP         = 8;
const register CPU_PSP         = 9;
const register CPU_PRIMASK     = 16;
const register CPU_BASEPRI     = 17;
const register CPU_BASEPRI_MAX = 18;
const register CPU_FAULTMASK   = 19;
const register CPU_CONTROL     = 20;

unsigned long _VOLTAGE_RANGE;

/* Consts interrupt priority levels. */
const _NVIC_INT_PRIORITY_LVL0      = 0;
const _NVIC_INT_PRIORITY_LVL1      = 1;
const _NVIC_INT_PRIORITY_LVL2      = 2;
const _NVIC_INT_PRIORITY_LVL3      = 3;
const _NVIC_INT_PRIORITY_LVL4      = 4;
const _NVIC_INT_PRIORITY_LVL5      = 5;
const _NVIC_INT_PRIORITY_LVL6      = 6;
const _NVIC_INT_PRIORITY_LVL7      = 7;
const _NVIC_INT_PRIORITY_LVL8      = 8;
const _NVIC_INT_PRIORITY_LVL9      = 9;
const _NVIC_INT_PRIORITY_LVL10     = 10;
const _NVIC_INT_PRIORITY_LVL11     = 11;
const _NVIC_INT_PRIORITY_LVL12     = 12;
const _NVIC_INT_PRIORITY_LVL13     = 13;
const _NVIC_INT_PRIORITY_LVL14     = 14;
const _NVIC_INT_PRIORITY_LVL15     = 15;

const unsigned long _OSC_LOCK_MASK = 0x00000100;

void __CC2DW()
{
    asm {
    L_loopDW:
        LDRB.W       R9, [R12], #1
        STRB.W       R9, [R11], #1
        CMP.W        R11, R10
        BNE          L_loopDW
    }
}

void __CA2AB()
{
    asm {
    L_loopCA2ABs:
        LDRB.W       R9, [R10], #1
        STRB.W       R9, [R11], #1
        CMP.W        R10, R12
        BNE          L_loopCA2ABs
    }
}

void __CS2S()
{
    asm {
    L_loopCS2Ss:
        LDRB.W       R10, [R11], #1
        CMP.W        R10, #0
        BEQ          L_CS2Send
        STRB.W       R10, [R12], #1
        B            L_loopCS2Ss
    L_CS2Send:
    }
}

void __FZinS()
{
    asm {
    L_loopCS2Ss:
        LDRB.W       R11, [R12], #1
        CMP.W        R11, #0
        BNE          L_loopCS2Ss
        SUB.W        R12, R12, #1
    }
}

void __FillZeros()
{
    asm {
          MOV.W     R9, #0
          MOV.W     R12, #0
          CMP.W     SP, R10
          BGT       L_loopFZs
          CMP.W     SP, R11
          BLT       L_loopFZs
          MOV       R12, R10
          MOV       R10, SP
    L_loopFZs:
          STR.W     R9, [R11], #4
          CMP.W     R11, R10
          BNE       L_loopFZs
          CMP.W     R12, R10
          BLE       L_norep
          MOV       R10, R12
          LDR       R11, [R9]
          ADD       R11, R11,#4
          B         L_loopFZs
    L_norep:
    }
}

/**
 * @brief Enables the processor interrupt.
 * @details Allows the processor to respond to interrupts. This does not
 *          affect the set of interrupts enabled in the interrupt controller;
 *          it just gates the single interrupt from the controller to the processor.
 * @return The state of PRIMASK on entry.
 */
unsigned long EnableInterrupts()
{
    unsigned long result;

    result = CPU_REG_GET( CPU_PRIMASK );
    asm CPSIE I;

    return result;
}

/**
 * @brief Disables the processor interrupt.
 * @details Prevents the processor from receiving interrupts.
 *          This does not affect the set of interrupts enabled in the interrupt
 *          controller; it just gates the single interrupt from the controller
 *          to the processor.
 * @return The state of PRIMASK on entry.
 */
unsigned long DisableInterrupts()
{
    unsigned long result;

    result = CPU_REG_GET( CPU_PRIMASK );
    asm CPSID I;

    return result;
}

void RestoreInterrupts( unsigned long primask )
{
    if ( primask )
        asm CPSID I;
    else
        asm CPSIE I;
}

/**
 * @brief Enables an interrupt.
 * @param ulInterrupt Specifies the interrupt to be enabled.
 * @details The specified interrupt is enabled in the interrupt controller.
 *          Other enables for the interrupt (such as at the peripheral level)
 *          are unaffected by this function.
 * @return None.
 */
void NVIC_IntEnable( const unsigned long ivt )
{
    unsigned long * ptr;

    // Determine the interrupt to enable.
    if ( ivt == IVT_INT_MemManage ) {
        // Enable the MemManage interrupt.
        SCB_SHCRS |= 1ul << MEMFAULTENA;
    } else if ( ivt == IVT_INT_BusFault ) {
        // Enable the bus fault interrupt.
        SCB_SHCRS |= 1ul << BUSFAULTENA;
    } else if ( ivt == IVT_INT_UsageFault ) {
        // Enable the usage fault interrupt.
        SCB_SHCRS |= 1ul << USGFAULTENA;
    } else if ( ivt == IVT_INT_SysTick ) {
        // Enable the System Tick interrupt.
        STK_CTRL |= 1ul << TICKINT;
    } else if ( ivt >= 16 ) {
        // Enable the general interrupt.
        ptr  = &NVIC_ISER0 + ( ivt - 16 ) / 32;
        *ptr = 1ul << ( ( ivt - 16 ) & 0x1F );
    }
}

/**
 * @brief Disables an interrupt.
 * @param ulInterrupt Specifies the interrupt to be disabled.
 * @details The specified interrupt is disabled in the interrupt controller.
 *          Other enables for the interrupt (such as at the peripheral level)
 *          are unaffected by this function.
 * @return None.
 */
void NVIC_IntDisable( const unsigned long ivt )
{
    unsigned long * ptr;

    // Determine the interrupt to disable.
    if ( ivt == IVT_INT_MemManage ) {
        // Disable the MemManage interrupt.
        SCB_SHCRS &= ~( 1ul << MEMFAULTENA );
    } else if ( ivt == IVT_INT_BusFault ) {
        // Disable the bus fault interrupt.
        SCB_SHCRS &= ~( 1ul << BUSFAULTENA );
    } else if ( ivt == IVT_INT_UsageFault ) {
        // Disable the usage fault interrupt.
        SCB_SHCRS &= ~( 1ul << USGFAULTENA );
    } else if ( ivt == IVT_INT_SysTick ) {
        // Disable the System Tick interrupt.
        STK_CTRL &= ~( 1ul << TICKINT );
    } else if ( ivt >= 16 ) {
        // Disable the general interrupt.
        ptr  = &NVIC_ICER0 + ( ivt - 16 ) / 32;
        *ptr = 1ul << ( ( ivt - 16 ) & 0x1F );
    }
}

/**
 * @brief Sets an interrupt priority.
 * @details This function sets the priority level for a specific interrupt.
 *          The priority level determines the order in which interrupts are
 *          handled by the processor, with lower numerical values indicating
 *          higher priority.
 * @param ivt Specifies the interrupt vector table number.
 * @param priority Specifies the value for interrupt priority.
 * @return None.
 */
void NVIC_SetIntPriority( char ivt, char priority )
{
    unsigned long * p;
    char            shift;
    if ( ivt > 15 ) {
        p     = &NVIC_IPR0 + ( ( ivt - 16 ) >> 2 );           // >> 2; four vectors per register
        shift = ( ( ( ivt - 16 ) % 4 ) << 3 ) + 4;            // +4 for high nibble
        if ( priority & 0x0F ) {                              // priority check
            *p &= ~( 0xFul << shift );                        // delete old value // SWRELARM-665
            *p |= ( unsigned long )priority << shift;         // write to upper nibble byte
        } else {                                              // In case priority value is sent in hi nibble record and for IVT_IP0
            *p &= ~( 0xF << shift );                          // delete old value
            *p |= ( unsigned long )priority << ( shift - 4 ); // write to high nibble byte
        }
    }
}

void __GenExcept()
{
    while ( 1 )
        ;
}

/**
 * @brief Resets the device.
 * @details This function performs a software reset of the entire device.
 *          The processor and all peripherals are reset, and all device
 *          registers return to their default values. The reset cause
 *          register maintains its current value with the software reset
 *          bit set.
 * @return This function does not return.
 */
void SystemReset( void )
{
    // Perform a software reset request.  This will cause the device to reset,
    // no further code is executed.
    SCB_AIRCR = 0x05FA0000 | ( 1ul << SYSRESETREQ );
    // The device should have reset, so this should never be reached.  Just in
    // case, loop forever.
    while ( 1 ) {
    }
}

void __EnableFPU()
{
    asm {
    ; CPACR is located at address 0xE000ED88
    MOVW     R0, #0xED88
    MOVT     R0, #0xE000
    ; Read CPACR
    LDR     R1, [R0]
    ; Set bits 20-23 to enable CP10 and CP11 coprocessors
    ORR     R1, R1, #0xF00000
    ; Write back the modified value to the CPACR
    STR     R1, [R0]
    }
    asm nop asm nop asm nop asm nop
        // The code below includes rounding to zero during conversion.
    asm vmrs R0,
        FPSCR
        R0 = R0 | ( 0b11ul << 22 ); // SWRELARM-665
    asm vmsr FPSCR, R0
}

static void InitialSetUpFosc()
{
    __System_CLOCK_IN_KHZ = 12345677;
    _VOLTAGE_RANGE        = 12345676;
}

void __SetUpSPandVectTable()
{
    asm {
        LDR R0, =0x000B0000
        LDR R1, =0xE000ED08
        STR R0, [R1]
        LDR SP,[R0]
    }
}

static void InitialSetUpRCCRCC2()
{
    unsigned long volatile ulPCR_PROC_CLK_CNTRL, ulPCR_INST_SLOW_CLK_CNTRL, ulVBAT_INST_CLOCK;
    unsigned short cnt;

    ulPCR_INST_SLOW_CLK_CNTRL = 12345678;
    ulPCR_PROC_CLK_CNTRL      = 12345679;
    ulVBAT_INST_CLOCK         = 12345680;

    // Suggested by Microchip
    // Bit[1] = 1 Disable Write Buffer
    NVIC_ACTLR |= 0x02;

    if ( ( ulPCR_PROC_CLK_CNTRL == 1 ) || ( ulPCR_PROC_CLK_CNTRL == 3 ) || ( ulPCR_PROC_CLK_CNTRL == 4 ) ||
         ( ulPCR_PROC_CLK_CNTRL == 16 ) || ( ulPCR_PROC_CLK_CNTRL == 48 ) ) {
        PCR_INST_PROC_CLK_CNTRL = ulPCR_PROC_CLK_CNTRL;
    } else {
        PCR_INST_PROC_CLK_CNTRL = 1;
    }

    VBAT_INST_CLOCK_ENbits.XOSEL         = ulVBAT_INST_CLOCK.B3;
    VBAT_INST_CLOCK_ENbits.C32KHZ_SOURCE = ulVBAT_INST_CLOCK.B2;
    VBAT_INST_CLOCK_ENbits.EXT_32K       = ulVBAT_INST_CLOCK.B1;
    VBAT_INST_CLOCK_ENbits.C32K_SUPPRESS = ulVBAT_INST_CLOCK.B0;
    Delay_100ms();

    PCR_INST_SLOW_CLK_CNTRL = ulPCR_INST_SLOW_CLK_CNTRL;
}
