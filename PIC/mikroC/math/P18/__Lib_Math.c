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
#define math_main_global_TEMPB         R14

/**
 * @brief Division of two 8-bit unsigned integers.
 * @param[in]     Dividend  The dividend.
 * @param[in]     Divisor   The divisor.
 * @result The quotient of the division.
 */
void Div_8X8_U()
{
    asm {
        CLRF   math_main_global_Remainder_1
        MOVLW  8
        MOVWF  math_main_global_LoopCount
        RLCF   math_main_global_X_1,W
        RLCF   math_main_global_Remainder_1,F
        MOVF   math_main_global_Y_1,W
        SUBWF  math_main_global_Remainder_1,F
        BTFSC  STATUS,C,0
        BRA    $+6 //$+3
        ADDWF  math_main_global_Remainder_1,F
        BCF    STATUS,C,0
        RLCF   math_main_global_X_1,F
        DECFSZ math_main_global_LoopCount,F
        BRA    $-20 //$-10
    }
}

/**
 * @brief Division of two 16-bit unsigned integers.
 * @param[in]     Dividend  The dividend.
 * @param[in]     Divisor   The divisor.
 * @result The quotient of the division.
 */
void Div_16X16_U()
{
    asm {
        CLRF   math_main_global_Remainder_1
        CLRF   math_main_global_Remainder_2
        MOVLW  16
        MOVWF  math_main_global_LoopCount
        RLCF   math_main_global_X_2,W
        RLCF   math_main_global_Remainder_1,F
        RLCF   math_main_global_Remainder_2,F
        MOVF   math_main_global_Y_1,W
        SUBWF  math_main_global_Remainder_1,F
        MOVF   math_main_global_Y_2,W
        BTFSS  STATUS,C,0
        INCFSZ math_main_global_Y_2,W
        SUBWF  math_main_global_Remainder_2,F
        BTFSC  STATUS,C,0
        BRA    $+16 //$+8
        MOVF   math_main_global_Y_1,W
        ADDWF  math_main_global_Remainder_1,F
        MOVF   math_main_global_Y_2,W
        BTFSC  STATUS,C,0
        INCFSZ math_main_global_Y_2,W
        ADDWF  math_main_global_Remainder_2,F
        BCF    STATUS,C,0
        RLCF   math_main_global_X_1,F
        RLCF   math_main_global_X_2,F
        DECFSZ math_main_global_LoopCount,F
        BRA    $-42 //$-21
    }
}

/**
 * @brief Division of two 16-bit signed integers (lower byte).
 * @param[in]     Dividend  The dividend.
 * @param[in]     Divisor   The divisor.
 * @result The quotient of the division.
 */
void Div_16x16_S_L()
{
    asm {
        RLCF   math_main_global_X_2,W
        RLCF   math_main_global_Remainder_1,F
        RLCF   math_main_global_Remainder_2,F
        MOVF   math_main_global_Y_1,W
        SUBWF  math_main_global_Remainder_1,F
        MOVF   math_main_global_Y_2,W
        BTFSS  STATUS,C,0
        INCFSZ math_main_global_Y_2,W
        SUBWF  math_main_global_Remainder_2,F
        RLCF   math_main_global_X_1,F
        RLCF   math_main_global_X_2,F

        MOVLW  15
        MOVWF  math_main_global_LoopCount

        RLCF   math_main_global_X_2,W
        RLCF   math_main_global_Remainder_1,F
        RLCF   math_main_global_Remainder_2,F
        MOVF   math_main_global_Y_1,W

        BTFSS  math_main_global_X_1,0
        BRA   $+14 //$+7
        SUBWF  math_main_global_Remainder_1,F
        MOVF   math_main_global_Y_2,W
        BTFSS  STATUS,C,0
        INCFSZ math_main_global_Y_2,W
        SUBWF  math_main_global_Remainder_2,F
        BRA   $+12 //$+6

        ADDWF  math_main_global_Remainder_1,F
        MOVF   math_main_global_Y_2,W
        BTFSC  STATUS,C,0
        INCFSZ math_main_global_Y_2,W
        ADDWF  math_main_global_Remainder_2,F

        RLCF   math_main_global_X_1,F
        RLCF   math_main_global_X_2,F

        DECFSZ math_main_global_LoopCount,F
        BRA   $-40 //$-20

        BTFSC  math_main_global_X_1,0
        BRA   $+14 //$+7
        MOVF   math_main_global_Y_1,W
        ADDWF  math_main_global_Remainder_1,F
        MOVF   math_main_global_Y_2,W
        BTFSC  STATUS,C,0
        INCFSZ math_main_global_Y_2,W
        ADDWF  math_main_global_Remainder_2,F
        NOP
    }
}

/**
 * @brief Division of two 16-bit signed integers.
 * @param[in]     Dividend  The dividend.
 * @param[in]     Divisor   The divisor.
 * @result The quotient of the division.
 */
void Div_16x16_S()
{
    if ( R4 == 0 )
        if ( R5 == 0 ) {
            R0 = 0xFF;
            R1 = 0x7F;
            return;
        }

    asm {
        CLRF   math_main_global_Sign
        CLRF   math_main_global_Remainder_2
        CLRF   math_main_global_Remainder_1
        MOVF   math_main_global_X_2,W
        IORWF  math_main_global_X_1,W
        BTFSC  STATUS,Z,0
        RETLW  0

        MOVF   math_main_global_X_2,W
        XORWF  math_main_global_Y_2,W
        MOVWF  math_main_global_Temp_1
        BTFSC  math_main_global_Temp_1,7
        COMF   math_main_global_Sign,F

        CLRF   math_main_global_Temp_2

        BTFSS  math_main_global_Y_2,7
        BRA    $+12 //$+6

        COMF   math_main_global_Y_1,F
        COMF   math_main_global_Y_2,F
        INCF   math_main_global_Y_1,F
        BTFSC  STATUS,Z,0
        INCF   math_main_global_Y_2,F

        BTFSS  math_main_global_X_2,7
        BRA    $+12 //$+6

        COMF   math_main_global_X_1,F
        COMF   math_main_global_X_2,F
        INCF   math_main_global_X_1,F
        BTFSC  STATUS,Z,0
        INCF   math_main_global_X_2,F

        MOVF   math_main_global_X_2,W
        IORWF  math_main_global_Y_2,W
        MOVWF  math_main_global_Temp_1
        BTFSC  math_main_global_Temp_1,7
        BRA    $+34 //$+17
    }
    Div_16x16_S_L();
    asm {
        BTFSC  math_main_global_Temp_2,0
        BRA   $+66 //$+33

        BTFSS  math_main_global_Sign,7
        RETLW  0

        COMF   math_main_global_X_1,F
        COMF   math_main_global_X_2,F
        INCF   math_main_global_X_1,F
        BTFSC  STATUS,Z,0
        INCF   math_main_global_X_2,F

        COMF   math_main_global_Remainder_1,F
        COMF   math_main_global_Remainder_2,F
        INCF   math_main_global_Remainder_1,F
        BTFSC  STATUS,Z,0
        INCF   math_main_global_Remainder_2,F

        RETLW  0

        BTFSS  math_main_global_Y_2,7
        BRA    $+28 ////$+14
        BTFSC  math_main_global_X_2,7
        BRA    $+16 //$+8
        MOVF   math_main_global_X_2,W
        MOVWF  math_main_global_Remainder_2
        MOVF   math_main_global_X_1,W
        MOVWF  math_main_global_Remainder_1
        CLRF   math_main_global_X_2
        CLRF   math_main_global_X_1
        BRA    $-46 //$-23
        CLRF   math_main_global_X_2
        CLRF   math_main_global_X_1
        INCF   math_main_global_X_1,F
        RETLW  0

        COMF   math_main_global_X_2,F
        COMF   math_main_global_X_1,F
        INCF   math_main_global_Temp_2,F
        BRA    $-68 ////$-34

        INCF   math_main_global_Remainder_1,F
        BTFSC  STATUS,Z,0
        INCF   math_main_global_Remainder_2,F
        MOVF   math_main_global_Y_1,W
        SUBWF  math_main_global_Remainder_1,W
        BTFSS  STATUS,Z,0
        BRA    $-76 ////$-38
        MOVF   math_main_global_Y_2,W
        SUBWF  math_main_global_Remainder_2,W
        BTFSS  STATUS,Z,0
        BRA    $-84 //$-42
        CLRF   math_main_global_Remainder_2
        CLRF   math_main_global_Remainder_1
        INCF   math_main_global_X_1,F
        BTFSC  STATUS,Z,0
        INCF   math_main_global_X_2,F
        BTFSS  math_main_global_X_2,7
        BRA    $-98 ////$-49
        NOP
        RETLW  255
    }
}

