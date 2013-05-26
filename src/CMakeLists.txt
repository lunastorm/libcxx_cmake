cmake_minimum_required(VERSION 2.8)

include_directories(${PROJECT_SOURCE_DIR}/3rd_party/libcxx/include)
link_directories(${PROJECT_BINARY_DIR}/3rd_party/libcxxrt/lib)
add_definitions("-std=c++11")

add_executable(foo foo.cpp)
target_link_libraries(foo cxx dl)
