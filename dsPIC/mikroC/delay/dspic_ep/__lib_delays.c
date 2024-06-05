/*
    __lib_delays.c

 ------------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2024, MikroElektonika - www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */
#include <built_in.h>

void _Multiply_32x32( void );
//****************************************************************************//
//                                                                            //
//  Function:     unsigned long Get_Fosc_kHz()                                //
//                                                                            //
//  Purpose:      Obtaining the project clock value.                          //
//                                                                            //
//  CallParams:   None.                                                       //
//                                                                            //
//  ReturnValues: Project clock value in kHz.                                 //
//                                                                            //
//  Requires :    Nothing.                                                    //
//                                                                            //
//  Example  :    Proj_Clk = Get_Fosc_kHz();                                  //
//                                                                            //
//***************************       CHANGE LOG       *************************//
// Version | ACTION                                           |  DATE  | SIG  //
// --------|--------------------------------------------------|--------|----- //
//         |                                                  |        |      //
//    0.00 | Created function                                 | 271206 | ST   //
//         |                                                  |        |      //
//****************************************************************************//
unsigned long Get_Fosc_kHz()
{
    return Clock_kHz();
}

//****************************************************************************//
//                                                                            //
//  Function:     unsigned int Get_Fosc_Per_Cyc()                             //
//                                                                            //
//  Purpose:      Obtaining MCU's clock per cycle.                            //
//                                                                            //
//  CallParams:   None.                                                       //
//                                                                            //
//  ReturnValues: Clock per cycle.                                            //
//                                                                            //
//  Requires :    Nothing.                                                    //
//                                                                            //
//  Example  :    dividor  = Get_Fosc_Per_Cyc();                              //
//                                                                            //
//***************************       CHANGE LOG       *************************//
// Version | ACTION                                           |  DATE  | SIG  //
// --------|--------------------------------------------------|--------|----- //
//         |                                                  |        |      //
//    0.00 | Created function                                 | 221009 | MR   //
//         |                                                  |        |      //
//****************************************************************************//
unsigned int Get_Fosc_Per_Cyc()
{
    return __FOSC_PER_CYC;
}

//****************************************************************************//
//                                                                            //
//  Function:     void Delay_Cyc(unsigned int x, unsigned int y)              //
//                                                                            //
//  Purpose:      Causes a blocking, interruptable delay of <NoCyc> cycles,   //
//                where NoCyc := X*16384 + Y + OFFSET                         //
//                OFFSET takes in consideration cycles needed for parameter   //
//                       passing, calls, returns and such                     //
//                Call this function with parameters (0, 0) to measure OFFSET //
//                                                                            //
//  CallParams:   x - (NoCyc-OFFSET) divided by 16384                         //
//                y - remaining of the (NoCyc-OFFSET)/16384 division          //
//                                                                            //
//  ReturnValues: None.                                                       //
//                                                                            //
//  Requires :    Nothing.                                                    //
//                                                                            //
//  Parameters Range :   y = 0..16383                                         //
//                       x = 0..65535                                         //
//                                                                            //
//  Output range :       OFFSET  ..  1073741823 + OFFSET [cycles]             //
//                                                                            //
//  Example  : Delay_Cyc((NoCyc-OFFSET) / 16384, (NoCyc-OFFSET) % 16384);     //
//                                                                            //
//***************************       CHANGE LOG       *************************//
// Version | ACTION                                           |  DATE  | SIG  //
// --------|--------------------------------------------------|--------|----- //
//         |                                                  |        |      //
//    0.00 | Created function                                 | 271206 | ST   //
//         |                                                  |        |      //
//****************************************************************************//
void Delay_Cyc( unsigned int x, unsigned int y )
{
    W8 = x;
    W9 = y;
    asm {
    Delay_Cyc_loop:
        cp0 W8                 ; skip delay
        bra z, Delay_Cyc_rez   ;   if w8 = 0
        repeat #16375          ; perform delay by
        nop                    ;   by executing w8*16384 <nop>s in Delay_Cyc_loop
        dec W8, W8             ; next loop
        bra Delay_Cyc_loop
    Delay_Cyc_rez:
        repeat W9              ; execute whats
        nop                    ;   remaining after the division
    }
}

