if(${MCU_NAME} MATCHES "^AT32F421G4U7$|^AT32F421G6U7$|^AT32F421G8U7$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
