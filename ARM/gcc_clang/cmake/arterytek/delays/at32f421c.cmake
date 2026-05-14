if(${MCU_NAME} MATCHES "^AT32F421C4T7$|^AT32F421C6T7$|^AT32F421C8T7$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
