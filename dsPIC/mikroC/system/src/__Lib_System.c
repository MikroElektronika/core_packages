#include "built_in.h"

extern const long  __CONST_FAR_PREFIX;
const unsigned int __Lib_System_DefaultPage = 0;

void __CS2S()
{
    asm {
    L_loopCS2Ss:
        MOV.B [W1++], W2
        CP0.B W2
        BRA Z, L_CS2Send
        MOV.B W2, [W0++]
        BRA L_loopCS2Ss
    L_CS2Send:
    }
}

void __FZinS()
{
    asm {
    L_loopCS2Ss:
        MOV.B [W0++], W1
        CP0.B W1
        BRA NZ, L_loopCS2Ss
    DEC W0, W0
    }
}

void __AddToFarPointer( const void far ** ptr, unsigned long increment )
{
    char *        cPtr;
    unsigned long tmpD;

    if ( increment < 0x8000 ) {
        tmpD = *ptr + increment;
        if ( ( unsigned int )tmpD & 0x8000 ) {
            *ptr = tmpD;
            return;
        }
    }

    cPtr = ptr;

    if ( cPtr[ 2 ].F0 == 0 )
        cPtr[ 1 ].F7 = 0;

    cPtr[ 2 ] >>= 1;
    *( ( unsigned long * )cPtr ) += increment;

    cPtr[ 2 ] <<= 1;
    if ( cPtr[ 1 ].F7 )
        cPtr[ 2 ].F0 = 1;
    cPtr[ 1 ].F7 = 1;
}

void __FillZerosFar( void far * dest, unsigned long sizeinbytes )
{
    if ( ( unsigned int )( dest + ( sizeinbytes - 1 ) ) & 0x8000 ) {
        // Check if it is an odd number of bytes
        if ( ( unsigned int )dest & 1 ) // If it is an odd number of bytes
        {
            *( char far * )dest = 0;
            dest++;
        } else
            *( char far * )( dest + ( sizeinbytes - 1 ) ) = 0;

        if ( sizeinbytes > 1 ) {
            W4 = ( sizeinbytes >> 1 ) - 1;
            W5 = dest;
            asm
            {
                        MOV #0, W6
                        repeat W4
                        MOV W6,[W5++]
            }
        }
        return;
    }

    while ( sizeinbytes ) {
        *( char far * )dest = 0;
        if ( ( ( unsigned int )dest & 0x7FFF ) == 0x7FFF )
            __AddToFarPointer( ( const void far ** )&dest, 1 );
        else
            dest++;
        sizeinbytes--;
    }
}

void __SubFromFarPointer( const void far ** ptr, unsigned long decrement )
{
    char *        cPtr;
    unsigned long tmpD;

    if ( decrement < 0x8000 ) {
        tmpD = *ptr - decrement;
        if ( ( unsigned int )tmpD & 0x8000 ) {
            *ptr = tmpD;
            return;
        }
    }

    cPtr = ptr;

    if ( cPtr[ 2 ].F0 == 0 )
        cPtr[ 1 ].F7 = 0;

    cPtr[ 2 ] >>= 1;
    *( ( unsigned long * )cPtr ) -= decrement;

    cPtr[ 2 ] <<= 1;
    if ( cPtr[ 1 ].F7 )
        cPtr[ 2 ].F0 = 1;
    cPtr[ 1 ].F7 = 1;
}

const far char * __FlashAddressToFarPointer( unsigned long address )
{
    unsigned      lo;
    unsigned long result;

    lo     = address | 0x8000;

    result = address << 1;
    result &= 0xFFFF0000;
    result += lo;

    return result | ( __CONST_FAR_PREFIX << 16 );
}

far char * __DataAddressToFarPointer( unsigned long address )
{
    unsigned      lo;
    unsigned long result;

    lo     = address | 0x8000;

    result = address << 1;
    result &= 0xFFFF0000;
    result += lo;

    return result;
}

