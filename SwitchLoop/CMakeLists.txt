cmake_minimum_required(VERSION 3.14)

add_compile_options(-std=c++11 -g)

include_directories(./include)
aux_source_directory(./src SWITCH_LOOP_SRCS)
add_library(Switch SHARED ${SWITCH_LOOP_SRCS})

get_property(include_dir DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY INCLUDE_DIRECTORIES)
set(SWITCH_LOOP_INCLUDE ${include_dir} PARENT_SCOPE)
