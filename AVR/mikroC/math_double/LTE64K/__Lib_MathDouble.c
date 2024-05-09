
// NOTE :::: zabranjeno je koristiti Y (R29:R28) unutar MATH rutina

void float_neg32() {
  asm {
    COM  R16
    COM  R17
    COM  R18
    COM  R19
    SUBI R16,255
    SBCI R17,255
    SBCI R18,255
    SBCI R19,255
  }
}

void float_tstr16_r19() {
  asm {
    TST  R16
    BRNE L015C
    TST  R17
    BRNE L015C
    TST  R18
    BRNE L015C
    TST  R19
  L015C:
  }
}

void float_pack() {
  float_tstr16_r19();
  asm {
    BREQ L01A7
    SUBI R20,129
    SBCI R21,255
    MOV  R19,R20
    LSL  R18
    LSR  R19
    ROR  R18
    OR   R19,R22
  L01A7:
  }
}

void float_normalize_and_pack() {
  float_tstr16_r19();
  asm {
    BREQ  L0196
    PUSH  R25
    PUSH  R24
    LDI	  R24,126
    LDI   R25,0
  L0178:
    TST   R19
    BREQ  L0184
    LSR   R19
    ROR   R18
    ROR   R17
    ROR   R16
    CP    R20,R24
    CPC   R21,R25
    BRGE  L0197
    SUBI  R20,255
    SBCI  R21,255
    RJMP  L0178
  L0184:
    COM   R24
    COM   R25
    ADIW  R24,1
  L0187:
    TST   R18
    BRMI  L019C
    LSL   R16
    ROL   R17
    ROL   R18
    CP	  R20,R24
    CPC	  R21,R25
    BRLT  L0192
    SUBI  R20,1
    SBCI  R21,0
    RJMP  L0187
  L0192:
    CLR   R16
    CLR   R17
    CLR   R18
    CLR   R19
  L0196:
    RJMP  L0196x
  L0197:
    CLR   R19
    LDI	  R16,255
    MOV	  R17,R16
    LDI	  R18,127
    MOV	  R19,R18
  L019C:
    POP   R24
    POP   R25
  }
  float_pack();
  asm {
  L0196x:
  }
}

void float_long2fp() {
  asm {
    LDI   R20, 23
    CLR   R22
    CLR   R21
    BRTS  L00FC
    TST   R19
    BRPL  L00FC
  }
  float_neg32();
  asm {
    LDI   R22,128
    L00FC:
  }
  float_normalize_and_pack();
}

void float_slong2fp() {
  asm {
    BCLR  6
  }
  float_long2fp();
}

void float_ulong2fp() {
  asm {
    BSET  6
  }
  float_long2fp();
}

void float_int2fp() {
  asm {
    CLR   R18
    CLR   R19
    SBRC  R17,7
    COM   R18
    SBRC  R17,7
    COM   R19
  }
  float_long2fp();
}

void float_unpacku() {
  float_tstr16_r19();
  asm {
    BREQ  L016E
    MOV	  R22, R19
    ANDI  R22, 128
    LSL   R18
    ROL   R19
    MOV	  R20,R19
    LDI	  R21,127
    SUB	  R20,R21
    CLR   R21
    SBCI  R21,0
    LSR   R18
    LDI	  R19,128
    OR	  R18,R19
    CLR   R19
    CLZ
    RJMP  L016Ex
  L016E:
    CLR   R20
    CLR   R21
    CLR   R22
  L016Ex:
  }
}

void float_unpacks() {
  float_unpacku();
  asm {
    BREQ  L0154
    TST   R22
    BREQ  L0153
  }
  float_neg32();
  asm {
  L0153:
    CLZ
  L0154:
  }
}

