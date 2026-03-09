if(${MCU_NAME} MATCHES "^GD32F101T4U6$|^GD32F101T6U6$|^GD32F101T8U6$|^GD32F101TBU6$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
