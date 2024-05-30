/*
    cstdlib.c

 ------------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2024, MikroElektonika - www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

#include "ctype.h"
#include "stdlib.h"

/* ----------------------------PRIVATE MACROS-------------------------------- */

// Macros for strtod() function
#define ISNEG   1  // Number is negative
#define DIGSEEN 2  // We saw at least one digit
#define EXPNEG  8  // Exponent is negative
#define DOTSEEN 16 // We have seen a dot

/* -------------------------------VARIABLES---------------------------------- */

static long randx;
static int  randf;

/* ---------------------PRIVATE FUNCTION DECLARATIONS------------------------ */

/**
 * @brief Converts string to number of type <float>
 * @param str pointer to the null-terminated byte string to be interpreted
 * @param res pointer to a pointer to character.
 * @return float value corresponding to the contents of str on success.
 */
static float strtod( const char * __generic str, char ** res );

/* -----------------------PUBLIC FUNCTION DEFINITIONS------------------------ */

int abs( int num )
{
    if ( num < 0 ) {
        return -num;
    }

    return num;
}

float atof( const char * __generic str )
{
    return strtod( str, 0 );
}

int atoi( const char * __generic str )
{
    int          c;
    int          a;
    unsigned int sign;

skipws_atoi:

    c = *str;
    if ( ( c == ' ' ) || ( c == '\t' ) ) {
        str++;
        goto skipws_atoi;
    }

    a    = 0;
    sign = 0;
    if ( c == '-' ) {
        sign++;
        str++;
    } else {
        if ( c == '+' ) {
            str++;
        }
    }

conv_atoi:

    c = *str;
    if ( isdigit( c ) ) {
        a = a * 10 + ( c - '0' );
        str++;
        goto conv_atoi;
    }

    if ( sign ) {
        return -a;
    }

    return a;
}

long atol( const char * __generic str )
{
    int           c;
    long          a;
    unsigned long sign;

skipws_atol:

    c = *str;
    if ( ( c == ' ' ) || ( c == '\t' ) ) {
        str++;
        goto skipws_atol;
    }

    a    = 0;
    sign = 0;
    if ( *str == '-' ) {
        sign++;
        str++;
    } else {
        if ( *str == '+' ) {
            str++;
        }
    }

conv_atol:

    c = *str;
    if ( isdigit( c ) ) {
        a = a * 10L + ( c - '0' );
        str++;
        goto conv_atol;
    }

    if ( sign ) {
        return -a;
    }

    return a;
}

div_t div( int number, int denom )
{
    div_t rv;

    rv.quot = number / denom;
    rv.rem  = number % denom;

    return rv;
}

ldiv_t ldiv( long number, long denom )
{
    ldiv_t rv;

    rv.quot = number / denom;
    rv.rem  = number % denom;

    return rv;
}

uldiv_t uldiv( unsigned long number, unsigned long denom )
{
    uldiv_t rv;

    rv.quot = number / denom;
    rv.rem  = number % denom;

    return rv;
}

long labs( long num )
{
    if ( num < 0 ) {
        return -num;
    }

    return num;
}

int max( int num1, int num2 )
{
    if ( num1 >= num2 ) {
        return num1;
    }

    return num2;
}

int min( int num1, int num2 )
{
    if ( num1 >= num2 ) {
        return num2;
    }

    return num1;
}

void srand( unsigned seed )
{
    randx = seed;
    randf = 1;
}

int rand()
{
    if ( !randf ) {
        srand( 1 );
    }

    randx = ( ( randx * 1103515245L ) + 12345 ) >> 16 & 077777;

    return ( int )randx;
}

int xtoi( const char * __generic str )
{
    unsigned int sign;
    unsigned int c;
    unsigned     val;

    sign = 0;
    val  = 0;

    while ( isspace( *str ) ) {
        str++;
    }

    if ( *str == '-' ) {
        sign++;
        str++;
    } else {
        if ( *str == '+' ) {
            str++;
        }
    }

    while ( isxdigit( c = *str++ ) ) {
        if ( isupper( c ) ) {
            c = tolower( c );
        }

        if ( isdigit( c ) ) {
            c -= '0';
        } else {
            c -= 'a' - 10;
        }

        val *= 16;
        val += ( unsigned short )c;
    }

    if ( sign ) {
        return -val;
    }

    return val;
}

