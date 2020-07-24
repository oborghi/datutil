cmake_minimum_required(VERSION 3.0.0)
project(datutil VERSION 0.1.0)

include(CTest)
enable_testing()

file(GLOB SOURCES
    src/*.c
    src/*.h
    src/misc/*.c
    src/misc/*.h
    src/mame/*.c
    src/mame/*.h
    src/mame/msdos/*.h
    src/mame/msdos/*.c
    src/hash/*.c
    src/hash/*.h
    src/drv/*.c
    src/drv/*.h
)

add_executable(datutil ${SOURCES})

find_package(ZLIB)
target_link_libraries(datutil ZLIB::ZLIB)
target_link_libraries(datutil m)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
