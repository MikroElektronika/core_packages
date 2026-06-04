if(${MCU_NAME} MATCHES "^M058LAN$|^M058LBN$|^M058MDE$|^M058ZAN$|^M058ZBN$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
