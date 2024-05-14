#include "__Lib_CP0.h"

// rutina koja kopira iz dela memorije na koju pokazuje R28
// u deo memorije na koju pokazuje R27
// adresa do koje se kopira je u R26
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
  // ako je NMI pozvati defualt (ako nije data korisnicka definicja funkcije)
  // for bootloader purpose
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
  // stack pointer i global pointer
  R29 = 0x00FF00FF;
  R1  = 0xA0008000;

  // sinhro gp u shadow set
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
  //  value prior to accessing the corresponding memory regions. But in the M4K core, all CCA values are treated
  //  identically, so the hardware reset value of these fields need not be modified.
  CP0_SET(CP0_CONFIG, 0xA4210583);
  // Count: Should be set to a known value if Timer Interrupts are used.
  // COUNT
  CP0_SET(CP0_COUNT, 0);
  // Compare: Should be set to a known value if Timer Interrupts are used. The write to compare will also clear any
  //    pending Timer Interrupts (Thus, Count should be set before Compare to avoid any unexpected interrupts).
  CP0_SET(CP0_COMPARE, 0xFFFFFFFF);

  CP0_SET(CP0_EBASE,  0x9FC01000);    // offset do pocetka exception tabele

  CP0_SET(CP0_INTCTL, 0x00000020);    // 32 bajta izmedju sisednih interrupt vectora

  CP0_SET(CP0_SRSCTL, 0x04000000);
  CP0_SET(CP0_SRSMAP, 0x00000000);

  // todo .. napraviti poziv funkcije koja se ivrsava nakon bootStartUp-a
  // tj. dok je jos u boot sekciji
  //Status: Desired state of the device should be set.
  CP0_SET(CP0_STATUS, 0x00100000);

  // dummy setovanje checon-a, ispravice linker wait state-ove prema setovanom clocku
  CHECON = 0x00000032; // instrukcije se u linkeru prepoznaje po ovoj konstanti,
                       // jer je jedinstvena u ovoj f-ji trenutno, ako se bilo shta
                       // izmeni treba srediti i linker...

  // dummy setovanje intcon-a, ispravice linker/izbacice ako ne treba...
  INTCON = 0x80000000; // instrukcije se u linkeru prepoznaje po ovoj konstanti,
                       // jer je jedinstvena u ovoj f-ji trenutno, ako se bilo shta
                       // izmeni treba srediti i linker...

  //Cause: WP (Watch Pending), SW0/1 (Software Interrupts) should be cleared.
  CP0_SET(CP0_CAUSE, 0x00800000);

  // izvrsavanje main-a
  // mora indirektni poziv da bi se promenio kseg
  // mora iz asm-a da se ne bi registrovao cross calling...
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
