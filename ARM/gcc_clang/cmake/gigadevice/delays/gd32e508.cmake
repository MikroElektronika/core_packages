if(${MCU_NAME} MATCHES "^GD32E508RET6$|^GD32E508VET6$|^GD32E508ZET6$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
