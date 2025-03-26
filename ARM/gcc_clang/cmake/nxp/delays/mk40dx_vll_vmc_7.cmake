if(${MCU_NAME} MATCHES "^MK40DX128VLL7$|^MK40DX128VMC7$|^MK40DX256VLL7$|^MK40DX256VMC7$|^MK40DX64VMC7$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
