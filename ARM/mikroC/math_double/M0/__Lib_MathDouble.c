////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

// Imena u Keil-u
//static void __float_epilogue(void);
//static void __double_epilogue(void);
//static void __ARM_clz(void);
//static void __double_round(void);
//static void __Iusefp(void);

// Promenjena imena
static void __Float_Aux(void);
static void __Double_Aux(void);
static void __Zero_Cnt(void);
static void __Round(void);
static void __Fp(void);
void _Shl_64(void);
void _Shr_64_U(void);
void _Shr_64_S(void);
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

void _FloatToSignedIntegral(void) {
  asm {
    LSRS     R2,R0,#31
    LSLS     R0,R0,#1
    LSRS     R0,R0,#1
    LSRS     R1,R0,#23
    LSLS     R0,R0,#9
    MOVS     R3,#0x01
    LSRS     R0,R0,#9
    LSLS     R3,R3,#23
    LSLS     R2,R2,#31
    ADDS     R0,R0,R3
    CMP      R1,#0x7F
    BGE      _FloatToSignedIntegral_Lab_1
    MOVS     R0,#0x00
    B        _FloatToSignedIntegral_Lab_end
  _FloatToSignedIntegral_Lab_1:
    CMP      R1,#0x96
    BGT      _FloatToSignedIntegral_Lab_2
    MOVS     R3,#0x96
    SUBS     R1,R3,R1
    LSRS     R0,R0,R1
    B        _FloatToSignedIntegral_Lab_3
  _FloatToSignedIntegral_Lab_2:
    SUBS     R1,R1,#0x96
    LSLS     R0,R0,R1
  _FloatToSignedIntegral_Lab_3:
    CMP      R2,#0x00
    BEQ      _FloatToSignedIntegral_Lab_end
    RSBS     R0,R0,#0

  _FloatToSignedIntegral_Lab_end:
//    BX       lr
  }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _FloatToUnsignedIntegral(void) {
  asm {
    LSLS     R0,R0,#1
    LSRS     R0,R0,#1
    LSRS     R1,R0,#23
    LSLS     R0,R0,#9
    MOVS     R2,#0x01
    LSRS     R0,R0,#9
    LSLS     R2,R2,#23
    ADDS     R0,R0,R2
    CMP      R1,#0x7F
    BGE      _FloatToUnsignedIntegral_Lab_1
    MOVS     R0,#0x00
    B        _FloatToUnsignedIntegral_Lab_end                     // BX       lr
  _FloatToUnsignedIntegral_Lab_1:
    CMP      R1,#0x96
    BGT      _FloatToUnsignedIntegral_Lab_2
    MOVS     R2,#0x96
    SUBS     R1,R2,R1
    LSRS     R0,R0,R1
    B        _FloatToUnsignedIntegral_Lab_end                     // BX       lr
  _FloatToUnsignedIntegral_Lab_2:
    SUBS     R1,R1,#0x96
    LSLS     R0,R0,R1

  _FloatToUnsignedIntegral_Lab_end:                              //  BX       lr
  }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _LongDoubleToSignedIntegral() {
  asm {
    PUSH     (R4-R6)
    LSRS     R5,R1,#31
    LSLS     R2,R1,#1
    LSLS     R1,R1,#12
    MOVS     R3,#0x01
    LSRS     R1,R1,#12
    LSLS     R3,R3,#20
    ORRS     R1,R1,R3
    LDR      R3, =0x3FF                                    // LDR      R3,[pc,#44]  ; @0x080001B0
    LSLS     R5,R5,#31
    MOVS     R4,#0x00
    LSRS     R2,R2,#21
    CMP      R2,R3
    BGE      _LDoubleToSIntegral_Lab_1
    MOVS     R0,#0x00

    B        _LDoubleToSIntegral_Lab_end                   // POP      (R4-R6,pc)

  _LDoubleToSIntegral_Lab_1:
    LDR  R3, =0x3FF                                        // LDR      R3,[pc,#28]  ; @0x080001B0
    ADDS     R3,R3,#0x34
    CMP      R2,R3
    BGT      _LDoubleToSIntegral_Lab_2
    SUBS     R2,R3,R2
    BL.W     __Shr_64_U
    B        _LDoubleToSIntegral_Lab_3

  _LDoubleToSIntegral_Lab_2:

    LDR      R1, =64461
    LSLS     R3, R1, #16
    LDR      R1, =65535
    ORRS     R1, R1, R3
//    ORR      R1, R3, R1
    ADDS     R1,R2,R1
    LSLS     R0,R0,R1

  _LDoubleToSIntegral_Lab_3:
    ORRS     R4,R4,R5
    BEQ      _LDoubleToSIntegral_Lab_end
    RSBS     R0,R0,#0

    B      _LDoubleToSIntegral_Lab_end                     // POP      (R4-R6,pc)

    MOVS     R0,R0
    LSLS     R7,R7,#15
    MOVS     R0,R0

  _LDoubleToSIntegral_Lab_end:
    POP     (R4-R6)
  }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _LongDoubleToUnsignedIntegral(void) {
  asm {
    LSLS     R2,R1,#1
    LSLS     R1,R1,#12
    MOVS     R3,#0x01
    LSRS     R1,R1,#12
    LSLS     R3,R3,#20
    ORRS     R1,R1,R3
    LDR      R3, =0x3FF                                      // LDR      R3,[pc,#36]  ; @0x080001C0
    PUSH     (R4)
    LSRS     R2,R2,#21
    CMP      R2,R3
    BGE      _LDoubleToUIntegral_Lab_1
    MOVS     R0,#0x00

    B        _LDoubleToUIntegral_Lab_end                     // POP      (R4,pc)

  _LDoubleToUIntegral_Lab_1:
    LDR      R3, =0x3FF                                      // LDR      R3,[pc,#36]  ; @0x080001C0
    ADDS     R3,R3,#0x34
    CMP      R2,R3
    BGT      _LDoubleToUIntegral_Lab_2
    SUBS     R2,R3,R2
    BL.W     __Shr_64_U

    B        _LDoubleToUIntegral_Lab_end                     // POP      (R4,pc)

  _LDoubleToUIntegral_Lab_2:

    // LDR      R1,[pc,#12]  ; @0x080001C4    0xFBCD FFFF
    LDR      R1, =0xFBCDFFFF

    ADDS     R1,R2,R1
    LSLS     R0,R0,R1
    B        _LDoubleToUIntegral_Lab_end                           // POP      (R4,pc)
    MOVS     R0,R0
    LSLS     R7,R7,#15
    MOVS     R0,R0

  _LDoubleToUIntegral_Lab_end:
    POP      (R4)
  }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _SignedIntegralToFloat(void) {
  asm {
    ASRS     R2,R0,#31
    LSRS     R1,R0,#31
    EORS     R0,R0,R2
    PUSH     (R4)
    ADDS     R0,R0,R1
    LSLS     R2,R1,#31
    MOVS     R3,#0x96
    MOVS     R1,#0x00
    BL.W     __Lib_MathDouble___Float_Aux
    POP      (R4)
    MOVS     R0,R0
  }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _SignedIntegralToLongDouble(void) {
  asm {
    PUSH     (R1-R3)
    ASRS     R2,R0,#31
    LSRS     R1,R0,#31
    EORS     R0,R0,R2
    LSLS     R2,R1,#31
    ADDS     R0,R0,R1
    MOVS     R1,#0x00
    LDR      R3, =0x433                            // LDR      R3,[pc,#20]  ; @0x08000180
    STR      R3,[SP,#0x08]
    STR      R2,[SP,#0x04]
    STR      R1,[SP,#0x00]
    MOV      R2,R1
    MOV      R3,R1
    BL.W     __Lib_MathDouble___Double_Aux
    ADD      SP,SP,#0x0C
    MOVS     R0,R0
    LSLS     R3,R6,#16
    MOVS     R0,R0
  }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _UnsignedIntegralToFloat(void) {
  asm {
    PUSH     (R4)
    MOVS     R2,#0x00
    MOVS     R3,#0x96
    MOV      R1,R2
    BL.W     __Lib_MathDouble___Float_Aux
    POP      (R4)
  }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////


void _UnsignedIntegralToLongDouble(void) {
  asm {
    PUSH     (R1-R3)
    LDR      R1, =0x433                            // LDR      R1,[pc,#20]  ; @0x08000180
    STR      R1,[SP,#0x08]
    MOVS     R1,#0x00
    STR      R1,[SP,#0x00]
    MOV      R2,R1
    MOV      R3,R1
    STR      R1,[SP,#0x04]
    BL.W     __Lib_MathDouble___Double_Aux
    ADD      SP,SP,#0x0C
    LSLS     R3,R6,#16
    MOVS     R0,R0
  }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////


void _LongDoubleToFloat(void) {
  asm {
    LSRS     R3,R1,#31
    LSLS     R3,R3,#31
    LSLS     R1,R1,#1
    PUSH     (R4)
    LSRS     R1,R1,#1
    MOV      R2,R0
    ORRS     R2,R2,R1
    BEQ      _LongDoubleToFloat_Lab_1
    LSRS     R2,R1,#20
    MOVS     R4,#0x07
    LSLS     R1,R1,#12
    LSLS     R4,R4,#7
    LSRS     R1,R1,#12
    SUBS     R2,R2,R4
    CMP      R2,#0x00
    BGT      _LongDoubleToFloat_Lab_2

  _LongDoubleToFloat_Lab_1:
    MOVS     R0,#0x00

    B        _LongDoubleToFloat_Lab_end                        // 0x08000246 BD10      POP      (R4,pc)

  _LongDoubleToFloat_Lab_2:
    LSLS     R1,R1,#3
    LSRS     R4,R0,#29
    ORRS     R4,R4,R1
    LSLS     R1,R0,#3
    ADDS     R0,R4,R3
    LSLS     R2,R2,#23
    ADDS     R0,R0,R2
    BL.W     __Lib_MathDouble___Fp

  _LongDoubleToFloat_Lab_end:
    POP      (R4)
  }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////


void _FloatToLongDouble(void) {
  asm {
    LSRS     R2,R0,#31
    LSLS     R2,R2,#31
    LSLS     R0,R0,#1
    LSRS     R0,R0,#1
    BEQ      _FloatToLongDouble_Lab_1
    LSRS     R1,R0,#23
    MOVS     R3,#0x07
    LSLS     R3,R3,#7
    ADDS     R1,R1,R3
    LSLS     R1,R1,#20
    LSLS     R0,R0,#9
    ORRS     R1,R1,R2
    LSRS     R0,R0,#9
    MOVS     R2,#0x00
    LSRS     R3,R0,#3
    LSLS     R2,R2,#29
    ORRS     R2,R2,R3
    LSLS     R0,R0,#29
    ORRS     R1,R1,R2
    B        _FloatToLongDouble_Lab_end

  _FloatToLongDouble_Lab_1:
    MOVS     R0,#0x00
    MOV      R1,R0
    B        _FloatToLongDouble_Lab_end
    MOVS     R0,R0
    
  _FloatToLongDouble_Lab_end:
  }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////


void _Add_FP(void) {
  asm {
    PUSH     (R3-R7)

    MOV      R1,R2

    MOV      R2,R0
    EORS     R2,R2,R1
    LSRS     R4,R2,#31
    LSLS     R2,R0,#1
    LSLS     R3,R1,#1
    LSRS     R2,R2,#1
    LSRS     R3,R3,#1
    CMP      R2,R3
    BCS      _Add_FP_Lab_1
    MOV      R2,R0
    MOV      R0,R1
    MOV      R1,R2

  _Add_FP_Lab_1:
    LSLS     R2,R1,#1

    BEQ      _Add_FP_Lab_end
    LSRS     R3,R0,#23
    LSLS     R2,R1,#1
    UXTB     R5,R3
    LSRS     R2,R2,#24
    SUBS     R5,R5,R2
    CMP      R5,#0x20
    BGE      _Add_FP_Lab_2
    LSLS     R1,R1,#9
    MOVS     R6,#0x01
    LSRS     R1,R1,#9
    LSLS     R6,R6,#23
    ADDS     R2,R1,R6
    CMP      R4,#0x00
    BEQ      _Add_FP_Lab_3
    RSBS     R2,R2,#0

  _Add_FP_Lab_3:
    MOVS     R1,#0x20
    SUBS     R7,R1,R5
    MOV      R1,R2
    LSLS     R1,R1,R7
    ASRS     R2,R2,R5
    ADDS     R0,R2,R0
    LSRS     R2,R0,#23
    CMP      R2,R3
    BEQ      _Add_FP_Lab_4
    CMP      R4,#0x00
    BEQ      _Add_FP_Lab_5
    CMP      R5,#0x01
    BGT      _Add_FP_Lab_6
    LSLS     R2,R3,#23
    SUBS     R0,R0,R2
    LSRS     R2,R2,#31
    ADDS     R0,R0,R6
    LSLS     R2,R2,#31
    UXTB     R3,R3
    BL.W     __Lib_MathDouble___Float_Aux

    B        _Add_FP_Lab_end
    //POP      (R3-R7,pc)

  _Add_FP_Lab_6:
    LSLS     R2,R3,#23
    SUBS     R0,R0,R2
    MOVS     R3,#0x01
    LSLS     R0,R0,#1
    LSLS     R3,R3,#24
    ADDS     R0,R0,R3
    ADDS     R0,R0,R2
    RSBS     R2,R3,#0
    ADDS     R0,R0,R2
    LSRS     R2,R1,#31
    ORRS     R0,R0,R2
    LSLS     R1,R1,#1
    B        _Add_FP_Lab_4

  _Add_FP_Lab_5:
    LSRS     R1,R1,#1
    LSLS     R2,R0,#31
    ORRS     R1,R1,R2
    LSLS     R2,R3,#23
    SUBS     R0,R0,R2
    ADDS     R0,R0,R6
    LSRS     R0,R0,#1
    ADDS     R0,R0,R2

  _Add_FP_Lab_4:
    BL.W     __Lib_MathDouble___Fp

    B        _Add_FP_Lab_end
    //POP      (R3-R7,pc)

  _Add_FP_Lab_2:
    LSLS     R1,R4,#1
    MOVS     R2,#0x01
    SUBS     R1,R2,R1
    SUBS     R0,R0,R4
    B        _Add_FP_Lab_4

  _Add_FP_Lab_end:
    POP      (R3-R7)
  }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////


void _Sub_FP(void) {
  asm {
    MOVS     R1,#0x01
    LSLS     R1,R1,#31
    EORS     R2,R2,R1
    BL       __Add_FP
  }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _Mul_FP(void) {
  asm {
    MOV      R1,R2

    MOV      R2,R0
    PUSH     (R4-R6)
    EORS     R2,R2,R1
    LSRS     R3,R2,#31
    LSLS     R3,R3,#31
    LSLS     R0,R0,#1
    BEQ      _Mul_FP_Lab_end
    LSLS     R2,R1,#1
    BEQ      _Mul_FP_Lab_1
    LSRS     R1,R0,#24
    LSRS     R4,R2,#24
    ADDS     R1,R1,R4
    LSLS     R0,R0,#8
    LSLS     R2,R2,#8
    LSRS     R0,R0,#9
    LSRS     R2,R2,#9
    ADDS     R4,R0,R2
    LSLS     R5,R4,#7
    MOV      R4,R0
    MULS     R4,R2,R4
    LSRS     R0,R0,#8
    LSRS     R2,R2,#8
    LSLS     R6,R5,#16
    MULS     R0,R2,R0
    ADDS     R4,R4,R6
    ADDS     R2,R0,R5
    LSRS     R0,R4,#16
    MVNS     R5,R0
    ADDS     R2,R5,R2
    LSRS     R2,R2,#16
    MOVS     R5,#0x01
    SUBS     R1,R1,#0x7F
    ADDS     R2,R2,#1
    LSLS     R5,R5,#14
    ADDS     R2,R2,R5
    LSLS     R2,R2,#16
    LSLS     R4,R4,#16
    BEQ      _Mul_FP_Lab_2
    ADDS     R2,R2,#1

  _Mul_FP_Lab_2:
    ORRS     R0,R0,R2
    BMI      _Mul_FP_Lab_3
    LSLS     R0,R0,#1
    SUBS     R1,R1,#1

  _Mul_FP_Lab_3:
    UXTB     R2,R0
    LSLS     R4,R1,#24
    LSRS     R0,R0,#7
    ADDS     R0,R4,R0
    ADDS     R0,R0,#1
    LSRS     R0,R0,#1
    CMP      R2,#0x80
    BEQ      _Mul_FP_Lab_4
    B        _Mul_FP_Lab_5

  _Mul_FP_Lab_1:
    MOVS     R0,#0x00

    B        _Mul_FP_Lab_end
    //POP      {R4-R6,pc}

  _Mul_FP_Lab_4:
    LSRS     R0,R0,#1
    LSLS     R0,R0,#1

  _Mul_FP_Lab_5:
    CMP      R1,#0x00
    BGE      _Mul_FP_Lab_6
    MOVS     R0,#0x00

  _Mul_FP_Lab_6:
    ORRS     R0,R0,R3

  _Mul_FP_Lab_end:
    POP      (R4-R6)
  }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _Div_FP(void) {
  asm {
    PUSH     (R4-R6)
    
    ////////////////////////////////////////////////////////////////////////////

    MOVS      R4, R2                      // AKO JE DELILAC NULA, ONDA JE REZULTAT +MAX_LONG_LOGN ili -MAX_LONG_LONG
    BNE      _Div_FP_Lab_10

    MOVS     R0, R0
    BPL _Div_FP_Lab_11

    LDR    R0, =0xFF800000
    B      _Div_FP_end

  _Div_FP_Lab_11:
    LDR    R0, =0x7F800000
    B      _Div_FP_end
    ////////////////////////////////////////////////////////////////////////////

  _Div_FP_Lab_10:
    
    MOV      R1,R2
    MOV      R2,R0
    EORS     R2,R2,R1
    LSRS     R5,R2,#31
    LSLS     R0,R0,#1
    LSLS     R2,R1,#1
    LSLS     R5,R5,#31
    LSRS     R0,R0,#1
    LSRS     R2,R2,#1
    CMP      R0,#0x00
    BEQ      _Div_FP_Lab_1
    CMP      R2,#0x00
    BEQ      _Div_FP_Lab_1
    LSLS     R1,R0,#1
    LSRS     R4,R1,#24
    LSLS     R1,R2,#1
    LSRS     R3,R1,#24
    LSLS     R1,R0,#9
    MOVS     R0,#0x01
    LSLS     R0,R0,#23
    LSLS     R2,R2,#9
    LSRS     R1,R1,#9
    LSRS     R2,R2,#9
    SUBS     R4,R4,R3
    ADDS     R1,R1,R0
    ADDS     R2,R2,R0
    ADDS     R4,R4,#0x7D
    CMP      R1,R2
    BCC      _Div_FP_Lab_2
    ADDS     R4,R4,#1
    B        _Div_FP_Lab_3

  _Div_FP_Lab_2:
    LSLS     R1,R1,#1

  _Div_FP_Lab_3:
    CMP      R4,#0x00
    BGE      _Div_FP_Lab_4

  _Div_FP_Lab_1:
    MOVS     R0,#0x00

    B        _Div_FP_end
    //POP      (R4-R6,pc)

  _Div_FP_Lab_4:
    MOVS     R3,#0x00

  _Div_FP_Lab_6:
    CMP      R1,R2
    BCC      _Div_FP_Lab_5
    SUBS     R1,R1,R2
    ORRS     R3,R3,R0

  _Div_FP_Lab_5:
    LSRS     R0,R0,#1
    LSLS     R1,R1,#1
    CMP      R0,#0x00
    BNE      _Div_FP_Lab_6
    CMP      R1,#0x00
    BEQ      _Div_FP_Lab_7
    CMP      R1,R2
    BNE      _Div_FP_Lab_8
    MOVS     R1,#0x01
    LSLS     R1,R1,#31
    B        _Div_FP_Lab_7

  _Div_FP_Lab_8:
    CMP      R1,R2
    BCS      _Div_FP_Lab_9
    MOVS     R1,#0x01
    B        _Div_FP_Lab_7

  _Div_FP_Lab_9:
    MOVS     R1,#0x01
    MVNS     R1,R1

  _Div_FP_Lab_7:
    LSLS     R0,R4,#23
    ADDS     R0,R0,R3
    ADDS     R0,R0,R5
    BL.W     __Lib_MathDouble___Fp

  _Div_FP_end:
    POP      (R4-R6)
  }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Fajl:   fs_cmp_t2.asm
void _Compare_FP() {

  asm {
    PUSH      (R4)

    CMP        R0, R2                    // HANDLE THE CASE OF BOTH INPUTS EQUAL
    
    //IT         EQ
    //POPEQ      (R4, PC)
    BEQ __me_lab_end

    //ORR        R4, R0, R2                // HANDLE THE CASE OF BOTH INPUTS BEING
    //LSL        R4, R4, #1                // ZERO
    //CMP        R4, #0x0                  //
    MOV        R4, R0                      // OVO RAZMISLITI DA LI IZBACITI (AKO SU OBA NULA, ONDA JE TO POKRIVENO SLUCAJEM IZNAD)
    ORRS       R4, R2
    LSLS       R4, R4, #1
    CMP        R4, #0x0

    //IT         EQ
    //POPEQ      (R4, PC)
    BEQ __me_lab_end

    LSLS       R4, R0, #1                // TEST OP1 == 0
    BNE        __me_ct2_                 //

    CMP        R4, R2                    // AFTER CMP, IF OP2 is -VE,
    BMI        __me_labop2_pos           // C FLAG IS CLEAR TO INDICATE A BORROW
    ADDS       R4, R4, #2                // RTS-ABI REQUIRES C FLAG SET
    CMP        R4, #1                    // TO INDICATE OP1 > OP2
  __me_labop2_pos:

    //POP        (R4, PC)
    B __me_lab_end

  __me_ct2_:
    LSLS       R4, R0, #1                //
    LSRS       R4, R4, #24               // CHECK INPUT #1 FOR INFINITY
    CMP        R4, #0xFF                 //
    BNE        __me_ct1_                 //
    LSLS       R4, R2, #1                // CHECK INPUT #2 FOR INFINITY
    LSRS       R4, R4, #24               //
    CMP        R4, #0xFF                 //
    BNE        __me_ct1_                 //

    LSRS       R4, R2, #31               // HANDLE THE CASE OF BOTH INPUTS
    //SUBS        R4, R4, R0, LSR #31    // BEING INFINITE
    LSRS       R1, R0, #31
    SUBS       R4, R4, R1

    //POP        (R4, PC)
    B   __me_lab_end

  __me_ct1_:
    CMP        R2, #0                // CHECK OP2'S SIGN
    BMI        __me_op2_m                //

    CMP        R0, #0                    // IF OP1 IS -VE, C FLAG IS 1 AFTER
    BGT        __me_labop1_pos           // CMP SINCE THERE IS NO BORROW
    MOVS       R4, #0                    // RT-ABI REQUIRES C FLAG CLEAR TO
    CMP        R4, #1                    // INDICATE OP1 < OP2
    
    //POP        (R4, PC)
    B   __me_lab_end


  __me_labop1_pos:
    CMP        R0, R2

    //POP        (R4, PC)
    B   __me_lab_end

  __me_op2_m:
    CMP        R0, #0               // OP2 IS NEGATIVE.  IF OP1 IS NEGATIVE,
    
    //IT         MI
    //CMPMI      R2, R0                    // THE RESULT IS OP2 - OP1, ELSE OP1
    BPL       __me_lab_end
    CMP      R2, R0

  __me_lab_end:
    POP       (R4)
  }

}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _Add_DP(void) {
  asm {
    PUSH     (R4-R7)
    MOV      R7,R0
    MOV      R0,R1
    EORS     R0,R3
    SUB      SP,SP,#0x1C
    LSRS     R0,R0,#31
    STR      R0,[SP,#0x10]
    LSLS     R0,R1,#1
    MOV      R4,R1
    LSLS     R1,R3,#1
    LSRS     R0,R0,#1
    LSRS     R1,R1,#1
    SUBS     R5,R7,R2
    SBCS     R0,R1
    BCS      _Add_DP_Lab_1
    MOV      R0,R7
    MOV      R1,R4
    MOV      R7,R2
    MOV      R4,R3
    MOV      R2,R0
    MOV      R3,R1

  _Add_DP_Lab_1:
    LSLS     R0,R3,#1
    LSRS     R0,R0,#1
    ORRS     R0,R2
    BNE      _Add_DP_Lab_2
    MOV      R0,R7
    MOV      R1,R4

  _Add_DP_Lab_8:
    ADD      SP,SP,#0x1C

    B        _Add_DP_Lab_end
    //POP      (R4-R7,pc)

  _Add_DP_Lab_2:
    LSRS     R0,R4,#20
    STR      R0,[SP,#0x0C]
    LSLS     R0,R0,#21
    LSLS     R1,R3,#1
    LSRS     R0,R0,#21
    LSRS     R1,R1,#21
    STR      R0,[SP,#0x14]
    SUBS     R0,R0,R1
    STR      R0,[SP,#0x08]
    CMP      R0,#0x40
    BGE      _Add_DP_Lab_3
    LSLS     R0,R3,#12
    MOVS     R1,#0x01
    LSRS     R0,R0,#12
    LSLS     R1,R1,#20
    ORRS      R0,R1
    STR      R0,[SP,#0x04]
    LDR      R0,[SP,#0x10]
    STR      R2,[SP,#0x00]
    CMP      R0,#0x00
    BEQ      _Add_DP_Lab_4
    MOV      R1,R2
    LDR      R2,[SP,#0x04]
    RSBS     R1,R1,#0
    MOVS     R0,#0x00
    SBCS     R0,R2
    STR      R1,[SP,#0x00]
    STR      R0,[SP,#0x04]

  _Add_DP_Lab_4:
    LDR      R0,[SP,#0x08]
    MOVS     R1,#0x40
    SUBS    R2,R1,R0
    LDR      R1,[SP,#0x04]
    LDR      R0,[SP,#0x00]
    BL.W     __Shl_64
    MOV      R6,R0
    MOV      R5,R1
    MOV      R0,SP
    LDM      R0,(R0-R2)
    BL.W     __Shr_64_S
    ADDS     R0,R0,R7
    ADCS     R1,R4
    LDR      R2,[SP,#0x0C]
    LSRS     R3,R1,#20
    ASRS     R7,R2,#31
    EORS     R3,R2
    ORRS     R3,R7
    BEQ      _Add_DP_Lab_5
    LDR      R2,[SP,#0x10]
    CMP      R2,#0x00
    BEQ      _Add_DP_Lab_6
    LDR      R2,[SP,#0x08]
    CMP      R2,#0x01
    LDR      R2,[SP,#0x0C]
    BGT      _Add_DP_Lab_7
    LSLS     R2,R2,#20
    MOVS     R3,#0x00
    SUBS     R0,R0,R3
    SBCS     R1,R2
    MOVS     R4,#0x01
    LSLS     R4,R4,#20
    ADDS     R0,R0,#0
    ADCS     R1,R4
    LSRS     R2,R2,#31
    LDR      R4,[SP,#0x14]
    LSLS     R2,R2,#31
    STR      R3,[SP,#0x00]
    STR      R2,[SP,#0x04]
    STR      R4,[SP,#0x08]
    MOV      R2,R6
    MOV      R3,R5
    BL.W     __Lib_MathDouble___Double_Aux
    B        _Add_DP_Lab_8

  _Add_DP_Lab_7:
    LSLS     R3,R2,#20
    LDR      R2, =0xFFE00000                                        //LDR      R2,[pc,#144]  ; @0x08000328
    MOV      R7,R1
    ADDS     R4,R3,R2
    MOVS     R2,#0x00
    SUBS     R0,R0,R2
    SBCS     R7,R3
    MOVS     R1,#0x01
    LSLS     R1,R1,#20
    ADDS     R0,R0,#0
    ADCS     R7,R1
    ADDS     R0,R0,R0
    ADCS     R7,R7
    ADDS     R0,R2,R0
    MOV      R1,R4
    ADCS     R1,R7
    LSRS     R2,R5,#31
    ORRS     R0,R2
    ADDS     R6,R6,R6
    ADCS     R5,R5
    B        _Add_DP_Lab_5

  _Add_DP_Lab_6:
    LSLS     R2,R5,#31
    LSRS     R5,R5,#1
    LSLS     R3,R0,#31
    ORRS     R5,R3
    LSRS     R6,R6,#1
    LDR      R3,[SP,#0x0C]
    ORRS     R6,R2
    MOVS     R2,#0x00
    LSLS     R3,R3,#20
    SUBS     R0,R0,R2
    SBCS     R1,R3
    MOVS     R4,#0x01
    LSLS     R4,R4,#20
    ADDS     R0,R0,#0
    ADCS     R1,R4
    LSLS     R4,R1,#31
    LSRS     R0,R0,#1
    ORRS     R0,R4
    LSRS     R1,R1,#1
    ADDS     R0,R0,R2
    ADCS     R1,R3

  _Add_DP_Lab_5:
    MOV      R2,R6
    MOV      R3,R5

  _Add_DP_Lab_9:
    BL.W     __Lib_MathDouble___Round
    B        _Add_DP_Lab_8

  _Add_DP_Lab_3:
    LDR      R0,[SP,#0x10]
    MOVS     R2,#0x01
    LSLS     R0,R0,#1
    ASRS     R1,R0,#31
    SUBS     R2,R2,R0
    MOVS     R3,#0x00
    SBCS     R3,R1
    LDR      R0,[SP,#0x10]
    MOV      R1,R4
    ASRS     R5,R0,#31
    SUBS     R0,R7,R0
    SBCS     R1,R5
    B        _Add_DP_Lab_9

  _Add_DP_Lab_end:
    POP      (R4-R7,PC)
  }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _Sub_DP(void) {
  asm {
    PUSH     (R4-R5)
    MOVS     R4,#0x01
    LSLS     R4,R4,#31
    EORS     R3,R3,R4
    POP      (R4-R5)
    BL        __Add_DP
  }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _Mul_DP() {
  asm {
    PUSH     (R4-R7)
    PUSH     (R0-R4)
    SUB      SP,SP,#0x20
    LDR      R1,[SP,#0x2C]
    LDR      R0,[SP,#0x24]
    EORS     R0,R0,R1
    LSRS     R1,R0,#31
    LSLS     R1,R1,#31
    STR      R1,[SP,#0x00]
    LDR      R1,[SP,#0x24]
    MOVS     R0,#0x00
    LSLS     R1,R1,#1
    LSRS     R1,R1,#1
    STR      R1,[SP,#0x24]
    LDR      R1,[SP,#0x2C]
    MOV      LR,R0
    LSLS     R1,R1,#1
    LSRS     R1,R1,#1
    STR      R1,[SP,#0x2C]
    LDR      R1,[SP,#0x24]
    LDR      R0,[SP,#0x20]
    ORRS     R0,R0,R1
    BEQ      _Mul_DP_Lab_1
    LDR      R1,[SP,#0x2C]
    LDR      R0,[SP,#0x28]
    ORRS     R0,R0,R1
    BNE      _Mul_DP_Lab_2

  _Mul_DP_Lab_1:
    MOVS     R0,#0x00
    MOV      R1,R0

  _Mul_DP_Lab_9:
    ADD      SP,SP,#0x34

    B        _Mul_DP_Lab_end
    //POP      (R4-R7,PC)

  _Mul_DP_Lab_2:
    LDR      R0,[SP,#0x24]
    MOVS     R4,#0x01
    LSLS     R0,R0,#1
    LSRS     R2,R0,#21
    LSLS     R0,R1,#1
    LSRS     R1,R0,#21
    LDR      R0,[SP,#0x24]
    LSLS     R4,R4,#20
    LSLS     R0,R0,#12
    LSRS     R0,R0,#12
    ORRS     R0,R0,R4
    STR      R0,[SP,#0x24]
    LDR      R0,[SP,#0x2C]
    ADD      R6,SP,#0x28
    LSLS     R0,R0,#12
    LSRS     R0,R0,#12
    ORRS     R0,R0,R4
    STR      R0,[SP,#0x2C]
    ADDS     R0,R2,R1

    //LDR      R1,[PC,#100]  ; @0x08000290
    LDR      R1, =0xFFFFFC0D

    ADDS     R0,R0,R1
    MOVS     R2,#0x00
    STR      R0,[SP,#0x04]
    MOV      R4,R2
    MOV      R0,R2
    B        _Mul_DP_Lab_3

  _Mul_DP_Lab_8:
    CMP      R0,#0x03
    BGE      _Mul_DP_Lab_4

  _Mul_DP_Lab_3:
    MOV      R3,R0
    B        _Mul_DP_Lab_5

  _Mul_DP_Lab_4:
    MOVS     R3,#0x03

  _Mul_DP_Lab_5:
    MOV      R12,R3
    SUBS     R1,R0,R3
    B        _Mul_DP_Lab_6

  _Mul_DP_Lab_7:
    LSLS     R7,R3,#1
    ADD      R5,SP,#0x20
    LDRH     R5,[R5,R7]
    LSLS     R7,R1,#1
    LDRH     R7,[R6,R7]
    MULS     R5,R7,R5
    MOVS     R7,#0x00
    ADDS     R2,R5,R2
    ADCS     R4,R4,R7
    SUBS     R3,R3,#1
    ADDS     R1,R1,#1

  _Mul_DP_Lab_6:
    CMP      R1,R12
    BLE      _Mul_DP_Lab_7
    LSLS     R3,R0,#1
    ADD      R1,SP,#0x10
    STRH     R2,[R1,R3]
    LSLS     R1,R4,#16
    LSRS     R2,R2,#16
    ORRS     R2,R2,R1
    LSRS     R4,R4,#16
    ADDS     R0,R0,#1
    CMP      R0,#0x08
    BLT      _Mul_DP_Lab_8
    LDR      R0,[SP,#0x04]
    STR      R0,[SP,#0x08]
    LDR      R1,[SP,#0x00]
    MOV      R0,LR
    STR      R1,[SP,#0x04]
    STR      R0,[SP,#0x00]
    LDR      R3,[SP,#0x14]
    LDR      R2,[SP,#0x10]
    LDR      R1,[SP,#0x1C]
    LDR      R0,[SP,#0x18]
    BL.W     __Lib_MathDouble___Double_Aux
    B        _Mul_DP_Lab_9
    MOVS     R0,R0

  _Mul_DP_Lab_end:
    POP      (R4-R7)
  }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _Div_DP() {
  asm {
    PUSH     (R4-R7)
    
    ////////////////////////////////////////////////////////////////////////////

    MOV      R4, R2                      // AKO JE DELILAC NULA, ONDA JE REZULTAT +MAX_LONG_LOGN ili -MAX_LONG_LONG
    ORRS     R4, R3
    BNE      _Div_DP_Lab_12

    LDR      R0, =0
    MOVS     R3, R1
    BPL _Div_DP_Lab_13

    LDR    R1, =0xFFF00000
    B      _Div_DP_Lab_end

  _Div_DP_Lab_13:
    LDR    R1, =0x7FF00000
    B      _Div_DP_Lab_end

    ////////////////////////////////////////////////////////////////////////////

  _Div_DP_Lab_12:
    
    MOV      R4,R1
    EORS     R4,R4,R3
    SUB      SP,SP,#0x14
    LSRS     R4,R4,#31
    LSLS     R4,R4,#31
    STR      R4,[SP,#0x0C]
    LSLS     R4,R1,#1
    MOVS     R6,#0x00
    LSRS     R4,R4,#1
    LSLS     R1,R3,#1
    MOV      R12,R2
    LSRS     R1,R1,#1
    MOV      R2,R0
    STR      R6,[SP,#0x08]
    ORRS     R2,R2,R4
    BEQ      _Div_DP_Lab_1
    MOV      R2,R12
    ORRS     R2,R2,R1
    BEQ      _Div_DP_Lab_1
    LSLS     R2,R4,#1
    LSRS     R7,R2,#21
    LSLS     R2,R1,#1
    LSLS     R6,R1,#12
    LSLS     R3,R4,#12
    LSRS     R5,R2,#21
    MOV      R2,R0
    MOVS     R4,#0x01
    LDR      R1, =0x3FD
    LSLS     R4,R4,#20
    SUBS     R0,R7,R5
    LSRS     R3,R3,#12
    LSRS     R6,R6,#12
    ADDS     R0,R0,R1
    STR      R0,[SP,#0x00]
    ORRS     R3,R3,R4
    ORRS     R6,R6,R4
    MOV      R0,R12
    MOV      R4,R3
    SUBS     R0,R2,R0
    SBCS     R4,R4,R6
    BCC      _Div_DP_Lab_2
    LDR      R0,[SP,#0x00]
    ADDS     R0,R0,#1
    STR      R0,[SP,#0x00]
    B        _Div_DP_Lab_3

  _Div_DP_Lab_2:
    ADDS     R2,R2,R2
    LDR      R0,[SP,#0x00]
    ADCS     R3,R3,R3

  _Div_DP_Lab_3:
    CMP      R0,#0x00
    BGE      _Div_DP_Lab_4

  _Div_DP_Lab_1:
    MOVS     R0,#0x00
    MOV      R1,R0

  _Div_DP_Lab_11:
    ADD      SP,SP,#0x14

    B        _Div_DP_Lab_end
    //POP      {R4-R7,PC}

  _Div_DP_Lab_4:
    MOVS     R0,#0x00
    MOVS     R1,#0x01
    LSLS     R1,R1,#20
    MOV      R7,R0
    MOV      LR,R0
    B        _Div_DP_Lab_5

  _Div_DP_Lab_7:
    MOV      R4,R12
    MOV      R5,R3
    SUBS     R4,R2,R4
    SBCS     R5,R5,R6
    BCC      _Div_DP_Lab_6
    MOV      R5,R12
    SUBS     R2,R2,R5
    SBCS     R3,R3,R6
    MOV      R4,LR
    ORRS     R7,R7,R0
    ORRS     R4,R4,R1
    MOV      LR,R4

  _Div_DP_Lab_6:
    LSLS     R5,R1,#31
    LSRS     R0,R0,#1
    LSRS     R1,R1,#1
    ORRS     R0,R0,R5
    ADDS     R2,R2,R2
    ADCS     R3,R3,R3

  _Div_DP_Lab_5:
    MOV      R5,R0
    ORRS     R5,R5,R1
    BNE      _Div_DP_Lab_7
    MOV      R0,R2
    ORRS     R0,R0,R3
    BEQ      _Div_DP_Lab_8
    MOV      R0,R12
    MOV      R1,R3
    EORS     R0,R0,R2
    EORS     R1,R1,R6
    ORRS     R0,R0,R1
    BNE      _Div_DP_Lab_9
    MOVS     R2,#0x00
    MOVS     R3,#0x01
    LSLS     R3,R3,#31
    B        _Div_DP_Lab_8

  _Div_DP_Lab_9:
    MOV      R0,R12
    SUBS     R0,R2,R0
    SBCS     R3,R3,R6
    BCS      _Div_DP_Lab_10
    MOVS     R2,#0x01
    MOVS     R3,#0x00
    B        _Div_DP_Lab_8

  _Div_DP_Lab_10:
    MOVS     R2,#0x01
    MVNS     R2,R2
    ASRS     R3,R2,#1

  _Div_DP_Lab_8:
    LDR      R0,[SP,#0x00]
    MOV      R4,LR
    LSLS     R1,R0,#20
    ADDS     R0,R7,#0
    ADCS     R1,R1,R4
    LDR      R4,[SP,#0x08]
    LDR      R5,[SP,#0x0C]
    ADDS     R0,R0,R4
    ADCS     R1,R1,R5
    BL.W     __Lib_MathDouble___Round
    B        _Div_DP_Lab_11
    MOVS     R0,R0
    LSLS     R5,R7,#15
    MOVS     R0,R0

  _Div_DP_Lab_end:
    POP      (R4-R7)
  }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Fajl:   fd_cmp_t2.asm
void _Compare_DP() {

  asm {
    PUSH        (R4, R5)

    CMP     R1, R3              // HANDLE THE CASE OF BOTH INPUTS EQUAL
    BNE     __me_label_1        //
    CMP     R0, R2              //
    BEQ     __me_label_done

  __me_label_1:
    MOV     R4, R0
    ORRS    R4, R4, R2          // HANDLE THE CASE OF BOTH INPUTS BEING
    BNE     __me_label_2        // ZERO
    MOV     R4, R1
    ORRS    R4, R4, R3          //
    LSLS    R4, R4, #1          //
    CMP     R4, #0x0            //
    BEQ     __me_label_done

  __me_label_2:
//    ORRS    R4, R0, R1, LSL #1     // TEST OP1 == 0
    LSLS    R5, R1, #1
    MOV     R4, R0
    ORRS    R4, R4, R5
    
    BNE     __me_label_3           //

    CMP     R4, R3                 // OP1 == 0, DISREGARD SIGN OF OP1
    B       __me_label_done

  __me_label_3:
    LSLS    R4, R1, #1             // CHECK INPUT #1 FOR INFINITY
    ASRS    R4, R4, #21               //
    ADDS    R4, R4, #1                //
    BNE     __me_label_4                     //
    LSLS    R4, R3, #1             // CHECK INPUT #2 FOR INFINITY
    ASRS    R4, R4, #21               //
    ADDS    R4, R4, #1                //
    BNE     __me_label_4                     //

    LSRS    R4, R3, #31            // HANDLE THE CASE OF BOTH INPUTS
    LSRS    R3, R1, #31
    SUBS    R4, R4, R3   // BEING INFINITE
    B       __me_label_done

  __me_label_4:
    CMP     R3, #0                  // CHECK OP2 SIGN
    BMI     __me_label_6                     //

    CMP     R1, #0                  // OP2 IS POSITIVE.  IF OP1 IS NEGATIVE,
    BMI     __me_label_done

  __me_label_op1_pos:
    CMP     R1, R3              // ELSE IT IS OP1 - OP2
    BNE     __me_label_done
    MOV     R4, R0
    EORS    R4, R4, R2                // MAKE SURE WE SET THE N BIT CORRECTLY
    BMI     __me_label_5                     //
    CMP     R0, R2              //
    B       __me_label_done

  __me_label_5:
    CMP     R2, #0                  //
    B       __me_label_done

  __me_label_6:
    CMP     R1, #0                            // OP2 IS NEGATIVE.  IF OP1 IS POSITIVE,
    BGT     __me_label_done
    CMP     R3, R1                        // ELSE IT IS OP2 - OP1
    BNE     __me_label_done
    MOV     R4, R0
    EORS    R4, R4, R2                // MAKE SURE WE SET THE N BIT CORRECTLY
    BMI     __me_label_7                     //
    CMP            R2, R0              //
    B       __me_label_done

  __me_label_7:
    CMP            R0, #0                  //

  __me_label_done:
    MRS          R4, #0                   // CORTEX-M3 USES APSR INSTEAD OF CPSR
    
    //ITE          PL                          //
    //ORRPL        R4, R4, #0x20000000            // IF N CLEAR, SET C
    //BICMI        R4, R4, #0x20000000            // IF N SET, CLEAR C

    LDR          R5, =0x20000000
    BMI          __me_label_mi
    ORRS        R4, R4, R5            // IF N CLEAR, SET C
    B            __me_label_pl
  __me_label_mi:
    BICS        R4, R4, R5            // IF N SET, CLEAR C
  __me_label_pl:


    MSR          #0, R4
    POP         (R4, R5)
  }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _SignedLongLongToFloat() {
  asm {
    PUSH     (R4-R6)
    ASRS     R4,R1,#31
    ASRS     R5,R1,#31
    LSRS     R2,R1,#31
    EORS     R0,R0,R4
    EORS     R1,R1,R5
    MOV      R4,R1
    ADDS     R1,R0,R2
    MOVS     R3,#0x00
    MOV      R0,R4
    ADCS     R0,R0,R3
    LSLS     R2,R2,#31
    MOVS     R3,#0x96
    CMP      R0,#0x00
    BEQ      _SignedLongLongToFloat_Lab_1
    MOVS     R3,#0xB6

  _SignedLongLongToFloat_Lab_2:
    BL.W     __Lib_MathDouble___Float_Aux
    B        _SignedLongLongToFloat_Lab_end


  _SignedLongLongToFloat_Lab_1:
    MOV      R0,R1
    MOVS     R1,#0x00
    B        _SignedLongLongToFloat_Lab_2
    MOVS     R0,R0
    
  _SignedLongLongToFloat_Lab_end:
    POP      (R4-R6)
  }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _UnsignedLongLongToFloat(void) {
  asm {
    PUSH     (R4)
    MOV      R4,R0
    MOVS     R3,#0x96
    MOVS     R0,R1
    MOV      R1,R4
    BEQ      _UnsignedLongLongToFloat_Lab_1
    MOVS     R3,#0xB6

  _UnsignedLongLongToFloat_Lab_2:
    MOVS     R2,#0x00
    BL.W     __Lib_MathDouble___Float_Aux

    B        _UnsignedLongLongToFloat_Lab_end
    //POP      (R4,PC)

  _UnsignedLongLongToFloat_Lab_1:
    MOV      R0,R4
    MOVS     R1,#0x00
    B        _UnsignedLongLongToFloat_Lab_2
    MOVS     R0,R0

  _UnsignedLongLongToFloat_Lab_end:
    POP      (R4)
  }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _FloatToSignedLongLong(void) {
  asm {
    PUSH     (R4)
    LSRS     R4,R0,#31
    LSLS     R0,R0,#1
    LSRS     R0,R0,#1
    LSRS     R2,R0,#23
    LSLS     R0,R0,#9
    MOVS     R1,#0x01
    LSRS     R0,R0,#9
    LSLS     R1,R1,#23
    LSLS     R4,R4,#31
    ADDS     R0,R0,R1
    CMP      R2,#0x7F
    BGE      _FloatToSignedLL_Lab_1
    MOVS     R0,#0x00
    MOV      R1,R0

    B        _FloatToSignedLL_Lab_end
    //POP      {R4,PC}

  _FloatToSignedLL_Lab_1:
    CMP      R2,#0x96
    BGT      _FloatToSignedLL_Lab_2
    MOVS     R1,#0x96
    SUBS     R1,R1,R2
    LSRS     R0,R0,R1
    MOVS     R1,#0x00
    B        _FloatToSignedLL_Lab_3

  _FloatToSignedLL_Lab_2:
    MOVS     R1,#0x00
    SUBS     R2,R2,#0x96
    BL.W     __Shl_64

  _FloatToSignedLL_Lab_3:
    CMP      R4,#0x00
    BEQ      _FloatToSignedLL_Lab_end
    MOVS     R2,#0x00
    RSBS     R0,R0,#0
    SBCS     R2,R2,R1
    MOV      R1,R2

    B        _FloatToSignedLL_Lab_end
    //POP      {R4,PC}

    MOVS     R0,R0
  _FloatToSignedLL_Lab_end:
    POP      (R4)
  }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _FloatToUnsignedLongLong(void) {
  asm {
    LSLS     R0,R0,#1
    LSRS     R0,R0,#1
    LSRS     R2,R0,#23
    LSLS     R0,R0,#9
    MOVS     R1,#0x01
    LSRS     R0,R0,#9
    LSLS     R1,R1,#23
    PUSH     (R4)
    ADDS     R0,R0,R1
    CMP      R2,#0x7F
    BGE      _FloatToUnsignedLL_Lab_1
    MOVS     R0,#0x00
    B        _FloatToUnsignedLL_Lab_2

  _FloatToUnsignedLL_Lab_1:
    CMP      R2,#0x96
    BGT      _FloatToUnsignedLL_Lab_3
    MOVS     R1,#0x96
    SUBS     R1,R1,R2
    LSRS     R0,R0,R1

  _FloatToUnsignedLL_Lab_2:
    MOVS     R1,#0x00

    B         _FloatToUnsignedLL_Lab_end
    //POP      (R4,PC)

  _FloatToUnsignedLL_Lab_3:
    MOVS     R1,#0x00
    SUBS     R2,R2,#0x96
    BL.W      __Shl_64

  _FloatToUnsignedLL_Lab_end:
    POP      (R4)
  }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _SignedLongLongToLongDouble(void) {
  asm {
    PUSH     (R1-R5)
    ASRS     R4,R1,#31
    ASRS     R5,R1,#31
    LSRS     R2,R1,#31
    EORS     R0,R0,R4
    EORS     R1,R1,R5
    MOVS     R3,#0x00
    ADDS     R0,R0,R2
    ADCS     R1,R1,R3
    LSLS     R3,R2,#31
    MOVS     R2,#0x00
    LDR      R4, =0x433
    MOV      R5,SP
    STM      R5!,(R2-R4)
    MOV      R3,R2
    BL.W     __Lib_MathDouble___Double_Aux
    ADD      SP,SP,#0x0C

    B        _SignedLLToLongD_Lab_end
    //POP      (R4-R5)

    MOVS     R0,R0
    LSLS     R3,R6,#16
    MOVS     R0,R0

  _SignedLLToLongD_Lab_end:
    POP      (R4-R5)
  }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _UnsignedLongLongToLongDouble(void) {
  asm {
    PUSH     (R1-R3)
    LDR      R2, =0x433
    STR      R2,[SP,#0x08]
    MOVS     R2,#0x00
    STR      R2,[SP,#0x00]
    MOV      R3,R2
    STR      R2,[SP,#0x04]
    BL.W     __Lib_MathDouble___Double_Aux
    ADD      SP,SP,#0x0C

    B        _UnsignedLLToLD_Lab_end
    //POP      {PC}

    MOVS     R0,R0
    LSLS     R3,R6,#16
    MOVS     R0,R0
    _UnsignedLLToLD_Lab_end:
  }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _LongDoubleToSignedLongLong(void) {
  asm {
    PUSH     (R4-R6)
    LSRS     R5,R1,#31
    LSLS     R2,R1,#1
    LSLS     R1,R1,#12
    MOVS     R3,#0x01
    LSRS     R1,R1,#12
    LSLS     R3,R3,#20
    ORRS     R1,R1,R3
    LDR      R3, =0x3FF
    LSLS     R5,R5,#31
    MOVS     R4,#0x00
    LSRS     R2,R2,#21
    CMP      R2,R3
    BGE      _LongDToSignedLL_Lab_1
    MOVS     R0,#0x00
    MOV      R1,R0

    B        _LongDToSignedLL_Lab_end
    // POP      (R4-R6,PC)

  _LongDToSignedLL_Lab_1:
    LDR      R3, =0x3FF
    ADDS     R3,R3,#0x34
    CMP      R2,R3
    BGT      _LongDToSignedLL_Lab_2
    SUBS     R2,R3,R2
    BL.W     __Shr_64_U
    B        _LongDToSignedLL_Lab_3


  _LongDToSignedLL_Lab_2:


    //LDR      R3,[PC,#24]  ; @0x08000258      0x4467 5535    fbcdffff
    LDR      R3, =0xFBCDFFFF

    ADDS     R2,R2,R3
    BL.W     __Shl_64

  _LongDToSignedLL_Lab_3:
    ORRS     R4,R4,R5
    BEQ      _LongDToSignedLL_Lab_end
    MOVS     R2,#0x00
    RSBS     R0,R0,#0
    SBCS     R2,R2,R1
    MOV      R1,R2

    B        _LongDToSignedLL_Lab_end
    //POP      (R4-R6,PC)

    LSLS     R7,R7,#15
    MOVS     R0,R0

  _LongDToSignedLL_Lab_end:
    POP      (R4-R6)
  }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _LongDoubleToUnsignedLongLong(void) {
  asm {
    LSLS     R2,R1,#1
    LSLS     R1,R1,#12
    MOVS     R3,#0x01
    LSRS     R1,R1,#12
    LSLS     R3,R3,#20
    ORRS     R1,R1,R3
    LDR      R3, =0x3FF
    PUSH     (R4)
    LSRS     R2,R2,#21
    CMP      R2,R3
    BGE      _LongDToUnsignedLL_Lab_1
    MOVS     R0,#0x00
    MOV      R1,R0

    B        _LongDToUnsignedLL_Lab_end
    //POP      (R4,PC)

  _LongDToUnsignedLL_Lab_1:
    LDR      R3, =0x3FF
    ADDS     R3,R3,#0x34
    CMP      R2,R3
    BGT      _LongDToUnsignedLL_Lab_2
    SUBS     R2,R3,R2
    BL.W     __Shr_64_U

    B        _LongDToUnsignedLL_Lab_end
    //POP      (R4,PC)

  _LongDToUnsignedLL_Lab_2:

    //LDR      R3,[PC,#12]  ; @0x08000248
    LDR      R3, =0xFBCDFFFF

    ADDS     R2,R2,R3
    BL.W     __Shl_64

    B        _LongDToUnsignedLL_Lab_end
    //POP      (R4,PC)

    MOVS     R0,R0
    LSLS     R7,R7,#15
    MOVS     R0,R0
    //DCD      0xFBCDFFFF   ; ? Undefined

  _LongDToUnsignedLL_Lab_end:
    POP      (R4)
  }
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

static void __Float_Aux(void) {
  asm {
    PUSH     (R4-R6)
    MOVS     R4,#0x00
    LSRS     R5,R0,#16
    BNE      __Float_Aux_Lab_1
    MOVS     R4,#0x10
    LSLS     R0,R0,#16
    BNE      __Float_Aux_Lab_1
    CMP      R1,#0x00
    BEQ      __Float_Aux_Lab_2
    MOVS     R4,#0x11

  __Float_Aux_Lab_1:                                          // 0x08000226
    LSRS     R5,R0,#24
    BNE      __Float_Aux_Lab_3
    ADDS     R4,R4,#0x08
    LSLS     R0,R0,#8

  __Float_Aux_Lab_3:                                          // 0x0800022E
    LSRS     R5,R0,#28
    BNE      __Float_Aux_Lab_4
    ADDS     R4,R4,#4
    LSLS     R0,R0,#4

  __Float_Aux_Lab_4:                                          // 0x08000236
    LSRS     R5,R0,#30
    BNE      __Float_Aux_Lab_5
    ADDS     R4,R4,#2
    LSLS     R0,R0,#2

  __Float_Aux_Lab_5:                                          // 0x0800023E
    CMP      R0,#0x00
    BLT      __Float_Aux_Lab_6
    ADDS     R4,R4,#1
    LSLS     R0,R0,#1

  __Float_Aux_Lab_6:                                          // 0x08000246
    CMP      R1,#0x00
    BEQ      __Float_Aux_Lab_7
    MOVS     R5,#0x20
    SUBS     R6,R5,R4
    MOV      R5,R1
    LSRS     R5,R5,R6
    LSLS     R1,R1,R4
    BEQ      __Float_Aux_Lab_9
    MOVS     R1,#0x01

  __Float_Aux_Lab_9:                                          // 0x08000258
    ORRS     R5,R5,R1
    ORRS     R0,R0,R5

  __Float_Aux_Lab_7:                                          // 0x0800025C
    SUBS     R3,R3,R4
    LSLS     R1,R0,#24
    ADDS     R3,R3,#7
    LSRS     R0,R0,#8
    CMP      R3,#0x00
    BGE      __Float_Aux_Lab_8
    MOVS     R0,#0x00

  __Float_Aux_Lab_2:                                          // 0x0800026A
    POP      (R4-R6)

    B        __Float_Aux_Lab_end                              // BX       LR

  __Float_Aux_Lab_8:                                          // 0x0800026E
    LSLS     R3,R3,#23
    ADDS     R0,R3,R0
    ADDS     R0,R0,R2
    CMP      R1,#0x00
    BGE      __Float_Aux_Lab_2
    ADDS     R0,R0,#1
    LSLS     R1,R1,#1
    BNE      __Float_Aux_Lab_2
    POP      (R4-R6)
    LSRS     R0,R0,#1
    LSLS     R0,R0,#1
    B        __Float_Aux_Lab_end                              // BX       LR
    MOVS     R0,R0

  __Float_Aux_Lab_end:
  }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

static void __Double_Aux(void) {
  asm {
    PUSH     (R4-R7)
    PUSH     (R0-R4)
    SUB      SP,SP,#0x08
    MOV      R5,R0
    MOVS     R4,R1
    BEQ      __Double_Aux_Lab_1
    MOV      R0,R1
    BL.W     __Lib_MathDouble___Zero_Cnt
    B        __Double_Aux_Lab_2

  __Double_Aux_Lab_1:
    BL.W     __Lib_MathDouble___Zero_Cnt
    ADDS     R0,R0,#0x20

  __Double_Aux_Lab_2:
    MOV      R2,R0
    STR      R0,[SP,#0x00]
    MOV      R1,R4
    MOV      R0,R5
    BL.W     __Shl_64
    LDR      R3,[SP,#0x10]
    LDR      R2,[SP,#0x14]
    MOV      R6,R0
    MOV      R7,R1
    ORRS     R0,R0,R3
    ORRS     R1,R1,R2
    ORRS     R0,R0,R1
    BNE      __Double_Aux_Lab_3
    MOV      R0,R6
    MOV      R1,R7

  __Double_Aux_Lab_8:
    ADD      SP,SP,#0x1C

    B         __Double_Aux_Lab_end
    //     POP      (R4-R7,PC)

  __Double_Aux_Lab_3:
    MOV      R0,R3
    ORRS     R0,R0,R2
    BEQ      __Double_Aux_Lab_4
    LDR      R0,[SP,#0x00]
    MOVS     R1,#0x40
    SUBS     R2,R1,R0
    MOV      R0,R3
    LDR      R1,[SP,#0x14]
    BL.W     __Shr_64_U
    MOV      R4,R0
    MOV      R5,R1
    LDR      R2,[SP,#0x00]
    LDR      R1,[SP,#0x14]
    LDR      R0,[SP,#0x10]
    BL.W     __Shl_64
    ORRS     R0,R0,R1
    BEQ      __Double_Aux_Lab_5
    MOVS     R0,#0x01
    B        __Double_Aux_Lab_6

  __Double_Aux_Lab_5:
    MOVS     R0,#0x00

  __Double_Aux_Lab_6:
    ASRS     R1,R0,#31
    ORRS     R4,R4,R0
    ORRS     R5,R5,R1
    ORRS     R6,R6,R4
    ORRS     R7,R7,R5

  __Double_Aux_Lab_4:
    LDR      R1,[SP,#0x00]
    LDR      R0,[SP,#0x38]
    LSRS     R4,R6,#11
    SUBS     R0,R0,R1
    LSLS     R1,R7,#21
    ADDS     R0,R0,#0x0A
    LSLS     R3,R6,#21
    MOVS     R2,#0x00
    ORRS     R4,R4,R1
    LSRS     R5,R7,#11
    CMP      R0,#0x00
    BGE      __Double_Aux_Lab_7
    MOVS     R0,#0x00
    MOV      R1,R0
    B        __Double_Aux_Lab_8

  __Double_Aux_Lab_7:
    LSLS     R1,R0,#20
    ADDS     R0,R2,R4
    ADCS     R1,R1,R5
    LDR      R4,[SP,#0x30]
    LDR      R5,[SP,#0x34]
    ADDS     R0,R0,R4
    ADCS     R1,R1,R5
    BL.W     __Lib_MathDouble___Round
    B        __Double_Aux_Lab_8
    MOVS     R0,R0

  __Double_Aux_Lab_end:
    POP      (R4-R7)
  }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

static void __Zero_Cnt(void) {
  asm {
    MOVS     R1,#0x20
    LSRS     R2,R0,#16
    BEQ      __Zero_Cnt_Lab_1
    MOVS     R1,#0x10
    MOV      R0,R2

  __Zero_Cnt_Lab_1:
    LSRS     R2,R0,#8
    BEQ      __Zero_Cnt_Lab_2
    SUBS     R1,R1,#0x08
    MOV      R0,R2

  __Zero_Cnt_Lab_2:
    LSRS     R2,R0,#4
    BEQ      __Zero_Cnt_Lab_3
    SUBS     R1,R1,#4
    MOV      R0,R2

  __Zero_Cnt_Lab_3:
    LSRS     R2,R0,#2
    BEQ      __Zero_Cnt_Lab_4
    SUBS     R1,R1,#2
    MOV      R0,R2

  __Zero_Cnt_Lab_4:
    LSRS     R2,R0,#1
    BEQ      __Zero_Cnt_Lab_5
    SUBS     R0,R1,#2
    B        __Zero_Cnt_Lab_end             // BX       LR


  __Zero_Cnt_Lab_5:
    SUBS     R0,R1,R0

  __Zero_Cnt_Lab_end:
  }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

static void __Round(void) {
  asm {
    PUSH     (R4)
    CMP      R3,#0x00
    BGE      __Round_Lab_end
    MOVS     R4,#0x00
    ADDS     R0,R0,#1
    ADCS     R1,R1,R4
    ADDS     R2,R2,R2
    ADCS     R3,R3,R3
    ORRS     R2,R2,R3
    BNE      __Round_Lab_end
    LSRS     R0,R0,#1
    LSLS     R0,R0,#1
  __Round_Lab_end:
    POP      (R4)
  }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

static void __Fp(void) {
  asm {
    CMP      R1,#0x00
    BGE      __Fp_Lab_end
    ADDS     R0,R0,#1
    LSLS     R1,R1,#1
    BNE      __Fp_Lab_end
    LSRS     R0,R0,#1
    LSLS     R0,R0,#1

__Fp_Lab_end:
  }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////