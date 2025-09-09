if(${MCU_NAME} MATCHES "^CY8C4124FNI-S403$|^CY8C4124FNI-S413$|^CY8C4124FNI-S433$|^CY8C4124FNQ-S433$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
