if(${MCU_NAME} MATCHES "^A33M114CL$|^A33M114RL$|^A33M114SN$|^A33M116CL$|^A33M116RL$|^A33M116RM$|^A33M116SN$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
