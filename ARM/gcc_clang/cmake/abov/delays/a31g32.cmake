if(${MCU_NAME} MATCHES "^A31G323CL$|^A31G323RL$|^A31G324CL$|^A31G324CU$|^A31G324RL$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
