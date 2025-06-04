if(${MCU_NAME} MATCHES "^ATSAMC20J17AU$|^ATSAMC20J18AU$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
