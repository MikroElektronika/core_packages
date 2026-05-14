if(${MCU_NAME} MATCHES "^AT32L021C4T7$|^AT32L021C6T7$|^AT32L021C8T7$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
