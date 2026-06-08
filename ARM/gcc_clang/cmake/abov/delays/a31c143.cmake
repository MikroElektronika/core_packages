if(${MCU_NAME} MATCHES "^A31C143CLN$|^A31C143CYN$|^A31C143GRN$|^A31C143KYN$|^A31C143RLN$|^A31C143SNN$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
