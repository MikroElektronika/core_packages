if(${MCU_NAME} MATCHES "^HF5032L-48LQFP$|^HF5032Q-33QFN$|^HF5032S-28SSOP$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
