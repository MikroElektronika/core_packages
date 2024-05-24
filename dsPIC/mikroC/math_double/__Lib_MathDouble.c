/******************************************************************************
    __Lib_MathDouble.c

 ------------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2023, MikroElektonika - www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

void Float_fpack(void) {
  asm  RCALL Float__fpack
  asm GOTO the_end_Float__fpack;

  asm {
    Float__fpack:
                  MOV       #0x8, W1
                  SUB       W11, #1, W0
                  BRA       GE, Float_notsubnormal
                  MOV       #0x0, W11
                  MOV       #0xffe6, W1
                  CP        W0, W1
                  BRA       le, Float_zerosig
    Float_subnormal:
                  IOR       W3, W2, W3
                  AND       W8, #1, W2
                  LSR       W9, W9
                  RRC       W8, W8
                  INC       W0, W0
                  BRA       NZ, Float_subnormal
                  MOV       #0x7, W1
    Float_notsubnormal:
                  AND       W8, #1, W0
                  IOR       W0, W3, W0
                  AND       W0, W2, W0
                  BRA       Z, Float_packupandgo
                  ADD       W8, #1, W8
                  ADDC      W9, #0, W9
                  BTST.Z    W9, W1
                  BRA       Z, Float_packupandgo
                  INC       W11, W11
                  CP        W1, #8
                  BRA       NZ, Float_packupandgo
                  LSR       W9, W9
                  RRC       W8, W8
    Float_packupandgo:
                  MOV       #0xff, W2
                  CP        W11, W2
                  BRA       GE, Float_overflow
                  SL        W11, #7, W11
                  AND       #0x7f, W9
                  IOR       W11, W9, W1
                  MOV       W8, W0
                  RETURN
    Float_overflow:
                  MOV       #0x7f80, W11
    Float_zerosig:
                  MOV       W11, W1
                  RETLW     #0x0, W0
  }

 asm the_end_Float__fpack:
   ;
}

/*
 * Function Name:
     _Long2Float
 * Description:
     Converts 32-bit signed/unsigned long integer to 32-bit floating-point.
 */
void _Long2Float(void) {
  asm  RCALL LL_intro_Long2Float
  asm  GOTO the_end__Long2Float;

  asm {  LL_intro_Long2Float:
                  CP0       W2                                                  ; check the sign
                  BRA       NZ, Longint2Float__floatsisf                        ; if !=0 => signed long
    ; entry for unsigned long
    Longword2Float__floatuisf:
                  CLR       W10
                  CP0       W1
                  BRA       GTU, Long2Float_notspecial
                  CP0       W0
                  BRA       Z, Long2Float_return0
                  BRA       Long2Float_notspecial
    ; entry for signed long
    Longint2Float__floatsisf:
                  MOV       W1, W10
                  CP0       W1
                  BRA       LT, Longint2Float_negative
                  BRA       GT, Long2Float_notspecial
                  CP0       W0
                  BRA       Z, Long2Float_return0
                  BRA       Long2Float_notspecial
    Longint2Float_negative:
                  SUBR      W0, #0, W0
                  SUBBR     W1, #0, W1
                  BRA       NN, Long2Float_notspecial
                  MOV       #0xcf00, W1
                  BRA       Long2Float_return0
    ; common part
    Long2Float_notspecial:
                  MOV.D     W0, W8
                  MUL.UU    W2, #0, W2
                  MOV       #0x96, W11
                  FF1L      W9, W4
                  BRA       NC, Long2Float_fixshift
                  FF1L      W8, W4
                  ADD.B     #0x10, W4
    Long2Float_fixshift:
                  SUB.B     W4, #9, W4
                  BRA       Z, Long2Float_round
                  BRA       NN, Long2Float_shiftleft
    Long2Float_shiftright:
                  IOR       W3, W2, W3
                  AND       W8, #1, W2
                  LSR       W9, W9
                  RRC       W8, W8
                  INC       W11, W11
                  INC.B     W4, W4
                  BRA       NZ, Long2Float_shiftright
                  BRA       Long2Float_round
    Long2Float_shiftleft:
                  ADD       W8, W8, W8
                  ADDC      W9, W9, W9
                  DEC       W11, W11
                  DEC.B     W4, W4
                  BRA       NZ, Long2Float_shiftleft
    Long2Float_round:
                  RCALL     Long2Float__fpack
                  BTSC      W10, #15
                  BSET      W1, #15
    Long2Float_return0:
                  RETURN
    Long2Float__fpack:
                  MOV       #0x8, W1
                  SUB       W11, #1, W0
                  BRA       GE, Long2Float_notsubnormal
                  MOV       #0x0, W11
                  MOV       #0xffe6, W1
                  CP        W0, W1
                  BRA       le, Long2Float_zerosig
    Long2Float_subnormal:
                  IOR       W3, W2, W3
                  AND       W8, #1, W2
                  LSR       W9, W9
                  RRC       W8, W8
                  INC       W0, W0
                  BRA       NZ, Long2Float_subnormal
                  MOV       #0x7, W1
    Long2Float_notsubnormal:
                  AND       W8, #1, W0
                  IOR       W0, W3, W0
                  AND       W0, W2, W0
                  BRA       Z, Long2Float_packupandgo
                  ADD       W8, #1, W8
                  ADDC      W9, #0, W9
                  BTST.Z    W9, W1
                  BRA       Z, Long2Float_packupandgo
                  INC       W11, W11
                  CP        W1, #8
                  BRA       NZ, Long2Float_packupandgo
                  LSR       W9, W9
                  RRC       W8, W8
    Long2Float_packupandgo:
                  MOV       #0xff, W2
                  CP        W11, W2
                  BRA       GE, Long2Float_overflow
                  SL        W11, #7, W11
                  AND       #0x7f, W9
                  IOR       W11, W9, W1
                  MOV       W8, W0
                  RETURN
    Long2Float_overflow:
                  MOV       #0x7f80, W11
    Long2Float_zerosig:
                  MOV       W11, W1
                  RETLW     #0x0, W0
  } // asm

 asm  the_end__Long2Float:
   ;
}

