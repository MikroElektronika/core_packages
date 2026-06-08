if(${MCU_NAME} MATCHES "^HC32L130E8PA$|^HC32L130F8UA$|^HC32L130J8TA$|^HC32L136J8TA$|^HC32L136K8TA$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
