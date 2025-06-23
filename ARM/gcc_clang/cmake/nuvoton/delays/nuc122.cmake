if(${MCU_NAME} MATCHES "^NUC122LC1AN$|^NUC122LD2AN$|^NUC122SC1AN$|^NUC122SD2AN$|^NUC122ZC1AN$|^NUC122ZD2AN$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
