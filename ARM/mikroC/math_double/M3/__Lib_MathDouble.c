
void _FloatToSignedIntegral() {
  asm {
        PUSH       (R1, R2, LR)

        LSL        R2, R0, #1                // PUT EXPONENT IN R2
        LSR        R2, R2, #24               //

        SUBS       R2, R2, #0x7F             // CHECK FOR UNDERFLOW
        ITT        MI
        MOVMI      R0, #0                    // IF UNDERFLOW, RETURN ZERO
        BMI  __me_lab_end

        RSBS       R2, R2, #0x1F             // CHECK FOR OVERFLOW
        BLS        __me_ovfl                      // IF OVERFLOW, RETURN INFINITY

        LSL        R1, R0, #8                // PUT MANTISSA IN R1
        ORR        R1, R1, #0x80000000       // SET IMPLIED ONE IN MANTISSA

        LSRS       R1, R1, R2                // COMPUTE THE INTEGER VALUE << 1

        CMP        R0, #0                    // IF THE INPUT IS NEGATIVE,
        ITE        MI
        RSBMI      R0, R1, #0                //  THEN NEGATE THE RESULT
        MOVPL      R0, R1                    //

        B __me_lab_end

__me_ovfl:   CMP        R0, #0                    // IF OVERFLOW, RETURN INFINITY
        MOV        R0, #0x80000000           // CHECK THE SIGN OF THE INPUT
        IT         PL
        SUBPL      R0, R0, #0x1              // AND ADJUST THE VALUE OF INFINITY
__me_lab_end:
        POP       (R1, R2, LR)               // ACCORDINGLY
  }
}

void _FloatToUnsignedIntegral() {
  asm {
        PUSH (R1, LR)
        CMP        R0, #0             // CHECK FOR A NEGATIVE VALUE
        BPL     __me_label_pos
        BL      __FloatToSignedIntegral           // CAST TO INT
        B __me_endLab

__me_label_pos:    LSL        R1, R0, #1         // PUT EXPONENT IN R1
        LSR        R1, R1, #24        //

        SUBS        R1, R1, #0x7F     // CHECK FOR UNDERFLOW
        ITT        CC
        MOVCC        R0, #0           // IF UNDERFLOW, RETURN ZERO
        BCC __me_endLab

        RSBS        R1, R1, #0x1F     // CHECK FOR OVERFLOW
        BCC        __me_ovfl               // IF OVERFLOW, RETURN 0xFFFFFFFF

        LSL        R0, R0, #8         // PUT MANTISSA IN R0
        ORR        R0, R0, #0x80000000 // SET IMPLIED ONE IN MANTISSA

        LSRS        R0, R0, R1        // COMPUTE THE INTEGER VALUE

        B __me_endLab

__me_ovfl:   MOVS        R0, #0x0          // IF OVERFLOW, RETURN 0xFFFFFFFF
        SUBS        R0, R0, #0x1      //
__me_endLab:
         POP (R1, LR)
  }

}

void _LongDoubleToSignedIntegral() {
  asm {
        PUSH       (R2, R3, LR)              // SAVE CONTEXT

        LSL        R3, R1, #1                // PUT EXPONENT IN R3
        LSR        R3, R3, #21               //

        SUBS        R3, R3, #0x300           // ADJUST FOR EXPONENT BIAS AND
        SUBS        R3, R3, #0xFF            // CHECK FOR UNDERFLOW
        ITT        MI
        MOVMI        R0, #0                  // IF UNDERFLOW, RETURN ZERO
        BMI __me_lab_end

        RSBS        R3, R3, #0x1F            // CHECK FOR OVERFLOW
        BLS        __me_ovfl                      // IF OVERFLOW, RETURN INFINITY

        LSL        R2, R1, #11               // PUT HI MANTISSA IN R2
        ORR        R2, R2, #0x80000000       // SET IMPLIED ONE IN HI MANTISSA

        LSR        R2, R2, R3                // COMPUTE THE INTEGER VALUE
        CMP        R3, #11                   // FROM HI HALF OF THE MANTISSA.
        ITTT        CC
        ADDCC        R3, R3, #21             // IF THE __me_low HALF OF THE MANTISSA IS
        LSRCC        R0, R0, R3              //
        ORRCC        R2, R2, R0              //  SIGNIFICANT, INCLUDE IT ALSO

        CMP        R1, #0                    // IF THE INPUT IS NEGATIVE,
        ITE        MI
        RSBMI        R0, R2, #0              //  THEN NEGATE THE RESULT
        MOVPL        R0, R2                  //

        B __me_lab_end

__me_ovfl:   CMP        R1, #0                    // IF OVERFLOW, RETURN INFINITY
        MOV        R0, #0x80000000           // CHECK THE SIGN OF THE INPUT
        IT        PL
        SUBPL        R0, R0, #0x1            // AND ADJUST INFINITY ACCORDINGLY
__me_lab_end:
        POP        (R2, R3, LR)              //
  }
}


void _LongDoubleToUnsignedIntegral() {
  asm {
        PUSH       (R2, LR)              // SAVE CONTEXT
        CMP        R1, #0                // CHECK FOR A NEGATIVE VALUE
        BPL     __me_pos
        /*ITT        MI
        MOVMI      R0, #0                // RETURN ZERO IF IT IS NEGATIVE
        BXMI       LR*/
        BL      __LongDoubleToSignedIntegral
        B       __me_endLab
__me_pos:


        LSL        R2, R1, #1            // PUT EXPONENT IN R2
        LSR        R2, R2, #21           //

        SUBS       R2, R2, #0x300        // ADJUST FOR EXPONENT BIAS AND
        SUBS       R2, R2, #0xFF         // CHECK FOR UNDERFLOW
        ITT        MI
        MOVMI      R0, #0                // IF UNDERFLOW, RETURN ZERO
        BMI        __me_endLab

        RSBS       R2, R2, #0x1F         // CHECK FOR OVERFLOW
        BCC        __me_ovfl                  // IF OVERFLOW, RETURN 0xFFFFFFFF

        LSL        R1, R1, #11           // PUT HI MANTISSA IN R1
        ORR        R1, R1, #0x80000000   // SET IMPLIED ONE IN HI MANTISSA

        LSRS       R1, R1, R2            // COMPUTE THE INTEGER VALUE FROM HI
        CMP        R2, #11               // HALF OF THE MANTISSA.  IF THE __me_low
        ITTT       CC
        ADDCC      R2, R2, #21           // HALF OF THE MANTISSA IS SIGNIFICANT,
        LSRCC      R2, R0, R2
        ORRCC      R1, R1, R2            // INCLUDE IT ALSO.

        MOV        R0, R1                //

        B        __me_endLab

__me_ovfl:   MOVS      R0, #0x0               // IF OVERFLOW, RETURN 0XFFFFFFFF
        SUBS      R0, R0, #0x1           //
__me_endLab:
        POP (R2, LR)
  }
}

void _SignedIntegralToFloat() {
  asm {
        CMP       R0, #0                        //
        IT        EQ
        BEQ __me_lab_end

        PUSH      (R1, R2, LR)                // SAVE CONTEXT

        ITE       PL
        MOVPL     R1, R0                        //
        RSBSMI    R1, R0, #0                // IF NEGATIVE, NEGATE IT

        MOV       R2, #0x9E                // SET THE EXPONENT FIELD

        BMI       __me_lab1                        //
__me_loop:   SUBS      R2, R2, #1                // ADJUSTING THE EXPONENT, ACCORDINGLY
        LSLS      R1, R1, #1                // NORMALIZE THE MANTISSA
        BPL       __me_loop                        //

__me_lab1:     ADDS      R1, R1, #0x00000080        // ADD 1/2 TO ROUND
        ITE       CS
        ADDCS     R2, R2, #0x1                // AND ADJUST THE EXPONENT ACCORDINGLY
        LSLCC     R1, R1, #1                // MASK IMPLIED 1 OUT OF THE MANTISSA

        LSR       R1, R1, #9                // PACK THE MANTISSA
        ORR       R1, R1, R2, LSL #23        // PACK THE EXPONENT
        CMP       R0, #0                        // IF THE INPUT WAS NEGATIVE
        ITE       MI
        ORRMI     R0, R1, #0x80000000        //  THEN SET THE SIGN FIELD
        MOVPL     R0, R1                        //

        POP      (R1, R2, LR)                // RESTORE CONTEXT
__me_lab_end:
  }
}

void _SignedIntegralToLongDouble() {
  asm {
        CMP        R0, #0                        // IF ZERO, RETURN ZERO
        ITT        EQ
        MOVEQ      R1, #0
        BEQ __me_lab_end

        ITE        MI
        RSBMI      R0, R0, #0                    // MOVE INPUT AND IF NEGATIVE,
        MOVPL      R0, R0                        // NEGATE IT

        MOV        R1, #0x1F                     // SETUP THE EXPONENT
        ITE        MI
        ORRMI      R1, R1, #0x00000C00           // AND ENCODE SIGN INTO IT
        ORRPL      R1, R1, #0x00000400

__me_loop:   SUBS       R1, R1, #0x1
        LSLS       R0, R0, #1                    // NORMALIZE THE MANTISSA
                                                 // ADJUSTING THE EXPONENT,
                                                 // ACCORDINGLY
        BCC       __me_loop

        LSL       R1, R1, #20                    // SETUP __me_high HALF OF RESULT
        ORR       R1, R1, R0, LSR #12            //
        LSLS      R0, R0, #20                    // SETUP __me_low HALF OF RESULT

__me_lab_end:

  }
}

void _UnsignedIntegralToFloat() {
  asm {
        CMP       R0, #0                    //
        IT        EQ
        BEQ __me_lab_end

        PUSH      (R1, LR)

        MOV       R2, #0x9E                 // SET THE EXPONENT FIELD
        BMI       __me_label_cont                      //

__me_loop:   SUBS      R2, R2, #1
        LSLS      R0, R0, #1                // NORMALIZE THE MANTISSA
                                            // ADJUSTING THE EXPONENT, ACCORDINGLY
        BPL       __me_loop                      //

__me_label_cont:   ADDS      R0, R0, #0x00000080       // ADD 1/2 TO ROUND
        ITE       CS
        ADDCS     R2, R2, #0x1              // AND ADJUST THE EXPONENT ACCORDINGLY
        LSLCC     R0, R0, #1                // MASK THE IMPLIED ONE IN THE MANTISSA

        LSRS      R0, R0, #9                // PACK THE MANTISSA
        ORR       R0, R0, R2, LSL #23       // PACK THE EXPONENT

        POP       (R1, LR)
__me_lab_end:
  }
}

