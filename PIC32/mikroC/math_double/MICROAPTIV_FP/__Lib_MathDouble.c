void __D2ULL_FM(){
//S12 -> argument
asm{
    ORI  R5, R0, R0
    LUI  R5, 0x5F00
    MTC1 R5, S0
    C.LE.S 0,S0, S12
    BC1T L_GT_LongLong
    NOP
    TRUNC.L.S S12, S12
    MFC1  R2, S12
    MFHC1 R3, S12
    J L_lab0
    NOP
  L_GT_LongLong:
    ORI  R5, R0, R0
    LUI  R5, 0x5F00
    MTC1 R5, S1
    SUB.S S12, S12, S1
    TRUNC.L.S S12, S12
    MFC1 R2, S12
    MFHC1 R3, S12
    LUI R4, 0x8000
    XOR R3, R4, R3
  L_lab0:
  // result is in R2 & R3
  }
}


void __LD2ULL_FM(){
//S12 -> argument   svih 64 bita
asm{
    ORI  R5, R0, R0
    ORI  R2, R0, R0
    LUI  R2, 0x43E0
    MTC1 R5, S0
    MTHC1 R2, S0
    C.LE.D 0,S0, S12
    BC1T L_GT_LongLong
    NOP
    TRUNC.L.D S12, S12
    MFC1  R2, S12
    MFHC1 R3, S12
    J L_lab0
    NOP
  L_GT_LongLong:
    ORI  R5, R0, R0
    ORI  R2, R0, R0
    LUI  R2, 0x43E0
    MTC1 R5, S1
    MTHC1 R2, S1
    SUB.D S12, S12, S1
    TRUNC.L.D S12, S12
    MFC1 R2, S12
    MFHC1 R3, S12
    LUI R4, 0x8000
    XOR R3, R4, R3
  L_lab0:
  // result is in R2 & R3
  }
}



void __ULL2LD_FM(){
// R4 i R5 ulazni parametri
asm{
   MOVZ R25, R4, R0
   MOVZ R26, R5, R0
   SRL R5, R26, 31
   BNE R5, R0, Lab_leading1
   NOP
   MTC1 R25, S0
   MTHC1 R26, S0
   J Lab_ende
   CVT.D.L S0, S0
Lab_leading1:
   ANDI R2, R25, 1   // da li je neparan
   MOVZ R6, R2, R0    // cuvaj neparnost
   ANDI R2, R26, 0
   SLL R2, R26, 31   // najnizi bit na 31 mesto u R2 (visi word)
   SRL R4, R25, 1    // za 1 mesto u desno logical 0 na 31 mestu
   OR R4, R2, R4    // ubacivanje najnizeg bita iz viseg word-a
   SRL R5, R26, 1    // shift za 1 viseg worda (R5 i R4) podeljen sa 2
   MOVZ R2, R6, R0    // ucitaj neparnost
   OR R2, R2, R4    //
   MTC1 R4, S0
   MTHC1 R5, S0
   CVT.D.L S0, S0
   ADD.D S0, S0, S0  // saberi sam sa sobom
Lab_ende:
}
}


void __ULL2D_FM(){
// R4 i R5 ulazni parametri
asm{
   MOVZ R25, R4, R0
   MOVZ R26, R5, R0
   SRL R5, R26, 31
   BNE R5, R0, Lab_leading1
   NOP
   MTC1 R25, S0
   MTHC1 R26, S0
   J Lab_ende
   CVT.S.L S0, S0
Lab_leading1:
   ANDI R2, R25, 1   // da li je neparan
   MOVZ R6, R2, R0    // cuvaj neparnost
   ANDI R2, R26, 0
   SLL R2, R26, 31   // najnizi bit na 31 mesto u R2 (visi word)
   SRL R4, R25, 1    // za 1 mesto u desno logical 0 na 31 mestu
   OR R4, R2, R4    // ubacivanje najnizeg bita iz viseg word-a
   SRL R5, R26, 1    // shift za 1 viseg worda (R5 i R4) podeljen sa 2
   MOVZ R2, R6, R0    // ucitaj neparnost
   OR R2, R2, R4    //
   MTC1 R4, S0
   MTHC1 R5, S0
   CVT.S.L S0, S0
   ADD.S S0, S0, S0  // saberi sam sa sobom
Lab_ende:
}
}