/*
    cstdio.c

 ------------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2024, MikroElektonika - www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

#include <cstdio.h>

#define MAX_STD_DBG_OUT_BUFFER_SIZE 48

#ifdef __GNUC__
#define code
#endif

#define __FLOAT            1
#define DOUBLE             0
#define DBL_MAX_EXP        128
#define DBL_MAX_10_EXP     38

#define _div_to_l_(a, b) ((uint32_t)((a) / (b)))

#if defined(__FLOAT) && !defined(__LONG)
#define __LONG 1
#endif

#define frexp(val, ptr) (*(ptr) = ((*(uint32_t *)&val >> 23) & 255) - 126)

/**
 * @note @b NDIG represents maximum number of digits to be printed.
 */
#ifdef __LONG
#define value long
#define NDIG  12
#else
#define value int
#define NDIG  6
#endif

#if DOUBLE
union
{
    uint32_t ul[ 40 ];
    float    db[ 20 ];
} _fdp = {
    0x00000001,
    0x00000000,
    0x0000000A,
    0x00000000,
    0x00000064,
    0x00000000,
    0x000003E8,
    0x00000000,
    0x00002710,
    0x00000000,
    0x000186A0,
    0x00000000,
    0x000F4240,
    0x00000000,
    0x00989680,
    0x00000000,
    0x05F5E100,
    0x00000000,
    0x3B9ACA00,
    0x00000000,
    0x540BE400,
    0x00000002,
    0x4876E800,
    0x00000017,
    0xD4A51000,
    0x000000E8,
    0x4E72A000,
    0x00000918,
    0x107A4000,
    0x00005AF3,
    0xA4C68000,
    0x00038D7E,
    0x6FC10000,
    0x002386F2,
    0x5D8A0000,
    0x01634578,
    0xA7640000,
    0x0DE0B6B3,
    0x89E80000,
    0x8AC72304
};

#define fdpowers _fdp.db

#else
#define fdpowers dpowers
#endif

/**
 * @note Tables of powers of 10, for use in @ref atof and @ref doprnt.
 */
static const code float _powers_[] = {
    1e0,
    1e1,
    1e2,
    1e3,
    1e4,
    1e5,
    1e6,
    1e7,
    1e8,
    1e9,
    1e10,
    1e20,
    1e30
};

static const code float _npowers_[] = {
    1e-0,
    1e-1,
    1e-2,
    1e-3,
    1e-4,
    1e-5,
    1e-6,
    1e-7,
    1e-8,
    1e-9,
    1e-10,
    1e-20,
    1e-30
};

static const code char hexb[] = "0123456789ABCDEF";
static const code char hexs[] = "0123456789abcdef";

const code static unsigned value dpowers[] = {
    1, 10, 100, 1000, 10000
#ifdef __LONG
    ,
    100000, 1000000, 10000000, 100000000,
    1000000000
#endif
};

const code static unsigned value hexpowers[] = {
    1, 0x10, 0x100, 0x1000
#if __LONG
    ,
    0x10000, 0x100000, 0x1000000, 0x10000000
#endif
};

const code static unsigned value octpowers[] = {
    1, 010, 0100, 01000, 010000, 0100000
#ifdef __LONG
    ,
    01000000, 010000000, 0100000000,
    01000000000, 010000000000,
    0000000000000
#endif
};

#ifdef __FLOAT
#define NDDIG (sizeof fdpowers / sizeof fdpowers[ 0 ])
#define expon signed char

/**
 * @brief Check if character is a digit.
 * @param[in] character Character value.
 * @return true/false
 */
static unsigned short __isdigit( char character )
{
    return ( ( character <= '9' ) && ( character >= '0' ) );
}

/**
 * @brief Return a rounded value.
 * @details This routine returns a value to round to the number of decimal
 *          places specified.
 * @param[in] prec number to be rounded.
 * @return float Returns rounded float value.
 */
static float fround( unsigned char prec )
{
    /**
     * @note prec is guaranteed to be less than NDIG.
     */
    if ( prec >= 110 ) {
        return 0.5 * _npowers_[ prec / 100 + 18 ] * _npowers_[ ( prec % 100 ) / 10 + 9 ] * _npowers_[ prec % 10 ];
    } else if ( prec > 10 ) {
        return 0.5 * _npowers_[ prec / 10 + 9 ] * _npowers_[ prec % 10 ];
    }

    return 0.5 * _npowers_[ prec ];
}

