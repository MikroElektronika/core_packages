if(${MCU_NAME} MATCHES "^ATSAMC21E15A$|^ATSAMC21E16A$|^ATSAMC21E17A$|^ATSAMC21E18A$|^ATSAMC21G15A$|^ATSAMC21G16A$|^ATSAMC21G17A$|^ATSAMC21G18A$|^ATSAMC21J15A$|^ATSAMC21J16A$|^ATSAMC21J17A$|^ATSAMC21J18A$|^ATSAMC21N17A$|^ATSAMC21N18A")
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${mcu_match}.c PARENT_SCOPE)
    list(APPEND local_list_include system/src/sam/doc_ds_1/thirdparty/system_samc21.c)
    list(APPEND local_list_include common/syscalls.c)
endif()

