if(${MCU_NAME} MATCHES "^M052LAN$|^M052LBN$|^M052ZAN$|^M052ZBN$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