/*
 * Function Name:
     _LongLong2Float
 * Description:
     Convert 64-bit signed integer to 32-bit floating-point
 */
void _LongLong2Float(void) {
  asm  RCALL Longlong2Float_floatdisf;
  asm  GOTO the_end__LongLong2Float;

  asm {
      Longlong2Float_floatdisf:
              mov     W3, W10                                 ; Preserve sign

      ;------ Check for special arguments: 0x0000000000000000 and 0x8000000000000000

              cp0     W3                                      ; arg < 0 ?
              bra     lt, Longlong2Float_negative             ; Yes ...
              bra     gt, Longlong2Float_notspecial           ; No ...
              ior     W1, W0, W4                              ; arg == 0 ?
              ior     W2, W4, W4                              ; *
              bra     z, Longlong2Float_return0               ; Yes ...
              bra     Longlong2Float_notspecial               ; arg is > 0

      ;------ Argument is negative

      Longlong2Float_negative:
              subr    W0, #0, W0                              ; (w3:w0) = |arg|
              subbr   W1, #0, W1                              ; *
              subbr   W2, #0, W2                              ; *
              subbr   W3, #0, W3                              ; *
              bra     nn, Longlong2Float_notspecial           ; arg is in range

      ;------ Maximum negative integer: -1.0 x 2^63

              mov     #0x8000, W1                            ; Convert to floating-point
              bra     Longlong2Float_return0                 ; Done

      ;-----------------------------------------------------------------------;
      ;       Argument is not special
      ;-----------------------------------------------------------------------;

      Longlong2Float_notspecial:

      ;------ Form significand, exponent, sticky & round

              mov.d   W0, W8                                  ; (w9:w8) = significand
              mov.d   W2, W0                                  ; *
              mul.uu  W2, #0, W2                              ; (w2) = round
                                                              ; (w3) = sticky
              mov     #150, W11                               ; (w11)= exponent (23+FLT_BIAS)

      ;------ Form the significand by aligning the MSB at position 23

      ;       Using the find-first instructions, the bit numbering is
      ;       such that bit 63 is numbered 1 and bit 0 is numbered 64.
      ;       We want to align the MSB of the argument at position 23,
      ;       i.e., bit number 41. So, subtracting 41 from the bit number
      ;       gives the shift count for aligning the MSB.
      ;       If the shift count is negative, it means that the MSB
      ;       is to the left of position 23, so a right shift is needed.

              mov     #41, W5                                 ; (w5) = shift normalizer
              ff1l    W1, W4                                  ; (w4) = shift count
              bra     nc, Longlong2Float_fixshift             ; Found the leading '1' ...
              sub.b   #16, W5                                 ; Adjust normalizer
              ff1l    W0, W4                                  ; Try again
              bra     nc, Longlong2Float_fixshift             ; Found the leading '1' ...
              sub.b   #16, W5                                 ; Adjust normalizer
              ff1l    W9, W4                                  ; Try again
              bra     nc, Longlong2Float_fixshift             ; Found the leading '1' ...
              sub.b   #16, W5                                 ; Adjust normalizer
              ff1l    W8, W4                                  ; Try again
              bra     nc, Longlong2Float_fixshift             ; Found the leading '1' ...
              sub.b   #16, W5                                 ; Adjust normalizer
      Longlong2Float_fixshift:
              sub.b   W4, W5, W4                              ; (w4) = shift count
              bra     z, Longlong2Float_round                 ; No shift required ...
              bra     nn, Longlong2Float_shiftleft            ; Left shift required ...

      ;------ Shift right

      Longlong2Float_shiftright:
              ior     W3, W2, W3                              ; (w3) = (sticky |= round)
              and     W8, #1, W2                              ; (w2) = (round = sig & 1)
              lsr     W1, W1                                  ; (w9:w8) = (sig >>= 1)
              rrc     W0, W0                                  ; *
              rrc     W9, W9                                  ; *
              rrc     W8, W8                                  ; *
              inc     W11, W11                                ; (w11) = exp++
              inc.b   W4, W4                                  ; Count the bits
              bra     nz, Longlong2Float_shiftright           ; Not there yet ...
              bra     Longlong2Float_round                    ; Round and pack ...

      ;------ Shift left

      Longlong2Float_shiftleft:
              add     W8, W8, W8                              ; (w9:w8) = (sig <<= 1)
              addc    W9, W9, W9                              ; *
              addc    W0, W0, W0                              ; *
              addc    W1, W1, W1                              ; *
              dec     W11, W11                                ; (w11) = exp--
              dec.b   W4, W4                                  ; Count the bits
              bra     nz, Longlong2Float_shiftleft            ; Not there yet ...

      ;-----------------------------------------------------------------------;
      ;       Rounding
      ;-----------------------------------------------------------------------;

      Longlong2Float_round:

      ;       (w3)   = sticky
      ;       (w2)   = round
      ;       (w9:w8)= s(significand)
      ;       (w11)  = s(exponent)
  }
              Float_fpack();                      //; Round and pack
  asm {
              btsc    W10,#15                       ; Result negative ?
              bset    W1,#15                        ; Yes
      Longlong2Float_return0:
              return                                ; Done

      ;-----------------------------------------------------------------------;
  }

 asm  the_end__LongLong2Float:
 ;
}

