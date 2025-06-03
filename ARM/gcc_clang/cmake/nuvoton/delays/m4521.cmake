if(${MCU_NAME} MATCHES "^M4521LE6AE$|^M4521SE6AE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
