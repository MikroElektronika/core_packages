#include <setjmp18.h>

char __Low_saveWREG;
char __Low_saveSTATUS;
char __Low_saveBSR;

void __CC2D()
{
    asm {
        _CC2D_Loop1:
        TBLRD*+
        MOVFF POSTINC1, TABLAT
        DECF R0, 1
        BNZ _CC2D_Loop1
    }
}

void __FillZeros()
{
    while ( FSR0 > FSR1 )
        POSTINC1 = 0;
}

void __CC2DW()
{
    asm {
        _CC2DL_Loop1:
        TBLRD*+
        MOVFF TABLAT, POSTINC1
        DECF   R0, 1
        BNZ _CC2DL_Loop1
        DECF   R1, 1
        BNZ _CC2DL_Loop1
    }
}

void __CA2AW()
{
    asm {
        MOVLW      0
        DECF       R0, 1
        SUBWFB     R1, 1
    L_loopCA2AWs:
        MOVFF      POSTINC2, POSTINC1
        DECF       R0, 1
        SUBWFB     R1, 1
        BC        L_loopCA2AWs
    }
}

void __CCA2AW()
{
    asm {
        MOVLW      0
        DECF       R0, 1
        SUBWFB     R1, 1
    L_loopCCA2AWs:
        TBLRD*+
        MOVFF      TABLAT, POSTINC1
        DECF       R0, 1
        SUBWFB     R1, 1
        BC        L_loopCCA2AWs
    }
}

void __CS2S()
{
    asm {
    L_loopCS2Ss:
        MOVF       POSTINC2, 0
        BZ         L_CS2Send
        MOVWF      POSTINC1
        GOTO       L_loopCS2Ss
    L_CS2Send:
    }
}

void __CCS2S()
{
    asm {
    L_loopCCS2Ss:
        TBLRD*+
        MOVF       TABLAT, 0
        BZ         L_CCS2Send
        MOVWF      POSTINC1
        GOTO       L_loopCCS2Ss
    L_CCS2Send:
    }
}

void __FZinS()
{
    asm {
    L_loopFZinSWs:
        TSTFSZ     POSTINC1
        GOTO       L_loopFZinSWs
        MOVF       POSTDEC1, 0
    }
}

void ____DoIFC()
{
    asm MOVF  INTCON0, 0;
    asm MOVWF R2;
    INTCON0.GIE = 0;
    asm push;
    asm CLRF TOSU;
    asm MOVF R1, 0 asm MOVWF TOSH;
    asm MOVF R0, 0 asm MOVWF TOSL;
    asm BTFSC R2, GIE;
    asm BSF   INTCON0, GIE;
    return;
}

char Swap( char input )
{
    R0 = input;
    asm swapf R0, F return R0;
}

/**
 * @brief Saves calling position in jmp_buf for later use by longjmp.
 * @details This function saves the current environment (calling position) in the provided
 *          jmp_buf array for later use by the longjmp function.
 * @param env Array of type jmp_buf suitable for holding the information needed for restoring
 *            the calling environment.
 * @return If the return is from a direct invocation, it returns 0. If the return is from a
 *         call to longjmp, it returns a nonzero value.
 */
int setjmp( jmp_buf env )
{
    env[ 3 ] = STKPTR;
    asm MOVF  INTCON0, 0;
    asm MOVWF R2;
    INTCON0.GIE = 0;
    asm {
        MOVFF        FARG_setjmp_env+0, FSR1L
        MOVFF        FARG_setjmp_env+1, FSR1H
        MOVF        TOSU, W
        MOVWF       POSTINC1
        MOVF        TOSH, W
        MOVWF       POSTINC1
        MOVF        TOSL, W
        MOVWF       INDF1
    }
    asm BTFSC R2, GIE;
    asm BSF   INTCON0, GIE;
    return 0;
}

/**
 * @brief Restores calling position saved in jmp_buf by the most recent invocation of setjmp.
 * @details This function restores the calling environment saved in the provided jmp_buf by
 *          the most recent invocation of the setjmp macro. If there has been no such invocation,
 *          or if the function containing the invocation of setjmp has terminated in the interim,
 *          the behavior is undefined.
 * @param env Array of type jmp_buf holding the information saved by the corresponding setjmp invocation.
 * @param val Char value that will be returned by the corresponding setjmp. If val is 0, setjmp will return 1.
 * @return longjmp causes setjmp to return val. If val is 0, setjmp will return 1.
 */
void longjmp( jmp_buf env, int val )
{
    if ( !val )
        val = 1;
    asm MOVF  INTCON0, 0;
    asm MOVWF R2;
    INTCON0.GIE = 0;
    STKPTR      = env[ 3 ];
    asm {
        MOVFF       FARG_longjmp_env+0, FSR0L
        MOVFF       FARG_longjmp_env+1, FSR0H
        MOVF        POSTINC0, W
        MOVWF       TOSU
        MOVF        POSTINC0, W
        MOVWF       TOSH
        MOVF        INDF0, W
        MOVWF       TOSL
        MOVFF       FARG_longjmp_env+2, R0
    }
    asm BTFSC R2, GIE;
    asm BSF   INTCON0, GIE;
}
