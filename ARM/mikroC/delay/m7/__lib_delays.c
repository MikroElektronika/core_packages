/*
    __lib_delays.c

 ------------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2024, MikroElektonika - www.mikroe.com

  All rights reserved.

---------------------------------------------------------------------------- */

#pragma setintsize mE

unsigned long __System_CLOCK_IN_KHZ;

void Set_Fosc_kHz( unsigned long Fosc_kHz )
{
    __System_CLOCK_IN_KHZ = Fosc_kHz;
}

unsigned long Get_Fosc_kHz()
{
    return __System_CLOCK_IN_KHZ;
}

void Delay_1us()
{
    Delay_us( 1 );
}

void Delay_5us()
{
    Delay_us( 5 );
}

void Delay_6us()
{
    Delay_us( 6 );
}

void Delay_9us()
{
    Delay_us( 9 );
}

void Delay_10us()
{
    Delay_us( 10 );
}

void Delay_22us()
{
    Delay_us( 22 );
}

void Delay_50us()
{
    Delay_us( 50 );
}

void Delay_55us()
{
    Delay_us( 55 );
}

void Delay_60us()
{
    Delay_us( 60 );
}

void Delay_64us()
{
    Delay_us( 64 );
}

void Delay_70us()
{
    Delay_us( 70 );
}

void Delay_80us()
{
    Delay_us( 78 );
}

void Delay_410us()
{
    Delay_us( 410 );
}

void Delay_480us()
{
    Delay_us( 480 );
}

void Delay_500us()
{
    Delay_us( 498 );
}

void Delay_5500us()
{
    Delay_us( 5500 );
}

void Delay_1ms()
{
    Delay_ms( 1 );
}

void Delay_5ms()
{
    Delay_ms( 5 );
}

void Delay_8ms()
{
    Delay_ms( 8 );
}

void Delay_10ms()
{
    Delay_ms( 10 );
}

void Delay_100ms()
{
    Delay_ms( 100 );
}

void Delay_1sec()
{
    Delay_ms( 1000 );
}

static void DelayCycLoop( unsigned long cycles_div_by_10 )
{
    asm {
        nop.w
        subs R0,R0,#1
        nop
    label1:
        subs R0,R0,#1
        nop
        nop
        nop
        bne label1
    }
}

void Delay_Cyc( unsigned long cycles_div_by_10 )
{    // Cycles_div_by_10 parameter range: min = 1, max = 4294967295
#ifndef HW_DEBUG
    asm nop;
#endif

    DelayCycLoop( cycles_div_by_10 );
    DelayCycLoop( cycles_div_by_10 );
    DelayCycLoop( cycles_div_by_10 );
    DelayCycLoop( cycles_div_by_10 );
}

void VDelay_ms( unsigned long Time_ms )
{   // Time_ms parameter range: min = 1, max = 4294967295
    unsigned long NumberOfCyc;

    NumberOfCyc = Clock_kHz(); // cycles per millisecond
    NumberOfCyc *= Time_ms;    // total number of cycles
    Delay_Cyc( NumberOfCyc / 10 - 3 );
    asm {
        nop
        nop
        nop
        nop
        nop
        nop
    }
}

void VDelay_Advanced_ms( unsigned long Time_ms, unsigned long Current_Fosc_kHz )
{   // Time_ms parameter range: min = 1, max = 4294967295
    unsigned long NumberOfCyc;

    NumberOfCyc = Current_Fosc_kHz; // cycles per millisecond
    NumberOfCyc *= Time_ms;         // total number of cycles

    Delay_Cyc( NumberOfCyc / 10 - 3 );
    asm {
        nop
        nop
        nop
        nop
        nop
        nop
    }
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