//****************************************************************************//
//                                                                            //
//  Function:     void Delay_Cyc_Long(unsigned long CycNo)                    //
//                                                                            //
//  Purpose:      Causes a blocking, interruptable delay of <CycNo> cycles,   //
//                OFFSET takes in consideration cycles needed for parameter   //
//                       passing, calls, returns and such.                    //
//                Call this function with parameter zero to measure OFFSET    //
//                                                                            //
//  CallParams:   CycNo - number of cycles                                    //
//                                                                            //
//  ReturnValues: None.                                                       //
//                                                                            //
//  Requires :    Nothing.                                                    //
//                                                                            //
//  Parameters Range :   CycNo = 0 .. 268435455                               //
//                                                                            //
//  Example  : Delay_Cyc_Long(long_var - 56);                                 //
//                                                                            //
//***************************       CHANGE LOG       *************************//
// Version | ACTION                                           |  DATE  | SIG  //
// --------|--------------------------------------------------|--------|----- //
//         |                                                  |        |      //
//    0.00 | Created function                                 |20091020| MR   //
//         |                                                  |        |      //
//****************************************************************************//
void Delay_Cyc_Long( unsigned long CycNo )
{
    W8 = CycNo;
    W9 = HiWord( CycNo );
    asm {
        PUSH       W8       //   Shift code must be written
        MOV        #14, W7  //   in asm because dsPIC30 can
    Label1:                 //   generate DO instruction
        DEC        W7, W7   //   instead of a loop.
        BRA LT,    Label2
        LSR        W9, W9   //   In that case code execution
        RRC        W8, W8   //   time would be different
        BRA        Label1   //   between dsPIC30 family
    Label2:                 //   and PIC24/dsPIC33 families.

        POP        W9
        MOV        #16383, W7
        AND        W9, W7, W9

    Delay_Cyc_loop:
        CP0 W8                 ; skip delay
        BRA Z, Delay_Cyc_rem   ;    if W8 = 0
        repeat #16375          ; perform delay by
        NOP                    ;   by executing W8*16384 <nop>s in Delay_Cyc_loop
        DEC W8, W8             ; next loop
        bra Delay_Cyc_loop
    Delay_Cyc_rem:
        REPEAT W9              ; execute whats
        nop                    ;   remaining after the division
    }
}

//****************************************************************************//
//                                                                            //
//  Function:     void VDelay_ms(unsigned Time_ms)                            //
//                                                                            //
//  Purpose:      Causes a blocking, interruptable delay of                   //
//                Time_ms miliseconds                                         //
//                                                                            //
//  CallParams:   Time_ms - time to delay in ms                               //
//                                                                            //
//  ReturnValues: None.                                                       //
//                                                                            //
//  Requires :    Delay_Cyc function to be defined.                           //
//                                                                            //
//  Parameter Range : depends on Delay_Cyc parameter range                    //
//                    if calculated NumberOfCyc can't fit Delay_Cyc parameter //
//                    range, overflow will happen.                            //
//                                                                            //
//  Note :        - if input parameter is a literal constant, this delay will //
//                  be 100% accurate.                                         //
//                - if input parameter is a variable, this delay will have    //
//                  one cycle error.                                          //
//                                                                            //
//  Example  :    VDelay_ms(3);                                               //
//                                                                            //
//***************************       CHANGE LOG       *************************//
// Version | ACTION                                           |  DATE  | SIG  //
// --------|--------------------------------------------------|--------|----- //
//         |                                                  |        |      //
//    0.00 | Created function                                 | 271206 | ST   //
//         |                                                  |        |      //
//****************************************************************************//
void VDelay_ms( unsigned Time_ms )
{
    unsigned long volatile NumberOfCyc;

    NumberOfCyc = Clock_kHz() / __FOSC_PER_CYC; // Number of cycles per millisecond
    NumberOfCyc *= Time_ms;                     // Total number of cycles

    NumberOfCyc -= 172;                         // Take care of cycles needed for passing
                                                // parameters, calls, retunrs and such, so
                                                // decrease NumberOfCyc.

    W1 = HiWord( NumberOfCyc );
    W0 = NumberOfCyc;
    asm {
        MOV        #16383, W2
        AND        W0, W2, W3   //   Shift code must be written
        MOV        #14, W2      //   in asm because dsPIC30 can
    Label1:                     //   generate DO instruction
        DEC        W2, W2       //   instead of a loop.
        BRA LT,    Label2
        LSR        W1, W1       //   In that case code execution
        RRC        W0, W0       //   time would be different
        BRA        Label1       //   between dsPIC30 family
    Label2:                     //   and PIC24/dsPIC33 families.

    Delay_Cyc_loop:
        CP0 W0                 ; skip delay
        BRA Z, Delay_Cyc_rem   ;    if W0 = 0
        repeat #16375          ; perform delay by
        NOP                    ;   by executing W0*16384 <nop>s in Delay_Cyc_loop
        DEC W0, W0             ; next loop
        bra Delay_Cyc_loop
    Delay_Cyc_rem:
        REPEAT W3              ; execute whats
        nop                    ;   remaining after the division
    }
}

