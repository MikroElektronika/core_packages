if(${MCU_NAME} MATCHES "^M487JIDAE$|^M487KIDAE$|^M487KMCAN$|^M487SIDAE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
