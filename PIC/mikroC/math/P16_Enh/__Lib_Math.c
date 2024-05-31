/* ---------------------------GLOBAL VARIABLES------------------------------- */

char __math_tempb;

/* ----------------------------PRIVATE MACROS-------------------------------- */

#define math_main_global_Temp_1        math_main_global_RemainderHi_1
#define math_main_global_Temp_2        math_main_global_RemainderHi_2
#define math_main_global_SSIGN         math_main_global_LoopCount

#define math_main_global_Remainder_1   math_main_global_XHr_1
#define math_main_global_Remainder_2   math_main_global_XHr_2
#define math_main_global_RemainderHi_1 math_main_global_XHs_1
#define math_main_global_RemainderHi_2 math_main_global_XHs_2

#define math_main_global_LowerWord_1   math_main_global_XHr_1
#define math_main_global_LowerWord_2   math_main_global_XHr_2
#define math_main_global_UpperWord_1   math_main_global_XHs_1
#define math_main_global_UpperWord_2   math_main_global_XHs_2

#define math_main_global_X_1           R0
#define math_main_global_X_2           R1
#define math_main_global_XHi_1         R2
#define math_main_global_XHi_2         R3

#define math_main_global_Y_1           R4
#define math_main_global_Y_2           R5
#define math_main_global_YHi_1         R6
#define math_main_global_YHi_2         R7

#define math_main_global_XHr_1         R8
#define math_main_global_XHr_2         R9
#define math_main_global_XHs_1         R10
#define math_main_global_XHs_2         R11

#define math_main_global_LoopCount     R12
#define math_main_global_Sign          R13
#define math_main_global_TEMPB    ___math_tempb
#define math_main_global_TEMP8x8s R2

void Mul_8X8_U()
{
    asm {
        MOVLB 0
        MOVF  R0, W
        MOVWF  R1
        CLRF  R0
        MOVLW 8
        MOVWF  R12
        MOVF  R1, W
        RRF  R4, F
        BTFSC STATUS, C
        GOTO $+5
        DECFSZ  R12, F
        GOTO $-4
        CLRF  R1
        RETLW 0
        BCF STATUS, C
        GOTO $+4
        RRF  R4, F
        BTFSC STATUS, C
        ADDWF  R1, F
        RRF  R1, F
        RRF  R0, F
        DECFSZ  R12, F
        GOTO $-6
    }
    return;
}

void Mul_16X16_U()
{
    asm {
        MOVLB 0
        CLRF   math_main_global_UpperWord_2
        CLRF   math_main_global_UpperWord_1
        CLRF   math_main_global_LowerWord_2
        MOVLW  128
        MOVWF  math_main_global_LowerWord_1
        RRF    math_main_global_X_2,F
        RRF    math_main_global_X_1,F
        BTFSS  STATUS,C
        GOTO   $+10
        MOVF   math_main_global_Y_1,W
        ADDWF  math_main_global_LowerWord_2,F
        MOVF   math_main_global_Y_2,W
        BTFSC  STATUS,C
        INCFSZ math_main_global_Y_2,W
        ADDWF  math_main_global_UpperWord_1,F
        BTFSC  STATUS,C
        INCF   math_main_global_UpperWord_2,F
        BCF    STATUS,C
        BTFSS  math_main_global_X_1,7
        GOTO   $+7
        MOVF   math_main_global_Y_1,W
        ADDWF  math_main_global_UpperWord_1,F
        MOVF   math_main_global_Y_2,W
        BTFSC  STATUS,C
        INCFSZ math_main_global_Y_2,W
        ADDWF  math_main_global_UpperWord_2,F
        RRF    math_main_global_UpperWord_2,F
        RRF    math_main_global_UpperWord_1,F
        RRF    math_main_global_LowerWord_2,F
        RRF    math_main_global_LowerWord_1,F
        BTFSS  STATUS,C
        GOTO   $-26
        MOVF   math_main_global_UpperWord_2,W
        MOVWF  math_main_global_XHi_2
        MOVF   math_main_global_UpperWord_1,W
        MOVWF  math_main_global_XHi_1
        MOVF   math_main_global_LowerWord_2,W
        MOVWF  math_main_global_X_2
        MOVF   math_main_global_LowerWord_1,W
        MOVWF  math_main_global_X_1
    }
}

void Div_8X8_U()
{
    asm {
        MOVLB 0
        CLRF  math_main_global_Remainder_1
        MOVLW  8
        MOVWF  math_main_global_LoopCount
        RLF    math_main_global_X_1,W
        RLF    math_main_global_Remainder_1,F
        MOVF   math_main_global_Y_1,W
        SUBWF  math_main_global_Remainder_1,F
        BTFSC  STATUS,C
        GOTO   $+3
        ADDWF  math_main_global_Remainder_1,F
        BCF    STATUS,C
        RLF    math_main_global_X_1,F
        DECFSZ math_main_global_LoopCount,F
        GOTO   $-10
    }
}

void Div_16X16_U()
{
    asm {
        MOVLB 0
        CLRF   math_main_global_Remainder_1
        CLRF   math_main_global_Remainder_2
        MOVLW  16
        MOVWF  math_main_global_LoopCount
        RLF    math_main_global_X_2,W
        RLF    math_main_global_Remainder_1,F
        RLF    math_main_global_Remainder_2,F
        MOVF   math_main_global_Y_1,W
        SUBWF  math_main_global_Remainder_1,F
        MOVF   math_main_global_Y_2,W
        BTFSS  STATUS,C
        INCFSZ math_main_global_Y_2,W
        SUBWF  math_main_global_Remainder_2,F
        BTFSC  STATUS,C
        GOTO   $+8
        MOVF   math_main_global_Y_1,W
        ADDWF  math_main_global_Remainder_1,F
        MOVF   math_main_global_Y_2,W
        BTFSC  STATUS,C
        INCFSZ math_main_global_Y_2,W
        ADDWF  math_main_global_Remainder_2,F
        BCF    STATUS,C
        RLF    math_main_global_X_1,F
        RLF    math_main_global_X_2,F
        DECFSZ math_main_global_LoopCount,F
        GOTO   $-21
    }
}

void Mul_8X8_S()
{
    asm {
        MOVLB 0
        MOVF   R0, W
        MOVWF  R1
        CLRF   R0
        CLRF   math_main_global_Sign
        MOVF   math_main_global_X_2,W
        BTFSC  STATUS,Z
        RETLW  0

        XORWF  math_main_global_Y_1,W
        MOVWF  math_main_global_TEMP8x8s
        BTFSC  math_main_global_TEMP8x8s,7
        COMF   math_main_global_Sign,F

        BTFSS  math_main_global_Y_1,7
        GOTO   $+7
        COMF   math_main_global_Y_1,F
        INCF   math_main_global_Y_1,F
        COMF   math_main_global_X_2,F
        INCF   math_main_global_X_2,F

        BTFSC  math_main_global_Y_1,7
        GOTO   $+23

        MOVLW  7
        MOVWF  math_main_global_LoopCount
        MOVF   math_main_global_X_2,W

        RRF    math_main_global_Y_1,F
        BTFSC  STATUS,C
        GOTO   $+8
        DECFSZ math_main_global_LoopCount,F
        GOTO   $-4

        CLRF   math_main_global_X_2
        RETLW  0

        RRF    math_main_global_Y_1,F
        BTFSC  STATUS,C
        ADDWF  math_main_global_X_2,F
        RLF    math_main_global_Sign,F
        RRF    math_main_global_X_2,F
        RRF    math_main_global_X_1,F
        DECFSZ math_main_global_LoopCount,F
        GOTO   $-7

        RLF    math_main_global_Sign,F
        RRF    math_main_global_X_2,F
        RRF    math_main_global_X_1,F

        RETLW  0
        RLF    math_main_global_Sign,W
        RRF    math_main_global_X_2,F
        RRF    math_main_global_X_1,F

        RETLW  0
    }
}