/**
 * @brief Division of two 8-bit signed integers.
 * @param[in]     Dividend  The dividend.
 * @param[in]     Divisor   The divisor.
 * @result The quotient of the division.
 */
void Div_8X8_S()
{
    asm {
        CLRF    math_main_global_Sign
        CLRF    math_main_global_Remainder_1
        MOVF    math_main_global_X_1,W
        BTFSC   STATUS,Z,0
        RETLW   0x00
        XORWF   math_main_global_Y_1,W
        MOVWF   math_main_global_Temp_1
        BTFSC   math_main_global_Temp_1,7
        COMF    math_main_global_Sign,F
        CLRF    math_main_global_Temp_2
        BTFSS   math_main_global_Y_1,7
        BRA     $+6 //$+3
        COMF    math_main_global_Y_1, F
        INCF    math_main_global_Y_1, F
        BTFSS   math_main_global_X_1,7
        BRA     $+6 //$+3
        COMF    math_main_global_X_1, F
        INCF    math_main_global_X_1, F
        MOVF    math_main_global_X_1,W
        IORWF   math_main_global_Y_1,W
        MOVWF   math_main_global_Temp_1
        BTFSC   math_main_global_Temp_1,7
        BRA     $+64 //$+32
        MOVF    math_main_global_Y_1,W
        SUBWF   math_main_global_Remainder_1, F
        RLCF    math_main_global_X_1, F
        RLCF    math_main_global_X_1,W
        RLCF    math_main_global_Remainder_1, F
        MOVF    math_main_global_Y_1,W
        ADDWF   math_main_global_Remainder_1, F
        RLCF     math_main_global_X_1, F
        MOVLW   6
        MOVWF   math_main_global_LoopCount
        RLCF    math_main_global_X_1,W
        RLCF    math_main_global_Remainder_1, F
        MOVF    math_main_global_Y_1,W
        BTFSC   math_main_global_X_1,0
        SUBWF   math_main_global_Remainder_1, F
        BTFSS   math_main_global_X_1,0
        ADDWF   math_main_global_Remainder_1, F
        RLCF    math_main_global_X_1, F
        DECFSZ  math_main_global_LoopCount, F
        BRA     $-18 //$-9
        BTFSS   math_main_global_X_1,0
        ADDWF   math_main_global_Remainder_1, F
        BTFSC   math_main_global_Temp_2,0
        BRA     $+44 //$+22
        BTFSS   math_main_global_Sign,7
        RETLW   0x00
        COMF    math_main_global_X_1, F
        INCF    math_main_global_X_1, F
        COMF    math_main_global_Remainder_1, F
        INCF    math_main_global_Remainder_1, F
        RETLW   0x00
        BTFSS   math_main_global_Y_1,7
        BRA     $+20 //$+10
        BTFSC   math_main_global_X_1,7
        BRA     $+10 //$+5
        MOVF    math_main_global_X_1,W
        MOVWF   math_main_global_Remainder_1
        CLRF    math_main_global_X_1
        BRA     $-28 //$-14
        CLRF    math_main_global_X_1
        INCF    math_main_global_X_1,F
        RETLW   0x00
        COMF    math_main_global_X_1,F
        INCF    math_main_global_Temp_2,F
        BRA     $-88 //$-44
        INCF    math_main_global_Remainder_1,F
        MOVF    math_main_global_Y_1,W
        SUBWF   math_main_global_Remainder_1,W
        BTFSS   STATUS,Z,0
        BRA     $-50 //$-25
        CLRF    math_main_global_Remainder_1
        INCF    math_main_global_X_1,F
        BTFSS   math_main_global_X_1,7
        BRA     $-58 //$-29
        RETLW   0xFF
    }
}

void Mul_8X8_S()
{
    asm {
        MOVF    math_main_global_X_1, W
        MULWF   math_main_global_Y_1

        BTFSC   math_main_global_Y_1, 7
        SUBWF   PRODH, F

        MOVF    math_main_global_Y_1, W
        BTFSC   math_main_global_X_1, 7
        SUBWF   PRODH, F

        MOVFF   PRODL, R0
        MOVFF   PRODH, R1
    }
}

void Mul_16X16_U()
{
    asm {
        CLRF    math_main_global_UpperWord_2
        CLRF    math_main_global_UpperWord_1
        CLRF    math_main_global_LowerWord_2
        MOVF    math_main_global_X_1, W
        MULWF   math_main_global_Y_1

        MOVFF   PRODH, math_main_global_LowerWord_2
        MOVFF   PRODL, math_main_global_LowerWord_1
        MOVF    math_main_global_X_2, W
        MULWF   math_main_global_Y_2

        MOVFF   PRODH, math_main_global_UpperWord_2
        MOVFF   PRODL, math_main_global_UpperWord_1
        MOVF    math_main_global_X_1, W
        MULWF   math_main_global_Y_2

        MOVF    PRODL, W, 0
        ADDWF   math_main_global_LowerWord_2, F
        MOVF    PRODH, W, 0
        ADDWFC  math_main_global_UpperWord_1, F
        CLRF    WREG , 0
        ADDWFC  math_main_global_UpperWord_2, F
        MOVF    math_main_global_X_2, W
        MULWF   math_main_global_Y_1

        MOVF    PRODL, W, 0
        ADDWF   math_main_global_LowerWord_2, F
        MOVF    PRODH, W, 0
        ADDWFC  math_main_global_UpperWord_1, F
        CLRF    WREG , 0
        ADDWFC  math_main_global_UpperWord_2, F

        MOVFF   math_main_global_LowerWord_1, R0
        MOVFF   math_main_global_LowerWord_2, R1
        MOVFF   math_main_global_UpperWord_1, R2
        MOVFF   math_main_global_UpperWord_2, R3
    }
}

