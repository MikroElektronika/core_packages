#include "stdint.h"

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

// consts interrupt priority levels
const _NVIC_INT_PRIORITY_LVL0  = 0;
const _NVIC_INT_PRIORITY_LVL1  = 1;
const _NVIC_INT_PRIORITY_LVL2  = 2;
const _NVIC_INT_PRIORITY_LVL3  = 3;
const _NVIC_INT_PRIORITY_LVL4  = 4;
const _NVIC_INT_PRIORITY_LVL5  = 5;
const _NVIC_INT_PRIORITY_LVL6  = 6;
const _NVIC_INT_PRIORITY_LVL7  = 7;

// rutina koja kopira iz dela memorije na koju pokazuje R12
// u deo memorije na koju pokazuje R11
// adresa do koje se kopira je u R10
void __CC2DW() {
asm {
    L_loopDW:
          LDRB.W       R9, [R12], #1
          STRB.W       R9, [R11], #1
          CMP.W        R11, R10
          BNE L_loopDW
  }
}

void __CA2AB(){
  asm{
    L_loopCA2ABs:
        LDRB.W       R9, [R10], #1
        STRB.W       R9, [R11], #1
        CMP.W        R10, R12
        BNE L_loopCA2ABs
  }
 }

void __CS2S(){
  asm{
    L_loopCS2Ss:
        LDRB.W       R10, [R11], #1
        CMP.W        R10, #0
        BEQ          L_CS2Send
        STRB.W       R10, [R12], #1
        B            L_loopCS2Ss
    L_CS2Send:
  }
 }

void __FZinS(){
  asm{
    L_loopCS2Ss:
        LDRB.W       R11, [R12], #1
        CMP.W        R11, #0
        BNE          L_loopCS2Ss
        SUB.W        R12, R12, #1
  }
 }


