/*const unsigned char
 IOV = 0,     // bit0 = integer overflow flag
 FOV = 1,     // bit1 = floating point overflow flag
 FUN = 2,     // bit2 = floating point underflow flag
 FDZ = 3,     // bit3 = floating point divide by zero flag
 NAN = 4,     // bit4 = not-a-number exception flag
 DOM = 5,     // bit5 = domain error exception flag
 RND = 6,     // bit6 = floating point rounding flag, 0 = truncation
              //    1 = unbiased rounding to nearest 0
 SAT = 7,     // bit7 = floating point saturate flag, 0 = terminate on
              //    exception without saturation, 1 = terminate on
              //    exception with saturation to appropriate value

  EXPBIAS = 127,   // exponent bias value for the FP format
 EXPBIAS1 = 126,
EXPBIAS31 = 158;
*/

#define LSB  0
#define IOV  0       // bit0 = integer overflow flag
#define FOV  1       // bit1 = floating point overflow flag
#define FUN  2       // bit2 = floating point underflow flag
#define FDZ  3       // bit3 = floating point divide by zero flag
#define NAN  4	      // bit4 = not-a-number exception flag
#define DOM  5	      // bit5 = domain error exception flag
#define RND  6       // bit6 = floating point rounding flag, 0 = truncation
                          //    1 = unbiased rounding to nearest LSB
#define SAT  7       // bit7 = floating point saturate flag, 0 = terminate on
                          //    exception without saturation, 1 = terminate on
                          //    exception with saturation to appropriate value
#define MSB  7

#define EXPBIAS    127   // exponent bias value for the FP format
#define EXPBIAS1   126
#define EXPBIAS31  158

/* unsigned int
 main_global_XHi, main_global_XLo,
 main_global_YHi, main_global_YLo;
 unsigned short
 main_global_XExp, main_global_YExp,
 main_global_jmpFlg,
 main_global_FPFLAGS,               // floating point library exception flags
 main_global_SIGN,
 main_global_TEMPB0, main_global_TEMPB1, main_global_TEMPB2,
 main_global_AARGB4, main_global_AARGB5;
*/

/******************************************************************************/

#define math_double_main_global_jmpFlg    math_double_main_global_AARGB4
#define math_double_main_global_TEMPB2    math_double_main_global_AARGB5
#define math_double_main_global_TEMPB1    math_double_main_global_FPFLAGS

#define math_double_main_global_XLo_2     R0
#define math_double_main_global_XHi_1     R1
#define math_double_main_global_XHi_2     R2
#define math_double_main_global_XExp      R3

#define math_double_main_global_YLo_2     R4
#define math_double_main_global_YHi_1     R5
#define math_double_main_global_YHi_2     R6
#define math_double_main_global_YExp      R7

#define math_double_main_global_XLo_1    	R8
#define math_double_main_global_YLo_1    	R9
#define math_double_main_global_Sign      R10
#define math_double_main_global_FPFLAGS   R11 

#define math_double_main_global_AARGB4   	R12
#define math_double_main_global_AARGB5   	R13
#define math_double_main_global_TEMPB0    R14

//    OutStr                 : array[3] of char;
//    WREG                   : byte;

/*******************************************************************************
******************************* Helper routines ********************************
*******************************************************************************/

//------------------ Signals FP OVERFLOW
 void SETFOV32() {
//  main_global_XExp = main_global_XExp;
//  main_global_XHi = main_global_XHi;
//  main_global_XLo = main_global_XLo;
//  main_global_SIGN = main_global_SIGN;
//  main_global_FPFLAGS = main_global_FPFLAGS;
  
  asm {
    BSF       math_double_main_global_FPFLAGS,FOV
    BTFSS     math_double_main_global_FPFLAGS,SAT
    GOTO      SETFOV32EEE

    SETF      math_double_main_global_XExp
    SETF      math_double_main_global_XHi_2
    SETF      math_double_main_global_XHi_1
    SETF      math_double_main_global_XLo_2
    RLCF      math_double_main_global_Sign,F
    RRCF      math_double_main_global_XHi_2,F
    SETFOV32EEE:
    MOVLW     0xFF
  }
}

//----------------- Sets the result and flag for divide-by-zero
 void SETFDZ32() {
//  main_global_FPFLAGS = main_global_FPFLAGS;

  asm {
    CLRF      math_double_main_global_FPFLAGS
    BSF       math_double_main_global_FPFLAGS,FDZ
    MOVLW     0xFF
  }
}

//------------------ Sets the sign bit in final result
 void FIXSIGN32() {
//  main_global_XHi = main_global_XHi;
//  main_global_SIGN = main_global_SIGN;
  asm {
    BTFSS     math_double_main_global_Sign,7
    BCF       math_double_main_global_XHi_2,7
    MOVLW     0
  }
}

//------------------ Sets the result to be zero
 void RES032() {
//  main_global_XExp = main_global_XExp;
//  main_global_XHi = main_global_XHi;
//  main_global_XLo = main_global_XLo;
  
  asm {
    CLRF      math_double_main_global_XHi_2
    CLRF      math_double_main_global_XHi_1
    CLRF      math_double_main_global_XLo_2
    CLRF      math_double_main_global_XLo_1
    CLRF      math_double_main_global_XExp
    MOVLW     0
  }
}

//------------------ Signals FP UNDERFLOW
 void SETFUN32() {
//  main_global_XExp = main_global_XExp;
//  main_global_XHi = main_global_XHi;
//  main_global_XLo = main_global_XLo;
//  main_global_SIGN = main_global_SIGN;
//  main_global_FPFLAGS = main_global_FPFLAGS;
  
  asm {
    BSF       math_double_main_global_FPFLAGS,FUN
    BTFSS     math_double_main_global_FPFLAGS,SAT
    GOTO      SETFUN32EEE

    MOVLW     0x01
    MOVWF     math_double_main_global_XExp
    CLRF      math_double_main_global_XHi_2
    CLRF      math_double_main_global_XHi_1
    CLRF      math_double_main_global_XLo_2
    RLCF      math_double_main_global_Sign,F
    RRCF      math_double_main_global_XHi_2,F
    SETFUN32EEE:
    MOVLW     0xFF
  }
}

//-------------- Normalization routine
//----- Input:  40 bit unnormalized floating point number in XExp, XHi_2, XHi_1,
//-----          XLo_2, XLo_1 with sign in SIGN,7.
//----- Use:    CALL    NRM4032
//----- Output: 32 bit normalized floating point number in XExp, XHi_2, XHi_1, XLo_2
//----- Result: AARG  <--  NORMALIZE(AARG) }
 void NRM4032() {
//  main_global_XExp = main_global_XExp;
//  main_global_XHi = main_global_XHi;
//  main_global_XLo = main_global_XLo;
//  main_global_FPFLAGS = main_global_FPFLAGS;
//  main_global_jmpFlg = main_global_jmpFlg;
//  main_global_TEMPB0 = main_global_TEMPB0;
  
  asm {
    BTFSC     math_double_main_global_jmpFlg,0
    GOTO      NRMRND4032
    BTFSS     math_double_main_global_jmpFlg,1
    GOTO      NRM40JPSETFOV32
    NRM4032:
    CLRF      math_double_main_global_TEMPB0
    MOVLW     0x00
    CPFSGT    math_double_main_global_XHi_2
    GOTO      NRM4032A

    TNIB4032:
    MOVLW     0xF0
    ANDWF     math_double_main_global_XHi_2,W
    BTFSS     STATUS,Z,0
    GOTO      NORM4032

    SWAPF     math_double_main_global_XHi_2,F
    SWAPF     math_double_main_global_XHi_1,W
    ANDLW     0x0F
    ADDWF     math_double_main_global_XHi_2,F

    SWAPF     math_double_main_global_XHi_1,W
    ANDLW     0xF0
    MOVWF     math_double_main_global_XHi_1
    SWAPF     math_double_main_global_XLo_2,W
    ANDLW     0x0F
    ADDWF     math_double_main_global_XHi_1,F

    SWAPF     math_double_main_global_XLo_2,W
    ANDLW     0xF0
    MOVWF     math_double_main_global_XLo_2
    SWAPF     math_double_main_global_XLo_1,W
    ANDLW     0x0F
    ADDWF     math_double_main_global_XLo_2,F

    SWAPF     math_double_main_global_XLo_1,W
    ANDLW     0xF0
    MOVWF     math_double_main_global_XLo_1

    BSF       math_double_main_global_TEMPB0,2

    NORM4032:
    BCF       STATUS,C,0

    BTFSC     math_double_main_global_XHi_2,7
    GOTO      TNORMUN4032
    RLCF      math_double_main_global_XLo_1,F
    RLCF      math_double_main_global_XLo_2,F
    RLCF      math_double_main_global_XHi_1,F
    RLCF      math_double_main_global_XHi_2,F
    INCF      math_double_main_global_TEMPB0,F
    BTFSC     math_double_main_global_XHi_2,7
    GOTO      TNORMUN4032
    RLCF      math_double_main_global_XLo_1,F
    RLCF      math_double_main_global_XLo_2,F
    RLCF      math_double_main_global_XHi_1,F
    RLCF      math_double_main_global_XHi_2,F
    INCF      math_double_main_global_TEMPB0,F
    BTFSC     math_double_main_global_XHi_2,7
    GOTO      TNORMUN4032
    RLCF      math_double_main_global_XLo_1,F
    RLCF      math_double_main_global_XLo_2,F
    RLCF      math_double_main_global_XHi_1,F
    RLCF      math_double_main_global_XHi_2,F
    INCF      math_double_main_global_TEMPB0,F

    TNORMUN4032:
    MOVF      math_double_main_global_TEMPB0,W
    CPFSGT    math_double_main_global_XExp
    GOTO      NRM40JPSETFUN32
    SUBWF     math_double_main_global_XExp,F

    NRMRND4032:
    BTFSC     math_double_main_global_FPFLAGS,RND
    BTFSS     math_double_main_global_XLo_1,7
    GOTO      NRM40JPFIXSIGN32
    BSF       STATUS,C,0
    MOVLW     0x80
    CPFSGT    math_double_main_global_XLo_1
    RRCF      math_double_main_global_XLo_2,W
    MOVLW     0x00
    ADDWFC    math_double_main_global_XLo_2,F
    ADDWFC    math_double_main_global_XHi_1,F
    ADDWFC    math_double_main_global_XHi_2,F

    BTFSS     STATUS,C,0
    GOTO      NRM40JPFIXSIGN32
    RRCF      math_double_main_global_XHi_2,F
    RRCF      math_double_main_global_XHi_1,F
    RRCF      math_double_main_global_XLo_2,F
    INFSNZ    math_double_main_global_XExp,F
    GOTO      NRM40JPSETFOV32
    GOTO      NRM40JPFIXSIGN32

    NRM4032A:
    MOVFF     math_double_main_global_XHi_1,math_double_main_global_XHi_2
    MOVFF     math_double_main_global_XLo_2,math_double_main_global_XHi_1
    MOVFF     math_double_main_global_XLo_1,math_double_main_global_XLo_2
    CLRF      math_double_main_global_XLo_1
    MOVLW     0x00
    BSF       math_double_main_global_TEMPB0,3
    CPFSGT    math_double_main_global_XHi_2
    GOTO      NRM4032B

    TNIB4032A:
    MOVLW     0xF0
    ANDWF     math_double_main_global_XHi_2,W
    BTFSS     STATUS,Z,0
    GOTO      NORM4032A
    SWAPF     math_double_main_global_XHi_2,F
    SWAPF     math_double_main_global_XHi_1,W
    ANDLW     0x0F
    ADDWF     math_double_main_global_XHi_2,F

    SWAPF     math_double_main_global_XHi_1,W
    ANDLW     0xF0
    MOVWF     math_double_main_global_XHi_1
    SWAPF     math_double_main_global_XLo_2,W
    ANDLW     0x0F
    ADDWF     math_double_main_global_XHi_1,F

    SWAPF     math_double_main_global_XLo_2,W
    ANDLW     0xF0
    MOVWF     math_double_main_global_XLo_2

    BSF       math_double_main_global_TEMPB0,2

    NORM4032A:
    BCF       STATUS,C,0

    BTFSC     math_double_main_global_XHi_2,7
    GOTO      TNORMUN4032
    RLCF      math_double_main_global_XLo_2,F
    RLCF      math_double_main_global_XHi_1,F
    RLCF      math_double_main_global_XHi_2,F
    INCF      math_double_main_global_TEMPB0,F
    BTFSC     math_double_main_global_XHi_2,7
    GOTO      TNORMUN4032
    RLCF      math_double_main_global_XLo_2,F
    RLCF      math_double_main_global_XHi_1,F
    RLCF      math_double_main_global_XHi_2,F
    INCF      math_double_main_global_TEMPB0,F
    BTFSC     math_double_main_global_XHi_2,7
    GOTO      TNORMUN4032
    RLCF      math_double_main_global_XLo_2,F
    RLCF      math_double_main_global_XHi_1,F
    RLCF      math_double_main_global_XHi_2,F
    INCF      math_double_main_global_TEMPB0,F
    GOTO      TNORMUN4032

    NRM4032B:
    MOVFF     math_double_main_global_XHi_1,math_double_main_global_XHi_2
    MOVFF     math_double_main_global_XLo_2,math_double_main_global_XHi_1
    CLRF      math_double_main_global_XLo_2
    MOVLW     0x00
    BCF       math_double_main_global_TEMPB0,3
    BSF       math_double_main_global_TEMPB0,4
    CPFSGT    math_double_main_global_XHi_2
    GOTO      NRM4032C

    TNIB4032B:
    MOVLW     0xF0
    ANDWF     math_double_main_global_XHi_2,W
    BTFSS     STATUS,Z,0
    GOTO      NORM4032B

    SWAPF     math_double_main_global_XHi_2,F
    SWAPF     math_double_main_global_XHi_1,W
    ANDLW     0x0F
    ADDWF     math_double_main_global_XHi_2,F

    SWAPF     math_double_main_global_XHi_1,W
    ANDLW     0xF0
    MOVWF     math_double_main_global_XHi_1

    BSF       math_double_main_global_TEMPB0,2

    NORM4032B:
    BCF       STATUS,C,0
    BTFSC     math_double_main_global_XHi_2,7
    GOTO      TNORMUN4032
    RLCF      math_double_main_global_XHi_1,F
    RLCF      math_double_main_global_XHi_2,F
    INCF      math_double_main_global_TEMPB0,F
    BTFSC     math_double_main_global_XHi_2,7
    GOTO      TNORMUN4032
    RLCF      math_double_main_global_XHi_1,F
    RLCF      math_double_main_global_XHi_2,F
    INCF      math_double_main_global_TEMPB0,F
    BTFSC     math_double_main_global_XHi_2,7
    GOTO      TNORMUN4032
    RLCF      math_double_main_global_XHi_1,F
    RLCF      math_double_main_global_XHi_2,F
    INCF      math_double_main_global_TEMPB0,F
    GOTO      TNORMUN4032

    NRM4032C:
    MOVFF     math_double_main_global_XHi_1,math_double_main_global_XHi_2
    CLRF      math_double_main_global_XHi_1
    MOVLW     0x00
    BSF       math_double_main_global_TEMPB0,3
    CPFSGT    math_double_main_global_XHi_2
    GOTO      NRM40JPRES032

    TNIB4032C:
    MOVLW     0xF0
    ANDWF     math_double_main_global_XHi_2,W
    BTFSS     STATUS,Z,0
    GOTO      NORM4032C
    SWAPF     math_double_main_global_XHi_2,F

    BSF       math_double_main_global_TEMPB0,2

    NORM4032C:
    BCF       STATUS,C,0

    BTFSC     math_double_main_global_XHi_2,7
    GOTO      TNORMUN4032
    RLCF      math_double_main_global_XHi_2,F
    INCF      math_double_main_global_TEMPB0,F
    BTFSC     math_double_main_global_XHi_2,7
    GOTO      TNORMUN4032
    RLCF      math_double_main_global_XHi_2,F
    INCF      math_double_main_global_TEMPB0,F
    BTFSC     math_double_main_global_XHi_2,7
    GOTO      TNORMUN4032
    RLCF      math_double_main_global_XHi_2,F
    INCF      math_double_main_global_TEMPB0,F
    GOTO      TNORMUN4032

    NRM40JPSETFUN32:
    MOVLW     0x01
    MOVWF     math_double_main_global_jmpFlg
  }
    SETFUN32();
  asm {
    GOTO      NRM40EEE
    NRM40JPFIXSIGN32:
    MOVLW     0x02
    MOVWF     math_double_main_global_jmpFlg
  }
    FIXSIGN32();
  asm {
    GOTO      NRM40EEE
    NRM40JPSETFOV32:
    MOVLW     0x04
    MOVWF     math_double_main_global_jmpFlg
  }
    SETFOV32();
  asm {
    GOTO      NRM40EEE
    NRM40JPRES032:
    MOVLW     0x08
    MOVWF     math_double_main_global_jmpFlg
  }
    RES032();
  asm {
    NRM40EEE:
  }
  /*switch (main_global_jmpFlg) {
    case 1: SETFUN32(); break;
    case 2: FIXSIGN32(); break;
    case 4: SETFOV32(); break;
    case 8: RES032();*/
  
}

