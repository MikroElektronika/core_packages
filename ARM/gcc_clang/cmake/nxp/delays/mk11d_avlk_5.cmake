if(${MCU_NAME} MATCHES "^MK11DN512AVLK5$|^MK11DX128AVLK5$|^MK11DX256AVLK5$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
