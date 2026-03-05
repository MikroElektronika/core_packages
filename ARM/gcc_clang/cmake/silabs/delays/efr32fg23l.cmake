if(${MCU_NAME} MATCHES "^EFR32FG23L010F128GM40$|^EFR32FG23L020F128GM40$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
