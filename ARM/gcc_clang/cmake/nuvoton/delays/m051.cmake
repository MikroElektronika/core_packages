if(${MCU_NAME} MATCHES "^M0515LDE$|^M0516LAN$|^M0516LBN$|^M0516ZAN$|^M0516ZBN$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
