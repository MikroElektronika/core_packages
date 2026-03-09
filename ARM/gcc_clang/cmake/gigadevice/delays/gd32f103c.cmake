if(${MCU_NAME} MATCHES "^GD32F103C4T6$|^GD32F103C6T6$|^GD32F103C8T6$|^GD32F103CBT6$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
