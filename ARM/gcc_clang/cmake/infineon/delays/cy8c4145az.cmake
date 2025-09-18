if(${MCU_NAME} MATCHES "^CY8C4145AZI-S423$|^CY8C4145AZQ-S433$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
