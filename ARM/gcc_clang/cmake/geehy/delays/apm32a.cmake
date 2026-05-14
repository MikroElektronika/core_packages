if(${MCU_NAME} MATCHES "^APM32A091RC$|^APM32A103CB$|^APM32A103RE$|^APM32A103VE$|^APM32A407VG$|^APM32A407ZG$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
