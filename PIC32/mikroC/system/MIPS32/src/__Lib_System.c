#include "__Lib_CP0.h"

/**
 * @brief Routine that copies from the memory area pointed to by R28 to the
 * memory area pointed to by R27. The address up to which it copies is in R26.
 */
void __CC2DW() {
  asm {
    L_loopDW:
          LB        R30, 0(R24)
          SB        R30, 0(R23)
          ADDIU     R23, R23, 1
          BNE       R23, R22, L_loopDW
          ADDIU     R24, R24, 1
  }
}

void __CA2AB(){
    asm {
      L_loopCA2ABs:
          LB        R30, 0(R2)
          SB        R30, 0(R3)
          ADDIU     R2, R2, 1
          BNE       R2, R4, L_loopCA2ABs
          ADDIU     R3, R3, 1
    }
}

void __CS2S(){
    asm {
      L_loopCS2Ss:
        LB        R30, 0(R2)
        BEQ       R30, R0, L_CS2Send
        ADDIU     R2, R2, 1
        SB        R30, 0(R3)
        J         L_loopCS2Ss
        ADDIU     R3, R3, 1
      L_CS2Send:
    }
}

void __FZinS(){
    asm {
      L_loopCS2Ss:
        LB        R30, 0(R3)
        BNE       R30, R0, L_loopCS2Ss
        ADDIU     R3, R3, 1
        ADDIU     R3, R3, -1
    }
}

void RestoreInterrupts(unsigned long status) {
  if (status & 0x00000001)
    asm EI R0;
  else
    asm DI R0;
}

void __BootGenExcept() {
  while (1)
    ;
}

void __GenExcept() {
  while (1)
    ;
}

extern void main();

void __BootStartUp(){
  // If NMI occurs, invoke default handler (if user-defined function is not provided)
  // For bootloader purposes
  asm {
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
  }
  // stack pointer and global pointer
  R29 = 0x00FF00FF;
  R1  = 0xA0008000;

  asm {
    MFC0        R30, 12, 2
    MOVZ        R28, R30, R0
    EXT         R27, R30, 26, 4
    INS         R30, R27,  6, 4
    MTC0        R30, 12, 2
    WRPGPR        R1,  R1
    MTC0        R28, 12, 2
  }

  //Config: Typically, the K0, KU and K23 fields should be set to the desired Cache Coherency Algorithm (CCA)
  //        value prior to accessing the corresponding memory regions. But in the M4K core, all CCA values are treated
  //        identically, so the hardware reset value of these fields need not be modified.
  CP0_SET(CP0_CONFIG, 0xA4210583);
  // Count: Should be set to a known value if Timer Interrupts are used.
  CP0_SET(CP0_COUNT, 0);
  // Compare: Should be set to a known value if Timer Interrupts are used. The write to compare will also clear any
  //          pending Timer Interrupts (Thus, Count should be set before Compare to avoid any unexpected interrupts).
  CP0_SET(CP0_COMPARE, 0xFFFFFFFF);

  CP0_SET(CP0_EBASE,  0x9FC01000);    // Offset to the beginning of the exception table

  CP0_SET(CP0_INTCTL, 0x00000020);    // 32 bytes between adjacent interrupt vector

  CP0_SET(CP0_SRSCTL, 0x04000000);
  CP0_SET(CP0_SRSMAP, 0x00000000);

  //Status: Desired state of the device should be set.
  CP0_SET(CP0_STATUS, 0x00100000);

  // Dummy setting of CHECON, will correct linker wait states according to the set clock
  CHECON = 0x00000032; // Instructions are recognized by the linker based on this constant,
                       // as it is unique in this function currently. If anything changes,
                       // the linker needs to be adjusted as well...

  // Dummy setting of INTCON, will correct linker/omit if not needed...
  INTCON = 0x80000000; // Instructions are recognized by the linker based on this constant,
                       // as it is unique in this function currently. If anything changes,
                       // the linker needs to be adjusted as well...

  //Cause: WP (Watch Pending), SW0/1 (Software Interrupts) should be cleared.
  CP0_SET(CP0_CAUSE, 0x00800000);

  // Execution of main
  // An indirect call is necessary to change the kseg
  // It must be done from assembly to avoid registering cross-calling...
  asm {
      LUI R30, hi_addr(_main)
      ORI R30, R30, lo_addr(_main)

      JR R30
      NOP
       }
}

char Swap(char arg) {
  return (arg >> 4) | (arg << 4);
}

void __FillZeros(){
	asm{
		L___FillZeros0:
		BEQ R23, R22, L___FillZeros1
		NOP
		L____FillZeros4:
		SW R0, 0(R23)
		J L___FillZeros0
		ADDIU R23, R23, 4
		L___FillZeros1:
	}
}
