if(${MCU_NAME} MATCHES "^R7FA6M5BF3CAG$|^R7FA6M5BG3CAG$|^R7FA6M5BH3CAG$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
