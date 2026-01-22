if(${MCU_NAME} MATCHES "^EFM32TG110F16$|^EFM32TG110F32$|^EFM32TG110F4$|^EFM32TG110F8$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
