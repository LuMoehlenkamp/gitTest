cmake_minimum_required(VERSION 3.7.1)

 project(gitTest)

 add_definitions("-std=c++14")

 include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
 conan_basic_setup()

 add_executable(gitTest main.cpp singleton.cpp)
 target_link_libraries(gitTest ${CONAN_LIBS})
