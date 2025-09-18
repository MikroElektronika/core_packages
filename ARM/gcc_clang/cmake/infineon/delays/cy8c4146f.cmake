if(${MCU_NAME} MATCHES "^CY8C4146FNI-S423$|^CY8C4146FNI-S433$|^CY8C4146FNI-S443$|^CY8C4146FNQ-S433$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
