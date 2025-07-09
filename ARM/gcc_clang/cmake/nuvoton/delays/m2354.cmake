if(${MCU_NAME} MATCHES "^M2354KJFAE$|^M2354LJFAE$|^M2354SJFAE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