void float_fpint() {
  float_unpacku();
  asm {
    BREQ  L0077
    TST   R21
    BRMI  L0073
    CPI   R20,0x1F
    BRCC  L0072int
    CPI   R20,0x17
    BREQ  L0077
    BRCC  L006A
    NEG   R20
    SUBI  R20, 0xE9
    RJMP  L0068
  L0063:
    ASR   R19
    ROR   R18
    ROR   R17
    ROR   R16
    DEC   R20
  L0068:
    BRNE  L0063
    RJMP  L0077
  L006A:
    SUBI  R20,0x17
  L006B:
    LSL   R16
    ROL   R17
    ROL   R18
    ROL   R19
    DEC   R20
    BRNE  L006B
    RJMP  L0077
  L0072int:
    LDI   R19,0x7F
  L0073:
    MOV   R18,R19
    MOV   R17,R19
    MOV   R16,R19
    RJMP  L007A
  L0077:
    TST   R22
    BREQ  L007A
  }
  float_neg32();
  asm {
  L007A:
  }
}

void float_fpadd_alt() {
  float_unpacks();
  asm {
    BRNE  L008A
    RJMP  L00CC
  L008A:
    MOV	  R14,R22
    MOV	  R13,R21
    MOV   R12,R20
    MOV	  R11,R19
    MOV	  R10,R18
    MOV   R9,R17
    MOV   R8,R16
    MOV   R16, R0
    MOV   R17, R1
    MOV   R18, R2
    MOV   R19, R3
  }
  float_unpacks();
  asm {
    BRNE  L0098
    RJMP  L00D6
  L0098:
    MOV   R24,R20
    MOV   R25,R21
    SUB   R24,R12
    SBC   R25,R13
    BREQ  L00B4
    BRPL  L00AC
    COM   R25
    COM   R24
    ADIW  R24,1
    MOV   R20,R12
    MOV   R21,R13
    CPI   R24,24
    BRCC  L00D6
  L00A5:
    ASR   R19
    ROR   R18
    ROR   R17
    ROR   R16
    SBIW  R24,1
    BRNE  L00A5
    RJMP  L00B4
  L00AC:
    CPI   R24,24
    BRCC  L00CC
  L00AE:
    ASR   R11
    ROR   R10
    ROR   R9
    ROR   R8
    SBIW  R24,1
    BRNE  L00AE
  L00B4:
    CLR   R22
    BRTS  L00BB
    ADD   R16,R8
    ADC   R17,R9
    ADC   R18,R10
    ADC   R19,R11
    RJMP  L00C4
  L00BB:
    SUB   R8,R16
    SBC   R9,R17
    SBC   R10,R18
    SBC   R11,R19
    MOV   R16,R8
    MOV   R17,R9
    MOV   R18,R10
    MOV   R19,R11
    TST   R19
  L00C4:
    BRPL  L00C7
  }
  float_neg32();
  asm {
    LDI   R22,128
  L00C7:
  }
  float_normalize_and_pack();
  asm {
    RJMP  L00CA
  L00C9:
  }
  float_pack();
  asm {
  L00CA:
    RJMP  L00D6x
  L00CC:
    MOV   R16, R0
    MOV   R17, R1
    MOV   R18, R2
    MOV   R19, R3
    BRTC  L00CA
  }
  float_tstr16_r19();
  asm {
    BREQ  L00CA
    LDI   R20,128
    EOR   R19,R20
    RJMP  L00CA
  L00D6:
    MOV   R16,R8
    MOV   R17,R9
    MOV   R18,R10
    MOV   R19,R11
    MOV   R20,R12
    MOV   R21,R13
    MOV   R22,R14
    TST   R19
    BRPL  L00C9
  }
  float_neg32();
  asm {
    LDI   R22,128
    RJMP  L00C9
  L00D6x:
  }
}

void float_fpadd() {
  asm {
    CLT
  }
  float_fpadd_alt();
}

void float_fpadd1() {
  asm {
    MOV   R0, R20
    MOV   R1, R21
    MOV   R2, R22
    MOV   R3, R23
  }
  float_fpadd();
  asm {
    MOV   R0, R16
    MOV   R1, R17
    MOV   R2, R18
    MOV   R3, R19
  }
}

void float_fpsub() {
  asm {
    SET
  }
  float_fpadd_alt();
}

void float_fpsub1() {
  asm {
    MOV   R0, R20
    MOV   R1, R21
    MOV   R2, R22
    MOV   R3, R23
  }
  float_fpsub();
  asm {
    MOV   R0, R16
    MOV   R1, R17
    MOV   R2, R18
    MOV   R3, R19
  }
}

