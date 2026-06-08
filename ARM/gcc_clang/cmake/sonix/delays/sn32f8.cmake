if(${MCU_NAME} MATCHES "^SN32F805F$|^SN32F805J$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
