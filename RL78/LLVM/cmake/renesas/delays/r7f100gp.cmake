if(${MCU_NAME} MATCHES "^R7F100GPG$|^R7F100GPH$|^R7F100GPJ$|^R7F100GPK$|^R7F100GPL$|^R7F100GPN$")
    list(APPEND local_list_macros "getClockPresc (16UL)")
endif()