void _UnsignedIntegralToLongDouble() {
  asm {
        CMP        R0, #0                        // IF ZERO, RETURN ZERO
        ITT        EQ
        MOVEQ      R1, #0
        BEQ __me_lab_end

        MOVS       R1, R0                        // MOVE INPUT INTO R1
        MOVS       R1, #0x1F                     // SETUP THE EXPONENT
        ADDS       R1, R1, #0x00000400

__me_loop:   SUBS       R1, R1, #0x1
        LSLS       R0, R0, #1                    // NORMALIZE THE MANTISSA
                                                 // ADJUSTING THE EXPONENT,
                                                 // ACCORDINGLY
        BCC       __me_loop

        LSLS      R1, R1, #20                    // SETUP __me_high HALF OF RESULT
        ORR       R1, R1, R0, LSR #12
        LSLS      R0, R0, #20                    // SETUP __me_low HALF OF RESULT
__me_lab_end:
  }
}

void _LongDoubleToFloat() {
  asm {
        LSR        R0, R0, #20                // SETUP MANTISSA INTO R0
        ORR        R0, R0, R1, LSL #12        //

        ADDS       R0, R0, #0x00000100       // ADD 1/2 FOR ROUNDING
        ITT        CS
        LSRCS      R0, R0, #1               //
        ADDCS      R1, R1, #0x00100000      //

        LSR        R0, R0, #9               // ALIGN MANTISSA
        CMP        R1, #0                   // AND ADD SIGN
        IT         MI
        ORRMI      R0, R0, #0x80000000      //

        LSL        R1, R1, #1               // SETUP EXPONENT
        LSRS       R1, R1, #21              //

        IT         EQ
        MOVEQ      R0, #0                   // SET THE RETURN VALUE

        IT        EQ
        BEQ __me_lab_end

        SUB        R1, R1, #0x380           // ADJUST FOR THE BIAS

        CMP        R1, #0xFF                // CHECK FOR OVERFLOW
        BCS        __me_ovfl                     //

        ORR        R0, R0, R1, LSL #23      // ADD EXPONENT INTO RESULT
        B __me_lab_end

__me_ovfl:   AND        R1, R1, #0x80000000      // OVERFLOW, RETURN +/- INF
        MOVS       R0, #0xFF
        LSL        R0, R0, #23
        ORRS       R0, R0, R1
__me_lab_end:
  }
}

void _FloatToLongDouble() {
  asm {
        PUSH    (R2, LR)                // SAVE CONTEXT

        LSLS    R2, R0, #1              // SETUP EXPONENT IN R2
        LSRS    R2, R2, #24             //
        BEQ     __me_unfl                    // CHECK FOR UNDERFLOW / ZERO

        CMP     R2, #0xFF               // CHECK FOR INFINITY
        BEQ     __me_ovfl                    // AND RETURN OVERFLOW

        ADD     R2, R2, #0x380          // ADJUST FOR THE BIAS

        LSRS    R1, R0, #31             // ENCODE SIGN WITH EXPONENT
        ORR     R2, R2, R1, LSL #11     //

        MOV     R1, R0                  // MOVE THE VALUE TO RHI

        LSLS    R0, R1, #29             // SETUP __me_low PART OF MANTISSA
        LSLS    R1, R1, #9              // AND SETUP __me_high PART OF MANTISSA
        LSRS    R1, R1, #12             //
        ORR     R1, R1, R2, LSL #20     // OR SIGN AND EXPONENT INTO RESULT
        B __me_lab_end

__me_unfl:   MOVS    R1, #0x0                // IF UNDERFLOW, RETURN 0
        MOVS    R0, #0x0                //
        B __me_lab_end

__me_ovfl:   MOV     R0, #0                  // IF OVERFLOW, RETURN +/- INFINITY
        LSRS    R1, R1, #23             // ISOLATE SIGN AND EXPONENT
        LSLS    R1, R1, #3
        ADDS    R1, R1, #7
        LSLS    R1, R1, #20
__me_lab_end:
        POP    (R2, LR)                 //
  }
}

void _Add_FP() {
  asm {
        PUSH      (R1, R3, R4, R5, R6, R7, R8, LR)

        LSL        R4, R2, #8                // PUT INPUT #2 MANTISSA IN R4
        LSL        R5, R2, #1                // PUT INPUT #2 EXPONENT IN R5
        LSRS       R5, R5, #24               //
        BNE        __me_lab1                        //

        CMP        R4, #0                    // IF DENORMALIZED NUMBER (R2 != 0 AND
        IT         NE
        MOVNE      R0, #0                    // R5 == 0), THEN UNDERFLOW
        B __me_lab_end

__me_lab1:     ORR     R4, R4, #0x80000000          // SET IMPLIED ONE IN MANTISSA

        CMP        R5, #0xFF                 // IF R5 == 0xFF, THEN OVERFLOW

        BEQ        __me_ovfl1                     //

        LSR        R4, R4, #2                // ADJUST THE MANTISSA
        CMP        R2, #0                    // IF INPUT #2 IS NEGATIVE,
        IT         MI
        RSBMI      R4, R4, #0                //  THEN NEGATE THE MANTISSA

        LSL        R1, R0, #8                // PUT INPUT #1 MANTISSA IN R2
        LSL        R3, R0, #1                // PUT INPUT #1 EXPONENT IN R3
        LSRS       R3, R3, #24               //
        BNE        __me_lab2                        //

        CMP        R1, #0                    // IF DENORMALIZED NUMBER (R2 != 0 AND
        ITE        NE
        MOVNE      R0, #0                    // R3 == 0), THEN UNDERFLOW
        MOVEQ      R0, R2                    // ELSE IT IS ZERO SO RETURN INPUT #2
        B __me_lab_end

__me_lab2:     ORR        R1, R1, #0x80000000       // SET IMPLIED ONE IN MANTISSA

        CMP        R3, #0xFF                 // IF R3 == 0xFF, THEN OVERFLOW
        BEQ        __me_ovfl0                     //

        LSR        R1, R1, #2                // ADJUST THE MANTISSA
        CMP        R0, #0                    // IF INPUT #1 IS NEGATIVE,
        IT         MI
        RSBMI      R1, R1, #0                //  THEN NEGATE THE MANTISSA

        SUBS       R6, R3, R5                // GET THE SHIFT AMOUNT
        ITTTT      MI
        MOVMI      R7, R1                    // IF THE SHIFT AMOUNT IS NEGATIVE, THEN
        MOVMI      R1, R4                    //  SWAP THE TWO MANTISSA SO THAT R2
        MOVMI      R4, R7                    //  CONTAINS THE LARGER VALUE,
        RSBMI      R6, R6, #0                //  AND NEGATE THE SHIFT AMOUNT,
        IT         MI
        MOVMI      R3, R5                    //  AND ENSURE THE LARGER EXP. IS IN R3

        CMP        R6, #25                   // IF THE 2nd MANTISSA IS SIGNIFICANT,
        ITTEE      MI
        ASRMI      R7, R4, R6
        ADDMI      R1, R1, R7                // ADD IT TO THE FIRST MANTISSA
        MOVPL      R8, #0                    // IF NOT SIGNIFICANT, STICKY = 0
        BPL        __me_skip_sticky               // SKIP COMPUTATION OF STICKY BIT
        RSB        R7, R6, #28               //
        LSL        R8, R4, R7                // GET THE BITS THAT WERE SHIFTED OUT

__me_skip_sticky:
        CMP        R1, #0x0                  //
        ITT        EQ
        MOVEQ      R0, #0                    // IF THE RESULT IS ZERO,
        BEQ __me_lab_end
        ITTE       MI                        //
        RSBMI      R1, R1, #0x0              // IF THE RESULT IS NEGATIVE, THEN
        MOVMI      R7, #0x1                  // NEGATE THE RESULT AND
        MOVPL      R7, #0x0                  // NOTE THE SIGN

__me_loop:   SUB        R3, R3, #1                // ADJUSTING THE EXPONENT AS NECESSARY
        LSLS       R1, R1, #1                // NORMALIZE THE RESULTING MANTISSA
        BPL        __me_loop                      //

        ANDS       R4, R1, #0x80             // GUARD BIT
        BEQ        __me_no_round                  // IF GUARD BIT 0, DO NOT ROUND
        AND        R5, R1, #0x20             // IF RESULT REQUIRED NORMALIZATION
        ORR        R8, R8, R5                //  BIT 26 MUST BE ADDED TO STICKY
        ADDS       R1, R1, #0x80             // ROUND THE MANTISSA TO THE NEAREST
        IT         CS                        //
        ADDCS      R3, R3, #1                // ADJUST EXPONENT IF AN OVERFLOW OCCURS
        AND        R4, R1, #0x40             // GET ROUND BIT
        ORRS       R8, R8, R4                // (STICKY + ROUND)
        IT         EQ                        // IF (ROUND + STICKY) == 0,
        BICEQ      R1, R1, #0x100            // WE HAVE A TIE, ROUND TO EVEN

__me_no_round:
        ADDS       R3, R3, #2                // NORMALIZE THE EXPONENT
        ITT        LE
        MOVLE      R0, #0                    // CHECK FOR UNDERFLOW
        BLE __me_lab_end
        CMP        R3, #0xFF                 // CHECK FOR OVERFLOW
        BCS        __me_ovfl                      //

        BIC        R1, R1, #0xFF             // CLEAR GUARD, ROUND, AND STICKY BITS
        LSL        R1, R1, #1                // REMOVE THE IMPLIED ONE

        LSR        R0, R1, #9                // REPACK THE MANTISSA INTO R0
        ORR        R0, R0, R3, LSL #23       // REPACK THE EXPONENT INTO R0
        ORR        R0, R0, R7, LSL #31       // REPACK THE SIGN INTO R0

        B __me_lab_end

__me_ovfl1:  MOV        R0, R2                    // OVERFLOW
__me_ovfl0:  LSR        R7, R0, #31               //
__me_ovfl:   LSL        R7, R7, #31               // ISOLATE SIGN BIT
        MOVS       R0, #0xFF                 // SET UP Emax EXPONENT
        LSL        R0, R0, #23
        ORRS       R0, R0, R7                // COMBINE SIGN AND EXPONENT
__me_lab_end:
        POP       (R1, R3, R4, R5, R6, R7, R8, LR)                //
  }
}