//-------------- Normalization routine
//----- Input:  32 bit unnormalized floating point number in XExp, XHi_2, XHi_1,
//-----         XLo_2, with sign in SIGN,7
//----- Output: 32 bit normalized floating point number in XExp, XHi_2, XHi_1, XLo_2
//----- Result: AARG  <--  NORMALIZE(AARG)}
 void NRM3232() {
//  main_global_XExp = main_global_XExp;
//  main_global_XHi = main_global_XHi;
//  main_global_XLo = main_global_XLo;
//  main_global_jmpFlg = main_global_jmpFlg;
//  main_global_TEMPB0 = main_global_TEMPB0;

  asm {
      CLRF    math_double_main_global_jmpFlg
      CLRF    math_double_main_global_TEMPB0
      MOVF    math_double_main_global_XHi_2,W
      BTFSS   STATUS,Z,0
      GOTO    NORM3232
      MOVFF   math_double_main_global_XHi_1, math_double_main_global_XHi_2
      MOVFF   math_double_main_global_XLo_2, math_double_main_global_XHi_1
      CLRF    math_double_main_global_XLo_2
      BSF     math_double_main_global_TEMPB0,3

      MOVF    math_double_main_global_XHi_2,W
      BTFSS   STATUS,Z,0
      GOTO    NORM3232
      MOVFF   math_double_main_global_XHi_1, math_double_main_global_XHi_2
      CLRF    math_double_main_global_XHi_1
      BCF     math_double_main_global_TEMPB0,3
      BSF     math_double_main_global_TEMPB0,4

      MOVF    math_double_main_global_XHi_2,W
      BTFSC   STATUS,Z,0
      GOTO    JPNRES032
      NORM3232:
      MOVF    math_double_main_global_TEMPB0,W
      SUBWF   math_double_main_global_XExp,F
      BTFSS   STATUS,Z,0
      BTFSS   STATUS,C,0
      GOTO    JPNSETFUN32
      BCF     STATUS,C,0
      NORM3232A:
      BTFSC   math_double_main_global_XHi_2,7
      GOTO    JMPNFIXSIGN32
      RLCF    math_double_main_global_XLo_2,F
      RLCF    math_double_main_global_XHi_1,F
      RLCF    math_double_main_global_XHi_2,F
      DECFSZ  math_double_main_global_XExp,F
      GOTO    NORM3232A
      GOTO    JPNSETFUN32
      JPNRES032:
      MOVLW   0x01
      MOVWF   math_double_main_global_jmpFlg
  }
      RES032();
  asm{
      GOTO    NORM32EEE
      JPNSETFUN32:
      MOVLW   0x02
      MOVWF   math_double_main_global_jmpFlg
  }
      SETFUN32();
  asm {
      GOTO    NORM32EEE
      JMPNFIXSIGN32:
      MOVLW   0x04
      MOVWF   math_double_main_global_jmpFlg
  }
      FIXSIGN32();
  asm {
      NORM32EEE:
  }
  /*switch(main_global_jmpFlg) {
    case 1: RES032(); break;
    case 2: SETFUN32(); break;
    case 4: FIXSIGN32();
  }*/
}

//----------------- Sets the Integer Overflow flag in FPFLAGS
 void SETIOV3224() {
//  main_global_XHi = main_global_XHi;
//  main_global_XLo = main_global_XLo;
//  main_global_FPFLAGS = main_global_FPFLAGS;
//  main_global_SIGN = main_global_SIGN;

  asm {
    BSF       math_double_main_global_FPFLAGS,IOV
    BTFSS     math_double_main_global_FPFLAGS,SAT
    GOTO      SETIOV3224EEE

    CLRF      math_double_main_global_XHi_2
    BTFSS     math_double_main_global_Sign,7
    MOVLW     0xFF
    MOVWF     math_double_main_global_XHi_2
    MOVWF     math_double_main_global_XHi_1
    MOVWF     math_double_main_global_XLo_2
    RLCF      math_double_main_global_Sign,F
    RRCF      math_double_main_global_XHi_2,F
    SETIOV3224EEE:
    MOVLW     0xFF
  }
}

/*******************************************************************************
************************** Operation Routines **********************************
*******************************************************************************/

