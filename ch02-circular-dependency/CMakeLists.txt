cmake_minimum_required(VERSION 3.5)

project(ch02-circular-dependency LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(HEADERS a.h b.h)
set(SOURCES main.cpp a.cpp b.cpp)

add_executable(ch02-circular-dependency ${SOURCES} ${HEADERS})

install(TARGETS ch02-circular-dependency
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
