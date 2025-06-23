if(${MCU_NAME} MATCHES "^M0518LC2AE$|^M0518LD2AE$|^M0518SC2AE$|^M0518SD2AE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
