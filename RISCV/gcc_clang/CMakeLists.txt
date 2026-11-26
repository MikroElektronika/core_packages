cmake_minimum_required(VERSION 3.11)

project(lib_core VERSION 1 LANGUAGES C ASM)

set(CMAKE_MODULE_PATH "${CMAKE_MODULE_PATH};${CMAKE_CURRENT_SOURCE_DIR}/cmake")
set(CMAKE_STATIC_LIBRARY_PREFIX "")

include(mikroeUtils)
include(coreUtils)

add_preinit_lib()

if (${TOOLCHAIN_ID} STREQUAL "clang-llvm-riscv")
    add_compile_definitions("CLANG_RISCV")
endif()

# Vendor specific files: cmake/<vendor>/*.cmake (see core_files_set in coreUtils.cmake)
core_files_set(fileListInclude fileDirInclude fileListInstall linkerScript startupFile thirdpartyInstall)
get_mcu_vendor(vendor)

set(MCU_NAME_LOWER "")
string(TOLOWER ${MCU_NAME} MCU_NAME_LOWER)

core_add_library(lib_core MikroC.Core
    ${fileListInclude}
    ${startupFile}
    ${linkerScript}

    common/rcu_typedef.h
    common/delays.h

    include/core_header.h
    cstdio/source/cstdio.c
    cstdio/include/cstdio.h
    interrupts/interrupts.c
    ${TEST_LIB_PATH}/src/unit_test_api.c
    ${TEST_LIB_PATH}/include/unit_test_api.h
    ${PREINIT_ROUTINE_PATH}/src/preinit.c
    ${PREINIT_ROUTINE_PATH}/include/preinit.h
)

target_include_directories(lib_core PRIVATE
    ${fileDirInclude}
    common/
    include/
    cstdio/include
    interrupts/include
    ${CMAKE_BINARY_DIR}
    ${TEST_LIB_PATH}/include
    ${PREINIT_ROUTINE_PATH}/include
    interrupts/include/interrupts_mcu/${MCU_NAME_LOWER}
INTERFACE
    $<INSTALL_INTERFACE:include/core>
)

add_fosc_macro(lib_core)

core_install(MikroC.Core)

# NOTE - Backslash at the end is important for DIRECTORY path
if(thirdpartyInstall)
    if(IS_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}/system/src/${vendor}/${thirdpartyInstall})
        install(
            DIRECTORY
                ${CMAKE_CURRENT_LIST_DIR}/system/src/${vendor}/${thirdpartyInstall}/
            DESTINATION
                ${CMAKE_INSTALL_PREFIX}/include/core
        )
    endif()
endif()

install(
    FILES
        common/rcu_typedef.h
        common/delays.h
        ${fileListInstall}
        common/const.h
        common/bits.h

        include/me_built_in.h
        cstdio/include/cstdio.h
        ${CMAKE_BINARY_DIR}/core_header.h

        interrupts/include/interrupts.h
        interrupts/include/interrupts_mcu/${MCU_NAME_LOWER}/interrupts_mcu.h
    DESTINATION
        ${CMAKE_INSTALL_PREFIX}/include/core
)

install(
    FILES
        ${startupFile}
    DESTINATION
        ${CMAKE_INSTALL_PREFIX}/../FileStartup
)

install(
    FILES
        ${linkerScript}
    DESTINATION
        ${CMAKE_INSTALL_PREFIX}/../FileLinker
)
