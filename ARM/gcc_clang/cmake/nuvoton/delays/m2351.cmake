if(${MCU_NAME} MATCHES "^M2351CIAAE$|^M2351KIAAE$|^M2351SFSIAAP$|^M2351SIAAE$|^M2351ZIAAE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
