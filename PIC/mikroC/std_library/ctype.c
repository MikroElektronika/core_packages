/*
    ctype.c

 ------------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2024, MikroElektonika - www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

#include "ctype.h"
#include "stdbool.h"

/* -----------------------PUBLIC FUNCTION DEFINITIONS------------------------ */

unsigned short islower( char character )
{
    return ( ( character <= 'z' ) && ( character >= 'a' ) );
}

unsigned short isupper( char character )
{
    return ( ( character <= 'Z' ) && ( character >= 'A' ) );
}

unsigned short isalpha( char character )
{
    return ( islower( character ) || isupper( character ) );
}

unsigned short iscntrl( char character )
{
    return ( ( character <= 31 ) || ( character == 127 ) );
}

unsigned short isdigit( char character )
{
    return ( ( character <= '9' ) && ( character >= '0' ) );
}

unsigned short isalnum( char character )
{
    return ( isdigit( character ) ||
             islower( character ) ||
             isupper( character ) );
}

unsigned short isspace( char character )
{
    return ( ( character == ' ' ) ||
             ( character <= 015 ) &&
                 ( character >= 011 ) );
}

unsigned short ispunct( char character )
{
    unsigned short rslt;

    rslt = ( character >= 041 ) && ( character <= 057 );
    rslt |= ( character >= 072 ) && ( character <= 0100 );
    rslt |= ( character >= 0133 ) && ( character <= 0140 );
    rslt |= ( character >= 0173 ) && ( character <= 0176 );

    return rslt;
}

unsigned short isgraph( char character )
{
    return ( isdigit( character ) ||
             islower( character ) ||
             isupper( character ) ||
             ispunct( character ) );
}

unsigned short isxdigit( char character )
{
    char rslt;

    rslt = ( character <= 'f' ) && ( character >= 'a' );
    rslt |= ( character <= 'F' ) && ( character >= 'A' );
    rslt |= isdigit( character );

    return rslt;
}

char tolower( char character )
{
    if ( ( character <= 'Z' ) && ( character >= 'A' ) ) {
        character |= ( 'a' - 'A' );
    }
    return character;
}

char toupper( char character )
{
    if ( ( character <= 'z' ) && ( character >= 'a' ) ) {
        character &= ~( 'a' - 'A' );
    }
    return character;
}

// ----------------------------------------------------------------------------
/*
    ctype.c

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
