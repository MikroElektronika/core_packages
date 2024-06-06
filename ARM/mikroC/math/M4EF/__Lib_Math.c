#define     l1_hi   R1
#define     l1_lo   R0
#define     l2_hi   R3
#define     l2_lo   R2

#define     dvnd_hi     R1
#define     dvnd_lo     R0
#define     idvs_hi     R3
#define     idvs_lo     R2

#define     rq_hi       R3
#define     rq_lo       R2
#define     rr_hi       R1
#define     rr_lo       R0

#define     q_hi        LR
#define     q_lo        R9
#define     dvsr_hi     R4
#define     dvsr_lo     R5
#define     tmp_hi      R6
#define     tmp_lo      R7
#define     sign        R8


void _Div_64x64_S ( void ) {
  asm{
        PUSH      (R4-R9, LR)

        CMP       idvs_hi, #0                       // CHECK IF DVSR IS 0
        IT        EQ
        CMPEQ     idvs_lo, #0

        BNE       __me_not_zero_

        MOVS      tmp_hi, #0
        RSBS      tmp_lo, dvnd_lo, #0               // EABI, IF DVSR IS 0

        SBCS      tmp_lo, tmp_hi, dvnd_hi           // CHECK DVND

        // EABI, QUOTIENT AND REMAINDER ARE SWAPPED.
        // Q [rr_hi:rr_lo], R [rq_hi:rq_lo]
        ITT       LT
        MVNLT     rr_lo, #0                         // Q=LLONG MAX IF DVND > 0
        MVNLT     rr_hi, #0x80000000

        ITT       GT
        MOVGT     rr_lo, #0                         // Q=LLONG_MIN IF DVND < 0
        MOVGT     rr_hi, #0x80000000

        // Q==0 IF DVND==0 (BOTH USE THE SAME REGISTERS)
        // R==0 IF DVSR==0 (BOTH USE THE SAME REGISTERS)

        B __me_lab_end

    __me_not_zero_:
        // STORE THE SIGN OF REMAINDER WHICH IS THE SIGN OF THE DIVIDEND IN
        // BIT 31 OF SIGN. AND STORE THE SIGN OF THE QUOTIENT WHICH IS SIGN
        // OF DIVISOR XORED WITH SIGN OF DIVIDEND IN BIT 30 OF SIGN.
        LSRS      sign, idvs_hi, #1
        EORS      sign, sign, dvnd_hi, ASR #1
        BPL       __me_label_pos_dvnd
        MOVS      tmp_hi, #0
        RSBS      dvnd_lo, dvnd_lo, #0              // DVND = ABS(DVND)
        SBC       dvnd_hi, tmp_hi, dvnd_hi
    __me_label_pos_dvnd:
        MOVS      q_lo, #0                          // INITIALIZE THE QUOTIENT
        ANDS      q_hi, idvs_hi, #0x80000000
        BEQ       __me_label_pos_dvsr
        MOVS      tmp_hi, #0
        RSBS      idvs_lo, idvs_lo, #0              // DVSR = ABS(DVSR)
        SBC       idvs_hi, tmp_hi, idvs_hi
    __me_label_pos_dvsr:
        CPY       dvsr_hi, idvs_hi                  // MAKE A COPY OF THE
        CPY       dvsr_lo, idvs_lo                  // DIVISOR (R2:R3) INTO DVSR

        // CALCULATE THE MAXIMUM DIVISOR SHIFT AMOUNT WITH PSEUDO BINARY SEARCH
        // IF DVND >> 32 > DVSR THEN DVSR = DVSR << 32
        CMP       dvsr_hi, #0                       // IF (DVSR_HI == 0 AND
        IT        EQ
        CMPEQ     dvsr_lo, dvnd_hi                  //    DVSRLO < DVND_HI)

        ITT       LS
        MOVLS     dvsr_hi, dvsr_lo                  //    DVSR_HI = DVSRLO
        MOVLS     dvsr_lo, #0                       //    DVSR_LO = 0

        // IF DVND >> 16 > DVSR THEN DVSR = DVSR << 16
        LSRS      tmp_lo, dvnd_lo, #16              // SHIFT DVND BY 16 INTO
        ORR       tmp_lo, tmp_lo, dvnd_hi, LSL #16  // TMP
        LSRS      tmp_hi, dvnd_hi, #16
        CMP       dvsr_hi, tmp_hi                   // COMPARE DVSR WITH TMP

        IT        EQ
        CMPEQ     dvsr_lo, tmp_lo

        ITTT      LS
        LSLLS     dvsr_hi, dvsr_hi, #16             // SET DVSR = DVSR << 16
        ORRLS     dvsr_hi, dvsr_hi, dvsr_lo, LSR #16
        LSLLS     dvsr_lo, dvsr_lo, #16

        // IF DVND >> 16 > DVSR THEN DVSR = DVSR << 16
        LSRS      tmp_lo, dvnd_lo, #8               // SHIFT DVND BY 16 INTO
        ORR       tmp_lo, tmp_lo, dvnd_hi, LSL #24  // TMP
        LSRS      tmp_hi, dvnd_hi, #8
        CMP       dvsr_hi, tmp_hi                   // COMPARE DVSR WITH TMP

        IT        EQ
        CMPEQ     dvsr_lo, tmp_lo


        ITTT      LS
        LSLLS     dvsr_hi, dvsr_hi, #8              // SET DVSR = DVSR << 8
        ORRLS     dvsr_hi, dvsr_hi, dvsr_lo, LSR #24
        LSLLS     dvsr_lo, dvsr_lo, #8

        // NOW FIND EXACTLY WHERE THE SHIFTED DIVISOR SHOULD BE SO THAT WE CAN
        // JUMP INTO THE CORRECT LOCATION OF THE UNROLLED DIVIDE LOOP.
        LSRS      tmp_lo, dvnd_lo, #1
        ORR       tmp_lo, tmp_lo, dvnd_hi, LSL #31
        LSRS      tmp_hi, dvnd_hi, #1
        CMP       dvsr_hi, tmp_hi

        IT        EQ
        CMPEQ     dvsr_lo, tmp_lo
        BHI.W     __me_mod1

        LSRS      tmp_lo, dvnd_lo, #2
        ORR.W     tmp_lo, tmp_lo, dvnd_hi, LSL #30
        LSRS      tmp_hi, dvnd_hi, #2
        CMP       dvsr_hi, tmp_hi

        IT        EQ
        CMPEQ     dvsr_lo, tmp_lo
        BHI.W     __me_mod2                         // BRANCHING INTO DIVIDE LOOP

        LSRS      tmp_lo, dvnd_lo, #3
        ORR       tmp_lo, tmp_lo, dvnd_hi, LSL #29
        LSRS      tmp_hi, dvnd_hi, #3
        CMP       dvsr_hi, tmp_hi

        IT        EQ
        CMPEQ     dvsr_lo, tmp_lo
        BHI       __me_mod3

        LSRS      tmp_lo, dvnd_lo, #4
        ORR       tmp_lo, tmp_lo, dvnd_hi, LSL #28
        LSRS      tmp_hi, dvnd_hi, #4
        CMP       dvsr_hi, tmp_hi

        IT        EQ
        CMPEQ     dvsr_lo, tmp_lo
        BHI       __me_mod4

        LSRS      tmp_lo, dvnd_lo, #5
        ORR       tmp_lo, tmp_lo, dvnd_hi, LSL #27
        LSRS      tmp_hi, dvnd_hi, #5
        CMP       dvsr_hi, tmp_hi

        IT        EQ
        CMPEQ     dvsr_lo, tmp_lo
        BHI       __me_mod5

        LSRS      tmp_lo, dvnd_lo, #6
        ORR       tmp_lo, tmp_lo, dvnd_hi, LSL #26
        LSRS      tmp_hi, dvnd_hi, #6
        CMP       dvsr_hi, tmp_hi
        IT        EQ
        CMPEQ     dvsr_lo, tmp_lo
        BHI       __me_mod6

        LSRS      tmp_lo, dvnd_lo, #7
        ORR       tmp_lo, tmp_lo, dvnd_hi, LSL #25
        LSRS      tmp_hi, dvnd_hi, #7
        CMP       dvsr_hi, tmp_hi
        IT        EQ
        CMPEQ     dvsr_lo, tmp_lo
        BHI       __me_mod7

        // THE DIVIDE LOOP IS UNROLLED 8 TIMES.
        // IF DIVIDEND IS LARGER THAN DIVISOR, SHIFT A 1 INTO THE QUOTIENT
        // AND SUBTRACT THE DIVISOR, ELSE SHIFT A 0 INTO THE QUOTIENT.
    __me_divll:
        LSLS      tmp_hi, dvsr_hi, #7               // LEFT SHIFT DVSR BY 7
        ORR       tmp_hi, tmp_hi, dvsr_lo, LSR #25  // INTO TMP
        LSLS      tmp_lo, dvsr_lo, #7
        CMP       dvnd_hi, tmp_hi                   // IF (DVND >= TMP)
        IT        EQ
        CMPEQ     dvnd_lo, tmp_lo
        BCC       __me_label_1
        SUBS      dvnd_lo, dvnd_lo, tmp_lo          //    DVND = DVND - TMP
        SBCS      dvnd_hi, dvnd_hi, tmp_hi
    __me_label_1:
        ADCS      q_lo, q_lo, q_lo                  // SHIFT THE CARRY BIT DEFED
        ADC       q_hi, q_hi, q_hi                  // BY CMP OR SBCS INTO THE
                                                    // QUOTIENT

    __me_mod7:
        LSLS      tmp_hi, dvsr_hi, #6               // UNROLLED LOOP
        ORR       tmp_hi, tmp_hi, dvsr_lo, LSR #26
        LSLS      tmp_lo, dvsr_lo, #6
        CMP       dvnd_hi, tmp_hi
        IT        EQ
        CMPEQ     dvnd_lo, tmp_lo

        BCC       __me_label_2
        SUBS      dvnd_lo, dvnd_lo, tmp_lo
        SBCS      dvnd_hi, dvnd_hi, tmp_hi
    __me_label_2:
        ADCS      q_lo, q_lo, q_lo
        ADC       q_hi, q_hi, q_hi

    __me_mod6:
        LSLS      tmp_hi, dvsr_hi, #5
        ORR       tmp_hi, tmp_hi, dvsr_lo, LSR #27
        LSLS      tmp_lo, dvsr_lo, #5
        CMP       dvnd_hi, tmp_hi
        IT        EQ
        CMPEQ     dvnd_lo, tmp_lo

        BCC       __me_label_3
        SUBS      dvnd_lo, dvnd_lo, tmp_lo
        SBCS      dvnd_hi, dvnd_hi, tmp_hi
    __me_label_3:
        ADCS      q_lo, q_lo, q_lo
        ADC       q_hi, q_hi, q_hi

    __me_mod5:
        LSLS      tmp_hi, dvsr_hi, #4
        ORR       tmp_hi, tmp_hi, dvsr_lo, LSR #28
        LSLS      tmp_lo, dvsr_lo, #4
        CMP       dvnd_hi, tmp_hi
        IT        EQ
        CMPEQ     dvnd_lo, tmp_lo

        BCC       __me_label_4
        SUBS      dvnd_lo, dvnd_lo, tmp_lo
        SBCS      dvnd_hi, dvnd_hi, tmp_hi
    __me_label_4:
        ADCS      q_lo, q_lo, q_lo
        ADC       q_hi, q_hi, q_hi

    __me_mod4:
        LSLS      tmp_hi, dvsr_hi, #3
        ORR       tmp_hi, tmp_hi, dvsr_lo, LSR #29
        LSLS      tmp_lo, dvsr_lo, #3
        CMP       dvnd_hi, tmp_hi
        IT        EQ
        CMPEQ     dvnd_lo, tmp_lo

        BCC       __me_label_5
        SUBS      dvnd_lo, dvnd_lo, tmp_lo
        SBCS      dvnd_hi, dvnd_hi, tmp_hi
    __me_label_5:
        ADCS      q_lo, q_lo, q_lo
        ADC       q_hi, q_hi, q_hi

    __me_mod3:
        LSLS      tmp_hi, dvsr_hi, #2
        ORR       tmp_hi, tmp_hi, dvsr_lo, LSR #30
        LSLS      tmp_lo, dvsr_lo, #2
        CMP       dvnd_hi, tmp_hi
        IT        EQ
        CMPEQ     dvnd_lo, tmp_lo

        BCC       __me_label_6
        SUBS      dvnd_lo, dvnd_lo, tmp_lo
        SBCS      dvnd_hi, dvnd_hi, tmp_hi
    __me_label_6:
        ADCS      q_lo, q_lo, q_lo
        ADC       q_hi, q_hi, q_hi

    __me_mod2:
        LSLS      tmp_hi, dvsr_hi, #1
        ORR       tmp_hi, tmp_hi, dvsr_lo, LSR #31
        LSLS      tmp_lo, dvsr_lo, #1
        CMP       dvnd_hi, tmp_hi
        IT        EQ
        CMPEQ     dvnd_lo, tmp_lo

        BCC       __me_label_7
        SUBS      dvnd_lo, dvnd_lo, tmp_lo
        SBCS      dvnd_hi, dvnd_hi, tmp_hi
    __me_label_7:
        ADCS      q_lo, q_lo, q_lo
        ADC       q_hi, q_hi, q_hi

    __me_mod1:
        CMP       dvnd_hi, dvsr_hi
        IT        EQ
        CMPEQ     dvnd_lo, dvsr_lo

        BCC       __me_label_8
        SUBS      dvnd_lo, dvnd_lo, dvsr_lo
        SBCS      dvnd_hi, dvnd_hi, dvsr_hi
    __me_label_8:
        ADCS      q_lo, q_lo, q_lo
        ADC       q_hi, q_hi, q_hi

        // IF THERE IS SHIFTED DIVISOR, THEN UNSHIFT THE DIVISOR BY 8 AND
        // CONTINUE THE LOOP
        CMP       idvs_hi, dvsr_hi
        IT        EQ
        CMPEQ     idvs_lo, dvsr_lo

        ITTT      CC
        LSRCC     dvsr_lo, dvsr_lo, #8
        ORRCC     dvsr_lo, dvsr_lo, dvsr_hi, LSL #24
        LSRCC     dvsr_hi, dvsr_hi, #8
        BCC       __me_divll

        // ELSE WE ARE DONE.
        // PLACE THE QUOTIENT INTO rq_hi:rq_lo AND SET THE SIGN.
        // rr_hi:rr_lo ALREADY CONTAINS THE REMAINDER// SET THE CORRECT SIGN.
        CPY       rq_hi, q_hi
        CPY       rq_lo, q_lo
        MOVS      sign, sign
        BPL       __me_label_chk_q_sign

        MOVS            tmp_hi, #0
        RSBS      rr_lo, rr_lo, #0
        SBC       rr_hi, tmp_hi, rr_hi
    __me_label_chk_q_sign:
        LSLS      sign, sign, #1
        BPL       __me_label_return
        MOVS          tmp_hi, #0
        RSBS      rq_lo, rq_lo, #0
        SBC       rq_hi, tmp_hi, rq_hi
    __me_label_return:
        CPY       tmp_hi, rq_hi                     // EABI REQUIRES Q IN R0, R1
        CPY       tmp_lo, rq_lo                     // R IN R2, R3
        CPY       rq_hi, rr_hi                      // DO A SWAP
        CPY       rq_lo, rr_lo
        CPY       rr_hi, tmp_hi
        CPY       rr_lo, tmp_lo

    __me_lab_end:
        POP       (R4-R9, LR)
  }
}



