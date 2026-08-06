if(${MCU_NAME} MATCHES "^TMPM4KLFDFG$|^TMPM4KLFDUG$|^TMPM4KLFWFG$|^TMPM4KLFWUG$|^TMPM4KLFYFG$|^TMPM4KLFYUG$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
