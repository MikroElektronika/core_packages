if(${MCU_NAME} MATCHES "^A33G538MM$|^A33G538RL$|^A33G538VL$|^A33G538VQ$|^A33G539MM$|^A33G539RL$|^A33G539VL$|^A33G539VQ$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
