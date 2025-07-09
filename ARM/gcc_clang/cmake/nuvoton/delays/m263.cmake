if(${MCU_NAME} MATCHES "^M263KIAAE$|^M263SIAAE$|^M263ZIAAE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
