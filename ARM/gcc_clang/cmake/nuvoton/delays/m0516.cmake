if(${MCU_NAME} MATCHES "^M0516LDE$|^M0516LDN$|^M0516ZDE$|^M0516ZDN$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
