//kopiranje iz cdata u (data v idata) prostore
//dptr sadrzi adresu iz cdata, r0 sadrzi adresu iz (data,idata)
//r1 broj bajtova koji treba prebaciti (max 255)

char __Low_saveWREG;  // koriste se za spasavanje konteksa za low interrupt funckiju, moraju biti u access banci
char __Low_saveSTATUS;
char __Low_saveBSR;

void __CC2D(){
 asm{
     _CC2D_Loop1:
     TBLRD*+
     MOVFF POSTINC1, TABLAT
     DECF R0, 1
     BNZ _CC2D_Loop1
    }
}

void __FillZeros(){
     while(FSR0 > FSR1)
        POSTINC1 = 0;
}

void __CC2DW(){
 asm{
     _CC2DL_Loop1:
     TBLRD*+
     MOVFF TABLAT, POSTINC1
     DECF   R0, 1
     BNZ _CC2DL_Loop1
     DECF   R1, 1
     BNZ _CC2DL_Loop1
    }
}

void __CA2AW(){
    asm{
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

void __CCA2AW(){
    asm{
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

void __CS2S(){
    asm{
      L_loopCS2Ss:
          MOVF       POSTINC2, 0
          BZ         L_CS2Send
          MOVWF      POSTINC1
          GOTO       L_loopCS2Ss
      L_CS2Send:
    }
}

void __CCS2S(){
    asm{
      L_loopCCS2Ss:
          TBLRD*+
          MOVF       TABLAT, 0
          BZ         L_CCS2Send
          MOVWF      POSTINC1
          GOTO       L_loopCCS2Ss
      L_CCS2Send:
    }
}

void __FZinS(){
    asm{
      L_loopFZinSWs:
          TSTFSZ     POSTINC1
          GOTO       L_loopFZinSWs
          MOVF       POSTDEC1, 0
    }
}

void ____DoIFC(){
  asm MOVF INTCON0,0;
  asm MOVWF R2;                              // spasavanje GIE(INTCON0-a) mora da ide preko  R2 da bi contex saving sprecio interrupt , ne sme da se pamti ceo INTCON0 jer moze korisnik da ga menja
  INTCON0.GIE = 0;                            // disable interrupts
  asm push;                                  // menjanje i petljanje
  asm CLRF TOSU;                            // TOS-a
  asm MOVF R1,0
  asm MOVWF TOSH;
  asm MOVF R0,0
  asm MOVWF TOSL;
  asm BTFSC R2,GIE;
  asm BSF INTCON0,GIE;
  return;                                  // sad pozovi funkciju tako sto return odradi

}

char Swap(char input) {
  R0 = input;
  asm swapf R0, F
  return R0;
}

/******************************************************************************/
/*                                                                            */
/* FILENAME   : setjmp.c                                                      */
/* PROJECT    : Implementation of setjmp and longjmp                          */
/* CPU TYPE   : Microchip PIC18 family                                        */
/* COMPILER   : microC compiler for PIC v. 6.2.0.0 (241106)                   */
/*                                                                            */
/*                                                                            */
/**************************** CHANGE AND RELEASE LOG **************************/
/* Version | ACTION                                           |  DATE  | SIG  */
/* --------|--------------------------------------------------|--------|----- */
/*         |                                                  |        |      */
/*    0.00 | Created file                                     | 231106 | ST   */
/*                                                                            */
/******************************************************************************/

#include <setjmp18.h>

/******************************************************************************/
/*                                                                            */
/*  Function: setjmp                                                          */
/*  Purpose:  saves calling position in jmp_buf for later use by longjmp      */
/*  CallParams: env: array of type (jmp_buf) suitible for holding the         */
/*                   information needed for restoring calling environment     */
/*  ReturnValues:  if the return is from direct invocation it returns 0       */
/*                 if the return is from  a call to the longjmp               */
/*                 it reurns nonzero value                                    */
/****************************       CHANGE LOG       **************************/
/* Version | ACTION                                           |  DATE  | SIG  */
/* --------|--------------------------------------------------|--------|----- */
/*         |                                                  |        |      */
/*    0.00 | Created function setjmp                          | 231106 | ST   */
/*         |                                                  |        |      */
/******************************************************************************/
int setjmp(jmp_buf env){
  env[3] = STKPTR;
  asm  MOVF INTCON0,0;
  asm  MOVWF R2;                              // spasavanje GIE(INTCON0-a) mora da ide preko  R2 da bi contex saving sprecio interrupt , ne sme da se pamti ceo INTCON0 jer moze korisnik da ga menja
  INTCON0.GIE = 0;                            // disable interrupts
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
  asm BTFSC R2,GIE;
  asm BSF INTCON0,GIE;
  return 0;
}

/******************************************************************************/
/*                                                                            */
/*  Function: longjmp                                                         */
/*  Purpose:  restores calling position saved in jmp_buf by most recent       */
/*            invocation of setjmp macro. If there has been no such           */
/*            invocation, or function conatinig the invocation of setjmp has  */
/*            terminated in the interim, the behaviour is undefined           */
/*  CallParams: env: array of type (jmp_buf) holding the information          */
/*                   saved by corresponding setjmp invocation                 */
/*              val: char value, that will return corresponding setjmp        */
/*  ReturnValues:  longjmp causes setjmp to return val,if val is 0 it will    */
/*                 return 1                                                   */
/*                                                                            */
/****************************       CHANGE LOG       **************************/
/* Version | ACTION                                           |  DATE  | SIG  */
/* --------|--------------------------------------------------|--------|----- */
/*         |                                                  |        |      */
/*    0.00 | Created function                                 | 231106 | ST   */
/*         |                                                  |        |      */
/******************************************************************************/
void longjmp(jmp_buf  env, int val){
  if (!val)
    val = 1;
  asm  MOVF INTCON0,0;
  asm  MOVWF R2;                              // spasavanje GIE(INTCON0-a) mora da ide preko  R2 da bi contex saving sprecio interrupt , ne sme da se pamti ceo INTCON0 jer moze korisnik da ga menja
  INTCON0.GIE = 0;                            // disable interrupts
  STKPTR = env[3];
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
  asm BTFSC R2,GIE;
  asm BSF INTCON0,GIE;
}
