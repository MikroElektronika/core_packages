if(${MCU_NAME} MATCHES "^EFM32TG210F16$|^EFM32TG210F32$|^EFM32TG210F8$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
