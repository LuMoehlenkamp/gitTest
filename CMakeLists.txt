cmake_minimum_required(VERSION 2.8.12)
 project(gitTest)

 add_definitions("-std=c++11")

 include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
 conan_basic_setup()

 add_executable(gitTest main.cpp)
 target_link_libraries(gitTest ${CONAN_LIBS})