void Mul_16X16_S()
{
    asm {
        MOVLB 0
        CLRF   math_main_global_UpperWord_2
        CLRF   math_main_global_UpperWord_1
        CLRF   math_main_global_LowerWord_2
        MOVLW  128
        MOVWF  math_main_global_LowerWord_1

        CLRF   math_main_global_Sign

        BTFSS  math_main_global_X_2,7
        GOTO   $+7
        COMF   math_main_global_X_2,F
        COMF   math_main_global_X_1,F
        INCF   math_main_global_X_1,F
        BTFSC  STATUS,Z
        INCF   math_main_global_X_2,F
        INCF   math_main_global_Sign,F

        BTFSS  math_main_global_Y_2,7
        GOTO   $+7
        COMF   math_main_global_Y_2,F
        COMF   math_main_global_Y_1,F
        INCF   math_main_global_Y_1,F
        BTFSC  STATUS,Z
        INCF   math_main_global_Y_2,F
        INCF   math_main_global_Sign,F

        RRF    math_main_global_X_2,F
        RRF    math_main_global_X_1,F

        BTFSS  STATUS,C
        GOTO   $+10
        MOVF   math_main_global_Y_1,W
        ADDWF  math_main_global_LowerWord_2,F

        MOVF   math_main_global_Y_2,W
        BTFSC  STATUS,C
        INCFSZ math_main_global_Y_2,W
        ADDWF  math_main_global_UpperWord_1,F
        BTFSC  STATUS,C
        INCF   math_main_global_UpperWord_2,F
        BCF    STATUS,C

        BTFSS  math_main_global_X_1,7
        GOTO   $+7
        MOVF   math_main_global_Y_1,W
        ADDWF  math_main_global_UpperWord_1,F
        BTFSC  STATUS,C
        INCF   math_main_global_UpperWord_2,F
        MOVF   math_main_global_Y_2,W
        ADDWF  math_main_global_UpperWord_2,F

        RRF    math_main_global_UpperWord_2,F
        RRF    math_main_global_UpperWord_1,F
        RRF    math_main_global_LowerWord_2,F
        RRF    math_main_global_LowerWord_1,F

        BTFSS  STATUS,C
        GOTO   $-26
        BTFSS  math_main_global_Sign,0
        GOTO   $+12

        COMF   math_main_global_UpperWord_2,F
        COMF   math_main_global_UpperWord_1,F
        COMF   math_main_global_LowerWord_2,F
        COMF   math_main_global_LowerWord_1,F

        INCF   math_main_global_LowerWord_1,F
        BTFSC  STATUS,Z
        INCF   math_main_global_LowerWord_2,F
        BTFSC  STATUS,Z
        INCF   math_main_global_UpperWord_1,F
        BTFSC  STATUS,Z
        INCF   math_main_global_UpperWord_2,F

        MOVF   math_main_global_UpperWord_2,W
        MOVWF  math_main_global_XHi_2
        MOVF   math_main_global_UpperWord_1,W
        MOVWF  math_main_global_XHi_1
        MOVF   math_main_global_LowerWord_2,W
        MOVWF  math_main_global_X_2
        MOVF   math_main_global_LowerWord_1,W
        MOVWF  math_main_global_X_1

        nop
    }
}

void Div_16x16_S_L()
{
    asm {
        RLF    math_main_global_X_2,W
        RLF    math_main_global_Remainder_1,F
        RLF    math_main_global_Remainder_2,F
        MOVF   math_main_global_Y_1,W
        SUBWF  math_main_global_Remainder_1,F
        MOVF   math_main_global_Y_2,W
        BTFSS  STATUS,C
        INCFSZ math_main_global_Y_2,W
        SUBWF  math_main_global_Remainder_2,F
        RLF    math_main_global_X_1,F
        RLF    math_main_global_X_2,F

        MOVLW  15
        MOVWF  math_main_global_LoopCount

        RLF    math_main_global_X_2,W
        RLF    math_main_global_Remainder_1,F
        RLF    math_main_global_Remainder_2,F
        MOVF   math_main_global_Y_1,W

        BTFSS  math_main_global_X_1,0
        GOTO   $+7
        SUBWF  math_main_global_Remainder_1,F
        MOVF   math_main_global_Y_2,W
        BTFSS  STATUS,C
        INCFSZ math_main_global_Y_2,W
        SUBWF  math_main_global_Remainder_2,F
        GOTO   $+6

        ADDWF  math_main_global_Remainder_1,F
        MOVF   math_main_global_Y_2,W
        BTFSC  STATUS,C
        INCFSZ math_main_global_Y_2,W
        ADDWF  math_main_global_Remainder_2,F

        RLF    math_main_global_X_1,F
        RLF    math_main_global_X_2,F

        DECFSZ math_main_global_LoopCount,F
        GOTO   $-20

        BTFSC  math_main_global_X_1,0
        GOTO   $+7
        MOVF   math_main_global_Y_1,W
        ADDWF  math_main_global_Remainder_1,F
        MOVF   math_main_global_Y_2,W
        BTFSC  STATUS,C
        INCFSZ math_main_global_Y_2,W
        ADDWF  math_main_global_Remainder_2,F
        NOP
    }
}

void Div_16x16_S()
{
    if ( R4 == 0 )
        if ( R5 == 0 ) {
            R0 = 0xFF;
            R1 = 0x7F;
            return;
        }

    asm {
        MOVLB 0
        CLRF   math_main_global_Sign
        CLRF   math_main_global_Remainder_2
        CLRF   math_main_global_Remainder_1
        MOVF   math_main_global_X_2,W
        IORWF  math_main_global_X_1,W
        BTFSC  STATUS,Z
        RETLW  0

        MOVF   math_main_global_X_2,W
        XORWF  math_main_global_Y_2,W
        MOVWF  math_main_global_Temp_1
        BTFSC  math_main_global_Temp_1,7
        COMF   math_main_global_Sign,F

        CLRF   math_main_global_Temp_2

        BTFSS  math_main_global_Y_2,7
        GOTO   $+6

        COMF   math_main_global_Y_1,F
        COMF   math_main_global_Y_2,F
        INCF   math_main_global_Y_1,F
        BTFSC  STATUS,Z
        INCF   math_main_global_Y_2,F

        BTFSS  math_main_global_X_2,7
        GOTO   $+6

        COMF   math_main_global_X_1,F
        COMF   math_main_global_X_2,F
        INCF   math_main_global_X_1,F
        BTFSC  STATUS,Z
        INCF   math_main_global_X_2,F

        MOVF   math_main_global_X_2,W
        IORWF  math_main_global_Y_2,W
        MOVWF  math_main_global_Temp_1
        BTFSC  math_main_global_Temp_1,7
        GOTO   $+17
    }
    Div_16x16_S_L();
    asm {
        BTFSC  math_main_global_Temp_2,0
        GOTO   $+33

        BTFSS  math_main_global_Sign,7
        RETLW  0

        COMF   math_main_global_X_1,F
        COMF   math_main_global_X_2,F
        INCF   math_main_global_X_1,F
        BTFSC  STATUS,Z
        INCF   math_main_global_X_2,F

        COMF   math_main_global_Remainder_1,F
        COMF   math_main_global_Remainder_2,F
        INCF   math_main_global_Remainder_1,F
        BTFSC  STATUS,Z
        INCF   math_main_global_Remainder_2,F

        RETLW  0

        BTFSS  math_main_global_Y_2,7
        GOTO   $+14
        BTFSC  math_main_global_X_2,7
        GOTO   $+8
        MOVF   math_main_global_X_2,W
        MOVWF  math_main_global_Remainder_2
        MOVF   math_main_global_X_1,W
        MOVWF  math_main_global_Remainder_1
        CLRF   math_main_global_X_2
        CLRF   math_main_global_X_1
        GOTO   $-23
        CLRF   math_main_global_X_2
        CLRF   math_main_global_X_1
        INCF   math_main_global_X_1,F
        RETLW  0

        COMF   math_main_global_X_2,F
        COMF   math_main_global_X_1,F
        INCF   math_main_global_Temp_2,F
        GOTO   $-34

        INCF   math_main_global_Remainder_1,F
        BTFSC  STATUS,Z
        INCF   math_main_global_Remainder_2,F
        MOVF   math_main_global_Y_1,W
        SUBWF  math_main_global_Remainder_1,W
        BTFSS  STATUS,Z
        GOTO   $-38
        MOVF   math_main_global_Y_2,W
        SUBWF  math_main_global_Remainder_2,W
        BTFSS  STATUS,Z
        GOTO   $-42
        CLRF   math_main_global_Remainder_2
        CLRF   math_main_global_Remainder_1
        INCF   math_main_global_X_1,F
        BTFSC  STATUS,Z
        INCF   math_main_global_X_2,F
        BTFSS  math_main_global_X_2,7
        GOTO   $-49
        NOP
        RETLW  255
    }
}

