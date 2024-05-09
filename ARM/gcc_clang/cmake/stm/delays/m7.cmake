if(${CORE_NAME} MATCHES "^M7")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/2)")
endif()