/**
 * @brief Return a scaled value.
 * @details This routine returns a scaling factor equal to 1 to the decimal
 *          power supplied.
 * @param[in] scl Exponent value used for calculation.
 * @return float Returns calculated float value.
 */
static float scale( expon scl )
{
    if ( scl < 0 ) {
        scl = -scl;
        if ( scl >= 110 ) {
            return _npowers_[ scl / 100 + 18 ] * _npowers_[ ( scl % 100 ) / 10 + 9 ] * _npowers_[ scl % 10 ];
        } else if ( scl > 10 ) {
            return _npowers_[ scl / 10 + 9 ] * _npowers_[ scl % 10 ];
        }

        return _npowers_[ scl ];
    }

    if ( scl >= 110 ) {
        return _powers_[ scl / 100 + 18 ] * _powers_[ ( scl % 100 ) / 10 + 9 ] * _powers_[ scl % 10 ];
    } else if ( scl > 10 ) {
        return _powers_[ scl / 10 + 9 ] * _powers_[ scl % 10 ];
    }

    return _powers_[ scl ];
}

#endif /* __FLOAT */

#define OPTSIGN 0x00
#define SPCSIGN 0x01
#define MANSIGN 0x02
#define NEGSIGN 0x03
#define FILL    0x04
#define LEFT    0x08
#define LONG    0x10
#define UPCASE  0x20
#define TEN     0x00
#define EIGHT   0x40
#define SIXTEEN 0x80
#define UNSIGN  0xC0
#define BASEM   0xC0
#define EFMT    0x100
#define GFMT    0x200
#define FFMT    0x400
#define ALTERN  0x800
#define DEFPREC 0x1000
#define POINTER 0x2000

