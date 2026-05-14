if(${MCU_NAME} MATCHES "^AT32F423K8U7_4$|^AT32F423KBU7_4$|^AT32F423KCU7_4$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