/*
 * Function Name:
     _Float2Longword
 * Description:
     Converts 32-bit floating-point to 32-bit unsigned long
 */
void _Float2Longword(void) {
  asm  RCALL Float2Longword_fixunssfsi;
  asm  GOTO the_end__Float2Longword;

  asm {
     Float2Longword_fixunssfsi:
                   MOV.D    W0, W2
                   RCALL    Float2Longword_funpack
                   BTSC     W4, #7
                   BCLR     W3, #15
                   BTST.Z   W3, #15
                   BRA      nz, Float2Longword_returnzero
                   SUB      #150, W5
                   BRA      Z, Float2Longword_exit
                   BRA      LT, Float2Longword_shiftright
                   CP       W5, #9
                   BRA      LT, Float2Longword_shiftleft
                   MOV      #0x8000, W1
                   RETLW    #0, W0
     Float2Longword_shiftleft:
                   ADD      W0, W0, W0
                   ADDC     W1, W1 ,W1
                   DEC      W5, W5
                   BRA      NZ, Float2Longword_shiftleft
                   RETURN
     Float2Longword_shiftright:
                   ADD      W5, #24, [W15]
                   BRA      LT, Float2Longword_returnzero
     Float2Longword_shiftrightloop:
                   LSR      W1, W1
                   RRC      W0, W0
                   INC      W5, W5
                   BRA      NZ, Float2Longword_shiftrightloop
     Float2Longword_exit:
                   RETURN
     Float2Longword_returnzero:
                   CLR      W1
                   RETLW    #0, W0
     Float2Longword_funpack:
                   LSR       W1, #7, W5
                   AND       #0x7f, W1
                   AND       #0xff, W5
                   BRA       Z, Float2Longword_zeroorsub
                   ADD.B     W5, #1,[W15]
                   BRA       Z, Float2Longword_nanorinf
     Float2Longword_finitereturn:
                   BSET      W1, #7
                   RETLW     #0x2, W4
     Float2Longword_nanorinf:
                   IOR       W0, W1, [W15]
                   BRA       Z, Float2Longword_infinite
                   RETLW     #0x80, W4
     Float2Longword_infinite:
                   RETLW     #0x4, W4
     Float2Longword_zeroorsub:
                   IOR       W0, W1, [W15]
                   BRA       NZ, Float2Longword_subnormal
                   RETLW     #0x1, W4
     Float2Longword_normalize:
                   DEC       W5, W5
     Float2Longword_subnormal:
                   ADD       W0, W0, W0
                   ADDC.B    W1, W1, W1
                   BRA       NN, Float2Longword_normalize
                   BSET      W1, #7
                   RETLW     #0x2, W4
  }
  asm  the_end__Float2Longword:
    ;
}

/*
 * Function Name:
     _Float2Longint
 * Description:
     Converts 32-bit floating-point to 32-bit signed long
 */
void _Float2Longint(void) {
  asm  RCALL Float2Longint__fixsfsi;
  asm  GOTO the_end__Float2Longint;

  asm {
     Float2Longint__fixsfsi:
                   MOV.D     W0, W2
                   RCALL     Float2Longint__funpack
                   BTSC      W4, #7
                   BCLR      W3, #15
                   SUB       #0x96, W5
                   BRA       Z, Float2Longint_setsign
                   BRA       LT, Float2Longint_shiftright
                   CP        W5, #8
                   BRA       LT, Float2Longint_shiftleft
                   MOV       #0xffff, W0
                   MOV       #0x7fff, W1
                   CP0       W3
                   BRA       NN, Float2Longint_exit
                   MOV       #0x8000, W1
                   RETLW     #0x0, W0
     Float2Longint_shiftleft:
                   ADD       W0, W0, W0
                   ADDC      W1, W1, W1
                   DEC       W5, W5
                   BRA       NZ, Float2Longint_shiftleft
                   BRA       Float2Longint_setsign
     Float2Longint_shiftright:
                   ADD       W5, #24,[W15]
                   BRA       GT, Float2Longint_shiftrightloop
                   CLR       W1
                   RETLW     #0x0, W0
     Float2Longint_shiftrightloop:
                   LSR       W1, W1
                   RRC       W0, W0
                   INC       W5, W5
                   BRA       NZ, Float2Longint_shiftrightloop
     Float2Longint_setsign:
                   CP0       W3
                   BRA       NN, Float2Longint_exit
                   SUBR      W0, #0, W0
                   SUBBR     W1, #0, W1
     Float2Longint_exit:
                   RETURN
     Float2Longint__funpack:
                   LSR       W1, #7, W5
                   AND       #0x7f, W1
                   AND       #0xff, W5
                   BRA       Z, Float2Longint_zeroorsub
                   ADD.B     W5, #1,[W15]
                   BRA       Z, Float2Longint_nanorinf
     Float2Longint_finitereturn:
                   BSET      W1, #7
                   RETLW     #0x2, W4
     Float2Longint_nanorinf:
                   IOR       W0, W1,[W15]
                   BRA       Z, Float2Longint_infinite
                   RETLW     #0x80, W4
     Float2Longint_infinite:
                   RETLW     #0x4, W4
     Float2Longint_zeroorsub:
                   IOR       W0, W1, [W15]
                   BRA       NZ, Float2Longint_subnormal
                   RETLW     #0x1, W4
     Float2Longint_normalize:
                   DEC       W5, W5
     Float2Longint_subnormal:
                   ADD       W0, W0, W0
                   ADDC.B    W1, W1, W1
                   BRA       NN, Float2Longint_normalize
                   BSET      W1, #7
                   RETLW     #0x2, W4
  }

 asm  the_end__Float2Longint:
   ;
}

