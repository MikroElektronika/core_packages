/*
    cmath.c

 ------------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2024, MikroElektonika - www.mikroe.com

  All rights reserved.

---------------------------------------------------------------------------- */

#include "math.h"

/* ----------------------------PRIVATE MACROS------------------------------- */

#define EXCESS        126
#define MAX_EXPONENT  255

#define _FRNDINT(x)   ((double)(long)(x))

#if defined(__MIKROC_AI_FOR_PIC__)
#define DBL_MANT_DIG  24
#elif defined(__MIKROC_AI_FOR_ARM__) || defined(__MIKROC_AI_FOR_PIC32__) \
||    defined(__MIKROC_AI_FOR_DSPIC__) || defined(__MIKROC_AI_FOR_AVR__)
#define DBL_MANT_DIG  23
#endif

#define CHAR_BIT      8

/* -----------------------------PRIVATE TYPES------------------------------- */

#if defined(__MIKROC_AI_FOR_ARM__) || defined(__MIKROC_AI_FOR_PIC32__) \
 || defined(__MIKROC_AI_FOR_DSPIC__) || defined(__MIKROC_AI_FOR_AVR__)
static union both
{
    struct flt
    {
        unsigned short mant[ 2 ];
        unsigned int   hmant : 7;
        unsigned int   exp   : 8;
        unsigned int   sign  : 1;
    } flt;
    double fl;
};
#endif

/* ---------------------PRIVATE FUNCTION DECLARATIONS----------------------- */

/**
 * @brief Computes the result of a polynomial function.
 * @details This function computes the result of a polynomial function
 *          of degree `n` using the coefficients stored in the array
 *          `coeff_ptr`. It evaluates the polynomial for the given value
 *          `num`.
 * @param num The value for which the polynomial function is evaluated.
 * @param coeff_ptr Pointer to the array of coefficients representing
 *                  the polynomial function.
 * @param n The degree of the polynomial function.
 * @return The result of the polynomial function evaluation.
 */
static double eval_poly( double num, const double code * coeff_ptr, int n );

/* -----------------------PUBLIC FUNCTION DEFINITIONS----------------------- */

double fabs( double num )
{
    if ( num < 0.0 ) {
        return -num;
    }

    return num;
}

double floor( double num )
{
    double i;
    int    expon;

    expon = ( *( unsigned long * )&num >> DBL_MANT_DIG ) & 255;
    expon = expon - 127;

    if ( expon < 0 ) {
        if ( num < 0.0 ) {
            return -1.0;
        } else {
            return 0.0;
        }
    }

    if ( ( unsigned int )expon > sizeof( double ) * CHAR_BIT - 8 ) {
        return num; /* already an integer */
    }

    i = _FRNDINT( num );

    if ( i > num ) {
        return i - 1.0;
    }

    return i;
}

double ceil( double num )
{
    double i;
    int    expon;

    expon = ( ( *( unsigned long * )&num >> DBL_MANT_DIG ) & 255 ) - 127;
    if ( expon < 0 ) {
        if ( num <= 0.0 ) {
            return 0.0;
        } else {
            return 1.0;
        }
    }

    if ( ( ( int )expon ) > ( sizeof( double ) * CHAR_BIT - 8 ) ) {
        return num; /* already an integer */
    }

    i = _FRNDINT( num );

    if ( i < num ) {
        return i + 1.0;
    }

    return i;
}

double round( double num )
{
    double i;
    int expon;

    expon = ( ( *( unsigned long * ) & num >> DBL_MANT_DIG ) & 255 ) - 127;

    if ( expon < 0 )
    {
        if ( num < 0.0 )
            return -1.0;
        else
            return 0.0;
    }

    if ( ( unsigned int )expon > sizeof( float ) * CHAR_BIT - 8 )
        return num;

    i = _FRNDINT( num );

    double diff_down;
    double diff_up;

    if ( i < 0 )
    {
        diff_down = i - num;
        diff_up = i - 1.0 - num;
    }
    else
    {
        diff_down = num - i;
        diff_up = i + 1.0 - num;
    }

    diff_down = ( diff_down >= 0.0 ) ? diff_down : diff_down * ( -1.0 );
    diff_up = ( diff_up >= 0.0 ) ? diff_up : diff_up * ( -1.0 );

    if ( i >= 0 )
    {
        if ( diff_down < diff_up )
            return i;
        else
            return i + 1.0;
    }
    else
    {
        if ( diff_down >= diff_up )
            return i - 1.0;
        else
            return i;
    }
}

