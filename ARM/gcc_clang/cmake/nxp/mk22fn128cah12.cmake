## MK22FN128CAH12 has specific sectors
if(${MCU_NAME} STREQUAL "MK22FN128CAH12")
    set(${linkerScript} linker_scripts/${vendor}/mk22fn128xxx12xx.ld PARENT_SCOPE)
    ## Same documentaion as MK22F256xxx MCUs.
    set(${startupFile} startup/${vendor}/mk22f256xxx12.s PARENT_SCOPE)
    list(APPEND local_list_include system/src/${vendor}/system_nxp_mk22fxx_mk64fxx.c)
    list(APPEND local_list_include system/inc/${vendor}/system_nxp_mk22fxx_mk64fxx.h)
    list(APPEND local_list_install system/inc/${vendor}/system_nxp_mk22fxx_mk64fxx.h)
endif()
