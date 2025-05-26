if(${MCU_NAME} MATCHES "^NUC029LGE$|^NUC029KGE$|^NUC029SGE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
