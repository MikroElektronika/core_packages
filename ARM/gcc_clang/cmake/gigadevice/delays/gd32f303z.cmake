if(${MCU_NAME} MATCHES "^GD32F303ZCT6$|^GD32F303ZET6$|^GD32F303ZGT6$|^GD32F303ZIT6$|^GD32F303ZKT6$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