void Div_8X8_S()
{
    asm {
        MOVLB 0
        CLRF math_main_global_Sign
        CLRF math_main_global_Remainder_1
        MOVF math_main_global_X_1,W
        BTFSC STATUS,Z
        RETLW 0x00
        XORWF math_main_global_Y_1,W
        MOVWF math_main_global_Temp_1
        BTFSC math_main_global_Temp_1,7
        COMF math_main_global_Sign,F
        CLRF math_main_global_Temp_2
        BTFSS math_main_global_Y_1,7
        GOTO $+3
        COMF math_main_global_Y_1, F
        INCF math_main_global_Y_1, F
        BTFSS math_main_global_X_1,7
        GOTO $+3
        COMF math_main_global_X_1, F
        INCF math_main_global_X_1, F
        MOVF math_main_global_X_1,W
        IORWF math_main_global_Y_1,W
        MOVWF math_main_global_Temp_1
        BTFSC math_main_global_Temp_1,7
        GOTO $+32
        MOVF math_main_global_Y_1,W
        SUBWF math_main_global_Remainder_1, F
        RLF math_main_global_X_1, F
        RLF math_main_global_X_1,W
        RLF math_main_global_Remainder_1, F
        MOVF math_main_global_Y_1,W
        ADDWF math_main_global_Remainder_1, F
        RLF math_main_global_X_1, F
        MOVLW 6
        MOVWF math_main_global_LoopCount
        RLF math_main_global_X_1,W
        RLF math_main_global_Remainder_1, F
        MOVF math_main_global_Y_1,W
        BTFSC math_main_global_X_1,0
        SUBWF math_main_global_Remainder_1, F
        BTFSS math_main_global_X_1,0
        ADDWF math_main_global_Remainder_1, F
        RLF math_main_global_X_1, F
        DECFSZ math_main_global_LoopCount, F
        GOTO $-9
        BTFSS math_main_global_X_1,0
        ADDWF math_main_global_Remainder_1, F
        BTFSC math_main_global_Temp_2,0
        GOTO $+22
        BTFSS math_main_global_Sign,7
        RETLW 0x00
        COMF math_main_global_X_1, F
        INCF math_main_global_X_1, F
        COMF math_main_global_Remainder_1, F
        INCF math_main_global_Remainder_1, F
        RETLW 0x00
        BTFSS math_main_global_Y_1,7
        GOTO $+10
        BTFSC math_main_global_X_1,7
        GOTO $+5
        MOVF math_main_global_X_1,W
        MOVWF math_main_global_Remainder_1
        CLRF math_main_global_X_1
        GOTO $-14
        CLRF math_main_global_X_1
        INCF math_main_global_X_1,F
        RETLW 0x00
        COMF math_main_global_X_1,F
        INCF math_main_global_Temp_2,F
        GOTO $-44
        INCF math_main_global_Remainder_1,F
        MOVF math_main_global_Y_1,W
        SUBWF math_main_global_Remainder_1,W
        BTFSS STATUS,Z
        GOTO $-25
        CLRF math_main_global_Remainder_1
        INCF math_main_global_X_1,F
        BTFSS math_main_global_X_1,7
        GOTO $-29
        RETLW 0xFF
    }
}

