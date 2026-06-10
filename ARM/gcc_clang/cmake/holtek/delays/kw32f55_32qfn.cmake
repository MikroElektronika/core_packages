if(${MCU_NAME} MATCHES "^KW32F55-32QFN$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
