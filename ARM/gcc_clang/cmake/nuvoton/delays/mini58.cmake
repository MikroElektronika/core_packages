if(${MCU_NAME} MATCHES "^MINI58FDE$|^MINI58LDE$|^MINI58TDE$|^MINI58ZDE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