void Mul_16X16_S()
{
    asm {
        MOVF    math_main_global_X_1, W
        MULWF   math_main_global_Y_1

        MOVFF   PRODH, math_main_global_LowerWord_2
        MOVFF   PRODL, math_main_global_LowerWord_1

        MOVF    math_main_global_X_2, W
        MULWF   math_main_global_Y_2

        MOVFF   PRODH, math_main_global_UpperWord_2
        MOVFF   PRODL, math_main_global_UpperWord_1

        MOVF    math_main_global_X_1, W
        MULWF   math_main_global_Y_2

        MOVF    PRODL, W, 0
        ADDWF   math_main_global_LowerWord_2, F
        MOVF    PRODH, W, 0
        ADDWFC  math_main_global_UpperWord_1, F
        CLRF    WREG , 0
        ADDWFC  math_main_global_UpperWord_2, F

        MOVF    math_main_global_X_2, W
        MULWF   math_main_global_Y_1

        MOVF    PRODL, W, 0
        ADDWF   math_main_global_LowerWord_2, F
        MOVF    PRODH, W, 0
        ADDWFC  math_main_global_UpperWord_1, F
        CLRF    WREG, 0
        ADDWFC  math_main_global_UpperWord_2, F

        BTFSS   math_main_global_Y_2, 7
        BRA    $+10 //$+5
        MOVF    math_main_global_X_1, W
        SUBWF   math_main_global_UpperWord_1, W
        MOVF    math_main_global_X_2, W
        SUBWFB  math_main_global_UpperWord_2, W


        BTFSS   math_main_global_X_2, 7
        BRA    $+10 //$+5
        MOVF    math_main_global_Y_1, W
        SUBWF   math_main_global_UpperWord_1, W
        MOVF    math_main_global_Y_2, W
        SUBWFB  math_main_global_UpperWord_2, W

        MOVFF   math_main_global_LowerWord_1, R0
        MOVFF   math_main_global_LowerWord_2, R1
        MOVFF   math_main_global_UpperWord_1, R2
        MOVFF   math_main_global_UpperWord_2, R3
    }
}

