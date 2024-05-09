if(${CORE_NAME} MATCHES "^M0")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