//****************************************************************************//
//                                                                            //
//  Function:     void VDelay_Advanced_ms(unsigned Time_ms,                   //
//                                        unsigned long Current_Fosc_kHz)     //
//                                                                            //
//  Purpose:      Causes a blocking, interruptable delay of                   //
//                Time_ms miliseconds.                                        //
//                It supports changing oscillator value in runtime.           //
//                                                                            //
//  CallParams:   Time_ms - time to delay in ms                               //
//                Current_Fosc_kHz - current oscillator value [kHz]           //
//                                                                            //
//  ReturnValues: None.                                                       //
//                                                                            //
//  Requires :    Delay_Cyc function to be defined.                           //
//                                                                            //
//  Parameter Range : depends on Delay_Cyc parameter range                    //
//                    if calculated NumberOfCyc can't fit Delay_Cyc parameter //
//                    range, overflow will happen.                            //
//                                                                            //
//  Note :        - if input parameter Current_Fosc_kHz is a literal constant //
//                  this delay will be 100% accurate.                         //
//                - if input parameter/s is/are a variable/s,                 //
//                  this delay will have 1-3 cycles error.                    //
//                                                                            //
//  Example  :    VDelay_Advanced_ms(3, 80000);                               //
//                                                                            //
//***************************       CHANGE LOG       *************************//
// Version | ACTION                                           |  DATE  | SIG  //
// --------|--------------------------------------------------|--------|----- //
//         |                                                  |        |      //
//    0.00 | Created function                                 | 281009 | MR   //
//         |                                                  |        |      //
//****************************************************************************//
void VDelay_Advanced_ms( unsigned Time_ms, unsigned long Current_Fosc_kHz )
{
    unsigned long volatile NumberOfCyc;

    NumberOfCyc = Current_Fosc_kHz / __FOSC_PER_CYC; // Number of cycles per millisecond
    NumberOfCyc *= Time_ms;                          // Total number of cycles

    NumberOfCyc -= 175;                              // Take care of cycles needed for passing
                                                     // parameters, calls, retunrs and such, so
                                                     // decrease NumberOfCyc.

    W1 = HiWord( NumberOfCyc );
    W0 = NumberOfCyc;
    asm {
            MOV        #16383, W2
            AND        W0, W2, W3   //   Shift code must be written
            MOV        #14, W2      //   in asm because dsPIC30 can
        Label1:                     //   generate DO instruction
            DEC        W2, W2       //   instead of a loop.
            BRA LT,    Label2
            LSR        W1, W1       //   In that case code execution
            RRC        W0, W0       //   time would be different
            BRA        Label1       //   between dsPIC30 family
        Label2:                     //   and PIC24/dsPIC33 families.

        Delay_Cyc_loop:
            CP0 W0                 ; skip delay
            BRA Z, Delay_Cyc_rem   ;    if W0 = 0
            repeat #16375          ; perform delay by
            NOP                    ;   by executing W0*16384 <nop>s in Delay_Cyc_loop
            DEC W0, W0             ; next loop
            bra Delay_Cyc_loop
        Delay_Cyc_rem:
            REPEAT W3              ; execute whats
            nop                    ;   remaining after the division
    }
}

