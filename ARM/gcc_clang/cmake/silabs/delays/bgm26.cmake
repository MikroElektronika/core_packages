if(${MCU_NAME} MATCHES "^BGM260PB22VNA$|^BGM260PB32VNA$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
