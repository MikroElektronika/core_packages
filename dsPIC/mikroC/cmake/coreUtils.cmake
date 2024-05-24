include(GNUInstallDirs)
include(CMakePackageConfigHelpers)

#############################################################################
## Function to install and export static library target
#############################################################################
function(core_install targetAlias)
    ## Install library
    get_target_property(_targetName ${targetAlias} ALIASED_TARGET)
    get_target_property(linkLibs ${_targetName} INTERFACE_LINK_LIBRARIES)

    core_version_export(${_targetName})
    preinit_support(${_targetName})

    install(TARGETS ${_targetName}
        EXPORT ${targetAlias}Target
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
        )
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
    configure_package_config_file(${CMAKE_CURRENT_FUNCTION_LIST_DIR}/mikroeExportConfig.cmake.in
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

    install(FILES
          "${TEST_LIB_PATH}/include/unit_test_api.h"
          "${PREINIT_ROUTINE_PATH}/include/preinit.h"
        DESTINATION ${CMAKE_INSTALL_LIBDIR}/../include/core)
endfunction()
#############################################################################
## Function to create static library target
#############################################################################
macro(core_add_library functionName functionAlias)
    add_library(${functionName} STATIC ${ARGN})
    add_library(${functionAlias}  ALIAS ${functionName})
    set_target_properties(${functionName} PROPERTIES LINKER_LANGUAGE C)
    set_property(TARGET ${functionName} PROPERTY C_STANDARD 99)
    set_target_properties(${functionName} PROPERTIES EXPORT_NAME ${functionAlias})
endmacro()
#############################################################################
## Function to create interface header only library target
#############################################################################
macro(core_add_interface_library functionName functionAlias)
    add_library(${functionName} INTERFACE ${ARGN})
    add_library(${functionAlias}  ALIAS ${functionName})
    set_target_properties(${functionName} PROPERTIES LINKER_LANGUAGE C)
    set_property(TARGET ${functionName} PROPERTY C_STANDARD 99)
    set_target_properties(${functionName} PROPERTIES EXPORT_NAME ${functionAlias})
endmacro()
##############################################################################
## Macro to create core library
#############################################################################
macro(create_core_library)

    include(${PREINIT_ROUTINE_PATH}/cmake/preinitUtils.cmake)

    preinit_macros()

    set(MCU_NAME_LOWER "")
    string(TOLOWER ${MCU_NAME} MCU_NAME_LOWER)

    set(INTERRUPTS_LIB_SOURCE "interrupts/interrupts.c")
    set(INTERRUPTS_LIB_INCLUDE "interrupts/include/interrupts.h")
    set(INTERRUPTS_LIB_INCLUDE_DIR "interrupts/include")

    set(INTERRUPTS_LIB_INCLUDE_MCU "interrupts/include/interrupts_mcu/${MCU_NAME_LOWER}/interrupts_mcu.h")
    set(INTERRUPTS_LIB_INCLUDE_MCU_DIR "interrupts/include/interrupts_mcu/${MCU_NAME_LOWER}")

    cmake_path(CONVERT "${SEARCH_PATHS}" TO_CMAKE_PATH_LIST SEARCH_PATH_LIST NORMALIZE)
    list(TRANSFORM SEARCH_PATH_LIST PREPEND "-SP;" )

    set(CUSTOM_COMMAND_STRING ${CMAKE_MikroC_COMPILER} -p${MCU_NAME} -jcom -DL -NRL -MF ${COMPILER_FLAGS} -b${CMAKE_BINARY_DIR} -fo${OSC} ${JCFG_FILE} ${SEARCH_PATH_LIST})
    set(CUSTOM_LINK_COMMAND_STRING ${CMAKE_MikroC_COMPILER} -ARH -NRL ${LINKER_FLAGS} -b${CMAKE_BINARY_DIR} ${SEARCH_PATH_LIST} -SP${CMAKE_BINARY_DIR})

    set(STD_LIB_NAMES "")
    if(${MIKROSDK_TYPE} STREQUAL "mikrosdk")
        foreach(STD_LIB IN LISTS STD_SOURCES)
            get_filename_component(FILE_BASENAME ${STD_LIB} NAME_WE)
            list(APPEND STD_LIB_NAMES ${CMAKE_BINARY_DIR}/${FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION})
        endforeach()
    else()
        list(APPEND STD_LIB_NAMES ${CMAKE_BINARY_DIR}/cstdio${CMAKE_MikroC_OUTPUT_EXTENSION})
    endif()

    set(UNIT_TEST_LIB_SOURCES ${TEST_LIB_PATH}/src/unit_test_api.c)
    set(PREINIT_LIB_SOURCES ${PREINIT_ROUTINE_PATH}/src/preinit.c)

    get_filename_component(DEF_FILE_BASENAME ${DEF_SOURCE} NAME_WE)
    get_filename_component(DELAY_FILE_BASENAME ${DELAY_SOURCE} NAME_WE)
    get_filename_component(MATH_FILE_BASENAME ${MATH_LIB_SOURCE} NAME_WE)
    get_filename_component(MATH_DOUBLE_FILE_BASENAME ${MATH_DOUBLE_SOURCE} NAME_WE)
    get_filename_component(SYSTEM_FILE_BASENAME ${SYSTEM_LIB_SOURCE} NAME_WE)
    get_filename_component(INTERRUPTS_LIB_SOURCE_BASENAME ${INTERRUPTS_LIB_SOURCE} NAME_WE)

    if (${MIKROSDK_TYPE} STREQUAL "mikrosdk")
        set(ARCHIVE_LIB_LIST -out lib_core.a  ${CMAKE_BINARY_DIR}/${DEF_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}  ${CMAKE_BINARY_DIR}/${MATH_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}  ${CMAKE_BINARY_DIR}/${MATH_DOUBLE_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}  ${CMAKE_BINARY_DIR}/${DELAY_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}  ${CMAKE_BINARY_DIR}/${SYSTEM_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${INTERRUPTS_LIB_SOURCE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${STD_LIB_NAMES} ${CMAKE_BINARY_DIR}/unit_test_api${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/preinit${CMAKE_MikroC_OUTPUT_EXTENSION})
    else()
        set(ARCHIVE_LIB_LIST -out lib_core.a  ${CMAKE_BINARY_DIR}/${DEF_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}  ${CMAKE_BINARY_DIR}/${DELAY_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${INTERRUPTS_LIB_SOURCE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${STD_LIB_NAMES} ${CMAKE_BINARY_DIR}/unit_test_api${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/preinit${CMAKE_MikroC_OUTPUT_EXTENSION})
    endif()

    add_custom_command(OUTPUT ${CMAKE_BINARY_DIR}/${DEF_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}
                            ${CMAKE_BINARY_DIR}/${MATH_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}
                            ${CMAKE_BINARY_DIR}/${MATH_DOUBLE_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}
                            ${CMAKE_BINARY_DIR}/${DELAY_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}
                            ${CMAKE_BINARY_DIR}/${SYSTEM_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}
                            ${CMAKE_BINARY_DIR}/${INTERRUPTS_LIB_SOURCE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}
                            ${CMAKE_BINARY_DIR}/std${CMAKE_MikroC_OUTPUT_EXTENSION}
                            ${CMAKE_BINARY_DIR}/lib_core.a
                    COMMAND ${CUSTOM_COMMAND_STRING} -out ${DEF_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_CURRENT_SOURCE_DIR}/${DEF_SOURCE}
                    COMMAND ${CUSTOM_COMMAND_STRING} -out ${MATH_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_CURRENT_SOURCE_DIR}/${MATH_LIB_SOURCE} ${CMAKE_BINARY_DIR}/${DEF_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}
                    COMMAND ${CUSTOM_COMMAND_STRING} -out ${MATH_DOUBLE_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_CURRENT_SOURCE_DIR}/${MATH_DOUBLE_SOURCE} ${CMAKE_BINARY_DIR}/${DEF_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${MATH_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}
                    COMMAND ${CUSTOM_COMMAND_STRING} -out ${DELAY_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_CURRENT_SOURCE_DIR}/${DELAY_SOURCE} ${CMAKE_BINARY_DIR}/${DEF_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${MATH_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${MATH_DOUBLE_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}
                    COMMAND ${CUSTOM_COMMAND_STRING} -IP${CMAKE_CURRENT_SOURCE_DIR}/${SYSTEM_LIB_INCLUDE_DIR} -out ${SYSTEM_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_CURRENT_SOURCE_DIR}/${SYSTEM_LIB_SOURCE} ${CMAKE_BINARY_DIR}/${DEF_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${MATH_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${MATH_DOUBLE_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${DELAY_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}
                    COMMAND ${CUSTOM_COMMAND_STRING} -IP${CMAKE_CURRENT_SOURCE_DIR}/${SYSTEM_LIB_INCLUDE_DIR} -out std${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_CURRENT_SOURCE_DIR}/${STD_SOURCES} ${CMAKE_BINARY_DIR}/${DEF_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${MATH_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${MATH_DOUBLE_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${DELAY_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${SYSTEM_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}
                    COMMAND ${CUSTOM_COMMAND_STRING} -IP${TEST_LIB_PATH}/include -out unit_test_api${CMAKE_MikroC_OUTPUT_EXTENSION} ${UNIT_TEST_LIB_SOURCES} ${CMAKE_BINARY_DIR}/${DEF_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${MATH_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${MATH_DOUBLE_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${DELAY_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${SYSTEM_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${STD_LIB_NAMES}
                    COMMAND ${CUSTOM_COMMAND_STRING} -IP${CMAKE_CURRENT_SOURCE_DIR}/${INTERRUPTS_LIB_INCLUDE_DIR} -IP ${CMAKE_CURRENT_SOURCE_DIR}/${INTERRUPTS_LIB_INCLUDE_MCU_DIR} -out ${INTERRUPTS_LIB_SOURCE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${INTERRUPTS_LIB_SOURCE} ${CMAKE_BINARY_DIR}/${DEF_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${MATH_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${MATH_DOUBLE_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${DELAY_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${SYSTEM_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${STD_LIB_NAMES}
                    COMMAND ${CUSTOM_COMMAND_STRING} -IP${PREINIT_ROUTINE_PATH}/include -out preinit${CMAKE_MikroC_OUTPUT_EXTENSION} ${PREINIT_LIB_SOURCES} ${CMAKE_BINARY_DIR}/${DEF_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${MATH_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${MATH_DOUBLE_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${DELAY_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${SYSTEM_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${STD_LIB_NAMES}
                    COMMAND ${CUSTOM_LINK_COMMAND_STRING} ${ARCHIVE_LIB_LIST}
                    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
                    DEPENDS ${DEF_SOURCE}
                    VERBATIM)

    core_add_interface_library(lib_core MikroC.Core
        ${CMAKE_BINARY_DIR}/${DEF_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}
        ${CMAKE_BINARY_DIR}/${DELAY_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}
        ${CMAKE_BINARY_DIR}/${MATH_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}
        ${CMAKE_BINARY_DIR}/${MATH_DOUBLE_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}
        ${CMAKE_BINARY_DIR}/${SYSTEM_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}
        ${CMAKE_BINARY_DIR}/${INTERRUPTS_LIB_SOURCE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}
        ${CMAKE_BINARY_DIR}/std${CMAKE_MikroC_OUTPUT_EXTENSION}
        ${CMAKE_BINARY_DIR}/lib_core.a
        ${DEF_SOURCE}
        ${DELAY_SOURCE}
        ${MATH_LIB_SOURCE}
        ${MATH_DOUBLE_SOURCE}
        ${SYSTEM_LIB_SOURCE}
        ${INTERRUPTS_LIB_SOURCE}
    )

    target_include_directories(lib_core
        INTERFACE
            $<INSTALL_INTERFACE:${CMAKE_INSTALL_LIBDIR}/../include/core>
    )

    core_install(MikroC.Core)

    install(
        FILES
            ${CMAKE_BINARY_DIR}/lib_core.a
        DESTINATION
            ${CMAKE_INSTALL_PREFIX}/lib
    )

    install(
        FILES
            common/delays.h
            ${INTERRUPTS_LIB_INCLUDE}
            ${INTERRUPTS_LIB_INCLUDE_MCU}
        DESTINATION
            ${CMAKE_INSTALL_PREFIX}/include/core
    )

    core_version_export(lib_core)
    preinit_support(lib_core)

endmacro()
