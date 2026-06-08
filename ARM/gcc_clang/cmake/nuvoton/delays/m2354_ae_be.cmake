if(${MCU_NAME} MATCHES "^M2354CJFAE$|^M2354CJFBE$|^M2354KJFBE$|^M2354LJFBE$|^M2354LJFCE$|^M2354SJFBE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
