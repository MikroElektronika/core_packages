if(${MCU_NAME} MATCHES "^GD32E235G4U6TR$|^GD32E235G6U6TR$|^GD32E235G8U6TR$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