unsigned long __FarPointerToFlashAddress( const far char * ptr )
{
    unsigned      lo;
    unsigned long result;

    lo     = ( unsigned )ptr & 0x7FFF;

    result = ( unsigned long )ptr >> 1;
    result &= 0x00FF8000;
    result += lo;

    return result;
}

unsigned long __FarPointerToDataAddress( far char * ptr )
{
    unsigned      lo;
    unsigned long result;

    lo     = ( unsigned )ptr & 0x7FFF;

    result = ( unsigned long )ptr >> 1;
    result &= 0x00FF8000;
    result += lo;

    return result;
}

void __CFar2Far( void far * dest, void far * source, unsigned long sizeinbytes )
{
    if ( ( unsigned int )( dest + ( sizeinbytes - 1 ) ) & 0x8000 )
        if ( ( unsigned int )( source + ( sizeinbytes - 1 ) ) & 0x8000 ) {
            // Check if it is an odd number of bytes
            *( char far * )( dest + ( sizeinbytes - 1 ) ) = *( char far * )( source + ( sizeinbytes - 1 ) );
            if ( sizeinbytes > 1 ) {
                W4 = ( sizeinbytes >> 1 ) - 1;
                W5 = dest;
                W6 = source;
                asm
                {
                    repeat W4
                    MOV [W6++],[W5++]
                }
            }
            return;
        }

    while ( sizeinbytes ) {
        *( char far * )dest = *( char far * )source;
        if ( ( ( unsigned int )dest & 0x7FFF ) == 0x7FFF )
            __AddToFarPointer( ( const void far ** )&dest, 1 );
        else
            dest++;
        if ( ( ( unsigned int )source & 0x7FFF ) == 0x7FFF )
            __AddToFarPointer( ( const void far ** )&source, 1 );
        else
            source++;
        sizeinbytes--;
    }
}

void __CFar2FarSwZ( void far * dest, void far * source )
{
    char b;

    while ( 1 ) {
        b     = *( ( const far char * )source );
        *dest = b;
        if ( b == 0 ) {
            break;
        }

        if ( ( ( unsigned int )source & 0x7FFF ) == 0x7FFF ) {
            __AddToFarPointer( ( const void far ** )&source, 1 );
        } else {
            source++;
        }

        if ( ( ( unsigned int )dest & 0x7FFF ) == 0x7FFF ) {
            __AddToFarPointer( ( const void far ** )&dest, 1 );
        } else {
            dest++;
        }
    }

    W1 = HiWord( dest );
    W0 = LoWord( dest );
}

void __FZinFarS()
{
    far char * dest;

    LoWord( dest ) = W0;
    HiWord( dest ) = W1;

    while ( 1 ) {
        if ( *dest == 0 ) {
            break;
        }

        if ( ( ( unsigned int )dest & 0x7FFF ) == 0x7FFF ) {
            __AddToFarPointer( ( const void far ** )&dest, 1 );
        } else {
            dest++;
        }
    }

    W1 = HiWord( dest );
    W0 = LoWord( dest );
}

void __CFar2FarS()
{
    char             b;
    far char *       dest;
    const far char * source;

    LoWord( dest )   = W0;
    HiWord( dest )   = W1;

    LoWord( source ) = W2;
    HiWord( source ) = W3;

    while ( 1 ) {
        b = *( ( const far char * )source );
        if ( b == 0 ) {
            break;
        }

        *dest = b;

        if ( ( ( unsigned int )source & 0x7FFF ) == 0x7FFF ) {
            __AddToFarPointer( ( const void far ** )&source, 1 );
        } else {
            source++;
        }

        if ( ( ( unsigned int )dest & 0x7FFF ) == 0x7FFF ) {
            __AddToFarPointer( ( const void far ** )&dest, 1 );
        } else {
            dest++;
        }
    }
    W1 = HiWord( dest );
    W0 = LoWord( dest );
}
