if(${MCU_NAME} MATCHES "^SN32F773S$|^SN32F773T$|^SN32F7741J$|^SN32F774S$|^SN32F774T$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