//-------------- Floating Point Add
//----- Input:  32 bit floating point number in XExp, XHi_2, XHi_1, XLo_2
//-----         32 bit floating point number in YExp, YHi_2, YHi_1, YLo_2
//----- Output: 32 bit floating point sum XExp, XHi_2, XHi_1, XLo_2
//----- Result: X  <--  X + Y }
 void Add_32x32_FP() {
//  main_global_XExp = main_global_XExp;
//  main_global_XHi = main_global_XHi;
//  main_global_XLo = main_global_XLo;
//  main_global_YExp = main_global_YExp;
//  main_global_YHi = main_global_YHi;
//  main_global_YLo = main_global_YLo;
//  main_global_FPFLAGS = main_global_FPFLAGS;
//  main_global_SIGN = main_global_SIGN;
//  main_global_jmpFlg = main_global_jmpFlg;
//  main_global_TEMPB0 = main_global_TEMPB0;
//  main_global_TEMPB1 = main_global_TEMPB1;

  asm {
    FPA32:
    MOVF      math_double_main_global_XHi_2,W
    XORWF     math_double_main_global_YHi_2,W
    MOVWF     math_double_main_global_TEMPB0

    CLRF      math_double_main_global_XLo_1
    CLRF      math_double_main_global_YLo_1
    CLRF      math_double_main_global_FPFLAGS

    MOVF      math_double_main_global_XExp,W
    CPFSGT    math_double_main_global_YExp
    GOTO      USEA32

    USEB32:
    MOVF      math_double_main_global_YHi_2,W
    MOVWF     math_double_main_global_Sign
    BSF       math_double_main_global_YHi_2,7
    BSF       math_double_main_global_XHi_2,7

    MOVF      math_double_main_global_XExp,W
    MOVWF     math_double_main_global_TEMPB1
    MOVF      math_double_main_global_YExp,W
    MOVWF     math_double_main_global_XExp

    MOVLW     0x00
    CPFSGT    math_double_main_global_TEMPB1
    GOTO      BRETURN32
    MOVF      math_double_main_global_TEMPB1,W
    SUBWF     math_double_main_global_YExp,F
    BTFSC     STATUS,Z,0
    GOTO      BLIGNED32

    MOVLW     7
    CPFSGT    math_double_main_global_YExp
    GOTO      BNIB32

    SUBWF     math_double_main_global_YExp,F
    MOVFF     math_double_main_global_XLo_2,math_double_main_global_XLo_1
    MOVFF     math_double_main_global_XHi_1,math_double_main_global_XLo_2
    MOVFF     math_double_main_global_XHi_2,math_double_main_global_XHi_1
    CLRF      math_double_main_global_XHi_2
    DCFSNZ    math_double_main_global_YExp,F
    GOTO      BLIGNED32

    CPFSGT    math_double_main_global_YExp
    GOTO      BNIB32A
    SUBWF     math_double_main_global_YExp,F
    MOVFF     math_double_main_global_XLo_2,math_double_main_global_XLo_1
    MOVFF     math_double_main_global_XHi_1,math_double_main_global_XLo_2
    CLRF      math_double_main_global_XHi_1
    DCFSNZ    math_double_main_global_YExp,F
    GOTO      BLIGNED32

    CPFSGT    math_double_main_global_YExp
    GOTO      BNIB32B
    SUBWF     math_double_main_global_YExp,F
    MOVFF     math_double_main_global_XLo_2,math_double_main_global_XLo_1
    CLRF      math_double_main_global_XLo_2
    DCFSNZ    math_double_main_global_YExp,F
    GOTO      BLIGNED32

    CPFSGT    math_double_main_global_YExp
    GOTO      BNIB32C

    BRETURN32:
    MOVFF     math_double_main_global_Sign,math_double_main_global_XHi_2
    MOVFF     math_double_main_global_YHi_1,math_double_main_global_XHi_1
    MOVFF     math_double_main_global_YLo_2,math_double_main_global_XLo_2
    CLRF      math_double_main_global_XLo_1
    GOTO      ADDEOK

    BNIB32C:
    MOVLW     3
    CPFSGT    math_double_main_global_YExp
    GOTO      BLOOP32C
    SUBWF     math_double_main_global_YExp,F
    SWAPF     math_double_main_global_XLo_1,W
    ANDLW     0x0F
    MOVWF     math_double_main_global_XLo_1
    DCFSNZ    math_double_main_global_YExp,F
    GOTO      BLIGNED32

    BLOOP32C:
    BCF       STATUS,C,0
    RRCF      math_double_main_global_XLo_1,F
    DCFSNZ    math_double_main_global_YExp,F
    GOTO      BLIGNED32
    BCF       STATUS,C,0
    RRCF      math_double_main_global_XLo_1,F
    DCFSNZ    math_double_main_global_YExp,F
    GOTO      BLIGNED32
    BCF       STATUS,C,0
    RRCF      math_double_main_global_XLo_1,F
    GOTO      BLIGNED32

    BNIB32B:
    MOVLW     3
    CPFSGT    math_double_main_global_YExp
    GOTO      BLOOP32B
    SUBWF     math_double_main_global_YExp,F
    SWAPF     math_double_main_global_XLo_1,W
    ANDLW     0x0F
    MOVWF     math_double_main_global_XLo_1
    SWAPF     math_double_main_global_XLo_2,W
    ANDLW     0xF0
    ADDWF     math_double_main_global_XLo_1,F
    SWAPF     math_double_main_global_XLo_2,W
    ANDLW     0x0F
    MOVWF     math_double_main_global_XLo_2
    DCFSNZ    math_double_main_global_YExp,F
    GOTO      BLIGNED32

    BLOOP32B:
    BCF       STATUS,C,0
    RRCF      math_double_main_global_XLo_2,F
    RRCF      math_double_main_global_XLo_1,F
    DCFSNZ    math_double_main_global_YExp,F
    GOTO      BLIGNED32
    BCF       STATUS,C,0
    RRCF      math_double_main_global_XLo_2,F
    RRCF      math_double_main_global_XLo_1,F
    DCFSNZ    math_double_main_global_YExp,F
    GOTO      BLIGNED32
    BCF       STATUS,C,0
    RRCF      math_double_main_global_XLo_2,F
    RRCF      math_double_main_global_XLo_1,F
    GOTO      BLIGNED32

    BNIB32A:
    MOVLW     3
    CPFSGT    math_double_main_global_YExp
    GOTO      BLOOP32A
    SUBWF     math_double_main_global_YExp,F
    SWAPF     math_double_main_global_XLo_1,W
    ANDLW     0x0F
    MOVWF     math_double_main_global_XLo_1
    SWAPF     math_double_main_global_XLo_2,W
    ANDLW     0xF0
    ADDWF     math_double_main_global_XLo_1,F
    SWAPF     math_double_main_global_XLo_2,W
    ANDLW     0x0F
    MOVWF     math_double_main_global_XLo_2
    SWAPF     math_double_main_global_XHi_1,W
    ANDLW     0xF0
    ADDWF     math_double_main_global_XLo_2,F
    SWAPF     math_double_main_global_XHi_1,W
    ANDLW     0x0F
    MOVWF     math_double_main_global_XHi_1
    DCFSNZ    math_double_main_global_YExp,F
    GOTO      BLIGNED32

    BLOOP32A:
    BCF       STATUS,C,0
    RRCF      math_double_main_global_XHi_1,F
    RRCF      math_double_main_global_XLo_2,F
    RRCF      math_double_main_global_XLo_1,F
    DCFSNZ    math_double_main_global_YExp,F
    GOTO      BLIGNED32
    BCF       STATUS,C,0
    RRCF      math_double_main_global_XHi_1,F
    RRCF      math_double_main_global_XLo_2,F
    RRCF      math_double_main_global_XLo_1,F
    DCFSNZ    math_double_main_global_YExp,F
    GOTO      BLIGNED32
    BCF       STATUS,C,0
    RRCF      math_double_main_global_XHi_1,F
    RRCF      math_double_main_global_XLo_2,F
    RRCF      math_double_main_global_XLo_1,F
    GOTO      BLIGNED32

    BNIB32:
    MOVLW     3
    CPFSGT    math_double_main_global_YExp
    GOTO      BLOOP32
    SUBWF     math_double_main_global_YExp,F
    SWAPF     math_double_main_global_XLo_1,W
    ANDLW     0x0F
    MOVWF     math_double_main_global_XLo_1
    SWAPF     math_double_main_global_XLo_2,W
    ANDLW     0xF0
    ADDWF     math_double_main_global_XLo_1,F
    SWAPF     math_double_main_global_XLo_2,W
    ANDLW     0x0F
    MOVWF     math_double_main_global_XLo_2
    SWAPF     math_double_main_global_XHi_1,W
    ANDLW     0xF0
    ADDWF     math_double_main_global_XLo_2,F
    SWAPF     math_double_main_global_XHi_1,W
    ANDLW     0x0F
    MOVWF     math_double_main_global_XHi_1
    SWAPF     math_double_main_global_XHi_2,W
    ANDLW     0xF0
    ADDWF     math_double_main_global_XHi_1,F
    SWAPF     math_double_main_global_XHi_2,W
    ANDLW     0x0F
    MOVWF     math_double_main_global_XHi_2
    DCFSNZ    math_double_main_global_YExp,F
    GOTO      BLIGNED32

    BLOOP32:
    BCF       STATUS,C,0
    RRCF      math_double_main_global_XHi_2,F
    RRCF      math_double_main_global_XHi_1,F
    RRCF      math_double_main_global_XLo_2,F
    RRCF      math_double_main_global_XLo_1,F
    DCFSNZ    math_double_main_global_YExp,F
    GOTO      BLIGNED32
    BCF       STATUS,C,0
    RRCF      math_double_main_global_XHi_2,F
    RRCF      math_double_main_global_XHi_1,F
    RRCF      math_double_main_global_XLo_2,F
    RRCF      math_double_main_global_XLo_1,F
    DCFSNZ    math_double_main_global_YExp,F
    GOTO      BLIGNED32
    BCF       STATUS,C,0
    RRCF      math_double_main_global_XHi_2,F
    RRCF      math_double_main_global_XHi_1,F
    RRCF      math_double_main_global_XLo_2,F
    RRCF      math_double_main_global_XLo_1,F

    BLIGNED32:
    CLRF      math_double_main_global_YLo_1
    MOVLW     0x00
    BTFSS     math_double_main_global_TEMPB0,7
    GOTO      AOK32
    COMF      math_double_main_global_XLo_1,F
    COMF      math_double_main_global_XLo_2,F
    COMF      math_double_main_global_XHi_1,F
    COMF      math_double_main_global_XHi_2,F
    INCF      math_double_main_global_XLo_1,F
    ADDWFC    math_double_main_global_XLo_2,F
    ADDWFC    math_double_main_global_XHi_1,F
    ADDWFC    math_double_main_global_XHi_2,F
    GOTO      AOK32

    USEA32:
    MOVF      math_double_main_global_YExp,W
    BTFSS     STATUS,Z,0
    GOTO      BNE032
    GOTO      ADDEOK

    BNE032:
    CLRF      math_double_main_global_YLo_1
    MOVFF     math_double_main_global_XHi_2,math_double_main_global_Sign
    BSF       math_double_main_global_XHi_2,7
    BSF       math_double_main_global_YHi_2,7

    MOVF      math_double_main_global_YExp,W
    SUBWF     math_double_main_global_XExp,W
    MOVWF     math_double_main_global_YExp
    BTFSC     STATUS,Z,0
    GOTO      ALIGNED32

    MOVLW     7
    CPFSGT    math_double_main_global_YExp
    GOTO      ANIB32
    SUBWF     math_double_main_global_YExp,F
    MOVF      math_double_main_global_YLo_2,W
    MOVWF     math_double_main_global_YLo_1
    MOVF      math_double_main_global_YHi_1,W
    MOVWF     math_double_main_global_YLo_2
    MOVF      math_double_main_global_YHi_2,W
    MOVWF     math_double_main_global_YHi_1
    CLRF      math_double_main_global_YHi_2
    DCFSNZ    math_double_main_global_YExp,F
    GOTO      ALIGNED32

    MOVLW     7
    CPFSGT    math_double_main_global_YExp
    GOTO      ANIB32A
    SUBWF     math_double_main_global_YExp,F
    MOVF      math_double_main_global_YLo_2,W
    MOVWF     math_double_main_global_YLo_1
    MOVF      math_double_main_global_YHi_1,W
    MOVWF     math_double_main_global_YLo_2
    CLRF      math_double_main_global_YHi_1
    DCFSNZ    math_double_main_global_YExp,F
    GOTO      ALIGNED32

    MOVLW     7
    CPFSGT    math_double_main_global_YExp
    GOTO      ANIB32B
    SUBWF     math_double_main_global_YExp,F
    MOVF      math_double_main_global_YLo_2,W
    MOVWF     math_double_main_global_YLo_1
    CLRF      math_double_main_global_YLo_2
    DCFSNZ    math_double_main_global_YExp,F
    GOTO      ALIGNED32

    MOVLW     7
    CPFSGT    math_double_main_global_YExp
    GOTO      ANIB32C

    MOVFF     math_double_main_global_Sign, math_double_main_global_XHi_2
    GOTO      ADDEOK

    ANIB32C:
    MOVLW     3
    CPFSGT    math_double_main_global_YExp
    GOTO      ALOOP32C
    SUBWF     math_double_main_global_YExp,F
    SWAPF     math_double_main_global_YLo_1,W
    ANDLW     0x0F
    MOVWF     math_double_main_global_YLo_1
    DCFSNZ    math_double_main_global_YExp,F
    GOTO      ALIGNED32

    ALOOP32C:
    BCF       STATUS,C,0
    RRCF      math_double_main_global_YLo_1,F
    DCFSNZ    math_double_main_global_YExp,F
    GOTO      ALIGNED32
    BCF       STATUS,C,0
    RRCF      math_double_main_global_YLo_1,F
    DCFSNZ    math_double_main_global_YExp,F
    GOTO      ALIGNED32
    BCF       STATUS,C,0
    RRCF      math_double_main_global_YLo_1,F
    GOTO      ALIGNED32

    ANIB32B:
    MOVLW     3
    CPFSGT    math_double_main_global_YExp
    GOTO      ALOOP32B
    SUBWF     math_double_main_global_YExp,F
    SWAPF     math_double_main_global_YLo_1,W
    ANDLW     0x0F
    MOVWF     math_double_main_global_YLo_1
    SWAPF     math_double_main_global_YLo_2,W
    ANDLW     0xF0
    ADDWF     math_double_main_global_YLo_1,F
    SWAPF     math_double_main_global_YLo_2,W
    ANDLW     0x0F
    MOVWF     math_double_main_global_YLo_2
    DCFSNZ    math_double_main_global_YExp,F
    GOTO      ALIGNED32

    ALOOP32B:
    BCF       STATUS,C,0
    RRCF      math_double_main_global_YLo_2,F
    RRCF      math_double_main_global_YLo_1,F
    DCFSNZ    math_double_main_global_YExp,F
    GOTO      ALIGNED32
    BCF       STATUS,C,0
    RRCF      math_double_main_global_YLo_2,F
    RRCF      math_double_main_global_YLo_1,F
    DCFSNZ    math_double_main_global_YExp,F
    GOTO      ALIGNED32
    BCF       STATUS,C,0
    RRCF      math_double_main_global_YLo_2,F
    RRCF      math_double_main_global_YLo_1,F
    GOTO      ALIGNED32

    ANIB32A:
    MOVLW     3
    CPFSGT    math_double_main_global_YExp
    GOTO      ALOOP32A
    SUBWF     math_double_main_global_YExp,F
    SWAPF     math_double_main_global_YLo_1,W
    ANDLW     0x0F
    MOVWF     math_double_main_global_YLo_1
    SWAPF     math_double_main_global_YLo_2,W
    ANDLW     0xF0
    ADDWF     math_double_main_global_YLo_1,F
    SWAPF     math_double_main_global_YLo_2,W
    ANDLW     0x0F
    MOVWF     math_double_main_global_YLo_2
    SWAPF     math_double_main_global_YHi_1,W
    ANDLW     0xF0
    ADDWF     math_double_main_global_YLo_2,F
    SWAPF     math_double_main_global_YHi_1,W
    ANDLW     0x0F
    MOVWF     math_double_main_global_YHi_1
    DCFSNZ    math_double_main_global_YExp,F
    GOTO      ALIGNED32

    ALOOP32A:
    BCF       STATUS,C,0
    RRCF      math_double_main_global_YHi_1,F
    RRCF      math_double_main_global_YLo_2,F
    RRCF      math_double_main_global_YLo_1,F
    DCFSNZ    math_double_main_global_YExp,F
    GOTO      ALIGNED32
    BCF       STATUS,C,0
    RRCF      math_double_main_global_YHi_1,F
    RRCF      math_double_main_global_YLo_2,F
    RRCF      math_double_main_global_YLo_1,F
    DCFSNZ    math_double_main_global_YExp,F
    GOTO      ALIGNED32
    BCF       STATUS,C,0
    RRCF      math_double_main_global_YHi_1,F
    RRCF      math_double_main_global_YLo_2,F
    RRCF      math_double_main_global_YLo_1,F
    GOTO      ALIGNED32

    ANIB32:
    MOVLW     3
    CPFSGT    math_double_main_global_YExp
    GOTO      ALOOP32
    SUBWF     math_double_main_global_YExp,F
    SWAPF     math_double_main_global_YLo_1,W
    ANDLW     0x0F
    MOVWF     math_double_main_global_YLo_1
    SWAPF     math_double_main_global_YLo_2,W
    ANDLW     0xF0
    ADDWF     math_double_main_global_YLo_1,F
    SWAPF     math_double_main_global_YLo_2,W
    ANDLW     0x0F
    MOVWF     math_double_main_global_YLo_2
    SWAPF     math_double_main_global_YHi_1,W
    ANDLW     0xF0
    ADDWF     math_double_main_global_YLo_2,F
    SWAPF     math_double_main_global_YHi_1,W
    ANDLW     0x0F
    MOVWF     math_double_main_global_YHi_1
    SWAPF     math_double_main_global_YHi_2,W
    ANDLW     0xF0
    ADDWF     math_double_main_global_YHi_1,F
    SWAPF     math_double_main_global_YHi_2,W
    ANDLW     0x0F
    MOVWF     math_double_main_global_YHi_2
    DCFSNZ    math_double_main_global_YExp,F
    GOTO      ALIGNED32

    ALOOP32:
    BCF       STATUS,C,0
    RRCF      math_double_main_global_YHi_2,F
    RRCF      math_double_main_global_YHi_1,F
    RRCF      math_double_main_global_YLo_2,F
    RRCF      math_double_main_global_YLo_1,F
    DCFSNZ    math_double_main_global_YExp,F
    GOTO      ALIGNED32
    BCF       STATUS,C,0
    RRCF      math_double_main_global_YHi_2,F
    RRCF      math_double_main_global_YHi_1,F
    RRCF      math_double_main_global_YLo_2,F
    RRCF      math_double_main_global_YLo_1,F
    DCFSNZ    math_double_main_global_YExp,F
    GOTO      ALIGNED32
    BCF       STATUS,C,0
    RRCF      math_double_main_global_YHi_2,F
    RRCF      math_double_main_global_YHi_1,F
    RRCF      math_double_main_global_YLo_2,F
    RRCF      math_double_main_global_YLo_1,F

    ALIGNED32:
    CLRF      math_double_main_global_XLo_1
    MOVLW     0x00
    BTFSS     math_double_main_global_TEMPB0,7
    GOTO      AOK32
    COMF      math_double_main_global_YLo_1,F
    COMF      math_double_main_global_YLo_2,F
    COMF      math_double_main_global_YHi_1,F
    COMF      math_double_main_global_YHi_2,F
    INCF      math_double_main_global_YLo_1,F
    ADDWFC    math_double_main_global_YLo_2,F
    ADDWFC    math_double_main_global_YHi_1,F
    ADDWFC    math_double_main_global_YHi_2,F

    AOK32:
    MOVF      math_double_main_global_YLo_1,W
    ADDWF     math_double_main_global_XLo_1,F
    MOVF      math_double_main_global_YLo_2,W
    ADDWFC    math_double_main_global_XLo_2,F
    MOVF      math_double_main_global_YHi_1,W
    ADDWFC    math_double_main_global_XHi_1,F
    MOVF      math_double_main_global_YHi_2,W
    ADDWFC    math_double_main_global_XHi_2,F

    BTFSC     math_double_main_global_TEMPB0,7
    GOTO      ACOMP32
    BTFSS     STATUS,C,0
    GOTO      ADDJPNRMRND4032

    RRCF      math_double_main_global_XHi_2,F
    RRCF      math_double_main_global_XHi_1,F
    RRCF      math_double_main_global_XLo_2,F
    RRCF      math_double_main_global_XLo_1,F
    INCFSZ    math_double_main_global_XExp,F
    GOTO      ADDJPNRMRND4032
    GOTO      ADDJPSETFOV32

    ACOMP32:
    BTFSC     STATUS,C,0
    GOTO      ADDJPNRM4032
    MOVLW     0x00
    COMF      math_double_main_global_XLo_1,F
    COMF      math_double_main_global_XLo_2,F
    COMF      math_double_main_global_XHi_1,F
    COMF      math_double_main_global_XHi_2,F
    INCF      math_double_main_global_XLo_1,F
    ADDWFC    math_double_main_global_XLo_2,F
    ADDWFC    math_double_main_global_XHi_1,F
    ADDWFC    math_double_main_global_XHi_2,F
    BTG       math_double_main_global_Sign,7
    GOTO      ADDJPNRM4032

    ADDJPNRMRND4032:
    MOVLW     0x01
    MOVWF     math_double_main_global_jmpFlg
  }
    NRM4032();
  asm {
    GOTO      ADDEEE
    ADDJPNRM4032:
    MOVLW     0x02
    MOVWF     math_double_main_global_jmpFlg
  }
    NRM4032();
  asm {
    GOTO      ADDEEE
    ADDJPSETFOV32:
    MOVLW     0x04
    MOVWF     math_double_main_global_jmpFlg
  }
    SETFOV32();
  asm {
    GOTO      ADDEEE
    ADDEOK:
    MOVLW     0x00
    MOVWF     math_double_main_global_jmpFlg
    ADDEEE:
  }
  /*switch (main_global_jmpFlg) {
    case 1: NRM4032(); break;
    case 2: NRM4032(); break;
    case 4: SETFOV32();
  }*/
}