//****************************************************************************//
//                                                                            //
//  Function:     void Delay_W0()                                             //
//                                                                            //
//  Purpose:      Causes a blocking, interruptable delay of W0 cycles         //
//                                                                            //
//  CallParams:   None.                                                       //
//                                                                            //
//  ReturnValues: None.                                                       //
//                                                                            //
//  Requires :    W0 must be loaded with the desired number of cycles before  //
//                calling Delay_W0 function.                                  //
//                                                                            //
//  Example  :    W0 = 0x0A0A; Delay_W0();                                    //
//                                                                            //
//***************************       CHANGE LOG       *************************//
// Version | ACTION                                           |  DATE  | SIG  //
// --------|--------------------------------------------------|--------|----- //
//         |                                                  |        |      //
//    0.00 | Created function                                 | 271206 | ST   //
//         |                                                  |        |      //
//****************************************************************************//
void Delay_W0()
{
    asm {
        repeat W0
        nop
    }
}

//****************************************************************************//
//                                                                            //
//  Function:     void Delay_1us()                                            //
//                                                                            //
//  Purpose:      Causes a blocking, interruptable delay of 1us               //
//                                                                            //
//  CallParams:   None.                                                       //
//                                                                            //
//  ReturnValues: None.                                                       //
//                                                                            //
//  Requires :    Built in Delay_us function.                                 //
//                                                                            //
//  Example  :    Delay_1us();                                                //
//                                                                            //
//***************************       CHANGE LOG       *************************//
// Version | ACTION                                           |  DATE  | SIG  //
// --------|--------------------------------------------------|--------|----- //
//         |                                                  |        |      //
//    0.00 | Created function                                 | 271206 | ST   //
//         |                                                  |        |      //
//****************************************************************************//
void Delay_1us()
{
    Delay_us( 1 );
}

//****************************************************************************//
//                                                                            //
//  Function:     void Delay_5us()                                            //
//                                                                            //
//  Purpose:      Causes a blocking, interruptable delay of 5us               //
//                                                                            //
//  CallParams:   None.                                                       //
//                                                                            //
//  ReturnValues: None.                                                       //
//                                                                            //
//  Requires :    Built in Delay_us function.                                 //
//                                                                            //
//  Example  :    Delay_5us();                                                //
//                                                                            //
//***************************       CHANGE LOG       *************************//
// Version | ACTION                                           |  DATE  | SIG  //
// --------|--------------------------------------------------|--------|----- //
//         |                                                  |        |      //
//    0.00 | Created function                                 | 221123 | SJ   //
//         |                                                  |        |      //
//****************************************************************************//
void Delay_5us()
{
    Delay_us( 5 );
}

//****************************************************************************//
//                                                                            //
//  Function:     void Delay_6us()                                            //
//                                                                            //
//  Purpose:      Causes a blocking, interruptable delay of 6us               //
//                                                                            //
//  CallParams:   None.                                                       //
//                                                                            //
//  ReturnValues: None.                                                       //
//                                                                            //
//  Requires :    Built in Delay_us function.                                 //
//                                                                            //
//  Example  :    Delay_6us();                                                //
//                                                                            //
//***************************       CHANGE LOG       *************************//
// Version | ACTION                                           |  DATE  | SIG  //
// --------|--------------------------------------------------|--------|----- //
//         |                                                  |        |      //
//    0.00 | Created function                                 | 221123 | SJ   //
//         |                                                  |        |      //
//****************************************************************************//
void Delay_6us()
{
    Delay_us( 6 );
}

