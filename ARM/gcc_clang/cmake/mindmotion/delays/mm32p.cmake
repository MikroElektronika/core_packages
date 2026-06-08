if(${MCU_NAME} MATCHES "^MM32P021MN$|^MM32P021MNSim$|^MM32P021SE$|^MM32P021SESim$|^MM32P021SR$|^MM32P021SRSim$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
