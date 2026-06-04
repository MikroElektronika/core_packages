if(${MCU_NAME} MATCHES "^A34G43ARL2N$|^A34G43AVL2N$|^A34G43AYL2N$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