//-------------- Floating Point Subtract
//----- Input:  32 bit floating point number in XExp, XHi_2, XHi_1, XLo_2
//-----         32 bit floating point number in YExp, YHi_2, YHi_1, YLo_2
//----- Use:    CALL FPS32
//----- Output: 32 bit floating point difference in XExp, XHi_2, XHi_1, XLo_2
//----- Result: AARG  <--  AARG - BARG
 void Sub_32x32_FP() {
//  main_global_YHi = main_global_YHi;
  
  asm {
    FPS32:
    BTG       math_double_main_global_YHi_2,7
  }
  Add_32x32_FP();
}

//-------------- Floating Point Multiply
//----- Input:  32 bit floating point number in XExp, XHi_2, XHi_1, XLo_2
//-----         32 bit floating point number in YExp, YHi_2, YHi_1, YLo_2
//----- Use:    CALL    FPM32
//----- Output: 32 bit floating point product in XExp, XHi_2, XHi_1, XLo_2
//----- Result: AARG  <--  AARG * BARG  }
//----- Note:   Due to a lack of stack FPFLAGS is multiplexed with TEMPB0,since they are not alive at the same time
 void Mul_32x32_FP() { //izgleda da ce da mora da se prepeva,nece ako izbacim jmpFlg i vratim exception u temp umesto u fpflags
//  main_global_XExp = main_global_XExp;
//  main_global_XHi = main_global_XHi;
//  main_global_XLo = main_global_XLo;
//  main_global_YExp = main_global_YExp;
//  main_global_YHi = main_global_YHi;
//  main_global_YLo = main_global_YLo;
//  main_global_FPFLAGS = main_global_FPFLAGS;    // FPFLAGS is just overridden here as if the RND bit was set to zero; some intelligent solution should be found to return exceptions and allow users to choose rounding method by setting the RND bit
//  main_global_SIGN = main_global_SIGN;
//  main_global_jmpFlg = main_global_jmpFlg;      // kicked out
//  main_global_TEMPB0 = main_global_TEMPB0;
//  main_global_TEMPB1 = main_global_TEMPB1;
//  main_global_TEMPB2 = main_global_TEMPB2;
//  main_global_AARGB4 = main_global_AARGB4;

  asm {
    FPM32:
    ;CLRF      math_double_main_global_FPFLAGS
    CLRF      math_double_main_global_XLo_1
    CLRF      math_double_main_global_YLo_1

    MOVLW     0x00
    CPFSEQ    math_double_main_global_YExp
    CPFSGT    math_double_main_global_XExp
    GOTO      MULJPRES032

    M32BNE0:
    MOVF      math_double_main_global_XHi_2,W
    XORWF     math_double_main_global_YHi_2,W
    MOVWF     math_double_main_global_Sign

    MOVF      math_double_main_global_YExp,W
    ADDWF     math_double_main_global_XExp,F
    MOVLW     126
    BTFSS     STATUS,C,0
    GOTO      MTUN32

    SUBWF     math_double_main_global_XExp,F
    BTFSC     STATUS,C,0
    GOTO      MULJPSETFOV32
    GOTO      MOK32

    MTUN32:
    SUBWF     math_double_main_global_XExp,F
    BTFSS     STATUS,C,0
    GOTO      MULJPSETFUN32

    MOK32:
    BSF       math_double_main_global_XHi_2,7
    BSF       math_double_main_global_YHi_2,7

    MOVFF     math_double_main_global_XHi_2, math_double_main_global_TEMPB0
    MOVFF     math_double_main_global_XHi_1, math_double_main_global_TEMPB1
    MOVFF     math_double_main_global_XLo_2, math_double_main_global_TEMPB2

    MOVF      math_double_main_global_XLo_2, W
    MULWF     math_double_main_global_YLo_2
    MOVFF     PRODH, math_double_main_global_AARGB4

    MOVF      math_double_main_global_XHi_1,W
    MULWF     math_double_main_global_YHi_1
    MOVFF     PRODH, math_double_main_global_XLo_2
    MOVFF     PRODL, math_double_main_global_XLo_1

    MULWF     math_double_main_global_YLo_2
    MOVF      PRODL,W,0
    ADDWF     math_double_main_global_AARGB4,F
    MOVF      PRODH,W,0
    ADDWFC    math_double_main_global_XLo_1,F
    MOVLW     0x00
    ADDWFC    math_double_main_global_XLo_2,F

    MOVF      math_double_main_global_TEMPB2,W
    MULWF     math_double_main_global_YHi_1
    MOVF      PRODL,W,0
    ADDWF     math_double_main_global_AARGB4,F
    MOVF      PRODH,W,0
    ADDWFC    math_double_main_global_XLo_1,F
    MOVLW     0x00
    ADDWFC    math_double_main_global_XLo_2,F

    MOVF      math_double_main_global_XHi_2,W
    MULWF     math_double_main_global_YLo_2
    MOVF      PRODL,W,0
    ADDWF     math_double_main_global_XLo_1,F
    MOVF      PRODH,W,0
    ADDWFC    math_double_main_global_XLo_2,F
    MOVF      math_double_main_global_XHi_2,W
    MULWF     math_double_main_global_YHi_1
    CLRF      math_double_main_global_XHi_1
    MOVLW     0x00
    ADDWFC    math_double_main_global_XHi_1,F
    MOVF      PRODL,W,0
    ADDWF     math_double_main_global_XLo_2,F
    MOVF      PRODH,W,0
    ADDWFC    math_double_main_global_XHi_1,F

    MOVF      math_double_main_global_TEMPB2,W
    MULWF     math_double_main_global_YHi_2
    MOVF      PRODL,W,0
    ADDWF     math_double_main_global_XLo_1,F
    MOVF      PRODH,W,0
    ADDWFC    math_double_main_global_XLo_2,F
    CLRF      math_double_main_global_XHi_2
    MOVLW     0x00
    ADDWFC    math_double_main_global_XHi_1,F
    ADDWFC    math_double_main_global_XHi_2,F

    MOVF      math_double_main_global_TEMPB1,W
    MULWF     math_double_main_global_YHi_2
    MOVF      PRODL,W,0
    ADDWF     math_double_main_global_XLo_2,F
    MOVF      PRODH,W,0
    ADDWFC    math_double_main_global_XHi_1,F
    MOVLW     0x00
    ADDWFC    math_double_main_global_XHi_2,F

    MOVF      math_double_main_global_TEMPB0,W
    MULWF     math_double_main_global_YHi_2
    MOVF      PRODL,W,0
    ADDWF     math_double_main_global_XHi_1,F
    MOVF      PRODH,W,0
    ADDWFC    math_double_main_global_XHi_2,F

    BTFSC     math_double_main_global_XHi_2,7
    GOTO      MROUND32
    RLCF      math_double_main_global_XLo_1,F
    RLCF      math_double_main_global_XLo_2,F
    RLCF      math_double_main_global_XHi_1,F
    RLCF      math_double_main_global_XHi_2,F
    DECF      math_double_main_global_XExp,F
    BTFSC     STATUS,Z,0
    GOTO      MULJPSETFUN32

    MROUND32:
    ;BTFSC     math_double_main_global_FPFLAGS,RND
    ;BTFSS     math_double_main_global_XLo_1,7
    GOTO      MUL32OK
    BSF       STATUS,C,0
    MOVLW     0x80
    CPFSGT    math_double_main_global_XLo_1
    RRCF      math_double_main_global_XLo_2,W
    MOVLW     0x00
    ADDWFC    math_double_main_global_XLo_2,F
    ADDWFC    math_double_main_global_XHi_1,F
    ADDWFC    math_double_main_global_XHi_2,F

    BTFSS     STATUS,C,0
    GOTO      MUL32OK
    RRCF      math_double_main_global_XHi_2,F
    RRCF      math_double_main_global_XHi_1,F
    RRCF      math_double_main_global_XLo_2,F
    INFSNZ    math_double_main_global_XExp,F
    GOTO      MULJPSETFOV32

    MUL32OK:
    BTFSS     math_double_main_global_Sign,7
    BCF       math_double_main_global_XHi_2,7
    ;CLRF      math_double_main_global_jmpFlg
    MOVLW     0
    GOTO      MULEEE
    MULJPRES032:
    MOVLW     0x01
    ;MOVWF     math_double_main_global_jmpFlg
  }
    RES032();
  asm{  
    GOTO      MULEEE
    MULJPSETFOV32:
    MOVLW     0x02
    ;MOVWF     math_double_main_global_jmpFlg
  }  
    SETFOV32();
  asm{  
    GOTO      MULEEE
    MULJPSETFUN32:
    MOVLW     0x04
    ;MOVWF     math_double_main_global_jmpFlg
  }
    SETFUN32();
  asm{  
    MULEEE:
  }
  /*switch (main_global_jmpFlg) {
    case 1: RES032(); break;
    case 2: SETFOV32(); break;
    case 4: SETFUN32();
  }*/
}

