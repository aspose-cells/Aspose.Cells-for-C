cmake_minimum_required(VERSION 3.16)

project("example")

set(CMAKE_CXX_STANDARD 17)

find_package(Aspose.Cells REQUIRED CONFIG PATHS ${CMAKE_CURRENT_SOURCE_DIR}/.. NO_DEFAULT_PATH)

set(SRC_ROOT "${CMAKE_CURRENT_SOURCE_DIR}")
include_directories("${SRC_ROOT}/src")

file(GLOB_RECURSE SOURCE "${SRC_ROOT}/src/*.cpp")
add_executable(${PROJECT_NAME} ${SOURCE})
target_link_libraries(${PROJECT_NAME} Aspose.Cells)

if (WIN32)
	add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
		COMMAND ${CMAKE_COMMAND} -E copy_if_different "${ASPOSE_CELLS_DLL_PATH}" $<TARGET_FILE_DIR:${PROJECT_NAME}>
	)
endif()