//****************************************************************************//
//                                                                            //
//  Function:     void Delay_9us()                                            //
//                                                                            //
//  Purpose:      Causes a blocking, interruptable delay of 9us               //
//                                                                            //
//  CallParams:   None.                                                       //
//                                                                            //
//  ReturnValues: None.                                                       //
//                                                                            //
//  Requires :    Built in Delay_us function.                                 //
//                                                                            //
//  Example  :    Delay_9us();                                                //
//                                                                            //
//***************************       CHANGE LOG       *************************//
// Version | ACTION                                           |  DATE  | SIG  //
// --------|--------------------------------------------------|--------|----- //
//         |                                                  |        |      //
//    0.00 | Created function                                 | 221123 | SJ   //
//         |                                                  |        |      //
//****************************************************************************//
void Delay_9us()
{
    Delay_us( 9 );
}

//****************************************************************************//
//                                                                            //
//  Function:     void Delay_10us()                                           //
//                                                                            //
//  Purpose:      Causes a blocking, interruptable delay of 10us              //
//                                                                            //
//  CallParams:   None.                                                       //
//                                                                            //
//  ReturnValues: None.                                                       //
//                                                                            //
//  Requires :    Built in Delay_us function.                                 //
//                                                                            //
//  Example  :    Delay_10us();                                               //
//                                                                            //
//***************************       CHANGE LOG       *************************//
// Version | ACTION                                           |  DATE  | SIG  //
// --------|--------------------------------------------------|--------|----- //
//         |                                                  |        |      //
//    0.00 | Created function                                 | 271206 | ST   //
//         |                                                  |        |      //
//****************************************************************************//
void Delay_10us()
{
    Delay_us( 10 );
}

//****************************************************************************//
//                                                                            //
//  Function:     void Delay_22us()                                           //
//                                                                            //
//  Purpose:      Causes a blocking, interruptable delay of 22us              //
//                                                                            //
//  CallParams:   None.                                                       //
//                                                                            //
//  ReturnValues: None.                                                       //
//                                                                            //
//  Requires :    Built in Delay_us function.                                 //
//                                                                            //
//  Example  :    Delay_22us();                                               //
//                                                                            //
//***************************       CHANGE LOG       *************************//
// Version | ACTION                                           |  DATE  | SIG  //
// --------|--------------------------------------------------|--------|----- //
//         |                                                  |        |      //
//    0.00 | Created function                                 | 271206 | ST   //
//         |                                                  |        |      //
//****************************************************************************//
void Delay_22us()
{
    Delay_us( 22 );
}

//****************************************************************************//
//                                                                            //
//  Function:     void Delay_50us()                                           //
//                                                                            //
//  Purpose:      Causes a blocking, interruptable delay of 50us              //
//                                                                            //
//  CallParams:   None.                                                       //
//                                                                            //
//  ReturnValues: None.                                                       //
//                                                                            //
//  Requires :    Built in Delay_us function.                                 //
//                                                                            //
//  Example  :    Delay_50us();                                               //
//                                                                            //
//***************************       CHANGE LOG       *************************//
// Version | ACTION                                           |  DATE  | SIG  //
// --------|--------------------------------------------------|--------|----- //
//         |                                                  |        |      //
//    0.00 | Created function                                 | 271206 | ST   //
//         |                                                  |        |      //
//****************************************************************************//
void Delay_50us()
{
    Delay_us( 50 );
}

//****************************************************************************//
//                                                                            //
//  Function:     void Delay_55us()                                           //
//                                                                            //
//  Purpose:      Causes a blocking, interruptable delay of 55us              //
//                                                                            //
//  CallParams:   None.                                                       //
//                                                                            //
//  ReturnValues: None.                                                       //
//                                                                            //
//  Requires :    Built in Delay_us function.                                 //
//                                                                            //
//  Example  :    Delay_55us();                                               //
//                                                                            //
//***************************       CHANGE LOG       *************************//
// Version | ACTION                                           |  DATE  | SIG  //
// --------|--------------------------------------------------|--------|----- //
//         |                                                  |        |      //
//    0.00 | Created function                                 | 221123 | SJ   //
//         |                                                  |        |      //
//****************************************************************************//
void Delay_55us()
{
    Delay_us( 55 );
}