void float_fpmul() {
  float_unpacku();
  asm {
    BREQ  L0097
    MOV   R14,R22
    MOV   R13,R21
    MOV   R12,R20
    MOV   R11,R19
    MOV   R10,R18
    MOV   R9,R17
    MOV   R8,R16
    MOV   R16, R0
    MOV   R17, R1
    MOV   R18, R2
    MOV   R19, R3
  }
  float_unpacku();
  asm {
    BREQ  L0097
    EOR   R22,R14
    ADD   R20,R12
    ADC   R21,R13
    CPI   R20,128
    CPC   R21,R19
    BRGE  L009B
    CPI   R20,129
    LDI   R23,255
    CPC   R21,R23
    BRLT  L00A0mul
    CLR   R24
    CLR   R25
    CLR   R26
    CLR   R27
    LDI   R23,32
  L0083:
    LSR   R27
    ROR   R26
    ROR   R25
    ROR   R24
    ROR   R19
    ROR   R18
    ROR   R17
    ROR   R16
    BRCC  L0090
    ADD   R24,R8
    ADC   R25,R9
    ADC   R26,R10
    ADC	  R27,R11
  L0090:
    DEC   R23
    BRNE  L0083
    MOV	  R16,R19
    MOV	  R19,R26
    MOV	  R18,R25
    MOV	  R17,R24
  }
  float_normalize_and_pack();
  asm {
  L0097:
    RJMP  L00A0x
  L009B:
    LDI	  R16,255
    MOV	  R17,R16
    LDI	  R18,127
    LDI	  R19,127
    RJMP  L0097
  L00A0mul:
    CLR   R16
    MOV	  R17,R16
    MOV	  R18,R16
    MOV	  R19,R16
    RJMP  L0097
  L00A0x:
  }
}

void float_fpmul1() {
  asm {
    MOV   R0, R20
    MOV   R1, R21
    MOV   R2, R22
    MOV   R3, R23
  }
  float_fpmul();
  asm {
    MOV   R0, R16
    MOV   R1, R17
    MOV   R2, R18
    MOV   R3, R19
  }
}

void float_fpdiv() {
  asm {
    PUSH  R19
    PUSH  R18
    PUSH  R17
    PUSH  R16
    MOV   R16, R0
    MOV   R17, R1
    MOV   R18, R2
    MOV   R19, R3
  }
  float_unpacku();
  asm {
    BRNE  L0072div
    RJMP  L00C2
  L0072div:
    MOV	  R14,R22
    MOV	  R13,R21
    MOV	  R12,R20
    MOV	  R11,R19
    MOV	  R10,R18
    MOV	  R9,R17
    MOV	  R8,R16
    POP   R16
    POP   R17
    POP   R18
    POP   R19
  }

  float_unpacku();
  asm {
    BREQ  L00AB
    EOR	  R22,R14
    SUB	  R20,R12
    SBC	  R21,R13
    CPI	  R20,0x80
    CPC	  R21,R19
    BRGE  L00B1
    CPI	  R20,0x81
    LDI	  R23,0xFF
    CPC	  R21,R23
    BRLT  L00BD
    LDI	  R24,0x20
    CLR   R7
    MOV   R6,R19
    MOV	  R5,R18
    MOV   R4,R17
    MOV   R19,R16
    CLR   R18
    CLR   R17
    CLR   R16
  L0092:
    LSL   R16
    ROL   R17
    ROL   R18
    ROL   R19
    ROL   R4
    ROL   R5
    ROL   R6
    ROL   R7
    BRCS  L00A0div
    SUB	  R4,R8
    SBC	  R5,R9
    SBC	  R6,R10
    SBC	  R7,R11
    RJMP  L00A4
  L00A0div:
    ADD	  R4,R8
    ADC	  R5,R9
    ADC	  R6,R10
    ADC	  R7,R11
  L00A4:
    BRMI  L00A6
    ORI	  R16, 1
  L00A6:
    DEC   R24
    BRNE  L0092
    SUBI  R20, 1
    SBCI  R21, 0
  }
  float_normalize_and_pack();
  asm {
  L00AB:
    RJMP  L00C2x
  L00B1:
    LDI	  R16, 0xFF
    MOV	  R17,R16
    LDI	  R18,0x7F
    LDI	  R19,0x7F
    TST   R22
    BREQ  L00AB
  }
  float_tstr16_r19();
  asm {
    BREQ  L00AB
    MOV	  R19,R4
    LDI	  R19,0x80
    EOR	  R19,R4
    RJMP  L00AB
  L00BD:
    CLR   R16
    MOV	  R17,R16
    MOV	  R18,R16
    MOV	  R19,R16
    RJMP  L00AB
  L00C2:
//    ADIW  R28,0x04     // ??? gazimo Y - aaaaaaaaaaaaaaaaaaa
    POP R0
    POP R0
    POP R0
    POP R0
    RJMP  L00B1          // Vanja krao od Image Crafta, ovo je sumnjivo
                         // ako ima problema, potraziti ga prvo ovde
  L00C2x:
  }
}

