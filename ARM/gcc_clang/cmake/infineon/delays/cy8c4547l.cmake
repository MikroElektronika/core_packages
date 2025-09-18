if(${MCU_NAME} MATCHES "^CY8C4547LQI-S476$|^CY8C4547LQQ-S476$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