void _Sub_FP(void) {
  asm {
        EOR        R2, R2, #0x80000000       // NEGATE INPUT #2
        PUSH      (R1, R3, R4, R5, R6, R7, R8, LR)

        LSL        R4, R2, #8                // PUT INPUT #2 MANTISSA IN R4
        LSL        R5, R2, #1                // PUT INPUT #2 EXPONENT IN R5
        LSRS       R5, R5, #24               //
        BNE        __me_lab1                        //

        CMP        R4, #0                    // IF DENORMALIZED NUMBER (R2 != 0 AND
        IT         NE
        MOVNE      R0, #0                    // R5 == 0), THEN UNDERFLOW
        B __me_lab_end

__me_lab1:        ORR     R4, R4, #0x80000000       // SET IMPLIED ONE IN MANTISSA

        CMP        R5, #0xFF                 // IF R5 == 0xFF, THEN OVERFLOW

        BEQ        __me_ovfl1                     //

        LSR        R4, R4, #2                // ADJUST THE MANTISSA
        CMP        R2, #0                    // IF INPUT #2 IS NEGATIVE,
        IT         MI
        RSBMI      R4, R4, #0                //  THEN NEGATE THE MANTISSA

        LSL        R1, R0, #8                // PUT INPUT #1 MANTISSA IN R2
        LSL        R3, R0, #1                // PUT INPUT #1 EXPONENT IN R3
        LSRS       R3, R3, #24               //
        BNE        __me_lab2                        //

        CMP        R1, #0                    // IF DENORMALIZED NUMBER (R2 != 0 AND
        ITE        NE
        MOVNE      R0, #0                    // R3 == 0), THEN UNDERFLOW
        MOVEQ      R0, R2                    // ELSE IT IS ZERO SO RETURN INPUT #2
        B __me_lab_end

__me_lab2:     ORR        R1, R1, #0x80000000       // SET IMPLIED ONE IN MANTISSA

        CMP        R3, #0xFF                 // IF R3 == 0xFF, THEN OVERFLOW
        BEQ        __me_ovfl0                     //

        LSR        R1, R1, #2                // ADJUST THE MANTISSA
        CMP        R0, #0                    // IF INPUT #1 IS NEGATIVE,
        IT         MI
        RSBMI      R1, R1, #0                //  THEN NEGATE THE MANTISSA

        SUBS       R6, R3, R5                // GET THE SHIFT AMOUNT
        ITTTT      MI
        MOVMI      R7, R1                    // IF THE SHIFT AMOUNT IS NEGATIVE, THEN
        MOVMI      R1, R4                    //  SWAP THE TWO MANTISSA SO THAT R2
        MOVMI      R4, R7                    //  CONTAINS THE LARGER VALUE,
        RSBMI      R6, R6, #0                //  AND NEGATE THE SHIFT AMOUNT,
        IT         MI
        MOVMI      R3, R5                    //  AND ENSURE THE LARGER EXP. IS IN R3

        CMP        R6, #25                   // IF THE 2nd MANTISSA IS SIGNIFICANT,
        ITTEE      MI
        ASRMI      R7, R4, R6
        ADDMI      R1, R1, R7                // ADD IT TO THE FIRST MANTISSA
        MOVPL      R8, #0                    // IF NOT SIGNIFICANT, STICKY = 0
        BPL        __me_skip_sticky               // SKIP COMPUTATION OF STICKY BIT
        RSB        R7, R6, #28               //
        LSL        R8, R4, R7                // GET THE BITS THAT WERE SHIFTED OUT

__me_skip_sticky:
        CMP        R1, #0x0                  //
        ITT        EQ
        MOVEQ      R0, #0                    // IF THE RESULT IS ZERO,
        BEQ __me_lab_end
        ITTE       MI                        //
        RSBMI      R1, R1, #0x0              // IF THE RESULT IS NEGATIVE, THEN
        MOVMI      R7, #0x1                  // NEGATE THE RESULT AND
        MOVPL      R7, #0x0                  // NOTE THE SIGN

__me_loop:   SUB        R3, R3, #1                // ADJUSTING THE EXPONENT AS NECESSARY
        LSLS       R1, R1, #1                // NORMALIZE THE RESULTING MANTISSA
        BPL        __me_loop                      //

        ANDS       R4, R1, #0x80             // GUARD BIT
        BEQ        __me_no_round                  // IF GUARD BIT 0, DO NOT ROUND
        AND        R5, R1, #0x20             // IF RESULT REQUIRED NORMALIZATION
        ORR        R8, R8, R5                //  BIT 26 MUST BE ADDED TO STICKY
        ADDS       R1, R1, #0x80             // ROUND THE MANTISSA TO THE NEAREST
        IT         CS                        //
        ADDCS      R3, R3, #1                // ADJUST EXPONENT IF AN OVERFLOW OCCURS
        AND        R4, R1, #0x40             // GET ROUND BIT
        ORRS       R8, R8, R4                // (STICKY + ROUND)
        IT         EQ                        // IF (ROUND + STICKY) == 0,
        BICEQ      R1, R1, #0x100            // WE HAVE A TIE, ROUND TO EVEN

__me_no_round:
        ADDS       R3, R3, #2                // NORMALIZE THE EXPONENT
        ITT        LE
        MOVLE      R0, #0                    // CHECK FOR UNDERFLOW
        BLE __me_lab_end
        CMP        R3, #0xFF                 // CHECK FOR OVERFLOW
        BCS        __me_ovfl                      //

        BIC        R1, R1, #0xFF             // CLEAR GUARD, ROUND, AND STICKY BITS
        LSL        R1, R1, #1                // REMOVE THE IMPLIED ONE

        LSR        R0, R1, #9                // REPACK THE MANTISSA INTO R0
        ORR        R0, R0, R3, LSL #23       // REPACK THE EXPONENT INTO R0
        ORR        R0, R0, R7, LSL #31       // REPACK THE SIGN INTO R0

        B __me_lab_end

__me_ovfl1:  MOV        R0, R2                    // OVERFLOW
__me_ovfl0:  LSR        R7, R0, #31               //
__me_ovfl:   LSL        R7, R7, #31               // ISOLATE SIGN BIT
        MOVS       R0, #0xFF                 // SET UP Emax EXPONENT
        LSL        R0, R0, #23
        ORRS       R0, R0, R7                // COMBINE SIGN AND EXPONENT
__me_lab_end:
        POP       (R1, R3, R4, R5, R6, R7, R8, LR)                //
  }
}

void _Mul_FP(void) {
  asm {
        PUSH        (R1, R3, R4, R5, R6, R7, LR)

        EORS        R6, R0, R2              // SET THE SIGN OF THE RESULT
        ITE        MI
        MOVMI        R6, #0x80000000        //
        MOVPL        R6, #0x00000000        //

        LSL        R1, R0, #8               // PUT INPUT #1 MANTISSA IN R2
        LSL        R3, R0, #1               // PUT INPUT #1 EXPONENT IN R3
        LSRS        R3, R3, #24             //
        ITEE        NE
        ORRNE        R1, R1, #0x80000000    // SET IMPLIED ONE IN MANTISSA IF R3 != 0

        MOVEQ        R0, #0                 // IF R3 == 0, THEN UNDERFLOW
        BEQ __me_lab_end

        CMP        R3, #0xFF                // IF R3 == 0xFF, THEN OVERFLOW
        BEQ        __me_ovfl                     //

        LSL        R4, R2, #8               // PUT INPUT #2 MANTISSA IN R4
        LSL        R5, R2, #1               // PUT INPUT #2 EXPONENT IN R5
        LSRS        R5, R5, #24             //
        ITEE        NE
        ORRNE        R4, R4, #0x80000000    // SET IMPLIED ONE IN MANTISSA IF R5 != 0

        MOVEQ        R0, #0                 // IF R5 == 0, THEN UNDERFLOW
        BEQ __me_lab_end

        CMP        R5, #0xFF                // IF R5 == 0xFF, THEN OVERFLOW
        BEQ        __me_ovfl                     //

        ADDS        R3, R3, R5              // ADD EXPONENTS

        UMULL        R5, R4, R1, R4         // MULTIPLY THE MANTISAE INTO R4:R5

        CMP        R4, #0                   //
        ITT        PL
        LSLPL        R4, R4, #1             // ADJUST THE EXPONENT AS NECESSARY
        SUBPL        R3, R3, #0x1           // AND ADJUST FOR BIAS

        ADDS        R4, R4, #0x00000080     // ADD 1/2 FOR ROUNDING
        ITT        CS
        ADDCS        R3, R3, #0x1           // AND ADJUST FOR OVERFLOW
        LSRCS        R4, R4, #1             //

        SUBS        R3, R3, #0x00000007E    // ADJUST THE BIAS
        ITT        LE
        MOVLE        R0, #0                 // AND CHECK FOR UNDERFLOW
        BLE __me_lab_end

        CMP        R3, #0x000000FF          // CHECK FOR EXPONENT OVERFLOW
        BCS        __me_ovfl                     //

        LSR        R0, R4, #8               // SETUP THE MANTISSA
        BICS        R0, R0, #0x00800000     // REMOVE IMPLIED 1 IN MANTISSA
        ORR        R0, R0, R3, LSL #23      // REPACK THE EXPONENT INTO R0
        ORRS        R0, R0, R6              // REPACK THE SIGN INTO R0

        B __me_lab_end

__me_ovfl:        MOVS        R7, #0xFF          // OVERFLOW, RETURN +/- INFINITY
        LSLS        R7, R7, #23             //
        ORR        R0, R6, R7                //
__me_lab_end:
        POP        (R1, R3, R4, R5, R6, R7, LR)               //
  }
}

