cmake_minimum_required(VERSION 3.11)

project(Core VERSION 1 LANGUAGES MikroC)

set(CMAKE_MODULE_PATH "${CMAKE_MODULE_PATH};${CMAKE_CURRENT_SOURCE_DIR}/cmake")
set(CMAKE_STATIC_LIBRARY_PREFIX "")

include(coreUtils)
include(mikroeUtils)

set(DEF_SOURCE def/${MCU_NAME}.c)
set(STD_SOURCES "std_library/cmath.c;std_library/cstdlib.c;std_library/cstring.c;std_library/ctype.c;std_library/cstdio.c")

file(GLOB_RECURSE CMAKE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/cmake/*.cmake)
foreach(cmakeFile ${CMAKE_FILES})
    include(${cmakeFile})
endforeach()

create_core_library()
