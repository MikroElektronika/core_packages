if(${MCU_NAME} MATCHES "^ATSAMC20E15A$|^ATSAMC20E16A$|^ATSAMC20E17A$|^ATSAMC20E18A$|^ATSAMC20G15A$|^ATSAMC20G16A$|^ATSAMC20G17A$|^ATSAMC20G18A$|^ATSAMC20J15A$|^ATSAMC20J16A$|^ATSAMC20J17A$|^ATSAMC20J18A$|^ATSAMC20N17A$|^ATSAMC20N18A")
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${mcu_match}.c PARENT_SCOPE)
    list(APPEND local_list_include system/src/sam/system_samc20.c)
    list(APPEND local_list_include common/syscalls.c)
endif()

