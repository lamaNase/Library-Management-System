cmake_minimum_required(VERSION 3.10)

# Project name
project(LibraryManagement)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(${PROJECT_SOURCE_DIR})

# Source files
set(SOURCES
    main.cpp
    library.cpp
    book.cpp
    fiction.cpp
    history.cpp
    book_factory.cpp
    user.cpp
)

# Add executable
add_executable(LibraryManagement ${SOURCES})

