if(${MCU_NAME} MATCHES "^ATSAMV71(J|N|Q)(19|20|21)(A|B)?$")
    list(APPEND local_list_macros "getClockValue(_clock) ((_clock*2)/1000UL/3)")
endif()
