if(${MCU_NAME} MATCHES "^M460KGCAE$|^M460LGCAE$|^M460SGCAE$|^M460YGCAE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
