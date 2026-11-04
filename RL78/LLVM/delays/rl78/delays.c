#include "stdint.h"
#include "core_header.h"

// Delay_Cyc loops per microsecond, split into integer part and 16-bit fraction,
// so Delay_us needs no runtime 32-bit division (software routine on RL78, ~30 us).
#define DELAY_US_LOOPS_INT  ( FOSC_KHZ_VALUE / ( 1000UL * getClockPresc ) )
#define DELAY_US_LOOPS_FRAC ( ( ( FOSC_KHZ_VALUE % ( 1000UL * getClockPresc ) ) << 16 ) / ( 1000UL * getClockPresc ) )

void __attribute__( ( noinline, section( ".RamFunc" ) ) ) Delay_Cyc( uint32_t cycle_num )
{
    while ( cycle_num-- )
    {
        __asm__ volatile( "nop" );
    }
}

void __attribute__( ( noinline ) ) Delay_us( uint32_t time_us )
{
    Delay_Cyc( ( time_us * DELAY_US_LOOPS_INT ) + ( ( time_us * DELAY_US_LOOPS_FRAC + 0xFFFFUL ) >> 16 ) );
}

void __attribute__( ( noinline ) ) Delay_ms( uint32_t time_ms )
{
    Delay_Cyc( (( time_ms * FOSC_KHZ_VALUE ) + ( getClockPresc - 1UL )) / getClockPresc );
}

void __attribute__( ( noinline ) ) Delay_Advanced_ms( uint32_t time_ms, uint32_t current_fosc_khz )
{

    Delay_Cyc( (( time_ms * current_fosc_khz ) + ( getClockPresc - 1UL )) / getClockPresc );
}

void Delay_1us()
{
    Delay_us( 1UL );
}

void Delay_5us()
{
    Delay_us( 5UL );
}

void Delay_6us()
{
    Delay_us( 6UL );
}

void Delay_9us()
{
    Delay_us( 9UL );
}

void Delay_10us()
{
    Delay_us( 10UL );
}

void Delay_22us()
{
    Delay_us( 22UL );
}

void Delay_50us()
{
    Delay_us( 50UL );
}

void Delay_55us()
{
    Delay_us( 55UL );
}

void Delay_60us()
{
    Delay_us( 60UL );
}

void Delay_64us()
{
    Delay_us( 64UL );
}

void Delay_70us()
{
    Delay_us( 70UL );
}

void Delay_80us()
{
    Delay_us( 80UL );
}

void Delay_410us()
{
    Delay_us( 410UL );
}

void Delay_480us()
{
    Delay_us( 480UL );
}

void Delay_500us()
{
    Delay_us( 500UL );
}

void Delay_5500us()
{
    Delay_us( 5500UL );
}

void Delay_1ms()
{
    Delay_ms( 1UL );
}

void Delay_5ms()
{
    Delay_ms( 5UL );
}

void Delay_8ms()
{
    Delay_ms( 8UL );
}

void Delay_10ms()
{
    Delay_ms( 10UL );
}

void Delay_100ms()
{
    Delay_ms( 100UL );
}

void Delay_1sec()
{
    Delay_ms( 1000UL );
}
