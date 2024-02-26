#minimum required cmake 
cmake_minimum_required(VERSION 3.12)

#project description
project(MyProject VERSION 1.0
		  DESCRIPTION "Calculator project"
		  LANGUAGES C)	

add_subdirectory(${CMAKE_HOME_DIRECTORY}/Library)

#add executable "main_static"	  
add_executable(main_static main.c)
#add executable "main_dynamic"
add_executable(main_dynamic main.c)

#include Include directory to main_static executable
target_include_directories(main_static PRIVATE Include/)
#include Include directory to main_dynamic executable
target_include_directories(main_dynamic PRIVATE Include/)

#Link "operation_static" library to "main_static" executable
target_link_libraries(main_static PUBLIC operation_static)
#Link "operation_dynamic" library to "main_dynamic" executable
target_link_libraries(main_dynamic PUBLIC operation_shared)
