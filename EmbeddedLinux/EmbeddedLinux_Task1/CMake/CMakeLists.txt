#minimum required cmake 
cmake_minimum_required(VERSION 3.12)

#project description
project(MyProject VERSION 1.0
		  DESCRIPTION "Calculator project"
		  LANGUAGES C)


#set environment variable" SRC_FILE" to add source files that will be included in libraries"
set (SRC_FILE 	Source/add.c Source/sub.c Source/multiply.c Source/divide.c Source/modulus.c)	
#output built files to build directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Build)
# Set the output directory for libraries
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Library)
# Set the output directory for archives (static libraries)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Library)

#add executable "main_static"	  
add_executable(main_static main.c)
#add executable "main_dynamic"
add_executable(main_dynamic main.c)

#add library "operation_static", contains source files in environment variable "SRC_FILE" 
add_library(operation_static STATIC ${SRC_FILE})
#add library "operation_dynamic", contains source files in environment variable "SRC_FILE" 
add_library(operation_shared SHARED ${SRC_FILE})

#include Include directory to main_static executable
target_include_directories(main_static PRIVATE Include/)
#include Include directory to main_dynamic executable
target_include_directories(main_dynamic PRIVATE Include/)

#Link "operation_static" library to "main_static" executable
target_link_libraries(main_static PUBLIC operation_static)
#Link "operation_dynamic" library to "main_dynamic" executable
target_link_libraries(main_dynamic PUBLIC operation_shared)
