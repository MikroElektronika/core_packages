/**
 * @file uint_test_api.c
 * @brief unit_test_api library.
 * @note Implement APIs as needed for unit tests.
 */

#include "unit_test_api.h"

/*------------------- BEGIN -------------------*/

// ------------------------------------------------------------- PRIVATE MACROS

// ------------------------------------------------------------------ VARIABLES

// ---------------------------------------------- PRIVATE FUNCTION DECLARATIONS

// ------------------------------------------------ PUBLIC FUNCTION DEFINITIONS

unit_test_result_t test_run( unit_test_result_t (*test_func)(void) ) {
    unit_test_result_t result = UNIT_TEST_FAIL;

    if ( test_func ) {
        if ( UNIT_TEST_SUCCESS != (*test_func)() ) {
            result = UNIT_TEST_FAIL;
        } else {
            result = UNIT_TEST_SUCCESS;
        }
    }

    return result;
}

unit_test_result_t struct_compare ( uint8_t * struct1_addr, uint8_t * struct2_addr,
                                    size_t struct1_size, size_t struct2_size,
                                    bool expect_same, bool is_debug ) {
    unit_test_result_t _err = UNIT_TEST_SUCCESS;

    if ( !struct1_size ) {
        if ( is_debug ) {
            printf_me("[ERROR]: Structure 1 size is 0.\n");
        }
        _err = UNIT_TEST_FAIL;
    }

    if ( !struct2_size ) {
        if ( is_debug ) {
            printf_me("[ERROR]: Structure 2 size is 0.\n");
        }
        _err = UNIT_TEST_FAIL;
    }

    if ( struct1_size != struct2_size ) {
        if ( is_debug ) {
            printf_me("[ERROR]: Structure sizes are not equal.\n");
        }
        _err = UNIT_TEST_FAIL;
    }

    if ( UNIT_TEST_SUCCESS == _err ) {
        while ( struct1_size-- ) {
            if ( *struct1_addr++ != *struct2_addr++ ) {
                if ( expect_same ) {
                    _err = UNIT_TEST_FAIL;
                } else {
                    _err = UNIT_TEST_SUCCESS;
                }

                break;
            }
        }

        if ( is_debug && ( UNIT_TEST_FAIL == _err ) ) {
            printf_me("[ERROR]: Structure content is not the same.\n");
        } else if ( is_debug && ( UNIT_TEST_SUCCESS == _err ) ) {
            printf_me("[SUCCESS]: Structure content is not the same.\n");
        }
    }

    return _err;
}

unit_test_result_t struct_is_empty ( uint8_t * struct_addr, size_t struct_size, bool is_debug ) {
    unit_test_result_t _err = UNIT_TEST_SUCCESS;

    if ( !struct_size ) {
        if ( is_debug ) {
            printf_me("[ERROR]: Structure size is 0.\n");
        }
        _err = UNIT_TEST_FAIL;
    }

    if ( UNIT_TEST_SUCCESS == _err ) {
        while ( struct_size-- ) {
            if ( 0 != *struct_addr++ ) {
                _err = UNIT_TEST_FAIL;
                break;
            }
        }

        if ( is_debug && ( UNIT_TEST_FAIL == _err ) ) {
            printf_me("[ERROR]: Structure content is not zero.\n");
        }
    }

    return _err;
}

unit_test_result_t array_compare ( uint8_t array1_addr[], uint8_t array2_addr[],
                                   size_t array1_size, size_t array2_size,
                                   bool expect_same, bool is_debug ) {
    unit_test_result_t _err = UNIT_TEST_SUCCESS;

    if ( !array1_size ) {
        if ( is_debug ) {
            printf_me("[ERROR]: Array 1 size is 0.\n");
        }
        _err = UNIT_TEST_FAIL;
    }

    if ( !array2_size ) {
        if ( is_debug ) {
            printf_me("[ERROR]: Array 2 size is 0.\n");
        }
        _err = UNIT_TEST_FAIL;
    }

    if ( array1_size != array2_size ) {
        if ( is_debug ) {
            printf_me("[ERROR]: Array sizes are not equal.\n");
        }
        _err = UNIT_TEST_FAIL;
    }

    if ( UNIT_TEST_SUCCESS == _err ) {
        while ( array1_size-- ) {
            if ( array1_addr[array1_size] != array2_addr[array1_size] ) {
                if ( expect_same ) {
                    _err = UNIT_TEST_FAIL;
                } else {
                    _err = UNIT_TEST_SUCCESS;
                }

                break;
            }
        }

        if ( is_debug && ( UNIT_TEST_FAIL == _err ) ) {
            printf_me("[ERROR]: Array content is not the same.\n");
        } else if ( is_debug && ( UNIT_TEST_SUCCESS == _err ) ) {
            printf_me("[SUCCESS]: Array content is same.\n");
        }
    }

    return _err;
}

// ----------------------------------------------- PRIVATE FUNCTION DEFINITIONS

/*-------------------- END --------------------*/
