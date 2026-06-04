if(${MCU_NAME} MATCHES "^NUC122LC1DN$|^NUC122LD2DN$|^NUC122SC1DN$|^NUC122SD2DN$|^NUC122ZC1DN$|^NUC122ZD2DN$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