//-------------- Floating Point Divide
//----- Input:  32 bit floating point dividend in XExp, XHi_2, XHi_1, XLo_2
//-----         32 bit floating point divisor in YExp, YHi_2, YHi_1, YLo_2
//----- Output: 32 bit floating point quotient in XExp, XHi_2, XHi_1, XLo_2
//----- Result: AARG  <--  AARG / BARG}
 void Div_32x32_FP() {
//  main_global_XExp = main_global_XExp;
//  main_global_XHi = main_global_XHi;
//  main_global_XLo = main_global_XLo;
//  main_global_YExp = main_global_YExp;
//  main_global_YHi = main_global_YHi;
//  main_global_YLo = main_global_YLo;
//  main_global_FPFLAGS = main_global_FPFLAGS;
//  main_global_SIGN = main_global_SIGN;
//  main_global_TEMPB0 = main_global_TEMPB0;
//  main_global_AARGB4 = main_global_AARGB4;
//  main_global_AARGB5 = main_global_AARGB5;
  
  // ako se deli sa nulom odmah izbaci max broj kao rezultat deljenja MŽ 20091006
  if (R4 == 0)
    if (R5 == 0)
      if (R6 == 0)
        if (R7 == 0) {
            R0 = 0xFF;
            R1 = 0xFF;
            R2 = 0x7F;
            R3 = 0xFF;
            return;
          }
  
  asm {
    FPD32:
    ;CLRF      math_double_main_global_FPFLAGS
    CLRF      math_double_main_global_XLo_1
    CLRF      math_double_main_global_YLo_1

    MOVF      math_double_main_global_YExp,W
    BTFSC     STATUS,Z,0
    GOTO      JPDSETFDZ32

    MOVF      math_double_main_global_XExp,W
    BTFSC     STATUS,Z,0
    GOTO      JPDRES032
    D32BNE0:
    MOVF      math_double_main_global_XHi_2,W
    XORWF     math_double_main_global_YHi_2,W
    MOVWF     math_double_main_global_Sign
    BSF       math_double_main_global_XHi_2,7
    BSF       math_double_main_global_YHi_2,7
    TALIGN32:
    CLRF      math_double_main_global_TEMPB0
    MOVFF     math_double_main_global_XHi_2, math_double_main_global_XLo_1
    MOVFF     math_double_main_global_XHi_1, math_double_main_global_AARGB4
    MOVFF     math_double_main_global_XLo_2, math_double_main_global_AARGB5

    MOVF      math_double_main_global_YLo_2,W
    SUBWF     math_double_main_global_AARGB5,F
    MOVF      math_double_main_global_YHi_1,W
    BTFSS     STATUS,C,0
    INCFSZ    math_double_main_global_YHi_1,W
    TS1ALIGN32:
    SUBWF     math_double_main_global_AARGB4,F
    MOVF      math_double_main_global_YHi_2,W
    BTFSS     STATUS,C,0
    INCFSZ    math_double_main_global_YHi_2,W
    TS2ALIGN32:
    SUBWF     math_double_main_global_XLo_1,F
    CLRF      math_double_main_global_XLo_1
    CLRF      math_double_main_global_AARGB4
    CLRF      math_double_main_global_AARGB5
    BTFSS     STATUS,C,0
    GOTO      DALIGN32OK

    BCF       STATUS,C,0
    RRCF      math_double_main_global_XHi_2,F
    RRCF      math_double_main_global_XHi_1,F
    RRCF      math_double_main_global_XLo_2,F
    RRCF      math_double_main_global_XLo_1,F
    MOVLW     0x01
    MOVWF     math_double_main_global_TEMPB0
    DALIGN32OK:
    MOVF      math_double_main_global_YExp,W
    SUBWF     math_double_main_global_XExp,F
    BTFSS     STATUS,C,0
    GOTO      ALTB32
    AGEB32:
    MOVLW     126
    ADDWF     math_double_main_global_TEMPB0,W
    ADDWF     math_double_main_global_XExp,F
    BTFSC     STATUS,C,0
    GOTO      JPDSETFOV32
    GOTO      DARGOK32
    ALTB32:
    MOVLW     126
    ADDWF     math_double_main_global_TEMPB0,W
    ADDWF     math_double_main_global_XExp,F
    BTFSS     STATUS,C,0
    GOTO      JPDSETFUN32
    DARGOK32:
    MOVLW     24
    MOVWF     math_double_main_global_TEMPB1
    DLOOP32:
    RLCF      math_double_main_global_AARGB5,F
    RLCF      math_double_main_global_AARGB4,F
    RLCF      math_double_main_global_XLo_1,F
    RLCF      math_double_main_global_XLo_2,F
    RLCF      math_double_main_global_XHi_1,F
    RLCF      math_double_main_global_XHi_2,F
    RLCF      math_double_main_global_TEMPB0,F

    MOVF      math_double_main_global_YLo_2,W
    SUBWF     math_double_main_global_XLo_2,F
    MOVF      math_double_main_global_YHi_1,W
    BTFSS     STATUS,C,0
    INCFSZ    math_double_main_global_YHi_1,W
    DS132:
    SUBWF     math_double_main_global_XHi_1,F
    MOVF      math_double_main_global_YHi_2,W
    BTFSS     STATUS,C,0
    INCFSZ    math_double_main_global_YHi_2,W
    DS232:
    SUBWF     math_double_main_global_XHi_2,F
    RLCF      math_double_main_global_YHi_2,W
    IORWF     math_double_main_global_TEMPB0,F
    BTFSS     math_double_main_global_TEMPB0,0
    GOTO      DREST32
    BSF       math_double_main_global_AARGB5,0
    GOTO      DOK32
    DREST32:
    MOVF      math_double_main_global_YLo_2,W
    ADDWF     math_double_main_global_XLo_2,F
    MOVF      math_double_main_global_YHi_1,W
    BTFSC     STATUS,C,0
    INCFSZ    math_double_main_global_YHi_1,W
    DAREST32:
    ADDWF     math_double_main_global_XHi_1,F
    MOVF      math_double_main_global_YHi_2,W
    BTFSC     STATUS,C,0
    INCF      math_double_main_global_YHi_2,W
    ADDWF     math_double_main_global_XHi_2,F
    BCF       math_double_main_global_AARGB5,0
    DOK32:
    DECFSZ    math_double_main_global_TEMPB1,F
    GOTO      DLOOP32
    DROUND32:
    ;BTFSC     math_double_main_global_FPFLAGS,RND
    ;BTFSS     math_double_main_global_AARGB5,0
    GOTO      DIV32OK
    BCF       STATUS,C,0
    RLCF      math_double_main_global_XLo_2,F
    RLCF      math_double_main_global_XHi_1,F
    RLCF      math_double_main_global_XHi_2,F
    RLCF      math_double_main_global_TEMPB0,F

    MOVF      math_double_main_global_YLo_2,W
    SUBWF     math_double_main_global_XLo_2,F
    MOVF      math_double_main_global_YHi_1,W
    BTFSS     STATUS,C,0
    INCFSZ    math_double_main_global_YHi_1,W
    SUBWF     math_double_main_global_XHi_1,F
    MOVF      math_double_main_global_YHi_2,W
    BTFSS     STATUS,C,0
    INCFSZ    math_double_main_global_YHi_2,W
    SUBWF     math_double_main_global_XHi_2,F
    RLCF      math_double_main_global_YHi_2,W
    IORWF     math_double_main_global_TEMPB0,W
    ANDLW     0x01
    ADDWF     math_double_main_global_AARGB5,F
    BTFSC     STATUS,C,0
    INCF      math_double_main_global_AARGB4,F
    BTFSC     STATUS,Z,0
    INCF      math_double_main_global_XLo_1,F
    BTFSS     STATUS,Z,0
    GOTO      DIV32OK
    RRCF      math_double_main_global_XLo_1,F
    RRCF      math_double_main_global_AARGB4,F
    RRCF      math_double_main_global_AARGB5,F
    INCF      math_double_main_global_XExp,F
    BTFSC     STATUS,Z,0
    GOTO      JPDSETFOV32
    DIV32OK:
    BTFSS     math_double_main_global_Sign,7
    BCF       math_double_main_global_XLo_1,7
    MOVF      math_double_main_global_XLo_1,W
    MOVWF     math_double_main_global_XHi_2
    MOVF      math_double_main_global_AARGB4,W
    MOVWF     math_double_main_global_XHi_1
    MOVF      math_double_main_global_AARGB5,W
    MOVWF     math_double_main_global_XLo_2

    ;CLRF      math_double_main_global_jmpFlg
    GOTO      DIV32EEE
    JPDSETFDZ32:
    MOVLW     0x01
    ;MOVWF     math_double_main_global_jmpFlg
  }
    SETFDZ32();  
  asm{
    GOTO      DIV32EEE
    JPDRES032:
    MOVLW     0x02
    ;MOVWF     math_double_main_global_jmpFlg
  }
    RES032(); 
  asm{
  	GOTO      DIV32EEE
    JPDSETFOV32:
    MOVLW     0x04
    ;MOVWF     math_double_main_global_jmpFlg
  }
    SETFOV32();
  asm{
    GOTO      DIV32EEE
    JPDSETFUN32:
    MOVLW     0x08
    ;MOVWF     math_double_main_global_jmpFlg
  }
    SETFUN32();
  asm{
    DIV32EEE:
  }
  /*switch (main_global_jmpFlg) {
    case 1: SETFDZ32(); break;
    case 2: RES032(); break;
    case 4: SETFOV32(); break;
    case 8: SETFUN32();
  }*/
}


/*******************************************************************************
*********************** Conversion routines ************************************
*******************************************************************************/

