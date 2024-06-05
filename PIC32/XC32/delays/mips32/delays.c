#include <stdint.h>

uint16_t clock_mhz = OSC_KHZ / 1000;

void __attribute__( ( noinline, section( ".RamFunc" ) ) ) Delay_Cyc( uint32_t cycle_num )
{
    asm volatile(
        "loopCycles%=: \n"
        "   sub %[cycle_num], %[cycle_num], 24 \n"
        "   nop \n"
        "   bgtz %[cycle_num], loopCycles%= \n"
        : [cycle_num] "+r"( cycle_num ) );
}

void __attribute__( ( noinline ) ) Delay_us( uint32_t time_us )
{
    Delay_Cyc( time_us * clock_mhz );
}

void __attribute__( ( noinline ) ) Delay_ms( uint32_t time_ms )
{
    Delay_Cyc( time_ms * OSC_KHZ );
}

void __attribute__( ( noinline ) ) Delay_Advanced_ms( uint32_t time_ms, uint32_t Current_Fosc_kHz )
{
    Delay_Cyc( time_ms * ( Current_Fosc_kHz / 1000 ) );
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
