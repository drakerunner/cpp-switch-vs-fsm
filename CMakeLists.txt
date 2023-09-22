cmake_minimum_required(VERSION 3.0.0)
project(cpp-switch-vs-fsm VERSION 0.1.0 LANGUAGES C CXX)


set (HEADERS 
    src/inc/benchmark.h
    src/inc/fsm.h
    src/inc/main.h
    src/inc/str_generator.h
    src/inc/switch_case.h
)

set (SOURCES 
    src/benchmark.cpp
    src/fsm.cpp
    src/main.cpp
    src/str_generator.cpp
    src/switch_case.cpp
)

add_executable(${PROJECT_NAME})
target_sources(${PROJECT_NAME} PRIVATE ${HEADERS} ${SOURCES})
target_include_directories(${PROJECT_NAME} PRIVATE src src/inc)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
