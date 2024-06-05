void _Shr_64_U( void )
{
    asm {
        PUSH     (R4)
        CMP      R2,#0x20
        BLT      _Shr_64_U_Lab1
        MOV      R0,R1
        SUBS     R2,R2,#0x20
        LSRS     R0,R0,R2
        MOVS     R1,#0x00
        BL      _Shr_64_U_Lab2
    _Shr_64_U_Lab1:
        MOV      R3,R1
        LSRS     R3,R3,R2
        LSRS     R0,R0,R2
        MOVS     R4,#0x20
        SUBS     R2,R4,R2
        LSLS     R1,R1,R2
        ORRS     R0,R0,R1
        MOV      R1,R3
    _Shr_64_U_Lab2:
        POP      (R4)
    }
}

void _Shr_64_S( void )
{
    asm {
        PUSH     (R4)
        CMP      R2,#0x20
        BLT      _Shr_64_Lab_1
        ASRS     R3,R1,#31
        MOV      R0,R1
        SUBS     R2,R2,#0x20
        ASRS     R0,R0,R2
        ASRS     R1,R0,#31
        ORRS     R1,R1,R3

        B        _Shr_64_Lab_end

    _Shr_64_Lab_1:
        MOV      R3,R1
        ASRS     R3,R3,R2
        LSRS     R0,R0,R2
        MOVS     R4,#0x20
        SUBS     R2,R4,R2
        LSLS     R1,R1,R2
        ORRS     R0,R0,R1
        MOV      R1,R3

    _Shr_64_Lab_end:
        POP      (R4)
    }
}

void _Shl_64( void )
{
    asm {
        PUSH     (R4)
        CMP      R2,#0x20
        BLT      _Shl_64_Lab1
        MOV      R1,R0
        SUBS     R2,R2,#0x20
        LSLS     R1,R1,R2
        MOVS     R0,#0x00
        BL       _Shl_64_Lab2
    _Shl_64_Lab1:
        LSLS     R1,R1,R2
        MOVS     R3,#0x20
        SUBS     R4,R3,R2
        MOV      R3,R0
        LSRS     R3,R3,R4
        ORRS     R1,R1,R3
        LSLS     R0,R0,R2
    _Shl_64_Lab2:
        POP      (R4)
    }
}