void _Div_FP(void) {
  asm {
        PUSH       (R1, R3, R4, R5, R6, R7, LR)
        EORS       R6, R0, R2             // SET THE SIGN OF THE RESULT
        ITE        MI
        MOVMI      R6, #0x80000000        //
        MOVPL      R6, #0x00000000        //

        LSLS       R1, R0, #8             // PUT INPUT #1 MANTISSA IN R2
        LSLS       R3, R0, #1             // PUT INPUT #1 EXPONENT IN R3
        LSRS       R3, R3, #24            //
        ITEE       NE
        ORRNE      R1, R1, #0x80000000    // SET IMPLIED ONE IN MANTISSA IF R3 != 0

        MOVEQ      R0, #0                 // IF R3 == 0, THEN UNDERFLOW
        BEQ __me_lab_end

        CMP        R3, #0xFF              // IF R3 == 0xFF, THEN OVERFLOW
        BEQ        __me_ovfl                   //

        LSLS.W    R4, R2, #8              // PUT INPUT #2 MANTISSA IN R4
        LSLS.W    R5, R2, #1              // PUT INPUT #2 EXPONENT IN R5
        LSRS.W    R5, R5, #24             //
        ITEEE     NE
        ORRNE     R4, R4, #0x80000000     // SET IMPLIED ONE IN MANTISSA IF R5 != 0
        MOVEQ     R0, #2139095040                  // IF R5 == 0, THEN UNDERFLOW
        ORREQ     R0, R0, R6              // IF RESULT < 0 (R6.31 == 1) THEN R0.31 = 1
        BEQ __me_lab_end

        CMP       R5, #0xFF               // IF R5 == 0xFF, THEN OVERFLOW
        BEQ       __me_ovfl                    //

        SUBS      R3, R3, R5              // SUBTRACT EXPONENTS

        MOVS      R0, #0x0                // INITIALIZE THE QUOTIENT
        MOVS      R7, #32                 // INITIALIZE THE SHIFT COUNTER
        LSRS      R4, R4, #1              // SETUP THE DIVISOR
        LSRS      R1, R1, #1              // SETUP THE DIVIDEND

__me_fdiv_:

        CMP       R1, R4                  // IF DIVIDEND IS LARGER THAN DIVISOR,
                                          // SHIFT A 1 INTO THE QUOTIENT, ELSE 0
        ADC       R0, R0, R0
        IT        CS
        SUBCS     R1, R1, R4              // IF DIVIDEND LARGER, SUBTRACT DIVISOR
        SUBS      R7, R7, #0x1            // UPDATE THE SHIFT COUNTER
        BEQ       __me_flb1_                  // EXIT IF OUT OF SHIFTS
        CMP       R1, #0x0                // IF DIVIDEND STILL THERE,
        IT        NE
        LSLNE     R1, R1, #1              //  UPDATE DIVIDEND
        BNE       __me_fdiv_                  //  CONTINUE

        LSLS      R0, R0, R7              // ADJUST THE MANTISSA AS NECESSARY

__me_flb1_: TST       R0, #0x80000000         // ALIGN THE MANTISSA
        ITT       EQ
        LSLEQ     R0, R0, #1              //
        SUBSEQ    R3, R3, #0x1            //

        ADDS      R0, R0, #0x00000080     // 1/2 ADJUST FOR ROUNDING
        ITE       CS
        ADDCS     R3, R3, #0x1            //
        LSLCC     R0, R0, #1              //

__me_flb2_: ADDS      R3, R3, #0x7F           // ADJUST FOR BIAS
        ITT       LE
        MOVLE     R0, #0                  // AND CHECK FOR UNDERFLOW
        BLE __me_lab_end

        CMP       R3, #0x000000FF         // AND CHECK FOR EXPONENT OVERFLOW
        BCS       __me_ovfl                    //

        LSRS      R0, R0, #0x9            // REPACK THE MANTISSA
        ORR       R0, R0, R3, LSL #23     // REPACK THE EXPONENT INTO R0
        ORRS      R0, R0, R6              // REPACK THE SIGN INTO R0

        B __me_lab_end

__me_ovfl:   MOVS      R7, #0xFF               // OVERFLOW, RETURN +/- INFINITY
        LSLS      R7, R7, #23             //
        ORRS      R0, R6, R7              //
__me_lab_end:
        POP       (R1, R3, R4, R5, R6, R7, LR)             //
  }
}

void _Compare_FP() {
  asm {
        PUSH      (R4, LR)

        CMP        R0, R2                    // HANDLE THE CASE OF BOTH INPUTS EQUAL
        IT         EQ
        BEQ __me_lab_end

        ORR        R4, R0, R2                // HANDLE THE CASE OF BOTH INPUTS BEING
        LSL        R4, R4, #1                // ZERO
        CMP        R4, #0x0                  //
        IT         EQ
        BEQ __me_lab_end

        LSLS       R4, R0, #1                // TEST OP1 == 0
        BNE        __me_ct2_                     //

        CMP        R4, R2                    // AFTER CMP, IF OP2 is -VE,
        BMI        __me_labop2_pos                  // C FLAG IS CLEAR TO INDICATE A BORROW
        ADDS       R4, R4, #2                // RTS-ABI REQUIRES C FLAG SET
        CMP        R4, #1                    // TO INDICATE OP1 > OP2
__me_labop2_pos:
        B __me_lab_end

__me_ct2_:  LSL        R4, R0, #1                //
        LSR        R4, R4, #24               // CHECK INPUT #1 FOR INFINITY
        CMP        R4, #0xFF                 //
        BNE        __me_ct1_                     //
        LSL        R4, R2, #1                // CHECK INPUT #2 FOR INFINITY
        LSR        R4, R4, #24               //
        CMP        R4, #0xFF                 //
        BNE        __me_ct1_                     //

        LSR        R4, R2, #31               // HANDLE THE CASE OF BOTH INPUTS
        SUBS        R4, R4, R0, LSR #31      // BEING INFINITE
        B __me_lab_end

__me_ct1_:  CMP        R2, #0                    // CHECK OP2'S SIGN
        BMI        __me_op2_m                     //

        CMP        R0, #0                    // IF OP1 IS -VE, C FLAG IS 1 AFTER
        BGT        __me_labop1_pos                  // CMP SINCE THERE IS NO BORROW
        MOVS       R4, #0                    // RT-ABI REQUIRES C FLAG CLEAR TO
        CMP        R4, #1                    // INDICATE OP1 < OP2
        B __me_lab_end
__me_labop1_pos:
        CMP        R0, R2                    //
        B __me_lab_end
__me_op2_m:  CMP        R0, #0                    // OP2 IS NEGATIVE.  IF OP1 IS NEGATIVE,
        IT         MI
        CMPMI      R2, R0                    // THE RESULT IS OP2 - OP1, ELSE OP1
__me_lab_end:
        POP       (R4, LR)
  }
}

void _Add_DP() {
  asm {
        PUSH        (R2-R11, LR)

        MOVS        R7, R3, LSL #12           // BUILD INPUT #2 MANTISSA
        MOVS        R7, R7, LSR #3
        ORR         R7, R7, R2, LSR #23
        LSL         R8, R2, #9
        LSL         R9, R3, #1                // BUILD INPUT #2 EXPONENT
        LSRS        R9, R9, #21
        BNE         __me_lab1

        ORR         R10, R7, R8               // IF DENORMALIZED NUMBER (op2m != 0 AND
        ITT         NE
        MOVNE       R1, #0                    // R9 == 0), THEN UNDERFLOW
        MOVNE       R0, #0                    //
        B __me_lab_end

__me_lab1:     ORRS        R7, R7, #0x20000000       // SET IMPLIED ONE IN MANTISSA
        MOVS        LR, #0x700                // INITIALIZE LR WITH 0x7FF
        ADDS        LR, LR, #0xFF
        CMP         R9, LR                    // IF R9==0x7FF, THEN OVERFLOW
        BNE         __me_lab2
        MOV         R0, #0
        LSRS        R1, R3, #20
        LSLS        R1, R1, #20
        B __me_lab_end

__me_lab2:     CMP        R3, #0
        BPL        __me_lab3                         // IF INPUT #2 IS NEGATIVE,
        MOVS       R10, #0
        RSBS       R8, R8, #0                 //  THEN NEGATE THE MANTISSA
        SBC        R7, R10, R7

__me_lab3:     LSLS       R4, R1, #12                // BUILD INPUT #1 MANTISSA
        LSRS       R4, R4, #3
        ORR        R4, R4, R0, LSR #23
        LSL        R5, R0, #9
        LSL        R6, R1, #1                 // BUILD INPUT #1 EXPONENT
        LSRS       R6, R6, #21
        BNE        __me_lab4

        ORR        R10, R4, R5                // IF DENORMALIZED NUMBER
        ITTEE      NE
        MOVNE      R1, #0                     // (op1m != 0 AND R6 == 0),
        MOVNE      R0, #0                     // THEN UNDERFLOW
        MOVEQ      R1, R3                     // ELSE IT IS ZERO SO RETURN
        MOVEQ      R0, R2                     // INPUT #2
        B __me_lab_end

__me_lab4:     ORR        R4, R4, #0x20000000        // SET IMPLIED ONE IN MANTISSA
        CMP        R6, LR                     // IF R6==0x7FF, THEN OVERFLOW
        BNE        __me_lab5
        MOVS       R0, #0
        LSRS       R1, R1, #20
        LSLS       R1, R1, #20
        B __me_lab_end

__me_lab5:     CMP        R1, #0
        BPL        __me_lab6                         // IF INPUT #1 IS NEGATIVE,
        MOVS       R10, #0
        RSBS       R5, R5, #0                 //  THEN NEGATE THE MANTISSA
        SBC        R4, R10, R4

__me_lab6:     SUBS       LR, R6, R9                 // GET THE SHIFT AMOUNT
        BPL        __me_lab7
        MOV        R10, R4                    // IF THE SHIFT AMOUNT IS NEGATIVE, THEN
        MOV        R4, R7                     //  SWAP THE TWO MANTISSA SO THAT op1m
        MOV        R7, R10                    //  CONTAINS THE LARGER VALUE,
        MOV        R10, R5
        MOV        R5, R8
        MOV        R8, R10
        RSB        LR, LR, #0                 //  AND NEGATE THE SHIFT AMOUNT,
        MOV        R6, R9                     //  AND ENSURE THE LARGER EXP. IS IN R6

__me_lab7:     CMP        LR, #54                    // IF THE SECOND MANTISSA IS SIGNIFICANT,
        ITT        PL
        MOVPL      R11, #0
        BPL        __me_no_add

        CMP        LR, #0                     // ADJUST THE SECOND MANTISSA, BASED
        ITT        EQ
        MOVEQ      R11, #0
        BEQ        __me_no_sft                     // UPON ITS EXPONENT.

        RSB        R10, LR, #57               // CALCULATE STICKY BIT
        SUBS       R9, R10, #32               // PERFORM LONG LONG LSL by R10
        ITEE       CS
        MOVCS      R11, R8, LSL R9            // WE DON'T CARE ABOUT THE ACTUAL RESULT
        MOVCC      R11, R7, LSL R10
        ORRCC      R11, R11, R8               // ALL OF OP2M2 IS INCLUDED IN STICKY

        RSBS       R10, LR, #32               // R10 := 32 - LR
        LSL        R10, R7, R10               // set R10 to R7 shifted left by 32 - _shift_ places
        IT         CC
        MOVCC      R10, R7
        ASR        R7, R7, LR                 //
        ITEET      CS
        LSRCS      R8, R8, LR                 //
        SUBCC      LR, LR, #32
        ASRCC      R8, R10, LR
        ADDCS      R8, R8, R10                // R8 is zero everywhere R10 isn't and vice versa

__me_no_sft: ADDS       R5, R5, R8                 // ADD IT TO THE FIRST MANTISSA
        ADCS       R4, R4, R7                 //

__me_no_add: ORRS       R10, R4, R5                //
        ITTT       EQ
        MOVEQ      R1, #0                     // IF THE RESULT IS ZERO,
        MOVEQ      R0, #0                     //
        BEQ __me_lab_end

        CMP        R4, #0                     //
        IT         PL
        MOVPL      R10, #0x0                  // IF THE RESULT IS POSITIVE, NOTE SIGN
        BPL        __me_nloop                      //
        MOVS       R10, #0x1                  // IF THE RESULT IS NEGATIVE, THEN
        MOVS       LR, #0
        RSBS       R5, R5, #0x0               //  NOTE THE SIGN AND
        SBC        R4, LR, R4                 //  NEGATE THE RESULT

__me_nloop:  SUB        R6, R6, #1                 // ADJUSTING THE EXPONENT AS NECESSARY
        LSLS       R5, R5, #1                 // NORMALIZE THE RESULTING MANTISSA
        ADCS       R4, R4, R4                 //
        BPL        __me_nloop                      //

        ANDS       LR, R5, #0x400             // GUARD_BIT
        BEQ        __me_no_round                   // IF GUARD BIT 0, DO NOT ROUND
        AND        R9, R5, #0x100             // IF RESULT REQUIRED NORMALIZATION
        ORR        R11, R11, R9               //  BIT 26 MUST BE ADDED TO STICKY
        ADDS       R5, R5, #0x400             // ROUND THE MANTISSA TO THE NEAREST
        ADCS       R4, R4, #0                 //
        IT         CS
        ADDCS      R6, R6, #1                 // ADJUST EXPONENT IF AN OVERFLOW OCCURS
        BCS        __me_ovfl                       // IF OVERFLOW, RESULT IS ALREADY EVEN
        AND        R9, R5, #0x200             // GET ROUND BIT
        ORRS       R11, R11, R9               // (ROUND + STICKY)
        IT         EQ                         // IF (ROUND + STICKY) == 0
        BICEQ      R5, R5, #0x800             // WE HAVE A TIE, ROUND TO EVEN

__me_no_round:
        BIC        R5, R5, #0x700             // CLEAR GUARD, ROUND, AND STICKY BITS
        LSLS       R5, R5, #1                 // REMOVE THE IMPLIED ONE
        ADC        R4, R4, R4                 //

__me_ovfl:   ADDS       R6, R6, #2                 // NORMALIZE THE EXPONENT
        ITTT       LE
        MOVLE      R1, #0                     // CHECK FOR UNDERFLOW
        MOVLE      R0, #0                     //
        BLE __me_lab_end

        MOVS       LR, #0x700                 //
        ADDS       LR, LR, #0xFF              //
        CMP        R6, LR                     // CHECK FOR OVERFLOW
        BCC        __me_lab9
        MOV        R0, #0                     //
        ANDS       R3, R3, #0x80000000
        MOVS       R1, #0xFF
        LSLS       R1, R1, #3
        ADDS       R1, R1, #7
        LSLS       R1, R1, #20
        ORRS       R1, R1, R3
        B __me_lab_end


__me_lab9:     LSLS       R7, R4, #20                // REPACK THE MANTISSA INTO
        ORR        R0, R7, R5, LSR #12        // R1:R0
        LSRS       R1, R4, #12                //
        ORR        R1, R1, R6, LSL #20        // REPACK THE EXPONENT INTO R1
        ORR        R1, R1, R10, LSL #31       // REPACK THE SIGN INTO R1
__me_lab_end:
        POP        (R2-R11, LR)
  }
}