void SDIV3232L()
{
    asm {
        MOVF    math_main_global_Y_1,W
        SUBWF   math_main_global_Remainder_1, F
        MOVF    math_main_global_Y_2,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_Y_2,W
        SUBWF   math_main_global_Remainder_2, F
        MOVF    math_main_global_YHi_1,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_YHi_1,W
        SUBWF   math_main_global_RemainderHi_1, F
        MOVF    math_main_global_YHi_2,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_YHi_2,W
        SUBWF   math_main_global_RemainderHi_2, F
        RLCF    math_main_global_XHi_2, F

        MOVLW   7
        MOVWF   math_main_global_LoopCount

    LOOPS3232A:
        RLCF    math_main_global_XHi_2,W
        RLCF    math_main_global_Remainder_1, F
        RLCF    math_main_global_Remainder_2, F
        RLCF    math_main_global_RemainderHi_1, F
        RLCF    math_main_global_RemainderHi_2, F
        MOVF    math_main_global_Y_1,W
        BTFSS   math_main_global_XHi_2,0
        BRA     SADD22LA

        SUBWF   math_main_global_Remainder_1, F
        MOVF    math_main_global_Y_2,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_Y_2,W
        SUBWF   math_main_global_Remainder_2, F
        MOVF    math_main_global_YHi_1,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_YHi_1,W
        SUBWF   math_main_global_RemainderHi_1, F
        MOVF    math_main_global_YHi_2,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_YHi_2,W
        SUBWF   math_main_global_RemainderHi_2, F
        BRA     SOK22LA

    SADD22LA:
        ADDWF   math_main_global_Remainder_1, F
        MOVF    math_main_global_Y_2,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_Y_2,W
        ADDWF   math_main_global_Remainder_2, F
        MOVF    math_main_global_YHi_1,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_YHi_1,W
        ADDWF   math_main_global_RemainderHi_1, F
        MOVF    math_main_global_YHi_2,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_YHi_2,W
        ADDWF   math_main_global_RemainderHi_2, F

    SOK22LA:
        RLCF    math_main_global_XHi_2, F

        DECFSZ  math_main_global_LoopCount, F
        BRA     LOOPS3232A

        RLCF    math_main_global_XHi_1,W
        RLCF    math_main_global_Remainder_1, F
        RLCF    math_main_global_Remainder_2, F
        RLCF    math_main_global_RemainderHi_1, F
        RLCF    math_main_global_RemainderHi_2, F
        MOVF    math_main_global_Y_1,W
        BTFSS   math_main_global_XHi_2,0
        BRA     SADD22L8

        SUBWF   math_main_global_Remainder_1, F
        MOVF    math_main_global_Y_2,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_Y_2,W
        SUBWF   math_main_global_Remainder_2, F
        MOVF    math_main_global_YHi_1,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_YHi_1,W
        SUBWF   math_main_global_RemainderHi_1, F
        MOVF    math_main_global_YHi_2,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_YHi_2,W
        SUBWF   math_main_global_RemainderHi_2, F
        BRA     SOK22L8

    SADD22L8:
        ADDWF   math_main_global_Remainder_1, F
        MOVF    math_main_global_Y_2,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_Y_2,W
        ADDWF   math_main_global_Remainder_2, F
        MOVF    math_main_global_YHi_1,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_YHi_1,W
        ADDWF   math_main_global_RemainderHi_1, F
        MOVF    math_main_global_YHi_2,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_YHi_2,W
        ADDWF   math_main_global_RemainderHi_2, F

    SOK22L8:
        RLCF    math_main_global_XHi_1, F

        MOVLW   7
        MOVWF   math_main_global_LoopCount

    LOOPS3232B:
        RLCF    math_main_global_XHi_1,W
        RLCF    math_main_global_Remainder_1, F
        RLCF    math_main_global_Remainder_2, F
        RLCF    math_main_global_RemainderHi_1, F
        RLCF    math_main_global_RemainderHi_2, F
        MOVF    math_main_global_Y_1,W
        BTFSS   math_main_global_XHi_1,0
        BRA     SADD22LB

        SUBWF   math_main_global_Remainder_1, F
        MOVF    math_main_global_Y_2,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_Y_2,W
        SUBWF   math_main_global_Remainder_2, F
        MOVF    math_main_global_YHi_1,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_YHi_1,W
        SUBWF   math_main_global_RemainderHi_1, F
        MOVF    math_main_global_YHi_2,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_YHi_2,W
        SUBWF   math_main_global_RemainderHi_2, F
        BRA     SOK22LB

    SADD22LB:
        ADDWF   math_main_global_Remainder_1, F
        MOVF    math_main_global_Y_2,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_Y_2,W
        ADDWF   math_main_global_Remainder_2, F
        MOVF    math_main_global_YHi_1,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_YHi_1,W
        ADDWF   math_main_global_RemainderHi_1, F
        MOVF    math_main_global_YHi_2,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_YHi_2,W
        ADDWF   math_main_global_RemainderHi_2, F

    SOK22LB:
        RLCF    math_main_global_XHi_1, F

        DECFSZ  math_main_global_LoopCount, F
        BRA     LOOPS3232B

        RLCF    math_main_global_X_2,W
        RLCF    math_main_global_Remainder_1, F
        RLCF    math_main_global_Remainder_2, F
        RLCF    math_main_global_RemainderHi_1, F
        RLCF    math_main_global_RemainderHi_2, F
        MOVF    math_main_global_Y_1,W
        BTFSS   math_main_global_XHi_1,0
        BRA     SADD22L16

        SUBWF   math_main_global_Remainder_1, F
        MOVF    math_main_global_Y_2,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_Y_2,W
        SUBWF   math_main_global_Remainder_2, F
        MOVF    math_main_global_YHi_1,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_YHi_1,W
        SUBWF   math_main_global_RemainderHi_1, F
        MOVF    math_main_global_YHi_2,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_YHi_2,W
        SUBWF   math_main_global_RemainderHi_2, F
        BRA     SOK22L16

    SADD22L16:
        ADDWF   math_main_global_Remainder_1, F
        MOVF    math_main_global_Y_2,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_Y_2,W
        ADDWF   math_main_global_Remainder_2, F
        MOVF    math_main_global_YHi_1,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_YHi_1,W
        ADDWF   math_main_global_RemainderHi_1, F
        MOVF    math_main_global_YHi_2,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_YHi_2,W
        ADDWF   math_main_global_RemainderHi_2, F

    SOK22L16:
        RLCF    math_main_global_X_2, F

        MOVLW   7
        MOVWF   math_main_global_LoopCount

    LOOPS3232C:
        RLCF    math_main_global_X_2,W
        RLCF    math_main_global_Remainder_1, F
        RLCF    math_main_global_Remainder_2, F
        RLCF    math_main_global_RemainderHi_1, F
        RLCF    math_main_global_RemainderHi_2, F
        MOVF    math_main_global_Y_1,W
        BTFSS   math_main_global_X_2,0
        BRA     SADD22LC

        SUBWF   math_main_global_Remainder_1, F
        MOVF    math_main_global_Y_2,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_Y_2,W
        SUBWF   math_main_global_Remainder_2, F
        MOVF    math_main_global_YHi_1,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_YHi_1,W
        SUBWF   math_main_global_RemainderHi_1, F
        MOVF    math_main_global_YHi_2,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_YHi_2,W
        SUBWF   math_main_global_RemainderHi_2, F
        BRA     SOK22LC

    SADD22LC:
        ADDWF   math_main_global_Remainder_1, F
        MOVF    math_main_global_Y_2,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_Y_2,W
        ADDWF   math_main_global_Remainder_2, F
        MOVF    math_main_global_YHi_1,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_YHi_1,W
        ADDWF   math_main_global_RemainderHi_1, F
        MOVF    math_main_global_YHi_2,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_YHi_2,W
        ADDWF   math_main_global_RemainderHi_2, F

    SOK22LC:
        RLCF    math_main_global_X_2, F

        DECFSZ  math_main_global_LoopCount, F
        BRA     LOOPS3232C

        RLCF    math_main_global_X_1,W
        RLCF    math_main_global_Remainder_1, F
        RLCF    math_main_global_Remainder_2, F
        RLCF    math_main_global_RemainderHi_1, F
        RLCF    math_main_global_RemainderHi_2, F
        MOVF    math_main_global_Y_1,W
        BTFSS   math_main_global_X_2,0
        BRA     SADD22L24

        SUBWF   math_main_global_Remainder_1, F
        MOVF    math_main_global_Y_2,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_Y_2,W
        SUBWF   math_main_global_Remainder_2, F
        MOVF    math_main_global_YHi_1,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_YHi_1,W
        SUBWF   math_main_global_RemainderHi_1, F
        MOVF    math_main_global_YHi_2,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_YHi_2,W
        SUBWF   math_main_global_RemainderHi_2, F
        BRA     SOK22L24

    SADD22L24:
        ADDWF   math_main_global_Remainder_1, F
        MOVF    math_main_global_Y_2,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_Y_2,W
        ADDWF   math_main_global_Remainder_2, F
        MOVF    math_main_global_YHi_1,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_YHi_1,W
        ADDWF   math_main_global_RemainderHi_1, F
        MOVF    math_main_global_YHi_2,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_YHi_2,W
        ADDWF   math_main_global_RemainderHi_2, F

    SOK22L24:
        RLCF    math_main_global_X_1, F

        MOVLW   7
        MOVWF   math_main_global_LoopCount

    LOOPS3232D:
        RLCF    math_main_global_X_1,W
        RLCF    math_main_global_Remainder_1, F
        RLCF    math_main_global_Remainder_2, F
        RLCF    math_main_global_RemainderHi_1, F
        RLCF    math_main_global_RemainderHi_2, F
        MOVF    math_main_global_Y_1,W
        BTFSS   math_main_global_X_1,0
        BRA     SADD22LD

        SUBWF   math_main_global_Remainder_1, F
        MOVF    math_main_global_Y_2,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_Y_2,W
        SUBWF   math_main_global_Remainder_2, F
        MOVF    math_main_global_YHi_1,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_YHi_1,W
        SUBWF   math_main_global_RemainderHi_1, F
        MOVF    math_main_global_YHi_2,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_YHi_2,W
        SUBWF   math_main_global_RemainderHi_2, F
        BRA     SOK22LD

    SADD22LD:
        ADDWF   math_main_global_Remainder_1, F
        MOVF    math_main_global_Y_2,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_Y_2,W
        ADDWF   math_main_global_Remainder_2, F
        MOVF    math_main_global_YHi_1,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_YHi_1,W
        ADDWF   math_main_global_RemainderHi_1, F
        MOVF    math_main_global_YHi_2,W
        BTFSC   STATUS,C,0

        INCFSZ  math_main_global_YHi_2,W
        ADDWF   math_main_global_RemainderHi_2, F

    SOK22LD:
        RLCF    math_main_global_X_1, F

        DECFSZ  math_main_global_LoopCount, F
        BRA     LOOPS3232D

        BTFSC   math_main_global_X_1,0
        BRA     SOK22L
        MOVF    math_main_global_Y_1,W
        ADDWF   math_main_global_Remainder_1, F
        MOVF    math_main_global_Y_2,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_Y_2,W
        ADDWF   math_main_global_Remainder_2, F
        MOVF    math_main_global_YHi_1,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_YHi_1,W
        ADDWF   math_main_global_RemainderHi_1, F
        MOVF    math_main_global_YHi_2,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_YHi_2,W
        ADDWF   math_main_global_RemainderHi_2, F
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
        BTFSC   STATUS,Z,0
        INCF    math_main_global_Remainder_2, F
        BTFSC   STATUS,Z
        INCF    math_main_global_RemainderHi_1, F
        BTFSC   STATUS,Z,0
        INCF    math_main_global_RemainderHi_2, F
    }
}

/**
 * @brief Division of two 32-bit signed long integers.
 * @param[in]     Dividend  The dividend.
 * @param[in]     Divisor   The divisor.
 * @result The quotient of the division.
 */