void SDIV3232L()
{
    asm {
        MOVF            math_main_global_Y_1,W
        SUBWF           math_main_global_Remainder_1, F
        MOVF            math_main_global_Y_2,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_Y_2,W
        SUBWF           math_main_global_Remainder_2, F
        MOVF            math_main_global_YHi_1,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_YHi_1,W
        SUBWF           math_main_global_RemainderHi_1, F
        MOVF            math_main_global_YHi_2,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_YHi_2,W
        SUBWF           math_main_global_RemainderHi_2, F
        RLF             math_main_global_XHi_2, F

        MOVLW           7
        MOVWF           math_main_global_LoopCount

    LOOPS3232A:
        RLF             math_main_global_XHi_2,W
        RLF             math_main_global_Remainder_1, F
        RLF             math_main_global_Remainder_2, F
        RLF             math_main_global_RemainderHi_1, F
        RLF             math_main_global_RemainderHi_2, F
        MOVF            math_main_global_Y_1,W
        BTFSS           math_main_global_XHi_2,0
        GOTO            SADD22LA

        SUBWF           math_main_global_Remainder_1, F
        MOVF            math_main_global_Y_2,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_Y_2,W
        SUBWF           math_main_global_Remainder_2, F
        MOVF            math_main_global_YHi_1,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_YHi_1,W
        SUBWF           math_main_global_RemainderHi_1, F
        MOVF            math_main_global_YHi_2,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_YHi_2,W
        SUBWF           math_main_global_RemainderHi_2, F
        GOTO            SOK22LA

    SADD22LA:
        ADDWF           math_main_global_Remainder_1, F
        MOVF            math_main_global_Y_2,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_Y_2,W
        ADDWF           math_main_global_Remainder_2, F
        MOVF            math_main_global_YHi_1,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_YHi_1,W
        ADDWF           math_main_global_RemainderHi_1, F
        MOVF            math_main_global_YHi_2,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_YHi_2,W
        ADDWF           math_main_global_RemainderHi_2, F

    SOK22LA:
        RLF             math_main_global_XHi_2, F

        DECFSZ          math_main_global_LoopCount, F
        GOTO            LOOPS3232A

        RLF             math_main_global_XHi_1,W
        RLF             math_main_global_Remainder_1, F
        RLF             math_main_global_Remainder_2, F
        RLF             math_main_global_RemainderHi_1, F
        RLF             math_main_global_RemainderHi_2, F
        MOVF            math_main_global_Y_1,W
        BTFSS           math_main_global_XHi_2,0
        GOTO            SADD22L8

        SUBWF           math_main_global_Remainder_1, F
        MOVF            math_main_global_Y_2,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_Y_2,W
        SUBWF           math_main_global_Remainder_2, F
        MOVF            math_main_global_YHi_1,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_YHi_1,W
        SUBWF           math_main_global_RemainderHi_1, F
        MOVF            math_main_global_YHi_2,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_YHi_2,W
        SUBWF           math_main_global_RemainderHi_2, F
        GOTO            SOK22L8

    SADD22L8:
        ADDWF           math_main_global_Remainder_1, F
        MOVF            math_main_global_Y_2,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_Y_2,W
        ADDWF           math_main_global_Remainder_2, F
        MOVF            math_main_global_YHi_1,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_YHi_1,W
        ADDWF           math_main_global_RemainderHi_1, F
        MOVF            math_main_global_YHi_2,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_YHi_2,W
        ADDWF           math_main_global_RemainderHi_2, F

    SOK22L8:
        RLF             math_main_global_XHi_1, F

        MOVLW           7
        MOVWF           math_main_global_LoopCount

    LOOPS3232B:
        RLF             math_main_global_XHi_1,W
        RLF             math_main_global_Remainder_1, F
        RLF             math_main_global_Remainder_2, F
        RLF             math_main_global_RemainderHi_1, F
        RLF             math_main_global_RemainderHi_2, F
        MOVF            math_main_global_Y_1,W
        BTFSS           math_main_global_XHi_1,0
        GOTO            SADD22LB

        SUBWF           math_main_global_Remainder_1, F
        MOVF            math_main_global_Y_2,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_Y_2,W
        SUBWF           math_main_global_Remainder_2, F
        MOVF            math_main_global_YHi_1,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_YHi_1,W
        SUBWF           math_main_global_RemainderHi_1, F
        MOVF            math_main_global_YHi_2,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_YHi_2,W
        SUBWF           math_main_global_RemainderHi_2, F
        GOTO            SOK22LB

    SADD22LB:
        ADDWF           math_main_global_Remainder_1, F
        MOVF            math_main_global_Y_2,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_Y_2,W
        ADDWF           math_main_global_Remainder_2, F
        MOVF            math_main_global_YHi_1,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_YHi_1,W
        ADDWF           math_main_global_RemainderHi_1, F
        MOVF            math_main_global_YHi_2,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_YHi_2,W
        ADDWF           math_main_global_RemainderHi_2, F

    SOK22LB:
        RLF             math_main_global_XHi_1, F

        DECFSZ          math_main_global_LoopCount, F
        GOTO            LOOPS3232B

        RLF             math_main_global_X_2,W
        RLF             math_main_global_Remainder_1, F
        RLF             math_main_global_Remainder_2, F
        RLF             math_main_global_RemainderHi_1, F
        RLF             math_main_global_RemainderHi_2, F
        MOVF            math_main_global_Y_1,W
        BTFSS           math_main_global_XHi_1,0
        GOTO            SADD22L16

        SUBWF           math_main_global_Remainder_1, F
        MOVF            math_main_global_Y_2,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_Y_2,W
        SUBWF           math_main_global_Remainder_2, F
        MOVF            math_main_global_YHi_1,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_YHi_1,W
        SUBWF           math_main_global_RemainderHi_1, F
        MOVF            math_main_global_YHi_2,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_YHi_2,W
        SUBWF           math_main_global_RemainderHi_2, F
        GOTO            SOK22L16

    SADD22L16:
        ADDWF           math_main_global_Remainder_1, F
        MOVF            math_main_global_Y_2,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_Y_2,W
        ADDWF           math_main_global_Remainder_2, F
        MOVF            math_main_global_YHi_1,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_YHi_1,W
        ADDWF           math_main_global_RemainderHi_1, F
        MOVF            math_main_global_YHi_2,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_YHi_2,W
        ADDWF           math_main_global_RemainderHi_2, F

    SOK22L16:
        RLF             math_main_global_X_2, F

        MOVLW           7
        MOVWF           math_main_global_LoopCount

    LOOPS3232C:
        RLF             math_main_global_X_2,W
        RLF             math_main_global_Remainder_1, F
        RLF             math_main_global_Remainder_2, F
        RLF             math_main_global_RemainderHi_1, F
        RLF             math_main_global_RemainderHi_2, F
        MOVF            math_main_global_Y_1,W
        BTFSS           math_main_global_X_2,0
        GOTO            SADD22LC

        SUBWF           math_main_global_Remainder_1, F
        MOVF            math_main_global_Y_2,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_Y_2,W
        SUBWF           math_main_global_Remainder_2, F
        MOVF            math_main_global_YHi_1,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_YHi_1,W
        SUBWF           math_main_global_RemainderHi_1, F
        MOVF            math_main_global_YHi_2,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_YHi_2,W
        SUBWF           math_main_global_RemainderHi_2, F
        GOTO            SOK22LC

    SADD22LC:
        ADDWF           math_main_global_Remainder_1, F
        MOVF            math_main_global_Y_2,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_Y_2,W
        ADDWF           math_main_global_Remainder_2, F
        MOVF            math_main_global_YHi_1,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_YHi_1,W
        ADDWF           math_main_global_RemainderHi_1, F
        MOVF            math_main_global_YHi_2,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_YHi_2,W
        ADDWF           math_main_global_RemainderHi_2, F

    SOK22LC:
        RLF             math_main_global_X_2, F

        DECFSZ          math_main_global_LoopCount, F
        GOTO            LOOPS3232C

        RLF             math_main_global_X_1,W
        RLF             math_main_global_Remainder_1, F
        RLF             math_main_global_Remainder_2, F
        RLF             math_main_global_RemainderHi_1, F
        RLF             math_main_global_RemainderHi_2, F
        MOVF            math_main_global_Y_1,W
        BTFSS           math_main_global_X_2,0
        GOTO            SADD22L24

        SUBWF           math_main_global_Remainder_1, F
        MOVF            math_main_global_Y_2,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_Y_2,W
        SUBWF           math_main_global_Remainder_2, F
        MOVF            math_main_global_YHi_1,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_YHi_1,W
        SUBWF           math_main_global_RemainderHi_1, F
        MOVF            math_main_global_YHi_2,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_YHi_2,W
        SUBWF           math_main_global_RemainderHi_2, F
        GOTO            SOK22L24

    SADD22L24:
        ADDWF           math_main_global_Remainder_1, F
        MOVF            math_main_global_Y_2,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_Y_2,W
        ADDWF           math_main_global_Remainder_2, F
        MOVF            math_main_global_YHi_1,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_YHi_1,W
        ADDWF           math_main_global_RemainderHi_1, F
        MOVF            math_main_global_YHi_2,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_YHi_2,W
        ADDWF           math_main_global_RemainderHi_2, F

    SOK22L24:
        RLF             math_main_global_X_1, F

        MOVLW           7
        MOVWF           math_main_global_LoopCount

    LOOPS3232D:
        RLF             math_main_global_X_1,W
        RLF             math_main_global_Remainder_1, F
        RLF             math_main_global_Remainder_2, F
        RLF             math_main_global_RemainderHi_1, F
        RLF             math_main_global_RemainderHi_2, F
        MOVF            math_main_global_Y_1,W
        BTFSS           math_main_global_X_1,0
        GOTO            SADD22LD

        SUBWF           math_main_global_Remainder_1, F
        MOVF            math_main_global_Y_2,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_Y_2,W
        SUBWF           math_main_global_Remainder_2, F
        MOVF            math_main_global_YHi_1,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_YHi_1,W
        SUBWF           math_main_global_RemainderHi_1, F
        MOVF            math_main_global_YHi_2,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_YHi_2,W
        SUBWF           math_main_global_RemainderHi_2, F
        GOTO            SOK22LD

    SADD22LD:
        ADDWF           math_main_global_Remainder_1, F
        MOVF            math_main_global_Y_2,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_Y_2,W
        ADDWF           math_main_global_Remainder_2, F
        MOVF            math_main_global_YHi_1,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_YHi_1,W
        ADDWF           math_main_global_RemainderHi_1, F
        MOVF            math_main_global_YHi_2,W
        BTFSC           STATUS,C

        INCFSZ          math_main_global_YHi_2,W
        ADDWF           math_main_global_RemainderHi_2, F

    SOK22LD:
        RLF             math_main_global_X_1, F

        DECFSZ          math_main_global_LoopCount, F
        GOTO            LOOPS3232D

        BTFSC           math_main_global_X_1,0
        GOTO            SOK22L
        MOVF            math_main_global_Y_1,W
        ADDWF           math_main_global_Remainder_1, F
        MOVF            math_main_global_Y_2,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_Y_2,W
        ADDWF           math_main_global_Remainder_2, F
        MOVF            math_main_global_YHi_1,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_YHi_1,W
        ADDWF           math_main_global_RemainderHi_1, F
        MOVF            math_main_global_YHi_2,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_YHi_2,W
        ADDWF           math_main_global_RemainderHi_2, F
    SOK22L:

    }
}

void COMFREM()
{
    asm {
        COMF    math_main_global_RemainderHi_2,F
        COMF    math_main_global_RemainderHi_1,F
        COMF    math_main_global_Remainder_2,F
        COMF    math_main_global_Remainder_1,F
        INCF    math_main_global_Remainder_1,F
        BTFSC   STATUS,Z
        INCF    math_main_global_Remainder_2, F
        BTFSC   STATUS,Z
        INCF    math_main_global_RemainderHi_1, F
        BTFSC   STATUS,Z
        INCF    math_main_global_RemainderHi_2, F
    }
}

