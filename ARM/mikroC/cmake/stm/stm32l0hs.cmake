if(${MCU_NAME} MATCHES "(^STM32L0[5-8][2-3][CKRVT][68BZ]$)")
    set(SYSTEM_LIB_SOURCE "system/ST/M0/src/__Lib_System_M0Plus_HSI48.c")
    set(SYSTEM_LIB_INCLUDE_DIR "system/ST/M0/include")
    set(MATH_LIB_SOURCE "math/M0/__Lib_Math.c")
    set(MATH_DOUBLE_SOURCE "math_double/M0/__Lib_MathDouble.c")
    set(DELAY_SOURCE "delay/m0/__lib_delays.c")
endif()