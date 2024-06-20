/**
 * @file preinit.c
 * @brief preinit library.
 * @note Implement APIs as needed for preinit routines.
 */

#if defined (__GNUC__) || defined (__XC__)
#include "core_header.h"
#endif

#include "preinit.h"

/*------------------- BEGIN -------------------*/

// ------------------------------------------------------------- PRIVATE MACROS

// ------------------------------------------------------------------ VARIABLES

// ---------------------------------------------- PRIVATE FUNCTION DECLARATIONS

// ------------------------------------------------ PUBLIC FUNCTION DEFINITIONS

static bool preinit_done = false;

void preinit(void) {
    /**
     * @note Check if pre init sequence has alreadey
     * been done.
     */
    if (!preinit_done) {
        // Pre init sequence step 1 - if applicable.
        #ifdef PREINIT_STEP_1
            PREINIT_STEP_1;
        #endif
        // Pre init sequence step 2 - if applicable.
        #ifdef PREINIT_STEP_2
            PREINIT_STEP_2;
        #endif
        // Pre init sequence step 3 - if applicable.
        #ifdef PREINIT_STEP_3
            PREINIT_STEP_3;
        #endif
        // Pre init sequence step 4 - if applicable.
        #ifdef PREINIT_STEP_4
            PREINIT_STEP_4;
        #endif
        // Pre init sequence step 5 - if applicable.
        #ifdef PREINIT_STEP_5
            PREINIT_STEP_5;
        #endif
        // Pre init sequence step 6 - if applicable.
        #ifdef PREINIT_STEP_6
            PREINIT_STEP_6;
        #endif
        // Pre init sequence step 7 - if applicable.
        #ifdef PREINIT_STEP_7
            PREINIT_STEP_7;
        #endif
        // Pre init sequence step 8 - if applicable.
        #ifdef PREINIT_STEP_8
            PREINIT_STEP_8;
        #endif
        // Pre init sequence step 9 - if applicable.
        #ifdef PREINIT_STEP_9
            PREINIT_STEP_9;
        #endif
        // Pre init sequence step 10 - if applicable.
        #ifdef PREINIT_STEP_10
            PREINIT_STEP_10;
        #endif

        // Init sequence finished.
        preinit_done = true;
    }
}


// ----------------------------------------------- PRIVATE FUNCTION DEFINITIONS

/*-------------------- END --------------------*/
