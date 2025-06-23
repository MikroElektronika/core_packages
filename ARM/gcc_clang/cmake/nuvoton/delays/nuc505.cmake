if(${MCU_NAME} MATCHES "^NUC505DL13Y$|^NUC505DLA$|^NUC505DS13Y$|^NUC505DSA$|^NUC505YLA$|^NUC505YLA2Y$|^NUC505YO13Y$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