void _Sub_DP(void) {
  asm {
        PUSH        (R2-R11, LR)
        EOR         R3, R3,#0x80000000// NEGATE SECOND OPERAND

        MOVS        R7, R3, LSL #12           // BUILD INPUT #2 MANTISSA
        MOVS        R7, R7, LSR #3
        ORR         R7, R7, R2, LSR #23
        LSL         R8, R2, #9
        LSL         R9, R3, #1                // BUILD INPUT #2 EXPONENT
        LSRS        R9, R9, #21
        BNE         __me_lab1

        ORR         R10, R7, R8               // IF DENORMALIZED NUMBER (op2m != 0 AND
        ITT         NE
        MOVNE       R1, #0                    // R9 == 0), THEN UNDERFLOW
        MOVNE       R0, #0                    //
        B __me_lab_end

__me_lab1:     ORRS        R7, R7, #0x20000000       // SET IMPLIED ONE IN MANTISSA
        MOVS        LR, #0x700                // INITIALIZE LR WITH 0x7FF
        ADDS        LR, LR, #0xFF
        CMP         R9, LR                    // IF R9==0x7FF, THEN OVERFLOW
        BNE         __me_lab2
        MOV         R0, #0
        LSRS        R1, R3, #20
        LSLS        R1, R1, #20
        B __me_lab_end

__me_lab2:     CMP        R3, #0
        BPL        __me_lab3                         // IF INPUT #2 IS NEGATIVE,
        MOVS       R10, #0
        RSBS       R8, R8, #0                 //  THEN NEGATE THE MANTISSA
        SBC        R7, R10, R7

__me_lab3:     LSLS       R4, R1, #12                // BUILD INPUT #1 MANTISSA
        LSRS       R4, R4, #3
        ORR        R4, R4, R0, LSR #23
        LSL        R5, R0, #9
        LSL        R6, R1, #1                 // BUILD INPUT #1 EXPONENT
        LSRS       R6, R6, #21
        BNE        __me_lab4

        ORR        R10, R4, R5                // IF DENORMALIZED NUMBER
        ITTEE      NE
        MOVNE      R1, #0                     // (op1m != 0 AND R6 == 0),
        MOVNE      R0, #0                     // THEN UNDERFLOW
        MOVEQ      R1, R3                     // ELSE IT IS ZERO SO RETURN
        MOVEQ      R0, R2                     // INPUT #2
        B __me_lab_end

__me_lab4:     ORR        R4, R4, #0x20000000        // SET IMPLIED ONE IN MANTISSA
        CMP        R6, LR                     // IF R6==0x7FF, THEN OVERFLOW
        BNE        __me_lab5
        MOVS       R0, #0
        LSRS       R1, R1, #20
        LSLS       R1, R1, #20
        B __me_lab_end

__me_lab5:     CMP        R1, #0
        BPL        __me_lab6                         // IF INPUT #1 IS NEGATIVE,
        MOVS       R10, #0
        RSBS       R5, R5, #0                 //  THEN NEGATE THE MANTISSA
        SBC        R4, R10, R4

__me_lab6:     SUBS       LR, R6, R9                 // GET THE SHIFT AMOUNT
        BPL        __me_lab7
        MOV        R10, R4                    // IF THE SHIFT AMOUNT IS NEGATIVE, THEN
        MOV        R4, R7                     //  SWAP THE TWO MANTISSA SO THAT op1m
        MOV        R7, R10                    //  CONTAINS THE LARGER VALUE,
        MOV        R10, R5
        MOV        R5, R8
        MOV        R8, R10
        RSB        LR, LR, #0                 //  AND NEGATE THE SHIFT AMOUNT,
        MOV        R6, R9                     //  AND ENSURE THE LARGER EXP. IS IN R6

__me_lab7:     CMP        LR, #54                    // IF THE SECOND MANTISSA IS SIGNIFICANT,
        ITT        PL
        MOVPL      R11, #0
        BPL        __me_no_add

        CMP        LR, #0                     // ADJUST THE SECOND MANTISSA, BASED
        ITT        EQ
        MOVEQ      R11, #0
        BEQ        __me_no_sft                     // UPON ITS EXPONENT.

        RSB        R10, LR, #57               // CALCULATE STICKY BIT
        SUBS       R9, R10, #32               // PERFORM LONG LONG LSL by R10
        ITEE       CS
        MOVCS      R11, R8, LSL R9            // WE DON'T CARE ABOUT THE ACTUAL RESULT
        MOVCC      R11, R7, LSL R10
        ORRCC      R11, R11, R8               // ALL OF OP2M2 IS INCLUDED IN STICKY

        RSBS       R10, LR, #32               // R10 := 32 - LR
        LSL        R10, R7, R10               // set R10 to R7 shifted left by 32 - _shift_ places
        IT         CC
        MOVCC      R10, R7
        ASR        R7, R7, LR                 //
        ITEET      CS
        LSRCS      R8, R8, LR                 //
        SUBCC      LR, LR, #32
        ASRCC      R8, R10, LR
        ADDCS      R8, R8, R10                // R8 is zero everywhere R10 isn't and vice versa

__me_no_sft: ADDS       R5, R5, R8                 // ADD IT TO THE FIRST MANTISSA
        ADCS       R4, R4, R7                 //

__me_no_add: ORRS       R10, R4, R5                //
        ITTT       EQ
        MOVEQ      R1, #0                     // IF THE RESULT IS ZERO,
        MOVEQ      R0, #0                     //
        BEQ __me_lab_end

        CMP        R4, #0                     //
        IT         PL
        MOVPL      R10, #0x0                  // IF THE RESULT IS POSITIVE, NOTE SIGN
        BPL        __me_nloop                      //
        MOVS       R10, #0x1                  // IF THE RESULT IS NEGATIVE, THEN
        MOVS       LR, #0
        RSBS       R5, R5, #0x0               //  NOTE THE SIGN AND
        SBC        R4, LR, R4                 //  NEGATE THE RESULT

__me_nloop:  SUB        R6, R6, #1                 // ADJUSTING THE EXPONENT AS NECESSARY
        LSLS       R5, R5, #1                 // NORMALIZE THE RESULTING MANTISSA
        ADCS       R4, R4, R4                 //
        BPL        __me_nloop                      //

        ANDS       LR, R5, #0x400             // GUARD_BIT
        BEQ        __me_no_round                   // IF GUARD BIT 0, DO NOT ROUND
        AND        R9, R5, #0x100             // IF RESULT REQUIRED NORMALIZATION
        ORR        R11, R11, R9               //  BIT 26 MUST BE ADDED TO STICKY
        ADDS       R5, R5, #0x400             // ROUND THE MANTISSA TO THE NEAREST
        ADCS       R4, R4, #0                 //
        IT         CS
        ADDCS      R6, R6, #1                 // ADJUST EXPONENT IF AN OVERFLOW OCCURS
        BCS        __me_ovfl                       // IF OVERFLOW, RESULT IS ALREADY EVEN
        AND        R9, R5, #0x200             // GET ROUND BIT
        ORRS       R11, R11, R9               // (ROUND + STICKY)
        IT         EQ                         // IF (ROUND + STICKY) == 0
        BICEQ      R5, R5, #0x800             // WE HAVE A TIE, ROUND TO EVEN

__me_no_round:
        BIC        R5, R5, #0x700             // CLEAR GUARD, ROUND, AND STICKY BITS
        LSLS       R5, R5, #1                 // REMOVE THE IMPLIED ONE
        ADC        R4, R4, R4                 //

__me_ovfl:   ADDS       R6, R6, #2                 // NORMALIZE THE EXPONENT
        ITTT       LE
        MOVLE      R1, #0                     // CHECK FOR UNDERFLOW
        MOVLE      R0, #0                     //
        BLE __me_lab_end

        MOVS       LR, #0x700                 //
        ADDS       LR, LR, #0xFF              //
        CMP        R6, LR                     // CHECK FOR OVERFLOW
        BCC        __me_lab9
        MOV        R0, #0                     //
        ANDS       R3, R3, #0x80000000
        MOVS       R1, #0xFF
        LSLS       R1, R1, #3
        ADDS       R1, R1, #7
        LSLS       R1, R1, #20
        ORRS       R1, R1, R3
        B __me_lab_end


__me_lab9:     LSLS       R7, R4, #20                // REPACK THE MANTISSA INTO
        ORR        R0, R7, R5, LSR #12        // R1:R0
        LSRS       R1, R4, #12                //
        ORR        R1, R1, R6, LSL #20        // REPACK THE EXPONENT INTO R1
        ORR        R1, R1, R10, LSL #31       // REPACK THE SIGN INTO R1
__me_lab_end:
        POP        (R2-R11, LR)
  }
}

