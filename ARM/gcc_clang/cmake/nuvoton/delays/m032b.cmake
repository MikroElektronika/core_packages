if(${MCU_NAME} MATCHES "^M032BTAG8AN$|^M032BTAIAAN$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
