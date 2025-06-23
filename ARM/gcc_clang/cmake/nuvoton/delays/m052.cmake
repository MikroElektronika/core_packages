if(${MCU_NAME} MATCHES "^M052LDE$|^M052LDN$|^M052ZDE$|^M052ZDN$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