void _Div_64x64_U ( void ) {
    asm {
        PUSH      (R4-R8, LR)
        CPY       dvsr_hi, idvs_hi                  // MAKE A COPY OF INPUT
        CPY       dvsr_lo, idvs_lo                  // DIVISOR (R2:R3) INTO DVSR

        CMP       dvsr_hi, dvnd_hi                  // IF DVND < DVSR,
        IT        EQ
        CMPEQ     dvsr_lo, dvnd_lo                  // RETURN Q=0, R=DVND
        ITTT      HI
        MOVHI     rq_hi, #0
        MOVHI     rq_lo, #0

        BHI       __me_label_return                 // SWAP VALUES FOR EABI

        CMP       dvsr_hi, #0                       // IF DVSR IS 0,
        IT        EQ
        CMPEQ     dvsr_lo, #0                       // RETURN Q=0, R=0

        BNE      __me_not_zero_

        CMP      dvnd_hi, #0                        // EABI DVSR IS 0, RETURN
        ITEE     EQ
        CMPEQ    dvnd_lo, #0
        // EABI, QUOTIENT AND REMAINDER ARE SWAPPED.
        // Q [rr_hi:rr_lo], R [rq_hi:rq_lo]
        MVNNE    rr_lo, #0                          // Q=ULLONG_MAX IF DVND > 0
        MVNNE    rr_hi, #0

        // Q==0 IF DVND==0 (BOTH USE THE SAME REGISTERS)
        // R==0 IF DVSR==0 (BOTH USE THE SAME REGISTERS)
        B __me_lab_end

    __me_not_zero_:
        MOVS      q_lo, #0                          // INITIALIZE THE QUOTIENT
        MOVS      q_hi, #0                          // TO ZERO

        // CALCULATE THE MAXIMUM DIVISOR SHIFT AMOUNT WITH PSEUDO BINARY SEARCH
        // IF DVND >> 32 > DVSR THEN DVSR = DVSR << 32
        CMP       dvsr_hi, #0                       // IF (DVSR_HI == 0 AND
        IT        EQ
        CMPEQ     dvsr_lo, dvnd_hi                  // DVSRLO < DVND_HI)
        ITT       LS
        MOVLS     dvsr_hi, dvsr_lo                  // DVSR_HI = DVSRLO
        MOVLS     dvsr_lo, #0                       // DVSR_LO = 0

        // IF DVND >> 16 > DVSR THEN DVSR = DVSR << 16
        LSRS      tmp_lo, dvnd_lo, #16              // SHIFT DVND BY 16 INTO
        ORR       tmp_lo, tmp_lo, dvnd_hi, LSL #16  // TMP
        LSRS      tmp_hi, dvnd_hi, #16
        CMP       dvsr_hi, tmp_hi                   // COMPARE DVSR WITH TMP
        IT        EQ
        CMPEQ     dvsr_lo, tmp_lo

        ITTT      LS
        LSLSLS    dvsr_hi, dvsr_hi, #16             // SET DVSR = DVSR << 16
        ORRLS     dvsr_hi, dvsr_hi, dvsr_lo, LSR #16
        LSLSLS    dvsr_lo, dvsr_lo, #16

        // IF DVND >> 16 > DVSR THEN DVSR = DVSR << 16
        LSRS      tmp_lo, dvnd_lo, #8               // SHIFT DVND BY 16 INTO
        ORR       tmp_lo, tmp_lo, dvnd_hi, LSL #24  // TMP
        LSRS      tmp_hi, dvnd_hi, #8
        CMP       dvsr_hi, tmp_hi                   // COMPARE DVSR WITH TMP
        IT        EQ
        CMPEQ     dvsr_lo, tmp_lo

        ITTT      LS
        LSLSLS    dvsr_hi, dvsr_hi, #8              // SET DVSR = DVSR << 8
        ORRLS     dvsr_hi, dvsr_hi, dvsr_lo, LSR #24
        LSLSLS    dvsr_lo, dvsr_lo, #8

        // NOW FIND EXACTLY WHERE THE SHIFTED DIVISOR SHOULD BE SO THAT WE CAN
        // JUMP INTO THE CORRECT LOCATION OF THE UNROLLED DIVIDE LOOP.
        LSRS      tmp_lo, dvnd_lo, #1
        ORR       tmp_lo, tmp_lo, dvnd_hi, LSL #31
        LSRS      tmp_hi, dvnd_hi, #1
        CMP       dvsr_hi, tmp_hi
        IT        EQ
        CMPEQ     dvsr_lo, tmp_lo
        BHI.W     __me_mod1

        LSRS      tmp_lo, dvnd_lo, #2
        ORR       tmp_lo, tmp_lo, dvnd_hi, LSL #30
        LSRS      tmp_hi, dvnd_hi, #2
        CMP       dvsr_hi, tmp_hi
        IT        EQ
        CMPEQ     dvsr_lo, tmp_lo
        BHI.W     __me_mod2                         // BRANCHING INTO DIVIDE LOOP

        LSRS      tmp_lo, dvnd_lo, #3
        ORR       tmp_lo, tmp_lo, dvnd_hi, LSL #29
        LSRS      tmp_hi, dvnd_hi, #3
        CMP       dvsr_hi, tmp_hi
        IT        EQ
        CMPEQ     dvsr_lo, tmp_lo
        BHI       __me_mod3

        LSRS      tmp_lo, dvnd_lo, #4
        ORR       tmp_lo, tmp_lo, dvnd_hi, LSL #28
        LSRS      tmp_hi, dvnd_hi, #4
        CMP       dvsr_hi, tmp_hi
        IT        EQ
        CMPEQ     dvsr_lo, tmp_lo
        BHI       __me_mod4

        LSRS      tmp_lo, dvnd_lo, #5
        ORR       tmp_lo, tmp_lo, dvnd_hi, LSL #27
        LSRS      tmp_hi, dvnd_hi, #5
        CMP       dvsr_hi, tmp_hi
        IT        EQ
        CMPEQ     dvsr_lo, tmp_lo
        BHI       __me_mod5

        LSRS      tmp_lo, dvnd_lo, #6
        ORR       tmp_lo, tmp_lo, dvnd_hi, LSL #26
        LSRS      tmp_hi, dvnd_hi, #6
        CMP       dvsr_hi, tmp_hi
        IT        EQ
        CMPEQ     dvsr_lo, tmp_lo
        BHI       __me_mod6

        LSRS      tmp_lo, dvnd_lo, #7
        ORR       tmp_lo, tmp_lo, dvnd_hi, LSL #25
        LSRS      tmp_hi, dvnd_hi, #7
        CMP       dvsr_hi, tmp_hi
        IT        EQ
        CMPEQ     dvsr_lo, tmp_lo
        BHI       __me_mod7

        // THE DIVIDE LOOP IS UNROLLED 8 TIMES.
        // IF DIVIDEND IS LARGER THAN DIVISOR, SHIFT A 1 INTO THE QUOTIENT
        // AND SUBTRACT THE DIVISOR, ELSE SHIFT A 0 INTO THE QUOTIENT.
    __me_divll:
        LSLS      tmp_hi, dvsr_hi, #7               // LEFT SHIFT DVSR BY 7
        ORR       tmp_hi, tmp_hi, dvsr_lo, LSR #25  // INTO TMP
        LSLS      tmp_lo, dvsr_lo, #7
        CMP       dvnd_hi, tmp_hi                   // IF (DVND >= TMP)
        IT        EQ
        CMPEQ     dvnd_lo, tmp_lo
        BCC       __me_label_1
        SUBS      dvnd_lo, dvnd_lo, tmp_lo          // DVND = DVND - TMP
        SBCS      dvnd_hi, dvnd_hi, tmp_hi
    __me_label_1:
        ADCS      q_lo, q_lo, q_lo                  // SHIFT THE CARRY BIT DEFED
        ADCS      q_hi, q_hi, q_hi                  // BY CMP OR SBCS INTO THE
                                                    // QUOTIENT

    __me_mod7:
        LSLS      tmp_hi, dvsr_hi, #6               // UNROLLED LOOP
        ORR       tmp_hi, tmp_hi, dvsr_lo, LSR #26
        LSL       tmp_lo, dvsr_lo, #6
        CMP       dvnd_hi, tmp_hi
        IT        EQ
        CMPEQ     dvnd_lo, tmp_lo

        BCC       __me_label_2
        SUBS      dvnd_lo, dvnd_lo, tmp_lo
        SBCS      dvnd_hi, dvnd_hi, tmp_hi
    __me_label_2:
        ADCS      q_lo, q_lo, q_lo
        ADC       q_hi, q_hi, q_hi

    __me_mod6:
        LSLS      tmp_hi, dvsr_hi, #5
        ORR       tmp_hi, tmp_hi, dvsr_lo, LSR #27
        LSLS      tmp_lo, dvsr_lo, #5
        CMP       dvnd_hi, tmp_hi
        IT        EQ
        CMPEQ     dvnd_lo, tmp_lo

        BCC       __me_label_3
        SUBS      dvnd_lo, dvnd_lo, tmp_lo
        SBCS      dvnd_hi, dvnd_hi, tmp_hi
    __me_label_3:
        ADCS      q_lo, q_lo, q_lo
        ADC       q_hi, q_hi, q_hi

    __me_mod5:
        LSLS      tmp_hi, dvsr_hi, #4
        ORR       tmp_hi, tmp_hi, dvsr_lo, LSR #28
        LSLS      tmp_lo, dvsr_lo, #4
        CMP       dvnd_hi, tmp_hi
        IT        EQ
        CMPEQ     dvnd_lo, tmp_lo

        BCC       __me_label_4
        SUBS      dvnd_lo, dvnd_lo, tmp_lo
        SBCS      dvnd_hi, dvnd_hi, tmp_hi
    __me_label_4:
        ADCS      q_lo, q_lo, q_lo
        ADCS      q_hi, q_hi, q_hi

    __me_mod4:
        LSLS      tmp_hi, dvsr_hi, #3
        ORR       tmp_hi, tmp_hi, dvsr_lo, LSR #29
        LSLS      tmp_lo, dvsr_lo, #3
        CMP       dvnd_hi, tmp_hi
        IT        EQ
        CMPEQ     dvnd_lo, tmp_lo

        BCC       __me_label_5
        SUBS      dvnd_lo, dvnd_lo, tmp_lo
        SBCS      dvnd_hi, dvnd_hi, tmp_hi
    __me_label_5:
        ADCS      q_lo, q_lo, q_lo
        ADC       q_hi, q_hi, q_hi

    __me_mod3:
        LSLS      tmp_hi, dvsr_hi, #2
        ORR       tmp_hi, tmp_hi, dvsr_lo, LSR #30
        LSLS      tmp_lo, dvsr_lo, #2
        CMP       dvnd_hi, tmp_hi
        IT        EQ
        CMPEQ     dvnd_lo, tmp_lo

        BCC       __me_label_6
        SUBS      dvnd_lo, dvnd_lo, tmp_lo
        SBCS      dvnd_hi, dvnd_hi, tmp_hi
    __me_label_6:
        ADCS      q_lo, q_lo, q_lo
        ADC       q_hi, q_hi, q_hi

    __me_mod2:
        LSLS      tmp_hi, dvsr_hi, #1
        ORR       tmp_hi, tmp_hi, dvsr_lo, LSR #31
        LSLS      tmp_lo, dvsr_lo, #1
        CMP       dvnd_hi, tmp_hi
        IT        EQ
        CMPEQ     dvnd_lo, tmp_lo

        BCC       __me_label_7
        SUBS      dvnd_lo, dvnd_lo, tmp_lo
        SBCS      dvnd_hi, dvnd_hi, tmp_hi
    __me_label_7:
        ADCS      q_lo, q_lo, q_lo
        ADCS      q_hi, q_hi, q_hi

    __me_mod1:
        CMP       dvnd_hi, dvsr_hi
        IT        EQ
        CMPEQ     dvnd_lo, dvsr_lo

        BCC       __me_label_8
        SUBS      dvnd_lo, dvnd_lo, dvsr_lo
        SBCS      dvnd_hi, dvnd_hi, dvsr_hi
    __me_label_8:
        ADCS      q_lo, q_lo, q_lo
        ADCS      q_hi, q_hi, q_hi

        // IF THERE IS SHIFTED DIVISOR, THEN UNSHIFT THE DIVISOR BY 8 AND
        // CONTINUE THE LOOP
        CMP       idvs_hi, dvsr_hi
        IT        EQ
        CMPEQ     idvs_lo, dvsr_lo
        ITTT      CC
        LSRCC     dvsr_lo, dvsr_lo, #8
        ORRCC     dvsr_lo, dvsr_lo, dvsr_hi, LSL #24
        LSRCC     dvsr_hi, dvsr_hi, #8
        BCC       __me_divll

        // ELSE WE ARE DONE. PLACE THE QUOTIENT INTO rq_hi:rq_lo.
        // rr_hi:rr_lo ALREADY CONTAINS THE REMAINDER.
        CPY       rq_hi, q_hi
        CPY       rq_lo, q_lo

    __me_label_return:
        CPY       tmp_hi, rq_hi                     // EABI REQUIRES Q IN R0, R1
        CPY       tmp_lo, rq_lo                     // R IN R2, R3
        CPY       rq_hi, rr_hi                      // DO A SWAP
        CPY       rq_lo, rr_lo
        CPY       rr_hi, tmp_hi
        CPY       rr_lo, tmp_lo

    __me_lab_end:
        POP       (R4-R8, LR)
    }
}
