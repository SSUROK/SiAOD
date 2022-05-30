cmake_minimum_required(VERSION 3.14)
project(untitled7)
set(HW1 ./hw1)
set(HW2 ./hw2)

#Include the directories and now your cpp files will recognize your headers
include_directories(${HW1})
include_directories(${HW2})
include_directories(./hw3)
include_directories(./hw4)
include_directories(./hw5)
include_directories(./hw6)
include_directories(./hw7)
include_directories(./hw8)
include_directories(./common)

set(
        SOURCE_FILES
        main.cpp
        ${HW1}/hw1.h
        ${HW1}/hw1.cpp
        ${HW2}/hw2.h
        ${HW2}/hw2.cpp
        hw3/hw3.cpp hw3/hw3.h hw4/hw4.cpp hw4/hw4.h common/Arrays.cpp common/Arrays.h hw5/hw5.cpp hw5/hw5.h hw5/bohr.cpp hw5/bohr.h hw6/hw6.cpp hw6/hw6.h hw7/hw7.cpp hw7/hw7.h hw7/variantOperatons.cpp hw7/variantOperatons.h hw8/Calculator.cpp hw8/Calculator.h hw8/stekOnArray.cpp hw8/stekOnArray.h hw8/stekOnVector.cpp hw8/stekOnVector.h)
set(CMAKE_CXX_STANDARD 14)

add_executable(untitled7 ${SOURCE_FILES})