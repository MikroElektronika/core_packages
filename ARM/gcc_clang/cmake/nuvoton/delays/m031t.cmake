if(${MCU_NAME} MATCHES "^M031TB0AE$|^M031TC1AE$|^M031TD2AE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
