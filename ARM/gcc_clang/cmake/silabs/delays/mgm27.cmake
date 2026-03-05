if(${MCU_NAME} MATCHES "^MGM270SC22SNA$|^MGM270SC32SNA$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
