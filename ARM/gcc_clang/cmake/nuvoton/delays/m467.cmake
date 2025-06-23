if(${MCU_NAME} MATCHES "^M467HJHAN$|^M467JJHAN$|^M467KJHAN$|^M467SJHAN$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
