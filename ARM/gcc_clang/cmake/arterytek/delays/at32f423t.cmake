if(${MCU_NAME} MATCHES "^AT32F423T8U7$|^AT32F423TBU7$|^AT32F423TCU7$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
