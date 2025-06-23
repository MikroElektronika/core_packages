if(${MCU_NAME} MATCHES "^NANO103LD3AE$|^NANO103SD3AE$|^NANO103ZD3AE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
