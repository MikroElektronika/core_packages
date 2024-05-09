/*
const char LSB = 0;
const char IOV = 0;       // bit0 = integer overflow flag
const char FOV = 1;       // bit1 = floating point overflow flag
const char FUN = 2;       // bit2 = floating point underflow flag
const char FDZ = 3;       // bit3 = floating point divide by zero flag
const char NAN = 4;	      // bit4 = not-a-number exception flag
const char DOM = 5;	      // bit5 = domain error exception flag
const char RND = 6;       // bit6 = floating point rounding flag, 0 = truncation
                          //    1 = unbiased rounding to nearest LSB
const char SAT = 7;       // bit7 = floating point saturate flag, 0 = terminate on
                          //    exception without saturation, 1 = terminate on
                          //    exception with saturation to appropriate value
const char MSB = 7;

const char   EXPBIAS  = 127;   // exponent bias value for the FP format
const char  EXPBIAS1  = 126;
const char EXPBIAS31  = 158;
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

/*
static unsigned main_global_XHi, main_global_XLo, main_global_YHi, main_global_YLo;
static char    main_global_XExp, main_global_YExp;*/
//static char    main_global_jmpFlg;
/*static char    main_global_FPFLAGS;    //floating point library exception flags
static char    main_global_SIGN, main_global_AARGB4, main_global_AARGB5;
static char    main_global_TEMP, main_global_TEMPB1;
*/

/******************************************************************************/
char register __math_tempbD;
#define math_double_main_global_jmpFlg    math_double_main_global_AARGB4

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
//#define math_double_main_global_TEMP      R14
#define math_double_main_global_TEMP      __math_tempbD



/*******************************************************************************
******************************* Helper routines ********************************
*******************************************************************************/

//------------------ Sets the result and flags for overflow
 void SETFOV32() {
//  main_global_XExp= main_global_XExp;
//  main_global_XHi = main_global_XHi;
//  main_global_XLo = main_global_XLo;
//  main_global_Sign = main_global_Sign;
//  main_global_FPFLAGS = main_global_FPFLAGS;
  asm  {
      BSF     math_double_main_global_FPFLAGS,FOV
      BTFSS   math_double_main_global_FPFLAGS,SAT
      GOTO    SETFOV32EEE
      MOVLW   0xFF
      MOVWF   math_double_main_global_XExp
      MOVWF   math_double_main_global_XHi_2
      MOVWF   math_double_main_global_XHi_1
      MOVWF   math_double_main_global_XLo_2
      RLF     math_double_main_global_Sign,F
      RRF     math_double_main_global_XHi_2,F
SETFOV32EEE:
      MOVLW   0xFF
  }
}

//----------------- Sets the result and flag for divide-by-zero
 void SETFDZ32() {
//  main_global_FPFLAGS = main_global_FPFLAGS;
  asm  {
    BSF       math_double_main_global_FPFLAGS,FDZ
    MOVLW     0xFF
  }
}


//---------------- Sets the math_double_main_global_SIGN of the result
 void FIXSIGN32() {
//  main_global_XHi   = main_global_XHi;
//  main_global_Sign  = main_global_Sign;
  asm  {
      BTFSS   math_double_main_global_Sign,7
      BCF     math_double_main_global_XHi_2,7
      MOVLW   0
  }
}

//---------------- Sets the Zero result
 void RES032() {
//  main_global_XExp = main_global_XExp;
//  main_global_XHi  = main_global_XHi;
//  main_global_XLo  = main_global_XLo;
  asm  {
      CLRF    math_double_main_global_XHi_2
      CLRF    math_double_main_global_XHi_1
      CLRF    math_double_main_global_XLo_2
      CLRF    math_double_main_global_XLo_1
      CLRF    math_double_main_global_XExp
      MOVLW   0
  }
}

//---------------- Sets the result and flags for underflow
 void SETFUN32() {
//  main_global_XExp    = main_global_XExp;
//  main_global_XHi     = main_global_XHi;
//  main_global_XLo     = main_global_XLo;
//  main_global_Sign    = main_global_Sign;
//  main_global_FPFLAGS = main_global_FPFLAGS;
  asm  {
      BSF     math_double_main_global_FPFLAGS,FUN
      BTFSS   math_double_main_global_FPFLAGS,SAT
      GOTO    SETFUN32EEE
      MOVLW   0x01
      MOVWF   math_double_main_global_XExp
      CLRF    math_double_main_global_XHi_2
      CLRF    math_double_main_global_XHi_1
      CLRF    math_double_main_global_XLo_2
      RLF     math_double_main_global_Sign,F
      RRF     math_double_main_global_XHi_2,F
SETFUN32EEE:
      MOVLW   0xFF
  }
}


