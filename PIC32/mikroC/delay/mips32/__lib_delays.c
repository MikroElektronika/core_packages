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

void Delay_Cyc( unsigned long cycles_div_by_10 )
{ // Cycles_div_by_10 parameter range: min=2, max=4294967295
    unsigned long loc;

    loc = cycles_div_by_10;
    loc = loc - 2;    // this and NOPs on exit compensate code before loop
    while ( loc-- ) { // this loop should last 10cycles
        asm {
            NOP
            NOP
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
        NOP
        NOP
        NOP
        NOP
        NOP
    }
}

void Delay_Cyc_Long( unsigned long CycNo )
{ // CycNo parameter range: min=22, max=4294967295

    R3 = 0;
    R4 = 0xFFFFFFFC;
    if ( CycNo > 65536 ) {
        R1 = CycNo - 12;
    } else {
        R1 = CycNo - 10;
    }

    asm {
        ANDI  R2, R1, 0x01
        BEQ   R2, R0, jmp1
        NOP
        ADDI R3, R3, -1

    jmp1:
        ANDI  R2, R1, 0x02
        BEQ   R2, R0, jmp2
        NOP
        ADDI  R3, R3, -2
        NOP

    jmp2:
        AND   R1, R1, R4
        ADDI  R1, R1, -8

    loop:
        ADDI   R1, R1, -4
        BGTZ   R1, loop
    }
}

void VDelay_ms( unsigned long Time_ms )
{ // Time_ms parameter range: min=1, max=4294967295

    unsigned long NumberOfCyc;

    NumberOfCyc = Clock_kHz(); // cycles per millisecond
    NumberOfCyc *= Time_ms;    // total number of cycles

    NumberOfCyc >>= 5;         // divide with 31(loop duration is 32 cycles)
    NumberOfCyc -= 1;          // this and NOPs on exit compensate code before loop

    //  loop:
    while ( NumberOfCyc-- ) { // 32 cycles (together with jump from "}" to while)
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
        asm nop;
        asm nop;
        asm nop;
        asm nop;
    }

    // Exit: 22 nops
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
    asm nop;
    asm nop;
    asm nop;
    asm nop;
    asm nop;
    asm nop;
    asm nop;
}

void VDelay_Advanced_ms( unsigned long Time_ms, unsigned Current_Fosc_kHz )
{ // Time_ms parameter range: min=1, max=4294967295

    unsigned long NumberOfCyc;

    NumberOfCyc = Current_Fosc_kHz; // cycles per millisecond
    NumberOfCyc *= Time_ms;         // total number of cycles

    NumberOfCyc >>= 5;              // divide with 32 (loop duration is 32 cycles)
    NumberOfCyc -= 1;               // this and NOPs on exit compensate code before loop

    //  loop:
    while ( NumberOfCyc-- ) { // 32 cycles (together with jump from "}" to while)
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
        asm nop;
        asm nop;
        asm nop;
        asm nop;
    }

    // Exit: 21 nops
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
    asm nop;
    asm nop;
    asm nop;
    asm nop;
    asm nop;
    asm nop;
}
