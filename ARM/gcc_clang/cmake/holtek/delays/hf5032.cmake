if(${MCU_NAME} MATCHES "^HF5032L_48LQFP$|^HF5032Q_33QFN$|^HF5032S_28SSOP$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