void Div_32x32_S()
{
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
        BTFSC   STATUS,Z,0
        BRA     END_ALL
    }
    asm {
        MOVF    math_main_global_XHi_2,W
        XORWF   math_main_global_YHi_2,W
        MOVWF   math_main_global_TEMPB
        BTFSC   math_main_global_TEMPB,7
        COMF    math_main_global_Sign,F
        ;CLRF    math_main_global_TEMPB3

        BTFSS   math_main_global_YHi_2,7
        BRA    CA3232S

        COMF    math_main_global_Y_1, F
        COMF    math_main_global_Y_2, F
        COMF    math_main_global_YHi_1, F
        COMF    math_main_global_YHi_2, F
        INCF    math_main_global_Y_1, F
        BTFSC   STATUS,Z,0
        INCF    math_main_global_Y_2, F
        BTFSC   STATUS,Z,0
        INCF    math_main_global_YHi_1, F
        BTFSC   STATUS,Z,0
        INCF    math_main_global_YHi_2, F

    CA3232S:
        BTFSS   math_main_global_XHi_2,7
        BRA    C3232SX

        COMF    math_main_global_X_1, F
        COMF    math_main_global_X_2, F
        COMF    math_main_global_XHi_1, F
        COMF    math_main_global_XHi_2, F
        INCF    math_main_global_X_1, F
        BTFSC   STATUS,Z,0
        INCF    math_main_global_X_2, F
        BTFSC   STATUS,Z,0
        INCF    math_main_global_XHi_1, F
        BTFSC   STATUS,Z,0
        INCF    math_main_global_XHi_2, F

    C3232SX:
        MOVF    math_main_global_XHi_2,W
        IORWF   math_main_global_YHi_2,W
        MOVWF   math_main_global_TEMPB
        BTFSC   math_main_global_TEMPB,7
        BRA    C3232SX1
    C3232S:
    }
    SDIV3232L();

    asm {
    C3232S2:
        BTFSC   math_main_global_SSIGN,7
        BRA    C3232SX4

    C3232SOK:
        BTFSS   math_main_global_Sign,7
        BRA     END_ALL

        COMF    math_main_global_X_1, F
        COMF    math_main_global_X_2, F
        COMF    math_main_global_XHi_1, F
        COMF    math_main_global_XHi_2, F
        INCF    math_main_global_X_1, F
        BTFSC   STATUS,Z,0
        INCF    math_main_global_X_2, F
        BTFSC   STATUS,Z,0
        INCF    math_main_global_XHi_1, F
        BTFSC   STATUS,Z,0
        INCF    math_main_global_XHi_2, F

        COMF    math_main_global_Remainder_1, F
        COMF    math_main_global_Remainder_2, F
        COMF    math_main_global_RemainderHi_1, F
        COMF    math_main_global_RemainderHi_2, F
        INCF    math_main_global_Remainder_1, F
        BTFSC   STATUS,Z,0
        INCF    math_main_global_Remainder_2, F
        BTFSC   STATUS,Z,0
        INCF    math_main_global_RemainderHi_1, F
        BTFSC   STATUS,Z,0
        INCF    math_main_global_RemainderHi_2, F
        BRA     END_ALL
    C3232SX1:

        BTFSS   math_main_global_YHi_2,7
        BRA     C3232SX3
        BTFSC   math_main_global_XHi_2,7
        BRA     C3232SX2
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
        BRA     C3232SOK
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
        ;INCF    math_main_global_TEMPB3,F
        BSF     math_main_global_SSIGN,7
        BRA     C3232S
    C3232SX4:

        INCF    math_main_global_Remainder_1,F
        BTFSC   STATUS,Z,0
        INCF    math_main_global_Remainder_2,F
        BTFSC   STATUS,Z,0
        INCF    math_main_global_RemainderHi_1,F
        BTFSC   STATUS,Z,0
        INCF    math_main_global_RemainderHi_2,F
        MOVF    math_main_global_Y_1,W
        SUBWF   math_main_global_Remainder_1,W
        BTFSS   STATUS,Z,0
        BRA     C3232SOK
        MOVF    math_main_global_Y_2,W
        SUBWF   math_main_global_Remainder_2,W
        BTFSS   STATUS,Z,0
        BRA     C3232SOK
        MOVF    math_main_global_YHi_1,W
        SUBWF   math_main_global_RemainderHi_1,W
        BTFSS   STATUS,Z,0
        BRA     C3232SOK
        MOVF    math_main_global_YHi_2,W
        SUBWF   math_main_global_RemainderHi_2,W
        BTFSS   STATUS,Z,0
        BRA     C3232SOK
        CLRF    math_main_global_RemainderHi_2
        CLRF    math_main_global_RemainderHi_1
        CLRF    math_main_global_Remainder_2
        CLRF    math_main_global_Remainder_1
        INCF    math_main_global_X_1,F
        BTFSC   STATUS,Z,0
        INCF    math_main_global_X_2,F
        BTFSC   STATUS,Z,0
        INCF    math_main_global_XHi_1,F
        BTFSC   STATUS,Z,0
        INCF    math_main_global_XHi_2,F
        BTFSS   math_main_global_XHi_2,7
        BRA     C3232SOK
        CLRF    math_main_global_TEMPB
        BSF            math_main_global_TEMPB,4
        RETLW   0xFF
    END_ALL:
        CLRF    math_main_global_TEMPB
        BTFSS   math_main_global_SSIGN,0
        BRA     avoid_comfrem
    }
    COMFREM();
    asm {
        avoid_comfrem:
        ADDLW   0x00;
    }
}

/**
 * @brief Division of two unsigned 32-bit integers.
 * @param[in]     Dividend  The dividend.
 * @param[in]     Divisor   The divisor.
 * @result The quotient of the division.
 */
