if(${MCU_NAME} MATCHES "^SN32F705BJ$|^SN32F705J$|^SN32F706BJ$|^SN32F706J$|^SN32F707BF$|^SN32F707F$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