/*
 * Function Name:
     _AddSub_FP
 * Description:
     32-bit floating point addition and subtraction routine.
 */
void _AddSub_FP(void) {
  asm  RCALL AddSubFP__addsf3;
  asm  GOTO the_end__AddSub_FP;

  asm {
    AddSubFP__addsf3:
                   MOV.D     W8, [W15++]
                   MOV.D     W10, [W15++]
                   MOV       W12, [W15++]
                   RCALL     AddSubFP__funpack2
                   BRA       N, AddSubFP__fPropagateNaN
                   CP        W10, #4
                   BRA       Z, AddSubFP_aisinfinite
    AddSubFP_checkspecialb:
                   CP        W4, #4
                   BRA       Z, AddSubFP_return2_3
                   XOR       W9, W3, W4
                   BRA       NN, AddSubFP_getsign
                   SL        W9, W10
                   SL        W3, W12
                   SUB       W8, W2, [W15]
                   SUBB      W10, W12, W12
                   BRA       NC, AddSubFP_getsign
                   BRA       Z, AddSubFP_gotsign
                   MOV       W9, W3
    AddSubFP_getsign:
                   MOV       W3, W12
    AddSubFP_gotsign:
                   SUB       W11, W5, W5
                   BRA       GE, AddSubFP_expcanonical
                   exch      W0, W6
                   exch      W1, W7
                   NEG       W5, W5
                   ADD       W5, W11, W11
    AddSubFP_expcanonical:
                   IOR       W4, W4, [W15]
                   BRA       NN, AddSubFP_nonegate
                   subr      W0, #0, W0
                   subbr     W1, #0, W1
    AddSubFP_nonegate:
                   mul.uu    W2, #0, W2
                   clr       W10
                   CP        W5, #26
                   BRA       NC, AddSubFP_aligniter
                   MOV       W6, W0
                   SL        W11, #7, W11
                   AND       #0x7f, W7
                   IOR       W11, W7, W1
                   BRA       AddSubFP_signoff
    AddSubFP_align:
                   IOR       W3, W2, W3
                   MOV       W10, W2
                   AND       W0, #1, W10
                   asr       W1, W1
                   RRC       W0, W0
    AddSubFP_aligniter:
                   DEC       W5, W5
                   BRA       NN, AddSubFP_align
    AddSubFP_aligned:
                   ADD       W0, W6, W8
                   ADDC      W1, W7, W9
                   BRA       NN, AddSubFP_normalizesum
                   subr      W8, #0, W8
                   subbr     W9, #0, W9
    AddSubFP_normalizesum:
                   BTST.Z    W9, #8
                   BRA       Z, AddSubFP_checknormal
                   IOR       W3, W10, W3
                   IOR       W3, W2, W3
                   AND       W8, #1, W2
                   LSR       W9, W9
                   RRC       W8, W8
                   inc       W11, W11
                   BRA       AddSubFP_round
    AddSubFP_checknormal:
                   BTST.Z    W9, #7
                   BRA       NZ, AddSubFP_discardguard
    AddSubFP_underflow:
                   CP0       W11
                   BRA       le, AddSubFP_round
                   DEC       W11, W11
                   ADD       W8, W8, W8
                   ADDC      W9, W9, W9
                   IOR.B     W8, W10, W8
                   BTST.Z    W9, #7
                   BRA       NZ, AddSubFP_round
    AddSubFP_normalizeloop:
                   CP0       W11
                   BRA       le, AddSubFP_normalizeexit
                   DEC       W11, W11
                   ADD       W8, W8, W8
                   ADDC      W9, W9, W9
                   BRA       NZ, AddSubFP_normalizetest
                   MOV       #0x0, W11
    AddSubFP_normalizetest:
                   BTST.Z    W9, #7
                   BRA       Z, AddSubFP_normalizeloop
    AddSubFP_normalizeexit:
                   clr       W2
                   BRA       AddSubFP_round
    AddSubFP_discardguard:
                   IOR       W3, W2, W3
                   MOV       W10, W2
    AddSubFP_round:
                   RCALL     AddSubFP__fpack
    AddSubFP_signoff:
                   BTSC      W12, #15
                   BSET      W1, #15
                   BRA       AddSubFP__fbopExit
    AddSubFP_aisinfinite:
                   CP        W4, #4
                   BRA       NZ, AddSubFP_return8_3
                   XOR       W9, W3, [W15]
                   BRA       N, AddSubFP__fbopReturnNaN
    AddSubFP_return8_3:
                   MOV.D     W8, W2
    AddSubFP_return2_3:
                   MOV.D     W2, W0
                   BRA       AddSubFP__fbopExit
   AddSubFP__funpack2:
                   MOV.D     W0, W8
                   RCALL     AddSubFP__funpack
                   MOV.D     W0, W6
                   MOV.D     W4, W10
                   MOV.D     W2, W0
                   RCALL     AddSubFP__funpack
                   IOR.B     W10, W4, [W15]
                   RETURN
    AddSubFP__fPropagateNaN:
                   MOV.D    W2, W0
                   CP       W10, #4
                   BRA      LEU, AddSubFP_return0_1
                   CP       W4, #4
                   BRA      LEU, AddSubFP_return8_1
                   BTST.Z   W9, #6
                   BRA      NZ, AddSubFP_return0_1
    AddSubFP_return8_1:
                   MOV.D    W8, W0
    AddSubFP_return0_1:
                   BSET     W1, #6
    AddSubFP__fbopExit:
                   MOV      [--W15], W12
                   MOV.D    [--W15], W10
                   MOV.D    [--W15], W8
                   RETURN
    AddSubFP__fbopReturnNaN:
                   MOV      #0xffff, W0
                   MOV      #0x7fff, W1
                   BRA      AddSubFP__fbopExit
    AddSubFP__fpack:
                   MOV      #0x8, W1
                   SUB      W11, #1, W0
                   BRA      GE, AddSubFP_notsubnormal_1
                   MOV      #0x0, W11
                   MOV      #0xffe6, W1
                   CP       W0, W1
                   BRA      le, AddSubFP_zerosig
    AddSubFP_subnormal_1:
                   IOR      W3, W2, W3
                   AND      W8, #1, W2
                   LSR      W9, W9
                   RRC      W8, W8
                   inc      W0, W0
                   BRA      NZ, AddSubFP_subnormal_1
                   MOV      #0x7, W1
    AddSubFP_notsubnormal_1:
                   AND      W8, #1, W0
                   IOR      W0, W3, W0
                   AND      W0, W2, W0
                   BRA      Z, AddSubFP_packupandgo
                   ADD      W8, #1, W8
                   ADDC     W9, #0, W9
                   BTST.Z   W9, W1
                   BRA      Z, AddSubFP_packupandgo
                   inc      W11, W11
                   CP       W1, #8
                   BRA      NZ, AddSubFP_packupandgo
                   LSR      W9, W9
                   RRC      W8, W8
    AddSubFP_packupandgo:
                   MOV      #0xff, W2
                   CP       W11, W2
                   BRA      GE, AddSubFP_overflow
                   SL       W11, #7, W11
                   AND      #0x7f, W9
                   IOR      W11, W9, W1
                   MOV      W8, W0
                   RETURN
    AddSubFP_overflow:
                   MOV      #0x7f80, W11
    AddSubFP_zerosig:
                   MOV      W11, W1
                   RETLW    #0x0, W0
    AddSubFP__funpack:
                   LSR      W1, #7, W5
                   AND      #0x7f, W1
                   AND      #0xff, W5
                   BRA      Z, AddSubFP_zeroorsub
                   ADD.B    W5, #1, [W15]
                   BRA      Z, AddSubFP_nanorinf
    AddSubFP_finitereturn:
                   BSET     W1, #7
                   RETLW    #0x2, W4
    AddSubFP_nanorinf:
                   IOR      W0, W1, [W15]
                   BRA      Z, AddSubFP_infinite
                   RETLW    #0x80, W4
    AddSubFP_infinite:
                   RETLW    #0x4, W4
    AddSubFP_zeroorsub:
                   IOR      W0, W1, [W15]
                   BRA      NZ, AddSubFP_subnormal_2
                   RETLW    #0x1, W4
    AddSubFP_normalize:
                   DEC      W5, W5
    AddSubFP_subnormal_2:
                   ADD      W0, W0, W0
                   ADDC.B   W1, W1, W1
                   BRA      NN, AddSubFP_normalize
                   BSET     W1, #7
                   RETLW    #0x2, W4
  } //asm

  asm  the_end__AddSub_FP:
    ;
}

