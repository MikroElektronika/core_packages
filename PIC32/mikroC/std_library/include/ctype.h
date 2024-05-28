/*
    ctype.h

 ------------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2024, MikroElektonika - www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
 * @file   ctype.h
 * @brief  ...
 * @{
 */

/*---------------------------------------------------------------------------*/
#ifndef _CTYPE_H_
#define _CTYPE_H_

#ifdef __cplusplus
extern "C"{
#endif

#include <stdint.h>
#include <stdbool.h>

/* ----------------------PUBLIC FUNCTION DECLARATIONS----------------------- */

/**
 * @brief The function checks whether the passed character is a lowercase
 *        letter.
 * @param character, this is the character to be checked.
 * @retval returns true if the given character is a lowercase letter
 */
unsigned short islower( char character );

/**
 * @brief The function checks whether the passed character is a uppercase
 *        letter.
 * @param character, this is the character to be checked.
 * @retval returns true if the given character is a UPPERCASE letter
 */
unsigned short isupper( char character );

/**
 * @brief The function checks whether the passed character is an alphabet
 *        (a to z and A-Z).
 * @param character, this is the character to be checked.
 * @return returns true if the given character is a letter.
 */
unsigned short isalpha( char character );

/**
 * @brief The function checks whether the passed character is a control
 *        character.
 * @param character, this is the character to be checked.
 * @return returns true if the given character is a control character.
 */
unsigned short iscntrl( char character );

/**
 * @brief The function checks if the passed character is a decimal digit
 *        character.
 * @param character, this is the character to be checked.
 * @return returns true if the given character is a cipher (digit)
 */
unsigned short isdigit( char character );

/**
 * @brief The function checks if the passed character is alphanumeric
 *        (cipher or letter).
 * @param character, this is the character to be checked.
 * @return returns true if the given character is alphanumeric
 *         (cipher or letter).
 */
unsigned short isalnum( char character );

/**
 * @brief The function checks whether the passed character is a white-space
 *        character.
 * @param character, this is the character to be checked.
 * @return returns true if the given character is space or tab.
 */
unsigned short isspace( char character );

/**
 * @brief The function checks whether the passed character is a punctuation
 *        mark.
 * @param character, this is the character to be checked.
 * @return returns true if the given character is a punctuation mark.
 */
unsigned short ispunct( char character );

/**
 * @brief The function checks whether the passed character is a graphic
 *        character.
 * @param character, this is the character to be checked.
 * @return returns true if the given character is a graphical character.
 */
unsigned short isgraph( char character );

/**
 * @brief The function checks whether the passed character is a hex digit.
 * @param character, this is the character to be checked.
 * @return returns true if given character is a hex digit.
 */
unsigned short isxdigit( char character );

/**
 * @brief The function converts a given letter to lowercase.
 * @param character, this is the letter to be converted to lowercase.
 * @return - Transposes uppercase letter to lowercase.
 */
char tolower( char character );

/**
 * @brief The function converts lowercase letter to uppercase.
 * @param character, this is the letter to be converted to uppercase.
 * @return - Transposes lowercase letter to uppercase.
 */
char toupper( char character );

#ifdef __cplusplus
}
#endif
#endif  // _CTYPE_H_

/** @} */
// ----------------------------------------------------------------------------
/*
    ctype.h

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
