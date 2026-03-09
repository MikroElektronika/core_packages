if(${MCU_NAME} MATCHES "^GD32W515P0Q6$|^GD32W515PIQ6$|^GD32W515TGQ6$|^GD32W515TIQ6$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