/**
 * @brief Performs division of two signed 32-bit integers.
 * @details This function divides the dividend by the divisor and stores the quotient and remainder.
 * @param[in,out] X         The dividend.
 * @param[in,out] XHi       The second part of the dividend.
 * @param[in]     Y         The divisor.
 * @param[in]     YHi       The second part of the divisor.
 * @param[out]    Quotient  The quotient.
 * @param[out]    Reminder  The remainder.
 * @result None.
 * @note The highest bit of SSIGN register is used as one bit counter for loops.
 */
void Div_32x32_S()
{
    __math_tempb = __math_tempb;

    if ( R4 == 0 )
        if ( R5 == 0 )
            if ( R6 == 0 )
                if ( R7 == 0 ) {
                    R0 = 0xFF;
                    R1 = 0xFF;
                    R2 = 0xFF;
                    R3 = 0x7F;
                    return;
                }

    asm {
        MOVLB 0
        FXD3232S:
        CLRF    math_main_global_SSIGN
        BTFSC   math_main_global_YHi_2,7
        INCF    math_main_global_SSIGN,F

        CLRF    math_main_global_Sign
        CLRF    math_main_global_RemainderHi_2
        CLRF    math_main_global_RemainderHi_1
        CLRF    math_main_global_Remainder_2
        CLRF    math_main_global_Remainder_1
        MOVF    math_main_global_XHi_2,W
        IORWF   math_main_global_XHi_1,W
        IORWF   math_main_global_X_2,W
        IORWF   math_main_global_X_1,W
        BTFSC   STATUS,Z
        GOTO    END_ALL
        MOVF    math_main_global_XHi_2,W
        XORWF   math_main_global_YHi_2,W
        MOVWF   math_main_global_TEMPB
        BTFSC   math_main_global_TEMPB,7
        COMF    math_main_global_Sign,F

        ;CLRF   math_main_global_TEMPB3

        BTFSS   math_main_global_YHi_2,7
        GOTO    CA3232S
        COMF    math_main_global_Y_1, F
        COMF    math_main_global_Y_2, F
        COMF    math_main_global_YHi_1, F
        COMF    math_main_global_YHi_2, F
        INCF    math_main_global_Y_1, F
        BTFSC   STATUS,Z
        INCF    math_main_global_Y_2, F
        BTFSC   STATUS,Z
        INCF    math_main_global_YHi_1, F
        BTFSC   STATUS,Z
        INCF    math_main_global_YHi_2, F

    CA3232S:
        BTFSS   math_main_global_XHi_2,7
        GOTO    C3232SX

        COMF    math_main_global_X_1, F
        COMF    math_main_global_X_2, F
        COMF    math_main_global_XHi_1, F
        COMF    math_main_global_XHi_2, F
        INCF    math_main_global_X_1, F
        BTFSC   STATUS,Z
        INCF    math_main_global_X_2, F
        BTFSC   STATUS,Z
        INCF    math_main_global_XHi_1, F
        BTFSC   STATUS,Z
        INCF    math_main_global_XHi_2, F

    C3232SX:
        MOVF    math_main_global_XHi_2,W
        IORWF   math_main_global_YHi_2,W
        MOVWF   math_main_global_TEMPB
        BTFSC   math_main_global_TEMPB,7
        GOTO    C3232SX1

    C3232S:
    }

    SDIV3232L();

    asm {
    C3232S2:
        BTFSC   math_main_global_SSIGN,7
        GOTO    C3232SX4
    C3232SOK:
        BTFSS   math_main_global_Sign,7
        GOTO    END_ALL
        COMF    math_main_global_X_1, F
        COMF    math_main_global_X_2, F
        COMF    math_main_global_XHi_1, F
        COMF    math_main_global_XHi_2, F
        INCF    math_main_global_X_1, F
        BTFSC   STATUS,Z
        INCF    math_main_global_X_2, F
        BTFSC   STATUS,Z
        INCF    math_main_global_XHi_1, F
        BTFSC   STATUS,Z
        INCF    math_main_global_XHi_2, F

        COMF    math_main_global_Remainder_1, F
        COMF    math_main_global_Remainder_2, F
        COMF    math_main_global_RemainderHi_1, F
        COMF    math_main_global_RemainderHi_2, F
        INCF    math_main_global_Remainder_1, F
        BTFSC   STATUS,Z
        INCF    math_main_global_Remainder_2, F
        BTFSC   STATUS,Z
        INCF    math_main_global_RemainderHi_1, F
        BTFSC   STATUS,Z
        INCF    math_main_global_RemainderHi_2, F

        GOTO    END_ALL
    C3232SX1:
        BTFSS   math_main_global_YHi_2,7
        GOTO    C3232SX3
        BTFSC   math_main_global_XHi_2,7
        GOTO    C3232SX2
        MOVF    math_main_global_XHi_2,W
        MOVWF   math_main_global_RemainderHi_2
        MOVF    math_main_global_XHi_1,W
        MOVWF   math_main_global_RemainderHi_1
        MOVF    math_main_global_X_2,W
        MOVWF   math_main_global_Remainder_2
        MOVF    math_main_global_X_1,W
        MOVWF   math_main_global_Remainder_1
        CLRF    math_main_global_XHi_2
        CLRF    math_main_global_XHi_1
        CLRF    math_main_global_X_2
        CLRF    math_main_global_X_1
        GOTO    C3232SOK
    C3232SX2:
        CLRF    math_main_global_XHi_2
        CLRF    math_main_global_XHi_1
        CLRF    math_main_global_X_2
        CLRF    math_main_global_X_1
        INCF    math_main_global_X_1,F
        RETLW   0x00

    C3232SX3:
        COMF    math_main_global_XHi_2,F
        COMF    math_main_global_XHi_1,F
        COMF    math_main_global_X_2,F
        COMF    math_main_global_X_1,F
        ;INCF   math_main_global_TEMPB3,F
        BSF     math_main_global_SSIGN,7

        GOTO    C3232S
    C3232SX4:
        INCF    math_main_global_Remainder_1,F
        BTFSC   STATUS,Z
        INCF    math_main_global_Remainder_2,F
        BTFSC   STATUS,Z
        INCF    math_main_global_RemainderHi_1,F
        BTFSC   STATUS,Z
        INCF    math_main_global_RemainderHi_2,F
        MOVF    math_main_global_Y_1,W
        SUBWF   math_main_global_Remainder_1,W
        BTFSS   STATUS,Z
        GOTO    C3232SOK
        MOVF    math_main_global_Y_2,W
        SUBWF   math_main_global_Remainder_2,W
        BTFSS   STATUS,Z
        GOTO    C3232SOK
        MOVF    math_main_global_YHi_1,W
        SUBWF   math_main_global_RemainderHi_1,W
        BTFSS   STATUS,Z
        GOTO    C3232SOK
        MOVF    math_main_global_YHi_2,W
        SUBWF   math_main_global_RemainderHi_2,W
        BTFSS   STATUS,Z
        GOTO    C3232SOK
        CLRF    math_main_global_RemainderHi_2
        CLRF    math_main_global_RemainderHi_1
        CLRF    math_main_global_Remainder_2
        CLRF    math_main_global_Remainder_1
        INCF    math_main_global_X_1,F
        BTFSC   STATUS,Z
        INCF    math_main_global_X_2,F
        BTFSC   STATUS,Z
        INCF    math_main_global_XHi_1,F
        BTFSC   STATUS,Z
        INCF    math_main_global_XHi_2,F
        BTFSS   math_main_global_XHi_2,7
        GOTO    C3232SOK
        CLRF    math_main_global_TEMPB
        BSF     math_main_global_TEMPB,4
        RETLW   0xFF
    END_ALL:
        CLRF    math_main_global_TEMPB
        BTFSS   math_main_global_SSIGN,0
        GOTO    avoid_comfrem
    }
    COMFREM();
    asm {
    avoid_comfrem:
        ADDLW   0x00
    }
}