/* -----------------------PRIVATE FUNCTION DEFINITIONS----------------------- */

static float strtod( const char * __generic str, char * __generic * res )
{
    unsigned int flags;
    int          expon;
    int          eexp;

    union // A union to hold the integer
    {     // component and then the resultant
        float _l;
        long  _v;
    } _u;

    if ( res ) {
        *res = str;
    }

    while ( isspace( eexp = *str ) ) {
        str++;
    }

    flags = 0;           // Reset flags
    if ( eexp == '-' ) { // Check for sign
        flags = ISNEG;
        str++;
    } else {
        if ( eexp == '+' ) {
            str++;
        }
    }

    eexp  = 0; // Clear digit count
    _u._v = 0; // Clear integer component
    expon = 0; // Total exponent for integer

    for ( ;; ) {
        if ( !( flags & DOTSEEN ) && ( *str == '.' ) ) {
            flags |= DOTSEEN;      // If into decimal
            str++;                 // set flag
            continue;
        }
        if ( !isdigit( *str ) )    // If end of valid
        {
            break;                 // sequence end
        }

        flags |= DIGSEEN;          // else set flag
        if ( eexp != NDIG ) {
            if ( flags & DOTSEEN ) // Count decimal
            {
                expon--;           // places
            }

            eexp++;
            _u._v *= 10;
            asm nop;
            asm nop;
            _u._v += ( *str - '0' );
            asm nop;
            asm nop;
        } else if ( !( flags & DOTSEEN ) ) {
            expon++;
        }

        str++;
    }

    eexp = 0;                                 // Zero users exponent
    if ( ( *str == 'e' ) || ( *str == 'E' ) ) // Look at exponent
    {
        if ( *++str == '-' ) {                // Check sign
            flags |= EXPNEG;
            str++;
        } else {
            if ( *str == '+' ) {
                str++;
            }
        }

        while ( *str == '0' ) {
            str++;             // Skip leading zeros
        }

        if ( isdigit( *str ) ) // Read three digits
        {
            eexp = ( unsigned short )( *str++ - '0' );
            if ( isdigit( *str ) ) {
                eexp = eexp * 10 + ( unsigned short )( *str++ - '0' );
                if ( isdigit( *str ) ) {
                    eexp = eexp * 10 + ( unsigned short )( *str - '0' );
                }
            }
        }
        if ( flags & EXPNEG ) {
            eexp = -eexp;
        }
    }

    expon += eexp; // Add user and integer exponents

    if ( ( res != 0 ) && ( flags & DIGSEEN ) ) {
        *res = str;
    }

    _u._l = ( float )_u._v;
    if ( _u._l == 0.0 ) // simply return zero
    {
        return 0.0;
    }

    if ( expon < 0 ) {
        expon = -expon;
        #if DBL_MAX_10_EXP >= 100
        while ( expon >= 100 ) {
            _u._l *= 1e-100;
            expon -= 100;
        }
        #endif
        while ( expon >= 10 ) {
            _u._l *= 1e-10;
            expon -= 10;
        }

        while ( expon != 0 ) {
            _u._l *= 1e-1;
            expon--;
        }

        if ( _u._l < DBL_MIN ) {
            if ( flags & ISNEG ) {
                return -DBL_MIN;
            } else {
                return DBL_MIN;
            }
        }
    } else if ( expon > 0 ) {
        #if DBL_MAX_10_EXP >= 100
        while ( expon >= 100 ) {
            _u._l *= 1e100;
            expon -= 100;
        }
        #endif
        while ( ( unsigned short )expon >= 10 ) {
            _u._l *= 1e10;
            expon -= 10;
        }

        while ( expon != 0 ) {
            _u._l *= 1e1;
            expon--;
        }

        if ( _u._l > DBL_MAX ) {
            if ( flags & ISNEG ) {
                return -DBL_MAX;
            } else {
                return DBL_MAX;
            }
        }
    }
    if ( flags & ISNEG ) {
        return -_u._l;
    } else {
        return _u._l;
    }
}

// ----------------------------------------------------------------------------
/*
    cstdlib.c

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
