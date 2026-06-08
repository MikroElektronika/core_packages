if(${MCU_NAME} MATCHES "^LPC8N04FHI24$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
