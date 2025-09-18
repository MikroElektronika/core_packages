if(${MCU_NAME} MATCHES "^CY8C4125FNI-S413$|^CY8C4125FNI-S423$|^CY8C4125FNI-S433$|^CY8C4125FNQ-S433$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