/*
 * Function Name:
     _Sub_FP
 * Description:
     32-bit floating point subtraction routine.
 */
void _Sub_FP(void) {
  asm BTG      W3, #15;
  _AddSub_FP();
}

/*
 * Function Name:
     _Mul_FP
 * Description:
     32-bit floating point multiplication routine.
 */
void _Mul_FP(void) {
  asm  RCALL MulFP___mulsf3;
  asm  GOTO the_end__Mul_FP;

  asm {
    MulFP___mulsf3:
                 MOV.D     W8,  [W15++]
                 MOV.D     W10, [W15++]
                 MOV       W12, [W15++]
                 RCALL     MulFP__funpack2
                 BRA       N, MulFP__fPropagateNaN
                 XOR       W9, W3, W12
                 CP        W10, #4
                 BRA       Z, MulFP_aisinfinite
                 CP        W4, #4
                 BRA       Z, MulFP_bisinfinite
                 CP        W10, #1
                 BRA       Z, MulFP_return8_1
                 CP        W4, #1
                 BRA       Z, MulFP_return2_1
                 ADD       W5, W11, W11
                 SUB       #0x7E, W11
                 mul.uu    W6, W1, W8
                 mul.uu    W7, W0, W4
                 ADD       W4, W8, W8
                 ADDC      W5, W9, W9
                 mul.uu    W7, W1, W4
                 mul.uu    W6, W0, W0
                 ADD       W1, W8, W1
                 ADDC      W4, W9, W2
                 BRA       N, MulFP_formsticky
                 ADD       W0, W0, W0
                 ADDC      W1, W1, W1
                 ADDC      W2, W2, W2
                 DEC       W11, W11
    MulFP_formsticky:
                 SL        W1, #9, W3
                 IOR       W0, W3, W3
                 BRA       Z, MulFP_formRandSig
                 MOV       #0x1, W3
    MulFP_formRandSig:
                 LSR       W2, #8, W9
                 SL        W2, #8, W8
                 LSR       W1, #7, W2
                 AND       #0x1, W2
                 LSR       W1, #8, W1
                 IOR       W1, W8, W8
                 RCALL     MulFP__fpack
    MulFP_return0_1:
                 bclr      W1, #15
                 BTSC      W12, #15
                 BSET      W1, #15
                 BRA       MulFP__fbopExit
    MulFP_aisinfinite:
                 CP        W4, #1
                 BRA       Z, MulFP__fbopReturnNaN
    MulFP_return8_1:
                 MOV.D     W8, W2
    MulFP_return2_1:
                 MOV.D     W2, W0
                 BRA       MulFP_return0_1
    MulFP_bisinfinite:
                 CP        W10, #1
                 BRA       NZ, MulFP_return2_1
                 BRA       MulFP__fbopReturnNaN
    MulFP__funpack2:
                 MOV.D     W0, W8
                 RCALL     MulFP__funpack
                 MOV.D     W0, W6
                 MOV.D     W4, W10
                 MOV.D     W2, W0
                 RCALL     MulFP__funpack
                 IOR.B     W10, W4, [W15]
                 RETURN
    MulFP__fPropagateNaN:
                 MOV.D     W2, W0
                 CP        W10, #4
                 BRA       LEU, MulFP_return0_2
                 CP        W4, #4
                 BRA       LEU, MulFP_return8_2
                 BTST.Z    W9, #6
                 BRA       NZ, MulFP_return0_2
    MulFP_return8_2:
                 MOV.D     W8, W0
    MulFP_return0_2:
                 BSET      W1, #6
    MulFP__fbopExit:
                 MOV       [--W15], W12
                 MOV.D     [--W15], W10
                 MOV.D     [--W15], W8
                 RETURN
    MulFP__fbopReturnNaN:
                 MOV       #0xffff, W0
                 MOV       #0x7fff, W1
                 BRA       MulFP__fbopExit
    MulFP__fpack:
                 MOV       #0x8, W1
                 SUB       W11, #1, W0
                 BRA       GE, MulFP_notsubnormal
                 MOV       #0x0, W11
                 MOV       #0xffe6, W1
                 CP        W0, W1
                 BRA       le, MulFP_zerosig
    MulFP_subnormal1:
                 IOR       W3, W2, W3
                 AND       W8, #1, W2
                 LSR       W9, W9
                 RRC       W8, W8
                 inc       W0, W0
                 BRA       NZ, MulFP_subnormal1
                 MOV       #0x7, W1
    MulFP_notsubnormal:
                 AND       W8, #1, W0
                 IOR       W0, W3, W0
                 AND       W0, W2, W0
                 BRA       Z, MulFP_packupandgo
                 ADD       W8, #1, W8
                 ADDC      W9, #0, W9
                 BTST.Z    W9, W1
                 BRA       Z, MulFP_packupandgo
                 inc       W11, W11
                 CP        W1, #8
                 BRA       NZ, MulFP_packupandgo
                 LSR       W9, W9
                 RRC       W8, W8
    MulFP_packupandgo:
                 MOV       #0xff, W2
                 CP        W11, W2
                 BRA       GE, MulFP_overflow
                 SL        W11, #7, W11
                 AND       #0x7f, W9
                 IOR       W11, W9, W1
                 MOV       W8, W0
                 RETURN
    MulFP_overflow:
                 MOV       #0x7f80, W11
    MulFP_zerosig:
                 MOV       W11, W1
                 RETLW     #0x0, W0
    MulFP__funpack:
                 LSR       W1, #7, W5
                 AND       #0x7f, W1
                 AND       #0xff, W5
                 BRA       Z, MulFP_zeroorsub
                 ADD.B     W5, #1, [W15]
                 BRA       Z, MulFP_nanorinf
    MulFP_finitereturn:
                 BSET      W1, #7
                 RETLW     #0x2, W4
    MulFP_nanorinf:
                 IOR       W0, W1, [W15]
                 BRA       Z, MulFP_infinite
                 RETLW     #0x80, W4
    MulFP_infinite:
                 RETLW     #0x4, W4
    MulFP_zeroorsub:
                 IOR       W0, W1, [W15]
                 BRA       NZ, MulFP_subnormal2
                 RETLW     #0x1, W4
    MulFP_normalize:
                 DEC       W5, W5
    MulFP_subnormal2:
                 ADD       W0, W0, W0
                 ADDC.B    W1, W1, W1
                 BRA       NN, MulFP_normalize
                 BSET      W1, #7
                 RETLW     #0x2, W4
  } //asm

  asm  the_end__Mul_FP:
    ;
}

