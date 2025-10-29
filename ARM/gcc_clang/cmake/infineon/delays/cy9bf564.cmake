if(${MCU_NAME} MATCHES "^CY9BF564KQN-G-AVE2$|^CY9BF564LPMC-G-JNE2$|^CY9BF564LPMC1-G-JNE2$|^CY9BF564LQN-G-AVE2$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