//****************************************************************************//
//                                                                            //
//  Function:     void Delay_60us()                                           //
//                                                                            //
//  Purpose:      Causes a blocking, interruptable delay of 60us              //
//                                                                            //
//  CallParams:   None.                                                       //
//                                                                            //
//  ReturnValues: None.                                                       //
//                                                                            //
//  Requires :    Built in Delay_us function.                                 //
//                                                                            //
//  Example  :    Delay_60us();                                               //
//                                                                            //
//***************************       CHANGE LOG       *************************//
// Version | ACTION                                           |  DATE  | SIG  //
// --------|--------------------------------------------------|--------|----- //
//         |                                                  |        |      //
//    0.00 | Created function                                 | 221123 | SJ   //
//         |                                                  |        |      //
//****************************************************************************//
void Delay_60us()
{
    Delay_us( 60 );
}

//****************************************************************************//
//                                                                            //
//  Function:     void Delay_64us()                                           //
//                                                                            //
//  Purpose:      Causes a blocking, interruptable delay of 64us              //
//                                                                            //
//  CallParams:   None.                                                       //
//                                                                            //
//  ReturnValues: None.                                                       //
//                                                                            //
//  Requires :    Built in Delay_us function.                                 //
//                                                                            //
//  Example  :    Delay_64us();                                               //
//                                                                            //
//***************************       CHANGE LOG       *************************//
// Version | ACTION                                           |  DATE  | SIG  //
// --------|--------------------------------------------------|--------|----- //
//         |                                                  |        |      //
//    0.00 | Created function                                 | 221123 | SJ   //
//         |                                                  |        |      //
//****************************************************************************//
void Delay_64us()
{
    Delay_us( 64 );
}

//****************************************************************************//
//                                                                            //
//  Function:     void Delay_70us()                                           //
//                                                                            //
//  Purpose:      Causes a blocking, interruptable delay of 70us              //
//                                                                            //
//  CallParams:   None.                                                       //
//                                                                            //
//  ReturnValues: None.                                                       //
//                                                                            //
//  Requires :    Built in Delay_us function.                                 //
//                                                                            //
//  Example  :    Delay_70us();                                               //
//                                                                            //
//***************************       CHANGE LOG       *************************//
// Version | ACTION                                           |  DATE  | SIG  //
// --------|--------------------------------------------------|--------|----- //
//         |                                                  |        |      //
//    0.00 | Created function                                 | 221123 | SJ   //
//         |                                                  |        |      //
//****************************************************************************//
void Delay_70us()
{
    Delay_us( 70 );
}

//****************************************************************************//
//                                                                            //
//  Function:     void Delay_80us()                                           //
//                                                                            //
//  Purpose:      Causes a blocking, interruptable delay of 80us              //
//                                                                            //
//  CallParams:   None.                                                       //
//                                                                            //
//  ReturnValues: None.                                                       //
//                                                                            //
//  Requires :    Built in Delay_us function.                                 //
//                                                                            //
//  Example  :    Delay_80us();                                               //
//                                                                            //
//***************************       CHANGE LOG       *************************//
// Version | ACTION                                           |  DATE  | SIG  //
// --------|--------------------------------------------------|--------|----- //
//         |                                                  |        |      //
//    0.00 | Created function                                 | 271206 | ST   //
//         |                                                  |        |      //
//****************************************************************************//
void Delay_80us()
{
    Delay_us( 80 );
}

//****************************************************************************//
//                                                                            //
//  Function:     void Delay_410us()                                          //
//                                                                            //
//  Purpose:      Causes a blocking, interruptable delay of 410us             //
//                                                                            //
//  CallParams:   None.                                                       //
//                                                                            //
//  ReturnValues: None.                                                       //
//                                                                            //
//  Requires :    Built in Delay_us function.                                 //
//                                                                            //
//  Example  :    Delay_410us();                                              //
//                                                                            //
//***************************       CHANGE LOG       *************************//
// Version | ACTION                                           |  DATE  | SIG  //
// --------|--------------------------------------------------|--------|----- //
//         |                                                  |        |      //
//    0.00 | Created function                                 | 221123 | SJ   //
//         |                                                  |        |      //
//****************************************************************************//
void Delay_410us()
{
    Delay_us( 410 );
}

