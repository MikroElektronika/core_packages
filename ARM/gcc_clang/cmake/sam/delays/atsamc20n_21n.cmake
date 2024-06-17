if(${MCU_NAME} MATCHES "^ATSAMC20N17A$|^ATSAMC20N18A$|^ATSAMC21N17A$|^ATSAMC21N18A$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
