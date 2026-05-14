if(${MCU_NAME} MATCHES "^AT32F421F4P7$|^AT32F421F6P7$|^AT32F421F8P7$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
