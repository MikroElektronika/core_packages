if(${MCU_NAME} MATCHES "^R7F100GMG$|^R7F100GMH$|^R7F100GMJ$|^R7F100GMK$|^R7F100GML$|^R7F100GMN$")
    list(APPEND local_list_macros "getClockPresc (16UL)")
endif()
