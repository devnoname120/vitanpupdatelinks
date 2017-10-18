cmake_minimum_required(VERSION 2.8.1)

set(PROJECT_NAME vitanpupdatelinks)
project(${PROJECT_NAME})

set(SOURCES
	sha256.c
	sha256-internal.c
	main.c
) 

add_executable(${PROJECT_NAME} ${SOURCES})
