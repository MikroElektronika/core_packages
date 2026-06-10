if(${MCU_NAME} MATCHES "^NW32F61242-48LQFP$|^NW32F61242-64LQFP$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
