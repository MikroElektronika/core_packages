#include "SIM_typedef.h"
#include "stdint.h"
#define __IO
#define __I

/* Memory mapping of Cortex-M4 Hardware */
#define SCS_BASE       (0xE000E000UL)           /*!< System Control Space Base Address  */
#define ITM_BASE       (0xE0000000UL)           /*!< ITM Base Address                   */
#define DWT_BASE       (0xE0001000UL)           /*!< DWT Base Address                   */
#define TPI_BASE       (0xE0040000UL)           /*!< TPI Base Address                   */
#define CoreDebug_BASE (0xE000EDF0UL)           /*!< Core Debug Base Address            */
#define SysTick_BASE   (SCS_BASE + 0x0010UL)    /*!< SysTick Base Address               */
#define NVIC_BASE      (SCS_BASE + 0x0100UL)    /*!< NVIC Base Address                  */
#define SCB_BASE       (SCS_BASE + 0x0D00UL)    /*!< System Control Block Base Address  */

#define SCnSCB         ((SCnSCB_Type*)SCS_BASE) /*!< System control Register not in SCB */
#define SCB            ((SCB_Type*)SCB_BASE)    /*!< SCB configuration struct           */

/* brief  Structure type to access the System Control Block (SCB). */
typedef struct
{
    __I uint32_t  CPUID;          /*!< Offset: 0x000 (R/ )  CPUID Base Register                                   */
    __IO uint32_t ICSR;           /*!< Offset: 0x004 (R/W)  Interrupt Control and State Register                  */
    __IO uint32_t VTOR;           /*!< Offset: 0x008 (R/W)  Vector Table Offset Register                          */
    __IO uint32_t AIRCR;          /*!< Offset: 0x00C (R/W)  Application Interrupt and Reset Control Register      */
    __IO uint32_t SCR;            /*!< Offset: 0x010 (R/W)  System Control Register                               */
    __IO uint32_t CCR;            /*!< Offset: 0x014 (R/W)  Configuration Control Register                        */
    __IO uint8_t  SHP[ 12 ];      /*!< Offset: 0x018 (R/W)  System Handlers Priority Registers (4-7, 8-11, 12-15) */
    __IO uint32_t SHCSR;          /*!< Offset: 0x024 (R/W)  System Handler Control and State Register             */
    __IO uint32_t CFSR;           /*!< Offset: 0x028 (R/W)  Configurable Fault Status Register                    */
    __IO uint32_t HFSR;           /*!< Offset: 0x02C (R/W)  HardFault Status Register                             */
    __IO uint32_t DFSR;           /*!< Offset: 0x030 (R/W)  Debug Fault Status Register                           */
    __IO uint32_t MMFAR;          /*!< Offset: 0x034 (R/W)  MemManage Fault Address Register                      */
    __IO uint32_t BFAR;           /*!< Offset: 0x038 (R/W)  BusFault Address Register                             */
    __IO uint32_t AFSR;           /*!< Offset: 0x03C (R/W)  Auxiliary Fault Status Register                       */
    __I uint32_t  PFR[ 2 ];       /*!< Offset: 0x040 (R/ )  Processor Feature Register                            */
    __I uint32_t  DFR;            /*!< Offset: 0x048 (R/ )  Debug Feature Register                                */
    __I uint32_t  ADR;            /*!< Offset: 0x04C (R/ )  Auxiliary Feature Register                            */
    __I uint32_t  MMFR[ 4 ];      /*!< Offset: 0x050 (R/ )  Memory Model Feature Register                         */
    __I uint32_t  ISAR[ 5 ];      /*!< Offset: 0x060 (R/ )  Instruction Set Attributes Register                   */
    uint32_t      RESERVED0[ 5 ];
    __IO uint32_t CPACR;          /*!< Offset: 0x088 (R/W)  Coprocessor Access Control Register                   */
} SCB_Type;

/* WDOG - Register Layout Typedef */
typedef struct
{
    __IO uint16_t STCTRLH; /*!< Watchdog Status and Control Register High, offset: 0x0 */
    __IO uint16_t STCTRLL; /*!< Watchdog Status and Control Register Low, offset: 0x2  */
    __IO uint16_t TOVALH;  /*!< Watchdog Time-out Value Register High, offset: 0x4     */
    __IO uint16_t TOVALL;  /*!< Watchdog Time-out Value Register Low, offset: 0x6      */
    __IO uint16_t WINH;    /*!< Watchdog Window Register High, offset: 0x8             */
    __IO uint16_t WINL;    /*!< Watchdog Window Register Low, offset: 0xA              */
    __IO uint16_t REFRESH; /*!< Watchdog Refresh register, offset: 0xC                 */
    __IO uint16_t UNLOCK;  /*!< Watchdog Unlock register, offset: 0xE                  */
    __IO uint16_t TMROUTH; /*!< Watchdog Timer Output Register High, offset: 0x10      */
    __IO uint16_t TMROUTL; /*!< Watchdog Timer Output Register Low, offset: 0x12       */
    __IO uint16_t RSTCNT;  /*!< Watchdog Reset Count register, offset: 0x14            */
    __IO uint16_t PRESC;   /*!< Watchdog Prescaler register, offset: 0x16              */
} WDOG_Type, *WDOG_MemMapPtr;

/* WDOG - Register accessors */
#define WDOG_STCTRLH_REG(base)                   ((base)->STCTRLH)
#define WDOG_STCTRLL_REG(base)                   ((base)->STCTRLL)
#define WDOG_TOVALH_REG(base)                    ((base)->TOVALH)
#define WDOG_TOVALL_REG(base)                    ((base)->TOVALL)
#define WDOG_WINH_REG(base)                      ((base)->WINH)
#define WDOG_WINL_REG(base)                      ((base)->WINL)
#define WDOG_REFRESH_REG(base)                   ((base)->REFRESH)
#define WDOG_UNLOCK_REG(base)                    ((base)->UNLOCK)
#define WDOG_TMROUTH_REG(base)                   ((base)->TMROUTH)
#define WDOG_TMROUTL_REG(base)                   ((base)->TMROUTL)
#define WDOG_RSTCNT_REG(base)                    ((base)->RSTCNT)
#define WDOG_PRESC_REG(base)                     ((base)->PRESC)

