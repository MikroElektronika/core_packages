if(${MCU_NAME} MATCHES "^LPC18S37JBD144$|^LPC18S37JET100$|^LPC18S57JBD208$|^LPC18S57JET256$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