//-------------- Double to Longword conversion
//----- Input:  32 bit floating point number in XExp, XHi_2, XHi_1, XLo_2
//----- Output: 32 bit unsigned integer (Longword) right justified in XHi_2, XHi_1,
//-----         XLo_2, XLo_1
//----- Result: AARG  <--  INT(AARG)}
 void double2longword() {
//  main_global_XExp = main_global_XExp;
//  main_global_XHi = main_global_XHi;
//  main_global_XLo = main_global_XLo;
//  main_global_FPFLAGS = main_global_FPFLAGS;
//  main_global_SIGN = main_global_SIGN;
//  main_global_jmpFlg = main_global_jmpFlg;

  asm {
    INT3232U:
    CLRF      math_double_main_global_FPFLAGS
    CLRF      math_double_main_global_jmpFlg
    CLRF      math_double_main_global_Sign
    
    CLRF      math_double_main_global_XLo_1
    MOVF      math_double_main_global_XExp,W
    BTFSC     STATUS,Z,0
    GOTO      INT3232UEOK

    BSF       math_double_main_global_XHi_2,7

    MOVLW     158
    SUBWF     math_double_main_global_XExp,F
    BTFSC     math_double_main_global_XExp,7
    GOTO      SETEXP32U
    BTFSC     STATUS,Z,0
    GOTO      SETEXP32U
    GOTO      SETIOV32U
    SETEXP32U:
    NEGF      math_double_main_global_XExp

    MOVLW     8
    SUBWF     math_double_main_global_XExp,W
    BTFSS     STATUS,C,0
    GOTO      TSHIFT3232U
    MOVWF     math_double_main_global_XExp
    RLCF      math_double_main_global_XLo_1,F
    MOVFF     math_double_main_global_XLo_2, math_double_main_global_XLo_1
    MOVFF     math_double_main_global_XHi_1, math_double_main_global_XLo_2
    MOVFF     math_double_main_global_XHi_2, math_double_main_global_XHi_1
    CLRF      math_double_main_global_XHi_2

    MOVLW     8
    SUBWF     math_double_main_global_XExp,W
    BTFSS     STATUS,C,0
    GOTO      TSHIFT3232U
    MOVWF     math_double_main_global_XExp
    RLCF      math_double_main_global_XLo_1,F
    MOVFF     math_double_main_global_XLo_2, math_double_main_global_XLo_1
    MOVFF     math_double_main_global_XHi_1, math_double_main_global_XLo_2
    CLRF      math_double_main_global_XHi_1

    MOVLW     8
    SUBWF     math_double_main_global_XExp,W
    BTFSS     STATUS,C,0
    GOTO      TSHIFT3232U
    MOVWF     math_double_main_global_XExp
    RLCF      math_double_main_global_XLo_1,F
    MOVFF     math_double_main_global_XLo_2, math_double_main_global_XLo_1
    CLRF      math_double_main_global_XLo_2

    MOVLW     8
    SUBWF     math_double_main_global_XExp,W
    BTFSS     STATUS,C,0
    GOTO      TSHIFT3232U
    MOVWF     math_double_main_global_XExp
    RLCF     math_double_main_global_XLo_1,F
    CLRF      math_double_main_global_XLo_1

    MOVF      math_double_main_global_XExp,W
    BTFSS     STATUS,Z,0
    BCF       STATUS,C,0
    GOTO      SHIFT3232UOK
    TSHIFT3232U:
    MOVF      math_double_main_global_XExp,W
    BTFSC     STATUS,Z,0
    GOTO      SHIFT3232UOK
    SHIFT3232U:
    BCF       STATUS,C,0
    RRCF      math_double_main_global_XHi_2,F
    RRCF      math_double_main_global_XHi_1,F
    RRCF      math_double_main_global_XLo_2,F
    RRCF      math_double_main_global_XLo_1,F
    DECFSZ    math_double_main_global_XExp,F
    GOTO      SHIFT3232U
    SHIFT3232UOK:
    BTFSC     math_double_main_global_FPFLAGS,RND
    BTFSS     math_double_main_global_XLo_1,0
    GOTO      INT3232UOK
    BTFSS     STATUS,C,0
    GOTO      INT3232UOK
    INCF      math_double_main_global_XLo_1,F
    BTFSC     STATUS,Z,0
    INCF      math_double_main_global_XLo_2,F
    BTFSC     STATUS,Z,0
    INCF      math_double_main_global_XHi_1,F
    BTFSC     STATUS,Z,0
    INCF      math_double_main_global_XHi_2,F
    BTFSC     math_double_main_global_XHi_2,7
    GOTO      JPLSETIOV3224
    INT3232UOK:
    BTFSS     math_double_main_global_Sign,7
    GOTO      INT3232UEOK

    COMF      math_double_main_global_XHi_2,F
    COMF      math_double_main_global_XHi_1,F
    COMF      math_double_main_global_XLo_2,F
    COMF      math_double_main_global_XLo_1,F
    INCF      math_double_main_global_XLo_1,F
    BTFSC     STATUS,Z,0
    INCF      math_double_main_global_XLo_2,F
    BTFSC     STATUS,Z,0
    INCF      math_double_main_global_XHi_1,F
    BTFSC     STATUS,Z,0
    INCF      math_double_main_global_XHi_2,F
    GOTO      INT3232UEOK
    IRES032U:
    CLRF      math_double_main_global_XHi_2
    CLRF      math_double_main_global_XHi_1
    CLRF      math_double_main_global_XLo_2
    CLRF      math_double_main_global_XLo_1
    GOTO      INT3232UEOK
    SETIOV32U:
    BSF       math_double_main_global_FPFLAGS,IOV
    BTFSS     math_double_main_global_FPFLAGS,SAT
    GOTO      INT3232UEER

    CLRF      math_double_main_global_XHi_2
    BTFSS     math_double_main_global_Sign,7
    GOTO      INT3232UEER
    MOVWF     math_double_main_global_XHi_2
    MOVWF     math_double_main_global_XHi_1
    MOVWF     math_double_main_global_XLo_2
    MOVWF     math_double_main_global_XLo_1
    RLCF      math_double_main_global_Sign,F
    RRCF      math_double_main_global_XHi_2,F
    GOTO      INT3232UEER

    INT3232UEOK:
    MOVLW     0x00
    CLRF      math_double_main_global_jmpFlg
    GOTO      INT3232UEEE
    JPLSETIOV3224:
    MOVLW     0x01
    MOVWF     math_double_main_global_jmpFlg
  }
    SETIOV3224();
  asm {
    GOTO      INT3232UEEE
    INT3232UEER:
    MOVLW     0xFF
    INT3232UEEE:
    MOVF      math_double_main_global_XHi_2,W
    MOVWF     math_double_main_global_XExp
    MOVF      math_double_main_global_XHi_1,W
    MOVWF     math_double_main_global_XHi_2
    MOVF      math_double_main_global_XLo_2,W
    MOVWF     math_double_main_global_XHi_1
    MOVF      math_double_main_global_XLo_1,W
    MOVWF     math_double_main_global_XLo_2
  }
  /*switch (main_global_jmpFlg) {
    case 1 : SETIOV3224();
  }*/
}

//-------------- Double to Longint conversion
//----- Input:  32 bit floating point number in XExp, XHi_2, XHi_1, XLo_2
//----- Output: 32 bit 2's complement integer (Longint) right justified in XHi_2,
//-----         XHi_1, XLo_2, XLo_1
//----- Result: AARG  <--  INT(AARG)}
 void double2longint() {
//  main_global_XExp = main_global_XExp;
//  main_global_XHi = main_global_XHi;
//  main_global_XLo = main_global_XLo;
//  main_global_FPFLAGS = main_global_FPFLAGS;
//  main_global_SIGN = main_global_SIGN;
//  main_global_jmpFlg = main_global_jmpFlg;

  asm {
    INT3232:
    CLRF      math_double_main_global_FPFLAGS
    CLRF      math_double_main_global_jmpFlg

    CLRF      math_double_main_global_XLo_1
    MOVF      math_double_main_global_XExp,W
    BTFSC     STATUS,Z,0
    GOTO      INT3232EOK

    MOVFF     math_double_main_global_XHi_2, math_double_main_global_Sign
    BSF       math_double_main_global_XHi_2,7

    MOVLW     158
    SUBWF     math_double_main_global_XExp,F
    BTFSS     math_double_main_global_XExp,7
    GOTO      SETIOV32
    NEGF      math_double_main_global_XExp

    MOVLW     8
    SUBWF     math_double_main_global_XExp,W
    BTFSS     STATUS,C,0
    GOTO      TSHIFT3232
    MOVWF     math_double_main_global_XExp
    RLCF      math_double_main_global_XLo_1,F
    MOVFF     math_double_main_global_XLo_2, math_double_main_global_XLo_1
    MOVFF     math_double_main_global_XHi_1, math_double_main_global_XLo_2
    MOVFF     math_double_main_global_XHi_2, math_double_main_global_XHi_1
    CLRF      math_double_main_global_XHi_2

    MOVLW     8
    SUBWF     math_double_main_global_XExp,W
    BTFSS     STATUS,C,0
    GOTO      TSHIFT3232
    MOVWF     math_double_main_global_XExp
    RLCF      math_double_main_global_XLo_1,F
    MOVFF     math_double_main_global_XLo_2, math_double_main_global_XLo_1
    MOVFF     math_double_main_global_XHi_1, math_double_main_global_XLo_2
    CLRF      math_double_main_global_XHi_1

    MOVLW     8
    SUBWF     math_double_main_global_XExp,W
    BTFSS     STATUS,C,0
    GOTO      TSHIFT3232
    MOVWF     math_double_main_global_XExp
    RLCF      math_double_main_global_XLo_1,F
    MOVFF     math_double_main_global_XLo_2, math_double_main_global_XLo_1
    CLRF      math_double_main_global_XLo_2

    MOVLW     8
    SUBWF     math_double_main_global_XExp,W
    BTFSS     STATUS,C,0
    GOTO      TSHIFT3232
    MOVWF     math_double_main_global_XExp
    RLCF      math_double_main_global_XLo_1,F
    CLRF      math_double_main_global_XLo_1
    MOVF      math_double_main_global_XExp,W
    BTFSS     STATUS,Z,0
    BCF       STATUS,C,0
    GOTO      SHIFT3232OK
    TSHIFT3232:
    MOVF      math_double_main_global_XExp,W
    BTFSC     STATUS,Z,0
    GOTO      SHIFT3232OK
    SHIFT3232:
    BCF       STATUS,C,0
    RRCF      math_double_main_global_XHi_2,F
    RRCF      math_double_main_global_XHi_1,F
    RRCF      math_double_main_global_XLo_2,F
    RRCF      math_double_main_global_XLo_1,F
    DECFSZ    math_double_main_global_XExp,F
    GOTO      SHIFT3232
    SHIFT3232OK:
    BTFSC     math_double_main_global_FPFLAGS,RND
    BTFSS     math_double_main_global_XLo_1,0
    GOTO      INT3232OK
    BTFSS     STATUS,C,0
    GOTO      INT3232OK
    INCF      math_double_main_global_XLo_1,F
    BTFSC     STATUS,Z,0
    INCF      math_double_main_global_XLo_2,F
    BTFSC     STATUS,Z,0
    INCF      math_double_main_global_XHi_1,F
    BTFSC     STATUS,Z,0
    INCF      math_double_main_global_XHi_2,F
    BTFSC     math_double_main_global_XHi_2,7
    GOTO      JPISETIOV3224
    INT3232OK:
    BTFSS     math_double_main_global_Sign,7
    GOTO      INT3232EOK

    COMF      math_double_main_global_XHi_2,F
    COMF      math_double_main_global_XHi_1,F
    COMF      math_double_main_global_XLo_2,F
    COMF      math_double_main_global_XLo_1,F
    INCF      math_double_main_global_XLo_1,F
    BTFSC     STATUS,Z,0
    INCF      math_double_main_global_XLo_2,F
    BTFSC     STATUS,Z,0
    INCF      math_double_main_global_XHi_1,F
    BTFSC     STATUS,Z,0
    INCF      math_double_main_global_XHi_2,F
    GOTO      INT3232EOK
    IRES032:
    CLRF      math_double_main_global_XHi_2
    CLRF      math_double_main_global_XHi_1
    CLRF      math_double_main_global_XLo_2
    CLRF      math_double_main_global_XLo_1
    GOTO      INT3232EOK
    SETIOV32:
    BSF       math_double_main_global_FPFLAGS,IOV
    BTFSS     math_double_main_global_FPFLAGS,SAT
    GOTO      INT3232EER

    CLRF      math_double_main_global_XHi_2
    BTFSS     math_double_main_global_Sign,7
    GOTO      INT3232EER
    MOVWF     math_double_main_global_XHi_2
    MOVWF     math_double_main_global_XHi_1
    MOVWF     math_double_main_global_XLo_2
    MOVWF     math_double_main_global_XLo_1
    RLCF      math_double_main_global_Sign,F
    RRCF      math_double_main_global_XHi_2,F
    GOTO      INT3232EER

    INT3232EOK:
    CLRF      math_double_main_global_jmpFlg
    MOVLW     0x00
    GOTO      INT3232EEE
    JPISETIOV3224:
    MOVLW     0x01
    MOVWF     math_double_main_global_jmpFlg
    MOVLW     0x00
  }
    SETIOV3224();
  asm {
    GOTO      INT3232EEE
    INT3232EER:
    MOVLW     0xFF
    INT3232EEE:
    MOVF      math_double_main_global_XHi_2,W
    MOVWF     math_double_main_global_XExp
    MOVF      math_double_main_global_XHi_1,W
    MOVWF     math_double_main_global_XHi_2
    MOVF      math_double_main_global_XLo_2,W
    MOVWF     math_double_main_global_XHi_1
    MOVF      math_double_main_global_XLo_1,W
    MOVWF     math_double_main_global_XLo_2
  }
  /*switch (main_global_jmpFlg) {
    case 1: SETIOV3224();
  }*/
}

