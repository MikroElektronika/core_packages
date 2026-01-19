if(${MCU_NAME} MATCHES "^GD32E235C4T6$|^GD32E235C6T6$|^GD32E235C8T6$|^GD32E235CBT6$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
