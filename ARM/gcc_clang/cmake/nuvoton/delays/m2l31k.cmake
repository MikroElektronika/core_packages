if(${MCU_NAME} MATCHES "^M2L31KGDAE$|^M2L31KIDAE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
