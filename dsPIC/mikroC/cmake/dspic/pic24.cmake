include(coreUtils)

set_file_list()

if(${MCU_NAME} MATCHES "^PIC24(.+)$")
    set(SYSTEM_LIB_SOURCE "system/src/__Lib_System.c")
    set(SYSTEM_LIB_INCLUDE_DIR "")
    set(MATH_LIB_SOURCE "math/__Lib_math.c")
    set(MATH_DOUBLE_SOURCE "math_double/__Lib_MathDouble.c")
endif()
