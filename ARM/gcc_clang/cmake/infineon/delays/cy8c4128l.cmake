if(${MCU_NAME} MATCHES "^CY8C4128LQI-S446$|^CY8C4128LQQ-S456$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
