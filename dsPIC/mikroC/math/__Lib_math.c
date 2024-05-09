/*******************************************************************************
 * Project name:
     dspic_math.c (rutine za cele brojeve za dsPIC)
 * Copyright:
     (c) mikroElektronika, 2006
 * Revision History:
     20060321 -
       initial release
 * Status:
     <XX% completed.>
 * Description:
     <project_description>
 * Test configuration:
     MCU:             x
     Dev.Board:       x
     Oscillator:      x
     Ext. Modules:    x
     SW:              x
 * NOTES:
     <all that matters>
 ******************************************************************************/


/*
 * Function Name:
     Multiply_32x32
 * Description:
     Mnozenje oznacenih i neoznacenih long-ova, na nivou long-a (4 byte-a)
 * Arguments:
     cinilac_1 -> [W1:W0]
     cinilac_2 -> [W3:W2]
 * Returns:
     rezultat -> [W1:W0]
 * Version History:
     - 20060321 - initial release (Vlada)
 * TODO:
     - Test
 * NOTES:
     - Korisceni registri: W0..W5;
     - Rile je ovo izveo sa 3x mul.uu; kod iz MPLAB-a radi 1x mul.uu, potom
       2x mul.ss; Riletov kod je ispravan, MPLAB-ov nije.
 */
void _Multiply_32x32(void) {
  //--- [w1:w0]*[w3:w2] -> [w1:w0]
  asm  {
    MUL.UU   W1, W2, W4
    MOV      W0, W5
    MUL.UU   W0, W2, W0
    ADD      W4, W1, W1
    MUL.UU   W5, W3, W4
    ADD      W4, W1, W1
  }
  //--- result := w1:w0;
}

/*
 * Function Name:
     Divide_32x32
 * Description:
     Deljenje long-ova, oznacenih i neoznacenih, na nivou long-a (4 byte-a).
 * Arguments:
     deljenik -> [W1:W0]
     delilac  -> [W3:W2]
     kolicnik -> [W1:W0]
     flag unsigned/signed (0/!0) -> [W4]
 * Returns:
     rezultat oznacenog/neoznacenog deljenja, na nivou long-a (4 byte-a).
 * Version History:
     20060321 -
       initial release (Vlada)
 * TODO:
     - PROVERITI RASPORED ARGUMENATA U REGISTRIMA!!
 * NOTES:
     - korisceni registri: W0..W6
     - f-ja se sama grana za signed i unsigned slucajeve.
     - preuzeto od Rileta.
 */
void _Divide_32x32(void) {


  asm  RCALL Divide_32x32___testsus

  asm GOTO the_end_Divide_32x32;
  

  asm {

    Divide_32x32___testsus:
                 CP0.W     W4
                 BRA NZ    , Divide_32x32___divsi3
   ; racunanje za unsigned
                 RCALL    Divide_32x32___udivsi3
                 RETURN
   ; racunanje za signed
    Divide_32x32___divsi3:
                 XOR.W    W1, W3, [W15++]
                 CP0.W    W1
                 BRA GE   , Divide_32x32_divtestb
                 SUBR.W   W0, #0, W0
                 SUBBR.W  W1, #0, W1
    Divide_32x32_divtestb:
                 CP0.W    W3
                 BRA GE   , Divide_32x32_calcquot
                 SUBR.W   W2, #0, W2
                 SUBBR.W  W3, #0, W3
    Divide_32x32_calcquot:
                 RCALL    Divide_32x32___udivsi3
                 CP0.W    [--W15]
                 BRA NN   , Divide_32x32_returnq
                 SUBR.W   W0, #0, W0
                 SUBBR.W  W1, #0, W1
    Divide_32x32_returnq:
                 RETURN
    Divide_32x32___udivsi3:
                 MUL.UU   W4, #0, W4
                 MOV      #0x20, W6
    Divide_32x32_nextbit:
                 SL.W     W0, W0
                 RLC.W    W1, W1
                 RLC.W    W4, W4
                 RLC.W    W5, W5
                 BSET     W0, #0
                 SUB.W    W4, W2, W4
                 SUBB.W   W5, W3, W5
                 BRA NN   , Divide_32x32_iterate
                 ADD.W    W4, W2, W4
                 ADDc.W   W5, W3, W5
                 BCLR     W0, #0
    Divide_32x32_iterate:
                 DEC.W    W6, W6
                 BRA NZ   , Divide_32x32_nextbit
                 RETURN
  }

 asm the_end_Divide_32x32:
   ;

}

/*
 * Function Name:
     Modulus_32x32
 * Description:
     Racuna moduo celobrojnog deljenja na nivou long-a
 * Arguments:
     deljenik          -> [W1:W0]
     delilac           -> [W3:W2]
     ostatak po modulu -> [W1:W0]
     flag unsigned/signed (0/!0) -> [W4]
 * Returns:
     moduo celobrojnog deljenja na nivou long-a.
 * Version History:
     20060321:
       Initial release.
 * TODO:
     - PROVERITI RASPORED ARGUMENATA U REGISTRIMA!!
 * NOTES:
     - korisceni registri: W0..W6; i nesto malo stack-a
     - f-ja se sama grana za signed i unsigned slucajeve.
     - preuzeto od Rileta.
 */
void _Modulus_32x32(void) {

  asm RCALL Modulus_32x32___testsus;

  asm GOTO the_end_Modulus_32x32;



  asm {
    Modulus_32x32___testsus:
                 CP0.W     W4
                 BRA NZ    , Modulus_32x32___modsi3
    ; racunanje za unsigned
                 RCALL     Modulus_32x32___umodsi3
                 RETURN
    ; racunanje za signed
    Modulus_32x32___modsi3:
                 MOV.W     W1, [W15++]
                 CP0.W     W1
                 BRA GE    , Modulus_32x32_modtestb
                 SUBR.W    W0, #0, W0
                 SUBBR.W   W1, #0, W1
    Modulus_32x32_modtestb:
                 CP0.W     W3
                 BRA ge    , Modulus_32x32_calcrem
                 SUBR.W    W2, #0, W2
                 SUBBR.W   W3, #0, W3
    Modulus_32x32_calcrem:
                 RCALL     Modulus_32x32___umodsi3
                 CP0.W     [--W15]
                 BRA NN    , Modulus_32x32_exitr
                 SUBR.W    W0, #0, W0
                 SUBBR.W   W1, #0, W1
    Modulus_32x32_exitr:
                 RETURN
    Modulus_32x32___umodsi3:
                 RCALL     Modulus_32x32___udivsi3
                 MOV.D     W4, W0
                 RETURN
    Modulus_32x32___udivsi3:
                 MUL.UU    W4, #0, W4
                 MOV       #0x20, W6
    Modulus_32x32_nextbit:
                 SL.W      W0, W0
                 RLC.W     W1, W1
                 RLC.W     W4, W4
                 RLC.W     W5, W5
                 BSET      W0, #0
                 SUB.W     W4, W2, W4
                 SUBB.W    W5, W3, W5
                 BRA NN    , Modulus_32x32_iterate
                 ADD.W     W4, W2, W4
                 ADDC.W    W5, W3, W5
                 BCLR      W0, #0
    Modulus_32x32_iterate:
                 DEC.W     W6, W6
                 BRA NZ    , Modulus_32x32_nextbit
                 RETURN
  }
  
  asm the_end_Modulus_32x32:
    ;
  
}
