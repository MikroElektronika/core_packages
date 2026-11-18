if(${MCU_NAME} MATCHES "^R7F100GSJ$|^R7F100GSK$|^R7F100GSL$|^R7F100GSN$")
    list(APPEND local_list_macros "getClockPresc (16UL)")
endif()
