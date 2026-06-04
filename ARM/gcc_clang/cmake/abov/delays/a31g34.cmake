if(${MCU_NAME} MATCHES "^A31G346CL$|^A31G346CU$|^A31G346KU$|^A31G346RL$|^A31G346RM$|^A31G346RN$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
