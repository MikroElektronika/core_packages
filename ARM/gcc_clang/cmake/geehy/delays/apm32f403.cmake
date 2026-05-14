if(${MCU_NAME} MATCHES "^APM32F403CB$|^APM32F403RB$|^APM32F403TB$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
