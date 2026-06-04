if(${MCU_NAME} MATCHES "^SN32F297F$|^SN32F298F$|^SN32F299F$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
