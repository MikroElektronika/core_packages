/*
    cstring.c

 ------------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2023, MikroElektonika - www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

#include "me_string.h"

// ------------------------------------------------------------- PRIVATE MACROS


// -------------------------------------------------------------- PRIVATE TYPES


// ------------------------------------------------------------------ CONSTANTS


// ------------------------------------------------------------------ VARIABLES


// ---------------------------------------------- PRIVATE FUNCTION DECLARATIONS


static int me_strlen( char * str )
{
    char * char_ptr;

    char_ptr = str;
    while ( *char_ptr++ );

    return char_ptr - str - 1;
}

// ------------------------------------------------ PUBLIC FUNCTION DEFINITIONS

void str_cut_chr( char * str, char num )
{
    int i;
    int cnt;

    cnt = 0;

    for ( i = 0; i < me_strlen( str ); i++ )
    {
        if ( str[i] == num )
        {
            cnt = i;
            for ( cnt; cnt < me_strlen( str ); cnt++ )
            {
                str[cnt] = str[cnt + 1];
            }
        }
    }
}

void str_replace_chr( char * str, char chr_old, char chr_new )
{
    int i;

    for ( i = 0; i < me_strlen( str ); i++ )
    {
        if ( str[i] == chr_old )
        {
            str[i] = chr_new;
        }
    }
}

void str_cut_left( char * str, int num )
{
    int i;
    int counter;
    int delete_right;

    counter = 0,
    delete_right = me_strlen( str );

    if ( num < me_strlen( str ) )
    {
        for ( i = num; i < me_strlen( str ); i++ )
        {
            str[counter] = str[i];
            counter++;
        }

        for ( i = counter; i < delete_right; i++ )
        {
            str[i] = 0;
        }
    }
}

void str_cut_right( char * str, int num )
{
    int i;
    int counter;

    counter = me_strlen( str );

    if ( num < me_strlen( str ) )
    {
        for ( i = num; i < counter; i++ )
        {
            str[i] = 0;
        }
    }
}

void str_split( char * str1, char * str2, int num )
{
    int i;

    if ( num < me_strlen( str1 ) )
    {
        for ( i = num; i < me_strlen( str1 ); i++ )
        {
            str2[i - num] = str1[i];
        }

        str2[i] = 0;
        str_cut_right( str1, num );
    }
}

void str_insert_chr( char * str, char chr, int num )
{
    int i;
    int counter;
    char temp1;
    char temp2;

    counter = me_strlen( str );
    temp1 = str[num];

    if ( num < me_strlen( str ) )
    {
        for ( i = num; i < counter; i++ )
        {
            temp2 = str[i + 1];
            str[i + 1] = temp1;
            temp1 = temp2;
        }

        str[num] = chr;
    }
}

// ----------------------------------------------- PRIVATE FUNCTION DEFINITIONS


// ----------------------------------------------------------------------------
/*
    cstring.c

    Copyright (c) 2023, MikroElektronika - www.mikroe.com

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
