if(${MCU_NAME} MATCHES "^LPC11D14FBD100-3$|^LPC11D14FBD100-302$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
