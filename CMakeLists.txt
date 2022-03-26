cmake_minimum_required(VERSION 3.14)
project(untitled7)
set(HW1 ./hw1)
set(HW2 ./hw2)

#Include the directories and now your cpp files will recognize your headers
include_directories(${HW1})
include_directories(${HW2})
include_directories(./hw3)

set(
        SOURCE_FILES
        main.cpp
        ${HW1}/hw1.h
        ${HW1}/hw1.cpp
        ${HW2}/hw2.h
        ${HW2}/hw2.cpp
        hw3/hw3.cpp hw3/hw3.h)
set(CMAKE_CXX_STANDARD 14)

add_executable(untitled7 ${SOURCE_FILES})