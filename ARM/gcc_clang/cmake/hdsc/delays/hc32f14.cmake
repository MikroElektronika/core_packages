if(${MCU_NAME} MATCHES "^HC32F146F8$|^HC32F146J8$|^HC32F146KA$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
