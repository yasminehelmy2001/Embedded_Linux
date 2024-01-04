cmake_minimum_required(VERSION 3.12)

project(MyProject VERSION 1.0
		  DESCRIPTION "Calculator project"
		  LANGUAGES C)


set (SRC_FILE 	Source/add.c Source/sub.c Source/multiply.c Source/divide.c Source/modulus.c)	

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Build)

# Set the output directory for libraries
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Library)

# Set the output directory for archives (static libraries)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Library)
	  
add_executable(main_static main.c)
add_executable(main_dynamic main.c)

add_library(liboperation_static STATIC ${SRC_FILE})
add_library(liboperation_shared SHARED ${SRC_FILE})

target_include_directories(main_static PRIVATE Include/)
target_include_directories(main_dynamic PRIVATE Include/)
target_include_directories(main_static PRIVATE Library/)
target_include_directories(main_dynamic PRIVATE Library/)

target_link_libraries(main_static PUBLIC liboperation_static)
target_link_libraries(main_dynamic PUBLIC liboperation_shared)