int vfprintf_me( void ( *stream )( char ch ), const char * format, register va_list arg )
{
    int      prec;
    char     c;
    int      width;
    unsigned flag;
    int      ccnt = 0;
#ifdef __FLOAT
    float fval;
    int   exp;
#if DOUBLE
    float ival;
#endif
    union
    {
        unsigned value _val;
        struct
        {
            const char * _cp;
            unsigned     _len;
        } _str;
        float _integ;
    } _val;
#else
    union
    {
        unsigned value _val;
        struct
        {
            const char * _cp;
            unsigned     _len;
        } _str;
    } _val;
#endif

#define val   _val._val
#define cp    _val._str._cp
#define len   _val._str._len
#define integ _val._integ

    flag = 0;
    while ( c = *format++ ) {
        if ( c != '%' ) {
            stream( c );
            continue;
        }
        width = 0;
        flag = 0;
        for ( ;; ) {
            switch ( *format ) {
                case '-':
                    flag |= LEFT;
                    format++;
                    continue;

                case ' ':
                    flag |= SPCSIGN;
                    format++;
                    continue;

                case '+':
                    flag |= MANSIGN;
                    format++;
                    continue;

                case '#':
                    flag |= ALTERN;
                    format++;
                    continue;

                case '0':
                    flag |= FILL;
                    format++;
                    continue;
            }
            break;
        }
        if ( flag & MANSIGN )
            flag &= ~SPCSIGN;
        if ( flag & LEFT )
            flag &= ~FILL;
        if ( __isdigit( ( unsigned )*format ) ) {
            width = 0;
            do
                width = width * 10 + *format++ - '0';
            while ( __isdigit( ( unsigned )*format ) );
        } else if ( *format == '*' ) {
            width = va_arg( arg, int );
            format++;
        }
        if ( *format == '.' )
            if ( *++format == '*' ) {
                prec = va_arg( arg, int );
                format++;
            } else {
                prec = 0;
                while ( __isdigit( ( unsigned )*format ) )
                    prec = prec * 10 + *format++ - '0';
            }
        else {
            prec = 0;
#ifdef __FLOAT
            flag |= DEFPREC;
#endif
        }
#ifdef __LONG
    loop:
#endif
        switch ( c = *format++ ) {
            case 0:
                return ccnt;
            case 'l':
            case 'L':
#ifdef __LONG
                flag |= LONG;
                goto loop;
#else
                cp = "non-long printf";
                goto strings;
#endif

#ifndef __FLOAT
            case 'E':
            case 'f':
            case 'e':
            case 'g':
                cp = "non-float printf";
                prec = 0;
                goto strings;
#else
            case 'f':
                flag |= FFMT;
                break;

            case 'E':
                flag |= UPCASE;
            case 'e':
                flag |= EFMT;
                break;
            case 'g':
                flag |= GFMT;
                break;
#endif
            case 'o':
                flag |= EIGHT;
                break;

            case 'd':
            case 'i':
                break;

            case 'p':

            case 'X':
                flag |= UPCASE;
            case 'x':
                flag |= SIXTEEN;
                break;

            case 's':
                cp = va_arg( arg, const char * );
#if !defined( __FLOAT )
            strings:
#endif
                if ( cp == 0 )
                    cp = "null";
                len = 0;
                while ( cp[ len ] )
                    len++;
            dostring:
                if ( prec && ( prec < len ) )
                    len = prec;
                if ( width > len )
                    width -= len;
                else
                    width = 0;
                if ( !( flag & LEFT ) )
                    while ( width-- )
                        stream( ' ' );
                while ( len-- )
                    stream( *cp++ );

                if ( flag & LEFT )
                    while ( width-- )
                        stream( ' ' );
                continue;
            case 'c':
                c = va_arg( arg, int );
            default:
                cp = &c;
                len = 1;
                goto dostring;

            case 'u':
                flag |= UNSIGN;
                break;
        }
#ifdef __FLOAT
        if ( flag & ( EFMT | GFMT | FFMT ) ) {
            if ( flag & DEFPREC )
                prec = 6;
            fval = va_arg( arg, double );
            if ( fval < 0.0 ) {
                fval = -fval;
                flag |= NEGSIGN;
            }
            /**
             * @note If the number is zero, the exponent is zero.
             */
            exp = 0;
            if ( fval != 0 ) {
                /**
                 * @note If the number is non-zero, find the exponent.
                 *       get binary exponent and adjust 0.5 -> 1.0
                 */
                frexp( fval, &exp );
                exp--;
                exp *= 3;
                /**
                 * @note Estimate decimal exponent.
                 */
                exp /= 10;
                if ( exp < 0 )
                    exp--;
                integ = fval * scale( -exp );
                if ( integ < 1.0 )
                    exp--;
                else if ( integ >= 10.0 )
                    exp++;
            }

            if ( exp <= 0 )
                c = 1;
            else
                c = exp;

            if ( flag & EFMT || flag & GFMT && ( exp < -4 || exp >= ( int )prec ) ) {
                /**
                 * @note Use e format
                 */
                if ( prec && flag & GFMT )
                    /**
                     * @note g format precision includes integer digit.
                     */
                    prec--;
                if ( ( unsigned )prec > NDDIG - 2 )
                    c = NDDIG - 2;
                else
                    c = prec;

                if ( fval != 0 ) {
                    /**
                     * @note Normalize only if the number is non-zero.
                     */
                    fval /= scale( exp );
                    fval /= scale( -c );
                    if ( fval - ( float )( unsigned long )fval >= 0.5 )
                        fval += 0.5;
                    if ( ( unsigned long )fval >= fdpowers[ c + 1 ] ) {
                        fval *= 1e-1;
                        exp++;
                    } else if ( ( unsigned long )fval < fdpowers[ c ] ) {
                        fval *= 10.0;
                        exp--;
                    }
                }

                if ( flag & GFMT && !( flag & ALTERN ) ) {
                    /**
                     * @note g format, precision means something different.
                     */
                    if ( prec > ( int )( NDDIG ) )
                        prec = NDDIG;
                    val = ( unsigned long )fval;
                    while ( val && val % 10 == 0 ) {
                        prec--;
                        val /= 10;
                    }
                    if ( prec < c ) {
                        fval /= scale( c - prec );
                        c = prec;
                    }
                }

                width -= prec + 5;
                if ( prec || flag & ALTERN )
                    width--;

                if ( flag & ( MANSIGN | SPCSIGN ) )
                    width--;

                if ( flag & FILL ) {
                    if ( flag & MANSIGN )
                        stream( flag & SPCSIGN ? '-' : '+' );
                    else if ( flag & SPCSIGN )
                        stream( ' ' );
                    while ( width > 0 ) {
                        stream( '0' );
                        width--;
                    }
                } else {
                    if ( !( flag & LEFT ) )
                        while ( width > 0 ) {
                            stream( ' ' );
                            width--;
                        }
                    if ( flag & MANSIGN )
                        stream( flag & SPCSIGN ? '-' : '+' );
                    else if ( flag & SPCSIGN )
                        stream( ' ' );
                }

                val = ( unsigned long )fval;
                stream( val / fdpowers[ c ] + '0' );

                if ( prec || flag & ALTERN ) {
                    stream( '.' );
                    prec -= c;
                    while ( c ) {
                        stream( '0' + ( val / fdpowers[ --c ] ) % 10 );
                    }
                    while ( prec ) {
                        stream( '0' );
                        prec--;
                    }
                }

                if ( flag & UPCASE )
                    stream( 'E' );
                else
                    stream( 'e' );

                if ( exp < 0 ) {
                    exp = -exp;
                    stream( '-' );
                } else
                    stream( '+' );

                stream( exp / 10 + '0' );
                stream( exp % 10 + '0' );

                if ( ( flag & LEFT ) && width > 0 )
                    do
                        stream( ' ' );
                    while ( --width );
                continue;
            }

            if ( flag & GFMT ) {
                if ( exp < 0 )
                    prec -= exp - 1;
                val = ( unsigned long )fval;
                for ( c = 1; c != NDDIG; c++ )
                    if ( val < fdpowers[ c ] )
                        break;
                prec -= c;
                val = ( unsigned long )( ( fval - ( float )val ) * scale( prec ) + 0.5 );
                while ( prec && val % 10 == 0 ) {
                    val /= 10;
                    prec--;
                }
            }

            if ( prec <= NDIG )
                fval += fround( prec );

            /**
             * @note ~4.2e9 is the largest float that will with into a 32-bit long.
             */
            if ( fval != 0 && ( unsigned long )fval == 0 && exp > 1 ) {
                /**
                 * @note fval is > 4.2e9
                 * @attention exp must be such that div_to_l() is < 4.2e9
                 */
                if ( fval / scale( exp ) < 4.294967296 )
                    exp -= NDDIG - 1;
                else
                    exp -= NDDIG - 2;
                val = _div_to_l_( fval, scale( exp ) );
                fval = 0.0;
            } else {
                val = ( unsigned long )fval;
                fval -= ( float )val;
                exp = 0;
            }

            for ( c = 1; c != NDDIG; c++ )
                if ( val < fdpowers[ c ] )
                    break;

            width -= prec + c + exp;

            if ( flag & ALTERN || prec )
                width--;

            if ( flag & ( MANSIGN | SPCSIGN ) )
                width--;

            if ( flag & FILL ) {
                if ( flag & MANSIGN )
                    stream( flag & SPCSIGN ? '-' : '+' );
                else if ( flag & SPCSIGN )
                    stream( ' ' );

                while ( width > 0 ) {
                    stream( '0' );
                    width--;
                }
            } else {
                if ( !( flag & LEFT ) )
                    while ( width > 0 ) {
                        stream( ' ' );
                        width--;
                    }

                if ( flag & MANSIGN )
                    stream( flag & SPCSIGN ? '-' : '+' );
                else if ( flag & SPCSIGN )
                    stream( ' ' );
            }

            while ( c-- )
                stream( '0' + ( val / fdpowers[ c ] ) % 10 );

            while ( exp > 0 ) {
                stream( '0' );
                exp--;
            }

            if ( prec > ( int )( NDDIG - 2 ) )
                c = NDDIG - 2;
            else
                c = prec;

            prec -= c;
            if ( c || flag & ALTERN )
                stream( '.' );

            val = ( long )( fval * scale( c ) );
            while ( c )
                stream( '0' + ( val / fdpowers[ --c ] ) % 10 );

            while ( prec ) {
                stream( '0' );
                prec--;
            }

            if ( ( flag & LEFT ) && width > 0 )
                do
                    stream( ' ' );
                while ( --width );
            continue;
        }
#endif /* __FLOAT */
        if ( ( flag & BASEM ) == TEN ) {
#ifdef __LONG
            if ( flag & LONG )
                val = va_arg( arg, long );
            else
#endif
                val = ( value )va_arg( arg, int );

            if ( ( value )val < 0 ) {
                flag |= NEGSIGN;
                val = -val;
            }
        } else {
#ifdef __LONG
            if ( flag & LONG )
                val = va_arg( arg, unsigned long );
            else
#endif
                val = va_arg( arg, unsigned );
        }
        if ( prec == 0 && val == 0 )
            prec++;

        switch ( ( unsigned char )( flag & BASEM ) ) {
            case TEN:
            case UNSIGN:
                for ( c = 1; c != sizeof dpowers / sizeof dpowers[ 0 ]; c++ )
                    if ( val < dpowers[ c ] )
                        break;
                break;

            case SIXTEEN:
                for ( c = 1; c != sizeof hexpowers / sizeof hexpowers[ 0 ]; c++ )
                    if ( val < hexpowers[ c ] )
                        break;
                break;

            case EIGHT:
                for ( c = 1; c != sizeof octpowers / sizeof octpowers[ 0 ]; c++ )
                    if ( val < octpowers[ c ] )
                        break;
                break;
        }

        if ( c < prec )
            c = prec;
        else if ( prec < c )
            prec = c;

        if ( width && flag & NEGSIGN )
            width--;

        if ( width > prec )
            width -= prec;
        else
            width = 0;

        if ( ( flag & ( FILL | BASEM | ALTERN ) ) == ( EIGHT | ALTERN ) ) {
            if ( width )
                width--;
        } else if ( ( flag & ( BASEM | ALTERN ) ) == ( SIXTEEN | ALTERN ) ) {
            if ( width > 2 )
                width -= 2;
            else
                width = 0;
        }

        if ( flag & FILL ) {
            if ( flag & MANSIGN )
                stream( flag & SPCSIGN ? '-' : '+' );
            else if ( flag & SPCSIGN )
                stream( ' ' );
            else if ( ( flag & ( BASEM | ALTERN ) ) == ( SIXTEEN | ALTERN ) ) {
                stream( '0' );
                stream( flag & UPCASE ? 'X' : 'x' );
            }

            if ( width )
                do
                    stream( '0' );
                while ( --width );
        } else {
            if ( width && !( flag & LEFT ) )
                do
                    stream( ' ' );
                while ( --width );

            if ( flag & MANSIGN )
                stream( flag & SPCSIGN ? '-' : '+' );
            else if ( flag & SPCSIGN )
                stream( ' ' );

            if ( ( flag & ( BASEM | ALTERN ) ) == ( EIGHT | ALTERN ) )
                stream( '0' );
            else if ( ( flag & ( BASEM | ALTERN ) ) == ( SIXTEEN | ALTERN ) ) {
                stream( '0' );
                stream( flag & UPCASE ? 'X' : 'x' );
            }
        }

        while ( prec > c )
            stream( '0' );

        while ( prec-- ) {
            switch ( ( unsigned char )( flag & BASEM ) ) {
                case TEN:
                case UNSIGN:
                    c = ( val / dpowers[ prec ] ) % 10 + '0';
                    break;

                case SIXTEEN:
                    if ( flag & UPCASE )
                        c = hexb[ ( val / hexpowers[ prec ] ) & 0xF ];
                    else
                        c = hexs[ ( val / hexpowers[ prec ] ) & 0xF ];
                    break;

                case EIGHT:
                    c = ( ( val / octpowers[ prec ] ) & 07 ) + '0';
                    break;
            }
            stream( c );
        }

        if ( ( flag & LEFT ) && width > 0 )
            do
                stream( ' ' );
            while ( --width );
    }

    return ccnt;
}

int fprintf_me( void ( *stream )( char ch ), const char * format, ... )
{
    int     cnt = 0;
    va_list arg;

    va_start( arg, format );
    cnt = vfprintf_me( stream, format, arg );

    return cnt;
}

int printf_me( const char * format, ... )
{
    int     cnt = 0;
    va_list arg;

    va_start( arg, format );
    cnt = vfprintf_me( &debugStdOut, format, arg );

    return cnt;
}

/* Following function used for MikroE std printout. */
static char __debugBuffer[ MAX_STD_DBG_OUT_BUFFER_SIZE ] = { 0 };
static char buffPos = 0;
static char lastPos = 0;
static int  counterID = 0;

void debugStdOut( char ch )
{
    if ( 0 == buffPos )
        lastPos = 0;

    __debugBuffer[ buffPos++ ] = ch;

    if ( ( buffPos >= MAX_STD_DBG_OUT_BUFFER_SIZE ) || ( ch == '\n' ) ) {
        lastPos = buffPos;
        counterID++;
        stdBuffFullBreak();
        buffPos = 0;
        ch = 0;
    }
}

// ----------------------------------------------------------------------------
/*
    cstdio.c

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