void Div_32x32_U()
{
    asm {
        CLRF    math_main_global_RemainderHi_2
        CLRF    math_main_global_RemainderHi_1
        CLRF    math_main_global_Remainder_2
        CLRF    math_main_global_Remainder_1

        CLRF    math_main_global_TEMPB

        RLCF    math_main_global_XHi_2,W
        RLCF    math_main_global_Remainder_1, F
        MOVF    math_main_global_Y_1,W
        SUBWF   math_main_global_Remainder_1, F
        MOVF    math_main_global_Y_2,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_Y_2,W
        SUBWF   math_main_global_Remainder_2, F
        MOVF    math_main_global_YHi_1,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_YHi_1,W
        SUBWF   math_main_global_RemainderHi_1, F
        MOVF    math_main_global_YHi_2,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_YHi_2,W
        SUBWF   math_main_global_RemainderHi_2, F

        CLRF    WREG
        BTFSS   STATUS,C,0
        MOVLW   1
        SUBWF   math_main_global_TEMPB, F
        RLCF    math_main_global_XHi_2, F

        MOVLW   7
        MOVWF   math_main_global_LoopCount

    LOOPU3232A:
        RLCF    math_main_global_XHi_2,W
        RLCF    math_main_global_Remainder_1, F
        RLCF    math_main_global_Remainder_2, F
        RLCF    math_main_global_RemainderHi_1, F
        RLCF    math_main_global_RemainderHi_2, F
        RLCF    math_main_global_TEMPB, F
        MOVF    math_main_global_Y_1,W
        BTFSS   math_main_global_XHi_2,0
        BRA     UADD22LA

        SUBWF   math_main_global_Remainder_1, F
        MOVF    math_main_global_Y_2,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_Y_2,W
        SUBWF   math_main_global_Remainder_2, F
        MOVF    math_main_global_YHi_1,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_YHi_1,W
        SUBWF   math_main_global_RemainderHi_1, F
        MOVF    math_main_global_YHi_2,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_YHi_2,W
        SUBWF   math_main_global_RemainderHi_2, F
        CLRF    WREG
        BTFSS   STATUS,C,0
        MOVLW   1
        SUBWF   math_main_global_TEMPB, F
        BRA     UOK22LA

    UADD22LA:
        ADDWF   math_main_global_Remainder_1, F
        MOVF    math_main_global_Y_2,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_Y_2,W
        ADDWF   math_main_global_Remainder_2, F
        MOVF    math_main_global_YHi_1,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_YHi_1,W
        ADDWF   math_main_global_RemainderHi_1, F
        MOVF    math_main_global_YHi_2,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_YHi_2,W
        ADDWF   math_main_global_RemainderHi_2, F
        CLRF    WREG
        BTFSC   STATUS,C,0
        MOVLW   1
        ADDWF   math_main_global_TEMPB, F

    UOK22LA:
        RLCF    math_main_global_XHi_2, F

    DECFSZ      math_main_global_LoopCount, F
        BRA     LOOPU3232A

        RLCF    math_main_global_XHi_1,W
        RLCF    math_main_global_Remainder_1, F
        RLCF    math_main_global_Remainder_2, F
        RLCF    math_main_global_RemainderHi_1, F
        RLCF    math_main_global_RemainderHi_2, F
        RLCF    math_main_global_TEMPB, F
        MOVF    math_main_global_Y_1,W
        BTFSS   math_main_global_XHi_2,0
        BRA     UADD22L8

        SUBWF   math_main_global_Remainder_1, F
        MOVF    math_main_global_Y_2,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_Y_2,W
        SUBWF   math_main_global_Remainder_2, F
        MOVF    math_main_global_YHi_1,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_YHi_1,W
        SUBWF   math_main_global_RemainderHi_1, F
        MOVF    math_main_global_YHi_2,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_YHi_2,W
        SUBWF   math_main_global_RemainderHi_2, F
        CLRF    WREG
        BTFSS   STATUS,C,0
        MOVLW   1
        SUBWF   math_main_global_TEMPB, F
        BRA     UOK22L8

    UADD22L8:
        ADDWF   math_main_global_Remainder_1, F
        MOVF    math_main_global_Y_2,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_Y_2,W
        ADDWF   math_main_global_Remainder_2, F
        MOVF    math_main_global_YHi_1,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_YHi_1,W
        ADDWF   math_main_global_RemainderHi_1, F
        MOVF    math_main_global_YHi_2,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_YHi_2,W
        ADDWF   math_main_global_RemainderHi_2, F
        CLRF    WREG
        BTFSC   STATUS,C,0
        MOVLW   1
        ADDWF   math_main_global_TEMPB, F

    UOK22L8:
        RLCF    math_main_global_XHi_1, F

        MOVLW   7
        MOVWF   math_main_global_LoopCount

    LOOPU3232B:
        RLCF    math_main_global_XHi_1,W
        RLCF    math_main_global_Remainder_1, F
        RLCF    math_main_global_Remainder_2, F
        RLCF    math_main_global_RemainderHi_1, F
        RLCF    math_main_global_RemainderHi_2, F
        RLCF    math_main_global_TEMPB, F
        MOVF    math_main_global_Y_1,W
        BTFSS   math_main_global_XHi_1,0
        BRA     UADD22LB

        SUBWF   math_main_global_Remainder_1, F
        MOVF    math_main_global_Y_2,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_Y_2,W
        SUBWF   math_main_global_Remainder_2, F
        MOVF    math_main_global_YHi_1,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_YHi_1,W
        SUBWF   math_main_global_RemainderHi_1, F
        MOVF    math_main_global_YHi_2,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_YHi_2,W
        SUBWF   math_main_global_RemainderHi_2, F
        CLRF    WREG
        BTFSS   STATUS,C,0
        MOVLW   1
        SUBWF   math_main_global_TEMPB, F
        BRA     UOK22LB

    UADD22LB:
        ADDWF   math_main_global_Remainder_1, F
        MOVF    math_main_global_Y_2,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_Y_2,W
        ADDWF   math_main_global_Remainder_2, F
        MOVF    math_main_global_YHi_1,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_YHi_1,W
        ADDWF   math_main_global_RemainderHi_1, F
        MOVF    math_main_global_YHi_2,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_YHi_2,W
        ADDWF   math_main_global_RemainderHi_2, F
        CLRF    WREG
        BTFSC   STATUS,C,0
        MOVLW   1
        ADDWF   math_main_global_TEMPB, F

    UOK22LB:
        RLCF    math_main_global_XHi_1, F

        DECFSZ  math_main_global_LoopCount, F
        BRA     LOOPU3232B

        RLCF    math_main_global_X_2,W
        RLCF    math_main_global_Remainder_1, F
        RLCF    math_main_global_Remainder_2, F
        RLCF    math_main_global_RemainderHi_1, F
        RLCF    math_main_global_RemainderHi_2, F
        RLCF    math_main_global_TEMPB, F
        MOVF    math_main_global_Y_1,W
        BTFSS   math_main_global_XHi_1,0
        BRA     UADD22L16

        SUBWF   math_main_global_Remainder_1, F
        MOVF    math_main_global_Y_2,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_Y_2,W
        SUBWF   math_main_global_Remainder_2, F
        MOVF    math_main_global_YHi_1,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_YHi_1,W
        SUBWF   math_main_global_RemainderHi_1, F
        MOVF    math_main_global_YHi_2,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_YHi_2,W
        SUBWF   math_main_global_RemainderHi_2, F
        CLRF    WREG
        BTFSS   STATUS,C,0
        MOVLW   1
        SUBWF   math_main_global_TEMPB, F
        BRA     UOK22L16

    UADD22L16:
        ADDWF   math_main_global_Remainder_1, F
        MOVF    math_main_global_Y_2,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_Y_2,W
        ADDWF   math_main_global_Remainder_2, F
        MOVF    math_main_global_YHi_1,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_YHi_1,W
        ADDWF   math_main_global_RemainderHi_1, F
        MOVF    math_main_global_YHi_2,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_YHi_2,W
        ADDWF   math_main_global_RemainderHi_2, F
        CLRF    WREG
        BTFSC   STATUS,C,0
        MOVLW   1
        ADDWF   math_main_global_TEMPB, F

    UOK22L16:
        RLCF    math_main_global_X_2, F

        MOVLW   7
        MOVWF   math_main_global_LoopCount

    LOOPU3232C:
        RLCF    math_main_global_X_2,W
        RLCF    math_main_global_Remainder_1, F
        RLCF    math_main_global_Remainder_2, F
        RLCF    math_main_global_RemainderHi_1, F
        RLCF    math_main_global_RemainderHi_2, F
        RLCF    math_main_global_TEMPB, F
        MOVF    math_main_global_Y_1,W
        BTFSS   math_main_global_X_2,0
        BRA     UADD22LC

        SUBWF   math_main_global_Remainder_1, F
        MOVF    math_main_global_Y_2,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_Y_2,W
        SUBWF   math_main_global_Remainder_2, F
        MOVF    math_main_global_YHi_1,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_YHi_1,W
        SUBWF   math_main_global_RemainderHi_1, F
        MOVF    math_main_global_YHi_2,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_YHi_2,W
        SUBWF   math_main_global_RemainderHi_2, F
        CLRF    WREG
        BTFSS   STATUS,C,0
        MOVLW   1
        SUBWF   math_main_global_TEMPB, F
        BRA     UOK22LC

    UADD22LC:
        ADDWF   math_main_global_Remainder_1, F
        MOVF    math_main_global_Y_2,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_Y_2,W
        ADDWF   math_main_global_Remainder_2, F
        MOVF    math_main_global_YHi_1,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_YHi_1,W
        ADDWF   math_main_global_RemainderHi_1, F
        MOVF    math_main_global_YHi_2,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_YHi_2,W
        ADDWF   math_main_global_RemainderHi_2, F
        CLRF    WREG
        BTFSC   STATUS,C,0
        MOVLW   1
        ADDWF   math_main_global_TEMPB, F

    UOK22LC:
        RLCF    math_main_global_X_2, F

        DECFSZ  math_main_global_LoopCount, F
        BRA     LOOPU3232C

        RLCF    math_main_global_X_1,W
        RLCF    math_main_global_Remainder_1, F
        RLCF    math_main_global_Remainder_2, F
        RLCF    math_main_global_RemainderHi_1, F
        RLCF    math_main_global_RemainderHi_2, F
        RLCF    math_main_global_TEMPB, F
        MOVF    math_main_global_Y_1,W
        BTFSS   math_main_global_X_2,0
        BRA     UADD22L24

        SUBWF   math_main_global_Remainder_1, F
        MOVF    math_main_global_Y_2,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_Y_2,W
        SUBWF   math_main_global_Remainder_2, F
        MOVF    math_main_global_YHi_1,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_YHi_1,W
        SUBWF   math_main_global_RemainderHi_1, F
        MOVF    math_main_global_YHi_2,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_YHi_2,W
        SUBWF   math_main_global_RemainderHi_2, F
        CLRF    WREG
        BTFSS   STATUS,C,0
        MOVLW   1
        SUBWF   math_main_global_TEMPB, F
        BRA     UOK22L24

    UADD22L24:
        ADDWF   math_main_global_Remainder_1, F
        MOVF    math_main_global_Y_2,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_Y_2,W
        ADDWF   math_main_global_Remainder_2, F
        MOVF    math_main_global_YHi_1,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_YHi_1,W
        ADDWF   math_main_global_RemainderHi_1, F
        MOVF    math_main_global_YHi_2,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_YHi_2,W
        ADDWF   math_main_global_RemainderHi_2, F
        CLRF    WREG
        BTFSC   STATUS,C,0
        MOVLW   1
        ADDWF   math_main_global_TEMPB, F

    UOK22L24:
        RLCF    math_main_global_X_1, F

        MOVLW   7
        MOVWF   math_main_global_LoopCount

    LOOPU3232D:
        RLCF    math_main_global_X_1,W
        RLCF    math_main_global_Remainder_1, F
        RLCF    math_main_global_Remainder_2, F
        RLCF    math_main_global_RemainderHi_1, F
        RLCF    math_main_global_RemainderHi_2, F
        RLCF    math_main_global_TEMPB, F
        MOVF    math_main_global_Y_1,W
        BTFSS   math_main_global_X_1,0
        BRA     UADD22LD

        SUBWF   math_main_global_Remainder_1, F
        MOVF    math_main_global_Y_2,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_Y_2,W
        SUBWF   math_main_global_Remainder_2, F
        MOVF    math_main_global_YHi_1,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_YHi_1,W
        SUBWF   math_main_global_RemainderHi_1, F
        MOVF    math_main_global_YHi_2,W
        BTFSS   STATUS,C,0
        INCFSZ  math_main_global_YHi_2,W
        SUBWF   math_main_global_RemainderHi_2, F
        CLRF    WREG
        BTFSS   STATUS,C,0
        MOVLW   1
        SUBWF   math_main_global_TEMPB, F
        BRA     UOK22LD

    UADD22LD:
        ADDWF   math_main_global_Remainder_1, F
        MOVF    math_main_global_Y_2,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_Y_2,W
        ADDWF   math_main_global_Remainder_2, F
        MOVF    math_main_global_YHi_1,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_YHi_1,W
        ADDWF   math_main_global_RemainderHi_1, F
        MOVF    math_main_global_YHi_2,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_YHi_2,W
        ADDWF   math_main_global_RemainderHi_2, F
        CLRF    WREG
        BTFSC   STATUS,C,0
        MOVLW   1
        ADDWF   math_main_global_TEMPB, F

    UOK22LD:
        RLCF    math_main_global_X_1, F

        DECFSZ  math_main_global_LoopCount, F
        BRA     LOOPU3232D

        BTFSC   math_main_global_X_1,0
        BRA     UOK22L
        MOVF    math_main_global_Y_1,W
        ADDWF   math_main_global_Remainder_1, F
        MOVF    math_main_global_Y_2,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_Y_2,W
        ADDWF   math_main_global_Remainder_2, F
        MOVF    math_main_global_YHi_1,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_YHi_1,W
        ADDWF   math_main_global_RemainderHi_1, F
        MOVF    math_main_global_YHi_2,W
        BTFSC   STATUS,C,0
        INCFSZ  math_main_global_YHi_2,W
        ADDWF   math_main_global_RemainderHi_2, F

    UOK22L:
    }
}

