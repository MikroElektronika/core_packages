void ____DoIFC()
{
    PCLATH = R1;
    PCL = R0;
}

void __FillZeros()
{
    while ( FSR0PTR > FSR1PTR )
        *( char * )FSR1++ = 0;
}

void __CA2A()
{
    asm {
    L_CA2A_Loop:
        MOVIW INDF0++
        MOVWI INDF1++
        DECF  R0, 1
        BTFSS STATUS,Z
        GOTO  L_CA2A_Loop
    }
}

void __CA2AW()
{
    asm {
    L_CA2AW_Loop:
        MOVIW INDF0++
        MOVWI INDF1++
        DECF  R0, 1
        BTFSS STATUS,Z
        GOTO  L_CA2AW_Loop
        DECF  R1, 1
        BTFSS STATUS,Z
        GOTO  L_CA2AW_Loop
    }
}

void __CS2S()
{
    asm {
    L_CS2S_Loop:
        MOVIW INDF0++
        BTFSC STATUS, Z
        GOTO  L_CS2S_End
        MOVWI INDF1++
        GOTO  L_CS2S_Loop
    L_CS2S_End:
    }
}

void __FZinS()
{
    asm {
    L_FZinS_Loop:
        MOVIW INDF1++
        BTFSS STATUS, Z
        GOTO  L_FZinS_Loop
    L_FZinS_End:
        MOVIW --INDF1
    }
}

void __CC2D()
{
    asm {
    _CC2D_Loop1:
        MOVIW INDF0++
        MOVWI INDF1++
        DECF R0, 1
        BTFSS STATUS,Z
        GOTO _CC2D_Loop1
    }
}

void __CC2DW()
{
    asm {
    _CC2DL_Loop1:
        MOVIW INDF0++
        MOVWI INDF1++
        DECF   R0, 1
        BTFSS STATUS,Z
        GOTO _CC2DL_Loop1
        DECF   R1, 1
        BTFSS STATUS,Z
        GOTO _CC2DL_Loop1
    }
}

char Swap( char input )
{
    R0 = input;
    asm swapf R0, F
    return R0;
}
