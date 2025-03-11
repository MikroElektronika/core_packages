if(${MCU_NAME} MATCHES "^MK21DN512AVLK5$|^MK21DX128AVLK5$|^MK21DX256AVLK5$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