/**
 * @brief 32x32 Bit Unsigned Fixed Point Multiply 32x32 -> 64.
 * @details Multiplies two 32-bit unsigned fixed point numbers to produce a 64-bit unsigned fixed point product.
 * @param[in]     X   The 32 bit unsigned fixed point multiplicand.
 * @param[in]     XHi The most significant part of the 32 bit unsigned fixed point multiplicand.
 * @param[in]     Y   The 32 bit unsigned fixed point multiplier.
 * @param[in]     YHi The most significant part of the 32 bit unsigned fixed point multiplier.
 * @param[out]    XHr The most significant part of the 64 bit unsigned fixed point product.
 * @param[out]    XHs The second most significant part of the 64 bit unsigned fixed point product.
 * @result The 64 bit unsigned fixed point product.
 *         X  <--  X * Y
 */
void Mul_32x32_U()
{
    asm {
        ;mov    ??COUNTER, #34        ; Load 32+2 in the counter
        ;mov    RESULT_0, #0h         ; Clear Product
        ;mov    RESULT_1, #0h
        ;mov    RESULT_2, #0h
        ;mov    RESULT_3, #0h
        MOVLW   34
        MOVWF   math_main_global_LoopCount
        CLRF    math_main_global_XHr_1
        CLRF    math_main_global_XHr_2
        CLRF    math_main_global_XHs_1
        CLRF    math_main_global_XHs_2

    _NEXT:
        ;DEC    ??COUNTER
        ;jz     _EXIT2
        ;clc                       ; Clear carry flag
        DECF    math_main_global_LoopCount, F
        BTFSC   STATUS, Z
        BRA     _EXIT2
        BCF     STATUS, C

    _LOOP:
        ;rrc    RESULT_3
        ;rrc    RESULT_2
        ;rrc    RESULT_1
        ;rrc    RESULT_0
        ;rrc    PRODUCT_3             ; Shift the sum
        ;rrc    PRODUCT_2             ; of partial products
        ;rrc    PRODUCT_1
        ;rrc    PRODUCT_0
        RRCF    math_main_global_XHs_2, F
        RRCF    math_main_global_XHs_1, F
        RRCF    math_main_global_XHr_2, F
        RRCF    math_main_global_XHr_1, F
        RRCF    math_main_global_XHi_2, F
        RRCF    math_main_global_XHi_1, F
        RRCF    math_main_global_X_2, F
        RRCF    math_main_global_X_1, F

        ;jnc    _NEXT
        ;dec    ??COUNTER
        ;jz     _EXIT1
        BTFSS   STATUS, C
        BRA     _NEXT
        DECF     math_main_global_LoopCount, F
        BTFSC    STATUS, Z
        BRA     _EXIT1

        ;add    RESULT_0, MULTIPLIER_0
        ;adc    RESULT_1, MULTIPLIER_1
        ;adc    RESULT_2, MULTIPLIER_2
        ;adc    RESULT_3, MULTIPLIER_3
        ;jmp    _LOOP
        MOVF    math_main_global_Y_1, W
        ADDWF   math_main_global_XHr_1, F
        MOVF    math_main_global_Y_2,W
        ;BTFSC  STATUS,C
        ;INCFSZ math_main_global_Y_2,W
        ADDWFC  math_main_global_XHr_2, F
        MOVF    math_main_global_YHi_1,W
        ;BTFSC  STATUS,C
        ;INCFSZ math_main_global_YHi_1,W
        ADDWFC  math_main_global_XHs_1, F
        MOVF    math_main_global_YHi_2,W
        ;BTFSC  STATUS,C
        ;INCFSZ math_main_global_YHi_2,W
        ADDWFC  math_main_global_XHs_2, F

        BRA   _LOOP

    _EXIT1:
        ;add    RESULT_0, MULTIPLIER_0
        ;adc    RESULT_1, MULTIPLIER_1
        ;adc    RESULT_2, MULTIPLIER_2
        ;adc    RESULT_3, MULTIPLIER_3
        MOVF    math_main_global_Y_1, W
        ADDWF   math_main_global_XHr_1, F
        MOVF    math_main_global_Y_2,W
        ;BTFSC  STATUS,C
        ;INCFSZ math_main_global_Y_2,W
        ADDWFC  math_main_global_XHr_2, F
        MOVF    math_main_global_YHi_1,W
        ;BTFSC  STATUS,C
        ;INCFSZ math_main_global_YHi_1,W
        ADDWFC  math_main_global_XHs_1, F
        MOVF    math_main_global_YHi_2,W
        ;BTFSC  STATUS,C
        ;INCFSZ math_main_global_YHi_2,W
        ADDWFC  math_main_global_XHs_2, F


    _EXIT2:
    }
}

