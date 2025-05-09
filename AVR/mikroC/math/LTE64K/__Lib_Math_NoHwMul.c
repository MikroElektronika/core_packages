////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                          NO HARDWARE MULTIPLIER                            //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

void Mul_8x8_U()
{
    asm {
        CLR   R0
    Mul_8x8_U_L1:
        SBRC  R16, 0
        ADD   R0, R20
        ADD   R20, R20
        BREQ  Mul_8x8_U_L2
        LSR   R16
        BRNE  Mul_8x8_U_L1
    Mul_8x8_U_L2:
        MOV   R16, R0
    }
}

void Mul_16x16()
{
    asm {
        CLR    R18
        CLR    R0
    Mul_16x16_L1:
        SBRS   R16, 0
        RJMP   Mul_16x16_L2
        ADD    R0, R20
        ADC    R18, R21
    Mul_16x16_L2:
        ADD    R20, R20
        ROL    R21
        CP     R20, R1
        CPC    R21, R1
        BREQ   Mul_16x16_L3
        LSR    R17
        ROR    R16
        SUBI   R17, 0
        SBCI   R16, 0
        BRNE   Mul_16x16_L1
    Mul_16x16_L3:
        MOV    R17, R18
        MOV    R16, R0
    }
}

void Mul_32x32()
{
    asm {
        CLR  R27
        CLR  R26
        CLR  R25
        CLR  R24
    Mul_32x32_L1:
        SBRS R16, 0
        RJMP Mul_32x32_L2
        ADD  R24, R20
        ADC  R25, R21
        ADC  R26, R22
        ADC  R27, R23
    Mul_32x32_L2:
        LSL  R20
        ROL  R21
        ROL  R22
        ROL  R23
        LSR  R19
        ROR  R18
        ROR  R17
        ROR  R16
        BRNE Mul_32x32_L1
        SUBI   R19, 0
        SBCI   R18, 0
        CPC  R17, R16
        BRNE Mul_32x32_L1
    Mul_32x32_L3:
        MOVW R18, R26
        MOVW R16, R24
    }
}

void Div_8x8_U()
{
    asm {
        CLR  R25
        LDI  R23, 0x09
        RJMP Div_8x8_U_L2
    Div_8x8_U_L1:
        ROL  R25
        CP   R25, R20
        BRCS Div_8x8_U_L2
        SUB  R25, R20
    Div_8x8_U_L2:
        ROL  R16
        DEC  R23
        BRNE Div_8x8_U_L1
        COM  R16
    }
}

void Div_16x16_S()
{
    asm {
        MOVW  R24, R16
        MOVW  R22, R20

        BST   R25, 7
        MOV   R0, R25
        EOR   R0, R23
        RCALL Div_16x16_S_L3
        SBRC  R23, 7
        RCALL Div_16x16_S_L1
        RCALL Div_16x16_S_L4
        RCALL Div_16x16_S_L3
        AND   R0, R0
        BRPL  Div_16x16_S_L2
    Div_16x16_S_L1:
        COM   R23
        NEG   R22
        SBCI  R23, 0xFF
    Div_16x16_S_L2:
        RET
    Div_16x16_S_L3:
        BRTC  Div_16x16_S_L2
        COM   R25
        NEG   R24
        SBCI  R25, 0xFF
        RET
    Div_16x16_S_L4:
        SUB   R26, R26
        SUB   R27, R27
        LDI   R21, 17
        RJMP  Div_16x16_S_L6
    Div_16x16_S_L5:
        ROL   R26
        ROL   R27
        CP    R26, R22
        CPC   R27, R23
        BRCS  Div_16x16_S_L6
        SUB   R26, R22
        SBC   R27, R23
    Div_16x16_S_L6:
        ROL   R24
        ROL   R25
        DEC   R21
        BRNE  Div_16x16_S_L5
        COM   R24
        COM   R25
        MOVW  R22, R24
        MOVW  R24, R26
        RET
    }
}

void Div_16x16_U()
{
    asm {
        MOVW  R24, R16
        MOVW  R22, R20

        SUB   R26, R26
        SUB   R27, R27
        LDI   R21, 17
        RJMP  Div_16x16_U_L2
    Div_16x16_U_L1:
        ROL   R26
        ROL   R27
        CP    R26, R22
        CPC   R27, R23
        BRCS Div_16x16_U_L2
        SUB   R26, R22
        SBC   R27, R23
    Div_16x16_U_L2:
        ROL   R24
        ROL   R25
        DEC   R21
        BRNE Div_16x16_U_L1
        COM   R24
        COM   R25
    }
}

void Div_32x32_U()
{
    asm {
        MOVW R24, R18
        MOVW R18, R20
        MOVW R20, R22
        MOVW R22, R16

        LDI R26, 33
        MOV R1, R26
        SUB R26, R26
        SUB R27, R27
        MOVW R30, R26
        RJMP Div_32x32_U_L2
    Div_32x32_U_L1:
        ROL R26
        ROL R27
        ROL R30
        ROL R31
        CP  R26, R18
        CPC R27, R19
        CPC R30, R20
        CPC R31, R21
        BRCS Div_32x32_U_L2
        SBC R26, R18
        SBC R27, R19
        SBC R30, R20
        SBC R31, R21
    Div_32x32_U_L2:
        ROL R22
        ROL R23
        ROL R24
        ROL R25
        DEC R1
        BRNE Div_32x32_U_L1
        COM R22
        COM R23
        COM R24
        COM R25
    }
}

void Div_32x32_S()
{
    asm {
        MOVW  R24, R18
        MOVW  R18, R20
        MOVW  R20, R22
        MOVW  R22, R16

        BST   R25, 7
        MOV   R0, R25
        EOR   R0, R21
        RCALL Div_32x32_S_L3
        SBRC  R21, 7
        RCALL Div_32x32_S_L1
        RCALL Div_32x32_S_L4
        RCALL Div_32x32_S_L3
        ADC   R0, R0
        BRCC Div_32x32_S_L2
    Div_32x32_S_L1:
        COM   R21
        COM   R20
        COM   R19
        NEG   R18
        SBCI  R19, 0xFF
        SBCI  R20, 0xFF
        SBCI  R21, 0xFF
    Div_32x32_S_L2:
        RET
    Div_32x32_S_L3:
        BRTC Div_32x32_S_L2
        COM   R25
        COM   R24
        COM   R23
        NEG   R22
        SBCI  R23, 0xFF
        SBCI  R24, 0xFF
        SBCI  R25, 0xFF
        RET
    Div_32x32_S_L4:
        LDI   R26, 33
        MOV   R1, R26
        SUB   R26, R26
        SUB   R27, R27
        MOVW  R30, R26
        RJMP  Div_32x32_S_L6
    Div_32x32_S_L5:
        ROL   R26
        ROL   R27
        ROL   R30
        ROL   R31
        CP    R26, R18
        CPC   R27, R19
        CPC   R30, R20
        CPC   R31, R21
        BRCS  Div_32x32_S_L6
        SUB   R26, R18
        SBC   R27, R19
        SBC   R30, R20
        SBC   R31, R21
    Div_32x32_S_L6:
        ROL   R22
        ROL   R23
        ROL   R24
        ROL   R25
        DEC   R1
        BRNE  Div_32x32_S_L5
        COM   R22
        COM   R23
        COM   R24
        COM   R25
        MOVW  R18, R22
        MOVW  R20, R24
        MOVW  R22, R26
        MOVW  R24, R30
    }
}
