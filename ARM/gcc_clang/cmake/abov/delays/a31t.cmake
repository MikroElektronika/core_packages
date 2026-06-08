if(${MCU_NAME} MATCHES "^A31T214CLN$|^A31T214IUN$|^A31T214RLN$|^A31T214SNN$|^A31T216CLN$|^A31T216RLN$|^A31T216SNN$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
