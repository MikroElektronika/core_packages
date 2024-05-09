/*
    cstring.c

 ------------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2020, MikroElektonika - www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

#include "string.h"

// ------------------------------------------------------------- PRIVATE MACROS


// -------------------------------------------------------------- PRIVATE TYPES


// ------------------------------------------------------------------ CONSTANTS


// ------------------------------------------------------------------ VARIABLES


// ---------------------------------------------- PRIVATE FUNCTION DECLARATIONS


// ------------------------------------------------ PUBLIC FUNCTION DEFINITIONS

void * __generic memchr( const void * __generic ptr, char chr, unsigned int num )
{
    char * __generic chr_ptr;
    chr_ptr = (char * __generic)ptr;
    while ( num-- )
    {
        if ( *chr_ptr == chr )
        {
            return (void * __generic)chr_ptr;
        }
        else
        {
            chr_ptr++;
        }
    }

    return 0;
}

int memcmp( const void * __generic str1, const void * __generic str2, int num )
{
    while (num-- != 0)
    {
        if (*((char * __generic) str1) != *((char * __generic) str2))
        {
            return *( ( char * __generic) str1 ) - *( ( char * __generic) str2 );
        }

        str1++;
        str2++;
    }

    return 0;
}

void * memcpy( void * dest_ptr, const void * __generic src_ptr, int num )
{
    char * dest_char_ptr;
    const char * __generic src_char_ptr;

    src_char_ptr = src_ptr;
    dest_char_ptr = dest_ptr;
    while ( num-- )
    {
        *dest_char_ptr++ = *src_char_ptr++;
    }

    return dest_ptr;
}

void * memmove( void * dest_ptr, const void * __generic src_ptr, int num )
{
    char * dest_chr_ptr;
    const char * __generic src_chr_ptr;

    dest_chr_ptr = dest_ptr;
    src_chr_ptr = src_ptr;
    if (
        ( src_chr_ptr < dest_chr_ptr ) &&
        ( ( src_chr_ptr + num ) > dest_chr_ptr )
      )
    {
        src_chr_ptr += num;
        dest_chr_ptr += num;
        do
        {
            *--dest_chr_ptr = *--src_chr_ptr;
        } while ( --num );
    }
    else
    {
        if ( num )
        do
        {
            *dest_chr_ptr++ = *src_chr_ptr++;
        } while ( --num );
    }

    return dest_ptr;
}

void * memset( void * ptr, char chr, int num )
{
    char * char_ptr;

    char_ptr = ptr;
    while ( num-- )
    {
        *char_ptr++ = chr;
    }

    return ptr;
}

char * strcat( char * dest_ptr, const char * __generic src_ptr )
{
    char * dest_char_ptr;

    dest_char_ptr = dest_ptr;
    while ( *dest_char_ptr )
    {
        dest_char_ptr++;
    }

    while ( *dest_char_ptr++ = *src_ptr++ );

    return dest_ptr;
}

char * __generic strchr( const char * __generic ptr, char chr )
{
    do
    {
        if ( *ptr == chr )
        {
            return (char * __generic) ptr;
        }

    } while ( *ptr++ );

    return 0;
}


int strcmp( const char * __generic str1,const char * __generic str2 )
{
    while (*str1 && (*str1 == *str2))
    {
        str1++, str2++;
    }

    return *str1 - *str2;
}

char * strcpy( char * dest_ptr, const char * __generic src_ptr )
{
    char *dest_char_ptr;

    dest_char_ptr = dest_ptr;
    while (*dest_char_ptr++ = *src_ptr++);

    return dest_ptr;
}


int strlen( const char * __generic str )
{
    const char * __generic char_ptr;

    char_ptr = str;
    while ( *char_ptr++ );

    return char_ptr - str - 1;
}

char * strncat( char * dest_ptr, const char * __generic src_ptr, int size )
{
    char * char_ptr;

    char_ptr = dest_ptr;
    while ( *char_ptr )
    {
        char_ptr++;
    }

    while ( size && ( *char_ptr++ = *src_ptr++ ) )
    {
        size--;
    }

    if ( size == 0 )
    {

    }
    *char_ptr = 0;

    return dest_ptr;
}

char * strncpy( char * dest_ptr, const char * __generic src_ptr, int size )
{
    char * char_ptr;

    char_ptr = dest_ptr;
    while ( size )
    {
        size--;

        if ( !( *char_ptr++ = *src_ptr++ ) )
        {
            break;
        }
    }

    while ( size-- )
    {
        *char_ptr++ = 0;
    }

    return dest_ptr;
}

int strspn( const char * __generic str1, const char * __generic str2 )
{
    int i;

    i = 0;
    while ( *str1 && strchr( str2, *str1 ) != 0 )
    {
        str1++;
        i++;
    }

    return i;
}

char strcspn( const char * __generic str1, const char * __generic str2 )
{
    char i;
    i = 0;
    while (*str1 && (strchr(str2, *str1) == 0))
    {
        str1++;
        i++;
    }

    return i;
}

int strncmp( const char * __generic str1, const char * __generic str2, char len )
{
    while ( len-- )
    {
        if ( *str1 == 0 || *str1 != *str2 )
        {
            return *str1 - *str2;
        }

        str1++;
        str2++;
    }

    return 0;
}

char * __generic strpbrk( const char * __generic str1, const char * __generic str2 )
{
    while (*str1)
    {
        if (strchr(str2, *str1))
        {
            return (char * __generic)str1;
        }

        str1++;
    }

    return 0;
}

char * __generic strrchr( const char * __generic ptr, char chr )
{
    const char * __generic char_ptr;

    char_ptr = ptr + strlen(ptr);
    do
    {
        if (*char_ptr == chr)
        {
            return (char * __generic) char_ptr;
        }
    } while (char_ptr-- != ptr);

    return 0;
}

char * __generic strstr( const char * __generic str1, const char * __generic str2 )
{
    while ((str1 != 0) && *str1)
    {
        if (strncmp(str1, str2, strlen(str2)) == 0)
        {
            return (char * __generic)str1;
        }

        str1 = strchr(str1 + 1, *str2);
    }

    return 0;
}

char * strtok( char * str1, const char * __generic str2 )
{
    static char * sp;
    if ( str1 == 0 )
    {
        str1 = sp;
    }

    if ( !str1 )
    {
        return 0;
    }

    if ( !*str1 )
    {
        return 0;
    }

    str1 += strspn( str1, str2 );
    if ( !*str1 )
    {
        return sp = 0;
    }

    sp = str1 + strcspn( str1, str2 );
    if ( *sp )
    {
        *sp++ = 0;
    }
    else
    {
        sp = 0;
    }

    return str1;
}

void str_cut_chr( char * str, char num )
{
    int i;
    int cnt;

    cnt = 0;

    for ( i = 0; i < strlen( str ); i++ )
    {
        if ( str[i] == num )
        {
            cnt = i;
            for ( cnt; cnt < strlen( str ); cnt++ )
            {
                str[cnt] = str[cnt + 1];
            }
        }
    }
}

void str_replace_chr( char * str, char chr_old, char chr_new )
{
    int i;

    for ( i = 0; i < strlen( str ); i++ )
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
    delete_right = strlen( str );

    if ( num < strlen( str ) )
    {
        for ( i = num; i < strlen( str ); i++ )
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

    counter = strlen( str );

    if ( num < strlen( str ) )
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

    if ( num < strlen( str1 ) )
    {
        for ( i = num; i < strlen( str1 ); i++ )
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

    counter = strlen( str );
    temp1 = str[num];

    if ( num < strlen( str ) )
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

    Copyright (c) 2020, MikroElektronika - www.mikroe.com

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
