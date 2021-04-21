cmake_minimum_required(VERSION 3.2)

project(HELLO)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -O3")

# include_directories(/opt/local/include)

add_executable(HELLO echo_tcp.cc)
