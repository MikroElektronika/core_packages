void Mul_32x32_U();

unsigned long Get_Fosc_kHz()
{
    return Clock_kHz();
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

void ___Boot_Delay4k() org 3400
{

    Delay_ms( 5 );
}

void ___Boot_Delay8k() org 7486
{

    Delay_ms( 5 );
}

void ___Boot_Delay12k() org 11594
{

    Delay_ms( 5 );
}

void ___Boot_Delay16k() org 15694
{

    Delay_ms( 5 );
}

void ___Boot_Delay24k() org 23890
{

    Delay_ms( 5 );
}

void ___Boot_Delay32k() org 32072
{

    Delay_ms( 5 );
}

void ___Boot_Delay48k() org 48460
{

    Delay_ms( 5 );
}

void ___Boot_Delay64k() org 64850
{

    Delay_ms( 5 );
}

void ___Boot_Delay128k() org 130386
{

    Delay_ms( 5 );
}

void Delay_Cyc( char cycles_div_by_10 ) // Cycles_div_by_10: min 3, max 255
{
    --cycles_div_by_10;
    --cycles_div_by_10;
    while ( cycles_div_by_10-- > 0 ) {
        asm {
            NOP
            NOP
        }
    }
    asm {
        NOP
        NOP
        NOP
        NOP
        NOP
    }
}

void VDelay_ms( unsigned Time_ms )
{
    unsigned long NumberOfCyc;
    NumberOfCyc = Clock_kHz() >> 2;
    NumberOfCyc *= Time_ms;
    if ( NumberOfCyc < 660 )
        return;
    NumberOfCyc -= 660;
    NumberOfCyc >>= 5;
    while ( NumberOfCyc-- ) {
        asm nop;
        asm nop;
        asm nop;
        asm nop;
        asm nop;
        asm nop;
        asm nop;
        asm nop;
        asm nop;
        asm nop;
        asm nop;
    }
}

void VDelay_Advanced_ms( unsigned Time_ms, unsigned Current_Fosc_kHz )
{
    unsigned long NumberOfCyc;
    NumberOfCyc = Current_Fosc_kHz >> 2;
    NumberOfCyc *= Time_ms;
    if ( NumberOfCyc < 660 )
        return;
    NumberOfCyc -= 660;
    NumberOfCyc >>= 5;
    while ( NumberOfCyc-- ) {
        asm nop;
        asm nop;
        asm nop;
        asm nop;
        asm nop;
        asm nop;
        asm nop;
        asm nop;
        asm nop;
        asm nop;
        asm nop;
    }
}