/**
 * @brief Performs division of two unsigned 32-bit integers.
 * @details This function divides the dividend by the divisor and stores the quotient and remainder.
 * @param[in,out] X         The dividend.
 * @param[in,out] XHi       The second part of the dividend.
 * @param[in]     Y         The divisor.
 * @param[in]     YHi       The second part of the divisor.
 * @param[out]    Quotient  The quotient.
 * @param[out]    Reminder  The remainder.
 * @result None.
 */
void Div_32x32_U()
{
    __math_tempb = __math_tempb;
    asm {
        MOVLB 0
        CLRF            math_main_global_RemainderHi_2
        CLRF            math_main_global_RemainderHi_1
        CLRF            math_main_global_Remainder_2
        CLRF            math_main_global_Remainder_1

        CLRF            math_main_global_TEMPB

        RLF             math_main_global_XHi_2,W
        RLF             math_main_global_Remainder_1, F
        MOVF            math_main_global_Y_1,W
        SUBWF           math_main_global_Remainder_1, F
        MOVF            math_main_global_Y_2,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_Y_2,W
        SUBWF           math_main_global_Remainder_2, F
        MOVF            math_main_global_YHi_1,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_YHi_1,W
        SUBWF           math_main_global_RemainderHi_1, F
        MOVF            math_main_global_YHi_2,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_YHi_2,W
        SUBWF           math_main_global_RemainderHi_2, F

        CLRW
        BTFSS           STATUS,C
        MOVLW           1
        SUBWF           math_main_global_TEMPB, F
        RLF             math_main_global_XHi_2, F

        MOVLW           7
        MOVWF           math_main_global_LoopCount

    LOOPU3232A:
        RLF             math_main_global_XHi_2,W
        RLF             math_main_global_Remainder_1, F
        RLF             math_main_global_Remainder_2, F
        RLF             math_main_global_RemainderHi_1, F
        RLF             math_main_global_RemainderHi_2, F
        RLF             math_main_global_TEMPB, F
        MOVF            math_main_global_Y_1,W
        BTFSS           math_main_global_XHi_2,0
        GOTO            UADD22LA

        SUBWF           math_main_global_Remainder_1, F
        MOVF            math_main_global_Y_2,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_Y_2,W
        SUBWF           math_main_global_Remainder_2, F
        MOVF            math_main_global_YHi_1,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_YHi_1,W
        SUBWF           math_main_global_RemainderHi_1, F
        MOVF            math_main_global_YHi_2,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_YHi_2,W
        SUBWF           math_main_global_RemainderHi_2, F
        CLRW
        BTFSS           STATUS,C
        MOVLW           1
        SUBWF           math_main_global_TEMPB, F
        GOTO            UOK22LA

    UADD22LA:
        ADDWF           math_main_global_Remainder_1, F
        MOVF            math_main_global_Y_2,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_Y_2,W
        ADDWF           math_main_global_Remainder_2, F
        MOVF            math_main_global_YHi_1,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_YHi_1,W
        ADDWF           math_main_global_RemainderHi_1, F
        MOVF            math_main_global_YHi_2,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_YHi_2,W
        ADDWF           math_main_global_RemainderHi_2, F
        CLRW
        BTFSC           STATUS,C
        MOVLW           1
        ADDWF           math_main_global_TEMPB, F

    UOK22LA:
        RLF             math_main_global_XHi_2, F

        DECFSZ          math_main_global_LoopCount, F
        GOTO            LOOPU3232A

        RLF             math_main_global_XHi_1,W
        RLF             math_main_global_Remainder_1, F
        RLF             math_main_global_Remainder_2, F
        RLF             math_main_global_RemainderHi_1, F
        RLF             math_main_global_RemainderHi_2, F
        RLF             math_main_global_TEMPB, F
        MOVF            math_main_global_Y_1,W
        BTFSS           math_main_global_XHi_2,0
        GOTO            UADD22L8

        SUBWF           math_main_global_Remainder_1, F
        MOVF            math_main_global_Y_2,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_Y_2,W
        SUBWF           math_main_global_Remainder_2, F
        MOVF            math_main_global_YHi_1,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_YHi_1,W
        SUBWF           math_main_global_RemainderHi_1, F
        MOVF            math_main_global_YHi_2,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_YHi_2,W
        SUBWF           math_main_global_RemainderHi_2, F
        CLRW
        BTFSS           STATUS,C
        MOVLW           1
        SUBWF           math_main_global_TEMPB, F
        GOTO            UOK22L8

    UADD22L8:
        ADDWF           math_main_global_Remainder_1, F
        MOVF            math_main_global_Y_2,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_Y_2,W
        ADDWF           math_main_global_Remainder_2, F
        MOVF            math_main_global_YHi_1,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_YHi_1,W
        ADDWF           math_main_global_RemainderHi_1, F
        MOVF            math_main_global_YHi_2,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_YHi_2,W
        ADDWF           math_main_global_RemainderHi_2, F
        CLRW
        BTFSC           STATUS,C
        MOVLW           1
        ADDWF           math_main_global_TEMPB, F

    UOK22L8:
        RLF             math_main_global_XHi_1, F

        MOVLW           7
        MOVWF           math_main_global_LoopCount

    LOOPU3232B:
        RLF             math_main_global_XHi_1,W
        RLF             math_main_global_Remainder_1, F
        RLF             math_main_global_Remainder_2, F
        RLF             math_main_global_RemainderHi_1, F
        RLF             math_main_global_RemainderHi_2, F
        RLF             math_main_global_TEMPB, F
        MOVF            math_main_global_Y_1,W
        BTFSS           math_main_global_XHi_1,0
        GOTO            UADD22LB

        SUBWF           math_main_global_Remainder_1, F
        MOVF            math_main_global_Y_2,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_Y_2,W
        SUBWF           math_main_global_Remainder_2, F
        MOVF            math_main_global_YHi_1,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_YHi_1,W
        SUBWF           math_main_global_RemainderHi_1, F
        MOVF            math_main_global_YHi_2,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_YHi_2,W
        SUBWF           math_main_global_RemainderHi_2, F
        CLRW
        BTFSS           STATUS,C
        MOVLW           1
        SUBWF           math_main_global_TEMPB, F
        GOTO            UOK22LB

    UADD22LB:
        ADDWF           math_main_global_Remainder_1, F
        MOVF            math_main_global_Y_2,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_Y_2,W
        ADDWF           math_main_global_Remainder_2, F
        MOVF            math_main_global_YHi_1,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_YHi_1,W
        ADDWF           math_main_global_RemainderHi_1, F
        MOVF            math_main_global_YHi_2,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_YHi_2,W
        ADDWF           math_main_global_RemainderHi_2, F
        CLRW
        BTFSC           STATUS,C
        MOVLW           1
        ADDWF           math_main_global_TEMPB, F

    UOK22LB:
        RLF             math_main_global_XHi_1, F

        DECFSZ          math_main_global_LoopCount, F
        GOTO            LOOPU3232B

        RLF             math_main_global_X_2,W
        RLF             math_main_global_Remainder_1, F
        RLF             math_main_global_Remainder_2, F
        RLF             math_main_global_RemainderHi_1, F
        RLF             math_main_global_RemainderHi_2, F
        RLF             math_main_global_TEMPB, F
        MOVF            math_main_global_Y_1,W
        BTFSS           math_main_global_XHi_1,0
        GOTO            UADD22L16

        SUBWF           math_main_global_Remainder_1, F
        MOVF            math_main_global_Y_2,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_Y_2,W
        SUBWF           math_main_global_Remainder_2, F
        MOVF            math_main_global_YHi_1,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_YHi_1,W
        SUBWF           math_main_global_RemainderHi_1, F
        MOVF            math_main_global_YHi_2,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_YHi_2,W
        SUBWF           math_main_global_RemainderHi_2, F
        CLRW
        BTFSS           STATUS,C
        MOVLW           1
        SUBWF           math_main_global_TEMPB, F
        GOTO            UOK22L16

    UADD22L16:
        ADDWF           math_main_global_Remainder_1, F
        MOVF            math_main_global_Y_2,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_Y_2,W
        ADDWF           math_main_global_Remainder_2, F
        MOVF            math_main_global_YHi_1,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_YHi_1,W
        ADDWF           math_main_global_RemainderHi_1, F
        MOVF            math_main_global_YHi_2,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_YHi_2,W
        ADDWF           math_main_global_RemainderHi_2, F
        CLRW
        BTFSC           STATUS,C
        MOVLW           1
        ADDWF           math_main_global_TEMPB, F

    UOK22L16:
        RLF             math_main_global_X_2, F

        MOVLW           7
        MOVWF           math_main_global_LoopCount

    LOOPU3232C:
        RLF             math_main_global_X_2,W
        RLF             math_main_global_Remainder_1, F
        RLF             math_main_global_Remainder_2, F
        RLF             math_main_global_RemainderHi_1, F
        RLF             math_main_global_RemainderHi_2, F
        RLF             math_main_global_TEMPB, F
        MOVF            math_main_global_Y_1,W
        BTFSS           math_main_global_X_2,0
        GOTO            UADD22LC

        SUBWF           math_main_global_Remainder_1, F
        MOVF            math_main_global_Y_2,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_Y_2,W
        SUBWF           math_main_global_Remainder_2, F
        MOVF            math_main_global_YHi_1,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_YHi_1,W
        SUBWF           math_main_global_RemainderHi_1, F
        MOVF            math_main_global_YHi_2,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_YHi_2,W
        SUBWF           math_main_global_RemainderHi_2, F
        CLRW
        BTFSS           STATUS,C
        MOVLW           1
        SUBWF           math_main_global_TEMPB, F
        GOTO            UOK22LC

    UADD22LC:
        ADDWF           math_main_global_Remainder_1, F
        MOVF            math_main_global_Y_2,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_Y_2,W
        ADDWF           math_main_global_Remainder_2, F
        MOVF            math_main_global_YHi_1,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_YHi_1,W
        ADDWF           math_main_global_RemainderHi_1, F
        MOVF            math_main_global_YHi_2,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_YHi_2,W
        ADDWF           math_main_global_RemainderHi_2, F
        CLRW
        BTFSC           STATUS,C
        MOVLW           1
        ADDWF           math_main_global_TEMPB, F

    UOK22LC:
        RLF             math_main_global_X_2, F

        DECFSZ          math_main_global_LoopCount, F
        GOTO            LOOPU3232C

        RLF             math_main_global_X_1,W
        RLF             math_main_global_Remainder_1, F
        RLF             math_main_global_Remainder_2, F
        RLF             math_main_global_RemainderHi_1, F
        RLF             math_main_global_RemainderHi_2, F
        RLF             math_main_global_TEMPB, F
        MOVF            math_main_global_Y_1,W
        BTFSS           math_main_global_X_2,0
        GOTO            UADD22L24

        SUBWF           math_main_global_Remainder_1, F
        MOVF            math_main_global_Y_2,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_Y_2,W
        SUBWF           math_main_global_Remainder_2, F
        MOVF            math_main_global_YHi_1,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_YHi_1,W
        SUBWF           math_main_global_RemainderHi_1, F
        MOVF            math_main_global_YHi_2,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_YHi_2,W
        SUBWF           math_main_global_RemainderHi_2, F
        CLRW
        BTFSS           STATUS,C
        MOVLW           1
        SUBWF           math_main_global_TEMPB, F
        GOTO            UOK22L24

    UADD22L24:
        ADDWF           math_main_global_Remainder_1, F
        MOVF            math_main_global_Y_2,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_Y_2,W
        ADDWF           math_main_global_Remainder_2, F
        MOVF            math_main_global_YHi_1,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_YHi_1,W
        ADDWF           math_main_global_RemainderHi_1, F
        MOVF            math_main_global_YHi_2,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_YHi_2,W
        ADDWF           math_main_global_RemainderHi_2, F
        CLRW
        BTFSC           STATUS,C
        MOVLW           1
        ADDWF           math_main_global_TEMPB, F

    UOK22L24:
        RLF             math_main_global_X_1, F

        MOVLW           7
        MOVWF           math_main_global_LoopCount

    LOOPU3232D:
        RLF             math_main_global_X_1,W
        RLF             math_main_global_Remainder_1, F
        RLF             math_main_global_Remainder_2, F
        RLF             math_main_global_RemainderHi_1, F
        RLF             math_main_global_RemainderHi_2, F
        RLF             math_main_global_TEMPB, F
        MOVF            math_main_global_Y_1,W
        BTFSS           math_main_global_X_1,0
        GOTO            UADD22LD

        SUBWF           math_main_global_Remainder_1, F
        MOVF            math_main_global_Y_2,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_Y_2,W
        SUBWF           math_main_global_Remainder_2, F
        MOVF            math_main_global_YHi_1,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_YHi_1,W
        SUBWF           math_main_global_RemainderHi_1, F
        MOVF            math_main_global_YHi_2,W
        BTFSS           STATUS,C
        INCFSZ          math_main_global_YHi_2,W
        SUBWF           math_main_global_RemainderHi_2, F
        CLRW
        BTFSS           STATUS,C
        MOVLW           1
        SUBWF           math_main_global_TEMPB, F
        GOTO            UOK22LD

    UADD22LD:
        ADDWF           math_main_global_Remainder_1, F
        MOVF            math_main_global_Y_2,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_Y_2,W
        ADDWF           math_main_global_Remainder_2, F
        MOVF            math_main_global_YHi_1,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_YHi_1,W
        ADDWF           math_main_global_RemainderHi_1, F
        MOVF            math_main_global_YHi_2,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_YHi_2,W
        ADDWF           math_main_global_RemainderHi_2, F
        CLRW
        BTFSC           STATUS,C
        MOVLW           1
        ADDWF           math_main_global_TEMPB, F

    UOK22LD:
        RLF             math_main_global_X_1, F

        DECFSZ          math_main_global_LoopCount, F
        GOTO            LOOPU3232D

        BTFSC           math_main_global_X_1,0
        GOTO            UOK22L
        MOVF            math_main_global_Y_1,W
            ADDWF           math_main_global_Remainder_1, F
        MOVF            math_main_global_Y_2,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_Y_2,W
        ADDWF           math_main_global_Remainder_2, F
        MOVF            math_main_global_YHi_1,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_YHi_1,W
        ADDWF           math_main_global_RemainderHi_1, F
        MOVF            math_main_global_YHi_2,W
        BTFSC           STATUS,C
        INCFSZ          math_main_global_YHi_2,W
        ADDWF           math_main_global_RemainderHi_2, F

    UOK22L:

    }
}

