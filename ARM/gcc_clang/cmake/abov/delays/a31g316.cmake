if(${MCU_NAME} MATCHES "^A31G316MLN$|^A31G316MMN$|^A31G316RLN$|^A31G316RMN$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
