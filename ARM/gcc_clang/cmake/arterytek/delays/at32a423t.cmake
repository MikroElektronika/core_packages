if(${MCU_NAME} MATCHES "^AT32A423T8U7$|^AT32A423TBU7$|^AT32A423TCU7$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