/**
 * @brief 32x32 Bit Unsigned Fixed Point Multiply 32x32 -> 64.
 * @details This function multiplies two 32-bit unsigned fixed point numbers to produce a 64-bit result.
 * @param[in,out] X      The multiplicand and the most significant part of the product.
 * @param[in,out] XHi    The second part of the multiplicand and the second most significant part of the product.
 * @param[in]     Y      The multiplier.
 * @param[in]     YHi    The second part of the multiplier.
 * @param[out]    XHr    The third most significant part of the product.
 * @param[out]    XHs    The least significant part of the product.
 * @result None.
 */
void Mul_32x32_U()
{
    asm {
        ;mov ??COUNTER, #34        ; Load 32+2 in the counter
        ;mov RESULT_0, #0h         ; Clear Product
        ;mov RESULT_1, #0h
        ;mov RESULT_2, #0h
        ;mov RESULT_3, #0h
        MOVLB 0
        MOVLW  34
        MOVWF  math_main_global_LoopCount
        CLRF   math_main_global_XHr_1
        CLRF   math_main_global_XHr_2
        CLRF   math_main_global_XHs_1
        CLRF   math_main_global_XHs_2

    _NEXT:
        ;DEC ??COUNTER
        ;jz _EXIT2
        ;clc                       ; Clear carry flag
        DECF   math_main_global_LoopCount, F
        BTFSC  STATUS, Z
        GOTO   _EXIT2
        BCF    STATUS, C

    _LOOP:
        ;rrc RESULT_3
        ;rrc RESULT_2
        ;rrc RESULT_1
        ;rrc RESULT_0
        ;rrc PRODUCT_3             ; Shift the sum
        ;rrc PRODUCT_2             ; of partial products
        ;rrc PRODUCT_1
        ;rrc PRODUCT_0
        RRF    math_main_global_XHs_2, F
        RRF    math_main_global_XHs_1, F
        RRF    math_main_global_XHr_2, F
        RRF    math_main_global_XHr_1, F
        RRF    math_main_global_XHi_2, F
        RRF    math_main_global_XHi_1, F
        RRF    math_main_global_X_2, F
        RRF    math_main_global_X_1, F

        ;jnc _NEXT
        ;dec ??COUNTER
        ;jz _EXIT1
        BTFSS  STATUS, C
        GOTO   _NEXT
        DECF   math_main_global_LoopCount, F
        BTFSC  STATUS, Z
        GOTO   _EXIT1

        ;add RESULT_0, MULTIPLIER_0
        ;adc RESULT_1, MULTIPLIER_1
        ;adc RESULT_2, MULTIPLIER_2
        ;adc RESULT_3, MULTIPLIER_3
        ;jmp _LOOP
        MOVF   math_main_global_Y_1, W
        ADDWF  math_main_global_XHr_1, F
        MOVF   math_main_global_Y_2,W
        BTFSC  STATUS,C
        INCFSZ math_main_global_Y_2,W
        ADDWF  math_main_global_XHr_2, F
        MOVF   math_main_global_YHi_1,W
        BTFSC  STATUS,C
        INCFSZ math_main_global_YHi_1,W
        ADDWF  math_main_global_XHs_1, F
        MOVF   math_main_global_YHi_2,W
        BTFSC  STATUS,C
        INCFSZ math_main_global_YHi_2,W
        ADDWF  math_main_global_XHs_2, F

        GOTO   _LOOP

    _EXIT1:
        ;add RESULT_0, MULTIPLIER_0
        ;adc RESULT_1, MULTIPLIER_1
        ;adc RESULT_2, MULTIPLIER_2
        ;adc RESULT_3, MULTIPLIER_3
        MOVF   math_main_global_Y_1, W
        ADDWF  math_main_global_XHr_1, F
        MOVF   math_main_global_Y_2,W
        BTFSC  STATUS,C
        INCFSZ math_main_global_Y_2,W
        ADDWF  math_main_global_XHr_2, F
        MOVF   math_main_global_YHi_1,W
        BTFSC  STATUS,C
        INCFSZ math_main_global_YHi_1,W
        ADDWF  math_main_global_XHs_1, F
        MOVF   math_main_global_YHi_2,W
        BTFSC  STATUS,C
        INCFSZ math_main_global_YHi_2,W
        ADDWF  math_main_global_XHs_2, F


    _EXIT2:
    }
}

