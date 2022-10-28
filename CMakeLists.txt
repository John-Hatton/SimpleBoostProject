cmake_minimum_required(VERSION 3.21)
project(Boost)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_C_FLAGS --coverage)
set(CMAKE_CXX_FLAGS --coverage)

add_subdirectory(src)
add_subdirectory (test)

SET(CMAKE_INCLUDE_PATH ${CMAKE_INCLUDE_PATH} "C:/dev/sdk/boost_1_80_0")
SET(CMAKE_LIBRARY_PATH ${CMAKE_LIBRARY_PATH} "C:/dev/sdk/boost_1_80_0/lib")
#SET(CMAKE_INCLUDE_PATH ${CMAKE_INCLUDE_PATH} "C:/dev/sdk/googletest/googletest/include")
#SET(CMAKE_LIBRARY_PATH ${CMAKE_LIBRARY_PATH} "C:/dev/sdk/googletest/build/lib/Debug")

FIND_PACKAGE(Boost)
IF (Boost_FOUND)
	    INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIR})
	        ADD_DEFINITIONS( "-DHAS_BOOST" )
	ENDIF()

#include(FetchContent)
#FetchContent_Declare(
#		googletest
#		GIT_REPOSITORY    https://github.com/google/googletest.git
#		GIT_TAG           main
#		SUBBUILD_DIR ${PROJECT_BINARY_DIR}/googletest-subbuild
#		BINARY_DIR ${PROJECT_BINARY_DIR}/googletest-build
#		SOURCE_DIR ${PROJECT_BINARY_DIR}/googletest-src
#)
#
#set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
#
#FetchContent_Populate(
#		googletest
#)
#
#execute_process(COMMAND cmake -S. -B${googletest_BINARY_DIR} WORKING_DIRECTORY ${googletest_SOURCE_DIR})
#execute_process(COMMAND cmake --build . WORKING_DIRECTORY ${googletest_BINARY_DIR})
#
#set(GTEST_LIBRARY ${googletest_BINARY_DIR}/lib/libgtest.a)
#set(GTEST_INCLUDE_DIR ${googletest_SOURCE_DIR}/googletest/include)
#set(GTEST_MAIN_LIBRARY ${googletest_BINARY_DIR}/lib/libgtest_main.a)
#
#find_package(GTest REQUIRED)



# From C343 - Dr. H
#include(FetchContent)
#FetchContent_Declare(
#		googletest
#		URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
#)
#
## For Windows: Prevent overriding the parent project's compiler/linker settings
#set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
#FetchContent_MakeAvailable(googletest)
#
#

#  ********
# Google Test Include, straight from Google.

include(FetchContent)
FetchContent_Declare(
	googletest
	GIT_REPOSITORY https://github.com/google/googletest.git
	GIT_TAG release-1.12.1 # most recent version 9/2022 Check GITHUB!
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# set(Boost_USE_STATIC_LIBS OFF)
# set(Boost_USE_MULTITHREADED ON)
# set(Boost_USE_STATIC_RUNTIME OFF)
# set(Boost_NO_SYSTEM_PATHS TRUE)

# if (Boost_NO_SYSTEM_PATHS)
# 	  set(BOOST_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/../../3p/boost")
# 	    set(BOOST_INCLUDE_DIRS "${BOOST_ROOT}/include")
# 	      set(BOOST_LIBRARY_DIRS "${BOOST_ROOT}/lib")
#       endif (Boost_NO_SYSTEM_PATHS)


#       find_package(Boost COMPONENTS regex date_time system filesystem thread graph program_options) 

#       find_package(Boost REQUIRED regex date_time system filesystem thread graph program_options)
#       find_package(Boost COMPONENTS program_options REQUIRED)