void _Div_64x64_U( void )
{

    asm {
        PUSH     (R4-R7)


        MOV      R4, R2
        ORRS     R4, R3
        BNE      _Div_64x64_U_Lab4

        MOV      R2, R0
        MOV      R3, R1
        LDR      R0, =0xFFFFFFFF
        LDR      R1, =0xFFFFFFFF
        B        _Div_64x64_U_Lab_end

    _Div_64x64_U_Lab4:
        PUSH     (R0-R4)
        MOVS     R7,#0x00
        SUB      SP,SP,#0x08
        MOV      R5,R0
        MOV      R6,R1
        MOVS     R4,#0x40
        STR      R7,[SP,#0x00]
        B        _Div_64x64_U_Lab1
    _Div_64x64_U_Lab2:
        MOV      R2,R4
        MOV      R0,R5
        MOV      R1,R6
        BL.W     __Shr_64_U
        LDR      R2,[SP,#0x10]
        LDR      R3,[SP,#0x14]
        SUBS     R0,R0,R2
        SBCS     R1,R1,R3
        BCC      _Div_64x64_U_Lab1
        MOV      R0,R2
        MOV      R1,R3
        MOV      R2,R4
        BL.W     __Shl_64
        SUBS     R5,R5,R0
        SBCS     R6,R6,R1
        MOV      R2,R4
        MOVS     R0,#0x01
        MOVS     R1,#0x00
        BL.W     __Shl_64
        LDR      R2,[SP,#0x00]
        ADDS     R7,R7,R0
        ADCS     R2,R2,R1
        STR      R2,[SP,#0x00]
    _Div_64x64_U_Lab1:
        MOV      R0,R4
        SUBS     R4,R4,#1
        CMP      R0,#0x00
        BGT      _Div_64x64_U_Lab2
        LDR      R1,[SP,#0x00]
        MOV      R0,R7
        MOV      R2,R5
        MOV      R3,R6
        ADD      SP,SP,#0x1C

    _Div_64x64_U_Lab_end:
        POP      (R4-R7)
    }
}

void _Div_64x64_S( void )
{
    asm {
        PUSH     (R4-R7)

        MOV      R4, R2
        ORRS     R4, R3
        BNE      _Div_64x64_S_Lab_5

        MOV      R2, R0
        MOVS     R3, R1
        BPL _Div_64x64_S_Lab_6

        LDR    R1, =0x80000000
        LDR    R0, =0
        B      _Div_64x64_S_Lab_end

    _Div_64x64_S_Lab_6:
        LDR    R1, =0x7FFFFFFF
        LDR    R0, =0xFFFFFFFF
        B      _Div_64x64_S_Lab_end

    _Div_64x64_S_Lab_5:
        MOVS     R4,#0x00
        MOV      R5,R4
        CMP      R1,R4
        BGE      _Div_64x64_S_Lab_1
        MOV      R6,R1
        MOVS     R4,#0x01
        MOVS     R1,#0x00
        RSBS     R0,R0,#0
        SBCS     R1,R1,R6
    _Div_64x64_S_Lab_1:
        CMP      R3,#0x00
        BGE      _Div_64x64_S_Lab_2
        MOV      R6,R3
        MOVS     R3,#0x00
        RSBS     R2,R2,#0
        MOVS     R5,#0x01
        SBCS     R3,R3,R6
    _Div_64x64_S_Lab_2:
        BL.W     __Div_64x64_U
        MOV      R12,R1
        MOV      R6,R2
        MOV      R7,R3
        CMP      R4,R5
        BEQ      _Div_64x64_S_Lab_3
        MOVS     R5,#0x00
        RSBS     R0,R0,#0
        SBCS     R5,R5,R1
        MOV      R12,R5
    _Div_64x64_S_Lab_3:
        CMP      R4,#0x00
        BEQ      _Div_64x64_S_Lab_4
        MOVS     R7,#0x00
        RSBS     R6,R2,#0
        SBCS     R7,R7,R3
    _Div_64x64_S_Lab_4:
        MOV      R1,R12
        MOV      R2,R6
        MOV      R3,R7

    _Div_64x64_S_Lab_end:
        POP      (R4-R7)
    }
}

void _Div_32x32_U( void )
{
    asm {
        PUSH     (R1, R3-R5)

        MOVS     R4, R2
        BNE      _Div_32x32_U_Lab_3

        MOV      R2, R0
        LDR      R0, =0xFFFFFFFF
        B        _Div_32x32_U_Lab_end

    _Div_32x32_U_Lab_3:
        MOV      R3,R2
        MOV      R2,R0
        MOVS     R0,#0x00
        MOVS     R1,#0x20
        MOVS     R4,#0x01
        B        _Div_32x32_U_Lab_1

    _Div_32x32_U_Lab_2:
        MOV      R5,R2
        LSRS     R5,R5,R1
        CMP      R5,R3
        BCC      _Div_32x32_U_Lab_1
        MOV      R5,R3
        LSLS     R5,R5,R1
        SUBS     R2,R2,R5
        MOV      R5,R4
        LSLS     R5,R5,R1
        ADDS     R0,R0,R5

    _Div_32x32_U_Lab_1:
        MOV      R5,R1
        SUBS     R1,R1,#1
        CMP      R5,#0x00
        BGT      _Div_32x32_U_Lab_2

    _Div_32x32_U_Lab_end:
        POP      (R1, R3-R5)
    }
}

void _Div_32x32_S( void )
{
    asm {
        PUSH     (R1, R3-R6)

        MOVS     R4, R2
        BNE      _Div_32x32_S_Lab_5

        MOVS     R2, R0
        BPL _Div_32x32_S_Lab_6

        LDR    R0, =0x80000000
        B      _Div_32x32_S_Lab_4

    _Div_32x32_S_Lab_6:
        LDR    R0, =0x7FFFFFFF
        B      _Div_32x32_S_Lab_4

    _Div_32x32_S_Lab_5:
        MOVS     R4,#0x00
        MOV      R5,R4
        CMP      R0,#0x00
        BGE      _Div_32x32_S_Lab_1
        MOVS     R4,#0x01
        RSBS     R0,R0,#0

    _Div_32x32_S_Lab_1:
        CMP      R2,#0x00
        BGE      _Div_32x32_S_Lab_2
        MOVS     R5,#0x01
        RSBS     R2,R2,#0

    _Div_32x32_S_Lab_2:
        BL.W     __Div_32x32_U
        CMP      R4,R5
        BEQ      _Div_32x32_S_Lab_3
        RSBS     R0,R0,#0

    _Div_32x32_S_Lab_3:
        CMP      R4,#0x00
        BEQ      _Div_32x32_S_Lab_4
        RSBS     R2,R2,#0
    _Div_32x32_S_Lab_4:
        POP      (R1, R3-R6)
    }
}
