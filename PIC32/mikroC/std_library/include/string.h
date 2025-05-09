/*
    string.h
 ------------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2024, MikroElektonika - www.mikroe.com

  All rights reserved.

---------------------------------------------------------------------------- */

/**
 * @file string.h
 * @brief Standard C string handling functions.
 * @{
 */

/* ------------------------------------------------------------------------- */

#ifndef _STRING_H_
#define _STRING_H_

#ifdef __cplusplus
extern "C"{
#endif

#include <stdint.h>

/* ----------------------PUBLIC FUNCTION DECLARATIONS----------------------- */

/**
 * @brief Searches for the first occurrence of the character ch, in the first
 *        num bytes of the string pointed to, by the argument ptr.
 * @details Function locates the first occurrence of a character in a defined
 *          memory area starting with a given address. The function returns
 *          the pointer to this location or 0 if the n was not found.
 * @param ptr  Pointer to the address from which the character is searched from.
 * @param ch   Character that is searched for.
 * @param num  Number of bytes in memory from the start address where the
 *             search is conducted.
 * @return void * Pointer to the found character.
 */
const void * memchr( const void * ptr, char ch, unsigned int num );

/**
 * @brief Compares the first num bytes of str1 and str2.
 * @details Function compares a given number of characters inside of objects
 *          pointed to by str1 and str2, returns zero if the objects are equal,
 *          or returns a difference between the first differing characters
 *          (in a left-to-right evaluation).
 * @param str1 String object one.
 * @param str2 String object two.
 * @param num  Number of characters compared.
 * @return int Difference between objects (zero if equal).
 */
int memcmp( const void * str1, const void * str2, int num );

/**
 * @brief Copies num characters from src_ptr to dest_ptr.
 * @details Function copies a given number of characters( num ) from the object
 *          pointed to by src_ptr into the object pointed to by dest_ptr.
 *          If  copying takes place between objects that overlap,
 *          the behavior is undefined.
 *          The function returns address of the object pointed to by dest_ptr.
 * @param dest_ptr Pointer to the location data is copied to.
 * @param src_ptr  Pointer to the location data is copied from.
 * @param num      Number of bytes of data to be copied.
 * @return void *  Pointer to the location data is copied to.
 */
void * memcpy( void * dest_ptr, const void * src_ptr, int num );

/**
 * @brief Copies num characters from src_ptr to dest_ptr.
 * @details Function copies num characters from a object pointed to by src_ptr
 *          into a object pointed to by dest_ptr. Unlike memcpy, the memory
 *          areas to and from may overlap.
 *          The function returns address of the object pointed to.
 * @param dest_ptr Pointer to the location data is copied to
 * @param src_ptr  Pointer to the location data is copied from
 * @param num      Number of bytes of data to be moved.
 * @return void *  Pointer to the location data is moved to.
 */
void * memmove( void * dest_ptr, const void * src_ptr, int num );

/**
 * @brief Copies the character chr to the first num characters of the string
 *        pointed to, by the argument ptr.
 * @details Function copies the value of the character into each
 *         of the first num characters of the object pointed by ptr.
 *         The function returns address of the object pointed to by ptr.
 * @param ptr Pointer to the location from which the data will be set.
 * @param chr Value to which the data will be set.
 * @param num Number of bytes that will be set.
 *
 * @return void * Address of the object pointed to by ptr.
 */
void * memset( void * ptr, char chr, int num );

/**
 * @brief Appends the string pointed to, by src_ptr to the end of the string
 *        pointed to by dest_ptr.
 * @details Function appends a copy of the string src_ptr
 *          to the string dest_ptr, overwriting the null character
 *          at the end of dest_ptr. Then, a terminating null character is added
 *          to the result. If copying takes place between objects that overlap,
 *          the behavior is undefined.
 *          The string must have enough space to store the result.
 *          The function returns address of the object pointed to by dest_ptr.
 * @param dest_ptr Addres of destination.
 * @param src_ptr Addres of source.
 *
 * @return char * Address of the object pointed to by dest_ptr.
 */
char * strcat( char * dest_ptr, const char * src_ptr );

/**
 * @brief Searches for the first occurrence of the character chr in the string
 *        pointed to, by the argument ptr.
 * @details Function locates the first occurrence of character chr
 *          in the string ptr. The function returns a pointer
 *          to the first occurrence of character chr,or a null pointer if chr
 *          does not occur in ptr. The terminating null character is considered
 *          to be a part of the string.
 * @param ptr Addres of string.
 * @param chr Character to search for.
 * @return char * Address of found character.
 */
const char * strchr( const char * ptr, char chr );

/**
 * @brief Compares the string pointed to, by str1 to the string
 *        pointed to by str2.
 * @details Function compares strings str1 and str2 and returns zero
 *          if the strings are equal, or returns a difference between
 *          the first differing characters (in a left-to-right evaluation).
 *          Accordingly, the result is greater than zero if str1 is greater
 *          than str2 and vice versa.
 * @param str1 String 1.
 * @param str2 String 2.
 * @return int Number of different characters.
 */
int strcmp( const char * str1, const char * str2 );

/**
 * @brief Copies the string pointed to, by src_ptr to dest_ptr.
 * @details Function copies the string from src_ptr to the string dest_ptr.
 *          If copying is successful, the function returns dest_ptr.
 *          If copying takes place between objects that overlap,
 *          the behavior is undefined.
 * @param dest_ptr Address of destination object.
 * @param src_ptr Address of source object.
 * @return char * Address pointed to by dest_ptr.
 */
char * strcpy( char * dest_ptr, const char * src_ptr );

/**
 * @brief Computes the length of the string str up to but not including
 *        the terminating null character.
 * @details Function returns the length of the string str.
 *          (the terminating null character does not count).
 * @param str String address.
 * @return int Number of characters in string str.
 */
int strlen( const char * str );

/**
 * @brief Appends the string pointed to, by src_ptr to the end of the string
 *        pointed to, by dest_ptr up to size characters long.
 * @details Function appends not more than size characters from the string
 *          src_ptr to dest_ptr. The initial character of src_ptr overwrites
 *          the null character at the end of dest_ptr. The terminating
 *          null character is always appended to the result.
 *          The function returns dest_ptr.
 * @param dest_ptr Address of destination object.
 * @param src_ptr Address of source object.
 * @param size Number of characters to append.
 * @return char * Address pointed to by dest_ptr.
 */
char * strncat( char * dest_ptr, const char * src_ptr, int size );

/**
 * @brief Copies up to size characters from the string pointed to,
 *        by src_ptr to dest_ptr.
 * @details Function copies the string from src_ptr to the string dest_ptr.
 *          If copying is successful, the function returns dest_ptr.
 *          If copying takes place between objects that overlap, the behavior is undefined
 * @param dest_ptr Address of destination object.
 * @param src_ptr Address of source object.
 * @param size Number of characters to copy.
 * @return char * Address pointed to by dest_ptr.
 */
char * strncpy( char * dest_ptr, const char * src_ptr, int size );

/**
 * @brief Calculates the length of the initial segment of str1 which consists
 *        entirely of characters in str2.
 * @details Function computes the length of the maximum initial segment
 *         of the string pointed to by str1 that consists entirely
 *         of characters that are in the string pointed to by str2.
 *         The function returns the length of the initial segment.
 * @param str1 Address of string 1.
 * @param str2 Address of string 2.
 * @return int Number of characters found.
 */
int strspn( const char * str1, const char * str2 );

/**
 * @brief Calculates the length of the initial segment of str1 which consists
 *        entirely of characters not in str2.
 * @details Function computes the length of the maximum initial segment
 *          of the string pointed to by str1 that consists entirely
 *          of characters that are not in the string pointed to by str2.
 *          The function returns the length of the initial segment.
 * @param str1 Address of string 1.
 * @param str2 Address of string 2.
 * @return char Number of characters.
 */
char strcspn( const char * str1, const char * str2 );

/**
 * @brief Compares at most the first len bytes of str1 and str2.
 * @details Function lexicographically compares not more than len characters
 *          (characters that follow the null character are not compared) from
 *          the string pointed by str1 to the string pointed by str2.
 * @param str1 Address of string 1.
 * @param str2 Address of string 2.
 * @param len Number of characters to compare.
 * @return int Number of exact characters.
 */
int strncmp( const char * str1, const char * str2, char len );

/**
 * @brief Finds the first character in the string str1 that matches
 *        any character specified in str2.
 * @details Function searches str1 for the first occurrence of any character
 *          from the string str2. The terminating null character is not
 *          included in the search. The function returns pointer
 *          to the matching character in str1. If str1 contains no characters
 *          from str2, the function returns 0.
 * @param str1 Address of string 1.
 * @param str2 Address of string 2.
 * @return char * Address of matching character in str1.
 */
char * strpbrk( const char * str1, const char * str2 );

/**
 * @brief Searches for the last occurrence of the character chr in the string
 *        pointed to by the argument str.
 * @details Function searches the string ptr for the last occurrence
 *          of character chr. The null character terminating ptr is not
 *          included in the search. The function returns pointer
 *          to the last chr found in ptr. if no matching character was found,
 *          function returns 0.
 * @param ptr Address of string to check.
 * @param chr Character to check for.
 * @return char * Address of last found character chr in string pointed
 * to by ptr.
 */
const char * strrchr( const char * ptr, char chr );

/**
 * @brief Finds the first occurrence of the entire string needle which appears
 *        in the string haystack.
 * @details Function locates the first occurrence of the string str2
 *          in the string str1 (excluding the terminating null character).
 *          The function returns pointer to first occurrence of str2 in str1,
 *          if no string was found, the function returns 0. If str2 is
 *          a null string, the function returns 0.
 * @param str1 Address of string 1.
 * @param str2 Address of string 2.
 * @return char * Address of first str2 character occurrence in str1.
 */
char * strstr( const char * str1, const char * str2 );

/**
 * @brief Breaks string str1 into a series of tokens separated
 *        by delimiters from str2.
 * @details The strtok function returns a pointer to the first character
 *          of a token, or a null pointer if there is no token.
 * @param str1 Address of string 1.
 * @param str2 Address of string 2.
 * @return char * Address of adequate character.
 */
char * strtok( char * str1, char * str2 );

/**
 * @brief Removes all occurrences of a specified character `num` from a `str`.
 * @details This function iterates through the given string `str` and removes
 *          all occurrences of the character `num`. The string is modified in
 *          place, and all characters following each occurrence of `num` are
 *          shifted left to fill the gap.
 * @param str The input string to be modified.
 * @param num The character to be removed from the string.
 */
void str_cut_chr( char * str, char num );

/**
 * @brief Replaces all occurrences of a `chr_old` in a `str` with `chr_new`.
 * @details This function iterates through the given string `str` and replaces
 *          every occurrence of the character `chr_old` with the character
 *          `chr_new`. The string is modified in place.
 * @param str The input string to be modified.
 * @param chr_old The character to be replaced.
 * @param chr_new The character to replace `chr_old`.
 */
void str_replace_chr( char * str, char chr_old, char chr_new );

/**
 * @brief Crops characters in `str` up to specified index `num`.
 * @details The function left shifts characters in the string `str` by `num`,
 *          then sets the characters starting from position `strlen(str) - num`
 *          to zero. The function modifies the string in place.
 * @param str The input string to be modified.
 * @param num Crop ending position.
 */
void str_cut_left( char * str, int num );

/**
 * @brief Crops characters in `str` starting from a specified index `num`.
 * @details The function cuts the string `str` by setting characters to null
 *          starting from the specified index `num`. It modifies the string in
 *          place.
 * @param str The input string to be modified.
 * @param num Crop starting position.
 */
void str_cut_right( char * str, int num );

/**
 * @brief Splits `str1` into `str1` and `str2` starting from `num`.
 * @details This function cuts characters from the string `str1` starting from
 *          the specified index `num` and copies them to the string `str2`.
 *          It then null-terminates `str2` and modifies `str1` by cutting
 *          characters from `num` onward.
 * @param str1 Address of string 1.
 * @param str2 Address of string 2.
 * @param num Position to be split at.
 */
void str_split( char * str1, char * str2, int num );

/**
 * @brief Inserts a character `chr` into a string `str` at `num` index.
 * @details This function inserts the character `chr` into the string `str`
 *          at the specified index `num`. It shifts the existing characters
 *          to the right to make space for the new character.
 * @param str Address of string.
 * @param chr Character to be added.
 * @param num Position to add at.
 */
void str_insert_chr( char * str, char chr, int num );

#ifdef __cplusplus
}
#endif
#endif  // _STRING_H_

/** @} */
// ----------------------------------------------------------------------------
/*
    string.h

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