/**
 * @brief 32x32 Bit Signed Fixed Point Multiply 32x32 -> 64.
 * @details This function multiplies two 32-bit signed fixed point numbers to produce a 64-bit result.
 * @param[in,out] X      The multiplicand and the most significant part of the product.
 * @param[in,out] XHi    The second part of the multiplicand and the second most significant part of the product.
 * @param[in]     Y      The multiplier.
 * @param[in]     YHi    The second part of the multiplier.
 * @param[out]    XHr    The third most significant part of the product.
 * @param[out]    XHs    The least significant part of the product.
 * @result None.
 */
void Mul_32x32_S()
{
    asm {
        MOVLB 0
        ;mov ??SIGNBYTE, #0h
        CLRF  math_main_global_Sign

    _IF_FIRST:
        ;tm PRODUCT_3, #080h        ; if multiplier is positive,
        ;jz _IF_SECOND              ; go forward
        BTFSS math_main_global_XHi_2, 7
        GOTO  _IF_SECOND

    _INVERCE_FIRST:
        ;xor PRODUCT_0, #0FFh       ; else invert
        ;xor PRODUCT_1, #0FFh
        ;xor PRODUCT_2, #0FFh
        ;xor PRODUCT_3, #0FFh
        COMF  math_main_global_X_1, F
        COMF  math_main_global_X_2, F
        COMF  math_main_global_XHi_1, F
        COMF  math_main_global_XHi_2, F

        ;inc PRODUCT_0
        ;adc PRODUCT_1, #0
        ;adc PRODUCT_2, #0
        ;adc PRODUCT_3, #0
        ;add ??SIGNBYTE, #10000001b
        INCF  math_main_global_X_1, F
        BTFSC STATUS, Z
        INCF  math_main_global_X_2, F
        BTFSC STATUS, Z
        INCF  math_main_global_XHi_1, F
        BTFSC STATUS, Z
        INCF  math_main_global_XHi_2, F
        MOVLW 129
        ADDWF math_main_global_Sign, F

    _IF_SECOND:
        ;tm MULTIPLIER_3, #080h     ; if multiplier is positive,
        ;jz _MULT                   ; go forward
        BTFSS math_main_global_YHi_2, 7
        GOTO  _MULT

    _INBERSE_SECOND:
        ;xor MULTIPLIER_0, #0FFh    ; else, invert
        ;xor MULTIPLIER_1, #0FFh
        ;xor MULTIPLIER_2, #0FFh
        ;xor MULTIPLIER_3, #0FFh
        COMF  math_main_global_Y_1, F
        COMF  math_main_global_Y_2, F
        COMF  math_main_global_YHi_1, F
        COMF  math_main_global_YHi_2, F

        ;inc MULTIPLIER_0
        ;adc MULTIPLIER_1, #0
        ;adc MULTIPLIER_2, #0
        ;adc MULTIPLIER_3, #0
        ;inc ??SIGNBYTE
        INCF  math_main_global_Y_1, F
        BTFSC STATUS, Z
        INCF  math_main_global_Y_2, F
        BTFSC STATUS, Z
        INCF  math_main_global_YHi_1, F
        BTFSC STATUS, Z
        INCF  math_main_global_YHi_2, F
        INCF  math_main_global_Sign, F

    _MULT:
    }
    Mul_32x32_U();

    asm {
        ;shr ??SIGNBYTE             ; Verify if the sign
        ;jnc _EXIT                  ; needs to be changed
        BTFSS math_main_global_Sign, 0
        GOTO  _EXIT

        ;xor PRODUCT_0, #0FFh
        ;xor PRODUCT_1, #0FFh
        ;xor PRODUCT_2, #0FFh
        ;xor PRODUCT_3, #0FFh
        COMF  math_main_global_X_1, F
        COMF  math_main_global_X_2, F
        COMF  math_main_global_XHi_1, F
        COMF  math_main_global_XHi_2, F

        ;xor RESULT_0, #0FFh
        ;xor RESULT_1, #0FFh
        ;xor RESULT_2, #0FFh
        ;xor RESULT_3, #0FFh
        COMF  math_main_global_XHr_1, F
        COMF  math_main_global_XHr_2, F
        COMF  math_main_global_XHs_1, F
        COMF  math_main_global_XHs_2, F

        ;inc PRODUCT_0
        ;adc PRODUCT_1, #0
        ;adc PRODUCT_2, #0
        ;adc PRODUCT_3, #0
        ;adc RESULT_0, #0
        ;adc RESULT_1, #0
        ;adc RESULT_2, #0
        ;adc RESULT_3, #0
        INCF  math_main_global_X_1, F
        BTFSC STATUS, Z
        INCF  math_main_global_X_2, F
        BTFSC STATUS, Z
        INCF  math_main_global_XHi_1, F
        BTFSC STATUS, Z
        INCF  math_main_global_XHi_2, F
        BTFSC STATUS, Z
        INCF  math_main_global_XHr_1, F
        BTFSC STATUS, Z
        INCF  math_main_global_XHr_2, F
        BTFSC STATUS, Z
        INCF  math_main_global_XHs_1, F
        BTFSC STATUS, Z
        INCF  math_main_global_XHs_2, F
    _EXIT:
    }
}
