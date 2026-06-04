if(${MCU_NAME} MATCHES "^A31G336CL$|^A31G336CU$|^A31G336IU$|^A31G336KU$|^A31G336RL$|^A31G336RM$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
