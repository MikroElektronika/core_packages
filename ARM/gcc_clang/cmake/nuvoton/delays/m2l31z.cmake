if(${MCU_NAME} MATCHES "^M2L31ZD4AE$|^M2L31ZE4AE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
