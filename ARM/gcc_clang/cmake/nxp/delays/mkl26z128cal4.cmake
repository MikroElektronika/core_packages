if(${MCU_NAME} MATCHES "^MKL26Z128CAL4$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