/* STCTRLH Bit Fields */
#define WDOG_STCTRLH_WDOGEN_MASK                 0x1ul
#define WDOG_STCTRLH_WDOGEN_SHIFT                0
#define WDOG_STCTRLH_WDOGEN_WIDTH                1
#define WDOG_STCTRLH_WDOGEN(x)                   (((uint16_t)(((uint16_t)(x))<<WDOG_STCTRLH_WDOGEN_SHIFT))&WDOG_STCTRLH_WDOGEN_MASK)
#define WDOG_STCTRLH_CLKSRC_MASK                 0x2ul
#define WDOG_STCTRLH_CLKSRC_SHIFT                1
#define WDOG_STCTRLH_CLKSRC_WIDTH                1
#define WDOG_STCTRLH_CLKSRC(x)                   (((uint16_t)(((uint16_t)(x))<<WDOG_STCTRLH_CLKSRC_SHIFT))&WDOG_STCTRLH_CLKSRC_MASK)
#define WDOG_STCTRLH_IRQRSTEN_MASK               0x4ul
#define WDOG_STCTRLH_IRQRSTEN_SHIFT              2
#define WDOG_STCTRLH_IRQRSTEN_WIDTH              1
#define WDOG_STCTRLH_IRQRSTEN(x)                 (((uint16_t)(((uint16_t)(x))<<WDOG_STCTRLH_IRQRSTEN_SHIFT))&WDOG_STCTRLH_IRQRSTEN_MASK)
#define WDOG_STCTRLH_WINEN_MASK                  0x8ul
#define WDOG_STCTRLH_WINEN_SHIFT                 3
#define WDOG_STCTRLH_WINEN_WIDTH                 1
#define WDOG_STCTRLH_WINEN(x)                    (((uint16_t)(((uint16_t)(x))<<WDOG_STCTRLH_WINEN_SHIFT))&WDOG_STCTRLH_WINEN_MASK)
#define WDOG_STCTRLH_ALLOWUPDATE_MASK            0x10ul
#define WDOG_STCTRLH_ALLOWUPDATE_SHIFT           4
#define WDOG_STCTRLH_ALLOWUPDATE_WIDTH           1
#define WDOG_STCTRLH_ALLOWUPDATE(x)              (((uint16_t)(((uint16_t)(x))<<WDOG_STCTRLH_ALLOWUPDATE_SHIFT))&WDOG_STCTRLH_ALLOWUPDATE_MASK)
#define WDOG_STCTRLH_DBGEN_MASK                  0x20ul
#define WDOG_STCTRLH_DBGEN_SHIFT                 5
#define WDOG_STCTRLH_DBGEN_WIDTH                 1
#define WDOG_STCTRLH_DBGEN(x)                    (((uint16_t)(((uint16_t)(x))<<WDOG_STCTRLH_DBGEN_SHIFT))&WDOG_STCTRLH_DBGEN_MASK)
#define WDOG_STCTRLH_STOPEN_MASK                 0x40ul
#define WDOG_STCTRLH_STOPEN_SHIFT                6
#define WDOG_STCTRLH_STOPEN_WIDTH                1
#define WDOG_STCTRLH_STOPEN(x)                   (((uint16_t)(((uint16_t)(x))<<WDOG_STCTRLH_STOPEN_SHIFT))&WDOG_STCTRLH_STOPEN_MASK)
#define WDOG_STCTRLH_WAITEN_MASK                 0x80ul
#define WDOG_STCTRLH_WAITEN_SHIFT                7
#define WDOG_STCTRLH_WAITEN_WIDTH                1
#define WDOG_STCTRLH_WAITEN(x)                   (((uint16_t)(((uint16_t)(x))<<WDOG_STCTRLH_WAITEN_SHIFT))&WDOG_STCTRLH_WAITEN_MASK)
#define WDOG_STCTRLH_TESTWDOG_MASK               0x400ul
#define WDOG_STCTRLH_TESTWDOG_SHIFT              10
#define WDOG_STCTRLH_TESTWDOG_WIDTH              1
#define WDOG_STCTRLH_TESTWDOG(x)                 (((uint16_t)(((uint16_t)(x))<<WDOG_STCTRLH_TESTWDOG_SHIFT))&WDOG_STCTRLH_TESTWDOG_MASK)
#define WDOG_STCTRLH_TESTSEL_MASK                0x800ul
#define WDOG_STCTRLH_TESTSEL_SHIFT               11
#define WDOG_STCTRLH_TESTSEL_WIDTH               1
#define WDOG_STCTRLH_TESTSEL(x)                  (((uint16_t)(((uint16_t)(x))<<WDOG_STCTRLH_TESTSEL_SHIFT))&WDOG_STCTRLH_TESTSEL_MASK)
#define WDOG_STCTRLH_BYTESEL_MASK                0x3000ul
#define WDOG_STCTRLH_BYTESEL_SHIFT               12
#define WDOG_STCTRLH_BYTESEL_WIDTH               2
#define WDOG_STCTRLH_BYTESEL(x)                  (((uint16_t)(((uint16_t)(x))<<WDOG_STCTRLH_BYTESEL_SHIFT))&WDOG_STCTRLH_BYTESEL_MASK)
#define WDOG_STCTRLH_DISTESTWDOG_MASK            0x4000ul
#define WDOG_STCTRLH_DISTESTWDOG_SHIFT           14
#define WDOG_STCTRLH_DISTESTWDOG_WIDTH           1
#define WDOG_STCTRLH_DISTESTWDOG(x)              (((uint16_t)(((uint16_t)(x))<<WDOG_STCTRLH_DISTESTWDOG_SHIFT))&WDOG_STCTRLH_DISTESTWDOG_MASK)
/* STCTRLL Bit Fields */
#define WDOG_STCTRLL_INTFLG_MASK                 0x8000ul
#define WDOG_STCTRLL_INTFLG_SHIFT                15
#define WDOG_STCTRLL_INTFLG_WIDTH                1
#define WDOG_STCTRLL_INTFLG(x)                   (((uint16_t)(((uint16_t)(x))<<WDOG_STCTRLL_INTFLG_SHIFT))&WDOG_STCTRLL_INTFLG_MASK)
/* TOVALH Bit Fields */
#define WDOG_TOVALH_TOVALHIGH_MASK               0xFFFFul
#define WDOG_TOVALH_TOVALHIGH_SHIFT              0
#define WDOG_TOVALH_TOVALHIGH_WIDTH              16
#define WDOG_TOVALH_TOVALHIGH(x)                 (((uint16_t)(((uint16_t)(x))<<WDOG_TOVALH_TOVALHIGH_SHIFT))&WDOG_TOVALH_TOVALHIGH_MASK)
/* TOVALL Bit Fields */
#define WDOG_TOVALL_TOVALLOW_MASK                0xFFFFul
#define WDOG_TOVALL_TOVALLOW_SHIFT               0
#define WDOG_TOVALL_TOVALLOW_WIDTH               16
#define WDOG_TOVALL_TOVALLOW(x)                  (((uint16_t)(((uint16_t)(x))<<WDOG_TOVALL_TOVALLOW_SHIFT))&WDOG_TOVALL_TOVALLOW_MASK)
/* WINH Bit Fields */
#define WDOG_WINH_WINHIGH_MASK                   0xFFFFul
#define WDOG_WINH_WINHIGH_SHIFT                  0
#define WDOG_WINH_WINHIGH_WIDTH                  16
#define WDOG_WINH_WINHIGH(x)                     (((uint16_t)(((uint16_t)(x))<<WDOG_WINH_WINHIGH_SHIFT))&WDOG_WINH_WINHIGH_MASK)
/* WINL Bit Fields */
#define WDOG_WINL_WINLOW_MASK                    0xFFFFul
#define WDOG_WINL_WINLOW_SHIFT                   0
#define WDOG_WINL_WINLOW_WIDTH                   16
#define WDOG_WINL_WINLOW(x)                      (((uint16_t)(((uint16_t)(x))<<WDOG_WINL_WINLOW_SHIFT))&WDOG_WINL_WINLOW_MASK)
/* REFRESH Bit Fields */
#define WDOG_REFRESH_WDOGREFRESH_MASK            0xFFFFul
#define WDOG_REFRESH_WDOGREFRESH_SHIFT           0
#define WDOG_REFRESH_WDOGREFRESH_WIDTH           16
#define WDOG_REFRESH_WDOGREFRESH(x)              (((uint16_t)(((uint16_t)(x))<<WDOG_REFRESH_WDOGREFRESH_SHIFT))&WDOG_REFRESH_WDOGREFRESH_MASK)
/* UNLOCK Bit Fields */
#define WDOG_UNLOCK_WDOGUNLOCK_MASK              0xFFFFul
#define WDOG_UNLOCK_WDOGUNLOCK_SHIFT             0
#define WDOG_UNLOCK_WDOGUNLOCK_WIDTH             16
#define WDOG_UNLOCK_WDOGUNLOCK(x)                (((uint16_t)(((uint16_t)(x))<<WDOG_UNLOCK_WDOGUNLOCK_SHIFT))&WDOG_UNLOCK_WDOGUNLOCK_MASK)
/* TMROUTH Bit Fields */
#define WDOG_TMROUTH_TIMEROUTHIGH_MASK           0xFFFFul
#define WDOG_TMROUTH_TIMEROUTHIGH_SHIFT          0
#define WDOG_TMROUTH_TIMEROUTHIGH_WIDTH          16
#define WDOG_TMROUTH_TIMEROUTHIGH(x)             (((uint16_t)(((uint16_t)(x))<<WDOG_TMROUTH_TIMEROUTHIGH_SHIFT))&WDOG_TMROUTH_TIMEROUTHIGH_MASK)
/* TMROUTL Bit Fields */
#define WDOG_TMROUTL_TIMEROUTLOW_MASK            0xFFFFul
#define WDOG_TMROUTL_TIMEROUTLOW_SHIFT           0
#define WDOG_TMROUTL_TIMEROUTLOW_WIDTH           16
#define WDOG_TMROUTL_TIMEROUTLOW(x)              (((uint16_t)(((uint16_t)(x))<<WDOG_TMROUTL_TIMEROUTLOW_SHIFT))&WDOG_TMROUTL_TIMEROUTLOW_MASK)
/* RSTCNT Bit Fields */
#define WDOG_RSTCNT_RSTCNT_MASK                  0xFFFFul
#define WDOG_RSTCNT_RSTCNT_SHIFT                 0
#define WDOG_RSTCNT_RSTCNT_WIDTH                 16
#define WDOG_RSTCNT_RSTCNT(x)                    (((uint16_t)(((uint16_t)(x))<<WDOG_RSTCNT_RSTCNT_SHIFT))&WDOG_RSTCNT_RSTCNT_MASK)
/* PRESC Bit Fields */
#define WDOG_PRESC_PRESCVAL_MASK                 0x700ul
#define WDOG_PRESC_PRESCVAL_SHIFT                8
#define WDOG_PRESC_PRESCVAL_WIDTH                3
#define WDOG_PRESC_PRESCVAL(x)                   (((uint16_t)(((uint16_t)(x))<<WDOG_PRESC_PRESCVAL_SHIFT))&WDOG_PRESC_PRESCVAL_MASK)

/* WDOG - Peripheral instance base addresses */
/* Peripheral WDOG base address */
#define WDOG_BASE                                (0x40052000ul)
/* Peripheral WDOG base pointer */
#define WDOG                                     ((WDOG_Type *)WDOG_BASE)
#define WDOG_BASE_PTR                            (WDOG)
/* Array initializer of WDOG peripheral base addresses */
#define WDOG_BASE_ADDRS                          { WDOG_BASE }
/* Array initializer of WDOG peripheral base pointers */
#define WDOG_BASE_PTRS                           { WDOG }
/* Interrupt vectors for the WDOG peripheral type */
#define WDOG_IRQS                                { WDOG_EWM_IRQn }

