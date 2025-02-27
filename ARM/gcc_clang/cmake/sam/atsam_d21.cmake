if(${MCU_NAME} MATCHES "^ATSAMD21E15A$|^ATSAMD21E16A$|^ATSAMD21E17A$|^ATSAMD21E18A$|^ATSAMD21G15A$|^ATSAMD21G16A$|^ATSAMD21G17A$|^ATSAMD21G18A$|^ATSAMD21J15A$|^ATSAMD21J16A$|^ATSAMD21J17A$|^ATSAMD21J18A$|^ATSAMD21G17AU$|^ATSAMD21G18AU$")
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${mcu_match}.c PARENT_SCOPE)
    list(APPEND local_list_include system/src/sam/atsam_d21/system_sam_d21.c)
    list(APPEND local_list_include common/syscalls.c)
    list(APPEND local_dir_install system/src/sam/atsam_d21/thirdparty/atsamd21a)
    set(${thirdpartyInstall} atsam_d21/thirdparty/atsamd21a PARENT_SCOPE)
endif()

if(${MCU_NAME} MATCHES "^ATSAMD21E15BU$|^ATSAMD21E16BU$")
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${mcu_match}.c PARENT_SCOPE)
    list(APPEND local_list_include system/src/sam/atsam_d21/system_sam_d21.c)
    list(APPEND local_list_include common/syscalls.c)
    list(APPEND local_dir_install system/src/sam/atsam_d21/thirdparty/atsamd21b)
    set(${thirdpartyInstall} atsam_d21/thirdparty/atsamd21b PARENT_SCOPE)
endif()

if(${MCU_NAME} MATCHES "^ATSAMD21E15B$|^ATSAMD21E15CU$|^ATSAMD21E15L$|^ATSAMD21E16B$|^ATSAMD21E16CU$|^ATSAMD21E16L$|^ATSAMD21G15B$|^ATSAMD21G15L$|^ATSAMD21G16B$|^ATSAMD21G16L$|^ATSAMD21J15B$|^ATSAMD21J16B$")
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${mcu_match}.c PARENT_SCOPE)
    list(APPEND local_list_include system/src/sam/atsam_d21/system_sam_d21.c)
    list(APPEND local_list_include common/syscalls.c)
    list(APPEND local_dir_install system/src/sam/atsam_d21/thirdparty/atsamd21c)
    set(${thirdpartyInstall} atsam_d21/thirdparty/atsamd21c PARENT_SCOPE)
endif()

if(${MCU_NAME} MATCHES "^ATSAMD21E17D$|^ATSAMD21E17DU$|^ATSAMD21E17L$|^ATSAMD21G17D$|^ATSAMD21G17L$|^ATSAMD21J17D$")
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${mcu_match}.c PARENT_SCOPE)
    list(APPEND local_list_include system/src/sam/atsam_d21/system_sam_d21.c)
    list(APPEND local_list_include common/syscalls.c)
    list(APPEND local_dir_install system/src/sam/atsam_d21/thirdparty/atsamd21d)
    set(${thirdpartyInstall} atsam_d21/thirdparty/atsamd21d PARENT_SCOPE)
endif()
