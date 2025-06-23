if(${MCU_NAME} MATCHES "^M463KGCAE$|^M463LGCAE$|^M463SGCAE$|^M463YGCAE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
