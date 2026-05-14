if(${MCU_NAME} MATCHES "^APM32F103T4$|^APM32F103T6$|^APM32F103T8$|^APM32F103TB$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
