if(${MCU_NAME} MATCHES "^SN32F287F$|^SN32F288F$|^SN32F289F$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
