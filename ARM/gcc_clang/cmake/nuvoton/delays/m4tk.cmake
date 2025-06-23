if(${MCU_NAME} MATCHES "^M4TKLE6AE$|^M4TKLG6AE$|^M4TKRE6AE$|^M4TKRG6AE$|^M4TKVE6AE$|^M4TKVG6AE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