/* WDOG - Register instance definitions */
#define WDOG_STCTRLH                             WDOG_STCTRLH_REG(WDOG)
#define WDOG_STCTRLL                             WDOG_STCTRLL_REG(WDOG)
#define WDOG_TOVALH                              WDOG_TOVALH_REG(WDOG)
#define WDOG_TOVALL                              WDOG_TOVALL_REG(WDOG)
#define WDOG_WINH                                WDOG_WINH_REG(WDOG)
#define WDOG_WINL                                WDOG_WINL_REG(WDOG)
#define WDOG_REFRESH                             WDOG_REFRESH_REG(WDOG)
#define WDOG_UNLOCK                              WDOG_UNLOCK_REG(WDOG)
#define WDOG_TMROUTH                             WDOG_TMROUTH_REG(WDOG)
#define WDOG_TMROUTL                             WDOG_TMROUTL_REG(WDOG)
#define WDOG_RSTCNT                              WDOG_RSTCNT_REG(WDOG)
#define WDOG_PRESC                               WDOG_PRESC_REG(WDOG)

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

uint32_t _VOLTAGE_RANGE;

static uint8_t APBAHBPrescTable[ 16 ] = { 0, 0, 0, 0, 1, 2, 3, 4, 1, 2, 3, 4, 6, 7, 8, 9 };

/* Constants interrupt priority levels */
const _NVIC_INT_PRIORITY_LVL0  = 0;
const _NVIC_INT_PRIORITY_LVL1  = 1;
const _NVIC_INT_PRIORITY_LVL2  = 2;
const _NVIC_INT_PRIORITY_LVL3  = 3;
const _NVIC_INT_PRIORITY_LVL4  = 4;
const _NVIC_INT_PRIORITY_LVL5  = 5;
const _NVIC_INT_PRIORITY_LVL6  = 6;
const _NVIC_INT_PRIORITY_LVL7  = 7;
const _NVIC_INT_PRIORITY_LVL8  = 8;
const _NVIC_INT_PRIORITY_LVL9  = 9;
const _NVIC_INT_PRIORITY_LVL10 = 10;
const _NVIC_INT_PRIORITY_LVL11 = 11;
const _NVIC_INT_PRIORITY_LVL12 = 12;
const _NVIC_INT_PRIORITY_LVL13 = 13;
const _NVIC_INT_PRIORITY_LVL14 = 14;
const _NVIC_INT_PRIORITY_LVL15 = 15;

// Routine that copies from the memory area pointed to by R12
// to the memory area pointed to by R11
// the address up to which it copies is in R10.
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
        MOV.W        R9, #0
        MOV.W        R12, #0
        CMP.W        SP, R10
        BGT          L_loopFZs
        CMP.W        SP, R11
        BLT          L_loopFZs
        MOV          R12, R10
        MOV          R10, SP
    L_loopFZs:
        STR.W        R9, [R11], #4
        CMP.W        R11, R10
        BNE          L_loopFZs
        CMP.W        R12, R10
        BLE          L_norep
        MOV          R10, R12
        LDR          R11, [R9]
        ADD          R11, R11, #4
        B            L_loopFZs
    L_norep:
    }
}

/**
 * @brief Enables the processor interrupt.
 * @details Allows the processor to respond to interrupts. This does not affect the
 *          set of interrupts enabled in the interrupt controller, it just gates the
 *          single interrupt from the controller to the processor.
 * @return The state of PRIMASK on entry.
 */
uint32_t EnableInterrupts()
{
    uint32_t result;

    result = CPU_REG_GET( CPU_PRIMASK );
    asm CPSIE I;

    return result;
}

/**
 * @brief Disables the processor interrupt.
 * @details Prevents the processor from receiving interrupts. This does not affect the
 *          set of interrupts enabled in the interrupt controller, it just gates the
 *          single interrupt from the controller to the processor.
 * @return The state of PRIMASK on entry.
 */
uint32_t DisableInterrupts()
{
    uint32_t result;

    result = CPU_REG_GET( CPU_PRIMASK );
    asm CPSID I;

    return result;
}

void RestoreInterrupts( uint32_t primask )
{
    if ( primask )
        asm CPSID I;
    else
        asm CPSIE I;
}

/**
 * @brief Enables an interrupt.
 * @param ulInterrupt Specifies the interrupt to be enabled.
 * @details The specified interrupt is enabled in the interrupt controller. Other
 *          enables for the interrupt (such as at the peripheral level) are unaffected
 *          by this function.
 * @return None.
 */
