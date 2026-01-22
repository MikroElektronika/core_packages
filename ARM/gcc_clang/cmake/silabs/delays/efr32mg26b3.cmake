if(${MCU_NAME} MATCHES "^EFR32MG26B311F3200IL136$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
