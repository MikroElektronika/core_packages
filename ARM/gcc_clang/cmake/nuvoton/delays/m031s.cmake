if(${MCU_NAME} MATCHES "^M031SC2AE$|^M031SD2AE$|^M031SE3AE$|^M031SG6AE$|^M031SG8AE$|^M031SIAAE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