void NVIC_IntEnable( const uint32_t ivt )
{
    uint32_t * ptr;

    // Determine the interrupt to enable.
    if ( ivt == IVT_INT_Mem_Manage_Fault ) {
        // Enable the MemManage interrupt.
        SCB_SHCRS |= 1ul << MEMFAULTENA;
    } else if ( ivt == IVT_INT_Bus_Fault ) {
        // Enable the bus fault interrupt.
        SCB_SHCRS |= 1ul << BUSFAULTENA;
    } else if ( ivt == IVT_INT_Usage_Fault ) {
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
 * @brief Sets an interrupt priority.
 * @param ivt Interrupt vector table number.
 * @param priority Value for interrupt priority.
 * @details For a specific interrupt, sets the appropriate interrupt priority.
 * @return None.
 */
void NVIC_SetIntPriority( uint8_t ivt, uint8_t priority )
{
    uint32_t * p;
    uint8_t    shift;

    if ( ivt > 15 ) {
        p     = &NVIC_IPR0 + ( ( ivt - 16 ) >> 2 ); // >> 2; four vectors per register.
        shift = ( ( ( ivt - 16 ) % 4 ) << 3 ) + 4;  // +4 for high nibble.
    } else if ( ( ivt > 3 ) & ( ivt <= 15 ) ) {
        p     = &SCB_SHPR1 + ( ivt / 4 ) - 1;
        shift = ( ( ivt % 4 ) << 3 ) + 4;
    } else {
        return;
    }

    if ( priority & 0x0F ) {                         // priority check.
        *p &= ~( ( uint32_t )0xF << shift );         // clear old value.
        *p |= ( uint32_t )priority << shift;         // write to high nibble byte.
    } else {                                         // In case the priority value is sent in high nibble format for IVT_IP0.
        *p &= ~( ( uint32_t )0xF << shift );         // clear old value.
        *p |= ( uint32_t )priority << ( shift - 4 ); // write to high nibble byte.
    }
}

/**
 * @brief Disables an interrupt.
 * @param ulInterrupt Specifies the interrupt to be disabled.
 * @details The specified interrupt is disabled in the interrupt controller. Other
 *          enables for the interrupt (such as at the peripheral level) are unaffected
 *          by this function.
 * @return None.
 */
void NVIC_IntDisable( const uint32_t ivt )
{
    uint32_t * ptr;

    // Determine the interrupt to disable.
    if ( ivt == IVT_INT_Mem_Manage_Fault ) {
        // Disable the MemManage interrupt.
        SCB_SHCRS &= ~( 1ul << MEMFAULTENA );
    } else if ( ivt == IVT_INT_Bus_Fault ) {
        // Disable the bus fault interrupt.
        SCB_SHCRS &= ~( 1ul << BUSFAULTENA );
    } else if ( ivt == IVT_INT_Usage_Fault ) {
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

void __GenExcept()
{
    while ( 1 )
        ;
}

/**
 * @brief Resets the device.
 * @details This function performs a software reset of the entire device. The
 *          processor and all peripherals are reset, and all device registers will
 *          return to their default values (with the exception of the reset cause
 *          register, which will maintain its current value but have the software reset
 *          bit set as well).
 * @return None.
 */
void SystemReset( void )
{
    // Perform a software reset request.  This will cause the device to reset,
    // no further code is executed.
    SCB_AIRCR = 0x05FA0000 | ( 1ul << SYSRESETREQ );
    // The device should have reset, so this should never be reached. Just in
    // case, loop forever.
    while ( 1 ) {
    }
}

void __EnableFPU()
{
    asm CPSID I;
    SCB->CPACR |= ( ( 3UL << 10 * 2 ) | ( 3UL << 11 * 2 ) ); // set CP10, CP11 Full Access.
    asm nop;
    asm nop;
    asm nop;
    asm nop;
    // The code below enables rounding towards zero during conversion.
    asm VMRS R0, FPSCR
    R0 = R0 | ( 0b11ul << 22 );
    asm VMSR FPSCR, R0
    asm CPSIE I;
}

/* MCG - Register Layout Typedef */
typedef struct
{
    __IO uint8_t C1;                /*!< MCG Control 1 Register, offset: 0x0                    */
    __IO uint8_t C2;                /*!< MCG Control 2 Register, offset: 0x1                    */
    __IO uint8_t C3;                /*!< MCG Control 3 Register, offset: 0x2                    */
    __IO uint8_t C4;                /*!< MCG Control 4 Register, offset: 0x3                    */
    __IO uint8_t C5;                /*!< MCG Control 5 Register, offset: 0x4                    */
    __IO uint8_t C6;                /*!< MCG Control 6 Register, offset: 0x5                    */
    __IO uint8_t S;                 /*!< MCG Status Register, offset: 0x6                       */
    uint8_t      RESERVED_0[ 1 ];
    __IO uint8_t SC;                /*!< MCG Status and Control Register, offset: 0x8           */
    uint8_t      RESERVED_1[ 1 ];
    __IO uint8_t ATCVH;             /*!< MCG Auto Trim Compare Value High Register, offset: 0xA */
    __IO uint8_t ATCVL;             /*!< MCG Auto Trim Compare Value Low Register, offset: 0xB  */
    __IO uint8_t C7;                /*!< MCG Control 7 Register, offset: 0xC                    */
    __IO uint8_t C8;                /*!< MCG Control 8 Register, offset: 0xD                    */
} MCG_Type;

/* RCM - Register Layout Typedef */
typedef struct
{
    __I uint8_t  SRS0;            /*!< System Reset Status Register 0, offset: 0x0        */
    __I uint8_t  SRS1;            /*!< System Reset Status Register 1, offset: 0x1        */
    uint8_t      RESERVED_0[ 2 ];
    __IO uint8_t RPFC;            /*!< Reset Pin Filter Control register, offset: 0x4     */
    __IO uint8_t RPFW;            /*!< Reset Pin Filter Width register, offset: 0x5       */
    uint8_t      RESERVED_1[ 1 ];
    __I uint8_t  MR;              /*!< Mode Register, offset: 0x7                         */
    __IO uint8_t SSRS0;           /*!< Sticky System Reset Status Register 0, offset: 0x8 */
    __IO uint8_t SSRS1;           /*!< Sticky System Reset Status Register 1, offset: 0x9 */
} RCM_Type;

/* PMC - Register Layout Typedef */
typedef struct
{
    __IO uint8_t LVDSC1; /*!< Low Voltage Detect Status And Control 1 register, offset: 0x0 */
    __IO uint8_t LVDSC2; /*!< Low Voltage Detect Status And Control 2 register, offset: 0x1 */
    __IO uint8_t REGSC;  /*!< Regulator Status And Control register, offset: 0x2            */
} PMC_Type;

/* SMC - Register Layout Typedef */
typedef struct
{
    __IO uint8_t PMPROT;   /*!< Power Mode Protection register, offset: 0x0 */
    __IO uint8_t PMCTRL;   /*!< Power Mode Control register, offset: 0x1    */
    __IO uint8_t STOPCTRL; /*!< Stop Control Register, offset: 0x2          */
    __I uint8_t  PMSTAT;   /*!< Power Mode Status register, offset: 0x3     */
} SMC_Type;

/* SIM - Register Layout Typedef */
typedef struct
{
    __IO uint32_t SOPT1;              /*!< System Options Register 1, offset: 0x0                  */
    __IO uint32_t SOPT1CFG;           /*!< SOPT1 Configuration Register, offset: 0x4               */
    uint8_t       RESERVED_0[ 4092 ];
    __IO uint32_t SOPT2;              /*!< System Options Register 2, offset: 0x1004               */
    uint8_t       RESERVED_1[ 4 ];
    __IO uint32_t SOPT4;              /*!< System Options Register 4, offset: 0x100C               */
    __IO uint32_t SOPT5;              /*!< System Options Register 5, offset: 0x1010               */
    uint8_t       RESERVED_2[ 4 ];
    __IO uint32_t SOPT7;              /*!< System Options Register 7, offset: 0x1018               */
    __IO uint32_t SOPT8;              /*!< System Options Register 8, offset: 0x101C               */
    uint8_t       RESERVED_3[ 4 ];
    __I uint32_t  SDID;               /*!< System Device Identification Register, offset: 0x1024   */
    uint8_t       RESERVED_4[ 12 ];
    __IO uint32_t SCGC4;              /*!< System Clock Gating Control Register 4, offset: 0x1034  */
    __IO uint32_t SCGC5;              /*!< System Clock Gating Control Register 5, offset: 0x1038  */
    __IO uint32_t SCGC6;              /*!< System Clock Gating Control Register 6, offset: 0x103C  */
    __IO uint32_t SCGC7;              /*!< System Clock Gating Control Register 7, offset: 0x1040  */
    __IO uint32_t CLKDIV1;            /*!< System Clock Divider Register 1, offset: 0x1044         */
    __IO uint32_t CLKDIV2;            /*!< System Clock Divider Register 2, offset: 0x1048         */
    __IO uint32_t FCFG1;              /*!< Flash Configuration Register 1, offset: 0x104C          */
    __I uint32_t  FCFG2;              /*!< Flash Configuration Register 2, offset: 0x1050          */
    __I uint32_t  UIDH;               /*!< Unique Identification Register High, offset: 0x1054     */
    __I uint32_t  UIDMH;              /*!< Unique Identification Register Mid-High, offset: 0x1058 */
    __I uint32_t  UIDML;              /*!< Unique Identification Register Mid Low, offset: 0x105C  */
    __I uint32_t  UIDL;               /*!< Unique Identification Register Low, offset: 0x1060      */
} SIM_Type;

/* OSC - Register Layout Typedef */
typedef struct
{
    __IO uint8_t CR;              /*!< OSC Control Register, offset: 0x0 */
    uint8_t      RESERVED_0[ 1 ];
    __IO uint8_t DIV;             /*!< OSC_DIV, offset: 0x2 */
} OSC_Type;

/* Peripheral MCG base address */
#define MCG_BASE                                 (0x40064000ul)
/* Peripheral MCG base pointer */
#define MCG                                      ((MCG_Type *)MCG_BASE)
/* Peripheral RCM base address */
#define RCM_BASE                                 (0x4007F000ul)
/* Peripheral RCM base pointer */
#define RCM                                      ((RCM_Type *)RCM_BASE)
/* Peripheral PMC base address */
#define PMC_BASE                                 (0x4007D000ul)
/* Peripheral PMC base pointer */
#define PMC                                      ((PMC_Type *)PMC_BASE)
/* Peripheral SMC base address */
#define SMC_BASE                                 (0x4007E000ul)
/* Peripheral SMC base pointer */
#define SMC                                      ((SMC_Type *)SMC_BASE)
/* Peripheral SIM base address */
#define SIM_BASE                                 (0x40047000ul)
/* Peripheral SIM base pointer */
#define SIM                                      ((SIM_Type *)SIM_BASE)
/* Peripheral OSC base address */
#define OSC_BASE                                 (0x40065000ul)
/* Peripheral OSC base pointer */
#define OSC                                      ((OSC_Type *)OSC_BASE)

#define RCM_SRS0_WAKEUP_MASK  0x1ul
#define PMC_REGSC_ACKISO_MASK 0x8ul
#define SIM_SCGC6_RTC_MASK    0x20000000ul
#define RTC_CR_OSCE_MASK      0x100ul
#define RTC_CR_SC16P_MASK     0x400ul
#define RTC_CR_SC8P_MASK      0x800ul
#define RTC_CR_SC4P_MASK      0x1000ul
#define RTC_CR_SC2P_MASK      0x2000ul
#define RTC_CR_CLKO_MASK      0x200ul
#define SYSTEM_RTC_CR_VALUE   0x0300ul

/* Low power mode enable */
/* SMC_PMPROT: AHSRUN=1,AVLP=1,ALLS=1,AVLLS=1 */
#define SYSTEM_SMC_PMPROT_VALUE 0xAAUL

/* HSRUN config values */
/* MCG_C1: CLKS=0,FRDIV=3,IREFS=0,IRCLKEN=1,IREFSTEN=0 */
#define SYSTEM_MCG_C1_VALUE      0x1Aul
/* MCG_C2: LOCRE0=0,FCFTRIM=0,RANGE=2,HGO=0,EREFS=1,LP=0,IRCS=0 */
#define SYSTEM_MCG_C2_VALUE      0x24ul
/* MCG_C4: DMX32=0,DRST_DRS=0,FCTRIM=0,SCFTRIM=0 */
#define SYSTEM_MCG_C4_VALUE      0x00ul
/* MCG_SC: ATME=0,ATMS=0,ATMF=0,FLTPRSRV=0,FCRDIV=0,LOCS0=0 */
#define SYSTEM_MCG_SC_VALUE      0x00ul
/* MCG_C5: PLLCLKEN0=0,PLLSTEN0=0,PRDIV0=1 */
#define SYSTEM_MCG_C5_VALUE      0x01ul
/* MCG_C6: LOLIE0=0,PLLS=1,CME0=0,VDIV0=6 */
#define SYSTEM_MCG_C6_VALUE      0x46ul
/* MCG_C7: OSCSEL=0 */
#define SYSTEM_MCG_C7_VALUE      0x00ul
/* OSC_CR: ERCLKEN=1,EREFSTEN=0,SC2P=0,SC4P=0,SC8P=0,SC16P=0 */
#define SYSTEM_OSC_CR_VALUE      0x80ul
/* SMC_PMCTRL: RUNM=3,STOPA=0,STOPM=0 */
#define SYSTEM_SMC_PMCTRL_VALUE  0x60ul
/* SIM_CLKDIV1: OUTDIV1=0,OUTDIV2=1,OUTDIV3=1,OUTDIV4=4 */
#define SYSTEM_SIM_CLKDIV1_VALUE 0x01140000ul
/* SIM_SOPT1: USBREGEN=0,USBSSTBY=0,USBVSTBY=0,OSC32KSEL=2,OSC32KOUT=0,RAMSIZE=0 */
#define SYSTEM_SIM_SOPT1_VALUE   0x00080000ul
/* SIM_SOPT2: LPUARTSRC=0,USBSRC=0,PLLFLLSEL=1,TRACECLKSEL=0,FBSL=0,CLKOUTSEL=0,RTCCLKOUTSEL=0 */
#define SYSTEM_SIM_SOPT2_VALUE   0x00010000ul

#define SMC_PMCTRL_RUNM_MASK     0x60ul
#define SIM_SOPT1_OSC32KSEL_MASK 0xC0000ul
#define SIM_SOPT2_PLLFLLSEL_MASK 0x30000ul
#define SIM_SCGC5_PORTA_MASK     0x200ul

#define SIM_SCGC5_LPTMR_MASK     0x1u

#define PORT_PCR_ISF_MASK        0x1000000ul
#define PORT_PCR_MUX_MASK        0x700ul
#define PORT_PCR_MUX_SHIFT       8
#define PORT_PCR_MUX_WIDTH       3
#define PORT_PCR_MUX(x)          (((uint32_t)(((uint32_t)(x))<<PORT_PCR_MUX_SHIFT))&PORT_PCR_MUX_MASK)

/* C1 Bit Fields */
#define MCG_C1_IREFSTEN_MASK     0x1ul
#define MCG_C1_IREFSTEN_SHIFT    0
#define MCG_C1_IRCLKEN_MASK      0x2ul
#define MCG_C1_IRCLKEN_SHIFT     1
#define MCG_C1_IREFS_MASK        0x4ul
#define MCG_C1_IREFS_SHIFT       2
#define MCG_C1_FRDIV_MASK        0x38ul
#define MCG_C1_FRDIV_SHIFT       3
#define MCG_C1_FRDIV(x)          (((uint8_t)(((uint8_t)(x))<<MCG_C1_FRDIV_SHIFT))&MCG_C1_FRDIV_MASK)
#define MCG_C1_CLKS_MASK         0xC0ul
#define MCG_C1_CLKS_SHIFT        6
#define MCG_C1_CLKS(x)           (((uint8_t)(((uint8_t)(x))<<MCG_C1_CLKS_SHIFT))&MCG_C1_CLKS_MASK)
/* C2 Bit Fields */
#define MCG_C2_IRCS_MASK         0x1ul
#define MCG_C2_IRCS_SHIFT        0
#define MCG_C2_LP_MASK           0x2ul
#define MCG_C2_LP_SHIFT          1
#define MCG_C2_EREFS_MASK        0x4ul
#define MCG_C2_EREFS_SHIFT       2
#define MCG_C2_HGO_MASK          0x8ul
#define MCG_C2_HGO_SHIFT         3
#define MCG_C2_RANGE_MASK        0x30ul
#define MCG_C2_RANGE_SHIFT       4
#define MCG_C2_RANGE(x)          (((uint8_t)(((uint8_t)(x))<<MCG_C2_RANGE_SHIFT))&MCG_C2_RANGE_MASK)
#define MCG_C2_FCFTRIM_MASK      0x40ul
#define MCG_C2_FCFTRIM_SHIFT     6
#define MCG_C2_LOCRE0_MASK       0x80ul
#define MCG_C2_LOCRE0_SHIFT      7
/* C3 Bit Fields */
#define MCG_C3_SCTRIM_MASK       0xFFul
#define MCG_C3_SCTRIM_SHIFT      0
#define MCG_C3_SCTRIM(x)         (((uint8_t)(((uint8_t)(x))<<MCG_C3_SCTRIM_SHIFT))&MCG_C3_SCTRIM_MASK)
/* C4 Bit Fields */
#define MCG_C4_SCFTRIM_MASK      0x1ul
#define MCG_C4_SCFTRIM_SHIFT     0
#define MCG_C4_FCTRIM_MASK       0x1Eul
#define MCG_C4_FCTRIM_SHIFT      1
#define MCG_C4_FCTRIM(x)         (((uint8_t)(((uint8_t)(x))<<MCG_C4_FCTRIM_SHIFT))&MCG_C4_FCTRIM_MASK)
#define MCG_C4_DRST_DRS_MASK     0x60ul
#define MCG_C4_DRST_DRS_SHIFT    5
#define MCG_C4_DRST_DRS(x)       (((uint8_t)(((uint8_t)(x))<<MCG_C4_DRST_DRS_SHIFT))&MCG_C4_DRST_DRS_MASK)
#define MCG_C4_DMX32_MASK        0x80ul
#define MCG_C4_DMX32_SHIFT       7
/* C5 Bit Fields */
#define MCG_C5_PRDIV0_MASK       0x1Ful
#define MCG_C5_PRDIV0_SHIFT      0
#define MCG_C5_PRDIV0(x)         (((uint8_t)(((uint8_t)(x))<<MCG_C5_PRDIV0_SHIFT))&MCG_C5_PRDIV0_MASK)
#define MCG_C5_PLLSTEN0_MASK     0x20ul
#define MCG_C5_PLLSTEN0_SHIFT    5
#define MCG_C5_PLLCLKEN0_MASK    0x40ul
#define MCG_C5_PLLCLKEN0_SHIFT   6
/* C6 Bit Fields */
#define MCG_C6_VDIV0_MASK        0x1Ful
#define MCG_C6_VDIV0_SHIFT       0
#define MCG_C6_VDIV0(x)          (((uint8_t)(((uint8_t)(x))<<MCG_C6_VDIV0_SHIFT))&MCG_C6_VDIV0_MASK)
#define MCG_C6_CME0_MASK         0x20ul
#define MCG_C6_CME0_SHIFT        5
#define MCG_C6_PLLS_MASK         0x40ul
#define MCG_C6_PLLS_SHIFT        6
#define MCG_C6_LOLIE0_MASK       0x80ul
#define MCG_C6_LOLIE0_SHIFT      7
/* S Bit Fields */
#define MCG_S_IRCST_MASK         0x1ul
#define MCG_S_IRCST_SHIFT        0
#define MCG_S_OSCINIT0_MASK      0x2ul
#define MCG_S_OSCINIT0_SHIFT     1
#define MCG_S_CLKST_MASK         0xCul
#define MCG_S_CLKST_SHIFT        2
#define MCG_S_CLKST(x)           (((uint8_t)(((uint8_t)(x))<<MCG_S_CLKST_SHIFT))&MCG_S_CLKST_MASK)
#define MCG_S_IREFST_MASK        0x10ul
#define MCG_S_IREFST_SHIFT       4
#define MCG_S_PLLST_MASK         0x20ul
#define MCG_S_PLLST_SHIFT        5
#define MCG_S_LOCK0_MASK         0x40ul
#define MCG_S_LOCK0_SHIFT        6
#define MCG_S_LOLS0_MASK         0x80ul
#define MCG_S_LOLS0_SHIFT        7
/* SC Bit Fields */
#define MCG_SC_LOCS0_MASK        0x1ul
#define MCG_SC_LOCS0_SHIFT       0
#define MCG_SC_FCRDIV_MASK       0xEul
#define MCG_SC_FCRDIV_SHIFT      1
#define MCG_SC_FCRDIV(x)         (((uint8_t)(((uint8_t)(x))<<MCG_SC_FCRDIV_SHIFT))&MCG_SC_FCRDIV_MASK)
#define MCG_SC_FLTPRSRV_MASK     0x10ul
#define MCG_SC_FLTPRSRV_SHIFT    4
#define MCG_SC_ATMF_MASK         0x20ul
#define MCG_SC_ATMF_SHIFT        5
#define MCG_SC_ATMS_MASK         0x40ul
#define MCG_SC_ATMS_SHIFT        6
#define MCG_SC_ATME_MASK         0x80ul
#define MCG_SC_ATME_SHIFT        7
/* ATCVH Bit Fields */
#define MCG_ATCVH_ATCVH_MASK     0xFFul
#define MCG_ATCVH_ATCVH_SHIFT    0
#define MCG_ATCVH_ATCVH(x)       (((uint8_t)(((uint8_t)(x))<<MCG_ATCVH_ATCVH_SHIFT))&MCG_ATCVH_ATCVH_MASK)
/* ATCVL Bit Fields */
#define MCG_ATCVL_ATCVL_MASK     0xFFul
#define MCG_ATCVL_ATCVL_SHIFT    0
#define MCG_ATCVL_ATCVL(x)       (((uint8_t)(((uint8_t)(x))<<MCG_ATCVL_ATCVL_SHIFT))&MCG_ATCVL_ATCVL_MASK)
/* C7 Bit Fields */
#define MCG_C7_OSCSEL_MASK       0x3ul
#define MCG_C7_OSCSEL_SHIFT      0
#define MCG_C7_OSCSEL(x)         (((uint8_t)(((uint8_t)(x))<<MCG_C7_OSCSEL_SHIFT))&MCG_C7_OSCSEL_MASK)
/* C8 Bit Fields */
#define MCG_C8_LOCS1_MASK        0x1ul
#define MCG_C8_LOCS1_SHIFT       0
#define MCG_C8_CME1_MASK         0x20ul
#define MCG_C8_CME1_SHIFT        5
#define MCG_C8_LOLRE_MASK        0x40ul
#define MCG_C8_LOLRE_SHIFT       6
#define MCG_C8_LOCRE1_MASK       0x80ul
#define MCG_C8_LOCRE1_SHIFT      7

/* CSR Bit Fields */
#define LPTMR_CSR_TEN_MASK        0x1ul
#define LPTMR_CSR_TEN_SHIFT       0
#define LPTMR_CSR_TEN_WIDTH       1
#define LPTMR_CSR_TEN(x)          (((uint32_t)(((uint32_t)(x))<<LPTMR_CSR_TEN_SHIFT))&LPTMR_CSR_TEN_MASK)
#define LPTMR_CSR_TMS_MASK        0x2ul
#define LPTMR_CSR_TMS_SHIFT       1
#define LPTMR_CSR_TMS_WIDTH       1
#define LPTMR_CSR_TMS(x)          (((uint32_t)(((uint32_t)(x))<<LPTMR_CSR_TMS_SHIFT))&LPTMR_CSR_TMS_MASK)
#define LPTMR_CSR_TFC_MASK        0x4ul
#define LPTMR_CSR_TFC_SHIFT       2
#define LPTMR_CSR_TFC_WIDTH       1
#define LPTMR_CSR_TFC(x)          (((uint32_t)(((uint32_t)(x))<<LPTMR_CSR_TFC_SHIFT))&LPTMR_CSR_TFC_MASK)
#define LPTMR_CSR_TPP_MASK        0x8ul
#define LPTMR_CSR_TPP_SHIFT       3
#define LPTMR_CSR_TPP_WIDTH       1
#define LPTMR_CSR_TPP(x)          (((uint32_t)(((uint32_t)(x))<<LPTMR_CSR_TPP_SHIFT))&LPTMR_CSR_TPP_MASK)
#define LPTMR_CSR_TPS_MASK        0x30ul
#define LPTMR_CSR_TPS_SHIFT       4
#define LPTMR_CSR_TPS_WIDTH       2
#define LPTMR_CSR_TPS(x)          (((uint32_t)(((uint32_t)(x))<<LPTMR_CSR_TPS_SHIFT))&LPTMR_CSR_TPS_MASK)
#define LPTMR_CSR_TIE_MASK        0x40ul
#define LPTMR_CSR_TIE_SHIFT       6
#define LPTMR_CSR_TIE_WIDTH       1
#define LPTMR_CSR_TIE(x)          (((uint32_t)(((uint32_t)(x))<<LPTMR_CSR_TIE_SHIFT))&LPTMR_CSR_TIE_MASK)
#define LPTMR_CSR_TCF_MASK        0x80ul
#define LPTMR_CSR_TCF_SHIFT       7
#define LPTMR_CSR_TCF_WIDTH       1
#define LPTMR_CSR_TCF(x)          (((uint32_t)(((uint32_t)(x))<<LPTMR_CSR_TCF_SHIFT))&LPTMR_CSR_TCF_MASK)
/* PSR Bit Fields */
#define LPTMR_PSR_PCS_MASK        0x3ul
#define LPTMR_PSR_PCS_SHIFT       0
#define LPTMR_PSR_PCS_WIDTH       2
#define LPTMR_PSR_PCS(x)          (((uint32_t)(((uint32_t)(x))<<LPTMR_PSR_PCS_SHIFT))&LPTMR_PSR_PCS_MASK)
#define LPTMR_PSR_PBYP_MASK       0x4ul
#define LPTMR_PSR_PBYP_SHIFT      2
#define LPTMR_PSR_PBYP_WIDTH      1
#define LPTMR_PSR_PBYP(x)         (((uint32_t)(((uint32_t)(x))<<LPTMR_PSR_PBYP_SHIFT))&LPTMR_PSR_PBYP_MASK)
#define LPTMR_PSR_PRESCALE_MASK   0x78ul
#define LPTMR_PSR_PRESCALE_SHIFT  3
#define LPTMR_PSR_PRESCALE_WIDTH  4
#define LPTMR_PSR_PRESCALE(x)     (((uint32_t)(((uint32_t)(x))<<LPTMR_PSR_PRESCALE_SHIFT))&LPTMR_PSR_PRESCALE_MASK)
/* CMR Bit Fields */
#define LPTMR_CMR_COMPARE_MASK    0xFFFFul
#define LPTMR_CMR_COMPARE_SHIFT   0
#define LPTMR_CMR_COMPARE_WIDTH   16
#define LPTMR_CMR_COMPARE(x)      (((uint32_t)(((uint32_t)(x))<<LPTMR_CMR_COMPARE_SHIFT))&LPTMR_CMR_COMPARE_MASK)

/* CLKDIV2 Bit Fields */
#define SIM_CLKDIV2_USBFRAC_MASK  0x1ul
#define SIM_CLKDIV2_USBFRAC_SHIFT 0
#define SIM_CLKDIV2_USBFRAC_WIDTH 1
#define SIM_CLKDIV2_USBFRAC(x)    (((uint32_t)(((uint32_t)(x))<<SIM_CLKDIV2_USBFRAC_SHIFT))&SIM_CLKDIV2_USBFRAC_MASK)
#define SIM_CLKDIV2_USBDIV_MASK   0xEul
#define SIM_CLKDIV2_USBDIV_SHIFT  1
#define SIM_CLKDIV2_USBDIV_WIDTH  3
#define SIM_CLKDIV2_USBDIV(x)     (((uint32_t)(((uint32_t)(x))<<SIM_CLKDIV2_USBDIV_SHIFT))&SIM_CLKDIV2_USBDIV_MASK)

// keil
/* CLKDIV1 Bit Fields */
#define SIM_CLKDIV1_OUTDIV4_MASK  0xF0000ul
#define SIM_CLKDIV1_OUTDIV4_SHIFT 16
#define SIM_CLKDIV1_OUTDIV4(x)    (((uint32_t)(((uint32_t)(x))<<SIM_CLKDIV1_OUTDIV4_SHIFT))&SIM_CLKDIV1_OUTDIV4_MASK)
#define SIM_CLKDIV1_OUTDIV3_MASK  0xF00000ul
#define SIM_CLKDIV1_OUTDIV3_SHIFT 20
#define SIM_CLKDIV1_OUTDIV3(x)    (((uint32_t)(((uint32_t)(x))<<SIM_CLKDIV1_OUTDIV3_SHIFT))&SIM_CLKDIV1_OUTDIV3_MASK)
#define SIM_CLKDIV1_OUTDIV2_MASK  0xF000000ul
#define SIM_CLKDIV1_OUTDIV2_SHIFT 24
#define SIM_CLKDIV1_OUTDIV2(x)    (((uint32_t)(((uint32_t)(x))<<SIM_CLKDIV1_OUTDIV2_SHIFT))&SIM_CLKDIV1_OUTDIV2_MASK)
#define SIM_CLKDIV1_OUTDIV1_MASK  0xF0000000ul
#define SIM_CLKDIV1_OUTDIV1_SHIFT 28
#define SIM_CLKDIV1_OUTDIV1(x)    (((uint32_t)(((uint32_t)(x))<<SIM_CLKDIV1_OUTDIV1_SHIFT))&SIM_CLKDIV1_OUTDIV1_MASK)

#define SIM_SOPT1_OSC32KSEL_MASK  0xC0000ul
#define SIM_SOPT1_OSC32KSEL_SHIFT 18
#define SIM_SOPT1_OSC32KSEL(x)    (((uint32_t)(((uint32_t)(x))<<SIM_SOPT1_OSC32KSEL_SHIFT))&SIM_SOPT1_OSC32KSEL_MASK)

#define SIM_SOPT2_TPMSRC_MASK     0x3000000ul
#define SIM_SOPT2_USBSRC_MASK     0x40000ul

#define MCG_C2_RANGE_MASK         0x30ul
#define MCG_C2_RANGE_SHIFT        4
#define MCG_C2_RANGE(x)           (((uint8_t)(((uint8_t)(x))<<MCG_C2_RANGE_SHIFT))&MCG_C2_RANGE_MASK)

#define OSC_CR_ERCLKEN_MASK       0x80ul

static void InitialSetUpFosc()
{
    __System_CLOCK_IN_KHZ = 12345677;
}

void SIM_GetClocksFrequency( SIM_ClocksTypeDef * SIM_Clocks )
{
    uint8_t  clockDiv1, clockDiv2, clockDiv3, clockDiv4;
    uint32_t mcgOutClockFrequency;
    uint32_t systemFrequency;

    // get system frequency
    systemFrequency = Get_Fosc_kHz() * 1000;
    // get clock dividers for mcgoutclock
    clockDiv1 = SIM_CLKDIV1 >> SIM_CLKDIV1_OUTDIV1_SHIFT;
    clockDiv2 = ( SIM_CLKDIV1 & SIM_CLKDIV1_OUTDIV2_MASK ) >> SIM_CLKDIV1_OUTDIV2_SHIFT;
    clockDiv3 = ( SIM_CLKDIV1 & SIM_CLKDIV1_OUTDIV3_MASK ) >> SIM_CLKDIV1_OUTDIV3_SHIFT;
    clockDiv4 = ( SIM_CLKDIV1 & SIM_CLKDIV1_OUTDIV4_MASK ) >> SIM_CLKDIV1_OUTDIV4_SHIFT;
    // get mcgout clock freqeuncy
    mcgOutClockFrequency = systemFrequency * ( clockDiv1 + 1 );
    // set frequencies
    SIM_Clocks->SYSTEM_Frequency   = systemFrequency;
    SIM_Clocks->BUSCLOCK_Frequency = mcgOutClockFrequency / ( clockDiv2 + 1 );
    SIM_Clocks->FLEXBUS_Frequency  = mcgOutClockFrequency / ( clockDiv3 + 1 );
    SIM_Clocks->FLASH_Frequency    = mcgOutClockFrequency / ( clockDiv4 + 1 );
}

static void SystemClockSetDefault( void )
{
}

/* MCG modes */
#define MCG_MODE_FEI  0ul
#define MCG_MODE_FBI  1ul
#define MCG_MODE_BLPI 2ul
#define MCG_MODE_FEE  3ul
#define MCG_MODE_FBE  4ul
#define MCG_MODE_BLPE 5ul
#define MCG_MODE_PBE  6ul
#define MCG_MODE_PEE  7ul

static void InitialSetUpRCCRCC2()
{
    volatile uint32_t ulOSC_CR, ulSIM_SOPT1, ulSIM_SOPT2, ulSIM_CLKDIV1, ulMCG_C1, ulMCG_C2, ulMCG_C4, ulMCG_C5, ulMCG_C6,
                      ulMCG_SC, ulMCG_C7, ulSIM_CLKDIV2, ulWDOG_STCTRLH, ulMCG_MODE;
    volatile uint32_t Fosc_kHz;
    uint32_t          mcg_mode;

    // disable interrupts
    asm CPSID I;
    // fetch values from edit project
    ulOSC_CR       = 12345678;
    ulSIM_SOPT1    = 12345679;
    ulSIM_SOPT2    = 12345680;
    ulSIM_CLKDIV1  = 12345681;
    ulMCG_C1       = 12345682;
    ulMCG_C2       = 12345683;
    ulMCG_C4       = 12345684;
    ulMCG_C5       = 12345685;
    ulMCG_C6       = 12345686;
    ulMCG_SC       = 12345687;
    ulMCG_C7       = 12345688;
    ulSIM_CLKDIV2  = 12345689;
    ulWDOG_STCTRLH = 12345690;
    ulMCG_MODE     = 12345691;

    Fosc_kHz       = 12345677;

    mcg_mode       = ulMCG_MODE & 0x7;

    if ( ( ulWDOG_STCTRLH & WDOG_STCTRLH_WDOGEN_MASK ) == 0 ) {
        // first we need to unlock wdog registers
        // WDOG->UNLOCK: WDOGUNLOCK=0xC520
        WDOG->UNLOCK = WDOG_UNLOCK_WDOGUNLOCK( 0xC520 ); // Key 1
        // WDOG->UNLOCK: WDOGUNLOCK=0xD928 //
        WDOG->UNLOCK = WDOG_UNLOCK_WDOGUNLOCK( 0xD928 ); // Key 2
        // WDOG->STCTRLH: ?=0,DISTESTWDOG=0,BYTESEL=0,TESTSEL=0,TESTWDOG=0,?=0,?=1,WAITEN=1,STOPEN=1,DBGEN=0,ALLOWUPDATE=1,WINEN=0,IRQRSTEN=0,CLKSRC=1,WDOGEN=0
        WDOG->STCTRLH = WDOG_STCTRLH_BYTESEL( 0x00 ) |
                        WDOG_STCTRLH_WAITEN_MASK |
                        WDOG_STCTRLH_STOPEN_MASK |
                        WDOG_STCTRLH_ALLOWUPDATE_MASK |
                        WDOG_STCTRLH_CLKSRC_MASK |
                        0x0100ul;
    }

    if ( ( RCM->SRS0 & RCM_SRS0_WAKEUP_MASK ) != 0x00 ) {
        if ( ( PMC->REGSC & PMC_REGSC_ACKISO_MASK ) != 0x00 ) {
            PMC->REGSC |= PMC_REGSC_ACKISO_MASK;             // Release hold with ACKISO:  Only has an effect if recovering from VLLSx.
        }
    } else if ( ( ulMCG_C2 & MCG_C2_FCFTRIM_MASK ) != 0x00 ) // Checking if we have power on the Vbat pin (SWRELARM-385)
    {
        SIM_SCGC6 |= SIM_SCGC6_RTC_MASK;
        if ( ( RTC_CR & RTC_CR_OSCE_MASK ) == 0x00 ) {       // Only if the OSCILLATOR is not already enabled
            RTC_CR = ( uint32_t )( ( RTC_CR & ( uint32_t ) ~( uint32_t )( RTC_CR_SC2P_MASK | RTC_CR_SC4P_MASK | RTC_CR_SC8P_MASK | RTC_CR_SC16P_MASK ) ) | ( uint32_t )SYSTEM_RTC_CR_VALUE );
            RTC_CR |= ( uint32_t )RTC_CR_OSCE_MASK;
            RTC_CR &= ( uint32_t ) ~( uint32_t )RTC_CR_CLKO_MASK;
        }
    }

    // Power mode protection initialization
    SMC_PMPROT = SYSTEM_SMC_PMPROT_VALUE; // Enable all modes; mcu familly dependant
    // K80
    if ( ( ulMCG_MODE & 0x10 ) ) {
        // provera freq. ako je freq > 120MHz idemo u HSRUN, u suprotnom RUN mode
        if ( Fosc_kHz > 120000 ) {
            // set hsrun mode
            SMC_PMCTRL = SMC_PMCTRL_RUNM_MASK;
            // wait for hsrun mode
            while ( SMC_PMSTAT != 0x80 )
                ;
        } else {
            // set run mode
            SMC_PMCTRL &= ~SMC_PMCTRL_RUNM_MASK;
            // wait for run mode
            while ( SMC_PMSTAT != 0x01 )
                ;
        }
    }
    // set prescalers
    SIM_CLKDIV1 = ulSIM_CLKDIV1;
    // Set 32 kHz clock source (ERCLK32K)
    SIM_SOPT1 = ( ( SIM_SOPT1 & ( uint32_t )( ~SIM_SOPT1_OSC32KSEL_MASK ) ) | ( ulSIM_SOPT1 & SIM_SOPT1_OSC32KSEL_MASK ) );
    // Selects the high frequency clock for various peripheral clocking options
    SIM_SOPT2 = ( ( SIM_SOPT2 & ( uint32_t )( ~SIM_SOPT2_PLLFLLSEL_MASK ) ) | ( ulSIM_SOPT2 & SIM_SOPT2_PLLFLLSEL_MASK ) );
    // Selects the clock source for the TPM counter clock
    SIM_SOPT2 = ( ( SIM_SOPT2 & ( uint32_t )( ~SIM_SOPT2_TPMSRC_MASK ) ) | ( ulSIM_SOPT2 & SIM_SOPT2_TPMSRC_MASK ) );
    // Select USB clock source.
    // 0 - External bypass clock (USB_CLKIN).
    // 1 - MCGFLLCLK, or MCGPLLCLK, or IRC48M clock as selected by SOPT2[PLLFLLSEL], and then
    //     divided by the USB fractional divider as configured by SIM_CLKDIV2[USBFRAC, USBDIV].
    SIM_SOPT2 = ( ( SIM_SOPT2 & ( uint32_t )( ~SIM_SOPT2_USBSRC_MASK ) ) | ( ulSIM_SOPT2 & SIM_SOPT2_USBSRC_MASK ) );
    // check if FEI, FBI, BLPI mode is selected
    if ( ( mcg_mode == MCG_MODE_FEI ) || ( mcg_mode == MCG_MODE_FBI ) || ( mcg_mode == MCG_MODE_BLPI ) ) {
        // Set MCG and OSC
        if ( ( ( ulOSC_CR & OSC_CR_ERCLKEN_MASK ) != 0x00 ) || ( ( ( ulMCG_C5 & MCG_C5_PLLCLKEN0_MASK ) != 0x00 ) && ( ( ulMCG_C7 & MCG_C7_OSCSEL_MASK ) == 0x00 ) ) ) {
            // SIM_SCGC5: PORTA=1
            SIM_SCGC5 |= SIM_SCGC5_PORTA_MASK;
            // PORTA_PCR18: ISF=0,MUX=0
            PORTA_PCR18 &= ( uint32_t ) ~( uint32_t )( ( PORT_PCR_ISF_MASK | PORT_PCR_MUX( 0x07 ) ) );
            if ( ( ulMCG_C2 & MCG_C2_EREFS_MASK ) != 0x00 ) {
                // PORTA_PCR19: ISF=0,MUX=0
                PORTA_PCR19 &= ( uint32_t ) ~( uint32_t )( ( PORT_PCR_ISF_MASK | PORT_PCR_MUX( 0x07 ) ) );
            }
        }
        MCG_SC = ulMCG_SC; // Set SC (fast clock internal reference divider)
        MCG_C1 = ulMCG_C1; // Set C1 (clock source selection, FLL ext. reference divider, int. reference enable etc.)
        // Check that the source of the FLL reference clock is the requested one.
        if ( ( ulMCG_C1 & MCG_C1_IREFS_MASK ) != 0x00 ) {
            while ( ( MCG_S & MCG_S_IREFST_MASK ) == 0x00 ) {
            }
        } else {
            while ( ( MCG_S & MCG_S_IREFST_MASK ) != 0x00 ) {
            }
        }
        MCG_C2 = ( MCG_C2 & ( uint8_t )( ~MCG_C2_FCFTRIM_MASK ) ) | ( ulMCG_C2 & ( uint8_t )( ~MCG_C2_LP_MASK ) );                                        // Set C2 (freq. range, ext. and int. reference selection etc. excluding trim bits; low power bit is set later)
        MCG_C4 = ( ulMCG_C4 & ( uint8_t )( ~( MCG_C4_FCTRIM_MASK | MCG_C4_SCFTRIM_MASK ) ) ) | ( MCG_C4 & ( MCG_C4_FCTRIM_MASK | MCG_C4_SCFTRIM_MASK ) ); // Set C4 (FLL output; trim values not changed)
        OSC_CR = ulOSC_CR;                                                                                                                                // Set OSC_CR (OSCERCLK enable, oscillator capacitor load)
        MCG_C7 = ulMCG_C7;                                                                                                                                // Set C7 (OSC Clock Select)
        if ( mcg_mode == MCG_MODE_BLPI ) {
            // BLPI specific
            MCG_C2 |= MCG_C2_LP_MASK; // Disable FLL and PLL in bypass mode
        }
    } else {                          // MCG_MODE
        // Set MCG and OSC
        if ( ( ( ulOSC_CR & OSC_CR_ERCLKEN_MASK ) != 0x00 ) || ( ( ulMCG_C7 & MCG_C7_OSCSEL_MASK ) == 0x00 ) ) {
            // SIM_SCGC5: PORTA=1
            SIM_SCGC5 |= SIM_SCGC5_PORTA_MASK;
            // PORTA_PCR18: ISF=0,MUX=0
            PORTA_PCR18 &= ( uint32_t ) ~( uint32_t )( ( PORT_PCR_ISF_MASK | PORT_PCR_MUX( 0x07 ) ) );
            if ( ( ulMCG_C2 & MCG_C2_EREFS_MASK ) != 0x00 ) {
                // PORTA_PCR19: ISF=0,MUX=0
                PORTA_PCR19 &= ( uint32_t ) ~( uint32_t )( ( PORT_PCR_ISF_MASK | PORT_PCR_MUX( 0x07 ) ) );
            }
        }
        MCG_SC = ulMCG_SC;                                                                                             // Set SC (fast clock internal reference divider)
        MCG_C2 = ( MCG_C2 & ( uint8_t )( ~( MCG_C2_FCFTRIM_MASK ) ) ) | ( ulMCG_C2 & ( uint8_t )( ~MCG_C2_LP_MASK ) ); // Set C2 (freq. range, ext. and int. reference selection etc. excluding trim bits; low power bit is set later)
        OSC_CR = ulOSC_CR;                                                                                             // Set OSC_CR (OSCERCLK enable, oscillator capacitor load)
        MCG_C7 = ulMCG_C7;                                                                                             // Set C7 (OSC Clock Select)
        if ( mcg_mode == MCG_MODE_PEE )
            MCG_C1 = ulMCG_C1 | MCG_C1_CLKS( 0x02 );                                                                   // Set C1 (clock source selection, FLL ext. reference divider, int. reference enable etc.) - PBE mode
        else
            MCG_C1 = ulMCG_C1;                                                                                         // Set C1 (clock source selection, FLL ext. reference divider, int. reference enable etc.)

        if ( ( ( ulMCG_C2 & MCG_C2_EREFS_MASK ) != 0x00 ) && ( ( ulMCG_C7 & MCG_C7_OSCSEL_MASK ) == 0x00 ) ) {
            while ( ( MCG_S & MCG_S_OSCINIT0_MASK ) == 0x00 ) {                                                        // Check that the oscillator is running
            }
        }
        // Check that the source of the FLL reference clock is the requested one.
        if ( ( ulMCG_C1 & MCG_C1_IREFS_MASK ) != 0x00 ) {
            while ( ( MCG_S & MCG_S_IREFST_MASK ) == 0x00 ) {
            }
        } else {
            while ( ( MCG_S & MCG_S_IREFST_MASK ) != 0x00 ) {
            }
        }
        MCG_C4 = ( ulMCG_C4 & ( uint8_t )( ~( MCG_C4_FCTRIM_MASK | MCG_C4_SCFTRIM_MASK ) ) ) | ( MCG_C4 & ( MCG_C4_FCTRIM_MASK | MCG_C4_SCFTRIM_MASK ) ); // Set C4 (FLL output; trim values not changed)
    } // end MCG_MODE

    // Common for all MCG modes
    // PLL clock can be used to generate clock for some devices regardless of clock generator (MCGOUTCLK) mode.
    MCG_C5 = ulMCG_C5 & ( uint8_t )( ~MCG_C5_PLLCLKEN0_MASK ); // Set C5 (PLL settings, PLL reference divider etc.)
    MCG_C6 = ulMCG_C6 & ( uint8_t ) ~( MCG_C6_PLLS_MASK );     // Set C6 (PLL select, VCO divider etc.)
    if ( ulMCG_C5 & MCG_C5_PLLCLKEN0_MASK ) {
        MCG_C5 |= MCG_C5_PLLCLKEN0_MASK;                       // PLL clock enable in mode other than PEE or PBE
    }

    // BLPE, PEE and PBE MCG mode specific
    if ( mcg_mode == MCG_MODE_BLPE ) {
        MCG_C2 |= ( MCG_C2_LP_MASK );                    // Disable FLL and PLL in bypass mode
    } else if ( ( mcg_mode == MCG_MODE_PBE ) || ( mcg_mode == MCG_MODE_PEE ) ) {
        MCG_C6 |= ( MCG_C6_PLLS_MASK );                  // Set C6 (PLL select, VCO divider etc.)
        while ( ( MCG_S & MCG_S_LOCK0_MASK ) == 0x00 ) { // Wait until PLL is locked
        }
        if ( mcg_mode == MCG_MODE_PEE ) {
            MCG_C1 &= ( uint8_t ) ~( MCG_C1_CLKS_MASK );
        }
    }

    if ( ( mcg_mode == MCG_MODE_FEI ) || ( mcg_mode == MCG_MODE_FEE ) ) {
        while ( ( MCG_S & MCG_S_CLKST_MASK ) != 0x00 ) { // Wait until output of the FLL is selected
        }
        // Use LPTMR to wait for 1ms for FLL clock stabilization
        SIM_SCGC5 |= SIM_SCGC5_LPTMR_MASK;                            // Alow software control of LPMTR
        LPTMR0_CMR = LPTMR_CMR_COMPARE( 0 );                          // Default 1 LPO tick
        LPTMR0_CSR = ( LPTMR_CSR_TCF_MASK | LPTMR_CSR_TPS( 0x00 ) );
        LPTMR0_PSR = ( LPTMR_PSR_PCS( 0x01 ) | LPTMR_PSR_PBYP_MASK ); // Clock source: LPO, Prescaler bypass enable
        LPTMR0_CSR = LPTMR_CSR_TEN_MASK;                              // LPMTR enable
        while ( ( LPTMR0_CSR & LPTMR_CSR_TCF_MASK ) == 0x00 ) {
        }
        LPTMR0_CSR = 0x00;                                            // Disable LPTMR
        SIM_SCGC5 &= ( uint32_t ) ~( uint32_t )SIM_SCGC5_LPTMR_MASK;
    } else if ( ( mcg_mode == MCG_MODE_FBI ) || ( mcg_mode == MCG_MODE_BLPI ) ) {
        while ( ( MCG_S & MCG_S_CLKST_MASK ) != 0x04 ) {              // Wait until internal reference clock is selected as MCG output
        }
    } else if ( ( mcg_mode == MCG_MODE_FBE ) || ( mcg_mode == MCG_MODE_PBE ) || ( mcg_mode == MCG_MODE_BLPE ) ) {
        while ( ( MCG_S & MCG_S_CLKST_MASK ) != 0x08 ) {              // Wait until external reference clock is selected as MCG output
        }
    } else if ( mcg_mode == MCG_MODE_PEE ) {
        while ( ( MCG_S & MCG_S_CLKST_MASK ) != 0x0C ) {              // Wait until output of the PLL is selected
        }
    }

    // Selects the USB clock divider
    SIM_CLKDIV2 = ( ( SIM_CLKDIV2 ) & ( uint32_t )( ~( SIM_CLKDIV2_USBFRAC_MASK | SIM_CLKDIV2_USBDIV_MASK ) ) ) | ( ulSIM_CLKDIV2 & ( SIM_CLKDIV2_USBFRAC_MASK | SIM_CLKDIV2_USBDIV_MASK ) );
}