void __FillZeros(){
  asm{
          MOV.W R9, #0
          MOV.W R12, #0
          CMP.W   SP, R10
          BGT  L_loopFZs
          CMP.W   SP, R11
          BLT  L_loopFZs
          MOV R12, R10
          MOV R10, SP
    L_loopFZs:
          STR.W       R9, [R11], #4
          CMP.W        R11, R10
          BNE L_loopFZs
          CMP.W   R12, R10
          BLE   L_norep
          MOV   R10, R12
          LDR   R11, [R9]
          ADD   R11, R11,#4
          B  L_loopFZs
    L_norep:
  }

 }


 void __EnableFPU(){
  asm{
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
  asm nop
  asm nop
  asm nop
  asm nop
  // Kod ispod ukljucuje zaokruzivanje ka nuli prilikom konverzije
  asm VMRS R0, FPSCR
  R0 = R0 | (0b11ul << 22); // SWRELARM-665
  asm VMSR FPSCR, R0
}


//*****************************************************************************
//
// Enables the processor interrupt.
//
// Allows the processor to respond to interrupts.  This does not affect the
// set of interrupts enabled in the interrupt controller; it just gates the
// single interrupt from the controller to the processor.
//
// Returns the state of PRIMASK on entry
//
//*****************************************************************************
unsigned long EnableInterrupts() {
  unsigned long result;

  result = CPU_REG_GET(CPU_PRIMASK);
  asm CPSIE I;

  return result;
}

//*****************************************************************************
//
// Disables the processor interrupt.
//
// Prevents the processor from receiving interrupts.  This does not affect the
// set of interrupts enabled in the interrupt controller; it just gates the
// single interrupt from the controller to the processor.
//
// Returns the state of PRIMASK on entry
//
//*****************************************************************************
unsigned long DisableInterrupts() {
  unsigned long result;

  result = CPU_REG_GET(CPU_PRIMASK);
  asm CPSID I;

  return result;
}

void RestoreInterrupts(unsigned long primask) {
  if (primask)
    asm CPSID I;
  else
    asm CPSIE I;
}

//*****************************************************************************
//
// Enables an interrupt.
//
// \param ulInterrupt specifies the interrupt to be enabled.
//
// The specified interrupt is enabled in the interrupt controller.  Other
// enables for the interrupt (such as at the peripheral level) are unaffected
// by this function.
//
// \return None.
//
//*****************************************************************************
void NVIC_IntEnable(const unsigned long ivt)
{
    unsigned long *ptr;

    //
    // Check the arguments.
    //
    // ASSERT(ulInterrupt < NUM_INTERRUPTS);

    //
    // Determine the interrupt to enable.
    //
    if (ivt == IVT_FAULT_MPU)
    {
        //
        // Enable the MemManage interrupt.
        //
        NVIC_SYS_HND_CTRL |= NVIC_SYS_HND_CTRL_MEM;
    }
    else if (ivt == IVT_FAULT_BUS)
    {
        //
        // Enable the bus fault interrupt.
        //
        NVIC_SYS_HND_CTRL |= NVIC_SYS_HND_CTRL_BUS;
    }
    else if (ivt == IVT_FAULT_USAGE)
    {
        //
        // Enable the usage fault interrupt.
        //
        NVIC_SYS_HND_CTRL |= NVIC_SYS_HND_CTRL_USAGE;
    }
    else if (ivt == IVT_FAULT_SYSTICK)
    {
        //
        // Enable the System Tick interrupt.
        //
        NVIC_ST_CTRL |= NVIC_ST_CTRL_INTEN;
    }
    else if (ivt >= 16)
    {
        //
        // Enable the general interrupt.
        //
        ptr  = &NVIC_EN0 + (ivt - 16) / 32;
        *ptr = 1ul << ((ivt - 16) & 0x1F);
    }
}

//*****************************************************************************
//
// Disables an interrupt.
//
// \param ulInterrupt specifies the interrupt to be disabled.
//
// The specified interrupt is disabled in the interrupt controller.  Other
// enables for the interrupt (such as at the peripheral level) are unaffected
// by this function.
//
// \return None.
//
//*****************************************************************************
void NVIC_IntDisable(const unsigned long ivt)
{
    unsigned long *ptr;

    //
    // Check the arguments.
    //
    // ASSERT(ulInterrupt < NUM_INTERRUPTS);

    //
    // Determine the interrupt to disable.
    //
    if (ivt == IVT_FAULT_MPU)
    {
        //
        // Disable the MemManage interrupt.
        //
        NVIC_SYS_HND_CTRL &= ~(NVIC_SYS_HND_CTRL_MEM);
    }
    else if (ivt == IVT_FAULT_BUS)
    {
        //
        // Disable the bus fault interrupt.
        //
        NVIC_SYS_HND_CTRL &= ~(NVIC_SYS_HND_CTRL_BUS);
    }
    else if (ivt == IVT_FAULT_USAGE)
    {
        //
        // Disable the usage fault interrupt.
        //
        NVIC_SYS_HND_CTRL &= ~(NVIC_SYS_HND_CTRL_USAGE);
    }
    else if (ivt == IVT_FAULT_SYSTICK)
    {
        //
        // Disable the System Tick interrupt.
        //
        NVIC_ST_CTRL &= ~(NVIC_ST_CTRL_INTEN);
    }
    else if (ivt >= 16)
    {
        //
        // Disable the general interrupt.
        //
        ptr  = &NVIC_DIS0 + (ivt - 16) / 32;
        *ptr = 1ul << ((ivt - 16) & 0x1F);
    }
}

void __GenExcept() {
  while(1) ;
}

//****************************************************************************
// Stanko 20181030
// Sets an interrupt priority
//
// \param ivt - interrupt vector table number
//        priority - value for interrupt priority
//
// For specific interrupt set appropriete interrupt priority.
//
// \return None.
//
//****************************************************************************
void NVIC_SetIntPriority(uint8_t ivt, uint8_t priority) {
    uint32_t *p;
    uint8_t shift;

    if (ivt > 15) {
        p = &NVIC_PRI0 + ((ivt - 16) >> 2);                   // >> 2; cetiri vektora po registru
        shift = (((ivt - 16) % 4) << 3) + 5;                 // +5 for hi nibble
    }
    else if((ivt > 3)&(ivt <= 15))
    {
        p = &NVIC_SYS_PRI1 + (ivt / 4) -1;
        shift = ((ivt % 4) << 3) + 5;
    }
        else
        {
                return;
        }

    if (priority & 0x0F)
    {                               // provera prioriteta
        *p &= ~((uint32_t)0xF << shift);                             // brisanje stare vrednosti
        *p |= (uint32_t)priority << shift;            // upis u visi nibl bajta
    }
    else
    { // U slucaju da je priority vrednost poslata u hi nibble zapisu i za IVT_IP0
        *p &= ~((uint32_t)0xF << shift);                             // brisanje stare vrednosti
        *p |= (uint32_t) priority << (shift - 5);     // upis u hi nibble bajta
    }
}

//*****************************************************************************
//
//! Resets the device.
//!
//! This function will perform a software reset of the entire device.  The
//! processor and all peripherals are reset and all device registers will
//! return to their default values (with the exception of the reset cause
//! register, which will maintain its current value but have the software reset
//! bit set as well).
//!
//! \return This function does not return.
//
//*****************************************************************************
void SystemReset(void)
{
    //
    // Perform a software reset request.  This will cause the device to reset,
    // no further code is executed.
    //
    NVIC_APINT = 0x05FA0000 | (1ul << NVIC_APINT_SYSRESETREQ);
    //
    // The device should have reset, so this should never be reached.  Just in
    // case, loop forever.
    //
    while(1)
    {
    }
}

static void InitialSetUpFosc(){
  __System_CLOCK_IN_KHZ = 12345677;
}

static long __me_USB_PLL_POWER_DOWN;

void SetPllRCC(unsigned long XTAL, unsigned long SYSDIV){
 SYSCTL_MISC_PLLLMIS_bit = 1;

 SYSCTL_RCC_BYPASS_bit = 1;
 SYSCTL_RCC_USESYSDIV_bit = 0;

 SYSCTL_RCC = SYSCTL_RCC & ~(0x1Fl << 6);
 SYSCTL_RCC = SYSCTL_RCC | ((XTAL & 0x1Fl) << 6);

 SYSCTL_RCC_PWRDN_bit = 0;
 SYSCTL_RCC = SYSCTL_RCC & ~(0xFl << 23);
 SYSCTL_RCC = SYSCTL_RCC | ((SYSDIV & 0xFl) << 23);

 SYSCTL_RCC_USESYSDIV_bit = 1;

 while (SYSCTL_RIS_PLLLRIS_bit == 0)
 ;
 SYSCTL_MISC_PLLLMIS_bit = 1;

 SYSCTL_RCC_BYPASS_bit = 0;

 SYSCTL_RCC2_USERCC2_bit = 0;
 SYSCTL_RCC2 = SYSCTL_RCC2 & ~(0x3l << 4);
 if(!__me_USB_PLL_POWER_DOWN)
   SYSCTL_RCC2 &= ~(1l << 14);  // ukljuci PLL za USB

}

void SetPllRCC2(unsigned long XTAL, unsigned long SYSDIV){
 SYSCTL_MISC_PLLLMIS_bit = 1;

 SYSCTL_RCC_USESYSDIV_bit = 0;

 SYSCTL_RCC = SYSCTL_RCC & ~(0xFl << 6);
 SYSCTL_RCC = SYSCTL_RCC | ((XTAL & 0xF) << 6);

 SYSCTL_RCC_USESYSDIV_bit = 1;

 SYSCTL_RCC2_BYPASS2_bit = 1;
 SYSCTL_RCC2_USERCC2_bit = 1;

 SYSCTL_RCC2 = SYSCTL_RCC2 & ~(0x7l << 4);

 SYSCTL_RCC2_PWRDN2_bit = 0;

 SYSCTL_RCC2 = SYSCTL_RCC2 & ~(0x3Fl << 23);
 SYSCTL_RCC2 = SYSCTL_RCC2 | ((SYSDIV & 0x3Fl) << 23);

 while (SYSCTL_RIS_PLLLRIS_bit == 0)
 ;

 SYSCTL_MISC_PLLLMIS_bit = 1;

 if(!__me_USB_PLL_POWER_DOWN)
   SYSCTL_RCC2 &= ~(1l << 14);  // ukljuci PLL za USB

 SYSCTL_RCC2_BYPASS2_bit = 0;
}

static void InitialSetUpRCCRCC2(){
 unsigned long volatile ulSYSCTL_RCC, ulSYSCTL_RCC2;
  ulSYSCTL_RCC = 12345678;
  ulSYSCTL_RCC2 = 12345679;

  __me_USB_PLL_POWER_DOWN = 1;
  if(SYSCTL_RCC2 & (1l << 14)){ // imaju USB-pll
    __me_USB_PLL_POWER_DOWN = ulSYSCTL_RCC2 & (1l << 14);  // zapamti da li treba da se iskljuci powerdown za usb pll
    ulSYSCTL_RCC2 = ulSYSCTL_RCC2 | (1l << 14);  //  do not power-up USB-PLL until all regs are st-up
  }

  // this routine is called on start-up so we know
  // that we are running on internal oscillator (12(+-30%)Mhz ili 16Mhz(+-1%))
  // pll is off and divisor is off

  // let see if main osc shoould be enabled
  if(!(ulSYSCTL_RCC & (1ul << SYSCTL_RCC_MOSCDIS))){ /// SWRELARM-665
    // enable MOSC
    SYSCTL_RCC &=  ~(1l << SYSCTL_RCC_MOSCDIS);
    // wait for main oscillator to stabilze  (20ms)
    asm{
      MOVW        R7, #2261
      MOVT        R7, #2
    L_NEW_SetUpRCCRCC2_29:
      SUBS        R7, R7, #1
      BNE        L_NEW_SetUpRCCRCC2_29
      NOP
    }
  }

  // set-up XTAL and divider and everything else except PLL there is special routine to do this
  SYSCTL_RCC  = (ulSYSCTL_RCC & ~(1l <<SYSCTL_RCC_IOSCDIS));
  SYSCTL_RCC2 = ulSYSCTL_RCC2;
  // wait for new oscillator  XTAL and divider to take effect
  asm{
    MOVW        R7, #16
    MOVT        R7, #0
  L_NEW_SetUpRCCRCC2_30:
    SUBS        R7, R7, #1
    BNE        L_NEW_SetUpRCCRCC2_30
    NOP
  }
  SYSCTL_RCC  = ulSYSCTL_RCC;
}

char Swap(char arg) {
  return (arg >> 4) | (arg << 4);
}
