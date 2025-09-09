if(${MCU_NAME} MATCHES "^CY8C4744AZI-S403$|^CY8C4744FNI-S402$|^CY8C4744LQI-S401$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
