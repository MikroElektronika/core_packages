/*
    me_string.h
 ------------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2024, MikroElektonika - www.mikroe.com

  All rights reserved.

---------------------------------------------------------------------------- */

/**
 * @file   me_string.h
 * @brief  Standard C string handling functions.
 * @{
*/

// ----------------------------------------------------------------------------

#ifndef _ME_STRING_H_
#define _ME_STRING_H_

#ifdef __cplusplus
extern "C"{
#endif

#include <stdint.h>
#include <string.h>

/* ----------------------PUBLIC FUNCTION DECLARATIONS----------------------- */

/**
 * @brief The str_cut_chr function removes all selected characters from string str,
 *        and returns it to the same str without those characters.
 * @param str Address of string.
 * @param num Character to cut.
 */
void str_cut_chr( char * str, char num );

/**
 * @brief The replace_chr function replaces all chr_old characters in string str
 *        with chr_new characters and returns it to the same str.
 * @param str     Address of string.
 * @param chr_old Character to be replaced.
 * @param chr_new Character to replace with.
 */
void str_replace_chr( char * str, char chr_old, char chr_new );

/**
 * @brief The function str_cut_left crops string str to the left starting
 *        from position num.
 * @param str Address of string.
 * @param num Starting position.
 */
void str_cut_left( char * str, int num );

/**
 * @brief The function str_cut_right crops string str to the right starting
 *        from position num.
 * @param str Address of string.
 * @param num Starting position.
 */
void str_cut_right( char * str, int num );

/**
 * @brief The str_split function splits string str1 into two strings,
 *        str1 and str2, after the num-th character
 * @param str1 Address of string 1.
 * @param str2 Address of string 2.
 * @param num  Position to be split at.
 */
void str_split( char * str1, char * str2, int num );

/**
 * @brief The str_insert_chr function adds selected character chr to string str
 *        at position num.
 * @param str Address of string.
 * @param chr Character to be added.
 * @param num Position to add at.
 */
void str_insert_chr( char * str, char chr, int num );

#ifdef __cplusplus
}
#endif
#endif  // _ME_STRING_H_

/** @} */
// ----------------------------------------------------------------------------
/*
    me_string.h

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
