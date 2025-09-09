if(${MCU_NAME} MATCHES "^CY8C4724FNI-S402$|^CY8C4724LQI-S401$|^CY8C4725FNI-S402$|^CY8C4725LQI-S401$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
