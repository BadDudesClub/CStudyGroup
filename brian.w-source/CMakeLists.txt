cmake_minimum_required(VERSION 3.3)
project(NQueens)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "~/C_Output")
set(SOURCE_DIRECTORY "~/source/CStudyGroup/")


include_directories(BEFORE ${SOURCE_DIRECTORY}/brian.w-source/include/)
include_directories(BEFORE ${SOURCE_DIRECTORY}/common/include/)
set(SOURCE_FILES "~/source/CStudyGroup/brian.w-source/board.c")
set(SOURCE_FILES "~/source/CStudyGroup/brian.w-source/board_tests.c")

add_executable(NQueens ${SOURCE_FILES})

#This creates a comment