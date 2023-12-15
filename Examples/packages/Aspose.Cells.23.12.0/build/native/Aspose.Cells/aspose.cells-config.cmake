if ("${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" LESS 2.5)
  message(FATAL_ERROR "CMake >= 2.6.0 required")
endif()
cmake_policy(PUSH)
cmake_policy(VERSION 2.6)

add_library(Aspose.Cells SHARED IMPORTED)
set_target_properties(Aspose.Cells PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_CURRENT_LIST_DIR}/include"
)

if (WIN32)
  if (CMAKE_SIZEOF_VOID_P EQUAL "8")
    set(PLATFORM "x86_64")
  else()
    message(FATAL_ERROR "x86 platform is not supported currently.")
  endif()

  set(LIB_PATH "${CMAKE_CURRENT_LIST_DIR}/lib/win_${PLATFORM}/Aspose.Cells.lib")
  set(ASPOSE_CELLS_DLL_PATH "${CMAKE_CURRENT_LIST_DIR}/lib/win_${PLATFORM}/Aspose.Cells.dll")
  set_target_properties(Aspose.Cells PROPERTIES
    IMPORTED_CONFIGURATIONS "DEBUG;RELEASE;RELWITHDEBINFO"
    IMPORTED_LOCATION_DEBUG ${ASPOSE_CELLS_DLL_PATH}
    IMPORTED_IMPLIB_DEBUG ${LIB_PATH}
    IMPORTED_LOCATION_RELEASE ${ASPOSE_CELLS_DLL_PATH}
    IMPORTED_IMPLIB_RELEASE ${LIB_PATH}
    IMPORTED_LOCATION_RELWITHDEBINFO ${ASPOSE_CELLS_DLL_PATH}
    IMPORTED_IMPLIB_RELWITHDEBINFO ${LIB_PATH}
  )
  set(LIB_PATH)
endif()

if (UNIX AND NOT APPLE)
  set(PLATFORM "x86_64")
  EXECUTE_PROCESS(COMMAND uname -m OUTPUT_VARIABLE ARCH)
  if ("${ARCH}" MATCHES "aarch64")
    set(PLATFORM "aarch64")
  elseif (CMAKE_CROSSCOMPILING AND "${CMAKE_SYSTEM_PROCESSOR}" MATCHES "aarch64")
    set(PLATFORM "aarch64")
  endif()
  unset(ARCH)

  set_target_properties(Aspose.Cells PROPERTIES
    IMPORTED_LOCATION "${CMAKE_CURRENT_LIST_DIR}/lib/linux_${PLATFORM}/libAspose.Cells.so"
    IMPORTED_SONAME "libAspose.Cells.so"
  )
endif()

if (APPLE)
  set(PLATFORM "x86_64")
  if ("${CMAKE_OSX_ARCHITECTURES}" MATCHES "arm64")
    set(PLATFORM "arm64")
  else()
    EXECUTE_PROCESS(COMMAND uname -m OUTPUT_VARIABLE ARCH)
    if ("${ARCH}" MATCHES "arm64")
      set(PLATFORM "arm64")
    endif()
    unset(ARCH)
  endif()

  set_target_properties(Aspose.Cells PROPERTIES
    IMPORTED_LOCATION "${CMAKE_CURRENT_LIST_DIR}/lib/macos_${PLATFORM}/libAspose.Cells.dylib"
    IMPORTED_SONAME "@rpath/libAspose.Cells.dylib"
  )
endif()

unset(PLATFORM)

cmake_policy(POP)
