if(${MCU_NAME} MATCHES "^STM32L162QC$|^STM32L162ZC$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