//-------------- Double to integer conversion
//----- Input:  32 bit floating point number (Double) in XExp, XHi_2, XHi_1, XLo_2
//----- Use:    CALL    INT3216
//----- Output: 16 bit 2's complement integer (Int) right justified in XHi_2, XHi_1
//----- Result: AARG  <--  INT(AARG)}
 void double2int() {
//  main_global_XExp = main_global_XExp;
//  main_global_XHi = main_global_XHi;
//  main_global_FPFLAGS = main_global_FPFLAGS;
//  main_global_SIGN = main_global_SIGN;
//  main_global_jmpFlg = main_global_jmpFlg;

  asm {
    INT3216:
    CLRF      math_double_main_global_FPFLAGS
    MOVF      math_double_main_global_XExp,W
    BTFSC     STATUS,Z,0
    GOTO      IRES016
    MOVF      math_double_main_global_XHi_2,W
    MOVWF     math_double_main_global_Sign
    BSF       math_double_main_global_XHi_2,7

    MOVLW     142
    SUBWF     math_double_main_global_XExp,F
    BTFSS     math_double_main_global_XExp,7
    GOTO      SETIOV16
    NEGF      math_double_main_global_XExp

    MOVLW     8
    SUBWF     math_double_main_global_XExp,W
    BTFSS     STATUS,C,0
    GOTO      TSHIFT3216
    MOVWF     math_double_main_global_XExp
    RLCF      math_double_main_global_XHi_1,F
    MOVFF     math_double_main_global_XHi_2, math_double_main_global_XHi_1
    CLRF      math_double_main_global_XHi_2

    MOVLW     8
    SUBWF     math_double_main_global_XExp,W
    BTFSS     STATUS,C,0
    GOTO      TSHIFT3216
    MOVWF     math_double_main_global_XExp
    RLCF      math_double_main_global_XHi_1,F
    CLRF      math_double_main_global_XHi_1

    MOVF      math_double_main_global_XExp,W
    BTFSS     STATUS,Z,0
    BCF       STATUS,C,0
    GOTO      SHIFT3216OK
    TSHIFT3216:
    MOVF      math_double_main_global_XExp,W
    BTFSC     STATUS,Z,0
    GOTO      SHIFT3216OK
    SHIFT3216:
    BCF       STATUS,C,0
    RRCF      math_double_main_global_XHi_2,F
    RRCF      math_double_main_global_XHi_1,F
    DECFSZ    math_double_main_global_XExp,F
    GOTO      SHIFT3216
    SHIFT3216OK:
    BTFSC     math_double_main_global_FPFLAGS,RND
    BTFSS     math_double_main_global_XHi_1,0
    GOTO      INT3216OK
    BTFSS     STATUS,C,0
    GOTO      INT3216OK
    INCF      math_double_main_global_XHi_1,F
    BTFSC     STATUS,Z,0
    INCF      math_double_main_global_XHi_2,F
    BTFSC     math_double_main_global_XHi_2,7
    GOTO      JPJSETIOV3224
    INT3216OK:
    BTFSS     math_double_main_global_Sign,7
    GOTO      INT3216EOK

    COMF      math_double_main_global_XHi_2,F
    COMF      math_double_main_global_XHi_1,F
    INCF      math_double_main_global_XHi_1,F
    BTFSC     STATUS,Z,0
    INCF      math_double_main_global_XHi_2,F
    GOTO      INT3216EOK

    IRES016:
    CLRF      math_double_main_global_XHi_2
    CLRF      math_double_main_global_XHi_1
    GOTO      INT3216EOK
    SETIOV16:
    BSF       math_double_main_global_FPFLAGS,IOV
    BTFSS     math_double_main_global_FPFLAGS,SAT
    GOTO      INT3216EER

    CLRF      math_double_main_global_XHi_2
    BTFSS     math_double_main_global_Sign,7
    GOTO      INT3216EER
    MOVLW     0xFF
    MOVWF     math_double_main_global_XHi_2
    MOVWF     math_double_main_global_XHi_1
    RLCF      math_double_main_global_Sign,F
    RRCF      math_double_main_global_XHi_2,F
    GOTO      INT3216EER

    JPJSETIOV3224:
    MOVLW     0x01
    MOVWF     math_double_main_global_jmpFlg
  }
    SETIOV3224();
  asm{
    GOTO      INT3216EEE
    INT3216EOK:
    MOVLW     0x00
    MOVWF     math_double_main_global_jmpFlg
    GOTO      INT3216EEE
    INT3216EER:
    MOVLW     0xFF
    MOVWF     math_double_main_global_jmpFlg
    INT3216EEE:
    MOVF      math_double_main_global_XHi_1,W
    MOVWF     math_double_main_global_XLo_2
    MOVF      math_double_main_global_XHi_2,W
    MOVWF     math_double_main_global_XHi_1
  }
  /*switch (main_global_jmpFlg) {
    case 1 : SETIOV3224();
  }*/
}

//-------------- Double to Word conversion
//----- Input:  32 bit floating point number in XExp, XHi_2, XHi_1, XLo_2
//----- Use:    CALL    INT3216U
//----- Output: 16 bit unsigned absolute value (the SIGN is ignored) integer
//-----         (Word) right justified in XHi_2, XHi_1
//----- Result: AARG  <--  ABS(INT(AARG)) }
 void double2word() {
//  main_global_XExp = main_global_XExp;
//  main_global_XHi = main_global_XHi;
//  main_global_FPFLAGS = main_global_FPFLAGS;
//  main_global_SIGN = main_global_SIGN;
//  main_global_jmpFlg = main_global_jmpFlg;

  asm {
    INT3216U:
    CLRF      math_double_main_global_FPFLAGS
    CLRF      math_double_main_global_jmpFlg
    CLRF      math_double_main_global_Sign
    
    MOVF      math_double_main_global_XExp,W
    BTFSC     STATUS,Z,0
    GOTO      IRES016U

    BSF       math_double_main_global_XHi_2,7

    MOVLW     142
    SUBWF     math_double_main_global_XExp,F
    BTFSC     math_double_main_global_XExp,7
    GOTO      SETEXP16U
    BTFSC     STATUS,Z,0
    GOTO      SETEXP16U
    GOTO      SETIOV16U
    SETEXP16U:
    NEGF      math_double_main_global_XExp

    MOVLW     8
    SUBWF     math_double_main_global_XExp,W
    BTFSS     STATUS,C,0
    GOTO      TSHIFT3216U
    MOVWF     math_double_main_global_XExp
    RLCF      math_double_main_global_XHi_1,F
    MOVFF     math_double_main_global_XHi_2, math_double_main_global_XHi_1
    CLRF      math_double_main_global_XHi_2

    MOVLW     8
    SUBWF     math_double_main_global_XExp,W
    BTFSS     STATUS,C,0
    GOTO      TSHIFT3216U
    RLCF      math_double_main_global_XHi_1,F
    CLRF      math_double_main_global_XHi_1

    MOVF      math_double_main_global_XExp,W
    BTFSS     STATUS,Z,0
    BCF       STATUS,C,0
    GOTO      SHIFT3216UOK
    TSHIFT3216U:
    MOVF      math_double_main_global_XExp,W
    BTFSC     STATUS,Z,0
    GOTO      SHIFT3216UOK
    SHIFT3216U:
    BCF       STATUS,C,0
    RRCF      math_double_main_global_XHi_2,F
    RRCF      math_double_main_global_XHi_1,F
    DECFSZ    math_double_main_global_XExp,F
    GOTO      SHIFT3216U
    SHIFT3216UOK:
    BTFSC     math_double_main_global_FPFLAGS,RND
    BTFSS     math_double_main_global_XHi_1,0
    GOTO      INT3216UOK
    BTFSS     STATUS,C,0
    GOTO      INT3216UOK
    INCF      math_double_main_global_XHi_1,F
    BTFSC     STATUS,Z,0
    INCF      math_double_main_global_XHi_2,F
    BTFSC     math_double_main_global_XHi_2,7
    GOTO      JPKSETIOV3224
    INT3216UOK:
    BTFSS     math_double_main_global_Sign,7
    GOTO      INT3216UEOK

    COMF      math_double_main_global_XHi_2,F
    COMF      math_double_main_global_XHi_1,F
    INCF      math_double_main_global_XHi_1,F
    BTFSC     STATUS,Z,0
    INCF      math_double_main_global_XHi_2,F
    GOTO      INT3216UEOK

    IRES016U:
    CLRF      math_double_main_global_XHi_2
    CLRF      math_double_main_global_XHi_1
    GOTO      INT3216UEOK
    SETIOV16U:
    BSF       math_double_main_global_FPFLAGS,IOV
    BTFSS     math_double_main_global_FPFLAGS,SAT
    GOTO      INT3216UEER

    CLRF      math_double_main_global_XHi_2
    BTFSS     math_double_main_global_Sign,7
    GOTO      INT3216UEER
    MOVLW     0xFF
    MOVWF     math_double_main_global_XHi_2
    MOVWF     math_double_main_global_XHi_1
    RLCF      math_double_main_global_Sign,F
    RRCF      math_double_main_global_XHi_2,F
    GOTO      INT3216UEER

    JPKSETIOV3224:
    MOVLW     0x01
    MOVWF     math_double_main_global_jmpFlg
  }
    SETIOV3224();
  asm{
    GOTO      INT3216UEEE
    INT3216UEOK:
    MOVLW     0x00
    MOVWF     math_double_main_global_jmpFlg
    GOTO      INT3216UEEE
    INT3216UEER:
    MOVLW     0xFF
    MOVWF     math_double_main_global_jmpFlg
    INT3216UEEE:
    MOVF      math_double_main_global_XHi_1,W
    MOVWF     math_double_main_global_XLo_2
    MOVF      math_double_main_global_XHi_2,W
    MOVWF     math_double_main_global_XHi_1
  }
  /*switch (main_global_jmpFlg) {
    case 1 : SETIOV3224();
  }*/
}

//-------------- Double to Byte conversion
//----- Input:  32 bit floating point number in XExp, XHi_2, XHi_1, XLo_2
//----- Use:    CALL    INT32U08
//----- Output: 8 bit unsigned absolute value (the SIGN is ignored) integer (Byte)
//-----         in XHi_2
//----- Result: AARG  <--  ABS(INT(AARG)) }
 void double2byte() {
//  main_global_XExp = main_global_XExp;
//  main_global_XHi = main_global_XHi;
//  main_global_FPFLAGS = main_global_FPFLAGS;
//  main_global_SIGN = main_global_SIGN;
//  main_global_jmpFlg = main_global_jmpFlg;

  asm {
    INT32U08:
    CLRF      math_double_main_global_FPFLAGS
    CLRF      math_double_main_global_jmpFlg
    CLRF      math_double_main_global_Sign
    
    MOVF      math_double_main_global_XExp,W
    BTFSC     STATUS,Z,0
    GOTO      IRES008

    BCF       math_double_main_global_Sign,7
    BSF       math_double_main_global_XHi_2,7

    MOVLW     134
    SUBWF     math_double_main_global_XExp,F
    BTFSC     math_double_main_global_XExp,7
    GOTO      SETEXP08
    BTFSC     STATUS,Z,0
    GOTO      SETEXP08
    GOTO      SETIOV08
    SETEXP08:
    NEGF      math_double_main_global_XExp

    MOVLW     8
    SUBWF     math_double_main_global_XExp,W
    BTFSS     STATUS,C,0
    GOTO      TSHIFT3208
    MOVWF     math_double_main_global_XExp
    RLCF       math_double_main_global_XHi_2,F
    CLRF      math_double_main_global_XHi_2

    MOVF      math_double_main_global_XExp,W
    BTFSS     STATUS,Z,0
    BCF       STATUS,C,0
    GOTO      SHIFT3208OK
    TSHIFT3208:
    MOVF      math_double_main_global_XExp,W
    BTFSC     STATUS,Z,0
    GOTO      SHIFT3208OK
    SHIFT3208:
    BCF       STATUS,C,0
    RRCF       math_double_main_global_XHi_2,F
    DECFSZ    math_double_main_global_XExp,F
    GOTO      SHIFT3208
    SHIFT3208OK:
    BTFSC     math_double_main_global_FPFLAGS,RND
    BTFSS     math_double_main_global_XHi_2,0
    GOTO      INT3208OK
    BTFSS     STATUS,C,0
    GOTO      INT3208OK
    INCF      math_double_main_global_XHi_2,F
    BTFSC     STATUS,Z,0
    GOTO      D2B_JPKSETIOV3224
    INT3208OK:
    IRES008:
    CLRF      math_double_main_global_XHi_1
    GOTO      INT3208EOK
    SETIOV08:
    BSF       math_double_main_global_FPFLAGS,IOV
    BTFSS     math_double_main_global_FPFLAGS,SAT
    GOTO      INT3208EER

    CLRF      math_double_main_global_XHi_1
    GOTO      INT3208EER
    D2B_JPKSETIOV3224:
    MOVLW     0x01
    MOVWF     math_double_main_global_jmpFlg
  }
    SETIOV3224();
  asm{
    GOTO      INT3208EEE
    INT3208EOK:
    MOVLW     0x00
    MOVWF     math_double_main_global_jmpFlg
    GOTO      INT3208EEE
    INT3208EER:
    MOVLW     0xFF
    MOVWF     math_double_main_global_jmpFlg
    INT3208EEE:
    MOVF     math_double_main_global_XHi_2,W
    MOVWF    math_double_main_global_XLo_2
  }
  /*switch (main_global_jmpFlg) {
    case 1 : SETIOV3224();
  }*/
}

//-------------- Byte to Double conversion
//----- Input:  8 bit unsigned integer right justified in XLo_1
//----- Use:    CALL    FLO3232
//----- Output: 32 bit floating point number in XExp, XHi_2, XHi_1, XLo_2
//----- Result: AARG  <--  Double(AARG)}
 void byte2double() {
//  main_global_XExp = main_global_XExp;
//  main_global_XHi = main_global_XHi;
//  main_global_XLo = main_global_XLo;
//  main_global_FPFLAGS = main_global_FPFLAGS;
//  main_global_SIGN = main_global_SIGN;
//  main_global_jmpFlg = main_global_jmpFlg;

  asm {
    MOVFF     math_double_main_global_XLo_2, math_double_main_global_XLo_1

    FLO08U32:
    CLRF      math_double_main_global_FPFLAGS
    CLRF      math_double_main_global_jmpFlg

    MOVLW     0x9E
    MOVWF     math_double_main_global_XExp
    CLRF      math_double_main_global_Sign
    CLRF      math_double_main_global_XHi_2
    CLRF      math_double_main_global_XHi_1
    CLRF      math_double_main_global_XLo_2
    MOVLW     0x02
    MOVWF     math_double_main_global_jmpFlg
  }
  NRM4032();
}

