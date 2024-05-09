if((${MCU_NAME} MATCHES "^MK22F[NX].+$|^MK64F[NX].+$") OR (${MCU_NAME} MATCHES "^MK6[56]F[NX].+$") OR
   (${MCU_NAME} MATCHES "^MK8[02]F[NX].+$") OR (${MCU_NAME} MATCHES "^MK[256][013]D[NX][125](.+)$"))
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