double frexp( double num, int * exp_ptr )
{
    #if defined(__MIKROC_AI_FOR_ARM__) || defined(__MIKROC_AI_FOR_PIC32__) \
     || defined(__MIKROC_AI_FOR_DSPIC__) || defined(__MIKROC_AI_FOR_AVR__)
    union both   uv;
    volatile int bb;

    uv.fl = num;
    bb = uv.flt.exp - EXCESS;
    *exp_ptr = bb;
    uv.flt.exp = EXCESS;

    return uv.fl;
    #elif defined(__MIKROC_AI_FOR_PIC__)
    char * pom;

    pom = &num;
    *exp_ptr = pom[ 3 ] - EXCESS;
    pom[ 3 ] = EXCESS;

    return num;
#endif
}

double ldexp( double num, int new_exp )
{
    #if defined(__MIKROC_AI_FOR_ARM__) || defined(__MIKROC_AI_FOR_PIC32__) \
     || defined(__MIKROC_AI_FOR_DSPIC__) || defined(__MIKROC_AI_FOR_AVR__)
    union both uv;

    uv.fl = num;
    new_exp += uv.flt.exp;

    if ( new_exp < 0 ) {
        return 0.0;
    } else {
        if ( new_exp > MAX_EXPONENT ) {
            if ( num < 0.0 ) {
                return -DBL_MAX;
            } else {
                return DBL_MAX;
            }
        } else {
            uv.flt.exp = new_exp;
        }
    }

    return uv.fl;
    #elif defined(__MIKROC_AI_FOR_PIC__)
    char * pom;

    pom = &num;
    new_exp += pom[ 3 ];
    if ( new_exp < 0 ) {
        return 0.0;
    } else if ( new_exp > MAX_EXPONENT ) {
        if ( num < 0.0 )
            return -DBL_MAX;
        else
            return DBL_MAX;
    } else {
        pom[ 3 ] = new_exp;
    }

    return num;
#endif
}

double modf( double num, double * int_ptr )
{
    char expon;
    char bbb;

    bbb = ( num >= 0.0 ) && ( num < 1.0 );

    if ( bbb || ( num > -1.0 ) && ( num <= 0.0 ) ) {
        *int_ptr = 0;
        return num;
    }

    expon = ( ( ( *( long * )&num >> DBL_MANT_DIG ) ) & 255 ) - 127;

    if ( expon > ( sizeof( double ) * CHAR_BIT - 8 ) ) {
        *int_ptr = num;
        return 0.0; // already an integer
    }

    *int_ptr = _FRNDINT( num );

    return num - *int_ptr;
}

double sqrt( double num )
{
    double og;
    double ng;
    short  niter;
    int    expon;

    if ( num <= 0.0 ) {
        return 0.0;
    }

    og = num;

    if ( og < 1.0 ) {
        og = 1.0 / og;
    }

    og = frexp( og, &expon );
    og = ldexp( og, expon / 2 );

    if ( num < 1.0 ) {
        og = 1.0 / og;
    }

    niter = 20;
    do {
        ng = ( num / og + og ) / 2.0;
        if ( ng == og ) {
            break;
        }
        og = ng;
    } while ( --niter );

    return og;
}

double atan( double num )
{
    static const double coeff_a[] =
    {
        33.058618473989548,
        58.655751569001961,
        32.390974856200445,
        5.8531952112628600,
        0.19523741936234277,
        -0.0024346033004411264
    };
    static const double coeff_b[] =
    {
        33.058618473992416,
        69.675291059524653,
        49.004348218216250,
        12.975578862709239,
        1.0
    };

    unsigned short recip;
    double         val;
    double         val_sqr;

    if ( ( val = fabs( num ) ) == 0.0 ) {
        return 0.0;
    }
    if ( recip = ( val > 1.0 ) ) {
        val = 1.0 / val;
    }

    val_sqr = val * val;
    val *= eval_poly( val_sqr, coeff_a, 5 );
    val /= eval_poly( val_sqr, coeff_b, 4 );

    if ( recip ) {
        val = HALF_PI - val;
    }

    if ( 0.0 > num )
        return -val;
    else
        return val;
}

double asin( double num )
{
    double y;

    if ( fabs( num ) > 1.0 ) {
        return 0.0;
    }

    y = sqrt( 1.0 - num * num );

    if ( fabs( num ) < 0.71 ) {
        return atan( num / y );
    }

    if ( num < 0.0 ) {
        return -( HALF_PI - atan( -y / num ) );
    }

    return ( HALF_PI - atan( y / num ) );
}

double acos( double num )
{
    return HALF_PI - asin( num );
}

double atan2( double y, double x )
{
    double v;

    if ( ( 0 == y ) && ( 0 == x ) ) {
        return 0.0;
    }

    if ( fabs( y ) >= fabs( x ) ) {
        v = -atan( x / y );

        if ( y > 0.0 ) {
            v += HALF_PI;
        } else {
            v -= HALF_PI;
        }

        return v;
    }

    v = atan( y / x );

    if ( x < 0.0 ) {
        if ( y >= 0.0 ) {
            v += PI;
        } else {
            v -= PI;
        }
    }

    return v;
}

