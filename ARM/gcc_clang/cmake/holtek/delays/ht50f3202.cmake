if(${MCU_NAME} MATCHES "^HT50F32022-48LQFP$|^HT50F32023-48LQFP$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