//****************************************************************************//
//                                                                            //
//  Function:     void Delay_480us()                                          //
//                                                                            //
//  Purpose:      Causes a blocking, interruptable delay of 480us             //
//                                                                            //
//  CallParams:   None.                                                       //
//                                                                            //
//  ReturnValues: None.                                                       //
//                                                                            //
//  Requires :    Built in Delay_us function.                                 //
//                                                                            //
//  Example  :    Delay_480us();                                              //
//                                                                            //
//***************************       CHANGE LOG       *************************//
// Version | ACTION                                           |  DATE  | SIG  //
// --------|--------------------------------------------------|--------|----- //
//         |                                                  |        |      //
//    0.00 | Created function                                 | 221123 | SJ   //
//         |                                                  |        |      //
//****************************************************************************//
void Delay_480us()
{
    Delay_us( 480 );
}

//****************************************************************************//
//                                                                            //
//  Function:     void Delay_500us()                                          //
//                                                                            //
//  Purpose:      Causes a blocking, interruptable delay of 500us             //
//                                                                            //
//  CallParams:   None.                                                       //
//                                                                            //
//  ReturnValues: None.                                                       //
//                                                                            //
//  Requires :    Built in Delay_us function.                                 //
//                                                                            //
//  Example  :    Delay_500us();                                              //
//                                                                            //
//***************************       CHANGE LOG       *************************//
// Version | ACTION                                           |  DATE  | SIG  //
// --------|--------------------------------------------------|--------|----- //
//         |                                                  |        |      //
//    0.00 | Created function                                 | 271206 | ST   //
//         |                                                  |        |      //
//****************************************************************************//
void Delay_500us()
{
    Delay_us( 500 );
}

//****************************************************************************//
//                                                                            //
//  Function:     void Delay_5500us()                                         //
//                                                                            //
//  Purpose:      Causes a blocking, interruptable delay of 5500us            //
//                                                                            //
//  CallParams:   None.                                                       //
//                                                                            //
//  ReturnValues: None.                                                       //
//                                                                            //
//  Requires :    Built in Delay_us function.                                 //
//                                                                            //
//  Example  :    Delay_5500us();                                             //
//                                                                            //
//***************************       CHANGE LOG       *************************//
// Version | ACTION                                           |  DATE  | SIG  //
// --------|--------------------------------------------------|--------|----- //
//         |                                                  |        |      //
//    0.00 | Created function                                 | 271206 | ST   //
//         |                                                  |        |      //
//****************************************************************************//
void Delay_5500us()
{
    Delay_us( 5500 );
}

//****************************************************************************//
//                                                                            //
//  Function:     void Delay_1ms()                                            //
//                                                                            //
//  Purpose:      Causes a blocking, interruptable delay of 1ms               //
//                                                                            //
//  CallParams:   None.                                                       //
//                                                                            //
//  ReturnValues: None.                                                       //
//                                                                            //
//  Requires :    Built in Delay_ms function.                                 //
//                                                                            //
//  Example  :    Delay_1ms();                                                //
//                                                                            //
//***************************       CHANGE LOG       *************************//
// Version | ACTION                                           |  DATE  | SIG  //
// --------|--------------------------------------------------|--------|----- //
//         |                                                  |        |      //
//    0.00 | Created function                                 | 271206 | ST   //
//         |                                                  |        |      //
//****************************************************************************//
void Delay_1ms()
{
    Delay_ms( 1 );
}

