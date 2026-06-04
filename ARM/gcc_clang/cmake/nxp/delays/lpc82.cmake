if(${MCU_NAME} MATCHES "^LPC822M101JDH20$|^LPC822M101JHI33$|^LPC824M201JDH20$|^LPC824M201JHI33$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
