if(${MCU_NAME} MATCHES "^MK10DX128VLL7$|^MK10DX256VLL7$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()


