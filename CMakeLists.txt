cmake_minimum_required(VERSION 3.14)
project(FSM)

set(CMAKE_CXX_STANDARD 11)
set(PROJECT_ROOT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

include_directories(${PROJECT_ROOT_DIRECTORY})
add_definitions(-DROOT_PATH="${PROJECT_ROOT_DIRECTORY}")

add_subdirectory(${PROJECT_ROOT_DIRECTORY}/SwitchLoop)
include_directories(${SWITCH_LOOP_INCLUDE})

add_executable(StateMachine ${PROJECT_ROOT_DIRECTORY}/test/main.cpp)
target_link_libraries(StateMachine Switch)