void _Mul_DP() {
  asm {
        PUSH        (R2-R8, LR)

        EORS        R8, R1, R3                     // SET THE SIGN OF THE RESULT
        ITE         MI
        MOVMI       R8, #0x80000000               //
        MOVPL       R8, #0x00000000               //

        LSL         R5, R3, #11                   // BUILD INPUT #2 MANTISSA
        ORR         R5, R5, R2, LSR #21           //
        LSL         R6, R2, #11                   //
        LSL         R7, R3, #1                    // BUILD INPUT #2 EXPONENT
        LSRS        R7, R7, #21                   //
        ITEEE       NE
        ORRNE       R5, R5,#0x80000000            // SET IMPLIED 1 IN MANTISSA
        MOVEQ       R1, #0                        // IF R7 == 0, ELSE UNDERFLOW
        MOVEQ       R0, #0                        //
        BEQ __me_lab_end

        MOVS        LR, #0x700                    //
        ADDS        LR, LR, #0xFF                 //
        CMP         R7, LR                        // IF R7 == 0x7FF, THEN
        BEQ         __me_ovfl                          // OVERFLOW

        LSL         R3, R1, #11                   // BUILD INPUT #1 MANTISSA
        ORR         R3, R3, R0, LSR #21           //
        LSL         R2, R0, #11                   //
        LSL         R4, R1, #1                    // BUILD INPUT #1 EXPONENT
        LSRS        R4, R4, #21                   //
        ITEEE       NE
        ORRNE       R3, R3,#0x80000000            // SET IMPLIED 1 IN MANTISSA
        MOVEQ       R1, #0                        // IF R4 == 0, ELSE UNDERFLOW
        MOVEQ       R0, #0                        //
        BEQ __me_lab_end

        CMP         R4, LR                        // IF R4 == 0x7FF, THEN
        BEQ         __me_ovfl                          // OVERFLOW

        ADDS        R4, R4, R7                    // ADD EXPONENTS

        UMULL       R0, R1, R3, R5; R3*R5=> R1:R0:0:0
        UMULL       LR, R7, R3, R6                // R3*R6 =>  0 :R7:LR  : 0
        UMULL       R6, R3, R2, R6                // R2*R6 =>  0 :  0 :R3:R6
        ADDS        LR, LR, R3                    //                 0 :  0 :LR  :0
        ADCS        R7, R7, #0                    //                 0 :R7: 0   : 0
        ADCS        R1, R1, #0                    //                R1 :  0 : 0   : 0
        UMULL       R6, R3, R2, R5                // R2*R5 =>  0 :R3:R6: 0
        ADDS        LR, LR, R6                    //                 0 :  0 : LR : 0
        ADCS        R7, R7, #0                    //                 0 :R7: 0   : 0
        ADCS        R1, R1, #0                    //            R1 :  0 : 0   : 0
        ADDS        R7, R7, R3                    //                 0 :R7: 0   : 0
        ADCS        R1, R1, #0                    //            R1 :  0 : 0   : 0
        ADDS        R0, R0, R7                    //                 0 :R0: 0 : 0
        ADCS        R1, R1, #0                    //            R1 :  0 : 0   : 0

        ITE         MI
        MOVMI       LR, #0x00000400               // SETUP 1/2 CONSTANT FOR ROUNDING
        MOVPL       LR, #0x00000200               //

        ADDS        R0, R0, LR                    // ROUND TO NEAREST
        ADCS        R1, R1, #0                    //

        IT          MI
        ADDMI       R4, R4, #0x1                  // ALIGN THE RESULT
        BMI         __me_lab1                            //
        LSLS        R0, R0, #1                    //
        ADCS        R1, R1, R1                    //

__me_lab1:     MOVS        R7, #0x300                    //
        ADDS        R7, R7, #0xFF                 //
        SUBS        R4, R4, R7                    // ADJUST FOR BIAS
        ITTT        LE
        MOVLE   R1, #0x0                          // AND CHECK FOR UNDERFLOW
        MOVLE       R0, #0x0                      //
        BLE __me_lab_end

        ADDS        R7, R7, #0x400                // AND CHECK FOR EXPONENT OVERFLOW
        CMP         R4, R7                        //
        BCS         __me_ovfl                          //

        LSR         R0, R0, #11                   // REPACK __me_low PART OF RESULT
        ORR         R0, R0, R1, LSL #21           // INTO R0
        LSL         R1, R1, #1                    // REPACK __me_high PART OF RESULT
        LSR         R1, R1, #12                   // INTO R1
        ORR         R1, R1, R4, LSL #20           // REPACK THE EXPONENT INTO
        ORR         R1, R1, R8                    // R1 REPACK THE SIGN INTO
                                                  // R1
        B __me_lab_end


__me_ovfl:   MOVS        R0, #0                        // IF OVERFLOW, RETURN +/-
        MOVS        R1, #0xFF                     // INFINITY
        LSLS        R1, R1, #3
        ADDS        R1, R1, #7
        LSLS        R1, R1, #20
        ORRS        R1, R1, R8
__me_lab_end:
        POP        (R2-R8, LR)
  }
}

void _Div_DP() {
  asm {
        PUSH        (R2-R8, LR)

        EORS    R8, R1, R3               // SET THE SIGN OF THE RESULT
        ITE        MI
        MOVMI        R8, #0x80000000     //
        MOVPL        R8, #0x00000000     //

        LSL        R5, R3, #12           // BUILD INPUT #2 MANTISSA
        LSR        R5, R5, #12           //
        LSLS        R6, R2, #1           //
        ADCS        R5, R5, R5           //
        LSL        R7, R3, #1            // BUILD INPUT #2 EXPONENT
        LSRS.W        R7, R7, #21        //

        ITT        NE                  //                                                                .
        ORRNE      R5, R5,#0x00200000  //SET IMPLIED 1 IN MANTISSA IF R7 != 0                            .
        BNE        __me_jump                //                                                                .
        MOVW       R1, #0              // IF R7 == 0, THEN UNDERFLOW                                     .
        MOVT       R1, #0x7FF0         //                                                                .
        ORR        R1, R1, R8
        MOV        R0, #0              //                                                                .
        B __me_lab_end
__me_jump:
        MOV        LR, #0x700            //
        ADDS        LR, LR, #0xFF        //
        CMP        R7, LR                // IF R7 == 0x7FF, THEN OVERFLOW
        BEQ        __me_ovfl                  //

        LSL        R3, R1, #12           // BUILD INPUT #1 MANTISSA
        LSR        R3, R3, #12           //
        LSLS        R2, R0, #1           //
        ADCS        R3, R3, R3           //
        LSL        R4, R1, #1            // BUILD INPUT #1 EXPONENT
        LSRS        R4, R4, #21          //
        ITEEE        NE
        ORRNE        R3, R3,#0x00200000  // SET IMPLIED 1 IN MANTISSA IF R4 != 0
        MOVEQ        R1, #0              // IF R4 == 0, THEN UNDERFLOW
        MOVEQ        R0, #0              //
        BEQ __me_lab_end

        CMP        R4, LR                // IF R4 == 0x7FF, THEN OVERFLOW
        BEQ        __me_ovfl                  //

        SUBS        R4, R4, R7           // SUBTRACT EXPONENTS

        // DIVIDE THE MANTISAE:  op1m / op2m => R1:R0
        MOVS        R1, #0x0            // INITIALIZE THE QUOTIENT
        MOVS        R0, #0x0            //
        MOVS        LR, #54             // INITIALIZE THE SHIFT COUNTER

__me_fdivb:  CMP        R3, R5               // IF DIVIDEND IS LARGER THAN DIVISOR,
        BNE        __me_lab1                   //
        CMP        R2, R6               //
__me_lab1:        BCC        __me_lab2                //
        ADCS        R0, R0, R0          //  SHIFT A 1 INTO THE QUOTIENT
        ADCS        R1, R1, R1          //
        SUBS        R2, R2, R6          //  AND SUBTRACT THE DIVISOR FROM
        SBC        R3, R3, R5           //  THE DIVIDEND
        B        __me_lab3                     //
__me_lab2:        ADCS        R0, R0, R0       // ELSE, SHIFT A 0 INTO THE QUOTIENT
        ADCS        R1, R1, R1          //
__me_lab3:        SUBS        LR, LR, #1       // UPDATE THE SHIFT COUNTER
        BEQ        __me_fdive                // EXIT IF OUT OF SHIFTS
        ORRS        R7, R3, R2          //
        BEQ        __me_fdive                // IF DIVIDEND STILL THERE,
        LSLS        R2, R2, #1          //  UPDATE DIVIDEND
        ADCS        R3, R3, R3          //  AND
        B        __me_fdivb                  //  CONTINUE

__me_fdive:  CMP        LR, #32              // ADJUST THE QUOTIENT AS NECESSARY
        BCS        __me_low                  //
        CMP        LR, #22              //
        BCC        __me_high                 //

__me_mid:        RSB        R7, LR, #32      //
        LSR        R1, R0, R7;
        LSL        R0, R0, LR           //
        B        __me_cont                   //

__me_low:        SUB        LR, LR, #32      //
        LSL        R1, R0, LR           //
        MOVS        R0, #0              //
        B        __me_cont                   //

__me_high:        LSL        R1, R1, LR      //
        RSB        R7, LR, #32          //
        LSR        R7, R0, R7
        ORR        R1, R1, R7
        LSL        R0, R0, LR           //

__me_cont:   TST        R1, #0x00200000      // ALIGN THE QUOTIENT
        BNE        __me_lab4                   //
        LSLS        R0, R0, #1          //
        ADCS        R1, R1, R1          //
        SUBS        R4, R4, #0x1        //

__me_lab4:     ADDS        R0, R0, #0x00000001 // 1/2 ADJUST FOR ROUNDING
        ADCS        R1, R1, #0          //
        TST        R1, #0x00400000      //
        ITTE        NE
        ADDNE        R4, R4, #0x1       //
        BICNE        R1, R1, #0x00400000//
        BICEQ        R1, R1, #0x00200000//

        MOV        R7, #0x300           //
        ADDS        R7, R7, #0xFF       //
        ADDS        R4, R4, R7          // ADJUST FOR BIAS
        ITTT        LE
        MOVLE        R1, #0x0           // AND CHECK FOR UNDERFLOW
        MOVLE        R0, #0x0           //
        BLE __me_lab_end

        ADD        R7, R7, #0x400       // AND CHECK FOR EXPONENT OVERFLOW
        CMP        R4, R7               //
        BCS        __me_ovfl                 //

        LSRS        R1, R1, #1          // REPACK THE QUOTIENT INTO
        RRX        R0, R0               // R1:R0. REPACK THE
        ORR        R1, R1, R4, LSL #20  // EXPONENT INTO R1.
        ORR        R1, R1, R8           // REPACK THE SIGN INTO R1

        B __me_lab_end

__me_ovfl:        MOVS        R0, #0x0       // IF OVERFLOW, RETURN +/-
        MOVS        R1, #0xFF           // INFINITY
        LSL        R1, R1, #3
        ADDS        R1, R1, #7
        LSL        R1, R1, #20
        ORR        R1, R1, R8
__me_lab_end:
        POP        (R2-R8, LR)
  }
}