void float_fpdiv1() {
  asm {
    MOV   R0, R20
    MOV   R1, R21
    MOV   R2, R22
    MOV   R3, R23
  }
  float_fpdiv();
  asm {
    MOV   R0, R16
    MOV   R1, R17
    MOV   R2, R18
    MOV   R3, R19
  }
}

void float_fpcmp() {
  float_fpsub();
  asm {
    TST   R19
    BRMI  L011A
  }
  float_tstr16_r19();
  asm {
    BREQ  L0118
    LDI   R16, 1
    RJMP  L011Aexit
  L0118:
    CLR   R16
    RJMP  L011Aexit
  L011A:
    LDI   R16, 0xFF
  L011Aexit:
  }
}

void float_fpcmp1() {
  asm {
    MOV   R0, R20
    MOV   R1, R21
    MOV   R2, R22
    MOV   R3, R23
  }
  float_fpcmp();
  asm {
    TST   R16
  }
}

void float_op_equ() {
  float_fpcmp1();
  asm {
    BRNE  op_equ_false
    CLR   R0
    INC   R0
    RJMP op_equ_exit
  op_equ_false:
    CLR   R0
  op_equ_exit:
  }
}

void float_op_diff() {
  float_fpcmp1();
  asm {
    BREQ op_diff_false
    CLR   R0
    INC   R0
    RJMP  op_diff_exit
  op_diff_false:
    CLR   R0
  op_diff_exit:
  }
}

void float_op_gequ() {
  float_fpcmp1();
  asm {
    BRLT  op_gequ_false
    CLR   R0
    INC   R0
    RJMP  op_gequ_exit
  op_gequ_false:
    CLR   R0
  op_gequ_exit:
  }
}

void float_op_big() {
  asm {
    MOV   R0, R16
    MOV   R1, R17
    MOV   R2, R18
    MOV   R3, R19

    MOV   R16, R20
    MOV   R17, R21
    MOV   R18, R22
    MOV   R19, R23
  }
  float_fpcmp();
  asm {
    TST R16
    BRGE  op_big_false
    CLR   R0
    INC   R0
    RJMP  op_big_exit
  op_big_false:
    CLR   R0
  op_big_exit:
  }
}

void float_op_less() {
  float_fpcmp1();
  asm {
    BRGE  op_less_false
    CLR   R0
    INC   R0
    RJMP  op_less_exit
  op_less_false:
    CLR   R0
  op_less_exit:
  }
}

void float_op_lequ() {
  asm {
    MOV   R0, R16
    MOV   R1, R17
    MOV   R2, R18
    MOV   R3, R19

    MOV   R16, R20
    MOV   R17, R21
    MOV   R18, R22
    MOV   R19, R23
  }
  float_fpcmp();
  asm {
    TST   R16
    BRLT  op_lequ_false
    CLR   R0
    INC   R0
    RJMP  op_lequ_exit
  op_lequ_false:
    CLR   R0
  op_lequ_exit:
  }
}