/**
 * @brief 32x32 Bit Signed Fixed Point Multiply 32x32 -> 64.
 * @details Multiplies two 32-bit signed fixed point numbers to produce a 64-bit signed fixed point product.
 * @param[in]     X   The 32 bit signed fixed point multiplicand.
 * @param[in]     XHi The most significant part of the 32 bit signed fixed point multiplicand.
 * @param[in]     Y   The 32 bit signed fixed point multiplier.
 * @param[in]     YHi The most significant part of the 32 bit signed fixed point multiplier.
 * @param[out]    XHr The most significant part of the 64 bit signed fixed point product.
 * @param[out]    XHs The second most significant part of the 64 bit signed fixed point product.
 * @result The 64 bit signed fixed point product.
 *         X  <--  X * Y
 */
void Mul_32x32_S()
{
    asm {
        ;mov    ??SIGNBYTE, #0h
        CLRF    math_main_global_Sign

    _IF_FIRST:
        ;tm     PRODUCT_3, #080h        ; if multiplier is positive,
        ;jz     _IF_SECOND              ; go forward
        BTFSS   math_main_global_XHi_2, 7
        BRA     _IF_SECOND

    _INVERCE_FIRST:
        ;xor    PRODUCT_0, #0FFh       ; else invert
        ;xor    PRODUCT_1, #0FFh
        ;xor    PRODUCT_2, #0FFh
        ;xor    PRODUCT_3, #0FFh
        COMF    math_main_global_X_1, F
        COMF    math_main_global_X_2, F
        COMF    math_main_global_XHi_1, F
        COMF    math_main_global_XHi_2, F

        ;inc    PRODUCT_0
        ;adc    PRODUCT_1, #0
        ;adc    PRODUCT_2, #0
        ;adc    PRODUCT_3, #0
        ;add    ??SIGNBYTE, #10000001b
        MOVLW   0
        INCF    math_main_global_X_1, F
        ;BTFSC  STATUS, Z
        ;INCF   math_main_global_X_2, F
        ADDWFC  math_main_global_X_2, F
        ;BTFSC  STATUS, Z
        ;INCF   math_main_global_XHi_1, F
        ADDWFC  math_main_global_XHi_1, F
        ;BTFSC  STATUS, Z
        ;INCF   math_main_global_XHi_2, F
        ADDWFC  math_main_global_XHi_2, F
        MOVLW   129
        ADDWF   math_main_global_Sign, F

    _IF_SECOND:
        ;tm     MULTIPLIER_3, #080h     ; if multiplier is positive,
        ;jz     _MULT                   ; go forward
        BTFSS   math_main_global_YHi_2, 7
        BRA     _MULT

    _INBERSE_SECOND:
        ;xor    MULTIPLIER_0, #0FFh    ; else, invert
        ;xor    MULTIPLIER_1, #0FFh
        ;xor    MULTIPLIER_2, #0FFh
        ;xor    MULTIPLIER_3, #0FFh
        COMF    math_main_global_Y_1, F
        COMF    math_main_global_Y_2, F
        COMF    math_main_global_YHi_1, F
        COMF    math_main_global_YHi_2, F

        ;inc    MULTIPLIER_0
        ;adc    MULTIPLIER_1, #0
        ;adc    MULTIPLIER_2, #0
        ;adc    MULTIPLIER_3, #0
        ;inc    ??SIGNBYTE
        MOVLW   0
        INCF    math_main_global_Y_1, F
        ;BTFSC  STATUS, Z
        ;INCF   math_main_global_Y_2, F
        ADDWFC  math_main_global_Y_2, F
        ;BTFSC  STATUS, Z
        ;INCF   math_main_global_YHi_1, F
        ADDWFC  math_main_global_YHi_1, F
        ;BTFSC  STATUS, Z
        ;INCF   math_main_global_YHi_2, F
        ADDWFC  math_main_global_YHi_2, F
        INCF    math_main_global_Sign, F

    _MULT:
    }
    Mul_32x32_U();

    asm {
        ;shr    ??SIGNBYTE             ; Verify if the sign
        ;jnc    _EXIT                  ; needs to be changed
        BTFSS   math_main_global_Sign, 0
        BRA     _EXIT

        ;xor    PRODUCT_0, #0FFh
        ;xor    PRODUCT_1, #0FFh
        ;xor    PRODUCT_2, #0FFh
        ;xor    PRODUCT_3, #0FFh
        COMF    math_main_global_X_1, F
        COMF    math_main_global_X_2, F
        COMF    math_main_global_XHi_1, F
        COMF    math_main_global_XHi_2, F

        ;xor    RESULT_0, #0FFh
        ;xor    RESULT_1, #0FFh
        ;xor    RESULT_2, #0FFh
        ;xor    RESULT_3, #0FFh
        COMF    math_main_global_XHr_1, F
        COMF    math_main_global_XHr_2, F
        COMF    math_main_global_XHs_1, F
        COMF    math_main_global_XHs_2, F

        ;inc    PRODUCT_0
        ;adc    PRODUCT_1, #0
        ;adc    PRODUCT_2, #0
        ;adc    PRODUCT_3, #0
        ;adc    RESULT_0, #0
        ;adc    RESULT_1, #0
        ;adc    RESULT_2, #0
        ;adc    RESULT_3, #0
        MOVLW   0
        INCF    math_main_global_X_1, F
        ;BTFSC  STATUS, Z
        ;INCF   math_main_global_X_2, F
        ADDWFC  math_main_global_X_2, F
        ;BTFSC  STATUS, Z
        ;INCF   math_main_global_XHi_1, F
        ADDWFC  math_main_global_XHi_1, F
        ;BTFSC  STATUS, Z
        ;INCF   math_main_global_XHi_2, F
        ADDWFC  math_main_global_XHi_2, F
        ;BTFSC  STATUS, Z
        ;INCF   math_main_global_XHr_1, F
        ADDWFC  math_main_global_XHr_1, F
        ;BTFSC  STATUS, Z
        ;INCF   math_main_global_XHr_2, F
        ADDWFC  math_main_global_XHr_2, F
        ;BTFSC  STATUS, Z
        ;INCF   math_main_global_XHs_1, F
        ADDWFC  math_main_global_XHs_1, F
        ;BTFSC  STATUS, Z
        ;INCF   math_main_global_XHs_2, F
        ADDWFC  math_main_global_XHs_2, F

    _EXIT:
    }
}
