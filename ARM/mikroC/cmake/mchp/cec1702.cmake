if(${MCU_NAME} MATCHES "(^CEC1702$)")
    set(SYSTEM_LIB_SOURCE "system/MCHP/M4/src/__Lib_System_CEC1702.c")
    set(SYSTEM_LIB_INCLUDE_DIR "")
    set(MATH_LIB_SOURCE "math/M4EF/__Lib_Math.c")
    set(MATH_DOUBLE_SOURCE "math_double/M4EF/__Lib_MathDouble.c")
    set(DELAY_SOURCE "delay/m4ef/__lib_delays.c")
endif()