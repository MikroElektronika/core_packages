if (${MCU_NAME} MATCHES "(^STM32L100[C-R]C$)|(^STM32L100[C-R][6-8A-B]_A$)|(^STM32L15[1-2][C-R][6-8A-C]_A$)|(^STM32L15[1-2]QE$)|(^STM32L1[5-6][1-2]RE$)" OR
    ${MCU_NAME} MATCHES "(^STM32L15[1-2]V[8A-C]_A$)|(^STM32L15[1-2]VD_X$)|(^STM32L1[5-6][1-2][V-Z]E$)|(^STM32L162[R,V][CE]$)|(^STM32L162[R,V]C_A$)")
    set(SYSTEM_LIB_SOURCE "system/ST/M3/src/__Lib_System_L1xx.c")
    set(SYSTEM_LIB_INCLUDE_DIR "system/ST/M3/include")
    set(MATH_LIB_SOURCE "math/M3/__Lib_Math.c")
    set(MATH_DOUBLE_SOURCE "math_double/M3/__Lib_MathDouble.c")
    set(DELAY_SOURCE "delay/m3/__lib_delays.c")
endif ()