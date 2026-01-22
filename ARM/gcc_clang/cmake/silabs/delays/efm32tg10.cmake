if(${MCU_NAME} MATCHES "^EFM32TG108F16$|^EFM32TG108F32$|^EFM32TG108F4$|^EFM32TG108F8$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