//****************************************************************************//
//                                                                            //
//  Function:     void Delay_5ms()                                            //
//                                                                            //
//  Purpose:      Causes a blocking, interruptable delay of 5ms               //
//                                                                            //
//  CallParams:   None.                                                       //
//                                                                            //
//  ReturnValues: None.                                                       //
//                                                                            //
//  Requires :    Built in Delay_ms function.                                 //
//                                                                            //
//  Example  :    Delay_5ms();                                                //
//                                                                            //
//***************************       CHANGE LOG       *************************//
// Version | ACTION                                           |  DATE  | SIG  //
// --------|--------------------------------------------------|--------|----- //
//         |                                                  |        |      //
//    0.00 | Created function                                 | 271206 | ST   //
//         |                                                  |        |      //
//****************************************************************************//
void Delay_5ms()
{
    Delay_ms( 5 );
}

//****************************************************************************//
//                                                                            //
//  Function:     void Delay_8ms()                                            //
//                                                                            //
//  Purpose:      Causes a blocking, interruptable delay of 8ms               //
//                                                                            //
//  CallParams:   None.                                                       //
//                                                                            //
//  ReturnValues: None.                                                       //
//                                                                            //
//  Requires :    Built in Delay_ms function.                                 //
//                                                                            //
//  Example  :    Delay_8ms();                                                //
//                                                                            //
//***************************       CHANGE LOG       *************************//
// Version | ACTION                                           |  DATE  | SIG  //
// --------|--------------------------------------------------|--------|----- //
//         |                                                  |        |      //
//    0.00 | Created function                                 | 271206 | ST   //
//         |                                                  |        |      //
//****************************************************************************//
void Delay_8ms()
{
    Delay_ms( 8 );
}

//****************************************************************************//
//                                                                            //
//  Function:     void Delay_10ms()                                           //
//                                                                            //
//  Purpose:      Causes a blocking, interruptable delay of 10ms              //
//                                                                            //
//  CallParams:   None.                                                       //
//                                                                            //
//  ReturnValues: None.                                                       //
//                                                                            //
//  Requires :    Built in Delay_ms function.                                 //
//                                                                            //
//  Example  :    Delay_10ms();                                               //
//                                                                            //
//***************************       CHANGE LOG       *************************//
// Version | ACTION                                           |  DATE  | SIG  //
// --------|--------------------------------------------------|--------|----- //
//         |                                                  |        |      //
//    0.00 | Created function                                 | 271206 | ST   //
//         |                                                  |        |      //
//****************************************************************************//
void Delay_10ms()
{
    Delay_ms( 10 );
}

//****************************************************************************//
//                                                                            //
//  Function:     void Delay_100ms()                                          //
//                                                                            //
//  Purpose:      Causes a blocking, interruptable delay of 100ms             //
//                                                                            //
//  CallParams:   None.                                                       //
//                                                                            //
//  ReturnValues: None.                                                       //
//                                                                            //
//  Requires :    Built in Delay_ms function.                                 //
//                                                                            //
//  Example  :    Delay_100ms();                                              //
//                                                                            //
//***************************       CHANGE LOG       *************************//
// Version | ACTION                                           |  DATE  | SIG  //
// --------|--------------------------------------------------|--------|----- //
//         |                                                  |        |      //
//    0.00 | Created function                                 | 271206 | ST   //
//         |                                                  |        |      //
//****************************************************************************//
void Delay_100ms()
{
    Delay_ms( 100 );
}

//****************************************************************************//
//                                                                            //
//  Function:     void Delay_1sec()                                           //
//                                                                            //
//  Purpose:      Causes a blocking, interruptable delay of 1sec              //
//                                                                            //
//  CallParams:   None.                                                       //
//                                                                            //
//  ReturnValues: None.                                                       //
//                                                                            //
//  Requires :    Built in Delay_ms function.                                 //
//                                                                            //
//  Example  :    Delay_1sec();                                               //
//                                                                            //
//***************************       CHANGE LOG       *************************//
// Version | ACTION                                           |  DATE  | SIG  //
// --------|--------------------------------------------------|--------|----- //
//         |                                                  |        |      //
//    0.00 | Created function                                 | 271206 | ST   //
//         |                                                  |        |      //
//****************************************************************************//
void Delay_1sec()
{
    Delay_ms( 1000 );
}

// ----------------------------------------------------------------------------
/*
    __lib_delays.c

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