void _Compare_DP() {
    asm {
        PUSH        (R4, LR)

        CMP     R1, R3              // HANDLE THE CASE OF BOTH INPUTS EQUAL
        BNE            __me_label_1                     //
        CMP     R0, R2              //
        BEQ     __me_label_done

    __me_label_1:
        ORRS    R4, R0, R2                // HANDLE THE CASE OF BOTH INPUTS BEING
        BNE     __me_label_2                     // ZERO
        ORR            R4, R1, R3         //
        LSLS    R4, R4, #1                //
        CMP     R4, #0x0                   //
        BEQ     __me_label_done

    __me_label_2:
        ORRS    R4, R0, R1, LSL #1 // TEST OP1 == 0
        BNE     __me_label_3                     //

        CMP     R4, R3                 // OP1 == 0, DISREGARD SIGN OF OP1
        B       __me_label_done

    __me_label_3:
        LSLS    R4, R1, #1             // CHECK INPUT #1 FOR INFINITY
        ASRS    R4, R4, #21               //
        ADDS    R4, R4, #1                //
        BNE     __me_label_4                     //
        LSLS    R4, R3, #1             // CHECK INPUT #2 FOR INFINITY
        ASRS    R4, R4, #21               //
        ADDS    R4, R4, #1                //
        BNE     __me_label_4                     //

        LSRS    R4, R3, #31            // HANDLE THE CASE OF BOTH INPUTS
        SUBS    R4, R4, R1, LSR #31   // BEING INFINITE
        B       __me_label_done

    __me_label_4:
        CMP     R3, #0                  // CHECK OP2 SIGN
        BMI     __me_label_6                     //

        CMP     R1, #0                  // OP2 IS POSITIVE.  IF OP1 IS NEGATIVE,
        BMI     __me_label_done

    __me_label_op1_pos:
        CMP     R1, R3              // ELSE IT IS OP1 - OP2
        BNE     __me_label_done
        EORS    R4, R0, R2                // MAKE SURE WE SET THE N BIT CORRECTLY
        BMI     __me_label_5                     //
        CMP     R0, R2              //
        B       __me_label_done

    __me_label_5:
        CMP     R2, #0                  //
        B       __me_label_done

    __me_label_6:
        CMP     R1, #0                            // OP2 IS NEGATIVE.  IF OP1 IS POSITIVE,
        BGT     __me_label_done
        CMP     R3, R1                        // ELSE IT IS OP2 - OP1
        BNE     __me_label_done
        EORS    R4, R0, R2                // MAKE SURE WE SET THE N BIT CORRECTLY
        BMI     __me_label_7                     //
        CMP            R2, R0              //
        B       __me_label_done

    __me_label_7:
        CMP            R0, #0                  //

    __me_label_done:
        MRS          R4, #0                   // CORTEX-M3 USES APSR INSTEAD OF CPSR
        ITE          PL                          //
        ORRPL        R4, R4, #0x20000000            // IF N CLEAR, SET C
        BICMI        R4, R4, #0x20000000            // IF N SET, CLEAR C

        MSR          #0, R4

        POP        (R4, LR)
    }
}


void _SignedLongLongToFloat() {
  asm {
        CMP        R0, #0                     //
        ITT        EQ
        CMPEQ      R1, #0                     //
        BEQ __me_lab_end
        PUSH       (R2, R3, R4, LR)           // SAVE CONTEXT

        // IN LITTLE ENDIAN MODE THE INPUT LONG LONG VALUE IS IN R1:R0. SWAP THE
        // WORDS SO THAT WE HAVE THE LONG LONG VAULUE IN R0:R1.

        MOV        R2, R0                     //
        MOV        R0, R1                     //
        MOV        R1, R2                     //

        MOVS       R2, R0                     //
        MOVS       R3, #0xBE                  // SET THE EXPONENT FIELD

        CMP        R0, #0                     //
        BPL        __me_loop                       //
        MOVS       R4, #0
        RSBS       R1, R1, #0                 // IF NEGATIVE, NEGATE IT
        SBCS       R0, R4, R0                 //
        BMI        __me_cont                       // HANDLE THE SPACIAL CASE 0x8000:0:0:0

__me_loop:   SUBS       R3, R3, #1
        LSLS       R0, R0, #1                // NORMALIZE THE MANTISSA
        ORR        R0, R0, R1, LSR #31       // ADJUSTING THE EXPONENT, ACCORDINGLY
        LSL        R1, R1, #1                //
        BPL        __me_loop                      //
__me_cont:
        ADDS       R0, R0, #0x00000080       // ADD 1/2 TO ROUND
        ITE        CS
        ADDCS      R3, R3, #0x1              // AND ADJUST THE EXPONENT ACCORDINGLY

        LSLCC      R0, R0, #1                // MASK IMPLIED 1 OUT OF THE MANTISSA
        LSRS       R0, R0, #9                // PACK THE MANTISSA
        ORR        R0, R0, R3, LSL #23       // PACK THE EXPONENT
        CMP        R2, #0                    // IF THE INPUT WAS NEGATIVE
        IT         MI
        ORRMI      R0, R0, #0x80000000       //  THEN SET THE SIGN FIELD

        POP       (R2, R3, R4, LR)           // RESTORE CONTEXT
__me_lab_end:
  }
}

void _UnsignedLongLongToFloat() {
  asm {
        CMP        R0, #0                    //
        ITT        EQ
        CMPEQ      R1, #0                    //
        BEQ __me_lab_end

        PUSH      (R2, LR)                   // SAVE CONTEXT

        // IN LITTLE ENDIAN MODE THE INPUT LONG LONG VALUE IS IN R1:R0. SWAP THE
        // WORDS SO THAT WE HAVE THE LONG LONG VAULUE IN R0:R1.

        MOV        R2, R0                    //
        MOV        R0, R1                    //
        MOV        R1, R2                    //

        MOVS       R2, #0xBE                 // SET THE EXPONENT FIELD

        CMP        R0, #0                    // IF MSB IS 1, THE VALUE IS ALREADY
        BMI        __me_cont                      // NORMALIZED.

__me_loop:   LSLS       R0, R0, #1                // NORMALIZE THE MANTISSA
        ORR        R0, R0, R1, LSR #31       //
        LSL        R1, R1, #1                //
        SUB        R2, R2, #1                // ADJUSTING THE EXPONENT, ACCORDINGLY
        BPL        __me_loop                      //

__me_cont:   ADDS       R0, R0, #0x00000080       // ADD 1/2 TO ROUND
        ITE        CS
        ADDCS      R2, R2, #0x1              // AND ADJUST THE EXPONENT ACCORDINGLY

        LSLCC      R0, R0, #1                // MASK THE IMPLIED ONE IN THE MANTISSA
        LSRS       R0, R0, #9                // PACK THE MANTISSA
        ORR        R0, R0, R2, LSL #23       // PACK THE EXPONENT

        POP        (R2, LR)                  // RESTORE CONTEXT
__me_lab_end:
  }
}

void _FloatToSignedLongLong() {
  asm {
        PUSH       (R2, R3, R4, LR)

        LSL        R4, R0, #1                // PUT EXPONENT IN R4
        LSR        R4, R4, #24               //

        SUBS       R4, R4, #0x7F             // CHECK FOR UNDERFLOW
        ITTT       MI
        MOVMI      R0, #0                    // IF UNDERFLOW, RETURN ZERO
        MOVMI      R1, #0                    //
        BMI __me_lab_end

        RSBS       R4, R4, #0x3F             // CHECK FOR OVERFLOW
        BLS        __me_ovfl                      // IF OVERFLOW, RETURN INFINITY

        MOVS       R2, R0                    // SAVE THE SIGN
        LSL        R0, R0, #8                // PUT MANTISSA IN m0
        ORR        R0, R0, #0x80000000       // SET IMPLIED ONE IN MANTISSA

        MOVS       R1, #0                    //
        // COMPUTE THE INTEGER VALUE
        CMP        R4, #0x20                 // IF R4 GREATER OR EQUAL TO 32, PERFORM
        ITTT       CS
        MOVCS      R1, R0                    // RIGHT SHIFT IN TWO STEPS.
        MOVCS      R0, #0                    //    R0:R1 >>= 32
        SUBCS      R4, R4, #0x20             //    and
        LSR        R1, R1, R4                //    R0:R1 >>= R4 - 32
        ITTTT      CC
        RSBCC      R3, R4, #0x20             //
        LSLCC      R3, R0, R3                //
        ORRCC      R1, R1, R3                //
        LSRCC      R0, R0, R4                //

        CMP        R2, #0                    // IF THE INPUT IS NEGATIVE,
        BPL        return                    //

        MOVS       R3, #0
        RSBS       R1, R1, #0                //  THEN NEGATE THE RESULT
        SBC        R0, R3, R0                //

return:
        // IN LITTLE ENDIAN MODE THE OUTPUT LONG LONG VALUE SHOULD BE IN R1:R0.
        // SO SWAP THE REGISTER VALUES BEFORE RETURN.

        MOV        LR, R0                    //
        MOV        R0, R1                    //
        MOV        R1, LR                    //

        B __me_lab_end

__me_ovfl:   CMP        R0, #0                    // IF OVERFLOW, RETURN INFINITY
        MOV        R1, #0x80000000           // CHECK THE SIGN OF THE INPUT
        MOV        R0, #0                    //
        IT         MI
        BMI __me_lab_end
        SUBS       R0, R0, #0x1              // AND ADJUST INFINITY ACCORDINGLY
        SBC        R1, R1, #0                //
__me_lab_end:
        POP       (R2, R3, R4, LR)           //
  }
}

