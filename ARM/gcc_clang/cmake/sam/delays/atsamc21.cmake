if(${MCU_NAME} MATCHES "^ATSAMC21J17AU$|^ATSAMC21J18AU$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
