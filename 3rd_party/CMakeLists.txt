add_subdirectory(libcxxrt)
link_directories(${CMAKE_CURRENT_BINARY_DIR}/libcxxrt/lib)

set(LIBCXX_CXX_ABI libcxxrt)
set(LIBCXX_LIBCXXRT_INCLUDE_PATHS ${CMAKE_CURRENT_SOURCE_DIR}/libcxxrt/src)
add_subdirectory(libcxx)