//-------------- Integer to Double conversion
//----- Input:  16 bit 2's complement integer right justified in XLo_2, XLo_1
//----- Use:    CALL    FLO1632
//----- Output: 32 bit floating point number in XExp, XHi_2, XHi_1, XLo_2
//----- Result: AARG  <--  Double(AARG)}
 void int2double() {
//  main_global_XExp = main_global_XExp;
//  main_global_XHi = main_global_XHi;
//  main_global_XLo = main_global_XLo;
//  main_global_FPFLAGS = main_global_FPFLAGS;
//  main_global_SIGN = main_global_SIGN;
//  main_global_jmpFlg = main_global_jmpFlg;

  asm {
    MOVFF     math_double_main_global_XLo_2, math_double_main_global_XLo_1
    MOVF      math_double_main_global_XHi_1,W
    MOVWF     math_double_main_global_XLo_2
    CLRF      math_double_main_global_XHi_1
    CLRF      math_double_main_global_XHi_2
    CLRF      math_double_main_global_XExp

    FLO1632:
    CLRF      math_double_main_global_FPFLAGS
    CLRF      math_double_main_global_jmpFlg
    CLRF      math_double_main_global_XHi_1
    CLRF      math_double_main_global_XHi_2
    CLRF      math_double_main_global_XExp

    MOVLW     150
    MOVWF     math_double_main_global_XExp
    CLRF      math_double_main_global_Sign
    BTFSS     math_double_main_global_XLo_2,7
    GOTO      FLO1632EEE

    COMF      math_double_main_global_XLo_1,F
    COMF      math_double_main_global_XLo_2,F

    INCF      math_double_main_global_XLo_1,F
    BTFSC     STATUS,Z,0
    INCF      math_double_main_global_XLo_2,F

    BSF       math_double_main_global_Sign,7
    FLO1632EEE:
    MOVFF     math_double_main_global_XLo_2, math_double_main_global_XHi_1
    MOVFF     math_double_main_global_XLo_1, math_double_main_global_XLo_2
    CLRF      math_double_main_global_XLo_1
    CLRF      math_double_main_global_XHi_2
  }
  NRM3232();
}

//-------------- Word to Double conversion
//----- Input:  16 bit unsigned integer right justified in XLo_2, XLo_1,
//----- Output: 32 bit floating point number in XExp, XHi_2, XHi_1, XLo_2
//----- Result: AARG  <--  Double(AARG)}
 void word2double() {
//  main_global_XExp = main_global_XExp;
//  main_global_XHi = main_global_XHi;
//  main_global_XLo = main_global_XLo;
//  main_global_FPFLAGS = main_global_FPFLAGS;
//  main_global_SIGN = main_global_SIGN;
//  main_global_jmpFlg = main_global_jmpFlg;

  asm {
    MOVF      math_double_main_global_XLo_2,W
    MOVWF     math_double_main_global_XLo_1
    MOVF      math_double_main_global_XHi_1,W
    MOVWF     math_double_main_global_XLo_2
    CLRF      math_double_main_global_XHi_1
    CLRF      math_double_main_global_XHi_2
    CLRF      math_double_main_global_XExp

    FLO16U32:
    CLRF      math_double_main_global_FPFLAGS
    CLRF      math_double_main_global_jmpFlg

    MOVLW     150
    MOVWF     math_double_main_global_XExp
    CLRF      math_double_main_global_Sign

    MOVFF     math_double_main_global_XLo_2, math_double_main_global_XHi_1
    MOVFF     math_double_main_global_XLo_1, math_double_main_global_XLo_2
    CLRF      math_double_main_global_XLo_1
    CLRF      math_double_main_global_XHi_2
  }
  NRM3232();
}

//-------------- Longint to Double conversion
//----- Input:  32 bit 2's complement integer right justified in XHi_2, XHi_1,
//-----         XLo_2, XLo_1
//----- Use:    CALL    FLO3232
//----- Output: 32 bit floating point number in XExp, XHi_2, XHi_1, XLo_2
//----- Result: AARG  <--  Double(AARG)}
 void longint2double() {
//  main_global_XExp = main_global_XExp;
//  main_global_XHi = main_global_XHi;
//  main_global_XLo = main_global_XLo;
//  main_global_FPFLAGS = main_global_FPFLAGS;
//  main_global_SIGN = main_global_SIGN;
//  main_global_jmpFlg = main_global_jmpFlg;

  asm {
    MOVF      math_double_main_global_XLo_2,W
    MOVWF     math_double_main_global_XLo_1
    MOVF      math_double_main_global_XHi_1,W
    MOVWF     math_double_main_global_XLo_2
    MOVF      math_double_main_global_XHi_2,W
    MOVWF     math_double_main_global_XHi_1
    MOVF      math_double_main_global_XExp,W
    MOVWF     math_double_main_global_XHi_2
    CLRF      math_double_main_global_XExp

    FLO3232:
    CLRF      math_double_main_global_FPFLAGS
    CLRF      math_double_main_global_jmpFlg

    MOVLW     158
    MOVWF     math_double_main_global_XExp
    CLRF      math_double_main_global_Sign
    BTFSS     math_double_main_global_XHi_2,7
    GOTO      FLO3232EEE
    COMF      math_double_main_global_XLo_1,F
    COMF      math_double_main_global_XLo_2,F
    COMF      math_double_main_global_XHi_1,F
    COMF      math_double_main_global_XHi_2,F
    INCF      math_double_main_global_XLo_1,F
    BTFSC     STATUS,Z,0
    INCF      math_double_main_global_XLo_2,F
    BTFSC     STATUS,Z,0
    INCF      math_double_main_global_XHi_1,F
    BTFSC     STATUS,Z,0
    INCF      math_double_main_global_XHi_2,F
    BSF       math_double_main_global_Sign,7
    FLO3232EEE:
    MOVLW     0x02
    MOVWF     math_double_main_global_jmpFlg
  }
  NRM4032();
}

//-------------- Longword to Double conversion
//----- Input:  32 bit unsigned integer right justified in XHi_2, XHi_1,
//-----         XLo_2, XLo_1
//----- Use:    CALL    FLO32U32
//----- Output: 32 bit floating point number in XExp, XHi_2, XHi_1, XLo_2
//----- Result: AARG  <--  Double(AARG)}
 void longword2double() {
//  main_global_XExp = main_global_XExp;
//  main_global_FPFLAGS = main_global_FPFLAGS;
//  main_global_SIGN = main_global_SIGN;
//  main_global_jmpFlg = main_global_jmpFlg;

  asm {
    MOVF      math_double_main_global_XLo_2,W
    MOVWF     math_double_main_global_XLo_1
    MOVF      math_double_main_global_XHi_1,W
    MOVWF     math_double_main_global_XLo_2
    MOVF      math_double_main_global_XHi_2,W
    MOVWF     math_double_main_global_XHi_1
    MOVF      math_double_main_global_XExp,W
    MOVWF     math_double_main_global_XHi_2
    CLRF      math_double_main_global_XExp

    FLO32U32:
    CLRF      math_double_main_global_FPFLAGS
    CLRF      math_double_main_global_jmpFlg

    MOVLW     0x9E
    MOVWF     math_double_main_global_XExp
    CLRF      math_double_main_global_Sign
    MOVLW     0x02
    MOVWF     math_double_main_global_jmpFlg
  }
  NRM4032();
}


/*******************************************************************************
*********************** Comparison routines ************************************
*******************************************************************************/

//-------------- Operator <Equals>
//----- Input:  32 bit floating point numbers:
//-----         first argument in XExp, XHi_2, XHi_1, XLo_2;
//-----         second argument in YExp, YHi_2, YHi_1, YLo_2;
//----- Output: 32 bit floating point number in XExp, XHi_2, XHi_1, XLo_2
//----- Result: X = Y  --> WREG
//-----         1 if true, 0 if false
 void Equals_Double() {
//  main_global_XExp = main_global_XExp;
//  main_global_XHi = main_global_XHi;
//  main_global_XLo = main_global_XLo;
//  main_global_YExp = main_global_YExp;
//  main_global_YHi = main_global_YHi;
//  main_global_YLo = main_global_YLo;

  asm {
    MOVF     math_double_main_global_XExp,W
    XORWF    math_double_main_global_YExp,W
    BTFSS    STATUS,Z,0
    GOTO     EQU_FALSE

    MOVF     math_double_main_global_XHi_2,W
    XORWF    math_double_main_global_YHi_2,W
    BTFSS    STATUS,Z,0
    GOTO     EQU_FALSE

    MOVF     math_double_main_global_XHi_1,W
    XORWF    math_double_main_global_YHi_1,W
    BTFSS    STATUS,Z,0
    GOTO     EQU_FALSE

    MOVF     math_double_main_global_XLo_2,W
    XORWF    math_double_main_global_YLo_2,W
    BTFSC    STATUS,Z,0

    ;RETLW    0x01
    BSF      STATUS, Z
    RETURN
    
    EQU_FALSE:
    ;RETLW    0x00
    BCF      STATUS, Z
    RETURN

  }
}

//-------------- Operator <Compare>
//----- Input:  32 bit floating point numbers:
//-----         first argument in XExp, XHi_2, XHi_1, XLo_2;
//-----         second argument in YExp, YHi_2, YHi_1, YLo_2;
//----- Output: Compare result in TEMP
//----- Result: X # Y  --> TEMP
//-----                    1 if '=',
//-----                    2 if '>',
//-----                    4 if '<'                                 }
 void Compare_Double() {
//  main_global_XExp = main_global_XExp;
//  main_global_XHi = main_global_XHi;
//  main_global_XLo = main_global_XLo;
//  main_global_YExp = main_global_YExp;
//  main_global_YHi = main_global_YHi;
//  main_global_YLo = main_global_YLo;
//  main_global_SIGN = main_global_SIGN;
//  main_global_TEMPB0 = main_global_TEMPB0;

  asm {
    CLRF     math_double_main_global_Sign
    MOVF     math_double_main_global_XExp,W
    BTFSS    STATUS,Z,0
    BSF      math_double_main_global_Sign,0
    MOVF     math_double_main_global_YExp,W
    BTFSS    STATUS,Z,0
    BSF      math_double_main_global_Sign,1

    MOVF     math_double_main_global_Sign,W
    BTFSC    STATUS,Z,0
    GOTO     COMPARE_EQU
    XORLW    0x03
    BTFSC    STATUS,Z,0
    GOTO     COMPARE_NOTZERO

    BTFSC    math_double_main_global_Sign,0
    GOTO     COMPARE_XNOTZERO
    COMPARE_YNOTZERO:
    BTFSS    math_double_main_global_YHi_2,7
    GOTO     COMPARE_LT
    GOTO     COMPARE_GT
    COMPARE_XNOTZERO:
    BTFSS    math_double_main_global_XHi_2,7
    GOTO     COMPARE_GT
    GOTO     COMPARE_LT

    COMPARE_NOTZERO:
    MOVF     math_double_main_global_XHi_2,W
    ANDLW    0x80
    MOVWF    math_double_main_global_Sign
    BCF      math_double_main_global_XHi_2,7

    MOVF     math_double_main_global_YHi_2,W
    ANDLW    0x80
    BCF      math_double_main_global_YHi_2,7

    XORWF    math_double_main_global_Sign,W
    BTFSC    STATUS,Z,0
    GOTO     COMPARE_TESTALL

    MOVF     math_double_main_global_Sign,W
    BTFSC    STATUS,Z,0
    GOTO     COMPARE_GT
    GOTO     COMPARE_LT

    COMPARE_TESTALL:
    MOVF     math_double_main_global_YExp,W
    SUBWF    math_double_main_global_XExp,W
    BTFSC    STATUS,Z,0
    GOTO     COMPARE_C1
    BTFSS    STATUS,C,0
    GOTO     GT_FALSE
    GOTO     GT_TRUE
    COMPARE_C1:
    MOVF     math_double_main_global_YHi_2,W
    SUBWF    math_double_main_global_XHi_2,W
    BTFSC    STATUS,Z,0
    GOTO     COMPARE_C2
    BTFSS    STATUS,C,0
    GOTO     GT_FALSE
    GOTO     GT_TRUE
    COMPARE_C2:
    MOVF     math_double_main_global_YHi_1,W
    SUBWF    math_double_main_global_XHi_1,W
    BTFSC    STATUS,Z,0
    GOTO     COMPARE_C3
    BTFSS    STATUS,C,0
    GOTO     GT_FALSE
    GOTO     GT_TRUE
    COMPARE_C3:
    MOVF     math_double_main_global_YLo_2,W
    SUBWF    math_double_main_global_XLo_2,W
    BTFSC    STATUS,Z,0
    GOTO     COMPARE_EQU
    BTFSC    STATUS,C,0
    GOTO     GT_TRUE

    GT_FALSE:
    MOVF     math_double_main_global_Sign,F
    BTFSC    STATUS,Z,0
    GOTO     COMPARE_LT
    GOTO     COMPARE_GT
    GT_TRUE:
    MOVF     math_double_main_global_Sign,F
    BTFSC    STATUS,Z,0
    GOTO     COMPARE_GT
    GOTO     COMPARE_LT

    COMPARE_GT:
    ;MOVLW    0x02
    ;MOVWF    math_double_main_global_TEMPB0
    BSF      STATUS, C
    RETURN
    COMPARE_LT:
    ;MOVLW    0x04
    ;MOVWF    math_double_main_global_TEMPB0
    BCF      STATUS, C
    RETURN
    COMPARE_EQU:
    ;MOVLW    0x01
    ;MOVWF    math_double_main_global_TEMPB0
    BSF      STATUS, C
    BSF      STATUS, Z
    RETURN
  }
}