if(${MCU_NAME} MATCHES "^M483KGCAE$|^M483KGCAE2A$|^M483KIDAE$|^M483SE8AE$|^M483SGCAE$|^M483SGCAE2A$|^M483SIDAE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
