if(${MCU_NAME} MATCHES "^AT32F011C8T7$|^AT32F011F8P7$|^AT32F011F8U7$|^AT32F011K8U7_4$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
