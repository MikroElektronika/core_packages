if(${MCU_NAME} MATCHES "^NM1330LC1AE$|^NM1330LD2AE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
