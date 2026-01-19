if(${MCU_NAME} MATCHES "^GD32F101C4T6$|^GD32F101C6T6$|^GD32F101C8T6$|^GD32F101CBT6$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
