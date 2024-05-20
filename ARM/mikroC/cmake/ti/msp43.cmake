if(${MCU_NAME} MATCHES "(^MSP432P401(.+)$)")
    set(SYSTEM_LIB_SOURCE "system/TI/M4/src/__Lib_System_MSP432P.c")
    set(SYSTEM_LIB_INCLUDE_DIR "system/TI/M4/include/")
    set(MATH_LIB_SOURCE "math/M4EF/__Lib_Math.c")
    set(MATH_DOUBLE_SOURCE "math_double/M4EF/__Lib_MathDouble.c")
    set(DELAY_SOURCE "delay/m4ef/__lib_delays_msp432.c")
### MHCP
endif()