if(${MCU_NAME} MATCHES "^MINI51FDE$|^MINI51LDE$|^MINI51TDE$|^MINI51ZDE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
