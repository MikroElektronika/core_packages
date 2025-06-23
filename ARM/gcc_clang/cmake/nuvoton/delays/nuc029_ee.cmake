if(${MCU_NAME} MATCHES "^NUC029LEE$|^NUC029SEE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
