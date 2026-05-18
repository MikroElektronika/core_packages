if(${MCU_NAME} MATCHES "^AT32A423K8U7_4$|^AT32A423KBU7_4$|^AT32A423KCU7_4$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
