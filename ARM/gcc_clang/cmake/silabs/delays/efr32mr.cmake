if(${MCU_NAME} MATCHES "^EFR32MR21A020F512IM32$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
