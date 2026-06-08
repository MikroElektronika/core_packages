if(${MCU_NAME} MATCHES "^LPC832M101FDH20$|^LPC834M101FHI33$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
