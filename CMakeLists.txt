cmake_minimum_required(VERSION 3.14)
project(untitled7)
set(HW1 ./hw1)

#Include the directories and now your cpp files will recognize your headers
include_directories(${HW1})

set(
        SOURCE_FILES
        main.cpp
        ${HW1}/hw1.h
        ${HW1}/hw1.cpp
)
set(CMAKE_CXX_STANDARD 14)

add_executable(untitled7 ${SOURCE_FILES})