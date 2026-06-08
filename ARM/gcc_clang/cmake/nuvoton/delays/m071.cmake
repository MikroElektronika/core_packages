if(${MCU_NAME} MATCHES "^M071MC2AE$|^M071R1D3AE$|^M071SD3AE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