/********************************************************************************
       Normalization routine
       Input:  32 bit unnormalized floating point number in XExp, XHi_2, XHi_1,
               XLo_2, with SIGN in SIGN,7
       Output: 32 bit normalized floating point number in XExp, XHi_2, XHi_1, XLo_2
       Result: AARG  <--  NORMALIZE(AARG) */
 void NRM3232() {
//  main_global_XExp = main_global_XExp;
//  main_global_XHi  = main_global_XHi;
//  main_global_XLo  = main_global_XLo;
//  main_global_jmpFlg = main_global_jmpFlg;    // kicked out
//  main_global_TEMP = main_global_TEMP;
  __math_tempbD = __math_tempbD;
  asm   {
      CLRF    math_double_main_global_TEMP
      MOVF    math_double_main_global_XHi_2,W
      BTFSS   STATUS,Z
      GOTO    NORM3232
      MOVF    math_double_main_global_XHi_1,W
      MOVWF   math_double_main_global_XHi_2
      MOVF    math_double_main_global_XLo_2,W
      MOVWF   math_double_main_global_XHi_1
      CLRF    math_double_main_global_XLo_2
      BSF     math_double_main_global_TEMP,3

      MOVF    math_double_main_global_XHi_2,W
      BTFSS   STATUS,Z
      GOTO    NORM3232
      MOVF    math_double_main_global_XHi_1,W
      MOVWF   math_double_main_global_XHi_2
      CLRF    math_double_main_global_XHi_1
      BCF     math_double_main_global_TEMP,3
      BSF     math_double_main_global_TEMP,4

      MOVF    math_double_main_global_XHi_2,W
      BTFSC   STATUS,Z
      GOTO    JPNRES032
NORM3232:
      MOVF    math_double_main_global_TEMP,W
      SUBWF   math_double_main_global_XExp,F
      BTFSS   STATUS,Z
      BTFSS   STATUS,C
      GOTO    JPNSETFUN32
      BCF     STATUS,C
NORM3232A:
      BTFSC   math_double_main_global_XHi_2,7
      GOTO    JMPNFIXSIGN32
      RLF     math_double_main_global_XLo_2,F
      RLF     math_double_main_global_XHi_1,F
      RLF     math_double_main_global_XHi_2,F
      DECFSZ  math_double_main_global_XExp,F
      GOTO    NORM3232A
      GOTO    JPNSETFUN32
JPNRES032:
      MOVLW   0x01
      MOVWF   math_double_main_global_jmpFlg
  }
      RES032();
  asm {
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
  asm{
NORM32EEE:
  }
}

/******************************************************************************
       Normalization routine
       Input:  40 bit unnormalized floating point number in XExp, XHi_2, XHi_1,
              XLo_2, XLo_1 with SIGN in SIGN,7
       Output: 32 bit normalized floating point number in XExp, XHi_2, XHi_1,
               XLo_2, XLo_1
        Result: AARG  <--  NORMALIZE(AARG) */
 void NRM4032() {
//  main_global_XHi  = main_global_XHi;
//  main_global_XLo  = main_global_XLo;
//  main_global_XExp = main_global_XExp;
//  main_global_FPFLAGS = main_global_FPFLAGS;
//  main_global_jmpFlg  = main_global_jmpFlg;
//  main_global_TEMP    = main_global_TEMP;
  __math_tempbD = __math_tempbD;
  asm  {
      BTFSC   math_double_main_global_jmpFlg, 0
      GOTO    NRMRND4032
      BTFSC   math_double_main_global_jmpFlg, 1
      GOTO    NRM4032
      BTFSC   math_double_main_global_jmpFlg, 2
      GOTO    JMPSETFOV32
      GOTO    $-6
NRM4032:
      CLRF    math_double_main_global_TEMP
      MOVF    math_double_main_global_XHi_2,W
      BTFSS   STATUS,Z
      GOTO    NORM4032
      MOVF    math_double_main_global_XHi_1,W
      MOVWF   math_double_main_global_XHi_2
      MOVF    math_double_main_global_XLo_2,W
      MOVWF   math_double_main_global_XHi_1
      MOVF    math_double_main_global_XLo_1,W
      MOVWF   math_double_main_global_XLo_2
      CLRF    math_double_main_global_XLo_1
      BSF     math_double_main_global_TEMP,3

      MOVF    math_double_main_global_XHi_2,W
      BTFSS   STATUS,Z
      GOTO    NORM4032
      MOVF    math_double_main_global_XHi_1,W
      MOVWF   math_double_main_global_XHi_2
      MOVF    math_double_main_global_XLo_2,W
      MOVWF   math_double_main_global_XHi_1
      CLRF    math_double_main_global_XLo_2
      BCF     math_double_main_global_TEMP,3
      BSF     math_double_main_global_TEMP,4

      MOVF    math_double_main_global_XHi_2,W
      BTFSS   STATUS,Z
      GOTO    NORM4032
      MOVF    math_double_main_global_XHi_1,W
      MOVWF   math_double_main_global_XHi_2
      CLRF    math_double_main_global_XHi_1
      BSF     math_double_main_global_TEMP,3

      MOVF    math_double_main_global_XHi_2,W
      BTFSC   STATUS,Z
      GOTO    JMPRES032
NORM4032:
      MOVF    math_double_main_global_TEMP,W
      SUBWF   math_double_main_global_XExp,F
      BTFSS   STATUS,Z
      BTFSS   STATUS,C
      GOTO    JMPSETFUN32
      BCF     STATUS,C
NORM4032A:
      BTFSC   math_double_main_global_XHi_2,7
      GOTO    NRMRND4032
      RLF     math_double_main_global_XLo_1,F
      RLF     math_double_main_global_XLo_2,F
      RLF     math_double_main_global_XHi_1,F
      RLF     math_double_main_global_XHi_2,F
      DECFSZ  math_double_main_global_XExp,F
      GOTO    NORM4032A
      GOTO    JMPSETFUN32
NRMRND4032:
      BTFSC   math_double_main_global_FPFLAGS,RND
      BTFSS   math_double_main_global_XLo_2,0
      GOTO    JMPFIXSIGN32
      BTFSS   math_double_main_global_XLo_1,7
      GOTO    JMPFIXSIGN32
      INCF    math_double_main_global_XLo_2,F
      BTFSC   STATUS,Z
      INCF    math_double_main_global_XHi_1,F
      BTFSC   STATUS,Z
      INCF    math_double_main_global_XHi_2,F
      BTFSS   STATUS,Z
      GOTO    JMPFIXSIGN32
      RRF     math_double_main_global_XHi_2,F
      RRF     math_double_main_global_XHi_1,F
      RRF     math_double_main_global_XLo_2,F
      INCF    math_double_main_global_XExp,F
      BTFSC   STATUS,Z
      GOTO    JMPSETFOV32
      GOTO    JMPFIXSIGN32
JMPRES032:
      MOVLW   0x01
      MOVWF   math_double_main_global_jmpFlg
  }
      RES032();
  asm{
      GOTO    NRM4032EEE
JMPSETFUN32:
      MOVLW   0x02
      MOVWF   math_double_main_global_jmpFlg
  }
      SETFUN32();
  asm{
      GOTO    NRM4032EEE
JMPFIXSIGN32:
      MOVLW   0x04
      MOVWF   math_double_main_global_jmpFlg
  }
      FIXSIGN32();
  asm {
      GOTO    NRM4032EEE
JMPSETFOV32:
      MOVLW   0x08
      MOVWF   math_double_main_global_jmpFlg
  }
      SETFOV32();
  asm {
NRM4032EEE:
      NOP
  /*switch (main_global_jmpFlg) {
    case 1: RES032(); break;
    case 2: SETFUN32(); break;
    case 4: FIXSIGN32(); break;
    case 8: SETFOV32(); break;
  }*/
  }
}


/******************************************************************************
       Floating Point Add
       Input:  32 bit floating point number in XExp, XHi_2, XHi_1, XLo_2
               32 bit floating point number in YExp, YHi_2, YHi_1, YLo_2
       Output: 32 bit floating point sum in XExp, XHi_2, XHi_1, XLo_2
       Result: AARG  <--  AARG + BARG */
 void Add_32x32_FP()  {
//  main_global_XExp = main_global_XExp;
//  main_global_XHi  = main_global_XHi;
//  main_global_XLo  = main_global_XLo;
//  main_global_YExp = main_global_YExp;
//  main_global_YHi  = main_global_YHi;
//  main_global_YLo  = main_global_YLo;
//  main_global_Sign = main_global_Sign;
//  main_global_jmpFlg = main_global_jmpFlg;
//  main_global_AARGB5 = main_global_AARGB5;
//  main_global_TEMP   = main_global_TEMP;
  __math_tempbD = __math_tempbD;
  asm   {
  	  BCF STATUS, RP0   
      BCF STATUS, RP1
      MOVF    math_double_main_global_XHi_2,W
      XORWF   math_double_main_global_YHi_2,W
      MOVWF   math_double_main_global_TEMP

      CLRF    math_double_main_global_XLo_1
      CLRF    math_double_main_global_YLo_1

      MOVF    math_double_main_global_XExp,W
      SUBWF   math_double_main_global_YExp,W
      BTFSS   STATUS,C
      GOTO    USEA32

      MOVF    math_double_main_global_YExp,W
      MOVWF   math_double_main_global_AARGB5
      MOVF    math_double_main_global_XExp,W
      MOVWF   math_double_main_global_YExp
      MOVF    math_double_main_global_AARGB5,W
      MOVWF   math_double_main_global_XExp

      MOVF    math_double_main_global_YHi_2,W
      MOVWF   math_double_main_global_AARGB5
      MOVF    math_double_main_global_XHi_2,W
      MOVWF   math_double_main_global_YHi_2
      MOVF    math_double_main_global_AARGB5,W
      MOVWF   math_double_main_global_XHi_2

      MOVF    math_double_main_global_YHi_1,W
      MOVWF   math_double_main_global_AARGB5
      MOVF    math_double_main_global_XHi_1,W
      MOVWF   math_double_main_global_YHi_1
      MOVF    math_double_main_global_AARGB5,W
      MOVWF   math_double_main_global_XHi_1

      MOVF    math_double_main_global_YLo_2,W
      MOVWF   math_double_main_global_AARGB5
      MOVF    math_double_main_global_XLo_2,W
      MOVWF   math_double_main_global_YLo_2
      MOVF    math_double_main_global_AARGB5,W
      MOVWF   math_double_main_global_XLo_2
USEA32:
      MOVF    math_double_main_global_YExp,W
      BTFSC   STATUS,Z
      GOTO    JMPEEE
      MOVF    math_double_main_global_XHi_2,W
      MOVWF   math_double_main_global_Sign
      BSF     math_double_main_global_XHi_2,7
      BSF     math_double_main_global_YHi_2,7
      MOVF    math_double_main_global_YExp,W
      SUBWF   math_double_main_global_XExp,W
      MOVWF   math_double_main_global_YExp
      BTFSC   STATUS,Z
      GOTO    ALIGNED32
      MOVLW   8
      SUBWF   math_double_main_global_YExp,W
      BTFSS   STATUS,C
      GOTO    ALIGNB32
      MOVWF   math_double_main_global_YExp
      MOVF    math_double_main_global_YLo_2,W
      MOVWF   math_double_main_global_YLo_1
      MOVF    math_double_main_global_YHi_1,W
      MOVWF   math_double_main_global_YLo_2
      MOVF    math_double_main_global_YHi_2,W
      MOVWF   math_double_main_global_YHi_1
      CLRF    math_double_main_global_YHi_2
      MOVLW   8
      SUBWF   math_double_main_global_YExp,W
      BTFSS   STATUS,C
      GOTO    ALIGNB32
      MOVWF   math_double_main_global_YExp
      MOVF    math_double_main_global_YLo_2,W
      MOVWF   math_double_main_global_YLo_1
      MOVF    math_double_main_global_YHi_1,W
      MOVWF   math_double_main_global_YLo_2
      CLRF    math_double_main_global_YHi_1
      MOVLW   8
      SUBWF   math_double_main_global_YExp,W
      BTFSS   STATUS,C
      GOTO    ALIGNB32
      MOVF    math_double_main_global_Sign,W
      MOVWF   math_double_main_global_XHi_2
      GOTO    JMPEEE
ALIGNB32:
      MOVF    math_double_main_global_YExp,W
      BTFSC   STATUS,Z
      GOTO    ALIGNED32
ALOOPB32:
      BCF     STATUS,C
      RRF     math_double_main_global_YHi_2,F
      RRF     math_double_main_global_YHi_1,F
      RRF     math_double_main_global_YLo_2,F
      RRF     math_double_main_global_YLo_1,F
      DECFSZ  math_double_main_global_YExp,F
      GOTO    ALOOPB32
ALIGNED32:
      BTFSS   math_double_main_global_TEMP,7
      GOTO    AOK32
      COMF    math_double_main_global_YLo_1,F
      COMF    math_double_main_global_YLo_2,F
      COMF    math_double_main_global_YHi_1,F
      COMF    math_double_main_global_YHi_2,F
      INCF    math_double_main_global_YLo_1,F
      BTFSC   STATUS,Z
      INCF    math_double_main_global_YLo_2,F
      BTFSC   STATUS,Z
      INCF    math_double_main_global_YHi_1,F
      BTFSC   STATUS,Z
      INCF    math_double_main_global_YHi_2,F
AOK32:
      MOVF    math_double_main_global_YLo_1,W
      ADDWF   math_double_main_global_XLo_1,F
      MOVF    math_double_main_global_YLo_2,W
      BTFSC   STATUS,C
      INCFSZ  math_double_main_global_YLo_2,W
      ADDWF   math_double_main_global_XLo_2,F
      MOVF    math_double_main_global_YHi_1,W
      BTFSC   STATUS,C
      INCFSZ  math_double_main_global_YHi_1,W
      ADDWF   math_double_main_global_XHi_1,F
      MOVF    math_double_main_global_YHi_2,W
      BTFSC   STATUS,C
      INCFSZ  math_double_main_global_YHi_2,W
      ADDWF   math_double_main_global_XHi_2,F
      BTFSC   math_double_main_global_TEMP,7
      GOTO    ACOMP32
      BTFSS   STATUS,C
      GOTO    JMPNRMRND4032
      RRF     math_double_main_global_XHi_2,F
      RRF     math_double_main_global_XHi_1,F
      RRF     math_double_main_global_XLo_2,F
      RRF     math_double_main_global_XLo_1,F
      INCFSZ  math_double_main_global_XExp,F
      GOTO    JMPNRMRND4032
      GOTO    ADD_JMPSETFOV32
ACOMP32:
      BTFSC   STATUS,C
      GOTO    JMPNRM4032
      COMF    math_double_main_global_XLo_1,F
      COMF    math_double_main_global_XLo_2,F
      COMF    math_double_main_global_XHi_1,F
      COMF    math_double_main_global_XHi_2,F
      INCF    math_double_main_global_XLo_1,F
      BTFSC   STATUS,Z
      INCF    math_double_main_global_XLo_2,F
      BTFSC   STATUS,Z
      INCF    math_double_main_global_XHi_1,F
      BTFSC   STATUS,Z
      INCF    math_double_main_global_XHi_2,F
      MOVLW   0x80
      XORWF   math_double_main_global_Sign,F
      GOTO    JMPNRM32
JMPNRMRND4032:
      MOVLW   0x01
      MOVWF   math_double_main_global_jmpFlg
  }
      NRM4032();
  asm {
      GOTO    ADD32EEE
JMPNRM4032:
      MOVLW   0x02
      MOVWF   math_double_main_global_jmpFlg
  }
      NRM4032();
  asm {
      GOTO    ADD32EEE
JMPNRM32:
      MOVLW   0x04
      MOVWF   math_double_main_global_jmpFlg
  }
      NRM3232();
  asm{
      GOTO    ADD32EEE
ADD_JMPSETFOV32:
      MOVLW   0x08
      MOVWF   math_double_main_global_jmpFlg
  }
      SETFOV32();
  asm {
      GOTO    ADD32EEE
JMPEEE:
      MOVLW   0x00
      MOVWF   math_double_main_global_jmpFlg
ADD32EEE:
      NOP
  /*switch  (main_global_jmpFlg) {
    case 1:  NRM4032(); break;
    case 2:  NRM4032(); break;
    case 4:  NRM3232(); break;
    case 8:  SETFOV32(); break;
  }*/
  }
}


/*******************************************************************************
       Floating Point Subtract
       Input:  32 bit floating point number in XExp, XHi_2, XHi_1, XLo_2
               32 bit floating point number in YExp, YHi_2, YHi_1, YLo_2
       Output: 32 bit floating point sum in XExp, XHi_2, XHi_1, XLo_2
       Result: AARG  <--  AARG - BARG  */
 void Sub_32x32_FP() {
//  main_global_YHi = main_global_YHi;
  asm  {
  	 BCF STATUS, RP0   
     BCF STATUS, RP1
     MOVLW   0x80
     XORWF   math_double_main_global_YHi_2,F
  }
  Add_32x32_FP();
}

/*******************************************************************************
       Floating Point Multiply
       Input:  32 bit floating point number in XExp, XHi_2, XHi_1, XLo_2
              32 bit floating point number in YExp, YHi_2, YHi_1, YLo_2
       Output: 32 bit floating point product in XExp, XHi_2, XHi_1, XLo_2
       Result: AARG  <--  AARG * BARG */
 void Mul_32x32_FP() {
//  main_global_XExp = main_global_XExp;
//  main_global_XHi  = main_global_XHi;
//  main_global_XLo  = main_global_XLo;
//  main_global_YExp = main_global_YExp;
//  main_global_YHi  = main_global_YHi;
//  main_global_YLo  = main_global_YLo;
//  main_global_FPFLAGS = main_global_FPFLAGS;
//  main_global_Sign    = main_global_Sign;
//  main_global_AARGB4  = main_global_AARGB4;
//  main_global_AARGB5  = main_global_AARGB5;
//  main_global_TEMP    = main_global_TEMP;
  __math_tempbD = __math_tempbD;
  asm  {
 	  BCF STATUS, RP0   
    BCF STATUS, RP1
FPM32:
    CLRF      math_double_main_global_FPFLAGS
    MOVF      math_double_main_global_XExp,W
    BTFSS     STATUS,Z
    MOVF      math_double_main_global_YExp,W
    BTFSC     STATUS,Z
    GOTO      JPMRES032
M32BNE0:
    MOVF      math_double_main_global_XHi_2,W
    XORWF     math_double_main_global_YHi_2,W
    MOVWF     math_double_main_global_Sign
    MOVF      math_double_main_global_YExp,W
    ADDWF     math_double_main_global_XExp,F
    MOVLW     126
    BTFSS     STATUS,C
    GOTO      MTUN32
    SUBWF     math_double_main_global_XExp,F
    BTFSC     STATUS,C
    GOTO      JPMSETFOV32
    GOTO      MOK32
MTUN32:
    SUBWF     math_double_main_global_XExp,F
    BTFSS     STATUS,C
    GOTO      JPMSETFUN32
MOK32:
    MOVF      math_double_main_global_XHi_2,W
    MOVWF     math_double_main_global_XLo_1
    MOVF      math_double_main_global_XHi_1,W
    MOVWF     math_double_main_global_AARGB4
    MOVF      math_double_main_global_XLo_2,W
    MOVWF     math_double_main_global_AARGB5
    BSF       math_double_main_global_XLo_1,7
    BSF       math_double_main_global_YHi_2,7
    BCF       STATUS,C
    CLRF      math_double_main_global_XHi_2
    CLRF      math_double_main_global_XHi_1
    CLRF      math_double_main_global_XLo_2
    MOVLW     24
    MOVWF     math_double_main_global_TEMP
MLOOP32:
    BTFSS     math_double_main_global_AARGB5,0
    GOTO      MNOADD32
MADD32:
    MOVF      math_double_main_global_YLo_2,W
    ADDWF     math_double_main_global_XLo_2,F
    MOVF      math_double_main_global_YHi_1,W
    BTFSC     STATUS,C
    INCFSZ    math_double_main_global_YHi_1,W
    ADDWF     math_double_main_global_XHi_1,F
    MOVF      math_double_main_global_YHi_2,W
    BTFSC     STATUS,C
    INCFSZ    math_double_main_global_YHi_2,W
    ADDWF     math_double_main_global_XHi_2,F
MNOADD32:
    RRF       math_double_main_global_XHi_2,F
    RRF       math_double_main_global_XHi_1,F
    RRF       math_double_main_global_XLo_2,F
    RRF       math_double_main_global_XLo_1,F
    RRF       math_double_main_global_AARGB4,F
    RRF       math_double_main_global_AARGB5,F
    BCF       STATUS,C
    DECFSZ    math_double_main_global_TEMP,F
    GOTO      MLOOP32
    BTFSC     math_double_main_global_XHi_2,7
    GOTO      MROUND32
    RLF       math_double_main_global_XLo_1,F
    RLF       math_double_main_global_XLo_2,F
    RLF       math_double_main_global_XHi_1,F
    RLF       math_double_main_global_XHi_2,F
    DECF      math_double_main_global_XExp,F
MROUND32:
    BTFSC     math_double_main_global_FPFLAGS,RND
    BTFSS     math_double_main_global_XLo_2,0
    GOTO      MUL32OK
    BTFSS     math_double_main_global_XLo_1,7
    GOTO      MUL32OK
    INCF      math_double_main_global_XLo_2,F
    BTFSC     STATUS,Z
    INCF      math_double_main_global_XHi_1,F
    BTFSC     STATUS,Z
    INCF      math_double_main_global_XHi_2,F
    BTFSS     STATUS,Z
    GOTO      MUL32OK
    RRF       math_double_main_global_XHi_2,F
    RRF       math_double_main_global_XHi_1,F
    RRF       math_double_main_global_XLo_2,F
    INCF      math_double_main_global_XExp,F
    BTFSC     STATUS,Z
    GOTO      JPMSETFOV32
MUL32OK:
    BTFSS     math_double_main_global_Sign,7
    BCF       math_double_main_global_XHi_2,7
    MOVLW     0x00
    ;MOVWF     math_double_main_global_jmpFlg
    GOTO      MUL32EEE
JPMRES032:
    MOVLW     0x01
    ;MOVWF     math_double_main_global_jmpFlg
  }  
    RES032();
  asm{
    GOTO      MUL32EEE
JPMSETFOV32:
    MOVLW     0x02
    ;MOVWF     math_double_main_global_jmpFlg
  }
    SETFOV32();
  asm{
    GOTO      MUL32EEE
JPMSETFUN32:
    MOVLW     0x04
    ;MOVWF     math_double_main_global_jmpFlg
  }    
    SETFUN32();
  asm{
MUL32EEE:
    NOP
  }
//  switch (main_global_jmpFlg) {
//    case 1: RES032();  break;
//    case 2: SETFOV32(); break;
//    case 4: SETFUN32(); break;
//  }
}


/*******************************************************************************
       Floating Point Divide
       Input:  32 bit floating point dividend in XExp, XHi_2, XHi_1, XLo_2
               32 bit floating point divisor in YExp, YHi_2, YHi_1, YLo_2
       Output: 32 bit floating point quotient in XExp, XHi_2, XHi_1, XLo_2
       Result: AARG  <--  AARG / BARG 
       Note:   lower 5 bits of Sign register are used as counter for loops,
       	       while the highest bit is used to indicate sign of the result*/	
       
 void  Div_32x32_FP() {
//  main_global_XExp= main_global_XExp;
//  main_global_XHi = main_global_XHi;
//  main_global_XLo = main_global_XLo;
//  main_global_YExp= main_global_YExp;
//  main_global_YHi = main_global_YHi;
//  main_global_YLo = main_global_YLo;
//  main_global_FPFLAGS = main_global_FPFLAGS;
//  main_global_Sign    = main_global_Sign;
//  main_global_AARGB4  = main_global_AARGB4;
//  main_global_AARGB5  = main_global_AARGB5;
//  main_global_TEMP    = main_global_TEMP;
  __math_tempbD = __math_tempbD;
  
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
  
  asm   {
 	  BCF STATUS, RP0   
    BCF STATUS, RP1
FPD32:
    MOVF      math_double_main_global_YExp,W
    BTFSC     STATUS,Z
    GOTO      JPDSETFDZ32

    MOVF      math_double_main_global_XExp,W
    BTFSC     STATUS,Z
    GOTO      JPDRES032
D32BNE0:
    MOVF      math_double_main_global_XHi_2,W
    XORWF     math_double_main_global_YHi_2,W
    ANDLW     128                                         //dodato
    MOVWF     math_double_main_global_Sign
    BSF       math_double_main_global_XHi_2,7
    BSF       math_double_main_global_YHi_2,7
TALIGN32:
    CLRF      math_double_main_global_TEMP
    MOVF      math_double_main_global_XHi_2,W
    MOVWF     math_double_main_global_XLo_1
    MOVF      math_double_main_global_XHi_1,W
    MOVWF     math_double_main_global_AARGB4
    MOVF      math_double_main_global_XLo_2,W
    MOVWF     math_double_main_global_AARGB5

    MOVF      math_double_main_global_YLo_2,W
    SUBWF     math_double_main_global_AARGB5,F
    MOVF      math_double_main_global_YHi_1,W
    BTFSS     STATUS,C
    INCFSZ    math_double_main_global_YHi_1,W
TS1ALIGN32:
    SUBWF     math_double_main_global_AARGB4,F
    MOVF      math_double_main_global_YHi_2,W
    BTFSS     STATUS,C
    INCFSZ    math_double_main_global_YHi_2,W
TS2ALIGN32:
    SUBWF     math_double_main_global_XLo_1,F
    CLRF      math_double_main_global_XLo_1
    CLRF      math_double_main_global_AARGB4
    CLRF      math_double_main_global_AARGB5
    BTFSS     STATUS,C
    GOTO      DALIGN32OK

    BCF       STATUS,C
    RRF       math_double_main_global_XHi_2,F
    RRF       math_double_main_global_XHi_1,F
    RRF       math_double_main_global_XLo_2,F
    RRF       math_double_main_global_XLo_1,F
    MOVLW     0x01
    MOVWF     math_double_main_global_TEMP
DALIGN32OK:
    MOVF      math_double_main_global_YExp,W
    SUBWF     math_double_main_global_XExp,F
    BTFSS     STATUS,C
    GOTO      ALTB32
AGEB32:
    MOVLW     126
    ADDWF     math_double_main_global_TEMP,W
    ADDWF     math_double_main_global_XExp,F
    BTFSC     STATUS,C
    GOTO      JPDSETFOV32
    GOTO      DARGOK32
ALTB32:
    MOVLW     126
    ADDWF     math_double_main_global_TEMP,W
    ADDWF     math_double_main_global_XExp,F
    BTFSS     STATUS,C
    GOTO      JPDSETFUN32
DARGOK32:
    MOVLW     24
    ;MOVWF     math_double_main_global_TEMPB1
    ADDWF     math_double_main_global_Sign, F         //dodato
DLOOP32:
    RLF       math_double_main_global_AARGB5,F
    RLF       math_double_main_global_AARGB4,F
    RLF       math_double_main_global_XLo_1,F
    RLF       math_double_main_global_XLo_2,F
    RLF       math_double_main_global_XHi_1,F
    RLF       math_double_main_global_XHi_2,F
    RLF       math_double_main_global_TEMP,F

    MOVF      math_double_main_global_YLo_2,W
    SUBWF     math_double_main_global_XLo_2,F
    MOVF      math_double_main_global_YHi_1,W
    BTFSS     STATUS,C
    INCFSZ    math_double_main_global_YHi_1,W
DS132:
    SUBWF     math_double_main_global_XHi_1,F
    MOVF      math_double_main_global_YHi_2,W
    BTFSS     STATUS,C
    INCFSZ    math_double_main_global_YHi_2,W
DS232:
    SUBWF     math_double_main_global_XHi_2,F
    RLF       math_double_main_global_YHi_2,W
    IORWF     math_double_main_global_TEMP,F
    BTFSS     math_double_main_global_TEMP,0
    GOTO      DREST32
    BSF       math_double_main_global_AARGB5,0
    GOTO      DOK32
DREST32:
    MOVF      math_double_main_global_YLo_2,W
    ADDWF     math_double_main_global_XLo_2,F
    MOVF      math_double_main_global_YHi_1,W
    BTFSC     STATUS,C
    INCFSZ    math_double_main_global_YHi_1,W
DAREST32:
    ADDWF     math_double_main_global_XHi_1,F
    MOVF      math_double_main_global_YHi_2,W
    BTFSC     STATUS,C
    INCF      math_double_main_global_YHi_2,W
    ADDWF     math_double_main_global_XHi_2,F
    BCF       math_double_main_global_AARGB5,0
DOK32:
    ;DECFSZ    math_double_main_global_TEMPB1,F
    DECF      math_double_main_global_Sign, F        //dodato
    MOVLW     31                                     //dodato
    ANDWF     math_double_main_global_Sign, W        //dodato 
    BTFSS     STATUS, Z                              //dodato
    GOTO      DLOOP32
DROUND32:
    BTFSC     math_double_main_global_FPFLAGS,RND
    BTFSS     math_double_main_global_AARGB5,0
    GOTO      DIV32OK
    BCF       STATUS,C
    RLF       math_double_main_global_XLo_2,F
    RLF       math_double_main_global_XHi_1,F
    RLF       math_double_main_global_XHi_2,F
    RLF       math_double_main_global_TEMP,F

    MOVF      math_double_main_global_YLo_2,W
    SUBWF     math_double_main_global_XLo_2,F
    MOVF      math_double_main_global_YHi_1,W
    BTFSS     STATUS,C
    INCFSZ    math_double_main_global_YHi_1,W
    SUBWF     math_double_main_global_XHi_1,F
    MOVF      math_double_main_global_YHi_2,W
    BTFSS     STATUS,C
    INCFSZ    math_double_main_global_YHi_2,W
    SUBWF     math_double_main_global_XHi_2,F
    RLF       math_double_main_global_YHi_2,W
    IORWF     math_double_main_global_TEMP,W
    ANDLW     0x01
    ADDWF     math_double_main_global_AARGB5,F
    BTFSC     STATUS,C
    INCF      math_double_main_global_AARGB4,F
    BTFSC     STATUS,Z
    INCF      math_double_main_global_XLo_1,F
    BTFSS     STATUS,Z
    GOTO      DIV32OK
    RRF       math_double_main_global_XLo_1,F
    RRF       math_double_main_global_AARGB4,F
    RRF       math_double_main_global_AARGB5,F
    INCF      math_double_main_global_XExp,F
    BTFSC     STATUS,Z
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

    MOVLW     0x00
    ;MOVWF     math_double_main_global_jmpFlg
    GOTO      DIV32EEE
JPDSETFDZ32:
    MOVLW     0x01
    ;MOVWF     math_double_main_global_jmpFlg
  }  
    SETFDZ32();         //dodato
  asm{
    GOTO      DIV32EEE
JPDRES032:
    MOVLW     0x02
    ;MOVWF     math_double_main_global_jmpFlg
  }  
    RES032();         //dodato
  asm{
    GOTO      DIV32EEE
JPDSETFOV32:
    MOVLW     0x04
    ;MOVWF     math_double_main_global_jmpFlg
  }  
    SETFOV32();          //dodato
  asm{
    GOTO      DIV32EEE
JPDSETFUN32:
    MOVLW     0x08
    ;MOVWF     math_double_main_global_jmpFlg
  }
    SETFUN32();         //dodato
  asm{
DIV32EEE:
    NOP
  }
/*  switch (main_global_jmpFlg) {
    case 1: SETFDZ32(); break;
    case 2: RES032();   break;
    case 4: SETFOV32(); break;
    case 8: SETFUN32(); break;
  }
*/
}

/*******************************************************************************
*********************** Conversion routines ***********************************
*******************************************************************************/

void SETIOV3224() {
//  main_global_XHi = main_global_XHi;
//  main_global_XLo = main_global_XLo;
//  main_global_FPFLAGS = main_global_FPFLAGS;
//  main_global_Sign    = main_global_Sign;
  asm  {
    BSF       math_double_main_global_FPFLAGS,IOV
    BTFSS     math_double_main_global_FPFLAGS,SAT
    GOTO      SETIOV3224EEE

    CLRF      math_double_main_global_XHi_2
    BTFSS     math_double_main_global_Sign,7
    MOVLW     0xFF
    MOVWF     math_double_main_global_XHi_2
    MOVWF     math_double_main_global_XHi_1
    MOVWF     math_double_main_global_XLo_2
    RLF       math_double_main_global_Sign,F
    RRF       math_double_main_global_XHi_2,F
SETIOV3224EEE:
    MOVLW     0xFF
  }
}

/*******************************************************************************
       Float to Longword conversion
       Input:  32 bit floating point number in XExp, XHi_2, XHi_1, XLo_2
       Output: 32 bit unSIGNed integer (Longword) right justified in XHi_2, XHi_1,
               XLo_2, XLo_1
       Result: AARG  <--  INT(AARG) */
 void double2longword() {
//  main_global_XExp = main_global_XExp;
//  main_global_XHi  = main_global_XHi;
//  main_global_XLo  = main_global_XLo;
//  main_global_FPFLAGS = main_global_FPFLAGS;
//  main_global_Sign    = main_global_Sign;
//  main_global_jmpFlg  = main_global_jmpFlg;
  asm  {
 	  BCF STATUS, RP0   
    BCF STATUS, RP1
INT3232U:
    CLRF      math_double_main_global_FPFLAGS
    CLRF      math_double_main_global_jmpFlg
    CLRF      math_double_main_global_XLo_1
    MOVF      math_double_main_global_XExp,W
    BTFSC     STATUS,Z
    GOTO      INT3232UEOK
    BSF       math_double_main_global_XHi_2,7
    MOVLW     158
    SUBWF     math_double_main_global_XExp,F
    BTFSC     math_double_main_global_XExp,7
    GOTO      SETEXP32U
    BTFSC     STATUS,Z
    GOTO      SETEXP32U
    GOTO      SETIOV32U
SETEXP32U:
    COMF      math_double_main_global_XExp,F
    INCF      math_double_main_global_XExp,F
    MOVLW     8
    SUBWF     math_double_main_global_XExp,W
    BTFSS     STATUS,C
    GOTO      TSHIFT3232U
    MOVWF     math_double_main_global_XExp
    RLF       math_double_main_global_XLo_1,F
    MOVF      math_double_main_global_XLo_2,W
    MOVWF     math_double_main_global_XLo_1
    MOVF      math_double_main_global_XHi_1,W
    MOVWF     math_double_main_global_XLo_2
    MOVF      math_double_main_global_XHi_2,W
    MOVWF     math_double_main_global_XHi_1
    CLRF      math_double_main_global_XHi_2

    MOVLW     8
    SUBWF     math_double_main_global_XExp,W
    BTFSS     STATUS,C
    GOTO      TSHIFT3232U
    MOVWF     math_double_main_global_XExp
    RLF       math_double_main_global_XLo_1,F
    MOVF      math_double_main_global_XLo_2,W
    MOVWF     math_double_main_global_XLo_1
    MOVF      math_double_main_global_XHi_1,W
    MOVWF     math_double_main_global_XLo_2
    CLRF      math_double_main_global_XHi_1

    MOVLW     8
    SUBWF     math_double_main_global_XExp,W
    BTFSS     STATUS,C
    GOTO      TSHIFT3232U
    MOVWF     math_double_main_global_XExp
    RLF       math_double_main_global_XLo_1,F
    MOVF      math_double_main_global_XLo_2,W
    MOVWF     math_double_main_global_XLo_1
    CLRF      math_double_main_global_XLo_2

    MOVLW     8
    SUBWF     math_double_main_global_XExp,W
    BTFSS     STATUS,C
    GOTO      TSHIFT3232U
    MOVWF     math_double_main_global_XExp
    RLF       math_double_main_global_XLo_1,F
    CLRF      math_double_main_global_XLo_1

    MOVF      math_double_main_global_XExp,W
    BTFSS     STATUS,Z
    BCF       STATUS,C
    GOTO      SHIFT3232UOK
TSHIFT3232U:
    MOVF      math_double_main_global_XExp,W
    BTFSC     STATUS,Z
    GOTO      SHIFT3232UOK
SHIFT3232U:
    BCF       STATUS,C
    RRF       math_double_main_global_XHi_2,F
    RRF       math_double_main_global_XHi_1,F
    RRF       math_double_main_global_XLo_2,F
    RRF       math_double_main_global_XLo_1,F
    DECFSZ    math_double_main_global_XExp,F
    GOTO      SHIFT3232U
SHIFT3232UOK:
    BTFSC     math_double_main_global_FPFLAGS,RND
    BTFSS     math_double_main_global_XLo_1,0
    GOTO      INT3232UOK
    BTFSS     STATUS,C
    GOTO      INT3232UOK
    INCF      math_double_main_global_XLo_1,F
    BTFSC     STATUS,Z
    INCF      math_double_main_global_XLo_2,F
    BTFSC     STATUS,Z
    INCF      math_double_main_global_XHi_1,F
    BTFSC     STATUS,Z
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
    BTFSC     STATUS,Z
    INCF      math_double_main_global_XLo_2,F
    BTFSC     STATUS,Z
    INCF      math_double_main_global_XHi_1,F
    BTFSC     STATUS,Z
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
    RLF       math_double_main_global_Sign,F
    RRF       math_double_main_global_XHi_2,F
    GOTO      INT3232UEER
JPLSETIOV3224:
    MOVLW     0x01
    MOVWF     math_double_main_global_jmpFlg
    GOTO      INT3232UEEE
INT3232UEOK:
    MOVLW     0x00
    MOVWF     math_double_main_global_jmpFlg
    GOTO      INT3232UEEE
INT3232UEER:
    MOVLW     0xFF
    MOVWF     math_double_main_global_jmpFlg
INT3232UEEE:
    ;BCF	      STATUS,RP1
    ;BCF	      STATUS,RP0
    MOVF      math_double_main_global_jmpFlg, F
    ;SUBLW     0
    BTFSC     STATUS,Z
    GOTO      L_Double2Longword_0
  }
    SETIOV3224();
  asm {
  /*if(math_double_main_global_jmpFlg) SETIOV3224();*/
L_Double2Longword_0:
    MOVF      math_double_main_global_XHi_2,W
    MOVWF     math_double_main_global_XExp
    MOVF      math_double_main_global_XHi_1,W
    MOVWF     math_double_main_global_XHi_2
    MOVF      math_double_main_global_XLo_2,W
    MOVWF     math_double_main_global_XHi_1
    MOVF      math_double_main_global_XLo_1,W
    MOVWF     math_double_main_global_XLo_2
  }

}


/*******************************************************************************
       Double to Longint conversion
       Input:  32 bit floating point number in XExp, XHi_2, XHi_1, XLo_2
       Output: 32 bit 2's complement integer (Longint) right justified in XHi_2, XHi_1,
               XLo_2, XLo_1
       Result: AARG  <--  INT(AARG)  */
 void double2longint() {
//  main_global_XExp = main_global_XExp;
//  main_global_XHi  = main_global_XHi;
//  main_global_XLo  = main_global_XLo;
//  main_global_FPFLAGS = main_global_FPFLAGS;
//  main_global_Sign    = main_global_Sign;
//  main_global_jmpFlg  = main_global_jmpFlg;
  asm  {
 	  BCF STATUS, RP0   
    BCF STATUS, RP1
INT3232:
    CLRF      math_double_main_global_FPFLAGS
    CLRF      math_double_main_global_jmpFlg
    CLRF      math_double_main_global_XLo_1
    MOVF      math_double_main_global_XExp,W
    BTFSC     STATUS,Z
    GOTO      INT3232EOK
    MOVF      math_double_main_global_XHi_2,W
    MOVWF     math_double_main_global_Sign
    BSF       math_double_main_global_XHi_2,7
    MOVLW     158
    SUBWF     math_double_main_global_XExp,F
    BTFSS     math_double_main_global_XExp,7
    GOTO      SETIOV32
    COMF      math_double_main_global_XExp,F
    INCF      math_double_main_global_XExp,F

    MOVLW     8
    SUBWF     math_double_main_global_XExp,W
    BTFSS     STATUS,C
    GOTO      TSHIFT3232
    MOVWF     math_double_main_global_XExp
    RLF       math_double_main_global_XLo_1,F
    MOVF      math_double_main_global_XLo_2,W
    MOVWF     math_double_main_global_XLo_1
    MOVF      math_double_main_global_XHi_1,W
    MOVWF     math_double_main_global_XLo_2
    MOVF      math_double_main_global_XHi_2,W
    MOVWF     math_double_main_global_XHi_1
    CLRF      math_double_main_global_XHi_2

    MOVLW     8
    SUBWF     math_double_main_global_XExp,W
    BTFSS     STATUS,C
    GOTO      TSHIFT3232
    MOVWF     math_double_main_global_XExp
    RLF       math_double_main_global_XLo_1,F
    MOVF      math_double_main_global_XLo_2,W
    MOVWF     math_double_main_global_XLo_1
    MOVF      math_double_main_global_XHi_1,W
    MOVWF     math_double_main_global_XLo_2
    CLRF      math_double_main_global_XHi_1

    MOVLW     8
    SUBWF     math_double_main_global_XExp,W
    BTFSS     STATUS,C
    GOTO      TSHIFT3232
    MOVWF     math_double_main_global_XExp
    RLF       math_double_main_global_XLo_1,F
    MOVF      math_double_main_global_XLo_2,W
    MOVWF     math_double_main_global_XLo_1
    CLRF      math_double_main_global_XLo_2

    MOVLW     8
    SUBWF     math_double_main_global_XExp,W
    BTFSS     STATUS,C
    GOTO      TSHIFT3232
    MOVWF     math_double_main_global_XExp
    RLF       math_double_main_global_XLo_1,F
    CLRF      math_double_main_global_XLo_1
    MOVF      math_double_main_global_XExp,W
    BTFSS     STATUS,Z
    BCF       STATUS,C
    GOTO      SHIFT3232OK
TSHIFT3232:
    MOVF      math_double_main_global_XExp,W
    BTFSC     STATUS,Z
    GOTO      SHIFT3232OK
SHIFT3232:
    BCF       STATUS,C
    RRF       math_double_main_global_XHi_2,F
    RRF       math_double_main_global_XHi_1,F
    RRF       math_double_main_global_XLo_2,F
    RRF       math_double_main_global_XLo_1,F
    DECFSZ    math_double_main_global_XExp,F
    GOTO      SHIFT3232
SHIFT3232OK:
    BTFSC     math_double_main_global_FPFLAGS,RND
    BTFSS     math_double_main_global_XLo_1,0
    GOTO      INT3232OK
    BTFSS     STATUS,C
    GOTO      INT3232OK
    INCF      math_double_main_global_XLo_1,F
    BTFSC     STATUS,Z
    INCF      math_double_main_global_XLo_2,F
    BTFSC     STATUS,Z
    INCF      math_double_main_global_XHi_1,F
    BTFSC     STATUS,Z
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
    BTFSC     STATUS,Z
    INCF      math_double_main_global_XLo_2,F
    BTFSC     STATUS,Z
    INCF      math_double_main_global_XHi_1,F
    BTFSC     STATUS,Z
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
    RLF       math_double_main_global_Sign,F
    RRF       math_double_main_global_XHi_2,F
    GOTO      INT3232EER
JPISETIOV3224:
    MOVLW     0x01
    MOVWF     math_double_main_global_jmpFlg
    GOTO      INT3232EEE
INT3232EOK:
    MOVLW     0x00
    MOVWF     math_double_main_global_jmpFlg
    GOTO      INT3232EEE
INT3232EER:
    MOVLW     0xFF
    MOVWF     math_double_main_global_jmpFlg
INT3232EEE:
    ;NOP
    ;BCF       STATUS,RP1
    ;BCF       STATUS,RP0
    MOVF      math_double_main_global_jmpFlg, F
    ;SUBLW     0
    BTFSC     STATUS,Z
    GOTO      L_Double2Longint_0
  }
    SETIOV3224();
  /*if (math_double_main_global_jmpFlg) SETIOV3224();*/
  asm {
L_Double2Longint_0:
    MOVF      math_double_main_global_XHi_2,W
    MOVWF     math_double_main_global_XExp
    MOVF      math_double_main_global_XHi_1,W
    MOVWF     math_double_main_global_XHi_2
    MOVF      math_double_main_global_XLo_2,W
    MOVWF     math_double_main_global_XHi_1
    MOVF      math_double_main_global_XLo_1,W
    MOVWF     math_double_main_global_XLo_2
  }
}

/*******************************************************************************
       Double to integer conversion
       Input:  32 bit floating point number (Double) in XExp, XHi_2, XHi_1, XLo_2
       Use:    CALL    INT3216
       Output: 16 bit 2's complement integer (Int) right justified in XHi_2, XHi_1
       Result: AARG  <--  INT(AARG) */

 void double2int()  {
//  main_global_XExp    = main_global_XExp;
//  main_global_XHi     = main_global_XHi;
//  main_global_FPFLAGS = 0;//main_global_FPFLAGS;
//  main_global_Sign    = main_global_Sign;
//  main_global_jmpFlg  = main_global_jmpFlg;

  asm   {
 	  BCF STATUS, RP0   
    BCF STATUS, RP1
INT3216:
    CLRF      math_double_main_global_FPFLAGS
    MOVF      math_double_main_global_XExp,W
    BTFSC     STATUS,Z
    GOTO      IRES016

    MOVF      math_double_main_global_XHi_2,W
    MOVWF     math_double_main_global_Sign
    BSF       math_double_main_global_XHi_2,7

    MOVLW     142
    SUBWF     math_double_main_global_XExp,F
    BTFSS     math_double_main_global_XExp,7
    GOTO      SETIOV16
    COMF      math_double_main_global_XExp,F
    INCF      math_double_main_global_XExp,F

    MOVLW     8
    SUBWF     math_double_main_global_XExp,W
    BTFSS     STATUS,C
    GOTO      TSHIFT3216
    MOVWF     math_double_main_global_XExp
    RLF       math_double_main_global_XHi_1,F
    MOVF      math_double_main_global_XHi_2,W
    MOVWF     math_double_main_global_XHi_1
    CLRF      math_double_main_global_XHi_2

    MOVLW     8
    SUBWF     math_double_main_global_XExp,W
    BTFSS     STATUS,C
    GOTO      TSHIFT3216
    MOVWF     math_double_main_global_XExp
    RLF       math_double_main_global_XHi_1,F
    CLRF      math_double_main_global_XHi_1

    MOVF      math_double_main_global_XExp,W
    BTFSS     STATUS,Z
    BCF       STATUS,C
    GOTO      SHIFT3216OK
TSHIFT3216:
    MOVF      math_double_main_global_XExp,W
    BTFSC     STATUS,Z
    GOTO      SHIFT3216OK
SHIFT3216:
    BCF       STATUS,C
    RRF       math_double_main_global_XHi_2,F
    RRF       math_double_main_global_XHi_1,F
    DECFSZ    math_double_main_global_XExp,F
    GOTO      SHIFT3216
SHIFT3216OK:
    BTFSC     math_double_main_global_FPFLAGS,RND
    BTFSS     math_double_main_global_XHi_1,0
    GOTO      INT3216OK
    BTFSS     STATUS,C
    GOTO      INT3216OK
    INCF      math_double_main_global_XHi_1,F
    BTFSC     STATUS,Z
    INCF      math_double_main_global_XHi_2,F
    BTFSC     math_double_main_global_XHi_2,7
    GOTO      JPJSETIOV3224
INT3216OK:
    BTFSS     math_double_main_global_Sign,7
    GOTO      INT3216EOK

    COMF      math_double_main_global_XHi_2,F
    COMF      math_double_main_global_XHi_1,F
    INCF      math_double_main_global_XHi_1,F
    BTFSC     STATUS,Z
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
    RLF       math_double_main_global_Sign,F
    RRF       math_double_main_global_XHi_2,F
    GOTO      INT3216EER

JPJSETIOV3224:
    MOVLW     0x01
    MOVWF     math_double_main_global_jmpFlg
    GOTO      INT3216EEE
INT3216EOK:
    MOVLW     0x00
    MOVWF     math_double_main_global_jmpFlg
    GOTO      INT3216EEE
INT3216EER:
    MOVLW     0xFF
    MOVWF     math_double_main_global_jmpFlg
INT3216EEE:
    ;BCF	      STATUS,RP1
    ;BCF	      STATUS,RP0
    MOVF      math_double_main_global_jmpFlg, F
    ;SUBLW     0
    BTFSC     STATUS,Z
    GOTO      L_Double2Int_0
  }
    SETIOV3224();
  asm {
L_Double2Int_0:
    MOVF      math_double_main_global_XHi_1,W
    MOVWF     math_double_main_global_XLo_2
    MOVF      math_double_main_global_XHi_2,W
    MOVWF     math_double_main_global_XHi_1
  }
  /*if (math_double_main_global_jmpFlg) SETIOV3224();*/

}

/*******************************************************************************
       Double to Word conversion
       Input:  32 bit floating point number in XExp, XHi_2, XHi_1, XLo_2
       Use:    CALL    INT3216U
       Output: 16 bit unSIGNed absolute value (the SIGN is ignored) integer
               (Word) right justified in XHi_2, XHi_1
       Result: AARG  <--  ABS(INT(AARG)) */
 void double2word() {
//  main_global_XExp    = main_global_XExp;
//  main_global_XHi     = main_global_XHi;
//  main_global_FPFLAGS = main_global_FPFLAGS;
//  main_global_Sign    = main_global_Sign;
//  main_global_jmpFlg  = main_global_jmpFlg;
  asm   {
	  BCF STATUS, RP0   
    BCF STATUS, RP1
INT3216U:
    CLRF      math_double_main_global_FPFLAGS
    CLRF      math_double_main_global_jmpFlg
    CLRF      math_double_main_global_Sign
    
    MOVF      math_double_main_global_XExp,W
    BTFSC     STATUS,Z
    GOTO      IRES016U

    BSF       math_double_main_global_XHi_2,7

    MOVLW     142
    SUBWF     math_double_main_global_XExp,F
    BTFSC     math_double_main_global_XExp,7
    GOTO      SETEXP16U
    BTFSC     STATUS,Z
    GOTO      SETEXP16U
    GOTO      SETIOV16U
SETEXP16U:
    COMF      math_double_main_global_XExp,F
    INCF      math_double_main_global_XExp,F

    MOVLW     8
    SUBWF     math_double_main_global_XExp,W
    BTFSS     STATUS,C
    GOTO      TSHIFT3216U
    MOVWF     math_double_main_global_XExp
    RLF       math_double_main_global_XHi_1,F
    MOVF      math_double_main_global_XHi_2,W
    MOVWF     math_double_main_global_XHi_1
    CLRF      math_double_main_global_XHi_2

    MOVLW     8
    SUBWF     math_double_main_global_XExp,W
    BTFSS     STATUS,C
    GOTO      TSHIFT3216U
    RLF       math_double_main_global_XHi_1,F
    CLRF      math_double_main_global_XHi_1

    MOVF      math_double_main_global_XExp,W
    BTFSS     STATUS,Z
    BCF       STATUS,C
    GOTO      SHIFT3216UOK
TSHIFT3216U:
    MOVF      math_double_main_global_XExp,W
    BTFSC     STATUS,Z
    GOTO      SHIFT3216UOK
SHIFT3216U:
    BCF       STATUS,C
    RRF       math_double_main_global_XHi_2,F
    RRF       math_double_main_global_XHi_1,F
    DECFSZ    math_double_main_global_XExp,F
    GOTO      SHIFT3216U
SHIFT3216UOK:
    BTFSC     math_double_main_global_FPFLAGS,RND
    BTFSS     math_double_main_global_XHi_1,0
    GOTO      INT3216UOK
    BTFSS     STATUS,C
    GOTO      INT3216UOK
    INCF      math_double_main_global_XHi_1,F
    BTFSC     STATUS,Z
    INCF      math_double_main_global_XHi_2,F
    BTFSC     math_double_main_global_XHi_2,7
    GOTO      JPKSETIOV3224
INT3216UOK:
    BTFSS     math_double_main_global_Sign,7
    GOTO      INT3216UEOK

    COMF      math_double_main_global_XHi_2,F
    COMF      math_double_main_global_XHi_1,F
    INCF      math_double_main_global_XHi_1,F
    BTFSC     STATUS,Z
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
    RLF       math_double_main_global_Sign,F
    RRF       math_double_main_global_XHi_2,F
    GOTO      INT3216UEER

JPKSETIOV3224:
    MOVLW     0x01
    MOVWF     math_double_main_global_jmpFlg
    GOTO      INT3216UEEE
INT3216UEOK:
    MOVLW     0x00
    MOVWF     math_double_main_global_jmpFlg
    GOTO      INT3216UEEE
INT3216UEER:
    MOVLW     0xFF
    MOVWF     math_double_main_global_jmpFlg
INT3216UEEE:
    ;BCF	      STATUS,RP1
    ;BCF	      STATUS,RP0
    MOVF      math_double_main_global_jmpFlg, F
    ;SUBLW     0
    BTFSC     STATUS,Z
    GOTO      L_Double2Word_0
  }
    SETIOV3224();
  asm {
L_Double2Word_0:
    MOVF      math_double_main_global_XHi_1,W
    MOVWF     math_double_main_global_XLo_2
    MOVF      math_double_main_global_XHi_2,W
    MOVWF     math_double_main_global_XHi_1
  }
  /*if (math_double_main_global_jmpFlg) SETIOV3224();*/
}

/*******************************************************************************
       Double to Byte conversion
       Input:  32 bit floating point number in XExp, XHi_2, XHi_1, XLo_2
       Use:    CALL    INT32U08
       Output: 8 bit unSIGNed absolute value (the SIGN is ignored) integer (Byte)
               in XHi_2
       Result: AARG  <--  ABS(INT(AARG)) */

 void double2byte() {
//  main_global_XExp    = main_global_XExp;
//  main_global_XHi     = main_global_XHi;
//  main_global_FPFLAGS = main_global_FPFLAGS;
//  main_global_Sign    = main_global_Sign;
//  main_global_jmpFlg  = main_global_jmpFlg;
  asm   {
	  BCF STATUS, RP0   
    BCF STATUS, RP1
INT32U08:
    CLRF      math_double_main_global_FPFLAGS
    CLRF      math_double_main_global_jmpFlg
    CLRF      math_double_main_global_Sign
    
    MOVF      math_double_main_global_XExp,W
    BTFSC     STATUS,Z
    GOTO      IRES008

    BCF       math_double_main_global_Sign,7
    BSF       math_double_main_global_XHi_2,7

    MOVLW     134
    SUBWF     math_double_main_global_XExp,F
    BTFSC     math_double_main_global_XExp,7
    GOTO      SETEXP08
    BTFSC     STATUS,Z
    GOTO      SETEXP08
    GOTO      SETIOV08
SETEXP08:
    COMF      math_double_main_global_XExp,F
    INCF      math_double_main_global_XExp,F

    MOVLW     8
    SUBWF     math_double_main_global_XExp,W
    BTFSS     STATUS,C
    GOTO      TSHIFT3208
    MOVWF     math_double_main_global_XExp
    RLF       math_double_main_global_XHi_2,F
    CLRF      math_double_main_global_XHi_2

    MOVF      math_double_main_global_XExp,W
    BTFSS     STATUS,Z
    BCF       STATUS,C
    GOTO      SHIFT3208OK
TSHIFT3208:
    MOVF      math_double_main_global_XExp,W
    BTFSC     STATUS,Z
    GOTO      SHIFT3208OK
SHIFT3208:
    BCF       STATUS,C
    RRF       math_double_main_global_XHi_2,F
    DECFSZ    math_double_main_global_XExp,F
    GOTO      SHIFT3208
SHIFT3208OK:
    BTFSC     math_double_main_global_FPFLAGS,RND
    BTFSS     math_double_main_global_XHi_2,0
    GOTO      INT3208OK
    BTFSS     STATUS,C
    GOTO      INT3208OK
    INCF      math_double_main_global_XHi_2,F
    BTFSC     STATUS,Z
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
    GOTO      INT3208EEE
INT3208EOK:
    MOVLW     0x00
    MOVWF     math_double_main_global_jmpFlg
    GOTO      INT3208EEE
INT3208EER:
    MOVLW     0xFF
    MOVWF     math_double_main_global_jmpFlg
INT3208EEE:
    ;BCF	      STATUS,RP1
    ;BCF	      STATUS,RP0
    MOVF      math_double_main_global_jmpFlg, F
    ;SUBLW     0
    BTFSC     STATUS,Z
    GOTO      L_Double2Byte_0
  }
    SETIOV3224();
  asm {
L_Double2Byte_0:
    MOVF     math_double_main_global_XHi_2,W
    MOVWF    math_double_main_global_XLo_2
  }
  /*if (math_double_main_global_jmpFlg) SETIOV3224();*/

}

/*******************************************************************************
       Byte to Double conversion
       Input:  8 bit unSIGNed integer right justified in XLo_1
       Use:    CALL    FLO3232
       Output: 32 bit floating point number in XExp, XHi_2, XHi_1, XLo_2
       Result: AARG  <--  Double(AARG)  */
 void byte2double() {
//  main_global_XExp = main_global_XExp;
//  main_global_XHi  = main_global_XHi;
//  main_global_XLo  = main_global_XLo;
//  main_global_Sign    = main_global_Sign;
//  main_global_jmpFlg  = main_global_jmpFlg;
  asm  {
	  BCF STATUS, RP0   
    BCF STATUS, RP1
FLO08U32:
    MOVF      math_double_main_global_XLo_2,W
    MOVWF     math_double_main_global_XLo_1

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

/*******************************************************************************
       Integer to Double conversion
       Input:  16 bit 2's complement integer right justified in XLo_2, XLo_1
       Use:    CALL    FLO1632
       Output: 32 bit floating point number in XExp, XHi_2, XHi_1, XLo_2
       Result: AARG  <--  Double(AARG)*/
 void int2double() {
//  main_global_XExp = main_global_XExp;
//  main_global_XHi  = main_global_XHi;
//  main_global_XLo  = main_global_XLo;
//  main_global_Sign = main_global_Sign;
  asm  {
 	  BCF STATUS, RP0   
    BCF STATUS, RP1
    MOVF      math_double_main_global_XLo_2,W
    MOVWF     math_double_main_global_XLo_1
    MOVF      math_double_main_global_XHi_1,W
    MOVWF     math_double_main_global_XLo_2
    CLRF      math_double_main_global_XHi_1
    CLRF      math_double_main_global_XHi_2
    CLRF      math_double_main_global_XExp

FLO1632:
    CLRF      math_double_main_global_FPFLAGS
    CLRF      math_double_main_global_jmpFlg
    
    MOVLW     150
    MOVWF     math_double_main_global_XExp
    CLRF      math_double_main_global_Sign
    BTFSS     math_double_main_global_XLo_2,7
    GOTO      FLO1632EEE

    COMF      math_double_main_global_XLo_1,F
    COMF      math_double_main_global_XLo_2,F

    INCF      math_double_main_global_XLo_1,F
    BTFSC     STATUS,Z
    INCF      math_double_main_global_XLo_2,F

    BSF       math_double_main_global_Sign,7
FLO1632EEE:
    MOVF      math_double_main_global_XLo_2,W
    MOVWF     math_double_main_global_XHi_1
    MOVF      math_double_main_global_XLo_1,W
    MOVWF     math_double_main_global_XLo_2
    CLRF      math_double_main_global_XLo_1
    CLRF      math_double_main_global_XHi_2
  }
  NRM3232();
}

/*******************************************************************************
       Word to Double conversion
       Input:  16 bit unSIGNed integer right justified in XLo_2, XLo_1,
       Output: 32 bit floating point number in XExp, XHi_2, XHi_1, XLo_2
       Result: AARG  <--  Double(AARG)*/
 void word2double() {
//  main_global_XExp = main_global_XExp;
//  main_global_XHi  = main_global_XHi;
//  main_global_XLo  = main_global_XLo;
//  main_global_Sign = main_global_Sign;
  asm  {
 	  BCF STATUS, RP0   
    BCF STATUS, RP1
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

    MOVF      math_double_main_global_XLo_2,W
    MOVWF     math_double_main_global_XHi_1
    MOVF      math_double_main_global_XLo_1,W
    MOVWF     math_double_main_global_XLo_2
    CLRF      math_double_main_global_XLo_1
    CLRF      math_double_main_global_XHi_2
  }
  NRM3232();
}

/*******************************************************************************
       Longint to Double conversion
       Input:  32 bit 2's complement integer right justified in XHi_2, XHi_1,
               XLo_2, XLo_1
       Use:    CALL    FLO3232
       Output: 32 bit floating point number in XExp, XHi_2, XHi_1, XLo_2
       Result: AARG  <--  Double(AARG)*/
 void longint2double() {
//  main_global_XExp = main_global_XExp;
//  main_global_XHi  = main_global_XHi;
//  main_global_XLo  = main_global_XLo;
//  main_global_Sign = main_global_Sign;
//  main_global_jmpFlg = main_global_jmpFlg;
  asm  {
 	  BCF STATUS, RP0   
    BCF STATUS, RP1

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
    BTFSC     STATUS,Z
    INCF      math_double_main_global_XLo_2,F
    BTFSC     STATUS,Z
    INCF      math_double_main_global_XHi_1,F
    BTFSC     STATUS,Z
    INCF      math_double_main_global_XHi_2,F
    BSF       math_double_main_global_Sign,7
FLO3232EEE:
    MOVLW     0x02
    MOVWF     math_double_main_global_jmpFlg
  }
  NRM4032();
}

/*******************************************************************************
       Longword to Double conversion
       Input:  32 bit unSIGNed integer right justified in XHi_2, XHi_1,
               XLo_2, XLo_1
       Use:    CALL    FLO32U32
       Output: 32 bit floating point number in XExp, XHi_2, XHi_1, XLo_2
       Result: AARG  <--  Double(AARG) */
 void longword2double() {
//  main_global_XExp   = main_global_XExp;
//  main_global_Sign   = main_global_Sign;
//  main_global_jmpFlg = main_global_jmpFlg;
  asm  {
 	  BCF STATUS, RP0   
    BCF STATUS, RP1

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
*********************** Comparison routines ***********************************
*******************************************************************************}

{*******************************************************************************
       Operator <Equals>
       Input:  32 bit floating point numbers:
               first argument in XExp, XHi_2, XHi_1, XLo_2;
               second argument in YExp, YHi_2, YHi_1, YLo_2;
       Output: 32 bit floating point number in XExp, XHi_2, XHi_1, XLo_2
       Result: X = Y  --> WREG
               0 if true, 1 if false */
 void Equals_Double() {
//  main_global_XExp= main_global_XExp;
//  main_global_XHi = main_global_XHi;
//  main_global_XLo = main_global_XLo;
//  main_global_YExp= main_global_YExp;
//  main_global_YHi = main_global_YHi;
//  main_global_YLo = main_global_YLo;
  asm  {
 	  BCF STATUS, RP0   
    BCF STATUS, RP1

    MOVF     math_double_main_global_XExp,W
    XORWF    math_double_main_global_YExp,W
    BTFSS    STATUS,Z
    GOTO     EQU_FALSE

    MOVF     math_double_main_global_XHi_2,W
    XORWF    math_double_main_global_YHi_2,W
    BTFSS    STATUS,Z
    GOTO     EQU_FALSE

    MOVF     math_double_main_global_XHi_1,W
    XORWF    math_double_main_global_YHi_1,W
    BTFSS    STATUS,Z
    GOTO     EQU_FALSE

    MOVF     math_double_main_global_XLo_2,W
    XORWF    math_double_main_global_YLo_2,W
    BTFSC    STATUS,Z

    ;RETLW    0x01
    BSF      STATUS, Z
    RETURN
    
EQU_FALSE:
    ;RETLW    0x00
    BCF      STATUS, Z
    RETURN

  }
}

/*******************************************************************************
       Operator <Compare>
       Input:  32 bit floating point numbers:
               first argument in XExp, XHi_2, XHi_1, XLo_2;
               second argument in YExp, YHi_2, YHi_1, YLo_2;
       Output: Compare result in TEMP
       Result: X # Y  --> TEMP
                          1 if '=',
                          2 if '>',
                          4 if '<'                                 */
 void Compare_Double() {
//  main_global_XExp = main_global_XExp;          //memory bank setting
//  main_global_XHi  = main_global_XHi;
//  main_global_XLo  = main_global_XLo;
//  main_global_YExp = main_global_YExp;
//  main_global_YHi  = main_global_YHi;
//  main_global_YLo  = main_global_YLo;
//  main_global_Sign = main_global_Sign;
//  main_global_TEMP = main_global_TEMP;
  __math_tempbD = __math_tempbD;
  asm   {
	  BCF STATUS, RP0   
    BCF STATUS, RP1

    CLRF     math_double_main_global_Sign
    MOVF     math_double_main_global_XExp,W
    BTFSS    STATUS,Z
    BSF      math_double_main_global_Sign,0
    MOVF     math_double_main_global_YExp,W
    BTFSS    STATUS,Z
    BSF      math_double_main_global_Sign,1

    MOVF     math_double_main_global_Sign,W
    BTFSC    STATUS,Z
    GOTO     COMPARE_EQU
    XORLW    0x03
    BTFSC    STATUS,Z
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
    BTFSC    STATUS,Z
    GOTO     COMPARE_TESTALL

    MOVF     math_double_main_global_Sign,W
    BTFSC    STATUS,Z
    GOTO     COMPARE_GT
    GOTO     COMPARE_LT

COMPARE_TESTALL:
    MOVF     math_double_main_global_YExp,W
    SUBWF    math_double_main_global_XExp,W
    BTFSC    STATUS,Z
    GOTO     COMPARE_C1
    BTFSS    STATUS,C
    GOTO     GT_FALSE
    GOTO     GT_TRUE
COMPARE_C1:
    MOVF     math_double_main_global_YHi_2,W
    SUBWF    math_double_main_global_XHi_2,W
    BTFSC    STATUS,Z
    GOTO     COMPARE_C2
    BTFSS    STATUS,C
    GOTO     GT_FALSE
    GOTO     GT_TRUE
COMPARE_C2:
    MOVF     math_double_main_global_YHi_1,W
    SUBWF    math_double_main_global_XHi_1,W
    BTFSC    STATUS,Z
    GOTO     COMPARE_C3
    BTFSS    STATUS,C
    GOTO     GT_FALSE
    GOTO     GT_TRUE
COMPARE_C3:
    MOVF     math_double_main_global_YLo_2,W
    SUBWF    math_double_main_global_XLo_2,W
    BTFSC    STATUS,Z
    GOTO     COMPARE_EQU
    BTFSC    STATUS,C
    GOTO     GT_TRUE

GT_FALSE:
    MOVF     math_double_main_global_Sign,F
    BTFSC    STATUS,Z
    GOTO     COMPARE_LT
    GOTO     COMPARE_GT
GT_TRUE:
    MOVF     math_double_main_global_Sign,F
    BTFSC    STATUS,Z
    GOTO     COMPARE_GT
    GOTO     COMPARE_LT

COMPARE_GT:
    ;MOVLW    0x02
    ;MOVWF    math_double_main_global_TEMP
    BSF      STATUS, C
    RETURN
COMPARE_LT:
    ;MOVLW    0x04
    ;MOVWF    math_double_main_global_TEMP
    BCF      STATUS, C
    RETURN
COMPARE_EQU:
    ;MOVLW    0x01
    ;MOVWF    math_double_main_global_TEMP
    BSF      STATUS, C
    BSF      STATUS, Z
    RETURN
  }
}