/*
 * Function Name:
     _Div_FP
 * Description:
     32-bit floating point division routine.
 */
void _Div_FP(void) {
  asm  RCALL DivFP___divsf3;
  asm  GOTO the_end__Div_FP;

  asm {
    DivFP___divsf3:
                 MOV.D     W8,[W15++]
                 MOV.D     W10,[W15++]
                 MOV       W12,[W15++]
                 RCALL     DivFP__funpack2
                 BRA       N, DivFP__fPropagateNaN
                 XOR       W9,W3,W12
                 CP        W10,#4
                 BRA       Z, DivFP_aisinfinite
                 CP        W4,#4
                 BRA       Z, DivFP_returnZero
                 CP        W10,#1
                 BRA       Z, DivFP_aiszero
                 CP        W4,#1
                 BRA       Z, DivFP_returnInf
    DivFP_finitenonzero:
                 SUB       W11,W5,W11
                 ADD       #0x7e,W11
                 MOV       #0x0,W9
                 MOV       #0x40,W8
                 BRA       DivFP_diventry
    DivFP_divnext:
                 ADD       W8,W8,W8
                 ADDC      W9,W9,W9
                 BRA       c, DivFP_divdone
    DivFP_divloop:
                 ADD       W6,W6,W6
                 ADDC      W7,W7,W7
    DivFP_diventry:
                 SUB       W6,W0,W2
                 SUBB      W7,W1,W3
                 BRA       N, DivFP_divnext
                 MOV.D     W2,W6
                 BSET      W8,#0
                 ADD       W8,W8,W8
                 ADDC      W9,W9,W9
                 BRA       NC, DivFP_divloop
    DivFP_divdone:
                 SL        W7,#6,W3
                 IOR       W6,W3,W3
                 BRA       Z, DivFP_stickyok
                 MOV       #0x1,W3
    DivFP_stickyok:
                 LSR       W9,W9
                 RRC       W8,W8
                 BTST.Z    W9,#9
                 BRA       Z, DivFP_guardused
                 BTSC      W8,#0
                 BSET      W3,#0
                 LSR       W9,W9
                 RRC       W8,W8
                 inc       W11,W11
    DivFP_guardused:
                 LSR       W9,W9
                 RRC       W8,W8
                 clr       W2
                 rlc       W2,W2
                 RCALL     DivFP__fpack
    DivFP_return0_1:
                 bclr      W1,#15
                 BTSC      W12,#15
                 BSET      W1,#15
                 BRA       DivFP__fbopExit
    DivFP_aisinfinite:
                 CP        W4,#4
                 BRA       Z, DivFP__fbopReturnNaN
    DivFP_return8_1:
                 MOV.D     W8,W2
    DivFP_return2_1:
                 MOV.D     W2,W0
                 BRA       DivFP_return0_1
    DivFP_aiszero:
                 CP        W4,#1
                 BRA       Z, DivFP__fbopReturnNaN
    DivFP_returnZero:
                 mul.uu    W0,#0,W0
                 BRA       DivFP_return0_1
    DivFP_returnInf:
                 MOV       #0x0,W0
                 MOV       #0x7f80,W1
                 BRA       DivFP_return0_1
    DivFP__funpack2:
                 MOV.D     W0,W8
                 RCALL     DivFP__funpack
                 MOV.D     W0,W6
                 MOV.D     W4,W10
                 MOV.D     W2,W0
                 RCALL     DivFP__funpack
                 IOR.B     W10,W4,[W15]
                 RETURN
    DivFP__fPropagateNaN:
                 MOV.D     W2,W0
                 CP        W10,#4
                 BRA       LEU, DivFP_return0
                 CP        W4,#4
                 BRA       LEU, DivFP_return8
                 BTST.Z    W9,#6
                 BRA       NZ, DivFP_return0
    DivFP_return8:
                 MOV.D     W8,W0
    DivFP_return0:
                 BSET      W1,#6
    DivFP__fbopExit:
                 MOV       [--W15],W12
                 MOV.D     [--W15],W10
                 MOV.D     [--W15],W8
                 RETURN
    DivFP__fbopReturnNaN:
                 MOV       #0xffff,W0
                 MOV       #0x7fff,W1
                 BRA       DivFP__fbopExit
    DivFP__fpack:
                 MOV       #0x8,W1
                 SUB       W11,#1,W0
                 BRA       GE, DivFP_notsubnormal
                 MOV       #0x0,W11
                 MOV       #0xffe6,W1
                 CP        W0,W1
                 BRA       le, DivFP_zerosig
    DivFP_subnormal:
                 IOR       W3,W2,W3
                 AND       W8,#1,W2
                 LSR       W9,W9
                 RRC       W8,W8
                 inc       W0,W0
                 BRA       NZ, DivFP_subnormal
                 MOV       #0x7,W1
    DivFP_notsubnormal:
                 AND       W8,#1,W0
                 IOR       W0,W3,W0
                 AND       W0,W2,W0
                 BRA       Z, DivFP_packupandgo
                 ADD       W8,#1,W8
                 ADDC      W9,#0,W9
                 BTST.Z    W9,W1
                 BRA       Z, DivFP_packupandgo
                 inc       W11,W11
                 CP        W1,#8
                 BRA       NZ, DivFP_packupandgo
                 LSR       W9,W9
                 RRC       W8,W8
    DivFP_packupandgo:
                 MOV       #0xff,W2
                 CP        W11,W2
                 BRA       GE, DivFP_overfloW
                 SL        W11,#7,W11
                 AND       #0x7f,W9
                 IOR       W11,W9,W1
                 MOV       W8,W0
                 RETURN
    DivFP_overfloW:
                 MOV       #0x7f80,W11
    DivFP_zerosig:
                 MOV       W11,W1
                 RETLW     #0x0,W0
    DivFP__funpack:
                 LSR       W1,#7,W5
                 AND       #0x7f,W1
                 AND       #0xff,W5
                 BRA       Z, DivFP_zeroorsub
                 ADD.B     W5,#1,[W15]
                 BRA       Z, DivFP_nanorinf
    DivFP_finitereturn:
                 BSET      W1,#7
                 RETLW     #0x2,W4
    DivFP_nanorinf:
                 IOR       W0,W1,[W15]
                 BRA       Z, DivFP_infinite
                 RETLW     #0x80,W4
    DivFP_infinite:
                 RETLW     #0x4,W4
    DivFP_zeroorsub:
                 IOR       W0,W1,[W15]
                 BRA       NZ, DivFP_subnormal2
                 RETLW     #0x1,W4
    DivFP_normalize:
                 DEC       W5,W5
    DivFP_subnormal2:
                 ADD       W0,W0,W0
                 ADDC.B    W1,W1,W1
                 BRA       NN, DivFP_normalize
                 BSET      W1,#7
                 RETLW     #0x2,W4
  }

  asm the_end__Div_FP:
    ;
}

