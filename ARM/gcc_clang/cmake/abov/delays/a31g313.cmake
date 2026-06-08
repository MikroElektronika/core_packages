if(${MCU_NAME} MATCHES "^A31G313CLN$|^A31G313CUN$|^A31G313RLN$|^A31G313RMN$|^A31G313SNN$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
