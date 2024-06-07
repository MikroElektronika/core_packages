#############################################################################
## Function to install and export static library target
#############################################################################
function(mikrosdk_install targetAlias)
    ## Install library
    get_target_property(_targetName ${targetAlias} ALIASED_TARGET)
    get_target_property(linkLibs ${_targetName} INTERFACE_LINK_LIBRARIES)
    install(TARGETS ${_targetName}
        EXPORT ${targetAlias}Target
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
        INCLUDES DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
    # Install export file
    install(EXPORT ${targetAlias}Target
        FILE ${targetAlias}Targets.cmake
        DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${targetAlias})
    ## Set variable used in config file
    set(TARGET_NAME ${targetAlias})
    set(findDepsList "")

    foreach(LIB ${linkLibs})
        list(APPEND findDepsList "find_dependency(${LIB})")
    endforeach()
    if (linkLibs)
        list(JOIN findDepsList "\n" FIND_DEPS)
    else()
        set(FIND_DEPS "")
    endif()
    ## Configure package file
    configure_package_config_file(${PROJECT_SOURCE_DIR}/cmake/ExportConfig.cmake.in
         "${CMAKE_CURRENT_BINARY_DIR}/${targetAlias}Config.cmake"
         INSTALL_DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${targetAlias})

    ## Configure package version file
    write_basic_package_version_file(
        "${CMAKE_CURRENT_BINARY_DIR}/${targetAlias}ConfigVersion.cmake"
        VERSION ${CMAKE_PROJECT_VERSION}
        COMPATIBILITY AnyNewerVersion
        ARCH_INDEPENDENT)
    ## Install package export and package version file
    install(FILES
          "${CMAKE_CURRENT_BINARY_DIR}/${targetAlias}Config.cmake"
          "${CMAKE_CURRENT_BINARY_DIR}/${targetAlias}ConfigVersion.cmake"
        DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${targetAlias})
endfunction()

#############################################################################
## Function to create static library target
#############################################################################
macro(mikrosdk_add_library functionName functionAlias)
    add_library(${functionName} STATIC ${ARGN})
    add_library(${functionAlias}  ALIAS ${functionName})
    set_target_properties(${functionName} PROPERTIES LINKER_LANGUAGE C)
    set_property(TARGET ${functionName} PROPERTY C_STANDARD 99)
    set_target_properties(${functionName} PROPERTIES EXPORT_NAME ${functionAlias})
endmacro()

#############################################################################
## Function to create interface header only library target
#############################################################################
macro(mikrosdk_add_interface_library functionName functionAlias)
    add_library(${functionName} INTERFACE ${ARGN})
    add_library(${functionAlias}  ALIAS ${functionName})
    set_target_properties(${functionName} PROPERTIES LINKER_LANGUAGE C)
    set_property(TARGET ${functionName} PROPERTY C_STANDARD 99)
    set_target_properties(${functionName} PROPERTIES EXPORT_NAME ${functionAlias})
endmacro()

#############################################################################
## Function to deduce chip architecture from current MCU name and CORE
#############################################################################
function(find_chip_architecture _chip_architecture)
    if((${MEMAKE_CORE_NAME} STREQUAL "MIPS32") OR (${MEMAKE_CORE_NAME} STREQUAL "MICROAPTIV_FP") OR (${MEMAKE_CORE_NAME} STREQUAL "MICROAPTIV"))
        if(${MEMAKE_MCU_NAME} MATCHES "(^PIC32MX[1-7][1-79][045]F(512|256|128|064|032|016)[HLBCD]B?$|^PIC32MZ(0512|1024|2048)EF[FEHMGK](064|100|124|144)$)")
            set(${_chip_architecture} "pic_32bit" PARENT_SCOPE)
        else()
            set(${_chip_architecture} "UNSUPPORTED_CHIP_SELECTED_FOR_FOLLOWING_IMPLEMENTATION" PARENT_SCOPE)
        endif()
    else()
        set(${_chip_architecture} "__chip_error__" PARENT_SCOPE)
    endif()
endfunction()

#############################################################################
## Function to set appropriate linker, startup and source files
#############################################################################
function(core_files_set fileListInclude fileDirInclude fileListInstall linkerScript)

    set(local_list_include ${fileListInclude})
    set(local_list_install ${fileListInstall})
    set(local_dir_install ${fileDirInclude})

    string(TOLOWER ${MCU_NAME} mcu_match)
    string(TOLOWER ${CORE_NAME} core_match)

    list(APPEND local_list_install "common/delays.h")
    list(APPEND local_list_include "common/delays.h")
    list(APPEND local_list_include "delays/${core_match}/delays.c")

    list(APPEND local_list_include def/${MCU_NAME}/mcu.h)
    list(APPEND local_list_install def/${MCU_NAME}/mcu.h)

    list(APPEND local_dir_install def/${MCU_NAME})
    set(${list} ${local_dir_install} PARENT_SCOPE)

    file(GLOB_RECURSE CMAKE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/cmake/pic32/linker.cmake)
    foreach(cmakeFile ${CMAKE_FILES})
        include(${cmakeFile})
    endforeach()

    set(${list} ${local_list_include} PARENT_SCOPE)
    set(${list} ${local_list_install} PARENT_SCOPE)

endfunction()

#############################################################################
## Function to create interface headers according to lib alias
#############################################################################
macro(add_macros fileDestination fileList)
    # Cannot use ARGN directly with list() command,
    # so copy it to a variable first.
    set (extra_args ${ARGN})

    # Did we get any optional args?
    list(LENGTH extra_args extra_count)
    if (${extra_count} GREATER 0)
        # Create a list of directives
        set(MACRO_LIST "")
        foreach(ARGUMENT ${extra_args})
            string(APPEND MACRO_LIST "#define ${ARGUMENT}\n")
        endforeach()

        # Generate output file with adequate name and include directive
        configure_file(${PROJECT_SOURCE_DIR}/cmake/InstallHeaders.cmake.in ${fileDestination}/${fileList})
    endif()
endmacro()
