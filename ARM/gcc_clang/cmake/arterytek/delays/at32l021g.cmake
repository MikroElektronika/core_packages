if(${MCU_NAME} MATCHES "^AT32L021G4U7$|^AT32L021G6U7$|^AT32L021G8U7$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
