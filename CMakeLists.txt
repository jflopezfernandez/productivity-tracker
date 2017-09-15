CMAKE_MINIMUM_REQUIRED (VERSION 3.8.1)
PROJECT (Mastery)

SET (CMAKE_C_STANDARD 99)

SET (SOURCE_FILES main.c includes/stdlib.h includes/stdlib/string.h includes/stdlib/time.h time.c includes/numeric.h includes/stdlib/stdint.h includes/io.h includes/error.h)
ADD_EXECUTABLE (Mastery ${SOURCE_FILES})