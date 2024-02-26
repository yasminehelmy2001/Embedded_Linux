#set environment variable" SRC_FILE" to add source files that will be included in libraries"
set (SRC_FILE add.c sub.c multiply.c divide.c modulus.c)

#add library "operation_static", contains source files in environment variable "SRC_FILE" 
add_library(operation_static STATIC ${SRC_FILE})

#add library "operation_dynamic", contains source files in environment variable "SRC_FILE" 
add_library(operation_shared SHARED ${SRC_FILE})
