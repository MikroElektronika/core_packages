if(${MCU_NAME} MATCHES "^A31S134CL$|^A31S134KN$|^A31S134KU$|^A31S134RL$|^A31S134SN$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
