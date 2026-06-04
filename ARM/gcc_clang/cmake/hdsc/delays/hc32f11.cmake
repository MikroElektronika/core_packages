if(${MCU_NAME} MATCHES "^HC32F115F8TH$|^HC32F115H8TH$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
