cmake_minimum_required(VERSION 2.8)

project(OpenBuildit)

if(NOT CMAKE_BUILD_TYPE)
	set(
		CMAKE_BUILD_TYPE Release
		CACHE STRING
		"Choose the type of build, options are: None Debug Release RelWithDebInfo MinSizeRel Coverage."
		FORCE
	)
endif()

add_subdirectory(libs/json)