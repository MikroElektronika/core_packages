if(${MCU_NAME} MATCHES "^MM32F103R8T$|^MM32F103RBT$|^MM32F103RCT$|^MM32F103RET$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
