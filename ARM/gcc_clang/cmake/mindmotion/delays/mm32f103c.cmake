if(${MCU_NAME} MATCHES "^MM32F103C8T$|^MM32F103CBT$|^MM32F103CCT$|^MM32F103CET$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
