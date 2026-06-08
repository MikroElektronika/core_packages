if(${MCU_NAME} MATCHES "^M054LAN$|^M054LBN$|^M054ZAN$|^M054ZBN$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
