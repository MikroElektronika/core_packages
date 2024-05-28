/*
    math.h

 ------------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2024, MikroElektonika - www.mikroe.com

  All rights reserved.

---------------------------------------------------------------------------- */

/**
 * @file   math.h
 * @brief  Standard C math function declarations.
 * @{
 */

/* ------------------------------------------------------------------------- */

#ifndef _MATH_H_
#define _MATH_H_

#ifdef __cplusplus
extern "C"{
#endif

#include <stdint.h>

/* -----------------------------PUBLIC MACROS------------------------------- */

#define PI          3.14159265358979
#define TWO_PI      6.28318530717958
#define HALF_PI     1.570796326794895
#define EXP_MAX     89.416
#define EXP_MIN    -87.33655
#define DBL_MAX     3.40282347e+38

/* ----------------------PUBLIC FUNCTION DECLARATIONS----------------------- */

/**
 * @brief Calculates floating point absolute value of given number.
 * @details fabs function computes the absolute value of a
 *          floating-point number num.
 * @param num Number which the absolute value is calculated for.
 * @return The fabs function returns the absolute value of num.
 */
double fabs( double num );

/**
 * @brief Rounds a number DOWN to the nearest integer.
 * @details The floor function computes the largest integral value not greater
 *          than num.
 * @param num Number to be rounded.
 * @return The floor function returns the largest integral value not greater
 *         than num. expressed as a double.
 */
double floor( double num );

/**
 * @brief Rounds a number UP to the nearest integer.
 * @details The ceil function computes the smallest integral value not less
 *          than num.
 * @param num Number to be rounded.
 * @return The ceil function returns the smallest integral value not less than
 *         num, expressed as a double.
 */
double ceil( double num );

/**
 * @brief Function splits a floating-point number.
 * @details frexp function breaks a floating-point number into a normalized
 *          fraction and an integral power of 2. It stores the integer in
 *          the int object pointed to by exp_ptr.
 * @param num Floating point number that gets split.
 * @param exp_ptr Pointer to variable in which the exponent gets stored.
 * @return The frexp function returns the value x, such that x is a double with
 *         magnitude in the interval [1/2, 1) or zero, and value equals
 *         x times 2 raised to the power *exp. If value is zero, both parts
 *         of the result are zero.
 */
double frexp( double num, int16_t * exp_ptr );

/**
 * @brief Calculates the result of multiplying the floating-point number by 2
 *        raised to the power n.
 * @details ldexp function multiplies a floating-point number by an integral
 *          power of 2. A range error may occur.
 * @param num Floating point number to be multiplied.
 * @param new_exp Integral exponent.
 * @return The ldexp function returns the value of num times 2 raised to the
 *         power new_exp.
 */
double ldexp( double num, int16_t new_exp );

/**
 * @brief Splits argument num to the fractional part (function return value)
 *        and integer part (in number int_ptr).
 * @details modf function breaks the argument value into integral and
 *          fractional parts, each of which has the same sign as the argument.
 *          It stores the integral part as a double in the object pointed to
 *          by int_ptr.
 * @param num Number that gets split.
 * @param int_ptr Pointer to variable in which the integer part gets stored.
 * @return The modf function returns the signed fractional part of num.
 */
double modf( double num, double * int_ptr );

/**
 * @brief Calculates square root of given number
 * @details The sqrt function computes the nonnegative square root of num.
 *          A domain error occurs if the argument is negative.
 * @param num Number the square root is calculated for.
 * @return The sqrt function returns the value of the square root.
 */
double sqrt( double num );

/**
 * @brief Calculates arc tangent of given number.
 * @details The atan function computes the principal value of the arc tangent
 *          of num.
 * @param num Number the arctangent is calculated for.
 * @return The atan function returns the arc tangent
 *         in the range [-?/2, +?/2] radians.
 */
double atan( double num );

/**
 * @brief Calculates the arc sine of given number, in range [-1..+1].
 * @details The asin function computes the principal value
 *          of the arc sine of num. A domain error occurs for arguments not
 *          in the range [-1, +1].
 * @param num Number the arcsine is calculated for.
 * @return The asin function returns the arc sine
 *         in the range [-?/2. +?/2] radians.
 */
double asin( double num );

/**
 * @brief Calculates the arccosine of given number, in range [-1..+1].
 * @brief acos function computes the principal value
 *        of the arc cosine of num. A domain error occurs for arguments not
 *        in the range [-1, +1].
 * @param num Number which the arc cosine is calculated for.
 * @return The acos function returns the arc cosine
 *         in the range [0, ?] radians.
 */
double acos( double num );

/**
 * @brief Calculates the arctangent of given number, in range [-1..+1].
 * @details The atan2 function computes the principal value of the arc tangent
 *          of y/x, using the signs of both arguments to determine the quadrant
 *          of the return value.
 *          A domain error may occur if both arguments are zero.
 * @param y First value.
 * @param x Second value.
 * @return The atan2 function returns the arc tangent of y/x
 *         in the range [-?, +?] radians.
 */
double atan2( double y, double  x );

/**
 * @brief Calculates the sine of a given angle (in radians).
 * @details The sin function computes the sine of num (measured in radians).
 * @param num Number the sine is calculated for.
 * @return The sin function returns the sine value.
 */
double sin( double num );

/**
 * @brief Calculates the cosine of a given angle (in radians).
 * @details The cos function computes the cosine of num (measured in radians).
 * @param num Number the cosine is calculated for.
 * @return The cos function returns the cosine value.
 */
double cos( double num );

/**
 * @brief Calculates the tangent of given angle (in radians).
 * @details tan function returns the tangent of num (measured in radians).
 * @param num Number the tangent is calculated for.
 * @return The tan function returns the tangent value.
 */
double tan( double num );

/**
 * @brief Calculates the number e raised to the power of argument pow.
 * @details exp function computes the exponential function of pow.
 *          A range error occurs if the magnitude of pow is too large.
 * @param pow Power which the e constant is to be raised for.
 * @return The exp function returns the exponential value raised
 *         to the power of pow.
 */
double exp( double pow );

/**
 * @brief Calculates the natural logarithm - ln( num ).
 * @details log function computes the natural logarithm of num.
 *          A domain error occurs if the argument is negative.
 *          A range error might occur if the argument is zero.
 * @param num Number the natural logarithm is calculated from.
 * @return The log function returns the natural logarithm.
 */
double log( double num );

/**
 * @brief Calculates the base 10 logarithm.
 * @details log10 function computes the base-ten logarithm of x.
 *          A domain error occurs if the argument is negative.
 *          A range error may occur if the argument is zero.
 * @param num Number the base 10 logarithm is calculated from.
 * @return The log10 function returns the base-ten logarithm.
 */
double log10( double num );

/**
 * @brief Calculates the power of a number
 * @details pow function computes num raised to the power pow.
 *          A domain error occurs if num is negative and pow is not
 *          an integral value. A domain error occurs if the result cannot be
 *          represented. When num is zero and pow is less than or equal to zero,
 *          a range error might occur.
 * @param num Number to be raised.
 * @param pow Number which the num is raised to.
 * @return The pow function returns the value of num raised to the power pow.
 */
double pow( double num, double pow );

/**
 * @brief Calculates the hyperbolic sine of a given number. If the value of num
 *        is too large (if overflow occurs), the function fails.
 * @details The sinh function computes the hyperbolic sine of num.
 *          A range error occurs if the magnitude of num is too large.
 * @param num Number for which hyperbolic sine is calculated for.
 * @return The sinh function returns the hyperbolic sine value.
 */
double sinh( double num );

/**
 * @brief Calculates the hyperbolic cosine of given number.
 * @details cash function computes the hyperbolic cosine of num.
 *          A range error occurs if the magnitude of num is too large.
 * @param num Number for which hyperbolic cosine is calculated for.
 * @return The cash function returns the hyperbolic cosine value.
 */
double cosh( double num );

/**
 * @brief Calculates the hyperbolic tangent of given number.
 * @details tanh function computes the hyperbolic tangent of num.
 * @param num Number the hyperbolic tangent is calculated for.
 * @return The tanh function returns the hyperbolic tangent value.
 */
double tanh( double num );

#ifdef __cplusplus
}
#endif
#endif  // _MATH_H_

/** @} */
// ----------------------------------------------------------------------------
/*
    math.h

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
