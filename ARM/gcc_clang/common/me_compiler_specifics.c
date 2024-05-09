/*
    me_compiler_specifics.c

 ------------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2023, MikroElektonika - www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

#ifdef _CLANG_LLVM_
#include <stdio.h>
#endif

// ------------------------------------------------------------- PRIVATE MACROS


// -------------------------------------------------------------- PRIVATE TYPES


// ------------------------------------------------------------------ CONSTANTS


// ------------------------------------------------------------------ VARIABLES

#ifdef _CLANG_LLVM_
// stderr stream declaration.
FILE *const stderr;
#endif

// ---------------------------------------------- PRIVATE FUNCTION DECLARATIONS


// ------------------------------------------------ PUBLIC FUNCTION DEFINITIONS

#ifdef _CLANG_LLVM_
void _exit() {
    // No return function in clang-llvm.
    while(1);
}
#endif

// ----------------------------------------------- PRIVATE FUNCTION DEFINITIONS


// ----------------------------------------------------------------------------
/*
    me_compiler_specifics.c

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