void _FloatToUnsignedLongLong() {
  asm {
        PUSH       (R2, R3, LR)
        MOVS       R1, #0                        // ALSO INITIALIZE R1 TO ZERO
        CMP        R0, #0                        // CHECK FOR A NEGATIVE VALUE
        IT        PL
        BPL       __me_jump
        BL        __FloatToSignedLongLong                // RETURN ZERO IF IT IS NEGATIVE
        B       __me_endLab

__me_jump:
        LSLS        R3, R0, #1                  // PUT EXPONENT IN R3
        LSRS        R3, R3, #24                 //

        SUBS        R3, R3, #0x7F               // CHECK FOR UNDERFLOW
        ITT         CC
        MOVCC       R0, #0                      // IF UNDERFLOW, RETURN ZERO
        BCC       __me_endLab

        RSBS        R3, R3, #0x3F               // CHECK FOR OVERFLOW
        BCC         __me_ovfl                        // IF OVERFLOW, RETURN 0xFFFFFFFF

        LSLS        R0, R0, #8                 // PUT MANTISSA IN R0
        ORR         R0, R0, #0x80000000        // SET IMPLIED ONE IN MANTISSA

        CMP        R3, #0x20                   // IF R3 GREATER OR EQUAL TO 32, PERFORM
        ITTT       CS
        MOVCS      R1, R0                      // RIGHT SHIFT IN TWO STEPS.
        MOVCS      R0, #0                      //    R0:R1 >>= 32
        SUBCS      R3, R3, #0x20               //    and
        LSR        R1, R1, R3                  //    R0:R1 >>= R3 - 32
        ITTTT      CC
        RSBCC      R2, R3, #0x20               //
        LSLCC      R2, R0, R2
        ORRCC      R1, R1, R2                  //
        LSRCC      R0, R0, R3                  //

        // IN LITTLE ENDIAN MODE THE OUTPUT LONG LONG VALUE SHOULD BE IN R1:R0.
        // SO SWAP THE REGISTER VALUES BEFORE RETURN.

        MOV        LR, R0                      //
        MOV        R0, R1                      //
        MOV        R1, LR                      //

        B       __me_endLab

__me_ovfl:   MOVS       R0, #0x0                    // IF OVERFLOW, RETURN
        SUBS       R0, R0, #0x1                // 0xFFFFFFFF:FFFFFFFF
        MOV        R1, R0                      //
__me_endLab:
       POP       (R2, R3, LR)
  }
}

void _SignedLongLongToLongDouble() {
  asm {
        PUSH    (R4, R5, LR)
        CMP     R1, #0                        // IF ZERO, RETURN ZERO
        ITT     EQ
        CMPEQ   R0, #0
        BEQ __me_lab_end

        MOVS    R4, #0x3F                     // SETUP THE EXPONENT
        CMP     R1, #0
        ITE     MI
        ORRMI   R4, R4, #0x00000C00           // AND ENCODE SIGN INTO IT
        ORRPL   R4, R4, #0x00000400

        BPL     __me_loop
        MOVS    R5, #0
        RSBS    R0, R0, #0                    // TAKE THE ABS VALUE OF INPUT
        SBC     R1, R5, R1

__me_loop:   SUBS    R4, R4, #0x1
        LSLS    R1, R1, #1                    // NORMALIZE THE MANTISSA
        ORR     R1, R1, R0, LSR #31           // ADJUSTING THE EXPONENT,
        LSL     R0, R0, #1                    // ACCORDINGLY
        BCC     __me_loop

        LSR     R0, R0, #12                   // SETUP __me_low HALF OF MANTISSA
        ORR     R0, R0, R1, LSL #20
        LSRS    R1, R1, #12                   // SETUP __me_high HALF OF MANTISSA
        ORR     R1, R1, R4, LSL #20           // SETUP THE EXPONENT AND SIGN
__me_lab_end:
        POP     (R4, R5, LR)
  }
}

void _UnsignedLongLongToLongDouble() {
  asm {
        CMP     R0, #0                          // IF ZERO, RETURN ZERO

        ITT     EQ
        CMPEQ   R1, #0
        BEQ __me_lab_end

        PUSH   (R2, LR)

        MOVS    R2, #0x3F                       // SETUP THE EXPONENT
        ADDS    R2, R2, #0x00000400

__me_loop:   SUBS    R2, R2, #0x1
        LSLS    R1, R1, #1                      // NORMALIZE THE MANTISSA
        ORR     R1, R1, R0, LSR #31             // ADJUSTING THE EXPONENT,
        LSL     R0, R0, #1                      // ACCORDINGLY
        BCC     __me_loop

        LSRS    R0, R0, #12                     // SETUP __me_low HALF OF MANTISSA
        ORR     R0, R0, R1, LSL #20
        LSRS    R1, R1, #12                     // SETUP __me_high HALF OF MANTISSA
        ORR.W   R1, R1, R2, LSL #20             // SETUP THE EXPONENT AND SIGN

        POP     (R2, LR)
__me_lab_end:
  }
}

void _LongDoubleToSignedLongLong() {
  asm {
        PUSH      (R2, R3, R4, LR)        // SAVE CONTEXT

        LSL        R4, R1, #1             // PUT EXPONENT IN R4
        LSR        R4, R4, #21            //

        SUBS       R4, R4, #0x300         // ADJUST FOR EXPONENT BIAS AND
        SUBS       R4, R4, #0xFF          // CHECK FOR UNDERFLOW
        ITTT       MI
        MOVMI      R1, #0                 // IF UNDERFLOW, RETURN ZERO
        MOVMI      R0, #0                 // IF UNDERFLOW, RETURN ZERO
        BMI __me_lab_end

        RSBS       R4, R4, #0x3F          // CHECK FOR OVERFLOW
        BLS        __me_ovfl                   // IF OVERFLOW, RETURN INFINITY

        MOVS       R2, R1                 //
        LSL        R1, R1, #11            // SHIFT THE EXPONENT (11 BITS)
        ORR        R1, R1, R0, LSR #21    // OUT OF THE MANTISSA R0:R1
        LSL        R0, R0, #11            //
        ORR        R1, R1, #0x80000000    // SET IMPLIED ONE IN HI MANTISSA

        // ADJUST THE VALUE IN R0:R1 FOR THE EXPONENT BY RIGHT SHIFTING
        // EXPONENT NUMBER OF BITS OUT OF R0:R1.
        SUBS       R3, R4, #0x20          // IF (EXP >= 32)
        ITTEE      CS
        LSRCS      R0, R1, R3             //    R1 = MNT.HI >> EXP - 32
        MOVCS      R1, #0                 //    R0 = 0

        RSBCC      R3, R4, #0x20          // IF (EXP < 32)
        LSRCC      R0, R0, R4             // R0:R1 = R0:R1 >> EXP
        ITTT       CC
        LSLCC      R3, R1, R3             //
        ORRCC      R0, R0, R3             //
        LSRCC      R1, R1, R4             //

        CMP        R2, #0                 // IF THE INPUT IS NEGATIVE,
        BPL        return                 //
        MOVS       R3, #0
        RSBS       R0, R0, #0             //  THEN NEGATE THE RESULT
        SBC        R1, R3, R1             //

return:
        B __me_lab_end

__me_ovfl:   CMP        R1, #0                 // IF OVERFLOW, RETURN INFINITY
        MOV        R1, #0x80000000        // CHECK THE SIGN OF THE INPUT
        MOV        R0, #0                 //
        IT         MI
        BMI __me_lab_end
        SUBS       R0, R0, #0x1           // AND ADJUST INFINITY ACCORDINGLY
        SBC        R1, R1, #0             //
__me_lab_end:
        POP       (R2, R3, R4, LR)        //
  }
}


void _LongDoubleToUnsignedLongLong() {
  asm {

        PUSH       (R2, R3, LR)

        CMP        R1, #0                        // CHECK FOR A NEGATIVE VALUE

        IT       PL
        BPL      __me_jump
        BL       __LongDoubleToSignedLongLong
        B        __me_endLab

__me_jump:
        LSL        R3, R1, #1                    // PUT EXPONENT IN R3
        LSRS       R3, R3, #21

        SUB        R3, R3, #0x300                // ADJUST FOR EXPONENT BIAS AND
        SUBS       R3, R3, #0xFF                        // CHECK FOR UNDERFLOW
        ITTT       MI
        MOVMI      R1, #0                        // IF UNDERFLOW, RETURN ZERO
        MOVMI      R0, #0                        //
        BMI        __me_endLab

        RSBS       R3, R3, #0x3F                 // CHECK FOR OVERFLOW. IF OVRFLW,
        BCC        __me_ovfl                          // RETURN 0xFFFFFFFF:FFFFFFFF

        LSL        R1, R1, #11                   // SHIFT THE EXPONENT (11 BITS)
        ORR        R1, R1, R0, LSR #21           // OUT OF THE MANTISSA R0:R1
        LSL        R0, R0, #11                   //
        ORRS       R1, R1, #0x80000000           // SET IMPLIED ONE IN HI MANTISSA

        // ADJUST THE VALUE IN R0:R1 FOR THE EXPONENT BY RIGHT SHIFTING
        // EXPONENT NUMBER OF BITS OUT OF R0:R1.
        SUBS       R2, R3, #0x20                 // IF (EXP >= 32)
        ITTEE      CS
        LSRCS      R0, R1, R2                    //    R1 = MNT.HI >> EXP - 32
        MOVCS      R1, #0                        //    R0 = 0

        RSBCC      R2, R3, #0x20                 // IF (EXP < 32)
        LSRCC      R0, R0, R3                    // R0:R1 = R0:R1 >> EXP

        ITTT       CC
        LSLCC      R2, R1,  R2                   //
        ORRCC      R0, R0, R2                    //
        LSRCC      R1, R1, R3                    //

        B        __me_endLab

__me_ovfl:   MOVS       R0, #0x0                      // IF OVERFLOW, RETURN 0XFFFFFFFF
        SUBS       R0, R0, #0x1
        MOV        R1, R0
__me_endLab:
        POP       (R2, R3, LR)
  }
}
