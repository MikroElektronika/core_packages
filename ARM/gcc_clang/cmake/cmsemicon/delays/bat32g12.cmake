if(${MCU_NAME} MATCHES "^BAT32G127GH32FP$|^BAT32G127GH40NB$|^BAT32G127GH48FA$|^BAT32G127GH64FB$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