double sin( double num )
{
    const static double coeff_a[] =
    {
        207823.68416961012,
        -76586.415638846949,
        7064.1360814006881,
        -237.85932457812158,
        2.8078274176220686
    };
    const static double coeff_b[] =
    {
        132304.66650864931,
        5651.6867953169177,
        108.99981103712905,
        1.0
    };
    double         num_sqr;
    unsigned short sgn;

    sgn = 0;
    if ( num < 0.0 ) {
        num = -num;
        sgn = 1;
    }

    num *= 1.0 / TWO_PI;
    num = 4.0 * ( num - floor( num ) );

    if ( num > 2.0 ) {
        num -= 2.0;
        sgn = !sgn;
    }
    if ( num > 1.0 ) {
        num = 2.0 - num;
    }

    num_sqr = num * num;
    num *= eval_poly( num_sqr, coeff_a, 4 );
    num /= eval_poly( num_sqr, coeff_b, 3 );

    if ( sgn ) {
        return -num;
    }

    return num;
}

double cos( double num )
{
    if ( num > PI ) {
        return sin( num - ( PI + HALF_PI ) );
    }

    return sin( num + HALF_PI );
}

double tan( double num )
{
    double tmp_1;
    double tmp_2;

    tmp_1 = sin( num );
    tmp_2 = cos( num );

    return tmp_1 / tmp_2;
}

double exp( double pow )
{
    int            exp;
    unsigned short sign;

    const static double coeff[] =
    {
        1.0000000000e+00,
        6.9314718056e-01,
        2.4022650695e-01,
        5.5504108945e-02,
        9.6181261779e-03,
        1.3333710529e-03,
        1.5399104432e-04,
        1.5327675257e-05,
        1.2485143336e-06,
        1.3908092221e-07,
    };

    if ( pow == 0.0 ) {
        return 1.0;
    }
    if ( pow > EXP_MAX ) // too big?
    {
        return DBL_MAX;
    }
    if ( pow < EXP_MIN ) // too small?
    {
        return 0.0;
    }

    sign = pow < 0.0;

    if ( sign ) {
        pow = -pow;
    }

    pow *= 1.4426950409; // convert to log2
    exp = ( int )floor( pow );
    pow -= ( double )exp;
    pow = ldexp( eval_poly( pow, coeff, sizeof coeff / sizeof coeff[ 0 ] - 1 ), exp );

    if ( sign ) {
        if ( pow == DBL_MAX ) {
            return 0.0;
        }
        return 1.0 / pow;
    }
    return pow;
}

double log( double num )
{
    int                 exp;
    static const double coeff[] =
    {
        0.0000000001,  // a0 //
        0.9999964239,  // a1 //
        -0.4998741238, // a2 //
        0.3317990258,  // a3 //
        -0.2407338084, // a4 //
        0.1676540711,  // a5 //
        -0.0953293897, // a6 //
        0.0360884937,  // a7 //
        -0.0064535442, // a8 //
    };

    // zero or -ve arguments are not defined //

    if ( num <= 0.0 ) {
        return 0.0;
    }

    num = frexp( num, &exp ) * 2.0 - 1.0;
    exp--;
    num = eval_poly( num, coeff, sizeof coeff / sizeof coeff[ 0 ] - 1 );

    return num + 0.69314718055995 * exp;
}

double log10( double num )
{
    return log( num ) * 0.4342944819;
}

double pow( double num, double pow )
{
    unsigned short sign = 0;
    long           pow_int;

    if ( pow == 0.0 ) {
        return 1.0;
    }

    if ( num == 0.0 ) {
        return 0.0;
    }

    if ( num < 0.0 ) {
        pow_int = ( long )pow;

        if ( ( double )pow_int != pow ) {
            return 0.0;
        }

        sign = pow_int & 1;
        num = -num;
    }
    num = log( num );
    num = num * pow;
    num = exp( num );

    if ( sign ) {
        return -num;
    }

    return num;
}

double sinh( double num )
{
    num = exp( num );

    return 0.5 * ( num - 1.0 / num );
}

double cosh( double num )
{
    num = exp( num );

    return 0.5 * ( num + 1.0 / num );
}

double tanh( double num )
{
    double num_exp;

    num_exp = exp( num );
    num = 1.0 / num_exp;

    return ( num_exp - num ) / ( num_exp + num );
}

/* ----------------------PRIVATE FUNCTION DEFINITIONS----------------------- */

static double eval_poly( double num, const double code * coeff_ptr, int n )
{
    double res;

    res = coeff_ptr[ n ];

    while ( n ) {
        res = num * res + coeff_ptr[ --n ];
    }

    return res;
}

// ----------------------------------------------------------------------------
/*
    cmath.c

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
