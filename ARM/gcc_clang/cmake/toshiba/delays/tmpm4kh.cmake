if(${MCU_NAME} MATCHES "^TMPM4KHFWCUG$|^TMPM4KHFYBUG$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
