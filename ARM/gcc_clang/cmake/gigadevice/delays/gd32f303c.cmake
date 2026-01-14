if(${MCU_NAME} MATCHES "^GD32F303CBT6$|^GD32F303CCT6$|^GD32F303CET6$|^GD32F303CGT6$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