/*
 * Function Name:
     _Compare_FP
 * Description:
     Compares 32-bit floats.
 */
void _Compare_Fp(void) {

  asm  RCALL CompareFp__fcompare;
  asm  GOTO the_end__Compare_Fp;
  asm {
    CompareFp__fcompare:
                 MOV       W4,[W15++]
                 RCALL     CompareFp__funpack2
                 MOV       [--W15],W0
                 BRA       N, CompareFp_exit
                 MOV       #0xffff,W0
                 XOR       W9,W3,[W15]
                 BRA       NN, CompareFp_comparemag
                 AND       W10,W4,W10
                 BTSC      W10,#0
                 BRA       CompareFp_returnEqual
                 BTSS      W9,#15
                 MOV       #0x1,W0
                 BRA       CompareFp_exit
    CompareFp_comparemag:
                 SUB       W8,W2,[W15]
                 SUBB      W9,W3,[W15]
                 BRA       LTU, CompareFp_adjust
                 MOV       #0x1,W0
                 BRA       GTU, CompareFp_adjust
    CompareFp_returnEqual:
                 MOV       #0x0,W0
    CompareFp_adjust:
                 BTSC      W9,#15
                 NEG       W0,W0
    CompareFp_exit:
                 RETURN
    CompareFp__funpack2:
                 MOV.D     W0,W8
                 RCALL     CompareFp__funpack
                 MOV.D     W0,W6
                 MOV.D     W4,W10
                 MOV.D     W2,W0
                 RCALL     CompareFp__funpack
                 IOR.B     W10,W4,[W15]
                 RETURN
    CompareFp__funpack:
                 LSR       W1,#7,W5
                 AND       #0x7f,W1
                 AND       #0xff,W5
                 BRA       Z, CompareFp_zeroorsub
                 ADD.B     W5,#1,[W15]
                 BRA       Z, CompareFp_nanorinf
    CompareFp_finitereturn:
                 BSET      W1,#7
                 RETLW     #0x2,W4
    CompareFp_nanorinf:
                 IOR       W0,W1,[W15]
                 BRA       Z, CompareFp_infinite
                 RETLW     #0x80,W4
    CompareFp_infinite:
                 RETLW     #0x4,W4
    CompareFp_zeroorsub:
                 IOR       W0,W1,[W15]
                 BRA       NZ, CompareFp_subnormal
                 RETLW     #0x1,W4
    CompareFp_normalize:
                 DEC       W5,W5
    CompareFp_subnormal:
                 ADD       W0,W0,W0
                 ADDC.B    W1,W1,W1
                 BRA       NN, CompareFp_normalize
                 BSET      W1,#7
                 RETLW     #0x2,W4
  }

  asm the_end__Compare_Fp:
    ;
}

void _Compare_Le_Fp(void) {
  asm mov     #1, W4;
  _Compare_Fp();
}

void _Compare_Ge_Fp(void) {
  asm MOV     #0xffff, W4;
  _Compare_Fp();
}

// ----------------------------------------------------------------------------
/*
    __Lib_MathDouble.c

    Copyright (c) 2024, MikroElektronika - www.mikroe.com

Permission is hereby granted, free of charge, to any person obtaining a copy of
this software and associated documentation files (the "Software"), to deal in
the Software without restriction, including without limitation the rights to
use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
of the Software, and to permit persons to whom the Software is furnished to do
so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

*/
// ----------------------------------------------------------------------------
