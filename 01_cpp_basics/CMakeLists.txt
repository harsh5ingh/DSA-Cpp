cmake_minimum_required(VERSION 3.20)
project(Basic)

set(CMAKE_CXX_STANDARD 17)

file(GLOB SOURCES "*.cpp")

foreach(source_file ${SOURCES})
    get_filename_component(file_name ${source_file} NAME_WE)
    add_executable(${file_name} ${source_file})
endforeach()